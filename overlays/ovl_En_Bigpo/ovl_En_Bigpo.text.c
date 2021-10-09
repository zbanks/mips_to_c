void EnBigPo_AdjustPoAlpha(Actor *arg0, s32 arg1);  /* static */
void EnBigPo_BurnAwayDeath(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_ChangeToFireCounting(Actor *arg0);     /* static */
void EnBigPo_CheckHealth(Actor *arg0, ? arg1);      /* static */
void EnBigPo_DrawScoopSoul(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_FireCounting(void *arg0, ? arg1);      /* static */
void EnBigPo_HitStun(Actor *arg0);                  /* static */
void EnBigPo_IdleFlying(Actor *arg0, void *arg1);   /* static */
void EnBigPo_InitHiddenFire(EnBigpo *arg0);         /* static */
void EnBigPo_InitWellBigPo(EnBigpo *arg0);          /* static */
void EnBigPo_LanternFalling(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnBigPo_OverrideLimbDraw2(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void EnBigPo_PostLimbDraw2(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5); /* static */
void EnBigPo_ScoopSoulAppearing(Actor *arg0, ? arg1); /* static */
void EnBigPo_ScoopSoulFadingAway(Actor *arg0, ? arg1); /* static */
void EnBigPo_ScoopSoulIdle(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_ScoopSoulStartLeaving(Actor *arg0);    /* static */
void EnBigPo_SelectRandomFireLocations(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_SetupDeath(Actor *arg0);               /* static */
void EnBigPo_SetupIdleFlying(Actor *arg0);          /* static */
void EnBigPo_SetupLanternDrop(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_SetupScoopSoulIdle(Actor *arg0);       /* static */
void EnBigPo_SetupSpinAttack(Actor *arg0, Actor *); /* static */
void EnBigPo_SetupSpinDown(Actor *arg0);            /* static */
void EnBigPo_SetupSpinUp(Actor *arg0);              /* static */
void EnBigPo_SetupWarpIn(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_SetupWarpOut(Actor *arg0);             /* static */
void EnBigPo_SpawnScoopSoul(Actor *arg0);           /* static */
void EnBigPo_SpinAttack(Actor *arg0, void *arg1);   /* static */
void EnBigPo_SpinningDown(Actor *arg0, void *arg1); /* static */
void EnBigPo_SpinningUp(Actor *arg0, ? arg1);       /* static */
void EnBigPo_UpdateFire(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_WaitingForDampe(EnBigpo *arg0, GlobalContext *arg1); /* static */
void EnBigPo_WarpingIn(Actor *arg0, ? arg1);        /* static */
void EnBigPo_WarpingOut(Actor *arg0, GlobalContext *arg1); /* static */
void EnBigPo_WellWaitForProximity(EnBigpo *arg0, GlobalContext *arg1); /* static */
void func_80B61914(Actor *arg0);                    /* static */
void func_80B619B4(Actor *arg0);                    /* static */
void func_80B619FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B61B38(void *arg0, void (*)(EnBigpo *, ?), void *); /* static */
void func_80B61B70(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B61C04(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B61CFC(Actor *arg0, ? arg1);            /* static */
void func_80B61D74(Actor *arg0);                    /* static */
void func_80B61DA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B61E9C(Actor *arg0);                    /* static */
void func_80B61F04(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B62034(Actor *arg0);                    /* static */
void func_80B62084(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B63450(EnBigpo *arg0);                  /* static */
void func_80B63758(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B638AC(void *arg0);                     /* static */
void func_80B638D4(void *arg0, ? arg1);             /* static */
void func_80B63964(void *arg0);                     /* static */
void func_80B63980(EnBigpo *arg0, ? arg1);          /* static */
void func_80B63A18(Actor *arg0);                    /* static */
void func_80B63AC4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B63C28(EnBigpo *arg0);                  /* static */
void func_80B63D0C(EnBigpo *arg0);                  /* static */
s32 func_80B63D88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B64470(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B64880(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B64B08(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B64DFC(void *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeader D_06000454;
extern AnimationHeader D_06000924;
extern AnimationHeader D_06001360;
extern ? D_06001BB0;
extern Gfx D_060041A0;
extern ? D_060042C8;
extern ? D_060043F8;
extern ? D_060058B8;
extern SkeletonHeader D_06005C18;
static ColliderCylinderInit D_80B65010 = {
    {3, 0x10, 8, 0x38, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 5, 1},
    {0x23, 0x64, 0xA, {0, 0, 0}},
};
static CollisionCheckInfoInit D_80B6503C = {0xA, 0x23, 0x64, 0x32};
static DamageTable D_80B65044 = {
    {
        0,
        1,
        0,
        1,
        1,
        1,
        0,
        0xF0,
        1,
        1,
        0,
        1,
        1,
        0x42,
        1,
        1,
        1,
        2,
        0,
        0,
        0,
        0,
        1,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static InitChainEntry D_80B65064;                   /* unable to generate initializer */
static Vec3f D_80B6506C = {0.0f, 3.0f, 0.0f};
static ? D_80B65078;                                /* unable to generate initializer */
static Vec3f D_80B65084 = {
    {2000.0f, 4000.0f, 0.0f},
    {-1000.0f, 1500.0f, -2000.0f},
    {-1000.0f, 1500.0f, 2000.0f},
};



void EnBigpo_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBigpo *this = (EnBigpo *) thisx;
    EnBigpoFireEffect *temp_s0;
    s16 temp_a1;
    s16 temp_t6;
    s16 temp_v0;
    s32 temp_s1;
    LightInfo *phi_s3;
    EnBigpoFireEffect *phi_s0;
    LightInfo *phi_s2;
    s32 phi_s1;

    Actor_ProcessInitChain(&this->actor, &D_80B65064);
    temp_t6 = this->actor.params;
    this->actor.params &= 0xFF;
    this->switchFlags = ((s32) temp_t6 >> 8) & 0xFF;
    if (this->actor.params == 2) {
        if (Flags_GetSwitch(globalCtx, (s32) this->switchFlags) != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        this->actor.update = Actor_Noop;
        EnBigPo_InitHiddenFire(this);
        return;
    }
    SkelAnime_Init(globalCtx, &this->skelAnime, &D_06005C18, &D_06000924, this->jointTable, this->morphTable, 0xA);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_80B65010);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80B65044, &D_80B6503C);
    temp_s0 = this->fires;
    phi_s3 = &this->fires[0].info;
    phi_s0 = temp_s0;
    phi_s2 = &temp_s0->info;
    phi_s1 = 0;
    do {
        phi_s0->light = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, phi_s3);
        Lights_PointNoGlowSetInfo(phi_s2, (s16) (s32) this->actor.home.pos.x, (s16) (s32) this->actor.home.pos.y, (s16) (s32) this->actor.home.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0);
        temp_s1 = phi_s1 + 0x20;
        phi_s3 += 0x20;
        phi_s0 += 0x20;
        phi_s2 += 0x20;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x60);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 45.0f);
    temp_a1 = this->switchFlags;
    this->actor.bgCheckFlags |= 0x400;
    this->savedHeight = this->actor.home.pos.y + 100.0f;
    this->mainColor.r = 0xFF;
    this->mainColor.g = 0xFF;
    this->mainColor.b = 0xD2;
    this->mainColor.a = 0;
    if ((temp_a1 != 0xFF) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) {
        Actor_MarkForDeath(&this->actor);
    }
    temp_v0 = this->actor.params;
    if (temp_v0 == 0) {
        this->unkBool204 = 1;
        this->actor.flags &= -0x11;
        EnBigPo_InitWellBigPo(this);
        return;
    }
    if (temp_v0 == 1) {
        func_80B63450(this);
    }
}

void EnBigpo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBigpo *this = (EnBigpo *) thisx;
    s16 temp_v0;
    s32 temp_s0;
    EnBigpo *phi_s1;
    s32 phi_s0;

    temp_v0 = this->actor.params;
    if ((temp_v0 != 2) && (temp_v0 != 3) && (temp_v0 != 4)) {
        phi_s0 = 0;
        if (temp_v0 != 5) {
            phi_s1 = this;
            do {
                LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, phi_s1->fires[0].light);
                temp_s0 = phi_s0 + 0x20;
                phi_s1 += 0x20;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x60);
            Collider_DestroyCylinder(globalCtx, &this->collider);
        }
    }
}

void func_80B61914(Actor *arg0) {
    s32 temp_s2;
    void *phi_s1;
    s32 phi_s2;

    phi_s1 = arg0 + 0x338;
    phi_s2 = 0;
    do {
        phi_s1->unk0 = (f32) ((Math_SinS(arg0->shape.rot.y) * arg0->unk214) + arg0->world.pos.x);
        temp_s2 = phi_s2 + 0x20;
        phi_s1->unk8 = (f32) ((Math_CosS(arg0->shape.rot.y) * arg0->unk214) + arg0->world.pos.z);
        arg0->shape.rot.y += 0x5555;
        phi_s1 += 0x20;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x60);
}

void func_80B619B4(Actor *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->shape.rot.y;
    arg0->shape.rot.y = temp_v0 + arg0->unk20A;
    if (((s32) temp_v0 < 0) && ((s32) arg0->shape.rot.y > 0)) {
        Audio_PlayActorSound2(arg0, 0x38EEU);
    }
}

void func_80B619FC(Actor *arg0, GlobalContext *arg1) {
    Camera *sp24;
    Camera *temp_v0;
    s16 temp_a2;
    Camera *phi_v1;

    temp_a2 = arg0->unk20E;
    if (temp_a2 != 0) {
        temp_v0 = Play_GetCamera(arg1, temp_a2);
        temp_v0->eye.y -= arg0->velocity.y;
        phi_v1 = temp_v0;
        if (arg0->velocity.y > 0.0f) {
            sp24 = temp_v0;
            sp24->eye.x -= 1.5f * Math_SinS(arg0->yawTowardsPlayer);
            sp24->eye.z -= 1.5f * Math_CosS(arg0->yawTowardsPlayer);
            phi_v1 = sp24;
        }
        Play_CameraSetAtEye(arg1, arg0->unk20E, arg0 + 0x3C, phi_v1 + 0x5C);
    }
}

void EnBigPo_InitWellBigPo(EnBigpo *arg0) {
    arg0->actor.flags &= -2;
    arg0->actionFunc = EnBigPo_WellWaitForProximity;
    arg0->fireRadius = 200.0f;
}

void EnBigPo_WellWaitForProximity(EnBigpo *arg0, GlobalContext *arg1) {
    if (arg0->actor.xzDistToPlayer < 200.0f) {
        func_80B61B38();
    }
}

void func_80B61B38(void *arg0) {
    ActorCutscene_SetIntentToPlay((s16) arg0->unk38);
    arg0->unk200 = func_80B61B70;
}

void func_80B61B70(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_Start((s16) arg0->cutscene, arg0);
        func_800B724C(arg1, arg0, 7U);
        arg0->unk20E = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
        if (arg0->params == 0) {
            func_80B61C04(arg0, arg1);
            return;
        }
        func_80B63758(arg0, arg1);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80B61C04(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Actor *temp_v1;
    f32 *temp_a3;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    Actor *phi_v1;
    s32 phi_v0;

    arg0->draw = func_80B64B08;
    arg0->shape.rot.y = arg0->yawTowardsPlayer + 0x8000;
    func_80B61914(arg0);
    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_v1 = phi_v1 + 0x20;
        temp_v1->unk31C = (f32) arg0->world.pos.y;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 3);
    arg0->scale.x = 0.0f;
    arg0->scale.z = 0.0f;
    arg0->scale.y = 0.015f;
    if (arg0->unk20E != 0) {
        temp_f0 = arg0->world.pos.x;
        temp_a3 = &sp28;
        sp28 = ((temp_f0 - arg0->unk338) * 1.8f) + temp_f0;
        sp2C = arg0->world.pos.y + 150.0f;
        temp_f2 = arg0->world.pos.z;
        sp30 = ((temp_f2 - arg0->unk340) * 1.8f) + temp_f2;
        Play_CameraSetAtEye(arg1, arg0->unk20E, arg0 + 0x3C, (Vec3f *) temp_a3);
    }
    arg0->unk200 = func_80B61CFC;
}

void func_80B61CFC(Actor *arg0, ? arg1) {
    Actor *temp_a0_2;
    f32 *temp_a0;
    f32 temp_f0;

    temp_a0 = arg0 + 0x58;
    arg0 = arg0;
    if (Math_StepToF(temp_a0, 0.01f, 0.001f) != 0) {
        temp_a0_2 = arg0;
        arg0 = arg0;
        func_80B61D74(temp_a0_2);
    }
    temp_f0 = arg0->scale.x;
    arg0->scale.z = temp_f0;
    arg0->scale.y = ((0.01f - temp_f0) * 0.5f) + 0.01f;
}

void func_80B61D74(Actor *arg0) {
    arg0->unk20A = 0x1000;
    arg0->unk200 = func_80B61DA4;
    arg0->unk214 = 200.0f;
    arg0->velocity.y = 0.0f;
}

void func_80B61DA4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_v1;
    f32 phi_f18;
    Actor *phi_v0;
    s32 phi_v1;
    f32 phi_f18_2;
    Actor *phi_v0_2;

    if (Math_StepToF(arg0 + 0x214, 30.0f, 5.0f) != 0) {
        arg0->unk20A = (s16) (arg0->unk20A + 0x80);
        arg0->velocity.y += 0.25f;
    }
    arg0->shape.rot.y += arg0->unk20A;
    func_80B61914(arg0);
    temp_f18 = arg0->unk33C;
    phi_f18 = temp_f18;
    phi_v0 = arg0;
    phi_v1 = 1;
    phi_f18_2 = temp_f18;
    phi_v0_2 = arg0;
    if (1 != 3) {
        do {
            temp_v1 = phi_v1 + 1;
            temp_v0 = phi_v0 + 0x20;
            temp_f18_2 = temp_v0->unk33C;
            temp_v0->unk31C = (f32) (phi_f18 + arg0->velocity.y);
            phi_f18 = temp_f18_2;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
            phi_f18_2 = temp_f18_2;
            phi_v0_2 = temp_v0;
        } while (temp_v1 != 3);
    }
    (phi_v0_2 + 0x20)->unk31C = (f32) (phi_f18_2 + arg0->velocity.y);
    arg0->world.pos.y += arg0->velocity.y;
    func_80B619FC(arg0, arg1);
    if (arg0->velocity.y >= 4.0f) {
        func_80B61E9C(arg0);
    }
}

void func_80B61E9C(Actor *arg0) {
    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06001360);
    arg0->draw = func_80B64470;
    Actor_SetScale(arg0, 0.014f);
    Audio_PlayActorSound2(arg0, 0x3873U);
    arg0->unk200 = func_80B61F04;
}

void func_80B61F04(Actor *arg0, GlobalContext *arg1) {
    s32 sp20;
    Actor *temp_v0;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_a3_2;
    s32 temp_v1;
    u8 temp_a3;
    f32 phi_f18;
    Actor *phi_v0;
    s32 phi_v1;
    f32 phi_f18_2;
    Actor *phi_v0_2;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_a3 = arg0->unk293;
    arg0->shape.rot.y += arg0->unk20A;
    temp_a3_2 = temp_a3 + 0xA;
    sp20 = temp_a3_2;
    func_80B61914(arg0);
    if (temp_a3_2 >= 0x5A) {
        arg0->unk20A = (s16) (arg0->unk20A - 0x80);
        arg0->velocity.y -= 0.25f;
        if (temp_a3_2 >= 0xB4) {
            sp20 = temp_a3_2;
            Math_ScaledStepToS(&arg0->world.rot.y, 0, 0x180);
        }
    }
    arg0->world.pos.y += arg0->velocity.y;
    temp_f18 = arg0->unk33C;
    phi_f18 = temp_f18;
    phi_v0 = arg0;
    phi_v1 = 1;
    phi_f18_2 = temp_f18;
    phi_v0_2 = arg0;
    if (1 != 3) {
        do {
            temp_v1 = phi_v1 + 1;
            temp_v0 = phi_v0 + 0x20;
            temp_f18_2 = temp_v0->unk33C;
            temp_v0->unk31C = (f32) (phi_f18 + arg0->velocity.y);
            phi_f18 = temp_f18_2;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
            phi_f18_2 = temp_f18_2;
            phi_v0_2 = temp_v0;
        } while (temp_v1 != 3);
    }
    (phi_v0_2 + 0x20)->unk31C = (f32) (phi_f18_2 + arg0->velocity.y);
    sp20 = temp_a3 + 0xA;
    func_80B619FC(arg0, arg1);
    if ((temp_a3 + 0xA) >= 0xFF) {
        arg0->unk293 = 0xFFU;
        func_80B62034(arg0);
        return;
    }
    arg0->unk293 = (u8) (temp_a3 + 0xA);
}

void func_80B62034(Actor *arg0) {
    arg0->unk206 = 0xF;
    if (arg0->unk204 == 0) {
        arg0 = arg0;
        func_801A2E54(0x38);
        arg0->unk204 = 1U;
    }
    arg0->unk200 = func_80B62084;
}

void func_80B62084(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0_2;
    Camera *temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    arg0->unk206 = (s16) (arg0->unk206 - 1);
    if (arg0->unk206 == 0) {
        temp_v0 = Play_GetCamera(arg1, arg0->unk20E);
        Play_CameraSetAtEye(arg1, 0, temp_v0 + 0x50, temp_v0 + 0x5C);
        arg0->unk20E = 0;
        if (arg0->params == 1) {
            temp_v0_2 = func_ActorCategoryIterateById(arg1, NULL, 4, 0x1CA);
            if (temp_v0_2 != 0) {
                temp_v0_2->params = (s16) arg0->cutscene;
            } else {
                ActorCutscene_Stop((s16) arg0->cutscene);
            }
        } else {
            ActorCutscene_Stop((s16) arg0->cutscene);
        }
        func_800B724C(arg1, arg0, 6U);
        EnBigPo_SetupIdleFlying(arg0);
    }
}

void EnBigPo_SetupWarpOut(Actor *arg0) {
    arg0->unk2BD = (u8) (arg0->unk2BD & ~1);
    arg0->unk2BE = (u8) (arg0->unk2BE & ~1);
    arg0->unk20A = 0x2000;
    arg0->unk206 = 0x20;
    arg0->flags &= -2;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x3874U);
    arg0->unk200 = EnBigPo_WarpingOut;
}

void EnBigPo_WarpingOut(Actor *arg0, GlobalContext *arg1) {
    s16 *temp_a0;
    s16 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk206;
    temp_a0 = arg0 + 0x20A;
    if (temp_v0 != 0) {
        arg0->unk206 = (s16) (temp_v0 - 1);
    }
    arg0->shape.rot.y += arg0->unk20A;
    phi_v0 = (s32) arg0->unk206;
    if ((s32) arg0->unk206 < 0x10) {
        arg0 = arg0;
        Math_ScaledStepToS(temp_a0, 0, 0x200);
        phi_v0 = (s32) arg0->unk206;
    }
    arg0->unk293 = (s8) (u32) ((f32) phi_v0 * 7.96875f);
    if (phi_v0 == 0) {
        arg0->unk293 = 0;
        EnBigPo_SetupWarpIn(arg0, arg1);
    }
}

void EnBigPo_SetupWarpIn(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    f32 sp28;
    s16 sp26;
    f32 temp_f0;
    f32 temp_f18;

    sp2C = arg1->actorCtx.actorList[2].first;
    temp_f0 = arg0->xzDistToPlayer;
    if (temp_f0 < 200.0f) {
        sp28 = 200.0f;
    } else {
        sp28 = temp_f0;
    }
    sp26 = (Rand_Next() >> 0x14) + arg0->yawTowardsPlayer;
    Audio_PlayActorSound2(arg0, 0x3873U);
    SkelAnime_ChangeAnimDefaultRepeat((SkelAnime *) (arg0 + 0x144), &D_06001360);
    arg0->unk20A = 0x2000;
    arg0->world.pos.x = (Math_SinS(sp26) * sp28) + sp2C->world.pos.x;
    temp_f18 = Math_CosS(sp26) * sp28;
    arg0->unk200 = EnBigPo_WarpingIn;
    arg0->world.pos.z = temp_f18 + sp2C->world.pos.z;
}

void EnBigPo_WarpingIn(Actor *arg0, ? arg1) {
    s16 *temp_a0;
    s16 temp_v0;
    s16 phi_v0;
    Actor *phi_a3;

    arg0->unk206 = (s16) (arg0->unk206 + 1);
    temp_v0 = arg0->unk206;
    arg0->shape.rot.y -= arg0->unk20A;
    temp_a0 = arg0 + 0x20A;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 >= 0x10) {
        arg0 = arg0;
        Math_ScaledStepToS(temp_a0, 0, 0x200);
        phi_v0 = arg0->unk206;
    }
    arg0->unk293 = (s8) (u32) ((f32) phi_v0 * 7.96875f);
    phi_a3 = arg0;
    if (phi_v0 == 0x20) {
        arg0->unk293 = 0xFF;
        if (arg0->unk204 == 0) {
            arg0 = arg0;
            func_801A2E54(0x38);
            arg0->unk204 = 1;
            phi_a3 = arg0;
        }
        EnBigPo_SetupIdleFlying(phi_a3);
    }
}

void EnBigPo_SetupIdleFlying(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000924, -5.0f);
    if (EnBigPo_SpinningDown == arg0->unk200) {
        arg0->unk206 = 0x50;
    } else {
        arg0->unk206 = 0;
    }
    arg0->unk212 = 0x28;
    arg0->velocity.y = 0.0f;
    arg0->unk2BD = (u8) (arg0->unk2BD | 1);
    arg0->unk2BE = (u8) (arg0->unk2BE | 1);
    arg0->flags |= 1;
    arg0->unk200 = EnBigPo_IdleFlying;
    arg0->unk218 = (f32) arg0->world.pos.y;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void EnBigPo_IdleFlying(Actor *arg0, void *arg1) {
    void *sp2C;
    s32 sp24;
    PosRot *sp20;
    PosRot *temp_a1;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_v1;

    sp2C = arg1->unk1CCC;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_v1 = arg0->unk206;
    if (temp_v1 != 0) {
        arg0->unk206 = (s16) (temp_v1 - 1);
    }
    temp_v0 = arg0->unk212;
    if (temp_v0 == 0) {
        arg0->unk212 = 0x28;
    } else {
        arg0->unk212 = (s16) (temp_v0 - 1);
    }
    Math_StepToF(arg0 + 0x218, sp2C->unk28 + 100.0f, 1.5f);
    arg0->world.pos.y = (sin_rad((f32) arg0->unk212 * 0.15707964f) * 10.0f) + arg0->unk218;
    Math_StepToF(arg0 + 0x70, 3.0f, 0.2f);
    func_800B9010(arg0, 0x3071U);
    temp_a1 = &arg0->home;
    sp20 = temp_a1;
    if (Actor_XZDistanceToPoint(arg0, &temp_a1->pos) > 300.0f) {
        arg0->unk208 = Actor_YawToPoint(arg0, &temp_a1->pos);
    }
    if ((Math_ScaledStepToS(&arg0->shape.rot.y, arg0->unk208, 0x200) != 0) && (Rand_ZeroOne() < 0.075f)) {
        phi_v1 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v1 = -1;
        }
        sp24 = phi_v1;
        arg0->unk208 = (s16) (arg0->unk208 + (((Rand_Next() >> 0x14) + 0x1000) * phi_v1));
    }
    arg0->world.rot.y = arg0->shape.rot.y;
    if (arg0->unk206 == 0) {
        EnBigPo_SetupSpinUp(arg0);
    }
}

void EnBigPo_SetupSpinUp(Actor *arg0) {
    arg0->unk2C0 = 9;
    arg0->unk2BD = (u8) (arg0->unk2BD | 4);
    arg0->unk2CC = (s32) (arg0->unk2CC & 0xFFFF7FFF);
    arg0->unk2BC = (u8) (arg0->unk2BC | 1);
    arg0->unk20A = 0x800;
    arg0->unk200 = EnBigPo_SpinningUp;
    arg0->speedXZ = 0.0f;
}

void EnBigPo_SpinningUp(Actor *arg0, ? arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    arg0->unk20A = (s16) (arg0->unk20A + 0x200);
    func_80B619B4(arg0);
    if ((s32) arg0->unk20A >= 0x3C00) {
        EnBigPo_SetupSpinAttack(arg0, arg0);
    }
}

void EnBigPo_SetupSpinAttack(Actor *arg0) {
    arg0->unk200 = EnBigPo_SpinAttack;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
}

void EnBigPo_SpinAttack(Actor *arg0, void *arg1) {
    void *sp2C;
    s16 temp_v0;
    s32 phi_v1;

    sp2C = arg1->unk1CCC;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_StepToF(arg0 + 0x70, 10.0f, 1.0f);
    Math_SmoothStepToF(arg0 + 0x28, sp2C->unk28, 0.3f, 7.5f, 1.0f);
    func_80B619B4(arg0);
    temp_v0 = arg0->yawTowardsPlayer - arg0->world.rot.y;
    if ((arg0->unk2BC & 2) == 0) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 >= 0x4001) && (arg0->xzDistToPlayer > 50.0f)) {
            goto block_5;
        }
    } else {
block_5:
        EnBigPo_SetupSpinDown(arg0);
    }
}

void EnBigPo_SetupSpinDown(Actor *arg0) {
    arg0->unk2BC = (u8) (arg0->unk2BC & 0xFFFE);
    arg0->unk200 = EnBigPo_SpinningDown;
}

void EnBigPo_SpinningDown(Actor *arg0, void *arg1) {
    void *sp2C;

    sp2C = arg1->unk1CCC;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_SmoothStepToF(arg0 + 0x28, sp2C->unk28 + 100.0f, 0.3f, 5.0f, 1.0f);
    Math_StepToF(arg0 + 0x70, 0.0f, 0.2f);
    if (Math_ScaledStepToS(arg0 + 0x20A, 0, 0x200) != 0) {
        arg0->unk2C0 = 3;
        arg0->unk2BD = (u8) (arg0->unk2BD & 0xFFFB);
        arg0->unk2CC = (s32) (arg0->unk2CC | 0x8000);
        EnBigPo_SetupIdleFlying(arg0);
    }
    func_80B619B4(arg0);
}

void EnBigPo_HitStun(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06000454, -6.0f);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x10);
    arg0->unk2BD = (u8) (arg0->unk2BD & 0xFFFE);
    func_800BE504(arg0, arg0 + 0x2AC);
    arg0->unk200 = EnBigPo_CheckHealth;
    arg0->speedXZ = 5.0f;
}

void EnBigPo_CheckHealth(Actor *arg0, ? arg1) {
    f32 *temp_a0;

    temp_a0 = arg0 + 0x70;
    arg0 = arg0;
    Math_StepToF(temp_a0, 0.0f, 0.5f);
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        if (arg0->colChkInfo.health == 0) {
            EnBigPo_SetupDeath(arg0);
            return;
        }
        EnBigPo_SetupWarpOut(arg0);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void EnBigPo_SetupDeath(Actor *arg0) {
    arg0->unk206 = 0;
    arg0->hintId = 0xFF;
    arg0->unk2BE = (u8) (arg0->unk2BE & 0xFFFE);
    arg0->unk200 = EnBigPo_BurnAwayDeath;
    arg0->speedXZ = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void EnBigPo_BurnAwayDeath(Actor *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3E;
    s16 sp3C;
    s16 sp3A;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_f10;
    f32 phi_f18;
    s32 phi_v1;

    arg0->unk206 = (s16) (arg0->unk206 + 1);
    temp_v1 = arg0->unk206;
    if ((s32) temp_v1 < 8) {
        sp3E = func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk800) + 0x4800;
        temp_v1_2 = arg0->unk206;
        if ((s32) temp_v1_2 < 5) {
            temp_a0 = (temp_v1_2 << 0xC) - 0x4000;
            sp3C = temp_a0;
            sp48 = (((Math_SinS(temp_a0) * 23.0f) + 40.0f) * 1.4000001f) + arg0->world.pos.y;
            sp40 = Math_CosS(temp_a0) * 32.2f;
            sp44 = (Math_SinS(sp3E) * sp40) + arg0->world.pos.x;
            phi_f18 = (Math_CosS(sp3E) * sp40) + arg0->world.pos.z;
        } else {
            sp48 = arg0->world.pos.y + ((40.0f + (15.0f * (f32) (temp_v1_2 - 5))) * 1.4000001f);
            sp44 = (Math_SinS(sp3E) * 32.2f) + arg0->world.pos.x;
            phi_f18 = (Math_CosS(sp3E) * 32.2f) + arg0->world.pos.z;
        }
        sp4C = phi_f18;
        temp_f10 = (s32) ((f32) ((arg0->unk206 * 0xA) + 0x50) * 1.4000001f);
        sp3A = (s16) temp_f10;
        func_800B3030(arg1, (Vec3f *) &sp44, &D_80B6506C, &D_801D15B0, (s16) (s32) (s16) temp_f10, (s16) 0, 2);
        sp44 = (2.0f * arg0->world.pos.x) - sp44;
        sp4C = (2.0f * arg0->world.pos.z) - sp4C;
        func_800B3030(arg1, (Vec3f *) &sp44, &D_80B6506C, &D_801D15B0, (s16) (s32) sp3A, (s16) 0, 2);
        sp44 = arg0->world.pos.x;
        sp4C = arg0->world.pos.z;
        func_800B3030(arg1, (Vec3f *) &sp44, &D_80B6506C, &D_801D15B0, (s16) (s32) sp3A, (s16) 0, 2);
    } else if ((s32) temp_v1 >= 0x1C) {
        EnBigPo_SetupLanternDrop(arg0);
    } else if ((s32) temp_v1 >= 0x13) {
        arg0->world.pos.y += 5.0f;
        temp_f0 = (f32) (0x1C - temp_v1) * 0.014f * 0.1f;
        arg0->scale.x = temp_f0;
        arg0->scale.y = temp_f0;
        arg0->scale.z = temp_f0;
    }
    phi_v1 = (s32) arg0->unk206;
    if ((s32) arg0->unk206 < 0x12) {
        func_800B9010(arg0, 0x321FU);
        phi_v1 = (s32) arg0->unk206;
    }
    if (phi_v1 == 0x12) {
        Audio_PlayActorSound2(arg0, 0x3877U);
    }
}

void EnBigPo_SetupLanternDrop(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a2->draw = func_80B64880;
    temp_a2->shape.shadowDraw = NULL;
    temp_a2->world.pos.x = temp_a2->unk328;
    temp_a2->world.pos.y = temp_a2->unk32C;
    temp_a2->world.pos.z = temp_a2->unk330;
    arg0 = temp_a2;
    Actor_SetScale(temp_a2, 0.014f);
    arg0->gravity = -1.0f;
    arg0->shape.rot.x = -0x8000;
    arg0->world.pos.y -= 15.0f;
    arg0->shape.yOffset = 1500.0f;
    arg0->velocity.y = 0.0f;
    func_800BC154(arg1, arg1 + 0x1CA0, arg0, 8U);
    arg0->flags &= -6;
    arg0->bgCheckFlags &= 0xFBFF;
    arg0->unk200 = EnBigPo_LanternFalling;
}

void EnBigPo_LanternFalling(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a1;

    if (((arg0->bgCheckFlags & 1) != 0) || (arg0->floorHeight == -32000.0f)) {
        temp_a1 = arg0->unk210;
        if (temp_a1 != 0xFF) {
            Actor_SetSwitchFlag(arg1, (s32) temp_a1);
        }
        EffectSsHahen_SpawnBurst(arg1, arg0 + 0x24, 6.0f, 0, (s16) 1, (s16) 1, (s16) 0xF, (s16) 0x1F1, (s16) 0xA, &D_060041A0);
        EnBigPo_SpawnScoopSoul(arg0);
    }
}

void EnBigPo_AdjustPoAlpha(Actor *arg0, s32 arg1) {
    f32 sp18;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_v0;
    u8 temp_t7;
    u8 phi_v1;
    f32 phi_f6;
    f32 phi_f0;

    temp_v0 = arg0->unk293 + arg1;
    if (temp_v0 < 0) {
        arg0->unk293 = 0U;
    } else {
        phi_v1 = (u8) temp_v0;
        if (temp_v0 >= 0x100) {
            phi_v1 = 0xFFU;
        }
        arg0->unk293 = phi_v1;
    }
    temp_t7 = arg0->unk293;
    temp_f6 = (f32) temp_t7;
    phi_f6 = temp_f6;
    if ((s32) temp_t7 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f0 = phi_f6 * 0.003921569f;
    phi_f0 = temp_f0;
    if (arg1 < 0) {
        temp_f2 = (0.0056000003f * temp_f0) + 0.0014000001f;
        arg0->scale.x = temp_f2;
        arg0->scale.z = temp_f2;
        arg0->scale.y = (0.007f - (0.007f * temp_f0)) + 0.007f;
    } else {
        sp18 = temp_f0;
        Actor_SetScale(arg0, temp_f0 * 0.007f);
        arg0->world.pos.y = arg0->unk218 + (temp_f0 * 15.0f);
        phi_f0 = 1.0f;
    }
    arg0->unk290 = (s8) (u32) (255.0f * phi_f0);
    arg0->unk291 = (s8) (u32) (200.0f * phi_f0);
    arg0->unk292 = 0;
}

void EnBigPo_SpawnScoopSoul(Actor *arg0) {
    arg0->draw = EnBigPo_DrawScoopSoul;
    arg0->shape.yOffset = 0.0f;
    arg0->shape.rot.x = 0;
    arg0->shape.rot.y = 0;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->unk293 = 0;
    arg0->scale.x = 0.0f;
    arg0->scale.y = 0.0f;
    arg0->unk218 = (f32) arg0->world.pos.y;
    Audio_PlayActorSound2(arg0, 0x28E0U);
    arg0->unk200 = EnBigPo_ScoopSoulAppearing;
}

void EnBigPo_ScoopSoulAppearing(Actor *arg0, ? arg1) {
    arg0->unk218 = (f32) (arg0->unk218 + 2.0f);
    EnBigPo_AdjustPoAlpha((Actor *)0x14);
    if (arg0->unk293 == 0xFF) {
        EnBigPo_SetupScoopSoulIdle(arg0);
    }
}

void EnBigPo_SetupScoopSoulIdle(Actor *arg0) {
    arg0->unk218 = (f32) arg0->world.pos.y;
    Actor_SetHeight(arg0, -10.0f);
    arg0->unk206 = 0x190;
    arg0->flags |= 1;
    arg0->unk200 = EnBigPo_ScoopSoulIdle;
}

void EnBigPo_ScoopSoulIdle(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk206;
    if (temp_v0 != 0) {
        arg0->unk206 = (s16) (temp_v0 - 1);
    }
    if (Actor_HasParent(arg0, arg1) != 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if (arg0->unk206 == 0) {
        Audio_PlayActorSound2(arg0, 0x38ECU);
        EnBigPo_ScoopSoulStartLeaving(arg0);
        return;
    }
    func_800B8A1C(arg0, arg1, 0xBA, 35.0f, 60.0f);
    arg0->world.pos.y = (sin_rad((f32) arg0->unk206 * 0.15707964f) * 5.0f) + arg0->unk218;
}

void EnBigPo_ScoopSoulStartLeaving(Actor *arg0) {
    arg0->flags &= 0xFFFEFFFE;
    arg0->unk200 = EnBigPo_ScoopSoulFadingAway;
}

void EnBigPo_ScoopSoulFadingAway(Actor *arg0, ? arg1) {
    EnBigPo_AdjustPoAlpha((Actor *)-0xD);
    if (arg0->unk293 == 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80B63450(EnBigpo *arg0) {
    arg0->actor.flags &= -2;
    arg0->actionFunc = EnBigPo_SelectRandomFireLocations;
}

void EnBigPo_SelectRandomFireLocations(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *temp_s0_3;
    Actor *temp_s0_4;
    Actor *temp_s0_5;
    Actor *temp_s0_6;
    Actor *temp_v0;
    s32 temp_s5;
    Actor *phi_s0;
    s32 phi_s6;
    s32 phi_s6_2;
    Actor *phi_s0_2;
    s32 phi_v0;
    s16 phi_s5;
    Actor *phi_s0_3;
    s32 phi_s6_3;
    s32 phi_s6_4;

    temp_s0 = arg1->actorCtx.actorList[5].first;
    phi_s0 = temp_s0;
    phi_s6 = 0;
    phi_s6_4 = 0;
    if (temp_s0 != 0) {
        do {
            phi_s6_3 = phi_s6_4;
            if ((phi_s0->id == 0x208) && (phi_s0->params == 2)) {
                phi_s6_3 = phi_s6_4 + 1;
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            phi_s6 = phi_s6_3;
            phi_s6_4 = phi_s6_3;
        } while (temp_s0_2 != 0);
    }
    phi_s6_2 = phi_s6;
    if (phi_s6 < 3) {
        arg0->draw = func_80B64470;
        Actor_SetScale(arg0, 0.014f);
        EnBigPo_SetupWarpIn(arg0, arg1);
        Math_Vec3f_Copy(&arg0->world.pos, &arg0->home.pos);
        arg0->world.pos.y += 100.0f;
        return;
    }
    phi_s5 = 0;
    do {
        temp_s0_3 = arg1->actorCtx.actorList[5].first;
        phi_s0_2 = temp_s0_3;
        phi_v0 = (s32) Rand_ZeroFloat((f32) phi_s6_2) % phi_s6_2;
        if (temp_s0_3 != 0) {
loop_9:
            if ((phi_s0_2->id == 0x208) && (phi_s0_2->params == 2)) {
                if (phi_v0 == 0) {
                    phi_s0_2->params = 3;
                    Math_Vec3f_Copy(arg0 + (phi_s5 << 5) + 0x338, phi_s0_2 + 0x24);
                    phi_s0_2->parent = arg0;
                    phi_s0_2->update = EnBigPo_UpdateFire;
                    func_800BC154(arg1, arg1 + 0x1CA0, phi_s0_2, 6U);
                    phi_s0_2->unk20C = phi_s5;
                    phi_s0_2->flags &= -2;
                    Actor_SetScale(phi_s0_2, 0.0f);
                    temp_v0 = arg0->child;
                    if (temp_v0 == 0) {
                        arg0->child = phi_s0_2;
                    } else {
                        phi_s0_2->child = temp_v0;
                        arg0->child = phi_s0_2;
                    }
                } else {
                    phi_v0 += -1;
                    goto block_16;
                }
            } else {
block_16:
                temp_s0_4 = phi_s0_2->next;
                phi_s0_2 = temp_s0_4;
                if (temp_s0_4 != 0) {
                    goto loop_9;
                }
            }
        }
        temp_s5 = phi_s5 + 1;
        phi_s6_2 += -1;
        phi_s5 = (s16) temp_s5;
    } while (temp_s5 < 3);
    temp_s0_5 = arg1->actorCtx.actorList[5].first;
    phi_s0_3 = temp_s0_5;
    if (temp_s0_5 != 0) {
        do {
            if ((phi_s0_3->id == 0x208) && (phi_s0_3->params == 2)) {
                phi_s0_3->unk200 = EnBigpo_Die;
                phi_s0_3->update = EnBigPo_UpdateFire;
            }
            temp_s0_6 = phi_s0_3->next;
            phi_s0_3 = temp_s0_6;
        } while (temp_s0_6 != 0);
    }
    EnBigPo_ChangeToFireCounting(arg0);
}

void EnBigPo_ChangeToFireCounting(Actor *arg0) {
    arg0->unk200 = EnBigPo_FireCounting;
}

void EnBigPo_FireCounting(void *arg0, ? arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    temp_v0 = arg0->unk124;
    phi_v0 = temp_v0;
    phi_v1 = 0;
    phi_v1_3 = 0;
    if (temp_v0 != 0) {
        do {
            phi_v1_2 = phi_v1_3;
            if ((phi_v0->unk1C == 4) && (func_80B63980 == phi_v0->unk200)) {
                phi_v1_2 = phi_v1_3 + 1;
            }
            temp_v0_2 = phi_v0->unk124;
            phi_v0 = temp_v0_2;
            phi_v1 = phi_v1_2;
            phi_v1_3 = phi_v1_2;
        } while (temp_v0_2 != 0);
    }
    if (phi_v1 == 3) {
        func_80B61B38(arg0, func_80B63980, arg0);
    }
}

void func_80B63758(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = arg0->child;
    arg0->unk206 = 0x27;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            func_80B63A18(phi_s0);
            temp_s0_2 = phi_s0->child;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
    if (arg0->unk20E != 0) {
        sp20 = (Math_SinS(arg0->yawTowardsPlayer) * 360.0f) + arg0->world.pos.x;
        sp24 = arg0->world.pos.y + 150.0f;
        sp28 = (Math_CosS(arg0->yawTowardsPlayer) * 360.0f) + arg0->world.pos.z;
        Play_CameraSetAtEye(arg1, arg0->unk20E, arg0 + 0x3C, (Vec3f *) &sp20);
    }
    arg0->unk200 = EnBigpo_DoNothing;
}

void EnBigpo_DoNothing(EnBigpo *this, GlobalContext *globalCtx) {
    EnBigpo *self = (EnBigpo *) this;

}

void EnBigPo_InitHiddenFire(EnBigpo *arg0) {
    arg0->actor.draw = NULL;
    arg0->actionFunc = EnBigPo_WaitingForDampe;
}

void EnBigPo_WaitingForDampe(EnBigpo *arg0, GlobalContext *arg1) {
    if (arg0->actor.params == 4) {
        func_80B638AC();
    }
}

void EnBigpo_Die(EnBigpo *this, GlobalContext *globalCtx) {
    EnBigpo *self = (EnBigpo *) this;
    Actor_MarkForDeath(&self->actor);
}

void func_80B638AC(void *arg0) {
    arg0->unk13C = func_80B64DFC;
    arg0->unk206 = 0xF;
    arg0->unk200 = func_80B638D4;
}

void func_80B638D4(void *arg0, ? arg1) {
    f32 *temp_a0;
    f32 temp_f0;
    void *temp_a0_2;

    temp_a0 = arg0 + 0x58;
    arg0 = arg0;
    if (Math_StepToF(temp_a0, 0.01f, 0.0005f) != 0) {
        temp_a0_2 = arg0;
        arg0->unk206 = (s16) (arg0->unk206 - 1);
        if (arg0->unk206 == 0) {
            arg0 = arg0;
            func_80B63964(temp_a0_2);
        }
    }
    temp_f0 = arg0->unk58;
    arg0->unk60 = temp_f0;
    arg0->unk5C = (f32) (((0.01f - temp_f0) * 0.5f) + 0.01f);
}

void func_80B63964(void *arg0) {
    arg0->unk206 = 0x2710;
    arg0->unk200 = func_80B63980;
}

void func_80B63980(EnBigpo *arg0, ? arg1) {
    EnBigpo *temp_a3;
    f32 *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    EnBigpo *phi_a3;

    temp_v0 = arg0->idleTimer;
    temp_a0 = arg0 + 0x58;
    if ((s32) temp_v0 > 0) {
        if (temp_v0 == 0) {
            arg0->actor.params = 5;
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    arg0 = arg0;
    temp_a3 = arg0;
    phi_a3 = temp_a3;
    if (Math_StepToF(temp_a0, 0.0f, 0.001f) != 0) {
        temp_a3->actor.params = 3;
        arg0 = temp_a3;
        EnBigPo_InitHiddenFire(temp_a3);
        phi_a3 = arg0;
    }
    temp_f0 = phi_a3->actor.scale.x;
    phi_a3->actor.scale.z = temp_f0;
    phi_a3->actor.scale.y = ((0.01f - temp_f0) * 0.5f) + 0.01f;
}

void func_80B63A18(Actor *arg0) {
    s16 sp1E;
    f32 temp_f4;
    s16 temp_a0;
    s16 temp_t8;
    s32 temp_lo;
    void *temp_v0;

    temp_lo = arg0->unk20C * 0x5555;
    arg0->unk206 = 0x28;
    temp_t8 = arg0->parent->unk92;
    arg0 = arg0;
    temp_a0 = temp_t8 + temp_lo;
    sp1E = temp_a0;
    temp_v0 = arg0->parent;
    arg0->home.pos.x = (Math_SinS(temp_a0) * 30.0f) + temp_v0->world.pos.x;
    arg0->home.pos.y = temp_v0->world.pos.y;
    temp_f4 = Math_CosS(temp_a0) * 30.0f;
    arg0->unk200 = func_80B63AC4;
    arg0->home.pos.z = temp_f4 + arg0->parent->world.pos.z;
}

void func_80B63AC4(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp2C;
    f32 sp28;
    Actor *temp_s1;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_ret;

    arg0->unk206 = (s16) (arg0->unk206 - 1);
    if (arg0->unk206 == 0) {
        temp_s1 = arg0->parent;
        Actor_SetSwitchFlag(arg1, (s32) arg0->unk210);
        Math_Vec3f_Copy(temp_s1 + (arg0->unk20C << 5) + 0x338, arg0 + 0x24);
        Actor_MarkForDeath(arg0);
        if (arg0->unk20C == 0) {
            temp_s1->draw = func_80B64B08;
            Actor_SetScale(temp_s1, 0.01f);
            func_80B61D74(temp_s1);
            temp_s1->unk214 = 30.0f;
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    Math_Vec3f_Diff(arg0 + 0x24, arg0 + 8, &sp2C);
    temp_ret = Math3D_Vec3fMagnitude(&sp2C);
    temp_f0 = temp_ret;
    if (temp_f0 > 0.0001f) {
        sp28 = temp_f0;
        Math_Vec3f_Scale(&sp2C, 1.0f / temp_f0);
    }
    temp_f2 = temp_ret / (f32) arg0->unk206;
    arg0->world.pos.x -= temp_f2 * sp2C.x;
    arg0->world.pos.y -= temp_f2 * sp2C.y;
    arg0->world.pos.z -= temp_f2 * sp2C.z;
}

void func_80B63C28(EnBigpo *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u8 temp_v1;

    if (EnBigPo_CheckHealth == arg0->actionFunc) {
        if ((arg0->actor.colorFilterTimer & 2) != 0) {
            arg0->mainColor.r = 0;
            arg0->mainColor.g = 0;
            arg0->mainColor.b = 0;
            return;
        }
        arg0->mainColor.r = 0x50;
        arg0->mainColor.g = 0xFF;
        arg0->mainColor.b = 0xE1;
        return;
    }
    temp_v0 = arg0->mainColor.r + 5;
    if (temp_v0 >= 0x100) {
        arg0->mainColor.r = 0xFF;
    } else {
        arg0->mainColor.r = (u8) temp_v0;
    }
    temp_v0_2 = arg0->mainColor.g + 5;
    if (temp_v0_2 >= 0x100) {
        arg0->mainColor.g = 0xFF;
    } else {
        arg0->mainColor.g = (u8) temp_v0_2;
    }
    temp_v1 = arg0->mainColor.b;
    temp_v0_3 = temp_v1 + 5;
    if ((s32) temp_v1 >= 0xD3) {
        temp_v0_4 = temp_v1 - 5;
        if (temp_v0_4 < 0xD2) {
            arg0->mainColor.b = 0xD2;
            return;
        }
        arg0->mainColor.b = (u8) temp_v0_4;
        return;
    }
    if (temp_v0_3 >= 0xD3) {
        arg0->mainColor.b = 0xD2;
        return;
    }
    arg0->mainColor.b = (u8) temp_v0_3;
}

void func_80B63D0C(EnBigpo *arg0) {
    f32 temp_f0;
    s32 temp_f8;
    s32 temp_f8_2;
    s32 temp_t9;
    s8 temp_t4;

    temp_f0 = Rand_ZeroOne();
    temp_f8 = (s32) (temp_f0 * 30.0f);
    temp_t4 = temp_f8 + 0xDC;
    temp_f8_2 = (s32) (temp_f0 * 160.0f);
    temp_t9 = (s32) (temp_f0 * 100.0f);
    arg0->lanternColor.r = temp_f8 + 0xE1;
    arg0->lanternColor.a = temp_t4;
    arg0->lanternColor.g = temp_t9 + 0x9B;
    arg0->lanternColor.b = temp_f8_2 + 0x5F;
}

s32 func_80B63D88(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk2BD;
    if (((temp_v0 & 2) != 0) && ((temp_v0 & 4) == 0)) {
        arg0->unk2BD = (u8) (temp_v0 & 0xFFFD);
        if (arg0->colChkInfo.damageEffect == 0xF) {
            return 1;
        }
        if (Actor_ApplyDamage(arg0) == 0) {
            arg0->flags &= -2;
            Audio_PlayActorSound2(arg0, 0x3876U);
            Enemy_StartFinishingBlow(arg1, arg0);
            if (arg0->params == 1) {
                func_801A2ED8();
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x3875U);
        }
        if (arg0->colChkInfo.damageEffect == 4) {
            arg0->unk21C = 4.0f;
            arg0->unk220 = 1.0f;
            Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk2D2, (f32) arg0->unk2D4, (f32) arg0->unk2D6, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        EnBigPo_HitStun(arg0);
        return 1;
    }
    return 0;
}

void EnBigpo_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBigpo *this = (EnBigpo *) thisx;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    u8 temp_v1;
    void (*temp_v0)(EnBigpo *, GlobalContext *);
    f32 phi_f0;

    if ((this->actor.flags & 0x2000) == 0x2000) {
        this->hoverHeightCycleTimer = 0;
        this->savedHeight = this->actor.world.pos.y;
    }
    if (func_80B63D88(&this->actor, globalCtx) == 0) {
        if ((this->actor.isTargeted != 0) && (EnBigPo_WarpingOut != this->actionFunc) && ((this->collider.base.acFlags & 4) == 0) && (this->actor.category == 5)) {
            this->unk20C += 1;
        } else {
            this->unk20C = 0;
        }
        if (this->unk20C == 0x28) {
            Audio_PlayActorSound2(&this->actor, 0x38ECU);
            EnBigPo_SetupWarpOut(&this->actor);
        }
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->actionFunc;
    if ((func_80B61F04 != temp_v0) && (func_80B61DA4 != temp_v0)) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    if (EnBigPo_LanternFalling == this->actionFunc) {
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 27.0f, 60.0f, 4U);
    }
    if (EnBigPo_DrawScoopSoul == this->actor.draw) {
        Actor_SetHeight(&this->actor, -10.0f);
    } else {
        Actor_SetHeight(&this->actor, 42.0f);
    }
    func_80B63C28(this);
    func_80B63D0C(this);
    temp_a1 = &this->collider;
    this->actor.shape.shadowAlpha = this->mainColor.a;
    sp28 = temp_a1;
    Collider_UpdateCylinder(&this->actor, temp_a1);
    if ((this->collider.base.ocFlags1 & 1) != 0) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &sp28->base);
    }
    if ((this->collider.base.atFlags & 1) != 0) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &sp28->base);
    }
    if ((this->collider.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &sp28->base);
    }
    if (this->unk21C > 0.0f) {
        Math_StepToF(&this->unk21C, 0.0f, 0.05f);
        temp_v1 = this->mainColor.a;
        if (temp_v1 != 0xFF) {
            temp_f0 = (f32) temp_v1;
            phi_f0 = temp_f0;
            if ((s32) temp_v1 < 0) {
                phi_f0 = temp_f0 + 4294967296.0f;
            }
            temp_f2 = phi_f0 * 0.003921569f;
            if (temp_f2 < phi_f0) {
                this->unk21C = temp_f2;
            }
        }
        temp_f0_2 = (this->unk21C + 1.0f) * 0.5f;
        this->unk220 = temp_f0_2;
        if (temp_f0_2 > 1.0f) {
            this->unk220 = 1.0f;
            return;
        }
        this->unk220 = this->unk220;
        // Duplicate return node #34. Try simplifying control flow for better match
    }
}

void EnBigPo_UpdateFire(Actor *arg0, GlobalContext *arg1) {
    arg0 = arg0;
    arg0->shape.rot.y = func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk800) + 0x8000;
    arg0->unk200(arg0, arg1);
}

s32 EnBigPo_OverrideLimbDraw2(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((arg5->unk293 == 0) || (arg1 == 7) || ((EnBigPo_BurnAwayDeath == arg5->unk200) && ((s32) arg5->unk206 >= 2))) {
        *arg2 = NULL;
    }
    return 0;
}

void EnBigPo_PostLimbDraw2(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5) {
    Vec3f sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_s2;
    s32 temp_s2_2;
    s8 temp_s3;
    void *temp_v0_3;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    s32 phi_s2;

    if ((EnBigPo_BurnAwayDeath == arg4->unk200) && ((s32) arg4->unk206 >= 2) && (arg1 == 8)) {
        temp_v0 = *arg5;
        *arg5 = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = *arg5;
        *arg5 = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = &D_060058B8;
    }
    if (arg1 == 7) {
        SysMatrix_GetStateTranslationAndScaledY(1400.0f, &sp44);
        if ((EnBigPo_BurnAwayDeath == arg4->unk200) && ((s32) arg4->unk206 >= 0x13)) {
            temp_f0 = arg4->scale.x;
            if (temp_f0 != 0.0f) {
                temp_f12 = 0.014f / temp_f0;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            }
        }
        SysMatrix_CopyCurrentState(arg4 + 0x2F8);
    }
    temp_s3 = *(&D_80B65078 + arg1);
    if (temp_s3 != -1) {
        if ((s32) temp_s3 < 3) {
            SysMatrix_GetStateTranslation(arg4 + (temp_s3 * 0xC) + 0x224);
            return;
        }
        if (temp_s3 == 3) {
            SysMatrix_GetStateTranslationAndScaledX(3000.0f, arg4 + (temp_s3 * 0xC) + 0x224);
            return;
        }
        if (temp_s3 == 4) {
            SysMatrix_GetStateTranslationAndScaledY(-2000.0f, arg4 + (temp_s3 * 0xC) + 0x224);
            return;
        }
        temp_v0_3 = arg4 + (temp_s3 * 0xC);
        SysMatrix_GetStateTranslationAndScaledX(-4000.0f, temp_v0_3 + 0x224);
        temp_s2 = temp_s3 + 1;
        phi_s1 = &D_80B65084;
        phi_s0 = temp_v0_3 + 0x230;
        phi_s2 = temp_s2;
        if (temp_s2 < 9) {
            do {
                SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
                temp_s2_2 = phi_s2 + 1;
                phi_s1 += 0xC;
                phi_s0 += 0xC;
                phi_s2 = temp_s2_2;
            } while (temp_s2_2 != 9);
        }
        // Duplicate return node #19. Try simplifying control flow for better match
    }
}

void func_80B64470(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp38;
    GraphicsContext *sp34;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_t0;
    u8 temp_v0;

    temp_v0 = arg0->unk293;
    temp_t0 = arg1->state.gfxCtx;
    if ((temp_v0 == 0xFF) || (temp_v0 == 0)) {
        temp_v1_2 = temp_t0->polyOpa.p;
        temp_v1_2->words.w1 = (u32) (sSetupDL + 0x4B0);
        temp_v1_2->words.w0 = 0xDE000000;
        temp_v1_2->unk8 = 0xDB060030;
        temp_v1_2->unkC = D_801AEFA0;
        temp_v1_2->unk10 = 0xDB060020;
        sp34 = temp_t0;
        sp38 = temp_v1_2;
        temp_v1_2->unk14 = Gfx_EnvColor(arg1->state.gfxCtx, (s32) arg0->unk290, (s32) arg0->unk291, (s32) arg0->unk292, (s32) arg0->unk293);
        sp34 = temp_t0;
        temp_t0->polyOpa.p = SkelAnime_Draw2(arg1, arg0->unk148, arg0->unk164, EnBigPo_OverrideLimbDraw2, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) EnBigPo_PostLimbDraw2, arg0, temp_v1_2 + 0x18);
    } else {
        temp_v1 = temp_t0->polyXlu.p;
        temp_v1->words.w1 = sSetupDL + 0x4B0;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->unk8 = 0xDB060030;
        temp_v1->unkC = D_801AEF88;
        temp_v1->unk10 = 0xDB060020;
        sp34 = temp_t0;
        sp38 = temp_v1;
        temp_v1->unk14 = Gfx_EnvColor(arg1->state.gfxCtx, (s32) arg0->unk290, (s32) arg0->unk291, (s32) arg0->unk292, (s32) arg0->unk293);
        sp34 = temp_t0;
        temp_t0->polyXlu.p = SkelAnime_Draw2(arg1, arg0->unk148, arg0->unk164, EnBigPo_OverrideLimbDraw2, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) EnBigPo_PostLimbDraw2, arg0, temp_v1 + 0x18);
    }
    func_800BE680(arg1, arg0, (Vec3f []) (arg0 + 0x224), 9, arg0->scale.x * 71.428566f * arg0->unk220, 0.0f, arg0->unk21C, (u8) 0x14);
    SysMatrix_SetCurrentState(arg0 + 0x2F8);
    func_80B64880(arg0, arg1);
    if (func_80B61F04 == arg0->unk200) {
        func_80B64B08(arg0, arg1);
    }
}

void EnBigPo_DrawScoopSoul(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = arg1->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp4C = temp_v0;
    sp4C->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) arg1->gameplayFrames * -0xF) & 0x1FF, 0x20, 0x80);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_2->words.w1 = arg0->unk293 | ~0x55FF;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (arg0->unk290 << 0x18) | (arg0->unk291 << 0x10) | (arg0->unk292 << 8) | 0xFF;
    Lights_PointNoGlowSetInfo(arg0 + 0x348, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) (s32) arg0->unk290, (u8) (s32) arg0->unk291, (u8) (s32) arg0->unk292, (s16) (arg0->unk293 * 2));
    Matrix_RotateY((s16) (func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk800) + 0x8000), 1U);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    temp_v0_4->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_06001BB0;
}

void func_80B64880(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp70;
    Vec3f sp64;
    Vec3f sp58;
    GraphicsContext *sp50;
    f32 temp_f0;
    s32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    f32 phi_f2;
    Gfx *phi_v1;

    temp_v0 = (arg1 + (arg1->activeCamera * 4))->unk800;
    if (temp_v0 != 0) {
        Math_Vec3f_Diff(temp_v0 + 0x5C, temp_v0 + 0x50, &sp64);
        temp_f0 = Math3D_Vec3fMagnitude(&sp64);
        if (temp_f0 > 1.0f) {
            phi_f2 = 20.0f / temp_f0;
        } else {
            phi_f2 = 20.0f;
        }
        Math_Vec3f_Scale(&sp64, phi_f2);
    } else {
        Math_Vec3f_Copy(&sp64, &D_801D15B0);
    }
    sp50 = arg1->state.gfxCtx;
    temp_v0_2 = arg0->unk293;
    if ((temp_v0_2 == 0xFF) || (temp_v0_2 == 0)) {
        Scene_SetRenderModeXlu(arg1, 0, 1U);
        phi_v1 = sp50->polyOpa.p;
    } else {
        Scene_SetRenderModeXlu(arg1, 1, 2U);
        phi_v1 = sp50->polyXlu.p;
    }
    phi_v1->words.w0 = 0xDE000000;
    phi_v1->words.w1 = sSetupDL + 0x4B0;
    phi_v1->unk8 = 0xDB060028;
    sp70 = phi_v1;
    phi_v1->unkC = Gfx_EnvColor(arg1->state.gfxCtx, 0xA0, 0, 0xFF, (s32) arg0->unk293);
    sp70 = phi_v1;
    SysMatrix_GetStateTranslationAndScaledY(1400.0f, &sp58);
    Lights_PointGlowSetInfo(arg0 + 0x348, (s16) (s32) (sp58.x + sp64.x), (s16) (s32) (sp58.y + sp64.y), (s16) (s32) (sp58.z + sp64.z), (u8) (s32) arg0->unk294, (u8) (s32) arg0->unk295, (u8) (s32) arg0->unk296, (s16) (s32) arg0->unk297);
    phi_v1->unk10 = 0xFB000000;
    phi_v1->unk14 = (s32) ((arg0->unk294 << 0x18) | (arg0->unk295 << 0x10) | (arg0->unk296 << 8) | arg0->unk293);
    phi_v1->unk18 = 0xDA380003;
    sp70 = phi_v1;
    phi_v1->unk1C = Matrix_NewMtx(arg1->state.gfxCtx);
    phi_v1->unk20 = 0xDE000000;
    phi_v1->unk24 = &D_060042C8;
    phi_v1->unk2C = &D_060043F8;
    phi_v1->unk28 = 0xDE000000;
    temp_v0_3 = arg0->unk293;
    if ((temp_v0_3 == 0xFF) || (temp_v0_3 == 0)) {
        sp50->polyOpa.p = phi_v1 + 0x30;
        return;
    }
    sp50->polyXlu.p = phi_v1 + 0x30;
}

void func_80B64B08(Actor *arg0, GlobalContext *arg1) {
    s16 sp66;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s5;
    MtxF *temp_s6;
    s32 temp_s3;
    LightInfo *phi_s4;
    Actor *phi_s0;
    void *phi_s1;
    s32 phi_s3;

    temp_s6 = SysMatrix_GetCurrentState();
    temp_a0 = arg1->state.gfxCtx;
    temp_s5 = temp_a0;
    func_8012C2DC(temp_a0);
    Matrix_RotateY((s16) (func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk800) + 0x8000), 0U);
    if (func_80B61F04 == arg0->unk200) {
        Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
        sp66 = 0x1F4;
    } else {
        Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
        sp66 = (s16) (s32) (arg0->scale.x * 500.0f * 100.0f);
    }
    temp_v0 = temp_s5->polyXlu.p;
    temp_s5->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v0->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) arg1->gameplayFrames * -0x14) & 0x1FF, 0x20, 0x80);
    temp_v0_2 = temp_s5->polyXlu.p;
    temp_s5->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_2->words.w1 = ((0xFF - arg0->unk293) & 0xFF) | 0xAAFFFF00;
    temp_v0_3 = temp_s5->polyXlu.p;
    temp_s5->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0xFFFF;
    temp_v0_3->words.w0 = 0xFB000000;
    phi_s4 = arg0 + 0x348;
    phi_s0 = arg0;
    phi_s1 = arg0 + 0x338;
    phi_s3 = 0;
    do {
        Lights_PointNoGlowSetInfo(phi_s4, (s16) (s32) phi_s0->unk338, (s16) (s32) phi_s0->unk33C, (s16) (s32) phi_s0->unk340, (u8) 0xAA, (u8) 0xFF, (u8) 0xFF, (s16) (s32) sp66);
        temp_s6->mf[3][0] = phi_s1->unk0;
        temp_s6->mf[3][1] = phi_s1->unk4;
        temp_s6->mf[3][2] = phi_s1->unk8;
        temp_v0_4 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_5 = temp_s5->polyXlu.p;
        temp_s3 = phi_s3 + 0x20;
        temp_s5->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) D_0407D590;
        temp_v0_5->words.w0 = 0xDE000000;
        phi_s4 += 0x20;
        phi_s0 += 0x20;
        phi_s1 += 0x20;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x60);
}

void func_80B64DFC(void *arg0, GraphicsContext **arg1) {
    s32 sp50;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_t6;

    temp_t6 = arg0->unk120;
    sp50 = temp_t6;
    temp_a0 = arg1->unk0;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp40 = temp_v0;
    sp40->words.w1 = Gfx_TwoTexScroll(arg1->unk0, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) arg1->unk18840 * -0x14) & 0x1FF, 0x20, 0x80);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xAAFFFFFF;
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0xFFFF;
    temp_v0_3->words.w0 = 0xFB000000;
    Lights_PointNoGlowSetInfo(temp_t6 + (arg0->unk20C << 5) + 0x348, (s16) (s32) arg0->unk24, (s16) (s32) arg0->unk28, (s16) (s32) arg0->unk2C, (u8) 0xAA, (u8) 0xFF, (u8) 0xFF, (s16) (s32) (arg0->unk58 * 500.0f * 100.0f));
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    temp_v0_4->words.w1 = Matrix_NewMtx(arg1->unk0);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) D_0407D590;
}

