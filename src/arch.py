import abc
from typing import (
    Callable,
    Collection,
    Dict,
    List,
    Mapping,
    Optional,
    Tuple,
)
from .asm_pattern import AsmPattern
from .parse_instruction import ArchAsm, Register
from .types import (
    FunctionSignature,
)

InstrSet = Collection[str]
InstrMap = Mapping[str, Callable[["InstrArgs"], "Expression"]]
StmtInstrMap = Mapping[str, Callable[["InstrArgs"], "Statement"]]
CmpInstrMap = Mapping[str, Callable[["InstrArgs"], "Condition"]]
StoreInstrMap = Mapping[str, Callable[["InstrArgs"], Optional["StoreStmt"]]]
MaybeInstrMap = Mapping[str, Callable[["InstrArgs"], Optional["Expression"]]]
PairInstrMap = Mapping[str, Callable[["InstrArgs"], Tuple["Expression", "Expression"]]]
ImplicitInstrMap = Mapping[str, Tuple[Register, Callable[["InstrArgs"], "Expression"]]]
PpcCmpInstrMap = Mapping[str, Callable[["InstrArgs", str], "Expression"]]


class Arch(ArchAsm):
    asm_patterns: List[AsmPattern] = []

    instrs_ignore: InstrSet = set()
    instrs_store: StoreInstrMap = {}
    instrs_store_update: StoreInstrMap = {}
    instrs_load_update: InstrMap = {}

    instrs_branches: CmpInstrMap = {}
    instrs_float_branches: InstrSet = set()
    instrs_float_comp: CmpInstrMap = {}
    instrs_ppc_compare: PpcCmpInstrMap = {}
    instrs_jumps: InstrSet = set()
    instrs_fn_call: InstrSet = set()

    instrs_no_dest: StmtInstrMap = {}
    instrs_hi_lo: PairInstrMap = {}
    instrs_source_first: InstrMap = {}
    instrs_destination_first: InstrMap = {}
    instrs_implicit_destination: ImplicitInstrMap = {}

    @abc.abstractmethod
    def function_abi(
        self,
        fn_sig: FunctionSignature,
        likely_regs: Dict[Register, bool],
        *,
        for_call: bool,
    ) -> "Abi":
        """
        Compute stack positions/registers used by a function based on its type
        information. Also computes a list of registers that may contain arguments,
        if the function has varargs or an unknown/incomplete type.
        """
        ...

    @abc.abstractmethod
    def function_return(
        self, expr: "Expression"
    ) -> List[Tuple[Register, "Expression"]]:
        """
        Compute register location(s) & values that will hold the return value
        of the function call `expr`.
        This must use all of the registers in `all_return_regs` in order to stay
        consistent with `Instruction.outputs`. This is why we can't use the
        function's return type, even though it may be more accurate.
        """
        ...


from .translate import (
    Abi,
    Condition,
    Expression,
    InstrArgs,
    Statement,
    StoreStmt,
)
