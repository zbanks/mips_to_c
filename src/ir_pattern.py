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


def simplify_ir_patterns(
    arch: ArchFlowGraph, flow_graph: FlowGraph, pattern_classes: List[Type[IrPattern]]
) -> None:
    patterns = [p.compile(arch) for p in pattern_classes]

    refs_by_mnemonic = defaultdict(list)
    for node in flow_graph.nodes:
        for i, instr in enumerate(node.block.instructions):
            ref = InstrRef(node, i)
            refs_by_mnemonic[instr.mnemonic].append(ref)

    for pattern in patterns:
        # TODO: Match pattern against flow_graph
        pass
