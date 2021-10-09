void func_80958228(EnAttackNiw *arg0, GlobalContext *arg1, s16 arg2); /* static */
s32 func_809585B0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80958F6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060000E8;
extern FlexSkeletonHeader D_06002530;
static InitChainEntry D_80959120;                   /* unable to generate initializer */

typedef struct EnAttackNiw {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x5A];                 /* maybe part of unk188[16]? */
    /* 0x01E8 */ Vec3s unk1E8;                      /* inferred */
    /* 0x01EE */ char pad1EE[0x5A];                 /* maybe part of unk1E8[16]? */
    /* 0x0248 */ void (*actionFunc)(EnAttackNiw *, GlobalContext *);
    /* 0x024C */ s16 unk24C;                        /* inferred */
    /* 0x024E */ s16 unk24E;                        /* inferred */
    /* 0x0250 */ s16 unk250;                        /* inferred */
    /* 0x0252 */ s16 unk252;                        /* inferred */
    /* 0x0254 */ s16 unk254;                        /* inferred */
    /* 0x0256 */ s16 unk256;                        /* inferred */
    /* 0x0258 */ s16 unk258;                        /* inferred */
    /* 0x025A */ s16 unk25A;                        /* inferred */
    /* 0x025C */ f32 unk25C;                        /* inferred */
    /* 0x0260 */ f32 unk260;                        /* inferred */
    /* 0x0264 */ f32 unk264;                        /* inferred */
    /* 0x0268 */ char pad268[0x8];                  /* maybe part of unk264[3]? */
    /* 0x0270 */ f32 unk270;                        /* inferred */
    /* 0x0274 */ f32 unk274;                        /* inferred */
    /* 0x0278 */ f32 unk278;                        /* inferred */
    /* 0x027C */ f32 unk27C;                        /* inferred */
    /* 0x0280 */ f32 unk280;                        /* inferred */
    /* 0x0284 */ s16 unk284;                        /* inferred */
    /* 0x0286 */ s16 unk286;                        /* inferred */
    /* 0x0288 */ char pad288[0x2];                  /* maybe part of unk286[2]? */
    /* 0x028A */ s16 unk28A;                        /* inferred */
    /* 0x028C */ char pad28C[0x4];                  /* maybe part of unk28A[3]? */
    /* 0x0290 */ f32 unk290;                        /* inferred */
    /* 0x0294 */ f32 unk294;                        /* inferred */
    /* 0x0298 */ f32 unk298;                        /* inferred */
    /* 0x029C */ f32 unk29C;                        /* inferred */
    /* 0x02A0 */ f32 unk2A0;                        /* inferred */
    /* 0x02A4 */ f32 unk2A4;                        /* inferred */
    /* 0x02A8 */ f32 unk2A8;                        /* inferred */
    /* 0x02AC */ f32 unk2AC;                        /* inferred */
    /* 0x02B0 */ f32 unk2B0;                        /* inferred */
    /* 0x02B4 */ f32 unk2B4;                        /* inferred */
    /* 0x02B8 */ f32 unk2B8;                        /* inferred */
    /* 0x02BC */ char pad2BC[0xC];                  /* maybe part of unk2B8[4]? */
    /* 0x02C8 */ f32 unk2C8;                        /* inferred */
    /* 0x02CC */ f32 unk2CC;                        /* inferred */
    /* 0x02D0 */ char pad2D0[0x4];                  /* maybe part of unk2CC[2]? */
    /* 0x02D4 */ f32 unk2D4;                        /* inferred */
    /* 0x02D8 */ f32 unk2D8;                        /* inferred */
    /* 0x02DC */ f32 unk2DC;                        /* inferred */
} EnAttackNiw;                                      /* size 0x2E0 */

void EnAttackNiw_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnAttackNiw *this = (EnAttackNiw *) thisx;
    f32 temp_f8;
    s32 temp_f18;

    Actor_ProcessInitChain(&this->actor, &D_80959120);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06002530, &D_060000E8, &this->unk188, &this->unk1E8, 0x10);
    if ((s32) this->actor.params < 0) {
        this->actor.params = 0;
    }
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.gravity = 0.0f;
    this->unk290 = randPlusMinusPoint5Scaled(100.0f);
    this->unk294 = randPlusMinusPoint5Scaled(10.0f);
    this->unk298 = randPlusMinusPoint5Scaled(100.0f);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.flags &= -2;
    temp_f8 = Rand_ZeroOne() - 0.5f;
    this->actionFunc = func_80958634;
    temp_f18 = (s32) (temp_f8 * 60000.0f);
    this->actor.world.rot.y = (s16) temp_f18;
    this->actor.shape.rot.y = (s16) temp_f18;
}

void EnAttackNiw_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnAttackNiw *this = (EnAttackNiw *) thisx;
    Actor *temp_v1;
    s16 temp_v1_2;

    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0)) {
        temp_v1_2 = temp_v1->unk290;
        if ((s32) temp_v1_2 > 0) {
            temp_v1->unk290 = (s16) (temp_v1_2 - 1);
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
    if (arg0->unk24C == 0) {
        if (arg2 == 0) {
            arg0->unk25C = 0.0f;
        } else {
            arg0->unk25C = -10000.0f;
        }
        arg0->unk24C = 3;
        arg0->unk286 += 1;
        if ((arg0->unk286 & 1) == 0) {
            arg0->unk25C = 0.0f;
            if (arg2 == 0) {
                arg2 = arg2;
                arg0->unk24C = (s16) (s32) Rand_ZeroFloat(30.0f);
                phi_a2 = (u32) arg2;
            }
        }
    }
    if (arg0->unk250 == 0) {
        arg0->unk28A += 1;
        arg0->unk28A &= 1;
        switch (phi_a2) {
        case 0:
            arg0->unk264 = 0.0f;
            arg0->unk260 = 0.0f;
            break;
        case 1:
            arg0->unk250 = 3;
            arg0->unk264 = 7000.0f;
            arg0->unk260 = 7000.0f;
            if (arg0->unk28A == 0) {
                arg0->unk264 = 0.0f;
                arg0->unk260 = 0.0f;
            }
            break;
        case 2:
            arg0->unk250 = 2;
            arg0->unk264 = -10000.0f;
            arg0->unk278 = 25000.0f;
            arg0->unk270 = 25000.0f;
            arg0->unk27C = 6000.0f;
            arg0->unk274 = 6000.0f;
            arg0->unk260 = -10000.0f;
            if (arg0->unk28A == 0) {
                arg0->unk270 = 8000.0f;
                phi_f0 = 8000.0f;
block_20:
                arg0->unk278 = phi_f0;
            }
            break;
        case 3:
            arg0->unk250 = 2;
            arg0->unk270 = 10000.0f;
            arg0->unk278 = 10000.0f;
            if (arg0->unk28A == 0) {
                arg0->unk270 = 3000.0f;
                phi_f0 = 3000.0f;
                goto block_20;
            }
            break;
        case 4:
            arg0->unk24E = 5;
            arg0->unk24C = arg0->unk24E;
            break;
        case 5:
            arg0->unk250 = 5;
            arg0->unk270 = 14000.0f;
            arg0->unk278 = 14000.0f;
            if (arg0->unk28A == 0) {
                arg0->unk270 = 10000.0f;
                phi_f0 = 10000.0f;
                goto block_20;
            }
            break;
        }
    }
    temp_f0 = arg0->unk280;
    if (arg0->unk2B8 != temp_f0) {
        Math_ApproachF(arg0 + 0x2B8, temp_f0, 0.5f, 4000.0f);
    }
    temp_f0_2 = arg0->unk25C;
    if (arg0->unk2B4 != temp_f0_2) {
        Math_ApproachF(arg0 + 0x2B4, temp_f0_2, 0.5f, 4000.0f);
    }
    temp_f0_3 = arg0->unk264;
    if (arg0->unk29C != temp_f0_3) {
        Math_ApproachF(arg0 + 0x29C, temp_f0_3, 0.8f, 7000.0f);
    }
    temp_f0_4 = arg0->unk278;
    if (arg0->unk2A0 != temp_f0_4) {
        Math_ApproachF(arg0 + 0x2A0, temp_f0_4, 0.8f, 7000.0f);
    }
    temp_f0_5 = arg0->unk27C;
    if (arg0->unk2A4 != temp_f0_5) {
        Math_ApproachF(arg0 + 0x2A4, temp_f0_5, 0.8f, 7000.0f);
    }
    temp_f0_6 = arg0->unk260;
    if (arg0->unk2A8 != temp_f0_6) {
        Math_ApproachF(arg0 + 0x2A8, temp_f0_6, 0.8f, 7000.0f);
    }
    temp_f0_7 = arg0->unk270;
    if (arg0->unk2AC != temp_f0_7) {
        Math_ApproachF(arg0 + 0x2AC, temp_f0_7, 0.8f, 7000.0f);
    }
    temp_f0_8 = arg0->unk274;
    if (arg0->unk2B0 != temp_f0_8) {
        Math_ApproachF(arg0 + 0x2B0, temp_f0_8, 0.8f, 7000.0f);
    }
}

s32 func_809585B0(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 sp1C;
    s32 phi_v0;

    Actor_SetHeight(arg0, arg0->unk2DC);
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
    sp34 = temp_f0 + ((this->unk290 + temp_f0) - globalCtx->view.eye.x);
    sp38 = globalCtx->view.at.y + ((this->unk294 + globalCtx->view.at.y) - globalCtx->view.eye.y);
    sp2C = temp_a0;
    sp3C = globalCtx->view.at.z + ((this->unk298 + globalCtx->view.at.z) - globalCtx->view.eye.z);
    this->unk2CC = (f32) Math_Vec3f_Yaw(&temp_a0->pos, (Vec3f *) temp_a1);
    this->unk2C8 = (f32) Math_Vec3f_Pitch(&temp_a0->pos, (Vec3f *) &sp34) * -1.0f;
    Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (s32) this->unk2CC, 5, (s16) (s32) this->unk2D4, (s16) 0);
    Math_SmoothStepToS(&this->actor.world.rot.x, (s16) (s32) this->unk2C8, 5, (s16) (s32) this->unk2D4, (s16) 0);
    Math_ApproachF(&this->unk2D4, 5000.0f, 1.0f, 100.0f);
    Actor_SetHeight(&this->actor, this->unk2DC);
    func_800B8898(globalCtx, &this->actor, &sp4E, &sp4C);
    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 8) != 0) {
        this->unk2CC = (f32) this->actor.yawTowardsPlayer;
        this->unk252 = 0;
        temp_v0_2 = this->unk252;
        this->unk254 = 0x64;
        this->unk2D4 = 0.0f;
        this->unk27C = 0.0f;
        this->unk2C8 = (f32) this->actor.world.rot.x - 3000.0f;
        this->unk274 = 0.0f;
        this->unk250 = temp_v0_2;
        this->unk24E = temp_v0_2;
        this->unk24C = temp_v0_2;
        this->actionFunc = func_80958974;
        this->unk280 = 0.0f;
        this->actor.gravity = -0.2f;
        this->unk2D8 = 5.0f;
        return;
    }
    if (((this->actor.projectedPos.z > 0.0f) && (fabsf(sp34 - this->actor.world.pos.x) < 50.0f) && (fabsf(sp38 - this->actor.world.pos.y) < 50.0f) && (fabsf(sp3C - this->actor.world.pos.z) < 50.0f)) || ((temp_v0 & 1) != 0)) {
        this->unk252 = 0;
        temp_v0_3 = this->unk252;
        this->unk2D4 = 0.0f;
        this->unk274 = 0.0f;
        this->unk27C = 0.0f;
        this->unk250 = temp_v0_3;
        this->unk24E = temp_v0_3;
        this->unk2CC = (f32) this->actor.yawTowardsPlayer;
        this->unk24C = temp_v0_3;
        this->unk2C8 = (f32) this->actor.world.rot.x - 2000.0f;
        this->unk280 = 0.0f;
        this->actionFunc = func_80958974;
        this->actor.gravity = -0.2f;
        this->unk2D8 = 5.0f;
        return;
    }
    this->unk24C = 0xA;
    this->unk25C = -10000.0f;
    this->unk280 = -3000.0f;
    func_80958228(this, globalCtx, 2);
}

void func_80958974(EnAttackNiw *this, GlobalContext *globalCtx) {
    if (func_809585B0(&this->actor, globalCtx) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        if (this->unk252 == 0) {
            this->unk252 = 3;
            this->actor.velocity.y = 3.5f;
        }
        if (this->actor.gravity != -2.0f) {
            this->unk25A = 0x32;
            this->unk254 = 0x64;
            this->unk270 = 14000.0f;
            this->unk278 = 14000.0f;
            this->unk274 = 0.0f;
            this->unk27C = 0.0f;
            this->unk2CC = (f32) this->actor.yawTowardsPlayer;
            this->unk260 = 0.0f;
            this->unk264 = 0.0f;
            this->unk2C8 = 0.0f;
            this->actor.gravity = -2.0f;
        }
    }
    if (this->unk254 == 0x32) {
        this->unk2CC = randPlusMinusPoint5Scaled(200.0f) + (f32) this->actor.yawTowardsPlayer;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (s32) this->unk2CC, 2, (s16) (s32) this->unk2D4, (s16) 0);
    Math_SmoothStepToS(&this->actor.world.rot.x, (s16) (s32) this->unk2C8, 2, (s16) (s32) this->unk2D4, (s16) 0);
    Math_ApproachF(&this->unk2D4, 10000.0f, 1.0f, 1000.0f);
    Math_ApproachF(&this->actor.speedXZ, this->unk2D8, 0.9f, 1.0f);
    if ((this->actor.gravity == -2.0f) && (this->unk25A == 0) && (((this->actor.bgCheckFlags & 8) != 0) || (this->unk254 == 0))) {
        this->unk2D8 = 0.0f;
        this->actor.gravity = 0.0f;
        this->unk2D4 = 0.0f;
        this->actionFunc = func_80958BE4;
        this->unk2C8 = (f32) this->actor.world.rot.x - 5000.0f;
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_80958228(this, globalCtx, 5);
        return;
    }
    func_80958228(this, globalCtx, 2);
}

void func_80958BE4(EnAttackNiw *this, GlobalContext *globalCtx) {
    if (func_809585B0(&this->actor, globalCtx) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Math_SmoothStepToS(&this->actor.world.rot.x, (s16) (s32) this->unk2C8, 5, (s16) (s32) this->unk2D4, (s16) 0);
    Math_ApproachF(&this->unk2D4, 5000.0f, 1.0f, 100.0f);
    Math_ApproachF(&this->actor.velocity.y, 5.0f, 0.3f, 1.0f);
    func_80958228(this, globalCtx, 2);
}

void EnAttackNiw_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnAttackNiw *this = (EnAttackNiw *) thisx;
    Actor *sp44;
    Actor *sp40;
    Vec3f sp30;
    void (*sp28)(EnAttackNiw *, GlobalContext *);
    Actor *temp_v0_8;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;

    sp40 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk24C;
    this->unk284 += 1;
    if (temp_v0 != 0) {
        this->unk24C = temp_v0 - 1;
    }
    temp_v0_2 = this->unk250;
    if (temp_v0_2 != 0) {
        this->unk250 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk252;
    if (temp_v0_3 != 0) {
        this->unk252 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk256;
    if (temp_v0_4 != 0) {
        this->unk256 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk258;
    if (temp_v0_5 != 0) {
        this->unk258 = temp_v0_5 - 1;
    }
    temp_v0_6 = this->unk254;
    if (temp_v0_6 != 0) {
        this->unk254 = temp_v0_6 - 1;
    }
    temp_v0_7 = this->unk25A;
    if (temp_v0_7 != 0) {
        this->unk25A = temp_v0_7 - 1;
    }
    this->unkBC = (unaligned s32) this->unk30;
    this->actor.shape.shadowScale = 15.0f;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 60.0f, 0x1DU);
    if (func_80958634 == this->actionFunc) {
        Actor_SetVelocityAndMoveXYRotation(&this->actor);
    } else {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    if (this->actor.floorHeight <= -32000.0f) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (((this->actor.bgCheckFlags & 0x20) != 0) && (func_80958BE4 != this->actionFunc)) {
        sp28 = func_80958BE4;
        Math_Vec3f_Copy(&sp30, &this->actor.world.pos);
        sp30.y += this->actor.yDistToWater;
        EffectSsGSplash_Spawn(globalCtx, &sp30, NULL, NULL, (s16) 0, (s16) 0x190);
        this->unk2D4 = 0.0f;
        this->actor.gravity = 0.0f;
        this->unk2D8 = 0.0f;
        this->actionFunc = func_80958BE4;
        this->unk2C8 = (f32) this->actor.world.rot.x - 5000.0f;
        return;
    }
    if (this->actor.xyzDistToPlayerSq < (20.0f * 20.0f)) {
        temp_v0_8 = this->actor.parent;
        if ((temp_v0_8->update != 0) && (temp_v0_8 != 0) && (temp_v0_8 != 0) && (temp_v0_8->unk25E == 0) && (sp40->unkD5C == 0)) {
            sp44 = temp_v0_8;
            func_800B8D50(globalCtx, &this->actor, 2.0f, this->actor.world.rot.y, 0.0f, 0x10U);
            sp44->unk25E = 0x46;
        }
    }
    if (this->unk256 == 0) {
        this->unk256 = 0x1E;
        Audio_PlayActorSound2(&this->actor, 0x2812U);
    }
    if (this->unk258 == 0) {
        this->unk258 = 7;
        Audio_PlayActorSound2(&this->actor, 0x38FFU);
    }
}

s32 func_80958F6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xD) {
        arg4->y += (s32) arg5->unk2B4;
    }
    if (arg1 == 0xF) {
        arg4->z += (s32) arg5->unk2B8;
    }
    if (arg1 == 0xB) {
        arg4->x += (s32) arg5->unk2B0;
        arg4->y += (s32) arg5->unk2AC;
        arg4->z += (s32) arg5->unk2A8;
    }
    if (arg1 == 7) {
        arg4->x += (s32) arg5->unk2A4;
        arg4->y += (s32) arg5->unk2A0;
        arg4->z += (s32) arg5->unk29C;
    }
    return 0;
}

void EnAttackNiw_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnAttackNiw *this = (EnAttackNiw *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80958F6C, NULL, &this->actor);
}

