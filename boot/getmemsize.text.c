

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
    sp0 = (sp8 + 0xA0100000)->unk-4;
    *(sp8 + 0xA0000000) = *(sp8 + 0xA0000000) ^ -1;
    spC->unkFFFFC = (s32) (spC->unkFFFFC ^ -1);
    if ((spC->unk0 != (temp_t9 ^ -1)) || (spC->unkFFFFC != (sp0 ^ -1))) {

    } else {
        spC->unk0 = sp4;
        spC->unkFFFFC = sp0;
        sp8 += 0x100000;
        if (sp8 < 0x800000U) {
            goto loop_1;
        }
    }
    return sp8;
}

