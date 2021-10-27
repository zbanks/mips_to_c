typedef struct EnBb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x5A];                 /* maybe part of unk_188[16]? */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0x5A];                 /* maybe part of unk_1E8[16]? */
    /* 0x248 */ void (*actionFunc)(EnBb *, GlobalContext *);
    /* 0x24C */ char pad_24C[0x1];
    /* 0x24D */ u8 unk_24D;                         /* inferred */
    /* 0x24E */ char pad_24E[0x2];                  /* maybe part of unk_24D[3]? */
    /* 0x250 */ s16 unk_250;                        /* inferred */
    /* 0x252 */ char pad_252[0x2];
    /* 0x254 */ s16 unk_254;                        /* inferred */
    /* 0x256 */ char pad_256[0xA];                  /* maybe part of unk_254[6]? */
    /* 0x260 */ f32 unk_260;                        /* inferred */
    /* 0x264 */ f32 unk_264;                        /* inferred */
    /* 0x268 */ f32 unk_268;                        /* inferred */
    /* 0x26C */ f32 unk_26C;                        /* inferred */
    /* 0x270 */ f32 unk_270;                        /* inferred */
    /* 0x274 */ f32 unk_274;                        /* inferred */
    /* 0x278 */ Vec3f unk_278;                      /* inferred */
    /* 0x284 */ char pad_284[0x30];                 /* maybe part of unk_278[5]? */
    /* 0x2B4 */ Vec3f unk_2B4;                      /* inferred */
    /* 0x2C0 */ char pad_2C0[0x34];                 /* maybe part of unk_2B4[5]? */
    /* 0x2F4 */ ColliderSphere unk_2F4;             /* inferred */
} EnBb;                                             /* size = 0x34C */

struct _mips2c_stack_EnBb_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBb_Draw {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad_54[0x18];                   /* maybe part of sp50[7]? */
    /* 0x6C */ MtxF *sp6C;                          /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_EnBb_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBb_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808C1E94 {};              /* size 0x0 */

struct _mips2c_stack_func_808C1F00 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808C1F74 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808C1FF4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808C20D4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ void (*sp28)(Actor *, GlobalContext *); /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808C2238 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808C2344 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808C23EC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808C254C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808C25E0 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808C272C {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_808C28CC {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808C2A00 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808C2B1C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808C2B94 {};              /* size 0x0 */

struct _mips2c_stack_func_808C2BD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808C2C38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808C2CB4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808C2CF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808C2D78 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808C2E34 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808C32EC {};              /* size 0x0 */

struct _mips2c_stack_func_808C3324 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s8 *sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

? func_800BE568(Actor *, f32 *);                    /* extern */
void func_808C1E94(Actor *arg0);                    /* static */
void func_808C1F00(Actor *arg0);                    /* static */
void func_808C1F74(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C1FF4(Actor *arg0);                    /* static */
void func_808C20D4(EnBb *arg0);                     /* static */
void func_808C2238(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C2344(Actor *arg0);                    /* static */
void func_808C254C(Actor *arg0);                    /* static */
void func_808C272C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C2A00(Actor *arg0);                    /* static */
void func_808C2B94(Actor *arg0);                    /* static */
void func_808C2C38(EnBb *arg0);                     /* static */
void func_808C2CF0(void *arg0);                     /* static */
void func_808C2E34(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808C32EC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_808C3324(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000184;
extern AnimationHeader D_06000444;
extern SkeletonHeader D_06001A30;
static ColliderSphereInit D_808C37A0 = {
    {3, 0x10, 9, 0x39, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 5, 1},
    {0, {{0, 0, 0}, 0x14}, 0x64},
};
static DamageTable D_808C37CC = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        0xE0,
        1,
        1,
        1,
        1,
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
static CollisionCheckInfoInit D_808C37EC = {2, 0x14, 0x28, 0x32};
static InitChainEntry D_808C37F4[2];                /* unable to generate initializer */
static ? D_808C37FC;                                /* unable to generate initializer */
static ? D_808C380B;                                /* unable to generate initializer */
static Vec3f D_808C380C = {1000.0f, -700.0f, 0.0f};
static Actor *D_808C3840 = (Actor *)0x3ECCCCCD;     /* const */
static Actor *D_808C3854 = (Actor *)0x3ECCCCCD;     /* const */

void EnBb_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    EnBb *this = (EnBb *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808C37F4);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06001A30, &D_06000444, &this->unk_188, &this->unk_1E8, 0x10);
    Collider_InitAndSetSphere(globalCtx, &this->unk_2F4, (Actor *) this, &D_808C37A0);
    ActorShape_Init(&this->actor.shape, 1500.0f, func_800B3FC0, 35.0f);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808C37CC, &D_808C37EC);
    temp_v0 = ((s32) this->actor.params >> 8) & 0xFF;
    this->unk_268 = 0.8f;
    this->actor.world.pos.y += 50.0f;
    this->unk_264 = 1.0f;
    if (temp_v0 == 0xFF) {
        this->unk_260 = 200.0f;
    } else {
        this->unk_260 = (f32) temp_v0 * 4.0f;
    }
    func_808C20D4(this);
}

void EnBb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBb *this = (EnBb *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk_2F4);
}

void func_808C1E94(Actor *arg0) {
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v1;
    s32 phi_a3;

    if ((arg0->bgCheckFlags & 8) != 0) {
        temp_a1 = arg0->shape.rot.y;
        temp_a2 = arg0->wallYaw;
        temp_v1 = temp_a1 - temp_a2;
        phi_a3 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_a3 = -(s32) temp_v1;
        }
        if (phi_a3 >= 0x4001) {
            arg0->shape.rot.y = ((temp_a2 * 2) - temp_a1) - 0x8000;
        }
        arg0->unk_254 = arg0->shape.rot.y;
        arg0->bgCheckFlags &= 0xFFF7;
    }
}

void func_808C1F00(Actor *arg0) {
    arg0->unk_24D = 0xA;
    arg0[1].next = (Actor *)0x3ECCCCCD;
    arg0->unk_250 = 0x50;
    arg0->flags &= -0x201;
    arg0[1].init = (void (*)(Actor *, GlobalContext *))0x3F19999A;
    arg0[1].prev = (Actor *)0x3F800000;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_808C1F74(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_24D == 0xA) {
        arg0->unk_24D = 0U;
        arg0[1].prev = NULL;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x278), 5, 2, 0.2f, 0.15f);
        arg0->flags |= 0x200;
    }
}

void func_808C1FF4(Actor *arg0) {
    f32 temp_f0;
    f32 temp_f16;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_f0 = arg0->floorHeight;
    if (temp_f0 > -32000.0f) {
        Math_StepToF(arg0 + 0x28, temp_f0 + arg0->unk_25C, 0.5f);
    }
    temp_f16 = arg0->world.pos.y + Math_CosS(arg0->unk_256);
    arg0->unk_256 = (s16) (arg0->unk_256 + 0x826);
    arg0->world.pos.y = temp_f16;
    Math_StepToF(arg0 + 0x268, 0.8f, 0.1f);
    Math_StepToF(arg0 + 0x264, 1.0f, 0.1f);
    func_808C1E94(arg0);
    Math_StepToF(arg0 + 0x70, arg0->unk_258, 0.5f);
    Math_ApproachS(arg0 + 0xBE, arg0->unk_254, 5, 0x3E8);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_808C20D4(Actor *arg0) {
    void (*sp28)(Actor *, GlobalContext *);
    Vec3f *sp24;
    Vec3f *temp_a1;
    s32 temp_t0;

    sp28 = func_808C2238;
    if (func_808C2238 != arg0[1].uncullZoneDownward) {
        SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06000444);
    }
    if (func_808C23EC == arg0[1].uncullZoneDownward) {
        arg0->unk_252 = 0x28;
    } else {
        arg0->unk_252 = 0;
    }
    temp_t0 = (s32) Rand_ZeroFloat(20.0f);
    arg0->gravity = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->unk_250 = (s16) (temp_t0 + 0x28);
    temp_a1 = arg0 + 8;
    arg0->unk_25C = (f32) ((Math_CosS(arg0->unk_256) * 10.0f) + 30.0f);
    sp24 = temp_a1;
    arg0->unk_254 = Actor_YawToPoint(arg0, temp_a1);
    if ((arg0->xzDistToPlayer < (arg0->unk_260 + 120.0f)) || (Actor_XZDistanceToPoint(arg0, temp_a1) < 300.0f)) {
        arg0->unk_254 = (s16) (arg0->unk_254 + (Rand_Next() >> 0x11));
    }
    arg0->unk_304 = (u8) (arg0->unk_304 | 1);
    arg0->unk_258 = (f32) (Rand_ZeroFloat(1.5f) + 1.0f);
    arg0[1].uncullZoneDownward = (bitwise f32) sp28;
}

void func_808C2238(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;

    func_808C1FF4(arg0);
    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    if (func_801378B8(temp_a0, 5.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x38C8U);
    } else if ((func_801378B8(temp_a0, 0.0f) != 0) && (Rand_ZeroOne() < 0.1f)) {
        Audio_PlayActorSound2(arg0, 0x38CAU);
    }
    temp_v0 = arg0->unk_252;
    if (temp_v0 != 0) {
        arg0->unk_252 = (s16) (temp_v0 - 1);
    }
    arg0->unk_250 = (s16) (arg0->unk_250 - 1);
    if ((arg0->unk_252 == 0) && (arg0->xzDistToPlayer < arg0->unk_260) && (Player_GetMask(arg1) != 0x10)) {
        func_808C2344(arg0);
        return;
    }
    if (arg0->unk_250 == 0) {
        func_808C20D4((EnBb *) arg0);
    }
}

void func_808C2344(Actor *arg0) {
    f32 temp_f4;
    f32 temp_f8;

    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06000184);
    arg0->unk_250 = (s16) ((s32) Rand_ZeroFloat(20.0f) + 0x3C);
    temp_f8 = Math_CosS(arg0->unk_256) * 10.0f;
    arg0->unk_254 = (s16) arg0->yawTowardsPlayer;
    arg0->unk_25C = (f32) (temp_f8 + 30.0f);
    temp_f4 = Rand_ZeroFloat(1.5f) + 4.0f;
    arg0[1].uncullZoneDownward = func_808C23EC;
    arg0->unk_258 = temp_f4;
}

void func_808C23EC(EnBb *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    this->unk_254 = this->actor.yawTowardsPlayer;
    func_808C1FF4((Actor *) this);
    temp_a0 = &this->unk_144;
    sp24 = temp_a0;
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 5.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x38C9U);
    } else if ((func_801378B8(sp24, 2.0f) != 0) || (func_801378B8(sp24, 7.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x38C8U);
    } else if ((func_801378B8(sp24, 0.0f) != 0) && (Rand_ZeroOne() < 0.1f)) {
        Audio_PlayActorSound2((Actor *) this, 0x38CAU);
    }
    this->unk_250 += -1;
    if (((this->unk_260 + 120.0f) < this->actor.xzDistToPlayer) || (this->unk_250 == 0) || (Player_GetMask(globalCtx) == 0x10) || (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) &this->actor.home) > 400.0f)) {
        func_808C20D4(this);
    }
}

void func_808C254C(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06000444);
    arg0->unk_304 = (u8) (arg0->unk_304 | 1);
    arg0->unk_250 = 0x8C;
    arg0->unk_305 = (u8) (arg0->unk_305 | 1);
    arg0->speedXZ = 2.0f;
    arg0[1].child = NULL;
    arg0[1].parent = NULL;
    arg0->gravity = -2.0f;
    Audio_PlayActorSound2(arg0, 0x38CDU);
    arg0[1].uncullZoneDownward = (bitwise f32) func_808C25E0;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_808C25E0(EnBb *this, GlobalContext *globalCtx) {
    SkelAnime *sp3C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    sp3C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_808C1E94((Actor *) this);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x387BU);
        if (this->unk_250 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x38CCU);
            func_808C20D4(this);
            return;
        }
        temp_f0 = this->actor.velocity.y;
        if (temp_f0 < -14.0f) {
            this->actor.velocity.y = temp_f0 * -0.7f;
        } else {
            this->actor.velocity.y = 10.0f;
        }
        this->actor.bgCheckFlags &= 0xFFFE;
        func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 7.0f, 2, 2.0f, (s16) 0, (s16) 0, (u8) 0);
        Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0xBB8);
        goto block_7;
    }
block_7:
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (func_801378B8(sp3C, 5.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38C8U);
    }
    temp_v0 = this->unk_250;
    if ((s32) temp_v0 > 0) {
        this->unk_250 = temp_v0 - 1;
    }
}

void func_808C272C(Actor *arg0, GlobalContext *arg1) {
    f32 sp70;
    Vec3f *temp_s5;
    f32 *temp_s0;
    f32 temp_f0;
    s32 temp_s1;
    u32 temp_t1;
    Vec3f *phi_s2;
    f32 phi_f2;
    f32 *phi_s0;
    s32 phi_s1;

    func_800BE568(arg0, arg0 + 0x2F4);
    temp_s5 = arg0 + 0x24;
    arg0->unk_250 = 0xF;
    arg0->shape.rot.x += 0x4E20;
    arg0->speedXZ = 0.0f;
    Audio_PlaySoundAtPosition(arg1, temp_s5, 0x28, 0x38CEU);
    Item_DropCollectibleRandom(arg1, arg0, temp_s5, 0x70);
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->unk_24C = 1;
    arg0->gravity = -1.5f;
    phi_s2 = (Vec3f *) &arg0[1].destroy;
    phi_s0 = &arg0[2].world.pos.z;
    phi_s1 = 0;
    do {
        Math_Vec3f_Diff(phi_s2, temp_s5, (Vec3f *) &sp70);
        temp_f0 = Math3D_Vec3fMagnitude((Vec3f *) &sp70);
        phi_f2 = temp_f0;
        if (temp_f0 > 1.0f) {
            phi_f2 = 2.5f / temp_f0;
        }
        phi_s0->unk_0 = sp70 * phi_f2;
        phi_s0[2] = sp78 * phi_f2;
        temp_s1 = phi_s1 + 0xC;
        temp_s0 = phi_s0 + 0xC;
        temp_s0->unk_-8 = (f32) (Rand_ZeroFloat(3.5f) + 10.0f);
        phi_s2 = &phi_s2[1];
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x3C);
    temp_t1 = arg0->flags | 0x10;
    arg0->flags = temp_t1;
    arg0->flags = temp_t1 & ~1;
    arg0[1].uncullZoneDownward = (bitwise f32) func_808C28CC;
}

void func_808C28CC(EnBb *this, GlobalContext *globalCtx) {
    EnBb *temp_s1_2;
    s32 temp_s1;
    s32 temp_s2;
    Vec3f *phi_s0;
    s32 phi_s1;
    Vec3f *phi_s0_2;
    Vec3f *phi_s3;
    EnBb *phi_s1_2;
    s32 phi_s2;

    this->unk_250 += -1;
    Math_SmoothStepToS(&this->actor.world.rot.z, 0x4000, 4, 0x1000, (s16) 0x400);
    phi_s0_2 = &this->unk_278;
    phi_s1_2 = this;
    phi_s2 = 0;
    if (this->unk_250 == 0) {
        phi_s0 = &this->unk_278;
        phi_s1 = 0;
        do {
            func_800B3030(globalCtx, phi_s0, &D_801D15B0, &D_801D15B0, (s16) 0x28, (s16) 7, 2);
            Audio_PlaySoundAtPosition(globalCtx, phi_s0, 0xB, 0x3878U);
            temp_s1 = phi_s1 + 0xC;
            phi_s0 = &phi_s0[1];
            phi_s1 = temp_s1;
        } while (temp_s1 != 0x3C);
        func_808C2C38(this);
        return;
    }
    phi_s3 = &this->unk_2B4;
    do {
        Math_Vec3f_Sum(phi_s0_2, phi_s3, phi_s0_2);
        temp_s2 = phi_s2 + 1;
        temp_s1_2 = phi_s1_2 + 0xC;
        temp_s1_2->unk_2AC = phi_s1_2->unk_2B4.y + this->actor.gravity;
        phi_s0_2 = &phi_s0_2[1];
        phi_s3 = &phi_s3[1];
        phi_s1_2 = temp_s1_2;
        phi_s2 = temp_s2;
    } while (temp_s2 != 5);
}

void func_808C2A00(Actor *arg0) {
    u8 temp_v0;

    arg0->unk_305 = (u8) (arg0->unk_305 & 0xFFFE);
    Audio_PlayActorSound2(arg0, 0x38E3U);
    func_800BE568(arg0, &arg0[2].velocity.z);
    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 5) {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
        arg0->unk_24D = 0x20;
        arg0[1].prev = (Actor *)0x40000000;
        arg0[1].next = (Actor *)0x3ECCCCCD;
    } else if (temp_v0 == 1) {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x14);
        arg0->speedXZ = 0.0f;
    } else if (temp_v0 == 0xE) {
        arg0->speedXZ = 0.0f;
    } else {
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
        arg0->speedXZ = 7.0f;
    }
    arg0[1].uncullZoneDownward = (bitwise f32) func_808C2B1C;
    arg0->gravity = -1.0f;
}

void func_808C2B1C(EnBb *this, GlobalContext *globalCtx) {
    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 0.5f, 0.0f);
    if (((this->actor.bgCheckFlags & 1) != 0) && (this->actor.speedXZ < 0.1f)) {
        func_808C254C((Actor *) this);
    }
}

void func_808C2B94(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    arg0->gravity = -2.0f;
    arg0[1].uncullZoneDownward = func_808C2BD0;
}

void func_808C2BD0(EnBb *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_250;
    if (temp_v0 != 0) {
        this->unk_250 = temp_v0 - 1;
    }
    if (this->unk_250 == 0) {
        func_808C1F74((Actor *) globalCtx);
        if (this->actor.colChkInfo.health == 0) {
            func_808C272C((Actor *) this, globalCtx);
            return;
        }
        func_808C254C((Actor *) this);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_808C2C38(EnBb *arg0) {
    EnBb *temp_a2;

    temp_a2 = arg0;
    temp_a2->actor.draw = NULL;
    temp_a2->unk_24C = 0;
    temp_a2->unk_26C = 0.0f;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a2 + 0x24, temp_a2 + 8);
    arg0->actor.shape.rot.x = 0;
    arg0->actor.world.pos.y += 50.0f;
    arg0->unk_250 = 0xC8;
    arg0->actionFunc = func_808C2CB4;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.gravity = 0.0f;
}

void func_808C2CB4(EnBb *this, GlobalContext *globalCtx) {
    this->unk_250 += -1;
    if (this->unk_250 == 0) {
        func_808C2CF0();
    }
}

void func_808C2CF0(void *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06000184);
    arg0->unk_13C = EnBb_Draw;
    arg0->unk_58 = 0.0f;
    arg0->unk_60 = 0.0f;
    arg0->unk_5C = 0.015f;
    arg0->unk_264 = 1.0f;
    arg0->unk_268 = 0.8f;
    arg0->unk_248 = func_808C2D78;
    arg0->unk_B7 = (u8) D_808C37EC.health;
}

void func_808C2D78(EnBb *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    u32 temp_t9;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actor.shape.rot.y += 0x1F00;
    if (Math_StepToF((f32 *) &this->actor.scale, 0.01f, 0.0005f) != 0) {
        temp_t9 = this->actor.flags & ~0x10;
        this->actor.flags = temp_t9;
        this->actor.flags = temp_t9 | 1;
        this->unk_2F4.base.acFlags |= 1;
        this->unk_2F4.base.atFlags |= 1;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_808C20D4(this);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.z = temp_f0;
    this->actor.scale.y = ((0.01f - temp_f0) * 0.5f) + 0.01f;
}

void func_808C2E34(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t0;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk_305;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_305 = (u8) (temp_v0 & 0xFFFD);
        temp_t0 = arg0->unk_304 & 0xFFF9;
        arg0->unk_304 = temp_t0;
        arg0->unk_304 = (u8) (temp_t0 & 0xFFFE);
        if ((arg0->unk_24D != 0xA) || ((*arg0[2].colChkInfo.displacement.y & 0xDB0B3) == 0)) {
            func_800BE258(arg0, arg0 + 0x30C);
            arg0[1].child = NULL;
            arg0[1].parent = NULL;
            func_808C1F74(arg0, arg1);
            if (Actor_ApplyDamage(arg0) == 0) {
                Enemy_StartFinishingBlow(arg1, arg0);
            }
            if (arg0->colChkInfo.damageEffect == 3) {
                func_808C1F00(arg0);
                if (arg0->colChkInfo.health == 0) {
                    arg0->unk_250 = 3;
                    arg0->unk_305 = (u8) (arg0->unk_305 & 0xFFFE);
                }
                func_808C2B94(arg0);
            } else if (arg0->colChkInfo.health == 0) {
                func_808C272C(arg0, arg1);
            } else {
                func_808C2A00(arg0);
            }
            if (arg0->colChkInfo.damageEffect == 4) {
                arg0[1].prev = (Actor *)0x40800000;
                arg0->unk_24D = 0x14U;
                arg0[1].next = (Actor *)0x3ECCCCCD;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0[2].yawTowardsPlayer, (f32) arg0->unk_31C, (f32) arg0->unk_31E, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = arg0->unk_304;
    if ((temp_v0_2 & 4) != 0) {
        arg0->unk_304 = (u8) (temp_v0_2 & 0xFFF9);
        if (func_808C25E0 != (bitwise s32) arg0[1].uncullZoneDownward) {
            arg0->world.rot.y = arg0->yawTowardsPlayer + 0x8000;
            arg0->shape.rot.y = arg0->world.rot.y;
            func_808C254C(arg0);
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0_2 & 2) != 0) {
        arg0->unk_304 = (u8) (temp_v0_2 & 0xFFFD);
        arg0->world.rot.y = arg0->yawTowardsPlayer + 0x8000;
        arg0->shape.rot.y = arg0->world.rot.y;
        Audio_PlayActorSound2(arg0, 0x38CBU);
        if ((bitwise f32) arg0[1].parent > 0.0f) {
            gSaveContext.unk_1016 = 0x4B0;
        }
        if (func_808C23EC == (bitwise s32) arg0[1].uncullZoneDownward) {
            func_808C20D4((EnBb *) arg0);
        }
    }
}

void EnBb_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0_2;
    void (*temp_v0)(EnBb *, GlobalContext *);
    EnBb *this = (EnBb *) thisx;

    func_808C2E34((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_v0 = this->actionFunc;
    if ((func_808C28CC != temp_v0) && (func_808C2CB4 != temp_v0)) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 25.0f, 40.0f, 7U);
        this->unk_2F4.dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
        this->unk_2F4.dim.worldSphere.center.y = (s16) (s32) (this->actor.world.pos.y + 15.0f);
        this->unk_2F4.dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
        this->unk_2F4.dim.worldSphere.radius = (s16) (s32) (this->unk_264 * 30.0f);
        temp_v0_2 = this->unk_2F4.dim.worldSphere.radius;
        if ((s32) temp_v0_2 < 0x14) {
            this->unk_2F4.dim.worldSphere.radius = 0x14;
        } else {
            this->unk_2F4.dim.worldSphere.radius = temp_v0_2;
        }
        Math_Vec3s_ToVec3f((Vec3f *) &this->actor.focus, (Vec3s *) &this->unk_2F4.dim.worldSphere);
        if ((this->unk_2F4.base.atFlags & 1) != 0) {
            this->actor.flags |= 0x1000000;
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_2F4);
        }
        if ((this->unk_2F4.base.acFlags & 1) != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_2F4);
        }
        if ((this->unk_2F4.base.ocFlags1 & 1) != 0) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_2F4);
        }
        if (this->unk_26C > 0.0f) {
            if (this->unk_24D != 0xA) {
                Math_StepToF(&this->unk_26C, 0.0f, 0.05f);
                temp_f0 = (this->unk_26C + 1.0f) * 0.2f;
                this->unk_270 = temp_f0;
                if (temp_f0 > 0.4f) {
                    this->unk_270 = 0.4f;
                    return;
                }
                this->unk_270 = this->unk_270;
                return;
            }
            if (Math_StepToF(&this->unk_274, 0.4f, 0.01f) == 0) {
                func_800B9010((Actor *) this, 0x20B2U);
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

s32 func_808C32EC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg5->unk_24C == -1) {
        arg5->unk_2F0 = (Gfx *) *arg2;
        *arg2 = NULL;
    }
    return 0;
}

void func_808C3324(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp30;
    Gfx *sp28;
    s8 *sp20;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    MtxF *temp_v0_4;
    s8 *temp_v1;
    s8 *temp_v1_2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;

    temp_v0 = arg4->unk_24C;
    if (temp_v0 == 0) {
        temp_v0_2 = *(&D_808C37FC + arg1);
        if (temp_v0_2 != -1) {
            if (temp_v0_2 == 0) {
                SysMatrix_GetStateTranslationAndScaledX(1000.0f, arg4 + 0x278);
                return;
            }
            if (temp_v0_2 == 3) {
                SysMatrix_GetStateTranslationAndScaledX(-1000.0f, arg4 + 0x29C);
                SysMatrix_MultiplyVector3fByState(&D_808C380C, arg4 + 0x2A8);
                return;
            }
            SysMatrix_GetStateTranslation(arg4 + (temp_v0_2 * 0xC) + 0x278);
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v0 > 0) {
        temp_v1 = arg1 + &D_808C37FC;
        temp_v0_3 = *temp_v1;
        if (temp_v0_3 != -1) {
            sp20 = temp_v1;
            SysMatrix_GetStateTranslation(arg4 + (temp_v0_3 * 0xC) + 0x278);
        }
        if ((arg1 + &D_808C37FC) == &D_808C380B) {
            arg4->unk_24C = -1;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    temp_v1_2 = arg1 + &D_808C37FC;
    if (*temp_v1_2 != -1) {
        sp20 = temp_v1_2;
        sp30 = *arg0;
        temp_v0_4 = SysMatrix_GetCurrentState();
        temp_v0_4->mf[3][0] = (arg4 + (*temp_v1_2 * 0xC))->unk_278;
        temp_v0_4->mf[3][1] = (arg4 + (*temp_v1_2 * 0xC))->unk_27C;
        temp_v0_4->mf[3][2] = (arg4 + (*temp_v1_2 * 0xC))->unk_280;
        SysMatrix_InsertZRotation_s(arg4->world.rot.z, 1);
        temp_v0_5 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp28 = temp_v0_5;
        sp28->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_6 = sp30->polyOpa.p;
        sp30->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = arg4[2].velocity.y;
    }
}

void EnBb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    MtxF *sp6C;
    Gfx *sp50;
    Gfx *sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;
    MtxF *temp_v0_2;
    EnBb *this = (EnBb *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_s0->polyOpa.p;
    temp_v0->words.w1 = (u32) &sSetupDL[150];
    temp_v0->words.w0 = 0xDE000000;
    temp_s0->polyOpa.p = &temp_v0[1];
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_808C32EC, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_808C3324, (Actor *) this);
    if (this->unk_264 > 0.0f) {
        temp_v0_2 = SysMatrix_GetCurrentState();
        sp6C = temp_v0_2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        Matrix_RotateY((s16) ((func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) - this->actor.shape.rot.y) + 0x8000), 1U);
        Matrix_Scale(this->unk_264, this->unk_268, 1.0f, 1);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = -1;
        temp_v0_3->words.w0 = 0xFA008080;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = 0xFF00;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDB060020;
        sp50 = temp_v0_5;
        sp50->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) globalCtx->gameplayFrames * -0x14) & 0x1FF, 0x20, 0x80);
        temp_v0_2->mf[3][1] -= 47.0f * this->unk_268;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDA380003;
        sp4C = temp_v0_6;
        sp4C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w1 = (u32) D_0407D590;
        temp_v0_7->words.w0 = 0xDE000000;
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_278, 5, this->unk_270, this->unk_274, this->unk_26C, (u8) (s32) this->unk_24D);
}
