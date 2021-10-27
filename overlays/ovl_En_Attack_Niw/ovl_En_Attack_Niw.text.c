typedef struct EnAttackNiw {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x5A];                 /* maybe part of unk_188[16]? */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0x5A];                 /* maybe part of unk_1E8[16]? */
    /* 0x248 */ void (*actionFunc)(EnAttackNiw *, GlobalContext *);
    /* 0x24C */ s16 unk_24C;                        /* inferred */
    /* 0x24E */ s16 unk_24E;                        /* inferred */
    /* 0x250 */ s16 unk_250;                        /* inferred */
    /* 0x252 */ s16 unk_252;                        /* inferred */
    /* 0x254 */ s16 unk_254;                        /* inferred */
    /* 0x256 */ s16 unk_256;                        /* inferred */
    /* 0x258 */ s16 unk_258;                        /* inferred */
    /* 0x25A */ s16 unk_25A;                        /* inferred */
    /* 0x25C */ f32 unk_25C;                        /* inferred */
    /* 0x260 */ f32 unk_260;                        /* inferred */
    /* 0x264 */ f32 unk_264;                        /* inferred */
    /* 0x268 */ char pad_268[0x8];                  /* maybe part of unk_264[3]? */
    /* 0x270 */ f32 unk_270;                        /* inferred */
    /* 0x274 */ f32 unk_274;                        /* inferred */
    /* 0x278 */ f32 unk_278;                        /* inferred */
    /* 0x27C */ f32 unk_27C;                        /* inferred */
    /* 0x280 */ f32 unk_280;                        /* inferred */
    /* 0x284 */ s16 unk_284;                        /* inferred */
    /* 0x286 */ char pad_286[0xA];                  /* maybe part of unk_284[6]? */
    /* 0x290 */ f32 unk_290;                        /* inferred */
    /* 0x294 */ f32 unk_294;                        /* inferred */
    /* 0x298 */ f32 unk_298;                        /* inferred */
    /* 0x29C */ char pad_29C[0x2C];                 /* maybe part of unk_298[12]? */
    /* 0x2C8 */ f32 unk_2C8;                        /* inferred */
    /* 0x2CC */ f32 unk_2CC;                        /* inferred */
    /* 0x2D0 */ char pad_2D0[0x4];
    /* 0x2D4 */ f32 unk_2D4;                        /* inferred */
    /* 0x2D8 */ f32 unk_2D8;                        /* inferred */
    /* 0x2DC */ f32 unk_2DC;                        /* inferred */
} EnAttackNiw;                                      /* size = 0x2E0 */

struct _mips2c_stack_EnAttackNiw_Destroy {};        /* size 0x0 */

struct _mips2c_stack_EnAttackNiw_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnAttackNiw_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnAttackNiw_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void (*sp28)(EnAttackNiw *, GlobalContext *); /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80958228 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809585B0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s16 sp1C;                            /* inferred */
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80958634 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0xC];                    /* maybe part of sp3C[4]? */
    /* 0x4C */ s16 sp4C;                            /* inferred */
    /* 0x4E */ s16 sp4E;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80958974 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80958BE4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80958F6C {};              /* size 0x0 */

void func_80958228(EnAttackNiw *arg0, GlobalContext *arg1, s16 arg2); /* static */
s32 func_809585B0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80958F6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060000E8;
extern FlexSkeletonHeader D_06002530;
static InitChainEntry D_80959120[4];                /* unable to generate initializer */

void EnAttackNiw_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f8;
    s32 temp_f18;
    EnAttackNiw *this = (EnAttackNiw *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80959120);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06002530, &D_060000E8, &this->unk_188, &this->unk_1E8, 0x10);
    if ((s32) this->actor.params < 0) {
        this->actor.params = 0;
    }
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.gravity = 0.0f;
    this->unk_290 = randPlusMinusPoint5Scaled(100.0f);
    this->unk_294 = randPlusMinusPoint5Scaled(10.0f);
    this->unk_298 = randPlusMinusPoint5Scaled(100.0f);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.flags &= -2;
    temp_f8 = Rand_ZeroOne() - 0.5f;
    this->actionFunc = func_80958634;
    temp_f18 = (s32) (temp_f8 * 60000.0f);
    this->actor.world.rot.y = (s16) temp_f18;
    this->actor.shape.rot.y = (s16) temp_f18;
}

void EnAttackNiw_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v1;
    s16 temp_v1_2;
    EnAttackNiw *this = (EnAttackNiw *) thisx;

    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0)) {
        temp_v1_2 = temp_v1->unk_290;
        if ((s32) temp_v1_2 > 0) {
            temp_v1->unk_290 = (s16) (temp_v1_2 - 1);
        }
    }
}

void func_80958228(EnAttackNiw *arg0, GlobalContext *arg1, s16 arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    u32 phi_a2;
    f32 phi_f0;

    phi_a2 = (u32) arg2;
    if (arg0->unk_24C == 0) {
        if (arg2 == 0) {
            arg0->unk_25C = 0.0f;
        } else {
            arg0->unk_25C = -10000.0f;
        }
        arg0->unk_24C = 3;
        arg0->unk_286 += 1;
        if ((arg0->unk_286 & 1) == 0) {
            arg0->unk_25C = 0.0f;
            if (arg2 == 0) {
                arg2 = arg2;
                arg0->unk_24C = (s16) (s32) Rand_ZeroFloat(30.0f);
                phi_a2 = (u32) arg2;
            }
        }
    }
    if (arg0->unk_250 == 0) {
        arg0->unk_28A += 1;
        arg0->unk_28A &= 1;
        switch (phi_a2) {
        case 0:
            arg0->unk_264 = 0.0f;
            arg0->unk_260 = 0.0f;
            break;
        case 1:
            arg0->unk_250 = 3;
            arg0->unk_264 = 7000.0f;
            arg0->unk_260 = 7000.0f;
            if (arg0->unk_28A == 0) {
                arg0->unk_264 = 0.0f;
                arg0->unk_260 = 0.0f;
            }
            break;
        case 2:
            arg0->unk_250 = 2;
            arg0->unk_264 = -10000.0f;
            arg0->unk_278 = 25000.0f;
            arg0->unk_270 = 25000.0f;
            arg0->unk_27C = 6000.0f;
            arg0->unk_274 = 6000.0f;
            arg0->unk_260 = -10000.0f;
            if (arg0->unk_28A == 0) {
                arg0->unk_270 = 8000.0f;
                phi_f0 = 8000.0f;
block_20:
                arg0->unk_278 = phi_f0;
            }
            break;
        case 3:
            arg0->unk_250 = 2;
            arg0->unk_270 = 10000.0f;
            arg0->unk_278 = 10000.0f;
            if (arg0->unk_28A == 0) {
                arg0->unk_270 = 3000.0f;
                phi_f0 = 3000.0f;
                goto block_20;
            }
            break;
        case 4:
            arg0->unk_24E = 5;
            arg0->unk_24C = arg0->unk_24E;
            break;
        case 5:
            arg0->unk_250 = 5;
            arg0->unk_270 = 14000.0f;
            arg0->unk_278 = 14000.0f;
            if (arg0->unk_28A == 0) {
                arg0->unk_270 = 10000.0f;
                phi_f0 = 10000.0f;
                goto block_20;
            }
            break;
        }
    }
    temp_f0 = arg0->unk_280;
    if (arg0->unk_2B8 != temp_f0) {
        Math_ApproachF(arg0 + 0x2B8, temp_f0, 0.5f, 4000.0f);
    }
    temp_f0_2 = arg0->unk_25C;
    if (arg0->unk_2B4 != temp_f0_2) {
        Math_ApproachF(arg0 + 0x2B4, temp_f0_2, 0.5f, 4000.0f);
    }
    temp_f0_3 = arg0->unk_264;
    if (arg0->unk_29C != temp_f0_3) {
        Math_ApproachF(arg0 + 0x29C, temp_f0_3, 0.8f, 7000.0f);
    }
    temp_f0_4 = arg0->unk_278;
    if (arg0->unk_2A0 != temp_f0_4) {
        Math_ApproachF(arg0 + 0x2A0, temp_f0_4, 0.8f, 7000.0f);
    }
    temp_f0_5 = arg0->unk_27C;
    if (arg0->unk_2A4 != temp_f0_5) {
        Math_ApproachF(arg0 + 0x2A4, temp_f0_5, 0.8f, 7000.0f);
    }
    temp_f0_6 = arg0->unk_260;
    if (arg0->unk_2A8 != temp_f0_6) {
        Math_ApproachF(arg0 + 0x2A8, temp_f0_6, 0.8f, 7000.0f);
    }
    temp_f0_7 = arg0->unk_270;
    if (arg0->unk_2AC != temp_f0_7) {
        Math_ApproachF(arg0 + 0x2AC, temp_f0_7, 0.8f, 7000.0f);
    }
    temp_f0_8 = arg0->unk_274;
    if (arg0->unk_2B0 != temp_f0_8) {
        Math_ApproachF(arg0 + 0x2B0, temp_f0_8, 0.8f, 7000.0f);
    }
}

s32 func_809585B0(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 sp1C;
    s32 phi_v0;

    Actor_SetHeight(arg0, arg0[2].targetArrowOffset);
    func_800B8898(arg1, arg0, &sp1E, &sp1C);
    if ((arg0->projectedPos.z < -20.0f) || ((s32) sp1E < 0) || ((s32) sp1E >= 0x141) || ((s32) sp1C < 0) || (phi_v0 = 1, (((s32) sp1C < 0xF1) == 0))) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_80958634(EnAttackNiw *this, GlobalContext *globalCtx) {
    s16 sp4E;
    s16 sp4C;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    PosRot *sp2C;
    PosRot *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    this->actor.speedXZ = 10.0f;
    temp_f0 = globalCtx->view.at.x;
    temp_a0 = &this->actor.world;
    temp_a1 = &sp34;
    sp34 = temp_f0 + ((this->unk_290 + temp_f0) - globalCtx->view.eye.x);
    sp38 = globalCtx->view.at.y + ((this->unk_294 + globalCtx->view.at.y) - globalCtx->view.eye.y);
    sp2C = temp_a0;
    sp3C = globalCtx->view.at.z + ((this->unk_298 + globalCtx->view.at.z) - globalCtx->view.eye.z);
    this->unk_2CC = (f32) Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) temp_a1);
    this->unk_2C8 = (f32) Math_Vec3f_Pitch((Vec3f *) temp_a0, (Vec3f *) &sp34) * -1.0f;
    Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (s32) this->unk_2CC, 5, (s16) (s32) this->unk_2D4, (s16) 0);
    Math_SmoothStepToS((s16 *) &this->actor.world.rot, (s16) (s32) this->unk_2C8, 5, (s16) (s32) this->unk_2D4, (s16) 0);
    Math_ApproachF(&this->unk_2D4, 5000.0f, 1.0f, 100.0f);
    Actor_SetHeight((Actor *) this, this->unk_2DC);
    func_800B8898(globalCtx, (Actor *) this, &sp4E, &sp4C);
    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 8) != 0) {
        this->unk_2CC = (f32) this->actor.yawTowardsPlayer;
        this->unk_252 = 0;
        temp_v0_2 = this->unk_252;
        this->unk_254 = 0x64;
        this->unk_2D4 = 0.0f;
        this->unk_27C = 0.0f;
        this->unk_2C8 = (f32) this->actor.world.rot.x - 3000.0f;
        this->unk_274 = 0.0f;
        this->unk_250 = temp_v0_2;
        this->unk_24E = temp_v0_2;
        this->unk_24C = temp_v0_2;
        this->actionFunc = func_80958974;
        this->unk_280 = 0.0f;
        this->actor.gravity = -0.2f;
        this->unk_2D8 = 5.0f;
        return;
    }
    if (((this->actor.projectedPos.z > 0.0f) && (fabsf(sp34 - this->actor.world.pos.x) < 50.0f) && (fabsf(sp38 - this->actor.world.pos.y) < 50.0f) && (fabsf(sp3C - this->actor.world.pos.z) < 50.0f)) || ((temp_v0 & 1) != 0)) {
        this->unk_252 = 0;
        temp_v0_3 = this->unk_252;
        this->unk_2D4 = 0.0f;
        this->unk_274 = 0.0f;
        this->unk_27C = 0.0f;
        this->unk_250 = temp_v0_3;
        this->unk_24E = temp_v0_3;
        this->unk_2CC = (f32) this->actor.yawTowardsPlayer;
        this->unk_24C = temp_v0_3;
        this->unk_2C8 = (f32) this->actor.world.rot.x - 2000.0f;
        this->unk_280 = 0.0f;
        this->actionFunc = func_80958974;
        this->actor.gravity = -0.2f;
        this->unk_2D8 = 5.0f;
        return;
    }
    this->unk_24C = 0xA;
    this->unk_25C = -10000.0f;
    this->unk_280 = -3000.0f;
    func_80958228(this, globalCtx, 2);
}

void func_80958974(EnAttackNiw *this, GlobalContext *globalCtx) {
    if (func_809585B0((Actor *) this, globalCtx) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        if (this->unk_252 == 0) {
            this->unk_252 = 3;
            this->actor.velocity.y = 3.5f;
        }
        if (this->actor.gravity != -2.0f) {
            this->unk_25A = 0x32;
            this->unk_254 = 0x64;
            this->unk_270 = 14000.0f;
            this->unk_278 = 14000.0f;
            this->unk_274 = 0.0f;
            this->unk_27C = 0.0f;
            this->unk_2CC = (f32) this->actor.yawTowardsPlayer;
            this->unk_260 = 0.0f;
            this->unk_264 = 0.0f;
            this->unk_2C8 = 0.0f;
            this->actor.gravity = -2.0f;
        }
    }
    if (this->unk_254 == 0x32) {
        this->unk_2CC = randPlusMinusPoint5Scaled(200.0f) + (f32) this->actor.yawTowardsPlayer;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (s32) this->unk_2CC, 2, (s16) (s32) this->unk_2D4, (s16) 0);
    Math_SmoothStepToS((s16 *) &this->actor.world.rot, (s16) (s32) this->unk_2C8, 2, (s16) (s32) this->unk_2D4, (s16) 0);
    Math_ApproachF(&this->unk_2D4, 10000.0f, 1.0f, 1000.0f);
    Math_ApproachF(&this->actor.speedXZ, this->unk_2D8, 0.9f, 1.0f);
    if ((this->actor.gravity == -2.0f) && (this->unk_25A == 0) && (((this->actor.bgCheckFlags & 8) != 0) || (this->unk_254 == 0))) {
        this->unk_2D8 = 0.0f;
        this->actor.gravity = 0.0f;
        this->unk_2D4 = 0.0f;
        this->actionFunc = func_80958BE4;
        this->unk_2C8 = (f32) this->actor.world.rot.x - 5000.0f;
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_80958228(this, globalCtx, 5);
        return;
    }
    func_80958228(this, globalCtx, 2);
}

void func_80958BE4(EnAttackNiw *this, GlobalContext *globalCtx) {
    if (func_809585B0((Actor *) this, globalCtx) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Math_SmoothStepToS((s16 *) &this->actor.world.rot, (s16) (s32) this->unk_2C8, 5, (s16) (s32) this->unk_2D4, (s16) 0);
    Math_ApproachF(&this->unk_2D4, 5000.0f, 1.0f, 100.0f);
    Math_ApproachF(&this->actor.velocity.y, 5.0f, 0.3f, 1.0f);
    func_80958228(this, globalCtx, 2);
}

void EnAttackNiw_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp44;
    Actor *sp40;
    f32 sp34;
    ? sp30;
    void (*sp28)(EnAttackNiw *, GlobalContext *);
    Actor *temp_v0_8;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    EnAttackNiw *this = (EnAttackNiw *) thisx;

    sp40 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_24C;
    this->unk_284 += 1;
    if (temp_v0 != 0) {
        this->unk_24C = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_250;
    if (temp_v0_2 != 0) {
        this->unk_250 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_252;
    if (temp_v0_3 != 0) {
        this->unk_252 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_256;
    if (temp_v0_4 != 0) {
        this->unk_256 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk_258;
    if (temp_v0_5 != 0) {
        this->unk_258 = temp_v0_5 - 1;
    }
    temp_v0_6 = this->unk_254;
    if (temp_v0_6 != 0) {
        this->unk_254 = temp_v0_6 - 1;
    }
    temp_v0_7 = this->unk_25A;
    if (temp_v0_7 != 0) {
        this->unk_25A = temp_v0_7 - 1;
    }
    this->unk_BC = (unaligned s32) this->unk_30;
    this->actor.shape.shadowScale = 15.0f;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 60.0f, 0x1DU);
    if (func_80958634 == this->actionFunc) {
        Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    } else {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    if (this->actor.floorHeight <= -32000.0f) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (((this->actor.bgCheckFlags & 0x20) != 0) && (func_80958BE4 != this->actionFunc)) {
        sp28 = func_80958BE4;
        Math_Vec3f_Copy((Vec3f *) &sp30, (Vec3f *) &this->actor.world);
        sp34 += this->actor.yDistToWater;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp30, NULL, NULL, (s16) 0, (s16) 0x190);
        this->unk_2D4 = 0.0f;
        this->actor.gravity = 0.0f;
        this->unk_2D8 = 0.0f;
        this->actionFunc = func_80958BE4;
        this->unk_2C8 = (f32) this->actor.world.rot.x - 5000.0f;
        return;
    }
    if (this->actor.xyzDistToPlayerSq < (20.0f * 20.0f)) {
        temp_v0_8 = this->actor.parent;
        if ((temp_v0_8->update != 0) && (temp_v0_8 != 0) && (temp_v0_8 != 0) && ((s16) temp_v0_8[1].colorFilterParams == 0) && (sp40->unk_D5C == 0)) {
            sp44 = temp_v0_8;
            func_800B8D50(globalCtx, (Actor *) this, 2.0f, this->actor.world.rot.y, 0.0f, 0x10U);
            sp44[1].colorFilterParams = 0x46;
        }
    }
    if (this->unk_256 == 0) {
        this->unk_256 = 0x1E;
        Audio_PlayActorSound2((Actor *) this, 0x2812U);
    }
    if (this->unk_258 == 0) {
        this->unk_258 = 7;
        Audio_PlayActorSound2((Actor *) this, 0x38FFU);
    }
}

s32 func_80958F6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xD) {
        arg4->y += (s32) arg5[2].world.pos.z;
    }
    if (arg1 == 0xF) {
        arg4->z += (s32) arg5->unk_2B8;
    }
    if (arg1 == 0xB) {
        arg4->x += (s32) arg5[2].world.pos.y;
        arg4->y += (s32) arg5[2].world.pos.x;
        arg4->z += (s32) arg5->unk_2A8;
    }
    if (arg1 == 7) {
        arg4->x += (s32) arg5->unk_2A4;
        arg4->y += (s32) arg5->unk_2A0;
        arg4->z += (s32) arg5->unk_29C;
    }
    return 0;
}

void EnAttackNiw_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnAttackNiw *this = (EnAttackNiw *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80958F6C, NULL, (Actor *) this);
}
