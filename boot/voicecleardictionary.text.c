s32 __osVoiceCheckResult(void *, u8 *);             /* extern */
s32 __osVoiceContWrite4(OSMesgQueue *, s32, ?, s32 *); /* extern */



s32 osVoiceClearDictionary(void *arg0, u8 arg1) {
    u8 sp2B;
    s32 sp24;
    s32 *temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_v1;

    temp_v0_2 = __osVoiceGetStatus(arg0->unk0, arg0->unk4, &sp2B);
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    temp_a3 = &sp24;
    if ((sp2B & 2) != 0) {
        return 0xF;
    }
    sp24 = 0x2000000;
    temp_a3->unk2 = arg1;
    temp_v0 = __osVoiceContWrite4(arg0->unk0, arg0->unk4, 0, temp_a3);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    temp_v0_3 = __osVoiceCheckResult(arg0, &sp2B);
    phi_v1 = temp_v0_3;
    if ((temp_v0_3 & 0xFF00) != 0) {
        phi_v1 = 5;
    }
    return phi_v1;
}

