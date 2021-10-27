typedef struct EnPoh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnPoh *, GlobalContext *);
    /* 0x18C */ u8 unk_18C;                         /* inferred */
    /* 0x18D */ u8 unk_18D;                         /* inferred */
    /* 0x18E */ s16 unk_18E;                        /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ s16 unk_192;                        /* inferred */
    /* 0x194 */ u8 unk_194;                         /* inferred */
    /* 0x195 */ u8 unk_195;                         /* inferred */
    /* 0x196 */ u8 unk_196;                         /* inferred */
    /* 0x197 */ u8 unk_197;                         /* inferred */
    /* 0x198 */ u8 unk_198;                         /* inferred */
    /* 0x199 */ u8 unk_199;                         /* inferred */
    /* 0x19A */ u8 unk_19A;                         /* inferred */
    /* 0x19B */ char pad_19B[0x1];
    /* 0x19C */ Vec3s unk_19C;                      /* inferred */
    /* 0x1A2 */ char pad_1A2[0x78];                 /* maybe part of unk_19C[21]? */
    /* 0x21A */ Vec3s unk_21A;                      /* inferred */
    /* 0x220 */ char pad_220[0x78];                 /* maybe part of unk_21A[21]? */
    /* 0x298 */ f32 unk_298;                        /* inferred */
    /* 0x29C */ f32 unk_29C;                        /* inferred */
    /* 0x2A0 */ Vec3f unk_2A0;                      /* inferred */
    /* 0x2AC */ char pad_2AC[0x6C];                 /* maybe part of unk_2A0[10]? */
    /* 0x318 */ LightNode *unk_318;                 /* inferred */
    /* 0x31C */ LightInfo unk_31C;                  /* inferred */
    /* 0x32A */ char pad_32A[0x2];
    /* 0x32C */ ColliderCylinder unk_32C;           /* inferred */
    /* 0x378 */ ColliderJntSph unk_378;             /* inferred */
    /* 0x398 */ ColliderJntSphElement unk_398;      /* inferred */
    /* 0x3D8 */ MtxF unk_3D8;                       /* inferred */
} EnPoh;                                            /* size = 0x418 */

struct _mips2c_stack_EnPoh_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPoh_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x30];                   /* maybe part of sp30[13]? */
    /* 0x64 */ GraphicsContext *sp64;               /* inferred */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad_6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnPoh_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ LightInfo *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnPoh_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ ColliderJntSph *sp24;                /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B2C910 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B2C9B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2CA4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2CAA4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2CB60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2CBBC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2CD14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2CD64 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2CEC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2CF28 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2CFF8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2D07C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2D0E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2D140 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B2D2C0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B2D300 {
    /* 0x00 */ char pad_0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];                    /* maybe part of sp3A[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B2D5DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2D628 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B2D694 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2D6EC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B2D76C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2D7D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B2D924 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2D980 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B2DAD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2DB44 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B2DC50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2DD2C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B2DDF8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B2E0B0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B2E180 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2E1D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2E230 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B2E3B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2E3F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2E438 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B2E55C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2E6C0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B2E8E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2ED14 {};              /* size 0x0 */

struct _mips2c_stack_func_80B2EDD0 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ void *sp40;                          /* inferred */
    /* 0x44 */ char pad_44[0x1C];                   /* maybe part of sp40[8]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B2F328 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2F37C {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ char pad_60[0x18];                   /* maybe part of sp5C[7]? */
    /* 0x78 */ Gfx *sp78;                           /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x8];
};                                                  /* size = 0x90 */

? func_801A7328(s32, ?);                            /* extern */
void func_80B2C910(Vec3f *arg0, GraphicsContext **arg1, GraphicsContext *); /* static */
void func_80B2C9B8(EnPoh *arg0, GlobalContext *arg1); /* static */
void func_80B2CA4C(EnPoh *arg0);                    /* static */
void func_80B2CB60(EnPoh *arg0);                    /* static */
void func_80B2CD14(EnPoh *arg0);                    /* static */
void func_80B2CEC8(EnPoh *arg0);                    /* static */
void func_80B2CFF8(Actor *arg0);                    /* static */
void func_80B2D0E8(EnPoh *arg0);                    /* static */
void func_80B2D2C0(EnPoh *arg0);                    /* static */
void func_80B2D5DC(EnPoh *arg0);                    /* static */
void func_80B2D694(EnPoh *arg0);                    /* static */
void func_80B2D76C(Actor *arg0);                    /* static */
void func_80B2D924(Actor *arg0);                    /* static */
void func_80B2DAD0(EnPoh *arg0);                    /* static */
void func_80B2DC50(EnPoh *arg0, GlobalContext *arg1); /* static */
void func_80B2DDF8(void *arg0, s32 arg1);           /* static */
void func_80B2E0B0(EnPoh *arg0);                    /* static */
void func_80B2E1D8(EnPoh *arg0);                    /* static */
void func_80B2E3B0(EnPoh *arg0, GlobalContext *, s32); /* static */
void func_80B2E438(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B2E55C(EnPoh *arg0);                    /* static */
void func_80B2E6C0(EnPoh *arg0);                    /* static */
void func_80B2E8E0(EnPoh *arg0);                    /* static */
s32 func_80B2ED14(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, void **arg6); /* static */
void func_80B2EDD0(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5); /* static */
void func_80B2F328(EnPoh *arg0);                    /* static */
void func_80B2F37C(void *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeader D_060001A8;
extern AnimationHeader D_060004EC;
extern AnimationHeader D_060006E0;
extern AnimationHeader D_06000A60;
extern AnimationHeader D_060011C4;
extern AnimationHeader D_060015B0;
extern ? D_06002608;
extern Gfx D_06002D28;
extern ? D_06003850;
extern SkeletonHeader D_060050D0;
static ColliderCylinderInit D_80B2F680 = {
    {3, 0, 8, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CBFFFE, 0, 0}, 0, 5, 1},
    {0x14, 0x28, 0x14, {0, 0, 0}},
};
static ColliderJntSphElementInit D_80B2F6AC = {
    {0, {0xF7CFFFFF, 0, 8}, {0, 0, 0}, 1, 0, 1},
    {0x12, {{0, 0x578, 0}, 0xA}, 0x64},
};
static ColliderJntSphInit D_80B2F6D0 = {{3, 0x11, 9, 0x39, 0x10, 0}, 1, &D_80B2F6AC};
static DamageTable D_80B2F6E0 = {
    {
        0xF0,
        1,
        0,
        1,
        1,
        1,
        0,
        0xE0,
        1,
        1,
        0,
        1,
        1,
        0x42,
        1,
        1,
        1,
        2,
        0x10,
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
        1,
    },
};
static CollisionCheckInfoInit D_80B2F700 = {3, 0x19, 0x32, 0x32};
static InitChainEntry D_80B2F708[2];                /* unable to generate initializer */
static Vec3f D_80B2F710 = {0.0f, 3.0f, 0.0f};
static ? D_80B2F71C;                                /* unable to generate initializer */
static Vec3f D_80B2F734[3] = {
    {-600.0f, 500.0f, 1700.0f},
    {-600.0f, 500.0f, -1700.0f},
    {1000.0f, 1700.0f, 0.0f},
};

void EnPoh_Init(Actor *thisx, GlobalContext *globalCtx) {
    LightInfo *sp34;
    LightInfo *temp_a2;
    EnPoh *this = (EnPoh *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B2F708);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_378, (Actor *) this, &D_80B2F6D0, &this->unk_398);
    this->unk_378.elements->dim.worldSphere.radius = 0;
    this->unk_378.elements->dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
    this->unk_378.elements->dim.worldSphere.center.y = (s16) (s32) this->actor.world.pos.y;
    this->unk_378.elements->dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_32C, (Actor *) this, &D_80B2F680);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80B2F6E0, &D_80B2F700);
    this->unk_18D = 0x20;
    this->unk_190 = Rand_S16Offset(0x2BC, 0x12C);
    temp_a2 = &this->unk_31C;
    sp34 = temp_a2;
    this->unk_318 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, temp_a2);
    Lights_PointGlowSetInfo(sp34, (s16) (s32) this->actor.home.pos.x, (s16) (s32) this->actor.home.pos.y, (s16) (s32) this->actor.home.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_060050D0, &D_06000A60, &this->unk_19C, &this->unk_21A, 0x15);
    this->actor.bgCheckFlags |= 0x400;
    func_80B2D0E8(this);
}

void EnPoh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    LightContext *temp_a1;
    EnPoh *this = (EnPoh *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->lightCtx;
    globalCtx = globalCtx;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk_318);
    Collider_DestroyJntSph(globalCtx, &this->unk_378);
    Collider_DestroyCylinder(globalCtx, &this->unk_32C);
}

void func_80B2C910(Vec3f *arg0, GraphicsContext **arg1) {
    ? sp20;
    f32 temp_f0;
    s32 temp_v0;
    f32 phi_f2;

    temp_v0 = (arg1 + (arg1->unk_810 * 4))->unk_800;
    if (temp_v0 != 0) {
        Math_Vec3f_Diff(temp_v0 + 0x5C, temp_v0 + 0x50, (Vec3f *) &sp20);
        temp_f0 = Math3D_Vec3fMagnitude((Vec3f *) &sp20);
        if (temp_f0 > 1.0f) {
            phi_f2 = 11.0f / temp_f0;
        } else {
            phi_f2 = 11.0f;
        }
        Math_Vec3f_ScaleAndStore((Vec3f *) &sp20, phi_f2, arg0);
        return;
    }
    Math_Vec3f_Copy(arg0, &D_801D15B0);
}

void func_80B2C9B8(EnPoh *arg0, GlobalContext *arg1) {
    f32 *temp_a0;
    u8 temp_t7;
    u8 temp_v0;
    u8 phi_v0;

    temp_a0 = arg0 + 0x28;
    arg0 = arg0;
    Math_StepToF(temp_a0, arg1->actorCtx.actorList[2].first->unk_28, 1.0f);
    temp_v0 = arg0->unk_18D;
    temp_t7 = temp_v0 - 1;
    arg0->actor.world.pos.y += 2.5f * Math_SinS((s16) (arg0->unk_18D << 0xB));
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        arg0->unk_18D = temp_t7;
        phi_v0 = temp_t7 & 0xFF;
    }
    if (phi_v0 == 0) {
        arg0->unk_18D = 0x20;
    }
}

void func_80B2CA4C(EnPoh *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060015B0);
    arg0->unk_18E = Rand_S16Offset(2, 3);
    arg0->actionFunc = func_80B2CAA4;
    arg0->actor.speedXZ = 0.0f;
}

void func_80B2CAA4(EnPoh *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_18E;
        if (temp_v0 != 0) {
            this->unk_18E = temp_v0 - 1;
        }
    }
    func_80B2C9B8(this, globalCtx);
    if (this->actor.xzDistToPlayer < 200.0f) {
        func_80B2CD14(this);
    } else if (this->unk_18E == 0) {
        func_80B2CB60(this);
    }
    if (this->unk_197 == 0xFF) {
        func_800B9010((Actor *) this, 0x3071U);
    }
}

void func_80B2CB60(EnPoh *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06000A60);
    arg0->unk_18E = Rand_S16Offset(0xF, 3);
    arg0->actionFunc = func_80B2CBBC;
    arg0->unk_32C.base.acFlags |= 1;
}

void func_80B2CBBC(EnPoh *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_StepToF(&this->actor.speedXZ, 1.0f, 0.2f);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_18E;
        if (temp_v0 != 0) {
            this->unk_18E = temp_v0 - 1;
        }
    }
    temp_a1 = &this->actor.home;
    sp24 = (SkelAnime *) temp_a1;
    if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1) > 400.0f) {
        this->unk_192 = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1);
    }
    Math_ScaledStepToS(&this->actor.world.rot.y, this->unk_192, 0x71C);
    func_80B2C9B8(this, globalCtx);
    if ((this->actor.xzDistToPlayer < 200.0f) && ((s32) this->unk_18E < 0x13)) {
        func_80B2CD14(this);
    } else if (this->unk_18E == 0) {
        if (Rand_ZeroOne() < 0.1f) {
            func_80B2D694(this);
        } else {
            func_80B2CA4C(this);
        }
    }
    if (this->unk_197 == 0xFF) {
        func_800B9010((Actor *) this, 0x3071U);
    }
}

void func_80B2CD14(EnPoh *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06000A60);
    arg0->actionFunc = func_80B2CD64;
    arg0->unk_18E = 0;
    arg0->actor.speedXZ = 2.0f;
}

void func_80B2CD64(EnPoh *this, GlobalContext *globalCtx) {
    Actor *sp24;
    f32 temp_f0;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_v1 = this->unk_18E;
    if (temp_v1 != 0) {
        this->unk_18E = temp_v1 - 1;
    }
    temp_a3 = this->actor.yawTowardsPlayer;
    temp_v0 = temp_a3 - sp24->shape.rot.y;
    if ((s32) temp_v0 >= 0x3001) {
        Math_ScaledStepToS(&this->actor.world.rot.y, (s16) (temp_a3 + 0x3000), 0x71C);
    } else if ((s32) temp_v0 < -0x3000) {
        Math_ScaledStepToS(&this->actor.world.rot.y, (s16) (temp_a3 - 0x3000), 0x71C);
    } else {
        Math_ScaledStepToS(&this->actor.world.rot.y, temp_a3, 0x71C);
    }
    func_80B2C9B8(this, globalCtx);
    temp_f0 = this->actor.xzDistToPlayer;
    if (temp_f0 > 280.0f) {
        func_80B2CB60(this);
    } else if ((this->unk_18E == 0) && (temp_f0 < 140.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x2AAA, globalCtx) == 0)) {
        func_80B2CEC8(this);
    }
    if (this->unk_197 == 0xFF) {
        func_800B9010((Actor *) this, 0x3071U);
    }
}

void func_80B2CEC8(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060001A8, -6.0f);
    arg0[1].focus.rot.y = 0xC;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x38ECU);
    arg0[1].focus.pos.z = (bitwise f32) func_80B2CF28;
}

void func_80B2CF28(EnPoh *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a0 = &this->unk_144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3870U);
        temp_v0 = this->unk_18E;
        if (temp_v0 != 0) {
            this->unk_18E = temp_v0 - 1;
        }
    }
    func_80B2C9B8(this, globalCtx);
    temp_v0_2 = this->unk_18E;
    if ((s32) temp_v0_2 >= 0xA) {
        Math_ScaledStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xAAA);
        return;
    }
    if (temp_v0_2 == 9) {
        this->actor.speedXZ = 5.0f;
        this->unk_144.animPlaybackSpeed = 2.0f;
        return;
    }
    if (temp_v0_2 == 0) {
        func_80B2CB60(this);
        this->unk_18E = 0x17;
    }
}

void func_80B2CFF8(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_060004EC, -6.0f);
    func_800BE504(arg0, arg0 + 0x32C);
    arg0->unk_33D = (u8) (arg0->unk_33D & 0xFFFE);
    arg0->speedXZ = 5.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x10);
    arg0[1].focus.pos.z = (bitwise f32) func_80B2D07C;
}

void func_80B2D07C(EnPoh *this, GlobalContext *globalCtx) {
    f32 *temp_a0;

    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_StepToF(temp_a0, 0.0f, 0.5f);
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        if (this->actor.colChkInfo.health != 0) {
            func_80B2DAD0(this);
            return;
        }
        func_80B2D2C0(this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80B2D0E8(EnPoh *arg0) {
    EnPoh *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_197 = 0;
    temp_a3->actor.flags &= -2;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimPlaybackStop(temp_a3 + 0x144, &D_060011C4, 0.0f);
    arg0->actionFunc = func_80B2D140;
}

void func_80B2D140(EnPoh *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        this->unk_197 = 0xFF;
        this->unk_190 = Rand_S16Offset(0x2BC, 0x12C);
        this->actor.flags |= 1;
        func_80B2CB60(this);
    } else {
        temp_f0 = this->unk_144.animCurrentFrame;
        if (temp_f0 > 10.0f) {
            this->unk_197 = (u8) (u32) ((temp_f0 - 10.0f) * 0.05f * 255.0f);
        }
    }
    if ((this->unk_144.animPlaybackSpeed < 0.5f) && (this->actor.xzDistToPlayer < 280.0f)) {
        Audio_PlayActorSound2((Actor *) this, 0x3873U);
        this->unk_144.animPlaybackSpeed = 1.0f;
    }
}

void func_80B2D2C0(EnPoh *arg0) {
    arg0->unk_18E = 0;
    arg0->actor.hintId = 0xFF;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_80B2D300;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80B2D300(EnPoh *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3A;
    s16 sp38;
    s16 sp36;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 phi_v1;

    this->unk_18E += 1;
    temp_v1 = this->unk_18E;
    if ((s32) temp_v1 < 8) {
        sp38 = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x4800;
        temp_v1_2 = this->unk_18E;
        if ((s32) temp_v1_2 < 5) {
            temp_a0 = (temp_v1_2 << 0xC) - 0x4000;
            sp3A = temp_a0;
            sp48 = (Math_SinS(temp_a0) * 23.0f) + (this->actor.world.pos.y + 40.0f);
            sp40 = Math_CosS(temp_a0) * 23.0f;
            sp44 = (Math_SinS(sp38) * sp40) + this->actor.world.pos.x;
            sp4C = (Math_CosS(sp38) * sp40) + this->actor.world.pos.z;
        } else {
            sp48 = this->actor.world.pos.y + 40.0f + (15.0f * (f32) (temp_v1_2 - 5));
            sp44 = (Math_SinS(sp38) * 23.0f) + this->actor.world.pos.x;
            sp4C = (Math_CosS(sp38) * 23.0f) + this->actor.world.pos.z;
        }
        temp_v0 = (this->unk_18E * 0xA) + 0x50;
        sp36 = temp_v0;
        func_800B3030(globalCtx, (Vec3f *) &sp44, &D_80B2F710, &D_801D15B0, (s16) (s32) temp_v0, (s16) 0, 2);
        sp44 = (2.0f * this->actor.world.pos.x) - sp44;
        sp4C = (2.0f * this->actor.world.pos.z) - sp4C;
        func_800B3030(globalCtx, (Vec3f *) &sp44, &D_80B2F710, &D_801D15B0, (s16) (s32) sp36, (s16) 0, 2);
        sp44 = this->actor.world.pos.x;
        sp4C = this->actor.world.pos.z;
        func_800B3030(globalCtx, (Vec3f *) &sp44, &D_80B2F710, &D_801D15B0, (s16) (s32) sp36, (s16) 0, 2);
    } else if (temp_v1 == 0x1C) {
        func_80B2DC50(this);
    } else if ((s32) temp_v1 >= 0x13) {
        temp_f0 = (f32) (0x1C - temp_v1) * 0.001f;
        this->actor.world.pos.y += 5.0f;
        this->actor.scale.x = temp_f0;
        this->actor.scale.y = temp_f0;
        this->actor.scale.z = temp_f0;
    }
    phi_v1 = (s32) this->unk_18E;
    if ((s32) this->unk_18E < 0x12) {
        func_800B9010((Actor *) this, 0x321FU);
        phi_v1 = (s32) this->unk_18E;
    }
    if (phi_v1 == 0x12) {
        Audio_PlayActorSound2((Actor *) this, 0x3877U);
    }
}

void func_80B2D5DC(EnPoh *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000A60);
    arg0->actionFunc = func_80B2D628;
    arg0->actor.speedXZ = -5.0f;
}

void func_80B2D628(EnPoh *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80B2CB60(this);
        this->unk_18E = 0x17;
        return;
    }
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    this->actor.shape.rot.y += 0x1000;
}

void func_80B2D694(EnPoh *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060015B0);
    arg0->unk_192 = arg0->actor.world.rot.y + 0x8000;
    arg0->actionFunc = func_80B2D6EC;
    arg0->actor.speedXZ = 0.0f;
}

void func_80B2D6EC(EnPoh *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if (Math_ScaledStepToS(&this->actor.world.rot.y, this->unk_192, 0x71C) != 0) {
        func_80B2CB60(this);
    }
    if (this->actor.xzDistToPlayer < 200.0f) {
        func_80B2CD14(this);
    }
    func_80B2C9B8(this, globalCtx);
}

void func_80B2D76C(Actor *arg0) {
    arg0->unk_18C = 0x20;
    arg0[1].focus.unk_12 = 0x2000;
    arg0->speedXZ = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    Audio_PlayActorSound2(arg0, 0x3874U);
    Audio_PlayActorSound2(arg0, 0x38ECU);
    arg0[1].focus.pos.z = (bitwise f32) func_80B2D7D4;
    arg0->unk_33D = (u8) (arg0->unk_33D & 0xFFFE);
}

void func_80B2D7D4(EnPoh *this, GlobalContext *globalCtx) {
    f32 temp_f6;
    u8 temp_t6;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v1;
    f32 phi_f6;

    temp_v0 = this->unk_18C;
    phi_v1 = (s32) temp_v0;
    if (temp_v0 != 0) {
        temp_t6 = temp_v0 - 1;
        this->unk_18C = temp_t6;
        phi_v1 = temp_t6 & 0xFF;
    }
    this->actor.world.rot.y += this->unk_192;
    if (phi_v1 < 0x10) {
        Math_ScaledStepToS(&this->unk_192, 0, 0x200);
    }
    func_80B2C9B8(this, globalCtx);
    temp_v0_2 = this->unk_18C;
    temp_f6 = (f32) temp_v0_2;
    phi_f6 = temp_f6;
    if ((s32) temp_v0_2 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    this->unk_197 = (u8) (u32) (phi_f6 * 7.96875f);
    if (temp_v0_2 == 0) {
        this->unk_190 = Rand_S16Offset(0x64, 0x32);
        this->unk_32C.info.bumper.dmgFlags = 0x40001;
        func_80B2CB60(this);
    }
}

void func_80B2D924(Actor *arg0) {
    arg0->unk_18C = 0;
    arg0[1].focus.unk_12 = 0x2000;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x3873U);
    Audio_PlayActorSound2(arg0, 0x38ECU);
    arg0[1].focus.pos.z = (bitwise f32) func_80B2D980;
    arg0->unk_33D = (u8) (arg0->unk_33D & 0xFFFE);
}

void func_80B2D980(EnPoh *this, GlobalContext *globalCtx) {
    f32 temp_f6;
    s32 temp_at;
    u8 temp_t7;
    u8 temp_v0;
    f32 phi_f6;

    temp_t7 = this->unk_18C + 1;
    temp_at = (temp_t7 & 0xFF) < 0x10;
    this->unk_18C = temp_t7;
    this->actor.world.rot.y -= this->unk_192;
    if (temp_at == 0) {
        Math_ScaledStepToS(&this->unk_192, 0, 0x200);
    }
    func_80B2C9B8(this, globalCtx);
    temp_v0 = this->unk_18C;
    temp_f6 = (f32) temp_v0;
    phi_f6 = temp_f6;
    if ((s32) temp_v0 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    this->unk_197 = (u8) (u32) (phi_f6 * 7.96875f);
    if (temp_v0 == 0x20) {
        this->unk_190 = Rand_S16Offset(0x2BC, 0x12C);
        this->unk_18C = 0;
        this->unk_32C.info.bumper.dmgFlags = 0xF7CBFFFE;
        func_80B2CB60(this);
    }
}

void func_80B2DAD0(EnPoh *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060006E0, -5.0f);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y + 0x8000;
    arg0->unk_32C.base.acFlags |= 1;
    arg0->unk_18E = 0xC8;
    arg0->actionFunc = func_80B2DB44;
    arg0->actor.speedXZ = 5.0f;
}

void func_80B2DB44(EnPoh *this, GlobalContext *globalCtx) {
    f32 sp24;
    f32 temp_f6;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_f6 = Math_SinS((s16) (this->unk_18D << 0xB)) * 3.0f;
    sp24 = temp_f6;
    this->actor.world.pos.x -= sp24 * Math_CosS(this->actor.shape.rot.y);
    this->actor.world.pos.z += temp_f6 * Math_SinS(this->actor.shape.rot.y);
    Math_ScaledStepToS(&this->actor.world.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0x71C);
    func_80B2C9B8(this, globalCtx);
    this->unk_18E += -1;
    if ((this->unk_18E == 0) || (this->actor.xzDistToPlayer > 250.0f)) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80B2CB60(this);
    }
    func_800B9010((Actor *) this, 0x3072U);
}

void func_80B2DC50(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a2->update = func_80B2F328;
    temp_a2->draw = func_80B2F37C;
    temp_a2->shape.shadowDraw = NULL;
    temp_a2->world.pos.x = temp_a2[3].focus.pos.x;
    temp_a2->world.pos.y = temp_a2[3].focus.pos.y;
    temp_a2->world.pos.z = temp_a2[3].focus.pos.z;
    arg0 = temp_a2;
    Actor_SetScale(temp_a2, 0.01f);
    arg0->flags |= 0x10;
    arg0->gravity = -1.0f;
    arg0->shape.rot.x = -0x8000;
    arg0->shape.yOffset = 1500.0f;
    arg0->world.pos.y -= 15.0f;
    func_800BC154(arg1, arg1 + 0x1CA0, arg0, 8U);
    arg0[1].focus.pos.z = (bitwise f32) func_80B2DD2C;
    arg0->flags &= -6;
}

void func_80B2DD2C(EnPoh *this, GlobalContext *globalCtx) {
    if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.floorHeight <= -32000.0f)) {
        EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &this->actor.world, 6.0f, 0, (s16) 1, (s16) 1, (s16) 0xF, (s16) 0x1C3, (s16) 0xA, &D_06002D28);
        func_80B2E0B0(this);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 10.0f, 4U);
}

void func_80B2DDF8(void *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    s32 temp_v0;
    u8 temp_t7;
    u8 temp_t8;
    u8 phi_v1;
    f32 phi_f12;
    f32 phi_f12_2;
    f32 phi_f2;
    f32 phi_f12_3;

    temp_v0 = arg0->unk_197 + arg1;
    if (temp_v0 < 0) {
        arg0->unk_197 = 0U;
    } else {
        phi_v1 = (u8) temp_v0;
        if (temp_v0 >= 0x100) {
            phi_v1 = 0xFFU;
        }
        arg0->unk_197 = phi_v1;
    }
    if (arg1 < 0) {
        temp_t7 = arg0->unk_197;
        temp_f12 = (f32) temp_t7;
        phi_f12 = temp_f12;
        if ((s32) temp_t7 < 0) {
            phi_f12 = temp_f12 + 4294967296.0f;
        }
        temp_f2 = phi_f12 * 0.003921569f;
        temp_f0 = (0.0056000003f * temp_f2) + 0.0014000001f;
        arg0->unk_60 = temp_f0;
        arg0->unk_58 = temp_f0;
        arg0->unk_5C = (f32) ((0.007f - (0.007f * temp_f2)) + 0.007f);
        phi_f2 = temp_f2;
        phi_f12_3 = phi_f12;
    } else {
        temp_t8 = arg0->unk_197;
        temp_f12_2 = (f32) temp_t8;
        phi_f12_2 = temp_f12_2;
        phi_f2 = 1.0f;
        if ((s32) temp_t8 < 0) {
            phi_f12_2 = temp_f12_2 + 4294967296.0f;
        }
        temp_f0_2 = phi_f12_2 * 0.000027450982f;
        arg0->unk_60 = temp_f0_2;
        arg0->unk_5C = temp_f0_2;
        arg0->unk_58 = temp_f0_2;
        arg0->unk_28 = (f32) (arg0->unk_C + (0.05882353f * phi_f12_2));
        phi_f12_3 = phi_f12_2;
    }
    arg0->unk_194 = (s8) (u32) (100.0f * phi_f2);
    arg0->unk_195 = 0;
    arg0->unk_196 = (s8) (u32) (150.0f * phi_f2);
    Lights_PointNoGlowSetInfo(arg0 + 0x31C, (s16) (s32) arg0->unk_24, (s16) (s32) arg0->unk_28, (s16) (s32) arg0->unk_2C, (u8) 0x64, (u8) 0, (u8) 0x96, (s16) (s32) (phi_f12_3 * 0.78431374f));
}

void func_80B2E0B0(Actor *arg0) {
    Lights_PointNoGlowSetInfo(arg0 + 0x31C, (s16) (s32) arg0->world.pos.x, (s16) (s32) arg0->world.pos.y, (s16) (s32) arg0->world.pos.z, (u8) 0, (u8) 0, (u8) 0, (s16) 0);
    arg0[1].focus.rot.z = 0;
    arg0->shape.rot.y = 0;
    arg0->unk_194 = 0;
    arg0[1].unk_53 = 0;
    arg0->unk_195 = 0;
    arg0[1].unk_52 = 0xC8;
    arg0->shape.rot.x = 0;
    arg0->shape.yOffset = 0.0f;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->home.pos.y = arg0->world.pos.y;
    arg0->scale.x = 0.0f;
    arg0->scale.y = 0.0f;
    Audio_PlayActorSound2(arg0, 0x28E0U);
    arg0[1].focus.pos.z = (bitwise f32) func_80B2E180;
}

void func_80B2E180(EnPoh *this, GlobalContext *globalCtx) {
    this->actor.home.pos.y += 2.0f;
    func_80B2DDF8((void *)0x14);
    if (this->unk_197 == 0xFF) {
        func_80B2E1D8(this);
    }
}

void func_80B2E1D8(Actor *arg0) {
    arg0->home.pos.y = arg0->world.pos.y;
    Actor_SetHeight(arg0, -10.0f);
    arg0[1].focus.rot.y = 0xC8;
    arg0->unk_18D = 0x20;
    arg0->flags |= 1;
    arg0[1].focus.pos.z = (bitwise f32) func_80B2E230;
}

void func_80B2E230(EnPoh *this, GlobalContext *globalCtx) {
    u8 temp_t9;
    u8 temp_v0;
    u8 phi_v0;

    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_18E += -1;
    if (this->unk_18E == 0) {
        func_80B2E3B0(this, globalCtx, 0xBA);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0xBA, 35.0f, 60.0f);
    temp_v0 = this->unk_18D;
    temp_t9 = temp_v0 - 1;
    this->actor.world.pos.y = (Math_SinS((s16) (this->unk_18D << 0xB)) * 5.0f) + this->actor.home.pos.y;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        this->unk_18D = temp_t9;
        phi_v0 = temp_t9 & 0xFF;
    }
    if (phi_v0 == 0) {
        this->unk_18D = 0x20;
    }
    Actor_SetHeight((Actor *) this, -10.0f);
    Lights_PointNoGlowSetInfo(&this->unk_31C, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0x64, (u8) 0, (u8) 0x96, (s16) (s32) ((f32) this->unk_197 * 0.78431374f));
}

void func_80B2E3B0(Actor *arg0) {
    func_801A7328(arg0 + 0xEC, 0x31E8);
    Audio_PlayActorSound2(arg0, 0x38ECU);
    arg0[1].focus.pos.z = (bitwise f32) func_80B2E3F8;
}

void func_80B2E3F8(EnPoh *this, GlobalContext *globalCtx) {
    func_80B2DDF8((void *)-0xD);
    if (this->unk_197 == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80B2E438(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk_33D;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_33D = (u8) (temp_v0 & 0xFFFD);
        if (Actor_ApplyDamage(arg0) == 0) {
            Enemy_StartFinishingBlow(arg1, arg0);
            Audio_PlayActorSound2(arg0, 0x3876U);
        } else if (arg0->colChkInfo.damage != 0) {
            Audio_PlayActorSound2(arg0, 0x3875U);
        }
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 != 0xE) {
            if (temp_v0_2 == 0xF) {
                func_80B2D924(arg0);
                return;
            }
            if (temp_v0_2 == 4) {
                arg0[2].home.pos.z = 4.0f;
                arg0->unk_29C = 0.45f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_352, (f32) arg0->unk_354, (f32) arg0->unk_356, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            func_80B2CFF8(arg0);
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_80B2E55C(EnPoh *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    u8 temp_t2;
    u8 temp_v0_3;

    temp_v0 = arg0->actionFunc;
    if ((func_80B2D980 != temp_v0) && (func_80B2D7D4 != temp_v0) && (func_80B2D140 != temp_v0)) {
        temp_v0_2 = arg0->unk_190;
        if (temp_v0_2 != 0) {
            arg0->unk_190 = temp_v0_2 - 1;
        }
        temp_v0_3 = arg0->unk_197;
        if (temp_v0_3 == 0xFF) {
            if (arg0->actor.isTargeted != 0) {
                temp_t2 = arg0->unk_18C + 1;
                temp_v0_4 = temp_t2 & 0xFF;
                arg0->unk_18C = temp_t2;
                if (temp_v0_4 >= 0x15) {
                    arg0->unk_18C = 0x14;
                } else {
                    arg0->unk_18C = (u8) temp_v0_4;
                }
            } else {
                arg0->unk_18C = 0;
            }
            if (((arg0->unk_18C == 0x14) || (arg0->unk_190 == 0)) && ((temp_v0_5 = arg0->actionFunc, (func_80B2CAA4 == temp_v0_5)) || (func_80B2CBBC == temp_v0_5) || (func_80B2CD64 == temp_v0_5) || (func_80B2DB44 == temp_v0_5) || (func_80B2D6EC == temp_v0_5))) {
                func_80B2D76C();
                return;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        if ((temp_v0_3 == 0) && (arg0->unk_190 == 0) && ((temp_v0_6 = arg0->actionFunc, (func_80B2CAA4 == temp_v0_6)) || (func_80B2CBBC == temp_v0_6) || (func_80B2CD64 == temp_v0_6) || (func_80B2D6EC == temp_v0_6))) {
            func_80B2D924();
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_80B2E6C0(EnPoh *arg0) {
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s32 temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->actionFunc;
    if (func_80B2CF28 == temp_v0) {
        temp_v0_2 = arg0->unk_194 + 5;
        if ((s32) temp_v0_2 >= 0x100) {
            arg0->unk_194 = 0xFF;
        } else {
            arg0->unk_194 = (u8) temp_v0_2;
        }
        temp_v0_3 = arg0->unk_195 - 5;
        if ((s32) temp_v0_3 < 0x32) {
            arg0->unk_195 = 0x32;
        } else {
            arg0->unk_195 = (u8) temp_v0_3;
        }
        temp_v0_4 = arg0->unk_196 - 5;
        if ((s32) temp_v0_4 < 0) {
            arg0->unk_196 = 0;
            return;
        }
        arg0->unk_196 = (u8) temp_v0_4;
        return;
    }
    if (func_80B2DB44 == temp_v0) {
        temp_v0_5 = arg0->unk_194 + 5;
        if ((s32) temp_v0_5 >= 0x51) {
            arg0->unk_194 = 0x50;
        } else {
            arg0->unk_194 = (u8) temp_v0_5;
        }
        temp_v0_6 = arg0->unk_195 + 5;
        if ((s32) temp_v0_6 >= 0x100) {
            arg0->unk_195 = 0xFF;
        } else {
            arg0->unk_195 = (u8) temp_v0_6;
        }
        temp_v0_7 = arg0->unk_196 + 5;
        if ((s32) temp_v0_7 >= 0xE2) {
            arg0->unk_196 = 0xE1;
            return;
        }
        arg0->unk_196 = (u8) temp_v0_7;
        return;
    }
    if (func_80B2D07C == temp_v0) {
        if ((arg0->actor.colorFilterTimer & 2) != 0) {
            arg0->unk_194 = 0;
            arg0->unk_195 = 0;
            arg0->unk_196 = 0;
            return;
        }
        arg0->unk_194 = 0x50;
        arg0->unk_195 = 0xFF;
        arg0->unk_196 = 0xE1;
        return;
    }
    temp_v0_8 = arg0->unk_194 + 5;
    if ((s32) temp_v0_8 >= 0x100) {
        arg0->unk_194 = 0xFF;
    } else {
        arg0->unk_194 = (u8) temp_v0_8;
    }
    temp_v0_9 = arg0->unk_195 + 5;
    if ((s32) temp_v0_9 >= 0x100) {
        arg0->unk_195 = 0xFF;
    } else {
        arg0->unk_195 = (u8) temp_v0_9;
    }
    temp_v1 = arg0->unk_196;
    temp_v0_10 = temp_v1 + 5;
    if ((s32) temp_v1 >= 0xD3) {
        temp_v0_11 = temp_v1 - 5;
        if ((s32) temp_v0_11 < 0xD2) {
            arg0->unk_196 = 0xD2;
            return;
        }
        arg0->unk_196 = (u8) temp_v0_11;
        return;
    }
    if ((s32) temp_v0_10 >= 0xD3) {
        arg0->unk_196 = 0xD2;
        return;
    }
    arg0->unk_196 = (u8) temp_v0_10;
}

void func_80B2E8E0(EnPoh *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f6;
    u32 temp_v0;

    if ((func_80B2D140 == arg0->actionFunc) && (temp_f0 = arg0->unk_144.animCurrentFrame, (temp_f0 < 12.0f))) {
        temp_v0 = (u32) ((temp_f0 * 16.66f) + 55.0f);
        arg0->unk_19A = (u8) temp_v0;
        arg0->unk_199 = (u8) temp_v0;
        arg0->unk_198 = (u8) temp_v0;
        arg0->unk_19B = (s8) (u32) (temp_f0 * 16.666666f);
        return;
    }
    temp_f0_2 = Rand_ZeroOne();
    temp_f16 = temp_f0_2 * 30.0f;
    temp_f6 = temp_f0_2 * 100.0f;
    arg0->unk_19B = 0xC8;
    arg0->unk_198 = (s32) temp_f16 + 0xE1;
    arg0->unk_199 = (s32) temp_f6 + 0x9B;
    arg0->unk_19A = (s32) (temp_f0_2 * 160.0f) + 0x5F;
}

void EnPoh_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp28;
    ColliderJntSph *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    u8 temp_v0;
    u8 temp_v0_3;
    void (*temp_v0_2)(EnPoh *, GlobalContext *);
    f32 phi_f0;
    EnPoh *this = (EnPoh *) thisx;

    temp_v0 = this->unk_378.base.atFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk_378.base.atFlags = temp_v0 & 0xFFFD;
        func_80B2D5DC(this);
    }
    func_80B2E438((Actor *) this, globalCtx);
    func_80B2E55C(this);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if ((func_80B2CF28 == this->actionFunc) && ((s32) this->unk_18E < 0xA)) {
        this->actor.flags |= 0x1000000;
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_378);
    }
    temp_a1 = &this->unk_32C;
    sp24 = &this->unk_378;
    sp20 = temp_a1;
    sp28 = &globalCtx->colChkCtx;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    if ((this->unk_32C.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, sp28, (Collider *) sp20);
    }
    CollisionCheck_SetOC(globalCtx, sp28, (Collider *) sp20);
    CollisionCheck_SetOC(globalCtx, sp28, (Collider *) sp24);
    Actor_SetHeight((Actor *) this, 42.0f);
    temp_v0_2 = this->actionFunc;
    if ((func_80B2D07C != temp_v0_2) && (func_80B2D628 != temp_v0_2)) {
        if (func_80B2DB44 == temp_v0_2) {
            this->actor.shape.rot.y = this->actor.world.rot.y + 0x8000;
        } else {
            this->actor.shape.rot.y = this->actor.world.rot.y;
        }
    }
    func_80B2E8E0(this);
    this->actor.shape.shadowAlpha = this->unk_197;
    if (this->unk_298 > 0.0f) {
        Math_StepToF(&this->unk_298, 0.0f, 0.05f);
        temp_v0_3 = this->unk_197;
        if (temp_v0_3 != 0xFF) {
            temp_f0 = (f32) temp_v0_3;
            phi_f0 = temp_f0;
            if ((s32) temp_v0_3 < 0) {
                phi_f0 = temp_f0 + 4294967296.0f;
            }
            temp_f2 = phi_f0 * 0.003921569f;
            if (temp_f2 < phi_f0) {
                this->unk_298 = temp_f2;
            }
        }
        temp_f0_2 = (this->unk_298 + 1.0f) * 0.225f;
        this->unk_29C = temp_f0_2;
        if (temp_f0_2 > 0.45f) {
            this->unk_29C = 0.45f;
            return;
        }
        this->unk_29C = this->unk_29C;
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

s32 func_80B2ED14(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, void **arg6) {
    void *temp_a1;
    void *temp_a1_2;

    if ((arg5->unk_197 == 0) || (arg1 == 0x12) || ((func_80B2D300 == arg5->unk_188) && ((s32) arg5[66].y >= 2))) {
        *arg2 = NULL;
    }
    if (arg1 == 0x13) {
        temp_a1 = *arg6;
        *arg6 = temp_a1 + 8;
        temp_a1->unk_4 = 0;
        temp_a1->unk_0 = 0xE7000000;
        temp_a1_2 = *arg6;
        *arg6 = temp_a1_2 + 8;
        temp_a1_2->unk_0 = 0xFB000000;
        temp_a1_2->unk_4 = (s32) ((arg5->unk_194 << 0x18) | (arg5->unk_195 << 0x10) | (arg5->unk_196 << 8) | arg5->unk_197);
    }
    return 0;
}

void func_80B2EDD0(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5) {
    f32 sp60;
    void *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    f32 temp_f0;
    f32 temp_f12;
    s32 temp_s0;
    s32 temp_s0_2;
    s8 temp_s3;
    void *temp_v0_3;
    void *temp_v0_4;
    Vec3f *phi_s2;
    Vec3f *phi_s1;
    s32 phi_s0;

    Collider_UpdateSpheres(arg1, arg4 + 0x378);
    if ((func_80B2D300 == arg4[1].focus.pos.z) && ((s32) arg4[1].focus.rot.y >= 2) && (arg1 == 5)) {
        temp_v0 = *arg5;
        *arg5 = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = *arg5;
        *arg5 = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = &D_06002608;
    }
    if (arg1 == 0x12) {
        if ((func_80B2D300 == arg4[1].focus.pos.z) && ((s32) arg4[1].focus.rot.y >= 0x13)) {
            temp_f0 = arg4->scale.x;
            if (temp_f0 != 0.0f) {
                temp_f12 = 0.01f / temp_f0;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            }
        }
        SysMatrix_CopyCurrentState(arg4 + 0x3D8);
        func_80B2C910((Vec3f *) &sp60, arg0);
        temp_v0_3 = arg4[2].prevPos.y;
        Lights_PointGlowSetInfo(arg4 + 0x31C, (s16) (temp_v0_3->unk_30 + (s32) sp60), (s16) (temp_v0_3->unk_32 + (s32) sp64), (s16) (temp_v0_3->unk_34 + (s32) sp68), (u8) (s32) arg4->unk_198, (u8) (s32) arg4->unk_199, (u8) (s32) arg4->unk_19A, (s16) (s32) ((f32) arg4->unk_19B * 0.78431374f));
    }
    temp_s3 = *(&D_80B2F71C + arg1);
    if (temp_s3 != -1) {
        if ((s32) temp_s3 < 4) {
            SysMatrix_GetStateTranslation(arg4 + (temp_s3 * 0xC) + 0x2A0);
            return;
        }
        if (temp_s3 == 4) {
            SysMatrix_GetStateTranslationAndScaledX(2000.0f, arg4 + (temp_s3 * 0xC) + 0x2A0);
            return;
        }
        temp_v0_4 = arg4 + (temp_s3 * 0xC);
        sp40 = temp_v0_4;
        SysMatrix_GetStateTranslationAndScaledX(-2000.0f, temp_v0_4 + 0x2A0);
        SysMatrix_GetStateTranslationAndScaledY(-2000.0f, temp_v0_4 + 0x2AC);
        temp_s0 = temp_s3 + 2;
        phi_s2 = D_80B2F734;
        phi_s1 = temp_v0_4 + 0x2B8;
        phi_s0 = temp_s0;
        if (temp_s0 < 0xA) {
            do {
                SysMatrix_MultiplyVector3fByState(phi_s2, phi_s1);
                temp_s0_2 = phi_s0 + 1;
                phi_s2 = &phi_s2[1];
                phi_s1 = &phi_s1[1];
                phi_s0 = temp_s0_2;
            } while (temp_s0_2 != 0xA);
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
    }
}

void EnPoh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp68;
    GraphicsContext *sp64;
    Gfx *sp30;
    Gfx *temp_t0;
    Gfx *temp_v0_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_t1;
    u8 temp_v0;
    Gfx *phi_v1;
    EnPoh *this = (EnPoh *) thisx;

    temp_t1 = globalCtx->state.gfxCtx;
    sp64 = temp_t1;
    func_80B2E6C0(this);
    temp_v0 = this->unk_197;
    if ((temp_v0 == 0xFF) || (temp_v0 == 0)) {
        temp_v1_3 = temp_t1->polyOpa.p;
        temp_v1_3->words.w0 = 0xDE000000;
        temp_v1_3->words.w1 = (u32) &sSetupDL[150];
        temp_v1_3[1].words.w0 = 0xFB000000;
        temp_v1_3[1].words.w1 = (this->unk_194 << 0x18) | (this->unk_195 << 0x10) | (this->unk_196 << 8) | this->unk_197;
        temp_v1_3[2].words.w0 = 0xDB060020;
        temp_v1_3[2].words.w1 = (u32) D_801AEFA0;
        sp64 = temp_t1;
        temp_v0_2 = SkelAnime_Draw2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_80B2ED14, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80B2EDD0, (Actor *) this, &temp_v1_3[3]);
        temp_v1_4 = temp_v0_2;
        temp_t1->polyOpa.p = temp_v0_2;
        phi_v1 = temp_v1_4;
    } else {
        temp_v1 = temp_t1->polyXlu.p;
        temp_t0 = &sSetupDL[150];
        temp_v1->words.w1 = (u32) temp_t0;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1[1].words.w0 = 0xFB000000;
        temp_v1[1].words.w1 = this->unk_197 | ~0xFF;
        temp_v1[2].words.w0 = 0xDB060020;
        temp_v1[2].words.w1 = (u32) D_801AEF88;
        sp64 = temp_t1;
        sp30 = temp_t0;
        temp_t1->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_80B2ED14, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80B2EDD0, (Actor *) this, &temp_v1[3]);
        temp_v1_2 = temp_t1->polyOpa.p;
        temp_v1_2->words.w0 = 0xDE000000;
        temp_v1_2->words.w1 = (u32) temp_t0;
        phi_v1 = &temp_v1_2[1];
    }
    phi_v1->words.w0 = 0xE7000000;
    phi_v1->words.w1 = 0;
    phi_v1[1].words.w0 = 0xFB000000;
    phi_v1[1].words.w1 = (this->unk_198 << 0x18) | (this->unk_199 << 0x10) | (this->unk_19A << 8) | 0xFF;
    sp68 = phi_v1;
    sp64 = globalCtx->state.gfxCtx;
    SysMatrix_SetCurrentState(&this->unk_3D8);
    phi_v1[2].words.w0 = 0xDA380003;
    sp64 = globalCtx->state.gfxCtx;
    sp68 = phi_v1;
    phi_v1[2].words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    phi_v1[3].words.w1 = &D_06002D28;
    phi_v1[3].words.w0 = 0xDE000000;
    globalCtx->state.gfxCtx->polyOpa.p = phi_v1 + 0x20;
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2A0, 0xA, this->actor.scale.x * 100.0f * this->unk_29C, 0.0f, this->unk_298, (u8) 0x14);
}

void func_80B2F328(EnPoh *arg0) {
    arg0->actionFunc();
    if (func_80B2DD2C != arg0->actionFunc) {
        arg0->unk_190 += 1;
    }
    func_80B2E8E0(arg0);
}

void func_80B2F37C(Actor *arg0, GraphicsContext **arg1) {
    f32 sp7C;
    Gfx *sp78;
    Gfx *sp5C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    GraphicsContext *temp_a2;

    temp_a2 = arg1->unk_0;
    if (func_80B2DD2C == arg0[1].focus.pos.z) {
        temp_v1 = temp_a2->polyOpa.p;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = &sSetupDL[150];
        temp_v1[1].words.w0 = 0xFB000000;
        temp_v1[1].words.w1 = (arg0->unk_198 << 0x18) | (arg0->unk_199 << 0x10) | (arg0->unk_19A << 8) | 0xFF;
        sp78 = temp_v1;
        func_80B2C910((Vec3f *) &sp7C, arg1, temp_a2);
        Lights_PointGlowSetInfo(arg0 + 0x31C, (s16) (s32) (arg0->world.pos.x + sp7C), (s16) (s32) (arg0->world.pos.y + sp80), (s16) (s32) (arg0->world.pos.z + sp84), (u8) (s32) arg0->unk_198, (u8) (s32) arg0->unk_199, (u8) (s32) arg0->unk_19A, (s16) 0xC8);
        temp_v1[2].words.w0 = 0xDA380003;
        sp78 = temp_v1;
        temp_v1[2].words.w1 = Matrix_NewMtx(arg1->unk_0);
        temp_v1[3].words.w1 = &D_06002D28;
        temp_v1[3].words.w0 = 0xDE000000;
        temp_a2->polyOpa.p = temp_v1 + 0x20;
        return;
    }
    func_8012C2DC(temp_a2);
    temp_v0 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp5C = temp_v0;
    sp5C->words.w1 = Gfx_TwoTexScroll(arg1->unk_0, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) arg0[1].focus.rot.z * -8) & 0x1FF, 0x20, 0x80);
    temp_v0_2 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_2->words.w1 = arg0[1].unk_53 | 0xFFAAFF00;
    temp_v0_3 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (arg0->unk_194 << 0x18) | (arg0->unk_195 << 0x10) | (arg0[1].unk_52 << 8) | 0xFF;
    SysMatrix_InsertYRotation_f((f32) (func_800DFCDC((Camera *) (&arg1[arg1->unk_810])[512]) + 0x8000) * 0.0000958738f, 1);
    temp_v0_4 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDA380003;
    temp_v0_4->words.w1 = Matrix_NewMtx(arg1->unk_0);
    temp_v0_5 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_06003850;
}
