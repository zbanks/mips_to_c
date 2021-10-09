struct _mips2c_stack_test {
    char pad0[0x4];
    f32 sp4;                                        /* +0x4; inferred */
    char pad8[0x4];
    f32 spC;                                        /* +0xC; inferred */
};                                                  /* size 0x10 */
void test(f32 arg0) {
    f32 spC;
    f32 sp4;

    sp4 = arg0;
    spC = sp4;
    spC = (bitwise f32) (0x5F3759DF - ((bitwise s32) sp4 >> 1));
    sp4 = spC;
    sp4 = (1.5f - (arg0 * 0.5f * spC * spC)) * spC;
}
