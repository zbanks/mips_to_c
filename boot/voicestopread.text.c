struct _mips2c_stack_osVoiceStopReadData {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x3];
    /* 0x3F */ u8 sp3F;                             /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

s32 __osVoiceCheckResult(void *, u8 *);             /* extern */
s32 __osVoiceContWrite4(OSMesgQueue *, s32, ?, s32 *); /* extern */

s32 osVoiceStopReadData(void *arg0) {
    s32 sp40;
    u8 sp3F;
    s32 sp38;
    s32 *temp_a3;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 phi_s1;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_v0 = __osVoiceGetStatus(arg0->unk_0, arg0->unk_4, &sp3F);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    if ((sp3F & 2) != 0) {
        return 0xF;
    }
    temp_a3 = &sp38;
    if (arg0->unk_8 == 0) {
        return 5;
    }
    sp38 = 0x700;
    temp_v0_2 = __osVoiceContWrite4(arg0->unk_0, arg0->unk_4, 0, temp_a3);
    phi_v1_2 = temp_v0_2;
    if (temp_v0_2 == 0) {
        phi_s1 = 0;
loop_8:
        temp_v0_3 = __osVoiceCheckResult(arg0, &sp3F);
        phi_v1 = temp_v0_3;
        if ((temp_v0_3 & 0xFF00) != 0) {
            temp_v1 = temp_v0_3 & 7;
            if ((temp_v1 == 0) || (temp_v1 == 7)) {
                phi_v1 = 0;
                goto block_13;
            }
            phi_v1 = 5;
        } else {
block_13:
            arg0->unk_8 = 0;
        }
        temp_s1 = phi_s1 + 1;
        sp40 = temp_s1;
        phi_s1 = temp_s1;
        phi_v1_2 = phi_v1;
        if (phi_v1 == 0xF) {
            if (temp_s1 == 0x14) {
                sp40 = temp_s1;
            } else {
                goto loop_8;
            }
        }
    }
    return phi_v1_2;
}
