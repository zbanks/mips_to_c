struct _mips2c_stack_func_80163DC0 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8016418C {};              /* size 0x0 */

struct _mips2c_stack_func_8016424C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_801642D8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80164438 {};              /* size 0x0 */

struct _mips2c_stack_func_8016454C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? *sp18;                             /* inferred */
    /* 0x1C */ char pad_1C[0x20];                   /* maybe part of sp18[9]? */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80164678 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ f64 sp8;                             /* inferred */
    /* 0x10 */ f64 sp10;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801647AC {};              /* size 0x0 */

struct _mips2c_stack_func_801647B8 {};              /* size 0x0 */

? guMtxIdent(s32);                                  /* extern */
void func_80163DC0(void *arg0);                     /* static */
void func_8016418C(void *arg0);                     /* static */
void func_8016424C(void *arg0);                     /* static */
void *func_801642D8(void *arg0, s32 arg1, s32 arg2); /* static */
void func_80164438(? *arg0, s32, void **);          /* static */
void func_8016454C(void *arg0, void **arg1);        /* static */
void func_80164678(void *arg0);                     /* static */
void func_801647AC(s32 arg0);                       /* static */
? func_801647B8(s32 arg0);                          /* static */
static ? D_801D0C80;                                /* unable to generate initializer */

void func_80163DC0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a3;
    s32 temp_ra;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    void *temp_a1;
    void *temp_a1_10;
    void *temp_a1_11;
    void *temp_a1_12;
    void *temp_a1_13;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    s32 phi_ra;
    s32 phi_a0;
    s32 phi_a2;
    void *phi_a1;
    s16 phi_v1;
    s32 phi_t5;
    s32 phi_s3;
    s32 phi_t1;
    s32 phi_v0;
    s32 phi_v1_2;
    s32 phi_v0_2;
    void *phi_a1_2;
    s32 phi_t5_2;
    void *phi_a1_3;
    s32 phi_a2_2;
    s32 phi_s3_2;
    s32 phi_t3;
    s32 phi_t4;
    s32 phi_t2;
    s32 phi_t1_2;
    void *phi_a1_4;
    void *phi_a1_5;
    s32 phi_t5_3;
    s32 phi_s3_3;
    s32 phi_v1_3;
    void *phi_a1_6;
    s32 phi_t5_4;
    s32 phi_s3_4;

    guMtxIdent(arg0 + 0x58);
    guMtxIdent(arg0 + 0x98);
    guOrtho(arg0 + 0x18, 0.0f, 320.0f, 240.0f, 0.0f, -1000.0f, 1000.0f, 1.0f);
    phi_ra = 0;
    phi_t5_3 = 0;
    phi_s3_3 = 0;
    phi_t5_4 = 0;
    phi_s3_4 = 0;
    do {
        arg0->unk_8 = phi_ra;
        phi_t5 = phi_t5_3;
        phi_s3 = phi_s3_3;
        phi_t5_4 = phi_t5_3;
        phi_s3_4 = phi_s3_3;
        if (phi_ra == 0) {
            phi_a1_5 = arg0->unk_10;
        } else {
            phi_a1_5 = arg0->unk_14;
        }
        temp_v1 = arg0->unk_4;
        temp_ra = phi_ra + 1;
        temp_v0 = temp_v1 + 1;
        phi_ra = temp_ra;
        phi_v1_2 = temp_v1;
        phi_v0 = temp_v0;
        phi_v1_3 = temp_v1;
        if (temp_v0 > 0) {
            phi_a0 = arg0->unk_0 + 1;
            do {
                phi_a2 = 0;
                phi_a1 = phi_a1_5;
                phi_t1 = 0;
                if (phi_a0 > 0) {
                    phi_v1 = 0;
                    do {
                        phi_a1->unk_8 = (s16) (phi_a2 << 6);
                        phi_a1->unk_0 = phi_v1;
                        phi_a1->unk_2 = (s16) (phi_t5 << 5);
                        phi_a1->unk_4 = -5;
                        phi_a1->unk_6 = 0;
                        phi_a1->unk_A = (s16) (phi_s3 << 6);
                        phi_a1->unk_C = 0;
                        phi_a1->unk_D = 0;
                        phi_a1->unk_E = 0x78;
                        phi_a1->unk_F = 0xFF;
                        temp_a1 = phi_a1 + 0x10;
                        temp_t1 = phi_t1 + 1;
                        temp_a0 = arg0->unk_0 + 1;
                        phi_a2 += 0x20;
                        phi_a1 = temp_a1;
                        phi_v1 += 0x20;
                        phi_t1 = temp_t1;
                        phi_a0 = temp_a0;
                        phi_a1_5 = temp_a1;
                    } while (temp_t1 < temp_a0);
                    temp_v1_2 = arg0->unk_4;
                    phi_v0 = temp_v1_2 + 1;
                    phi_v1_3 = temp_v1_2;
                }
                temp_t5 = phi_t5 + 1;
                phi_t5 = temp_t5;
                phi_s3 += 0x20;
                phi_v1_2 = phi_v1_3;
            } while (temp_t5 < phi_v0);
        }
        phi_t5_2 = phi_t5_4;
        phi_s3_2 = phi_s3_4;
        phi_t5_3 = phi_t5_4;
        phi_s3_3 = phi_s3_4;
    } while (temp_ra < 2);
    temp_a1_2 = arg0->unk_D8;
    phi_a1_2 = temp_a1_2;
    phi_a1_4 = temp_a1_2;
    if (phi_v1_2 > 0) {
        phi_v0_2 = arg0->unk_0;
        do {
            temp_a0_2 = (phi_v0_2 * 2) + 2;
            phi_a1_2->unk_0 = (s32) (((temp_a0_2 & 0xFF) << 0xC) | 0x1000000 | ((temp_a0_2 & 0x7F) * 2));
            temp_a1_3 = phi_a1_2 + 8;
            temp_s1 = (phi_s3_2 * 4) & 0xFFF;
            temp_s2 = ((phi_s3_2 + 0x20) * 4) & 0xFFF;
            phi_a1_2->unk_4 = (s32) ((phi_t5_2 * (arg0->unk_0 + 1) * 0x10) + 0xA000000);
            phi_a1_3 = temp_a1_3;
            phi_a2_2 = 0;
            phi_t3 = 0;
            phi_t4 = 2;
            phi_t2 = 0;
            phi_t1_2 = 0;
            phi_a1_6 = temp_a1_3;
            if (arg0->unk_0 > 0) {
                do {
                    phi_a1_3->unk_0 = 0xE7000000;
                    phi_a1_3->unk_4 = 0;
                    temp_a1_4 = phi_a1_3 + 8;
                    temp_a1_4->unk_0 = 0xFD10013F;
                    temp_a1_4->unk_4 = 0xB000000;
                    temp_a1_5 = temp_a1_4 + 8;
                    temp_v1_3 = (((0x49 >> 3) & 0x1FF) << 9) | 0xF5100000;
                    temp_a1_5->unk_0 = temp_v1_3;
                    temp_a1_5->unk_4 = 0x7000000;
                    temp_a1_6 = temp_a1_5 + 8;
                    temp_a1_6->unk_0 = 0xE6000000;
                    temp_a1_6->unk_4 = 0;
                    temp_a1_7 = temp_a1_6 + 8;
                    temp_t0 = phi_a2_2 + 0x20;
                    temp_a3 = ((temp_t0 * 4) & 0xFFF) << 0xC;
                    temp_a0_3 = ((phi_a2_2 * 4) & 0xFFF) << 0xC;
                    temp_a1_7->unk_0 = (s32) (temp_a0_3 | 0xF4000000 | temp_s1);
                    temp_a1_7->unk_4 = (s32) (temp_a3 | 0x7000000 | temp_s2);
                    temp_a1_8 = temp_a1_7 + 8;
                    temp_a1_8->unk_0 = 0xE7000000;
                    temp_a1_8->unk_4 = 0;
                    temp_a1_9 = temp_a1_8 + 8;
                    temp_a1_9->unk_0 = temp_v1_3;
                    temp_a1_9->unk_4 = 0;
                    temp_a1_10 = temp_a1_9 + 8;
                    temp_a1_10->unk_4 = (s32) (temp_a3 | temp_s2);
                    temp_a1_10->unk_0 = (s32) (temp_a0_3 | 0xF2000000 | temp_s1);
                    temp_a1_11 = temp_a1_10 + 8;
                    temp_v1_4 = (phi_t3 & 0xFF) << 0x10;
                    temp_a1_11->unk_0 = (s32) (temp_v1_4 | ((phi_t4 & 0xFF) << 8) | ((((phi_t2 + arg0->unk_0) * 2) + 4) & 0xFF) | 0x7000000);
                    temp_a1_12 = temp_a1_11 + 8;
                    temp_a0_4 = (phi_t2 + arg0->unk_0) * 2;
                    temp_a1_11->unk_4 = (s32) (temp_v1_4 | (((temp_a0_4 + 4) & 0xFF) << 8) | ((temp_a0_4 + 2) & 0xFF));
                    temp_t1_2 = phi_t1_2 + 1;
                    phi_a1_3 = temp_a1_12;
                    phi_a2_2 = temp_t0;
                    phi_t3 += 2;
                    phi_t4 += 2;
                    phi_t2 += 1;
                    phi_t1_2 = temp_t1_2;
                    phi_a1_6 = temp_a1_12;
                } while (temp_t1_2 < arg0->unk_0);
            }
            temp_t5_2 = phi_t5_2 + 1;
            phi_v0_2 = arg0->unk_0;
            phi_a1_2 = phi_a1_6;
            phi_t5_2 = temp_t5_2;
            phi_s3_2 += 0x20;
            phi_a1_4 = phi_a1_6;
        } while (temp_t5_2 < arg0->unk_4);
    }
    phi_a1_4->unk_0 = 0xE7000000;
    phi_a1_4->unk_4 = 0;
    temp_a1_13 = phi_a1_4 + 8;
    temp_a1_13->unk_0 = 0xDF000000;
    temp_a1_13->unk_4 = 0;
}

void func_8016418C(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_a2;
    s32 phi_a3;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_a2_2;
    s32 phi_a1;
    s32 phi_v1_2;

    temp_v1 = arg0->unk_4 + 1;
    phi_v0 = 0;
    phi_v1_2 = temp_v1;
    if (temp_v1 > 0) {
        phi_a2 = arg0->unk_0 + 1;
        do {
            phi_a2_2 = phi_a2;
            phi_a1 = 0;
            if (phi_a2 > 0) {
                phi_a3 = 0;
                phi_v1 = 0;
                do {
                    temp_a1 = phi_a1 + 1;
                    *(arg0->unk_C + phi_v1 + (phi_v0 * phi_a2_2 * 8)) = (f32) phi_a3;
                    (arg0->unk_C + phi_v1 + (phi_v0 * (arg0->unk_0 + 1) * 8))->unk_4 = (f32) (phi_v0 << 5);
                    temp_a2 = arg0->unk_0 + 1;
                    phi_a3 += 0x20;
                    phi_v1 += 8;
                    phi_a2_2 = temp_a2;
                    phi_a1 = temp_a1;
                    phi_a2 = temp_a2;
                } while (temp_a1 < temp_a2);
                phi_v1_2 = arg0->unk_4 + 1;
            }
            temp_v0 = phi_v0 + 1;
            phi_v0 = temp_v0;
        } while (temp_v0 < phi_v1_2);
    }
}

void func_8016424C(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    Sleep_Msec(0x64U);
    temp_a0 = arg0->unk_C;
    if (temp_a0 != 0) {
        SystemArena_Free(temp_a0);
        arg0->unk_C = NULL;
    }
    temp_a0_2 = arg0->unk_10;
    if (temp_a0_2 != 0) {
        SystemArena_Free(temp_a0_2);
        arg0->unk_10 = NULL;
    }
    temp_a0_3 = arg0->unk_14;
    if (temp_a0_3 != 0) {
        SystemArena_Free(temp_a0_3);
        arg0->unk_14 = NULL;
    }
    temp_a0_4 = arg0->unk_D8;
    if (temp_a0_4 != 0) {
        SystemArena_Free(temp_a0_4);
        arg0->unk_D8 = NULL;
    }
}

void *func_801642D8(void *arg0, s32 arg1, s32 arg2) {
    s32 sp28;
    u32 sp24;
    s32 temp_lo;
    u32 temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_v0;

    bzero(arg0, 0xE0);
    arg0->unk_8 = 0;
    temp_lo = (arg1 + 1) * (arg2 + 1);
    arg0->unk_0 = arg1;
    arg0->unk_4 = arg2;
    sp28 = temp_lo;
    arg0->unk_C = SystemArena_Malloc(temp_lo * 8);
    temp_a0 = temp_lo * 0x10;
    sp24 = temp_a0;
    arg0->unk_10 = SystemArena_Malloc(temp_a0);
    arg0->unk_14 = SystemArena_Malloc(temp_a0);
    temp_v0 = SystemArena_Malloc((((arg1 * 9) + 1) * arg2 * 8) + 0x10);
    temp_a0_2 = arg0->unk_C;
    arg0->unk_D8 = temp_v0;
    if ((temp_a0_2 == 0) || (arg0->unk_10 == 0) || (arg0->unk_14 == 0) || (temp_v0 == 0)) {
        if (temp_a0_2 != 0) {
            SystemArena_Free(temp_a0_2);
            arg0->unk_C = NULL;
        }
        temp_a0_3 = arg0->unk_10;
        if (temp_a0_3 != 0) {
            SystemArena_Free(temp_a0_3);
            arg0->unk_10 = NULL;
        }
        temp_a0_4 = arg0->unk_14;
        if (temp_a0_4 != 0) {
            SystemArena_Free(temp_a0_4);
            arg0->unk_14 = NULL;
        }
        temp_a0_5 = arg0->unk_D8;
        if (temp_a0_5 != 0) {
            SystemArena_Free(temp_a0_5);
            arg0->unk_D8 = NULL;
        }
        return NULL;
    }
    func_80163DC0(arg0);
    func_8016418C(arg0);
    arg0->unk_8 = 0;
    return arg0;
}

void func_80164438(? *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_a2;
    s32 phi_t1;
    s32 phi_v0;
    s32 phi_a2_2;
    s32 phi_v1;
    s32 phi_a3;
    s32 phi_v1_2;
    s32 phi_a1;
    s32 phi_v1_3;

    temp_v1 = arg0->unk_4 + 1;
    phi_v0 = 0;
    phi_v1_3 = temp_v1;
    if (temp_v1 > 0) {
        phi_a2 = arg0->unk_0 + 1;
        do {
            phi_a2_2 = phi_a2;
            phi_a1 = 0;
            if (phi_a2 > 0) {
                phi_t1 = 0;
                phi_a3 = 0;
                do {
                    if (arg0->unk_8 == 0) {
                        phi_v1 = arg0->unk_10;
                    } else {
                        phi_v1 = arg0->unk_14;
                    }
                    temp_lo = phi_v0 * phi_a2_2;
                    *(phi_v1 + phi_a3 + (temp_lo * 0x10)) = (s16) (s32) *(arg0->unk_C + phi_t1 + (temp_lo * 8));
                    if (arg0->unk_8 == 0) {
                        phi_v1_2 = arg0->unk_10;
                    } else {
                        phi_v1_2 = arg0->unk_14;
                    }
                    temp_a1 = phi_a1 + 1;
                    temp_lo_2 = phi_v0 * (arg0->unk_0 + 1);
                    (phi_v1_2 + phi_a3 + (temp_lo_2 * 0x10))->unk_2 = (s16) (s32) (arg0->unk_C + phi_t1 + (temp_lo_2 * 8))->unk_4;
                    temp_a2 = arg0->unk_0 + 1;
                    phi_t1 += 8;
                    phi_a2_2 = temp_a2;
                    phi_a3 += 0x10;
                    phi_a1 = temp_a1;
                    phi_a2 = temp_a2;
                } while (temp_a1 < temp_a2);
                phi_v1_3 = arg0->unk_4 + 1;
            }
            temp_v0 = phi_v0 + 1;
            phi_v0 = temp_v0;
        } while (temp_v0 < phi_v1_3);
    }
}

void func_8016454C(void *arg0, void **arg1) {
    void *sp3C;
    ? *sp18;
    void **temp_a3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;

    temp_a3 = arg1;
    temp_v0 = *temp_a3;
    temp_v0->unk_4 = &D_801D0C80;
    temp_v0->unk_0 = 0xDE000000;
    temp_v0_2 = temp_v0 + 8;
    sp3C = temp_v0_2;
    sp18 = &D_801D0C80;
    arg1 = temp_a3;
    func_80164438(&D_801D0C80, 0xDE000000, temp_a3);
    temp_v0_2->unk_4 = (s32) (arg0 + 0x18);
    temp_v0_2->unk_0 = 0xDA380007;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk_4 = (s32) (arg0 + 0x58);
    temp_v0_3->unk_0 = 0xDA380003;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->unk_0 = 0xDB060028;
    temp_v0_5 = temp_v0_4 + 8;
    if (arg0->unk_8 == 0) {
        temp_v0_4->unk_4 = (s32) arg0->unk_10;
    } else {
        temp_v0_4->unk_4 = (s32) arg0->unk_14;
    }
    temp_v0_5->unk_0 = 0xDB06002C;
    temp_v0_6 = temp_v0_5 + 8;
    temp_v0_5->unk_4 = (s32) arg0->unk_DC;
    temp_v0_6->unk_0 = 0xDE000000;
    temp_v0_6->unk_4 = &D_801D0C80;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk_0 = 0xDE000000;
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_7->unk_4 = (s32) arg0->unk_D8;
    temp_v0_8->unk_0 = 0xE7000000;
    temp_v0_8->unk_4 = 0;
    arg0->unk_8 = (s32) (arg0->unk_8 ^ 1);
    *arg1 = temp_v0_8 + 8;
}

void func_80164678(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t2;
    s32 phi_a3;
    s32 phi_t0;
    s32 phi_v0;
    s32 phi_a3_2;
    s32 phi_a2;
    f32 phi_f14;
    s32 phi_a1;
    s32 phi_a3_3;
    s32 phi_v1;
    s32 phi_a2_2;
    s32 phi_a2_3;

    temp_v1 = arg0->unk_4 + 1;
    phi_v0 = 0;
    phi_v1 = temp_v1;
    if (temp_v1 > 0) {
        temp_a2 = arg0->unk_0;
        phi_a3 = temp_a2 + 1;
        phi_a2_2 = temp_a2;
        do {
            phi_a3_2 = phi_a3;
            phi_a2 = phi_a2_2;
            phi_a1 = 0;
            if (phi_a3 > 0) {
                phi_t0 = 0;
                do {
                    temp_v1_2 = arg0->unk_C;
                    temp_a1 = phi_a1 + 1;
                    temp_t2 = temp_v1_2 + (phi_a2 << 5);
                    temp_t1 = temp_v1_2 + phi_t0 + (phi_v0 * phi_a3_2 * 8);
                    temp_f2 = temp_t1->unk_0;
                    temp_f0 = temp_f2 - temp_t2->unk_48;
                    temp_f12 = temp_t1->unk_4 - temp_t2->unk_4C;
                    temp_f16 = ((temp_f0 * temp_f0) + (temp_f12 * temp_f12)) / 100.0f;
                    phi_f14 = temp_f16;
                    phi_a1 = temp_a1;
                    phi_a3_3 = phi_a3_2;
                    phi_a2_3 = phi_a2;
                    if (temp_f16 != 0.0f) {
                        if (temp_f16 < 1.0f) {
                            phi_f14 = 1.0f;
                        }
                        temp_t1->unk_0 = (f32) (temp_f2 - (temp_f0 / phi_f14));
                        temp_t1_2 = arg0->unk_C + phi_t0 + (phi_v0 * (arg0->unk_0 + 1) * 8);
                        temp_t1_2->unk_4 = (f32) (temp_t1_2->unk_4 - (temp_f12 / phi_f14));
                        temp_a2_2 = arg0->unk_0;
                        phi_a3_3 = temp_a2_2 + 1;
                        phi_a2_3 = temp_a2_2;
                    }
                    phi_t0 += 8;
                    phi_a3_2 = phi_a3_3;
                    phi_a2 = phi_a2_3;
                    phi_a3 = phi_a3_3;
                    phi_a2_2 = phi_a2_3;
                } while (temp_a1 < phi_a3_3);
                phi_v1 = arg0->unk_4 + 1;
            }
            temp_v0 = phi_v0 + 1;
            phi_v0 = temp_v0;
        } while (temp_v0 < phi_v1);
    }
}

void func_801647AC(s32 arg0) {

}

? func_801647B8(s32 arg0) {
    return 0;
}
