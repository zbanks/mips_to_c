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
    Node,
    TerminalNode,
    build_flowgraph,
)
from .parse_file import AsmData, Function
from .parse_instruction import (
    ArchAsm,
    Argument,
    AsmAddressMode,
    AsmGlobalSymbol,
    AsmLiteral,
    BinOp,
    Instruction,
    InstructionMeta,
    JumpTarget,
    NaiveParsingArch,
    Register,
    current_instr,
    parse_instruction,
)


@dataclass(frozen=True)
class InstrRef:
    node: Optional[Node]
    index: int
    name: Optional[str] = None

    @staticmethod
    def special(name: str) -> "InstrRef":
        return InstrRef(node=None, index=0, name=name)

    def instruction(self) -> Optional["Instruction"]:
        if self.node is None:
            return None
        return self.node.block.instructions[self.index]

    def replace_ir(self, ir: Instruction) -> None:
        if self.node is None:
            return
        self.node.block.instructions[self.index] = ir

    def __str__(self) -> str:
        if self.node is None:
            assert self.name is not None
            return self.name
        return f"{self.node.block.index}.{self.index}"


@dataclass
class InstrRefList:
    addrs: List[InstrRef]

    @staticmethod
    def invalid() -> "InstrRefList":
        return InstrRefList(addrs=[])

    @staticmethod
    def special(name: str) -> "InstrRefList":
        return InstrRefList(addrs=[InstrRef(node=None, index=0, name=name)])

    def is_valid(self) -> bool:
        return bool(self.addrs)

    def is_unique(self) -> bool:
        return len(self.addrs) == 1

    def copy(self) -> "InstrRefList":
        return InstrRefList(self.addrs[:])

    def __str__(self) -> str:
        if not self.addrs:
            return "none"
        return "[" + ", ".join(str(a) for a in self.addrs) + "]"


@dataclass
class IrArgumentInfo:
    args: Dict[Argument, InstrRefList] = field(default_factory=dict)

    @staticmethod
    def initial_function_args(arch: ArchFlowGraph) -> "IrArgumentInfo":
        info = IrArgumentInfo()
        for i, r in enumerate(arch.argument_regs):
            info.args[r] = InstrRefList.special(f"arg_{i}")
        info.args[Register("zero")] = InstrRefList.special(f"zero")
        info.args[Register("ra")] = InstrRefList.special(f"return")

        return info

    def add(self, arg: Argument, addr: InstrRef) -> None:
        if arg not in self.args:
            self.args[arg] = InstrRefList([addr])
        elif addr not in self.args[arg].addrs:
            self.args[arg].addrs.append(addr)

    def copy(self) -> "IrArgumentInfo":
        return IrArgumentInfo(args=self.args.copy())

    def get(self, arg: Argument) -> InstrRefList:
        srcs = self.args.get(arg)
        if srcs is not None:
            return srcs
        return InstrRefList.invalid()


@dataclass
class IrArgumentFlow:
    inputs: IrArgumentInfo = field(default_factory=IrArgumentInfo)
    outputs: IrArgumentInfo = field(default_factory=IrArgumentInfo)
    references: IrArgumentInfo = field(default_factory=IrArgumentInfo)


@dataclass
class ArgFlow:
    mnemonics: DefaultDict[str, List[InstrRef]] = field(
        default_factory=lambda: defaultdict(list)
    )
    ir_infos: Dict[InstrRef, IrArgumentFlow] = field(default_factory=dict)
    phis: Dict[Node, IrArgumentInfo] = field(default_factory=dict)


def reg_always_set(node: Node, arg: Argument, *, dom_set: InstrRefList) -> InstrRefList:
    if node.immediate_dominator is None:
        return InstrRefList.invalid()
    seen = {node.immediate_dominator}
    stack = node.parents[:]
    sources = dom_set.copy()

    while stack:
        n = stack.pop()
        if n == node.immediate_dominator and not dom_set:
            return InstrRefList.invalid()
        if n in seen:
            continue
        seen.add(n)
        clobbered: Optional[bool] = None
        for i, instr in enumerate(n.block.instructions):
            with current_instr(instr):
                if arg in instr.outputs:
                    if clobbered is None:
                        sources.addrs.append(InstrRef(n, i))
                    clobbered = False
                elif arg in instr.clobbers:
                    clobbered = True
        if clobbered == True:
            return InstrRefList.invalid()
        if clobbered is None:
            stack.extend(n.parents)
    return sources


def regs_clobbered_until_dominator(node: Node) -> Set[Argument]:
    if node.immediate_dominator is None:
        return set()
    seen = {node.immediate_dominator}
    stack = node.parents[:]
    clobbered = set()
    while stack:
        n = stack.pop()
        if n in seen:
            continue
        seen.add(n)
        for instr in n.block.instructions:
            with current_instr(instr):
                clobbered.update(instr.outputs)
                clobbered.update(instr.clobbers)
        stack.extend(n.parents)
    return clobbered


def build_arg_flow(flow_graph: FlowGraph, arch: ArchFlowGraph) -> ArgFlow:
    flow = ArgFlow()

    def fill_node_outputs(node: Node, node_info: IrArgumentInfo) -> None:
        # Calculate register usage for each instruction in this node
        for i, ir in enumerate(node.block.instructions):
            addr = InstrRef(node, i)
            info = IrArgumentFlow()
            flow.ir_infos[addr] = info
            flow.mnemonics[ir.mnemonic].append(addr)

            for arg in ir.inputs:
                srcs = node_info.get(arg)
                if not srcs.is_valid():
                    # NB: this is potentially an error?
                    # print(f"missing reg at {addr}: {arg}")
                    pass
                info.inputs.args[arg] = srcs

            for arg in ir.clobbers:
                if arg in info.outputs.args:
                    info.outputs.args[arg] = InstrRefList.invalid()

            for arg in ir.outputs:
                info.outputs.args[arg] = InstrRefList([addr])

            node_info.args.update(info.outputs.args)

        # Translate everything dominated by this node, now that we know our own
        # final register flow. This will eventually reach every node.
        for child in node.immediately_dominates:
            new_info = node_info.copy()

            child_phis = IrArgumentInfo()
            phi_args = regs_clobbered_until_dominator(child)

            for arg in phi_args:
                set_locs = reg_always_set(child, arg, dom_set=node_info.get(arg))
                # If set_locs is invalid, then the arg is inconsistently set, so it should
                # not be used by the child node.
                # Otherwise, it *is* set in every control flow path to the child node, so
                # it can be used (but it will have a phi value)
                new_info.args[arg] = set_locs
                # print(f"> {child!r}: {arg} = {set_locs}")
                child_phis.args[arg] = set_locs
                if set_locs.is_valid() and False:
                    print(
                        arg,
                        node.block.index,
                        child.block.index,
                        str(set_locs),
                    )
            flow.phis[child] = child_phis
            fill_node_outputs(child, new_info)

    # Recursively populate inputs & outputs for each instruction
    entry_node = flow_graph.entry_node()
    flow.phis[entry_node] = IrArgumentInfo()
    fill_node_outputs(entry_node, IrArgumentInfo.initial_function_args(arch))

    # Fill in references for each instruction
    for addr, info in flow.ir_infos.items():
        for arg, deps in info.inputs.args.items():
            for dep in deps.addrs:
                if dep.node:
                    flow.ir_infos[dep].references.add(arg, addr)

    return flow


@dataclass(eq=False, frozen=True)
class IrPattern(abc.ABC):
    parts: ClassVar[List[str]]
    replacement: ClassVar[str]

    flow_graph: FlowGraph
    arg_flow: ArgFlow
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
        arg_flow = build_arg_flow(flow_graph, arch)
        return IrPattern(
            flow_graph=flow_graph,
            arg_flow=arg_flow,
            replacement_instr=replacement_instr,
        )


def print_arg_flow(flow: ArgFlow) -> None:
    for addr, info in flow.ir_infos.items():
        instr = addr.instruction()
        assert instr is not None
        print(
            f">>> {addr} {str(instr):40} {[str(k) for k in instr.inputs]} --> {[str(k) for k in instr.outputs]}"
        )
        print(f" i> {[(str(k), str(v)) for k, v in info.inputs.args.items()]}")
        print(f" o> {[(str(k), str(v)) for k, v in info.outputs.args.items()]}")


def simplify_ir_patterns(
    arch: ArchFlowGraph, flow_graph: FlowGraph, pattern_classes: List[Type[IrPattern]]
) -> None:
    patterns = [p.compile(arch) for p in pattern_classes]
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
            a_info = pattern.arg_flow.ir_infos[ir_addr]
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
                    b_info = flow.ir_infos[addr]
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
                        bx = bas.addrs[0]
                        assert aas.is_unique(), aas
                        ax = aas.addrs[0]
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
            replace_instr = replace.instruction()
            assert replace_instr is not None
            new_instr = arch.parse(
                pattern.replacement_instr.mnemonic, new_args, replace_instr.meta
            )
            nop_instr = arch.parse("nop", [], InstructionMeta.missing())
            for addr in match:
                refs = []
                for arg, argrefs in flow.ir_infos[addr].references.args.items():
                    for ref in argrefs.addrs:
                        refs.append(ref)
                print(f">> {addr}: {addr.instruction()}; refs={refs}")
                addr_instr = addr.instruction()
                assert addr_instr is not None
                for o in addr_instr.outputs:
                    if o not in new_instr.args and o not in new_instr.clobbers:
                        new_instr.clobbers.append(o)
                addr.replace_ir(nop_instr)
            # TODO: Calculate clobbers
            replace.replace_ir(new_instr)
            print(f"<< {new_instr}; clobbers={new_instr.clobbers}")
            print()

        # for loc in locs:
        #    node, i = loc
        #    assert node is not None
        #    instr = node.block.instructions[i]
