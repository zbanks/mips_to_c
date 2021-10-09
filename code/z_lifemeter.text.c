struct _mips2c_stack_LifeMeter_Draw {
    /* 0x000 */ char pad_0[0x64];
    /* 0x064 */ s32 sp64;                           /* inferred */
    /* 0x068 */ s32 sp68;                           /* inferred */
    /* 0x06C */ u32 sp6C;                           /* inferred */
    /* 0x070 */ char pad_70[0x4];
    /* 0x074 */ f32 sp74;                           /* inferred */
    /* 0x078 */ f32 sp78;                           /* inferred */
    /* 0x07C */ Gfx *sp7C;                          /* inferred */
    /* 0x080 */ char pad_80[0xB8];                  /* maybe part of sp7C[47]? */
    /* 0x138 */ s32 sp138;                          /* inferred */
    /* 0x13C */ u32 sp13C;                          /* inferred */
    /* 0x140 */ s32 sp140;                          /* inferred */
    /* 0x144 */ f32 sp144;                          /* inferred */
    /* 0x148 */ char pad_148[0x6];                  /* maybe part of sp144[2]? */
    /* 0x14E */ s16 sp14E;                          /* inferred */
    /* 0x150 */ s32 sp150;                          /* inferred */
    /* 0x154 */ Vtx *sp154;                         /* inferred */
    /* 0x158 */ char pad_158[0x40];
};                                                  /* size = 0x198 */

struct _mips2c_stack_LifeMeter_Init {};             /* size 0x0 */

struct _mips2c_stack_LifeMeter_IsCritical {};       /* size 0x0 */

struct _mips2c_stack_LifeMeter_UpdateColors {};     /* size 0x0 */

struct _mips2c_stack_LifeMeter_UpdateSizeAndBeep {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80100A80 {};              /* size 0x0 */

struct _mips2c_stack_func_80100AA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80100AF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_80100A80(void *arg0);                        /* static */
? func_80100AA0(void *arg0);                        /* static */
? func_80100AF0(void *arg0);                        /* static */
extern ? D_02000000;
extern ? D_02000400;
extern ? D_02000500;
extern ? D_02000900;
static s16 D_801F4F66;
static s16 D_801F4F68;
static ? HeartDDTextures;                           /* unable to generate initializer */
static ? HeartTextures;                             /* unable to generate initializer */
static ? sBeatingHeartsDDEnv;
static ? sBeatingHeartsDDPrim;
static ? sHeartsDDEnv;
static s16 sHeartsDDEnvColors[10] = {0xC8, 0, 0, 0xFF, 0, 0, 0, 0, 0xFF, 0};
static s16 sHeartsDDEnvFactors[10] = {0, 0, 0, 0x37, 0, 0, 0xFF38, 0, 0xFF, 0};
static ? sHeartsDDPrim;
static s16 sHeartsDDPrimColors[10] = {0xFF, 0xFF, 0xFF, 0xFF, 0xBE, 0, 0x64, 0x64, 0xFF, 0};
static s16 sHeartsDDPrimFactors[10] = {0, 0, 0, 0, 0xFFBF, 0xFF01, 0xFF65, 0xFF65, 0, 0};
static s16 sHeartsEnvColors[10] = {0x32, 0x28, 0x3C, 0xFF, 0, 0, 0, 0, 0xFF, 0};
static ? sHeartsEnvFactors;                         /* unable to generate initializer */
static s16 sHeartsPrimColors[10] = {0xFF, 0x46, 0x32, 0xFF, 0xBE, 0, 0x64, 0x64, 0xFF, 0};
static ? sHeartsPrimFactors;                        /* unable to generate initializer */
SaveContext gSaveContext;

void LifeMeter_Init(GlobalContext *globalCtx) {
    globalCtx->interfaceCtx.unkTimer = 0x140;
    globalCtx->interfaceCtx.lifeColorChange = 0;
    globalCtx->interfaceCtx.lifeColorChangeDirection = 0;
    globalCtx->interfaceCtx.health = gSaveContext.health;
    globalCtx->interfaceCtx.lifeSizeChange = globalCtx->interfaceCtx.lifeColorChange;
    globalCtx->interfaceCtx.lifeSizeChangeDirection = globalCtx->interfaceCtx.lifeColorChangeDirection;
    globalCtx->interfaceCtx.heartsPrimR[0] = 0xFF;
    globalCtx->interfaceCtx.heartsPrimG[0] = 0x46;
    globalCtx->interfaceCtx.heartsPrimB[0] = 0x32;
    globalCtx->interfaceCtx.heartsEnvR[0] = 0x32;
    globalCtx->interfaceCtx.heartsEnvG[0] = 0x28;
    globalCtx->interfaceCtx.heartsEnvB[0] = 0x3C;
    globalCtx->interfaceCtx.heartsPrimR[1] = 0xFF;
    globalCtx->interfaceCtx.heartsPrimG[1] = 0x46;
    globalCtx->interfaceCtx.heartsPrimB[1] = 0x32;
    globalCtx->interfaceCtx.heartsEnvR[1] = 0x32;
    globalCtx->interfaceCtx.heartsEnvG[1] = 0x28;
    globalCtx->interfaceCtx.heartsEnvB[1] = 0x3C;
    sHeartsDDPrim.unk_6 = 0xFF;
    sHeartsDDPrim.unk_8 = 0xFF;
    sHeartsDDPrim.unk_A = 0xFF;
    sHeartsDDEnv.unk_6 = 0xC8;
    sHeartsDDEnv.unk_8 = 0;
    sHeartsDDEnv.unk_A = 0;
    sHeartsDDPrim.unk_0 = (s16) sHeartsDDPrim.unk_6;
    sHeartsDDPrim.unk_2 = (s16) sHeartsDDPrim.unk_8;
    sHeartsDDPrim.unk_4 = (s16) sHeartsDDPrim.unk_A;
    sHeartsDDEnv.unk_0 = (s16) sHeartsDDEnv.unk_6;
    sHeartsDDEnv.unk_2 = (s16) sHeartsDDEnv.unk_8;
    sHeartsDDEnv.unk_4 = (s16) sHeartsDDEnv.unk_A;
}

void LifeMeter_UpdateColors(GlobalContext *globalCtx) {
    InterfaceContext *temp_v0;
    f32 temp_f0;
    s16 *temp_at;

    temp_v0 = &globalCtx->interfaceCtx;
    temp_f0 = (f32) globalCtx->interfaceCtx.lifeColorChange * 0.1f;
    if (temp_v0->lifeColorChangeDirection != 0) {
        temp_v0->lifeColorChange += -1;
        if ((s32) temp_v0->lifeColorChange <= 0) {
            temp_v0->lifeColorChange = 0;
            temp_v0->lifeColorChangeDirection = 0;
        }
    } else {
        temp_v0->lifeColorChange += 1;
        if ((s32) temp_v0->lifeColorChange >= 0xA) {
            temp_v0->lifeColorChange = 0xA;
            temp_v0->lifeColorChangeDirection = 1;
        }
    }
    temp_v0->heartsPrimR[0] = 0xFF;
    temp_v0->heartsPrimG[0] = 0x46;
    temp_v0->heartsPrimB[0] = 0x32;
    temp_v0->heartsEnvR[0] = 0x32;
    temp_v0->heartsEnvG[0] = 0x28;
    temp_v0->heartsEnvB[0] = 0x3C;
    temp_v0->heartsPrimR[1] = *sHeartsPrimColors;
    temp_v0->heartsPrimG[1] = *(sHeartsPrimColors + 2);
    temp_v0->heartsPrimB[1] = *(sHeartsPrimColors + 4);
    temp_v0->heartsEnvR[1] = *sHeartsEnvColors;
    temp_v0->heartsEnvG[1] = *(sHeartsEnvColors + 2);
    temp_v0->heartsEnvB[1] = *(sHeartsEnvColors + 4);
    temp_v0->beatingHeartPrim[0] = ((s16) (s32) ((f32) sHeartsPrimFactors.unk_0 * temp_f0) + 0xFF) & 0xFF;
    temp_v0->beatingHeartPrim[1] = ((s16) (s32) ((f32) sHeartsPrimFactors.unk_2 * temp_f0) + 0x46) & 0xFF;
    temp_v0->beatingHeartPrim[2] = ((s16) (s32) ((f32) sHeartsPrimFactors.unk_4 * temp_f0) + 0x32) & 0xFF;
    temp_v0->beatingHeartEnv[0] = ((s16) (s32) ((f32) sHeartsEnvFactors.unk_0 * temp_f0) + 0x32) & 0xFF;
    temp_v0->beatingHeartEnv[1] = ((s16) (s32) ((f32) sHeartsEnvFactors.unk_2 * temp_f0) + 0x28) & 0xFF;
    temp_v0->beatingHeartEnv[2] = ((s16) (s32) ((f32) sHeartsEnvFactors.unk_4 * temp_f0) + 0x3C) & 0xFF;
    sHeartsDDEnv.unk_0 = 0xC8;
    sHeartsDDPrim.unk_0 = 0xFF;
    sHeartsDDPrim.unk_2 = 0xFF;
    sHeartsDDPrim.unk_4 = 0xFF;
    sHeartsDDEnv.unk_2 = 0;
    sHeartsDDEnv.unk_4 = 0;
    *(&sHeartsDDPrim + 6) = *sHeartsDDPrimColors;
    temp_at = &sHeartsDDPrim + 0xA;
    *temp_at = *(sHeartsDDPrimColors + 2);
    *temp_at = *(sHeartsDDPrimColors + 4);
    D_801F4F66 = *sHeartsDDEnvColors;
    D_801F4F68 = *(sHeartsDDEnvColors + 4);
    D_801F4F68 = *(sHeartsDDEnvColors + 2);
    sBeatingHeartsDDPrim.unk_0 = (s16) (((s16) (s32) ((f32) *sHeartsDDPrimFactors * temp_f0) + 0xFF) & 0xFF);
    sBeatingHeartsDDPrim.unk_2 = (s16) (((s16) (s32) ((f32) *(sHeartsDDPrimFactors + 2) * temp_f0) + 0xFF) & 0xFF);
    sBeatingHeartsDDPrim.unk_4 = (s16) (((s16) (s32) ((f32) *(sHeartsDDPrimFactors + 4) * temp_f0) + 0xFF) & 0xFF);
    sBeatingHeartsDDEnv.unk_0 = (s16) (((s16) (s32) ((f32) *sHeartsDDEnvFactors * temp_f0) + 0xC8) & 0xFF);
    sBeatingHeartsDDEnv.unk_2 = (s16) ((s16) (s32) ((f32) *(sHeartsDDEnvFactors + 2) * temp_f0) & 0xFF);
    sBeatingHeartsDDEnv.unk_4 = (s16) ((s16) (s32) ((f32) *(sHeartsDDEnvFactors + 4) * temp_f0) & 0xFF);
}

? func_80100A80(void *arg0) {
    gSaveContext.health = arg0->unk_16C36;
    return 1;
}

? func_80100AA0(void *arg0) {
    s16 temp_v1;

    arg0->unk_16C38 = 0x140;
    arg0->unk_16C36 = (s16) (arg0->unk_16C36 + 0x10);
    temp_v1 = gSaveContext.health;
    if ((s32) arg0->unk_16C36 >= (s32) temp_v1) {
        arg0->unk_16C36 = temp_v1;
        return 1;
    }
    return 0;
}

? func_80100AF0(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x169E8;
    if (arg0->unk_16C38 != 0) {
        temp_v0_2 = arg0 + 0x169E8;
        temp_v0_2->unk_250 = (s16) (temp_v0_2->unk_250 - 1);
        goto block_4;
    }
    temp_v0->unk_250 = 0x140;
    temp_v0->unk_24E = (s16) (temp_v0->unk_24E - 0x10);
    if ((s32) temp_v0->unk_24E <= 0) {
        temp_v0->unk_24E = 0;
        arg0->unk_18784(-1 - gSaveContext.health);
        return 1;
    }
block_4:
    return 0;
}

void LifeMeter_Draw(GlobalContext *globalCtx) {
    Vtx *sp154;
    s32 sp150;
    s16 sp14E;
    f32 sp144;
    s32 sp140;
    u32 sp13C;
    s32 sp138;
    Gfx *sp7C;
    f32 sp78;
    f32 sp74;
    u32 sp6C;
    s32 sp68;
    s32 sp64;
    Gfx *temp_a0;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_2;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_38;
    Gfx *temp_v0_39;
    Gfx *temp_v0_3;
    Gfx *temp_v0_40;
    Gfx *temp_v0_41;
    Gfx *temp_v0_42;
    Gfx *temp_v0_43;
    Gfx *temp_v0_44;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0_32;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    s32 phi_t1;
    s32 phi_s1;
    s32 phi_s3;
    s32 phi_s2;
    GlobalContext *phi_t0;
    u32 phi_a0;
    f32 phi_f22;
    f32 phi_f20;

    temp_v1 = gSaveContext.health;
    temp_s0 = globalCtx->state.gfxCtx;
    sp154 = globalCtx->interfaceCtx.beatingHeartVtx;
    temp_a1 = (s32) temp_v1 % 0x10;
    sp150 = temp_a1;
    temp_a3 = (s32) gSaveContext.healthCapacity / 0x10;
    temp_s3 = (s32) temp_v1 / 0x10;
    sp140 = 0;
    sp13C = 0;
    sp144 = (f32) globalCtx->interfaceCtx.lifeSizeChange * 0.1f;
    phi_t1 = gSaveContext.inventory.dungeonKeys[9] - 1;
    phi_s3 = (s32) (s16) temp_s3;
    phi_s2 = -1;
    if (temp_a1 == 0) {
        phi_s3 = (s32) (s16) ((s16) temp_s3 - 1);
    }
    phi_s1 = 0;
    phi_f22 = 0.0f;
    phi_f20 = 0.0f;
    phi_f20 = 0.0f;
    if ((s32) (s16) temp_a3 > 0) {
        sp14E = (s16) temp_a3;
        phi_t0 = globalCtx;
        do {
            if ((phi_t1 < 0) || (phi_t1 < phi_s1)) {
                if (phi_s1 < phi_s3) {
                    if (phi_s2 != 0) {
                        temp_v1_2 = phi_t0 + 0x169E8;
                        temp_v0_13 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_13 + 8;
                        temp_v0_13->words.w1 = 0;
                        temp_v0_13->words.w0 = 0xE7000000;
                        temp_v0_14 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_14 + 8;
                        temp_v0_14->words.w0 = 0xFA000000;
                        temp_v0_14->words.w1 = ((temp_v1_2->unk_23E & 0xFF) << 8) | (temp_v1_2->unk_236 << 0x18) | ((temp_v1_2->unk_23A & 0xFF) << 0x10) | (temp_v1_2->unk_270 & 0xFF);
                        temp_v0_15 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_15 + 8;
                        temp_v0_15->words.w0 = 0xFB000000;
                        temp_v0_15->words.w1 = ((temp_v1_2->unk_24A & 0xFF) << 8) | (temp_v1_2->unk_242 << 0x18) | ((temp_v1_2->unk_246 & 0xFF) << 0x10) | 0xFF;
                        phi_s2 = 0;
                    }
                } else if (phi_s3 == phi_s1) {
                    if (phi_s2 != 1) {
                        temp_v1_3 = phi_t0 + 0x169E8;
                        temp_v0_16 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_16 + 8;
                        temp_v0_16->words.w1 = 0;
                        temp_v0_16->words.w0 = 0xE7000000;
                        temp_v0_17 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_17 + 8;
                        temp_v0_17->words.w0 = 0xFA000000;
                        temp_v0_17->words.w1 = ((temp_v1_3->unk_22E & 0xFF) << 8) | (temp_v1_3->unk_22A << 0x18) | ((temp_v1_3->unk_22C & 0xFF) << 0x10) | (temp_v1_3->unk_270 & 0xFF);
                        temp_v0_18 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_18 + 8;
                        temp_v0_18->words.w0 = 0xFB000000;
                        temp_v0_18->words.w1 = ((temp_v1_3->unk_234 & 0xFF) << 8) | (temp_v1_3->unk_230 << 0x18) | ((temp_v1_3->unk_232 & 0xFF) << 0x10) | 0xFF;
                        phi_s2 = 1;
                    }
                } else if (phi_s3 < phi_s1) {
                    if (phi_s2 != 2) {
                        temp_v1_4 = phi_t0 + 0x169E8;
                        temp_v0_19 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_19 + 8;
                        temp_v0_19->words.w1 = 0;
                        temp_v0_19->words.w0 = 0xE7000000;
                        temp_v0_20 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_20 + 8;
                        temp_v0_20->words.w0 = 0xFA000000;
                        temp_v0_20->words.w1 = ((temp_v1_4->unk_23E & 0xFF) << 8) | (temp_v1_4->unk_236 << 0x18) | ((temp_v1_4->unk_23A & 0xFF) << 0x10) | (temp_v1_4->unk_270 & 0xFF);
                        temp_v0_21 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_21 + 8;
                        temp_v0_21->words.w0 = 0xFB000000;
                        temp_v0_21->words.w1 = ((temp_v1_4->unk_24A & 0xFF) << 8) | (temp_v1_4->unk_242 << 0x18) | ((temp_v1_4->unk_246 & 0xFF) << 0x10) | 0xFF;
                        phi_s2 = 2;
                    }
                } else if (phi_s2 != 3) {
                    temp_v1_5 = phi_t0 + 0x169E8;
                    temp_v0_22 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_22 + 8;
                    temp_v0_22->words.w1 = 0;
                    temp_v0_22->words.w0 = 0xE7000000;
                    temp_v0_23 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_23 + 8;
                    temp_v0_23->words.w0 = 0xFA000000;
                    temp_v0_23->words.w1 = ((temp_v1_5->unk_240 & 0xFF) << 8) | (temp_v1_5->unk_238 << 0x18) | ((temp_v1_5->unk_23C & 0xFF) << 0x10) | (temp_v1_5->unk_270 & 0xFF);
                    temp_v0_24 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_24 + 8;
                    temp_v0_24->words.w0 = 0xFB000000;
                    temp_v0_24->words.w1 = ((temp_v1_5->unk_24C & 0xFF) << 8) | (temp_v1_5->unk_244 << 0x18) | ((temp_v1_5->unk_248 & 0xFF) << 0x10) | 0xFF;
                    phi_s2 = 3;
                }
                if (phi_s1 < phi_s3) {
                    phi_a0 = (u32) &D_02000400;
                } else if (phi_s3 == phi_s1) {
                    phi_a0 = *(&HeartTextures + (sp150 * 4));
                } else {
                    phi_a0 = (u32) &D_02000000;
                }
            } else {
                if (phi_s1 < phi_s3) {
                    if (phi_s2 != 4) {
                        temp_v0 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0 + 8;
                        temp_v0->words.w1 = 0;
                        temp_v0->words.w0 = 0xE7000000;
                        temp_v0_2 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_2 + 8;
                        temp_v0_2->words.w0 = 0xFA000000;
                        temp_v0_2->words.w1 = ((sHeartsDDPrim.unk_4 & 0xFF) << 8) | (sHeartsDDPrim.unk_0 << 0x18) | ((sHeartsDDPrim.unk_2 & 0xFF) << 0x10) | ((phi_t0 + 0x169E8)->unk_270 & 0xFF);
                        temp_v0_3 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_3 + 8;
                        temp_v0_3->words.w0 = 0xFB000000;
                        temp_v0_3->words.w1 = ((sHeartsDDEnv.unk_4 & 0xFF) << 8) | (sHeartsDDEnv.unk_0 << 0x18) | ((sHeartsDDEnv.unk_2 & 0xFF) << 0x10) | 0xFF;
                        phi_s2 = 4;
                    }
                } else if (phi_s3 == phi_s1) {
                    if (phi_s2 != 5) {
                        temp_v0_4 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_4 + 8;
                        temp_v0_4->words.w1 = 0;
                        temp_v0_4->words.w0 = 0xE7000000;
                        temp_v0_5 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_5 + 8;
                        temp_v0_5->words.w0 = 0xFA000000;
                        temp_v0_5->words.w1 = ((sBeatingHeartsDDPrim.unk_4 & 0xFF) << 8) | (sBeatingHeartsDDPrim.unk_0 << 0x18) | ((sBeatingHeartsDDPrim.unk_2 & 0xFF) << 0x10) | ((phi_t0 + 0x169E8)->unk_270 & 0xFF);
                        temp_v0_6 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_6 + 8;
                        temp_v0_6->words.w0 = 0xFB000000;
                        temp_v0_6->words.w1 = ((sBeatingHeartsDDEnv.unk_4 & 0xFF) << 8) | (sBeatingHeartsDDEnv.unk_0 << 0x18) | ((sBeatingHeartsDDEnv.unk_2 & 0xFF) << 0x10) | 0xFF;
                        phi_s2 = 5;
                    }
                } else if (phi_s3 < phi_s1) {
                    if (phi_s2 != 6) {
                        temp_v0_7 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_7 + 8;
                        temp_v0_7->words.w1 = 0;
                        temp_v0_7->words.w0 = 0xE7000000;
                        temp_v0_8 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_8 + 8;
                        temp_v0_8->words.w0 = 0xFA000000;
                        temp_v0_8->words.w1 = ((sHeartsDDPrim.unk_4 & 0xFF) << 8) | (sHeartsDDPrim.unk_0 << 0x18) | ((sHeartsDDPrim.unk_2 & 0xFF) << 0x10) | ((phi_t0 + 0x169E8)->unk_270 & 0xFF);
                        temp_v0_9 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_9 + 8;
                        temp_v0_9->words.w0 = 0xFB000000;
                        temp_v0_9->words.w1 = ((sHeartsDDEnv.unk_4 & 0xFF) << 8) | (sHeartsDDEnv.unk_0 << 0x18) | ((sHeartsDDEnv.unk_2 & 0xFF) << 0x10) | 0xFF;
                        phi_s2 = 6;
                    }
                } else if (phi_s2 != 7) {
                    temp_v0_10 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_10 + 8;
                    temp_v0_10->words.w1 = 0;
                    temp_v0_10->words.w0 = 0xE7000000;
                    temp_v0_11 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_11 + 8;
                    temp_v0_11->words.w0 = 0xFA000000;
                    temp_v0_11->words.w1 = ((sHeartsDDPrim.unk_A & 0xFF) << 8) | (sHeartsDDPrim.unk_6 << 0x18) | ((sHeartsDDPrim.unk_8 & 0xFF) << 0x10) | ((phi_t0 + 0x169E8)->unk_270 & 0xFF);
                    temp_v0_12 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_12 + 8;
                    temp_v0_12->words.w0 = 0xFB000000;
                    temp_v0_12->words.w1 = ((sHeartsDDEnv.unk_A & 0xFF) << 8) | (sHeartsDDEnv.unk_6 << 0x18) | ((sHeartsDDEnv.unk_8 & 0xFF) << 0x10) | 0xFF;
                    phi_s2 = 7;
                }
                if (phi_s1 < phi_s3) {
                    phi_a0 = (u32) &D_02000900;
                } else if (phi_s3 == phi_s1) {
                    phi_a0 = *(&HeartDDTextures + (sp150 * 4));
                } else {
                    phi_a0 = (u32) &D_02000500;
                }
            }
            if (sp13C != phi_a0) {
                sp13C = phi_a0;
                temp_v0_25 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_25 + 8;
                temp_v0_25->words.w1 = phi_a0;
                temp_v0_25->words.w0 = 0xFD700000;
                temp_v0_26 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_26 + 8;
                temp_v0_26->words.w1 = 0x7000000;
                temp_v0_26->words.w0 = 0xF5700000;
                temp_v0_27 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_27 + 8;
                temp_v0_27->words.w1 = 0;
                temp_v0_27->words.w0 = 0xE6000000;
                temp_v0_28 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_28 + 8;
                temp_v0_28->words.w1 = 0x707F400;
                temp_v0_28->words.w0 = 0xF3000000;
                temp_v0_29 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_29 + 8;
                temp_v0_29->words.w1 = 0;
                temp_v0_29->words.w0 = 0xE7000000;
                temp_v0_30 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_30 + 8;
                temp_v0_30->words.w1 = 0;
                temp_v0_30->words.w0 = 0xF5680400;
                temp_v0_31 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_31 + 8;
                temp_v0_31->words.w1 = 0x3C03C;
                temp_v0_31->words.w0 = 0xF2000000;
            }
            if (phi_s3 != phi_s1) {
                temp_f0 = 26.0f + phi_f22;
                temp_f2 = 8.0f * 0.68f;
                temp_v0_32 = (s32) ((1.0f / 0.68f) * 1024.0f) & 0xFFFF;
                sp6C = (temp_v0_32 << 0x10) | temp_v0_32;
                sp68 = (s32) ((temp_f0 + temp_f2) * 4.0f) & 0xFFF;
                sp64 = (s32) ((temp_f0 - temp_f2) * 4.0f) & 0xFFF;
                if ((phi_t1 < 0) || (phi_t1 < phi_s1)) {
                    if (sp140 != 1) {
                        sp140 = 1;
                        sp138 = phi_t1;
                        sp74 = temp_f2;
                        func_8012C654(temp_s0);
                        temp_v0_34 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_34 + 8;
                        temp_v0_34->words.w0 = 0xFC309661;
                        temp_v0_34->words.w1 = 0x552EFF7F;
                        phi_t0 = globalCtx;
                    }
                } else if (sp140 != 3) {
                    sp140 = 3;
                    sp138 = phi_t1;
                    sp74 = temp_f2;
                    func_8012C654(temp_s0);
                    temp_v0_33 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_33 + 8;
                    temp_v0_33->words.w0 = 0xFC5096A1;
                    temp_v0_33->words.w1 = 0x332DFEFF;
                    phi_t0 = globalCtx;
                }
                temp_f0_2 = 30.0f + phi_f20;
                temp_v0_35 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_35 + 8;
                temp_v0_35->words.w0 = (((s32) ((temp_f0_2 + (8.0f * 0.68f)) * 4.0f) & 0xFFF) << 0xC) | 0xE4000000 | sp68;
                temp_v0_35->words.w1 = (((s32) ((temp_f0_2 - (8.0f * 0.68f)) * 4.0f) & 0xFFF) << 0xC) | sp64;
                temp_v0_36 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_36 + 8;
                temp_v0_36->words.w1 = 0;
                temp_v0_36->words.w0 = 0xE1000000;
                temp_v0_37 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_37 + 8;
                temp_v0_37->words.w0 = 0xF1000000;
                temp_v0_37->words.w1 = sp6C;
                phi_t1 = phi_t1;
            } else {
                temp_f8 = 0.32f * sp144;
                temp_f0_3 = 1.0f - temp_f8;
                sp74 = 94.5f - phi_f22;
                if ((phi_t1 < 0) || (phi_t1 < phi_s1)) {
                    if (sp140 != 2) {
                        sp140 = 2;
                        sp138 = phi_t1;
                        sp78 = temp_f0_3;
                        func_8012C8D4(temp_s0);
                        temp_v0_40 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_40 + 8;
                        temp_v0_40->words.w0 = 0xFC309661;
                        temp_v0_40->words.w1 = 0x552EFF7F;
                        temp_v0_41 = temp_s0->overlay.p;
                        temp_s0->overlay.p = temp_v0_41 + 8;
                        temp_v0_41->words.w1 = 1;
                        temp_v0_41->words.w0 = 0xE2001E01;
                    }
                } else if (sp140 != 4) {
                    sp140 = 4;
                    sp138 = phi_t1;
                    sp78 = temp_f0_3;
                    func_8012C8D4(temp_s0);
                    temp_v0_38 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_38 + 8;
                    temp_v0_38->words.w0 = 0xFC5096A1;
                    temp_v0_38->words.w1 = 0x332DFEFF;
                    temp_v0_39 = temp_s0->overlay.p;
                    temp_s0->overlay.p = temp_v0_39 + 8;
                    temp_v0_39->words.w1 = 1;
                    temp_v0_39->words.w0 = 0xE2001E01;
                }
                temp_a0 = temp_s0->polyOpa.d - 0x40;
                temp_s0->polyOpa.d = temp_a0;
                sp138 = phi_t1;
                sp7C = temp_a0;
                func_801780F0((Mtx *) temp_a0, 1.0f - temp_f8, 1.0f - temp_f8, 1.0f - temp_f8, -130.0f + phi_f20, sp74, 0.0f);
                temp_v0_42 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_42 + 8;
                temp_v0_42->words.w1 = (u32) temp_a0;
                temp_v0_42->words.w0 = 0xDA380003;
                temp_v0_43 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_43 + 8;
                temp_v0_43->words.w0 = 0x1004008;
                temp_v0_43->words.w1 = (u32) sp154;
                temp_v0_44 = temp_s0->overlay.p;
                temp_s0->overlay.p = temp_v0_44 + 8;
                temp_v0_44->words.w1 = 0x602;
                temp_v0_44->words.w0 = 0x7000406;
                phi_t1 = phi_t1;
                phi_t0 = globalCtx;
            }
            phi_f20 += 10.0f;
            if (phi_s1 == 9) {
                phi_f22 += 10.0f;
            }
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != sp14E);
    }
}

void LifeMeter_UpdateSizeAndBeep(GlobalContext *globalCtx) {
    void *sp1C;
    InterfaceContext *temp_v0;
    InterfaceContext *temp_v0_2;

    temp_v0 = &globalCtx->interfaceCtx;
    if (globalCtx->interfaceCtx.lifeSizeChangeDirection != 0) {
        temp_v0_2 = &globalCtx->interfaceCtx;
        temp_v0_2->lifeSizeChange += -1;
        if (((s32) temp_v0_2->lifeSizeChange <= 0) && (temp_v0_2->lifeSizeChange = 0, temp_v0_2->lifeSizeChangeDirection = 0, sp1C = globalCtx + 0x10000, (func_801233E4(globalCtx) == 0)) && (globalCtx->pauseCtx.state == 0) && (globalCtx->pauseCtx.debugState == 0) && (globalCtx = globalCtx, (LifeMeter_IsCritical() != 0)) && (func_801690CC(globalCtx) == 0)) {
            play_sound(0x481BU);
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    temp_v0->lifeSizeChange += 1;
    if ((s32) temp_v0->lifeSizeChange >= 0xA) {
        temp_v0->lifeSizeChange = 0xA;
        temp_v0->lifeSizeChangeDirection = 1;
    }
}

u32 LifeMeter_IsCritical(void) {
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_v0;

    temp_v0 = gSaveContext.healthCapacity;
    if ((s32) temp_v0 < 0x51) {
        phi_v0 = 0x10;
    } else if ((s32) temp_v0 < 0xA1) {
        phi_v0 = 0x18;
    } else {
        phi_v0 = 0x2C;
        if ((s32) temp_v0 < 0xF1) {
            phi_v0 = 0x20;
        }
    }
    temp_v1 = gSaveContext.health;
    if ((phi_v0 >= (s32) temp_v1) && ((s32) temp_v1 > 0)) {
        return 1U;
    }
    return 0U;
}
