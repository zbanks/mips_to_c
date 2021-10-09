struct _mips2c_stack_test {
    char pad0[0x4];
    s32 sp4;                                        /* +0x4; inferred */
    s32 sp8;                                        /* +0x8; inferred */
    s32 spC;                                        /* +0xC; inferred */
};                                                  /* size 0x10 */
s32 test(s32 arg0) {
    s32 spC;
    s32 sp8;
    s32 sp4;

    spC = 0;
    sp8 = 0;
    if (spC < arg0) {
        do {
            sp4 = 0;
            if (sp4 < arg0) {
                do {
                    sp8 += spC * sp4;
                    sp4 += 1;
                } while (sp4 < arg0);
            }
            spC += 1;
        } while (spC < arg0);
    }
    return sp8;
}
