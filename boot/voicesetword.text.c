struct _mips2c_stack_osVoiceSetWord {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad20[0x14];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x13];
    /* 0x47 */ ? sp47;                              /* inferred */
    /* 0x47 */ char pad47[0x4];
    /* 0x4B */ u8 sp4B;                             /* inferred */
    /* 0x4C */ char pad4C[0x4];                     /* maybe part of sp4B[5]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
};                                                  /* size = 0x58 */

s32 __osVoiceCheckResult(void *, u8 *);             /* extern */
s32 __osVoiceContWrite20(OSMesgQueue *, s32, ?, ? *); /* extern */

s32 osVoiceSetWord(void *arg0, u8 *arg1) {
    s32 sp50;
    u8 sp4B;
    ? sp47;
    ? sp34;
    ? sp20;
    OSMesgQueue *temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    u8 *temp_v0_4;
    u8 *phi_v0;
    s32 phi_a2;
    u8 *phi_v1;
    u8 *phi_v0_2;
    s32 phi_a0;
    s32 phi_a0_2;
    s32 phi_v1_2;
    s32 phi_a2_2;

    temp_a1 = arg0->unk4;
    temp_a0 = arg0->unk0;
    arg0 = arg0;
    temp_v0_3 = __osVoiceGetStatus(temp_a0, temp_a1, &sp4B);
    if (temp_v0_3 != 0) {
        return temp_v0_3;
    }
    if ((sp4B & 2) != 0) {
        return 0xF;
    }
    phi_v0 = arg1;
    phi_a2 = 0;
    phi_a2_2 = 0;
    if (*arg1 != 0) {
        do {
            temp_a2 = phi_a2_2 + 2;
            phi_v0 += 2;
            phi_a2 = temp_a2;
            phi_a2_2 = temp_a2;
        } while (phi_v0->unk2 != 0);
    }
    sp50 = phi_a2;
    bzero((void *) &sp20, 0x28);
    phi_a0 = 0;
    phi_a0_2 = 0;
    if (phi_a2 > 0) {
        phi_v1 = arg1;
        phi_v0_2 = -phi_a2 + &sp47;
        do {
            temp_a0_2 = phi_a0 + 2;
            *phi_v0_2 = phi_v1->unk0;
            temp_v0_4 = phi_v0_2 + 2;
            temp_v0_4->unk-3 = (u8) phi_v1->unk1;
            phi_v1 += 2;
            phi_v0_2 = temp_v0_4;
            phi_a0 = temp_a0_2;
            phi_a0_2 = temp_a0_2;
        } while (temp_a0_2 < phi_a2);
    }
    (sp + -phi_a0_2)->unk42 = 3;
    if ((phi_a2 >= 0xF) && (temp_v0_2 = __osVoiceContWrite20(arg0->unk0, arg0->unk4, 0, &sp20), (temp_v0_2 != 0))) {
        return temp_v0_2;
    }
    temp_v0 = __osVoiceContWrite20(arg0->unk0, arg0->unk4, 0, &sp34);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    temp_v0_5 = __osVoiceCheckResult(arg0, &sp4B);
    phi_v1_2 = temp_v0_5;
    if (temp_v0_5 != 0) {
        if ((temp_v0_5 & 0x100) != 0) {
            phi_v1_2 = 0xD;
        } else if ((temp_v0_5 & 0x200) != 0) {
            phi_v1_2 = 0xE;
        } else if ((temp_v0_5 & 0xFF00) != 0) {
            phi_v1_2 = 5;
        }
    }
    return phi_v1_2;
}
