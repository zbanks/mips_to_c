from typing import (
    Dict,
    List,
    Optional,
    Set,
)
from .abi import Abi, AbiArgSlot, FunctionAbi, Register
from .types import FunctionSignature, Type


class MipsO32Abi(Abi):
    stack_pointer_reg = Register("sp")
    frame_pointer_reg = Register("fp")
    return_address_reg = Register("ra")

    base_return_regs = [Register(r) for r in ["v0", "f0"]]
    all_return_regs = [Register(r) for r in ["v0", "v1", "f0", "f1"]]
    argument_regs = [Register(r) for r in ["a0", "a1", "a2", "a3", "f12", "f14"]]
    simple_temp_regs = [
        Register(r)
        for r in [
            "v0",
            "v1",
            "t0",
            "t1",
            "t2",
            "t3",
            "t4",
            "t5",
            "t6",
            "t7",
            "t8",
            "t9",
            "f0",
            "f1",
            "f2",
            "f3",
            "f4",
            "f5",
            "f6",
            "f7",
            "f8",
            "f9",
            "f10",
            "f11",
            "f13",
            "f15",
            "f16",
            "f17",
            "f18",
            "f19",
        ]
    ]
    temp_regs = (
        argument_regs
        + simple_temp_regs
        + [
            Register(r)
            for r in [
                "at",
                "hi",
                "lo",
                "condition_bit",
            ]
        ]
    )
    saved_regs = [
        Register(r)
        for r in [
            "s0",
            "s1",
            "s2",
            "s3",
            "s4",
            "s5",
            "s6",
            "s7",
            "f20",
            "f21",
            "f22",
            "f23",
            "f24",
            "f25",
            "f26",
            "f27",
            "f28",
            "f29",
            "f30",
            "f31",
            "ra",
            "31",
            "fp",
            "gp",
        ]
    ]

    def function_abi(
        self,
        fn_sig: FunctionSignature,
        likely_regs: Dict[Register, bool],
        *,
        for_call: bool,
    ) -> FunctionAbi:
        """Compute stack positions/registers used by a function according to the o32 ABI,
        based on C type information. Additionally computes a list of registers that might
        contain arguments, if the function is a varargs function. (Additional varargs
        arguments may be passed on the stack; we could compute the offset at which that
        would start but right now don't care -- we just slurp up everything.)"""

        known_slots: List[AbiArgSlot] = []
        candidate_slots: List[AbiArgSlot] = []
        if fn_sig.params_known:
            offset = 0
            only_floats = True
            if fn_sig.return_type.is_struct():
                # The ABI for struct returns is to pass a pointer to where it should be written
                # as the first argument.
                known_slots.append(
                    AbiArgSlot(
                        offset=0,
                        reg=Register("a0"),
                        name="__return__",
                        type=Type.ptr(fn_sig.return_type),
                    )
                )
                offset = 4
                only_floats = False

            for ind, param in enumerate(fn_sig.params):
                # Array parameters decay into pointers
                param_type = param.type.decay()
                size, align = param_type.get_parameter_size_align_bytes()
                size = (size + 3) & ~3
                only_floats = only_floats and param_type.is_float()
                offset = (offset + align - 1) & -align
                name = param.name
                reg2: Optional[Register]
                if ind < 2 and only_floats:
                    reg = Register("f12" if ind == 0 else "f14")
                    is_double = (
                        param_type.is_float() and param_type.get_size_bits() == 64
                    )
                    known_slots.append(
                        AbiArgSlot(offset=offset, reg=reg, name=name, type=param_type)
                    )
                    if is_double and not for_call:
                        name2 = f"{name}_lo" if name else None
                        reg2 = Register("f13" if ind == 0 else "f15")
                        known_slots.append(
                            AbiArgSlot(
                                offset=offset + 4,
                                reg=reg2,
                                name=name2,
                                type=Type.any_reg(),
                            )
                        )
                else:
                    for i in range(offset // 4, (offset + size) // 4):
                        unk_offset = 4 * i - offset
                        name2 = (
                            f"{name}_unk{unk_offset:X}" if name and unk_offset else name
                        )
                        reg2 = Register(f"a{i}") if i < 4 else None
                        known_slots.append(
                            AbiArgSlot(
                                offset=4 * i, reg=reg2, name=name2, type=param_type
                            )
                        )
                offset += size

            if fn_sig.is_variadic:
                for i in range(offset // 4, 4):
                    candidate_slots.append(
                        AbiArgSlot(i * 4, Register(f"a{i}"), Type.any_reg())
                    )

        else:
            candidate_slots = [
                AbiArgSlot(0, Register("f12"), Type.floatish()),
                AbiArgSlot(4, Register("f13"), Type.floatish()),
                AbiArgSlot(4, Register("f14"), Type.floatish()),
                AbiArgSlot(0, Register("a0"), Type.intptr()),
                AbiArgSlot(4, Register("a1"), Type.any_reg()),
                AbiArgSlot(8, Register("a2"), Type.any_reg()),
                AbiArgSlot(12, Register("a3"), Type.any_reg()),
            ]

        valid_extra_regs: Set[Register] = {
            slot.reg for slot in known_slots if slot.reg is not None
        }
        possible_slots: List[AbiArgSlot] = []
        for slot in candidate_slots:
            if slot.reg is None or slot.reg not in likely_regs:
                continue

            # Don't pass this register if lower numbered ones are undefined.
            # Following the o32 ABI, register order can be a prefix of either:
            # a0, a1, a2, a3
            # f12, a1, a2, a3
            # f12, f14, a2, a3
            # f12, f13, a2, a3
            # f12, f13, f14, f15
            require: Optional[List[str]] = None
            if slot == candidate_slots[0]:
                # For varargs, a subset of a0 .. a3 may be used. Don't check
                # earlier registers for the first member of that subset.
                pass
            elif slot.reg == Register("f13") or slot.reg == Register("f14"):
                require = ["f12"]
            elif slot.reg == Register("a1"):
                require = ["a0", "f12"]
            elif slot.reg == Register("a2"):
                require = ["a1", "f13", "f14"]
            elif slot.reg == Register("a3"):
                require = ["a2"]
            if require and not any(Register(r) in valid_extra_regs for r in require):
                continue

            valid_extra_regs.add(slot.reg)

            if slot.reg == Register("f13"):
                # We don't pass in f13 or f15 because they will often only
                # contain SecondF64Half(), and otherwise would need to be
                # merged with f12/f14 which we don't have logic for right
                # now. However, f13 can still matter for whether a2 should
                # be passed, and so is kept in possible_regs.
                continue

            # Skip registers that are untouched from the initial parameter
            # list. This is sometimes wrong (can give both false positives
            # and negatives), but having a heuristic here is unavoidable
            # without access to function signatures, or when dealing with
            # varargs functions. Decompiling multiple functions at once
            # would help.
            # TODO: don't do this in the middle of the argument list,
            # except for f12 if a0 is passed and such.
            if not likely_regs[slot.reg]:
                continue

            possible_slots.append(slot)

        return FunctionAbi(
            arg_slots=known_slots,
            possible_slots=possible_slots,
        )
