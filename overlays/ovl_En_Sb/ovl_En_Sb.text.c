void EnSb_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnSb_SetupBounce(EnSb *arg0);                  /* static */
void EnSb_SetupIdle(Actor *arg0, s32 arg1);         /* static */
void EnSb_SetupLunge(Actor *arg0);                  /* static */
void EnSb_SetupOpen(Actor *arg0);                   /* static */
void EnSb_SetupWaitOpen(EnSb *arg0);                /* static */
void EnSb_SpawnBubbles(GlobalContext *arg0, EnSb *arg1); /* static */
void EnSb_UpdateDamage(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeaderCommon D_0600004C;
extern AnimationHeaderCommon D_060000B4;
extern AnimationHeaderCommon D_06000124;
extern AnimationHeader D_06000194;
extern FlexSkeletonHeader D_06002BF0;
extern AnimationHeaderCommon D_06002C8C;
static ColliderCylinderInitType1 D_808E4E10 = {
    {0xA, 0x11, 9, 0x39, 1},
    {0, {0xF7CFFFFF, 4, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static DamageTable D_808E4E3C = {
    {
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0xF1,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static InitChainEntry D_808E4E5C;                   /* unable to generate initializer */
static ? D_808E4E68;                                /* unable to generate initializer */



void EnSb_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSb *this = (EnSb *) thisx;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;

    Actor_ProcessInitChain(&this->actor, &D_808E4E5C);
    this->actor.colChkInfo.damageTable = &D_808E4E3C;
    this->actor.colChkInfo.mass = 0xA;
    this->actor.colChkInfo.health = 2;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06002BF0, &D_06000194, this->limbDrawTable, this->transitionDrawTable, 9);
    temp_a1 = &this->collider;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinderType1(globalCtx, temp_a1, &this->actor, &D_808E4E10);
    this->isDead = 0;
    this->actor.colChkInfo.mass = 0x5A;
    this->actor.shape.rot.y = 0;
    this->actor.speedXZ = 0.0f;
    this->fireCount = 0;
    this->unk_252 = 0;
    this->actor.gravity = -0.35f;
    this->actor.velocity.y = -1.0f;
    Actor_SetScale(&this->actor, 0.006f);
    EnSb_SetupWaitClosed(this);
}

void EnSb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSb *this = (EnSb *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnSb_SpawnBubbles(GlobalContext *arg0, EnSb *arg1) {
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    if (arg1->actor.yDistToWater > 0.0f) {
        do {
            EffectSsBubble_Spawn(arg0, arg1 + 0x24, 10.0f, 10.0f, 30.0f, 0.25f);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0xA);
    }
}

void EnSb_SetupWaitClosed(EnSb *this) {
    EnSb *self = (EnSb *) this;
    SkelAnime_ChangeAnim(&self->skelAnime, (AnimationHeader *) &D_0600004C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600004C), (u8) 2, 0.0f);
    self->state = 1;
    self->actionFunc = EnSb_Idle;
}

void EnSb_SetupOpen(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000194, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06000194.common), (u8) 2, 0.0f);
    arg0->unk246 = 0;
    arg0->unk1F4 = EnSb_Open;
    Audio_PlayActorSound2(arg0, 0x3849U);
}

void EnSb_SetupWaitOpen(EnSb *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002C8C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002C8C), (u8) 0, 0.0f);
    arg0->state = 2;
    arg0->actionFunc = EnSb_WaitOpen;
}

void EnSb_SetupLunge(Actor *arg0) {
    f32 phi_f0;

    if (arg0->yDistToWater > 0.0f) {
        phi_f0 = 1.0f;
    } else {
        phi_f0 = 0.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06000124, phi_f0, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06000124), (u8) 2, 0.0f);
    arg0->unk246 = 3;
    arg0->unk1F4 = EnSb_Lunge;
    Audio_PlayActorSound2(arg0, 0x3849U);
}

void EnSb_SetupBounce(EnSb *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060000B4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060000B4), (u8) 2, 0.0f);
    arg0->state = 4;
    arg0->actionFunc = EnSb_Bounce;
}

void EnSb_SetupIdle(Actor *arg0, s32 arg1) {
    if (arg0->unk246 != 1) {
        SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_0600004C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600004C), (u8) 2, 0.0f);
    }
    arg0->unk246 = 1;
    if (arg1 != 0) {
        if (arg0->yDistToWater > 0.0f) {
            arg0->speedXZ = -5.0f;
            if (arg0->velocity.y < 0.0f) {
                arg0->velocity.y = 2.1f;
            }
        } else {
            arg0->speedXZ = -6.0f;
            if (arg0->velocity.y < 0.0f) {
                arg0->velocity.y = 1.4f;
            }
        }
    }
    arg0->unk24A = 0x3C;
    arg0->unk1F4 = EnSb_ReturnToIdle;
}

void EnSb_Idle(EnSb *this, GlobalContext *globalCtx) {
    EnSb *self = (EnSb *) this;
    f32 temp_f0;

    Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 0xA, 0x7D0, (s16) 0);
    temp_f0 = self->actor.xzDistToPlayer;
    if ((temp_f0 <= 240.0f) && (temp_f0 > 0.0f)) {
        EnSb_SetupOpen(&self->actor);
    }
}

void EnSb_Open(EnSb *this, GlobalContext *globalCtx) {
    EnSb *self = (EnSb *) this;
    f32 sp2C;
    f32 temp_f0;

    sp2C = self->skelAnime.animCurrentFrame;
    if ((f32) SkelAnime_GetFrameCount(&D_06000194.common) <= sp2C) {
        self->vulnerableTimer = 0x14;
        EnSb_SetupWaitOpen(self);
        return;
    }
    Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 0xA, 0x7D0, (s16) 0);
    temp_f0 = self->actor.xzDistToPlayer;
    if ((temp_f0 > 240.0f) || (temp_f0 <= 40.0f)) {
        self->vulnerableTimer = 0;
        EnSb_SetupWaitClosed(self);
    }
}

void EnSb_WaitOpen(EnSb *this, GlobalContext *globalCtx) {
    EnSb *self = (EnSb *) this;
    f32 temp_f0;
    s16 temp_v0;

    Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 0xA, 0x7D0, (s16) 0);
    temp_f0 = self->actor.xzDistToPlayer;
    if ((temp_f0 > 240.0f) || (temp_f0 <= 40.0f)) {
        self->vulnerableTimer = 0;
        EnSb_SetupWaitClosed(self);
    }
    temp_v0 = self->vulnerableTimer;
    if ((s32) temp_v0 > 0) {
        self->vulnerableTimer = temp_v0 - 1;
        return;
    }
    self->vulnerableTimer = 0;
    self->attackTimer = 0;
    self->actionFunc = EnSb_TurnAround;
    self->yawAngle = self->actor.yawTowardsPlayer;
}

void EnSb_TurnAround(EnSb *this, GlobalContext *globalCtx) {
    EnSb *self = (EnSb *) this;
    s16 sp2E;
    s16 temp_a1;

    temp_a1 = self->yawAngle + 0x8000;
    sp2E = temp_a1;
    Math_SmoothStepToS(&self->actor.shape.rot.y, temp_a1, 1, 0x1F40, (s16) 0xA);
    if (temp_a1 == self->actor.shape.rot.y) {
        self->actor.world.rot.y = self->yawAngle;
        if (self->actor.yDistToWater > 0.0f) {
            self->actor.velocity.y = 3.0f;
            self->actor.speedXZ = 5.0f;
            self->actor.gravity = -0.35f;
        } else {
            self->actor.velocity.y = 2.0f;
            self->actor.speedXZ = 6.0f;
            self->actor.gravity = -2.0f;
        }
        EnSb_SpawnBubbles(globalCtx, self);
        self->bounceCounter = 3;
        EnSb_SetupLunge(&self->actor);
    }
}

void EnSb_Lunge(EnSb *this, GlobalContext *globalCtx) {
    EnSb *self = (EnSb *) this;
    EnSb *temp_a0_2;
    f32 *temp_a0;

    temp_a0 = &self->actor.speedXZ;
    self = self;
    Math_StepToF(temp_a0, 0.0f, 0.2f);
    if ((self->actor.velocity.y <= -0.1f) || ((self->actor.bgCheckFlags & 2) != 0)) {
        temp_a0_2 = self;
        if (!(self->actor.yDistToWater > 0.0f)) {
            self = self;
            Audio_PlayActorSound2(&temp_a0_2->actor, 0x387BU);
        }
        self->actor.bgCheckFlags &= 0xFFFD;
        EnSb_SetupBounce(self);
    }
}

void EnSb_Bounce(EnSb *this, GlobalContext *globalCtx) {
    EnSb *self = (EnSb *) this;
    f32 sp28;
    f32 sp24;
    s16 temp_v0;
    u16 temp_v0_2;

    sp28 = self->skelAnime.animCurrentFrame;
    sp24 = (f32) SkelAnime_GetFrameCount(&D_060000B4);
    Math_StepToF(&self->actor.speedXZ, 0.0f, 0.2f);
    if (sp28 == sp24) {
        temp_v0 = self->bounceCounter;
        if (temp_v0 != 0) {
            self->bounceCounter = temp_v0 - 1;
            self->attackTimer = 1;
            if (self->actor.yDistToWater > 0.0f) {
                self->actor.velocity.y = 3.0f;
                self->actor.speedXZ = 5.0f;
                self->actor.gravity = -0.35f;
            } else {
                self->actor.velocity.y = 2.0f;
                self->actor.speedXZ = 6.0f;
                self->actor.gravity = -2.0f;
            }
            EnSb_SpawnBubbles(globalCtx, self);
            EnSb_SetupLunge(&self->actor);
            return;
        }
        temp_v0_2 = self->actor.bgCheckFlags;
        if ((temp_v0_2 & 1) != 0) {
            self->actor.bgCheckFlags = temp_v0_2 & 0xFFFD;
            self->actor.speedXZ = 0.0f;
            self->attackTimer = 1;
            EnSb_SetupWaitClosed(self);
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnSb_ReturnToIdle(EnSb *this, GlobalContext *globalCtx) {
    EnSb *self = (EnSb *) this;
    s16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;

    temp_v0 = self->attackTimer;
    if (temp_v0 != 0) {
        temp_v1 = self->actor.bgCheckFlags;
        self->attackTimer = temp_v0 - 1;
        if ((temp_v1 & 1) != 0) {
            self->actor.bgCheckFlags = temp_v1 & 0xFFFE;
            self->actor.speedXZ = 0.0f;
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    temp_v1_2 = self->actor.bgCheckFlags;
    if ((temp_v1_2 & 1) != 0) {
        self->actor.bgCheckFlags = temp_v1_2 & 0xFFFE;
        self->actionFunc = EnSb_Idle;
        self->actor.speedXZ = 0.0f;
    }
}

void EnSb_UpdateDamage(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 *temp_a1;
    u8 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk209;
    phi_v1 = 0;
    if ((temp_v0 & 2) != 0) {
        arg0->unk209 = (u8) (temp_v0 & 0xFFFD);
        if ((arg0->colChkInfo.damageEffect == 0xF) && (arg0->unk24C != 0)) {
            Actor_ApplyDamage(arg0);
            func_800BCB70(arg0, 0x4000, 0xFF, 0x2000, (s16) 0x50);
            phi_v1 = 1;
        }
        if (phi_v1 != 0) {
            arg0->unk252 = 0;
            if ((arg0->draw != 0) && (arg0->unk253 == 0)) {
                arg0->unk253 = 1U;
            }
            arg0->unk248 = 1;
            Enemy_StartFinishingBlow(arg1, arg0);
            Audio_PlaySoundAtPosition(arg1, &arg0->world.pos, 0x28, 0x384AU);
            return;
        }
        temp_a1 = &sp34;
        sp34 = (f32) arg0->unk21E;
        sp38 = (f32) arg0->unk220;
        sp3C = (f32) arg0->unk222;
        CollisionCheck_SpawnShieldParticlesMetal2(arg1, (Vec3f *) temp_a1);
        return;
    }
    if ((arg0->unk208 & 2) != 0) {
        EnSb_SetupIdle(arg0, 1);
    }
}

void EnSb_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSb *this = (EnSb *) thisx;
    Actor *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if (this->isDead != 0) {
        if (this->actor.yDistToWater > 0.0f) {
            this->actor.params = 4;
        } else {
            this->actor.params = 1;
        }
        Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0x80);
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Actor_SetHeight(&this->actor, 20.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 25.0f, 20.0f, 5U);
    EnSb_UpdateDamage(&this->actor, globalCtx);
    temp_a1 = &this->collider;
    if ((sp2C->unkA6C * 0x10) < 0) {
        sp28 = temp_a1;
        Collider_UpdateCylinder(&this->actor, temp_a1);
        if (this->vulnerableTimer == 0) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &sp28->base);
        }
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &sp28->base);
    }
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void EnSb_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s16 phi_a2;

    if (arg4->unk253 != 0) {
        if (arg1 < 7) {
            phi_a2 = 1;
            if (arg4->yDistToWater > 0.0f) {
                phi_a2 = 4;
            }
            func_800BBCEC(arg4, arg0, phi_a2, arg2);
        }
        if (arg1 == 6) {
            arg4->unk253 = 0U;
            arg4->draw = NULL;
        }
    }
}

void EnSb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnSb *this = (EnSb *) thisx;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3A;
    f32 *sp34;
    f32 *temp_v1_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;

    func_800B8050(&this->actor, globalCtx, 1);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, EnSb_PostLimbDraw, &this->actor);
    temp_v1 = this->fireCount;
    temp_v0 = temp_v1 - 1;
    if (temp_v1 != 0) {
        this->actor.colorFilterTimer += 1;
        if ((temp_v0 & 1) == 0) {
            sp3A = temp_v0;
            temp_f0 = randPlusMinusPoint5Scaled(5.0f);
            temp_v1_2 = ((temp_v0 & 3) * 0xC) + &D_808E4E68;
            sp34 = temp_v1_2;
            sp40 = temp_f0 + (this->actor.world.pos.x + *temp_v1_2);
            sp44 = randPlusMinusPoint5Scaled(5.0f) + (this->actor.world.pos.y + sp34->unk4);
            sp48 = randPlusMinusPoint5Scaled(5.0f) + (this->actor.world.pos.z + sp34->unk8);
            EffectSsEnFire_SpawnVec3f(globalCtx, &this->actor, (Vec3f *) &sp40, 0x64, (s16) 0, (s16) 0, (s16) -1);
        }
    }
}

