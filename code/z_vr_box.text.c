struct _mips2c_stack_func_80142440 {
    /* 0x000 */ char pad_0[0x40];
    /* 0x040 */ s32 sp40;                           /* inferred */
    /* 0x044 */ char pad_44[0xE0];                  /* maybe part of sp40[57]? */
    /* 0x124 */ ? sp124;                            /* inferred */
    /* 0x124 */ char pad_124[0x64];
    /* 0x188 */ s32 sp188;                          /* inferred */
    /* 0x18C */ char pad_18C[0x60];                 /* maybe part of sp188[25]? */
    /* 0x1EC */ ? sp1EC;                            /* inferred */
    /* 0x1EC */ char pad_1EC[0x64];
    /* 0x250 */ ? sp250;                            /* inferred */
    /* 0x250 */ char pad_250[0x64];
    /* 0x2B4 */ ? sp2B4;                            /* inferred */
    /* 0x2B4 */ char pad_2B4[0x6A];
    /* 0x31E */ s16 sp31E;                          /* inferred */
    /* 0x320 */ s16 sp320;                          /* inferred */
    /* 0x322 */ char pad_322[0x16];
};                                                  /* size = 0x338 */

struct _mips2c_stack_func_80143148 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_801431E8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80143324 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ void **sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_801434E4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ TwoHeadArena *sp20;                  /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

s32 D_801C5E30[6] = {0, 0x2000, 0x4000, 0x6000, 0x8000, 0xC000};
u16 D_801C5E48[32] = {
    0,
    2,
    0xA,
    0xC,
    2,
    4,
    0xC,
    0xE,
    0xA,
    0xC,
    0x14,
    0x16,
    0xC,
    0xE,
    0x16,
    0x18,
    1,
    3,
    5,
    6,
    7,
    8,
    9,
    0xB,
    0xD,
    0xF,
    0x10,
    0x11,
    0x12,
    0x13,
    0x15,
    0x17,
};
s32 D_801C5E88[5] = {0, 0x7C0, 0xF80, 0x1740, 0x1F00};
s32 D_801C5E9C[5] = {0, 0x7C0, 0xF80, 0x1740, 0x1F00};
s32 D_801C5EB0[5] = {0, 0x7C0, 0xF80, 0x7C0, 0};
s16 D_801C5EC4[64] = {
    0,
    0x10,
    0x13,
    0x12,
    0x10,
    1,
    0x14,
    0x13,
    1,
    0x11,
    0x15,
    0x14,
    0x11,
    5,
    0x16,
    0x15,
    0x12,
    0x13,
    0x17,
    2,
    0x13,
    0x14,
    3,
    0x17,
    0x14,
    0x15,
    0x18,
    3,
    0x15,
    0x16,
    7,
    0x18,
    2,
    0x17,
    0x1A,
    0x19,
    0x17,
    3,
    0x1B,
    0x1A,
    3,
    0x18,
    0x1C,
    0x1B,
    0x18,
    7,
    0x1D,
    0x1C,
    0x19,
    0x1A,
    0x1E,
    0xA,
    0x1A,
    0x1B,
    0xB,
    0x1E,
    0x1B,
    0x1C,
    0x1F,
    0xB,
    0x1C,
    0x1D,
    0xF,
    0x1F,
};
struct_801C5F44 D_801C5F44[6] = {
    {0xFFFFFFC0, 0x40, 0xFFFFFFC0, 0x20, 0xFFFFFFE0},
    {0x40, 0x40, 0x40, 0xFFFFFFE0, 0xFFFFFFE0},
    {0xFFFFFFC0, 0x40, 0x40, 0xFFFFFFE0, 0xFFFFFFE0},
    {0x40, 0x40, 0xFFFFFFC0, 0x20, 0xFFFFFFE0},
    {0xFFFFFFC0, 0x40, 0x40, 0x20, 0xFFFFFFE0},
    {0xFFFFFFC0, 0xFFFFFFC0, 0xFFFFFFC0, 0x20, 0x20},
};

s32 func_80142440(SkyboxContext *skyboxCtx, Vtx *vtx, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s16 sp320;
    s16 sp31E;
    ? sp2B4;
    ? sp250;
    ? sp1EC;
    s32 sp188;
    ? sp124;
    s32 sp40;
    ? *temp_a1;
    ? *temp_a1_2;
    ? *temp_a2;
    ? *temp_a2_2;
    ? *temp_a2_3;
    ? *temp_a3;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_24;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_30;
    Gfx *temp_v1_31;
    Gfx *temp_v1_32;
    Gfx *temp_v1_33;
    Gfx *temp_v1_34;
    Gfx *temp_v1_35;
    Gfx *temp_v1_36;
    Gfx *temp_v1_37;
    Gfx *temp_v1_38;
    Gfx *temp_v1_39;
    Gfx *temp_v1_40;
    Gfx *temp_v1_41;
    Gfx *temp_v1_42;
    Gfx *temp_v1_43;
    Gfx *temp_v1_44;
    Gfx *temp_v1_45;
    Gfx *temp_v1_46;
    Gfx *temp_v1_47;
    Gfx *temp_v1_48;
    Gfx *temp_v1_49;
    Gfx *temp_v1_4;
    Gfx *temp_v1_50;
    Gfx *temp_v1_51;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    Vtx *temp_a1_3;
    s16 *temp_v0_10;
    s16 *temp_v0_12;
    s16 *temp_v0_8;
    s16 temp_s2;
    s16 temp_s2_2;
    s16 temp_s2_3;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t5_3;
    s16 temp_v0_11;
    s16 temp_v0_13;
    s16 temp_v0_9;
    s32 *temp_fp;
    s32 *temp_fp_2;
    s32 *temp_t0;
    s32 *temp_t0_2;
    s32 *temp_t0_3;
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a2_4;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_at;
    s32 temp_at_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_s6_3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a0_5;
    u32 temp_a0_6;
    u32 temp_a2_5;
    u32 temp_a2_6;
    u32 temp_a2_7;
    u32 temp_t0_4;
    u32 temp_t0_5;
    u32 temp_t0_6;
    u32 temp_t1_4;
    u32 temp_t1_5;
    u32 temp_t1_6;
    u32 temp_t2;
    u32 temp_t2_2;
    u32 temp_t2_3;
    ? *phi_a1;
    ? *phi_a2;
    s32 phi_t2;
    ? *phi_a3;
    s32 *phi_t0;
    s32 *phi_s4;
    ? *phi_a0;
    ? *phi_a2_2;
    s32 phi_t2_2;
    ? *phi_a3_2;
    ? *phi_a1_2;
    s32 *phi_t0_2;
    s32 *phi_s4_2;
    ? *phi_a0_2;
    ? *phi_a3_3;
    ? *phi_a2_3;
    s32 phi_t2_3;
    ? *phi_a1_3;
    s32 *phi_t0_3;
    s32 *phi_s4_3;
    ? *phi_a0_3;
    u16 *phi_a0_4;
    Vtx *phi_a1_4;
    s32 phi_v0;
    s16 phi_a0_5;
    s16 phi_s2;
    s16 phi_t5;
    s16 phi_a0_6;
    s16 phi_s2_2;
    s16 phi_t5_2;
    s16 phi_a0_7;
    s16 phi_s2_3;
    s16 phi_t5_3;

    switch (arg8) {
    case 0:
    case 1:
        temp_s6 = arg3 + arg6;
        phi_a1 = &sp1EC;
        phi_a2 = &sp2B4;
        phi_t2 = arg4;
        phi_a3 = &sp250;
        phi_t0 = &sp188;
        phi_s4 = D_801C5EB0;
        phi_a0 = &sp124;
        do {
            phi_a1->unk_0 = arg5;
            phi_a2->unk_0 = arg3;
            phi_a3->unk_0 = phi_t2;
            temp_t1 = *phi_s4;
            temp_v1 = &D_801C5E88[1];
            temp_v0 = temp_s6 + arg6;
            phi_a2->unk_8 = temp_v0;
            temp_v0_2 = temp_v0 + arg6;
            *phi_t0 = *D_801C5E88;
            phi_a2->unk_C = temp_v0_2;
            temp_a0 = phi_a0 + 0x14;
            phi_a3->unk_10 = phi_t2;
            phi_a3->unk_C = phi_t2;
            phi_a3->unk_8 = phi_t2;
            phi_a3->unk_4 = phi_t2;
            phi_a2->unk_10 = (s32) (temp_v0_2 + arg6);
            phi_a1->unk_10 = arg5;
            phi_a1->unk_C = arg5;
            phi_a1->unk_8 = arg5;
            temp_a1 = phi_a1 + 0x14;
            temp_a2 = phi_a2 + 0x14;
            temp_t0 = phi_t0 + 0x14;
            temp_a1->unk_-10 = arg5;
            temp_a2->unk_-10 = temp_s6;
            temp_a0->unk_-14 = temp_t1;
            temp_a0->unk_-C = temp_t1;
            temp_a0->unk_-8 = temp_t1;
            temp_a0->unk_-4 = temp_t1;
            temp_a0->unk_-10 = temp_t1;
            temp_t0->unk_-8 = (s32) temp_v1[2];
            temp_t0->unk_-C = (s32) temp_v1[1];
            temp_t0->unk_-4 = (s32) temp_v1[3];
            temp_t0->unk_-10 = (s32) temp_v1->unk_0;
            phi_a1 = temp_a1;
            phi_a2 = temp_a2;
            phi_t2 += arg7;
            phi_a3 += 0x14;
            phi_t0 = temp_t0;
            phi_s4 += 4;
            phi_a0 = (? *) temp_a0;
        } while (temp_a0 < (u32) &sp188);
        break;
    case 2:
    case 3:
        temp_s6_2 = arg5 + arg6;
        phi_a2_2 = &sp2B4;
        phi_t2_2 = arg4;
        phi_a3_2 = &sp250;
        phi_a1_2 = &sp1EC;
        phi_t0_2 = &sp188;
        phi_s4_2 = D_801C5EB0;
        phi_a0_2 = &sp124;
        do {
            phi_a2_2->unk_0 = arg3;
            phi_a3_2->unk_0 = phi_t2_2;
            phi_a1_2->unk_0 = arg5;
            temp_t1_2 = *phi_s4_2;
            temp_v1_2 = &D_801C5E88[1];
            temp_v0_3 = temp_s6_2 + arg6;
            phi_a1_2->unk_8 = temp_v0_3;
            temp_v0_4 = temp_v0_3 + arg6;
            *phi_t0_2 = *D_801C5E88;
            phi_a1_2->unk_C = temp_v0_4;
            temp_a0_2 = phi_a0_2 + 0x14;
            phi_a3_2->unk_10 = phi_t2_2;
            phi_a3_2->unk_C = phi_t2_2;
            phi_a3_2->unk_8 = phi_t2_2;
            phi_a3_2->unk_4 = phi_t2_2;
            phi_a1_2->unk_10 = (s32) (temp_v0_4 + arg6);
            phi_a2_2->unk_10 = arg3;
            phi_a2_2->unk_C = arg3;
            phi_a2_2->unk_8 = arg3;
            temp_a1_2 = phi_a1_2 + 0x14;
            temp_a2_2 = phi_a2_2 + 0x14;
            temp_t0_2 = phi_t0_2 + 0x14;
            temp_a2_2->unk_-10 = arg3;
            temp_a1_2->unk_-10 = temp_s6_2;
            temp_a0_2->unk_-14 = temp_t1_2;
            temp_a0_2->unk_-C = temp_t1_2;
            temp_a0_2->unk_-8 = temp_t1_2;
            temp_a0_2->unk_-4 = temp_t1_2;
            temp_a0_2->unk_-10 = temp_t1_2;
            temp_t0_2->unk_-8 = (s32) temp_v1_2[2];
            temp_t0_2->unk_-C = (s32) temp_v1_2[1];
            temp_t0_2->unk_-4 = (s32) temp_v1_2[3];
            temp_t0_2->unk_-10 = (s32) temp_v1_2->unk_0;
            phi_a2_2 = temp_a2_2;
            phi_t2_2 += arg7;
            phi_a3_2 += 0x14;
            phi_a1_2 = temp_a1_2;
            phi_t0_2 = temp_t0_2;
            phi_s4_2 += 4;
            phi_a0_2 = (? *) temp_a0_2;
        } while (temp_a0_2 < (u32) &sp188);
        break;
    case 4:
    case 5:
        temp_s6_3 = arg3 + arg6;
        phi_a3_3 = &sp250;
        phi_a2_3 = &sp2B4;
        phi_t2_3 = arg5;
        phi_a1_3 = &sp1EC;
        phi_t0_3 = &sp188;
        phi_s4_3 = D_801C5E9C;
        phi_a0_3 = &sp124;
        do {
            phi_a3_3->unk_0 = arg4;
            phi_a2_3->unk_0 = arg3;
            phi_a1_3->unk_0 = phi_t2_3;
            temp_t1_3 = *phi_s4_3;
            temp_v1_3 = &D_801C5E88[1];
            temp_v0_5 = temp_s6_3 + arg6;
            phi_a2_3->unk_8 = temp_v0_5;
            temp_v0_6 = temp_v0_5 + arg6;
            *phi_t0_3 = *D_801C5E88;
            phi_a2_3->unk_C = temp_v0_6;
            temp_a0_3 = phi_a0_3 + 0x14;
            phi_a1_3->unk_10 = phi_t2_3;
            phi_a1_3->unk_C = phi_t2_3;
            phi_a1_3->unk_8 = phi_t2_3;
            phi_a1_3->unk_4 = phi_t2_3;
            phi_a2_3->unk_10 = (s32) (temp_v0_6 + arg6);
            phi_a3_3->unk_10 = arg4;
            phi_a3_3->unk_C = arg4;
            phi_a3_3->unk_8 = arg4;
            temp_a2_3 = phi_a2_3 + 0x14;
            temp_a3 = phi_a3_3 + 0x14;
            temp_t0_3 = phi_t0_3 + 0x14;
            temp_a3->unk_-10 = arg4;
            temp_a2_3->unk_-10 = temp_s6_3;
            temp_a0_3->unk_-14 = temp_t1_3;
            temp_a0_3->unk_-C = temp_t1_3;
            temp_a0_3->unk_-8 = temp_t1_3;
            temp_a0_3->unk_-4 = temp_t1_3;
            temp_a0_3->unk_-10 = temp_t1_3;
            temp_t0_3->unk_-8 = (s32) temp_v1_3[2];
            temp_t0_3->unk_-C = (s32) temp_v1_3[1];
            temp_t0_3->unk_-4 = (s32) temp_v1_3[3];
            temp_t0_3->unk_-10 = (s32) temp_v1_3->unk_0;
            phi_a3_3 = temp_a3;
            phi_a2_3 = temp_a2_3;
            phi_t2_3 += arg7;
            phi_a1_3 += 0x14;
            phi_t0_3 = temp_t0_3;
            phi_s4_3 += 4;
            phi_a0_3 = (? *) temp_a0_3;
        } while (temp_a0_3 < (u32) &sp188);
        break;
    }
    skyboxCtx->unk180 = skyboxCtx->unk17C + (arg8 * 0x960);
    phi_a0_4 = D_801C5E48;
    phi_a1_4 = &vtx[arg2];
    phi_v0 = 0;
    do {
        temp_v0_7 = phi_v0 + 1;
        temp_a2_4 = *phi_a0_4 * 4;
        phi_a1_4->v.ob[0] = (s16) *(&sp2B4 + temp_a2_4);
        temp_a1_3 = phi_a1_4 + 0x10;
        temp_a1_3->unk_-E = (s16) *(&sp250 + temp_a2_4);
        temp_a1_3->unk_-A = 0;
        temp_a1_3->unk_-C = (s16) *(&sp1EC + temp_a2_4);
        temp_a1_3->unk_-8 = (s16) *(&sp188 + temp_a2_4);
        temp_a1_3->unk_-3 = 0;
        temp_a1_3->unk_-2 = 0;
        temp_a1_3->unk_-4 = 0xFF;
        temp_a1_3->unk_-6 = (s16) *(&sp124 + temp_a2_4);
        phi_a0_4 += 2;
        phi_a1_4 = temp_a1_3;
        phi_v0 = temp_v0_7;
    } while (temp_v0_7 != 0x20);
    temp_v1_4 = skyboxCtx->unk180;
    skyboxCtx->unk180 = &temp_v1_4[1];
    temp_v1_4->words.w0 = 0x1020040;
    temp_v1_4->words.w1 = (u32) &vtx[arg2];
    arg2 += temp_v0_7;
    temp_v1_5 = skyboxCtx->unk180;
    skyboxCtx->unk180 = &temp_v1_5[1];
    temp_v1_5->words.w1 = 0x1E;
    temp_v1_5->words.w0 = 0x3000000;
    phi_s2 = 0;
    phi_s2_3 = 0;
    if ((arg8 == 4) || (arg8 == 5)) {
        temp_fp_2 = &D_801C5E30[arg8];
        sp31E = 0;
        sp320 = 0;
        do {
            temp_t8 = sp320 + 0x1F;
            temp_s3_3 = (sp320 * 4) & 0xFFF;
            temp_s1_3 = (temp_t8 * 4) & 0xFFF;
            sp40 = temp_t8;
            phi_a0_7 = 0;
            phi_t5_3 = 0;
loop_16:
            temp_v1_36 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_36[1];
            temp_v1_36->words.w0 = 0xFD48007F;
            temp_a1_6 = ((phi_a0_7 * 4) & 0xFFF) << 0xC;
            temp_v1_36->words.w1 = (u32) (*temp_fp_2 + skyboxCtx->skyboxStaticSegment[0]);
            temp_v1_37 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_37[1];
            temp_a2_7 = ((((s32) ((phi_a0_7 * 0) + 0x27) >> 3) & 0x1FF) << 9) | 0xF5480000;
            temp_v1_37->words.w0 = temp_a2_7;
            temp_v1_37->words.w1 = 0x7000000;
            temp_v1_38 = skyboxCtx->unk180;
            temp_t0_6 = temp_a1_6 | 0xF4000000 | temp_s3_3;
            skyboxCtx->unk180 = &temp_v1_38[1];
            temp_v1_38->words.w1 = 0;
            temp_v1_38->words.w0 = 0xE6000000;
            temp_v1_39 = skyboxCtx->unk180;
            temp_t3_3 = phi_a0_7 + 0x1F;
            temp_a3_4 = ((temp_t3_3 * 4) & 0xFFF) << 0xC;
            skyboxCtx->unk180 = &temp_v1_39[1];
            temp_t1_6 = temp_a3_4 | 0x7000000U | temp_s1_3;
            temp_v1_39->words.w1 = temp_t1_6;
            temp_v1_39->words.w0 = temp_t0_6;
            temp_v1_40 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_40[1];
            temp_v1_40->words.w1 = 0;
            temp_v1_40->words.w0 = 0xE7000000;
            temp_v1_41 = skyboxCtx->unk180;
            temp_t5_3 = phi_t5_3 + 1;
            skyboxCtx->unk180 = &temp_v1_41[1];
            temp_v1_41->words.w1 = 0;
            temp_v1_41->words.w0 = temp_a2_7;
            temp_v1_42 = skyboxCtx->unk180;
            temp_t2_3 = temp_a1_6 | 0xF2000000 | temp_s3_3;
            skyboxCtx->unk180 = &temp_v1_42[1];
            temp_v1_42->words.w1 = temp_a3_4 | temp_s1_3;
            temp_v1_42->words.w0 = temp_t2_3;
            temp_v1_43 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_43[1];
            temp_v1_43->words.w0 = 0xFD48007F;
            temp_v1_43->words.w1 = (u32) (*temp_fp_2 + skyboxCtx->skyboxStaticSegment[1]);
            temp_v1_44 = skyboxCtx->unk180;
            temp_a0_6 = temp_a2_7 | 0x80;
            skyboxCtx->unk180 = &temp_v1_44[1];
            temp_v1_44->words.w1 = 0x7000000;
            temp_v1_44->words.w0 = temp_a0_6;
            temp_v1_45 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_45[1];
            temp_v1_45->words.w1 = 0;
            temp_v1_45->words.w0 = 0xE6000000;
            temp_v1_46 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_46[1];
            temp_v1_46->words.w1 = temp_t1_6;
            temp_v1_46->words.w0 = temp_t0_6;
            temp_v1_47 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_47[1];
            temp_v1_47->words.w1 = 0;
            temp_v1_47->words.w0 = 0xE7000000;
            temp_v1_48 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_48[1];
            temp_v1_48->words.w1 = 0x1000000;
            temp_v1_48->words.w0 = temp_a0_6;
            temp_v1_49 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_49[1];
            temp_v1_49->words.w1 = temp_a3_4 | 0x1000000U | temp_s1_3;
            temp_v1_49->words.w0 = temp_t2_3;
            temp_v1_50 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_50[1];
            temp_v0_12 = &D_801C5EC4[phi_s2_3];
            temp_s2_3 = phi_s2_3 + 4;
            temp_v1_50->words.w0 = ((temp_v0_12[2] * 2) & 0xFF) | (((temp_v0_12->unk_0 * 2) & 0xFF) << 0x10) | (((temp_v0_12[1] * 2) & 0xFF) << 8) | 0x7000000U;
            temp_v1_50->words.w1 = ((temp_v0_12[3] * 2) & 0xFF) | (((temp_v0_12->unk_0 * 2) & 0xFF) << 0x10) | (((temp_v0_12[2] * 2) & 0xFF) << 8);
            phi_a0_7 = temp_t3_3;
            phi_s2_3 = temp_s2_3;
            phi_t5_3 = temp_t5_3;
            phi_s2_3 = temp_s2_3;
            if ((s32) temp_t5_3 < 4) {
                goto loop_16;
            }
            temp_v0_13 = sp31E + 1;
            temp_at_2 = (s32) temp_v0_13 < 4;
            sp31E = temp_v0_13;
            sp320 = (s16) sp40;
        } while (temp_at_2 != 0);
    } else {
        temp_fp = &D_801C5E30[arg8];
        sp31E = 0;
        sp320 = 0;
        do {
            temp_t9 = sp320 + 0x1F;
            temp_s3 = (sp320 * 4) & 0xFFF;
            temp_s1 = (temp_t9 * 4) & 0xFFF;
            sp40 = temp_t9;
            phi_a0_5 = 0;
            phi_t5 = 0;
            phi_a0_6 = 0;
            phi_t5_2 = 0;
loop_21:
            temp_v1_6 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_6[1];
            temp_v1_6->words.w0 = 0xFD48007F;
            temp_a1_4 = ((phi_a0_5 * 4) & 0xFFF) << 0xC;
            temp_v1_6->words.w1 = (u32) (*temp_fp + skyboxCtx->skyboxStaticSegment[0]);
            temp_v1_7 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_7[1];
            temp_a2_5 = ((((s32) ((phi_a0_5 * 0) + 0x27) >> 3) & 0x1FF) << 9) | 0xF5480000;
            temp_v1_7->words.w0 = temp_a2_5;
            temp_v1_7->words.w1 = 0x7000000;
            temp_v1_8 = skyboxCtx->unk180;
            temp_t0_4 = temp_a1_4 | 0xF4000000 | temp_s3;
            skyboxCtx->unk180 = &temp_v1_8[1];
            temp_v1_8->words.w1 = 0;
            temp_v1_8->words.w0 = 0xE6000000;
            temp_v1_9 = skyboxCtx->unk180;
            temp_t3 = phi_a0_5 + 0x1F;
            temp_a3_2 = ((temp_t3 * 4) & 0xFFF) << 0xC;
            skyboxCtx->unk180 = &temp_v1_9[1];
            temp_t1_4 = temp_a3_2 | 0x7000000U | temp_s1;
            temp_v1_9->words.w1 = temp_t1_4;
            temp_v1_9->words.w0 = temp_t0_4;
            temp_v1_10 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_10[1];
            temp_v1_10->words.w1 = 0;
            temp_v1_10->words.w0 = 0xE7000000;
            temp_v1_11 = skyboxCtx->unk180;
            temp_t5 = phi_t5 + 1;
            skyboxCtx->unk180 = &temp_v1_11[1];
            temp_v1_11->words.w1 = 0;
            temp_v1_11->words.w0 = temp_a2_5;
            temp_v1_12 = skyboxCtx->unk180;
            temp_t2 = temp_a1_4 | 0xF2000000 | temp_s3;
            skyboxCtx->unk180 = &temp_v1_12[1];
            temp_v1_12->words.w1 = temp_a3_2 | temp_s1;
            temp_v1_12->words.w0 = temp_t2;
            temp_v1_13 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_13[1];
            temp_v1_13->words.w0 = 0xFD48007F;
            temp_v1_13->words.w1 = (u32) (*temp_fp + skyboxCtx->skyboxStaticSegment[1]);
            temp_v1_14 = skyboxCtx->unk180;
            temp_a0_4 = temp_a2_5 | 0x80;
            skyboxCtx->unk180 = &temp_v1_14[1];
            temp_v1_14->words.w1 = 0x7000000;
            temp_v1_14->words.w0 = temp_a0_4;
            temp_v1_15 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_15[1];
            temp_v1_15->words.w1 = 0;
            temp_v1_15->words.w0 = 0xE6000000;
            temp_v1_16 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_16[1];
            temp_v1_16->words.w1 = temp_t1_4;
            temp_v1_16->words.w0 = temp_t0_4;
            temp_v1_17 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_17[1];
            temp_v1_17->words.w1 = 0;
            temp_v1_17->words.w0 = 0xE7000000;
            temp_v1_18 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_18[1];
            temp_v1_18->words.w1 = 0x1000000;
            temp_v1_18->words.w0 = temp_a0_4;
            temp_v1_19 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_19[1];
            temp_v1_19->words.w1 = temp_a3_2 | 0x1000000U | temp_s1;
            temp_v1_19->words.w0 = temp_t2;
            temp_v1_20 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_20[1];
            temp_v0_8 = &D_801C5EC4[phi_s2];
            temp_s2 = phi_s2 + 4;
            temp_v1_20->words.w0 = ((temp_v0_8[2] * 2) & 0xFF) | (((temp_v0_8->unk_0 * 2) & 0xFF) << 0x10) | (((temp_v0_8[1] * 2) & 0xFF) << 8) | 0x7000000U;
            temp_v1_20->words.w1 = ((temp_v0_8[3] * 2) & 0xFF) | (((temp_v0_8->unk_0 * 2) & 0xFF) << 0x10) | (((temp_v0_8[2] * 2) & 0xFF) << 8);
            phi_a0_5 = temp_t3;
            phi_s2 = temp_s2;
            phi_t5 = temp_t5;
            phi_s2 = temp_s2;
            phi_s2_2 = temp_s2;
            if ((s32) temp_t5 < 4) {
                goto loop_21;
            }
            temp_v0_9 = sp31E + 1;
            temp_at = (s32) temp_v0_9 < 2;
            sp31E = temp_v0_9;
            sp320 = (s16) sp40;
        } while (temp_at != 0);
        sp31E = 0;
        sp320 += -0x1F;
        do {
            temp_s3_2 = (sp320 * 4) & 0xFFF;
            temp_s1_2 = ((sp320 + 0x1F) * 4) & 0xFFF;
loop_25:
            temp_v1_21 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_21[1];
            temp_v1_21->words.w0 = 0xFD48007F;
            temp_a1_5 = ((phi_a0_6 * 4) & 0xFFF) << 0xC;
            temp_v1_21->words.w1 = (u32) (*temp_fp + skyboxCtx->skyboxStaticSegment[0]);
            temp_v1_22 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_22[1];
            temp_a2_6 = ((((s32) ((phi_a0_6 * 0) + 0x27) >> 3) & 0x1FF) << 9) | 0xF5480000;
            temp_v1_22->words.w0 = temp_a2_6;
            temp_v1_22->words.w1 = 0x7000000;
            temp_v1_23 = skyboxCtx->unk180;
            temp_t0_5 = temp_a1_5 | 0xF4000000 | temp_s3_2;
            skyboxCtx->unk180 = &temp_v1_23[1];
            temp_v1_23->words.w1 = 0;
            temp_v1_23->words.w0 = 0xE6000000;
            temp_v1_24 = skyboxCtx->unk180;
            temp_t3_2 = phi_a0_6 + 0x1F;
            temp_a3_3 = ((temp_t3_2 * 4) & 0xFFF) << 0xC;
            skyboxCtx->unk180 = &temp_v1_24[1];
            temp_t1_5 = temp_a3_3 | 0x7000000U | temp_s1_2;
            temp_v1_24->words.w1 = temp_t1_5;
            temp_v1_24->words.w0 = temp_t0_5;
            temp_v1_25 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_25[1];
            temp_v1_25->words.w1 = 0;
            temp_v1_25->words.w0 = 0xE7000000;
            temp_v1_26 = skyboxCtx->unk180;
            temp_t5_2 = phi_t5_2 + 1;
            skyboxCtx->unk180 = &temp_v1_26[1];
            temp_v1_26->words.w1 = 0;
            temp_v1_26->words.w0 = temp_a2_6;
            temp_v1_27 = skyboxCtx->unk180;
            temp_t2_2 = temp_a1_5 | 0xF2000000 | temp_s3_2;
            skyboxCtx->unk180 = &temp_v1_27[1];
            temp_v1_27->words.w1 = temp_a3_3 | temp_s1_2;
            temp_v1_27->words.w0 = temp_t2_2;
            temp_v1_28 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_28[1];
            temp_v1_28->words.w0 = 0xFD48007F;
            temp_v1_28->words.w1 = (u32) (*temp_fp + skyboxCtx->skyboxStaticSegment[1]);
            temp_v1_29 = skyboxCtx->unk180;
            temp_a0_5 = temp_a2_6 | 0x80;
            skyboxCtx->unk180 = &temp_v1_29[1];
            temp_v1_29->words.w1 = 0x7000000;
            temp_v1_29->words.w0 = temp_a0_5;
            temp_v1_30 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_30[1];
            temp_v1_30->words.w1 = 0;
            temp_v1_30->words.w0 = 0xE6000000;
            temp_v1_31 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_31[1];
            temp_v1_31->words.w1 = temp_t1_5;
            temp_v1_31->words.w0 = temp_t0_5;
            temp_v1_32 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_32[1];
            temp_v1_32->words.w1 = 0;
            temp_v1_32->words.w0 = 0xE7000000;
            temp_v1_33 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_33[1];
            temp_v1_33->words.w1 = 0x1000000;
            temp_v1_33->words.w0 = temp_a0_5;
            temp_v1_34 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_34[1];
            temp_v1_34->words.w1 = temp_a3_3 | 0x1000000U | temp_s1_2;
            temp_v1_34->words.w0 = temp_t2_2;
            temp_v1_35 = skyboxCtx->unk180;
            skyboxCtx->unk180 = &temp_v1_35[1];
            temp_v0_10 = &D_801C5EC4[phi_s2_2];
            temp_s2_2 = phi_s2_2 + 4;
            temp_v1_35->words.w0 = ((temp_v0_10[2] * 2) & 0xFF) | (((temp_v0_10->unk_0 * 2) & 0xFF) << 0x10) | (((temp_v0_10[1] * 2) & 0xFF) << 8) | 0x7000000U;
            temp_v1_35->words.w1 = ((temp_v0_10[3] * 2) & 0xFF) | (((temp_v0_10->unk_0 * 2) & 0xFF) << 0x10) | (((temp_v0_10[2] * 2) & 0xFF) << 8);
            phi_a0_6 = temp_t3_2;
            phi_s2_2 = temp_s2_2;
            phi_t5_2 = temp_t5_2;
            phi_s2_2 = temp_s2_2;
            if ((s32) temp_t5_2 < 4) {
                goto loop_25;
            }
            temp_v0_11 = sp31E + 1;
            sp320 += -0x1F;
            sp31E = temp_v0_11;
        } while ((s32) temp_v0_11 < 2);
    }
    temp_v1_51 = skyboxCtx->unk180;
    skyboxCtx->unk180 = &temp_v1_51[1];
    temp_v1_51->words.w1 = 0;
    temp_v1_51->words.w0 = 0xDF000000;
    return arg2;
}

void func_80143148(SkyboxContext *skyboxCtx, s32 arg1) {
    s32 temp_s1;
    s32 phi_s2;
    struct_801C5F44 *phi_s0;
    s32 phi_s1;

    phi_s2 = 0;
    phi_s1 = 0;
    if (arg1 > 0) {
        phi_s0 = D_801C5F44;
        do {
            temp_s1 = phi_s1 + 1;
            phi_s2 = func_80142440(skyboxCtx, skyboxCtx->roomVtx, phi_s2, phi_s0->unk0, phi_s0->unk4, phi_s0->unk8, phi_s0->unkC, phi_s0->unk10, phi_s1);
            phi_s0 += 0x14;
            phi_s1 = temp_s1;
        } while (temp_s1 != arg1);
    }
}

void func_801431E8(GameState *gamestate, SkyboxContext *skyboxCtx, s16 skyType) {
    s32 sp2C;
    u32 sp24;
    s16 temp_v0_2;
    s32 temp_v0;
    u32 temp_a2;
    u32 temp_a3;

    skyboxCtx->rotZ = 0.0f;
    if (skyType != 1) {
        if (skyType != 2) {
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    skyboxCtx->skyboxStaticSegment[0] = (void *) D_80025D00;
    temp_a3 = _d2_fine_pal_staticSegmentRomStart - _d2_cloud_staticSegmentRomStart;
    sp24 = temp_a3;
    DmaMgr_SendRequest0((void *) D_80025D00, (u32) _d2_cloud_staticSegmentRomStart, temp_a3);
    temp_v0 = (s32) &D_80025D00[temp_a3 + 7] & ~7;
    temp_a2 = _d2_cloud_staticSegmentRomStart - _d2_fine_staticSegmentRomStart;
    skyboxCtx->skyboxStaticSegment[1] = (void *) temp_v0;
    sp2C = (temp_v0 + temp_a2 + 7) & ~7;
    DmaMgr_SendRequest0(skyboxCtx->skyboxStaticSegment[1], (u32) _d2_fine_staticSegmentRomStart, temp_a2);
    skyboxCtx->skyboxPaletteStaticSegment = (void *) sp2C;
    DmaMgr_SendRequest0((void *) sp2C, (u32) _d2_fine_pal_staticSegmentRomStart, _d2_fine_pal_staticSegmentRomEnd - _d2_fine_pal_staticSegmentRomStart);
    skyboxCtx->primR = 0x91;
    skyboxCtx->primG = 0x78;
    skyboxCtx->primB = 0x9B;
    skyboxCtx->envR = 0x28;
    skyboxCtx->envG = 0;
    skyboxCtx->envB = 0x28;
    temp_v0_2 = gamestate->unk_A4;
    if ((temp_v0_2 == 0x59) || (temp_v0_2 == 0x18)) {
        skyboxCtx->rotZ = 3.15f;
    }
}

void func_80143324(GlobalContext *globalCtx, SkyboxContext *skyboxCtx, s16 skyType) {
    void **sp34;
    void *sp30;
    OSMesgQueue *temp_s0;
    void **temp_a1;

    temp_s0 = &skyboxCtx->loadQueue;
    if (skyType == 1) {
        temp_a1 = &skyboxCtx->loadMsg;
        sp34 = temp_a1;
        osCreateMesgQueue(temp_s0, temp_a1, 1);
        sp30 = globalCtx + 0x10000;
        if (globalCtx->envCtx.unk_10 == 0) {
            DmaMgr_SendRequestImpl(&skyboxCtx->unk188, skyboxCtx->skyboxStaticSegment[0], (u32) _d2_fine_staticSegmentRomStart, _d2_cloud_staticSegmentRomStart - _d2_fine_staticSegmentRomStart, 0, temp_s0, NULL);
        } else {
            DmaMgr_SendRequestImpl(&skyboxCtx->unk188, skyboxCtx->skyboxStaticSegment[0], (u32) _d2_cloud_staticSegmentRomStart, _d2_fine_pal_staticSegmentRomStart - _d2_cloud_staticSegmentRomStart, 0, temp_s0, NULL);
        }
        osRecvMesg(temp_s0, NULL, 1);
        osCreateMesgQueue(temp_s0, sp34, 1);
        if (sp30->unk_7015 == 0) {
            DmaMgr_SendRequestImpl(&skyboxCtx->unk1A8, skyboxCtx->skyboxStaticSegment[1], (u32) _d2_fine_staticSegmentRomStart, _d2_cloud_staticSegmentRomStart - _d2_fine_staticSegmentRomStart, 0, temp_s0, NULL);
        } else {
            DmaMgr_SendRequestImpl(&skyboxCtx->unk1A8, skyboxCtx->skyboxStaticSegment[1], (u32) _d2_cloud_staticSegmentRomStart, _d2_fine_pal_staticSegmentRomStart - _d2_cloud_staticSegmentRomStart, 0, temp_s0, NULL);
        }
        osRecvMesg(temp_s0, NULL, 1);
        osCreateMesgQueue(temp_s0, sp34, 1);
        DmaMgr_SendRequestImpl(&skyboxCtx->unk1C8, skyboxCtx->skyboxPaletteStaticSegment, (u32) _d2_fine_pal_staticSegmentRomStart, _d2_fine_pal_staticSegmentRomEnd - _d2_fine_pal_staticSegmentRomStart, 0, temp_s0, NULL);
        osRecvMesg(temp_s0, NULL, 1);
    }
}

void func_801434E4(GameState *gamestate, SkyboxContext *skyboxCtx, s16 skyType) {
    TwoHeadArena *sp20;
    TwoHeadArena *temp_a0;

    skyboxCtx->skyboxShouldDraw = 0;
    skyboxCtx->rotZ = 0.0f;
    skyboxCtx->rotY = 0.0f;
    skyboxCtx->rotX = 0.0f;
    func_801431E8(gamestate, skyboxCtx, skyType);
    temp_a0 = &gamestate->heap;
    if (skyType != 0) {
        sp20 = temp_a0;
        skyboxCtx->unk17C = THA_AllocEndAlign16(temp_a0, 0x3840U);
        if (skyType == 5) {
            skyboxCtx->roomVtx = THA_AllocEndAlign16(temp_a0, 0xC00U);
            func_80143148(skyboxCtx, 6);
            return;
        }
        skyboxCtx->roomVtx = THA_AllocEndAlign16(temp_a0, 0xA00U);
        func_80143148(skyboxCtx, 5);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}
