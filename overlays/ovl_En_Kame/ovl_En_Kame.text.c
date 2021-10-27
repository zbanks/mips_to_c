typedef struct EnKame {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x48];                 /* maybe part of unk_188[13]? */
    /* 0x1D6 */ Vec3s unk_1D6;                      /* inferred */
    /* 0x1DC */ char pad_1DC[0x48];                 /* maybe part of unk_1D6[13]? */
    /* 0x224 */ SkelAnime unk_224;                  /* inferred */
    /* 0x268 */ Vec3s unk_268;                      /* inferred */
    /* 0x26E */ char pad_26E[0x12];                 /* maybe part of unk_268[4]? */
    /* 0x280 */ Vec3s unk_280;                      /* inferred */
    /* 0x286 */ char pad_286[0x12];                 /* maybe part of unk_280[4]? */
    /* 0x298 */ void (*actionFunc)(EnKame *, GlobalContext *);
    /* 0x29C */ u8 unk_29C;                         /* inferred */
    /* 0x29D */ u8 unk_29D;                         /* inferred */
    /* 0x29E */ s16 unk_29E;                        /* inferred */
    /* 0x2A0 */ s16 unk_2A0;                        /* inferred */
    /* 0x2A2 */ s16 unk_2A2;                        /* inferred */
    /* 0x2A4 */ s16 unk_2A4;                        /* inferred */
    /* 0x2A6 */ s16 unk_2A6;                        /* inferred */
    /* 0x2A8 */ f32 unk_2A8;                        /* inferred */
    /* 0x2AC */ f32 unk_2AC;                        /* inferred */
    /* 0x2B0 */ f32 unk_2B0;                        /* inferred */
    /* 0x2B4 */ f32 unk_2B4;                        /* inferred */
    /* 0x2B8 */ f32 unk_2B8;                        /* inferred */
    /* 0x2BC */ f32 unk_2BC;                        /* inferred */
    /* 0x2C0 */ f32 unk_2C0;                        /* inferred */
    /* 0x2C4 */ f32 unk_2C4;                        /* inferred */
    /* 0x2C8 */ Vec3f unk_2C8;                      /* inferred */
    /* 0x2D4 */ char pad_2D4[0x6C];                 /* maybe part of unk_2C8[10]? */
    /* 0x340 */ ColliderCylinder unk_340;           /* inferred */
} EnKame;                                           /* size = 0x38C */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnKame_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnKame_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnKame_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnKame_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD6F34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD6F9C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD7018 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD70A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD70EC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD71B4 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD7254 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ PosRot *sp20;                        /* inferred */
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD73A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7424 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD7568 {};              /* size 0x0 */

struct _mips2c_stack_func_80AD75A8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD76CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD7798 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD792C {};              /* size 0x0 */

struct _mips2c_stack_func_80AD7948 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD7B18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7B90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7C54 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD7D40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7DA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7E0C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SkelAnime *sp18;                     /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AD7EC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7F10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7FA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD7FF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD8060 {
    /* 0x00 */ char pad_0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD810C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD8148 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD825C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD8364 {};              /* size 0x0 */

struct _mips2c_stack_func_80AD8388 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AD84C0 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AD8A48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD8AF8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AD8CEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AD8D64 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_800F0590(GlobalContext *, PosRot *, ?, ?);   /* extern */
void func_80AD6F34(EnKame *arg0);                   /* static */
void func_80AD6F9C(Actor *arg0);                    /* static */
void func_80AD7018(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD70A0(EnKame *arg0);                   /* static */
void func_80AD71B4(EnKame *arg0, EnKame *);         /* static */
void func_80AD73A8(EnKame *arg0);                   /* static */
void func_80AD7568(Actor *arg0);                    /* static */
void func_80AD75A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD76CC(EnKame *arg0);                   /* static */
void func_80AD792C(EnKame *arg0);                   /* static */
void func_80AD7B18(EnKame *arg0);                   /* static */
void func_80AD7C54(Actor *arg0);                    /* static */
void func_80AD7DA4(EnKame *arg0, EnKame *);         /* static */
void func_80AD7EC0(EnKame *arg0, EnKame *);         /* static */
void func_80AD7FA4(Actor *arg0);                    /* static */
void func_80AD8060(Actor *arg0);                    /* static */
void func_80AD8148(EnKame *arg0, GlobalContext *arg1); /* static */
void func_80AD8364(EnKame *arg0);                   /* static */
void func_80AD84C0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AD8A48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80AD8AF8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 func_80AD8CEC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80AD8D64(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeaderCommon D_060008B4;
extern AnimationHeader D_06000AF4;
extern AnimationHeader D_06000B30;
extern FlexSkeletonHeader D_06001A50;
extern AnimationHeader D_06001C68;
extern AnimationHeader D_06002510;
extern AnimationHeader D_060027D8;
extern AnimationHeader D_06002F88;
extern AnimationHeader D_060031DC;
extern AnimationHeader D_060035EC;
extern AnimationHeader D_060039C0;
extern AnimationHeader D_06004210;
extern FlexSkeletonHeader D_06007C70;
extern AnimationHeader D_0600823C;
static ColliderCylinderInit D_80AD8DE0 = {
    {0xC, 0x10, 0xD, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CF7FFF, 0, 0}, 1, 5, 1},
    {0x23, 0x28, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_80AD8E0C = {3, 0xF, 0x1E, 0x50};
static DamageTable D_80AD8E14 = {
    {
        0x10,
        1,
        1,
        0xF1,
        1,
        1,
        0,
        0xD0,
        1,
        1,
        0xF0,
        0x22,
        0x32,
        0x42,
        1,
        0x10,
        1,
        0xE2,
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
        0xF1,
    },
};
static void *D_80AD8E34[4] = {(void *)0x60055A0, (void *)0x60057A0, (void *)0x60059A0, (void *)0x60057A0};
static InitChainEntry D_80AD8E44[3];                /* unable to generate initializer */
static s32 D_80AD8E50 = 0;
static Color_RGBA8 D_80AD8E54 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80AD8E58 = {0xB4, 0xB4, 0xB4, 0xFF};
static Vec3f D_80AD8E5C = {0.0f, 0.75f, 0.0f};
static Vec3f D_80AD8E68[5] = {
    {1500.0f, 0.0f, -2000.0f},
    {1500.0f, 0.0f, 2000.0f},
    {1500.0f, 2000.0f, 0.0f},
    {1500.0f, -2000.0f, 0.0f},
    {2500.0f, 0.0f, 0.0f},
};
static ? D_80AD8EA4;                                /* unable to generate initializer */
static ? D_80AD8EA5;                                /* unable to generate initializer */

void EnKame_Init(Actor *thisx, GlobalContext *globalCtx) {
    void **temp_s0;
    void **phi_s0;
    EnKame *this = (EnKame *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80AD8E44);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06007C70, &D_06004210, &this->unk_188, &this->unk_1D6, 0xD);
    SkelAnime_InitSV(globalCtx, &this->unk_224, &D_06001A50, &D_06000B30, &this->unk_268, &this->unk_280, 4);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 55.0f);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_340, (Actor *) this, &D_80AD8DE0);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80AD8E14, &D_80AD8E0C);
    phi_s0 = D_80AD8E34;
    if (D_80AD8E50 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk_-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != D_80AD8E44);
        D_80AD8E50 = 1;
    }
    func_80AD70A0(this);
}

void EnKame_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKame *this = (EnKame *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_340);
}

void func_80AD6F34(EnKame *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0->unk_29C;
    temp_t6 = temp_v0 + 1;
    if (temp_v0 != 0) {
        arg0->unk_29C = temp_t6;
        if ((temp_t6 & 0xFF) == 4) {
            arg0->unk_29C = 0;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    if (Rand_ZeroOne() < 0.05f) {
        arg0->unk_29C = 1;
    }
}

void func_80AD6F9C(Actor *arg0) {
    arg0->unk_29D = 0xA;
    arg0[2].world.pos.z = 0.6f;
    arg0->unk_354 = 3;
    arg0[2].home.unk_12 = 0x50;
    arg0->flags &= -0x401;
    arg0->unk_2B8 = 0.90000004f;
    arg0[2].world.pos.y = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_80AD7018(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_29D == 0xA) {
        arg0->unk_29D = 0U;
        arg0->unk_354 = 6;
        arg0[2].world.pos.y = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2C8), 0xA, 2, 0.3f, 0.2f);
        arg0->flags |= 0x400;
    }
}

void func_80AD70A0(EnKame *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06004210, -5.0f);
    arg0->actionFunc = func_80AD70EC;
    arg0->actor.speedXZ = 0.0f;
}

void func_80AD70EC(EnKame *this, GlobalContext *globalCtx) {
    Actor *sp24;
    SkelAnime *sp20;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_144;
    sp20 = temp_a0;
    sp24 = globalCtx->actorCtx.actorList[2].first;
    if (func_801378B8(temp_a0, 10.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38F3U);
        this->unk_2A0 = 0x28;
    }
    if ((Player_GetMask(globalCtx) != 0x10) && ((sp24->unk_A6C << 8) >= 0) && (this->actor.xzDistToPlayer < 240.0f)) {
        func_80AD73A8(this);
        return;
    }
    if (SkelAnime_FrameUpdateMatrix(sp20) != 0) {
        func_80AD71B4(this);
    }
}

void func_80AD71B4(EnKame *arg0) {
    s16 sp26;
    s16 temp_lo;

    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_0600823C, -5.0f);
    arg0->actor.speedXZ = 0.5f;
    sp26 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600823C);
    temp_lo = ((s32) Rand_ZeroFloat(5.0f) + 3) * sp26;
    arg0->unk_340.base.acFlags |= 5;
    arg0->unk_340.base.colType = 0xC;
    arg0->actionFunc = func_80AD7254;
    arg0->unk_2A4 = arg0->actor.shape.rot.y;
    arg0->unk_29E = temp_lo;
}

void func_80AD7254(EnKame *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    s16 sp2A;
    SkelAnime *sp24;
    PosRot *sp20;
    PosRot *temp_a1_2;
    SkelAnime *temp_a0;
    s16 temp_a1;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if ((Player_GetMask(globalCtx) != 0x10) && ((sp2C->unk_A6C << 8) >= 0) && (this->actor.xzDistToPlayer < 240.0f)) {
        func_80AD73A8(this);
        return;
    }
    temp_a0 = &this->unk_144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a1 = this->unk_2A4;
    if (this->actor.shape.rot.y != temp_a1) {
        Math_ScaledStepToS(&this->actor.shape.rot.y, temp_a1, 0x100);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    } else {
        temp_a1_2 = &this->actor.home;
        sp20 = temp_a1_2;
        if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1_2) > 40.0f) {
            sp2A = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1_2);
            this->unk_2A4 = (Rand_Next() >> 0x14) + sp2A;
        }
    }
    this->unk_29E += -1;
    if (this->unk_29E == 0) {
        func_80AD70A0(this);
        return;
    }
    if ((func_801378B8(sp24, 0.0f) != 0) || (func_801378B8(sp24, 15.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x38F5U);
    }
}

void func_80AD73A8(Actor *arg0) {
    Actor *temp_a0_2;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06001C68, -3.0f);
    arg0[2].home.rot.y = 0;
    arg0[2].world.pos.x = 1.0f;
    arg0->unk_2A8 = 1.0f;
    arg0->speedXZ = 0.0f;
    if (arg0[2].home.rot.z == 0) {
        temp_a0_2 = arg0;
        arg0 = arg0;
        Audio_PlayActorSound2(temp_a0_2, 0x38F3U);
    }
    arg0[2].home.pos.z = func_80AD7424;
}

void func_80AD7424(EnKame *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;

    temp_a0 = &this->unk_144;
    this = this;
    sp1C = globalCtx->actorCtx.actorList[2].first;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this = this;
        if ((Player_GetMask(globalCtx) != 0x10) && ((sp1C->unk_A6C << 8) >= 0) && ((this->unk_29E == 0) || (this->actor.xzDistToPlayer < 120.0f))) {
            func_80AD76CC(this);
            return;
        }
        this->unk_29E += -1;
        if (this->unk_29E == 0) {
            func_80AD7B18(this);
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    temp_f2 = this->unk_144.animCurrentFrame;
    if (temp_f2 > 2.0f) {
        temp_f0 = temp_f2 - 2.0f;
        this->unk_2AC = 1.5f - (temp_f0 * 0.23333333f);
        this->unk_2A8 = 1.5f - (temp_f0 * 0.083333336f);
        return;
    }
    temp_f0_2 = (0.25f * temp_f2) + 1.0f;
    this->unk_2AC = temp_f0_2;
    this->unk_2A8 = temp_f0_2;
}

void func_80AD7568(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = (f32) arg0->unk_2A6;
    arg0->speedXZ = temp_f0 * 0.0006620763f;
    arg0->shape.rot.z = (s16) (s32) (temp_f0 * 0.11016949f);
}

void func_80AD75A8(Actor *arg0, GlobalContext *arg1) {
    CollisionContext *temp_a0;
    u32 temp_v0;

    if (((arg0->bgCheckFlags & 1) != 0) && (arg0->speedXZ >= 3.0f)) {
        temp_a0 = arg1 + 0x830;
        if ((arg1->gameplayFrames & 1) == 0) {
            arg1 = arg1;
            temp_v0 = func_800C9BB8(temp_a0, arg0->floorPoly, (s32) arg0->floorBgId);
            if ((temp_v0 == 0) || (temp_v0 == 1)) {
                func_800B1210(arg1, arg0 + 0x24, &D_80AD8E5C, &D_801D15B0, (s16) 0x226, (s16) 0x64);
            } else if (temp_v0 == 0xE) {
                func_800B0DE0(arg1, arg0 + 0x24, &D_80AD8E5C, &D_801D15B0, &D_80AD8E54, &D_80AD8E58, (s16) 0x226, (s16) 0x64);
            }
        }
    }
    if ((s32) arg0->unk_2A6 >= 0x1201) {
        func_800B9010(arg0, 0x30F4U);
    }
}

void func_80AD76CC(Actor *arg0) {
    PosRot *sp24;
    PosRot *temp_a1;

    if (EnKame_Draw == arg0->draw) {
        arg0->draw = func_80AD8D64;
        arg0->unk_2A6 = 0x3B00;
        arg0[2].world.pos.x = 0.5f;
        func_80AD7568(arg0);
        arg0[2].home.rot.y = 0xF;
        arg0->speedXZ = 0.0f;
        Audio_PlayActorSound2(arg0, 0x392BU);
        arg0->unk_2C0 = (f32) (arg0->home.pos.y - 100.0f);
    } else {
        temp_a1 = &arg0->home;
        sp24 = temp_a1;
        arg0->world.rot.y = Actor_YawToPoint(arg0, (Vec3f *) temp_a1);
        Math_Vec3f_Copy((Vec3f *) &arg0[2].world.rot.z, (Vec3f *) temp_a1);
        arg0[2].home.rot.y = 0;
    }
    arg0->flags |= 0x10;
    arg0[2].home.pos.z = (bitwise f32) func_80AD7798;
}

void func_80AD7798(EnKame *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_29E;
    if (temp_v0 == 0xF) {
        this->unk_2AC += 0.2f;
        if (this->unk_2AC > 1.1f) {
            this->unk_29E += -1;
            this->unk_340.base.atFlags |= 1;
            this->unk_2AC = 1.0f;
        }
    } else if ((s32) temp_v0 > 0) {
        this->unk_29E = temp_v0 - 1;
    } else if (Math_ScaledStepToS(&this->unk_2A6, 0x3B00, (s16) ((s32) ((f32) this->unk_2A6 * 0.09f) + 0x2D)) != 0) {
        if (this->unk_2C0 < this->actor.home.pos.y) {
            this->actor.world.rot.y = this->actor.yawTowardsPlayer;
            this->unk_2BC = (Math_SinS(this->actor.world.rot.y) * 360.0f) + this->actor.world.pos.x;
            this->unk_2C4 = (Math_CosS(this->actor.world.rot.y) * 360.0f) + this->actor.world.pos.z;
        }
        func_80AD792C(this);
    }
    this->actor.shape.rot.y += this->unk_2A6;
    if (!(this->unk_2C0 < this->actor.home.pos.y) || (func_80AD7798 != this->actionFunc)) {
        func_80AD7568((Actor *) this);
    }
    func_80AD75A8((Actor *) this, globalCtx);
}

void func_80AD792C(EnKame *arg0) {
    arg0->unk_29E = -1;
    arg0->actionFunc = func_80AD7948;
}

void func_80AD7948(EnKame *this, GlobalContext *globalCtx) {
    f32 *sp24;
    f32 *temp_a1_2;
    s16 temp_a1;
    s16 temp_v1;
    s32 phi_v0;

    this->actor.shape.rot.y += this->unk_2A6;
    func_80AD75A8((Actor *) this);
    temp_a1 = this->unk_29E;
    if (temp_a1 == -1) {
        temp_a1_2 = &this->unk_2BC;
        sp24 = temp_a1_2;
        temp_v1 = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1_2) - this->actor.world.rot.y;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (((this->actor.bgCheckFlags & 8) != 0) || (phi_v0 >= 0x3001) || (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1_2) < 50.0f)) {
            if (this->unk_2C0 < this->actor.home.pos.y) {
                this->unk_29E = 0x300;
                return;
            }
            this->unk_29E = 0;
            return;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return;
    }
    if (Math_ScaledStepToS(&this->unk_2A6, temp_a1, (s16) ((s32) ((f32) this->unk_2A6 * 0.09f) + 0x2D)) != 0) {
        if (this->unk_29E == 0) {
            if (this->unk_2AC >= 1.0f) {
                Audio_PlayActorSound2((Actor *) this, 0x392DU);
            }
            this->unk_2AC -= 0.1f;
            this->unk_340.base.atFlags &= 0xFFFE;
            if (this->unk_2AC < 0.5f) {
                this->actor.flags &= -0x11;
                func_80AD7B18(this);
            }
        } else {
            func_80AD76CC(this);
        }
    }
    func_80AD7568((Actor *) this);
}

void func_80AD7B18(EnKame *arg0) {
    EnKame *temp_a3;

    temp_a3 = arg0;
    temp_a3->actor.draw = EnKame_Draw;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_060031DC, -3.0f);
    arg0->actor.speedXZ = 0.0f;
    arg0->actionFunc = func_80AD7B90;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    arg0->unk_2AC = 0.1f;
    arg0->unk_2A8 = 1.0f;
}

void func_80AD7B90(EnKame *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f2;

    temp_a0 = &this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        func_80AD71B4(this, this);
        return;
    }
    temp_f2 = this->unk_144.animCurrentFrame;
    if (temp_f2 > 7.0f) {
        temp_f0 = 1.5f - ((temp_f2 - 7.0f) * 0.16666667f);
        this->unk_2AC = temp_f0;
        this->unk_2A8 = temp_f0;
        return;
    }
    this->unk_2AC = (0.2f * temp_f2) + 0.1f;
    this->unk_2A8 = (0.071428575f * temp_f2) + 1.0f;
}

void func_80AD7C54(Actor *arg0) {
    u8 temp_t8;

    if (func_80AD7E0C == arg0[2].home.pos.z) {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_060035EC, -3.0f);
        arg0[2].home.rot.y = 1;
        arg0[2].shape.feetPos[0].y &= 0xFFFF7FFF;
    } else {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_060039C0, -3.0f);
        arg0[2].home.rot.y = 0;
        arg0[2].shape.feetPos[0].y |= 0x8000;
    }
    temp_t8 = arg0->unk_350 & 0xFFFE;
    arg0->unk_350 = temp_t8;
    arg0->draw = EnKame_Draw;
    arg0->unk_351 = (u8) (arg0->unk_351 & 0xFFFE);
    arg0->unk_350 = (u8) (temp_t8 & 0xFFF9);
    arg0->flags &= -0x11;
    arg0->shape.rot.z = 0;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x38F8U);
    arg0[2].home.pos.z = (bitwise f32) func_80AD7D40;
}

void func_80AD7D40(EnKame *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (this->unk_29E == 1) {
            func_80AD71B4(this, this);
            return;
        }
        this->unk_29E = 0xC8;
        func_80AD7DA4(this, this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80AD7DA4(EnKame *arg0) {
    SkelAnime *temp_a0;
    u8 temp_t8;
    u8 temp_t9;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_060027D8, -3.0f);
    temp_t8 = arg0->unk_340.base.acFlags | 1;
    temp_t9 = temp_t8 & 0xFFFB;
    arg0->unk_340.base.acFlags = temp_t8;
    arg0->unk_340.base.acFlags = temp_t9;
    arg0->unk_340.base.colType = 6;
    arg0->actionFunc = func_80AD7E0C;
    arg0->actor.speedXZ = 0.0f;
}

void func_80AD7E0C(EnKame *this, GlobalContext *globalCtx) {
    SkelAnime *sp18;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk_29E;
    temp_a0 = &this->unk_144;
    if ((s32) temp_v0 > 0) {
        this->unk_29E = temp_v0 - 1;
        this = this;
        sp18 = temp_a0;
        if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
            sp18 = temp_a0;
            this = this;
            if (Rand_ZeroOne() > 0.5f) {
                SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_060027D8);
                return;
            }
            this = this;
            SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06002F88);
            Audio_PlayActorSound2((Actor *) this, 0x38F6U);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    func_80AD7EC0(this, this);
}

void func_80AD7EC0(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06002510, -3.0f);
    Audio_PlayActorSound2(arg0, 0x38F7U);
    arg0[2].home.pos.z = (bitwise f32) func_80AD7F10;
}

void func_80AD7F10(EnKame *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->actor.shape.shadowDraw = func_800B3FC0;
        func_80AD71B4(this, this);
        return;
    }
    if (this->unk_144.animCurrentFrame >= 10.0f) {
        this->actor.shape.shadowDraw = NULL;
        this->unk_340.base.acFlags &= 0xFFFE;
        this->unk_340.info.bumper.dmgFlags &= 0xFFFF7FFF;
    }
}

void func_80AD7FA4(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    func_800BE504(arg0, arg0 + 0x340);
    arg0[2].home.pos.z = (bitwise f32) func_80AD7FF8;
}

void func_80AD7FF8(EnKame *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_2A2;
    if (temp_v0 != 0) {
        this->unk_2A2 = temp_v0 - 1;
    }
    if (this->unk_2A2 == 0) {
        func_80AD7018();
        if (this->actor.colChkInfo.health == 0) {
            func_80AD8148(this, NULL);
            return;
        }
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80AD7DA4(this);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80AD8060(Actor *arg0) {
    s16 sp36;
    f32 temp_f6;
    s16 temp_v0;

    temp_v0 = SkelAnime_GetFrameCount(&D_060008B4);
    temp_f6 = (f32) temp_v0;
    sp36 = temp_v0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_060008B4, 1.0f, 0.0f, temp_f6, (u8) 2, -3.0f);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) (s32) sp36);
    Audio_PlayActorSound2(arg0, 0x38F9U);
    arg0->unk_351 = (u8) (arg0->unk_351 & 0xFFFE);
    arg0[2].home.pos.z = (bitwise f32) func_80AD810C;
}

void func_80AD810C(EnKame *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        func_80AD7DA4(this);
    }
}

void func_80AD8148(Actor *arg0, GlobalContext *arg1) {
    u32 temp_t9;
    u8 temp_t1;

    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06000AF4);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
    temp_t1 = arg0->unk_350 & 0xFFFE;
    arg0->unk_350 = temp_t1;
    arg0->unk_351 = (u8) (arg0->unk_351 & 0xFFFE);
    arg0->unk_350 = (u8) (temp_t1 & 0xFFF9);
    arg0->velocity.y = 15.0f;
    arg0->speedXZ = 1.5f;
    if (arg1 != 0) {
        Enemy_StartFinishingBlow(arg1, arg0);
        if (func_80AD8D64 == arg0->draw) {
            arg0->draw = EnKame_Draw;
        } else {
            func_800BE504(arg0, (ColliderCylinder *) &arg0[2].colChkInfo.damage);
        }
    }
    temp_t9 = arg0->flags & ~1;
    arg0->flags = temp_t9;
    arg0->bgCheckFlags &= -2;
    arg0->flags = temp_t9 | 0x10;
    Audio_PlayActorSound2(arg0, 0x38FAU);
    arg0[2].home.rot.y = 0;
    arg0[2].home.pos.z = (bitwise f32) func_80AD825C;
}

void func_80AD825C(EnKame *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if (((this->actor.bgCheckFlags & 1) != 0) && (this->actor.velocity.y < 0.0f)) {
        Audio_PlayActorSound2((Actor *) this, 0x38DDU);
        func_80AD8364(this);
        return;
    }
    if (this->unk_29E == 1) {
        this->actor.colorFilterTimer = 0x64;
    } else if (this->actor.colorFilterTimer == 0) {
        func_800BCB70((Actor *) this, 0xC000, 0xFF, 0, (s16) 0x64);
    }
    this->actor.shape.rot.x += Rand_S16Offset(0x700, 0x1400);
    this->actor.shape.rot.y += (s32) Rand_ZeroFloat(5120.0f);
    this->actor.shape.rot.z += Rand_S16Offset(0x700, 0x1400);
}

void func_80AD8364(EnKame *arg0) {
    arg0->unk_29E = 0x14;
    arg0->actionFunc = func_80AD8388;
    arg0->actor.speedXZ = 0.0f;
}

void func_80AD8388(EnKame *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f0;
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_v0 = this->unk_29E;
    this->actor.colorFilterTimer = 0x64;
    if ((s32) temp_v0 > 0) {
        this->unk_29E = temp_v0 - 1;
        if (this->unk_29E == 0) {
            func_800F0590(globalCtx, &this->actor.world, 0x15, 0x321F);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    this->actor.scale.x -= 0.001f;
    temp_f0 = this->actor.scale.x;
    if (temp_f0 <= 0.0f) {
        Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x60);
        Actor_MarkForDeath((Actor *) this);
    } else {
        this->actor.scale.y = temp_f0;
        this->actor.scale.z = temp_f0;
    }
    sp34 = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.x;
    sp38 = this->actor.world.pos.y + 15.0f;
    sp3C = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.z;
    func_800B3030(globalCtx, (Vec3f *) &sp34, &D_801D15B0, &D_801D15B0, (s16) 0x64, (s16) 0, 2);
}

void func_80AD84C0(Actor *arg0, GlobalContext *arg1) {
    f32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk_351;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_351 = (u8) (temp_v0 & 0xFFFD);
        func_800BE258(arg0, arg0 + 0x358);
        if ((arg0->unk_29D != 0xA) || ((*arg0[2].projectedPos.z & 0xDB0B3) == 0)) {
            func_80AD7018(arg0, arg1);
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            if (temp_v0_2 != 0xD) {
                if (temp_v0_2 == 0xE) {
                    func_80AD8148((EnKame *) arg0, arg1);
                } else if (temp_v0_2 == 0xF) {
                    if ((arg0->unk_351 & 4) != 0) {
                        func_80AD7C54(arg0);
                    } else if (Actor_ApplyDamage(arg0) == 0) {
                        func_80AD8148((EnKame *) arg0, arg1);
                    } else {
                        func_80AD8060(arg0);
                    }
                } else {
                    temp_v1 = arg0[2].home.pos.z;
                    if ((func_80AD70EC == (bitwise s32) temp_v1) || (func_80AD7254 == (bitwise s32) temp_v1)) {
                        func_80AD73A8((EnKame *) arg0);
                        arg0[2].home.rot.y = 0x15;
                    } else if ((arg0->unk_351 & 4) == 0) {
                        if (temp_v0_2 == 5) {
                            arg0[2].home.unk_12 = 0x28;
                            func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                            Audio_PlayActorSound2(arg0, 0x389EU);
                            arg0->unk_29D = 0x1EU;
                            arg0[2].world.pos.z = 0.6f;
                            arg0[2].world.pos.y = 2.0f;
                            func_80AD7FA4(arg0);
                        } else if (temp_v0_2 == 1) {
                            arg0[2].home.unk_12 = 0x28;
                            func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                            Audio_PlayActorSound2(arg0, 0x389EU);
                            func_80AD7FA4(arg0);
                        } else if (temp_v0_2 == 3) {
                            func_80AD6F9C(arg0);
                            if (Actor_ApplyDamage(arg0) == 0) {
                                arg0[2].home.unk_12 = 3;
                                arg0->unk_351 = (u8) (arg0->unk_351 & 0xFFFE);
                            }
                            func_80AD7FA4(arg0);
                        } else {
                            if (temp_v0_2 == 2) {
                                arg0->unk_29D = 0U;
                                arg0[2].world.pos.z = 0.6f;
                                arg0[2].world.pos.y = 4.0f;
                            } else if (temp_v0_2 == 4) {
                                arg0->unk_29D = 0x14U;
                                arg0[2].world.pos.z = 0.6f;
                                arg0[2].world.pos.y = 4.0f;
                                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_366, (f32) arg0->unk_368, (f32) arg0->unk_36A, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                            }
                            if (Actor_ApplyDamage(arg0) == 0) {
                                func_80AD8148((EnKame *) arg0, arg1);
                            } else {
                                func_80AD8060(arg0);
                            }
                        }
                    }
                }
                goto block_31;
            }
        }
    } else {
block_31:
        if ((arg1->actorCtx.unk2 != 0) && (arg0->xyzDistToPlayerSq < 40000.0f) && ((arg0->unk_351 & 1) != 0)) {
            func_80AD7018(arg0, arg1);
            func_80AD7C54(arg0);
        }
    }
}

void EnKame_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_t5;
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    u8 temp_v0_2;
    EnKame *this = (EnKame *) thisx;

    func_80AD6F34(this);
    temp_v0 = this->unk_2A0;
    if (temp_v0 != 0) {
        this->unk_2A0 = temp_v0 - 1;
    }
    func_80AD84C0((Actor *) this, globalCtx);
    temp_v0_2 = this->unk_340.base.atFlags;
    if (((temp_v0_2 & 2) != 0) && ((temp_v0_2 & 4) != 0)) {
        this->unk_340.base.atFlags = temp_v0_2 & 0xFFF9;
        func_80AD76CC(this);
        if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) &this->unk_2BC) < 50.0f) {
            this->unk_340.base.atFlags &= 0xFFFE;
        }
        this->unk_2A6 = 0x3B00;
        func_80AD7568((Actor *) this);
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 40.0f, 60.0f, 40.0f, 0x1FU);
    if (this->actor.shape.shadowDraw != 0) {
        Actor_SetHeight((Actor *) this, 25.0f);
        Collider_UpdateCylinder((Actor *) this, &this->unk_340);
    }
    temp_t5 = &this->unk_340;
    sp28 = temp_t5;
    if ((this->unk_340.base.atFlags & 1) != 0) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_t5);
    }
    temp_a1 = &globalCtx->colChkCtx;
    if ((this->unk_340.base.acFlags & 1) != 0) {
        sp2C = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) sp28);
    }
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
    if (this->unk_2B0 > 0.0f) {
        if (this->unk_29D != 0xA) {
            Math_StepToF(&this->unk_2B0, 0.0f, 0.05f);
            temp_f0 = (this->unk_2B0 + 1.0f) * 0.3f;
            this->unk_2B4 = temp_f0;
            if (temp_f0 > 0.6f) {
                this->unk_2B4 = 0.6f;
                return;
            }
            this->unk_2B4 = this->unk_2B4;
            return;
        }
        if (Math_StepToF(&this->unk_2B8, 0.6f, 0.015000001f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

s32 func_80AD8A48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_v0;

    temp_v0 = arg5->unk_298;
    if ((func_80AD7424 == temp_v0) || (func_80AD7B90 == temp_v0)) {
        if (arg1 == 2) {
            temp_f12 = arg5->unk_2A8;
            Matrix_Scale(temp_f12, arg5->unk_2AC, temp_f12, 1);
        } else if ((arg1 == 0xB) || (arg1 == 9) || (arg1 == 7) || (arg1 == 5)) {
            temp_f14 = arg5->unk_2AC;
            Matrix_Scale(arg5->unk_2A8, temp_f14, temp_f14, 1);
        }
    }
    return 0;
}

void func_80AD8AF8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s32 temp_s2;
    s8 *temp_s0;
    s8 temp_v0;
    Vec3f *phi_s0;
    Vec3f *phi_s1;
    s32 phi_s2;

    temp_s0 = arg1 + &D_80AD8EA4;
    temp_v0 = *temp_s0;
    if (temp_v0 != -1) {
        SysMatrix_GetStateTranslation(arg4 + (temp_v0 * 0xC) + 0x2C8);
    }
    if (temp_s0 == &D_80AD8EA5) {
        if (arg4->shape.shadowDraw == 0) {
            SysMatrix_GetStateTranslation(arg4 + 0x24);
        }
        phi_s0 = D_80AD8E68;
        phi_s1 = arg4 + 0x304;
        phi_s2 = 0;
        do {
            SysMatrix_MultiplyVector3fByState(phi_s0, phi_s1);
            temp_s2 = phi_s2 + 1;
            phi_s0 = &phi_s0[1];
            phi_s1 = &phi_s1[1];
            phi_s2 = temp_s2;
        } while (temp_s2 != 5);
    }
}

void EnKame_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? sp40;
    GraphicsContext *sp3C;
    PosRot *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    EnKame *this = (EnKame *) thisx;

    if (this->actor.shape.shadowDraw == 0) {
        Math_Vec3f_Copy((Vec3f *) &sp40, (Vec3f *) &this->actor.world);
    }
    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDB060020;
    temp_v1->words.w1 = (u32) D_80AD8E34[this->unk_29C];
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80AD8A48, func_80AD8AF8, (Actor *) this);
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2C8, 0xA, this->unk_2B4, this->unk_2B8, this->unk_2B0, (u8) (s32) this->unk_29D);
    if (this->actor.shape.shadowDraw == 0) {
        sp30 = &this->actor.world;
        func_800B3FC0((Actor *) this, NULL, globalCtx);
        Actor_SetHeight((Actor *) this, 25.0f);
        Collider_UpdateCylinder((Actor *) this, &this->unk_340);
        Math_Vec3f_Copy((Vec3f *) sp30, (Vec3f *) &sp40);
    }
}

s32 func_80AD8CEC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 temp_f14;

    if (arg1 == 1) {
        arg3->y -= 700.0f;
    }
    temp_f14 = arg5->unk_2AC;
    if ((temp_f14 != 1.0f) && (arg1 == 3)) {
        Matrix_Scale(1.0f, temp_f14, temp_f14, 1);
    }
    return 0;
}

void func_80AD8D64(Actor *arg0, GlobalContext *arg1) {
    func_8012C28C(arg1->state.gfxCtx);
    SkelAnime_DrawSV(arg1, arg0[1].shape.feetPos[1].y, arg0[1].uncullZoneScale, (s32) arg0->unk_226, func_80AD8CEC, NULL, arg0);
}
