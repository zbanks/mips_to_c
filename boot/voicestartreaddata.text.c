struct _mips2c_stack_osVoiceStartReadData {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x3];
    /* 0x2B */ u8 sp2B;                             /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

s32 __osVoiceCheckResult(void *, u8 *);             /* extern */
s32 __osVoiceContWrite4(OSMesgQueue *, s32, ?, s32 *); /* extern */

s32 osVoiceStartReadData(void *arg0) {
    u8 sp2B;
    s32 sp24;
    s32 *temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 phi_v1;

    temp_v0 = __osVoiceGetStatus(arg0->unk0, arg0->unk4, &sp2B);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    if ((sp2B & 2) != 0) {
        return 0xF;
    }
    temp_a3 = &sp24;
    if (arg0->unk8 != 0) {
        return 5;
    }
    sp24 = 0x5000000;
    temp_v0_2 = __osVoiceContWrite4(arg0->unk0, arg0->unk4, 0, temp_a3);
    phi_v1 = temp_v0_2;
    if (temp_v0_2 == 0) {
        temp_v0_3 = __osVoiceCheckResult(arg0, &sp2B);
        temp_v1 = temp_v0_3;
        phi_v1 = temp_v1;
        if ((temp_v0_3 & 0xFF00) != 0) {
            phi_v1 = 5;
        } else {
            arg0->unk8 = 1;
        }
    }
    return phi_v1;
}
