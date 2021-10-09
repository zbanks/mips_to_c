s32 func_80175008(u8, ? *, s32, s32);               /* extern */
? func_8017506C(s32);                               /* extern */
s32 osVoiceCheckWord(s32);                          /* extern */
s32 osVoiceClearDictionary(? *, s32);               /* extern */
s32 osVoiceControlGain(? *, s32, s32);              /* extern */
s32 osVoiceGetReadData(? *, ? *);                   /* extern */
s32 osVoiceMaskDictionary(? *, ? *, s32, s32);      /* extern */
s32 osVoiceSetWord(? *, s8 *);                      /* extern */
s32 osVoiceStartReadData(? *);                      /* extern */
s32 osVoiceStopReadData(? *);                       /* extern */
s32 func_801A5228(void *arg0);                      /* static */
s32 func_801A5390();                                /* static */
void *func_801A53DC();                              /* static */
void func_801A53E8(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4); /* static */
void func_801A541C(s32 arg0, s32 arg1);             /* static */
s32 func_801A5488(s32 arg0);                        /* static */
? *func_801A54C4();                                 /* static */
s32 func_801A54D0(s32 arg0);                        /* static */
s32 func_801A5680(s32 arg0);                        /* static */
void func_801A5808();                               /* static */
void func_801A5A10();                               /* static */
void func_801A5A1C(s8 *arg0);                       /* static */
static ? D_801D8E50;                                /* unable to generate initializer */
static ? D_801D8F70;                                /* unable to generate initializer */
static void *D_801FD5A0;
static s8 D_801FD5A4;
static ? D_801FD5B8;
static u8 D_801FD5C4;
static ? D_801FD5C8;
static ? D_801FD5E8;
static ? D_801FD608;
static ? D_801FD610;



s32 func_801A51F0(s32 arg0) {
    switch (arg0) {
    case 1:
    case 4:
    case 5:
    case 11:
    case 13:
    case 14:
    case 15:
        return -1;
    default:
        return 0;
    }
}

s32 func_801A5228(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v1;
    s8 *temp_s1_2;
    u8 temp_s1;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s3;

    D_801FD5A0.unk4 = 0;
    D_801FD5A0.unk8 = 0;
    D_801FD5A0.unkC = 0x3E8;
    D_801FD5A0.unkE = 5;
    D_801FD5A0.unk10 = 0;
    D_801FD5A0.unk0 = arg0;
    temp_s1 = arg0->unk258;
    temp_s2 = func_80175008();
    temp_s3 = osVoiceClearDictionary(&D_801FD5B8, temp_s1 & 0xFF);
    func_8017506C(temp_s2);
    phi_s0 = 0;
    if (temp_s3 != 0) {
        phi_s3 = temp_s3;
    } else {
        temp_v1 = ((s32) (temp_s1 - 1) / 8) + 1;
        if (temp_v1 > 0) {
            do {
                temp_s0 = (phi_s0 + 1) & 0xFF;
                *(&D_801FD608 + phi_s0) = 0;
                phi_s0 = temp_s0;
            } while (temp_s0 < temp_v1);
        }
        phi_s0_2 = 0;
        phi_s3 = temp_s3;
        if ((s32) temp_s1 > 0) {
            do {
                temp_s2_2 = func_80175008();
                temp_s1_2 = arg0 + (phi_s0_2 * 0x1E);
                temp_s3_2 = osVoiceSetWord(&D_801FD5B8, temp_s1_2);
                func_8017506C(temp_s2_2);
                if (func_801A51F0(temp_s3_2) != 0) {
                    func_801A5A1C(temp_s1_2);
                }
                temp_s0_2 = (phi_s0_2 + 1) & 0xFF;
                phi_s0_2 = temp_s0_2;
                phi_s3 = temp_s3_2;
            } while (temp_s0_2 < (s32) temp_s1);
        }
    }
    return phi_s3;
}

s32 func_801A5390(void) {
    s32 sp1C;
    s32 sp18;
    s32 temp_t6;

    temp_t6 = D_801FD5A0.unk8;
    D_801FD5A0.unk8 = 0;
    sp1C = temp_t6;
    sp18 = func_80175008();
    osVoiceStartReadData(&D_801FD5B8);
    func_8017506C(sp18);
    return sp1C;
}

void *func_801A53DC(void) {
    return D_801FD5A0;
}

void func_801A53E8(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    D_801FD5A0.unkC = arg0;
    D_801FD5A0.unkE = arg1;
    D_801FD5A0.unk10 = arg2;
    D_801FD5A0.unk12 = arg3;
    D_801FD5A0.unk14 = arg4;
}

void func_801A541C(s32 arg0, s32 arg1) {
    s32 sp1C;
    s32 sp18;

    if (D_801FD5A0 != 0) {
        sp18 = func_80175008();
        sp1C = osVoiceControlGain(&D_801FD5B8, arg0, arg1);
        func_8017506C(sp18);
        if (sp1C != 0) {
            func_801A51F0(sp1C);
        }
    }
}

s32 func_801A5488(s32 arg0) {
    s32 sp1C;
    s32 sp18;
    s32 temp_v0;

    sp18 = func_80175008();
    temp_v0 = osVoiceCheckWord(arg0);
    sp1C = temp_v0;
    func_8017506C(sp18);
    return temp_v0;
}

? *func_801A54C4(void) {
    return &D_801FD608;
}

s32 func_801A54D0(s32 arg0, ? *arg1, s32 arg2, s32 arg3) {
    s32 sp24;
    u8 sp22;
    s32 sp1C;
    s32 sp18;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    u8 *temp_v0_2;
    u8 *temp_v1;
    u8 temp_a0_3;
    void *temp_v0;
    s32 phi_t1;
    s32 phi_v1;
    s32 phi_a0;
    s32 phi_t0;
    u8 phi_a0_2;
    ? *phi_a1;
    s32 phi_a2;
    s32 phi_a3;

    temp_v0 = D_801FD5A0;
    temp_a0 = arg0 & 0xFFFF;
    phi_a2 = arg2;
    phi_a3 = arg3;
    phi_t0 = 1;
    phi_a1 = arg1;
    if (temp_v0 != 0) {
        phi_t1 = (s32) temp_v0->unk258;
    } else {
        phi_t1 = 0x14;
        phi_t0 = 0;
    }
    if (temp_a0 == 0xFFFF) {
        phi_a0 = 0;
        phi_a3 = phi_t1;
        phi_a0_2 = (u8) 0;
        if (phi_t1 > 0) {
            phi_v1 = 0;
            phi_a1 = &D_801FD608;
            do {
                temp_v0_2 = &D_801FD608 + (phi_v1 / 8);
                temp_a0_2 = (phi_a0 + 1) & 0xFF;
                *temp_v0_2 |= 1 << (phi_v1 % 8);
                phi_v1 = temp_a0_2;
                phi_a0 = temp_a0_2;
                phi_a0_2 = (u8) temp_a0_2;
            } while (temp_a0_2 < phi_t1);
        }
    } else {
        temp_v1 = &D_801FD608 + (temp_a0 / 8);
        temp_a0_3 = *temp_v1;
        temp_a2 = 1 << (temp_a0 % 8);
        phi_a0_2 = temp_a0_3;
        phi_a1 = &D_801FD608;
        phi_a2 = temp_a2;
        if ((temp_a0_3 & temp_a2) != 0) {
            phi_t0 = 0;
        } else {
            *temp_v1 = temp_a0_3 | temp_a2;
        }
    }
    if (phi_t0 != 0) {
        sp22 = (u8) phi_t1;
        sp1C = func_80175008(phi_a0_2, phi_a1, phi_a2, phi_a3);
        sp24 = osVoiceStopReadData(&D_801FD5B8);
        func_8017506C(sp1C);
        if ((sp24 == 0) || (D_801FD5A4 == 0)) {
            sp18 = phi_t1;
            sp1C = func_80175008();
            sp24 = osVoiceMaskDictionary(&D_801FD5B8, &D_801FD608, ((s32) (sp18 - 1) / 8) + 1, sp18);
            func_8017506C(sp1C);
        }
        D_801FD5A4 = 0;
    }
    return sp24;
}

s32 func_801A5680(s32 arg0) {
    s32 sp24;
    u8 sp22;
    s32 sp1C;
    s32 sp18;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_v0_2;
    u8 *temp_v1;
    u8 temp_a0_2;
    void *temp_v0;
    u8 phi_t0;
    s32 phi_v0;
    s32 phi_a3;
    u8 phi_a0;
    ? *phi_a1;
    s32 phi_a2;

    temp_v0 = D_801FD5A0;
    temp_a0 = arg0 & 0xFFFF;
    phi_a0 = (u8) temp_a0;
    phi_a3 = 1;
    if (temp_v0 != 0) {
        phi_t0 = temp_v0->unk258;
    } else {
        phi_t0 = 0x14U;
        phi_a3 = 0;
    }
    if (temp_a0 == 0xFFFF) {
        temp_a2 = ((s32) (phi_t0 - 1) / 8) + 1;
        phi_v0 = 0;
        phi_a2 = temp_a2;
        if (temp_a2 > 0) {
            do {
                temp_v0_2 = (phi_v0 + 1) & 0xFF;
                *(&D_801FD608 + phi_v0) = 0;
                phi_v0 = temp_v0_2;
            } while (temp_v0_2 < temp_a2);
        }
        phi_a1 = &D_801FD608;
    } else {
        temp_v1 = &D_801FD608 + (temp_a0 / 8);
        temp_a0_2 = *temp_v1;
        temp_a2_2 = 1 << (temp_a0 % 8);
        phi_a0 = temp_a0_2;
        phi_a1 = &D_801FD608;
        phi_a2 = temp_a2_2;
        if ((temp_a0_2 & temp_a2_2) == 0) {
            phi_a3 = 0;
        } else {
            *temp_v1 = temp_a0_2 & (temp_a2_2 ^ 0xFF);
        }
    }
    if (phi_a3 != 0) {
        sp22 = phi_t0;
        sp1C = func_80175008(phi_a0, phi_a1, phi_a2, phi_a3);
        sp24 = osVoiceStopReadData(&D_801FD5B8);
        func_8017506C(sp1C);
        if ((sp24 == 0) || (D_801FD5A4 == 0)) {
            temp_a2_3 = ((s32) (phi_t0 - 1) / 8) + 1;
            sp18 = temp_a2_3;
            sp1C = func_80175008();
            sp24 = osVoiceMaskDictionary(&D_801FD5B8, &D_801FD608, temp_a2_3);
            func_8017506C(sp1C);
        }
        D_801FD5A4 = 0;
    }
    return sp24;
}

void func_801A5808(void) {
    s32 sp24;
    s32 sp1C;
    s8 temp_v0;
    u8 temp_t7;

    temp_v0 = D_801FD5A0.unk4;
    sp24 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                if (((D_801FD5C8.unk0 & D_801FD5A0.unk10) == 0) && ((s32) D_801FD5A0.unkE >= (s32) D_801FD5C8.unk2) && ((s32) D_801FD5A0.unkC >= (s32) D_801FD5C8.unk14) && ((s32) D_801FD5C8.unk4 >= (s32) D_801FD5A0.unk12) && ((s32) D_801FD5C8.unk6 >= (s32) D_801FD5A0.unk14)) {
                    D_801FD5E8.unk0 = (s32) D_801FD5C8.unk0;
                    D_801FD5A0.unk8 = &D_801FD5E8;
                    D_801FD5E8.unk8 = (s32) D_801FD5C8.unk8;
                    D_801FD5E8.unk4 = (s32) D_801FD5C8.unk4;
                    D_801FD5E8.unk10 = (s32) D_801FD5C8.unk10;
                    D_801FD5E8.unkC = (s32) D_801FD5C8.unkC;
                    D_801FD5E8.unk18 = (s32) D_801FD5C8.unk18;
                    D_801FD5E8.unk14 = (s32) D_801FD5C8.unk14;
                    D_801FD5E8.unk1C = (u16) D_801FD5C8.unk1C;
                }
                sp1C = func_80175008((u8) &D_801FD5C8);
                osVoiceStopReadData(&D_801FD5B8);
                func_8017506C(sp1C);
                sp1C = func_80175008();
                sp24 = osVoiceStartReadData(&D_801FD5B8);
                func_8017506C(sp1C);
                D_801FD5A4 = 1;
            }
        } else {
            sp1C = func_80175008();
            sp24 = osVoiceGetReadData(&D_801FD5B8, &D_801FD5C8);
            func_8017506C(sp1C);
            if (func_801A51F0(sp24) == 0) {
                temp_t7 = D_801FD5C4;
                switch (temp_t7) {
                case 0:
                    D_801FD5A4 = 2;
                    break;
                case 7:
                    D_801FD5A4 = 2;
                    break;
                }
            }
        }
    } else {
        sp1C = func_80175008();
        sp24 = osVoiceStartReadData(&D_801FD5B8);
        func_8017506C(sp1C);
        D_801FD5A4 = 1;
    }
    func_801A51F0(sp24);
}

void func_801A5A10(void) {
    D_801FD5A0 = NULL;
}

void func_801A5A1C(s8 *arg0) {
    s8 sp29;
    s8 sp28;
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s8 temp_t6;
    s8 temp_t8;
    u32 temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    s32 phi_a1;
    s32 phi_a2;
    s32 phi_v1;
    s32 phi_a1_2;

    temp_v0 = strlen(arg0);
    phi_a1 = 0;
    phi_v1 = 0;
    phi_a1_2 = 0;
    if ((temp_v0 & 0xFF) > 0) {
        temp_s3 = temp_v0 & 0xFF;
        phi_a2 = 0;
        do {
            temp_t8 = arg0[phi_a1];
            sp28 = temp_t8;
            temp_t6 = arg0[phi_a2].unk1;
            temp_v0_2 = temp_t8 & 0xFF;
            sp29 = temp_t6;
            if (temp_v0_2 == 0x83) {
                temp_v1 = (phi_v1 + 1) & 0xFF;
                temp_v0_3 = &D_801D8F70 + ((temp_t6 & 0xFF) * 3);
                *(&D_801FD610 + phi_v1) = temp_v0_3->unk-C0;
                *(&D_801FD610 + temp_v1) = temp_v0_3->unk-BF;
                phi_v1 = (temp_v1 + 1) & 0xFF;
            } else if (temp_v0_2 == 0x82) {
                temp_v1_2 = (phi_v1 + 1) & 0xFF;
                temp_v0_4 = &D_801D8E50 + ((u8) sp29 * 3);
                *(&D_801FD610 + phi_v1) = temp_v0_4->unk-1DD;
                *(&D_801FD610 + temp_v1_2) = temp_v0_4->unk-1DC;
                phi_v1 = (temp_v1_2 + 1) & 0xFF;
            } else if ((temp_v0_2 == 0x81) && ((u8) sp29 == 0x5B)) {
                temp_v1_3 = (phi_v1 + 1) & 0xFF;
                *(&D_801FD610 + phi_v1) = 0x2D;
                *(&D_801FD610 + temp_v1_3) = 0x2D;
                phi_v1 = (temp_v1_3 + 1) & 0xFF;
            } else {
                temp_v1_4 = (phi_v1 + 1) & 0xFF;
                *(&D_801FD610 + phi_v1) = 0x20;
                *(&D_801FD610 + temp_v1_4) = 0x20;
                phi_v1 = (temp_v1_4 + 1) & 0xFF;
            }
            temp_a1 = (phi_a2 + 2) & 0xFF;
            phi_a1 = temp_a1;
            phi_a2 = temp_a1;
            phi_a1_2 = temp_a1;
        } while (temp_a1 < temp_s3);
    }
    *(&D_801FD610 + phi_a1_2) = 0;
}

