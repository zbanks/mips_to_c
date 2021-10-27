struct _mips2c_stack_EffectSpark_Destroy {};        /* size 0x0 */

struct _mips2c_stack_EffectSpark_Draw {
    /* 0x000 */ char pad_0[0x4C];
    /* 0x04C */ MtxF *sp4C;                         /* inferred */
    /* 0x050 */ char pad_50[0x20];                  /* maybe part of sp4C[9]? */
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad_70[0x40];
    /* 0x0B0 */ ? spB0;                             /* inferred */
    /* 0x0B0 */ char pad_B0[0x40];
    /* 0x0F0 */ ? spF0;                             /* inferred */
    /* 0x0F0 */ char pad_F0[0x40];
    /* 0x130 */ ? sp130;                            /* inferred */
    /* 0x130 */ char pad_130[0x8C];
    /* 0x1BC */ u8 sp1BC;                           /* inferred */
    /* 0x1BD */ u8 sp1BD;                           /* inferred */
    /* 0x1BE */ u8 sp1BE;                           /* inferred */
    /* 0x1BF */ u8 sp1BF;                           /* inferred */
    /* 0x1C0 */ u8 sp1C0;                           /* inferred */
    /* 0x1C1 */ u8 sp1C1;                           /* inferred */
    /* 0x1C2 */ u8 sp1C2;                           /* inferred */
    /* 0x1C3 */ u8 sp1C3;                           /* inferred */
    /* 0x1C4 */ u8 sp1C4;                           /* inferred */
    /* 0x1C5 */ u8 sp1C5;                           /* inferred */
    /* 0x1C6 */ u8 sp1C6;                           /* inferred */
    /* 0x1C7 */ u8 sp1C7;                           /* inferred */
    /* 0x1C8 */ u8 sp1C8;                           /* inferred */
    /* 0x1C9 */ u8 sp1C9;                           /* inferred */
    /* 0x1CA */ u8 sp1CA;                           /* inferred */
    /* 0x1CB */ u8 sp1CB;                           /* inferred */
    /* 0x1CC */ char pad_1CC[0xC];                  /* maybe part of sp1CB[13]? */
    /* 0x1D8 */ EffSparkParams *sp1D8;              /* inferred */
    /* 0x1DC */ char pad_1DC[0x4];
};                                                  /* size = 0x1E0 */

struct _mips2c_stack_EffectSpark_Init {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EffectSpark_Update {};         /* size 0x0 */

extern ? D_04054F20;
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

void EffectSpark_Init(EffSparkParams *params, EffSparkParams *init) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s32 temp_s3;
    s32 temp_v0;
    EffSparkParams *phi_s2;
    EffSparkParticle *phi_s0;
    s32 phi_s3;

    if ((params != 0) && (init != 0) && (init->particleFactor1 != 0) && (init->particleFactor2 != 0)) {
        params->unk_0 = (unaligned s32) init->unk_0;
        params->position.z = (s16) (u16) init->position.z;
        params->velocity = init->velocity;
        params->gravity = init->gravity;
        params->particleFactor1 = init->particleFactor1;
        params->particleFactor2 = init->particleFactor2;
        params->colorStart[0].r = init->colorStart[0].r;
        params->colorStart[0].g = init->colorStart[0].g;
        params->colorStart[0].b = init->colorStart[0].b;
        params->colorStart[0].a = init->colorStart[0].a;
        params->colorStart[1].r = init->colorStart[1].r;
        params->colorStart[1].g = init->colorStart[1].g;
        params->colorStart[1].b = init->colorStart[1].b;
        params->colorStart[1].a = init->colorStart[1].a;
        params->colorStart[2].r = init->colorStart[2].r;
        params->colorStart[2].g = init->colorStart[2].g;
        params->colorStart[2].b = init->colorStart[2].b;
        params->colorStart[2].a = init->colorStart[2].a;
        params->colorStart[3].r = init->colorStart[3].r;
        params->colorStart[3].g = init->colorStart[3].g;
        params->colorStart[3].b = init->colorStart[3].b;
        params->colorStart[3].a = init->colorStart[3].a;
        params->colorEnd[0].r = init->colorEnd[0].r;
        params->colorEnd[0].g = init->colorEnd[0].g;
        params->colorEnd[0].b = init->colorEnd[0].b;
        params->colorEnd[0].a = init->colorEnd[0].a;
        params->colorEnd[1].r = init->colorEnd[1].r;
        params->colorEnd[1].g = init->colorEnd[1].g;
        params->colorEnd[1].b = init->colorEnd[1].b;
        params->colorEnd[1].a = init->colorEnd[1].a;
        params->colorEnd[2].r = init->colorEnd[2].r;
        params->colorEnd[2].g = init->colorEnd[2].g;
        params->colorEnd[2].b = init->colorEnd[2].b;
        params->colorEnd[2].a = init->colorEnd[2].a;
        params->colorEnd[3].r = init->colorEnd[3].r;
        temp_v0 = (params->particleFactor1 * params->particleFactor2) + 2;
        params->colorEnd[3].g = init->colorEnd[3].g;
        params->colorEnd[3].b = init->colorEnd[3].b;
        params->colorEnd[3].a = init->colorEnd[3].a;
        params->numParticles = temp_v0;
        params->duration = init->duration;
        if (temp_v0 < 0x21) {
            phi_s3 = 0;
            if (temp_v0 > 0) {
                phi_s2 = params;
                phi_s0 = params->particles;
                do {
                    phi_s2->particles[0].position.x = (f32) params->position.x;
                    phi_s2->particles[0].position.y = (f32) params->position.y;
                    phi_s2->particles[0].position.z = (f32) params->position.z;
                    phi_s0->velocity.x = Rand_ZeroOne() - 0.5f;
                    phi_s0->velocity.y = Rand_ZeroOne() - 0.5f;
                    temp_f12 = phi_s0->velocity.x;
                    temp_f14 = phi_s0->velocity.y;
                    temp_f2 = Rand_ZeroOne() - 0.5f;
                    phi_s0->velocity.z = temp_f2;
                    temp_f16 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f2 * temp_f2));
                    if (!(fabsf(temp_f16) < 0.008f)) {
                        temp_f0 = 1.0f / temp_f16;
                        phi_s0->velocity.x = temp_f12 * (params->velocity * temp_f0);
                        phi_s0->velocity.y = temp_f14 * (params->velocity * temp_f0);
                        phi_s0->velocity.z *= params->velocity * temp_f0;
                    } else {
                        phi_s0->velocity.z = 0.0f;
                        phi_s0->velocity.x = 0.0f;
                        phi_s0->velocity.y = params->velocity;
                    }
                    phi_s0->unk18.x = (s16) (s32) (30000.0f - (Rand_ZeroOne() * 15000.0f));
                    phi_s0->unk18.y = (s16) (s32) (30000.0f - (Rand_ZeroOne() * 15000.0f));
                    phi_s0->unk18.z = (s16) (s32) (30000.0f - (Rand_ZeroOne() * 15000.0f));
                    phi_s0->unk1E.x = (s16) (s32) (Rand_ZeroOne() * 65534.0f);
                    phi_s0->unk1E.y = (s16) (s32) (Rand_ZeroOne() * 65534.0f);
                    phi_s0->unk1E.z = (s16) (s32) (Rand_ZeroOne() * 65534.0f);
                    temp_s3 = phi_s3 + 1;
                    phi_s2 += 0x24;
                    phi_s0 += 0x24;
                    phi_s3 = temp_s3;
                } while (temp_s3 < params->numParticles);
            }
            params->age = 0;
        }
    }
}

void EffectSpark_Destroy(EffSparkParams *params) {

}

s32 EffectSpark_Update(EffSparkParams *params) {
    f32 temp_f0;
    s32 temp_t8;
    s32 temp_v0;
    EffSparkParams *phi_v1;
    s32 phi_v0;

    phi_v1 = params;
    phi_v0 = 0;
    if (params->numParticles > 0) {
        do {
            temp_f0 = phi_v1->particles[0].velocity.y;
            phi_v1->particles[0].position.x += phi_v1->particles[0].velocity.x;
            phi_v1->particles[0].position.y += temp_f0;
            phi_v1->particles[0].position.z += phi_v1->particles[0].velocity.z;
            phi_v1->particles[0].velocity.y = temp_f0 + params->gravity;
            phi_v1->particles[0].unk1E.x += phi_v1->particles[0].unk18.x;
            phi_v1->particles[0].unk1E.y += phi_v1->particles[0].unk18.y;
            phi_v1->particles[0].unk1E.z += phi_v1->particles[0].unk18.z;
            temp_v0 = phi_v0 + 1;
            phi_v1 += 0x24;
            phi_v0 = temp_v0;
        } while (temp_v0 < params->numParticles);
    }
    temp_t8 = params->age + 1;
    params->age = temp_t8;
    if (params->duration < temp_t8) {
        return 1;
    }
    return 0;
}

void EffectSpark_Draw(EffSparkParams *params, GraphicsContext *gfxCtx) {
    EffSparkParams *sp1D8;
    u8 sp1CB;
    u8 sp1CA;
    u8 sp1C9;
    u8 sp1C8;
    u8 sp1C7;
    u8 sp1C6;
    u8 sp1C5;
    u8 sp1C4;
    u8 sp1C3;
    u8 sp1C2;
    u8 sp1C1;
    u8 sp1C0;
    u8 sp1BF;
    u8 sp1BE;
    u8 sp1BD;
    u8 sp1BC;
    ? sp130;
    ? spF0;
    ? spB0;
    ? sp70;
    MtxF *sp4C;
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
    Gfx *temp_s1;
    GlobalContext *temp_s4;
    Mtx *temp_v0;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    s32 temp_s3;
    u8 temp_t2;
    u8 temp_t5;
    u8 temp_t5_2;
    u8 temp_t6;
    u8 temp_t8;
    u8 temp_t9;
    void *temp_s0;
    f32 phi_f2;
    f32 phi_f10;
    f32 phi_f10_2;
    f32 phi_f18;
    f32 phi_f10_3;
    f32 phi_f2_2;
    EffSparkParams *phi_s2;
    void *phi_s0;
    s32 phi_s3;

    sp1D8 = params;
    temp_s4 = Effect_GetContext();
    if (params != 0) {
        temp_a0 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0[1];
        temp_a0->words.w1 = (u32) &D_801D1DE0;
        temp_a0->words.w0 = 0xDA380003;
        gfxCtx->polyXlu.p = Gfx_CallSetupDL(gfxCtx->polyXlu.p, 0x26U);
        temp_a0_2 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_2[1];
        temp_a0_2->words.w1 = 0x100000;
        temp_a0_2->words.w0 = 0xE3000A01;
        temp_a0_3 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_3[1];
        temp_a0_3->words.w1 = 0;
        temp_a0_3->words.w0 = 0xE7000000;
        temp_a0_4 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_4[1];
        temp_a0_4->words.w1 = -1;
        temp_a0_4->words.w0 = 0xD7000002;
        temp_a0_5 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_5[1];
        temp_a0_5->words.w1 = (u32) &D_04054F20;
        temp_a0_5->words.w0 = 0xFD900000;
        temp_a0_6 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_6[1];
        temp_a0_6->words.w0 = 0xF5900000;
        temp_a0_6->words.w1 = 0x7014050;
        temp_a0_7 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_7[1];
        temp_a0_7->words.w1 = 0;
        temp_a0_7->words.w0 = 0xE6000000;
        temp_a0_8 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_8[1];
        temp_a0_8->words.w1 = 0x71FF200;
        temp_a0_8->words.w0 = 0xF3000000;
        temp_a0_9 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_9[1];
        temp_a0_9->words.w1 = 0;
        temp_a0_9->words.w0 = 0xE7000000;
        temp_a0_10 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_10[1];
        temp_a0_10->words.w1 = 0x14050;
        temp_a0_10->words.w0 = 0xF5880800;
        temp_a0_11 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_11[1];
        temp_a0_11->words.w0 = 0xF2000000;
        temp_a0_11->words.w1 = 0x7C07C;
        temp_a0_12 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_12[1];
        temp_a0_12->words.w0 = 0xFCFFFFFF;
        temp_a0_12->words.w1 = 0xFFFE7238;
        temp_a0_13 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_13[1];
        temp_a0_13->words.w0 = 0xE200001C;
        temp_a0_13->words.w1 = 0xC184B50;
        temp_a0_14 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_14[1];
        temp_a0_14->words.w1 = 0;
        temp_a0_14->words.w0 = 0xD9F0F9FF;
        temp_a0_15 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_15[1];
        temp_a0_15->words.w0 = 0xD9FFFFFF;
        temp_a0_15->words.w1 = 0x200005;
        temp_a0_16 = gfxCtx->polyXlu.p;
        gfxCtx->polyXlu.p = &temp_a0_16[1];
        temp_a0_16->words.w1 = 0;
        temp_a0_16->words.w0 = 0xE7000000;
        temp_s1 = gfxCtx->polyOpa.d - (((params->numParticles << 6) + 0xF) & ~0xF);
        gfxCtx->polyOpa.d = temp_s1;
        if (temp_s1 != 0) {
            temp_t5 = params->colorStart[0].r;
            temp_f2 = (f32) temp_t5;
            temp_f0 = (f32) params->age / (f32) params->duration;
            phi_f2 = temp_f2;
            if ((s32) temp_t5 < 0) {
                phi_f2 = temp_f2 + 4294967296.0f;
            }
            sp1CB = (u8) (u32) ((((f32) params->colorEnd[0].r - phi_f2) * temp_f0) + phi_f2);
            temp_f12 = (f32) params->colorStart[0].g;
            sp1CA = (u8) (u32) ((((f32) params->colorEnd[0].g - temp_f12) * temp_f0) + temp_f12);
            temp_f14 = (f32) params->colorStart[0].b;
            sp1C9 = (u8) (u32) ((((f32) params->colorEnd[0].b - temp_f14) * temp_f0) + temp_f14);
            temp_f16 = (f32) params->colorStart[0].a;
            sp1C8 = (u8) (u32) ((((f32) params->colorEnd[0].a - temp_f16) * temp_f0) + temp_f16);
            temp_f18 = (f32) params->colorStart[1].r;
            sp1C7 = (u8) (u32) ((((f32) params->colorEnd[1].r - temp_f18) * temp_f0) + temp_f18);
            temp_f2_2 = (f32) params->colorStart[1].g;
            sp1C6 = (u8) (u32) ((((f32) params->colorEnd[1].g - temp_f2_2) * temp_f0) + temp_f2_2);
            temp_f12_2 = (f32) params->colorStart[1].b;
            sp1C5 = (u8) (u32) ((((f32) params->colorEnd[1].b - temp_f12_2) * temp_f0) + temp_f12_2);
            temp_f14_2 = (f32) params->colorStart[1].a;
            sp1C4 = (u8) (u32) ((((f32) params->colorEnd[1].a - temp_f14_2) * temp_f0) + temp_f14_2);
            temp_f16_2 = (f32) params->colorStart[2].r;
            sp1C3 = (u8) (u32) ((((f32) params->colorEnd[2].r - temp_f16_2) * temp_f0) + temp_f16_2);
            temp_f18_2 = (f32) params->colorStart[2].g;
            sp1C2 = (u8) (u32) ((((f32) params->colorEnd[2].g - temp_f18_2) * temp_f0) + temp_f18_2);
            temp_f2_3 = (f32) params->colorStart[2].b;
            sp1C1 = (u8) (u32) ((((f32) params->colorEnd[2].b - temp_f2_3) * temp_f0) + temp_f2_3);
            temp_f12_3 = (f32) params->colorStart[2].a;
            sp1C0 = (u8) (u32) ((((f32) params->colorEnd[2].a - temp_f12_3) * temp_f0) + temp_f12_3);
            temp_f14_3 = (f32) params->colorStart[3].r;
            sp1BF = (u8) (u32) ((((f32) params->colorEnd[3].r - temp_f14_3) * temp_f0) + temp_f14_3);
            temp_f16_3 = (f32) params->colorStart[3].g;
            temp_t9 = params->colorEnd[3].g;
            temp_f10 = (f32) temp_t9;
            phi_f10 = temp_f10;
            if ((s32) temp_t9 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            sp1BE = (u8) (u32) (((phi_f10 - temp_f16_3) * temp_f0) + temp_f16_3);
            temp_t8 = params->colorStart[3].b;
            temp_f18_3 = (f32) temp_t8;
            phi_f18 = temp_f18_3;
            if ((s32) temp_t8 < 0) {
                phi_f18 = temp_f18_3 + 4294967296.0f;
            }
            temp_t2 = params->colorEnd[3].b;
            temp_f10_2 = (f32) temp_t2;
            phi_f10_2 = temp_f10_2;
            if ((s32) temp_t2 < 0) {
                phi_f10_2 = temp_f10_2 + 4294967296.0f;
            }
            sp1BD = (u8) (u32) (((phi_f10_2 - phi_f18) * temp_f0) + phi_f18);
            temp_t5_2 = params->colorStart[3].a;
            temp_f2_4 = (f32) temp_t5_2;
            phi_f2_2 = temp_f2_4;
            if ((s32) temp_t5_2 < 0) {
                phi_f2_2 = temp_f2_4 + 4294967296.0f;
            }
            temp_t6 = params->colorEnd[3].a;
            temp_f10_3 = (f32) temp_t6;
            phi_f10_3 = temp_f10_3;
            phi_s2 = params;
            phi_s0 = temp_s1 + (0 * 0x10);
            if ((s32) temp_t6 < 0) {
                phi_f10_3 = temp_f10_3 + 4294967296.0f;
            }
            sp1BC = (u8) (u32) (((phi_f10_3 - phi_f2_2) * temp_f0) + phi_f2_2);
            phi_s3 = 0;
            if (params->numParticles > 0) {
                sp4C = &temp_s4->mf_187FC;
loop_16:
                SkinMatrix_SetTranslate((MtxF *) &spF0, phi_s2->particles[0].position.x, phi_s2->particles[0].position.y, phi_s2->particles[0].position.z);
                temp_f2_5 = ((Rand_ZeroOne() * 2.5f) + 1.5f) * 0.015625f;
                SkinMatrix_SetScale((MtxF *) &spB0, temp_f2_5, temp_f2_5, 1.0f);
                SkinMatrix_MtxFMtxFMult((MtxF *) &spF0, sp4C, (MtxF *) &sp70);
                SkinMatrix_MtxFMtxFMult((MtxF *) &sp70, (MtxF *) &spB0, (MtxF *) &sp130);
                phi_s0->unk_0 = -0x20;
                phi_s0->unk_2 = -0x20;
                phi_s0->unk_4 = 0;
                temp_s0 = phi_s0 + 0x40;
                temp_s0->unk_-34 = sp1CB;
                temp_s0->unk_-33 = sp1CA;
                temp_s0->unk_-32 = sp1C9;
                temp_s0->unk_-38 = 0;
                temp_s0->unk_-36 = 0x400;
                temp_s0->unk_-3A = 0;
                temp_s0->unk_-30 = 0x20;
                temp_s0->unk_-2E = 0x20;
                temp_s0->unk_-2C = 0;
                temp_s0->unk_-31 = sp1C8;
                temp_s0->unk_-24 = sp1C7;
                temp_s0->unk_-23 = sp1C6;
                temp_s0->unk_-22 = sp1C5;
                temp_s0->unk_-28 = 0x400;
                temp_s0->unk_-26 = 0;
                temp_s0->unk_-2A = 0;
                temp_s0->unk_-20 = -0x20;
                temp_s0->unk_-1E = 0x20;
                temp_s0->unk_-1C = 0;
                temp_s0->unk_-21 = sp1C4;
                temp_s0->unk_-14 = sp1C3;
                temp_s0->unk_-13 = sp1C2;
                temp_s0->unk_-12 = sp1C1;
                temp_s0->unk_-18 = 0;
                temp_s0->unk_-16 = 0;
                temp_s0->unk_-1A = 0;
                temp_s0->unk_-10 = 0x20;
                temp_s0->unk_-E = -0x20;
                temp_s0->unk_-C = 0;
                temp_s0->unk_-11 = sp1C0;
                temp_s0->unk_-4 = sp1BF;
                temp_s0->unk_-3 = sp1BE;
                temp_s0->unk_-2 = sp1BD;
                temp_s0->unk_-8 = 0x400;
                temp_s0->unk_-6 = 0x400;
                temp_s0->unk_-A = 0;
                temp_s0->unk_-1 = sp1BC;
                temp_v0 = SkinMatrix_MtxFToNewMtx(gfxCtx, (MtxF *) &sp130);
                phi_s0 = temp_s0;
                if (temp_v0 != 0) {
                    temp_a0_17 = gfxCtx->polyXlu.p;
                    gfxCtx->polyXlu.p = &temp_a0_17[1];
                    temp_a0_17->words.w1 = (u32) temp_v0;
                    temp_a0_17->words.w0 = 0xDA380003;
                    temp_a0_18 = gfxCtx->polyXlu.p;
                    gfxCtx->polyXlu.p = &temp_a0_18[1];
                    temp_a0_18->words.w1 = (u32) ((phi_s3 << 6) + temp_s1);
                    temp_a0_18->words.w0 = 0x1004008;
                    temp_a0_19 = gfxCtx->polyXlu.p;
                    gfxCtx->polyXlu.p = &temp_a0_19[1];
                    temp_a0_19->words.w0 = 0x6040006;
                    temp_a0_19->words.w1 = 0x40602;
                    temp_s3 = phi_s3 + 1;
                    phi_s2 += 0x24;
                    phi_s3 = temp_s3;
                    if (temp_s3 >= sp1D8->numParticles) {
                        goto block_19;
                    }
                    goto loop_16;
                }
            } else {
block_19:
                temp_a0_20 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = &temp_a0_20[1];
                temp_a0_20->words.w1 = 0;
                temp_a0_20->words.w0 = 0xE7000000;
            }
        }
    }
}
