f32 test(s32 *arg0, f32 arg8) {
    s32 temp_r0;

    temp_r0 = *arg0;
    *arg0 = (temp_r0 >> 1) + MIPS2C_CARRY((temp_r0 >> 1));
    return arg8;
}
