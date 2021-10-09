struct _mips2c_stack_test {
    char pad0[0x4];
    s32 sp4;                                        /* +0x4; inferred */
};                                                  /* size 0x8 */
s32 test(s32 arg0) {
    s32 sp4;

    sp4 = 0;
    if (arg0 != 0) {
        sp4 = 1;
    }
    return sp4;
}
