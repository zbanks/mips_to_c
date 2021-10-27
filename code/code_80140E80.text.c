struct _mips2c_stack_func_80140E80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80140EA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80140EAC {};              /* size 0x0 */

struct _mips2c_stack_func_80141008 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8014116C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_801411B4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80141200 {
    /* 0x00 */ char pad_0[0x8C];
    /* 0x8C */ Gfx *sp8C;                           /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_8014151C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80141678 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80141778 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 *sp2C;                           /* inferred */
};                                                  /* size = 0x30 */

s32 func_80182CBC();                                /* extern */
s32 func_80182CCC();                                /* extern */
? guS2DInitBg(void *, void *);                      /* extern */
void func_80140EA0(s32 arg0);                       /* static */
void func_80140EAC(Gfx **arg0, void *arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5); /* static */
void func_80141008(Gfx **arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s32 arg9); /* static */
void func_8014116C(Gfx **arg4, f32 arg5, s32, s32, s32, s32); /* static */
void func_801411B4(Gfx **arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8, f32 arg9, s32, f32, f32, f32, f32, s32); /* static */
void func_80141200(Gfx **arg0, Gfx **arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5); /* static */
void func_8014151C(s32 **arg0, Gfx **arg1, Gfx **arg4, f32 arg5, s32); /* static */
void func_80141678(s32 **arg0, Gfx **arg1, f32 arg2, s32 arg4); /* static */
void func_80141778(u8 *arg0, s32 **arg1, Gfx **arg2); /* static */
extern Gfx *D_0F000000;
static ? D_801ABAB0;                                /* unable to generate initializer */
static ? D_801E3BB0;                                /* unable to generate initializer; const */
s16 D_801FBBCC;
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;

void func_80140E80(void *param_1) {
    bzero(param_1, 0x14);
}

void func_80140EA0(s32 arg0) {

}

void func_80140EAC(Gfx **arg0, void *arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Gfx *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *phi_v0;

    temp_v0 = *arg0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0->words.w1 = 0;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk_0 = (s32) (((arg3 - 1) & 0xFFF) | 0xFF100000);
    temp_v0_2->unk_4 = arg2;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk_0 = 0xED000000;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_3->unk_4 = (s32) ((((s32) ((f32) arg3 * 4.0f) & 0xFFF) << 0xC) | ((s32) ((f32) arg4 * 4.0f) & 0xFFF));
    temp_v0_4->unk_4 = 0xC;
    temp_v0_4->unk_0 = 0xB000000;
    temp_v0_5 = temp_v0_4 + 8;
    if ((arg5 & 1) != 0) {
        temp_v0_5->unk_0 = 0xA000000;
        temp_v0_5->unk_4 = arg1;
        phi_v0 = temp_v0_5 + 8;
    } else {
        temp_v0_5->unk_0 = 0x9000000;
        temp_v0_5->unk_4 = arg1;
        phi_v0 = temp_v0_5 + 8;
    }
    phi_v0->unk_0 = 0xE7000000U;
    phi_v0->unk_4 = 0;
    temp_v0_6 = phi_v0 + 8;
    temp_v0_6->unk_4 = &D_0F000000;
    temp_v0_6->unk_0 = (s32) (((D_801FBBCC - 1) & 0xFFF) | 0xFF100000);
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk_0 = 0xDE000000;
    temp_v0_7->unk_4 = &D_0E0001C8;
    *arg0 = temp_v0_7 + 8;
}

void func_80141008(Gfx **arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s32 arg9) {
    Gfx *sp34;
    Gfx *sp30;
    void *sp2C;
    Gfx **temp_a0;
    Gfx *temp_t7;
    s16 temp_a0_2;
    s16 temp_v1;
    void *temp_v0;

    temp_a0 = &sp30;
    temp_t7 = *arg0;
    sp34 = temp_t7;
    sp30 = temp_t7;
    temp_v0 = Graph_DlistAlloc(temp_a0, 0x28U);
    sp34 = sp30;
    temp_v0->unk_0 = 0;
    temp_v1 = arg3 * 4;
    temp_v0->unk_2 = temp_v1;
    temp_v0->unk_6 = temp_v1;
    temp_v0->unk_8 = 0U;
    temp_v0->unk_4 = (s16) (s32) (arg5 * 4.0f);
    temp_a0_2 = arg4 * 4;
    temp_v0->unk_A = temp_a0_2;
    temp_v0->unk_E = temp_a0_2;
    temp_v0->unk_14 = 0xFFF4;
    temp_v0->unk_16 = 0;
    temp_v0->unk_17 = 2;
    temp_v0->unk_18 = 0;
    temp_v0->unk_1A = 0;
    temp_v0->unk_C = (s16) (s32) (arg6 * 4.0f);
    temp_v0->unk_10 = arg1;
    if ((arg9 & 1) != 0) {
        sp2C = temp_v0;
        guS2DInitBg(temp_v0, temp_v0);
    } else {
        temp_v0->unk_1C = (s16) (s32) (1024.0f / arg7);
        temp_v0->unk_20 = (s32) temp_v0->unk_8;
        temp_v0->unk_1E = (s16) (s32) (1024.0f / arg8);
    }
    func_80140EAC(&sp34, temp_v0, arg2, arg3, arg4, arg9);
    *arg0 = sp34;
}

void func_8014116C(Gfx **arg4, f32 arg5) {
    func_80141008(arg4, 0.0f, 0.0f, 0x3F800000, 0x3F800000, arg5);
}

void func_801411B4(Gfx **arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8, f32 arg9) {
    func_80141008(arg4, arg5, arg6, arg7, arg8, arg9);
}

void func_80141200(Gfx **arg0, Gfx **arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Gfx *sp8C;
    Gfx **temp_a0;
    Gfx *temp_t2;
    Gfx *temp_t4;
    Gfx *temp_t5;
    Gfx *temp_t5_2;
    Gfx *temp_t5_3;
    Gfx *temp_t6;
    Gfx *temp_t6_2;
    Gfx *temp_t6_3;
    Gfx *temp_t6_4;
    Gfx *temp_t6_5;
    Gfx *temp_t8;
    Gfx *temp_t8_2;
    Gfx *temp_t8_3;
    Gfx *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_v1;
    f32 phi_f2;
    f32 phi_f12;

    temp_a0 = &sp8C;
    sp8C = *arg1;
    temp_t8 = sp8C;
    sp8C = temp_t8 + 8;
    temp_t8->words.w1 = 0;
    temp_t8->words.w0 = 0xE7000000;
    temp_t2 = sp8C;
    sp8C = temp_t2 + 8;
    temp_t2->words.w1 = 0;
    temp_t2->words.w0 = 0xEF200000;
    func_8014116C(temp_a0, arg2, arg3, arg4, arg5, 1);
    temp_t6 = sp8C;
    sp8C = &temp_t6[1];
    temp_t6->words.w1 = 0;
    temp_t6->words.w0 = 0xE7000000;
    temp_t8_2 = sp8C;
    sp8C = &temp_t8_2[1];
    temp_t8_2->words.w1 = 0;
    temp_t8_2->words.w0 = 0xEF300000;
    temp_v1 = ((arg0->unk_C << 8) & 0xF800) | ((arg0->unk_D * 8) & 0x7C0) | (((u32) arg0->unk_E >> 2) & 0x3E) | 1;
    temp_t6_2 = sp8C;
    sp8C = &temp_t6_2[1];
    temp_t6_2->words.w0 = 0xF7000000;
    temp_t6_2->words.w1 = (temp_v1 << 0x10) | temp_v1;
    temp_v0 = sp8C;
    sp8C = &temp_v0[1];
    temp_v0->words.w0 = (((arg4 - 1) & 0x3FF) << 0xE) | 0xF6000000 | (((arg5 - 1) & 0x3FF) * 4);
    temp_v0->words.w1 = 0;
    temp_t4 = sp8C;
    sp8C = &temp_t4[1];
    temp_t4->words.w1 = 0;
    temp_t4->words.w0 = 0xE7000000;
    temp_t8_3 = sp8C;
    sp8C = &temp_t8_3[1];
    temp_t8_3->words.w0 = ((s32) (arg0[2] * 255.0f) & 0xFF) | 0xFA000000;
    temp_t8_3->words.w1 = (u32) arg0[3];
    temp_t6_3 = sp8C;
    if (arg0->unk_13 == 0) {
        temp_t6_4 = sp8C;
        sp8C = &temp_t6_4[1];
        temp_t6_4->words.w0 = 0xEF002CF0;
        temp_t6_4->words.w1 = 0xA03009;
        temp_t5 = sp8C;
        sp8C = &temp_t5[1];
        temp_t5->words.w0 = 0xFC377E6E;
        temp_t5->words.w1 = 0x11FCFC7E;
    } else {
        sp8C = &temp_t6_3[1];
        temp_t6_3->words.w0 = 0xEF000CF0;
        temp_t6_3->words.w1 = 0x404340;
        temp_t5_2 = sp8C;
        sp8C = &temp_t5_2[1];
        temp_t5_2->words.w0 = 0xFB000000;
        temp_t5_2->words.w1 = arg0[4];
        temp_t6_5 = sp8C;
        sp8C = &temp_t6_5[1];
        temp_t6_5->words.w1 = 0x5566DB6D;
        temp_t6_5->words.w0 = 0xFC30B261;
    }
    temp_f0 = arg0[1];
    if (temp_f0 > 1.0f) {
        phi_f2 = 1.0f;
    } else {
        if (temp_f0 < 0.032f) {
            phi_f12 = 0.032f;
        } else {
            phi_f12 = temp_f0;
        }
        phi_f2 = phi_f12;
    }
    temp_f0_2 = 1.0f - phi_f2;
    func_801411B4((bitwise Gfx **) 0.5f, 1.0f, (bitwise f32) &sp8C, arg3, (bitwise s32) arg2, (bitwise f32) arg4, arg5, (f32) arg4 * 0.5f * temp_f0_2, (f32) arg5 * 0.5f * temp_f0_2, phi_f2, phi_f2, 0);
    temp_t5_3 = sp8C;
    sp8C = &temp_t5_3[1];
    temp_t5_3->words.w1 = 0;
    temp_t5_3->words.w0 = 0xE7000000;
    *arg1 = sp8C;
}

void func_8014151C(s32 **arg0, Gfx **arg1, Gfx **arg4, f32 arg5) {
    Gfx *sp3C;
    Gfx *temp_t0;
    Gfx *temp_t2;
    Gfx *temp_t3;
    Gfx *temp_t5;
    Gfx *temp_v0;
    s32 temp_v1;

    if (arg0[1] < 1.0f) {
        sp3C = *arg1;
        temp_t0 = sp3C;
        if (arg0[1] > 0.032f) {
            func_80141200(&sp3C, arg4, arg5);
        } else {
            sp3C = temp_t0 + 8;
            temp_t0->words.w1 = 0;
            temp_t0->words.w0 = 0xE7000000;
            temp_t2 = sp3C;
            sp3C = temp_t2 + 8;
            temp_t2->words.w1 = 0;
            temp_t2->words.w0 = 0xEF300000;
            temp_v1 = ((arg0->unk_C << 8) & 0xF800) | ((arg0->unk_D * 8) & 0x7C0) | (((u32) arg0->unk_E >> 2) & 0x3E) | 1;
            temp_t5 = sp3C;
            sp3C = temp_t5 + 8;
            temp_t5->words.w0 = 0xF7000000;
            temp_t5->words.w1 = (temp_v1 << 0x10) | temp_v1;
            temp_v0 = sp3C;
            sp3C = temp_v0 + 8;
            temp_v0->words.w0 = (((s32) (arg4 - 1) & 0x3FF) << 0xE) | 0xF6000000 | ((((bitwise s32) arg5 - 1) & 0x3FF) * 4);
            temp_v0->words.w1 = 0;
            temp_t3 = sp3C;
            sp3C = temp_t3 + 8;
            temp_t3->words.w1 = 0;
            temp_t3->words.w0 = 0xE7000000;
        }
        *arg1 = sp3C;
    }
}

void func_80141678(s32 **arg0, Gfx **arg1, f32 arg2, s32 arg4) {
    Gfx *sp3C;
    Gfx **temp_a0;
    Gfx *temp_t1;
    Gfx *temp_t3;
    Gfx *temp_t5;
    Gfx *temp_t8;
    Gfx *temp_t9;
    Gfx *temp_t9_2;

    sp3C = *arg1;
    temp_t8 = sp3C;
    sp3C = temp_t8 + 8;
    temp_t8->words.w1 = 0;
    temp_t8->words.w0 = 0xE7000000;
    temp_t1 = sp3C;
    sp3C = temp_t1 + 8;
    temp_t1->words.w1 = 0x404340;
    temp_t1->words.w0 = 0xEF000CF0;
    temp_t5 = sp3C;
    sp3C = temp_t5 + 8;
    temp_t5->words.w0 = 0xFA000000;
    temp_t5->words.w1 = arg0[3];
    temp_t9 = sp3C;
    sp3C = temp_t9 + 8;
    temp_t9->words.w0 = 0xFB000000;
    temp_a0 = &sp3C;
    temp_t9->words.w1 = arg0[4];
    temp_t3 = sp3C;
    sp3C = temp_t3 + 8;
    temp_t3->words.w1 = 0x5566DB6D;
    temp_t3->words.w0 = 0xFC30B261;
    func_8014116C(temp_a0, arg2, (bitwise s32) arg2, arg4, 0);
    temp_t9_2 = sp3C;
    sp3C = &temp_t9_2[1];
    temp_t9_2->words.w1 = 0;
    temp_t9_2->words.w0 = 0xE7000000;
    *arg1 = sp3C;
}

void func_80141778(u8 *arg0, s32 **arg1, Gfx **arg2) {
    s32 *sp2C;
    s32 *sp24;
    s32 **temp_a1;
    s32 *temp_t2;
    s32 *temp_t2_2;
    s32 *temp_t8;
    s32 *temp_t9;
    u8 temp_v0;

    temp_a1 = &sp2C;
    sp2C = *arg1;
    temp_t8 = sp2C;
    sp2C = temp_t8 + 8;
    temp_t8[1] = &D_801E3BB0 - 0x80000000;
    temp_t8->unk_0 = (void *)0xE1000000;
    temp_t2 = sp2C;
    sp2C = temp_t2 + 8;
    temp_t2[1] = &D_801ABAB0 - 0x80000000;
    temp_t2->unk_0 = (void *)0xDD0007FF;
    temp_v0 = *arg0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else {
            func_80141678(&sp2C, &D_0F000000, (bitwise f32) gScreenWidth, gScreenHeight);
        }
    } else {
        func_8014151C(temp_a1, &D_0F000000, arg2, (bitwise f32) gScreenWidth, gScreenHeight);
    }
    temp_t9 = sp2C;
    sp2C = temp_t9 + 8;
    temp_t9->unk_0 = (void *)0xE1000000;
    sp24 = temp_t9;
    sp24[1] = func_80182CCC();
    temp_t2_2 = sp2C;
    sp2C = temp_t2_2 + 8;
    temp_t2_2->unk_0 = (void *)0xDD0007FF;
    sp24 = temp_t2_2;
    sp24[1] = func_80182CBC();
    *arg1 = sp2C;
}
