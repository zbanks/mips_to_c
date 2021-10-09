struct _mips2c_stack_FireObj_Draw {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ char pad_60[0x8];                    /* maybe part of sp5C[3]? */
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ char pad_6E[0x2];
    /* 0x70 */ FireObjLightParams *sp70;            /* inferred */
    /* 0x74 */ char pad_74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_FireObj_Fini {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_FireObj_FiniLight {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_FireObj_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_FireObj_InitLight {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ LightInfoPositional *sp28;           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_FireObj_InitWithParams {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_FireObj_SetPosition {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_FireObj_SetState {};           /* size 0x0 */

struct _mips2c_stack_FireObj_SetState2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_FireObj_StepSize {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_FireObj_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_FireObj_UpdateLight {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x6];                    /* maybe part of sp38[2]? */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ FireObjLightParams *sp44;            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_FireObj_UpdateStateTransitions {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x10];
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ WaterBox *sp48;                      /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

FireObjLightParams D_801BD8FC[2] = {
    {0xFF, 0xFF, 0, 0xFF, 0x80, 0xFF, 0, 0},
    {0, 0xC8, 0x80, 0x80, 0, 0x7F, 0x7F, 0},
};
ColliderCylinderInit fireObjCollisionInit = {
    {0xA, 0, 9, 0, 0, 1},
    {4, {0, 0, 0}, {0x820, 0, 0}, 0, 1, 0},
    {0x12, 0x43, 0, {0, 0, 0}},
};

void FireObj_InitWithParams(GlobalContext *globalCtx, FireObj *fire, FireObjInitParams *init) {
    fire->size = init->size;
    fire->sizeInv = 1.0f / init->size;
    fire->dynamicSizeStep = init->dynamicSizeStep;
    fire->state = init->state;
    fire->sizeGrowsCos2 = init->sizeGrowsCos2;
    fire->unk27 = init->unkA;
    fire->xScale = 0.0f;
    fire->yScale = 0.0f;
    fire->dynamicSize = 0.0f;
    fire->flags = init->flags;
    fire->unk26 = (u8) (u32) (Rand_ZeroOne() * 20.0f);
    fire->ignitionDelay = -1;
}

void FireObj_SetState(FireObj *fire, f32 dynamicSizeStep, u8 newState) {
    f32 temp_f0;
    s32 temp_v0;
    u8 temp_a2;

    temp_a2 = newState & 0xFF;
    temp_v0 = temp_a2 & 0xFF;
    fire->state = temp_a2;
    if (temp_v0 == 3) {
        fire->yScale = 0.0f;
        fire->xScale = 0.0f;
        fire->dynamicSize = 0.0f;
    } else if (temp_v0 == 2) {
        temp_f0 = fire->size;
        fire->yScale = temp_f0;
        fire->xScale = temp_f0;
        fire->dynamicSize = 1.0f;
    }
    fire->dynamicSizeStep = dynamicSizeStep;
}

void FireObj_SetPosition(FireObj *fire, Vec3f *pos) {
    Math_Vec3f_Copy((Vec3f *) fire, pos);
}

void FireObj_StepSize(FireObj *fire) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    u8 temp_v0;
    u8 temp_v0_2;
    f32 phi_f0;

    temp_v0 = fire->state;
    if (temp_v0 == 0) {
        if (Math_StepToF(&fire->dynamicSize, 1.0f, fire->dynamicSizeStep) != 0) {
            FireObj_SetState(fire, fire->dynamicSizeStep, 2U);
        }
    } else if ((temp_v0 == 1) && (Math_StepToF(&fire->dynamicSize, 0.0f, fire->dynamicSizeStep) != 0)) {
        FireObj_SetState(fire, fire->dynamicSizeStep, 3U);
    }
    if (fire->sizeGrowsCos2 == 1) {
        temp_v0_2 = fire->state;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 1)) {
            temp_f0_2 = fire->dynamicSize;
            temp_f2 = fire->size;
            fire->xScale = (1.0f - Math_CosS((s16) (s32) (temp_f0_2 * temp_f0_2 * 16384.0f))) * temp_f2;
            fire->yScale = fire->dynamicSize * temp_f2;
            return;
        }
        temp_f0 = fire->dynamicSize * fire->size;
        fire->yScale = temp_f0;
        phi_f0 = temp_f0;
        goto block_12;
    }
    temp_f0_3 = fire->dynamicSize * fire->size;
    fire->yScale = temp_f0_3;
    phi_f0 = temp_f0_3;
block_12:
    fire->xScale = phi_f0;
}

void FireObj_UpdateStateTransitions(GlobalContext *globalCtx, FireObj *fire) {
    Actor *sp4C;
    WaterBox *sp48;
    f32 sp44;
    s32 sp40;
    ? sp30;
    s16 temp_v0;
    s16 temp_v0_3;
    u8 temp_v0_2;
    u8 phi_a2;

    sp40 = 0;
    sp4C = globalCtx->actorCtx.actorList[2].first;
    FireObj_StepSize(fire);
    temp_v0 = fire->ignitionDelay;
    fire->unk26 += 1;
    if ((s32) temp_v0 > 0) {
        fire->ignitionDelay = temp_v0 - 1;
    } else if (temp_v0 == 0) {
        temp_v0_2 = fire->state;
        fire->ignitionDelay = -1;
        if ((temp_v0_2 == 3) || (phi_a2 = 1U, (temp_v0_2 == 1))) {
            phi_a2 = 0U;
        }
        FireObj_SetState(fire, fire->dynamicSizeStep, phi_a2);
    }
    if (((fire->flags & 1) != 0) && (fire->state != 3) && (func_800CA1E8(globalCtx, &globalCtx->colCtx, fire->position.x, fire->position.z, &sp44, &sp48) != 0) && ((6500.0f * fire->yScale) < (sp44 - fire->position.y))) {
        FireObj_SetState(fire, fire->dynamicSizeStep, 3U);
    }
    if (((fire->flags & 2) != 0) && (sp4C->unk_147 == 7)) {
        Math_Vec3f_Diff(sp4C + 0xB9C, (Vec3f *) fire, (Vec3f *) &sp30);
        if (Math3D_LengthSquared((Vec3f *) &sp30) < 400.0f) {
            sp40 = 1;
        }
    }
    if (sp40 != 0) {
        if (fire->state == 3) {
            if ((s32) sp4C->unk_B28 > 0) {
                FireObj_SetState(fire, fire->dynamicSizeStep, 0U);
                return;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
        temp_v0_3 = sp4C->unk_B28;
        if (temp_v0_3 == 0) {
            sp4C->unk_B28 = 0xD2;
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) fire, 0x14, 0x2822U);
            return;
        }
        if ((s32) temp_v0_3 < 0xC8) {
            sp4C->unk_B28 = 0xC8;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
    }
}

void FireObj_Draw(GlobalContext *globalCtx, FireObj *fire) {
    FireObjLightParams *sp70;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    Gfx *sp5C;
    FireObjLightParams *temp_v1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_v1 = &D_801BD8FC[fire->unk27];
    if (fire->state != 3) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp70 = temp_v1;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp70 = temp_v1;
        sp5C = temp_v0;
        sp5C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) fire->unk26 * -0x14) & 0x1FF, 0x20, 0x80);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = temp_v1->unk4 | 0xFA000000;
        temp_v0_2->words.w1 = (temp_v1->unk0 << 0x18) | (temp_v1->unk1 << 0x10) | (temp_v1->unk2 << 8) | temp_v1->unk3;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = (temp_v1->unk5 << 0x18) | (temp_v1->unk6 << 0x10) | (temp_v1->unk7 << 8);
        sp68 = 0;
        sp6A = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
        sp6C = 0;
        SysMatrix_SetStateRotationAndTranslation(fire->position.x, fire->position.y, fire->position.z, (Vec3s *) &sp68);
        Matrix_Scale(fire->xScale, fire->yScale, 1.0f, 1);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) D_0407D590;
    }
}

void FireObj_InitLight(GlobalContext *globalCtx, FireObjLight *light, u8 *param_3, Vec3f *pos) {
    LightInfoPositional *sp28;
    FireObjLightParams *temp_v0;
    LightInfoPositional *temp_a0;

    temp_v0 = &(D_801BD8FC + 8)[*param_3];
    temp_a0 = &light->lightInfo;
    sp28 = temp_a0;
    Lights_PointGlowSetInfo((LightInfo *) temp_a0, (s16) (s32) pos->x, (s16) (s32) pos->y, (s16) (s32) pos->z, (u8) (s32) temp_v0->unk2, (u8) (s32) temp_v0->unk3, (u8) (s32) temp_v0->unk4, (s16) (s32) temp_v0->unk_0);
    light->light = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, (LightInfo *) sp28);
    light->unk12 = *param_3;
}

void FireObj_FiniLight(GlobalContext *globalCtx, FireObjLight *light) {
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, light->light);
}

void FireObj_UpdateLight(GlobalContext *globalCtx, FireObjLight *light, FireObj *fire) {
    FireObjLightParams *sp44;
    s16 sp42;
    f32 sp38;
    f32 sp34;
    FireObjLightParams *temp_v0;
    f32 temp_f8;
    u8 temp_t8;
    f32 phi_f8;

    temp_v0 = &(D_801BD8FC + 8)[light->unk12];
    if (fire->state == 3) {
        Lights_PointSetColorAndRadius((LightInfo *) &light->lightInfo, 0U, 0U, 0U, (s16) -1);
        return;
    }
    sp44 = temp_v0;
    sp42 = (s16) (s32) ((fire->yScale * 140.0f * fire->sizeInv) + 60.0f);
    sp34 = Rand_ZeroOne();
    sp38 = Rand_ZeroOne();
    if ((s32) temp_v0->unk5 < 0) {

    }
    if ((s32) temp_v0->unk6 < 0) {

    }
    temp_t8 = temp_v0->unk7;
    temp_f8 = (f32) temp_t8;
    phi_f8 = temp_f8;
    if ((s32) temp_t8 < 0) {
        phi_f8 = temp_f8 + 4294967296.0f;
    }
    Lights_PointGlowSetInfo((LightInfo *) &light->lightInfo, (s16) (s32) fire->position.x, (s16) (s32) (fire->position.y + (fire->yScale * 6500.0f)), (s16) (s32) fire->position.z, (u8) ((s32) (Rand_ZeroOne() * phi_f8) + temp_v0->unk4), (u8) (s32) sp42);
}

void FireObj_Init(GlobalContext *globalCtx, FireObj *fire, FireObjInitParams *init, Actor *actor) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;

    FireObj_InitWithParams(globalCtx, fire, init);
    temp_a1 = &fire->collision;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, actor, &fireObjCollisionInit);
    fire->collision.dim.radius = (s16) (s32) ((fire->size * 4000.0f) + 2.5f);
    fire->collision.dim.height = (s16) (s32) (fire->size * 16000.0f);
    fire->collision.dim.yShift = (s16) (s32) (fire->size * -1728.0f);
    FireObj_InitLight(globalCtx, &fire->light, &init->unkC, (Vec3f *) fire);
}

void FireObj_Fini(GlobalContext *globalCtx, FireObj *fire) {
    Collider_DestroyCylinder(globalCtx, &fire->collision);
    FireObj_FiniLight(globalCtx, &fire->light);
}

void FireObj_SetState2(FireObj *fire, f32 dynamicSizeStep, u8 newState) {
    FireObj_SetState(fire, dynamicSizeStep, newState & 0xFF);
}

void FireObj_Update(GlobalContext *globalCtx, FireObj *fire) {
    Actor *sp20;
    Actor *temp_v0;

    arg2 = MIPS2C_ERROR(Read from unset register $a2);
    temp_v0 = fire->collision.base.ac;
    sp20 = temp_v0;
    FireObj_UpdateStateTransitions(globalCtx, fire);
    if (fire->state == 3) {
        if (((fire->collision.base.acFlags & 2) != 0) && ((fire->collision.info.acHitInfo->toucher.dmgFlags & 0x800) != 0)) {
            FireObj_SetState(fire, fire->dynamicSizeStep, 0U);
        }
    } else if (((fire->collision.base.acFlags & 2) != 0) && (temp_v0->update != 0) && (temp_v0->id == 0xF)) {
        temp_v0->params = 0;
        temp_v0->unk_1C0 = 0x800;
    }
    fire->collision.dim.pos.x = (s16) (s32) fire->position.x;
    fire->collision.dim.pos.y = (s16) (s32) fire->position.y;
    fire->collision.dim.pos.z = (s16) (s32) fire->position.z;
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &fire->collision);
    FireObj_UpdateLight(globalCtx, &fire->light, fire);
}
