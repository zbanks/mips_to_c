struct _mips2c_stack_func_80196A00 {};              /* size 0x0 */

struct _mips2c_stack_func_80196BC8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80196D20 {};              /* size 0x0 */

struct _mips2c_stack_func_80196D7C {};              /* size 0x0 */

struct _mips2c_stack_func_80196DB4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80196FEC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80197048 {};              /* size 0x0 */

struct _mips2c_stack_func_80197138 {};              /* size 0x0 */

struct _mips2c_stack_func_80197164 {};              /* size 0x0 */

struct _mips2c_stack_func_80197188 {};              /* size 0x0 */

? func_80197D4C(void *);                            /* extern */
void func_80196A00(u32 *arg0, u32 arg1, s32 arg2);  /* static */
void func_80196BC8(void *arg0);                     /* static */
f32 func_80196D20(void *arg0, void *);              /* static */
s16 func_80196D7C(void *arg0);                      /* static */
f32 func_80196DB4(void *arg0, void *);              /* static */
void func_80196FEC(void *arg0);                     /* static */
void func_80197048(void *arg0);                     /* static */
void func_80197138(void *arg0);                     /* static */
void func_80197164(void *arg0, s32 arg1, ? arg2);   /* static */
f32 func_80197188(void *arg0);                      /* static */
static void D_801D4190;                             /* unable to generate initializer */
static ? D_801D4FB4;                                /* unable to generate initializer */
static f32 D_801D6190 = 0.0f;
static s32 D_801D6194[27] = {
    0,
    0,
    0,
    0x81008100,
    0x1004201,
    0xC2000000,
    0,
    0x81008101,
    0x81,
    0x1010142,
    0x81810100,
    0x18100,
    0x142,
    0x1010181,
    0x1018181,
    0x1010101,
    0x1010101,
    0x1018101,
    0x1018101,
    0x1030301,
    0x10181,
    0x3010002,
    0x10182,
    0x10101,
    0x1810000,
    0x1818181,
    0x81000000,
};
static f32 D_80203500[10];
void *D_801D4D98 = &D_801D4190;

void func_80196A00(u32 *arg0, u32 arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_a2;
    u8 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    f32 phi_f0;
    u32 *phi_a3;
    f32 phi_f0_2;
    s32 phi_a2;

    phi_a3 = arg0;
    if (((arg0->unk0 << 9) < 0) || (arg1 != 0)) {
        temp_v0 = arg0->unk50;
        temp_f0 = arg0->unk30 * arg0->unk2C * temp_v0->unk30;
        phi_f0 = temp_f0;
        if (((temp_v0->unk0 * 4) < 0) && ((arg0->unk3 & 0x20) != 0)) {
            phi_f0 = temp_v0->unk28 * temp_f0;
        }
        arg0->unk38 = (f32) (phi_f0 * phi_f0);
    }
    if (arg0->unk0 & 0x200000) {
        arg0->unk34 = (s32) (arg0->unkA * arg0->unkB);
    }
    temp_f0_2 = arg0->unk3C;
    phi_f0_2 = temp_f0_2;
    if (arg2 != 0) {
        arg0->unk1 = (u8) (arg0->unk1 | 0x80);
        phi_f0_2 = temp_f0_2 * arg0->unk50->unk34;
    }
    phi_a2 = 0;
    do {
        temp_v1 = phi_a3->unk54;
        temp_a2 = phi_a2 + 4;
        phi_a2 = temp_a2;
        if ((temp_v1 != 0) && (((u32) temp_v1->unk0 >> 0x1F) != 0) && (temp_v1->unk3C != 0)) {
            temp_v0_2 = (u8) temp_v1->unk0;
            if ((temp_v0_2 & 1) != 0) {
                temp_v1->unk54 = (f32) (temp_v1->unk40 * phi_f0_2);
                temp_v1->unk50 = (f32) (temp_v1->unk48 * arg0->unk38);
                temp_v1->unk0 = (s8) (temp_v0_2 & 0xFFFE);
                temp_v1->unk7 = (s8) ((s32) (arg0->unk34 + (temp_v1->unk6 * (0x80 - arg0->unkB))) >> 7);
            } else {
                if ((s32) (s8) arg0->unk1 < 0) {
                    temp_v1->unk54 = (f32) (temp_v1->unk40 * phi_f0_2);
                }
                if (((arg0->unk0 << 9) < 0) || (arg1 != 0)) {
                    temp_v1->unk50 = (f32) (temp_v1->unk48 * arg0->unk38);
                }
                if (arg0->unk0 & 0x200000) {
                    temp_v1->unk7 = (s8) ((s32) (arg0->unk34 + (temp_v1->unk6 * (0x80 - arg0->unkB))) >> 7);
                }
            }
        }
        phi_a3 += 4;
    } while (temp_a2 != 0x10);
    arg0->unk1 = 0U;
}

void func_80196BC8(void *arg0) {
    s32 temp_s0;
    u16 temp_t2;
    u32 *temp_a0;
    void *phi_s1;
    s32 phi_s0;

    phi_s1 = arg0;
    phi_s0 = 0;
    if ((arg0->unk12 != 0) && (arg0->unkDC == 0)) {
        arg0->unk1C = (f32) (arg0->unk1C + arg0->unk20);
        arg0->unk0 = (u8) (arg0->unk0 | 4);
        if (arg0->unk1C > 1.0f) {
            arg0->unk1C = 1.0f;
        }
        if (arg0->unk1C < 0.0f) {
            arg0->unk1C = 0.0f;
        }
        temp_t2 = arg0->unk12 - 1;
        arg0->unk12 = temp_t2;
        if (((temp_t2 & 0xFFFF) == 0) && (arg0->unk1 == 2)) {
            func_80197D4C(arg0);
            return;
        }
        goto block_9;
    }
block_9:
    if ((s32) arg0->unk0 & 0x4000000) {
        arg0->unk30 = (f32) (arg0->unk1C * arg0->unk2C);
    }
    do {
        temp_a0 = phi_s1->unk38;
        if (((u32) *temp_a0 >> 0x1F) == 1) {
            func_80196A00(temp_a0, (u32) ((s32) arg0->unk0 << 5) >> 0x1F, arg0->unk0 & 1);
        }
        temp_s0 = phi_s0 + 4;
        phi_s1 += 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x40);
    arg0->unk0 = (u8) (arg0->unk0 & 0xFFFB);
}

f32 func_80196D20(void *arg0) {
    u16 temp_v0;
    u32 temp_v0_2;
    u32 phi_v0;

    temp_v0 = arg0->unk2 + arg0->unk4;
    arg0->unk2 = temp_v0;
    temp_v0_2 = ((s32) temp_v0 >> 8) & 0xFF;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 >= 0x7FU) {
        arg0->unk0 = 0;
        phi_v0 = 0x7FU;
    }
    return ((*(&D_801D4FB4 + (phi_v0 * 4)) - 1.0f) * arg0->unk8) + 1.0f;
}

s16 func_80196D7C(void *arg0) {
    s32 temp_t1;
    u32 temp_t9;

    temp_t9 = arg0->unk4 + (s32) arg0->unk10;
    temp_t1 = ((temp_t9 >> 0xA) & 0x3F) * 2;
    arg0->unk4 = temp_t9;
    return *(arg0->unk8 + temp_t1);
}

f32 func_80196DB4(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    void *temp_v1;
    f32 phi_f6;
    f32 phi_f8;
    void *phi_a1;

    temp_v0 = arg0->unk1A;
    temp_v1 = arg0->unk0;
    phi_a1 = arg1;
    phi_a1 = arg1;
    if (temp_v0 != 0) {
        arg0->unk1A = (u16) (temp_v0 - 1);
        return 1.0f;
    }
    if (temp_v1 != 0) {
        temp_v0_2 = arg0->unk18;
        if (temp_v0_2 != 0) {
            phi_a1 = (void *) temp_v0_2;
            if (temp_v0_2 == 1) {
                phi_f6 = (f32) temp_v1->unk6;
            } else {
                temp_f0_2 = arg0->unkC;
                phi_f6 = temp_f0_2 + (((f32) temp_v1->unk6 - temp_f0_2) / (f32) temp_v0_2);
            }
            arg0->unkC = phi_f6;
            arg0->unk18 = (u16) (arg0->unk18 - 1);
        } else if ((s32) arg0->unkC != temp_v1->unk6) {
            temp_v0_3 = temp_v1->unkA;
            arg0->unk18 = temp_v0_3;
            if (temp_v0_3 == 0) {
                arg0->unkC = (f32) temp_v1->unk6;
            }
        }
        temp_v0_4 = arg0->unk16;
        if (temp_v0_4 != 0) {
            phi_a1 = (void *) temp_v0_4;
            if (temp_v0_4 == 1) {
                phi_f8 = (f32) temp_v1->unk4;
            } else {
                temp_f0_3 = arg0->unk10;
                phi_f8 = temp_f0_3 + (((f32) temp_v1->unk4 - temp_f0_3) / (f32) temp_v0_4);
            }
            arg0->unk10 = phi_f8;
            arg0->unk16 = (u16) (arg0->unk16 - 1);
        } else if ((s32) arg0->unk10 != temp_v1->unk4) {
            temp_v0_5 = temp_v1->unk8;
            arg0->unk16 = temp_v0_5;
            if (temp_v0_5 == 0) {
                arg0->unk10 = (f32) temp_v1->unk4;
            }
        }
    }
    if (arg0->unkC == 0.0f) {
        return 1.0f;
    }
    temp_f2 = (arg0->unkC * 0.00024414062f) + 1.0f;
    temp_f12 = 1.0f / temp_f2;
    temp_f0 = 1.0f / ((((temp_f2 - temp_f12) * ((f32) func_80196D7C(phi_a1) + 32768.0f)) / 65536.0f) + temp_f12);
    D_801D6190 += temp_f0;
    *D_801D6194 = *D_801D6194 + 1;
    return temp_f0;
}

void func_80196FEC(void *arg0) {
    void *temp_a0;
    void *temp_a1;
    void *phi_a1;

    temp_a1 = arg0;
    temp_a0 = arg0 + 0x88;
    phi_a1 = temp_a1;
    if (arg0->unk88 != 0) {
        arg0 = temp_a1;
        arg0->unk3C = func_80196D20(temp_a0, temp_a1);
        phi_a1 = arg0;
    }
    if (phi_a1->unkA8 != 0) {
        arg0 = phi_a1;
        arg0->unk40 = func_80196DB4(phi_a1 + 0x94, phi_a1);
    }
}

void func_80197048(void *arg0) {
    s32 *temp_v1;
    s32 *temp_v1_2;
    u16 temp_a1;
    u16 temp_a1_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    s32 *phi_v1;
    void *phi_v0;

    arg0->unkA8 = 1;
    arg0->unk9C = (void *) D_801D4D98;
    temp_v0 = arg0 + 0x34;
    phi_v0 = temp_v0;
    if (((u32) (arg0->unk48->unk8 << 0x13) >> 0x1F) == 1) {
        temp_v0_2 = arg0 + 0x34;
        temp_v1 = arg0 + 0x94;
        *temp_v1 = temp_v0_2->unk14->unk60 + 0x12;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0_2;
    } else {
        temp_v1_2 = arg0 + 0x94;
        *temp_v1_2 = temp_v0->unk14 + 0xC;
        phi_v1 = temp_v1_2;
    }
    temp_a0 = phi_v1->unk0;
    temp_a1 = temp_a0->unkA;
    phi_v1->unk18 = temp_a1;
    if (temp_a1 == 0) {
        phi_v1->unkC = (f32) temp_a0->unk6;
    } else {
        phi_v1->unkC = (f32) temp_a0->unk2;
    }
    temp_a1_2 = temp_a0->unk8;
    phi_v1->unk16 = temp_a1_2;
    if (temp_a1_2 == 0) {
        phi_v1->unk10 = (f32) temp_a0->unk4;
    } else {
        phi_v1->unk10 = (f32) temp_a0->unk0;
    }
    phi_v0->unkC = 1.0f;
    phi_v1->unk4 = 0;
    phi_v1->unk1A = (u16) temp_a0->unkC;
}

void func_80197138(void *arg0) {
    void *temp_t6;

    temp_t6 = arg0->unk48;
    arg0->unk3C = 1.0f;
    arg0->unk88 = (s32) temp_t6->unk30;
    arg0->unk8C = (s32) temp_t6->unk34;
    arg0->unk90 = (s32) temp_t6->unk38;
}

void func_80197164(void *arg0, s32 arg1, ? arg2) {
    arg0->unk0 = 0;
    arg0->unk2 = 0;
    arg0->unk1C = arg1;
    arg0->unk4 = 0.0f;
    arg0->unk10 = 0.0f;
    arg0->unk8 = 0.0f;
}

f32 func_80197188(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_a1;
    s32 temp_v0_4;
    u32 temp_v0;
    u8 temp_t0;
    u8 temp_t3;
    u8 temp_v0_3;
    u8 temp_v1;
    void *temp_v0_2;
    s32 phi_v0;

    temp_v1 = arg0->unk0;
    temp_v0 = temp_v1 & 0xF;
    switch (temp_v0) {
    case 0:
        return 0.0f;
    case 1:
        if (((s32) arg0->unk0 * 2) < 0) {
            arg0->unk0 = (u8) ((temp_v1 & 0xFFF0) | 5);
        } else {
        case 2:
            arg0->unk1 = 0U;
            arg0->unk0 = (u8) ((temp_v1 & 0xFFF0) | 3);
        case 3:
loop_6:
            temp_v0_2 = arg0->unk1C + (arg0->unk1 * 4);
            arg0->unk2 = (s16) temp_v0_2->unk0;
            temp_a1 = arg0->unk2;
            if (temp_a1 != -3) {
                if (temp_a1 != -2) {
                    if (temp_a1 != -1) {
                        if (temp_a1 == 0) {
                            arg0->unk0 = (u8) (arg0->unk0 & 0xFFF0);
                        } else {
                            arg0->unk2 = (s16) (s32) ((f32) temp_a1 * *D_80203500);
                            if (arg0->unk2 == 0) {
                                arg0->unk2 = 1;
                            }
                            temp_v0_3 = arg0->unk1;
                            temp_f4 = (f32) (arg0->unk1C + (temp_v0_3 * 4))->unk2;
                            arg0->unk0 = (u8) ((arg0->unk0 & 0xFFF0) | 4);
                            arg0->unk1 = (u8) (temp_v0_3 + 1);
                            arg0->unk14 = (f32) (temp_f4 / 32767.0f);
                            temp_f0 = arg0->unk14;
                            arg0->unk14 = (f32) (temp_f0 * temp_f0);
                            arg0->unk8 = (f32) ((arg0->unk14 - arg0->unk10) / (f32) arg0->unk2);
                        }
                    } else {
                        arg0->unk0 = (u8) ((arg0->unk0 & 0xFFF0) | 5);
                    }
                } else {
                    arg0->unk1 = (u8) temp_v0_2->unk2;
                    goto loop_6;
                }
            } else {
                arg0->unk0 = (u8) ((arg0->unk0 & 0xFFF0) | 1);
            }
            if ((arg0->unk0 & 0xF) == 4) {
            case 4:
                arg0->unk2 = (s16) (arg0->unk2 - 1);
                arg0->unk10 = (f32) (arg0->unk10 + arg0->unk8);
                if ((s32) arg0->unk2 <= 0) {
                    arg0->unk0 = (u8) ((arg0->unk0 & 0xFFF0) | 3);
                }
            }
        }
    default:
block_28:
        temp_v0_4 = (s32) arg0->unk0;
        phi_v0 = temp_v0_4;
        if ((temp_v0_4 * 4) < 0) {
            temp_t3 = (arg0->unk0 & 0xFFF0) | 6;
            arg0->unk0 = temp_t3;
            arg0->unk0 = (u8) (temp_t3 & 0xDF);
            phi_v0 = (s32) arg0->unk0;
        }
        if ((phi_v0 * 8) < 0) {
            temp_t0 = (arg0->unk0 & 0xFFF0) | 7;
            arg0->unk0 = temp_t0;
            arg0->unk0 = (u8) (temp_t0 & 0xEF);
        }
        temp_f2 = arg0->unk10;
        if (temp_f2 < 0.0f) {
            return 0.0f;
        }
        if (temp_f2 > 1.0f) {
            return 1.0f;
        }
        return temp_f2;
    case 6:
    case 7:
        temp_f0_2 = arg0->unk4;
        arg0->unk10 = (f32) (arg0->unk10 - arg0->unkC);
        if ((temp_f0_2 != 0.0f) && (temp_v0 == 6)) {
            if (arg0->unk10 < temp_f0_2) {
                arg0->unk10 = temp_f0_2;
                arg0->unk2 = 0x80;
                arg0->unk0 = (u8) ((arg0->unk0 & 0xFFF0) | 8);
            }
        } else if (arg0->unk10 < 0.00001f) {
            arg0->unk10 = 0.0f;
            arg0->unk0 = (u8) (arg0->unk0 & 0xFFF0);
        }
        goto block_28;
    case 8:
        arg0->unk2 = (s16) (arg0->unk2 - 1);
        if (arg0->unk2 == 0) {
            arg0->unk0 = (u8) ((arg0->unk0 & 0xFFF0) | 7);
        }
        goto block_28;
    }
}
