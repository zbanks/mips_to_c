void EnFirefly_Extinguish(EnFirefly *arg0);         /* static */
void EnFirefly_Ignite(Actor *arg0);                 /* static */
s32 EnFirefly_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void EnFirefly_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5); /* static */
s32 EnFirefly_ReturnToPerch(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnFirefly_SeekTorch(Actor *arg0, GlobalContext *arg1); /* static */
void EnFirefly_SetupFall(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void EnFirefly_SetupFlyIdle(Actor *arg0);           /* static */
void EnFirefly_SetupRebound(EnFirefly *arg0);       /* static */
void EnFirefly_SetupStunned(Actor *arg0);           /* static */
void EnFirefly_SpawnIceEffects(Actor *arg0, GlobalContext *arg1); /* static */
void EnFirefly_UpdateDamage(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_0600017C;
extern ? D_06001678;
extern SkeletonHeader D_060018B8;
static s16 D_8087B498 = {0xF, 0x64};
static CollisionCheckInfoInit D_8087B49C = {1, 0xA, 0xA, 0xA};
static Color_RGBA8 D_8087B4D4 = {0xFF, 0xFF, 0x64, 0xFF};
static Color_RGBA8 D_8087B4D8 = {0xFF, 0x32, 0, 0};
static Color_RGBA8 D_8087B4DC = {0x64, 0xC8, 0xFF, 0xFF};
static Color_RGBA8 D_8087B4E0 = {0, 0, 0xFF, 0};
static Vec3f D_8087B4E4 = {0.0f, 0.5f, 0.0f};
static Vec3f D_8087B4F0 = {0.0f, 0.5f, 0.0f};
static ColliderSphereInit enFireflyCollisionInit;   /* type too large by 4; unable to generate initializer */
static DamageTable enFireflyDamageTable = {
    {
        0x10,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        1,
        0x22,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        0x10,
        0x50,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static InitChainEntry enFireflyInitVars;            /* unable to generate initializer */



void EnFirefly_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnFirefly *this = (EnFirefly *) thisx;
    Actor_ProcessInitChain(&this->actor, &enFireflyInitVars);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_Init(globalCtx, &this->skelAnime, &D_060018B8, &D_0600017C, this->jointTable, this->morphTable, 0x1C);
    Collider_InitAndSetSphere(globalCtx, &this->collider, &this->actor, &enFireflyCollisionInit);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &enFireflyDamageTable, &D_8087B49C);
    if ((this->actor.params & 0x8000) != 0) {
        this->isInvisible = 1;
        this->actor.params &= 0x7FFF;
        this->actor.flags |= 0x80;
    }
    if (this->actor.params == 0) {
        this->auraType = 1;
        this->timer = Rand_S16Offset(0x14, 0x3C);
        this->actor.shape.rot.x = 0x1554;
        this->actor.hintId = 0x11;
        this->actionFunc = EnFirefly_FlyIdle;
        this->maxAltitude = this->actor.home.pos.y;
    } else if (this->actor.params == 4) {
        this->auraType = 2;
        this->collider.info.toucher.effect = 2;
        this->actor.hintId = 0x56;
        this->maxAltitude = this->actor.home.pos.y + 100.0f;
        this->actionFunc = EnFirefly_FlyIdle;
    } else {
        this->auraType = 0;
        this->collider.info.toucher.effect = 0;
        this->actor.hintId = 0x12;
        this->maxAltitude = this->actor.home.pos.y + 100.0f;
        this->actionFunc = EnFirefly_Perch;
    }
    this->currentType = (u8) this->actor.params;
    this->collider.dim.worldSphere.radius = D_8087B498;
}

void EnFirefly_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnFirefly *this = (EnFirefly *) thisx;
    Collider_DestroySphere(globalCtx, &this->collider);
}

void EnFirefly_SpawnIceEffects(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk18F == 0xA) {
        arg0->unk18F = 0U;
        arg0->unk2E8 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2F8), 3, 2, 0.2f, 0.2f);
    }
}

void EnFirefly_Extinguish(EnFirefly *arg0) {
    arg0->currentType = 3;
    arg0->collider.info.toucher.effect = 0;
    arg0->auraType = 0;
    arg0->actor.hintId = 0x12;
}

void EnFirefly_Ignite(Actor *arg0) {
    if (arg0->params == 0) {
        arg0->unk18D = 0;
        arg0->unk338 = 1;
        arg0->unk18C = 1;
        arg0->hintId = 0x11;
    }
}

s32 EnFirefly_ReturnToPerch(Actor *arg0, GlobalContext *arg1) {
    Vec3f *temp_s1;
    f32 temp_f0;
    f32 temp_f2;
    s32 phi_v0;

    if (arg0->params != 3) {
        return 0;
    }
    temp_s1 = arg0 + 8;
    phi_v0 = 0;
    if (Actor_XZDistanceToPoint(arg1->actorCtx.actorList[2].first, temp_s1) > 300.0f) {
        temp_f0 = Actor_DistanceToPoint(arg0, temp_s1);
        if (temp_f0 < 5.0f) {
            EnFirefly_SetupPerch((EnFirefly *) arg0);
            return 1;
        }
        temp_f2 = temp_f0 * 0.05f;
        if (temp_f2 < 1.0f) {
            arg0->speedXZ *= temp_f2;
        }
        Math_ScaledStepToS(&arg0->shape.rot.y, Actor_YawToPoint(arg0, temp_s1), 0x300);
        Math_ScaledStepToS(&arg0->shape.rot.x, (s16) (Actor_PitchToPoint(arg0, temp_s1) + 0x1554), 0x100);
        phi_v0 = 1;
        // Duplicate return node #8. Try simplifying control flow for better match
        return phi_v0;
    }
    return phi_v0;
}

s32 EnFirefly_SeekTorch(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Actor *temp_s0;
    Actor *temp_s0_2;
    f32 temp_f0;
    Actor *phi_s0;
    f32 phi_f20;
    Actor *phi_s2;
    s32 phi_v0;
    Actor *phi_s2_2;

    temp_s0 = arg1->actorCtx.actorList[6].first;
    phi_s0 = temp_s0;
    phi_f20 = 35000.0f;
    phi_s2 = NULL;
    phi_s2_2 = NULL;
    if ((arg0->params != 0) || (arg0->unk18D != 3)) {
        return 0;
    }
    if (temp_s0 != 0) {
        do {
            if ((phi_s0->id == 0x39) && (phi_s0->unk1DC != 0)) {
                temp_f0 = Actor_DistanceBetweenActors(arg0, phi_s0);
                if (temp_f0 < phi_f20) {
                    phi_f20 = temp_f0;
                    phi_s2_2 = phi_s0;
                }
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            phi_s2 = phi_s2_2;
        } while (temp_s0_2 != 0);
    }
    phi_v0 = 0;
    if (phi_s2 != 0) {
        sp34 = phi_s2->world.pos.x;
        sp38 = phi_s2->world.pos.y + 52.0f + 30.0f;
        sp3C = phi_s2->world.pos.z;
        if (Actor_DistanceToPoint(arg0, (Vec3f *) &sp34) < 15.0f) {
            EnFirefly_Ignite(arg0);
            return 1;
        }
        Math_ScaledStepToS(&arg0->shape.rot.y, Actor_YawBetweenActors(arg0, phi_s2), 0x300);
        Math_ScaledStepToS(&arg0->shape.rot.x, (s16) (Actor_PitchToPoint(arg0, (Vec3f *) &sp34) + 0x1554), 0x100);
        phi_v0 = 1;
        // Duplicate return node #13. Try simplifying control flow for better match
        return phi_v0;
    }
    return phi_v0;
}

void EnFirefly_SetupFlyIdle(Actor *arg0) {
    s32 phi_v0;

    arg0->unk190 = Rand_S16Offset(0x46, 0x64);
    arg0->speedXZ = (Rand_ZeroOne() * 1.5f) + 1.5f;
    Math_ScaledStepToS(&arg0->shape.rot.y, Actor_YawToPoint(arg0, arg0 + 8), 0x300);
    phi_v0 = -0xC00;
    if (arg0->unk2E4 < arg0->world.pos.y) {
        phi_v0 = 0xC00;
    }
    arg0->unk192 = (s16) (phi_v0 + 0x1554);
    arg0->unk160 = 1.0f;
    arg0->unk188 = EnFirefly_FlyIdle;
}

void EnFirefly_FlyIdle(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    s32 sp3C;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v1;
    u16 temp_v0;

    temp_a0 = &self->skelAnime;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = self->timer;
    if (temp_v1 != 0) {
        self->timer = temp_v1 - 1;
    }
    sp3C = func_801378B8(temp_a0, 0.0f);
    self->actor.speedXZ = (Rand_ZeroOne() * 1.5f) + 1.5f;
    if ((EnFirefly_ReturnToPerch(&self->actor, globalCtx) == 0) && (EnFirefly_SeekTorch(&self->actor, globalCtx) == 0)) {
        if (sp3C != 0) {
            temp_f0 = Rand_ZeroOne();
            if (temp_f0 < 0.5f) {
                Math_ScaledStepToS(&self->actor.shape.rot.y, Actor_YawToPoint(&self->actor, &self->actor.home.pos), 0x300);
            } else if (temp_f0 < 0.8f) {
                self->actor.shape.rot.y += (s32) randPlusMinusPoint5Scaled(1536.0f);
            }
            temp_f0_2 = self->actor.world.pos.y;
            if (temp_f0_2 < (self->actor.floorHeight + 20.0f)) {
                self->targetPitch = 0x954;
            } else if (self->maxAltitude < temp_f0_2) {
                self->targetPitch = 0x2154;
            } else if (Rand_ZeroOne() > 0.35f) {
                self->targetPitch = 0x954;
            } else {
                self->targetPitch = 0x2154;
            }
        } else {
            temp_v0 = self->actor.bgCheckFlags;
            if ((temp_v0 & 1) != 0) {
                self->targetPitch = 0x954;
            } else if (((temp_v0 & 0x10) != 0) || (self->maxAltitude < self->actor.world.pos.y)) {
                self->targetPitch = 0x2154;
            }
        }
        Math_ScaledStepToS(&self->actor.shape.rot.x, self->targetPitch, 0x100);
    }
    if ((self->actor.bgCheckFlags & 8) != 0) {
        Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.wallYaw, 2, 0xC00, (s16) 0x300);
    }
    if ((self->timer == 0) && (self->actor.xzDistToPlayer < 200.0f) && (Player_GetMask(globalCtx) != 0x10)) {
        EnFirefly_SetupDiveAttack(self);
    }
}

void EnFirefly_SetupFall(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    arg0->unk190 = 0x28;
    arg0->velocity.y = 0.0f;
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600017C, 0.0f, 6.0f, 6.0f, (u8) 2, 0.0f);
    Audio_PlayActorSound2(arg0, 0x3842U);
    arg0->flags |= 0x10;
    if (arg0->unk18E != 0) {
        func_800BCB70(arg0, 0x4000, 0xFF, 0x2000, (s16) 0x28);
    } else {
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    }
    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 3) {
        arg0->unk18F = 0xA;
        arg0->unk2E8 = 1.0f;
        arg0->unk2EC = 0.55f;
        arg0->unk2F0 = 0.82500005f;
    } else if (temp_v0 == 4) {
        arg0->unk18F = 0x14;
        arg0->unk2E8 = 4.0f;
        arg0->unk2EC = 0.55f;
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) arg0->unk342, (f32) arg0->unk344, (f32) arg0->unk346, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
    } else if (temp_v0 == 2) {
        arg0->unk18F = 0;
        arg0->unk2E8 = 4.0f;
        arg0->unk2EC = 0.55f;
    }
    if (arg0->unk2E8 > 0.0f) {
        arg0->unk18C = 0;
    }
    if ((arg0->flags & 0x8000) != 0) {
        arg0->speedXZ = 0.0f;
    }
    arg0->unk188 = EnFirefly_Fall;
}

void EnFirefly_Fall(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    self->actor.colorFilterTimer = 0x28;
    Math_StepToF(&self->actor.speedXZ, 0.0f, 0.5f);
    if ((self->actor.flags & 0x8000) == 0) {
        if (self->unk_18F != 0xA) {
            Math_ScaledStepToS(&self->actor.shape.rot.x, 0x6800, 0x200);
            self->actor.shape.rot.y += -0x300;
        }
        if (((self->actor.bgCheckFlags & 1) != 0) || (self->actor.floorHeight == -32000.0f)) {
            EnFirefly_SpawnIceEffects(&self->actor, globalCtx);
            EnFirefly_SetupDie(self);
        }
    }
}

void EnFirefly_SetupDie(EnFirefly *this) {
    EnFirefly *self = (EnFirefly *) this;
    self->timer = 0xF;
    self->actionFunc = EnFirefly_Die;
    self->actor.speedXZ = 0.0f;
}

void EnFirefly_Die(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    f32 temp_f0;
    s16 temp_v0;

    temp_v0 = self->timer;
    if (temp_v0 != 0) {
        self->timer = temp_v0 - 1;
    }
    Math_StepToF(&self->actor.scale.x, 0.0f, 0.00034f);
    temp_f0 = self->actor.scale.x;
    self->actor.scale.z = temp_f0;
    self->actor.scale.y = temp_f0;
    if (self->timer == 0) {
        Item_DropCollectibleRandom(globalCtx, &self->actor, &self->actor.world.pos, 0xA0);
        Actor_MarkForDeath(&self->actor);
    }
}

void EnFirefly_SetupDiveAttack(EnFirefly *this) {
    EnFirefly *self = (EnFirefly *) this;
    s32 phi_v0;

    self = self;
    self->timer = Rand_S16Offset(0x46, 0x64);
    self->skelAnime.animPlaybackSpeed = 1.0f;
    phi_v0 = 0xC00;
    if (self->actor.yDistToPlayer > 0.0f) {
        phi_v0 = -0xC00;
    }
    self->targetPitch = phi_v0 + 0x1554;
    self->actionFunc = EnFirefly_DiveAttack;
}

void EnFirefly_DiveAttack(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    Actor *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    f32 *temp_a1;
    s16 temp_v1;

    temp_a0 = &self->skelAnime;
    sp30 = temp_a0;
    sp44 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = self->timer;
    if (temp_v1 != 0) {
        self->timer = temp_v1 - 1;
    }
    Math_StepToF(&self->actor.speedXZ, 4.0f, 0.5f);
    if ((self->actor.bgCheckFlags & 8) != 0) {
        Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.wallYaw, 2, 0xC00, (s16) 0x300);
        Math_ScaledStepToS(&self->actor.shape.rot.x, self->targetPitch, 0x100);
    } else if (Actor_IsActorFacingLink(&self->actor, 0x2800) != 0) {
        if (func_801378B8(sp30, 4.0f) != 0) {
            self->skelAnime.animPlaybackSpeed = 0.0f;
            self->skelAnime.animCurrentFrame = 4.0f;
        }
        Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 2, 0xC00, (s16) 0x300);
        temp_a1 = &sp38;
        sp38 = sp44->world.pos.x;
        sp3C = sp44->world.pos.y + 20.0f;
        sp40 = sp44->world.pos.z;
        Math_SmoothStepToS(&self->actor.shape.rot.x, (s16) (Actor_PitchToPoint(&self->actor, (Vec3f *) temp_a1) + 0x1554), 2, 0x400, (s16) 0x100);
    } else {
        self->skelAnime.animPlaybackSpeed = 1.5f;
        if (self->actor.xzDistToPlayer > 80.0f) {
            Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 2, 0xC00, (s16) 0x300);
        }
        if ((self->actor.bgCheckFlags & 1) != 0) {
            self->targetPitch = 0x954;
        }
        if (((self->actor.bgCheckFlags & 0x10) != 0) || (self->maxAltitude < self->actor.world.pos.y)) {
            self->targetPitch = 0x2154;
        } else {
            self->targetPitch = 0x954;
        }
        Math_ScaledStepToS(&self->actor.shape.rot.x, self->targetPitch, 0x100);
    }
    if ((self->timer == 0) || (Player_GetMask(globalCtx) == 0x10) || ((sp44->unkA70 & 0x80) != 0) || ((s32) sp44->freezeTimer > 0)) {
        EnFirefly_SetupFlyAway(self);
    }
}

void EnFirefly_SetupRebound(EnFirefly *arg0) {
    arg0->actor.world.rot.x = 0x7000;
    arg0->timer = 0x12;
    arg0->actionFunc = EnFirefly_Rebound;
    arg0->skelAnime.animPlaybackSpeed = 1.0f;
    arg0->actor.speedXZ = 2.5f;
}

void EnFirefly_Rebound(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&self->skelAnime);
    Math_ScaledStepToS(&self->actor.shape.rot.x, 0, 0x100);
    Math_StepToF(&self->actor.velocity.y, 0.0f, 0.4f);
    if (Math_StepToF(&self->actor.speedXZ, 0.0f, 0.15f) != 0) {
        temp_v0 = self->timer;
        if (temp_v0 != 0) {
            self->timer = temp_v0 - 1;
        }
        if (self->timer == 0) {
            EnFirefly_SetupFlyAway(self);
        }
    }
}

void EnFirefly_SetupFlyAway(EnFirefly *this) {
    EnFirefly *self = (EnFirefly *) this;
    self->timer = 0x96;
    self->targetPitch = 0x954;
    self->actionFunc = EnFirefly_FlyAway;
    self->skelAnime.animPlaybackSpeed = 1.0f;
}

void EnFirefly_FlyAway(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    s16 temp_v1;
    u16 temp_v1_2;

    SkelAnime_FrameUpdateMatrix(&self->skelAnime);
    temp_v1 = self->timer;
    if (temp_v1 != 0) {
        self->timer = temp_v1 - 1;
    }
    if (((fabsf(self->actor.world.pos.y - self->maxAltitude) < 10.0f) && (Math_Vec3f_DistXZ(&self->actor.world.pos, &self->actor.home.pos) < 20.0f)) || (self->timer == 0)) {
        EnFirefly_SetupFlyIdle(&self->actor);
        return;
    }
    Math_StepToF(&self->actor.speedXZ, 3.0f, 0.3f);
    temp_v1_2 = self->actor.bgCheckFlags;
    if ((temp_v1_2 & 1) != 0) {
        self->targetPitch = 0x954;
    } else if (((temp_v1_2 & 0x10) != 0) || (self->maxAltitude < self->actor.world.pos.y)) {
        self->targetPitch = 0x2154;
    } else {
        self->targetPitch = 0x954;
    }
    if ((self->actor.bgCheckFlags & 8) != 0) {
        Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.wallYaw, 2, 0xC00, (s16) 0x300);
    } else {
        Math_ScaledStepToS(&self->actor.shape.rot.y, Actor_YawToPoint(&self->actor, &self->actor.home.pos), 0x300);
    }
    Math_ScaledStepToS(&self->actor.shape.rot.x, self->targetPitch, 0x100);
}

void EnFirefly_SetupStunned(Actor *arg0) {
    void (*sp2C)(EnFirefly *, GlobalContext *);

    if (arg0->unk18E != 0) {
        func_800BCB70(arg0, 0, 0xFF, 0x2000, (s16) (s32) arg0->unk190);
    } else {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) (s32) arg0->unk190);
    }
    if (EnFirefly_Stunned != arg0->unk188) {
        arg0->velocity.y = 0.0f;
        arg0->speedXZ = 0.0f;
    }
    arg0->unk18C = 0;
    sp2C = EnFirefly_Stunned;
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk188 = EnFirefly_Stunned;
}

void EnFirefly_Stunned(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    ActorShape *temp_a0;
    s16 temp_v0;
    u8 temp_v0_2;

    temp_a0 = &self->actor.shape;
    self = self;
    Math_ScaledStepToS(&temp_a0->rot.x, 0x1554, 0x100);
    if (((self->actor.bgCheckFlags & 1) != 0) || (self->actor.floorHeight == -32000.0f)) {
        temp_v0 = self->timer;
        if (temp_v0 != 0) {
            self->timer = temp_v0 - 1;
        }
        if (self->timer == 0) {
            temp_v0_2 = self->currentType;
            if (temp_v0_2 == 0) {
                self->auraType = 1;
            } else if (temp_v0_2 == 4) {
                self->auraType = 2;
            }
            EnFirefly_SetupFlyIdle(&self->actor);
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    self->actor.colorFilterTimer = 0x28;
    if (self->unk_2E8.x > 0.0f) {
        self->unk_2E8.x = 2.0f;
    }
}

void EnFirefly_SetupPerch(EnFirefly *this) {
    EnFirefly *self = (EnFirefly *) this;
    self->timer = 1;
    self->actionFunc = EnFirefly_Perch;
    self->actor.speedXZ = 0.0f;
}

void EnFirefly_Perch(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    Math_ScaledStepToS(&self->actor.shape.rot.x, 0, 0x100);
    temp_a0 = &self->skelAnime;
    if (self->timer != 0) {
        sp24 = temp_a0;
        SkelAnime_FrameUpdateMatrix(temp_a0);
        if (func_801378B8(temp_a0, 6.0f) != 0) {
            self->timer += -1;
        }
    } else if (Rand_ZeroOne() < 0.02f) {
        self->timer = 1;
    }
    if (self->actor.xzDistToPlayer < 120.0f) {
        EnFirefly_SetupDisturbDiveAttack(self);
    }
}

void EnFirefly_SetupDisturbDiveAttack(EnFirefly *this) {
    EnFirefly *self = (EnFirefly *) this;
    self->skelAnime.animPlaybackSpeed = 3.0f;
    self->actor.shape.rot.x = 0x1554;
    self->timer = 0x32;
    self->actor.speedXZ = 3.0f;
    self->actionFunc = EnFirefly_DisturbDiveAttack;
    self->actor.shape.rot.y = self->actor.yawTowardsPlayer;
}

void EnFirefly_DisturbDiveAttack(EnFirefly *this, GlobalContext *globalCtx) {
    EnFirefly *self = (EnFirefly *) this;
    Actor *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Actor *temp_a2;
    s16 temp_v1;

    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    sp34 = temp_a2;
    SkelAnime_FrameUpdateMatrix(&self->skelAnime);
    temp_v1 = self->timer;
    if (temp_v1 != 0) {
        self->timer = temp_v1 - 1;
    }
    if ((s32) self->timer < 0x28) {
        Math_ScaledStepToS(&self->actor.shape.rot.x, -0xAAC, 0x100);
    } else {
        sp28 = temp_a2->world.pos.x;
        sp2C = temp_a2->world.pos.y + 20.0f;
        sp30 = temp_a2->world.pos.z;
        Math_ScaledStepToS(&self->actor.shape.rot.x, (s16) (Actor_PitchToPoint(&self->actor, (Vec3f *) &sp28) + 0x1554), 0x100);
        Math_ScaledStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 0x300);
    }
    if (self->timer == 0) {
        EnFirefly_SetupFlyIdle(&self->actor);
    }
}

void EnFirefly_UpdateDamage(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_a1;

    temp_v0 = arg0->unk32D;
    temp_a0 = arg0;
    temp_a1 = arg0 + 0x334;
    if ((temp_v0 & 2) != 0) {
        arg0->unk32D = (u8) (temp_v0 & 0xFFFD);
        arg0 = arg0;
        func_800BE258(temp_a0, temp_a1);
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 == 1) {
            arg0->unk190 = 0x28;
            EnFirefly_SetupStunned(arg0);
            return;
        }
        if (temp_v0_2 == 5) {
            arg0->unk190 = 0x28;
            arg0->unk18F = 0x1F;
            arg0->unk2E8 = 2.0f;
            arg0->unk2EC = 0.55f;
            EnFirefly_SetupStunned(arg0);
            return;
        }
        temp_a1_2 = arg0;
        arg0 = arg0;
        Enemy_StartFinishingBlow(arg1, temp_a1_2);
        temp_v0_3 = arg0->unk18D;
        arg0->colChkInfo.health = 0;
        arg0->flags &= -2;
        if (((temp_v0_3 == 0) && (arg0->colChkInfo.damageEffect == 2)) || ((temp_v0_3 == 4) && (arg0->colChkInfo.damageEffect == 3))) {
            arg0->colChkInfo.damageEffect = 0;
        }
        EnFirefly_SetupFall(arg0, arg1, arg0);
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void EnFirefly_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnFirefly *this = (EnFirefly *) thisx;
    f32 sp34;
    CollisionCheckContext *sp30;
    ColliderSphere *sp2C;
    ColliderSphere *temp_t9;
    CollisionCheckContext *temp_t0;
    f32 temp_f0;
    u8 temp_v0;
    void (*temp_v0_2)(EnFirefly *, GlobalContext *);
    void (*temp_v0_3)(EnFirefly *, GlobalContext *);

    temp_v0 = this->collider.base.atFlags;
    if ((temp_v0 & 2) != 0) {
        this->collider.base.atFlags = temp_v0 & 0xFFFD;
        Audio_PlayActorSound2(&this->actor, 0x3840U);
        if (this->currentType != 3) {
            EnFirefly_Extinguish(this);
        }
        if (EnFirefly_DisturbDiveAttack != this->actionFunc) {
            EnFirefly_SetupRebound(this);
        }
    }
    EnFirefly_UpdateDamage(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    if ((this->actor.flags & 0x8000) == 0) {
        if ((this->actor.colChkInfo.health == 0) || (temp_v0_2 = this->actionFunc, (EnFirefly_Stunned == temp_v0_2))) {
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        } else {
            if (EnFirefly_Rebound != temp_v0_2) {
                this->actor.world.rot.x = 0x1554 - this->actor.shape.rot.x;
            }
            Actor_SetVelocityAndMoveXYRotation(&this->actor);
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 10.0f, 10.0f, 15.0f, 7U);
    temp_v0_3 = this->actionFunc;
    this->collider.dim.worldSphere.center.y = (s32) this->actor.world.pos.y + 0xA;
    this->collider.dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
    this->collider.dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
    if ((EnFirefly_DiveAttack == temp_v0_3) || (EnFirefly_DisturbDiveAttack == temp_v0_3)) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }
    temp_t9 = &this->collider;
    temp_t0 = &globalCtx->colChkCtx;
    sp30 = temp_t0;
    sp2C = temp_t9;
    if (this->actor.colChkInfo.health != 0) {
        CollisionCheck_SetAC(globalCtx, temp_t0, &temp_t9->base);
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (func_801378B8(&this->skelAnime, 5.0f) != 0) {
            Audio_PlayActorSound2(&this->actor, 0x3841U);
        }
    }
    CollisionCheck_SetOC(globalCtx, sp30, &sp2C->base);
    if (this->unk_2E8.x > 0.0f) {
        if (this->unk_18F != 0xA) {
            Math_StepToF(&this->unk_2E8.x, 0.0f, 0.05f);
            temp_f0 = (this->unk_2E8.x + 1.0f) * 0.275f;
            this->unk_2E8.y = temp_f0;
            if (temp_f0 > 0.55f) {
                this->unk_2E8.y = 0.55f;
            } else {
                this->unk_2E8.y = this->unk_2E8.y;
            }
        } else if (Math_StepToF(&this->unk_2E8.z, 0.55f, 0.01375f) == 0) {
            func_800B9010(&this->actor, 0x20B2U);
        }
    }
    sp34 = Math_SinS(this->actor.shape.rot.x);
    this->actor.focus.pos.x = (Math_SinS(this->actor.shape.rot.y) * (10.0f * sp34)) + this->actor.world.pos.x;
    this->actor.focus.pos.y = (Math_CosS(this->actor.shape.rot.x) * 10.0f) + this->actor.world.pos.y;
    sp34 = Math_SinS(this->actor.shape.rot.x);
    this->actor.focus.pos.z = (Math_CosS(this->actor.shape.rot.y) * (10.0f * sp34)) + this->actor.world.pos.z;
}

s32 EnFirefly_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((arg5->unk18E != 0) && (arg0->actorCtx.unk4 != 0x64)) {
        *arg2 = NULL;
        return 0;
    }
    if (arg1 == 1) {
        arg3->y += 2300.0f;
    }
    return 0;
}

void EnFirefly_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5) {
    Vec3f sp5C;
    Gfx *temp_v1;
    u8 temp_v0;
    Color_RGBA8 *phi_v0;
    Color_RGBA8 *phi_v1;
    s32 phi_t0;
    s32 phi_t1;

    if ((arg4->unk18D != 0) && (arg1 == 0x1B)) {
        temp_v1 = *arg5;
        *arg5 = temp_v1 + 8;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = &D_06001678;
    } else if ((arg0->gameplayFrames != arg4->unk2F4) && ((temp_v0 = arg4->unk18C, (temp_v0 == 1)) || (temp_v0 == 2)) && ((arg1 == 0xF) || (arg1 == 0x15))) {
        if (EnFirefly_Die != arg4->unk188) {
            SysMatrix_GetStateTranslation(&sp5C);
            sp5C.x += Rand_ZeroFloat(5.0f);
            sp5C.y += Rand_ZeroFloat(5.0f);
            sp5C.z += Rand_ZeroFloat(5.0f);
            phi_t0 = -0x28;
            phi_t1 = 3;
        } else {
            if (arg1 == 0xF) {
                sp5C.x = (Math_SinS((s16) (arg4->unk190 * 0x238C)) * (f32) arg4->unk190) + arg4->world.pos.x;
                sp5C.z = (Math_CosS((s16) (arg4->unk190 * 0x238C)) * (f32) arg4->unk190) + arg4->world.pos.z;
            } else {
                sp5C.x = arg4->world.pos.x - (Math_SinS((s16) (arg4->unk190 * 0x238C)) * (f32) arg4->unk190);
                sp5C.z = arg4->world.pos.z - (Math_CosS((s16) (arg4->unk190 * 0x238C)) * (f32) arg4->unk190);
            }
            sp5C.y = arg4->world.pos.y + ((f32) (0xF - arg4->unk190) * 1.5f);
            phi_t0 = -5;
            phi_t1 = 0xA;
        }
        if (arg4->unk18C == 1) {
            phi_v0 = &D_8087B4D4;
            phi_v1 = &D_8087B4D8;
        } else {
            phi_v0 = &D_8087B4DC;
            phi_v1 = &D_8087B4E0;
        }
        func_800B0F80(arg0, &sp5C, &D_8087B4E4, &D_8087B4F0, phi_v0, phi_v1, (s16) 0xFA, (s16) phi_t0, (s16) phi_t1);
    }
    if (arg1 == 0xF) {
        SysMatrix_GetStateTranslation(arg4 + 0x2F8);
        return;
    }
    if (arg1 == 0x15) {
        SysMatrix_GetStateTranslation(arg4 + 0x304);
        return;
    }
    if (arg1 == 0xA) {
        SysMatrix_GetStateTranslation(arg4 + 0x310);
    }
}

void EnFirefly_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnFirefly *this = (EnFirefly *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_v1;
    Gfx *phi_v0;

    temp_v1 = globalCtx->state.gfxCtx;
    if (this->isInvisible != 0) {
        phi_v0 = temp_v1->polyXlu.p;
    } else {
        phi_v0 = temp_v1->polyOpa.p;
    }
    phi_v0->words.w1 = sSetupDL + 0x4B0;
    phi_v0->words.w0 = 0xDE000000;
    if (this->currentType == 0) {
        phi_v0->unk8 = 0xFB000000;
        phi_v0->unkC = 0;
    } else {
        phi_v0->unkC = 0xFF;
        phi_v0->unk8 = 0xFB000000;
    }
    sp30 = temp_v1;
    temp_v0 = SkelAnime_Draw2(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, EnFirefly_OverrideLimbDraw, EnFirefly_PostLimbDraw, &this->actor, phi_v0 + 0x10);
    if (this->isInvisible != 0) {
        temp_v1->polyXlu.p = temp_v0;
    } else {
        temp_v1->polyOpa.p = temp_v0;
    }
    func_800BE680(globalCtx, NULL, (Vec3f []) &this->unk_2F8, 3, this->unk_2E8.y * this->actor.scale.y * 200.0f, this->unk_2E8.z, this->unk_2E8.x, (u8) (s32) this->unk_18F);
    this->unk_2F4 = globalCtx->gameplayFrames;
}

