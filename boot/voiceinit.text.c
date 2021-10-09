struct _mips2c_stack_osVoiceInit {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x3];
    /* 0x37 */ u8 sp37;                             /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

s32 __osContChannelReset(OSMesgQueue *, s32);       /* extern */
s32 __osVoiceCheckResult(void *, u8 *);             /* extern */
s32 __osVoiceContWrite4(OSMesgQueue *, s32, ?, s32 *); /* extern */
s32 __osVoiceSetADConverter(OSMesgQueue *, s32, u8); /* extern */
static u8 D_80097FA0[4] = {0x1E, 0x6E, 8, 0x56};
static ? D_80097FA5;                                /* unable to generate initializer */

s32 osVoiceInit(OSMesgQueue *arg0, void *arg1, s32 arg2) {
    u8 sp37;
    s32 sp30;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u8 *temp_s0;
    u8 *phi_s0;
    s32 phi_v1;

    sp37 = 0;
    arg1->unk_4 = arg2;
    arg1->unk_0 = arg0;
    arg1->unk_8 = 0;
    arg1 = arg1;
    temp_v0_4 = __osVoiceGetStatus(arg0, arg2, &sp37);
    if (temp_v0_4 != 0) {
        return temp_v0_4;
    }
    if (__osContChannelReset(arg0, arg2) != 0) {
        return 4;
    }
    phi_s0 = D_80097FA0;
loop_5:
    temp_v0_3 = __osVoiceSetADConverter(arg0, arg2, *phi_s0);
    temp_s0 = phi_s0 + 1;
    phi_s0 = temp_s0;
    if (temp_v0_3 != 0) {
        return temp_v0_3;
    }
    if (temp_s0 == &D_80097FA5) {
        temp_v0_2 = __osVoiceGetStatus(arg0, arg2, &sp37);
        if (temp_v0_2 != 0) {
            return temp_v0_2;
        }
        if ((sp37 & 2) != 0) {
            return 0xF;
        }
        sp30 = 0x100;
        temp_v0 = __osVoiceContWrite4(arg0, arg2, 0, &sp30);
        if (temp_v0 != 0) {
            return temp_v0;
        }
        temp_v0_5 = __osVoiceCheckResult(arg1, &sp37);
        phi_v1 = temp_v0_5;
        if ((temp_v0_5 & 0xFF00) != 0) {
            phi_v1 = 5;
        }
        return phi_v1;
    }
    goto loop_5;
}
