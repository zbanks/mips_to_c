void EnPametfrog_ApplyDamageEffect(Actor *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_ApplyElectricStun(Actor *arg0);    /* static */
void EnPametfrog_ApplyMagicArrowEffects(Actor *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_ApplyStun(Actor *arg0);            /* static */
void EnPametfrog_ChangeColliderFreeze(Actor *arg0); /* static */
void EnPametfrog_ChangeColliderThaw(Actor *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_IdleWaterEffects(EnPametfrog *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_JumpOnGround(Actor *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_PlaceSnapper(EnPametfrog *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnPametfrog_SetupDamage(Actor *arg0);          /* static */
void EnPametfrog_SetupFallInAir(Actor *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_SetupFallOffSnapper(Actor *arg0, GlobalContext *arg1); /* static */
void EnPametfrog_SetupRearOnSnapper(EnPametfrog *arg0, EnPametfrog *); /* static */
void EnPametfrog_SetupStun(Actor *arg0);            /* static */
void EnPametfrog_ShakeCamera(EnPametfrog *arg0, GlobalContext *arg1, f32 arg2, f32 arg3); /* static */
void EnPametfrog_StopCutscene(Actor *arg0, GlobalContext *arg1); /* static */
? EnPametfrog_Vec3fNormalize(Vec3f *arg0);          /* static */
void func_8086A238(EnPametfrog *arg0);              /* static */
s32 func_8086A2CC(EnPametfrog *arg0, CollisionPoly *arg1); /* static */
extern AnimationHeader D_06000994;
extern AnimationHeader D_06001B08;
extern AnimationHeader D_06001E14;
extern AnimationHeader D_06001F20;
extern AnimationHeader D_060030E4;
extern ? D_0600347C;
extern AnimationHeader D_060039C4;
extern ? D_06003F28;
extern AnimationHeader D_06004298;
extern AnimationHeader D_06004680;
extern AnimationHeader D_06004894;
extern AnimationHeader D_06004D50;
extern AnimationHeader D_060050B8;
extern AnimationHeader D_060052EC;
extern AnimationHeader D_06005694;
extern AnimationHeader D_06005D54;
extern AnimationHeader D_060066B4;
extern ? D_060070C4;
extern FlexSkeletonHeader D_0600DF98;
extern ? D_0600F048;
extern AnimationHeader D_0600F990;
static DamageTable D_8086D960 = {
    {
        0x10,
        1,
        0,
        1,
        1,
        1,
        0,
        0x10,
        1,
        1,
        1,
        0x22,
        0x32,
        0x42,
        1,
        0x10,
        1,
        2,
        0x10,
        0x50,
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
static ColliderJntSphElementInit D_8086D980 = {
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {1, {{0, 0, 0}, 0x20}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0x11, 0, 0},
        {1, {{0, 0, 0}, 0x19}, 0x64},
    },
};
static ColliderJntSphInit D_8086D9C8 = {{6, 0x10, 9, 0x39, 0x10, 0}, 2, &D_8086D980};
static CollisionCheckInfoInit D_8086D9D8 = {3, 0x1E, 0x3C, 0x32};
static InitChainEntry D_8086D9E0;                   /* unable to generate initializer */
static ? D_8086D9F0;                                /* unable to generate initializer */
static Vec3f D_8086DA04 = {0.0f, -0.5f, 0.0f};
static Color_RGBA8 D_8086DA10 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_8086DA14 = {0xB4, 0xB4, 0xB4, 0xFF};
static ? D_8086DA18;                                /* unable to generate initializer */
static ? D_8086DA28;                                /* unable to generate initializer */



void EnPametfrog_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPametfrog *this = (EnPametfrog *) thisx;
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v1_2;
    void *temp_v0_2;
    s16 phi_v0;
    s32 phi_v1;

    Actor_ProcessInitChain(&this->actor, &D_8086D9E0);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 55.0f);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_8086D960, &D_8086D9D8);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600DF98, &D_0600F990, this->limbDrawTable, this->transitionDrawTable, 0x18);
    Collider_InitAndSetJntSph(globalCtx, &this->collider, &this->actor, &D_8086D9C8, this->colElement);
    temp_v1 = this->actor.params;
    if ((s32) temp_v1 <= 0) {
        this->params = 1;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 5) {
            phi_v0 = 4;
        }
        this->params = phi_v0;
    }
    phi_v1 = 0;
    if (Actor_GetRoomCleared(globalCtx, (u32) globalCtx->roomCtx.currRoom.num) != 0) {
        Actor_MarkForDeath(&this->actor);
        temp_v0 = *(&D_8086D9F0 + (this->actor.params * 4));
        if ((temp_v0 & 0xFF & gSaveContext.weekEventReg[temp_v0 >> 8]) == 0) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x22, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, (s16) (s32) this->params);
            return;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
        return;
    }
    do {
        temp_v0_2 = this->collider.elements + phi_v1;
        temp_v1_2 = phi_v1 + 0x40;
        temp_v0_2->unk36 = (s16) temp_v0_2->unk2E;
        phi_v1 = temp_v1_2;
    } while (temp_v1_2 != 0x80);
    if (Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x144, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actor.params = 0;
    EnPametfrog_SetupLookAround(this);
}

void EnPametfrog_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPametfrog *this = (EnPametfrog *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->collider);
}

? EnPametfrog_Vec3fNormalize(Vec3f *arg0) {
    f32 temp_f0;

    temp_f0 = Math3D_Vec3fMagnitude(arg0);
    if (temp_f0 < 0.0001f) {
        return 0;
    }
    Math_Vec3f_Scale(arg0, 1.0f / temp_f0);
    return 1;
}

void EnPametfrog_ChangeColliderFreeze(Actor *arg0) {
    arg0->unk2AC = 0xA;
    arg0->unk398 = 3;
    arg0->unk3A0->unk14 = 0;
    arg0->unk2C8 = 0.75f;
    arg0->unk2CC = 1.125f;
    arg0->unk2C4 = 1.0f;
}

void EnPametfrog_ChangeColliderThaw(Actor *arg0, GlobalContext *arg1) {
    arg0->unk2BC = 0;
    if (arg0->unk2AC == 0xA) {
        arg0->unk2AC = 0U;
        arg0->unk398 = 6;
        arg0->unk3A0->unk14 = 1;
        arg0->unk2C4 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2F4), 0xC, 2, 0.3f, 0.2f);
    }
}

void EnPametfrog_JumpWaterEffects(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 *temp_a1;

    if (self->actor.yDistToWater > 0.0f) {
        temp_a1 = &sp2C;
        sp2C = self->actor.world.pos.x;
        sp34 = self->actor.world.pos.z;
        sp30 = self->actor.world.pos.y + self->actor.yDistToWater;
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) temp_a1, 0x96, 0x226, (s16) 0);
        sp30 += 8.0f;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp2C, NULL, NULL, (s16) 0, (s16) 0x226);
    }
}

void EnPametfrog_IdleWaterEffects(EnPametfrog *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 *temp_a1;

    if ((arg0->actor.yDistToWater > 0.0f) && (((u32) arg1->gameplayFrames % 0xEU) == 0)) {
        temp_a1 = &sp2C;
        sp2C = arg0->actor.world.pos.x;
        sp34 = arg0->actor.world.pos.z;
        sp30 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x96, 0x226, (s16) 0);
    }
}

void func_8086A238(EnPametfrog *arg0) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    Vec3s *temp_a1;
    f32 *temp_a0;
    f32 temp_f8;

    temp_a0 = &sp18;
    temp_a1 = arg0 + 0xBC;
    sp18 = arg0->unk_2E8.x;
    sp1C = arg0->unk_2E8.y;
    sp20 = arg0->unk_2E8.z;
    sp28 = arg0->unk_2DC.x;
    sp2C = arg0->unk_2DC.y;
    sp30 = arg0->unk_2DC.z;
    sp38 = arg0->unk_2D0.x;
    sp3C = arg0->unk_2D0.y;
    temp_f8 = arg0->unk_2D0.z;
    arg0 = arg0;
    sp40 = temp_f8;
    func_8018219C((MtxF *) temp_a0, temp_a1, 0);
    arg0->actor.world.rot.x = (s16) -(s32) arg0->actor.shape.rot.x;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->actor.world.rot.z = arg0->actor.shape.rot.z;
}

s32 func_8086A2CC(EnPametfrog *arg0, CollisionPoly *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Vec3f sp38;
    f32 sp34;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f8;

    arg0->actor.floorPoly = arg1;
    temp_f8 = (f32) arg1->normal.x * 0.00003051851f;
    sp44 = temp_f8;
    temp_f18 = (f32) arg1->normal.y * 0.00003051851f;
    sp48 = temp_f18;
    temp_f10 = (f32) arg1->normal.z * 0.00003051851f;
    sp4C = temp_f10;
    temp_f12 = (arg0->unk_2DC.x * temp_f8) + (temp_f18 * arg0->unk_2DC.y) + (temp_f10 * arg0->unk_2DC.z);
    if (fabsf(temp_f12) >= 1.0f) {
        return 0;
    }
    temp_f0 = func_80086C48(temp_f12);
    sp34 = temp_f0;
    temp_a0 = arg0 + 0x2DC;
    if (temp_f0 < 0.0001f) {
        return 0;
    }
    sp2C = temp_a0;
    Math3D_CrossProduct(temp_a0, (Vec3f *) &sp44, &sp38);
    EnPametfrog_Vec3fNormalize(&sp38);
    SysMatrix_InsertRotationAroundUnitVector_f(sp34, &sp38, 0);
    temp_a0_2 = arg0 + 0x2E8;
    sp28 = temp_a0_2;
    SysMatrix_MultiplyVector3fByState(temp_a0_2, &sp38);
    Math_Vec3f_Copy(temp_a0_2, &sp38);
    temp_a2 = arg0 + 0x2D0;
    sp24 = temp_a2;
    Math3D_CrossProduct(temp_a0_2, (Vec3f *) &sp44, temp_a2);
    EnPametfrog_Vec3fNormalize(sp24);
    Math_Vec3f_Copy(temp_a0, (Vec3f *) &sp44);
    return 1;
}

void EnPametfrog_ShakeCamera(EnPametfrog *arg0, GlobalContext *arg1, f32 arg2, f32 arg3) {
    s16 sp32;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Camera *temp_s0;
    Camera *temp_v0;
    s16 temp_v1;
    s32 temp_a0;

    temp_v0 = Play_GetCamera(arg1, arg0->camId);
    temp_s0 = temp_v0;
    temp_v1 = func_800DFCDC(temp_v0) + 0x8000;
    temp_a0 = temp_v1 << 0x10;
    sp32 = temp_v1;
    sp24 = (Math_SinS((s16) (temp_a0 >> 0x10)) * arg2) + temp_s0->at.x;
    sp28 = temp_s0->at.y + arg3;
    sp2C = (Math_CosS(sp32) * arg2) + temp_s0->at.z;
    Play_CameraSetAtEye(arg1, arg0->camId, &temp_s0->at, (Vec3f *) &sp24);
}

void EnPametfrog_StopCutscene(Actor *arg0, GlobalContext *arg1) {
    Camera *temp_v0;
    s16 temp_a2;

    temp_a2 = arg0->unk2BA;
    if (temp_a2 != 0) {
        temp_v0 = Play_GetCamera(arg1, temp_a2);
        Play_CameraSetAtEye(arg1, 0, temp_v0 + 0x50, temp_v0 + 0x5C);
        arg0->unk2BA = 0;
        ActorCutscene_Stop(arg0->unk2B0);
        func_800B724C(arg1, arg0, 6U);
    }
}

void EnPametfrog_PlaceSnapper(EnPametfrog *arg0, GlobalContext *arg1) {
    CollisionPoly *sp64;
    u32 sp60;
    Vec3f sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 *temp_a1;
    f32 *temp_a2;
    void *temp_v0;

    sp64 = NULL;
    arg0->actor.child->unk24 = (f32) ((Math_SinS(arg0->actor.shape.rot.y) * 300.0f) + arg0->actor.world.pos.x);
    temp_a1 = &sp48;
    temp_a2 = &sp3C;
    arg0->actor.child->world.pos.z = (Math_CosS(arg0->actor.shape.rot.y) * 300.0f) + arg0->actor.world.pos.z;
    arg0->actor.child->shape.rot.y = arg0->actor.shape.rot.y + 0x8000;
    sp48 = arg0->actor.child->world.pos.x;
    sp4C = arg0->actor.child->world.pos.y + 50.0f;
    sp50 = arg0->actor.child->world.pos.z;
    sp3C = arg0->actor.child->world.pos.x;
    sp40 = arg0->actor.child->world.pos.y - 150.0f;
    sp44 = arg0->actor.child->world.pos.z;
    if (func_800C55C4(arg1 + 0x830, (Vec3f *) temp_a1, (Vec3f *) temp_a2, &sp54, &sp64, 0U, 1U, 0U, 1U, &sp60) != 0) {
        arg0->actor.child->floorHeight = sp54.y;
    } else {
        arg0->actor.child->floorHeight = arg0->actor.home.pos.y;
    }
    temp_v0 = arg0->actor.child;
    temp_v0->world.pos.y = temp_v0->floorHeight - 60.0f;
}

void EnPametfrog_JumpOnGround(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp1C = temp_a0;
    if (func_801378B8(temp_a0, 1.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x395BU);
        return;
    }
    if (func_801378B8(temp_a0, 11.0f) != 0) {
        EnPametfrog_JumpWaterEffects((EnPametfrog *) arg0, arg1);
        Audio_PlayActorSound2(arg0, 0x2902U);
    }
}

void EnPametfrog_ApplyMagicArrowEffects(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 2) {
        arg0->unk2AC = 0;
        arg0->unk2C4 = 3.0f;
        arg0->unk2C8 = 0.75f;
        return;
    }
    if (temp_v0 == 4) {
        temp_v0_2 = arg0->unk3A0;
        arg0->unk2AC = 0x14;
        arg0->unk2C8 = 0.75f;
        arg0->unk2C4 = 3.0f;
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) temp_v0_2->unkE, (f32) temp_v0_2->unk10, (f32) temp_v0_2->unk12, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        return;
    }
    if (temp_v0 == 3) {
        EnPametfrog_ChangeColliderFreeze(arg0);
    }
}

void EnPametfrog_ApplyElectricStun(Actor *arg0) {
    arg0->unk2BC = 0x28;
    Audio_PlayActorSound2(arg0, 0x389EU);
    func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
    arg0->unk2AC = 0x1E;
    arg0->unk2C8 = 0.75f;
    arg0->unk2C4 = 2.0f;
}

void EnPametfrog_ApplyStun(Actor *arg0) {
    arg0->unk2BC = 0x28;
    Audio_PlayActorSound2(arg0, 0x389EU);
    func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
}

void EnPametfrog_SetupRearOnSnapper(EnPametfrog *arg0) {
    void (*temp_v0)(EnPametfrog *, GlobalContext *);

    temp_v0 = arg0->actionFunc;
    if (EnPametfrog_RearOnSnapperRise == temp_v0) {
        SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06005694);
    } else if (EnPametfrog_RearOnSnapperWave == temp_v0) {
        SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_060052EC);
    } else {
        SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06004680);
    }
    arg0->actor.flags &= -2;
    arg0->actor.params = 3;
    arg0->actionFunc = EnPametfrog_RearOnSnapper;
}

void EnPametfrog_RearOnSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    Actor *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    SkelAnime *sp20;
    Actor *temp_a0_2;
    Actor *temp_v0;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        sp20 = temp_a0;
        if (Rand_ZeroOne() < 0.5f) {
            SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06004D50);
        } else {
            SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06004680);
        }
    }
    temp_v0 = func_800BC270(globalCtx, &self->actor, 60.0f, 0x138B0);
    temp_a0_2 = temp_v0;
    if (temp_v0 != 0) {
        sp28 = self->actor.world.pos.x;
        sp2C = self->actor.world.pos.y + 10.0f;
        sp34 = temp_v0;
        sp30 = self->actor.world.pos.z;
        if ((s32) sp34->world.rot.x < Actor_PitchToPoint(temp_a0_2, (Vec3f *) &sp28)) {
            EnPametfrog_SetupRearOnSnapperWave(self);
            return;
        }
        EnPametfrog_SetupRearOnSnapperRise(self);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnPametfrog_SetupRearOnSnapperWave(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06004894);
    self->timer = 0xF;
    self->actionFunc = EnPametfrog_RearOnSnapperWave;
}

void EnPametfrog_RearOnSnapperWave(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &self->skelAnime;
    self = self;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = self->timer;
        if ((s32) temp_v0 > 0) {
            self->timer = temp_v0 - 1;
            if (self->timer == 0) {
                EnPametfrog_SetupRearOnSnapper(self, self);
            }
        }
    }
}

void EnPametfrog_SetupRearOnSnapperRise(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_060050B8);
    self->timer = 0xA;
    self->actor.params = 4;
    self->actor.shape.rot.x = 0;
    self->actor.shape.rot.z = 0;
    self->actionFunc = EnPametfrog_RearOnSnapperRise;
    self->actor.shape.rot.y = self->actor.child->world.rot.y;
}

void EnPametfrog_RearOnSnapperRise(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;
    s16 temp_lo;
    s16 temp_v0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    self->timer += -1;
    temp_v0 = self->timer;
    if (temp_v0 == 0) {
        EnPametfrog_SetupRearOnSnapper(self, self);
        return;
    }
    temp_lo = temp_v0 * 0xCCC;
    self = self;
    self->actor.world.pos.y = (Math_SinS(temp_lo) * 100.0f) + (self->actor.child->unk2AC + 46.0f);
}

void EnPametfrog_SetupFallOffSnapper(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s16 sp22;
    s16 temp_v0;
    s32 temp_a0;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06001F20);
    arg0->params = 6;
    arg0->speedXZ = 7.0f;
    arg0->velocity.y = 15.0f;
    arg0->world.rot.y = arg0->child->unk32 + 0x8000;
    arg0->flags |= 1;
    arg0->unk2B6 = 0x1E;
    arg0->unk396 = (u8) (arg0->unk396 | 1);
    arg0->shape.rot.y = arg0->world.rot.y;
    temp_v0 = Actor_YawToPoint(arg0, arg0 + 8);
    temp_a0 = temp_v0 << 0x10;
    sp22 = temp_v0;
    sp24 = (Math_SinS((s16) (temp_a0 >> 0x10)) * 300.0f) + arg0->focus.pos.x;
    sp28 = arg0->focus.pos.y + 100.0f;
    sp2C = (Math_CosS(sp22) * 300.0f) + arg0->focus.pos.z;
    Play_CameraSetAtEye(arg1, arg0->unk2BA, &arg0->focus.pos, (Vec3f *) &sp24);
    Audio_PlayActorSound2(arg0, 0x38D3U);
    arg0->unk2A8 = EnPametfrog_FallOffSnapper;
}

void EnPametfrog_FallOffSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 temp_f2;
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&self->skelAnime);
    temp_v0 = self->timer;
    self->actor.shape.rot.x += 0x800;
    self->actor.shape.rot.z += 0x1000;
    if (temp_v0 != 0) {
        self->timer = temp_v0 - 1;
    }
    temp_f2 = (sin_rad((f32) self->timer * 1.0471976f) * ((0.02f * ((f32) self->timer * 0.16666667f)) + 0.005f)) + 1.0f;
    EnPametfrog_ShakeCamera(self, globalCtx, 300.0f * temp_f2, 100.0f * temp_f2);
    if ((self->actor.bgCheckFlags & 1) != 0) {
        EnPametfrog_StopCutscene(&self->actor, globalCtx);
        EnPametfrog_SetupJumpToWall(self);
    }
}

void EnPametfrog_SetupJumpToWall(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime_ChangeAnim(&self->skelAnime, &D_060039C4, 2.0f, 0.0f, 0.0f, (u8) 0, -2.0f);
    self->actor.shape.rot.x = 0;
    self->actor.shape.rot.z = 0;
    self->actor.bgCheckFlags &= 0xFFF7;
    Audio_PlayActorSound2(&self->actor, 0x39A1U);
    self->actionFunc = EnPametfrog_JumpToWall;
}

void EnPametfrog_JumpToWall(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s32 temp_v1;
    u16 temp_v0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    EnPametfrog_JumpOnGround(&self->actor, globalCtx);
    temp_v0 = self->actor.bgCheckFlags;
    temp_v1 = temp_v0 & 1;
    if ((temp_v1 != 0) && ((temp_v0 & 8) != 0) && (self->actor.wallBgId == 0x32) && (((f32) self->actor.wallPoly->normal.y * 0.00003051851f) < 0.5f)) {
        EnPametfrog_SetupWallCrawl(self);
        return;
    }
    if ((temp_v1 == 0) || ((temp_f0 = self->skelAnime.animCurrentFrame, (temp_f0 > 1.0f)) && (temp_f0 < 12.0f))) {
        self->actor.speedXZ = 12.0f;
        return;
    }
    self->actor.speedXZ = 0.0f;
}

void EnPametfrog_SetupWallCrawl(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *sp24;
    CollisionPoly *temp_v0;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    Vec3f *temp_a2;

    if (EnPametfrog_JumpToWall == self->actionFunc) {
        SkelAnime_ChangeAnimDefaultRepeat(&self->skelAnime, &D_06001E14);
        self->collider.base.acFlags |= 1;
        self->unk_2D0.x = 0.0f;
        self->unk_2D0.z = 0.0f;
        self->actor.gravity = 0.0f;
        self->actor.world.pos.y = self->actor.focus.pos.y;
        self->unk_2D0.y = 1.0f;
        Math_Vec3f_Copy(&self->actor.colChkInfo.displacement, &D_801D15B0);
        temp_v0 = self->actor.wallPoly;
        self->actor.colChkInfo.mass = 0xFF;
        temp_a0 = &self->unk_2DC;
        temp_a1 = &self->unk_2D0;
        temp_a2 = &self->unk_2E8;
        self->unk_2DC.x = (f32) temp_v0->normal.x * 0.00003051851f;
        self->unk_2DC.y = (f32) temp_v0->normal.y * 0.00003051851f;
        self->unk_2DC.z = (f32) temp_v0->normal.z * 0.00003051851f;
        sp24 = temp_a2;
        sp28 = temp_a1;
        sp2C = temp_a0;
        Math3D_CrossProduct(temp_a0, temp_a1, temp_a2);
        EnPametfrog_Vec3fNormalize(sp24);
        Math3D_CrossProduct(sp24, sp2C, sp28);
        EnPametfrog_Vec3fNormalize(sp28);
        func_8086A238(self);
        self->wallPauseTimer = 0xA;
        self->actor.floorPoly = self->actor.wallPoly;
    } else {
        self->skelAnime.animPlaybackSpeed = 1.0f;
    }
    Audio_PlayActorSound2(&self->actor, 0x39A9U);
    self->actor.speedXZ = 8.0f;
    self->timer = Rand_S16Offset(0x23, 0xF);
    self->actionFunc = EnPametfrog_WallCrawl;
}

void EnPametfrog_WallCrawl(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    CollisionPoly *sp8C;
    CollisionPoly *sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    Vec3f sp64;
    Vec3f sp58;
    f32 sp54;
    u32 sp50;
    u32 sp4C;
    s32 sp48;
    SkelAnime *sp44;
    CollisionContext *sp40;
    CollisionContext *temp_a0_2;
    SkelAnime *temp_a0;
    f32 *temp_a2;
    f32 *temp_a2_2;
    f32 temp_f14;
    s16 temp_v0;
    u8 temp_t1;

    sp8C = NULL;
    sp88 = NULL;
    sp48 = 0;
    temp_v0 = self->freezeTimer;
    temp_a0 = &self->skelAnime;
    if ((s32) temp_v0 > 0) {
        self->freezeTimer = temp_v0 - 1;
        return;
    }
    sp44 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    self->timer += -1;
    self->actor.speedXZ = 8.0f;
    sp7C = self->actor.world.pos.x + (2.0f * self->unk_2DC.x);
    temp_f14 = 8.0f * 2.0f;
    sp80 = self->actor.world.pos.y + (2.0f * self->unk_2DC.y);
    temp_a0_2 = &globalCtx->colCtx;
    temp_a2 = &sp70;
    sp84 = self->actor.world.pos.z + (2.0f * self->unk_2DC.z);
    sp70 = self->actor.world.pos.x - (self->unk_2DC.x * 25.0f);
    sp74 = self->actor.world.pos.y - (self->unk_2DC.y * 25.0f);
    sp54 = temp_f14;
    sp40 = temp_a0_2;
    sp78 = self->actor.world.pos.z - (self->unk_2DC.z * 25.0f);
    if (func_800C55C4(temp_a0_2, (Vec3f *) &sp7C, (Vec3f *) temp_a2, &sp58, &sp88, 1U, 1U, 1U, 1U, &sp4C) != 0) {
        temp_a2_2 = &sp70;
        sp70 = (self->unk_2D0.x * temp_f14) + sp7C;
        sp74 = (self->unk_2D0.y * temp_f14) + sp80;
        sp78 = (self->unk_2D0.z * temp_f14) + sp84;
        if (func_800C55C4(temp_a0_2, (Vec3f *) &sp7C, (Vec3f *) temp_a2_2, &sp64, &sp8C, 1U, 1U, 1U, 1U, &sp50) != 0) {
            sp48 = func_8086A2CC(self, sp8C);
            Math_Vec3f_Copy(&self->actor.world.pos, &sp64);
            self->actor.floorBgId = (u8) sp50;
            self->actor.speedXZ = 0.0f;
        } else {
            if (sp88 != self->actor.floorPoly) {
                sp48 = func_8086A2CC(self, sp88);
            }
            Math_Vec3f_Copy(&self->actor.world.pos, &sp58);
            self->actor.floorBgId = (u8) sp4C;
        }
    } else {
        EnPametfrog_SetupClimbDownWall(self);
    }
    if (sp48 != 0) {
        func_8086A238(self);
    }
    if (func_801378B8(sp44, 15.0f) != 0) {
        Audio_PlayActorSound2(&self->actor, 0x3828U);
    }
    if ((((u32) globalCtx->gameplayFrames % 0x3CU) == 0) && (Rand_ZeroOne() < 0.8f)) {
        Audio_PlayActorSound2(&self->actor, 0x38D2U);
    }
    if ((self->timer == 0) || ((self->actor.world.pos.y < (self->actor.home.pos.y + 200.0f)) && (self->unk_2D0.y <= 0.0f))) {
        temp_t1 = self->wallPauseTimer - 1;
        self->wallPauseTimer = temp_t1;
        if ((temp_t1 & 0xFF) == 0) {
            EnPametfrog_SetupClimbDownWall(self);
            return;
        }
        EnPametfrog_SetupWallPause(self);
        // Duplicate return node #22. Try simplifying control flow for better match
    }
}

void EnPametfrog_SetupWallPause(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 sp18;
    s32 phi_v0;

    self->actor.speedXZ = 0.0f;
    self->skelAnime.animPlaybackSpeed = 1.5f;
    if (self->timer != 0) {
        if (self->unk_2E8.y > 0.0f) {
            self->wallRotation = 0.10471976f;
        } else {
            self->wallRotation = -0.10471976f;
        }
    } else {
        sp18 = Rand_ZeroFloat(8192.0f);
        phi_v0 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0 = -1;
        }
        self->wallRotation = (f32) phi_v0 * (4096.0f + sp18) * 0.000006391587f;
    }
    self->timer = 0xF;
    self = self;
    Audio_PlayActorSound2(&self->actor, 0x39ACU);
    self->actionFunc = EnPametfrog_WallPause;
}

void EnPametfrog_WallPause(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    Vec3f sp2C;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s16 temp_v0;

    temp_v0 = self->freezeTimer;
    if ((s32) temp_v0 > 0) {
        self->freezeTimer = temp_v0 - 1;
        return;
    }
    SkelAnime_FrameUpdateMatrix(&self->skelAnime);
    temp_a1 = &self->unk_2DC;
    self->timer += -1;
    sp28 = temp_a1;
    SysMatrix_InsertRotationAroundUnitVector_f(self->wallRotation, temp_a1, 0);
    temp_a0 = &self->unk_2D0;
    sp24 = temp_a0;
    SysMatrix_MultiplyVector3fByState(temp_a0, &sp2C);
    Math_Vec3f_Copy(temp_a0, &sp2C);
    Math3D_CrossProduct(sp28, sp24, &self->unk_2E8);
    func_8086A238(self);
    if ((((u32) globalCtx->gameplayFrames % 0x3CU) == 0) && (Rand_ZeroOne() < 0.8f)) {
        Audio_PlayActorSound2(&self->actor, 0x38D2U);
    }
    if (self->timer == 0) {
        EnPametfrog_SetupWallCrawl(self);
    }
}

void EnPametfrog_SetupClimbDownWall(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    s16 sp36;
    f32 temp_f4;
    s16 temp_v0;
    s32 temp_a0;

    SkelAnime_ChangeAnim(&self->skelAnime, &D_060039C4, 0.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060039C4.common), (u8) 2, 0.0f);
    self->actor.shape.rot.y = Actor_YawBetweenActors(&self->actor, self->actor.child);
    self->actor.shape.rot.x = 0;
    self->actor.shape.rot.z = 0;
    self->actor.colChkInfo.mass = 0x32;
    self->collider.base.acFlags &= 0xFFFE;
    self->actor.speedXZ = 5.0f;
    self->actor.world.rot.y = self->actor.shape.rot.y;
    self->actor.velocity.y = 0.0f;
    self->actor.gravity = -1.0f;
    temp_v0 = Actor_YawToPoint(&self->actor, &self->actor.home.pos);
    temp_a0 = temp_v0 << 0x10;
    sp36 = temp_v0;
    self->actor.world.pos.x += 30.0f * Math_SinS((s16) (temp_a0 >> 0x10));
    temp_f4 = 30.0f * Math_CosS(sp36);
    self->actor.bgCheckFlags &= 0xFFFE;
    self->actor.params = 7;
    self->actionFunc = EnPametfrog_ClimbDownWall;
    self->actor.world.pos.z += temp_f4;
}

void EnPametfrog_ClimbDownWall(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    s16 sp26;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_a0;

    if ((self->actor.bgCheckFlags & 1) != 0) {
        EnPametfrog_SetupRunToSnapper(self);
        return;
    }
    if (self->actor.floorHeight == -32000.0f) {
        temp_v0 = Actor_YawToPoint(&self->actor, &self->actor.home.pos);
        temp_a0 = temp_v0 << 0x10;
        sp26 = temp_v0;
        self->actor.world.pos.x += 5.0f * Math_SinS((s16) (temp_a0 >> 0x10));
        temp_f2 = self->actor.home.pos.y;
        self->actor.world.pos.z += 5.0f * Math_CosS(sp26);
        if (self->actor.world.pos.y < (temp_f2 - 5.0f)) {
            self->actor.world.pos.y = temp_f2;
        }
    }
}

void EnPametfrog_SetupRunToSnapper(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime_ChangeAnim(&self->skelAnime, &D_060039C4, 2.0f, 0.0f, 0.0f, (u8) 0, -2.0f);
    self->actor.params = 7;
    self->actionFunc = EnPametfrog_RunToSnapper;
}

void EnPametfrog_RunToSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *sp24;
    Actor *temp_a1;
    SkelAnime *temp_a0;
    f32 temp_f0;

    temp_a0 = &self->skelAnime;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    EnPametfrog_JumpOnGround(&self->actor, globalCtx);
    self->actor.shape.rot.y = Actor_YawBetweenActors(&self->actor, self->actor.child);
    self->actor.world.rot.y = self->actor.shape.rot.y;
    if (((self->actor.bgCheckFlags & 1) == 0) || ((temp_f0 = self->skelAnime.animCurrentFrame, (temp_f0 > 1.0f)) && (temp_f0 < 12.0f))) {
        self->actor.speedXZ = 12.0f;
    } else {
        self->actor.speedXZ = 0.0f;
    }
    temp_a1 = self->actor.child;
    if ((temp_a1->params == 1) && (Actor_XZDistanceBetweenActors(&self->actor, temp_a1) < 120.0f) && (func_801378B8(sp24, 0.0f) != 0)) {
        EnPametfrog_SetupJumpOnSnapper(self);
    }
}

void EnPametfrog_SetupJumpOnSnapper(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime_ChangeAnimTransitionStop(&self->skelAnime, &D_06004680, 6.0f);
    self->timer = 6;
    self->collider.base.ocFlags1 &= 0xFFFE;
    self->collider.base.acFlags &= 0xFFFE;
    self->actor.speedXZ = 0.0f;
    self->actor.velocity.y = 0.0f;
    self->actor.shape.rot.y = Actor_YawBetweenActors(&self->actor, self->actor.child);
    self->actor.params = 8;
    self->actor.world.rot.y = self->actor.shape.rot.y;
    Audio_PlayActorSound2(&self->actor, 0x395CU);
    self->actionFunc = EnPametfrog_JumpOnSnapper;
}

void EnPametfrog_JumpOnSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    Actor *temp_v0;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v1;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    self->timer += -1;
    temp_v1 = self->timer;
    if (temp_v1 == 0) {
        EnPametfrog_SetupLandOnSnapper(self);
        return;
    }
    temp_v0 = self->actor.child;
    temp_f2 = self->actor.world.pos.x;
    temp_f12 = self->actor.world.pos.z;
    temp_f0 = 1.0f / (f32) temp_v1;
    self->actor.world.pos.x = temp_f2 - ((temp_f2 - temp_v0->world.pos.x) * temp_f0);
    self->actor.world.pos.z = temp_f12 - ((temp_f12 - temp_v0->world.pos.z) * temp_f0);
    self = self;
    self->actor.world.pos.y = (Math_SinS((s16) (((s32) temp_v1 * -0x1000) + 0x6000)) * 65.0f) + self->actor.child->unk2AC;
}

void EnPametfrog_SetupLandOnSnapper(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000994);
    self->actor.params = 3;
    self->actionFunc = EnPametfrog_LandOnSnapper;
    self->actor.shape.rot.y = self->actor.child->shape.rot.y;
}

void EnPametfrog_LandOnSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    if (SkelAnime_FrameUpdateMatrix(&self->skelAnime) != 0) {
        EnPametfrog_StopCutscene(&self->actor, globalCtx);
        EnPametfrog_SetupRearOnSnapper(self);
    }
}

void EnPametfrog_SetupFallInAir(Actor *arg0, GlobalContext *arg1) {
    s16 sp46;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 *temp_a3;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_a0;
    f32 phi_f2;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06001F20);
    if ((s32) arg0->colChkInfo.health > 0) {
        arg0->params = 7;
    }
    arg0->speedXZ = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->unk395 = (u8) (arg0->unk395 & 0xFFFE);
    arg0->unk2B6 = 0xA;
    if (arg0->colChkInfo.health == 0) {
        Audio_PlayActorSound2(arg0, 0x38D6U);
    } else {
        Audio_PlayActorSound2(arg0, 0x38D3U);
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x10);
    temp_v0 = Actor_YawToPoint(arg0, &arg0->home.pos);
    temp_a0 = temp_v0 << 0x10;
    sp46 = temp_v0;
    arg0->world.pos.x += 30.0f * Math_SinS((s16) (temp_a0 >> 0x10));
    arg0->world.pos.z += 30.0f * Math_CosS(sp46);
    if (arg0->unk2BA != 0) {
        temp_f12 = arg0->unk2DC;
        temp_f2 = arg0->unk2E4;
        temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2));
        if (temp_f0 > 0.001f) {
            phi_f2 = 200.0f / temp_f0;
        } else {
            arg0->unk2DC = 1.0f;
            arg0->unk2E4 = 0.0f;
            phi_f2 = 200.0f;
        }
        temp_a3 = &sp38;
        sp38 = arg0->world.pos.x + (phi_f2 * arg0->unk2DC);
        sp3C = (arg0->world.pos.y + arg0->home.pos.y) * 0.5f;
        sp40 = arg0->world.pos.z + (phi_f2 * arg0->unk2E4);
        Play_CameraSetAtEye(arg1, arg0->unk2BA, &arg0->world.pos, (Vec3f *) temp_a3);
    }
    arg0->unk2A8 = EnPametfrog_FallInAir;
}

void EnPametfrog_FallInAir(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    s16 temp_a1;
    s16 temp_v1;

    SkelAnime_FrameUpdateMatrix(&self->skelAnime);
    temp_v1 = self->timer;
    self->actor.colorFilterTimer = 0x10;
    if ((s32) temp_v1 > 0) {
        self->timer = temp_v1 - 1;
        if (self->timer == 0) {
            self->actor.colChkInfo.mass = 0x32;
            self->actor.gravity = -1.0f;
            return;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
    temp_a1 = self->camId;
    self->spinYaw += 0xF00;
    if (temp_a1 != 0) {
        Play_CameraSetAtEye(globalCtx, self->camId, &self->actor.world.pos, Play_GetCamera(globalCtx, temp_a1) + 0x5C);
    }
    if ((self->actor.bgCheckFlags & 1) != 0) {
        EnPametfrog_SetupFallOnGround(self, globalCtx);
    }
}

void EnPametfrog_SetupFallOnGround(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime_ChangeAnimDefaultStop(&self->skelAnime, &D_06004298);
    self->actor.shape.rot.x = 0;
    self->actor.shape.rot.y += self->spinYaw;
    self->actor.shape.rot.z = 0;
    self->spinYaw = 0;
    self->timer = 5;
    EnPametfrog_ChangeColliderThaw(&self->actor, globalCtx);
    EnPametfrog_JumpWaterEffects(self, globalCtx);
    Audio_PlayActorSound2(&self->actor, 0x2902U);
    self->actionFunc = EnPametfrog_FallOnGround;
}

void EnPametfrog_FallOnGround(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    sp1C = temp_a0;
    self = self;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (&D_06004298 == self->skelAnime.animCurrentSeg) {
            if (self->actor.colChkInfo.health == 0) {
                self->timer += -1;
                if (self->timer == 0) {
                    EnPametfrog_SetupDefeatGekko(self, globalCtx);
                    return;
                }
                // Duplicate return node #7. Try simplifying control flow for better match
                return;
            }
            SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_060030E4);
            return;
        }
        EnPametfrog_SetupRunToSnapper(self);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void EnPametfrog_SetupDefeatGekko(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s16 sp22;
    s16 temp_v0;
    s16 phi_a0;

    temp_v0 = Actor_YawToPoint(self->actor.child, &self->actor.home.pos);
    phi_a0 = (s16) (temp_v0 + 0x2000);
    if ((s32) (s16) (self->actor.yawTowardsPlayer - temp_v0) > 0) {
        phi_a0 = (s16) (temp_v0 - 0x2000);
    }
    sp22 = phi_a0;
    sp24 = (Math_SinS(phi_a0) * 150.0f) + self->actor.child->focus.pos.x;
    sp28 = self->actor.child->focus.pos.y + 20.0f;
    sp2C = (Math_CosS(phi_a0) * 150.0f) + self->actor.child->focus.pos.z;
    Play_CameraSetAtEye(globalCtx, self->camId, &self->actor.child->focus.pos, (Vec3f *) &sp24);
    self->actor.params = 9;
    self->timer = 0x26;
    self->actionFunc = EnPametfrog_DefeatGekko;
}

void EnPametfrog_DefeatGekko(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    s16 temp_v0;

    temp_v0 = self->timer;
    self->actor.colorFilterTimer = 0x10;
    if ((s32) temp_v0 > 0) {
        self->timer = temp_v0 - 1;
        if (self->timer == 0) {
            EnPametfrog_SetupDefeatSnapper(self, globalCtx);
        }
    }
}

void EnPametfrog_SetupDefeatSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s16 sp22;
    s16 temp_v0;
    s16 phi_a0;

    temp_v0 = Actor_YawToPoint(&self->actor, &self->actor.home.pos);
    phi_a0 = (s16) (temp_v0 + 0x2000);
    if ((s32) (s16) (self->actor.yawTowardsPlayer - temp_v0) > 0) {
        phi_a0 = (s16) (temp_v0 - 0x2000);
    }
    sp22 = phi_a0;
    sp24 = (Math_SinS(phi_a0) * 150.0f) + self->actor.world.pos.x;
    sp28 = self->actor.world.pos.y + 20.0f;
    sp2C = (Math_CosS(phi_a0) * 150.0f) + self->actor.world.pos.z;
    Play_CameraSetAtEye(globalCtx, self->camId, &self->actor.world.pos, (Vec3f *) &sp24);
    self->timer = 0x14;
    self->actionFunc = EnPametfrog_DefeatSnapper;
}

void EnPametfrog_DefeatSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 temp_f0;

    self->timer += -1;
    Actor_SetScale(&self->actor, (f32) self->timer * 0.00035000002f);
    temp_f0 = (f32) self->timer;
    self->actor.colorFilterTimer = 0x10;
    EnPametfrog_ShakeCamera(self, globalCtx, (temp_f0 * 3.75f) + 75.0f, (temp_f0 * 0.5f) + 10.0f);
    if (self->timer == 0) {
        EnPametfrog_SetupSpawnFrog(self, globalCtx);
    }
}

void EnPametfrog_SetupSpawnFrog(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    PosRot *temp_s1;
    f32 *temp_s3;
    s16 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 phi_s0;

    temp_v1 = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
    temp_s0 = (s16) temp_v1;
    Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x22, self->actor.world.pos.x, self->actor.world.pos.y, self->actor.world.pos.z, (s16) 0, (s16) temp_v1, (s16) 0, (s16) (s32) self->params);
    sp80 = (Math_SinS(temp_s0) * 20.0f) + self->actor.world.pos.x;
    sp84 = self->actor.world.pos.y + 25.0f;
    sp88 = (Math_CosS(temp_s0) * 20.0f) + self->actor.world.pos.z;
    self->collider.base.ocFlags1 &= 0xFFFE;
    func_800B0DE0(globalCtx, (Vec3f *) &sp80, &D_801D15B0, &D_801D15B0, &D_8086DA10, &D_8086DA14, (s16) 0x320, (s16) 0x32);
    temp_s1 = &self->actor.world;
    Audio_PlaySoundAtPosition(globalCtx, &temp_s1->pos, 0x28, 0x3A86U);
    Actor_SetRoomClearedTemp(globalCtx, (u32) globalCtx->roomCtx.currRoom.num);
    temp_s3 = &sp74;
    phi_s0 = 0;
    do {
        sp74 = randPlusMinusPoint5Scaled(5.0f);
        sp78 = Rand_ZeroFloat(3.0f) + 4.0f;
        sp7C = randPlusMinusPoint5Scaled(5.0f);
        EffectSsHahen_Spawn(globalCtx, &temp_s1->pos, (Vec3f *) temp_s3, &D_8086DA04, (s16) 0, (s16) Rand_S16Offset(0xC, 3), (s16) -1, (s16) 0xA, NULL);
        temp_s0_2 = phi_s0 + 1;
        phi_s0 = temp_s0_2;
    } while (temp_s0_2 != 0x19);
    self->timer = 0x28;
    self->actionFunc = EnPametfrog_SpawnFrog;
}

void EnPametfrog_SpawnFrog(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 temp_f2;

    self->timer += -1;
    temp_f2 = (sin_rad((f32) self->timer * 0.62831855f) * ((0.04f * ((f32) self->timer * 0.1f)) + 0.02f)) + 1.0f;
    EnPametfrog_ShakeCamera(self, globalCtx, 75.0f * temp_f2, 10.0f * temp_f2);
    if (self->timer == 0) {
        EnPametfrog_StopCutscene(&self->actor, globalCtx);
        Actor_MarkForDeath(&self->actor);
    }
}

void EnPametfrog_SetupCutscene(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    s8 temp_a0;

    if (self->actor.colChkInfo.health == 0) {
        self->cutscene = (s16) self->actor.cutscene;
    } else {
        temp_a0 = self->actor.cutscene;
        self = self;
        self->cutscene = ActorCutscene_GetAdditionalCutscene((s16) temp_a0);
    }
    self = self;
    ActorCutscene_SetIntentToPlay(self->cutscene);
    self->actionFunc = EnPametfrog_PlayCutscene;
    self->actor.speedXZ = 0.0f;
    self->actor.velocity.y = 0.0f;
}

void EnPametfrog_PlayCutscene(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
        ActorCutscene_Start(self->cutscene, &self->actor);
        self->camId = ActorCutscene_GetCurrentCamera(self->cutscene);
        func_800B724C(globalCtx, &self->actor, 7U);
        if (self->actor.colChkInfo.health == 0) {
            if (self->actor.params == 0) {
                EnPametfrog_SetupCallSnapper(self, globalCtx);
                return;
            }
            EnPametfrog_SetupFallInAir(&self->actor, globalCtx);
            return;
        }
        EnPametfrog_SetupFallOffSnapper(&self->actor, globalCtx);
        return;
    }
    ActorCutscene_SetIntentToPlay(self->cutscene);
}

void EnPametfrog_SetupLookAround(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_060066B4);
    self->collider.base.atFlags &= 0xFFFE;
    self->actionFunc = EnPametfrog_LookAround;
    self->actor.speedXZ = 0.0f;
    self->actor.world.rot.y = self->actor.shape.rot.y;
}

void EnPametfrog_LookAround(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    EnPametfrog_IdleWaterEffects(self, globalCtx);
    Math_SmoothStepToS(&self->actor.world.rot.y, self->actor.yawTowardsPlayer, 5, 0x400, (s16) 0x80);
    self->actor.shape.rot.y = self->actor.world.rot.y;
    if ((SkelAnime_FrameUpdateMatrix(&self->skelAnime) != 0) && (func_801690CC(globalCtx) == 0)) {
        if (self->unk_2AE == 0) {
            func_801A2E54(0x38);
            self->unk_2AE = 1;
        }
        EnPametfrog_SetupJumpToLink(self);
    }
}

void EnPametfrog_SetupJumpToLink(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060039C4);
    self->actionFunc = EnPametfrog_JumpToLink;
    self->collider.base.acFlags |= 1;
    self->actor.world.rot.y = self->actor.shape.rot.y;
}

void EnPametfrog_JumpToLink(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 temp_f0;
    f32 temp_f0_2;

    Math_SmoothStepToS(&self->actor.world.rot.y, self->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x80);
    self->actor.shape.rot.y = self->actor.world.rot.y;
    SkelAnime_FrameUpdateMatrix(&self->skelAnime);
    EnPametfrog_JumpOnGround(&self->actor, globalCtx);
    if (((self->actor.bgCheckFlags & 1) == 0) || ((temp_f0 = self->skelAnime.animCurrentFrame, (temp_f0 > 1.0f)) && (temp_f0 < 12.0f))) {
        self->actor.speedXZ = 8.0f;
    } else {
        self->actor.speedXZ = 0.0f;
    }
    if (((self->collider.base.ocFlags1 & 2) != 0) && ((self->collider.base.ocFlags2 & 1) != 0) && (Actor_IsActorFacingLink(&self->actor, 0x3000) != 0) && ((temp_f0_2 = self->skelAnime.animCurrentFrame, (temp_f0_2 <= 2.0f)) || (temp_f0_2 >= 11.0f))) {
        EnPametfrog_SetupMeleeAttack(self);
    }
}

void EnPametfrog_SetupMeleeAttack(EnPametfrog *this) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_0600F990);
    self->timer = 7;
    self->actionFunc = EnPametfrog_MeleeAttack;
    self->actor.speedXZ = 0.0f;
}

void EnPametfrog_MeleeAttack(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v0;
    AnimationHeader *phi_v0;
    AnimationHeader *phi_v0_2;

    EnPametfrog_IdleWaterEffects(self);
    temp_a0 = &self->skelAnime;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        self->timer += -1;
        temp_v0 = self->timer;
        if (temp_v0 == 0) {
            EnPametfrog_SetupLookAround(self);
        } else if (temp_v0 == 6) {
            SkelAnime_ChangeAnimDefaultStop(sp20, &D_0600F990);
        } else {
            SkelAnime_ChangeAnimDefaultStop(sp20, *(&D_8086DA18 + (((s32) Rand_ZeroFloat(4.0f) % 4) * 4)));
        }
    }
    if (&D_0600347C == self->skelAnime.animCurrentSeg) {
        if (func_801378B8(sp20, 2.0f) == 0) {
            goto block_9;
        }
        goto block_17;
    }
block_9:
    phi_v0 = self->skelAnime.animCurrentSeg;
    if (&D_060070C4 == self->skelAnime.animCurrentSeg) {
        if (func_801378B8(sp20, 9.0f) == 0) {
            phi_v0 = self->skelAnime.animCurrentSeg;
            goto block_12;
        }
        goto block_17;
    }
block_12:
    phi_v0_2 = phi_v0;
    if (&D_06003F28 == phi_v0) {
        if (func_801378B8(sp20, 2.0f) == 0) {
            phi_v0_2 = self->skelAnime.animCurrentSeg;
            goto block_15;
        }
        goto block_17;
    }
block_15:
    if ((&D_0600F048 == phi_v0_2) && (func_801378B8(sp20, 27.0f) != 0)) {
block_17:
        self->collider.base.atFlags |= 1;
        if (&D_06003F28 == self->skelAnime.animCurrentSeg) {
            Audio_PlayActorSound2(&self->actor, 0x3966U);
            return;
        }
        Audio_PlayActorSound2(&self->actor, 0x3961U);
        return;
    }
    self->collider.base.atFlags &= 0xFFFE;
}

void EnPametfrog_SetupDamage(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06005D54, -3.0f);
    arg0->unk2B6 = 0x14;
    arg0->unk394 = (u8) (arg0->unk394 & 0xFFFE);
    arg0->unk395 = (u8) (arg0->unk395 & 0xFFFE);
    arg0->speedXZ = 10.0f;
    Audio_PlayActorSound2(arg0, 0x38D3U);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
    func_800BE5CC(arg0, arg0 + 0x384, 0);
    arg0->shape.rot.y = arg0->world.rot.y + 0x8000;
    arg0->unk2A8 = EnPametfrog_Damage;
}

void EnPametfrog_Damage(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    SkelAnime *temp_a0;

    temp_a0 = &self->skelAnime;
    self = self;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    self->timer += -1;
    Math_StepToF(&self->actor.speedXZ, 0.0f, 0.5f);
    if (self->timer == 0) {
        if ((s32) self->actor.colChkInfo.health > 0) {
            EnPametfrog_SetupJumpToLink(self);
            return;
        }
        EnPametfrog_SetupCutscene(self);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void EnPametfrog_SetupStun(Actor *arg0) {
    SkelAnime *temp_a0;

    if (&D_060039C4 == arg0->unk14C) {
        temp_a0 = arg0 + 0x144;
        arg0->unk15C = 0.0f;
        arg0 = arg0;
        SkelAnime_FrameUpdateMatrix(temp_a0);
    }
    arg0->unk394 = (u8) (arg0->unk394 & 0xFFFE);
    arg0->speedXZ = 0.0f;
    if (arg0->colChkInfo.health == 0) {
        arg0->unk395 = (u8) (arg0->unk395 & ~1);
    }
    arg0->unk2A8 = EnPametfrog_Stun;
}

void EnPametfrog_Stun(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    s16 temp_v0;

    self->freezeTimer += -1;
    temp_v0 = self->freezeTimer;
    if (temp_v0 == 0) {
        EnPametfrog_ChangeColliderThaw();
        EnPametfrog_SetupJumpToLink(self);
        return;
    }
    if (temp_v0 == 0x4E) {
        EnPametfrog_ChangeColliderThaw();
        self->actor.colorFilterTimer = 0;
        EnPametfrog_SetupCutscene(self);
    }
}

void EnPametfrog_SetupCallSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 temp_f4;
    s16 temp_a0;

    SkelAnime_ChangeAnimTransitionStop(&self->skelAnime, &D_06001B08, 3.0f);
    Audio_PlayActorSound2(&self->actor, 0x395CU);
    self->actor.flags &= -2;
    self->actor.colChkInfo.health = 6;
    self->actor.world.rot.y = Actor_YawToPoint(&self->actor, &self->actor.home.pos);
    temp_a0 = self->actor.world.rot.y;
    if ((s32) (s16) (self->actor.yawTowardsPlayer - temp_a0) > 0) {
        self->actor.world.rot.y = temp_a0 - 0x2000;
    } else {
        self->actor.world.rot.y = temp_a0 + 0x2000;
    }
    self->actor.shape.rot.y = self->actor.world.rot.y;
    sp28 = self->actor.world.pos.x;
    sp30 = self->actor.world.pos.z;
    sp2C = self->actor.world.pos.y + 45.0f;
    sp34 = (Math_SinS(self->actor.shape.rot.y) * 90.0f) + sp28;
    temp_f4 = (Math_CosS(self->actor.shape.rot.y) * 90.0f) + sp30;
    sp38 = sp2C + 4.0f;
    sp3C = temp_f4;
    Play_CameraSetAtEye(globalCtx, self->camId, (Vec3f *) &sp28, (Vec3f *) &sp34);
    self->timer = 0;
    self->actor.hintId = 0x5F;
    self->actionFunc = EnPametfrog_CallSnapper;
}

void EnPametfrog_CallSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    if (SkelAnime_FrameUpdateMatrix(&self->skelAnime) != 0) {
        EnPametfrog_SetupSnapperSpawn(self, globalCtx);
    }
}

void EnPametfrog_SetupSnapperSpawn(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    f32 temp_f8;
    s32 temp_a0;
    s32 phi_a0;

    EnPametfrog_PlaceSnapper(self, globalCtx);
    sp3C = self->actor.child->world.pos.x;
    sp44 = self->actor.child->world.pos.z;
    sp40 = self->actor.child->floorHeight + 50.0f;
    if ((s32) (s16) (Actor_YawToPoint(&self->actor, &self->actor.home.pos) - self->actor.shape.rot.y) > 0) {
        phi_a0 = (self->actor.child->shape.rot.y - 0x1000) << 0x10;
    } else {
        phi_a0 = (self->actor.child->shape.rot.y + 0x1000) << 0x10;
    }
    temp_a0 = phi_a0 >> 0x10;
    sp2E = (s16) temp_a0;
    temp_f8 = (Math_SinS((s16) temp_a0) * 500.0f) + sp3C;
    sp34 = sp40 + 55.0f;
    sp30 = temp_f8;
    sp38 = (Math_CosS((s16) temp_a0) * 500.0f) + sp44;
    Play_CameraSetAtEye(globalCtx, self->camId, (Vec3f *) &sp3C, (Vec3f *) &sp30);
    self->quake = Quake_Add(globalCtx->cameraPtrs[globalCtx->activeCamera], 6U);
    Quake_SetSpeed(self->quake, 0x4650);
    Quake_SetQuakeValues(self->quake, 2, 0, 0, (s16) 0);
    Quake_SetCountdown(self->quake, 0xF);
    func_8013ECE0(self->actor.xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
    self->timer = 0x28;
    self->actionFunc = EnPametfrog_SnapperSpawn;
}

void EnPametfrog_SnapperSpawn(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    s16 temp_v0;

    self->timer += -1;
    temp_v0 = self->timer;
    EnPametfrog_ShakeCamera((EnPametfrog *) globalCtx, (bitwise GlobalContext *) (((f32) temp_v0 * 7.5f) + 200.0f), ((f32) (temp_v0 * 2) * 0.9375f) + -20.0f);
    if (self->timer != 0) {
        func_8013ECE0(self->actor.xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
        return;
    }
    EnPametfrog_SetupTransitionGekkoSnapper(self, globalCtx);
}

void EnPametfrog_SetupTransitionGekkoSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    self->actor.params = 1;
    Quake_RemoveFromIdx(self->quake);
    self->quake = Quake_Add(globalCtx->cameraPtrs[globalCtx->activeCamera], 3U);
    Quake_SetSpeed(self->quake, 0x4E20);
    Quake_SetQuakeValues(self->quake, 0x11, 0, 0, (s16) 0);
    Quake_SetCountdown(self->quake, 0xC);
    func_8013ECE0(self->actor.xyzDistToPlayerSq, 0xFFU, 0x14U, 0x96U);
    self->actionFunc = EnPametfrog_TransitionGekkoSnapper;
}

void EnPametfrog_TransitionGekkoSnapper(EnPametfrog *this, GlobalContext *globalCtx) {
    EnPametfrog *self = (EnPametfrog *) this;
    if (self->actor.params == 2) {
        self = self;
        func_801A2E54(0x38);
        EnPametfrog_SetupRunToSnapper(self);
    }
}

void EnPametfrog_ApplyDamageEffect(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_5;
    void *temp_v0_4;

    temp_v0 = arg0->unk395;
    if (((temp_v0 & 2) != 0) && ((arg0->unk395 = (u8) (temp_v0 & 0xFFFD), (arg0->unk2AC != 0xA)) || ((*arg0->unk3A0->unk24 & 0xDB0B3) == 0))) {
        if (arg0->params == 0) {
            if (Actor_ApplyDamage(arg0) == 0) {
                func_801A2ED8();
            }
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            if (temp_v0_2 == 5) {
                EnPametfrog_ApplyElectricStun(arg0);
                EnPametfrog_SetupStun(arg0);
                return;
            }
            if (temp_v0_2 == 1) {
                EnPametfrog_ApplyStun(arg0);
                EnPametfrog_SetupStun(arg0);
                return;
            }
            if (temp_v0_2 == 3) {
                EnPametfrog_ChangeColliderFreeze(arg0);
                arg0->unk2BC = 0x50;
                func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
                EnPametfrog_SetupStun(arg0);
                return;
            }
            EnPametfrog_ChangeColliderThaw(arg0, arg1);
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            if (temp_v0_3 == 2) {
                arg0->unk2AC = 0U;
                arg0->unk2C8 = 0.75f;
                arg0->unk2C4 = 4.0f;
            } else if (temp_v0_3 == 4) {
                temp_v0_4 = arg0->unk3A0;
                arg0->unk2AC = 0x14U;
                arg0->unk2C8 = 0.75f;
                arg0->unk2C4 = 4.0f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) temp_v0_4->unkE, (f32) temp_v0_4->unk10, (f32) temp_v0_4->unk12, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            EnPametfrog_SetupDamage(arg0);
            return;
        }
        if (Actor_ApplyDamage(arg0) == 0) {
            arg0->unk395 = (u8) (arg0->unk395 & 0xFFFE);
            EnPametfrog_ApplyMagicArrowEffects(arg0, arg1);
            Enemy_StartFinishingBlow(arg1, arg0);
            arg0->flags &= -2;
            func_801A2ED8();
            EnPametfrog_SetupCutscene((EnPametfrog *) arg0);
            return;
        }
        temp_v0_5 = arg0->colChkInfo.damageEffect;
        if (temp_v0_5 == 5) {
            EnPametfrog_ApplyElectricStun(arg0);
            return;
        }
        if (temp_v0_5 == 1) {
            EnPametfrog_ApplyStun(arg0);
            return;
        }
        EnPametfrog_ApplyMagicArrowEffects(arg0, arg1);
        EnPametfrog_SetupFallInAir(arg0, arg1);
        // Duplicate return node #24. Try simplifying control flow for better match
    }
}

void EnPametfrog_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPametfrog *this = (EnPametfrog *) thisx;
    f32 temp_f0;
    void (*temp_v0)(EnPametfrog *, GlobalContext *);
    f32 phi_f0;

    if (this->actor.params == 5) {
        EnPametfrog_SetupCutscene(this);
    } else if (EnPametfrog_PlayCutscene != this->actionFunc) {
        EnPametfrog_ApplyDamageEffect(&this->actor, globalCtx);
    } else {
        this->collider.base.acFlags &= 0xFFFD;
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->actionFunc;
    if ((EnPametfrog_JumpOnSnapper != temp_v0) && (EnPametfrog_RearOnSnapperRise != temp_v0)) {
        if (this->actor.gravity < -0.1f) {
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
            if (EnPametfrog_FallInAir == this->actionFunc) {
                phi_f0 = 3.0f;
            } else {
                phi_f0 = 15.0f;
            }
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 25.0f, phi_f0, 3.0f, 0x1FU);
        } else if (this->freezeTimer == 0) {
            Actor_SetVelocityAndMoveXYRotation(&this->actor);
            this->actor.floorHeight = this->actor.world.pos.y;
        }
    }
    if ((this->collider.base.atFlags & 1) != 0) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }
    if ((this->collider.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }
    if ((this->collider.base.ocFlags1 & 1) != 0) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }
    if (this->unk_2C4 > 0.0f) {
        if ((this->drawEffect != 0xA) && (EnPametfrog_PlayCutscene != this->actionFunc)) {
            Math_StepToF(&this->unk_2C4, 0.0f, 0.05f);
            temp_f0 = (this->unk_2C4 + 1.0f) * 0.375f;
            this->unk_2C8 = temp_f0;
            if (temp_f0 > 0.75f) {
                this->unk_2C8 = 0.75f;
                return;
            }
            this->unk_2C8 = this->unk_2C8;
            return;
        }
        if (Math_StepToF(&this->unk_2CC, 0.75f, 0.01875f) == 0) {
            func_800B9010(&this->actor, 0x20B2U);
        }
        // Duplicate return node #28. Try simplifying control flow for better match
    }
}

void EnPametfrog_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp28;
    void *sp24;
    s8 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;

    if (arg1 == 0x14) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
        arg4->focus.rot.y = arg4->shape.rot.y;
        SysMatrix_GetStateTranslationAndScaledY(2500.0f, &sp28);
        temp_v0 = arg4->unk3A0 + 0x30;
        temp_v0->unk0 = (s16) (s32) sp28.x;
        temp_v0->unk2 = (s16) (s32) sp28.y;
        temp_v0->unk4 = (s16) (s32) sp28.z;
        temp_v0_2 = arg4->unk3A0 + 0x70;
        sp24 = temp_v0_2;
        temp_v0_2->unk0 = (s16) (s32) ((Math_SinS(arg4->shape.rot.y) * 35.0f) + arg4->focus.pos.x);
        temp_v0_2->unk2 = (s16) (s32) (arg4->focus.pos.y - 10.0f);
        temp_v0_2->unk4 = (s16) (s32) ((Math_CosS(arg4->shape.rot.y) * 35.0f) + arg4->focus.pos.z);
    }
    temp_v0_3 = *(&D_8086DA28 + arg1);
    if (temp_v0_3 != -1) {
        SysMatrix_GetStateTranslation(arg4 + (temp_v0_3 * 0xC) + 0x2F4);
    }
}

void EnPametfrog_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnPametfrog *this = (EnPametfrog *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    Matrix_RotateY(this->spinYaw, 1U);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, EnPametfrog_PostLimbDraw, &this->actor);
    func_800BE680(globalCtx, &this->actor, (Vec3f []) this->limbPos, 0xC, this->unk_2C8, this->unk_2CC, this->unk_2C4, (u8) (s32) this->drawEffect);
}

