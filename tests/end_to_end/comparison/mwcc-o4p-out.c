extern u32 global;

f32 test(s32 arg0, s32 arg1, s32 arg2, f32 arg8) {
    s32 temp_r3;
    s32 temp_r5;

    temp_r5 = arg2 - arg0;
    global = (u32) MIPS2C_ERROR(unknown instruction: cntlzw $r0, $r0) >> 5U;
    global = (temp_r5 - (temp_r5 - 1)) + MIPS2C_CARRY((temp_r5 - 1));
    global = (((u32) MIPS2C_ERROR(unknown instruction: eqv $r0, $r4, $r3) >> 0x1FU) + MIPS2C_CARRY((arg0 - arg1))) & 1;
    temp_r3 = -arg1;
    global = (arg1 >> 0x1F) + ((u32) arg0 >> 0x1FU) + MIPS2C_CARRY((arg1 - arg0));
    global = (u32) MIPS2C_ERROR(unknown instruction: cntlzw $r0, $r0) >> 5U;
    global = (temp_r3 - (temp_r3 - 1)) + MIPS2C_CARRY((temp_r3 - 1));
    return arg8;
}
