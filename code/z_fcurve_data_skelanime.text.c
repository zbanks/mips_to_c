struct _mips2c_stack_func_800F2620 {};              /* size 0x0 */

struct _mips2c_stack_func_800F2650 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800F26C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F26F0 {};              /* size 0x0 */

struct _mips2c_stack_func_800F2728 {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x10];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_800F29A0 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad_50[0x8];                    /* maybe part of sp4C[3]? */
    /* 0x58 */ u32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ char pad_6E[0x2];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x8];                    /* maybe part of sp78[3]? */
    /* 0x84 */ void *sp84;                          /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_800F2CD8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

f32 func_800F2478(f32, void *, u8);                 /* extern */
void func_800F2620(void *arg0);                     /* static */
? func_800F2650(s32 arg0, void *arg1, void *arg2, ? arg3); /* static */
void func_800F26C0(s32 arg0, void *arg1);           /* static */
void func_800F26F0(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5); /* static */
s32 func_800F2728(void *arg0, u8 *arg1);            /* static */
void func_800F29A0(GraphicsContext **arg0, u8 arg1, void *arg2, s32 (*arg3)(GraphicsContext **, void *, s32, s32), ? (*arg4)(GraphicsContext **, void *, s32, s32), s32 arg5, s32 arg6); /* static */
void func_800F2CD8(s32 arg0, GraphicsContext **arg1, void *arg2, void *arg4, s32 (*arg5)(GraphicsContext **, void *, s32, s32), ? (*arg6)(GraphicsContext **, void *, s32, s32)); /* static */

void func_800F2620(void *arg0) {
    arg0->unk_0 = 0;
    arg0->unk_4 = 0;
    arg0->unk_8 = 0;
    arg0->unk_18 = 0.0f;
    arg0->unk_14 = 0.0f;
    arg0->unk_10 = 0.0f;
    arg0->unk_C = 0.0f;
    arg0->unk_1C = 0;
}

? func_800F2650(s32 arg0, void *arg1, void *arg2, ? arg3) {
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual(arg2);
    arg1->unk_0 = (u8) temp_v0->unk_4;
    arg1->unk_4 = Lib_SegmentedToVirtual(temp_v0->unk_0);
    arg1->unk_1C = zelda_malloc(arg1->unk_0 * 0x12);
    arg1->unk_18 = 0.0f;
    return 1;
}

void func_800F26C0(s32 arg0, void *arg1) {
    void *temp_a0;

    temp_a0 = arg1->unk_1C;
    if (temp_a0 != 0) {
        zelda_free(temp_a0);
    }
}

void func_800F26F0(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    arg0->unk_10 = arg3;
    arg0->unk_C = (f32) (arg2 - arg0->unk_14);
    arg0->unk_18 = arg4;
    arg0->unk_8 = arg1;
    arg0->unk_14 = arg5;
}

s32 func_800F2728(void *arg0, u8 *arg1) {
    s32 sp5C;
    s32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 *temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t2;
    u16 temp_t0;
    u8 temp_a2;
    void *temp_s0;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s4;
    void *temp_s5;
    void *temp_v0;
    void *phi_s3;
    void *phi_s5;
    f32 phi_f0;
    s16 *phi_s0;
    u8 *phi_v1;
    void *phi_s4;
    s32 phi_s2;
    s32 phi_s1;
    u8 *phi_v1_2;
    void *phi_s5_2;
    void *phi_s4_2;

    sp58 = 0;
    temp_v0 = Lib_SegmentedToVirtual(arg1->unk_8);
    temp_s0 = temp_v0;
    temp_s3 = Lib_SegmentedToVirtual(temp_v0->unk_0);
    temp_s4 = Lib_SegmentedToVirtual(temp_s0->unk_4);
    temp_f2 = arg1->unk_14;
    temp_s5 = Lib_SegmentedToVirtual(temp_s0->unk_8);
    arg1->unk_18 = (f32) (arg1->unk_18 + (temp_f2 * ((f32) arg0->unk_A2 * 0.5f)));
    phi_s0 = arg1->unk_1C;
    phi_v1 = arg1;
    if (((temp_f2 >= 0.0f) && (arg1->unk_10 < arg1->unk_18)) || ((temp_f2 < 0.0f) && (arg1->unk_18 < arg1->unk_10))) {
        arg1->unk_18 = arg1->unk_10;
        sp58 = 1;
    }
    sp5C = 0;
    if ((s32) arg1->unk_0 > 0) {
        phi_s3 = temp_s3;
        phi_s5 = temp_s5;
        phi_s4 = temp_s4;
        do {
            phi_s2 = 0;
loop_8:
            phi_s1 = 0;
loop_9:
            temp_a2 = *phi_s3;
            phi_v1_2 = phi_v1;
            phi_s5_2 = phi_s5;
            phi_s4_2 = phi_s4;
            if (temp_a2 == 0) {
                temp_t0 = *phi_s5;
                temp_f0 = (f32) temp_t0;
                phi_f0 = temp_f0;
                if ((s32) temp_t0 < 0) {
                    phi_f0 = temp_f0 + 4294967296.0f;
                }
                *phi_s0 = (s16) (s32) phi_f0;
                phi_s5_2 = phi_s5 + 2;
            } else {
                temp_f0_2 = func_800F2478(phi_v1->unk_18, phi_s4, temp_a2);
                phi_s4_2 = phi_s4 + (*phi_s3 * 0xC);
                if (phi_s2 == 0) {
                    *phi_s0 = (s16) (s32) (temp_f0_2 * 1024.0f);
                } else if (phi_s2 == 1) {
                    *phi_s0 = (s16) (s32) (temp_f0_2 * 182.04445f);
                } else {
                    *phi_s0 = (s16) (s32) (temp_f0_2 * 100.0f);
                }
                phi_v1_2 = arg1;
            }
            temp_s3_2 = phi_s3 + 1;
            temp_s0_2 = phi_s0 + 2;
            temp_s1 = phi_s1 + 1;
            phi_s3 = temp_s3_2;
            phi_s5 = phi_s5_2;
            phi_s0 = temp_s0_2;
            phi_v1 = phi_v1_2;
            phi_s4 = phi_s4_2;
            phi_s1 = temp_s1;
            phi_s3 = temp_s3_2;
            phi_s5 = phi_s5_2;
            phi_s0 = temp_s0_2;
            phi_v1 = phi_v1_2;
            phi_s4 = phi_s4_2;
            phi_s3 = temp_s3_2;
            phi_s5 = phi_s5_2;
            phi_s0 = temp_s0_2;
            phi_v1 = phi_v1_2;
            phi_s4 = phi_s4_2;
            if (temp_s1 != 3) {
                goto loop_9;
            }
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
            if (temp_s2 != 3) {
                goto loop_8;
            }
            temp_t2 = sp5C + 1;
            sp5C = temp_t2;
        } while (temp_t2 < (s32) *phi_v1_2);
    }
    return sp58;
}

void func_800F29A0(GraphicsContext **arg0, s32 arg1, void *arg2, s32 (*arg3)(GraphicsContext **, void *, s32, s32), ? (*arg4)(GraphicsContext **, void *, s32, s32), s32 arg5, s32 arg6) {
    void *sp84;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    u32 sp58;
    Gfx *sp4C;
    Gfx *sp40;
    Gfx *sp38;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s0;
    f32 *temp_a0;
    s16 *temp_a1;
    s16 *temp_v0;
    u32 temp_a1_2;
    u32 temp_a1_3;
    u32 temp_a1_4;
    u8 temp_a1_5;
    u8 temp_a1_6;
    void *temp_v0_2;

    sp84 = Lib_SegmentedToVirtual(*(arg2->unk_4 + (arg1 * 4)));
    temp_s0 = *arg0;
    SysMatrix_StatePush();
    if ((arg3 == 0) || ((arg3 != 0) && (arg3(arg0, arg2, arg1, arg6) != 0))) {
        temp_a0 = &sp5C;
        temp_v0 = arg2->unk_1C + (arg1 * 0x12);
        temp_v0_2 = temp_v0 + 0xC;
        temp_a1 = &sp68;
        sp70 = (f32) *temp_v0 * 0.0009765625f;
        sp74 = (f32) temp_v0_2->unk_-A * 0.0009765625f;
        sp78 = (f32) temp_v0_2->unk_-8 * 0.0009765625f;
        sp68 = temp_v0_2->unk_-6;
        sp6A = temp_v0_2->unk_-4;
        sp6C = temp_v0_2->unk_-2;
        sp5C = (f32) temp_v0_2->unk_0;
        sp60 = (f32) temp_v0_2->unk_2;
        sp64 = (f32) temp_v0_2->unk_4;
        SysMatrix_RotateAndTranslateState((Vec3f *) temp_a0, (Vec3s *) temp_a1);
        Matrix_Scale(sp70, sp74, sp78, 1);
        if (arg5 == 0) {
            temp_a1_2 = sp84->unk_4;
            if (temp_a1_2 != 0) {
                temp_v0_3 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                sp58 = temp_a1_2;
                sp4C = temp_v0_3;
                sp4C->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_4 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = temp_a1_2;
                temp_v0_4->words.w0 = 0xDE000000;
            }
        } else if (arg5 == 1) {
            temp_a1_3 = sp84->unk_4;
            if (temp_a1_3 != 0) {
                temp_v0_5 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDA380003;
                sp58 = temp_a1_3;
                sp40 = temp_v0_5;
                sp40->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_6 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = temp_a1_3;
                temp_v0_6->words.w0 = 0xDE000000;
            }
            temp_a1_4 = sp84->unk_8;
            if (temp_a1_4 != 0) {
                temp_v0_7 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_7 + 8;
                temp_v0_7->words.w0 = 0xDA380003;
                sp58 = temp_a1_4;
                sp38 = temp_v0_7;
                sp38->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_8 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w1 = temp_a1_4;
                temp_v0_8->words.w0 = 0xDE000000;
            }
        }
    }
    if (arg4 != 0) {
        arg4(arg0, arg2, arg1, arg6);
    }
    temp_a1_5 = sp84->unk_0;
    if (temp_a1_5 != 0xFF) {
        func_800F29A0(arg0, temp_a1_5, arg2, arg3, arg4, arg5, arg6);
    }
    SysMatrix_StatePop();
    temp_a1_6 = sp84->unk_1;
    if (temp_a1_6 != 0xFF) {
        func_800F29A0(arg0, temp_a1_6, arg2, arg3, arg4, arg5, arg6);
    }
}

void func_800F2CD8(s32 arg0, GraphicsContext **arg1, void *arg2, void *arg4, s32 (*arg5)(GraphicsContext **, void *, s32, s32), ? (*arg6)(GraphicsContext **, void *, s32, s32)) {
    if (arg2->unk_1C != 0) {
        func_800F29A0(arg1, 0U, arg4, arg5, arg6);
    }
}
