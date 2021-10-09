struct _mips2c_stack_test {
    f32 sp0;                                        /* +0x0; inferred */
    f32 sp4;                                        /* +0x4; inferred */
    f32 sp8;                                        /* +0x8; inferred */
    f32 spC;                                        /* +0xC; inferred */
};                                                  /* size 0x10 */
f32 test(f32 arg0) {
    f32 spC;
    f32 sp8;
    f32 sp4;
    f32 sp0;

    sp0 = 1.5f;
    sp8 = arg0 * 0.5f;
    sp4 = arg0;
    spC = sp4;
    spC = (bitwise f32) (0x5F3759DF - ((bitwise s32) spC >> 1));
    sp4 = spC;
    sp4 *= sp0 - (sp8 * sp4 * sp4);
    return sp4;
}
