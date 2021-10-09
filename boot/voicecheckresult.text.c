struct _mips2c_stack___osVoiceCheckResult {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ u8 sp21;                             /* inferred */
    /* 0x22 */ char pad_22[0x6];
};                                                  /* size = 0x28 */

s32 __osVoiceContRead2(OSMesgQueue *, s32, ?, u8 *); /* extern */

s32 __osVoiceCheckResult(void *arg0, u8 *arg1) {
    u8 sp20;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;

    temp_v0 = __osVoiceGetStatus(arg0->unk_0, arg0->unk_4, arg1);
    phi_v1 = temp_v0;
    if (temp_v0 == 0) {
        if ((*arg1 & 1) != 0) {
            phi_v1 = 0xF;
        } else {
            temp_v0_2 = __osVoiceContRead2(arg0->unk_0, arg0->unk_4, 0, &sp20);
            phi_v1 = temp_v0_2;
            if (temp_v0_2 == 0) {
                arg0->unk_C = (s8) (sp20 & 7);
                if ((sp20 & 0x40) != 0) {
                    phi_v1 = 0xF;
                } else {
                    phi_v1 = sp21 << 8;
                }
            }
        }
    }
    return phi_v1;
}
