import abc
from dataclasses import dataclass, field
from typing import ClassVar, Dict, List, Optional, Type, Union

from .flow_graph import ArchFlowGraph, Node, IrInstruction
from .parse_instruction import (
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
    parse_instruction,
)


@dataclass(eq=False, frozen=True)
class IrPattern(abc.ABC):
    parts: ClassVar[List[str]]
    irs: List[IrInstruction]

    @classmethod
    def compile(cls, arch: ArchFlowGraph) -> "IrPattern":
        irs: List[IrInstruction] = []
        for part in cls.parts:
            instr = parse_instruction(part, InstructionMeta.missing(), arch)
            ir = arch.parse_ir(instr)
            assert ir.jump_target is None
            assert not ir.is_conditional
            assert not ir.is_return
            irs.append(ir)
        return IrPattern(irs=irs)


Slot = Union[Register, AsmAddressMode]
Loc = Tuple[Node, int]


def slot(arch: ArchFlowGraph, arg: Argument) -> Optional[Slot]:
    if isinstance(arg, Register):
        return reg
    if (
        isinstance(arg, AsmAddressMode)
        and isinstance(arg.lhs, Literal)
        and arg.rhs == arch.stack_pointer_reg
    ):
        # TODO: Need to know width of store/load?
        return reg
    return None


@dataclass
class SlotInfo:
    requires: Set[Slot]
    inputs: Dict[Slot, Loc]
    outputs: Dict[Slot, Loc]
    clobbers: Set[Slot]


def simplify_ir_patterns(
    arch: ArchFlowGraph, nodes: List[Node], pattern_classes: List[Type[IrPattern]]
) -> None:
    patterns = [p.compile(arch) for p in pattern_classes]

    slots: Dict[Loc, SlotInfo] = {}
    info = SlotInfo(set(), dict(), dict(), set())
    for node in nodes:
        for ir in node.block.instructions:
            requires = 
