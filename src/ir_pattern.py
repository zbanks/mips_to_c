import abc
from collections import defaultdict
from dataclasses import dataclass, field
from typing import (
    Callable,
    ClassVar,
    DefaultDict,
    Dict,
    List,
    Optional,
    Set,
    Tuple,
    Type,
    Union,
)

from .flow_graph import (
    ArchFlowGraph,
    BaseNode,
    FlowGraph,
    Instruction,
    InstrRef,
    Node,
    TerminalNode,
    build_flowgraph,
)
from .parse_file import AsmData, Function
from .parse_instruction import (
    Argument,
    AsmAddressMode,
    AsmLiteral,
    Instruction,
    InstructionMeta,
    Register,
    parse_instruction,
)


@dataclass(eq=False, frozen=True)
class IrPattern(abc.ABC):
    parts: ClassVar[List[str]]
    replacement: ClassVar[str]

    flow_graph: FlowGraph
    replacement_instr: Instruction

    @classmethod
    def compile(cls, arch: ArchFlowGraph) -> "IrPattern":
        replacement_instr = parse_instruction(
            cls.replacement, InstructionMeta.missing(), arch
        )
        prologue = Instruction(
            "nop", [], meta=InstructionMeta.missing(), outputs=replacement_instr.inputs
        )
        epilogue = Instruction(
            "nop", [], meta=InstructionMeta.missing(), inputs=replacement_instr.outputs
        )

        name = f"__{cls.__name__}"
        func = Function(name=name)
        func.new_instruction(prologue)
        for part in cls.parts:
            instr = parse_instruction(part, InstructionMeta.missing(), arch)
            func.new_instruction(instr)
        func.new_instruction(epilogue)

        asm_data = AsmData()
        flow_graph = build_flowgraph(func, asm_data, arch, fragment=True)
        return IrPattern(
            flow_graph=flow_graph,
            replacement_instr=replacement_instr,
        )


def print_arg_flow(flow: FlowGraph) -> None:
    for addr, inputs in flow.instr_inputs.items():
        outputs = flow.instr_outputs[addr]
        instr = addr.instruction()
        assert instr is not None
        print(
            f">>> {addr} {str(instr):40} {[str(k) for k in instr.inputs]} --> {[str(k) for k in instr.outputs]}"
        )
        print(f" i> {[(str(k), str(v)) for k, v in inputs.refs.items()]}")
        print(f" o> {[(str(k), str(v)) for k, v in outputs.refs.items()]}")


def simplify_ir_patterns(
    arch: ArchFlowGraph, flow_graph: FlowGraph, pattern_classes: List[Type[IrPattern]]
) -> None:
    patterns = [p.compile(arch) for p in pattern_classes]

    refs_by_mnemonic = defaultdict(list)
    for node in flow_graph.nodes:
        for i, instr in enumerate(node.block.instructions):
            ref = InstrRef(node, i)
            refs_by_mnemonic[instr.mnemonic].append(ref)


"""
    flow = build_arg_flow(flow_graph, arch)


    for pattern in patterns:
        # print(pattern.__class__.__name__)
        # print_arg_flow(pattern.arg_flow)
        assert (
            len(pattern.flow_graph.nodes) == 2
        ), "branching patterns not supported yet"
        assert isinstance(pattern.flow_graph.nodes[0], BaseNode)
        assert isinstance(pattern.flow_graph.nodes[1], TerminalNode)
        pattern_node = pattern.flow_graph.nodes[0]
        matches: List[
            Tuple[Dict[Argument, Argument], Dict[InstrRef, InstrRef], List[InstrRef]]
        ] = [({}, {}, [])]
        for i, ir in enumerate(pattern_node.block.instructions):
            ir_addr = InstrRef(pattern_node, i)
            a_info = pattern.arg_flow.instr_flows[ir_addr]
            # print(f"> NEXT {ir_addr} :: {len(matches)}; {ir}")
            # for arg, aas in a_info.inputs.args.items():
            #    print(f"> expect {arg} ~ {aas}")
            next_matches = matches[:0]
            for mapping, addrmap, match in matches:
                if ir.mnemonic in ("inputs", "outputs"):
                    mp = mapping.copy()
                    ap = addrmap.copy()
                    next_matches.append((mp, ap, match))
                    continue
                if ir.mnemonic not in flow.mnemonics:
                    break
                candidates = flow.mnemonics[ir.mnemonic]
                for addr in candidates:
                    instr = addr.instruction()
                    assert instr is not None
                    if (
                        len(ir.args) != len(instr.args)
                        or len(ir.inputs) != len(instr.inputs)
                        or len(ir.outputs) != len(instr.outputs)
                    ):
                        continue
                    mp = mapping.copy()
                    ok = True
                    for a, b in zip(
                        ir.args + ir.inputs + ir.outputs,
                        instr.args + instr.inputs + instr.outputs,
                    ):
                        if a in mp and mp[a] != b:
                            # print(f"    candidate: {addr}: {instr} ~ {ir}; {mp[a]} ({a}) != {b}")
                            ok = False
                            break
                        if isinstance(a, AsmLiteral) and a != b:
                            # print(f"    candidate: {addr}: {instr} ~ {ir}; {a} != {b}")
                            ok = False
                            break
                        mp[a] = b
                    if not ok:
                        continue
                    b_info = flow.instr_flows[addr]
                    ap = addrmap.copy()
                    ap[ir_addr] = addr
                    for arg, aas in a_info.inputs.args.items():
                        if not isinstance(arg, Register):
                            continue
                        barg = mp[arg]
                        if barg not in b_info.inputs.args:
                            # print(f"{barg} ({arg}) isn't in {instr}")
                            ok = False
                            break
                        bas = b_info.inputs.args[barg]
                        if not bas.is_unique():
                            # print(f"phi for {bas} on {instr}")
                            ok = False
                            break
                        bx = bas.refs[0]
                        assert aas.is_unique(), aas
                        ax = aas.refs[0]
                        assert isinstance(ax, InstrRef)
                        assert isinstance(bx, InstrRef)
                        if ax in ap and ap[ax] != bx:
                            # print(f"expected {barg} ({arg}) to map to {ap[a]} not {b}")
                            ok = False
                            break
                        ap[ax] = bx
                        # print(f">{a} = {b}; {arg} ~ {barg}")

                    if not ok:
                        continue

                    next_matches.append((mp, ap, match + [addr]))
                    if False:
                        print(f"> candidate for {ir}: {instr} ({str(addr)});")
                        if instr.mnemonic == "mfhi" or True:
                            print("-- mp --")
                            for k, v in mp.items():
                                print(f"> {k} = {v}")
                            print("-- ap --")
                            for k, v in ap.items():
                                print(f"> {k} = {v}")
            matches = next_matches
        for mapping, ap, match in matches:
            new_args = []
            for arg in pattern.replacement_instr.args:
                new_args.append(mapping.get(arg, arg))
            replace = match[-1]
            replace_instruction = replace.instruction()
            assert replace_instruction is not None
            new_instr = arch.parse(
                pattern.replacement_instr.mnemonic, new_args, replace_instruction.meta
            )
            nop_instr = arch.parse("nop", [], InstructionMeta.missing())
            for addr in match:
                refs = []
                for arg, argrefs in flow.instr_flows[addr].references.args.items():
                    for ref in argrefs.refs:
                        refs.append(ref)
                print(f">> {addr}: {addr.instruction()}; refs={refs}")
                addr_instr = addr.instruction()
                assert addr_instr is not None
                for o in addr_instr.outputs:
                    if o not in new_instr.args and o not in new_instr.clobbers:
                        new_instr.clobbers.append(o)
                addr.replace_instruction(nop_instr)
            # TODO: Calculate clobbers
            replace.replace_instruction(new_instr)
            print(f"<< {new_instr}; clobbers={new_instr.clobbers}")
            print()

        # for loc in locs:
        #    node, i = loc
        #    assert node is not None
        #    instr = node.block.instructions[i]
"""
