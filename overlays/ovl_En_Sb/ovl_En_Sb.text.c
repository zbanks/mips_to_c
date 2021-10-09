struct _mips2c_stack_EnSb_Bounce {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSb_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSb_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x2];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];                    /* maybe part of sp3A[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnSb_Idle {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnSb_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnSb_Lunge {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSb_Open {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSb_PostLimbDraw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSb_ReturnToIdle {};          /* size 0x0 */

struct _mips2c_stack_EnSb_SetupBounce {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnSb_SetupIdle {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSb_SetupLunge {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSb_SetupOpen {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnSb_SetupWaitClosed {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnSb_SetupWaitOpen {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnSb_SpawnBubbles {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnSb_TurnAround {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSb_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnSb_UpdateDamage {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnSb_WaitOpen {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

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
static InitChainEntry D_808E4E5C[3];                /* unable to generate initializer */
static ? D_808E4E68;                                /* unable to generate initializer */

void EnSb_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    EnSb *this = (EnSb *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808E4E5C);
    this->actor.colChkInfo.damageTable = &D_808E4E3C;
    this->actor.colChkInfo.mass = 0xA;
    this->actor.colChkInfo.health = 2;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06002BF0, &D_06000194, this->limbDrawTable, this->transitionDrawTable, 9);
    temp_a1 = &this->collider;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinderType1(globalCtx, temp_a1, (Actor *) this, &D_808E4E10);
    this->isDead = 0;
    this->actor.colChkInfo.mass = 0x5A;
    this->actor.shape.rot.y = 0;
    this->actor.speedXZ = 0.0f;
    this->fireCount = 0;
    this->unk_252 = 0;
    this->actor.gravity = -0.35f;
    this->actor.velocity.y = -1.0f;
    Actor_SetScale((Actor *) this, 0.006f);
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
    SkelAnime_ChangeAnim(&this->skelAnime, (AnimationHeader *) &D_0600004C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600004C), (u8) 2, 0.0f);
    this->state = 1;
    this->actionFunc = EnSb_Idle;
}

void EnSb_SetupOpen(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000194, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06000194), (u8) 2, 0.0f);
    arg0->unk_246 = 0;
    arg0->unk_1F4 = EnSb_Open;
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
    arg0->unk_246 = 3;
    arg0->unk_1F4 = EnSb_Lunge;
    Audio_PlayActorSound2(arg0, 0x3849U);
}

void EnSb_SetupBounce(EnSb *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060000B4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060000B4), (u8) 2, 0.0f);
    arg0->state = 4;
    arg0->actionFunc = EnSb_Bounce;
}

void EnSb_SetupIdle(Actor *arg0, s32 arg1) {
    if (arg0->unk_246 != 1) {
        SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_0600004C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600004C), (u8) 2, 0.0f);
    }
    arg0->unk_246 = 1;
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
    arg0->unk_24A = 0x3C;
    arg0->unk_1F4 = EnSb_ReturnToIdle;
}

void EnSb_Idle(EnSb *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x7D0, (s16) 0);
    temp_f0 = this->actor.xzDistToPlayer;
    if ((temp_f0 <= 240.0f) && (temp_f0 > 0.0f)) {
        EnSb_SetupOpen((Actor *) this);
    }
}

void EnSb_Open(EnSb *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 temp_f0;

    sp2C = this->skelAnime.animCurrentFrame;
    if ((f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06000194) <= sp2C) {
        this->vulnerableTimer = 0x14;
        EnSb_SetupWaitOpen(this);
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x7D0, (s16) 0);
    temp_f0 = this->actor.xzDistToPlayer;
    if ((temp_f0 > 240.0f) || (temp_f0 <= 40.0f)) {
        this->vulnerableTimer = 0;
        EnSb_SetupWaitClosed(this);
    }
}

void EnSb_WaitOpen(EnSb *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x7D0, (s16) 0);
    temp_f0 = this->actor.xzDistToPlayer;
    if ((temp_f0 > 240.0f) || (temp_f0 <= 40.0f)) {
        this->vulnerableTimer = 0;
        EnSb_SetupWaitClosed(this);
    }
    temp_v0 = this->vulnerableTimer;
    if ((s32) temp_v0 > 0) {
        this->vulnerableTimer = temp_v0 - 1;
        return;
    }
    this->vulnerableTimer = 0;
    this->attackTimer = 0;
    this->actionFunc = EnSb_TurnAround;
    this->yawAngle = this->actor.yawTowardsPlayer;
}

void EnSb_TurnAround(EnSb *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 temp_a1;

    temp_a1 = this->yawAngle + 0x8000;
    sp2E = temp_a1;
    Math_SmoothStepToS(&this->actor.shape.rot.y, temp_a1, 1, 0x1F40, (s16) 0xA);
    if (temp_a1 == this->actor.shape.rot.y) {
        this->actor.world.rot.y = this->yawAngle;
        if (this->actor.yDistToWater > 0.0f) {
            this->actor.velocity.y = 3.0f;
            this->actor.speedXZ = 5.0f;
            this->actor.gravity = -0.35f;
        } else {
            this->actor.velocity.y = 2.0f;
            this->actor.speedXZ = 6.0f;
            this->actor.gravity = -2.0f;
        }
        EnSb_SpawnBubbles(globalCtx, this);
        this->bounceCounter = 3;
        EnSb_SetupLunge((Actor *) this);
    }
}

void EnSb_Lunge(EnSb *this, GlobalContext *globalCtx) {
    EnSb *temp_a0_2;
    f32 *temp_a0;

    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_StepToF(temp_a0, 0.0f, 0.2f);
    if ((this->actor.velocity.y <= -0.1f) || ((this->actor.bgCheckFlags & 2) != 0)) {
        temp_a0_2 = this;
        if (!(this->actor.yDistToWater > 0.0f)) {
            this = this;
            Audio_PlayActorSound2((Actor *) temp_a0_2, 0x387BU);
        }
        this->actor.bgCheckFlags &= 0xFFFD;
        EnSb_SetupBounce(this);
    }
}

void EnSb_Bounce(EnSb *this, GlobalContext *globalCtx) {
    f32 sp28;
    f32 sp24;
    s16 temp_v0;
    u16 temp_v0_2;

    sp28 = this->skelAnime.animCurrentFrame;
    sp24 = (f32) SkelAnime_GetFrameCount(&D_060000B4);
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.2f);
    if (sp28 == sp24) {
        temp_v0 = this->bounceCounter;
        if (temp_v0 != 0) {
            this->bounceCounter = temp_v0 - 1;
            this->attackTimer = 1;
            if (this->actor.yDistToWater > 0.0f) {
                this->actor.velocity.y = 3.0f;
                this->actor.speedXZ = 5.0f;
                this->actor.gravity = -0.35f;
            } else {
                this->actor.velocity.y = 2.0f;
                this->actor.speedXZ = 6.0f;
                this->actor.gravity = -2.0f;
            }
            EnSb_SpawnBubbles(globalCtx, this);
            EnSb_SetupLunge((Actor *) this);
            return;
        }
        temp_v0_2 = this->actor.bgCheckFlags;
        if ((temp_v0_2 & 1) != 0) {
            this->actor.bgCheckFlags = temp_v0_2 & 0xFFFD;
            this->actor.speedXZ = 0.0f;
            this->attackTimer = 1;
            EnSb_SetupWaitClosed(this);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void EnSb_ReturnToIdle(EnSb *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;

    temp_v0 = this->attackTimer;
    if (temp_v0 != 0) {
        temp_v1 = this->actor.bgCheckFlags;
        this->attackTimer = temp_v0 - 1;
        if ((temp_v1 & 1) != 0) {
            this->actor.bgCheckFlags = temp_v1 & 0xFFFE;
            this->actor.speedXZ = 0.0f;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    temp_v1_2 = this->actor.bgCheckFlags;
    if ((temp_v1_2 & 1) != 0) {
        this->actor.bgCheckFlags = temp_v1_2 & 0xFFFE;
        this->actionFunc = EnSb_Idle;
        this->actor.speedXZ = 0.0f;
    }
}

void EnSb_UpdateDamage(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 *temp_a1;
    u8 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk_209;
    phi_v1 = 0;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_209 = (u8) (temp_v0 & 0xFFFD);
        if ((arg0->colChkInfo.damageEffect == 0xF) && (arg0->unk_24C != 0)) {
            Actor_ApplyDamage(arg0);
            func_800BCB70(arg0, 0x4000, 0xFF, 0x2000, (s16) 0x50);
            phi_v1 = 1;
        }
        if (phi_v1 != 0) {
            arg0->unk_252 = 0;
            if ((arg0->draw != 0) && (arg0->unk_253 == 0)) {
                arg0->unk_253 = 1U;
            }
            arg0->unk_248 = 1;
            Enemy_StartFinishingBlow(arg1, arg0);
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x28, 0x384AU);
            return;
        }
        temp_a1 = &sp34;
        sp34 = (f32) arg0->unk_21E;
        sp38 = (f32) arg0->unk_220;
        sp3C = (f32) arg0->unk_222;
        CollisionCheck_SpawnShieldParticlesMetal2(arg1, (Vec3f *) temp_a1);
        return;
    }
    if ((arg0->unk_208 & 2) != 0) {
        EnSb_SetupIdle(arg0, 1);
    }
}

void EnSb_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    EnSb *this = (EnSb *) thisx;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if (this->isDead != 0) {
        if (this->actor.yDistToWater > 0.0f) {
            this->actor.params = 4;
        } else {
            this->actor.params = 1;
        }
        Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x80);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_SetHeight((Actor *) this, 20.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 25.0f, 20.0f, 5U);
    EnSb_UpdateDamage((Actor *) this, globalCtx);
    temp_a1 = &this->collider;
    if ((sp2C->unk_A6C * 0x10) < 0) {
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        if (this->vulnerableTimer == 0) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
        }
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
    }
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void EnSb_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s16 phi_a2;

    if (arg4->unk_253 != 0) {
        if (arg1 < 7) {
            phi_a2 = 1;
            if (arg4->yDistToWater > 0.0f) {
                phi_a2 = 4;
            }
            func_800BBCEC(arg4, arg0, phi_a2, arg2);
        }
        if (arg1 == 6) {
            arg4->unk_253 = 0U;
            arg4->draw = NULL;
        }
    }
}

void EnSb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3A;
    f32 *sp34;
    f32 *temp_v1_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;
    EnSb *this = (EnSb *) thisx;

    func_800B8050((Actor *) this, globalCtx, 1);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, EnSb_PostLimbDraw, (Actor *) this);
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
            sp44 = randPlusMinusPoint5Scaled(5.0f) + (this->actor.world.pos.y + sp34->unk_4);
            sp48 = randPlusMinusPoint5Scaled(5.0f) + (this->actor.world.pos.z + sp34->unk_8);
            EffectSsEnFire_SpawnVec3f(globalCtx, (Actor *) this, (Vec3f *) &sp40, 0x64, (s16) 0, (s16) 0, (s16) -1);
        }
    }
}
