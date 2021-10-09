struct _mips2c_stack_EffectShieldParticle_CalculateColors {
    /* 0x0 */ char pad0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_EffectShieldParticle_Destroy {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ GlobalContext *sp1C;                 /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EffectShieldParticle_Draw {
    /* 0x000 */ char pad0[0x80];
    /* 0x080 */ ? sp80;                             /* inferred */
    /* 0x080 */ char pad80[0x40];
    /* 0x0C0 */ ? spC0;                             /* inferred */
    /* 0x0C0 */ char padC0[0x40];
    /* 0x100 */ ? sp100;                            /* inferred */
    /* 0x100 */ char pad100[0x90];
    /* 0x190 */ u8 sp190;                           /* inferred */
    /* 0x191 */ u8 sp191;                           /* inferred */
    /* 0x192 */ u8 sp192;                           /* inferred */
    /* 0x193 */ u8 sp193;                           /* inferred */
    /* 0x194 */ u8 sp194;                           /* inferred */
    /* 0x195 */ u8 sp195;                           /* inferred */
    /* 0x196 */ u8 sp196;                           /* inferred */
    /* 0x197 */ u8 sp197;                           /* inferred */
    /* 0x198 */ char pad198[0x8];
};                                                  /* size = 0x1A0 */

struct _mips2c_stack_EffectShieldParticle_Init {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EffectShieldParticle_Update {}; /* size 0x0 */

extern ? D_04054F20;
F3DVertex sEffectShieldParticleVertices[4] = {
    {{0xFFE0, 0xFFE0, 0, 0, 0, 0x400, 0xFF, 0xFF, 0xFF, 0xFF}},
    {{0x20, 0x20, 0, 0, 0x400, 0, 0xFF, 0xFF, 0xFF, 0xFF}},
    {{0xFFE0, 0x20, 0, 0, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF}},
    {{0x20, 0xFFE0, 0, 0, 0x400, 0x400, 0xFF, 0xFF, 0xFF, 0xFF}},
};

void EffectShieldParticle_Init(EffShieldParticleParams *params, EffShieldParticleInit *init) {
    EffShieldParticleParams *temp_s0;
    GlobalContext *temp_s0_2;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_t3;
    u8 temp_t6;
    EffShieldParticleParams *phi_s0;

    if ((params != 0) && (init != 0) && (temp_t6 = init->numParticles, params->numParticles = temp_t6, (((temp_t6 & 0xFF) < 0x11) != 0))) {
        params->unk182 = (unaligned s32) init->unk2;
        params->position.z = (s16) (u16) init->position.z;
        params->primColorStart.r = (unaligned s32) init->primColorStart.r;
        params->envColorStart.r = (unaligned s32) init->envColorStart.r;
        params->primColorMid.r = (unaligned s32) init->primColorMid.r;
        params->envColorMid.r = (unaligned s32) init->envColorMid.r;
        params->primColorEnd.r = (unaligned s32) init->primColorEnd.r;
        params->envColorEnd.r = (unaligned s32) init->envColorEnd.r;
        params->acceleration = init->acceleration;
        params->maxInitialSpeed = init->maxInitialSpeed;
        params->lengthCutoff = init->lengthCutoff;
        params->age = 0;
        params->duration = init->duration;
        phi_s0 = params;
        if ((u32) params < (u32) &params->particles[temp_t6 & 0xFF]) {
            do {
                temp_f0 = Rand_ZeroOne();
                phi_s0->particles[0].endX = 0.0f;
                phi_s0->particles[0].startXChange = 0.0f;
                temp_f2 = params->maxInitialSpeed * 0.5f;
                phi_s0->particles[0].startX = 0.0f;
                phi_s0->particles[0].startSpeed = (temp_f0 * temp_f2) + temp_f2;
                phi_s0->particles[0].endXChange = phi_s0->particles[0].startSpeed;
                phi_s0->particles[0].rotationY = (s16) (s32) (Rand_ZeroOne() * 65534.0f);
                temp_s0 = phi_s0 + 0x18;
                temp_s0->unk-2 = (s16) (s32) (Rand_ZeroOne() * 65534.0f);
                phi_s0 = temp_s0;
            } while ((u32) temp_s0 < (u32) &params->particles[params->numParticles]);
        }
        temp_t3 = init->hasLight;
        params->hasLight = temp_t3;
        if (temp_t3 == 1) {
            params->lightInfo.type = 0;
            params->lightInfo.params.dir.x = (unaligned s32) init->unk2E;
            params->lightInfo.params.dir.color[1] = (unaligned s32) init->unk32;
            params->lightInfo.params.point.color[2] = (unaligned s32) init->lightPoint.color[2];
            temp_s0_2 = Effect_GetContext();
            params->light = LightContext_InsertLight(temp_s0_2, Effect_GetContext() + 0x818, &params->lightInfo);
            return;
        }
        params->light = NULL;
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void EffectShieldParticle_Destroy(EffShieldParticleParams *params) {
    GlobalContext *sp1C;

    if ((params != 0) && (params->hasLight == 1)) {
        params = params;
        if (params->light == Effect_GetContext()->lightCtx.listHead) {
            params = params;
            Effect_GetContext()->lightCtx.listHead = params->light->next;
        }
        params = params;
        sp1C = Effect_GetContext();
        LightContext_RemoveLight(sp1C, Effect_GetContext() + 0x818, params->light);
    }
}

s32 EffectShieldParticle_Update(EffShieldParticleParams *params) {
    EffShieldParticleParams *temp_v1;
    f32 temp_f0;
    u8 temp_t6;
    EffShieldParticleParams *phi_v1;

    if (params == 0) {
        return 0;
    }
    phi_v1 = params;
    if ((u32) params < (u32) &params->particles[params->numParticles]) {
        do {
            phi_v1->particles[0].endXChange -= params->acceleration;
            if (phi_v1->particles[0].endXChange < 0.0f) {
                phi_v1->particles[0].endXChange = 0.0f;
            }
            temp_f0 = phi_v1->particles[0].startXChange;
            if (temp_f0 > 0.0f) {
                phi_v1->particles[0].startXChange = temp_f0 - params->acceleration;
                if (phi_v1->particles[0].startXChange < 0.0f) {
                    phi_v1->particles[0].startXChange = 0.0f;
                }
            }
            phi_v1->particles[0].endX += phi_v1->particles[0].endXChange;
            phi_v1->particles[0].startX += phi_v1->particles[0].startXChange;
            if ((phi_v1->particles[0].startXChange == 0.0f) && (params->lengthCutoff < (phi_v1->particles[0].endX - phi_v1->particles[0].startX))) {
                phi_v1->particles[0].startXChange = phi_v1->particles[0].startSpeed;
            }
            temp_v1 = phi_v1 + 0x18;
            phi_v1 = temp_v1;
        } while ((u32) temp_v1 < (u32) &params->particles[params->numParticles]);
    }
    if (params->hasLight == 1) {
        params->lightInfo.params.point.radius = (s16) ((s32) params->lightInfo.params.point.radius / 2);
    }
    temp_t6 = params->age + 1;
    params->age = temp_t6;
    if ((s32) params->duration < (temp_t6 & 0xFF)) {
        return 1;
    }
    return 0;
}

void EffectShieldParticle_CalculateColors(EffShieldParticleParams *params, Color_RGBA8 *primColor, Color_RGBA8 *envColor) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f8;
    s32 temp_f18;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a2_4;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t6;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    f32 phi_f6;
    f32 phi_f16;
    f32 phi_f6_2;
    f32 phi_f4;
    f32 phi_f8;
    f32 phi_f4_2;
    f32 phi_f6_3;
    f32 phi_f16_2;
    f32 phi_f4_3;
    f32 phi_f18;

    temp_t6 = params->duration;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f18 = (s32) (phi_f6 * 0.5f);
    if (temp_f18 == 0) {
        primColor->r = params->primColorStart.r;
        primColor->g = params->primColorStart.g;
        primColor->b = params->primColorStart.b;
        primColor->a = params->primColorStart.a;
        envColor->r = params->envColorStart.r;
        envColor->g = params->envColorStart.g;
        envColor->b = params->envColorStart.b;
        envColor->a = params->envColorStart.a;
        return;
    }
    temp_t1 = params->age;
    if ((s32) temp_t1 < temp_f18) {
        temp_v1 = params->primColorStart.r;
        temp_f0 = (f32) temp_t1 / (f32) temp_f18;
        primColor->r = (u8) (u32) ((f32) temp_v1 + ((f32) (params->primColorMid.r - temp_v1) * temp_f0));
        temp_a2 = params->primColorStart.g;
        primColor->g = (u8) (u32) ((f32) temp_a2 + ((f32) (params->primColorMid.g - temp_a2) * temp_f0));
        temp_a3 = params->primColorStart.b;
        primColor->b = (u8) (u32) ((f32) temp_a3 + ((f32) (params->primColorMid.b - temp_a3) * temp_f0));
        temp_t0 = params->primColorStart.a;
        primColor->a = (u8) (u32) ((f32) temp_t0 + ((f32) (params->primColorMid.a - temp_t0) * temp_f0));
        temp_v0 = params->envColorStart.r;
        temp_f16 = (f32) temp_v0;
        phi_f16 = temp_f16;
        if ((s32) temp_v0 < 0) {
            phi_f16 = temp_f16 + 4294967296.0f;
        }
        envColor->r = (u8) (u32) (phi_f16 + ((f32) (params->envColorMid.r - temp_v0) * temp_f0));
        temp_v1_2 = params->envColorStart.g;
        temp_f6_2 = (f32) temp_v1_2;
        phi_f6_2 = temp_f6_2;
        if ((s32) temp_v1_2 < 0) {
            phi_f6_2 = temp_f6_2 + 4294967296.0f;
        }
        envColor->g = (u8) (u32) (phi_f6_2 + ((f32) (params->envColorMid.g - temp_v1_2) * temp_f0));
        temp_a1 = params->envColorStart.b;
        temp_f4 = (f32) temp_a1;
        phi_f4 = temp_f4;
        if ((s32) temp_a1 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        envColor->b = (u8) (u32) (phi_f4 + ((f32) (params->envColorMid.b - temp_a1) * temp_f0));
        temp_a2_2 = params->envColorStart.a;
        temp_f8 = (f32) temp_a2_2;
        phi_f8 = temp_f8;
        if ((s32) temp_a2_2 < 0) {
            phi_f8 = temp_f8 + 4294967296.0f;
        }
        envColor->a = (u8) (u32) (phi_f8 + ((f32) (params->envColorMid.a - temp_a2_2) * temp_f0));
        return;
    }
    temp_a2_3 = params->primColorMid.r;
    temp_f4_2 = (f32) temp_a2_3;
    temp_f0_2 = (f32) (temp_t1 - temp_f18) / (f32) temp_f18;
    phi_f4_2 = temp_f4_2;
    if ((s32) temp_a2_3 < 0) {
        phi_f4_2 = temp_f4_2 + 4294967296.0f;
    }
    primColor->r = (u8) (u32) (phi_f4_2 + ((f32) (params->primColorEnd.r - temp_a2_3) * temp_f0_2));
    temp_a3_2 = params->primColorMid.g;
    primColor->g = (u8) (u32) ((f32) temp_a3_2 + ((f32) (params->primColorEnd.g - temp_a3_2) * temp_f0_2));
    temp_t0_2 = params->primColorMid.b;
    primColor->b = (u8) (u32) ((f32) temp_t0_2 + ((f32) (params->primColorEnd.b - temp_t0_2) * temp_f0_2));
    temp_t1_2 = params->primColorMid.a;
    primColor->a = (u8) (u32) ((f32) temp_t1_2 + ((f32) (params->primColorEnd.a - temp_t1_2) * temp_f0_2));
    temp_v0_2 = params->envColorMid.r;
    temp_f6_3 = (f32) temp_v0_2;
    phi_f6_3 = temp_f6_3;
    if ((s32) temp_v0_2 < 0) {
        phi_f6_3 = temp_f6_3 + 4294967296.0f;
    }
    envColor->r = (u8) (u32) (phi_f6_3 + ((f32) (params->envColorEnd.r - temp_v0_2) * temp_f0_2));
    temp_v1_3 = params->envColorMid.g;
    temp_f16_2 = (f32) temp_v1_3;
    phi_f16_2 = temp_f16_2;
    if ((s32) temp_v1_3 < 0) {
        phi_f16_2 = temp_f16_2 + 4294967296.0f;
    }
    envColor->g = (u8) (u32) (phi_f16_2 + ((f32) (params->envColorEnd.g - temp_v1_3) * temp_f0_2));
    temp_a1_2 = params->envColorMid.b;
    temp_f4_3 = (f32) temp_a1_2;
    phi_f4_3 = temp_f4_3;
    if ((s32) temp_a1_2 < 0) {
        phi_f4_3 = temp_f4_3 + 4294967296.0f;
    }
    envColor->b = (u8) (u32) (phi_f4_3 + ((f32) (params->envColorEnd.b - temp_a1_2) * temp_f0_2));
    temp_a2_4 = params->envColorMid.a;
    temp_f18_2 = (f32) temp_a2_4;
    phi_f18 = temp_f18_2;
    if ((s32) temp_a2_4 < 0) {
        phi_f18 = temp_f18_2 + 4294967296.0f;
    }
    envColor->a = (u8) (u32) (phi_f18 + ((f32) (params->envColorEnd.a - temp_a2_4) * temp_f0_2));
}

void EffectShieldParticle_Draw(EffShieldParticleParams *params, GraphicsContext *gfxCtx) {
    u8 sp194;
    u8 sp190;
    ? sp100;
    ? spC0;
    ? sp80;
    EffShieldParticleParams *temp_s1;
    Gfx *temp_a0;
    Gfx *temp_a0_10;
    Gfx *temp_a0_11;
    Gfx *temp_a0_12;
    Gfx *temp_a0_13;
    Gfx *temp_a0_14;
    Gfx *temp_a0_15;
    Gfx *temp_a0_16;
    Gfx *temp_a0_17;
    Gfx *temp_a0_18;
    Gfx *temp_a0_19;
    Gfx *temp_a0_20;
    Gfx *temp_a0_2;
    Gfx *temp_a0_3;
    Gfx *temp_a0_4;
    Gfx *temp_a0_5;
    Gfx *temp_a0_6;
    Gfx *temp_a0_7;
    Gfx *temp_a0_8;
    Gfx *temp_a0_9;
    Mtx *temp_v0;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    EffShieldParticleParams *phi_s1;
    f32 phi_f20;

    if (params != 0) {
        gfxCtx->polyXlu.p = Gfx_CallSetupDL(gfxCtx->polyXlu.p, 0x26U);
        temp_a0 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0 + 8;
        temp_a0->words.w1 = 0x100000;
        temp_a0->words.w0 = 0xE3000A01;
        temp_a0_2 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_2 + 8;
        temp_a0_2->words.w1 = 0;
        temp_a0_2->words.w0 = 0xE7000000;
        temp_a0_3 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_3 + 8;
        temp_a0_3->words.w1 = -1;
        temp_a0_3->words.w0 = 0xD7000002;
        temp_a0_4 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_4 + 8;
        temp_a0_4->words.w1 = (u32) &D_04054F20;
        temp_a0_4->words.w0 = 0xFD900000;
        temp_a0_5 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_5 + 8;
        temp_a0_5->words.w0 = 0xF5900000;
        temp_a0_5->words.w1 = 0x7014050;
        temp_a0_6 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_6 + 8;
        temp_a0_6->words.w1 = 0;
        temp_a0_6->words.w0 = 0xE6000000;
        temp_a0_7 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_7 + 8;
        temp_a0_7->words.w1 = 0x71FF200;
        temp_a0_7->words.w0 = 0xF3000000;
        temp_a0_8 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_8 + 8;
        temp_a0_8->words.w1 = 0;
        temp_a0_8->words.w0 = 0xE7000000;
        temp_a0_9 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_9 + 8;
        temp_a0_9->words.w1 = 0x14050;
        temp_a0_9->words.w0 = 0xF5880800;
        temp_a0_10 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_10 + 8;
        temp_a0_10->words.w0 = 0xF2000000;
        temp_a0_10->words.w1 = 0x7C07C;
        temp_a0_11 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_11 + 8;
        temp_a0_11->words.w0 = 0xFC30B3FF;
        temp_a0_11->words.w1 = 0x5FFEFE38;
        temp_a0_12 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_12 + 8;
        temp_a0_12->words.w0 = 0xE200001C;
        temp_a0_12->words.w1 = 0xC184B50;
        temp_a0_13 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_13 + 8;
        temp_a0_13->words.w1 = 0;
        temp_a0_13->words.w0 = 0xD9F0F9FF;
        temp_a0_14 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_14 + 8;
        temp_a0_14->words.w0 = 0xD9FFFFFF;
        temp_a0_14->words.w1 = 0x200005;
        EffectShieldParticle_CalculateColors(params, (Color_RGBA8 *) &sp194, (Color_RGBA8 *) &sp190);
        temp_a0_15 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_15 + 8;
        temp_a0_15->words.w0 = 0xFA000000;
        temp_a0_15->words.w1 = (sp194 << 0x18) | (sp195 << 0x10) | (sp196 << 8) | sp197;
        temp_a0_16 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_16 + 8;
        temp_a0_16->words.w0 = 0xFB000000;
        temp_a0_16->words.w1 = (sp190 << 0x18) | (sp191 << 0x10) | (sp192 << 8) | sp193;
        temp_a0_17 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = temp_a0_17 + 8;
        temp_a0_17->words.w1 = 0;
        temp_a0_17->words.w0 = 0xE7000000;
        phi_s1 = params;
        if ((u32) params < (u32) &params->particles[params->numParticles]) {
loop_3:
            temp_f0 = phi_s1->particles[0].endX;
            temp_f2 = phi_s1->particles[0].startX;
            temp_f22 = (temp_f0 + temp_f2) * 0.5f;
            temp_f20 = ((temp_f0 - temp_f2) * 0.015625f) / 0.02f;
            phi_f20 = temp_f20;
            if (temp_f20 < 1.0f) {
                phi_f20 = 1.0f;
            }
            SkinMatrix_SetTranslate((MtxF *) &spC0, (f32) params->position.x, (f32) params->position.y, (f32) params->position.z);
            SkinMatrix_SetRotateRPY((MtxF *) &sp100, 0, phi_s1->particles[0].rotationY, 0);
            SkinMatrix_MtxFMtxFMult((MtxF *) &spC0, (MtxF *) &sp100, (MtxF *) &sp80);
            SkinMatrix_SetRotateRPY((MtxF *) &sp100, 0, 0, phi_s1->particles[0].rotationZ);
            SkinMatrix_MtxFMtxFMult((MtxF *) &sp80, (MtxF *) &sp100, (MtxF *) &spC0);
            SkinMatrix_SetTranslate((MtxF *) &sp100, temp_f22, 0.0f, 0.0f);
            SkinMatrix_MtxFMtxFMult((MtxF *) &spC0, (MtxF *) &sp100, (MtxF *) &sp80);
            SkinMatrix_SetScale((MtxF *) &sp100, phi_f20 * 0.02f, 0.02f, 0.02f);
            SkinMatrix_MtxFMtxFMult((MtxF *) &sp80, (MtxF *) &sp100, (MtxF *) &spC0);
            temp_v0 = SkinMatrix_MtxFToNewMtx(gfxCtx, (MtxF *) &spC0);
            if (temp_v0 != 0) {
                temp_a0_18 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_18 + 8;
                temp_a0_18->words.w1 = (u32) temp_v0;
                temp_a0_18->words.w0 = 0xDA380003;
                temp_a0_19 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_19 + 8;
                temp_a0_19->words.w1 = (u32) sEffectShieldParticleVertices;
                temp_a0_19->words.w0 = 0x1004008;
                temp_a0_20 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_20 + 8;
                temp_a0_20->words.w1 = 0x602;
                temp_a0_20->words.w0 = 0x6000204;
                temp_s1 = phi_s1 + 0x18;
                phi_s1 = temp_s1;
                if ((u32) temp_s1 < (u32) &params->particles[params->numParticles]) {
                    goto loop_3;
                }
            }
        }
    }
}
