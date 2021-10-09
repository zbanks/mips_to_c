CRASHED

struct _mips2c_stack_func_80185F90 {};              /* size 0x0 */

? D_80186028();                                     /* static */

s32 func_80185F90(u32 param_1) {
    if ((s32) param_1 >= 0x8800) {
        if (((param_1 & 0xFF) - 0x40) >= 0x40) {

        }
        return MIPS2C_ERROR(unknown instruction: add $a3, $a3, $a2) << 7;
    }
    if (((param_1 & 0xFF) - 0x40) >= 0x40) {

    }
    MIPS2C_ERROR(unknown instruction: add $a3, $a3, $a2);
    return *MIPS2C_ERROR(unknown instruction: add $a3, $a3, $a2) << 7;
}

/*
Failed to decompile function D_80186028:

Function D_80186028 contains no instructions. Maybe it is rodata?
*/
