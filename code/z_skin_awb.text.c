struct _mips2c_stack_func_80138410 {};              /* size 0x0 */

struct _mips2c_stack_func_80138424 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8013859C {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80138700 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801387D4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ MtxF *sp24;                          /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x44];
    /* 0x6C */ MtxF *sp6C;                          /* inferred */
    /* 0x70 */ void *sp70;                          /* inferred */
    /* 0x74 */ char pad_74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_801388E4 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x24];
};                                                  /* size = 0x70 */

void func_80138410(void *arg0);                     /* static */
void func_80138424(GlobalContext *arg0, void *arg1, s32 arg2); /* static */
void func_8013859C(GlobalContext *arg0, void *arg1, void *arg2, AnimationHeader *arg3); /* static */
void func_80138700(GlobalContext *arg0, void *arg1); /* static */
s32 func_801387D4(void *arg0, void *arg1, MtxF *arg2, u8 arg3, s32 arg4); /* static */
s32 func_801388E4(void *arg0, MtxF *arg1, void *arg2, s32 arg3); /* static */

void func_80138410(void *arg0) {
    arg0->unk_0 = 0;
    arg0->unk_44 = 0;
    arg0->unk_48 = 0;
}

void func_80138424(GlobalContext *arg0, void *arg1, s32 arg2) {
    s32 temp_s1;
    s32 temp_s5;
    u16 *temp_v1;
    u32 temp_s3;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v1_2;
    void *temp_s0;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_4;
    u32 phi_v1;
    void *phi_s0;
    s32 phi_s5;
    u16 *phi_v1_2;

    temp_v0 = Lib_SegmentedToVirtual(Lib_SegmentedToVirtual(*(Lib_SegmentedToVirtual(*arg1->unk_0) + (arg2 * 4)))->unk_C);
    temp_s4 = temp_v0;
    temp_v0_2 = Lib_SegmentedToVirtual(temp_v0->unk_4);
    temp_s3 = temp_v0_2;
    phi_v1 = (temp_s4->unk_2 * 0x10) + temp_v0_2;
    phi_s5 = 0;
    do {
        temp_s1 = (arg1->unk_48 + (arg2 * 0xC) + phi_s5)->unk_4;
        phi_s0 = (void *) temp_s3;
        if (temp_s3 < phi_v1) {
            do {
                temp_v0_3 = Lib_SegmentedToVirtual(phi_s0->unk_8);
                phi_v1_2 = (u16 *) temp_v0_3;
                if (temp_v0_3 < (u32) ((phi_s0->unk_0 * 0xA) + temp_v0_3)) {
                    do {
                        temp_v1 = phi_v1_2 + 0xA;
                        temp_v0_4 = (*phi_v1_2 * 0x10) + temp_s1;
                        temp_v0_4->unk_6 = 0;
                        temp_v0_4->unk_8 = (s16) temp_v1->unk_-8;
                        temp_v0_4->unk_A = (s16) temp_v1->unk_-6;
                        temp_v0_4->unk_F = (u8) temp_v1->unk_-1;
                        phi_v1_2 = temp_v1;
                    } while ((u32) temp_v1 < (u32) ((phi_s0->unk_0 * 0xA) + temp_v0_3));
                }
                temp_s0 = phi_s0 + 0x10;
                temp_v1_2 = (temp_s4->unk_2 * 0x10) + temp_s3;
                phi_s0 = temp_s0;
                phi_v1 = temp_v1_2;
            } while ((u32) temp_s0 < temp_v1_2);
        }
        temp_s5 = phi_s5 + 4;
        phi_s5 = temp_s5;
    } while (temp_s5 != 8);
}

void func_8013859C(GlobalContext *arg0, void *arg1, void *arg2, AnimationHeader *arg3) {
    s32 temp_s3;
    u8 temp_s6;
    u8 temp_t6;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_s1;
    s32 phi_s4;
    s32 phi_s3;

    temp_v0 = Lib_SegmentedToVirtual(arg2);
    temp_t6 = temp_v0->unk_4;
    arg1->unk_0 = temp_v0;
    arg1->unk_44 = (s32) temp_t6;
    temp_s6 = temp_v0->unk_4;
    temp_s0 = Lib_SegmentedToVirtual(temp_v0->unk_0);
    arg1->unk_48 = zelda_malloc(temp_s6 * 0xC);
    phi_s3 = 0;
    if ((s32) temp_s6 > 0) {
        phi_s1 = temp_s0;
        phi_s4 = 0;
        do {
            temp_s0_2 = arg1->unk_48 + phi_s4;
            if ((Lib_SegmentedToVirtual(*phi_s1)->unk_8 != 4) || (Lib_SegmentedToVirtual(*phi_s1)->unk_C == 0)) {
                temp_s0_2->unk_0 = 0;
                temp_s0_2->unk_4 = NULL;
                temp_s0_2->unk_8 = NULL;
            } else {
                temp_v0_2 = Lib_SegmentedToVirtual(Lib_SegmentedToVirtual(*phi_s1)->unk_C);
                temp_s2 = temp_v0_2;
                temp_s0_2->unk_0 = 0;
                temp_s0_2->unk_4 = zelda_malloc(*temp_v0_2 * 0x10);
                temp_s0_2->unk_8 = zelda_malloc(*temp_s2 * 0x10);
                func_80138424(arg0, arg1, phi_s3);
            }
            temp_s3 = phi_s3 + 1;
            phi_s1 += 4;
            phi_s4 += 0xC;
            phi_s3 = temp_s3;
        } while (temp_s3 != temp_s6);
    }
    SkelAnime_InitSkin(arg0, arg1 + 0x4C, (SkeletonHeader *) arg2, arg3);
}

void func_80138700(GlobalContext *arg0, void *arg1) {
    s32 temp_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v0;
    void *phi_a2;
    s32 phi_s0;
    void *phi_v0;
    s32 phi_s2;
    void *phi_a2_2;
    void *phi_a2_3;

    temp_a2 = arg1->unk_48;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if (temp_a2 != 0) {
        phi_s0 = 0;
        phi_s2 = 0;
        if (arg1->unk_44 > 0) {
            do {
                temp_v0 = phi_a2 + phi_s0;
                temp_a0 = temp_v0->unk_4;
                phi_v0 = temp_v0;
                phi_a2_3 = phi_a2;
                if (temp_a0 != 0) {
                    zelda_free(temp_a0);
                    (arg1->unk_48 + phi_s0)->unk_4 = 0;
                    temp_a2_2 = arg1->unk_48;
                    phi_v0 = temp_a2_2 + phi_s0;
                    phi_a2_3 = temp_a2_2;
                }
                temp_a0_2 = phi_v0->unk_8;
                if (temp_a0_2 != 0) {
                    zelda_free(temp_a0_2);
                    (arg1->unk_48 + phi_s0)->unk_8 = 0;
                    phi_a2_3 = arg1->unk_48;
                }
                temp_s2 = phi_s2 + 1;
                phi_a2 = phi_a2_3;
                phi_s0 += 0xC;
                phi_s2 = temp_s2;
                phi_a2_2 = phi_a2_3;
            } while (temp_s2 < arg1->unk_44);
        }
        if (phi_a2_2 != 0) {
            zelda_free(phi_a2_2);
        }
        SkelAnime_Free(arg1 + 0x4C, arg0);
    }
}

s32 func_801387D4(void *arg0, void *arg1, MtxF *arg2, u8 arg3, u8 arg4) {
    void *sp70;
    MtxF *sp6C;
    ? sp28;
    MtxF *sp24;
    MtxF *temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;

    sp70 = Lib_SegmentedToVirtual(*(arg1 + (arg4 * 4)));
    if (arg3 == 0xFF) {
        SkinMatrix_GetClear(&sp6C);
    } else {
        sp6C = (arg3 << 6) + arg2;
    }
    temp_a1 = (arg4 << 6) + arg2;
    sp24 = temp_a1;
    SkinMatrix_MtxFMtxFMult(sp6C, temp_a1, (MtxF *) &sp28);
    SkinMatrix_MtxFCopy((MtxF *) &sp28, temp_a1);
    temp_v0_3 = sp70->unk_6;
    if ((temp_v0_3 != 0xFF) && (temp_v0_2 = func_801387D4(arg0, arg1, arg2, arg4, (s32) temp_v0_3), (temp_v0_2 != 0))) {
        return temp_v0_2;
    }
    temp_v0_4 = sp70->unk_7;
    if ((temp_v0_4 != 0xFF) && (temp_v0 = func_801387D4(arg0, arg1, arg2, arg3, (s32) temp_v0_4), (temp_v0 != 0))) {
        return temp_v0;
    }
    return 0;
}

s32 func_801388E4(void *arg0, MtxF *arg1, void *arg2, s32 arg3) {
    void *sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0_2;
    void **phi_s2;
    MtxF *phi_s3;
    void *phi_s0;
    s32 phi_s1;

    sp48 = Lib_SegmentedToVirtual(arg0->unk_0->unk_0);
    temp_s0 = arg0->unk_6C;
    temp_s0_2 = temp_s0 + 6;
    temp_f0 = (f32) temp_s0->unk_6;
    temp_f2 = (f32) temp_s0->unk_8;
    temp_f12 = (f32) temp_s0->unk_A;
    if (arg3 != 0) {
        SkinMatrix_SetRotateRPYTranslate(arg1, (s16) (s32) temp_f0, (s16) (s32) temp_f2, (s16) (s32) temp_f12, (f32) temp_s0_2->unk_-6, (f32) temp_s0_2->unk_-4, (f32) temp_s0_2->unk_-2);
    } else {
        SkinMatrix_SetRotateRPYTranslate(arg1, (s16) (s32) temp_f0, (s16) (s32) temp_f2, (s16) (s32) temp_f12, 0.0f, 0.0f, 0.0f);
    }
    phi_s3 = &arg1[1];
    phi_s0 = temp_s0 + 6 + 6;
    phi_s1 = 1;
    if ((s32) arg0->unk_0->unk_4 >= 2) {
        phi_s2 = sp48 + 4;
        do {
            temp_v0_2 = Lib_SegmentedToVirtual(*phi_s2);
            SkinMatrix_SetRotateRPYTranslate(phi_s3, (s16) (s32) (f32) phi_s0->unk_0, (s16) (s32) (f32) phi_s0->unk_2, (s16) (s32) (f32) phi_s0->unk_4, (f32) temp_v0_2->unk_0, (f32) temp_v0_2->unk_2, (f32) temp_v0_2->unk_4);
            temp_s1 = phi_s1 + 1;
            phi_s2 += 4;
            phi_s3 = &phi_s3[1];
            phi_s0 += 6;
            phi_s1 = temp_s1;
        } while (temp_s1 < (s32) arg0->unk_0->unk_4);
    }
    temp_f0_2 = arg2->unk_5C;
    SkinMatrix_SetScaleRotateYRPTranslate(arg0 + 4, arg2->unk_58, temp_f0_2, arg2->unk_60, (s16) (s32) arg2->unk_BC, (s16) (s32) arg2->unk_BE, (s16) (s32) arg2->unk_C0, arg2->unk_24, arg2->unk_28 + (arg2->unk_C4 * temp_f0_2), arg2->unk_2C);
    temp_v0 = func_801387D4(arg0, Lib_SegmentedToVirtual(arg0->unk_0->unk_0), arg1, 0xFFU, 0);
    if (temp_v0 == 0) {
        return temp_v0;
    }
    return 0;
}
