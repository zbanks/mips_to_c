f32 test(s32 *arg0, f32 arg8) {
    s32 temp_r4;

    temp_r4 = *arg0;
    *arg0 = temp_r4 - (((temp_r4 >> 1) + MIPS2C_CARRY((temp_r4 >> 1))) * 2);
    return arg8;
}
