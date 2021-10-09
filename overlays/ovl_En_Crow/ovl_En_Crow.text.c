void func_8099AC58(EnCrow *arg0);                   /* static */
void func_8099B098(EnCrow *arg0);                   /* static */
void func_8099B318(Actor *arg0, GlobalContext *arg1); /* static */
void func_8099B384(Actor *arg0, GlobalContext *arg1); /* static */
void func_8099B6AC(EnCrow *arg0);                   /* static */
void func_8099B778(Actor *arg0, Actor *, Actor *);  /* static */
void func_8099B8EC(EnCrow *arg0);                   /* static */
void func_8099BAB4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8099BE48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_8099BF20(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_060000F0;
extern FlexSkeletonHeader D_060010C0;
static ? D_8099C070;                                /* unable to generate initializer */
static ColliderJntSphInit D_8099C094;               /* type too large by 4; unable to generate initializer */
static ? *D_8099C0A0 = &D_8099C070;
static CollisionCheckInfoInit D_8099C0A4 = {1, 0xF, 0x1E, 0x1E};
static DamageTable D_8099C0AC = {
    {
        0x10,
        1,
        1,
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
static s32 D_8099C0CC = 0;
static InitChainEntry D_8099C0D0;                   /* unable to generate initializer */

typedef struct EnCrow {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnCrow *, GlobalContext *);
    /* 0x018C */ u8 unk18C;                         /* inferred */
    /* 0x018D */ char pad18D[0x1];                  /* maybe part of unk18C[2]? */
    /* 0x018E */ s16 unk18E;                        /* inferred */
    /* 0x0190 */ s16 unk190;                        /* inferred */
    /* 0x0192 */ s16 unk192;                        /* inferred */
    /* 0x0194 */ Vec3s unk194;                      /* inferred */
    /* 0x019A */ char pad19A[0x30];                 /* maybe part of unk194[9]? */
    /* 0x01CA */ Vec3s unk1CA;                      /* inferred */
    /* 0x01D0 */ char pad1D0[0x30];                 /* maybe part of unk1CA[9]? */
    /* 0x0200 */ ColliderJntSph unk200;             /* inferred */
    /* 0x0220 */ ColliderJntSphElement unk220;      /* inferred */
    /* 0x0260 */ Vec3f unk260;                      /* inferred */
    /* 0x026C */ char pad26C[0x24];                 /* maybe part of unk260[4]? */
    /* 0x0290 */ f32 unk290;                        /* inferred */
    /* 0x0294 */ f32 unk294;                        /* inferred */
    /* 0x0298 */ f32 unk298;                        /* inferred */
} EnCrow;                                           /* size 0x29C */

void EnCrow_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnCrow *this = (EnCrow *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_8099C0D0);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_060010C0, &D_060000F0, &this->unk194, &this->unk1CA, 9);
    Collider_InitAndSetJntSph(globalCtx, &this->unk200, &this->actor, &D_8099C094, &this->unk220);
    this->unk200.elements->dim.worldSphere.radius = D_8099C0A0->unk20;
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_8099C0AC, &D_8099C0A4);
    ActorShape_Init(&this->actor.shape, 2000.0f, func_800B3FC0, 20.0f);
    D_8099C0CC = 0;
    if (this->actor.parent != 0) {
        this->actor.flags &= -2;
    }
    func_8099AC58(this);
}

void EnCrow_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnCrow *this = (EnCrow *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk200);
}

void func_8099AC58(EnCrow *arg0) {
    arg0->unk18E = 0x64;
    arg0->unk200.base.acFlags |= 1;
    arg0->actionFunc = func_8099AC8C;
    arg0->unk144.animPlaybackSpeed = 1.0f;
}

void func_8099AC8C(EnCrow *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    f32 sp38;
    s32 sp34;
    SkelAnime *sp28;
    Actor *temp_v0;
    ActorShape *temp_a0_2;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 phi_v1;

    temp_a0 = &this->unk144;
    sp28 = temp_a0;
    sp3C = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    sp34 = func_801378B8(temp_a0, 0.0f);
    temp_v0 = this->actor.parent;
    this->actor.speedXZ = (Rand_ZeroOne() * 1.5f) + 3.0f;
    if ((temp_v0 != 0) && (temp_v0->home.rot.z == 0)) {
        this->actor.home.pos.x = temp_v0->world.pos.x;
        this->actor.home.pos.z = temp_v0->world.pos.z;
        sp38 = Actor_XZDistanceToPoint(&this->actor, &temp_v0->world.pos);
    } else {
        sp38 = 450.0f;
        this->actor.flags |= 1;
    }
    temp_a1 = &this->actor.home;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk192 = this->actor.wallYaw;
    } else {
        sp28 = (SkelAnime *) temp_a1;
        if (Actor_XZDistanceToPoint(&this->actor, &temp_a1->pos) > 300.0f) {
            this->unk192 = Actor_YawToPoint(&this->actor, &temp_a1->pos);
        }
    }
    if ((Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk192, 5, 0x300, (s16) 0x10) == 0) && (sp34 != 0) && (Rand_ZeroOne() < 0.1f)) {
        if ((s32) (s16) (Actor_YawToPoint(&this->actor, &this->actor.home.pos) - this->actor.shape.rot.y) > 0) {
            this->unk192 += Rand_S16Offset(0x1000, 0x1000);
        } else {
            this->unk192 -= Rand_S16Offset(0x1000, 0x1000);
        }
        Audio_PlayActorSound2(&this->actor, 0x38B6U);
    }
    if ((this->actor.yDistToWater > -40.0f) || ((this->actor.bgCheckFlags & 1) != 0)) {
        this->unk190 = -0x1000;
    } else {
        temp_f2 = this->actor.home.pos.y;
        temp_f0 = this->actor.world.pos.y;
        if (temp_f0 < (temp_f2 - 50.0f)) {
            this->unk190 = (s16) -Rand_S16Offset(0x800, 0x800);
        } else if ((temp_f2 + 50.0f) < temp_f0) {
            this->unk190 = Rand_S16Offset(0x800, 0x800);
        }
    }
    temp_a0_2 = &this->actor.shape;
    sp28 = (SkelAnime *) temp_a0_2;
    if ((Math_SmoothStepToS(&temp_a0_2->rot.x, this->unk190, 0xA, 0x100, (s16) 8) == 0) && (sp34 != 0) && (Rand_ZeroOne() < 0.1f)) {
        if (this->actor.home.pos.y < this->actor.world.pos.y) {
            this->unk190 -= Rand_S16Offset(0x400, 0x400);
        } else {
            this->unk190 += Rand_S16Offset(0x400, 0x400);
        }
        temp_v0_2 = this->unk190;
        if ((s32) temp_v0_2 < -0x1000) {
            this->unk190 = -0x1000;
        } else {
            phi_v1 = temp_v0_2;
            if ((s32) temp_v0_2 >= 0x1001) {
                phi_v1 = 0x1000;
            }
            this->unk190 = phi_v1;
        }
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Math_ScaledStepToS((s16 *) sp28, -0x100, 0x400);
    }
    temp_v0_3 = this->unk18E;
    if (temp_v0_3 != 0) {
        this->unk18E = temp_v0_3 - 1;
    }
    if ((this->unk18E == 0) && (((this->actor.xzDistToPlayer < 300.0f) && !(sp3C->unkA6C & 0x800000)) || (sp38 < 300.0f)) && (this->actor.yDistToWater < -40.0f) && (Player_GetMask(globalCtx) != 0x10)) {
        if (sp38 < this->actor.xzDistToPlayer) {
            this->actor.child = this->actor.parent;
        } else {
            this->actor.child = sp3C;
        }
        func_8099B098(this);
    }
}

void func_8099B098(EnCrow *arg0) {
    arg0->unk18E = 0x12C;
    arg0->actionFunc = func_8099B0CC;
    arg0->actor.speedXZ = 4.0f;
    arg0->unk144.animPlaybackSpeed = 2.0f;
}

void func_8099B0CC(EnCrow *this, GlobalContext *globalCtx) {
    Actor *sp4C;
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Actor *temp_v0_2;
    Actor *temp_v0_4;
    f32 *temp_a1;
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_3;
    u8 temp_v0_5;
    s16 phi_a1;
    s16 phi_v0;

    sp4C = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    temp_v1 = this->unk18E;
    if (temp_v1 != 0) {
        this->unk18E = temp_v1 - 1;
    }
    temp_v0 = Actor_IsActorFacingActor(&this->actor, this->actor.child, 0x2800);
    sp48 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = this->actor.child;
        if (sp4C == temp_v0_2) {
            sp40 = temp_v0_2->world.pos.y + 20.0f;
        } else {
            sp40 = temp_v0_2->world.pos.y + 40.0f;
        }
        temp_a1 = &sp3C;
        sp3C = this->actor.child->world.pos.x;
        sp44 = this->actor.child->world.pos.z;
        temp_v0_3 = Actor_PitchToPoint(&this->actor, (Vec3f *) temp_a1);
        if (temp_v0_3 < -0x3000) {
            phi_a1 = -0x3000;
        } else {
            phi_v0 = (s16) temp_v0_3;
            if ((s32) (s16) temp_v0_3 >= 0x3001) {
                phi_v0 = 0x3000;
            }
            phi_a1 = phi_v0;
        }
        Math_SmoothStepToS(&this->actor.shape.rot.x, phi_a1, 2, 0x400, (s16) 0x40);
    } else {
        Math_SmoothStepToS(&this->actor.shape.rot.x, -0x800, 2, 0x100, (s16) 0x10);
    }
    if ((sp48 != 0) || (Actor_XZDistanceBetweenActors(&this->actor, this->actor.child) > 80.0f)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors(&this->actor, this->actor.child), 4, 0xC00, (s16) 0xC0);
    }
    if ((this->unk18E == 0) || ((temp_v0_4 = this->actor.child, (sp4C != temp_v0_4)) && (temp_v0_4->home.rot.z != 0)) || ((sp4C == temp_v0_4) && ((Player_GetMask(globalCtx) == 0x10) || ((sp4C->unkA6C << 8) < 0))) || ((this->unk200.base.atFlags & 2) != 0) || ((this->actor.bgCheckFlags & 9) != 0) || (this->actor.yDistToWater > -40.0f)) {
        temp_v0_5 = this->unk200.base.atFlags;
        if ((temp_v0_5 & 2) != 0) {
            this->unk200.base.atFlags = temp_v0_5 & 0xFFFD;
            Audio_PlayActorSound2(&this->actor, 0x38B7U);
        }
        func_8099AC58(this);
    }
}

void func_8099B318(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk18C == 0xA) {
        arg0->unk18C = 0U;
        arg0->unk290 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x260), 4, 2, 0.2f, 0.2f);
    }
}

void func_8099B384(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f6;
    u8 temp_v0;
    void *temp_v0_2;

    temp_f6 = arg0->speedXZ * Math_CosS(arg0->world.rot.x);
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = temp_f6;
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060000F0, 0.4f, 0.0f, 0.0f, (u8) 1, -3.0f);
    arg0->shape.yOffset = 0.0f;
    arg0->targetArrowOffset = 0.0f;
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->world.pos.y += 20.0f * (arg0->scale.x * 100.0f);
    Audio_PlayActorSound2(arg0, 0x38EBU);
    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 3) {
        arg0->unk18C = 0xA;
        arg0->unk290 = 1.0f;
        arg0->unk298 = 0.75f;
        arg0->unk294 = 0.5f;
    } else if (temp_v0 == 4) {
        temp_v0_2 = arg0->unk21C;
        arg0->unk18C = 0x14;
        arg0->unk290 = 4.0f;
        arg0->unk294 = 0.5f;
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) temp_v0_2->unkE, (f32) temp_v0_2->unk10, (f32) temp_v0_2->unk12, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
    } else if (temp_v0 == 2) {
        arg0->unk18C = 0;
        arg0->unk290 = 4.0f;
        arg0->unk294 = 0.5f;
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    if ((arg0->flags & 0x8000) != 0) {
        arg0->speedXZ = 0.0f;
    }
    arg0->flags |= 0x10;
    arg0->unk211 = (u8) (arg0->unk211 & 0xFFFE);
    arg0->unk188 = func_8099B584;
}

void func_8099B584(EnCrow *this, GlobalContext *globalCtx) {
    PosRot *sp34;
    PosRot *temp_a1;

    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    this->actor.colorFilterTimer = 0x28;
    if ((this->actor.flags & 0x8000) == 0) {
        if (this->unk18C != 0xA) {
            Math_ScaledStepToS(&this->actor.shape.rot.x, 0x4000, 0x200);
            this->actor.shape.rot.z += 0x1780;
        }
        if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.floorHeight == -32000.0f)) {
            func_8099B318(&this->actor, globalCtx);
            temp_a1 = &this->actor.world;
            sp34 = temp_a1;
            func_800B3030(globalCtx, &temp_a1->pos, &D_801D15B0, &D_801D15B0, (s16) (s32) (this->actor.scale.x * 10000.0f), (s16) 0, 0);
            Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0xB, 0x3878U);
            if (this->actor.parent != 0) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
            func_8099B6AC(this);
            // Duplicate return node #8. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_8099B6AC(EnCrow *arg0) {
    arg0->actor.colorFilterTimer = 0;
    arg0->actionFunc = func_8099B6C4;
}

void func_8099B6C4(EnCrow *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 phi_f0;

    if (this->actor.params != 0) {
        phi_f0 = 0.006f;
    } else {
        phi_f0 = 0.002f;
    }
    if (Math_StepToF(&this->actor.scale.x, 0.0f, phi_f0) != 0) {
        if (this->actor.params == 0) {
            D_8099C0CC += 1;
            Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0x80);
        } else {
            Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0x90);
        }
        func_8099B8EC(this);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
}

void func_8099B778(Actor *arg0) {
    arg0->unk18E = 0x64;
    arg0->unk190 = -0x1000;
    arg0->unk192 = (s16) (arg0->yawTowardsPlayer + 0x8000);
    arg0->speedXZ = 3.5f;
    arg0->unk160 = 2.0f;
    if (arg0->colChkInfo.damageEffect == 1) {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
    } else {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
    }
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk188 = func_8099B838;
}

void func_8099B838(EnCrow *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk192 = this->actor.wallYaw;
    } else {
        this->unk192 = this->actor.yawTowardsPlayer + 0x8000;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk192, 3, 0xC00, (s16) 0xC0);
    Math_SmoothStepToS(&this->actor.shape.rot.x, this->unk190, 5, 0x100, (s16) 0x10);
    temp_v0 = this->unk18E;
    if (temp_v0 != 0) {
        this->unk18E = temp_v0 - 1;
    }
    if (this->unk18E == 0) {
        func_8099AC58(this);
    }
}

void func_8099B8EC(EnCrow *arg0) {
    SkelAnime *temp_a0;

    if (D_8099C0CC == 0xA) {
        arg0->actor.params = 1;
        D_8099C0CC = 0;
        arg0->unk200.elements->unk36 = (s16) (s32) ((f32) D_8099C0A0->unk20 * 0.03f * 100.0f);
    } else {
        arg0->actor.params = 0;
        arg0->unk200.elements->dim.worldSphere.radius = D_8099C0A0->unk20;
    }
    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060000F0);
    Math_Vec3f_Copy(arg0 + 0x24, arg0 + 8);
    arg0->actor.shape.rot.x = 0;
    arg0->actor.shape.rot.z = 0;
    arg0->unk18E = 0x12C;
    arg0->actor.draw = NULL;
    arg0->actionFunc = func_8099B9E8;
    arg0->actor.shape.yOffset = 2000.0f;
    arg0->actor.targetArrowOffset = 2000.0f;
    arg0->unk290 = 0.0f;
}

void func_8099B9E8(EnCrow *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;
    u32 temp_t0;
    f32 phi_f0;

    temp_v0 = this->unk18E;
    if (temp_v0 != 0) {
        this->unk18E = temp_v0 - 1;
    }
    if (this->unk18E == 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
        this->actor.draw = EnCrow_Draw;
        if (this->actor.params != 0) {
            phi_f0 = 0.03f;
        } else {
            phi_f0 = 0.01f;
        }
        if (Math_StepToF(&this->actor.scale.x, phi_f0, phi_f0 * 0.1f) != 0) {
            this->actor.colChkInfo.health = 1;
            temp_t0 = this->actor.flags | 1;
            this->actor.flags = temp_t0;
            this->actor.flags = temp_t0 & ~0x10;
            func_8099AC58(this);
        }
        temp_f0 = this->actor.scale.x;
        this->actor.scale.y = temp_f0;
        this->actor.scale.z = temp_f0;
    }
}

void func_8099BAB4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a1;

    temp_v0 = arg0->unk211;
    temp_a0 = arg0;
    if ((temp_v0 & 2) != 0) {
        arg0->unk211 = (u8) (temp_v0 & 0xFFFD);
        temp_a1 = arg0->unk21C;
        arg0 = arg0;
        func_800BE258(temp_a0, temp_a1);
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 == 1) {
            func_8099B778(arg0);
            return;
        }
        temp_a1_2 = arg0;
        if (temp_v0_2 == 5) {
            arg0->unk18C = 0x1F;
            arg0->unk290 = 2.0f;
            arg0->unk294 = 0.5f;
            func_8099B778(arg0, temp_a1_2, arg0);
            return;
        }
        arg0->colChkInfo.health = 0;
        arg0->flags &= -2;
        arg0 = arg0;
        Enemy_StartFinishingBlow(arg1, temp_a1_2);
        func_8099B384(arg0, arg1);
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void EnCrow_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnCrow *this = (EnCrow *) thisx;
    f32 sp34;
    f32 sp30;
    void (*sp2C)(EnCrow *, GlobalContext *);
    f32 temp_f0;
    f32 temp_f0_2;

    func_8099BAB4(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    sp2C = func_8099B9E8;
    temp_f0 = this->actor.scale.x * 100.0f;
    if (func_8099B9E8 != this->actionFunc) {
        if (this->actor.colChkInfo.health != 0) {
            sp30 = temp_f0;
            sp34 = 20.0f * temp_f0;
            Actor_SetVelocityAndMoveXYRotation(&this->actor);
        } else {
            sp30 = temp_f0;
            sp34 = 0.0f;
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        }
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 12.0f * sp30, 25.0f * sp30, 50.0f * sp30, 7U);
    } else {
        sp34 = 0.0f;
    }
    this->unk200.elements->dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
    this->unk200.elements->dim.worldSphere.center.y = (s16) (s32) (this->actor.world.pos.y + sp34);
    this->unk200.elements->dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
    if (func_8099B0CC == this->actionFunc) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk200.base);
    }
    if ((this->unk200.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk200.base);
    }
    if (sp2C != this->actionFunc) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk200.base);
    }
    Actor_SetHeight(&this->actor, sp34);
    if ((this->actor.colChkInfo.health != 0) && (func_801378B8(&this->unk144, 3.0f) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x3897U);
    }
    if (this->unk290 > 0.0f) {
        if (this->unk18C != 0xA) {
            Math_StepToF(&this->unk290, 0.0f, 0.05f);
            temp_f0_2 = (this->unk290 + 1.0f) * 0.25f;
            this->unk294 = temp_f0_2;
            if (temp_f0_2 > 0.5f) {
                this->unk294 = 0.5f;
                return;
            }
            this->unk294 = this->unk294;
            return;
        }
        if (Math_StepToF(&this->unk298, 0.5f, 0.0125f) == 0) {
            func_800B9010(&this->actor, 0x20B2U);
        }
        // Duplicate return node #22. Try simplifying control flow for better match
    }
}

s32 func_8099BE48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg5->colChkInfo.health != 0) {
        if (arg1 == 7) {
            arg4->y += (s32) (3072.0f * sin_rad(arg5->unk15C * 0.7853982f));
        } else if (arg1 == 8) {
            arg4->y += (s32) (5120.0f * sin_rad((arg5->unk15C + 2.5f) * 0.7853982f));
        }
    }
    return 0;
}

void func_8099BF20(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 2) {
        SysMatrix_GetStateTranslationAndScaledX(2500.0f, arg4 + 0x260);
        return;
    }
    if ((arg1 == 4) || (arg1 == 6) || (arg1 == 8)) {
        SysMatrix_GetStateTranslation(arg4 + ((arg1 >> 1) * 0xC) + 0x254);
    }
}

void EnCrow_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnCrow *this = (EnCrow *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_8099BE48, func_8099BF20, &this->actor);
    func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk260, 4, this->actor.scale.x * 100.0f * this->unk294, this->unk298, this->unk290, (u8) (s32) this->unk18C);
}

