typedef struct {
    /* 0x00 */ u16 unk_0;                           /* inferred */
    /* 0x02 */ Vec3s position1;
    /* 0x08 */ Vec3s position2;
    /* 0x0E */ s16 life;
    /* 0x10 */ s32 unk_10;                          /* inferred */
    /* 0x14 */ s32 unk_14;                          /* inferred */
} EffTireMarkParticle;                              /* size = 0x18 */

struct _mips2c_stack_EffectTireMark_Destroy {};     /* size 0x0 */

struct _mips2c_stack_EffectTireMark_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0xC];                    /* maybe part of sp34[4]? */
    /* 0x44 */ EffTireMarkParams *sp44;             /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_EffectTireMark_Init {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EffectTireMark_InitParticle {}; /* size 0x0 */

struct _mips2c_stack_EffectTireMark_InitVertices {}; /* size 0x0 */

struct _mips2c_stack_EffectTireMark_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800AE930 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ Vec3s *sp9C;                         /* inferred */
    /* 0xA0 */ u32 spA0;                            /* inferred */
    /* 0xA4 */ u32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ u16 *spAC;                           /* inferred */
    /* 0xB0 */ s16 spB0;                            /* inferred */
    /* 0xB2 */ s16 spB2;                            /* inferred */
    /* 0xB4 */ s16 spB4;                            /* inferred */
    /* 0xB6 */ char pad_B6[0x2];
    /* 0xB8 */ s16 spB8;                            /* inferred */
    /* 0xBA */ s16 spBA;                            /* inferred */
    /* 0xBC */ s16 spBC;                            /* inferred */
    /* 0xBE */ char pad_BE[0x2];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_800AEF44 {};              /* size 0x0 */

s32 func_80179798(f32 *, f32 *, f32 *, f32 *, f32 *, ? *); /* extern */
void func_800AEF44(s32 arg0);                       /* static */
extern ? D_04014570;
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

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
    if ((param_7 != 0x32) || ((s32) param_2->unk_602 >= 0x3F) || (param_6 == 0)) {
        func_800AEF44(param_2);
        return;
    }
    temp_a0 = param_5 - 0x4000;
    sp2C = (s32) temp_a0;
    spB8 = (s16) (s32) ((Math_SinS(temp_a0) * param_4) + param_3->unk_0);
    temp_f10 = (s32) ((Math_CosS(temp_a0) * param_4) + param_3[2]);
    temp_f18 = (s16) temp_f10;
    spBC = (s16) temp_f10;
    temp_a0_2 = param_5 + 0x4000;
    temp_f8 = (s32) (func_800BFD84(param_6, (f32) spB8, (f32) temp_f18) + 2.0f);
    sp2C = (s32) temp_a0_2;
    spBA = (s16) temp_f8;
    spB0 = (s16) (s32) ((Math_SinS(temp_a0_2) * param_4) + param_3->unk_0);
    temp_f4 = (s32) ((Math_CosS(temp_a0_2) * param_4) + param_3[2]);
    temp_f8_2 = (s16) temp_f4;
    spB4 = (s16) temp_f4;
    spB2 = (s16) (s32) (func_800BFD84(param_6, (f32) spB0, (f32) temp_f8_2) + 2.0f);
    temp_v0 = param_2->unk_602;
    temp_t0 = param_2 + (temp_v0 * 0x18);
    temp_t0_2 = temp_t0 - 0x18;
    if ((temp_v0 != 0) && (temp_a0_3 = temp_t0_2->unk_14, (temp_a0_3 != 0)) && (param_6 != temp_a0_3) && (spAC = temp_t0_2, (func_800BFDEC(temp_a0_3, param_6, &spA4, &spA0) == 2))) {
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
        sp54 = (f32) temp_t0_2[1];
        sp58 = (f32) temp_t0_2[2];
        sp60 = (f32) spB0;
        sp64 = (f32) spB2;
        sp5C = (f32) temp_t0_2[3];
        sp68 = (f32) spB4;
        sp3C = (f32) temp_t0_2[4];
        sp40 = (f32) temp_t0_2[5];
        sp48 = (f32) spB8;
        spAC = temp_t0_2;
        sp4C = (f32) spBA;
        sp44 = (f32) temp_t0_2[6];
        sp50 = (f32) spBC;
        if ((func_80179798(temp_a0_4, temp_a1, temp_a2, temp_a3, &sp6C, &sp30) != 0) && (spAC = temp_t0_2, (func_80179798(&sp84, &sp90, &sp3C, &sp48, &sp78, &sp30) != 0))) {
            temp_v1_2 = temp_t0_2->unk_0;
            if ((temp_v1_2 & 2) == 0) {
                temp_t0_2->unk_0 = temp_v1_2 | 1;
            }
            temp_v0_3 = param_2 + (param_2->unk_602 * 0x18);
            temp_v0_3->unk_0 = 0;
            temp_v0_3->unk_2 = (s16) (s32) sp6C;
            temp_v0_3->unk_4 = (s16) (s32) sp70;
            temp_v0_3->unk_6 = (s16) (s32) sp74;
            temp_v0_3->unk_8 = (s16) (s32) sp78;
            temp_v0_3->unk_A = (s16) (s32) sp7C;
            temp_v0_3->unk_C = (s16) (s32) sp80;
            temp_v0_3->unk_14 = 0;
            temp_v0_3->unk_E = (s16) param_2->unk_604;
            param_2->unk_602 = (s16) (param_2->unk_602 + 1);
            temp_a0_5 = param_2 + (param_2->unk_602 * 0x18);
            temp_t0_3 = temp_a0_5 - 0x18;
            temp_v1_3 = *temp_t0_3;
            phi_a0 = temp_a0_5;
            if ((temp_v1_3 & 2) == 0) {
                *temp_t0_3 = temp_v1_3 | 1;
                phi_a0 = param_2 + (param_2->unk_602 * 0x18);
            }
            phi_a0->unk_0 = 0;
            phi_a0->unk_2 = (unaligned s32) spB0.unk_0;
            phi_a0->unk_6 = (u16) (&spB0)[2];
            phi_a0->unk_8 = (unaligned s32) spB8.unk_0;
            phi_a0->unk_C = (u16) (&spB8)[2];
            phi_a0->unk_E = (s16) param_2->unk_604;
            phi_a0->unk_14 = param_6;
            param_2->unk_602 = (s16) (param_2->unk_602 + 1);
            return;
        }
        temp_v1_4 = (temp_t0 - 0x18)->unk_0;
        if ((temp_v1_4 & 2) == 0) {
            (temp_t0 - 0x18)->unk_0 = temp_v1_4 | 1;
        }
        temp_v0_4 = param_2 + (param_2->unk_602 * 0x18);
        temp_v0_4->unk_0 = 0;
        temp_v0_4->unk_2 = (unaligned s32) spB0.unk_0;
        temp_v0_4->unk_6 = (u16) (&spB0)[2];
        temp_v0_4->unk_8 = (unaligned s32) spB8.unk_0;
        temp_v0_4->unk_C = (u16) (&spB8)[2];
        temp_v0_4->unk_E = (s16) param_2->unk_604;
        temp_v0_4->unk_14 = param_6;
        param_2->unk_602 = (s16) (param_2->unk_602 + 1);
        return;
    }
    temp_v1_5 = (temp_t0 - 0x18)->unk_0;
    if ((temp_v1_5 & 2) == 0) {
        (temp_t0 - 0x18)->unk_0 = temp_v1_5 | 1;
    }
    temp_v0_5 = param_2 + (param_2->unk_602 * 0x18);
    temp_v0_5->unk_0 = 0;
    temp_v0_5->unk_2 = (unaligned s32) spB0.unk_0;
    temp_v0_5->unk_6 = (u16) (&spB0)[2];
    temp_v0_5->unk_8 = (unaligned s32) spB8.unk_0;
    temp_v0_5->unk_C = (u16) (&spB8)[2];
    temp_v0_5->unk_14 = param_6;
    temp_v0_5->unk_E = (s16) param_2->unk_604;
    param_2->unk_602 = (s16) (param_2->unk_602 + 1);
}

void func_800AEF44(void *arg0) {
    void *temp_v0;

    temp_v0 = arg0 + (arg0->unk_602 * 0x18);
    *(temp_v0 - 0x18) = temp_v0->unk_-18 | 2;
}

void EffectTireMark_InitParticle(EffTireMarkParticle *particle) {
    s16 temp_v0;

    particle->position2.z = 0;
    temp_v0 = particle->position2.z;
    particle->unk_0 = 0;
    particle->life = 0;
    particle->unk_14 = 0;
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

    phi_s1 = (EffTireMarkParticle *) params;
    phi_s0 = 0;
    do {
        EffectTireMark_InitParticle(phi_s1);
        temp_s0 = phi_s0 + 0x18;
        phi_s1 = &phi_s1[1];
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
            temp_v0_2->unk_-A = (s16) (phi_v0->particles[0].life - 1);
            phi_v0 = temp_v0_2;
            phi_v1 = temp_v1;
        } while (temp_v1 < (s32) params->numParticles);
    }
    temp_t1 = &params->particles[1];
    if ((s32) params->particles[0].life <= 0) {
        temp_t2 = &params->particles[2];
        temp_a1 = &params->particles[3];
        params->unk_0 = (s32) temp_t1->unk_0;
        params->unk_4 = (s32) temp_t1->unk_4;
        params->unk_8 = (s32) temp_t1->unk_8;
        params->unk_C = (s32) temp_t1->unk_C;
        params->particles[0].unk_10 = temp_t1->unk_10;
        params->particles[0].unk_14 = temp_t1->unk_14;
        temp_t1->unk_0 = (s32) temp_t2->unk_0;
        temp_t1->unk_4 = (s32) temp_t2->unk_4;
        temp_t1->unk_8 = (s32) temp_t2->unk_8;
        temp_t1->unk_C = (s32) temp_t2->unk_C;
        temp_t1->unk_10 = temp_t2->unk_10;
        temp_t1->unk_14 = temp_t2->unk_14;
        temp_t2->unk_0 = (s32) params->unk_48;
        temp_t2->unk_4 = (s32) params->unk_4C;
        temp_t2->unk_8 = (s32) params->unk_50;
        temp_t2->unk_C = (s32) params->unk_54;
        temp_t2->unk_10 = params->particles[3].unk_10;
        temp_t2->unk_14 = params->particles[3].unk_14;
        phi_v0_2 = &temp_a1[1];
        phi_a1 = temp_a1;
        phi_v1_2 = &temp_a1[2];
        phi_a0 = &temp_a1[3];
        phi_a3 = &temp_a1[4];
        phi_a2 = 3;
        do {
            temp_a2 = phi_a2 + 4;
            temp_a1_2 = phi_a1 + 0x60;
            temp_a1_2->unk_-60 = (s32) phi_v0_2->unk_0;
            temp_v0_3 = phi_v0_2 + 0x60;
            temp_v1_2 = phi_v1_2 + 0x60;
            temp_a1_2->unk_-5C = (s32) phi_v0_2->unk_4;
            temp_a0 = phi_a0 + 0x60;
            temp_a3 = phi_a3 + 0x60;
            temp_a1_2->unk_-58 = (s32) temp_v0_3->unk_-58;
            temp_a1_2->unk_-54 = (s32) temp_v0_3->unk_-54;
            temp_a1_2->unk_-50 = (s32) temp_v0_3->unk_-50;
            temp_a1_2->unk_-4C = (s32) temp_v0_3->unk_-4C;
            temp_v0_3->unk_-60 = (s32) temp_v1_2->unk_-60;
            temp_v0_3->unk_-5C = (s32) temp_v1_2->unk_-5C;
            temp_v0_3->unk_-58 = (s32) temp_v1_2->unk_-58;
            temp_v0_3->unk_-54 = (s32) temp_v1_2->unk_-54;
            temp_v0_3->unk_-50 = (s32) temp_v1_2->unk_-50;
            temp_v0_3->unk_-4C = (s32) temp_v1_2->unk_-4C;
            temp_v1_2->unk_-60 = (s32) temp_a0->unk_-60;
            temp_v1_2->unk_-5C = (s32) temp_a0->unk_-5C;
            temp_v1_2->unk_-58 = (s32) temp_a0->unk_-58;
            temp_v1_2->unk_-54 = (s32) temp_a0->unk_-54;
            temp_v1_2->unk_-50 = (s32) temp_a0->unk_-50;
            temp_v1_2->unk_-4C = (s32) temp_a0->unk_-4C;
            temp_a0->unk_-60 = (s32) temp_a3->unk_-60;
            temp_a0->unk_-5C = (s32) temp_a3->unk_-5C;
            temp_a0->unk_-58 = (s32) temp_a3->unk_-58;
            temp_a0->unk_-54 = (s32) temp_a3->unk_-54;
            temp_a0->unk_-50 = (s32) temp_a3->unk_-50;
            temp_a0->unk_-4C = (s32) temp_a3->unk_-4C;
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
    temp_v1[1].x = particle->position2.x;
    temp_v1[1].y = particle->position2.y;
    temp_v1[1].z = particle->position2.z;
    temp_v1_2 = &(&vertices[temp_v0])[1];
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
            gfxCtx->polyOpa.p = &temp_a0[1];
            temp_a0->words.w0 = 0xDA380003;
            temp_a0->words.w1 = (u32) &D_801D1DE0;
            temp_a0_2 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_2[1];
            gfxCtx->polyOpa.p = Gfx_CallSetupDL(temp_a0_2, 0x2CU);
            temp_a0_3 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_3[1];
            temp_a0_3->words.w0 = 0xE200001C;
            temp_a0_3->words.w1 = 0xC184B50;
            temp_a0_4 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_4[1];
            temp_a0_4->words.w0 = 0xFD900000;
            temp_a0_4->words.w1 = (u32) &D_04014570;
            temp_a0_5 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_5[1];
            temp_a0_5->words.w0 = 0xF5900000;
            temp_a0_5->words.w1 = 0x7014260;
            temp_a0_6 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_6[1];
            temp_a0_6->words.w1 = 0;
            temp_a0_6->words.w0 = 0xE6000000;
            temp_a0_7 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_7[1];
            temp_a0_7->words.w1 = 0x73FF100;
            temp_a0_7->words.w0 = 0xF3000000;
            temp_a0_8 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_8[1];
            temp_a0_8->words.w1 = 0;
            temp_a0_8->words.w0 = 0xE7000000;
            temp_a0_9 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_9[1];
            temp_a0_9->words.w0 = 0xF5881000;
            temp_a0_9->words.w1 = 0x14260;
            temp_a0_10 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_10[1];
            temp_a0_10->words.w0 = 0xF2000000;
            temp_a0_10->words.w1 = 0xFC07C;
            temp_a0_11 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_11[1];
            temp_a0_11->words.w0 = 0xFCFF97FF;
            temp_a0_11->words.w1 = 0xFFFDFE38;
            temp_a0_12 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_12[1];
            temp_a0_12->words.w0 = 0xD9FFFFFF;
            temp_a0_12->words.w1 = 0x200004;
            temp_a0_13 = gfxCtx->polyOpa.p;
            gfxCtx->polyOpa.p = &temp_a0_13[1];
            temp_a0_13->words.w1 = 0;
            temp_a0_13->words.w0 = 0xD9FDFBFF;
            EffectTireMark_InitVertices((F3DVertexColor *) temp_s4, (EffTireMarkParticle *) params, 0, 0xFF);
            temp_s4->unk_8 = 0;
            temp_s4->unk_A = 0;
            temp_s4->unk_18 = 0;
            temp_s4->unk_1A = 0x400;
            phi_s1 = &params->particles[1];
            phi_s0 = 1;
            if ((s32) params->numParticles >= 2) {
                do {
                    EffectTireMark_InitVertices((F3DVertexColor *) temp_s4, phi_s1, phi_s0, 0xFF);
                    if ((phi_s1->unk_-18 & 1) != 0) {
                        if ((phi_s1->unk_0 & 1) == 0) {
                            temp_v0_2 = temp_s4 + (phi_s0 << 5);
                            temp_v0_2->unk_8 = 0;
                            temp_v0_2->unk_A = 0;
                            temp_v0_2->unk_18 = 0;
                            temp_v0_2->unk_1A = 0x400;
                        } else if (phi_s0 >= 2) {
                            temp_v0_3 = temp_s4 + (phi_s0 << 5);
                            if ((phi_s1->unk_-30 & 1) == 0) {
                                temp_v0_3->unk_-18 = 0;
                                temp_v0_3->unk_-16 = 0;
                                temp_v0_3->unk_-8 = 0;
                                temp_v0_3->unk_-6 = 0x400;
                            }
                        }
                        temp_v0_4 = temp_s4 + (phi_s0 << 5);
                        if ((phi_s0 + 1) == params->numParticles) {
                            temp_v0_4->unk_8 = 0;
                            temp_v0_4->unk_A = 0;
                            temp_v0_4->unk_18 = 0;
                            temp_v0_4->unk_1A = 0x400;
                        }
                        temp_v0_5 = gfxCtx->polyOpa.p;
                        gfxCtx->polyOpa.p = &temp_v0_5[1];
                        temp_v0_5->words.w0 = 0xFA000000;
                        temp_t3 = params->color.a;
                        temp_f18 = (f32) temp_t3;
                        phi_f18 = temp_f18;
                        if ((s32) temp_t3 < 0) {
                            phi_f18 = temp_f18 + 4294967296.0f;
                        }
                        temp_v0_5->words.w1 = (params->color.r << 0x18) | (params->color.g << 0x10) | (params->color.b << 8) | ((s32) (phi_f18 * (f32) phi_s1->life * sp34) & 0xFF);
                        temp_a0_14 = gfxCtx->polyOpa.p;
                        gfxCtx->polyOpa.p = &temp_a0_14[1];
                        temp_a0_14->words.w1 = (u32) (((phi_s0 << 5) + temp_s4) - 0x20);
                        temp_a0_14->words.w0 = 0x1004008;
                        temp_a0_15 = gfxCtx->polyOpa.p;
                        gfxCtx->polyOpa.p = &temp_a0_15[1];
                        temp_a0_15->words.w1 = 0x604;
                        temp_a0_15->words.w0 = 0x6000206;
                    }
                    temp_s0 = phi_s0 + 1;
                    phi_s1 = &phi_s1[1];
                    phi_s0 = temp_s0;
                } while (temp_s0 < (s32) sp44->numParticles);
            }
        }
    }
}
