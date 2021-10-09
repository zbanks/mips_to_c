struct _mips2c_stack_ObjLightSwitch_Asleep {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLightSwitch_Disabled {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLightSwitch_DrawOpa {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x10];                   /* maybe part of sp3C[5]? */
    /* 0x50 */ s16 sp50;                            /* inferred */
    /* 0x52 */ s16 sp52;                            /* inferred */
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ char pad_56[0x2];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_ObjLightSwitch_DrawXlu {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x10];                   /* maybe part of sp3C[5]? */
    /* 0x50 */ s16 sp50;                            /* inferred */
    /* 0x52 */ s16 sp52;                            /* inferred */
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ char pad_56[0x2];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_ObjLightSwitch_Enabled {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjLightSwitch_Fade {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLightSwitch_SetupAsleep {}; /* size 0x0 */

struct _mips2c_stack_ObjLightSwitch_SetupDisabled {}; /* size 0x0 */

struct _mips2c_stack_ObjLightSwitch_SetupEnabled {}; /* size 0x0 */

struct _mips2c_stack_ObjLightSwitch_SetupFade {};   /* size 0x0 */

struct _mips2c_stack_ObjLightswitch_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLightswitch_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLightswitch_Idle {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLightswitch_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjLightswitch_InitCollider {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderJntSph *sp28;                /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjLightswitch_PlayCinema {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjLightswitch_SetAction {};   /* size 0x0 */

struct _mips2c_stack_ObjLightswitch_SetupIdle {};   /* size 0x0 */

struct _mips2c_stack_ObjLightswitch_SpawnEffects {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_ObjLightswitch_Update {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderJntSph *sp18;                /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjLightswitch_UpdateSwitchFlags {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void ObjLightSwitch_DrawOpa(void *arg0, GraphicsContext **arg1); /* static */
void ObjLightSwitch_DrawXlu(void *arg0, GraphicsContext **arg1); /* static */
void ObjLightswitch_InitCollider(Actor *arg0, GlobalContext *arg1); /* static */
void ObjLightswitch_SetAction(void (*arg0)(ObjLightswitch *), void (*arg1)(ObjLightswitch *), s8 arg2, GlobalContext *); /* static */
void ObjLightswitch_SpawnEffects(void *arg0, GlobalContext *arg1); /* static */
void ObjLightswitch_UpdateSwitchFlags(ObjLightswitch *arg0, GlobalContext *arg1, s8 arg2, GlobalContext *); /* static */
extern ? D_06000260;
extern ? D_06000398;
extern ? D_06000408;
static ColliderJntSphElementInit D_80960B90 = {{0, {0, 0, 0}, {0x202000, 0, 0}, 0, 1, 1}, {0, {{0, 0, 0}, 0x13}, 0x64}};
static ColliderJntSphInit D_80960BB4 = {{0xA, 0, 0x29, 0x39, 0x20, 0}, 1, &D_80960B90};
static InitChainEntry D_80960BD8[6];                /* unable to generate initializer */
static Color_RGBA8 sLightswitchEffectEnvColor = {0xFF, 0, 0, 0};
static Color_RGBA8 sLightswitchEffectPrimColor = {0xFF, 0xFF, 0xA0, 0xA0};
static ? sLightswitchFaceGfx;                       /* unable to generate initializer */

void ObjLightswitch_InitCollider(Actor *arg0, GlobalContext *arg1) {
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;

    temp_a1 = arg0 + 0x144;
    sp28 = temp_a1;
    Collider_InitJntSph(arg1, temp_a1);
    Collider_SetJntSph(arg1, temp_a1, arg0, &D_80960BB4, arg0 + 0x164);
    arg0->colChkInfo.mass = 0xFF;
    SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y + (arg0->shape.yOffset * arg0->scale.y), arg0->world.pos.z, (Vec3s *) &arg0->shape);
    Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
    Collider_UpdateSpheres(0, temp_a1);
}

void ObjLightswitch_UpdateSwitchFlags(ObjLightswitch *arg0, GlobalContext *arg1, s8 arg2) {
    if (arg2 != 0) {
        Actor_SetSwitchFlag(arg1, ((s32) arg0->actor.params >> 8) & 0x7F);
        return;
    }
    Actor_UnsetSwitchFlag(arg1, ((s32) arg0->actor.params >> 8) & 0x7F);
}

void ObjLightswitch_SpawnEffects(void *arg0, GlobalContext *arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 temp_v0;
    f32 phi_f14;
    f32 phi_f2;
    f32 phi_f2_2;

    sp58 = Math_SinS(arg0->unk_BE);
    sp54 = Math_CosS(arg0->unk_BE);
    temp_v0 = arg0->unk_1AE;
    if ((s32) temp_v0 >= 0x1900) {
        temp_f0 = (1.0f - ((f32) temp_v0 * 0.00006127451f)) * 400.0f;
        if (temp_f0 > 60.0f) {
            phi_f14 = 60.0f;
        } else {
            phi_f14 = temp_f0;
        }
        sp40 = phi_f14;
        temp_f2 = Rand_ZeroOne() * ((phi_f14 - 30.0f) + 30.0f);
        temp_f12 = temp_f2 - 30.0f;
        sp4C = temp_f12;
        if (temp_f2 > 30.0f) {
            phi_f2 = 30.0f;
        } else {
            temp_f2_2 = 900.0f - (temp_f12 * temp_f12);
            phi_f2_2 = temp_f2_2;
            if (temp_f2_2 < 100.0f) {
                phi_f2_2 = 100.0f;
            }
            phi_f2 = sqrtf(phi_f2_2);
        }
        sp50 = phi_f2;
        temp_f2_3 = 2.0f * ((Rand_ZeroOne() - 0.5f) * phi_f2);
        temp_f14 = fabsf(temp_f2_3);
        sp50 = temp_f2_3;
        sp40 = temp_f14;
        temp_f12_2 = (Rand_ZeroOne() * 10.0f) + ((30.0f - temp_f14) * 0.5f);
        temp_a1 = &sp5C;
        sp5C = arg0->unk_24 + ((temp_f12_2 * sp58) + (temp_f2_3 * sp54));
        sp60 = arg0->unk_28 + sp4C + 10.0f;
        sp64 = arg0->unk_2C + ((temp_f12_2 * sp54) - (temp_f2_3 * sp58));
        EffectSsDeadDb_Spawn(arg1, (Vec3f *) temp_a1, &D_801D15B0, &D_801D15B0, &sLightswitchEffectPrimColor, &sLightswitchEffectEnvColor, (s16) 0x64, (s16) 0, 9);
    }
}

void ObjLightswitch_Init(Actor *thisx, GlobalContext *globalCtx) {
    u32 sp24;
    s32 sp20;
    ObjLightswitch *this = (ObjLightswitch *) thisx;

    sp24 = Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 8) & 0x7F);
    sp20 = 0;
    Actor_ProcessInitChain((Actor *) this, D_80960BD8);
    Actor_SetHeight((Actor *) this, 0.0f);
    if (sp24 != 0) {
        if ((((s32) this->actor.params >> 4) & 3) == 3) {
            sp20 = 1;
        } else {
            ObjLightSwitch_SetupEnabled(this);
        }
    } else {
        ObjLightswitch_SetupIdle(this);
    }
    ObjLightswitch_InitCollider((Actor *) this, globalCtx);
    if ((((s32) this->actor.params >> 3) & 1) != 0) {
        this->actor.draw = NULL;
    }
    if (sp20 != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjLightswitch_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjLightswitch *this = (ObjLightswitch *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->collider);
}

void ObjLightswitch_SetAction(void (*arg0)(ObjLightswitch *), void (*arg1)(ObjLightswitch *), s8 arg2) {
    arg0->unk_1B8 = arg1;
    arg0->unk_1BC = arg2;
    arg0->unk_1A4 = ObjLightswitch_PlayCinema;
}

void ObjLightswitch_PlayCinema(ObjLightswitch *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        ObjLightswitch_UpdateSwitchFlags(this, globalCtx, this->switchFlagSetType);
        this->cutsceneTimer = 0x32;
        this->setupFunc(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void ObjLightswitch_SetupIdle(ObjLightswitch *this) {
    this->faceState = 0;
    this->colorR = 0x26C0;
    this->colorG = 0x1F40;
    this->colorB = 0x3FC0;
    this->colorAlpha = 0x3FC0;
    this->actionFunc = ObjLightswitch_Idle;
}

void ObjLightswitch_Idle(ObjLightswitch *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = ((s32) this->actor.params >> 4) & 3;
    if ((s32) this->hitState >= 0xA) {
        if (temp_v0 == 3) {
            ObjLightswitch_SetAction(ObjLightSwitch_SetupFade, (void (*)(ObjLightswitch *))1);
            return;
        }
        if (temp_v0 == 1) {
            this->hitState = 0;
        }
        ObjLightswitch_SetAction(ObjLightSwitch_SetupAsleep, (void (*)(ObjLightswitch *))1);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void ObjLightSwitch_SetupAsleep(ObjLightswitch *this) {
    this->faceState = 0;
    this->colorShiftTimer = 0;
    this->actionFunc = ObjLightSwitch_Asleep;
}

void ObjLightSwitch_Asleep(ObjLightswitch *this, GlobalContext *globalCtx) {
    ObjLightswitch *temp_a0;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 phi_v0;

    temp_v0 = this->colorShiftTimer;
    temp_a0 = this;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        this = this;
        Audio_PlayActorSound2((Actor *) temp_a0, 0x286FU);
        phi_v0 = this->colorShiftTimer;
    }
    this->colorShiftTimer = phi_v0 + 1;
    this = this;
    Math_StepToS(&this->edgeRotSpeed, -0xAA, 0xA);
    temp_v0_2 = this->colorShiftTimer;
    this->edgeRot += this->edgeRotSpeed;
    this->colorR = (temp_v0_2 * 0x140) + 0x26C0;
    this->colorG = (temp_v0_2 * 0x1A0) + 0x1F40;
    if ((s32) temp_v0_2 >= 0x14) {
        ObjLightSwitch_SetupEnabled(this);
        return;
    }
    if (temp_v0_2 == 0xF) {
        this->faceState = 1;
        Audio_PlayActorSound2((Actor *) this, 0x2815U);
    }
}

void ObjLightSwitch_SetupEnabled(ObjLightswitch *this) {
    this->faceState = 2;
    this->colorR = 0x3FC0;
    this->colorG = 0x3FC0;
    this->colorB = 0x3FC0;
    this->colorAlpha = 0x3FC0;
    this->edgeRotSpeed = -0xAA;
    this->colorShiftTimer = 0;
    this->actionFunc = ObjLightSwitch_Enabled;
}

void ObjLightSwitch_Enabled(ObjLightswitch *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s32 temp_v0;
    s8 temp_v0_2;

    temp_v1 = this->actor.params;
    temp_v0 = ((s32) temp_v1 >> 4) & 3;
    if (temp_v0 == 0) {
        if (Flags_GetSwitch(globalCtx, ((s32) temp_v1 >> 8) & 0x7F) == 0) {
            ObjLightSwitch_SetupDisabled(this);
        }
    } else if (temp_v0 == 1) {
        if ((s32) this->hitState >= 0xA) {
            this->hitState = 0;
            ObjLightswitch_SetAction((void (*)(ObjLightswitch *)) this, ObjLightSwitch_SetupDisabled, 0, globalCtx);
        }
    } else if (this->hitState == 0) {
        temp_v0_2 = this->colorShiftTimer;
        if ((s32) temp_v0_2 >= 0xD) {
            ObjLightswitch_UpdateSwitchFlags(this, globalCtx, 0, globalCtx);
            ObjLightSwitch_SetupDisabled(this);
        } else {
            this->colorShiftTimer = temp_v0_2 + 1;
        }
    } else {
        this->colorShiftTimer = 0;
    }
    this->edgeRot += this->edgeRotSpeed;
}

void ObjLightSwitch_SetupDisabled(ObjLightswitch *this) {
    this->colorShiftTimer = 0x14;
    this->faceState = 1;
    this->actionFunc = ObjLightSwitch_Disabled;
}

void ObjLightSwitch_Disabled(ObjLightswitch *this, GlobalContext *globalCtx) {
    s16 *temp_a0;
    s8 temp_v0;

    temp_a0 = &this->edgeRotSpeed;
    this->colorShiftTimer += -1;
    this = this;
    Math_StepToS(temp_a0, 0, 0xA);
    temp_v0 = this->colorShiftTimer;
    this->edgeRot += this->edgeRotSpeed;
    this->colorR = (temp_v0 * 0x140) + 0x26C0;
    this->colorG = (temp_v0 * 0x1A0) + 0x1F40;
    if ((s32) temp_v0 <= 0) {
        ObjLightswitch_SetupIdle(this);
        return;
    }
    if (temp_v0 == 0xF) {
        this->faceState = 0;
        Audio_PlayActorSound2((Actor *) this, 0x2815U);
    }
}

void ObjLightSwitch_SetupFade(ObjLightswitch *this) {
    this->colorAlpha = 0x3FC0;
    this->actionFunc = ObjLightSwitch_Fade;
}

void ObjLightSwitch_Fade(ObjLightswitch *this, GlobalContext *globalCtx) {
    this->colorAlpha += -0xC8;
    ObjLightswitch_SpawnEffects();
    if ((s32) this->colorAlpha < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_800B9010((Actor *) this, 0x321FU);
}

void ObjLightswitch_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp1C;
    ColliderJntSph *sp18;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    s8 temp_a0;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    ObjLightswitch *this = (ObjLightswitch *) thisx;

    if ((this->collider.base.acFlags & 2) != 0) {
        if ((this->collider.elements->info.acHitInfo->toucher.dmgFlags & 0x2000) != 0) {
            this->hitState = 0xA;
        } else if ((((s32) this->actor.params >> 4) & 3) == 1) {
            temp_v0 = this->hitState;
            if (temp_v0 == 0) {
                if ((this->previousACFlags & 2) == 0) {
                    this->hitState = 1;
                }
            } else if ((s32) temp_v0 < 0xA) {
                this->hitState = temp_v0 + 1;
            }
        } else {
            temp_v0_2 = this->hitState;
            if ((s32) temp_v0_2 < 0xA) {
                this->hitState = temp_v0_2 + 1;
            }
        }
    } else {
        this->hitState = 0;
    }
    temp_v0_3 = this->cutsceneTimer;
    if (((s32) temp_v0_3 > 0) && (ObjLightswitch_PlayCinema != this->actionFunc)) {
        this->cutsceneTimer = temp_v0_3 - 1;
        if (this->cutsceneTimer == 0) {
            temp_a0 = this->actor.cutscene;
            this = this;
            ActorCutscene_Stop((s16) temp_a0);
        }
    }
    this = this;
    this->actionFunc(this, globalCtx);
    if (this->actor.update != 0) {
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->collider;
        this->previousACFlags = this->collider.base.acFlags;
        this = this;
        sp18 = temp_a2;
        sp1C = temp_a1;
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
    }
}

void ObjLightSwitch_DrawOpa(void *arg0, GraphicsContext **arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    Gfx *sp3C;
    Gfx *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0->words.w1 = ((((s32) arg0->unk_1AC >> 6) & 0xFF) << 8) | (((s32) arg0->unk_1A8 >> 6) << 0x18) | ((((s32) arg0->unk_1AA >> 6) & 0xFF) << 0x10) | (((s32) arg0->unk_1AE >> 6) & 0xFF);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    temp_v0_2->words.w1 = (u32) D_801AEFA0;
    sp58 = arg0->unk_24;
    sp5C = arg0->unk_28 + (arg0->unk_C4 * arg0->unk_5C);
    sp60 = arg0->unk_2C;
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp3C = temp_v0_3;
    sp3C->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_4 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    sp38 = temp_v0_4;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&sLightswitchFaceGfx + (arg0->unk_1B6 * 4)));
    temp_v0_5 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_06000260;
    temp_v0_5->words.w0 = 0xDE000000;
    sp50 = arg0->unk_BC;
    sp52 = arg0->unk_BE;
    sp54 = arg0->unk_C0 + arg0->unk_1B0;
    SysMatrix_SetStateRotationAndTranslation(sp58, sp5C, sp60, (Vec3s *) &sp50);
    Matrix_Scale(arg0->unk_58, arg0->unk_5C, arg0->unk_60, 1);
    temp_v0_6 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDA380003;
    sp30 = temp_v0_6;
    sp30->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_7 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_06000398;
    temp_v0_7->words.w0 = 0xDE000000;
    sp54 = arg0->unk_C0 - arg0->unk_1B0;
    SysMatrix_SetStateRotationAndTranslation(sp58, sp5C, sp60, (Vec3s *) &sp50);
    Matrix_Scale(arg0->unk_58, arg0->unk_5C, arg0->unk_60, 1);
    temp_v0_8 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDA380003;
    temp_v0_8->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_9 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xDE000000;
    temp_v0_9->words.w1 = (u32) &D_06000408;
}

void ObjLightSwitch_DrawXlu(void *arg0, GraphicsContext **arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    Gfx *sp3C;
    Gfx *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0->words.w1 = ((((s32) arg0->unk_1AC >> 6) & 0xFF) << 8) | (((s32) arg0->unk_1A8 >> 6) << 0x18) | ((((s32) arg0->unk_1AA >> 6) & 0xFF) << 0x10) | (((s32) arg0->unk_1AE >> 6) & 0xFF);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    temp_v0_2->words.w1 = (u32) D_801AEF88;
    sp58 = arg0->unk_24;
    sp5C = arg0->unk_28 + (arg0->unk_C4 * arg0->unk_5C);
    sp60 = arg0->unk_2C;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp3C = temp_v0_3;
    sp3C->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    sp38 = temp_v0_4;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&sLightswitchFaceGfx + (arg0->unk_1B6 * 4)));
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_06000260;
    temp_v0_5->words.w0 = 0xDE000000;
    sp50 = arg0->unk_BC;
    sp52 = arg0->unk_BE;
    sp54 = arg0->unk_C0 + arg0->unk_1B0;
    SysMatrix_SetStateRotationAndTranslation(sp58, sp5C, sp60, (Vec3s *) &sp50);
    Matrix_Scale(arg0->unk_58, arg0->unk_5C, arg0->unk_60, 1);
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDA380003;
    sp30 = temp_v0_6;
    sp30->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_7 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_06000398;
    temp_v0_7->words.w0 = 0xDE000000;
    sp54 = arg0->unk_C0 - arg0->unk_1B0;
    SysMatrix_SetStateRotationAndTranslation(sp58, sp5C, sp60, (Vec3s *) &sp50);
    Matrix_Scale(arg0->unk_58, arg0->unk_5C, arg0->unk_60, 1);
    temp_v0_8 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDA380003;
    temp_v0_8->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_9 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xDE000000;
    temp_v0_9->words.w1 = (u32) &D_06000408;
}

void ObjLightswitch_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    ObjLightswitch *this = (ObjLightswitch *) thisx;

    temp_v0 = ((s32) this->colorAlpha >> 6) & 0xFF;
    if (((((s32) this->actor.params >> 4) & 3) == 3) && (temp_v0 > 0) && (temp_v0 < 0xFF)) {
        ObjLightSwitch_DrawXlu();
        return;
    }
    ObjLightSwitch_DrawOpa();
}
