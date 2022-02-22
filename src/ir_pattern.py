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
    TypeVar,
    Union,
)

from .flow_graph import (
    AccessRefs,
    ArchFlowGraph,
    BaseNode,
    FlowGraph,
    Instruction,
    InstrRef,
    RefList,
    Node,
    TerminalNode,
    build_flowgraph,
)
from .parse_file import AsmData, Function
from .parse_instruction import (
    Access,
    Argument,
    AsmAddressMode,
    AsmGlobalSymbol,
    AsmInstruction,
    AsmLiteral,
    BinOp,
    Instruction,
    InstructionMeta,
    JumpTarget,
    MemoryAccess,
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

    def check(self, m: "TryMatchState") -> bool:
        return True


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


@dataclass
class TryMatchState:
    symbolic_registers: Dict[str, Register] = field(default_factory=dict)
    symbolic_labels: Dict[str, str] = field(default_factory=dict)
    symbolic_literals: Dict[str, int] = field(default_factory=dict)
    ref_map: Dict[InstrRef, InstrRef] = field(default_factory=dict)

    T = TypeVar("T")

    def copy(self) -> "TryMatchState":
        return TryMatchState(
            symbolic_registers=self.symbolic_registers.copy(),
            symbolic_labels=self.symbolic_labels.copy(),
            symbolic_literals=self.symbolic_literals.copy(),
            ref_map=self.ref_map.copy(),
        )

    def match_var(self, var_map: Dict[str, T], key: str, value: T) -> bool:
        if key in var_map:
            if var_map[key] != value:
                return False
        else:
            var_map[key] = value
        return True

    def match_reg(self, actual: Register, exp: Register) -> bool:
        if len(exp.register_name) <= 1:
            return self.match_var(self.symbolic_registers, exp.register_name, actual)
        else:
            return exp.register_name == actual.register_name

    def eval_math(self, e: Argument) -> int:
        if isinstance(e, AsmLiteral):
            return e.value
        if isinstance(e, BinOp):
            if e.op == "+":
                return self.eval_math(e.lhs) + self.eval_math(e.rhs)
            if e.op == "-":
                return self.eval_math(e.lhs) - self.eval_math(e.rhs)
            if e.op == "<<":
                return self.eval_math(e.lhs) << self.eval_math(e.rhs)
            assert False, f"bad binop in math pattern: {e}"
        elif isinstance(e, AsmGlobalSymbol):
            assert (
                e.symbol_name in self.symbolic_literals
            ), f"undefined variable in math pattern: {e.symbol_name}"
            return self.symbolic_literals[e.symbol_name]
        else:
            assert False, f"bad pattern part in math pattern: {e}"

    def map_arg(self, key: Argument) -> Argument:
        if isinstance(key, AsmLiteral):
            return key
        if isinstance(key, Register):
            if len(key.register_name) <= 1:
                return self.symbolic_registers[key.register_name]
            return key
        if isinstance(key, AsmGlobalSymbol):
            if key.symbol_name.isupper():
                return AsmLiteral(self.symbolic_literals[key.symbol_name])
            return key
        if isinstance(key, AsmAddressMode):
            rhs = self.map_arg(key.rhs)
            assert isinstance(rhs, Register)
            return AsmAddressMode(lhs=self.map_arg(key.lhs), rhs=rhs)
        if isinstance(key, JumpTarget):
            return JumpTarget(self.symbolic_labels[key.target])
        if isinstance(key, BinOp):
            return AsmLiteral(self.eval_math(key))
        assert False, f"bad pattern part: {key}"

    def match_arg(self, a: Argument, e: Argument) -> bool:
        if isinstance(e, AsmLiteral):
            return isinstance(a, AsmLiteral) and a.value == e.value
        if isinstance(e, Register):
            return isinstance(a, Register) and self.match_reg(a, e)
        if isinstance(e, AsmGlobalSymbol):
            if e.symbol_name.isupper():
                return isinstance(a, AsmLiteral) and self.match_var(
                    self.symbolic_literals, e.symbol_name, a.value
                )
            else:
                return isinstance(a, AsmGlobalSymbol) and a.symbol_name == e.symbol_name
        if isinstance(e, AsmAddressMode):
            return (
                isinstance(a, AsmAddressMode)
                and self.match_arg(a.lhs, e.lhs)  # diff; vs ==
                and self.match_reg(a.rhs, e.rhs)
            )
        if isinstance(e, JumpTarget):
            return isinstance(a, JumpTarget) and self.match_var(
                self.symbolic_labels, e.target, a.target
            )
        if isinstance(e, BinOp):
            return isinstance(a, AsmLiteral) and a.value == self.eval_math(e)
        assert False, f"bad pattern part: {e}"

    def match_access(self, a: Access, e: Access) -> bool:
        if isinstance(e, Register):
            return isinstance(a, Register) and self.match_reg(a, e)
        if isinstance(e, MemoryAccess):
            return (
                isinstance(a, MemoryAccess)
                and a.size == e.size
                and self.match_reg(a.base_reg, e.base_reg)
                and self.match_arg(a.offset, e.offset)
            )
        assert False, f"bad access: {e}"

    def match_one(self, ins: Instruction, exp: Instruction) -> bool:
        if (
            ins.mnemonic != exp.mnemonic
            or len(ins.args) != len(ins.args)
            or len(ins.inputs) != len(ins.inputs)
            or len(ins.outputs) != len(ins.outputs)
        ):
            return False
        for (a_arg, e_arg) in zip(ins.args, exp.args):
            if not self.match_arg(a_arg, e_arg):
                return False
        for (a_acc, e_acc) in zip(ins.inputs, exp.inputs):
            if not self.match_access(a_acc, e_acc):
                return False
        for (a_acc, e_acc) in zip(ins.outputs, exp.outputs):
            if not self.match_access(a_acc, e_acc):
                return False
        # TODO: What about clobbers
        return True

    def match_ref(self, key: InstrRef, value: InstrRef) -> bool:
        # TODO: This is backwards
        existing_value = self.ref_map.get(key)
        if existing_value is not None:
            return existing_value == value
        self.ref_map[key] = value
        return True

    def match_refs(self, key: RefList, value: RefList) -> bool:
        # TODO: This is backwards
        # TODO: Do full Cartesian product if they are not unique?
        if not (key.is_unique() and value.is_unique()):
            return False
        actual = key.refs[0]
        expected = value.refs[0]
        if isinstance(actual, str) or isinstance(expected, str):
            return actual == expected
        return self.match_ref(actual, expected)

    def match_accesses(self, exp: AccessRefs, act: AccessRefs) -> bool:
        # TODO: This is backwards
        for exp_reg, exp_refs in exp.refs.items():
            if not isinstance(exp_reg, Register):
                continue
            assert (
                exp_refs.is_unique()
            ), f"pattern {exp_reg} does not have a unique source ref ({exp_refs})"
            mapped_reg = self.map_arg(exp_reg)
            assert isinstance(mapped_reg, Register)
            act_refs = act.get(mapped_reg)
            if not self.match_refs(exp_refs, act_refs):
                return False
        return True


def simplify_ir_patterns(
    arch: ArchFlowGraph, flow_graph: FlowGraph, pattern_classes: List[Type[IrPattern]]
) -> None:
    # Precompute a RefList for each mnemonic
    refs_by_mnemonic = defaultdict(list)
    for node in flow_graph.nodes:
        for i, instr in enumerate(node.block.instructions):
            ref = InstrRef(node, i)
            refs_by_mnemonic[instr.mnemonic].append(ref)

    def replace_instr(ref: InstrRef, new_asm: AsmInstruction, final: bool) -> None:
        # Remove ref from all instr_references
        # TODO: can this be made faster? 
        instr = ref.instruction()
        for rs in flow_graph.instr_inputs[ref].refs.values():
            for r in rs.refs:
                if isinstance(r, InstrRef):
                    flow_graph.instr_references[r].remove_ref(ref)

        # Check if we are allowed to replace the instruction
        xs = flow_graph.instr_references[ref]
        if not (final or flow_graph.instr_references[ref].is_empty()):
            return

        # Parse the asm & set the clobbers
        new_instr = arch.parse(new_asm.mnemonic, new_asm.args, instr.meta.derived())
        new_instr.clobbers.extend(
            acc for acc in instr.outputs if acc not in new_instr.outputs
        )
        new_instr.clobbers.extend(
            acc for acc in instr.clobbers if acc not in new_instr.clobbers
        )

        # Replace the instruction in the block
        ref.node.block.instructions[ref.index] = new_instr

    for pattern_class in pattern_classes:
        pattern = pattern_class.compile(arch)
        assert (
            len(pattern.flow_graph.nodes) == 2
        ), "branching patterns not yet supported"
        assert isinstance(pattern.flow_graph.nodes[0], BaseNode)
        assert isinstance(pattern.flow_graph.nodes[1], TerminalNode)
        pattern_node = pattern.flow_graph.nodes[0]

        partial_matches = [TryMatchState()]
        for i, pat in enumerate(pattern_node.block.instructions):
            if pat.mnemonic == "nop":
                continue
            if pat.mnemonic not in refs_by_mnemonic:
                partial_matches = []
                break

            pat_ref = InstrRef(pattern_node, i)
            pat_inputs = pattern.flow_graph.instr_inputs[pat_ref]
            candidate_refs = refs_by_mnemonic[pat.mnemonic]

            next_partial_matches = []
            for prev_state in partial_matches:
                for ref in candidate_refs:
                    instr = ref.instruction()
                    assert instr is not None
                    state = prev_state.copy()
                    if not state.match_ref(pat_ref, ref):
                        continue
                    if not state.match_one(instr, pat):
                        continue
                    if not state.match_accesses(
                        pat_inputs, flow_graph.instr_inputs[ref]
                    ):
                        continue
                    next_partial_matches.append(state)
            partial_matches = next_partial_matches
        print(f"> found {len(partial_matches)} matches for {pattern_class.__name__}")
        last = True
        for n, state in enumerate(partial_matches):
            if not pattern.check(state):
                continue
            print(f">>> Match #{n}")
            #for i, pat in reversed(list(enumerate(pattern_node.block.instructions))):
            for i, pat in enumerate(pattern_node.block.instructions):
                if pat.mnemonic == "nop":
                    continue
                pat_ref = InstrRef(pattern_node, i)
                pat_instr = pat_ref.instruction()
                ins_ref = state.ref_map[pat_ref]
                refs = flow_graph.instr_references[ins_ref]
                print(
                        f"> map {str(ins_ref):12} {str(pat_ref.instruction()):>20}  <>  {str(ins_ref.instruction()):24} refs: {refs}"
                )
                continue
                if last:
                    new_instr = AsmInstruction(pattern.replacement_instr.mnemonic, [state.map_arg(a) for a in pattern.replacement_instr.args])
                else:
                    new_instr = AsmInstruction("nop", [])
                replace_instr(ins_ref, new_instr, last)
                last = False


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
