? func_800BE568(Actor *, void *);                   /* extern */
void func_80A4E0CC(EnMkk *arg0, s32);               /* static */
void func_80A4E190(EnMkk *arg0);                    /* static */
void func_80A4E22C(EnMkk *arg0, GlobalContext *arg1); /* static */
void func_80A4E2B8(void *arg0);                     /* static */
void func_80A4E58C(EnMkk *arg0);                    /* static */
void func_80A4E67C(Actor *arg0);                    /* static */
void func_80A4E84C(EnMkk *arg0);                    /* static */
void func_80A4EBBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A4EDF0(EnMkk *arg0, s32);               /* static */
void func_80A4EEF4(EnMkk *arg0);                    /* static */
void func_80A4F16C(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_80A4F4C8(Actor *thisx, GlobalContext *globalCtx); /* static */
static ColliderSphereInit D_80A4F720;               /* type too large by 4; unable to generate initializer */
static s16 D_80A4F748 = {0xF, 0x64};
static CollisionCheckInfoInit D_80A4F74C = {1, 0xF, 0x1E, 0xA};
static DamageTable D_80A4F754 = {
    {
        1,
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
        2,
        2,
        2,
        1,
        1,
        1,
        2,
        1,
        1,
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
static InitChainEntry D_80A4F774;                   /* unable to generate initializer */
static Color_RGBA8 D_80A4F780 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80A4F784 = {0xB4, 0xB4, 0xB4, 0xFF};
static Vec3f D_80A4F788 = {0.0f, 0.45f, 0.0f};
static ? D_80A4F794;                                /* unable to generate initializer */
static ? D_80A4F79C;                                /* unable to generate initializer */
static ? D_80A4F7A4;                                /* unable to generate initializer */
static ? D_80A4F7C4;                                /* unable to generate initializer */
static f32 D_80A4F834 = {0.85f, 0.85f};             /* const */

typedef struct EnMkk {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnMkk *, GlobalContext *);
    /* 0x0148 */ u8 unk148;                         /* inferred */
    /* 0x0149 */ u8 unk149;                         /* inferred */
    /* 0x014A */ u8 unk14A;                         /* inferred */
    /* 0x014B */ u8 unk14B;                         /* inferred */
    /* 0x014C */ u8 unk14C;                         /* inferred */
    /* 0x014D */ char pad14D[0x1];                  /* maybe part of unk14C[2]? */
    /* 0x014E */ s16 unk14E;                        /* inferred */
    /* 0x0150 */ s16 unk150;                        /* inferred */
    /* 0x0152 */ s16 unk152;                        /* inferred */
    /* 0x0154 */ Vec3f unk154;                      /* inferred */
    /* 0x0160 */ Vec3f unk160;                      /* inferred */
    /* 0x016C */ f32 unk16C;                        /* inferred */
    /* 0x0170 */ f32 unk170;                        /* inferred */
    /* 0x0174 */ char pad174[0x4];                  /* maybe part of unk170[2]? */
    /* 0x0178 */ f32 unk178;                        /* inferred */
    /* 0x017C */ ColliderSphere unk17C;             /* inferred */
} EnMkk;                                            /* size 0x1D4 */

void EnMkk_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMkk *this = (EnMkk *) thisx;
    s32 sp2C;
    PosRot *sp24;
    PosRot *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1_2;
    s32 temp_v1;
    u8 phi_v1;

    Actor_ProcessInitChain(&this->actor, &D_80A4F774);
    Collider_InitAndSetSphere(globalCtx, &this->unk17C, &this->actor, &D_80A4F720);
    this->unk17C.dim.worldSphere.radius = D_80A4F748;
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80A4F754, &D_80A4F74C);
    ActorShape_Init(&this->actor.shape, 1000.0f, NULL, 0.0f);
    temp_v0 = this->actor.shape.rot.x;
    this->unk148 = 0;
    this->unk149 = 0;
    if ((s32) temp_v0 >= 0) {
        this->unk152 = temp_v0;
    } else {
        this->unk152 = (s32) temp_v0 * -0x50;
    }
    temp_v0_2 = this->actor.shape.rot.z;
    temp_a1 = &this->actor.world;
    if ((s32) temp_v0_2 < 0) {
        this->unk14C = 0;
    } else {
        phi_v1 = (u8) temp_v0_2;
        if ((s32) temp_v0_2 >= 0x11) {
            phi_v1 = 0x10U;
        }
        this->unk14C = phi_v1;
    }
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    sp24 = temp_a1;
    Math_Vec3f_Copy(&this->unk154, &temp_a1->pos);
    Math_Vec3f_Copy(&this->unk160, &temp_a1->pos);
    if ((this->actor.params & 4) != 0) {
        this->unk14B = 8;
    } else {
        this->unk14B = 0;
    }
    temp_v0_3 = this->actor.params;
    this->actor.params = temp_v0_3 & 1;
    temp_v1 = ((s32) temp_v0_3 >> 8) & 0xFF;
    temp_a1_2 = temp_v0_3 & 2;
    if (this->actor.params == 1) {
        this->actor.hintId = 0x3C;
    } else {
        this->actor.hintId = 0x2C;
    }
    if ((temp_v1 == 0) || (temp_v1 == 0xFF)) {
        sp2C = temp_a1_2;
        func_80A4E0CC(this, temp_a1_2);
        this->unk178 = 30000.0f;
        if (temp_a1_2 > 0) {
            this->unk14B |= 4;
            return;
        }
        // Duplicate return node #19. Try simplifying control flow for better match
        return;
    }
    this->unk178 = (f32) temp_v1 * 40.0f * 0.1f;
    func_80A4EDF0(this, temp_a1_2);
    this->unk14E = 0;
}

void EnMkk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMkk *this = (EnMkk *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk17C);
}

void func_80A4E0CC(EnMkk *arg0) {
    arg0->unk14A = 0;
    arg0->unk14B |= 3;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_80A4E100;
}

void func_80A4E100(EnMkk *this, GlobalContext *globalCtx) {
    u8 temp_v1;
    s32 phi_v0;

    temp_v1 = this->unk14B;
    if ((temp_v1 & 4) != 0) {
        phi_v0 = this->unk14A + 0xF;
    } else {
        phi_v0 = this->unk14A + 5;
    }
    if (phi_v0 >= 0xFF) {
        this->unk148 = 3;
        this->unk17C.base.acFlags |= 1;
        this->unk14A = 0xFF;
        this->actor.flags |= 1;
        this->unk14B = temp_v1 & 0xFFFB;
        this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
        func_80A4E190();
        return;
    }
    this->unk14A = (u8) phi_v0;
}

void func_80A4E190(EnMkk *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk149;
    arg0->unk14E = (s32) (Rand_ZeroOne() * 20.0f) + 0xA;
    if (temp_v0 != 0) {
        arg0->unk149 = temp_v0 - 1;
    }
    arg0->actionFunc = func_80A4E1F0;
}

void func_80A4E1F0(EnMkk *this, GlobalContext *globalCtx) {
    this->unk14E += -1;
    if (this->unk14E == 0) {
        func_80A4E2B8();
    }
}

void func_80A4E22C(EnMkk *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    sp2C = arg0->actor.world.pos.x;
    sp30 = arg0->actor.world.pos.y + 15.0f;
    sp34 = arg0->actor.world.pos.z;
    func_800B0DE0(arg1, (Vec3f *) &sp2C, &D_801D15B0, &D_80A4F788, &D_80A4F780, &D_80A4F784, (s16) 0x15E, (s16) 0x14);
}

void func_80A4E2B8(void *arg0) {
    arg0->unk14E = 0x1E;
    arg0->unk14B = (u8) (arg0->unk14B & 0xFFFE);
    arg0->unk144 = func_80A4E2E8;
    arg0->unk150 = (s16) arg0->unkBE;
}

void func_80A4E2E8(EnMkk *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s32 sp20;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    this->unk14E += -1;
    if ((this->actor.params == 1) && ((this->actor.bgCheckFlags & 1) != 0) && (this->actor.speedXZ > 2.5f) && (((u32) globalCtx->gameplayFrames % 3U) == 0)) {
        func_80A4E22C(this, globalCtx);
    }
    if ((s32) this->unk14E > 0) {
        Math_StepToF(&this->actor.speedXZ, 5.0f, 0.7f);
        sp20 = 0;
    } else {
        sp20 = Math_StepToF(&this->actor.speedXZ, 0.0f, 0.7f);
    }
    if (((sp24->unkA74 & 0x100) != 0) || (Player_GetMask(globalCtx) == 0x10)) {
        Math_ScaledStepToS(&this->unk150, Actor_YawToPoint(&this->actor, &this->actor.home.pos), 0x400);
    } else if (((sp24->unkA70 & 0x80) != 0) || ((s32) sp24->freezeTimer > 0)) {
        Math_ScaledStepToS(&this->unk150, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0x400);
    } else {
        Math_ScaledStepToS(&this->unk150, this->actor.yawTowardsPlayer, 0x400);
    }
    this->actor.shape.rot.y = (s32) (sin_rad((f32) this->unk14E * 0.41887903f) * (614.4f * this->actor.speedXZ)) + this->unk150;
    func_800B9010(&this->actor, 0x30BCU);
    if (sp20 != 0) {
        this->unk14B &= 0xFFFD;
        func_80A4E190(this);
        return;
    }
    if ((this->unk149 == 0) && ((sp24->unkA74 & 0x100) == 0) && (Player_GetMask(globalCtx) != 0x10) && ((this->actor.bgCheckFlags & 1) != 0) && (Actor_IsActorFacingLink(&this->actor, 0x1800) != 0) && (this->actor.xzDistToPlayer < 120.0f) && (fabsf(this->actor.yDistToPlayer) < 100.0f)) {
        func_80A4E58C(this);
    }
}

void func_80A4E58C(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk14B = (u8) (temp_a3->unk14B | 1);
    temp_a3->speedXZ = 3.0f;
    temp_a3->velocity.y = 5.0f;
    arg0 = temp_a3;
    Audio_PlayActorSound2(temp_a3, 0x38BDU);
    arg0->unk18C = (u8) (arg0->unk18C | 1);
    Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0x800);
    arg0->unk144 = func_80A4E60C;
}

void func_80A4E60C(EnMkk *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = this->unk17C.base.atFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk17C.base.atFlags = temp_v0 & 0xFFFC;
    }
    if ((this->actor.velocity.y < 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        this->unk149 = 2;
        this->unk17C.base.atFlags &= 0xFFFE;
        func_80A4E2B8();
    }
}

void func_80A4E67C(Actor *arg0) {
    s32 temp_t9;

    temp_t9 = arg0->flags & ~1;
    arg0->flags = temp_t9;
    arg0->unk14B = (u8) (arg0->unk14B | 1);
    arg0->unk18D = (u8) (arg0->unk18D & ~1);
    arg0->flags = temp_t9 | 0x10;
    Audio_PlayActorSound2(arg0, 0x3876U);
    arg0->unk14A = 0xFE;
    func_800BE568(arg0, arg0 + 0x17C);
    arg0->speedXZ = 7.0f;
    arg0->shape.rot.y = arg0->world.rot.y;
    arg0->velocity.y = 5.0f;
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->unk144 = func_80A4E72C;
    arg0->gravity = -1.3f;
}

void func_80A4E72C(EnMkk *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 *temp_a1;
    f32 temp_f0;
    s32 temp_v0_2;
    u16 temp_v0;
    u8 temp_v0_3;

    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 1) != 0) {
        temp_f0 = this->actor.velocity.y;
        temp_a1 = &sp44;
        if (temp_f0 > -1.0f) {
            sp44 = this->actor.world.pos.x;
            sp48 = this->actor.world.pos.y + 15.0f;
            sp4C = this->actor.world.pos.z;
            temp_v0_2 = this->actor.params * 4;
            EffectSsDeadDb_Spawn(globalCtx, (Vec3f *) temp_a1, &D_801D15B0, &D_801D15B0, temp_v0_2 + &D_80A4F794, temp_v0_2 + &D_80A4F79C, (s16) 0x46, (s16) 4, 0xC);
            Audio_PlayActorSound2(&this->actor, 0x3878U);
            temp_v0_3 = this->unk14C;
            if (temp_v0_3 != 0) {
                Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, (s16) ((s32) (temp_v0_3 << 0x14) >> 0x10));
            }
            func_80A4EEF4(this);
            return;
        }
        this->actor.bgCheckFlags = temp_v0 & 0xFFFE;
        this->actor.velocity.y = temp_f0 * -0.8f;
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_80A4E84C(EnMkk *arg0) {
    Vec3f sp34;
    f32 sp30;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_a1 = arg0 + 0x108;
    if ((arg0->unk14B & 3) != 0) {
        sp28 = temp_a1;
        temp_f0 = Math_Vec3f_DistXYZ(arg0 + 0x24, temp_a1);
        temp_a1_2 = arg0 + 0x154;
        sp24 = temp_a1_2;
        sp30 = temp_f0;
        Math_Vec3f_Copy(&sp34, temp_a1_2);
        if (sp30 < 0.001f) {
            Math_Vec3f_Copy(sp24, sp28);
        } else {
            temp_f0_2 = arg0->actor.world.pos.x;
            temp_f2 = 1.0f / sp30;
            temp_f12 = arg0->actor.world.pos.y;
            temp_f14 = arg0->actor.world.pos.z;
            arg0->unk154.x = ((arg0->actor.prevPos.x - temp_f0_2) * temp_f2 * 10.0f) + temp_f0_2;
            arg0->unk154.y = ((arg0->actor.prevPos.y - temp_f12) * temp_f2 * 10.0f) + temp_f12;
            arg0->unk154.z = ((arg0->actor.prevPos.z - temp_f14) * temp_f2 * 10.0f) + temp_f14;
        }
        temp_f0_3 = Math_Vec3f_DistXYZ(sp24, &sp34);
        if (temp_f0_3 < 0.001f) {
            Math_Vec3f_Copy(arg0 + 0x160, &sp34);
            return;
        }
        temp_f12_2 = arg0->unk154.x;
        temp_f2_2 = 1.0f / temp_f0_3;
        temp_f14_2 = arg0->unk154.y;
        temp_f16 = arg0->unk154.z;
        arg0->unk160.x = ((sp34.x - temp_f12_2) * temp_f2_2 * 12.0f) + temp_f12_2;
        arg0->unk160.y = ((sp34.y - temp_f14_2) * temp_f2_2 * 12.0f) + temp_f14_2;
        arg0->unk160.z = ((sp34.z - temp_f16) * temp_f2_2 * 12.0f) + temp_f16;
        return;
    }
    arg0->unk160.y = arg0->unk154.y;
    arg0->unk154.y = arg0->actor.world.pos.y;
    arg0->unk154.x = arg0->actor.world.pos.x - (Math_SinS((s16) ((s32) (sin_rad((f32) arg0->unk14E * 0.62831855f) * (1228.8f * arg0->actor.speedXZ)) + arg0->actor.shape.rot.y)) * 10.0f);
    arg0->unk154.z = arg0->actor.world.pos.z - (Math_CosS((s16) ((s32) (sin_rad((f32) arg0->unk14E * 0.62831855f) * (1228.8f * arg0->actor.speedXZ)) + arg0->actor.shape.rot.y)) * 10.0f);
    arg0->unk160.x = arg0->unk154.x - (Math_SinS((s16) (arg0->actor.shape.rot.y - (s32) (sin_rad((f32) arg0->unk14E * 0.62831855f) * (1228.8f * arg0->actor.speedXZ)))) * 12.0f);
    arg0->unk160.z = arg0->unk154.z - (Math_CosS((s16) (arg0->actor.shape.rot.y - (s32) (sin_rad((f32) arg0->unk14E * 0.62831855f) * (1228.8f * arg0->actor.speedXZ)))) * 12.0f);
}

void func_80A4EBBC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    u8 temp_v0;
    void *temp_a1;

    temp_v0 = arg0->unk18D;
    temp_a0 = arg0;
    temp_a1 = arg0 + 0x194;
    if ((temp_v0 & 2) != 0) {
        arg0->unk18D = (u8) (temp_v0 & 0xFFFD);
        arg0 = arg0;
        func_800BE258(temp_a0, temp_a1);
        Enemy_StartFinishingBlow(arg1, arg0);
        func_80A4E67C(arg0);
    }
}

void EnMkk_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMkk *this = (EnMkk *) thisx;
    CollisionCheckContext *sp2C;
    ColliderSphere *sp28;
    ColliderSphere *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v1;
    u8 temp_v0;
    s16 phi_v0;

    temp_v0 = this->unk148;
    if ((s32) temp_v0 > 0) {
        this->unk148 = temp_v0 - 1;
    } else if ((Rand_ZeroOne() < 0.075f) && (this->actor.params != 1)) {
        this->unk148 = 6;
    }
    func_80A4EBBC(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 20.0f, 0x1DU);
    if (this->actor.params == 0) {
        func_80A4E84C(this);
    }
    if (Actor_IsActorFacingLink(&this->actor, 0x3000) != 0) {
        this->actor.shape.rot.x = Actor_PitchToPoint(&this->actor, &globalCtx->actorCtx.actorList[2].first->focus.pos);
        temp_v1 = this->actor.shape.rot.x;
        if ((s32) temp_v1 < -0x1800) {
            this->actor.shape.rot.x = -0x1800;
        } else {
            phi_v0 = temp_v1;
            if ((s32) temp_v1 >= 0x1801) {
                phi_v0 = 0x1800;
            }
            this->actor.shape.rot.x = phi_v0;
        }
    }
    Actor_SetHeight(&this->actor, 10.0f);
    this->unk17C.dim.worldSphere.center.x = (s16) (s32) this->actor.focus.pos.x;
    this->unk17C.dim.worldSphere.center.y = (s16) (s32) this->actor.focus.pos.y;
    this->unk17C.dim.worldSphere.center.z = (s16) (s32) this->actor.focus.pos.z;
    if ((this->unk17C.base.atFlags & 1) != 0) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk17C.base);
    }
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk17C;
    if ((this->unk17C.base.acFlags & 1) != 0) {
        sp2C = temp_a1;
        sp28 = temp_a2;
        CollisionCheck_SetAC(globalCtx, temp_a1, &temp_a2->base);
    }
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk17C.base);
}

void func_80A4EDF0(EnMkk *arg0) {
    arg0->unk14A = 0;
    arg0->unk14B |= 3;
    arg0->actor.flags &= -2;
    arg0->actor.draw = NULL;
    arg0->actor.update = func_80A4F16C;
    arg0->actionFunc = func_80A4EE48;
    arg0->actor.gravity = -0.5f;
    arg0->unk14E = arg0->unk152;
}

void func_80A4EE48(EnMkk *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk14E;
    if ((s32) temp_v0 > 0) {
        this->unk14E = temp_v0 - 1;
        if (this->unk14E == 0) {
            this->actor.flags &= -0x11;
            return;
        }
        // Duplicate return node #6. Try simplifying control flow for better match
        return;
    }
    if (this->actor.xzDistToPlayer < this->unk178) {
        this = this;
        if (Player_GetMask(globalCtx) != 0x10) {
            this->actor.update = EnMkk_Update;
            this->actor.draw = EnMkk_Draw;
            this->actor.flags &= -0x11;
            func_80A4E0CC(this);
        }
    }
}

void func_80A4EEF4(Actor *arg0) {
    Vec3f *sp24;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x24;
    sp24 = temp_a1;
    Math_Vec3f_Copy(arg0 + 0x16C, temp_a1);
    Math_Vec3f_Copy(arg0 + 0x154, temp_a1);
    Math_Vec3f_Copy(arg0 + 0x160, temp_a1);
    Actor_SetScale(arg0, 0.005f);
    arg0->update = func_80A4F16C;
    arg0->draw = func_80A4F4C8;
    arg0->unk144 = func_80A4EF74;
}

void func_80A4EF74(EnMkk *this, GlobalContext *globalCtx) {
    PosRot *sp24;
    PosRot *temp_a0;
    s32 temp_v0;

    temp_v0 = this->unk14A - 0x14;
    if (temp_v0 <= 0) {
        if ((this->unk14B & 8) != 0) {
            Actor_SetScale(&this->actor, 0.01f);
            this->unk148 = 0;
            this->unk149 = 0;
            temp_a0 = &this->actor.world;
            sp24 = temp_a0;
            Math_Vec3f_Copy(&temp_a0->pos, &this->actor.home.pos);
            Math_Vec3f_Copy(&this->unk154, &sp24->pos);
            Math_Vec3f_Copy(&this->unk160, &sp24->pos);
            this->actor.speedXZ = 0.0f;
            this->actor.velocity.y = 0.0f;
            func_80A4EDF0(this);
            return;
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk14A = (u8) temp_v0;
    this->actor.world.pos.x += 0.3f + (3.0f * Rand_ZeroOne());
    this->actor.world.pos.y += 0.5f + (3.5f * Rand_ZeroOne());
    this->unk16C -= 0.3f + (3.0f * Rand_ZeroOne());
    this->unk170 += 0.5f + (3.5f * Rand_ZeroOne());
    this->unk154.z += 0.3f + (3.0f * Rand_ZeroOne());
    this->unk154.y += 0.5f + (3.5f * Rand_ZeroOne());
    this->unk160.z -= 0.3f + (3.0f * Rand_ZeroOne());
    this->unk160.y += 0.5f + (3.5f * Rand_ZeroOne());
}

void func_80A4F16C(Actor *thisx, GlobalContext *globalCtx) {
    thisx->unk144();
}

void EnMkk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMkk *this = (EnMkk *) thisx;
    void *sp2C;
    Gfx *sp28;
    MtxF *sp1C;
    GraphicsContext *sp18;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_t1;
    MtxF *temp_v0_2;
    void *temp_v0;

    sp2C = (this->actor.params * 0x10) + &D_80A4F7A4;
    if (this->actor.projectedPos.z > 0.0f) {
        temp_t1 = globalCtx->state.gfxCtx;
        sp18 = temp_t1;
        if (this->unk14A == 0xFF) {
            temp_v0 = (this->unk148 * 4) + &D_80A4F7C4;
            temp_v1 = temp_t1->polyOpa.p;
            temp_v1->words.w0 = 0xDE000000;
            temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
            temp_v1->unk8 = 0xFA0000FF;
            temp_v1->unkC = (s32) ((temp_v0->unk0 << 0x18) | (temp_v0->unk1 << 0x10) | (temp_v0->unk2 << 8) | temp_v0->unk3);
            temp_v1->unk10 = 0xDB060020;
            temp_v1->unk14 = D_801AEFA0;
            temp_v1->unk18 = 0xDA380003;
            this = this;
            sp28 = temp_v1;
            temp_v1->unk1C = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1->unk20 = 0xDE000000;
            temp_v1->unk24 = (s32) sp2C->unkC;
            sp18->polyOpa.p = temp_v1 + 0x28;
        }
        temp_v1_2 = sp18->polyXlu.p;
        temp_v1_2->words.w0 = 0xDE000000;
        temp_v1_2->words.w1 = (u32) (sSetupDL + 0x4B0);
        temp_v1_2->unk8 = 0xFB000000;
        temp_v1_2->unkC = (s32) (this->unk14A | ~0xFF);
        temp_v1_2->unk10 = 0xDE000000U;
        temp_v1_2->unk14 = (s32) sp2C->unk0;
        sp28 = temp_v1_2;
        this = this;
        SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
        temp_v1_2->unk18 = 0xDA380003;
        sp28 = temp_v1_2;
        temp_v1_2->unk1C = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_2->unk20 = 0xDE000000;
        temp_v1_2->unk24 = (s32) sp2C->unk4;
        if (this->actor.params == 0) {
            sp28 = temp_v1_2;
            temp_v0_2 = SysMatrix_GetCurrentState();
            temp_v0_2->mf[3][0] = this->unk154.x;
            temp_v0_2->mf[3][1] = this->unk154.y + 8.5f;
            temp_v0_2->mf[3][2] = this->unk154.z;
            sp1C = temp_v0_2;
            Matrix_Scale(0.85f, 0.85f, 0.85f, 1);
            temp_v1_2->unk28 = 0xDA380003;
            sp1C = sp1C;
            sp28 = temp_v1_2;
            temp_v1_2->unk2C = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1_2->unk30 = 0xDE000000;
            temp_v1_2->unk34 = (s32) sp2C->unk4;
            sp1C->mf[3][0] = this->unk160.x;
            sp1C->mf[3][1] = this->unk160.y + 7.2250004f;
            sp1C->mf[3][2] = this->unk160.z;
            sp28 = temp_v1_2;
            Matrix_Scale(0.85f, 0.85f, 0.85f, 1);
            temp_v1_2->unk38 = 0xDA380003;
            sp28 = temp_v1_2;
            temp_v1_2->unk3C = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1_2->unk40 = 0xDE000000;
            temp_v1_2->unk44 = (s32) sp2C->unk4;
            temp_v1_2->unk48 = 0xDE000000;
            temp_v1_2->unk4C = (Mtx *) sp2C->unk8;
            sp18->polyXlu.p = temp_v1_2 + 0x50;
            return;
        }
        temp_v1_2->unk28 = 0xDE000000;
        temp_v1_2->unk2C = (Mtx *) sp2C->unk8;
        sp18->polyXlu.p = temp_v1_2 + 0x30;
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_80A4F4C8(Actor *thisx, GlobalContext *globalCtx) {
    MtxF *sp2C;
    s32 *sp28;
    GraphicsContext *sp20;
    Gfx *temp_s0;
    GraphicsContext *temp_v0;
    MtxF *temp_v0_2;
    s32 *temp_a3;

    temp_a3 = (thisx->params * 0x10) + &D_80A4F7A4;
    temp_v0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_v0->polyXlu.p;
    temp_s0->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_s0->words.w0 = 0xDE000000;
    temp_s0->unk8 = 0xFB000000;
    temp_s0->unkC = (s32) (thisx->unk14A | ~0xFF);
    temp_s0->unk10 = 0xDE000000U;
    temp_s0->unk14 = (s32) temp_a3->unk0;
    sp20 = temp_v0;
    thisx = thisx;
    sp28 = temp_a3;
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    temp_s0->unk18 = 0xDA380003;
    sp28 = temp_a3;
    thisx = thisx;
    temp_s0->unk1C = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s0->unk20 = 0xDE000000;
    temp_s0->unk24 = (s32) temp_a3->unk4;
    thisx = thisx;
    sp28 = temp_a3;
    temp_v0_2 = SysMatrix_GetCurrentState();
    temp_v0_2->mf[3][0] = thisx->unk154;
    temp_v0_2->mf[3][1] = thisx->unk158 + 5.0f;
    temp_v0_2->mf[3][2] = thisx->unk15C;
    temp_s0->unk28 = 0xDA380003;
    sp28 = temp_a3;
    thisx = thisx;
    sp2C = temp_v0_2;
    temp_s0->unk2C = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s0->unk30 = 0xDE000000;
    temp_s0->unk34 = (s32) temp_a3->unk4;
    temp_v0_2->mf[3][0] = thisx->unk160;
    temp_v0_2->mf[3][1] = thisx->unk164 + 5.0f;
    temp_v0_2->mf[3][2] = thisx->unk168;
    temp_s0->unk38 = 0xDA380003;
    sp28 = temp_a3;
    thisx = thisx;
    sp2C = temp_v0_2;
    temp_s0->unk3C = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s0->unk40 = 0xDE000000;
    temp_s0->unk44 = (s32) temp_a3->unk4;
    temp_v0_2->mf[3][0] = thisx->unk16C;
    temp_v0_2->mf[3][1] = thisx->unk170 + 5.0f;
    temp_v0_2->mf[3][2] = thisx->unk174;
    temp_s0->unk48 = 0xDA380003;
    sp28 = temp_a3;
    temp_s0->unk4C = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s0->unk50 = 0xDE000000;
    temp_s0->unk54 = (s32) temp_a3->unk4;
    temp_s0->unk58 = 0xDE000000;
    temp_s0->unk5C = (s32) temp_a3->unk8;
    sp20->polyXlu.p = temp_s0 + 0x60;
}

