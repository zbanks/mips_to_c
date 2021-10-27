typedef struct EnPeehat {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x8A];                 /* maybe part of unk_188[24]? */
    /* 0x218 */ Vec3s unk_218;                      /* inferred */
    /* 0x21E */ char pad_21E[0x8A];                 /* maybe part of unk_218[24]? */
    /* 0x2A8 */ void (*actionFunc)(EnPeehat *, GlobalContext *);
    /* 0x2AC */ char pad_2AC[0x2];
    /* 0x2AE */ u8 unk_2AE;                         /* inferred */
    /* 0x2AF */ char pad_2AF[0x1];
    /* 0x2B0 */ s16 unk_2B0;                        /* inferred */
    /* 0x2B2 */ s16 unk_2B2;                        /* inferred */
    /* 0x2B4 */ s16 unk_2B4;                        /* inferred */
    /* 0x2B6 */ char pad_2B6[0x6];                  /* maybe part of unk_2B4[4]? */
    /* 0x2BC */ f32 unk_2BC;                        /* inferred */
    /* 0x2C0 */ f32 unk_2C0;                        /* inferred */
    /* 0x2C4 */ f32 unk_2C4;                        /* inferred */
    /* 0x2C8 */ f32 unk_2C8;                        /* inferred */
    /* 0x2CC */ f32 unk_2CC;                        /* inferred */
    /* 0x2D0 */ f32 unk_2D0;                        /* inferred */
    /* 0x2D4 */ char pad_2D4[0xC];                  /* maybe part of unk_2D0[4]? */
    /* 0x2E0 */ Vec3f unk_2E0;                      /* inferred */
    /* 0x2EC */ Vec3f unk_2EC;                      /* inferred */
    /* 0x2F0 */ f32 unk_2F0;                        /* overlap; inferred */
    /* 0x2F8 */ char pad_2F8[0x4];
    /* 0x2FC */ f32 unk_2FC;                        /* inferred */
    /* 0x300 */ char pad_300[0xC4];                 /* maybe part of unk_2FC[50]? */
    /* 0x3C4 */ ColliderCylinder unk_3C4;           /* inferred */
    /* 0x410 */ ColliderSphere unk_410;             /* inferred */
    /* 0x468 */ ColliderTris unk_468;               /* inferred */
    /* 0x488 */ ColliderTrisElement unk_488;        /* inferred */
    /* 0x4E4 */ char pad_4E4[0x5C];
} EnPeehat;                                         /* size = 0x540 */

struct _mips2c_stack_EnPeehat_Destroy {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnPeehat_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderTris *sp34;                  /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x10];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EnPeehat_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnPeehat_Update {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ CollisionContext *sp54;              /* inferred */
    /* 0x58 */ ColliderCylinder *sp58;              /* inferred */
    /* 0x5C */ CollisionCheckContext *sp5C;         /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ PosRot *sp64;                        /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ u32 sp6C;                            /* inferred */
    /* 0x70 */ CollisionPoly *sp70;                 /* inferred */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x14];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80897170 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808971DC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80897258 {
    /* 0x00 */ char pad_0[0x42];
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80897390 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80897498 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80897520 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80897648 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808976DC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80897864 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80897910 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80897A34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80897A94 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80897D00 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80897D48 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80897EAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80897F44 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80898124 {};              /* size 0x0 */

struct _mips2c_stack_func_80898144 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808982E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80898338 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80898414 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80898454 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808984E0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80898594 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80898654 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808986A4 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8089874C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80898E74 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80899024 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_800BE568(Actor *, f32 *);                    /* extern */
void func_80897170(Actor *arg0);                    /* static */
void func_808971DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80897258(GlobalContext *arg0, EnPeehat *arg1, ? *arg2, f32 arg3, f32 arg4); /* static */
void func_80897390(Actor *arg0, GlobalContext *arg1); /* static */
void func_80897498(EnPeehat *arg0);                 /* static */
void func_80897520(Actor *arg0, GlobalContext *arg1); /* static */
void func_80897648(Actor *arg0, f32, Actor *);      /* static */
void func_808976DC(EnPeehat *arg0, GlobalContext *arg1); /* static */
void func_80897864(Actor *arg0);                    /* static */
void func_80897910(Actor *arg0, void *arg1);        /* static */
void func_80897A34(EnPeehat *arg0);                 /* static */
void func_80897A94(Actor *arg0, GlobalContext *arg1); /* static */
void func_80897D00(Actor *arg0);                    /* static */
void func_80897D48(EnPeehat *arg0, GlobalContext *arg1); /* static */
void func_80897EAC(EnPeehat *arg0);                 /* static */
void func_80897F44(Actor *arg0, void *arg1);        /* static */
void func_80898124(Actor *arg0);                    /* static */
void func_80898144(Actor *arg0, void *arg1);        /* static */
void func_808982E0(Actor *arg0);                    /* static */
void func_80898338(Actor *arg0, GlobalContext *arg1); /* static */
void func_80898414(Actor *arg0);                    /* static */
void func_80898454(Actor *arg0, GlobalContext *arg1); /* static */
void func_808984E0(Actor *arg0);                    /* static */
void func_80898594(EnPeehat *arg0, ? arg1);         /* static */
void func_80898654(EnPeehat *arg0);                 /* static */
void func_808986A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_8089874C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80898E74(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5); /* static */
void func_80899024(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000350;
extern AnimationHeader D_060005C4;
extern AnimationHeader D_06000844;
extern AnimationHeader D_060009C4;
extern SkeletonHeader D_06001C80;
static ColliderCylinderInit D_80899430 = {
    {0xB, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x32, 0x78, 0xFFEC, {0, 0, 0}},
};
static ColliderSphereInit D_8089945C = {
    {6, 0, 9, 0x39, 0x10, 4},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0, {{0, 0, 0}, 0x28}, 0x64},
};
static ColliderTrisElementInit D_80899488[2] = {
    {
        {0, {0xF7CFFFFF, 0, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
        {{{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}}},
    },
    {
        {0, {0xF7CFFFFF, 0, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
        {{{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}}},
    },
};
static ColliderTrisInit D_80899500 = {{9, 0x10, 0xD, 0, 0x10, 2}, 2, &D_80899488};
static DamageTable D_80899510 = {
    {
        0,
        1,
        1,
        1,
        1,
        1,
        0,
        0x10,
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
        0,
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
static CollisionCheckInfoInit2 D_80899530 = {0xF, 0x32, 0x78, 0xFFEC, 0xFE};
static CollisionCheckInfoInit2 D_8089953C = {1, 0x14, 0xF, 0xFFFB, 0x1E};
static InitChainEntry D_80899548[4];                /* unable to generate initializer */
static Vec3f D_80899558;                            /* type too large by 8; unable to generate initializer */
static f32 D_8089955C = 8.0f;
static Vec3f D_80899564;                            /* type too large by 4; unable to generate initializer */
static f32 D_8089956C = 0.0f;
static Vec3f D_80899570[4] = {
    {1300.0f, 1200.0f, 0.0f},
    {1300.0f, -1200.0f, 0.0f},
    {1300.0f, 0.0f, 1200.0f},
    {1300.0f, 0.0f, -1200.0f},
};
static ? D_808995A0;                                /* unable to generate initializer */
static ? D_808995A3;                                /* unable to generate initializer */
static ? D_808995A4;                                /* unable to generate initializer */

void EnPeehat_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPeehat *this = (EnPeehat *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80899548);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06001C80, &D_060009C4, &this->unk_188, &this->unk_218, 0x18);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 27.0f);
    this->unk_2B0 = 0;
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, (Vec3f *) &this->actor.world);
    this->actor.floorHeight = this->actor.world.pos.y;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_3C4, (Actor *) this, &D_80899430);
    Collider_InitAndSetSphere(globalCtx, &this->unk_410, (Actor *) this, &D_8089945C);
    Collider_InitAndSetTris(globalCtx, &this->unk_468, (Actor *) this, &D_80899500, &this->unk_488);
    if (this->actor.params == 0) {
        CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80899510, &D_80899530);
        if (gSaveContext.isNight != 0) {
            this->actor.shape.yOffset = -1000.0f;
        }
        Actor_SetScale((Actor *) this, 0.036f);
        this->actor.hintId = 0x48;
        func_80897498(this);
        return;
    }
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80899510, &D_8089953C);
    this->actor.scale.x = 0.006f;
    this->actor.scale.z = 0.006f;
    this->unk_3C4.dim.radius = 0x14;
    this->unk_3C4.dim.height = 0xF;
    this->unk_3C4.dim.yShift = -5;
    this->actor.hintId = 0x49;
    this->unk_3C4.base.ocFlags1 &= 0xFFFE;
    this->actor.scale.y = 0.003f;
    this->actor.velocity.y = 6.0f;
    func_80897A34(this);
}

void EnPeehat_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0;
    EnPeehat *this = (EnPeehat *) thisx;

    Collider_DestroyCylinder(globalCtx, &this->unk_3C4);
    Collider_DestroySphere(globalCtx, &this->unk_410);
    Collider_DestroyTris(globalCtx, &this->unk_468);
    if (this->actor.params != 0) {
        temp_v0 = this->actor.parent;
        if ((temp_v0 != 0) && (temp_v0->update != 0)) {
            temp_v0->unk_2AC = (u8) (temp_v0->unk_2AC - 1);
        }
    }
}

void func_80897170(Actor *arg0) {
    arg0->unk_2AE = 0xA;
    arg0[2].focus.pos.z = 1.1f;
    arg0->unk_424 = 3;
    arg0->unk_2B0 = 0x50;
    arg0->unk_2D0 = 1.6500001f;
    arg0[2].focus.pos.y = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_808971DC(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_2AE == 0xA) {
        arg0->unk_2AE = 0U;
        arg0->unk_424 = 6;
        arg0[2].focus.pos.y = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2EC), 0x12, 2, 0.5f, 0.35f);
    }
}

void func_80897258(GlobalContext *arg0, EnPeehat *arg1, ? *arg2, f32 arg3, f32 arg4) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 sp42;
    s32 temp_v1;

    temp_v1 = Rand_Next() >> 0x10;
    sp42 = (s16) temp_v1;
    sp48 = arg1->actor.floorHeight;
    sp44 = (Math_SinS((s16) temp_v1) * arg3) + arg2->unk_0;
    sp4C = (Math_CosS(sp42) * arg3) + arg2->unk_8;
    D_80899564.x = randPlusMinusPoint5Scaled(1.05f);
    D_8089956C = randPlusMinusPoint5Scaled(1.05f);
    D_8089955C = randPlusMinusPoint5Scaled(4.0f) + 8.0f;
    EffectSsHahen_Spawn(arg0, (Vec3f *) &sp44, &D_80899558, &D_80899564, (s16) 0, (s16) (s32) ((Rand_ZeroFloat(5.0f) + 12.0f) * arg4), (s16) -1, (s16) 0xA, NULL);
}

void func_80897390(Actor *arg0, GlobalContext *arg1) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 phi_s2;
    s32 phi_s1;

    temp_s1 = 3 - arg0->unk_2AC;
    arg0->unk_3D5 = (u8) (arg0->unk_3D5 & 0xFFFD);
    phi_s2 = (s32) (s16) (arg0->yawTowardsPlayer + 0x8000);
    phi_s1 = temp_s1;
    if (temp_s1 > 0) {
        do {
            phi_s2 = (s32) (s16) (phi_s2 + 0x5555);
            if (Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x14, arg0->world.pos.x, arg0->world.pos.y + 50.0f, arg0->world.pos.z, (s16) 0, (s16) phi_s2, (s16) 0, 1) != 0) {
                arg0->unk_2AC = (u8) (arg0->unk_2AC + 1);
            }
            temp_s1_2 = phi_s1 - 1;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 > 0);
    }
    arg0->unk_2B0 = 8;
    Audio_PlayActorSound2(arg0, 0x3956U);
}

void func_80897498(EnPeehat *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060009C4, 0.0f, 3.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060009C4), (u8) 2, 0.0f);
    arg0->unk_2B0 = 0;
    arg0->unk_2AD = 1;
    arg0->unk_3C4.base.acFlags &= 0xFFFD;
    arg0->actionFunc = func_80897520;
}

void func_80897520(Actor *arg0, GlobalContext *arg1) {
    f32 *temp_a0;
    s16 temp_v0;

    temp_a0 = arg0 + 0xC4;
    if (gSaveContext.isNight == 0) {
        arg0->flags |= 1;
        arg0->unk_421 = (u8) (arg0->unk_421 | 1);
        if (arg0->xzDistToPlayer < 740.0f) {
            func_80897648(arg0, -1000.0f, arg0);
            return;
        }
        Math_StepToF(arg0 + 0xC4, -1000.0f, 10.0f);
        return;
    }
    arg0->flags &= -2;
    arg0->unk_421 = (u8) (arg0->unk_421 & ~1);
    arg0 = arg0;
    Math_StepToF(temp_a0, -1000.0f, 50.0f);
    temp_v0 = arg0->unk_2B0;
    if (temp_v0 != 0) {
        arg0->unk_2B0 = (s16) (temp_v0 - 1);
        if ((arg0->unk_2B0 & 4) != 0) {
            Math_StepToF(arg0 + 0x2C4, 0.205f, 0.235f);
            return;
        }
        Math_StepToF(arg0 + 0x2C4, 0.0f, 0.005f);
        return;
    }
    if ((arg0->unk_3D5 & 2) != 0) {
        func_80897390(arg0, arg1);
    }
}

void func_80897648(Actor *arg0) {
    if (func_80898454 != arg0->unk_2A8) {
        SkelAnime_ChangeAnim(arg0 + 0x144, &D_060009C4, 0.0f, 3.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060009C4), (u8) 2, 0.0f);
    }
    arg0->unk_2B0 = 0x10;
    Audio_PlayActorSound2(arg0, 0x3954U);
    arg0->unk_2A8 = func_808976DC;
}

void func_808976DC(EnPeehat *arg0, GlobalContext *arg1) {
    f32 sp38;
    ? sp34;
    s16 temp_v0;

    Math_StepToF(arg0 + 0xC4, 0.0f, 50.0f);
    if (Math_ScaledStepToS(arg0 + 0x2B2, 0xFA0, 0x320) != 0) {
        temp_v0 = arg0->unk_2B0;
        if (temp_v0 != 0) {
            arg0->unk_2B0 = temp_v0 - 1;
            if ((arg0->unk_2B0 == 0) && (arg0->unk_144.animPlaybackSpeed < 0.5f)) {
                arg0->unk_2B0 = -1;
                arg0->unk_144.animPlaybackSpeed = 1.0f;
            }
        }
        if ((SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) || (arg0->unk_2B0 == 0)) {
            func_80897EAC(arg0);
        } else {
            arg0->actor.world.pos.y += 6.5f;
        }
        if ((arg0->actor.world.pos.y - arg0->actor.floorHeight) < 80.0f) {
            Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
            sp38 = arg0->actor.floorHeight;
            func_800BBFB0(arg1, (Vec3f *) &sp34, 90.0f, 1, (s16) 0x96, (s16) 0x64, (u8) 1);
        }
    }
    func_80897258(arg1, arg0, arg0 + 0x24, 75.0f, 2.0f);
    Math_StepToF(arg0 + 0x2C4, 0.075f, 0.005f);
    arg0->unk_2B4 += arg0->unk_2B2;
}

void func_80897864(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060005C4);
    arg0->unk_2B8 = 0.0f;
    if (func_80898338 == arg0->unk_2A8) {
        arg0->unk_2AD = (s8) -(s32) arg0->unk_2AD;
    } else {
        arg0 = arg0;
        if (Rand_ZeroOne() < 0.5f) {
            arg0->unk_2AD = 1;
        } else {
            arg0->unk_2AD = -1;
        }
    }
    arg0->unk_478 = (u8) (arg0->unk_478 | 1);
    arg0->unk_2A8 = func_80897910;
}

void func_80897910(Actor *arg0, void *arg1) {
    s32 sp24;

    sp24 = arg1->unk_1CCC;
    Math_StepToF(arg0 + 0x70, 3.0f, 0.25f);
    Math_StepToF(arg0 + 0x28, arg0->floorHeight + 80.0f, 3.0f);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if ((gSaveContext.isNight == 0) && (Math_Vec3f_DistXZ(arg0 + 8, sp24 + 0x24) < 1200.0f)) {
        Math_ScaledStepToS(arg0 + 0x32, arg0->yawTowardsPlayer, 0x3E8);
        arg0->shape.rot.y += arg0->unk_2AD * 0x1C2;
    } else {
        func_80898124(arg0);
    }
    Math_ScaledStepToS(arg0 + 0x2B2, 0xFA0, 0x1F4);
    arg0->unk_2B4 = (s16) (arg0->unk_2B4 + arg0->unk_2B2);
    Math_StepToF(arg0 + 0x2C4, 0.075f, 0.005f);
    func_800B9010(arg0, 0x3155U);
}

void func_80897A34(EnPeehat *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060005C4);
    arg0->unk_2B0 = 0x1E;
    arg0->unk_468.base.atFlags |= 1;
    arg0->actionFunc = func_80897A94;
    arg0->actor.speedXZ = 5.3f;
}

void func_80897A94(Actor *arg0, GlobalContext *arg1) {
    PosRot *sp30;
    PosRot *temp_a1;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_v0;

    temp_v0 = arg0->parent;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        arg0->parent = NULL;
    }
    if ((arg0->world.pos.y - arg0->floorHeight) >= 70.0f) {
        Math_StepToF(arg0 + 0x68, -1.3f, 0.5f);
    } else {
        Math_StepToF(arg0 + 0x68, -0.135f, 0.05f);
    }
    temp_v0_2 = arg0->unk_2B0;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk_2B0 = (s16) (temp_v0_2 - 1);
    } else {
        Math_ScaledStepToS(arg0 + 0x32, arg0->yawTowardsPlayer, 0x33E);
        arg0->unk_3D6 = (u8) (arg0->unk_3D6 | 1);
    }
    arg0->shape.rot.y += 0x15E;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    Math_ScaledStepToS(arg0 + 0x2B2, 0xFA0, 0x1F4);
    arg0->unk_2B4 = (s16) (arg0->unk_2B4 + arg0->unk_2B2);
    Math_StepToF(arg0 + 0x2C4, 0.075f, 0.005f);
    func_800B9010(arg0, 0x3184U);
    temp_v0_3 = arg0->unk_478;
    if ((temp_v0_3 & 4) != 0) {
        arg0->unk_478 = (u8) (temp_v0_3 & 0xFFFA);
        arg0->colChkInfo.health = 0;
        func_808982E0(arg0);
        return;
    }
    if (((arg0->unk_3D5 & 2) != 0) || ((arg0->bgCheckFlags & 1) != 0)) {
        temp_a1 = &arg0->world;
        sp30 = temp_a1;
        func_800B3030(arg1, (Vec3f *) temp_a1, &D_801D15B0, &D_801D15B0, (s16) 0x28, (s16) 7, 0);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0xB, 0x3878U);
        if ((arg0->bgCheckFlags & 1) == 0) {
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0x28, 0x3985U);
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((temp_v0_3 & 2) != 0) {
        temp_v1 = arg0->world.rot.y;
        arg0->unk_478 = (u8) (temp_v0_3 & 0xFFFD);
        if ((s32) (s16) (arg0->yawTowardsPlayer - temp_v1) > 0) {
            arg0->world.rot.y = temp_v1 - 0x2000;
        } else {
            arg0->world.rot.y = temp_v1 + 0x2000;
        }
        arg0->unk_2B0 = 0x28;
        return;
    }
    temp_v0_4 = arg0->unk_3D6;
    if ((temp_v0_4 & 2) != 0) {
        arg0->unk_3D6 = (u8) (temp_v0_4 & 0xFFFD);
        temp_v1_2 = arg0->world.rot.y;
        if ((s32) (s16) (Actor_YawBetweenActors(arg0, (Actor *) arg0[3].flags) - temp_v1_2) > 0) {
            arg0->world.rot.y = temp_v1_2 - 0x2000;
        } else {
            arg0->world.rot.y = temp_v1_2 + 0x2000;
        }
        arg0->unk_2B0 = 0xA;
    }
}

void func_80897D00(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000350);
    arg0->unk_2A8 = func_80897D48;
    arg0->unk_478 = (u8) (arg0->unk_478 & 0xFFFE);
}

void func_80897D48(EnPeehat *arg0, GlobalContext *arg1) {
    f32 sp38;
    ? sp34;
    f32 temp_f0;

    Math_StepToF(arg0 + 0xC4, -1000.0f, 50.0f);
    Math_StepToF(arg0 + 0x70, 0.0f, 1.0f);
    Math_ScaledStepToS(arg0 + 0xBC, 0, 0x32);
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        func_80897498(arg0);
        arg0->actor.world.pos.y = arg0->actor.floorHeight;
        Audio_PlayActorSound2((Actor *) arg0, 0x3957U);
    } else {
        temp_f0 = arg0->actor.floorHeight;
        if (temp_f0 < arg0->actor.world.pos.y) {
            Math_SmoothStepToF(&arg0->actor.world.pos.y, temp_f0, 0.3f, 3.5f, 0.25f);
            if ((arg0->actor.world.pos.y - arg0->actor.floorHeight) < 60.0f) {
                Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &arg0->actor.world);
                sp38 = arg0->actor.floorHeight;
                func_800BBFB0(arg1, (Vec3f *) &sp34, 80.0f, 1, (s16) 0x96, (s16) 0x64, (u8) 1);
                func_80897258(arg1, arg0, &sp34, 75.0f, 2.0f);
            }
        }
    }
    Math_ScaledStepToS(&arg0->unk_2B2, 0, 0x64);
    arg0->unk_2B4 += arg0->unk_2B2;
}

void func_80897EAC(EnPeehat *arg0) {
    s32 temp_f16;

    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_060005C4);
    arg0->actor.speedXZ = Rand_ZeroFloat(0.5f) + 2.5f;
    temp_f16 = (s32) (Rand_ZeroFloat(10.0f) + 10.0f);
    arg0->unk_468.base.atFlags |= 1;
    arg0->unk_410.base.acFlags |= 1;
    arg0->actionFunc = func_80897F44;
    arg0->unk_2B0 = (s16) temp_f16;
}

void func_80897F44(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_f0 = arg0->world.pos.y;
    if ((temp_f0 - arg0->floorHeight) > 75.0f) {
        arg0->world.pos.y = temp_f0 - 1.0f;
    }
    temp_f0_2 = cos_rad(arg0->unk_2B8);
    arg0->world.pos.y += temp_f0_2 * 1.4f;
    arg0->unk_2B0 = (s16) (arg0->unk_2B0 - 1);
    arg0->unk_2B8 = (f32) (arg0->unk_2B8 + (fabsf(temp_f0_2 * 0.18f) + 0.07f));
    if ((s32) arg0->unk_2B0 <= 0) {
        arg0->speedXZ = Rand_ZeroFloat(0.5f) + 2.5f;
        arg0->unk_2B0 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 10.0f);
        arg0->unk_2B6 = (s16) (s32) randPlusMinusPoint5Scaled(1000.0f);
    }
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    arg0->world.rot.y += arg0->unk_2B6;
    arg0->shape.rot.y += 0x15E;
    if ((gSaveContext.isNight == 0) && (Math_Vec3f_DistXZ(arg0 + 8, sp24 + 0x24) < 1200.0f)) {
        arg0->world.rot.y = arg0->yawTowardsPlayer;
        func_80897864(arg0);
    } else {
        func_80898124(arg0);
    }
    Math_ScaledStepToS(arg0 + 0x2B2, 0xFA0, 0x1F4);
    arg0->unk_2B4 = (s16) (arg0->unk_2B4 + arg0->unk_2B2);
    Math_StepToF((f32 *) &arg0[2].focus, 0.075f, 0.005f);
    func_800B9010(arg0, 0x3155U);
}

void func_80898124(Actor *arg0) {
    arg0->unk_2A8 = func_80898144;
    arg0->speedXZ = 2.5f;
}

void func_80898144(Actor *arg0, void *arg1) {
    s32 sp2C;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f0;

    sp2C = arg1->unk_1CCC;
    temp_f0 = arg0->world.pos.y;
    if ((temp_f0 - arg0->floorHeight) > 75.0f) {
        arg0->world.pos.y = temp_f0 - 1.0f;
    } else {
        arg0->world.pos.y = temp_f0 + 1.0f;
    }
    arg0->world.pos.y += cos_rad(arg0->unk_2B8) * 1.4f;
    temp_a0 = arg0 + 0x24;
    temp_a1 = arg0 + 8;
    arg0->unk_2B8 = (f32) (arg0->unk_2B8 + (fabsf(cos_rad(arg0->unk_2B8) * 0.18f) + 0.07f));
    sp20 = temp_a1;
    sp24 = temp_a0;
    Math_ScaledStepToS(arg0 + 0x32, Math_Vec3f_Yaw(temp_a0, temp_a1), 0x258);
    Math_ScaledStepToS(arg0 + 0xBC, 0x1194, 0x258);
    arg0->shape.rot.y += 0x15E;
    arg0->unk_2B4 = (s16) (arg0->unk_2B4 + arg0->unk_2B2);
    if (Math_Vec3f_DistXZ(temp_a0, temp_a1) < 2.0f) {
        func_80897D00(arg0);
    }
    if ((gSaveContext.isNight == 0) && (Math_Vec3f_DistXZ(sp20, sp2C + 0x24) < 1200.0f)) {
        func_80897864(arg0);
    }
    func_800B9010(arg0, 0x3155U);
}

void func_808982E0(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06000844, -4.0f);
    arg0->unk_2A8 = func_80898338;
    arg0->speedXZ = -9.0f;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
}

void func_80898338(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp34;
    Vec3f *temp_a1;

    arg0->unk_2B4 = (s16) (arg0->unk_2B4 + arg0->unk_2B2);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (Math_StepToF(arg0 + 0x70, 0.0f, 0.5f) != 0) {
        if (arg0->params != 0) {
            temp_a1 = arg0 + 0x24;
            sp34 = temp_a1;
            func_800B3030(arg1, temp_a1, &D_801D15B0, &D_801D15B0, (s16) 0x28, (s16) 7, 0);
            Audio_PlaySoundAtPosition(arg1, temp_a1, 0x1E, 0x3878U);
            Audio_PlaySoundAtPosition(arg1, temp_a1, 0x28, 0x3985U);
            Actor_MarkForDeath(arg0);
        } else {
            func_80897864(arg0);
        }
    }
    func_800B9010(arg0, 0x3155U);
}

void func_80898414(Actor *arg0) {
    func_800BE568(arg0 + 0x410);
    arg0->unk_2B2 = 0;
    arg0->unk_2A8 = func_80898454;
    arg0->speedXZ = 0.0f;
}

void func_80898454(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0_2;
    f32 *temp_a0;
    f32 temp_a1;
    s16 temp_v0;

    temp_v0 = arg0->unk_2B0;
    temp_a0 = arg0 + 0x28;
    if (temp_v0 != 0) {
        arg0->unk_2B0 = (s16) (temp_v0 - 1);
    }
    temp_a1 = arg0->floorHeight;
    arg0 = arg0;
    Math_StepToF(temp_a0, temp_a1, 8.0f);
    temp_a0_2 = arg0;
    if (arg0->unk_2B0 == 0) {
        arg0 = arg0;
        func_808971DC(temp_a0_2, arg1);
        if (arg0->colChkInfo.health == 0) {
            func_808984E0(arg0);
            return;
        }
        func_80897648(arg0);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_808984E0(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06000844, -4.0f);
    Audio_PlayActorSound2(arg0, 0x3956U);
    arg0->unk_2B2 = 0xFA0;
    arg0->unk_2B0 = 0xE;
    arg0->speedXZ = 10.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0xE);
    arg0->unk_421 = (u8) (arg0->unk_421 & 0xFFFE);
    arg0[2].focus.pos.x = 0.0f;
    if (arg0->colChkInfo.health == 0) {
        arg0->velocity.y = 6.0f;
    }
    arg0->unk_2A8 = func_80898594;
}

void func_80898594(EnPeehat *arg0, ? arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    arg0->unk_2B4 += arg0->unk_2B2;
    Math_ScaledStepToS(arg0 + 0x2B2, 0xFA0, 0xFA);
    Math_StepToF(arg0 + 0x28, arg0->actor.floorHeight + 88.5f, 3.0f);
    Math_StepToF(arg0 + 0x70, 0.0f, 0.5f);
    arg0->unk_2B0 += -1;
    if ((s32) arg0->unk_2B0 <= 0) {
        if (arg0->actor.colChkInfo.health == 0) {
            func_80898654(arg0);
            return;
        }
        func_80897EAC(arg0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80898654(EnPeehat *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060005C4);
    arg0->unk_2B0 = 5;
    arg0->actionFunc = func_808986A4;
    arg0->unk_2B8 = 0.0f;
}

void func_808986A4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    if (arg0->unk_2B0 == 5) {
        temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 9, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0x602, (s16) 0);
        if (temp_v0 != 0) {
            temp_v0->unk_1F0 = 0;
        }
    }
    arg0->unk_2B0 = (s16) (arg0->unk_2B0 - 1);
    if (arg0->unk_2B0 == 0) {
        Item_DropCollectibleRandom(arg1, arg0, arg0 + 0x24, 0xE0);
        Actor_MarkForDeath(arg0);
    }
}

void func_8089874C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;

    temp_v0 = arg0->unk_479;
    if ((temp_v0 & 0x80) != 0) {
        arg0->unk_479 = (u8) (temp_v0 & 0xFF7F);
        arg0->unk_421 = (u8) (arg0->unk_421 & 0xFFFD);
        return;
    }
    temp_v0_2 = arg0->unk_421;
    if ((temp_v0_2 & 2) != 0) {
        arg0->unk_421 = (u8) (temp_v0_2 & 0xFFFD);
        if ((arg0->unk_2AE != 0xA) || ((*arg0[3].floorPoly & 0xDB0B3) == 0)) {
            if (Actor_ApplyDamage(arg0) == 0) {
                Enemy_StartFinishingBlow(arg1, arg0);
            }
            arg0->unk_478 = (u8) (arg0->unk_478 & 0xFFFC);
            func_800BE258(arg0, (void *) &arg0[3].scale.y);
            func_808971DC(arg0, arg1);
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            if (temp_v0_3 == 5) {
                arg0->unk_2B0 = 0x28;
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                Audio_PlayActorSound2(arg0, 0x389EU);
                arg0->unk_2AE = 0x20U;
                arg0[2].focus.pos.z = 1.1f;
                arg0[2].focus.pos.y = 2.0f;
                func_80898414(arg0);
                return;
            }
            if (temp_v0_3 == 1) {
                arg0->unk_2B0 = 0x28;
                func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
                Audio_PlayActorSound2(arg0, 0x389EU);
                func_80898414(arg0);
                return;
            }
            if (temp_v0_3 == 3) {
                func_80897170(arg0);
                if (arg0->colChkInfo.health == 0) {
                    arg0->unk_2B0 = 3;
                    arg0->unk_421 = (u8) (arg0->unk_421 & 0xFFFE);
                }
                func_80898414(arg0);
                return;
            }
            if (temp_v0_3 == 2) {
                arg0[2].focus.pos.y = 4.0f;
                arg0->unk_2AE = 0U;
                arg0[2].focus.pos.z = 2.1f;
            } else if (temp_v0_3 == 4) {
                arg0[2].focus.pos.y = 4.0f;
                arg0->unk_2AE = 0x14U;
                arg0[2].focus.pos.z = 1.1f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_436, (f32) arg0->unk_438, (f32) arg0->unk_43A, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            func_800BE568(arg0, &arg0[3].focus.pos.z);
            func_808984E0(arg0);
            return;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
        return;
    }
    temp_v0_4 = arg0->unk_2AE;
    if ((temp_v0_4 == 0xA) && ((arg0->unk_3D5 & 2) != 0) && ((temp_v0_4 != 0xA) || ((*arg0->unk_400 & 0xDB0B3) == 0))) {
        func_808971DC(arg0, arg1);
        arg0->colorFilterTimer = 0;
        func_80897648(arg0);
    }
}

void EnPeehat_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? sp74;
    CollisionPoly *sp70;
    u32 sp6C;
    PosRot *sp64;
    CollisionCheckContext *sp5C;
    ColliderCylinder *sp58;
    CollisionContext *sp54;
    ColliderCylinder *temp_a1;
    ColliderSphere *temp_s0;
    ColliderTris *temp_s0_3;
    CollisionCheckContext *temp_t2;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_s0_4;
    u8 temp_s0_2;
    Vec3f *phi_s1;
    s32 phi_s0;
    EnPeehat *this = (EnPeehat *) thisx;

    if (this->actor.params == 0) {
        func_8089874C((Actor *) this, globalCtx);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 25.0f, 30.0f, 30.0f, 5U);
    this->actionFunc(this, globalCtx);
    if ((globalCtx->gameplayFrames & 0x7F) == 0) {
        this->unk_2C0 = Rand_ZeroFloat(0.25f) + 0.5f;
    }
    this->unk_2BC += this->unk_2C0;
    if (this->actor.params == 0) {
        if (func_80897910 == this->actionFunc) {
            Math_ScaledStepToS((s16 *) &this->actor.shape, 0x1770, 0x12C);
        } else {
            Math_ScaledStepToS((s16 *) &this->actor.shape, 0, 0x12C);
        }
    } else {
        Actor_SetHeight((Actor *) this, 0.0f);
    }
    temp_a1 = &this->unk_3C4;
    sp58 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->unk_3C4.dim.pos.y += (s32) (this->actor.shape.yOffset * this->actor.scale.y);
    if ((this->unk_3C4.base.ocFlags1 & 1) != 0) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp58);
    }
    temp_t2 = &globalCtx->colChkCtx;
    sp5C = temp_t2;
    temp_s0 = &this->unk_410;
    if (this->actor.params == 0) {
        CollisionCheck_SetOC(globalCtx, temp_t2, (Collider *) temp_s0);
        if ((this->unk_410.base.acFlags & 1) != 0) {
            CollisionCheck_SetAC(globalCtx, sp5C, (Collider *) temp_s0);
        }
    }
    temp_s0_2 = this->unk_468.base.atFlags;
    if ((temp_s0_2 & 2) != 0) {
        this->unk_468.base.atFlags = temp_s0_2 & 0xFFFD;
        func_808982E0((Actor *) this);
    }
    if ((this->unk_468.base.atFlags & 1) != 0) {
        temp_s0_3 = &this->unk_468;
        this->actor.flags |= 0x1000000;
        CollisionCheck_SetAT(globalCtx, sp5C, (Collider *) temp_s0_3);
        if (this->actor.params == 0) {
            sp70 = NULL;
            CollisionCheck_SetAC(globalCtx, sp5C, (Collider *) temp_s0_3);
            sp54 = &globalCtx->colCtx;
            sp64 = &this->actor.world;
            phi_s1 = &this->unk_2E0;
            phi_s0 = 0xC;
            do {
                if (func_800C55C4(sp54, (Vec3f *) sp64, phi_s1, (Vec3f *) &sp74, &sp70, 1U, 1U, 0U, 1U, &sp6C) != 0) {
                    func_800BBFB0(globalCtx, (Vec3f *) &sp74, 0.0f, 1, (s16) 0x12C, (s16) 0x96, (u8) 1);
                    func_80897258(globalCtx, this, &sp74, 0.0f, 1.5f);
                }
                temp_s0_4 = phi_s0 - 0xC;
                phi_s1 += -0xC;
                phi_s0 = temp_s0_4;
            } while (temp_s0_4 >= 0);
        }
    }
    CollisionCheck_SetAC(globalCtx, sp5C, (Collider *) sp58);
    if (func_80898454 != this->actionFunc) {
        Math_StepToF(&this->unk_2C4, 0.0f, 0.001f);
    }
    if (this->unk_2C8 > 0.0f) {
        if (this->unk_2AE != 0xA) {
            Math_StepToF(&this->unk_2C8, 0.0f, 0.05f);
            if (this->unk_2AE == 0) {
                temp_f0 = (this->unk_2C8 + 1.0f) * 1.05f;
                this->unk_2CC = temp_f0;
                if (temp_f0 > 2.1f) {
                    this->unk_2CC = 2.1f;
                    return;
                }
                this->unk_2CC = this->unk_2CC;
                return;
            }
            temp_f0_2 = (this->unk_2C8 + 1.0f) * 0.55f;
            this->unk_2CC = temp_f0_2;
            if (temp_f0_2 > 1.1f) {
                this->unk_2CC = 1.1f;
                return;
            }
            this->unk_2CC = this->unk_2CC;
            return;
        }
        if (Math_StepToF(&this->unk_2D0, 1.1f, 0.0275f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
        /* Duplicate return node #35. Try simplifying control flow for better match */
    }
}

s32 func_80898E74(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5) {
    GraphicsContext *sp24;
    GraphicsContext *temp_v0_2;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_v0;
    void *temp_s1;

    if (arg1 == 4) {
        *arg4 = (s16) -(s32) arg5->unk_2B4;
        goto block_7;
    }
    if ((arg1 == 3) || ((arg1 == 0x17) && ((temp_v0 = arg5->unk_2A8, (func_80898594 == temp_v0)) || (func_80897520 == temp_v0)))) {
        temp_v0_2 = *arg0;
        temp_s1 = temp_v0_2->polyOpa.p;
        sp24 = temp_v0_2;
        SysMatrix_StatePush();
        SysMatrix_RotateStateAroundXAxis(arg5->unk_2BC * 0.115f);
        SysMatrix_InsertYRotation_f(arg5->unk_2BC * 0.13f, 1);
        SysMatrix_InsertZRotation_f(arg5->unk_2BC * 0.1f, 1);
        temp_f0 = arg5[2].focus.pos.x;
        temp_f12 = 1.0f - temp_f0;
        Matrix_Scale(temp_f12, temp_f0 + 1.0f, temp_f12, 1);
        SysMatrix_InsertZRotation_f(-(arg5->unk_2BC * 0.1f), 1);
        SysMatrix_InsertYRotation_f(-(arg5->unk_2BC * 0.13f), 1);
        SysMatrix_RotateStateAroundXAxis(-(arg5->unk_2BC * 0.115f));
        temp_s1->words.w0 = 0xDA380003;
        temp_s1->words.w1 = Matrix_NewMtx(*arg0);
        temp_s1[1].words.w0 = 0xDE000000;
        temp_s1[1].words.w1 = *arg2;
        SysMatrix_StatePop();
        sp24->polyOpa.p = temp_s1 + 0x10;
        return 1;
    }
block_7:
    return 0;
}

void func_80899024(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *temp_s1_3;
    Vec3f *temp_s2;
    Vec3f *temp_s2_2;
    s32 temp_s0;
    s32 temp_s1_2;
    s8 *temp_s1;
    s8 temp_v0;
    void *temp_s0_2;
    Vec3f *phi_s0;
    Vec3f *phi_s2;
    s32 phi_s1;

    temp_s1 = arg1 + &D_808995A0;
    temp_v0 = *temp_s1;
    if (temp_v0 != -1) {
        temp_s0 = arg4 + (temp_v0 * 0xC);
        SysMatrix_GetStateTranslationAndScaledX(2000.0f, temp_s0 + 0x2EC);
        SysMatrix_GetStateTranslationAndScaledX(4000.0f, temp_s0 + 0x2F8);
    }
    if (temp_s1 == &D_808995A4) {
        SysMatrix_GetStateTranslationAndScaledZ(5500.0f, arg4 + 0x2D4);
        SysMatrix_GetStateTranslationAndScaledZ(-5500.0f, arg4 + 0x2E0);
        return;
    }
    if (temp_s1 == &D_808995A3) {
        phi_s0 = D_80899570;
        phi_s2 = arg4 + 0x37C;
        if (arg4->params == 0) {
            phi_s1 = 0;
            do {
                SysMatrix_MultiplyVector3fByState(phi_s0, phi_s2);
                temp_s1_2 = phi_s1 + 1;
                temp_s2 = &phi_s2[1];
                phi_s0 = &phi_s0[1];
                phi_s2 = temp_s2;
                phi_s1 = temp_s1_2;
            } while (temp_s1_2 != 4);
            temp_s2_2 = &temp_s2[1];
            SysMatrix_GetStateTranslationAndScaledX(3000.0f, temp_s2);
            SysMatrix_GetStateTranslationAndScaledX(-400.0f, temp_s2_2);
            temp_s1_3 = *arg0;
            temp_s0_2 = temp_s1_3->polyOpa.p;
            SysMatrix_InsertTranslation(-1000.0f, 0.0f, 0.0f, 1);
            Collider_UpdateSphere(0, arg4 + 0x410);
            SysMatrix_InsertTranslation(500.0f, 0.0f, 0.0f, 1);
            SysMatrix_InsertYRotation_f(3.2f, 1);
            Matrix_Scale(0.3f, 0.2f, 0.2f, 1);
            temp_s0_2->words.w0 = 0xDA380003;
            temp_s0_2->words.w1 = Matrix_NewMtx(*arg0);
            temp_s0_2[1].words.w0 = 0xDE000000;
            temp_s0_2[1].words.w1 = *arg2;
            temp_s1_3->polyOpa.p = temp_s0_2 + 0x10;
            Math_Vec3s_ToVec3f(arg4 + 0x3C, arg4 + 0x458);
        }
    }
}

void EnPeehat_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? sp58;
    ? sp4C;
    ? sp40;
    ColliderTris *sp34;
    ColliderTris *temp_a0;
    f32 temp_f18;
    f32 temp_f18_2;
    s16 *temp_v0;
    s16 *temp_v0_2;
    s32 temp_v1;
    void *temp_v0_3;
    void (*phi_v0)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *);
    f32 phi_f18;
    s16 *phi_v0_2;
    s32 phi_v1;
    f32 phi_f18_2;
    s16 *phi_v0_3;
    EnPeehat *this = (EnPeehat *) thisx;

    func_8012C28C(globalCtx->state.gfxCtx);
    if (this->actor.params == 0) {
        phi_v0 = (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80899024;
    } else {
        phi_v0 = NULL;
    }
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_80898E74, phi_v0, (Actor *) this);
    if ((this->actor.speedXZ != 0.0f) || (this->actor.velocity.y != 0.0f)) {
        SysMatrix_GetStateTranslationAndScaledZ(4500.0f, (Vec3f *) &sp40);
        SysMatrix_GetStateTranslationAndScaledZ(-4500.0f, (Vec3f *) &sp4C);
        SysMatrix_GetStateTranslationAndScaledX(4500.0f, (Vec3f *) &sp58);
        temp_a0 = &this->unk_468;
        sp34 = temp_a0;
        Collider_SetTrisVertices(temp_a0, 0, (Vec3f *) &sp40, (Vec3f *) &sp4C, (Vec3f *) &sp58);
        SysMatrix_GetStateTranslationAndScaledX(-4500.0f, (Vec3f *) &sp58);
        Collider_SetTrisVertices(temp_a0, 1, (Vec3f *) &sp40, (Vec3f *) &sp58, (Vec3f *) &sp4C);
    }
    if (this->unk_2AE == 0) {
        temp_v0 = &this->actor.home.rot.z;
        this->unk_2F0 -= 50.0f;
        this->unk_2FC -= 50.0f;
        temp_f18 = temp_v0->unk_2F0;
        phi_f18 = temp_f18;
        phi_v0_2 = temp_v0;
        phi_v1 = 6;
        phi_f18_2 = temp_f18;
        phi_v0_3 = temp_v0;
        if (6 != 0x12) {
            do {
                temp_f18_2 = phi_v0_2->unk_320;
                temp_v1 = phi_v1 + 4;
                phi_v0_2->unk_2F0 = (f32) (phi_f18 - 50.0f);
                phi_v0_2->unk_2FC = (f32) (phi_v0_2->unk_2FC - 50.0f);
                phi_v0_2->unk_308 = (f32) (phi_v0_2->unk_308 - 50.0f);
                temp_v0_2 = phi_v0_2 + 0x30;
                temp_v0_2->unk_2E4 = (f32) (phi_v0_2->unk_314 - 50.0f);
                phi_f18 = temp_f18_2;
                phi_v0_2 = temp_v0_2;
                phi_v1 = temp_v1;
                phi_f18_2 = temp_f18_2;
                phi_v0_3 = temp_v0_2;
            } while (temp_v1 != 0x12);
        }
        temp_v0_3 = phi_v0_3 + 0x30;
        temp_v0_3->unk_2C0 = (f32) (phi_f18_2 - 50.0f);
        temp_v0_3->unk_2CC = (f32) (phi_v0_3->unk_2FC - 50.0f);
        temp_v0_3->unk_2D8 = (f32) (phi_v0_3->unk_308 - 50.0f);
        temp_v0_3->unk_2E4 = (f32) (phi_v0_3->unk_314 - 50.0f);
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2EC, 0x12, this->unk_2CC, this->unk_2D0, this->unk_2C8, (u8) (s32) this->unk_2AE);
}
