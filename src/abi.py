import abc
from dataclasses import dataclass, field
from typing import (
    Dict,
    List,
    Optional,
)

from .types import FunctionSignature, Type


@dataclass(frozen=True)
class Register:
    register_name: str

    def is_float(self) -> bool:
        name = self.register_name
        return bool(name) and name[0] == "f" and name != "fp"

    def other_f64_reg(self) -> "Register":
        assert (
            self.is_float()
        ), "tried to get complement reg of non-floating point register"
        num = int(self.register_name[1:])
        return Register(f"f{num ^ 1}")

    def __str__(self) -> str:
        return f"${self.register_name}"


class Abi(abc.ABC):
    stack_pointer_reg: Register
    frame_pointer_reg: Register
    return_address_reg: Register

    base_return_regs: List[Register]
    all_return_regs: List[Register]
    argument_regs: List[Register]
    simple_temp_regs: List[Register]
    temp_regs: List[Register]
    saved_regs: List[Register]

    @abc.abstractmethod
    def function_abi(
        self,
        fn_sig: FunctionSignature,
        likely_regs: Dict[Register, bool],
        *,
        for_call: bool,
    ) -> "FunctionAbi":
        ...


@dataclass
class AbiArgSlot:
    offset: int
    reg: Optional[Register]
    type: Type
    name: Optional[str] = None


@dataclass
class FunctionAbi:
    arg_slots: List[AbiArgSlot]
    possible_slots: List[AbiArgSlot]
