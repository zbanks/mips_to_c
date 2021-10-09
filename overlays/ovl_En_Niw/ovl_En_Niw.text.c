struct _mips2c_stack_EnNiw_CheckRage {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnNiw_CuccoStorm {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNiw_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNiw_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnNiw_DrawFeathers {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnNiw_Held {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnNiw_Idle {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnNiw_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnNiw_LandBeforeIdle {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNiw_LimbDraw {};             /* size 0x0 */

struct _mips2c_stack_EnNiw_RunAway {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnNiw_SetupCuccoStorm {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNiw_SetupIdle {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnNiw_SetupRunAway {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnNiw_SpawnAttackNiw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnNiw_SpawnFeather {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ EnNiwFeather *sp18;                  /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnNiw_Swimming {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnNiw_Thrown {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnNiw_Trigger {};              /* size 0x0 */

struct _mips2c_stack_EnNiw_Update {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ CollisionCheckContext *sp54;         /* inferred */
    /* 0x58 */ char pad_58[0x54];                   /* maybe part of sp54[22]? */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ s16 spD0;                            /* inferred */
    /* 0xD2 */ char pad_D2[0x2];
    /* 0xD4 */ Actor *spD4;                         /* inferred */
    /* 0xD8 */ char pad_D8[0x8];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_EnNiw_UpdateFeather {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnNiw_Upset {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80891320 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808917F8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

void EnNiw_LandBeforeIdle(EnNiw *arg0, GlobalContext *arg1); /* static */
void func_808917F8(EnNiw *arg0, GlobalContext *arg1, s32 arg2); /* static */
extern AnimationHeader D_060000E8;
extern ? D_060023B0;
extern ? D_06002428;
extern FlexSkeletonHeader D_06002530;
static s16 D_80893460 = 0;
static ? D_80893484;                                /* unable to generate initializer */
static ? D_8089348C;                                /* unable to generate initializer */
static ? D_80893490;                                /* unable to generate initializer */
static ColliderCylinderInit D_80893498 = {
    {5, 0, 9, 0x3D, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0xF, 0x19, 4, {0, 0, 0}},
};
static ? D_808934C4;                                /* unable to generate initializer */
static InitChainEntry D_808934D0[3];                /* unable to generate initializer */
static ? D_808934DC;                                /* unable to generate initializer */
static ? D_808934E8;                                /* unable to generate initializer */

void EnNiw_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp38;
    PosRot *sp34;
    PosRot *temp_a1;
    EnNiw *this = (EnNiw *) thisx;

    sp38.unk_0 = (s32) D_808934C4.unk_0;
    sp38.unk_4 = (s32) D_808934C4.unk_4;
    sp38.unk_8 = (s32) D_808934C4.unk_8;
    if ((s32) this->actor.params < 0) {
        this->actor.params = 0;
    }
    Math_Vec3f_Copy(&this->unk2BC, (Vec3f *) &sp38);
    this->niwType = this->actor.params;
    Actor_ProcessInitChain((Actor *) this, D_808934D0);
    this->actor.flags |= 1;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->skelanime, &D_06002530, &D_060000E8, this->limbDrawTbl, this->transitionDrawtable, 0x10);
    temp_a1 = &this->actor.world;
    sp34 = temp_a1;
    Math_Vec3f_Copy(&this->unk2A4, (Vec3f *) temp_a1);
    Math_Vec3f_Copy(&this->unk2B0, (Vec3f *) temp_a1);
    this->unk308 = 10.0f;
    Actor_SetScale((Actor *) this, 0.01f);
    if (this->niwType == 1) {
        Actor_SetScale((Actor *) this, ((f32) gGameInfo->data[2486] / 10000.0f) + 0.004f);
    }
    this->actor.colChkInfo.health = (u8) (u32) (Rand_ZeroFloat(9.99f) + 10.0f);
    this->actor.colChkInfo.mass = 0xFF;
    if (this->niwType == 0) {
        Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_80893498);
    }
    if (this->niwType == 2) {
        Audio_PlayActorSound2((Actor *) this, 0x2813U);
        this->sfxTimer1 = 0x1E;
        this->unkTimer250 = 0x1E;
        this->actor.flags &= -2;
        this->unknownState28E = 4;
        this->actionFunc = EnNiw_Held;
        this->actor.speedXZ = 0.0f;
        this->unk2BC.z = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->actor.gravity = 0.0f;
        return;
    }
    EnNiw_SetupIdle(this);
}

void EnNiw_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNiw *this = (EnNiw *) thisx;
    if (this->niwType == 0) {
        Collider_DestroyCylinder(globalCtx, &this->collider);
    }
}

void func_80891320(EnNiw *this, GlobalContext *globalCtx, s16 arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    u32 phi_a2;
    f32 phi_f0;

    phi_a2 = (u32) arg2;
    if (this->unkTimer24C == 0) {
        if (arg2 == 0) {
            this->unk264[0] = 0.0f;
        } else {
            this->unk264[0] = -10000.0f * 1.0f;
        }
        this->unkTimer24C = 3;
        this->unk292 += 1;
        if ((this->unk292 & 1) == 0) {
            this->unk264[0] = 0.0f;
            if (arg2 == 0) {
                arg2 = arg2;
                this->unkTimer24C = (s16) (s32) Rand_ZeroFloat(30.0f);
                phi_a2 = (u32) arg2;
            }
        }
    }
    if (this->unkTimer24E == 0) {
        this->unk296 += 1;
        this->unk296 &= 1;
        switch (phi_a2) {
        case 0:
            this->unk264[2] = 0.0f;
            this->unk264[1] = 0.0f;
            break;
        case 1:
            this->unkTimer24E = 3;
            temp_f0 = 7000.0f * 1.0f;
            this->unk264[2] = temp_f0;
            this->unk264[1] = temp_f0;
            if (this->unk296 == 0) {
                this->unk264[2] = 0.0f;
                this->unk264[1] = 0.0f;
            }
            break;
        case 2:
            this->unkTimer24E = 2;
            this->unk264[2] = -10000.0f;
            this->unk264[7] = 25000.0f;
            this->unk264[5] = 25000.0f;
            this->unk264[8] = 6000.0f;
            this->unk264[6] = 6000.0f;
            this->unk264[1] = -10000.0f;
            if (this->unk296 == 0) {
                this->unk264[7] = 8000.0f;
                this->unk264[5] = 8000.0f;
            }
            break;
        case 3:
            this->unkTimer24E = 2;
            this->unk264[5] = 10000.0f;
            this->unk264[7] = 10000.0f;
            if (this->unk296 == 0) {
                this->unk264[5] = 3000.0f;
                phi_f0 = 3000.0f;
block_20:
                this->unk264[7] = phi_f0;
            }
            break;
        case 4:
            this->unkTimer24C = 5;
            break;
        case 5:
            this->unkTimer24E = 5;
            this->unk264[5] = 14000.0f;
            this->unk264[7] = 14000.0f;
            if (this->unk296 == 0) {
                this->unk264[5] = 10000.0f;
                phi_f0 = 10000.0f;
                goto block_20;
            }
            break;
        }
    }
    temp_f0_2 = this->unk264[9];
    if (this->limbFRot != temp_f0_2) {
        Math_ApproachF(&this->limbFRot, temp_f0_2, 0.5f, 4000.0f);
    }
    temp_f0_3 = this->unk264[0];
    if (this->limbDRot != temp_f0_3) {
        Math_ApproachF(&this->limbDRot, temp_f0_3, 0.5f, 4000.0f);
    }
    temp_f0_4 = this->unk264[2];
    if (this->limb7Rotz != temp_f0_4) {
        Math_ApproachF(&this->limb7Rotz, temp_f0_4, 0.8f, 7000.0f);
    }
    temp_f0_5 = this->unk264[7];
    if (this->limb7Roty != temp_f0_5) {
        Math_ApproachF(&this->limb7Roty, temp_f0_5, 0.8f, 7000.0f);
    }
    temp_f0_6 = this->unk264[8];
    if (this->limb7Rotx != temp_f0_6) {
        Math_ApproachF(&this->limb7Rotx, temp_f0_6, 0.8f, 7000.0f);
    }
    temp_f0_7 = this->unk264[1];
    if (this->limbBRotz != temp_f0_7) {
        Math_ApproachF(&this->limbBRotz, temp_f0_7, 0.8f, 7000.0f);
    }
    temp_f0_8 = this->unk264[5];
    if (this->limbBRoty != temp_f0_8) {
        Math_ApproachF(&this->limbBRoty, temp_f0_8, 0.8f, 7000.0f);
    }
    temp_f0_9 = this->unk264[6];
    if (this->limbBRotx != temp_f0_9) {
        Math_ApproachF(&this->limbBRotx, temp_f0_9, 0.8f, 7000.0f);
    }
}

void EnNiw_SpawnAttackNiw(EnNiw *this, GlobalContext *globalCtx) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp44;
    f32 sp40;

    if ((this->unkTimer252 == 0) && ((s32) this->unk290 < 7)) {
        sp54 = globalCtx->view.at.x - globalCtx->view.eye.x;
        sp50 = globalCtx->view.at.y - globalCtx->view.eye.y;
        sp4C = globalCtx->view.at.z - globalCtx->view.eye.z;
        sp40 = ((Rand_ZeroOne() - 0.5f) * sp54) + globalCtx->view.eye.x;
        sp44 = randPlusMinusPoint5Scaled(0.3f) + (globalCtx->view.eye.y + 50.0f + (sp50 * 0.5f));
        if (Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0xAA, sp40, sp44, ((Rand_ZeroOne() - 0.5f) * sp4C) + globalCtx->view.eye.z, (s16) 0, (s16) 0, (s16) 0, 0) != 0) {
            this->unkTimer252 = 0xA;
            this->unk290 += 1;
        }
    }
}

void func_808917F8(EnNiw *arg0, GlobalContext *arg1, s32 arg2) {
    f32 *temp_v0;
    f32 *temp_v0_2;
    f32 *phi_v0;
    f32 phi_f2;

    if (arg0->unkTimer250 == 0) {
        arg0->unkTimer250 = 3;
        if ((arg0->actor.bgCheckFlags & 1) != 0) {
            arg0->actor.velocity.y = 3.5f;
        }
    }
    if (arg0->unkTimer252 == 0) {
        arg0->unkTimer252 = 5;
        arg0->unk29A += 1;
        arg0->unk29A &= 1;
    }
    if (arg0->unk29A == 0) {
        temp_v0 = (arg2 * 4) + &D_8089348C;
        phi_v0 = temp_v0;
        phi_f2 = *temp_v0;
    } else {
        temp_v0_2 = (arg2 * 4) + &D_8089348C;
        phi_v0 = temp_v0_2;
        phi_f2 = -*temp_v0_2;
    }
    if ((phi_v0 == &D_80893490) && ((arg0->unkTimer254 == 0) || ((arg0->actor.bgCheckFlags & 8) != 0))) {
        arg0->unkTimer254 = 0x96;
        if (arg0->yawTimer == 0) {
            arg0->yawTimer = 0x46;
            arg0->yawTowardsPlayer = arg0->actor.yawTowardsPlayer;
        }
    }
    Math_SmoothStepToS(arg0 + 0x32, (s16) (s32) ((f32) arg0->yawTowardsPlayer + phi_f2), 3, (s16) (s32) arg0->unk300, (s16) 0);
    Math_ApproachF(arg0 + 0x300, 3000.0f, 1.0f, 500.0f);
    func_80891320(arg0, arg1, 5);
}

void EnNiw_SetupIdle(EnNiw *this) {
    SkelAnime_ChangeAnim(&this->skelanime, &D_060000E8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060000E8), (u8) 0, -10.0f);
    this->unknownState28E = 0;
    this->actionFunc = EnNiw_Idle;
}

void EnNiw_Idle(EnNiw *this, GlobalContext *globalCtx) {
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_ret;
    f32 phi_f12;
    f32 phi_f2;
    f32 phi_f12_2;
    f32 phi_f14;

    sp34 = randPlusMinusPoint5Scaled(100.0f);
    temp_ret = randPlusMinusPoint5Scaled(100.0f);
    temp_f0 = temp_ret;
    if (this->niwType == 0) {
        sp30 = temp_f0;
        if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x2813U);
            this->sfxTimer1 = 0x1E;
            this->unkTimer250 = 0x1E;
            this->actor.flags &= -2;
            this->unknownState28E = 4;
            this->actionFunc = EnNiw_Held;
            this->actor.speedXZ = 0.0f;
            return;
        }
        sp30 = temp_f0;
        func_800B8BB0((Actor *) this, globalCtx);
        goto block_5;
    }
    this->unkTimer252 = 0xA;
block_5:
    sp2E = 0;
    if (this->unkTimer252 != 0) {
        sp30 = temp_ret;
        if (Rand_ZeroFloat(3.99f) < 1.0f) {
            this->unk2EA += 1;
            this->unk2EA &= 1;
        }
        sp30 = temp_ret;
        Math_ApproachF(&this->unk264[9], *(&D_80893484 + (this->unk2EA * 4)), 0.5f, 4000.0f);
    }
    if ((this->unkTimer252 == 0) && (this->unkTimer250 == 0)) {
        this->unk298 += 1;
        if ((s32) this->unk298 >= 8) {
            sp30 = temp_ret;
            this->unkTimer252 = (s16) (s32) Rand_ZeroFloat(30.0f);
            this->unk298 = (s16) (s32) Rand_ZeroFloat(3.99f);
            if (sp34 < 0.0f) {
                phi_f12 = sp34 - 100.0f;
            } else {
                phi_f12 = sp34 + 100.0f;
            }
            if (temp_ret < 0.0f) {
                phi_f2 = temp_ret - 100.0f;
            } else {
                phi_f2 = temp_ret + 100.0f;
            }
            this->unk2B0.x = this->unk2A4.x + phi_f12;
            this->unk2B0.z = this->unk2A4.z + phi_f2;
        } else {
            this->unkTimer250 = 4;
            if ((this->actor.bgCheckFlags & 1) != 0) {
                this->actor.speedXZ = 0.0f;
                this->actor.velocity.y = 3.5f;
            }
        }
    }
    if (this->unkTimer250 != 0) {
        Math_ApproachZeroF(&this->unk264[9], 0.5f, 4000.0f);
        sp2E = 1;
        Math_ApproachF((f32 *) &this->actor.world, this->unk2B0.x, 1.0f, this->unk300);
        Math_ApproachF(&this->actor.world.pos.z, this->unk2B0.z, 1.0f, this->unk300);
        Math_ApproachF(&this->unk300, 3.0f, 1.0f, 0.3f);
        temp_f12 = this->unk2B0.x - this->actor.world.pos.x;
        temp_f14 = this->unk2B0.z - this->actor.world.pos.z;
        phi_f12_2 = temp_f12;
        phi_f14 = temp_f14;
        if (fabsf(temp_f12) < 10.0f) {
            phi_f12_2 = 0.0f;
        }
        if (fabsf(temp_f14) < 10.0f) {
            phi_f14 = 0.0f;
        }
        if ((phi_f12_2 == 0.0f) && (phi_f14 == 0.0f)) {
            this->unkTimer250 = 0;
            this->unk298 = 7;
        }
        Math_SmoothStepToS(&this->actor.world.rot.y, Math_Atan2S(phi_f12_2, phi_f14), 3, (s16) (s32) this->unk304, (s16) 0);
        Math_ApproachF(&this->unk304, 10000.0f, 1.0f, 1000.0f);
    }
    func_80891320(this, globalCtx, sp2E);
}

void EnNiw_Held(EnNiw *this, GlobalContext *globalCtx) {
    ? sp24;
    s16 temp_v0;
    s16 temp_v0_2;

    sp24.unk_0 = (s32) D_808934DC.unk_0;
    sp24.unk_4 = (s32) D_808934DC.unk_4;
    sp24.unk_8 = (s32) D_808934DC.unk_8;
    if (this->unkTimer250 == 0) {
        this->unk29E = 2;
        this->unkTimer250 = (s32) (Rand_ZeroFloat(1.0f) * 10.0f) + 0xA;
    }
    this->actor.shape.rot.x = (s32) randPlusMinusPoint5Scaled(5000.0f) + this->actor.world.rot.x;
    this->actor.shape.rot.y = (s32) randPlusMinusPoint5Scaled(5000.0f) + this->actor.world.rot.y;
    this->actor.shape.rot.z = (s32) randPlusMinusPoint5Scaled(5000.0f) + this->actor.world.rot.z;
    if (this->niwType == 0) {
        if (Actor_HasNoParent((Actor *) this, globalCtx) != 0) {
            this->actor.shape.rot.z = 0;
            temp_v0 = this->actor.shape.rot.z;
            this->unknownState28E = 5;
            this->actor.flags |= 1;
            this->actionFunc = EnNiw_Thrown;
            this->actor.shape.rot.y = temp_v0;
            this->actor.shape.rot.x = temp_v0;
        }
    } else if (this->unk2BC.z != 0.0f) {
        this->actor.shape.rot.z = 0;
        temp_v0_2 = this->actor.shape.rot.z;
        this->unknownState28E = 5;
        this->unk2EC = 0;
        this->niwType = 0;
        this->actor.velocity.y = 8.0f;
        this->actor.speedXZ = 4.0f;
        this->actor.shape.rot.y = temp_v0_2;
        this->actor.shape.rot.x = temp_v0_2;
        this->actor.gravity = -2.0f;
        Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_80893498);
        Math_Vec3f_Copy(&this->unk2BC, (Vec3f *) &sp24);
        this->actor.flags |= 1;
        this->actionFunc = EnNiw_Thrown;
    }
    func_80891320(this, globalCtx, 2);
}

void EnNiw_Thrown(EnNiw *this, GlobalContext *globalCtx) {
    if (this->unk2EC == 0) {
        if ((this->actor.bgCheckFlags & 1) != 0) {
            this->unk2EC = 1;
            this->unkTimer252 = 0x50;
            this->actor.speedXZ = 0.0f;
            this->actor.velocity.y = 4.0f;
            goto block_7;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->sfxTimer1 = 0;
        this->unk29E = 1;
        this->actor.velocity.y = 4.0f;
    }
    if (this->unkTimer252 == 0) {
        this->unkTimer254 = 0x64;
        this->unkTimer250 = 0;
        this->unk2EC = 0;
        EnNiw_SetupRunAway(this);
        return;
    }
block_7:
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x2813U);
        this->sfxTimer1 = 0x1E;
        this->unk2EC = 0;
        this->unkTimer250 = 0x1E;
        this->actor.flags &= -2;
        this->unknownState28E = 4;
        this->actionFunc = EnNiw_Held;
        this->actor.speedXZ = 0.0f;
        return;
    }
    if ((s32) this->unkTimer252 >= 6) {
        func_800B8BB0((Actor *) this, globalCtx);
    }
    func_80891320(this, globalCtx, 2);
}

void EnNiw_Swimming(EnNiw *this, GlobalContext *globalCtx) {
    f32 sp30;
    ? sp2C;
    u16 temp_v0;

    if (this->isStormActive != 0) {
        EnNiw_SpawnAttackNiw(this, globalCtx);
    }
    temp_v0 = this->actor.bgCheckFlags;
    this->actor.speedXZ = 2.0f;
    if ((temp_v0 & 0x20) != 0) {
        this->actor.gravity = 0.0f;
        if (this->actor.yDistToWater > 15.0f) {
            this->actor.world.pos.y += 2.0f;
        }
        if (this->unkTimer250 == 0) {
            this->unkTimer250 = 0x1E;
            Math_Vec3f_Copy((Vec3f *) &sp2C, (Vec3f *) &this->actor.world);
            sp30 += this->actor.yDistToWater;
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp2C, 0x64, 0x1F4, (s16) 0x1E);
        }
        if ((this->actor.bgCheckFlags & 8) != 0) {
            this->actor.velocity.y = 10.0f;
            this->actor.speedXZ = 1.0f;
        }
    } else {
        this->actor.gravity = -2.0f;
        if ((temp_v0 & 8) != 0) {
            this->actor.velocity.y = 10.0f;
            this->actor.speedXZ = 1.0f;
            this->actor.gravity = 0.0f;
        } else {
            this->actor.speedXZ = 4.0f;
        }
        if ((this->actor.bgCheckFlags & 1) != 0) {
            this->actor.gravity = -2.0f;
            this->unkTimer254 = 0x64;
            this->unkTimer250 = 0;
            this->actor.velocity.y = 0.0f;
            if (this->isStormActive == 0) {
                EnNiw_SetupRunAway(this);
            } else {
                this->unknownState28E = 3;
                this->actionFunc = EnNiw_CuccoStorm;
            }
        }
    }
    func_80891320(this, globalCtx, 2);
}

void EnNiw_Trigger(EnNiw *this, GlobalContext *globalCtx) {
    this->unkTimer252 = 0xA;
    this->unk29C = 1;
    this->unknownState28E = (s16) 1U;
    this->actionFunc = EnNiw_Upset;
}

void EnNiw_Upset(EnNiw *this, GlobalContext *globalCtx) {
    this->sfxTimer1 = 0x64;
    if (this->unkTimer252 == 0) {
        this->unkTimer252 = 0x3C;
        this->unkTimer24C = 0xA;
        this->unk29C = 4;
        this->unknownState28E = 2;
        this->actionFunc = EnNiw_SetupCuccoStorm;
    }
    func_80891320(this, globalCtx, (s16) this->unk29C);
}

void EnNiw_SetupCuccoStorm(EnNiw *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v0;

    temp_v0 = this->unkTimer252;
    this->sfxTimer1 = 0x64;
    phi_v0 = temp_v0;
    if (temp_v0 == 0x28) {
        this->unkTimer24C = 0xA;
        this->unk264[7] = 14000.0f;
        this->unk264[5] = 14000.0f;
        this->unk264[0] = 10000.0f;
        this->unk264[6] = 0.0f;
        this->unk264[8] = 0.0f;
        this->unk264[1] = 0.0f;
        this->unk264[2] = 0.0f;
        Audio_PlayActorSound2((Actor *) this, 0x2813U);
        phi_v0 = this->unkTimer252;
    }
    if (phi_v0 == 0) {
        this->unkTimer252 = 0xA;
        this->actor.flags &= -2;
        this->unknownState28E = 3;
        this->actionFunc = EnNiw_CuccoStorm;
        this->yawTowardsPlayer = this->actor.yawTowardsPlayer;
    }
    func_80891320(this, globalCtx, this->unk29C);
}

void EnNiw_CuccoStorm(EnNiw *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 temp_f6;

    EnNiw_SpawnAttackNiw(this, globalCtx);
    if (this->unkTimer252 == 1) {
        this->actor.speedXZ = 3.0f;
        this = this;
        temp_f6 = (s32) Rand_ZeroFloat(1.99f);
        this->unkTimer250 = 0;
        temp_v0 = this->unkTimer250;
        this->unkTimer24E = temp_v0;
        this->unkTimer24C = temp_v0;
        this->unk29A = (s16) temp_f6;
        return;
    }
    func_808917F8(this, globalCtx, 1);
}

void EnNiw_SetupRunAway(EnNiw *this) {
    s32 temp_t7;

    SkelAnime_ChangeAnim(&this->skelanime, &D_060000E8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060000E8), (u8) 0, -10.0f);
    temp_t7 = (s32) Rand_ZeroFloat(1.99f);
    this->unknownState28E = 7;
    this->actionFunc = EnNiw_RunAway;
    this->actor.speedXZ = 4.0f;
    this->unk29A = (s16) temp_t7;
}

void EnNiw_RunAway(EnNiw *this, GlobalContext *globalCtx) {
    ? sp38;
    Actor *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    s16 temp_v0_2;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp38.unk_0 = (s32) D_808934E8.unk_0;
    sp38.unk_4 = (s32) D_808934E8.unk_4;
    sp38.unk_8 = (s32) D_808934E8.unk_8;
    if (this->unkTimer254 == 0) {
        temp_f16 = this->actor.world.pos.x;
        temp_f14 = this->actor.world.pos.y;
        temp_f12 = this->actor.world.pos.z;
        this->unk298 = 0;
        temp_v0_2 = this->unk298;
        this->unk2B0.x = temp_f16;
        this->unk2A4.x = temp_f16;
        this->unk2B0.y = temp_f14;
        this->unk2A4.y = temp_f14;
        this->unk2B0.z = temp_f12;
        this->unk2A4.z = temp_f12;
        this->unkTimer250 = temp_v0_2;
        this->unkTimer252 = temp_v0_2;
        this->unk304 = 0.0f;
        this->unk300 = 0.0f;
        this->actor.speedXZ = 0.0f;
        this->unk264[8] = 0.0f;
        this->unk264[6] = 0.0f;
        this->unk264[5] = 0.0f;
        this->unk264[7] = 0.0f;
        Math_Vec3f_Copy(&this->unk2BC, (Vec3f *) &sp38);
        EnNiw_SetupIdle(this);
        return;
    }
    temp_f0 = this->unk2BC.x;
    if (temp_f0 != 90000.0f) {
        phi_f12 = this->actor.world.pos.x - temp_f0;
        phi_f14 = this->actor.world.pos.z - this->unk2BC.z;
    } else {
        phi_f12 = this->actor.world.pos.x - temp_v0->world.pos.x;
        phi_f14 = this->actor.world.pos.z - temp_v0->world.pos.z;
    }
    this->yawTowardsPlayer = Math_Atan2S(phi_f12, phi_f14);
    func_808917F8(this, globalCtx, 0);
    func_80891320(this, globalCtx, 2);
}

void EnNiw_LandBeforeIdle(EnNiw *arg0, GlobalContext *arg1) {
    if ((arg0->actor.bgCheckFlags & 1) != 0) {
        EnNiw_SetupIdle(arg0);
    }
}

void EnNiw_CheckRage(EnNiw *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;

    if ((this->isStormActive == 0) && (this->unkTimer260 == 0) && (this->niwType == 0)) {
        if ((this->unknownState28E != 7) && (this->unk2BC.x != 90000.0f)) {
            this->unkTimer260 = 0xA;
            this->sfxTimer1 = 0x1E;
            this->unk29E = 1;
            Audio_PlayActorSound2((Actor *) this, 0x2813U);
            this->unkTimer254 = 0x64;
            this->unk2EC = 0;
            EnNiw_SetupRunAway(this);
        }
        temp_v0 = this->collider.base.acFlags;
        if ((temp_v0 & 2) != 0) {
            temp_v1 = this->actor.colChkInfo.health;
            this->collider.base.acFlags = temp_v0 & 0xFFFD;
            if ((s32) temp_v1 > 0) {
                this->actor.colChkInfo.health = temp_v1 - 1;
            }
            if ((D_80893460 == 0) && (this->actor.colChkInfo.health == 0)) {
                this->unkTimer254 = 0x64;
                D_80893460 = 1;
                temp_f0 = this->actor.world.pos.x;
                this->unk298 = 0;
                temp_v0_2 = this->unk298;
                this->unk2B0.x = temp_f0;
                this->unk2A4.x = temp_f0;
                temp_f0_2 = this->actor.world.pos.y;
                this->unk2B0.y = temp_f0_2;
                this->unk2A4.y = temp_f0_2;
                temp_f0_3 = this->actor.world.pos.z;
                this->sfxTimer1 = 0x2710;
                this->isStormActive = 1;
                this->unk2B0.z = temp_f0_3;
                this->unk2A4.z = temp_f0_3;
                this->actionFunc = EnNiw_Trigger;
                this->unkTimer250 = temp_v0_2;
                this->unkTimer252 = temp_v0_2;
                this->unk264[8] = 0.0f;
                this->unk264[6] = 0.0f;
                this->unk264[5] = 0.0f;
                this->unk264[7] = 0.0f;
                this->unk304 = 0.0f;
                this->unk300 = 0.0f;
                this->actor.speedXZ = 0.0f;
                return;
            }
            this->unkTimer260 = 0xA;
            this->sfxTimer1 = 0x1E;
            this->unk29E = 1;
            Audio_PlayActorSound2((Actor *) this, 0x2813U);
            this->unkTimer254 = 0x64;
            this->unk2EC = 0;
            EnNiw_SetupRunAway(this);
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void EnNiw_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *spD4;
    s16 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    CollisionCheckContext *sp54;
    ColliderCylinder *temp_s0_2;
    CollisionCheckContext *temp_a1;
    PosRot *temp_a1_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_s0;
    s16 temp_s0_3;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s32 phi_v1;
    f32 phi_f20;
    s16 phi_s0;
    s16 phi_s0_2;
    EnNiw *this = (EnNiw *) thisx;

    spD4 = globalCtx->actorCtx.actorList[2].first;
    this->unusedCounter28C += 1;
    if (this->niwType == 1) {
        temp_v0 = this->actor.parent->shape.rot.y;
        this->actor.world.rot.y = temp_v0;
        this->actor.shape.rot.y = temp_v0;
    }
    if (this->unknownState28E != 0) {
        this->unk264[9] = 0.0f;
    }
    temp_v0_2 = this->unk29E;
    if (temp_v0_2 != 0) {
        phi_v1 = 0x14;
        if (temp_v0_2 == 2) {
            phi_v1 = 4;
        }
        phi_s0 = 0;
        if (phi_v1 > 0) {
            spD0 = (s16) phi_v1;
            do {
                spC4 = randPlusMinusPoint5Scaled(10.0f) + this->actor.world.pos.x;
                spC8 = randPlusMinusPoint5Scaled(10.0f) + (this->actor.world.pos.y + this->unk308);
                spCC = randPlusMinusPoint5Scaled(10.0f) + this->actor.world.pos.z;
                phi_f20 = Rand_ZeroFloat(6.0f) + 6.0f;
                if ((this->unk29E == 2) && (this->unk308 != 0.0f)) {
                    spC8 += 10.0f;
                }
                if (this->unk308 == 0.0f) {
                    phi_f20 = Rand_ZeroFloat(2.0f) + 2.0f;
                }
                spB8 = randPlusMinusPoint5Scaled(3.0f);
                spBC = (Rand_ZeroFloat(2.0f) * 0.5f) + 2.0f;
                spC0 = randPlusMinusPoint5Scaled(3.0f);
                spAC = 0.0f;
                spB4 = 0.0f;
                spB0 = -0.15f;
                EnNiw_SpawnFeather(this, (Vec3f *) &spC4, (Vec3f *) &spB8, (Vec3f *) &spAC, phi_f20);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while ((s32) temp_s0 < (s32) spD0);
        }
        this->unk29E = 0;
    }
    EnNiw_UpdateFeather(this, globalCtx);
    temp_v0_3 = this->unkTimer24C;
    if (temp_v0_3 != 0) {
        this->unkTimer24C = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unkTimer24E;
    if (temp_v0_4 != 0) {
        this->unkTimer24E = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unkTimer250;
    if (temp_v0_5 != 0) {
        this->unkTimer250 = temp_v0_5 - 1;
    }
    temp_v0_6 = this->unkTimer252;
    if (temp_v0_6 != 0) {
        this->unkTimer252 = temp_v0_6 - 1;
    }
    temp_v0_7 = this->unkTimer254;
    if (temp_v0_7 != 0) {
        this->unkTimer254 = temp_v0_7 - 1;
    }
    temp_v0_8 = this->sfxTimer1;
    if (temp_v0_8 != 0) {
        this->sfxTimer1 = temp_v0_8 - 1;
    }
    temp_v0_9 = this->flutterSfxTimer;
    if (temp_v0_9 != 0) {
        this->flutterSfxTimer = temp_v0_9 - 1;
    }
    temp_v0_10 = this->unusedTimer25A;
    if (temp_v0_10 != 0) {
        this->unusedTimer25A = temp_v0_10 - 1;
    }
    temp_v0_11 = this->yawTimer;
    if (temp_v0_11 != 0) {
        this->yawTimer = temp_v0_11 - 1;
    }
    temp_v0_12 = this->unusedTimer25E;
    if (temp_v0_12 != 0) {
        this->unusedTimer25E = temp_v0_12 - 1;
    }
    temp_v0_13 = this->unkTimer260;
    if (temp_v0_13 != 0) {
        this->unkTimer260 = temp_v0_13 - 1;
    }
    this->unk_BC = (unaligned s32) this->unk_30;
    this->actor.shape.shadowScale = 15.0f;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, this->unk308);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 60.0f, 0x1FU);
    temp_f0 = this->actor.floorHeight;
    if ((temp_f0 <= -32000.0f) || (temp_f0 >= 32000.0f)) {
        temp_f12 = globalCtx->view.at.x - globalCtx->view.eye.x;
        temp_f2 = globalCtx->view.at.y - globalCtx->view.eye.y;
        temp_f14 = globalCtx->view.at.z - globalCtx->view.eye.z;
        temp_f16 = this->actor.home.pos.y;
        this->actor.world.pos.x = this->actor.home.pos.x;
        this->actor.world.pos.z = this->actor.home.pos.z;
        this->actor.world.pos.y = temp_f16 + globalCtx->view.eye.y + ((temp_f2 / sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2) + (temp_f14 * temp_f14))) * 160.0f);
        phi_s0_2 = 0;
        if (this->actor.world.pos.y < temp_f16) {
            this->actor.world.pos.y = temp_f16 + 300.0f;
        }
        this->actor.speedXZ = 0.0f;
        temp_a1_2 = &this->actor.home;
        this->actor.gravity = -2.0f;
        sp54 = (CollisionCheckContext *) temp_a1_2;
        Math_Vec3f_Copy(&this->unk2A4, (Vec3f *) temp_a1_2);
        Math_Vec3f_Copy(&this->unk2B0, (Vec3f *) temp_a1_2);
        this->unk29C = 0;
        temp_v0_15 = (s16) this->unk29C;
        this->unk304 = 0.0f;
        this->unk300 = 0.0f;
        this->unusedFloat2FC = 0.0f;
        this->unusedFloat2F8 = 0.0f;
        this->unusedFloat2F4 = 0.0f;
        this->limbBRotx = 0.0f;
        this->limbBRoty = 0.0f;
        this->limbBRotz = 0.0f;
        this->limb7Rotx = 0.0f;
        this->limb7Roty = 0.0f;
        this->limb7Rotz = 0.0f;
        this->limbDRot = 0.0f;
        this->limbFRot = 0.0f;
        this->unk29A = temp_v0_15;
        this->unk298 = temp_v0_15;
        this->unk29E = temp_v0_15;
        this->unk292 = temp_v0_15;
        this->unusedCounter28C = temp_v0_15;
        this->isStormActive = temp_v0_15;
        do {
            temp_s0_3 = phi_s0_2 + 1;
            this->unk264[phi_s0_2] = 0.0f;
            phi_s0_2 = temp_s0_3;
        } while ((s32) temp_s0_3 < 0xA);
        this->unknownState28E = 8;
        this->isStormActive = 0;
        this->actionFunc = EnNiw_LandBeforeIdle;
        return;
    }
    if (((this->actor.bgCheckFlags & 0x20) != 0) && (this->actor.yDistToWater > 15.0f) && (this->unknownState28E != 6)) {
        this->actor.velocity.y = 0.0f;
        this->actor.gravity = 0.0f;
        Math_Vec3f_Copy((Vec3f *) &spC4, (Vec3f *) &this->actor.world);
        spC8 += this->actor.yDistToWater;
        this->unkTimer250 = 0x1E;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &spC4, NULL, NULL, (s16) 0, (s16) 0x190);
        this->unkTimer252 = 0;
        this->unknownState28E = 6;
        this->actionFunc = EnNiw_Swimming;
        return;
    }
    if ((this->isStormActive != 0) && (this->actor.xyzDistToPlayerSq < (20.0f * 20.0f)) && (spD4->unk_D5C == 0)) {
        func_800B8D50(globalCtx, (Actor *) this, 2.0f, this->actor.world.rot.y, 0.0f, 0x10U);
    }
    EnNiw_CheckRage(this, globalCtx);
    if ((this->flutterSfxTimer == 0) && (this->unknownState28E == 4)) {
        this->flutterSfxTimer = 7;
        Audio_PlayActorSound2((Actor *) this, 0x38FFU);
    }
    if (this->sfxTimer1 == 0) {
        if (this->unknownState28E != 0) {
            this->sfxTimer1 = 0x1E;
            Audio_PlayActorSound2((Actor *) this, 0x2812U);
        } else {
            this->sfxTimer1 = 0x12C;
            Audio_PlayActorSound2((Actor *) this, 0x2811U);
        }
    }
    if (this->isStormActive == 0) {
        temp_s0_2 = &this->collider;
        if (this->niwType == 0) {
            Collider_UpdateCylinder((Actor *) this, temp_s0_2);
            temp_a1 = &globalCtx->colChkCtx;
            sp54 = temp_a1;
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_s0_2);
            temp_v0_14 = this->unknownState28E;
            if ((temp_v0_14 != 4) && (temp_v0_14 != 5)) {
                CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_s0_2);
            }
        }
    }
}

s32 EnNiw_LimbDraw(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3s *rot, Actor *actor) {
    if (limbIndex == 0xD) {
        rot->y += (s32) actor->unk_2E0;
    }
    if (limbIndex == 0xF) {
        rot->y += (s32) actor->unk_2E4;
    }
    if (limbIndex == 0xB) {
        rot->x += (s32) actor->unk_2DC;
        rot->y += (s32) actor->unk_2D8;
        rot->z += (s32) actor->unk_2D4;
    }
    if (limbIndex == 7) {
        rot->x += (s32) actor->unk_2D0;
        rot->y += (s32) actor->unk_2CC;
        rot->z += (s32) actor->unk_2C8;
    }
    return 0;
}

void EnNiw_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnNiw *this = (EnNiw *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelanime.skeleton, this->skelanime.limbDrawTbl, (s32) this->skelanime.dListCount, EnNiw_LimbDraw, NULL, (Actor *) this);
    EnNiw_DrawFeathers(this, globalCtx);
}

void EnNiw_SpawnFeather(EnNiw *this, Vec3f *pos, Vec3f *vel, Vec3f *accel, f32 scale) {
    EnNiwFeather *sp18;
    s16 temp_v0;
    EnNiwFeather *phi_v1;
    s16 phi_v0;

    phi_v1 = this->feathers;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_v1->isEnabled == 0) {
        phi_v1->isEnabled = 1;
        phi_v1->pos.x = pos->x;
        phi_v1->pos.y = pos->y;
        phi_v1->pos.z = pos->z;
        phi_v1->vel.x = vel->x;
        phi_v1->vel.y = vel->y;
        phi_v1->vel.z = vel->z;
        phi_v1->accel.x = accel->x;
        phi_v1->accel.y = accel->y;
        phi_v1->timer = 0;
        phi_v1->accel.z = accel->z;
        phi_v1->scale = scale / 1000.0f;
        sp18 = phi_v1;
        phi_v1->life = (s16) (s32) (Rand_ZeroFloat(20.0f) + 40.0f);
        phi_v1->zRotStart = (s16) (s32) Rand_ZeroFloat(1000.0f);
        return;
    }
    phi_v1 += 0x38;
    if ((s32) temp_v0 >= 0x14) {
        return;
    }
    goto loop_1;
}

void EnNiw_UpdateFeather(EnNiw *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_s1;
    EnNiwFeather *phi_s0;
    s16 phi_s1;

    phi_s0 = this->feathers;
    phi_s1 = 0;
    do {
        if (phi_s0->isEnabled != 0) {
            temp_f0 = phi_s0->vel.x;
            temp_f2 = phi_s0->vel.y;
            temp_f12 = phi_s0->vel.z;
            phi_s0->pos.x += temp_f0;
            phi_s0->pos.y += temp_f2;
            phi_s0->pos.z += temp_f12;
            phi_s0->timer += 1;
            phi_s0->vel.x = temp_f0 + phi_s0->accel.x;
            phi_s0->vel.y = temp_f2 + phi_s0->accel.y;
            phi_s0->vel.z = temp_f12 + phi_s0->accel.z;
            if (phi_s0->isEnabled == 1) {
                phi_s0->zRotStart += 1;
                Math_ApproachF(phi_s0 + 0x10, 0.0f, 1.0f, 0.05f);
                Math_ApproachF(phi_s0 + 0x18, 0.0f, 1.0f, 0.05f);
                if (phi_s0->vel.y < -0.5f) {
                    phi_s0->vel.y = -0.5f;
                }
                phi_s0->zRot = Math_SinS((s16) (phi_s0->zRotStart * 0xBB8)) * 3.1415927f * 0.2f;
                if ((s32) phi_s0->life < (s32) phi_s0->timer) {
                    phi_s0->isEnabled = 0;
                }
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x38;
        phi_s1 = temp_s1;
    } while ((s32) temp_s1 < 0x14);
}

void EnNiw_DrawFeathers(EnNiw *this, GlobalContext *globalCtx) {
    EnNiwFeather *temp_s1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    MtxF *temp_s0;
    f32 temp_f12;
    s16 temp_s3;
    EnNiwFeather *phi_s1;
    s32 phi_s4;
    s16 phi_s3;

    temp_s1 = this->feathers;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s1 = temp_s1;
    phi_s4 = 0;
    phi_s3 = 0;
    do {
        if (phi_s1->isEnabled == 1) {
            temp_s0 = &globalCtx->mf_187FC;
            if (phi_s4 == 0) {
                temp_v0 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_060023B0;
                temp_v0->words.w0 = 0xDE000000;
                phi_s4 = (phi_s4 + 1) & 0xFF;
            }
            SysMatrix_InsertTranslation(phi_s1->pos.x, phi_s1->pos.y, phi_s1->pos.z, 0);
            SysMatrix_NormalizeXYZ(temp_s0);
            temp_f12 = phi_s1->scale;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            SysMatrix_InsertZRotation_f(phi_s1->zRot, 1);
            SysMatrix_InsertTranslation(0.0f, -1000.0f, 0.0f, 1);
            temp_v0_2 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            temp_v0_2->words.w1 = Matrix_NewMtx(temp_s2);
            temp_v0_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (u32) &D_06002428;
            temp_v0_3->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s1 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x14);
}
