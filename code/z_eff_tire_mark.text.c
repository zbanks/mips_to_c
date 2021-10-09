s32 func_80179798(f32 *, f32 *, f32 *, f32 *, f32 *, ? *); /* extern */
void func_800AEF44(s32 arg0);                       /* static */
extern ? D_04014570;
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

typedef struct {
    /* 0x0000 */ u16 unk0;                          /* inferred */
    /* 0x0002 */ Vec3s position1;
    /* 0x0008 */ Vec3s position2;
    /* 0x000E */ s16 life;
    /* 0x0010 */ s32 unk10;                         /* inferred */
    /* 0x0014 */ s32 unk14;                         /* inferred */
} EffTireMarkParticle;                              /* size 0x18 */

void func_800AE930(CollisionContext *colCtx, s32 param_2, f32 *param_3, f32 param_4, s16 param_5, CollisionPoly *param_6, s32 param_7) {
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB4;
    s16 spB2;
    s16 spB0;
    u16 *spAC;
    u32 spA4;
    u32 spA0;
    Vec3s *sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp78;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    s32 sp2C;
    CollisionPoly *temp_a0_3;
    Vec3s *temp_v0_2;
    Vec3s *temp_v1;
    f32 *temp_a0_4;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_a3;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_f18;
    s16 temp_f8_2;
    s16 temp_v0;
    s32 temp_f10;
    s32 temp_f4;
    s32 temp_f8;
    s32 temp_t0;
    u16 *temp_t0_2;
    u16 *temp_t0_3;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 temp_v1_5;
    void *temp_a0_5;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *phi_a0;

    sp9C = colCtx->colHeader->vtxList;
    if ((param_7 != 0x32) || ((s32) param_2->unk602 >= 0x3F) || (param_6 == 0)) {
        func_800AEF44(param_2);
        return;
    }
    temp_a0 = param_5 - 0x4000;
    sp2C = (s32) temp_a0;
    spB8 = (s16) (s32) ((Math_SinS(temp_a0) * param_4) + param_3->unk0);
    temp_f10 = (s32) ((Math_CosS(temp_a0) * param_4) + param_3->unk8);
    temp_f18 = (s16) temp_f10;
    spBC = (s16) temp_f10;
    temp_a0_2 = param_5 + 0x4000;
    temp_f8 = (s32) (func_800BFD84(param_6, (f32) spB8, (f32) temp_f18) + 2.0f);
    sp2C = (s32) temp_a0_2;
    spBA = (s16) temp_f8;
    spB0 = (s16) (s32) ((Math_SinS(temp_a0_2) * param_4) + param_3->unk0);
    temp_f4 = (s32) ((Math_CosS(temp_a0_2) * param_4) + param_3->unk8);
    temp_f8_2 = (s16) temp_f4;
    spB4 = (s16) temp_f4;
    spB2 = (s16) (s32) (func_800BFD84(param_6, (f32) spB0, (f32) temp_f8_2) + 2.0f);
    temp_v0 = param_2->unk602;
    temp_t0 = param_2 + (temp_v0 * 0x18);
    temp_t0_2 = temp_t0 - 0x18;
    if ((temp_v0 != 0) && (temp_a0_3 = temp_t0_2->unk14, (temp_a0_3 != 0)) && (param_6 != temp_a0_3) && (spAC = temp_t0_2, (func_800BFDEC(temp_a0_3, param_6, &spA4, &spA0) == 2))) {
        temp_a2 = &sp54;
        temp_a3 = &sp60;
        temp_v0_2 = &sp9C[spA4];
        temp_a0_4 = &sp84;
        sp84 = (f32) temp_v0_2->x;
        temp_v1 = &sp9C[spA0];
        temp_a1 = &sp90;
        sp88 = (f32) temp_v0_2->y;
        sp8C = (f32) temp_v0_2->z;
        sp90 = (f32) temp_v1->x;
        sp94 = (f32) temp_v1->y;
        sp98 = (f32) temp_v1->z;
        sp54 = (f32) temp_t0_2->unk2;
        sp58 = (f32) temp_t0_2->unk4;
        sp60 = (f32) spB0;
        sp64 = (f32) spB2;
        sp5C = (f32) temp_t0_2->unk6;
        sp68 = (f32) spB4;
        sp3C = (f32) temp_t0_2->unk8;
        sp40 = (f32) temp_t0_2->unkA;
        sp48 = (f32) spB8;
        spAC = temp_t0_2;
        sp4C = (f32) spBA;
        sp44 = (f32) temp_t0_2->unkC;
        sp50 = (f32) spBC;
        if ((func_80179798(temp_a0_4, temp_a1, temp_a2, temp_a3, &sp6C, &sp30) != 0) && (spAC = temp_t0_2, (func_80179798(&sp84, &sp90, &sp3C, &sp48, &sp78, &sp30) != 0))) {
            temp_v1_2 = temp_t0_2->unk0;
            if ((temp_v1_2 & 2) == 0) {
                temp_t0_2->unk0 = temp_v1_2 | 1;
            }
            temp_v0_3 = param_2 + (param_2->unk602 * 0x18);
            temp_v0_3->unk0 = 0;
            temp_v0_3->unk2 = (s16) (s32) sp6C;
            temp_v0_3->unk4 = (s16) (s32) sp70;
            temp_v0_3->unk6 = (s16) (s32) sp74;
            temp_v0_3->unk8 = (s16) (s32) sp78;
            temp_v0_3->unkA = (s16) (s32) sp7C;
            temp_v0_3->unkC = (s16) (s32) sp80;
            temp_v0_3->unk14 = 0;
            temp_v0_3->unkE = (s16) param_2->unk604;
            param_2->unk602 = (s16) (param_2->unk602 + 1);
            temp_a0_5 = param_2 + (param_2->unk602 * 0x18);
            temp_t0_3 = temp_a0_5 - 0x18;
            temp_v1_3 = *temp_t0_3;
            phi_a0 = temp_a0_5;
            if ((temp_v1_3 & 2) == 0) {
                *temp_t0_3 = temp_v1_3 | 1;
                phi_a0 = param_2 + (param_2->unk602 * 0x18);
            }
            phi_a0->unk0 = 0;
            phi_a0->unk2 = (unaligned s32) spB0.unk0;
            phi_a0->unk6 = (u16) spB0.unk4;
            phi_a0->unk8 = (unaligned s32) spB8.unk0;
            phi_a0->unkC = (u16) spB8.unk4;
            phi_a0->unkE = (s16) param_2->unk604;
            phi_a0->unk14 = param_6;
            param_2->unk602 = (s16) (param_2->unk602 + 1);
            return;
        }
        temp_v1_4 = (temp_t0 - 0x18)->unk0;
        if ((temp_v1_4 & 2) == 0) {
            (temp_t0 - 0x18)->unk0 = temp_v1_4 | 1;
        }
        temp_v0_4 = param_2 + (param_2->unk602 * 0x18);
        temp_v0_4->unk0 = 0;
        temp_v0_4->unk2 = (unaligned s32) spB0.unk0;
        temp_v0_4->unk6 = (u16) spB0.unk4;
        temp_v0_4->unk8 = (unaligned s32) spB8.unk0;
        temp_v0_4->unkC = (u16) spB8.unk4;
        temp_v0_4->unkE = (s16) param_2->unk604;
        temp_v0_4->unk14 = param_6;
        param_2->unk602 = (s16) (param_2->unk602 + 1);
        return;
    }
    temp_v1_5 = (temp_t0 - 0x18)->unk0;
    if ((temp_v1_5 & 2) == 0) {
        (temp_t0 - 0x18)->unk0 = temp_v1_5 | 1;
    }
    temp_v0_5 = param_2 + (param_2->unk602 * 0x18);
    temp_v0_5->unk0 = 0;
    temp_v0_5->unk2 = (unaligned s32) spB0.unk0;
    temp_v0_5->unk6 = (u16) spB0.unk4;
    temp_v0_5->unk8 = (unaligned s32) spB8.unk0;
    temp_v0_5->unkC = (u16) spB8.unk4;
    temp_v0_5->unk14 = param_6;
    temp_v0_5->unkE = (s16) param_2->unk604;
    param_2->unk602 = (s16) (param_2->unk602 + 1);
}

void func_800AEF44(void *arg0) {
    void *temp_v0;

    temp_v0 = arg0 + (arg0->unk602 * 0x18);
    *(temp_v0 - 0x18) = temp_v0->unk-18 | 2;
}

void EffectTireMark_InitParticle(EffTireMarkParticle *particle) {
    s16 temp_v0;

    particle->position2.z = 0;
    temp_v0 = particle->position2.z;
    particle->unk0 = 0;
    particle->life = 0;
    particle->unk14 = 0;
    particle->position2.y = temp_v0;
    particle->position2.x = temp_v0;
    particle->position1.z = temp_v0;
    particle->position1.y = temp_v0;
    particle->position1.x = temp_v0;
}

void EffectTireMark_Init(EffTireMarkParams *params, EffTireMarkInit *init) {
    s16 temp_v0;
    s32 temp_s0;
    EffTireMarkParticle *phi_s1;
    s32 phi_s0;

    phi_s1 = params->particles;
    phi_s0 = 0;
    do {
        EffectTireMark_InitParticle(phi_s1);
        temp_s0 = phi_s0 + 0x18;
        phi_s1 += 0x18;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x600);
    params->numParticles = 0;
    params->unk600 = init->unk0;
    temp_v0 = init->maxLife;
    if ((s32) temp_v0 >= 0x3F) {
        params->maxLife = 0x3E;
    } else {
        params->maxLife = temp_v0;
    }
    params->color.r = (unaligned s32) init->color.r;
}

void EffectTireMark_Destroy(EffTireMarkParams *params) {

}

s32 EffectTireMark_Update(EffTireMarkParams *params) {
    EffTireMarkParams *temp_v0_2;
    EffTireMarkParticle *temp_a0;
    EffTireMarkParticle *temp_a1;
    EffTireMarkParticle *temp_a1_2;
    EffTireMarkParticle *temp_a3;
    EffTireMarkParticle *temp_t1;
    EffTireMarkParticle *temp_t2;
    EffTireMarkParticle *temp_v0_3;
    EffTireMarkParticle *temp_v1_2;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_v1;
    EffTireMarkParams *phi_v0;
    s32 phi_v1;
    EffTireMarkParticle *phi_v0_2;
    EffTireMarkParticle *phi_a1;
    EffTireMarkParticle *phi_v1_2;
    EffTireMarkParticle *phi_a0;
    EffTireMarkParticle *phi_a3;
    s32 phi_a2;

    temp_v0 = params->numParticles;
    if (temp_v0 == 0) {
        return 0;
    }
    phi_v1 = 0;
    if ((s32) temp_v0 > 0) {
        phi_v0 = params;
        do {
            temp_v1 = phi_v1 + 1;
            temp_v0_2 = phi_v0 + 0x18;
            temp_v0_2->unk-A = (s16) (phi_v0->particles[0].life - 1);
            phi_v0 = temp_v0_2;
            phi_v1 = temp_v1;
        } while (temp_v1 < (s32) params->numParticles);
    }
    temp_t1 = &params->particles[1];
    if ((s32) params->particles[0].life <= 0) {
        temp_t2 = &params->particles[2];
        temp_a1 = &params->particles[3];
        params->particles[0].unk0 = (s32) temp_t1->unk0;
        params->unk4 = (s32) temp_t1->unk4;
        params->unk8 = (s32) temp_t1->unk8;
        params->unkC = (s32) temp_t1->unkC;
        params->particles[0].unk10 = temp_t1->unk10;
        params->particles[0].unk14 = temp_t1->unk14;
        temp_t1->unk0 = (s32) temp_t2->unk0;
        temp_t1->unk4 = (s32) temp_t2->unk4;
        temp_t1->unk8 = (s32) temp_t2->unk8;
        temp_t1->unkC = (s32) temp_t2->unkC;
        temp_t1->unk10 = temp_t2->unk10;
        temp_t1->unk14 = temp_t2->unk14;
        temp_t2->unk0 = (s32) params->particles[3].unk0;
        temp_t2->unk4 = (s32) params->unk4C;
        temp_t2->unk8 = (s32) params->unk50;
        temp_t2->unkC = (s32) params->unk54;
        temp_t2->unk10 = params->particles[3].unk10;
        temp_t2->unk14 = params->particles[3].unk14;
        phi_v0_2 = temp_a1 + 0x18;
        phi_a1 = temp_a1;
        phi_v1_2 = temp_a1 + 0x30;
        phi_a0 = temp_a1 + 0x48;
        phi_a3 = temp_a1 + 0x60;
        phi_a2 = 3;
        do {
            temp_a2 = phi_a2 + 4;
            temp_a1_2 = phi_a1 + 0x60;
            temp_a1_2->unk-60 = (s32) phi_v0_2->unk0;
            temp_v0_3 = phi_v0_2 + 0x60;
            temp_v1_2 = phi_v1_2 + 0x60;
            temp_a1_2->unk-5C = (s32) phi_v0_2->unk4;
            temp_a0 = phi_a0 + 0x60;
            temp_a3 = phi_a3 + 0x60;
            temp_a1_2->unk-58 = (s32) temp_v0_3->unk-58;
            temp_a1_2->unk-54 = (s32) temp_v0_3->unk-54;
            temp_a1_2->unk-50 = (s32) temp_v0_3->unk-50;
            temp_a1_2->unk-4C = (s32) temp_v0_3->unk-4C;
            temp_v0_3->unk-60 = (s32) temp_v1_2->unk-60;
            temp_v0_3->unk-5C = (s32) temp_v1_2->unk-5C;
            temp_v0_3->unk-58 = (s32) temp_v1_2->unk-58;
            temp_v0_3->unk-54 = (s32) temp_v1_2->unk-54;
            temp_v0_3->unk-50 = (s32) temp_v1_2->unk-50;
            temp_v0_3->unk-4C = (s32) temp_v1_2->unk-4C;
            temp_v1_2->unk-60 = (s32) temp_a0->unk-60;
            temp_v1_2->unk-5C = (s32) temp_a0->unk-5C;
            temp_v1_2->unk-58 = (s32) temp_a0->unk-58;
            temp_v1_2->unk-54 = (s32) temp_a0->unk-54;
            temp_v1_2->unk-50 = (s32) temp_a0->unk-50;
            temp_v1_2->unk-4C = (s32) temp_a0->unk-4C;
            temp_a0->unk-60 = (s32) temp_a3->unk-60;
            temp_a0->unk-5C = (s32) temp_a3->unk-5C;
            temp_a0->unk-58 = (s32) temp_a3->unk-58;
            temp_a0->unk-54 = (s32) temp_a3->unk-54;
            temp_a0->unk-50 = (s32) temp_a3->unk-50;
            temp_a0->unk-4C = (s32) temp_a3->unk-4C;
            phi_v0_2 = temp_v0_3;
            phi_a1 = temp_a1_2;
            phi_v1_2 = temp_v1_2;
            phi_a0 = temp_a0;
            phi_a3 = temp_a3;
            phi_a2 = temp_a2;
        } while (temp_a2 != 0x3F);
        EffectTireMark_InitParticle(temp_a1_2);
        params->numParticles += -1;
        if ((s32) params->numParticles < 0) {
            params->numParticles = 0;
        }
    }
    return 0;
}

void EffectTireMark_InitVertices(F3DVertexColor *vertices, EffTireMarkParticle *particle, s32 index, s32 alpha) {
    F3DVertexColor *temp_v1;
    F3DVertexColor *temp_v1_2;
    s32 temp_v0;

    temp_v0 = index * 2;
    temp_v1 = &vertices[temp_v0];
    temp_v1->x = particle->position1.x;
    temp_v1->y = particle->position1.y;
    temp_v1->s = 0x800;
    temp_v1->t = 0;
    temp_v1->r = 0xFF;
    temp_v1->g = 0xFF;
    temp_v1->b = 0xFF;
    temp_v1->a = (s8) alpha;
    temp_v1->z = particle->position1.z;
    temp_v1->unk10 = (s16) particle->position2.x;
    temp_v1->unk12 = (s16) particle->position2.y;
    temp_v1->unk14 = (s16) particle->position2.z;
    temp_v1_2 = &vertices[temp_v0] + 0x10;
    temp_v1_2->s = 0x800;
    temp_v1_2->t = 0x400;
    temp_v1_2->r = 0xFF;
    temp_v1_2->g = 0xFF;
    temp_v1_2->b = 0xFF;
    temp_v1_2->a = (s8) alpha;
}

void EffectTireMark_Draw(EffTireMarkParams *params, GraphicsContext *gfxCtx) {
    EffTireMarkParams *sp44;
    f32 sp34;
    Gfx *temp_a0;
    Gfx *temp_a0_10;
    Gfx *temp_a0_11;
    Gfx *temp_a0_12;
    Gfx *temp_a0_13;
    Gfx *temp_a0_14;
    Gfx *temp_a0_15;
    Gfx *temp_a0_2;
    Gfx *temp_a0_3;
    Gfx *temp_a0_4;
    Gfx *temp_a0_5;
    Gfx *temp_a0_6;
    Gfx *temp_a0_7;
    Gfx *temp_a0_8;
    Gfx *temp_a0_9;
    Gfx *temp_s4;
    Gfx *temp_v0_5;
    f32 temp_f18;
    s16 temp_v0;
    s32 temp_s0;
    u8 temp_t3;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    EffTireMarkParticle *phi_s1;
    s32 phi_s0;
    f32 phi_f18;

    sp44 = params;
    sp34 = 1.0f / (f32) params->maxLife;
    temp_v0 = params->numParticles;
    if ((s32) temp_v0 >= 2) {
        temp_s4 = gfxCtx->polyOpa.d - (((temp_v0 << 5) + 0xF) & ~0xF);
        gfxCtx->polyOpa.d = temp_s4;
        if (temp_s4 != 0) {
            temp_a0 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0 + 8;
            temp_a0->words.w0 = 0xDA380003;
            temp_a0->words.w1 = (u32) &D_801D1DE0;
            temp_a0_2 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_2 + 8;
            gfxCtx->polyOpa.p = Gfx_CallSetupDL(temp_a0_2, 0x2CU);
            temp_a0_3 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_3 + 8;
            temp_a0_3->words.w0 = 0xE200001C;
            temp_a0_3->words.w1 = 0xC184B50;
            temp_a0_4 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_4 + 8;
            temp_a0_4->words.w0 = 0xFD900000;
            temp_a0_4->words.w1 = (u32) &D_04014570;
            temp_a0_5 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_5 + 8;
            temp_a0_5->words.w0 = 0xF5900000;
            temp_a0_5->words.w1 = 0x7014260;
            temp_a0_6 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_6 + 8;
            temp_a0_6->words.w1 = 0;
            temp_a0_6->words.w0 = 0xE6000000;
            temp_a0_7 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_7 + 8;
            temp_a0_7->words.w1 = 0x73FF100;
            temp_a0_7->words.w0 = 0xF3000000;
            temp_a0_8 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_8 + 8;
            temp_a0_8->words.w1 = 0;
            temp_a0_8->words.w0 = 0xE7000000;
            temp_a0_9 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_9 + 8;
            temp_a0_9->words.w0 = 0xF5881000;
            temp_a0_9->words.w1 = 0x14260;
            temp_a0_10 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_10 + 8;
            temp_a0_10->words.w0 = 0xF2000000;
            temp_a0_10->words.w1 = 0xFC07C;
            temp_a0_11 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_11 + 8;
            temp_a0_11->words.w0 = 0xFCFF97FF;
            temp_a0_11->words.w1 = 0xFFFDFE38;
            temp_a0_12 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_12 + 8;
            temp_a0_12->words.w0 = 0xD9FFFFFF;
            temp_a0_12->words.w1 = 0x200004;
            temp_a0_13 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = temp_a0_13 + 8;
            temp_a0_13->words.w1 = 0;
            temp_a0_13->words.w0 = 0xD9FDFBFF;
            EffectTireMark_InitVertices((F3DVertexColor *) temp_s4, params->particles, 0, 0xFF);
            temp_s4->unk8 = 0;
            temp_s4->unkA = 0;
            temp_s4->unk18 = 0;
            temp_s4->unk1A = 0x400;
            phi_s1 = &params->particles[1];
            phi_s0 = 1;
            if ((s32) params->numParticles >= 2) {
                do {
                    EffectTireMark_InitVertices((F3DVertexColor *) temp_s4, phi_s1, phi_s0, 0xFF);
                    if ((phi_s1->unk-18 & 1) != 0) {
                        if ((phi_s1->unk0 & 1) == 0) {
                            temp_v0_2 = temp_s4 + (phi_s0 << 5);
                            temp_v0_2->unk8 = 0;
                            temp_v0_2->unkA = 0;
                            temp_v0_2->unk18 = 0;
                            temp_v0_2->unk1A = 0x400;
                        } else if (phi_s0 >= 2) {
                            temp_v0_3 = temp_s4 + (phi_s0 << 5);
                            if ((phi_s1->unk-30 & 1) == 0) {
                                temp_v0_3->unk-18 = 0;
                                temp_v0_3->unk-16 = 0;
                                temp_v0_3->unk-8 = 0;
                                temp_v0_3->unk-6 = 0x400;
                            }
                        }
                        temp_v0_4 = temp_s4 + (phi_s0 << 5);
                        if ((phi_s0 + 1) == params->numParticles) {
                            temp_v0_4->unk8 = 0;
                            temp_v0_4->unkA = 0;
                            temp_v0_4->unk18 = 0;
                            temp_v0_4->unk1A = 0x400;
                        }
                        temp_v0_5 = gfxCtx->polyOpa.p;
                        gfxCtx->polyOpa.p = temp_v0_5 + 8;
                        temp_v0_5->words.w0 = 0xFA000000;
                        temp_t3 = params->color.a;
                        temp_f18 = (f32) temp_t3;
                        phi_f18 = temp_f18;
                        if ((s32) temp_t3 < 0) {
                            phi_f18 = temp_f18 + 4294967296.0f;
                        }
                        temp_v0_5->words.w1 = (params->color.r << 0x18) | (params->color.g << 0x10) | (params->color.b << 8) | ((s32) (phi_f18 * (f32) phi_s1->life * sp34) & 0xFF);
                        temp_a0_14 = gfxCtx->polyOpa.p;
                        gfxCtx->polyOpa.p = temp_a0_14 + 8;
                        temp_a0_14->words.w1 = (u32) (((phi_s0 << 5) + temp_s4) - 0x20);
                        temp_a0_14->words.w0 = 0x1004008;
                        temp_a0_15 = gfxCtx->polyOpa.p;
                        gfxCtx->polyOpa.p = temp_a0_15 + 8;
                        temp_a0_15->words.w1 = 0x604;
                        temp_a0_15->words.w0 = 0x6000206;
                    }
                    temp_s0 = phi_s0 + 1;
                    phi_s1 += 0x18;
                    phi_s0 = temp_s0;
                } while (temp_s0 < (s32) sp44->numParticles);
            }
        }
    }
}

