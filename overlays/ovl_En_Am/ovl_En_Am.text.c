typedef struct EnAm {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x4E];                 /* maybe part of unk_188[14]? */
    /* 0x1DC */ Vec3s unk_1DC;                      /* inferred */
    /* 0x1E2 */ char pad_1E2[0x4E];                 /* maybe part of unk_1DC[14]? */
    /* 0x230 */ void (*actionFunc)(EnAm *, GlobalContext *);
    /* 0x234 */ u8 unk_234;                         /* inferred */
    /* 0x235 */ char pad_235[0x1];
    /* 0x236 */ s16 unk_236;                        /* inferred */
    /* 0x238 */ s16 unk_238;                        /* inferred */
    /* 0x23A */ s16 unk_23A;                        /* inferred */
    /* 0x23C */ s16 unk_23C;                        /* inferred */
    /* 0x23E */ char pad_23E[0x6];                  /* maybe part of unk_23C[4]? */
    /* 0x244 */ f32 unk_244;                        /* inferred */
    /* 0x248 */ f32 unk_248;                        /* inferred */
    /* 0x24C */ Vec3f unk_24C;                      /* inferred */
    /* 0x258 */ char pad_258[0x90];                 /* maybe part of unk_24C[13]? */
    /* 0x2E8 */ ColliderCylinder unk_2E8;           /* inferred */
    /* 0x334 */ ColliderCylinder unk_334;           /* inferred */
} EnAm;                                             /* size = 0x380 */

struct _mips2c_stack_EnAm_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAm_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnAm_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnAm_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ CollisionCheckContext *sp34;         /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808AFE38 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_808AFF9C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B0040 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B00D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B0124 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B0208 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B0358 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B03C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B0460 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B04A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B04E4 {};              /* size 0x0 */

struct _mips2c_stack_func_808B0508 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B057C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B05C8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B0640 {};              /* size 0x0 */

struct _mips2c_stack_func_808B066C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B06D0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B07A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B0820 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B0894 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_808B0AD0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B0B4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B0B9C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B0EA4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

void func_808AFE38(Actor *arg0, GlobalContext *arg1); /* static */
void func_808AFF9C(EnAm *arg0);                     /* static */
void func_808B00D8(Actor *arg0);                    /* static */
void func_808B0208(Actor *arg0, GlobalContext *arg1); /* static */
void func_808B0358(EnAm *arg0);                     /* static */
void func_808B0460(EnAm *arg0);                     /* static */
void func_808B04E4(EnAm *arg0);                     /* static */
void func_808B057C(EnAm *arg0);                     /* static */
void func_808B0640(EnAm *arg0);                     /* static */
void func_808B06D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_808B0820(EnAm *arg0);                     /* static */
void func_808B0AD0(EnAm *arg0, GlobalContext *arg1); /* static */
s32 func_808B0B9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808B0EA4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000238;
extern AnimationHeader D_0600033C;
extern SkeletonHeader D_06005948;
extern AnimationHeaderCommon D_06005B3C;
static ColliderCylinderInit D_808B1070 = {
    {5, 0x10, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 8}, {0x81C2C788, 0, 0}, 1, 5, 1},
    {0x17, 0x62, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_808B109C = {
    {9, 0, 0xD, 0, 0, 1},
    {0, {0, 0, 0}, {0x760D3877, 0, 0}, 0, 1, 0},
    {0x17, 0x62, 0, {0, 0, 0}},
};
static DamageTable D_808B10C8 = {
    {
        0xF0,
        0xF0,
        0xF0,
        0xF1,
        0xF0,
        0xF0,
        0,
        0xD0,
        1,
        1,
        1,
        0xF0,
        0xF0,
        0xF0,
        1,
        1,
        0xF0,
        2,
        0xF0,
        0,
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
        0xF1,
    },
};
static CollisionCheckInfoInit D_808B10E8 = {1, 0x17, 0x62, 0xFE};
static InitChainEntry D_808B10F0[4];                /* unable to generate initializer */
static Vec3f D_808B1100 = {0.0f, -1.5f, 0.0f};
static Vec3f D_808B110C = {0.0f, -0.2f, 0.0f};
static Color_RGBA8 D_808B1118 = {0x64, 0x64, 0x64, 0};
static Color_RGBA8 D_808B111C = {0x28, 0x28, 0x28, 0};
static Color_RGBA8 D_808B1120 = {0x96, 0x96, 0x96, 0xFF};
static Color_RGBA8 D_808B1124 = {0x64, 0x64, 0x64, 0x96};
static Vec3f D_808B1128[5] = {
    {4700.0f, -500.0f, 1800.0f},
    {4700.0f, -500.0f, -1800.0f},
    {2000.0f, -1500.0f, 0.0f},
    {2000.0f, 0.0f, -1500.0f},
    {2000.0f, 0.0f, 1500.0f},
};
static Vec3f D_808B1164[2] = {{0.0f, -3000.0f, 0.0f}, {700.0f, -800.0f, 0.0f}};
static Vec3f D_808B117C[4] = {
    {800.0f, 1000.0f, -1000.0f},
    {800.0f, 1000.0f, 1000.0f},
    {800.0f, -1000.0f, 1000.0f},
    {800.0f, -1000.0f, -1000.0f},
};

void EnAm_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f6;
    EnAm *this = (EnAm *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808B10F0);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 42.857143f);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06005948, &D_0600033C, &this->unk_188, &this->unk_1DC, 0xE);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_2E8, (Actor *) this, &D_808B1070);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_334, (Actor *) this, &D_808B109C);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808B10C8, &D_808B10E8);
    this->actor.home.pos.x -= 9.0f * Math_SinS(this->actor.shape.rot.y);
    temp_f6 = 9.0f * Math_CosS(this->actor.shape.rot.y);
    this->actor.world.pos.x = this->actor.home.pos.x;
    this->actor.home.pos.z -= temp_f6;
    this->actor.world.pos.z = this->actor.home.pos.z;
    func_808AFF9C(this);
}

void EnAm_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnAm *this = (EnAm *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_2E8);
    Collider_DestroyCylinder(globalCtx, &this->unk_334);
}

void func_808AFE38(Actor *arg0, GlobalContext *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 *temp_s2;
    s32 temp_s1;
    s32 phi_s1;

    temp_s2 = &sp70;
    phi_s1 = 4;
    do {
        sp70 = randPlusMinusPoint5Scaled(65.0f) + arg0->world.pos.x;
        sp74 = randPlusMinusPoint5Scaled(10.0f) + (arg0->world.pos.y + 40.0f);
        sp78 = randPlusMinusPoint5Scaled(65.0f) + arg0->world.pos.z;
        EffectSsKiraKira_SpawnSmall(arg1, (Vec3f *) temp_s2, &D_808B1100, &D_808B110C, &D_808B1118, &D_808B111C);
        temp_s1 = phi_s1 - 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0);
    Audio_PlayActorSound2(arg0, 0x3844U);
    func_800BBDAC(arg1, arg0, (Vec3f *) &arg0->world, 4.0f, 3, 8.0f, (s16) 0x12C, (s16) 0xF, (u8) 0);
}

void func_808AFF9C(EnAm *arg0) {
    f32 temp_f0;

    temp_f0 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600033C);
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600033C, 0.0f, temp_f0, temp_f0, (u8) 0, 0.0f);
    arg0->unk_2E8.info.bumper.dmgFlags = 0x80000088;
    arg0->unk_334.info.bumper.dmgFlags = 0x77CFFF77;
    if (arg0->actor.colChkInfo.health != 0) {
        arg0->unk_2E8.base.atFlags &= 0xFFFE;
    }
    Math_Vec3f_Copy(arg0 + 0x24, arg0 + 8);
    arg0->actionFunc = func_808B0040;
}

void func_808B0040(EnAm *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    if ((((this->unk_2E8.base.ocFlags1 & 2) != 0) && ((this->unk_2E8.base.ocFlags2 & 1) != 0)) || ((this->unk_334.base.acFlags & 2) != 0)) {
        if (this->unk_234 == 0) {
            func_808B00D8();
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = this->unk_234;
    if ((s32) temp_v0 >= 0xB) {
        this->unk_234 = temp_v0 - 0xA;
        return;
    }
    this->unk_234 = 0;
    this->actor.flags &= -2;
    this->unk_23A = 0;
}

void func_808B00D8(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x3845U);
    Audio_PlayActorSound2(arg0, 0x3848U);
    arg0->unk_238 = 0x12C;
    arg0[1].projectedPos.x = (bitwise f32) func_808B0124;
}

void func_808B0124(EnAm *this, GlobalContext *globalCtx) {
    s32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 temp_f0;
    s32 temp_v0;

    temp_v0 = this->unk_234 + 0x14;
    if (temp_v0 >= 0xFF) {
        this->unk_234 = 0xFF;
        this->actor.flags |= 1;
        this->unk_2E8.info.bumper.dmgFlags = 0x81C2C788;
        this->unk_334.info.bumper.dmgFlags = 0x760D3877;
        this->unk_2E8.base.atFlags |= 1;
        this->actor.shape.yOffset = 0.0f;
        func_808B0358(this);
        return;
    }
    sp2C = temp_v0;
    sp20 = randPlusMinusPoint5Scaled(10.0f);
    sp28 = Math_CosS(this->actor.shape.rot.y) * sp20;
    temp_f0 = Math_SinS(this->actor.shape.rot.y);
    this->actor.world.pos.x = this->actor.home.pos.x + sp28;
    this->actor.world.pos.z = this->actor.home.pos.z + (temp_f0 * sp20);
    this->unk_234 = (u8) sp2C;
}

void func_808B0208(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;

    if ((arg0->speedXZ > 0.0f) && ((arg0->bgCheckFlags & 8) != 0)) {
        arg0->world.rot.y = (arg0->wallYaw * 2) - arg0->world.rot.y;
        arg0->world.pos.x += arg0->speedXZ * Math_SinS(arg0->world.rot.y);
        arg0->world.pos.z += arg0->speedXZ * Math_CosS(arg0->world.rot.y);
    }
    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 8.0f) != 0) {
        arg0->speedXZ = arg0[1].uncullZoneForward;
        arg0->velocity.y = 12.0f;
    } else if (arg0->unk_15C > 11.0f) {
        if ((arg0->bgCheckFlags & 1) == 0) {
            arg0->unk_15C = 11.0f;
        } else {
            Math_ScaledStepToS(arg0 + 0x32, arg0->unk_23C, 0x1F40);
            arg0->speedXZ = 0.0f;
            if ((arg0->bgCheckFlags & 2) != 0) {
                func_808AFE38(arg0, arg1);
            }
        }
    }
    if (func_808B0894 != (bitwise s32) arg0[1].projectedPos.x) {
        arg0->shape.rot.y = arg0->world.rot.y;
    }
}

void func_808B0358(EnAm *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimPlaybackRepeat(temp_a0, &D_06000238, 4.0f);
    arg0->unk_236 = 3;
    arg0->actionFunc = func_808B03C0;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_240 = 6.0f;
}

void func_808B03C0(EnAm *this, GlobalContext *globalCtx) {
    EnAm *temp_a0;
    PosRot *temp_a1;
    EnAm *phi_a0;

    this->unk_23C = this->actor.yawTowardsPlayer;
    func_808B0208();
    temp_a0 = this;
    phi_a0 = temp_a0;
    if ((temp_a0->actor.bgCheckFlags & 2) != 0) {
        temp_a0->unk_236 += -1;
    }
    if (temp_a0->unk_236 == 0) {
        func_808B0640(temp_a0);
        return;
    }
    temp_a1 = &temp_a0->actor.home;
    if ((temp_a0->unk_238 == 0) || (this = temp_a0, phi_a0 = this, (Actor_XZDistanceToPoint((Actor *) temp_a0, (Vec3f *) temp_a1) > 240.0f))) {
        func_808B0460(phi_a0);
    }
}

void func_808B0460(Actor *arg0) {
    arg0->world.rot.y = arg0->shape.rot.y;
    arg0[1].uncullZoneForward = 0.0f;
    arg0->unk_23C = Actor_YawToPoint(arg0, arg0 + 8);
    arg0[1].projectedPos.x = (bitwise f32) func_808B04A8;
}

void func_808B04A8(EnAm *this, GlobalContext *globalCtx) {
    func_808B0208();
    if (this->actor.world.rot.y == this->unk_23C) {
        func_808B057C(this);
    }
}

void func_808B04E4(EnAm *arg0) {
    arg0->actionFunc = func_808B0508;
    arg0->unk_240 = 0.0f;
    arg0->unk_23C = arg0->actor.home.rot.y;
}

void func_808B0508(EnAm *this, GlobalContext *globalCtx) {
    func_808B0208((Actor *) this);
    if ((this->actor.bgCheckFlags & 1) == 0) {
        Math_StepToF((f32 *) &this->actor.world, this->actor.home.pos.x, 2.0f);
        Math_StepToF(&this->actor.world.pos.z, this->actor.home.pos.z, 2.0f);
    }
    if (this->actor.world.rot.y == this->actor.home.rot.y) {
        func_808AFF9C(this);
    }
}

void func_808B057C(Actor *arg0) {
    arg0[1].uncullZoneForward = 6.0f;
    arg0->unk_23C = Actor_YawToPoint(arg0, arg0 + 8);
    arg0->unk_236 = 1;
    arg0[1].projectedPos.x = (bitwise f32) func_808B05C8;
}

void func_808B05C8(EnAm *this, GlobalContext *globalCtx) {
    PosRot *sp24;
    PosRot *temp_a1;

    temp_a1 = &this->actor.home;
    sp24 = temp_a1;
    this->unk_23C = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1);
    func_808B0208((Actor *) this, globalCtx);
    if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1) < 8.0f) {
        func_808B04E4(this);
    }
}

void func_808B0640(EnAm *arg0) {
    arg0->unk_236 = 0x28;
    arg0->actionFunc = func_808B066C;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_240 = 0.0f;
}

void func_808B066C(EnAm *this, GlobalContext *globalCtx) {
    EnAm *temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk_236;
    if (temp_v0 != 0) {
        this->unk_236 = temp_v0 - 1;
        return;
    }
    this->unk_23C = this->actor.yawTowardsPlayer;
    func_808B0208();
    temp_a0 = this;
    if (temp_a0->actor.shape.rot.y == temp_a0->unk_23C) {
        this = temp_a0;
        Audio_PlayActorSound2((Actor *) temp_a0, 0x3848U);
        func_808B0358(this);
    }
}

void func_808B06D0(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06005B3C, 1.0f, 4.0f, (f32) (SkelAnime_GetFrameCount(&D_06005B3C) - 6), (u8) 2, 0.0f);
    func_800BE504(arg0, arg0 + 0x2E8);
    arg0->speedXZ = 6.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) (SkelAnime_GetFrameCount(&D_06005B3C) - 0xA));
    Audio_PlayActorSound2(arg0, 0x3847U);
    arg0->unk_2F9 = (u8) (arg0->unk_2F9 & 0xFFFE);
    arg0->unk_234 = 0xFF;
    arg0[1].projectedPos.x = (bitwise f32) func_808B07A8;
}

void func_808B07A8(EnAm *this, GlobalContext *globalCtx) {
    f32 *temp_a0;

    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_StepToF(temp_a0, 0.0f, 0.5f);
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        if (this->actor.colChkInfo.health == 0) {
            func_808B0820(this);
            return;
        }
        this->unk_2E8.base.acFlags |= 1;
        func_808B0358(this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_808B0820(EnAm *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimPlaybackRepeat(temp_a0, &D_06000238, 4.0f);
    arg0->unk_236 = 0x40;
    arg0->actor.flags |= 0x10;
    arg0->actionFunc = func_808B0894;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_240 = 6.0f;
}

void func_808B0894(EnAm *this, GlobalContext *globalCtx) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    Actor *temp_v0_2;
    f32 *temp_s3;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_s0;
    s32 phi_s0;

    this->unk_236 += -1;
    this->unk_23C = this->actor.yawTowardsPlayer;
    func_808B0208((Actor *) this, globalCtx);
    temp_v0 = this->unk_236;
    if (temp_v0 == 1) {
        temp_v0_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 9, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 2, (s16) 0);
        if (temp_v0_2 != 0) {
            temp_v0_2->unk_1F0 = 0;
        }
        Audio_PlayActorSound2((Actor *) this, 0x3846U);
        Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0xB0);
        temp_s3 = &sp80;
        phi_s0 = 0;
        do {
            sp80 = (Math_SinS(0) * 7.0f) + this->actor.world.pos.x;
            sp84 = (randPlusMinusPoint5Scaled(10.0f) * 6.0f) + (this->actor.world.pos.y + 40.0f);
            sp88 = (Math_CosS(0) * 7.0f) + this->actor.world.pos.z;
            func_800B0EB0(globalCtx, (Vec3f *) temp_s3, &D_801D15B0, &D_801D15B0, &D_808B1120, &D_808B1124, (s16) 0xC8, (s16) 0x2D, (s16) 0xC);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 8);
        goto block_10;
    }
    if (temp_v0 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((temp_v0 & 3) == 0) {
        func_800BCB70((Actor *) this, 0x4000, 0xFF, 0, (s16) 4);
    }
block_10:
    temp_v0_3 = this->actor.world.rot.z;
    if ((s32) temp_v0_3 < 0x1F40) {
        this->actor.world.rot.z = temp_v0_3 + 0x320;
    }
    this->actor.shape.rot.y += this->actor.world.rot.z;
}

void func_808B0AD0(EnAm *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600033C, 1.0f, 0.0f, 8.0f, (u8) 2, 0.0f);
    arg0->actionFunc = func_808B0B4C;
    arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer;
    arg0->actor.speedXZ = -6.0f;
}

void func_808B0B4C(EnAm *this, GlobalContext *globalCtx) {
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        func_808B0358(this);
    }
}

s32 func_808B0B9C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk_2F9;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_2F9 = (u8) (temp_v0 & 0xFFFD);
        func_800BE258(arg0, arg0 + 0x300);
        if (Actor_ApplyDamage(arg0) == 0) {
            Enemy_StartFinishingBlow(arg1, arg0);
        }
        if (arg0->colChkInfo.damageEffect == 0xD) {
            return 1;
        }
        if (arg0->colChkInfo.health != 0) {
            arg0->unk_2F8 = (u8) (arg0->unk_2F8 & 0xFFFE);
        }
        arg0->unk_2F8 = (u8) (arg0->unk_2F8 & 0xFFFD);
        if (arg0->colChkInfo.damageEffect == 4) {
            arg0[1].uncullZoneDownward = 0.7f;
            arg0[1].uncullZoneScale = 4.0f;
            Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0[2].wallYaw, (f32) arg0->unk_310, (f32) arg0->unk_312, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        func_808B06D0(arg0, arg1);
        return 1;
    }
    return 0;
}

void EnAm_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    f32 temp_f0;
    s16 temp_v0_2;
    u8 temp_v0;
    EnAm *this = (EnAm *) thisx;

    if (func_808B0B9C((Actor *) this, globalCtx) == 0) {
        temp_v0 = this->unk_2E8.base.atFlags;
        if ((temp_v0 & 4) != 0) {
            this->unk_2E8.base.atFlags = temp_v0 & 0xFFF9;
            if (this->actor.colChkInfo.health == 0) {
                this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0x8000;
            } else {
                func_808B0AD0(this, globalCtx);
            }
        }
    }
    temp_v0_2 = this->unk_238;
    if (temp_v0_2 != 0) {
        this->unk_238 = temp_v0_2 - 1;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 30.0f, 100.0f, 0x1DU);
    Actor_SetHeight((Actor *) this, 64.0f);
    temp_a1 = &this->unk_2E8;
    sp30 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &this->unk_334;
    sp2C = temp_a1_2;
    Collider_UpdateCylinder((Actor *) this, temp_a1_2);
    temp_a1_3 = &globalCtx->colChkCtx;
    sp34 = temp_a1_3;
    CollisionCheck_SetOC(globalCtx, temp_a1_3, (Collider *) sp30);
    if ((this->unk_2E8.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp30);
    }
    CollisionCheck_SetAC(globalCtx, sp34, (Collider *) sp2C);
    if ((this->unk_2E8.base.atFlags & 1) != 0) {
        this->actor.flags |= 0x1000000;
        CollisionCheck_SetAT(globalCtx, sp34, (Collider *) sp30);
    }
    Math_StepToF(&this->unk_244, 0.0f, 0.05f);
    temp_f0 = (this->unk_244 + 1.0f) * 0.35f;
    this->unk_248 = temp_f0;
    if (temp_f0 > 0.7f) {
        this->unk_248 = 0.7f;
        return;
    }
    this->unk_248 = this->unk_248;
}

void func_808B0EA4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s32 temp_s0;
    s32 phi_s3;
    Vec3f *phi_s1;
    Vec3f *phi_s2;
    s32 phi_s0;

    phi_s1 = NULL;
    phi_s2 = NULL;
    if (arg1 == 4) {
        phi_s3 = 5;
        phi_s1 = D_808B1128;
        phi_s2 = arg4 + 0x24C;
    } else if (arg1 == 0xD) {
        phi_s3 = 4;
        phi_s1 = D_808B117C;
        phi_s2 = arg4 + 0x2B8;
    } else if ((arg1 == 7) || (phi_s3 = 0, (arg1 == 0xA))) {
        if (arg1 == 7) {
            phi_s3 = 2;
            phi_s1 = D_808B1164;
            phi_s2 = arg4 + 0x288;
        } else {
            phi_s3 = 2;
            phi_s1 = D_808B1164;
            phi_s2 = arg4 + 0x2A0;
        }
    }
    phi_s0 = 0;
    if (phi_s3 > 0) {
        do {
            SysMatrix_MultiplyVector3fByState(phi_s1, phi_s2);
            temp_s0 = phi_s0 + 1;
            phi_s1 = &phi_s1[1];
            phi_s2 = &phi_s2[1];
            phi_s0 = temp_s0;
        } while (temp_s0 != phi_s3);
    }
}

void EnAm_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    GraphicsContext *temp_v1;
    EnAm *this = (EnAm *) thisx;

    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyOpa.p;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) &sSetupDL[150];
    temp_v0[1].words.w0 = 0xFB000000;
    temp_v0[1].words.w1 = (u32) this->unk_234;
    temp_v1->polyOpa.p = &temp_v0[2];
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, NULL, func_808B0EA4, (Actor *) this);
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_24C, 0xD, this->unk_248, 0.0f, this->unk_244, (u8) 0x14);
}
