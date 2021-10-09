struct _mips2c_stack_osVoiceMaskDictionary {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0x13];
    /* 0x37 */ s8 sp37;                             /* inferred */
    /* 0x38 */ char pad38[0x3];                     /* maybe part of sp37[4]? */
    /* 0x3B */ u8 sp3B;                             /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

s32 __osVoiceCheckResult(void *, u8 *);             /* extern */
s32 __osVoiceContWrite20(OSMesgQueue *, s32, ?, ? *); /* extern */

s32 osVoiceMaskDictionary(void *arg0, void *arg1, s32 arg2) {
    s32 sp3C;
    u8 sp3B;
    s8 sp37;
    ? sp24;
    s32 sp20;
    OSMesgQueue *temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    void *temp_v0_2;
    s32 phi_a2;
    void *phi_v1;
    void *phi_v0;
    s32 phi_a0;
    s32 phi_v1_2;

    temp_a1 = arg0->unk4;
    temp_a0 = arg0->unk0;
    arg0 = arg0;
    temp_v0 = __osVoiceGetStatus(temp_a0, temp_a1, &sp3B);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    temp_a3 = arg2 & 1;
    if ((sp3B & 2) != 0) {
        return 0xF;
    }
    phi_a2 = arg2;
    if (temp_a3 != 0) {
        phi_a2 = arg2 + 1;
    }
    sp3C = phi_a2;
    sp20 = temp_a3;
    bzero((void *) &sp24, 0x14);
    (sp + -phi_a2)->unk36 = 4;
    phi_a0 = 0;
    if (phi_a2 > 0) {
        phi_v1 = arg1;
        phi_v0 = -phi_a2 + &sp24;
        do {
            temp_a0_2 = phi_a0 + 2;
            phi_v0->unk14 = (u8) phi_v1->unk0;
            temp_v0_2 = phi_v0 + 2;
            temp_v0_2->unk13 = (u8) phi_v1->unk1;
            phi_v1 += 2;
            phi_v0 = temp_v0_2;
            phi_a0 = temp_a0_2;
        } while (temp_a0_2 < phi_a2);
    }
    if (temp_a3 != 0) {
        sp37 = 0;
    }
    temp_v0_3 = __osVoiceContWrite20(arg0->unk0, arg0->unk4, 0, &sp24);
    phi_v1_2 = temp_v0_3;
    if (temp_v0_3 == 0) {
        temp_v0_4 = __osVoiceCheckResult(arg0, &sp3B);
        phi_v1_2 = temp_v0_4;
        if ((temp_v0_4 & 0xFF00) != 0) {
            phi_v1_2 = 5;
        }
    }
    return phi_v1_2;
}
