import abc
from dataclasses import dataclass, field
from typing import Dict, List, Optional, Tuple, TypeVar, Union

from .parse_file import Label
from .parse_instruction import (
    Argument,
    ArchAsm,
    AsmAddressMode,
    AsmGlobalSymbol,
    AsmInstruction,
    AsmLiteral,
    BinOp,
    Instruction,
    InstructionMeta,
    JumpTarget,
    NaiveParsingArch,
    Register,
    RegFormatter,
    parse_asm_instruction,
    parse_args,
)


BodyPart = Union[Instruction, Label]
ReplacementPart = Union[AsmInstruction, Instruction, Label]
PatternPart = Union[AsmInstruction, Label, None]
Pattern = List[Tuple[PatternPart, bool]]


def make_pattern(*parts: str) -> Pattern:
    ret: Pattern = []
    for part in parts:
        optional = part.endswith("?")
        part = part.rstrip("?")
        if part == "*":
            ret.append((None, optional))
        elif part.endswith(":"):
            ret.append((Label(part.strip(".:")), optional))
        else:
            ins = parse_asm_instruction(part, NaiveParsingArch(), RegFormatter())
            ret.append((ins, optional))
    return ret


@dataclass
class Replacement:
    new_body: List[ReplacementPart]
    num_consumed: int


@dataclass
class Match:
    """
    IrMatch represents the matched state of an IrPattern.
    This object is considered read-only; none of its methods modify its state.
    Its `map_*` methods take a pattern part and return the matched instruction part.
    """

    symbolic_registers: Dict[str, Register] = field(default_factory=dict)
    symbolic_labels: Dict[str, str] = field(default_factory=dict)
    symbolic_args: Dict[str, Argument] = field(default_factory=dict)

    def eval_math(self, pat: Argument) -> int:
        # This function can only evaluate math in *patterns*, not candidate
        # instructions. It does not need to support arbitrary math, only
        # math used by IR patterns.
        if isinstance(pat, AsmLiteral):
            return pat.value
        if isinstance(pat, BinOp):
            if pat.op == "+":
                return self.eval_math(pat.lhs) + self.eval_math(pat.rhs)
            if pat.op == "-":
                return self.eval_math(pat.lhs) - self.eval_math(pat.rhs)
            if pat.op == "<<":
                return self.eval_math(pat.lhs) << self.eval_math(pat.rhs)
            if pat.op == "&":
                return self.eval_math(pat.lhs) & self.eval_math(pat.rhs)
            assert False, f"bad pattern binop: {pat}"
        elif isinstance(pat, AsmGlobalSymbol):
            assert (
                pat.symbol_name in self.symbolic_args
            ), f"undefined variable in math pattern: {pat.symbol_name}"
            lit = self.symbolic_args[pat.symbol_name]
            assert isinstance(lit, AsmLiteral)
            return lit.value
        else:
            assert False, f"bad pattern expr: {pat}"

    def map_reg(self, key: Register) -> Register:
        if len(key.register_name) <= 1:
            return self.symbolic_registers[key.register_name]
        return key

    def map_arg(self, key: Argument) -> Argument:
        if isinstance(key, AsmLiteral):
            return key
        if isinstance(key, Register):
            return self.map_reg(key)
        if isinstance(key, AsmGlobalSymbol):
            if key.symbol_name.isupper():
                return self.symbolic_args[key.symbol_name]
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

    def map(self, raw_arg: str) -> Argument:
        args = parse_args(raw_arg, NaiveParsingArch(), RegFormatter())
        assert len(args) == 1
        return self.map_arg(args[0])


@dataclass
class TryMatch(Match):
    K = TypeVar("K")
    V = TypeVar("V")

    def _match_var(self, var_map: Dict[K, V], key: K, value: V) -> bool:
        if key in var_map:
            if var_map[key] != value:
                return False
        else:
            var_map[key] = value
        return True

    def match_arg(self, pat: Argument, cand: Argument) -> bool:
        if isinstance(pat, AsmLiteral):
            return pat == cand
        if isinstance(pat, Register):
            # Single-letter registers are symbolic
            if len(pat.register_name) > 1:
                return pat == cand
            if not isinstance(cand, Register):
                return False
            return self._match_var(self.symbolic_registers, pat.register_name, cand)
        if isinstance(pat, AsmGlobalSymbol):
            # Uppercase AsmGlobalSymbols are symbolic
            if pat.symbol_name.isupper():
                return self._match_var(self.symbolic_args, pat.symbol_name, cand)
            else:
                return pat == cand
        if isinstance(pat, AsmAddressMode):
            return (
                isinstance(cand, AsmAddressMode)
                and self.match_arg(pat.lhs, cand.lhs)
                and self.match_arg(pat.rhs, cand.rhs)
            )
        if isinstance(pat, JumpTarget):
            return isinstance(cand, JumpTarget) and self._match_var(
                self.symbolic_labels, pat.target, cand.target
            )
        if isinstance(pat, BinOp):
            return isinstance(cand, AsmLiteral) and self.eval_math(pat) == cand.value
        assert False, f"bad pattern arg: {pat}"


@dataclass
class AsmMatch(Match):
    body: List[BodyPart] = field(default_factory=list)

    @property
    def literals(self) -> Dict[str, int]:
        # TODO: This is a placeholder to avoid larger changes to arch_mips.py
        out = {}
        for key, value in self.symbolic_args.items():
            if isinstance(value, AsmLiteral):
                out[key] = value.value
        return out


@dataclass
class TryAsmMatch(AsmMatch, TryMatch):
    def match_one(self, pat: PatternPart, cand: BodyPart) -> bool:
        if pat is None:
            return True
        if isinstance(pat, Label):
            return isinstance(cand, Label) and self._match_var(
                self.symbolic_labels, pat.name, cand.name
            )
        if not isinstance(cand, Instruction):
            return False
        if cand.mnemonic != pat.mnemonic:
            return False
        if pat.args:
            if len(pat.args) != len(cand.args):
                return False
            for (p, c) in zip(pat.args, cand.args):
                if not self.match_arg(p, c):
                    return False
        return True


class AsmPattern(abc.ABC):
    @abc.abstractmethod
    def match(self, matcher: "AsmMatcher") -> Optional[Replacement]:
        ...


class SimpleAsmPattern(AsmPattern):
    @property
    @abc.abstractmethod
    def pattern(self) -> Pattern:
        ...

    @abc.abstractmethod
    def replace(self, m: "AsmMatch") -> Optional[Replacement]:
        ...

    def match(self, matcher: "AsmMatcher") -> Optional[Replacement]:
        m = matcher.try_match(self.pattern)
        if not m:
            return None
        return self.replace(m)


@dataclass
class AsmMatcher:
    input: List[BodyPart]
    output: List[BodyPart] = field(default_factory=list)
    index: int = 0

    def try_match(self, pattern: Pattern) -> Optional[AsmMatch]:
        state = TryAsmMatch()

        index = self.index
        for (pat, optional) in pattern:
            if index < len(self.input) and state.match_one(pat, self.input[index]):
                state.body.append(self.input[index])
                index += 1
            elif not optional:
                return None
        return state

    def derived_meta(self) -> InstructionMeta:
        for part in self.input[self.index :]:
            if isinstance(part, Instruction):
                return part.meta.derived()
        return InstructionMeta.missing()

    def apply(self, repl: Replacement, arch: ArchAsm) -> None:
        # Track which registers are overwritten/clobbered in the replacement asm
        repl_writes = []
        final_instr: Optional[Instruction] = None
        for part in repl.new_body:
            if isinstance(part, AsmInstruction):
                # Parse any AsmInstructions into Instructions before substituting
                part = arch.parse(part.mnemonic, part.args, self.derived_meta())
            if isinstance(part, Instruction):
                # Update list of written registers
                repl_writes.extend(part.outputs)
                repl_writes.extend(part.clobbers)
                final_instr = part
            self.output.append(part)

        # Calculate which regs are *not* written by the repl asm, but were in the input asm
        # Denote the replacement asm as "clobbering" these regs by marking the final instr
        for part in self.input[self.index : self.index + repl.num_consumed]:
            if isinstance(part, Instruction):
                for arg in part.outputs + part.clobbers:
                    assert final_instr is not None
                    if arg not in repl_writes and arg not in final_instr.clobbers:
                        final_instr.clobbers.append(arg)

        # Advance the input
        self.index += repl.num_consumed


def simplify_patterns(
    body: List[BodyPart],
    patterns: List[AsmPattern],
    arch: ArchAsm,
) -> List[BodyPart]:
    """Detect and simplify asm standard patterns emitted by known compilers. This is
    especially useful for patterns that involve branches, which are hard to deal with
    in the translate phase."""
    matcher = AsmMatcher(body)
    while matcher.index < len(matcher.input):
        for pattern in patterns:
            m = pattern.match(matcher)
            if m:
                matcher.apply(m, arch)
                break
        else:
            matcher.apply(Replacement([matcher.input[matcher.index]], 1), arch)

    return matcher.output
