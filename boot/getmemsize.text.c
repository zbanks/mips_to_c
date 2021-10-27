struct _mips2c_stack_osGetMemSize {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ u32 sp8;                             /* inferred */
    /* 0x0C */ s32 *spC;                            /* inferred */
};                                                  /* size = 0x10 */

u32 osGetMemSize(void) {
    s32 *spC;
    u32 sp8;
    s32 sp4;
    s32 sp0;
    s32 temp_t9;

    sp8 = 0x400000;
loop_1:
    spC = sp8 + 0xA0000000;
    temp_t9 = *(sp8 + 0xA0000000);
    sp4 = temp_t9;
    sp0 = (sp8 + 0xA0100000)->unk_-4;
    *(sp8 + 0xA0000000) = *(sp8 + 0xA0000000) ^ -1;
    spC[262143] ^= -1;
    if ((spC->unk_0 != (temp_t9 ^ -1)) || (spC[262143] != (sp0 ^ -1))) {

    } else {
        spC->unk_0 = sp4;
        spC[262143] = sp0;
        sp8 += 0x100000;
        if (sp8 < 0x800000U) {
            goto loop_1;
        }
    }
    return sp8;
}
