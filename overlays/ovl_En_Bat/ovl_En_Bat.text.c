s32 func_80A437CC(GlobalContext *arg0);             /* static */
void func_80A43810(Actor *arg0, s32 arg1);          /* static */
void func_80A43870(EnBat *arg0);                    /* static */
void func_80A438F8(EnBat *arg0);                    /* static */
void func_80A43CA0(EnBat *arg0);                    /* static */
void func_80A43F60(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A44294(Actor *arg0);                    /* static */
void func_80A4431C(EnBat *this, GlobalContext *globalCtx); /* static */
void func_80A443D8(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_060000A0;
extern ? D_060000C8;
static ColliderSphereInit D_80A44A00 = {
    {3, 0x10, 9, 0x39, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
    {1, {{0, 0, 0}, 0xF}, 0x64},
};
static DamageTable D_80A44A2C = {
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
static CollisionCheckInfoInit D_80A44A4C = {1, 0xF, 0x1E, 0xA};
static InitChainEntry D_80A44A54;                   /* unable to generate initializer */
static ? D_80A44A64;                                /* unable to generate initializer */
static s32 D_80A44C70;
static s32 D_80A44C74;

typedef struct EnBat {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnBat *, GlobalContext *);
    /* 0x0148 */ u8 unk148;                         /* inferred */
    /* 0x0149 */ u8 unk149;                         /* inferred */
    /* 0x014A */ s16 unk14A;                        /* inferred */
    /* 0x014C */ s16 unk14C;                        /* inferred */
    /* 0x014E */ s16 unk14E;                        /* inferred */
    /* 0x0150 */ s16 unk150;                        /* inferred */
    /* 0x0152 */ s16 unk152;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ f32 unk158;                        /* inferred */
    /* 0x015C */ f32 unk15C;                        /* inferred */
    /* 0x0160 */ Vec3f unk160;                      /* inferred */
    /* 0x016C */ Vec3f unk16C;                      /* inferred */
    /* 0x0178 */ Vec3f unk178;                      /* inferred */
    /* 0x0184 */ ColliderSphere unk184;             /* inferred */
} EnBat;                                            /* size 0x1DC */

void EnBat_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBat *this = (EnBat *) thisx;
    ActorContext *temp_s1;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    s32 temp_f8;

    Actor_ProcessInitChain(&this->actor, &D_80A44A54);
    Collider_InitAndSetSphere(globalCtx, &this->unk184, &this->actor, &D_80A44A00);
    this->unk184.dim.worldSphere.radius = D_80A44A00.dim.modelSphere.radius;
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80A44A2C, &D_80A44A4C);
    ActorShape_Init(&this->actor.shape, 2000.0f, func_800B3FC0, 25.0f);
    temp_f8 = (s32) (Rand_ZeroOne() * 9.0f);
    this->unk149 = ((s32) this->actor.params >> 5) & 7;
    this->unk14A = ((s32) this->actor.params >> 8) & 0xFF;
    this->actor.params &= 0x1F;
    this->actor.yDistToWater = -32000.0f;
    this->unk152 = (s16) temp_f8;
    Actor_SetHeight(&this->actor, 20.0f);
    if (D_80A44C74 != 0) {
        Actor_MarkForDeath(&this->actor);
    } else if (func_80A437CC(globalCtx) != 0) {
        if (Flags_GetSwitch(globalCtx, (s32) this->unk14A) != 0) {
            Actor_MarkForDeath(&this->actor);
        } else {
            this->actor.room = -1;
        }
    }
    if ((this->unk149 & 4) != 0) {
        this->actor.params = 0;
        func_80A43870(this);
        return;
    }
    if (this->actor.params == 0x1F) {
        this->actor.params = 0;
    }
    func_80A438F8(this);
    if ((s32) this->actor.params >= 2) {
        temp_s1 = &globalCtx->actorCtx;
        do {
            temp_f20 = randPlusMinusPoint5Scaled(200.0f);
            temp_f22 = randPlusMinusPoint5Scaled(100.0f);
            temp_f24 = randPlusMinusPoint5Scaled(200.0f);
            temp_f26 = randPlusMinusPoint5Scaled(8192.0f);
            Actor_SpawnAsChildAndCutscene(temp_s1, globalCtx, 0x15B, temp_f20 + this->actor.world.pos.x, temp_f22 + this->actor.world.pos.y, temp_f24 + this->actor.world.pos.z, (s16) (s32) temp_f26, (s16) (s32) (Rand_ZeroOne() * 65535.0f), (s16) 0, (this->unk149 << 5) | (this->unk14A << 8), -1U, (s32) this->actor.unk20, NULL);
            this->actor.params += -1;
        } while ((s32) this->actor.params >= 2);
    }
}

void EnBat_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBat *this = (EnBat *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk184);
}

s32 func_80A437CC(GlobalContext *arg0) {
    if ((((s32) gSaveContext.day % 5) == 2) && (arg0->sceneNum == 0x43)) {
        return 1;
    }
    return 0;
}

void func_80A43810(Actor *arg0, s32 arg1) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk152;
    arg0->unk152 = (s16) (temp_v0 + arg1);
    temp_v0_2 = arg0->unk152;
    if ((s32) temp_v0_2 >= 9) {
        arg0->unk152 = (s16) (temp_v0_2 - 9);
    }
    if (((s32) temp_v0 < 5) && ((s32) arg0->unk152 >= 5)) {
        Audio_PlayActorSound2(arg0, 0x3841U);
    }
}

void func_80A43870(EnBat *arg0) {
    arg0->unk184.base.acFlags |= 1;
    arg0->unk184.base.atFlags |= 1;
    arg0->actionFunc = func_80A438D4;
    arg0->unk184.dim.worldSphere.center.x = (s16) (s32) arg0->actor.focus.pos.x;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk184.dim.worldSphere.center.y = (s16) (s32) arg0->actor.focus.pos.y;
    arg0->unk184.dim.worldSphere.center.z = (s16) (s32) arg0->actor.focus.pos.z;
}

void func_80A438D4(EnBat *this, GlobalContext *globalCtx) {
    func_80A43810((Actor *)1);
}

void func_80A438F8(EnBat *arg0) {
    arg0->unk14C = 0x64;
    arg0->unk184.base.acFlags |= 1;
    arg0->actionFunc = func_80A4392C;
    arg0->actor.speedXZ = 3.5f;
}

void func_80A4392C(EnBat *this, GlobalContext *globalCtx) {
    s32 sp2C;
    s32 sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s32 temp_v0;
    u16 temp_v1;
    s32 phi_v0;
    s32 phi_v0_2;
    s16 phi_v0_3;

    func_80A43810(&this->actor, 1);
    temp_v0 = Math_ScaledStepToS(&this->actor.shape.rot.y, this->unk150, 0x300);
    temp_v1 = this->actor.bgCheckFlags;
    if ((temp_v1 & 8) != 0) {
        this->actor.bgCheckFlags = temp_v1 & 0xFFF7;
        this->unk150 = this->actor.wallYaw;
    } else {
        sp2C = temp_v0;
        if (Math3D_XZDistanceSquared(this->actor.world.pos.x, this->actor.world.pos.z, this->actor.home.pos.x, this->actor.home.pos.z) > 90000.0f) {
            this->unk150 = Actor_YawToPoint(&this->actor, &this->actor.home.pos);
        } else if ((temp_v0 != 0) && (Rand_ZeroOne() < 0.015f)) {
            sp24 = Rand_ZeroOne();
            phi_v0 = 1;
            if (Rand_ZeroOne() < 0.5f) {
                phi_v0 = -1;
            }
            this->unk150 = (phi_v0 * ((s32) (4096.0f * sp24) + 0x1000)) + this->actor.shape.rot.y;
        }
    }
    if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.yDistToWater > -40.0f)) {
        this->unk14E = -0x1000;
    } else {
        temp_f2 = this->actor.home.pos.y;
        temp_f0 = this->actor.world.pos.y;
        if (temp_f0 < (temp_f2 - 100.0f)) {
            this->unk14E = -0x800 - (s32) (Rand_ZeroOne() * 2048.0f);
        } else if ((temp_f2 + 100.0f) < temp_f0) {
            this->unk14E = (s32) (Rand_ZeroOne() * 2048.0f) + 0x800;
        } else if ((Math_ScaledStepToS(&this->actor.shape.rot.x, this->unk14E, 0x100) != 0) && (Rand_ZeroOne() < 0.015f)) {
            phi_v0_2 = 1;
            if (Rand_ZeroOne() < 0.5f) {
                phi_v0_2 = -1;
            }
            sp28 = phi_v0_2;
            this->unk14E += ((s32) (1024.0f * Rand_ZeroOne()) + 0x400) * phi_v0_2;
            temp_v1_2 = this->unk14E;
            if ((s32) temp_v1_2 < -0x1000) {
                this->unk14E = -0x1000;
            } else {
                phi_v0_3 = temp_v1_2;
                if ((s32) temp_v1_2 >= 0x1001) {
                    phi_v0_3 = 0x1000;
                }
                this->unk14E = phi_v0_3;
            }
        }
    }
    temp_v0_2 = this->unk14C;
    if (temp_v0_2 != 0) {
        this->unk14C = temp_v0_2 - 1;
    }
    if ((this->actor.xzDistToPlayer < 300.0f) && (this->unk14C == 0) && (Player_GetMask(globalCtx) != 0x10) && (D_80A44C70 < 3) && (((this->unk149 & 2) == 0) || (fabsf(this->actor.yDistToPlayer) < 150.0f))) {
        func_80A43CA0(this);
    }
}

void func_80A43CA0(EnBat *arg0) {
    arg0->unk184.base.atFlags |= 1;
    arg0->unk14C = 0x12C;
    arg0->actor.speedXZ = 4.0f;
    D_80A44C70 += 1;
    arg0->actionFunc = func_80A43CE8;
}

void func_80A43CE8(EnBat *this, GlobalContext *globalCtx) {
    Actor *sp44;
    s32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0_4;
    s16 phi_a1;
    s32 phi_v0;
    s16 phi_v0_2;

    sp44 = globalCtx->actorCtx.actorList[2].first;
    func_80A43810(&this->actor, 2);
    temp_v0 = Actor_IsActorFacingLink(&this->actor, 0x2800);
    sp40 = temp_v0;
    if (temp_v0 != 0) {
        sp34 = sp44->world.pos.x;
        sp38 = sp44->world.pos.y + 20.0f;
        sp3C = sp44->world.pos.z;
        temp_v0_2 = Actor_PitchToPoint(&this->actor, (Vec3f *) &sp34);
        if (temp_v0_2 < -0x3000) {
            phi_a1 = -0x3000;
        } else {
            phi_v0_2 = (s16) temp_v0_2;
            if ((s32) (s16) temp_v0_2 >= 0x3001) {
                phi_v0_2 = 0x3000;
            }
            phi_a1 = phi_v0_2;
        }
        Math_SmoothStepToS(&this->actor.shape.rot.x, phi_a1, 2, 0x400, (s16) 0x40);
    } else {
        Math_SmoothStepToS(&this->actor.shape.rot.x, -0x800, 2, 0x100, (s16) 0x10);
    }
    if ((sp40 != 0) || (this->actor.xzDistToPlayer > 80.0f)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xC00, (s16) 0xC0);
    }
    this->unk14C += -1;
    if ((this->unk14C == 0) || ((this->unk184.base.atFlags & 2) != 0) || (Player_GetMask(globalCtx) == 0x10) || (temp_v0_3 = this->actor.bgCheckFlags, ((temp_v0_3 & 1) != 0)) || ((sp44->unkA6C << 8) < 0) || (this->actor.yDistToWater > -40.0f)) {
        temp_v0_4 = this->unk184.base.atFlags;
        if ((temp_v0_4 & 2) != 0) {
            this->unk184.base.atFlags = temp_v0_4 & 0xFFFD;
            Audio_PlayActorSound2(&this->actor, 0x3840U);
        }
        this->unk184.base.atFlags &= 0xFFFE;
        D_80A44C70 += -1;
        func_80A438F8(this);
        return;
    }
    if ((temp_v0_3 & 8) != 0) {
        temp_v1 = this->actor.wallYaw - this->actor.yawTowardsPlayer;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 >= 0x6801) {
            D_80A44C70 += -1;
            this->unk184.base.atFlags &= 0xFFFE;
            this->actor.bgCheckFlags &= 0xFFF7;
            this->unk150 = this->actor.wallYaw;
            func_80A438F8(this);
        }
    }
}

void func_80A43F60(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f6;
    u8 temp_v0;

    arg0->flags &= -2;
    Enemy_StartFinishingBlow(arg1, arg0);
    temp_f6 = arg0->speedXZ * Math_CosS(arg0->world.rot.x);
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = temp_f6;
    Audio_PlayActorSound2(arg0, 0x3842U);
    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 3) {
        arg0->unk148 = 0xA;
        arg0->unk15C = 1.0f;
        arg0->unk158 = 0.67499995f;
        arg0->unk154 = 0.45f;
    } else if (temp_v0 == 4) {
        arg0->unk148 = 0x14;
        arg0->unk15C = 4.0f;
        arg0->unk154 = 0.45f;
        Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk1AA, (f32) arg0->unk1AC, (f32) arg0->unk1AE, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
    } else if (temp_v0 == 2) {
        arg0->unk148 = 0;
        arg0->unk15C = 4.0f;
        arg0->unk154 = 0.45f;
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    if ((arg0->flags & 0x8000) != 0) {
        arg0->speedXZ = 0.0f;
    }
    arg0->flags |= 0x10;
    arg0->unk195 = (u8) (arg0->unk195 & 0xFFFE);
    arg0->unk144 = func_80A44114;
}

void func_80A44114(EnBat *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    PosRot *temp_s0;
    Actor *phi_s0;
    Actor *phi_s0_2;
    Actor *phi_s0_3;

    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    this->actor.colorFilterTimer = 0x28;
    if ((this->actor.flags & 0x8000) == 0) {
        if (this->unk148 != 0xA) {
            Math_ScaledStepToS(&this->actor.shape.rot.x, 0x4000, 0x200);
            this->actor.shape.rot.z += 0x1780;
        }
        if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.floorHeight == -32000.0f)) {
            if (this->unk148 == 0xA) {
                func_800BF7CC(globalCtx, &this->actor, (Vec3f []) &this->unk160, 3, 2, 0.2f, 0.2f);
            }
            temp_s0 = &this->actor.world;
            func_800B3030(globalCtx, &temp_s0->pos, &D_801D15B0, &D_801D15B0, (s16) 0x64, (s16) 0, 0);
            Audio_PlaySoundAtPosition(globalCtx, &temp_s0->pos, 0xB, 0x3878U);
            Actor_MarkForDeath(&this->actor);
            phi_s0 = NULL;
            if (this->actor.room == -1) {
loop_8:
                temp_v0 = func_ActorCategoryIterateById(globalCtx, phi_s0, 5, 0x15B);
                phi_s0_2 = temp_v0;
                phi_s0_3 = temp_v0;
                if (temp_v0 != 0) {
                    if (this == temp_v0) {
                        phi_s0_2 = temp_v0->next;
                        goto block_11;
                    }
                } else {
block_11:
                    phi_s0 = phi_s0_2;
                    phi_s0_3 = phi_s0_2;
                    if (phi_s0_2 != 0) {
                        goto loop_8;
                    }
                }
                if (phi_s0_3 == 0) {
                    Actor_SetSwitchFlag(globalCtx, (s32) this->unk14A);
                }
            }
        }
    }
}

void func_80A44294(Actor *arg0) {
    void (*sp24)(EnBat *, GlobalContext *);

    if (func_80A4431C != arg0->unk144) {
        arg0->shape.yOffset = 700.0f;
        arg0->velocity.y = 0.0f;
        arg0->speedXZ = 0.0f;
        arg0->world.pos.y += 13.0f;
    }
    sp24 = func_80A4431C;
    Audio_PlayActorSound2(arg0, 0x389EU);
    func_800BCB70(arg0, 0, 0xFF, 0, (s16) (s32) arg0->unk14C);
    arg0->unk144 = func_80A4431C;
}

void func_80A4431C(EnBat *arg0, GlobalContext *arg1) {
    s16 *temp_a0;
    s16 temp_v0;

    temp_a0 = arg0 + 0xBC;
    arg0 = arg0;
    Math_ScaledStepToS(temp_a0, 0, 0x100);
    if (((arg0->actor.bgCheckFlags & 1) != 0) || (arg0->actor.floorHeight == -32000.0f)) {
        temp_v0 = arg0->unk14C;
        if (temp_v0 != 0) {
            arg0->unk14C = temp_v0 - 1;
        }
        if (arg0->unk14C == 0) {
            func_80A438F8(arg0);
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    arg0->actor.colorFilterTimer = 0x28;
    if (arg0->unk15C > 0.0f) {
        arg0->unk15C = 2.0f;
    }
}

void func_80A443D8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk195;
    if ((temp_v0 & 2) != 0) {
        arg0->unk195 = (u8) (temp_v0 & 0xFFFD);
        func_800BE258(arg0, arg0 + 0x19C);
        temp_a0 = arg0;
        temp_a0->unk194 = (u8) (temp_a0->unk194 & 0xFFFE);
        if (func_80A43CE8 == temp_a0->unk144) {
            D_80A44C70 += -1;
        }
        temp_v0_2 = temp_a0->colChkInfo.damageEffect;
        if (temp_v0_2 == 5) {
            temp_a0->unk14C = 0x28;
            temp_a0->unk148 = 0x20;
            temp_a0->unk15C = 2.0f;
            temp_a0->unk154 = 0.45f;
            func_80A44294(temp_a0);
            return;
        }
        if (temp_v0_2 == 1) {
            temp_a0->unk14C = 0x28;
            func_80A44294(temp_a0);
            return;
        }
        arg0 = temp_a0;
        Actor_ApplyDamage(temp_a0);
        func_80A43F60(arg0, arg1);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnBat_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBat *this = (EnBat *) thisx;
    Vec3f sp34;
    void (*sp30)(EnBat *, GlobalContext *);
    Vec3f *sp2C;
    Vec3f *temp_a1;
    f32 temp_f0;
    void (*temp_v1)(EnBat *, GlobalContext *);

    if (this->actor.room == -1) {
        D_80A44C74 = 1;
    }
    func_80A443D8(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    if (func_80A4431C != this->actionFunc) {
        sp30 = func_80A4431C;
        Math_StepToF(&this->actor.shape.yOffset, 2000.0f, 200.0f);
    }
    if (func_80A438D4 != this->actionFunc) {
        temp_a1 = &this->actor.prevPos;
        this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        sp30 = func_80A4431C;
        sp2C = temp_a1;
        Math_Vec3f_Copy(&sp34, temp_a1);
        if ((this->actor.colChkInfo.health != 0) && (func_80A4431C != this->actionFunc)) {
            Actor_SetVelocityAndMoveXYRotation(&this->actor);
        } else {
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        }
        temp_v1 = this->actionFunc;
        if (func_80A43CE8 == temp_v1) {
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 12.0f, 15.0f, 50.0f, 5U);
        } else if ((func_80A4392C != temp_v1) || ((this->actor.xzDistToPlayer < 400.0f) && (this->actor.projectedPos.z > 0.0f))) {
            if ((this->unk149 & 1) != 0) {
                Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 12.0f, 15.0f, 50.0f, 5U);
            } else {
                Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 12.0f, 15.0f, 50.0f, 4U);
            }
        } else {
            Math_Vec3f_Copy(sp2C, &sp34);
        }
        Actor_SetHeight(&this->actor, this->actor.shape.yOffset * 0.01f);
        this->unk184.dim.worldSphere.center.x = (s16) (s32) this->actor.focus.pos.x;
        this->unk184.dim.worldSphere.center.y = (s16) (s32) this->actor.focus.pos.y;
        this->unk184.dim.worldSphere.center.z = (s16) (s32) this->actor.focus.pos.z;
    }
    if ((this->unk184.base.atFlags & 1) != 0) {
        sp30 = func_80A43CE8;
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk184.base);
    }
    if (func_80A43CE8 == this->actionFunc) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk184.base);
    }
    if ((this->unk184.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk184.base);
    }
    if (this->unk15C > 0.0f) {
        if (this->unk148 != 0xA) {
            Math_StepToF(&this->unk15C, 0.0f, 0.05f);
            temp_f0 = (this->unk15C + 1.0f) * 0.225f;
            this->unk154 = temp_f0;
            if (temp_f0 > 0.45f) {
                this->unk154 = 0.45f;
                return;
            }
            this->unk154 = this->unk154;
            return;
        }
        if (Math_StepToF(&this->unk158, 0.45f, 0.0112499995f) == 0) {
            func_800B9010(&this->actor, 0x20B2U);
        }
        // Duplicate return node #32. Try simplifying control flow for better match
    }
}

void EnBat_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBat *this = (EnBat *) thisx;
    Gfx *sp58;
    GraphicsContext *sp54;
    s16 sp3A;
    Vec3f *sp34;
    Gfx *temp_v1;
    GraphicsContext *temp_a1;
    Vec3f *temp_a0;
    s16 temp_v0;
    s16 phi_a2;

    if (this->actor.projectedPos.z > 0.0f) {
        temp_a1 = globalCtx->state.gfxCtx;
        temp_v1 = temp_a1->polyOpa.p;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
        temp_v1->unk8 = 0xDA380003;
        sp54 = temp_a1;
        sp58 = temp_v1;
        temp_v1->unkC = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1->unk14 = &D_060000A0;
        temp_v1->unk10 = 0xDE000000;
        temp_v1->unk1C = &D_060000C8;
        temp_v1->unk18 = 0xDE000000;
        temp_v1->unk20 = 0xDE000000;
        temp_v1->unk24 = (s32) *(&D_80A44A64 + (this->unk152 * 4));
        temp_a1->polyOpa.p = temp_v1 + 0x28;
    }
    temp_a0 = &this->unk160;
    if (this->unk15C > 0.0f) {
        temp_v0 = this->unk152;
        if ((s32) temp_v0 < 4) {
            phi_a2 = (s16) (temp_v0 * 0xAAA);
        } else {
            phi_a2 = 0;
            if ((s32) temp_v0 >= 5) {
                phi_a2 = (s16) ((temp_v0 * 0xAAA) - 0x5550);
            }
        }
        sp34 = temp_a0;
        sp3A = phi_a2;
        SysMatrix_GetStateTranslation(temp_a0);
        SysMatrix_InsertZRotation_s(phi_a2, 1);
        SysMatrix_GetStateTranslationAndScaledX(1700.0f, &this->unk16C);
        SysMatrix_InsertZRotation_s((s16) ((s32) phi_a2 * -2), 1);
        SysMatrix_GetStateTranslationAndScaledX(-1700.0f, &this->unk178);
        func_800BE680(globalCtx, &this->actor, (Vec3f []) sp34, 3, this->unk154, this->unk158, this->unk15C, (u8) (s32) this->unk148);
    }
}

