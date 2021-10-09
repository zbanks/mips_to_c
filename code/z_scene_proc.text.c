static ? D_801C3C50;                                /* unable to generate initializer */
static ? D_801C3C80;                                /* unable to generate initializer */
static void D_801C3C88;                             /* unable to generate initializer */
static ? gSceneProcDrawFuncs;                       /* unable to generate initializer */
static ? gSceneProcSceneDrawFuncs;                  /* unable to generate initializer */
static f32 sMatAnimAlphaRatio;
static u32 sMatAnimFlags;
static s32 sMatAnimStep;
static ? sSceneDrawDefaultDl;                       /* unable to generate initializer */

typedef struct {
    /* 0x0000 */ Room currRoom;
    /* 0x0014 */ Room prevRoom;
    /* 0x0028 */ void *roomMemPages[2];
    /* 0x0030 */ u8 activeMemPage;
    /* 0x0031 */ s8 unk31;
    /* 0x0032 */ char pad32[0x2];                   /* maybe part of unk31[3]? */
    /* 0x0034 */ void *activeRoomVram;
    /* 0x0038 */ DmaRequest dmaRequest;
    /* 0x0058 */ OSMesgQueue loadQueue;
    /* 0x0070 */ void *loadMsg[1];
    /* 0x0074 */ void *unk74;
    /* 0x0078 */ s8 unk78;
    /* 0x0079 */ s8 unk79;
    /* 0x007A */ s16 unk7A;                         /* inferred */
    /* 0x007C */ s16 unk7C;                         /* inferred */
    /* 0x007E */ char pad7E[0x2];                   /* maybe part of unk7C[2]? */
} RoomContext;                                      /* size 0x80 */

void Scene_ExecuteDrawConfig(GlobalContext *globalCtx) {
    *(&gSceneProcSceneDrawFuncs + (globalCtx->sceneConfig * 4))();
}

void Scene_DrawConfigDefault(GlobalContext *globalCtx) {
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    GraphicsContext *temp_v0;

    temp_v0 = globalCtx->state.gfxCtx;
    temp_a0 = temp_v0->polyOpa.p;
    temp_v0->polyOpa.p = temp_a0 + 8;
    temp_a0->words.w1 = (u32) &sSceneDrawDefaultDl;
    temp_a0->words.w0 = 0xDE000000;
    temp_a0_2 = temp_v0->polyXlu.p;
    temp_v0->polyXlu.p = temp_a0_2 + 8;
    temp_a0_2->words.w1 = (u32) &sSceneDrawDefaultDl;
    temp_a0_2->words.w0 = 0xDE000000;
}

Gfx *AnimatedMat_TexScroll(GlobalContext *globalCtx, AnimatedMatTexScrollParams *params) {
    s32 temp_v0;

    temp_v0 = sMatAnimStep;
    return Gfx_TexScroll(globalCtx->state.gfxCtx, params->xStep * temp_v0, (u32) -(s32) (params->yStep * temp_v0), (s32) params->width, (s32) params->height);
}

void AnimatedMat_DrawTexScroll(GlobalContext *globalCtx, s32 segment, void *params) {
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Gfx *temp_v0;
    GraphicsContext *temp_a2;
    u32 temp_a1;
    u32 phi_a1;

    temp_v0 = AnimatedMat_TexScroll(globalCtx, (AnimatedMatTexScrollParams *) params);
    temp_a1 = sMatAnimFlags;
    temp_a2 = globalCtx->state.gfxCtx;
    phi_a1 = temp_a1;
    if ((temp_a1 & 1) != 0) {
        temp_a0 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_a0 + 8;
        temp_a0->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
        temp_a0->words.w1 = (u32) temp_v0;
        phi_a1 = sMatAnimFlags;
    }
    if ((phi_a1 & 2) != 0) {
        temp_a0_2 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_a0_2 + 8;
        temp_a0_2->words.w1 = (u32) temp_v0;
        temp_a0_2->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
    }
}

Gfx *AnimatedMat_TwoLayerTexScroll(GlobalContext *globalCtx, AnimatedMatTexScrollParams *params) {
    s32 temp_v0;

    temp_v0 = sMatAnimStep;
    return Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, params->xStep * temp_v0, (u32) -(s32) (params->yStep * temp_v0), (s32) params->width, (s32) params->height, 1, params->unk4 * temp_v0, (u32) -(s32) (params->unk5 * temp_v0), (s32) params->unk6, (s32) params->unk7);
}

void AnimatedMat_DrawTwoTexScroll(GlobalContext *globalCtx, s32 segment, void *params) {
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Gfx *temp_v0;
    GraphicsContext *temp_a2;
    u32 temp_a1;
    u32 phi_a1;

    temp_v0 = AnimatedMat_TwoLayerTexScroll(globalCtx, (AnimatedMatTexScrollParams *) params);
    temp_a1 = sMatAnimFlags;
    temp_a2 = globalCtx->state.gfxCtx;
    phi_a1 = temp_a1;
    if ((temp_a1 & 1) != 0) {
        temp_a0 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_a0 + 8;
        temp_a0->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
        temp_a0->words.w1 = (u32) temp_v0;
        phi_a1 = sMatAnimFlags;
    }
    if ((phi_a1 & 2) != 0) {
        temp_a0_2 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_a0_2 + 8;
        temp_a0_2->words.w1 = (u32) temp_v0;
        temp_a0_2->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
    }
}

void AnimatedMat_SetColor(GlobalContext *globalCtx, s32 segment, F3DPrimColor *primColor, F3DEnvColor *envColor) {
    Gfx *temp_a0;
    Gfx *temp_a1;
    Gfx *temp_v0;
    Gfx *temp_v1_2;
    GraphicsContext *temp_t0;
    GraphicsContext *temp_v1;
    u32 temp_t1;
    u32 phi_t1;
    Gfx *phi_v1;

    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyOpa.d - 0x20;
    temp_v1->polyOpa.d = temp_v0;
    temp_t1 = sMatAnimFlags;
    temp_t0 = globalCtx->state.gfxCtx;
    phi_t1 = temp_t1;
    if ((temp_t1 & 1) != 0) {
        temp_a0 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_a0 + 8;
        temp_a0->words.w1 = (u32) temp_v0;
        temp_a0->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
        phi_t1 = sMatAnimFlags;
    }
    if ((phi_t1 & 2) != 0) {
        temp_a1 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = temp_a1 + 8;
        temp_a1->words.w1 = (u32) temp_v0;
        temp_a1->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
    }
    temp_v1_2 = temp_v0 + 8;
    temp_v0->words.w0 = primColor->lodFrac | 0xFA000000;
    temp_v0->words.w1 = (primColor->r << 0x18) | (primColor->g << 0x10) | (primColor->b << 8) | ((u32) ((f32) primColor->a * sMatAnimAlphaRatio) & 0xFF);
    phi_v1 = temp_v1_2;
    if (envColor != 0) {
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = (envColor->r << 0x18) | (envColor->g << 0x10) | (envColor->b << 8) | envColor->a;
        phi_v1 = temp_v1_2 + 8;
    }
    phi_v1->words.w0 = 0xDF000000;
    phi_v1->words.w1 = 0;
}

void AnimatedMat_DrawColor(GlobalContext *globalCtx, s32 segment, void *params) {
    F3DPrimColor *sp20;
    s32 sp18;
    s32 temp_hi;
    void *temp_a0;
    F3DEnvColor *phi_a3;

    temp_hi = (s32) sMatAnimStep % (s32) params->unk0;
    sp20 = Lib_SegmentedToVirtual(params->unk4) + (temp_hi * 5);
    temp_a0 = params->unk8;
    phi_a3 = NULL;
    if (temp_a0 != 0) {
        sp18 = temp_hi;
        phi_a3 = Lib_SegmentedToVirtual(temp_a0) + (temp_hi * 4);
    }
    AnimatedMat_SetColor(globalCtx, segment, sp20, phi_a3);
}

s32 AnimatedMat_Lerp(s32 min, s32 max, f32 norm) {
    return (s32) ((f32) (max - min) * norm) + min;
}

void AnimatedMat_DrawColorLerp(GlobalContext *globalCtx, s32 segment, void *params) {
    void *sp74;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s8 sp49;
    s8 sp48;
    void *sp44;
    s8 sp43;
    s8 sp42;
    s8 sp41;
    s8 sp40;
    void *sp30;
    f32 temp_f20;
    s32 temp_hi;
    s32 temp_s0;
    u16 *temp_v1;
    u16 *temp_v1_2;
    u16 temp_v0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_v1_3;
    u16 *phi_v1;
    s32 phi_s0;
    s32 phi_s0_2;
    u16 *phi_v1_2;
    void *phi_s1;
    F3DEnvColor *phi_a3;

    sp74 = params;
    temp_s1 = Lib_SegmentedToVirtual(params->unk4);
    temp_hi = (s32) sMatAnimStep % (s32) params->unk0;
    temp_v1 = Lib_SegmentedToVirtual(params->unkC) + 2;
    phi_v1 = temp_v1;
    phi_s0 = 1;
    phi_s0_2 = 1;
    phi_v1_2 = temp_v1;
    if ((s32) params->unk2 >= 2) {
loop_1:
        phi_s0_2 = phi_s0;
        phi_v1_2 = phi_v1;
        if (temp_hi >= (s32) *phi_v1) {
            temp_s0 = phi_s0 + 1;
            temp_v1_2 = phi_v1 + 2;
            phi_v1 = temp_v1_2;
            phi_s0 = temp_s0;
            phi_s0_2 = temp_s0;
            phi_v1_2 = temp_v1_2;
            if (temp_s0 < (s32) sp74->unk2) {
                goto loop_1;
            }
        }
    }
    temp_v0 = phi_v1_2->unk-2;
    temp_s1_2 = temp_s1 + (phi_s0_2 * 5);
    temp_f20 = (f32) (temp_hi - temp_v0) / (f32) (phi_v1_2->unk0 - temp_v0);
    sp48 = AnimatedMat_Lerp((s32) temp_s1_2->unk-5, (s32) temp_s1_2->unk0, temp_f20);
    temp_v1_3 = temp_s1_2 - 5;
    sp30 = temp_v1_3;
    sp49 = AnimatedMat_Lerp((s32) temp_v1_3->unk1, (s32) temp_s1_2->unk1, temp_f20);
    sp4A = AnimatedMat_Lerp((s32) sp30->unk2, (s32) temp_s1_2->unk2, temp_f20);
    sp4B = AnimatedMat_Lerp((s32) sp30->unk3, (s32) temp_s1_2->unk3, temp_f20);
    sp4C = AnimatedMat_Lerp((s32) sp30->unk4, (s32) temp_s1_2->unk4, temp_f20);
    temp_a0 = params->unk8;
    phi_s1 = NULL;
    if (temp_a0 != 0) {
        temp_s1_3 = Lib_SegmentedToVirtual(temp_a0) + (phi_s0_2 * 4);
        sp44 = temp_s1_3 - 4;
        sp40 = AnimatedMat_Lerp((s32) temp_s1_3->unk-4, (s32) temp_s1_3->unk0, temp_f20);
        sp41 = AnimatedMat_Lerp((s32) sp44->unk1, (s32) temp_s1_3->unk1, temp_f20);
        sp42 = AnimatedMat_Lerp((s32) sp44->unk2, (s32) temp_s1_3->unk2, temp_f20);
        sp43 = AnimatedMat_Lerp((s32) sp44->unk3, (s32) temp_s1_3->unk3, temp_f20);
        phi_s1 = temp_s1_3;
    }
    if (phi_s1 != 0) {
        phi_a3 = (F3DEnvColor *) &sp40;
    } else {
        phi_a3 = NULL;
    }
    AnimatedMat_SetColor(globalCtx, segment, (F3DPrimColor *) &sp48, phi_a3);
}

f32 Scene_LagrangeInterp(s32 n, f32 *x, f32 *fx, f32 xp) {
    f32 sp38;
    f32 *temp_t0;
    f32 *temp_t1;
    f32 *temp_t1_2;
    f32 *temp_t1_3;
    f32 *temp_t1_4;
    f32 *temp_t1_5;
    f32 *temp_t1_6;
    f32 *temp_t1_7;
    f32 *temp_t1_8;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_a2;
    s32 phi_v0;
    s32 phi_a2_2;
    f32 *phi_a3;
    f32 phi_f2;
    f32 *phi_t0;
    s32 phi_a2_3;
    s32 phi_v0_2;
    s32 phi_a2_4;
    f32 phi_f12;
    f32 phi_f2_2;
    f32 phi_f2_3;
    f32 phi_f12_2;
    f32 *phi_t0_2;
    f32 phi_f2_4;
    f32 phi_f2_5;
    f32 *phi_v1;
    f32 *phi_t1;
    f32 phi_f2_6;
    f32 *phi_t1_2;
    f32 phi_f2_7;
    f32 phi_f2_8;
    f32 phi_f2_9;
    f32 phi_f2_10;
    f32 *phi_t1_3;
    f32 phi_f2_11;
    f32 *phi_t1_4;
    f32 phi_f2_12;
    f32 phi_f2_13;
    f32 phi_f2_14;
    f32 phi_f2_15;
    f32 phi_f2_16;

    phi_v0 = 0;
    phi_a3 = fx;
    phi_t0 = &sp38;
    phi_v1 = x;
    if (n > 0) {
        do {
            temp_f0 = *phi_v1;
            phi_a2 = 0;
            phi_f2 = 1.0f;
            phi_a2_2 = 0;
            phi_f2_5 = 1.0f;
            phi_t1 = x;
            phi_t1_2 = x;
            phi_f2_14 = 1.0f;
            if (n > 0) {
                temp_t3 = n & 3;
                if (temp_t3 != 0) {
                    do {
                        phi_f2_2 = phi_f2_5;
                        if (phi_a2 != phi_v0) {
                            phi_f2_2 = phi_f2_5 * (temp_f0 - *phi_t1);
                        }
                        temp_a2 = phi_a2 + 1;
                        temp_t1 = phi_t1 + 4;
                        phi_a2 = temp_a2;
                        phi_f2 = phi_f2_2;
                        phi_a2_2 = temp_a2;
                        phi_f2_5 = phi_f2_2;
                        phi_t1 = temp_t1;
                        phi_t1_2 = temp_t1;
                        phi_f2_14 = phi_f2_2;
                    } while (temp_t3 != temp_a2);
                    if (temp_a2 != n) {
                        goto block_8;
                    }
                } else {
block_8:
                    do {
                        phi_f2_12 = phi_f2_14;
                        if (phi_a2_2 != phi_v0) {
                            phi_f2_12 = phi_f2_14 * (temp_f0 - *phi_t1_2);
                        }
                        temp_t1_2 = phi_t1_2 + 4;
                        phi_f2_9 = phi_f2_12;
                        if (phi_a2_2 != (phi_v0 - 1)) {
                            phi_f2_9 = phi_f2_12 * (temp_f0 - *temp_t1_2);
                        }
                        temp_t1_3 = temp_t1_2 + 4;
                        phi_f2_6 = phi_f2_9;
                        if (phi_a2_2 != (phi_v0 - 2)) {
                            phi_f2_6 = phi_f2_9 * (temp_f0 - *temp_t1_3);
                        }
                        temp_t1_4 = temp_t1_3 + 4;
                        phi_f2_3 = phi_f2_6;
                        if (phi_a2_2 != (phi_v0 - 3)) {
                            phi_f2_3 = phi_f2_6 * (temp_f0 - *temp_t1_4);
                        }
                        temp_a2_2 = phi_a2_2 + 4;
                        phi_a2_2 = temp_a2_2;
                        phi_f2 = phi_f2_3;
                        phi_t1_2 = temp_t1_4 + 4;
                        phi_f2_14 = phi_f2_3;
                    } while (temp_a2_2 != n);
                }
            }
            temp_v0 = phi_v0 + 1;
            temp_t0 = phi_t0 + 4;
            temp_t0->unk-4 = (f32) (*phi_a3 / phi_f2);
            phi_v0 = temp_v0;
            phi_a3 += 4;
            phi_t0 = temp_t0;
            phi_v1 += 4;
        } while (temp_v0 != n);
    }
    phi_v0_2 = 0;
    phi_f12 = 0.0f;
    phi_f12_2 = 0.0f;
    phi_t0_2 = &sp38;
    if (n > 0) {
        do {
            phi_a2_3 = 0;
            phi_a2_4 = 0;
            phi_f2_4 = 1.0f;
            phi_f2_10 = 1.0f;
            phi_t1_3 = x;
            phi_t1_4 = x;
            phi_f2_16 = 1.0f;
            if (n > 0) {
                temp_t3_2 = n & 3;
                if (temp_t3_2 != 0) {
                    do {
                        phi_f2_7 = phi_f2_10;
                        if (phi_a2_3 != phi_v0_2) {
                            phi_f2_7 = phi_f2_10 * (xp - *phi_t1_3);
                        }
                        temp_a2_3 = phi_a2_3 + 1;
                        temp_t1_5 = phi_t1_3 + 4;
                        phi_a2_3 = temp_a2_3;
                        phi_a2_4 = temp_a2_3;
                        phi_f2_4 = phi_f2_7;
                        phi_f2_10 = phi_f2_7;
                        phi_t1_3 = temp_t1_5;
                        phi_t1_4 = temp_t1_5;
                        phi_f2_16 = phi_f2_7;
                    } while (temp_t3_2 != temp_a2_3);
                    if (temp_a2_3 != n) {
                        goto block_27;
                    }
                } else {
block_27:
                    do {
                        phi_f2_15 = phi_f2_16;
                        if (phi_a2_4 != phi_v0_2) {
                            phi_f2_15 = phi_f2_16 * (xp - *phi_t1_4);
                        }
                        temp_t1_6 = phi_t1_4 + 4;
                        phi_f2_13 = phi_f2_15;
                        if (phi_a2_4 != (phi_v0_2 - 1)) {
                            phi_f2_13 = phi_f2_15 * (xp - *temp_t1_6);
                        }
                        temp_t1_7 = temp_t1_6 + 4;
                        phi_f2_11 = phi_f2_13;
                        if (phi_a2_4 != (phi_v0_2 - 2)) {
                            phi_f2_11 = phi_f2_13 * (xp - *temp_t1_7);
                        }
                        temp_t1_8 = temp_t1_7 + 4;
                        phi_f2_8 = phi_f2_11;
                        if (phi_a2_4 != (phi_v0_2 - 3)) {
                            phi_f2_8 = phi_f2_11 * (xp - *temp_t1_8);
                        }
                        temp_a2_4 = phi_a2_4 + 4;
                        phi_a2_4 = temp_a2_4;
                        phi_f2_4 = phi_f2_8;
                        phi_t1_4 = temp_t1_8 + 4;
                        phi_f2_16 = phi_f2_8;
                    } while (temp_a2_4 != n);
                }
            }
            temp_v0_2 = phi_v0_2 + 1;
            temp_f12 = phi_f12_2 + (*phi_t0_2 * phi_f2_4);
            phi_v0_2 = temp_v0_2;
            phi_f12 = temp_f12;
            phi_f12_2 = temp_f12;
            phi_t0_2 += 4;
        } while (temp_v0_2 != n);
    }
    return phi_f12;
}

u8 Scene_LagrangeInterpColor(s32 n, f32 *x, f32 *fx, f32 xp) {
    s32 temp_f4;
    s32 phi_v1;
    s32 phi_a0;

    temp_f4 = (s32) Scene_LagrangeInterp(n, (f32 []) x, (f32 []) fx, xp);
    if (temp_f4 < 0) {
        phi_v1 = 0;
    } else {
        phi_a0 = temp_f4;
        if (temp_f4 >= 0x100) {
            phi_a0 = 0xFF;
        }
        phi_v1 = phi_a0;
    }
    return phi_v1 & 0xFF;
}

void AnimatedMat_DrawColorNonLinearInterp(GlobalContext *globalCtx, s32 segment, void *params) {
    void *sp858;
    u8 sp848;
    u8 sp847;
    u8 sp846;
    u8 sp845;
    u8 sp844;
    u8 sp843;
    u8 sp842;
    u8 sp841;
    u8 sp840;
    f32 sp778;
    f32 sp6B0;
    f32 sp5E8;
    f32 sp520;
    f32 sp458;
    f32 sp390;
    f32 sp2C8;
    f32 sp200;
    f32 sp138;
    f32 sp70;
    s32 sp3C;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    s32 temp_s1;
    u16 temp_t7;
    u16 temp_t9;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 temp_t7_2;
    u8 temp_t7_3;
    u8 temp_t8;
    u8 temp_t8_2;
    u8 temp_t8_3;
    u8 temp_t9_2;
    u8 temp_t9_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_a0;
    f32 phi_f8;
    f32 *phi_a1;
    void *phi_v1;
    f32 phi_f18;
    f32 *phi_a2;
    f32 phi_f10;
    f32 *phi_a3;
    f32 phi_f4;
    f32 *phi_t0;
    f32 phi_f8_2;
    f32 *phi_t1;
    f32 phi_f18_2;
    f32 *phi_t2;
    void *phi_s0;
    f32 phi_f10_2;
    f32 *phi_t3;
    f32 phi_f4_2;
    f32 *phi_t4;
    f32 phi_f8_3;
    f32 *phi_t5;
    f32 phi_f18_3;
    f32 *phi_ra;
    s32 phi_s1;
    void *phi_s0_2;
    F3DEnvColor *phi_a3_2;

    sp858 = Lib_SegmentedToVirtual(params->unk4);
    temp_s0 = Lib_SegmentedToVirtual(params->unk8);
    temp_t9 = params->unk2;
    temp_a0 = Lib_SegmentedToVirtual(params->unkC);
    sp3C = (s32) temp_t9;
    temp_f20 = (f32) ((s32) sMatAnimStep % (s32) params->unk0);
    phi_a0 = temp_a0;
    phi_a1 = &sp778;
    phi_v1 = sp858;
    phi_a2 = &sp6B0;
    phi_a3 = &sp5E8;
    phi_t0 = &sp520;
    phi_t1 = &sp458;
    phi_t2 = &sp390;
    phi_s0 = temp_s0;
    phi_t3 = &sp2C8;
    phi_t4 = &sp200;
    phi_t5 = &sp138;
    phi_ra = &sp70;
    phi_s1 = 0;
    if ((s32) temp_t9 > 0) {
        do {
            temp_t7 = *phi_a0;
            temp_f8 = (f32) temp_t7;
            phi_f8 = temp_f8;
            if ((s32) temp_t7 < 0) {
                phi_f8 = temp_f8 + 4294967296.0f;
            }
            *phi_a1 = phi_f8;
            temp_t8 = phi_v1->unk0;
            temp_f18 = (f32) temp_t8;
            phi_f18 = temp_f18;
            if ((s32) temp_t8 < 0) {
                phi_f18 = temp_f18 + 4294967296.0f;
            }
            *phi_a2 = phi_f18;
            temp_t9_2 = phi_v1->unk1;
            temp_f10 = (f32) temp_t9_2;
            phi_a2 += 4;
            phi_f10 = temp_f10;
            if ((s32) temp_t9_2 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            *phi_a3 = phi_f10;
            temp_t6 = phi_v1->unk2;
            temp_f4 = (f32) temp_t6;
            phi_a3 += 4;
            phi_f4 = temp_f4;
            if ((s32) temp_t6 < 0) {
                phi_f4 = temp_f4 + 4294967296.0f;
            }
            *phi_t0 = phi_f4;
            temp_t7_2 = phi_v1->unk3;
            temp_f8_2 = (f32) temp_t7_2;
            phi_t0 += 4;
            phi_f8_2 = temp_f8_2;
            if ((s32) temp_t7_2 < 0) {
                phi_f8_2 = temp_f8_2 + 4294967296.0f;
            }
            *phi_t1 = phi_f8_2;
            temp_t8_2 = phi_v1->unk4;
            temp_f18_2 = (f32) temp_t8_2;
            phi_v1 += 5;
            phi_t1 += 4;
            phi_f18_2 = temp_f18_2;
            if ((s32) temp_t8_2 < 0) {
                phi_f18_2 = temp_f18_2 + 4294967296.0f;
            }
            *phi_t2 = phi_f18_2;
            phi_t2 += 4;
            if (phi_s0 != 0) {
                temp_t9_3 = phi_s0->unk0;
                temp_f10_2 = (f32) temp_t9_3;
                phi_f10_2 = temp_f10_2;
                if ((s32) temp_t9_3 < 0) {
                    phi_f10_2 = temp_f10_2 + 4294967296.0f;
                }
                *phi_t3 = phi_f10_2;
                temp_t6_2 = phi_s0->unk1;
                temp_f4_2 = (f32) temp_t6_2;
                phi_f4_2 = temp_f4_2;
                phi_t3 += 4;
                if ((s32) temp_t6_2 < 0) {
                    phi_f4_2 = temp_f4_2 + 4294967296.0f;
                }
                *phi_t4 = phi_f4_2;
                temp_t7_3 = phi_s0->unk2;
                temp_f8_3 = (f32) temp_t7_3;
                phi_f8_3 = temp_f8_3;
                phi_t4 += 4;
                if ((s32) temp_t7_3 < 0) {
                    phi_f8_3 = temp_f8_3 + 4294967296.0f;
                }
                *phi_t5 = phi_f8_3;
                temp_t8_3 = phi_s0->unk3;
                temp_f18_3 = (f32) temp_t8_3;
                phi_f18_3 = temp_f18_3;
                phi_s0 += 4;
                phi_t5 += 4;
                if ((s32) temp_t8_3 < 0) {
                    phi_f18_3 = temp_f18_3 + 4294967296.0f;
                }
                *phi_ra = phi_f18_3;
                phi_ra += 4;
            }
            temp_s1 = phi_s1 + 1;
            phi_a0 += 2;
            phi_a1 += 4;
            phi_s1 = temp_s1;
        } while (temp_s1 < (s32) params->unk2);
        sp3C = (s32) params->unk2;
    }
    sp844 = Scene_LagrangeInterpColor(sp3C, (f32 []) &sp778, (f32 []) &sp6B0, temp_f20);
    sp845 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp5E8, temp_f20);
    sp846 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp520, temp_f20);
    sp847 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp458, temp_f20);
    sp848 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp390, temp_f20);
    temp_a0_2 = params->unk8;
    phi_s0_2 = NULL;
    if (temp_a0_2 != 0) {
        temp_s0_2 = Lib_SegmentedToVirtual(temp_a0_2);
        sp840 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp2C8, temp_f20);
        sp841 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp200, temp_f20);
        sp842 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp138, temp_f20);
        sp843 = Scene_LagrangeInterpColor((s32) params->unk2, (f32 []) &sp778, (f32 []) &sp70, temp_f20);
        phi_s0_2 = temp_s0_2;
    }
    if (phi_s0_2 != 0) {
        phi_a3_2 = (F3DEnvColor *) &sp840;
    } else {
        phi_a3_2 = NULL;
    }
    AnimatedMat_SetColor(globalCtx, segment, (F3DPrimColor *) &sp844, phi_a3_2);
}

void AnimatedMat_DrawTexCycle(GlobalContext *globalCtx, s32 segment, void *params) {
    void *sp18;
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    GraphicsContext *temp_a2;
    u32 temp_a1;
    void *temp_v0;
    u32 phi_a1;

    sp18 = Lib_SegmentedToVirtual(params->unk4);
    temp_v0 = Lib_SegmentedToVirtual(*(sp18 + (*(Lib_SegmentedToVirtual(params->unk8) + ((s32) sMatAnimStep % (s32) params->unk0)) * 4)));
    temp_a1 = sMatAnimFlags;
    temp_a2 = globalCtx->state.gfxCtx;
    phi_a1 = temp_a1;
    if ((temp_a1 & 1) != 0) {
        temp_a0 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_a0 + 8;
        temp_a0->words.w1 = (u32) temp_v0;
        temp_a0->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
        phi_a1 = sMatAnimFlags;
    }
    if ((phi_a1 & 2) != 0) {
        temp_a0_2 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_a0_2 + 8;
        temp_a0_2->words.w1 = (u32) temp_v0;
        temp_a0_2->words.w0 = ((segment * 4) & 0xFFFF) | 0xDB060000;
    }
}

void AnimatedMat_DrawMain(GlobalContext *globalCtx, AnimatedMaterial *matAnim, f32 alphaRatio, u32 step, u32 flags) {
    s8 temp_s1;
    AnimatedMaterial *phi_s0;
    s8 phi_v0;

    sMatAnimAlphaRatio = alphaRatio;
    sMatAnimStep = (s32) step;
    sMatAnimFlags = flags;
    phi_s0 = matAnim;
    if ((matAnim != 0) && (matAnim->segment != 0)) {
        do {
            temp_s1 = phi_s0->segment;
            phi_v0 = temp_s1;
            if ((s32) temp_s1 < 0) {
                phi_v0 = (s8) -(s32) temp_s1;
            }
            *(&gSceneProcDrawFuncs + (phi_s0->type * 4))(globalCtx, phi_v0 + 7, Lib_SegmentedToVirtual(phi_s0->params));
            phi_s0 += 8;
        } while ((s32) temp_s1 >= 0);
    }
}

void AnimatedMat_Draw(GlobalContext *globalCtx, AnimatedMaterial *matAnim) {
    AnimatedMat_DrawMain(globalCtx, matAnim, 1.0f, globalCtx->gameplayFrames, 3U);
}

void AnimatedMat_DrawOpa(GlobalContext *globalCtx, AnimatedMaterial *matAnim) {
    AnimatedMat_DrawMain(globalCtx, matAnim, 1.0f, globalCtx->gameplayFrames, 1U);
}

void AnimatedMat_DrawXlu(GlobalContext *globalCtx, AnimatedMaterial *matAnim) {
    AnimatedMat_DrawMain(globalCtx, matAnim, 1.0f, globalCtx->gameplayFrames, 2U);
}

void AnimatedMat_DrawAlpha(GlobalContext *globalCtx, AnimatedMaterial *matAnim, f32 alphaRatio) {
    AnimatedMat_DrawMain(globalCtx, matAnim, alphaRatio, globalCtx->gameplayFrames, 3U);
}

void AnimatedMat_DrawAlphaOpa(GlobalContext *globalCtx, AnimatedMaterial *matAnim, f32 alphaRatio) {
    AnimatedMat_DrawMain(globalCtx, matAnim, alphaRatio, globalCtx->gameplayFrames, 1U);
}

void AnimatedMat_DrawAlphaXlu(GlobalContext *globalCtx, AnimatedMaterial *matAnim, f32 alphaRatio) {
    AnimatedMat_DrawMain(globalCtx, matAnim, alphaRatio, globalCtx->gameplayFrames, 2U);
}

void AnimatedMat_DrawStep(GlobalContext *globalCtx, AnimatedMaterial *matAnim, u32 step) {
    AnimatedMat_DrawMain(globalCtx, matAnim, 1.0f, step, 3U);
}

void AnimatedMat_DrawStepOpa(GlobalContext *globalCtx, AnimatedMaterial *matAnim, u32 step) {
    AnimatedMat_DrawMain(globalCtx, matAnim, 1.0f, step, 1U);
}

void AnimatedMat_DrawStepXlu(GlobalContext *globalCtx, AnimatedMaterial *matAnim, u32 step) {
    AnimatedMat_DrawMain(globalCtx, matAnim, 1.0f, step, 2U);
}

void AnimatedMat_DrawAlphaStep(GlobalContext *globalCtx, AnimatedMaterial *matAnim, f32 alphaRatio, u32 step) {
    AnimatedMat_DrawMain(globalCtx, matAnim, alphaRatio, step, 3U);
}

void AnimatedMat_DrawAlphaStepOpa(GlobalContext *globalCtx, AnimatedMaterial *matAnim, f32 alphaRatio, u32 step) {
    AnimatedMat_DrawMain(globalCtx, matAnim, alphaRatio, step, 1U);
}

void AnimatedMat_DrawAlphaStepXlu(GlobalContext *globalCtx, AnimatedMaterial *matAnim, f32 alphaRatio, u32 step) {
    AnimatedMat_DrawMain(globalCtx, matAnim, alphaRatio, step, 2U);
}

void Scene_DrawConfigMatAnim(GlobalContext *globalCtx) {
    AnimatedMat_Draw(globalCtx, globalCtx->sceneMaterialAnims);
}

void Scene_DrawConfig3(GlobalContext *globalCtx) {
    u32 sp7C;
    Gfx *sp70;
    Gfx *sp6C;
    Gfx *sp68;
    Gfx *sp64;
    Gfx *sp60;
    Gfx *sp5C;
    u32 sp48;
    u32 sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    u32 temp_a3;
    u32 temp_t1;
    u32 temp_v1;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_t1 = globalCtx->gameplayFrames;
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp7C = temp_t1;
    sp48 = temp_t1;
    sp70 = temp_v0;
    sp70->words.w1 = Gfx_TexScroll(globalCtx->state.gfxCtx, 0U, temp_t1 & 0x3F, 0x100, 0x10);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    temp_a3 = sp48 & 0x7F;
    temp_v1 = sp7C & 0x7F;
    sp44 = temp_a3;
    sp6C = temp_v0_2;
    sp6C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0x7F - temp_v1, temp_a3, 0x20, 0x20, 1, temp_v1, temp_a3, 0x20, 0x20);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    sp68 = temp_v0_3;
    sp68->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x20, 1, 0U, 0x7F - sp44, 0x20, 0x20);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB06002C;
    sp64 = temp_v0_4;
    sp64->words.w1 = Gfx_TexScroll(globalCtx->state.gfxCtx, 0U, sp44, 0x20, 0x20);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDB060030;
    sp60 = temp_v0_5;
    sp60->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, (sp7C * 0x32) & 0x7FF, 8, 0x200, 1, 0U, (sp7C * 0x3C) & 0x7FF, 8, 0x200);
    temp_v0_6 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDB060034;
    sp5C = temp_v0_6;
    sp5C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, sp44, 0x20, 0x20);
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE7000000;
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0x80808080;
    temp_v0_8->words.w0 = 0xFB000000;
    temp_v0_9 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE7000000;
    temp_v0_10 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0x80808080;
    temp_v0_10->words.w0 = 0xFB000000;
}

void Scene_DrawConfig4(GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_t0;
    u32 temp_a3;
    u32 temp_t1;
    u32 temp_v1;

    temp_t1 = globalCtx->gameplayFrames;
    temp_t0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_t0->polyXlu.p;
    temp_v1 = temp_t1 & 0x7F;
    temp_t0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_a3 = temp_t1 & 0x7F;
    sp40 = temp_t0;
    sp38 = temp_v0;
    sp38->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0x7F - temp_v1, temp_a3, 0x20, 0x20, 1, temp_v1, temp_a3, 0x20, 0x20);
    temp_v1_2 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0;
    temp_v1_2->words.w0 = 0xE7000000;
    temp_v1_3 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_3 + 8;
    temp_v1_3->words.w1 = 0x80808080;
    temp_v1_3->words.w0 = 0xFB000000;
    temp_v0_2 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE7000000;
    temp_v0_3 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x80808080;
    temp_v0_3->words.w0 = 0xFB000000;
}

void Scene_DrawConfigDoNothing(GlobalContext *globalCtx) {

}

void Scene_SetRenderModeXlu(GlobalContext *globalCtx, s32 index, u32 flags) {
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    GraphicsContext *temp_v1;
    u32 temp_v0;

    temp_v0 = *(&D_801C3C50 + (index * 4));
    temp_v1 = globalCtx->state.gfxCtx;
    if ((flags & 1) != 0) {
        temp_a1 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_a1 + 8;
        temp_a1->words.w1 = temp_v0;
        temp_a1->words.w0 = 0xDB060030;
    }
    if ((flags & 2) != 0) {
        temp_a1_2 = temp_v1->polyXlu.p;
        temp_v1->polyXlu.p = temp_a1_2 + 8;
        temp_a1_2->words.w1 = temp_v0;
        temp_a1_2->words.w0 = 0xDB060030;
    }
}

void Scene_SetCullFlag(GlobalContext *globalCtx, s32 index, u32 flags) {
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    GraphicsContext *temp_v1;
    u32 temp_v0;

    temp_v0 = *(&D_801C3C80 + (index * 4));
    temp_v1 = globalCtx->state.gfxCtx;
    if ((flags & 1) != 0) {
        temp_a1 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_a1 + 8;
        temp_a1->words.w1 = temp_v0;
        temp_a1->words.w0 = 0xDB060030;
    }
    if ((flags & 2) != 0) {
        temp_a1_2 = temp_v1->polyXlu.p;
        temp_v1->polyXlu.p = temp_a1_2 + 8;
        temp_a1_2->words.w1 = temp_v0;
        temp_a1_2->words.w0 = 0xDB060030;
    }
}

void Scene_DrawConfig5(GlobalContext *globalCtx) {
    s32 sp24;
    s32 sp20;
    GraphicsContext *sp1C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a3;
    u32 temp_a0;
    s32 phi_t0;

    phi_t0 = 0xFF;
    if (globalCtx->roomCtx.unk7A != 0) {
        sp24 = 1;
        phi_t0 = (s32) globalCtx->roomCtx.unk7C;
    } else {
        sp24 = 0;
    }
    if (phi_t0 == 0) {
        globalCtx->roomCtx.unk78 = 0;
        return;
    }
    temp_a3 = globalCtx->state.gfxCtx;
    globalCtx->roomCtx.unk78 = 1;
    sp20 = phi_t0;
    sp1C = temp_a3;
    AnimatedMat_Draw(globalCtx, globalCtx->sceneMaterialAnims);
    Scene_SetRenderModeXlu(globalCtx, sp24, 3U);
    temp_v1 = temp_a3->polyOpa.p;
    temp_a3->polyOpa.p = temp_v1 + 8;
    temp_a0 = (phi_t0 & 0xFF) | ~0xFF;
    temp_v1->words.w1 = temp_a0;
    temp_v1->words.w0 = 0xFB000000;
    temp_v1_2 = temp_a3->polyXlu.p;
    temp_a3->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = temp_a0;
    temp_v1_2->words.w0 = 0xFB000000;
}

void Scene_DrawConfigMatAnimManualStep(GlobalContext *globalCtx) {
    AnimatedMat_DrawStep(globalCtx, globalCtx->sceneMaterialAnims, (u32) globalCtx->roomCtx.unk7A);
}

void Scene_DrawConfigGreatBayTemple(GlobalContext *globalCtx) {
    GraphicsContext *sp3C;
    Gfx *sp28;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_v0;
    u32 temp_s3;
    void *phi_s2;
    u32 phi_s3;
    s32 phi_s1;

    if ((Flags_GetSwitch(globalCtx, 0x33) != 0) && (Flags_GetSwitch(globalCtx, 0x34) != 0) && (Flags_GetSwitch(globalCtx, 0x35) != 0) && (Flags_GetSwitch(globalCtx, 0x36) != 0)) {
        func_800C3C00(&globalCtx->colCtx, 1U);
    } else {
        func_800C3C14(&globalCtx->colCtx, 1U);
    }
    temp_v0 = globalCtx->state.gfxCtx;
    temp_v1 = temp_v0->polyOpa.d - 0x90;
    temp_v0->polyOpa.d = temp_v1;
    sp28 = temp_v1;
    AnimatedMat_Draw(globalCtx, globalCtx->sceneMaterialAnims);
    sp3C = globalCtx->state.gfxCtx;
    phi_s2 = (void *) sp28;
    phi_s3 = 0U;
    do {
        bcopy(&D_801C3C88, phi_s2, 0x10U);
        phi_s1 = 0;
        switch (phi_s3) {
        case 0:
            if ((Flags_GetSwitch(globalCtx, 0x33) != 0) && (Flags_GetSwitch(globalCtx, 0x34) != 0) && (Flags_GetSwitch(globalCtx, 0x35) != 0) && (Flags_GetSwitch(globalCtx, 0x36) != 0)) {
                phi_s1 = 0xFF;
            }
            break;
        case 1:
            if (Flags_GetSwitch(globalCtx, 0x37) != 0) {
block_35:
                phi_s1 = 0x44;
            }
            break;
        case 2:
            if ((Flags_GetSwitch(globalCtx, 0x37) != 0) && (Flags_GetSwitch(globalCtx, 0x38) != 0)) {
                goto block_35;
            }
            break;
        case 3:
            if ((Flags_GetSwitch(globalCtx, 0x37) != 0) && (Flags_GetSwitch(globalCtx, 0x38) != 0) && (Flags_GetSwitch(globalCtx, 0x39) != 0)) {
                goto block_35;
            }
            break;
        case 4:
            if (Flags_GetSwitch(globalCtx, 0x33) == 0) {
                goto block_35;
            }
            break;
        case 5:
            if (Flags_GetSwitch(globalCtx, 0x34) != 0) {
                goto block_35;
            }
            break;
        case 6:
            if ((Flags_GetSwitch(globalCtx, 0x34) != 0) && (Flags_GetSwitch(globalCtx, 0x35) != 0)) {
                goto block_35;
            }
            break;
        case 7:
            if ((Flags_GetSwitch(globalCtx, 0x34) != 0) && (Flags_GetSwitch(globalCtx, 0x35) != 0) && (Flags_GetSwitch(globalCtx, 0x36) != 0)) {
                goto block_35;
            }
            break;
        case 8:
            if (Flags_GetSwitch(globalCtx, 0x3A) != 0) {
                goto block_35;
            }
            break;
        }
        phi_s2->unk4 = -1;
        phi_s2->unk0 = (s32) ((phi_s1 & 0xFF) | 0xFA000000);
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x10;
        phi_s3 = temp_s3;
    } while (temp_s3 != 9);
    temp_v1_2 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xDB060018;
    temp_v1_2->words.w1 = (u32) sp28;
    temp_v1_3 = sp3C->polyXlu.p;
    sp3C->polyXlu.p = temp_v1_3 + 8;
    temp_v1_3->words.w0 = 0xDB060018;
    temp_v1_3->words.w1 = (u32) sp28;
}

