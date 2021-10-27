typedef struct EnTite {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x90];                 /* maybe part of unk_188[25]? */
    /* 0x21E */ Vec3s unk_21E;                      /* inferred */
    /* 0x224 */ char pad_224[0x90];                 /* maybe part of unk_21E[25]? */
    /* 0x2B4 */ void (*actionFunc)(EnTite *, GlobalContext *);
    /* 0x2B8 */ char pad_2B8[0x1];
    /* 0x2B9 */ u8 unk_2B9;                         /* inferred */
    /* 0x2BA */ char pad_2BA[0x1];
    /* 0x2BB */ u8 unk_2BB;                         /* inferred */
    /* 0x2BC */ char pad_2BC[0x2];                  /* maybe part of unk_2BB[3]? */
    /* 0x2BE */ s16 unk_2BE;                        /* inferred */
    /* 0x2C0 */ u32 unk_2C0;                        /* inferred */
    /* 0x2C4 */ f32 unk_2C4;                        /* inferred */
    /* 0x2C8 */ f32 unk_2C8;                        /* inferred */
    /* 0x2CC */ f32 unk_2CC;                        /* inferred */
    /* 0x2D0 */ Vec3f unk_2D0;                      /* inferred */
    /* 0x2DC */ char pad_2DC[0xD0];                 /* maybe part of unk_2D0[18]? */
    /* 0x3AC */ ColliderSphere unk_3AC;             /* inferred */
} EnTite;                                           /* size = 0x404 */

struct _mips2c_stack_EnTite_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTite_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTite_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnTite_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80893A18 {};              /* size 0x0 */

struct _mips2c_stack_func_80893A34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80893A9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80893ADC {};              /* size 0x0 */

struct _mips2c_stack_func_80893B10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80893B70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80893BCC {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x14];                   /* maybe part of sp64[6]? */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80893DD4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80893E54 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80893ED4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80893F30 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80893FD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80894024 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8089408C {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_808942B4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80894414 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80894454 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8089452C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808945B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808945EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80894638 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8089484C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (*sp24)(Actor *, GlobalContext *); /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80894910 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80894B2C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80894BC8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80894DD0 {};              /* size 0x0 */

struct _mips2c_stack_func_80894E0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80895020 {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ f32 sp7C;                            /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_808951B8 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808952EC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80895424 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808955E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80895640 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808956B8 {};              /* size 0x0 */

struct _mips2c_stack_func_808956FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80895738 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8089595C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80895A10 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80895AC0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80895CB0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80895D08 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80895DE8 {};              /* size 0x0 */

struct _mips2c_stack_func_80895E28 {
    /* 0x00 */ char pad_0[0x36];
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80895FF8 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808963B4 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80896750 {};              /* size 0x0 */

struct _mips2c_stack_func_80896788 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

? func_800BE3D0(EnTite *, s16, ActorShape *);       /* extern */
? func_800BE568(Actor *, Actor **);                 /* extern */
void func_80893A18(Actor *arg0);                    /* static */
s32 func_80893A34(Actor *arg0, GlobalContext *arg1); /* static */
void func_80893A9C(Actor *arg0, GlobalContext *, Actor *); /* static */
s32 func_80893ADC(Actor *arg0, Actor *);            /* static */
void func_80893B10(Actor *arg0);                    /* static */
void func_80893B70(Actor *arg0);                    /* static */
void func_80893BCC(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80893DD4(Actor *arg0);                    /* static */
void func_80893E54(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80893ED4(EnTite *arg0);                   /* static */
void func_80893F30(Actor *arg0, GlobalContext *arg1); /* static */
void func_80893FD0(Actor *arg0);                    /* static */
void func_80894024(Actor *arg0, GlobalContext *arg1); /* static */
void func_8089408C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808942B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80894414(Actor *arg0);                    /* static */
void func_80894454(Actor *arg0, GlobalContext *arg1); /* static */
void func_8089452C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808945B4(Actor *arg0, ? arg1);            /* static */
void func_808945EC(Actor *arg0, Actor *);           /* static */
void func_80894638(Actor *arg0, GlobalContext *arg1); /* static */
void func_8089484C(Actor *arg0, Actor *);           /* static */
void func_80894910(Actor *arg0, GlobalContext *arg1); /* static */
void func_80894B2C(Actor *arg0);                    /* static */
void func_80894BC8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80894DD0(Actor *arg0);                    /* static */
void func_80894E0C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80895020(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_808951B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808952EC(Actor *arg0);                    /* static */
void func_80895424(Actor *arg0, GlobalContext *arg1); /* static */
void func_808955E4(Actor *arg0);                    /* static */
void func_80895640(Actor *arg0, GlobalContext *arg1); /* static */
void func_808956B8(Actor *arg0);                    /* static */
void func_808956FC(Actor *arg0);                    /* static */
void func_80895738(Actor *arg0, GlobalContext *arg1); /* static */
void func_8089595C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80895A10(EnTite *arg0);                   /* static */
void func_80895AC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80895CB0(Actor *arg0);                    /* static */
void func_80895D08(Actor *arg0, GlobalContext *arg1); /* static */
void func_80895DE8(Actor *arg0);                    /* static */
void func_80895E28(Actor *arg0, GlobalContext *arg1); /* static */
void func_80895FF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808963B4(EnTite *arg0, GlobalContext *arg1); /* static */
s32 func_80896750(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80896788(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_060004F8;
extern AnimationHeader D_0600069C;
extern AnimationHeader D_0600083C;
extern AnimationHeader D_06000A14;
extern AnimationHeader D_06000C70;
extern AnimationHeader D_060012E4;
extern SkeletonHeader D_06003A20;
static ColliderSphereInit D_80896AD0 = {
    {6, 0x11, 9, 0x39, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 9, 5, 1},
    {0, {{0, 0x5DC, 0}, 0x14}, 0x64},
};
static DamageTable D_80896AFC = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        0xF0,
        1,
        1,
        0,
        0x22,
        0x31,
        0x42,
        1,
        0x10,
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
static CollisionCheckInfoInit D_80896B1C = {2, 0x28, 0x28, 0xFE};
static void *D_80896B24[6] = {
    (void *)0x6001300,
    (void *)0x6001700,
    (void *)0x6001900,
    (void *)0x6001B00,
    (void *)0x6001F00,
    (void *)0x6002100,
};
static Color_RGBA8 D_80896B3C = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80896B40 = {0xB4, 0xB4, 0xB4, 0xFF};
static Vec3f D_80896B44 = {0.0f, 0.45f, 0.0f};
static InitChainEntry D_80896B50[4];                /* unable to generate initializer */
static s32 D_80896B60 = 0;
static Vec3f D_80896B64 = {0.0f, 0.3f, 0.0f};
static ? D_80896B70;                                /* unable to generate initializer */
static ? D_80896B8C;                                /* unable to generate initializer */
static ? D_80896BA4;                                /* unable to generate initializer */

void EnTite_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 temp_s1;
    void **temp_s0;
    void **temp_s3;
    void **phi_s0;
    s32 phi_s1;
    void **phi_s3;
    s16 phi_s0_2;
    EnTite *this = (EnTite *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80896B50);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06003A20, &D_060012E4, &this->unk_188, &this->unk_21E, 0x19);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 60.0f);
    Actor_SetHeight((Actor *) this, 20.0f);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80896AFC, &D_80896B1C);
    Collider_InitAndSetSphere(globalCtx, &this->unk_3AC, (Actor *) this, &D_80896AD0);
    this->unk_2C0 = 0x1D;
    this->unk_3AC.dim.worldSphere.radius = D_80896AD0.dim.modelSphere.radius;
    phi_s3 = D_80896B24;
    if (D_80896B60 == 0) {
        do {
            phi_s0 = phi_s3;
            phi_s1 = 0;
loop_3:
            temp_s1 = phi_s1 + 1;
            temp_s0 = phi_s0 + 4;
            temp_s0->unk_-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
            phi_s1 = temp_s1;
            if (temp_s1 != 3) {
                goto loop_3;
            }
            temp_s3 = phi_s3 + 0xC;
            phi_s3 = temp_s3;
        } while (temp_s3 != &D_80896B3C);
        D_80896B60 = 1;
    }
    temp_v0 = this->actor.params;
    phi_s0_2 = -2;
    if (temp_v0 == -3) {
        this->actor.params = -2;
        this->unk_2BE = 0xF0;
        this->actor.flags &= -2;
        this->actor.shape.shadowDraw = NULL;
        this->actor.shape.yOffset = -3000.0f;
        func_80895A10(this);
    } else {
        if (temp_v0 == -4) {
            this->actor.params = -2;
            this->unk_2BE = 0xF0;
        } else if (temp_v0 == -2) {
            this->unk_2BE = 0x80;
        } else {
            this->unk_2BE = 0x40;
        }
        func_80893ED4(this);
        phi_s0_2 = -2;
    }
    if (phi_s0_2 == this->actor.params) {
        this->actor.colChkInfo.health = 3;
        this->unk_2C0 |= 0x40;
    }
}

void EnTite_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTite *this = (EnTite *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk_3AC);
}

void func_80893A18(Actor *arg0) {
    arg0->unk_3C0 = 6;
    arg0->unk_3BD = (u8) (arg0->unk_3BD & 0xFFFB);
}

s32 func_80893A34(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->params == -2) && ((arg0->bgCheckFlags & 1) != 0) && (func_800C99D4(arg1 + 0x830, arg0->floorPoly, (s32) arg0->floorBgId) == 5)) {
        return 1;
    }
    return 0;
}

void func_80893A9C(Actor *arg0) {
    if (func_80893A34() != 0) {
        func_808956B8(arg0);
        return;
    }
    func_80893FD0(arg0);
}

s32 func_80893ADC(Actor *arg0) {
    if ((arg0->params == -2) && ((arg0->bgCheckFlags & 0x20) != 0)) {
        return 1;
    }
    return 0;
}

void func_80893B10(Actor *arg0) {
    f32 *temp_a0;

    temp_a0 = arg0 + 0x68;
    arg0 = arg0;
    Math_StepToF(temp_a0, 0.0f, 2.0f);
    Math_StepToF(arg0 + 0x28, (arg0->world.pos.y + arg0->yDistToWater) - 1.0f, 2.0f);
}

void func_80893B70(Actor *arg0) {
    if (arg0->params == -2) {
        if ((arg0->bgCheckFlags & 0x20) != 0) {
            arg0->gravity = 0.0f;
            func_80893B10();
            return;
        }
        arg0->gravity = -1.0f;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80893BCC(Actor *arg0, GlobalContext *arg1) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s32 sp64;
    CollisionPoly *temp_a1;
    f32 *temp_s2;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t3;
    u32 temp_v0;
    u8 temp_a2;
    void *phi_s1;
    s32 phi_s0;
    Vec3f *phi_s1_2;

    if ((arg0->bgCheckFlags & 2) != 0) {
        temp_a1 = arg0->floorPoly;
        temp_a2 = arg0->floorBgId;
        arg0 = arg0;
        temp_v0 = func_800C9BB8(arg1 + 0x830, temp_a1, (s32) temp_a2);
        if ((temp_v0 == 0) || (temp_v0 == 1)) {
            sp64 = 0x3C;
            phi_s1_2 = arg0 + 0x30C;
            do {
                func_800BBFB0(arg1, phi_s1_2, 1.0f, 2, (s16) 0x50, (s16) 0xF, (u8) 1);
                temp_t3 = sp64 + 0xC;
                sp64 = temp_t3;
                phi_s1_2 = &phi_s1_2[1];
            } while (temp_t3 != 0x6C);
        } else if (temp_v0 == 0xE) {
            sp64 = 0x3C;
            temp_s2 = &sp7C;
            phi_s1 = arg0 + 0x30C;
            do {
                phi_s0 = 0;
loop_9:
                sp7C = randPlusMinusPoint5Scaled(1.0f) + phi_s1->unk_0;
                sp80 = randPlusMinusPoint5Scaled(1.0f) + phi_s1->unk_4;
                sp84 = randPlusMinusPoint5Scaled(1.0f) + phi_s1->unk_8;
                func_800B0DE0(arg1, (Vec3f *) temp_s2, &D_801D15B0, &D_80896B64, &D_80896B3C, &D_80896B40, (s16) ((s32) Rand_ZeroFloat(16.0f) + 0x50), (s16) 0xF);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
                if (temp_s0 != 2) {
                    goto loop_9;
                }
                temp_t0 = sp64 + 0xC;
                sp64 = temp_t0;
                phi_s1 += 0xC;
            } while (temp_t0 != 0x6C);
        }
        Audio_PlayActorSound2(arg0, 0x387BU);
    }
}

void func_80893DD4(Actor *arg0) {
    arg0->unk_2BB = 0xA;
    arg0->unk_3C0 = 3;
    arg0[2].world.rot.z = 0x50;
    arg0[2].focus.pos.y = 0.5f;
    arg0[2].focus.pos.z = 0.75f;
    arg0[2].focus.pos.x = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
    arg0->flags &= -0x201;
}

void func_80893E54(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_2BB == 0xA) {
        arg0->unk_2BB = 0U;
        arg0->unk_3C0 = 6;
        arg0[2].focus.pos.x = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2D0), 9, 2, 0.2f, 0.2f);
        arg0->flags |= 0x200;
    }
}

void func_80893ED4(EnTite *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060012E4, 4.0f);
    arg0->unk_2BC = Rand_S16Offset(0xF, 0x1E);
    arg0->actionFunc = func_80893F30;
    arg0->actor.speedXZ = 0.0f;
}

void func_80893F30(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    func_80893B70(arg0);
    temp_v0 = arg0[2].world.rot.z;
    if ((s32) temp_v0 > 0) {
        arg0[2].world.rot.z = temp_v0 - 1;
        return;
    }
    if ((Player_GetMask(arg1) != 0x10) && (arg0->xzDistToPlayer < 300.0f) && (arg0->yDistToPlayer < 80.0f)) {
        func_808945EC(arg0);
    }
}

void func_80893FD0(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_0600083C);
    arg0[2].world.pos.z = func_80894024;
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80894024(Actor *arg0, GlobalContext *arg1) {
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        func_8089408C(arg0, arg1);
        return;
    }
    func_80893B70(arg0);
    Math_ScaledStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 0x3E8);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_8089408C(Actor *arg0, GlobalContext *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 *temp_a1;
    f32 *temp_s3;
    s32 temp_s1;
    s32 phi_s1;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_060004F8);
    if (func_80893ADC(arg0) == 0) {
        Audio_PlayActorSound2(arg0, 0x386CU);
    } else {
        arg0->world.pos.y += arg0->yDistToWater;
        Audio_PlayActorSound2(arg0, 0x388EU);
    }
    phi_s1 = 0;
    if (arg0->shape.yOffset < 0.0f) {
        sp68 = 3.0f;
        arg0->shape.yOffset = 0.0f;
        temp_s3 = &sp64;
        do {
            sp64 = 2.0f * Math_SinS(arg0->shape.rot.y);
            sp6C = 2.0f * Math_CosS(arg0->shape.rot.y);
            temp_a1 = &sp70;
            sp70 = arg0->world.pos.x + (12.5f * sp64);
            sp74 = arg0->world.pos.y + 15.0f;
            sp78 = arg0->world.pos.z + (12.5f * sp6C);
            func_800B0DE0(arg1, (Vec3f *) temp_a1, (Vec3f *) temp_s3, &D_80896B44, &D_80896B3C, &D_80896B40, (s16) 0x1F4, (s16) 0x32);
            temp_s1 = phi_s1 + 1;
            arg0->shape.rot.y += 0x4000;
            phi_s1 = temp_s1;
        } while (temp_s1 != 4);
        arg0->shape.rot.y = arg0->yawTowardsPlayer;
        arg0->shape.shadowDraw = func_800B3FC0;
        arg0->flags |= 1;
        arg0->world.rot.y = arg0->shape.rot.y;
        arg0->velocity.y = 10.0f;
    } else {
        arg0->velocity.y = 8.0f;
    }
    arg0->bgCheckFlags &= 0xFF9C;
    arg0[2].world.pos.z = (bitwise f32) func_808942B4;
    arg0->gravity = -1.0f;
    arg0->speedXZ = 4.0f;
}

void func_808942B4(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    GlobalContext *phi_a3;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if ((((arg0->bgCheckFlags & 1) != 0) || ((phi_a3 = arg1, (func_80893ADC(arg0) != 0)) && (arg0->yDistToWater > 0.0f))) && (phi_a3 = arg1, (arg0->velocity.y <= 0.0f))) {
        arg0->speedXZ = 0.0f;
        arg0->unk_3BC = (u8) (arg0->unk_3BC & 0xFFFD);
        if (func_80893ADC(arg0) == 0) {
            func_80893BCC(arg0, arg1);
            func_80894414(arg0);
            return;
        }
        arg0->gravity = 0.0f;
        if (arg0->velocity.y < -8.0f) {
            func_8089452C(arg0, arg1);
            return;
        }
        arg0->velocity.y = 0.0f;
        Audio_PlayActorSound2(arg0, 0x388FU);
        func_80894414(arg0);
        return;
    }
    temp_v0 = arg0->unk_3BC;
    if ((temp_v0 & 2) == 0) {
        arg0->flags |= 0x1000000;
        CollisionCheck_SetAT(phi_a3, phi_a3 + 0x18884, (Collider *) &arg0[2].child);
        return;
    }
    arg0->unk_3BC = (u8) (temp_v0 & 0xFFFD);
    func_80894B2C(arg0);
}

void func_80894414(Actor *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600069C);
    arg0[2].world.pos.z = func_80894454;
}

void func_80894454(Actor *arg0, GlobalContext *arg1) {
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        if ((Player_GetMask(arg1) == 0x10) || (arg0->xzDistToPlayer > 450.0f) || (arg0->yDistToPlayer > 80.0f)) {
            func_80893ED4((EnTite *) arg0);
            return;
        }
        if (Actor_IsActorFacingLink(arg0, 0x2328) == 0) {
            func_808945EC(arg0);
            return;
        }
        func_80893A9C(arg0, arg1);
        return;
    }
    Math_ScaledStepToS(arg0 + 0x32, arg0->yawTowardsPlayer, 0x5DC);
    func_80893B70(arg0);
}

void func_8089452C(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    ? sp2C;

    Math_Vec3f_Copy((Vec3f *) &sp2C, arg0 + 0x24);
    sp30 += arg0->yDistToWater;
    arg0->velocity.y *= 0.75f;
    EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp2C, 0, 0x1F4, (s16) 0);
    Audio_PlayActorSound2(arg0, 0x388AU);
    arg0[2].world.pos.z = (bitwise f32) func_808945B4;
}

void func_808945B4(Actor *arg0, ? arg1) {
    if (func_80893B10(arg0) != 0) {
        func_80894414(arg0);
    }
}

void func_808945EC(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06000A14);
    arg0[2].world.pos.z = func_80894638;
    arg0->speedXZ = 0.0f;
    arg0->velocity.y = 0.0f;
}

void func_80894638(Actor *arg0, GlobalContext *arg1) {
    Actor *sp24;
    Actor *temp_a0;
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    func_80893B70(arg0);
    temp_a1 = arg0->shape.rot.y;
    temp_v0 = arg0->yawTowardsPlayer - temp_a1;
    if ((s32) temp_v0 > 0) {
        phi_v1 = ((s32) ((f32) temp_v0 * 0.023809524f) + 0xA) << 0x10;
    } else {
        phi_v1 = ((s32) ((f32) temp_v0 * 0.023809524f) - 0xA) << 0x10;
    }
    temp_v1 = phi_v1 >> 0x10;
    arg0->shape.rot.y = temp_a1 + (temp_v1 * 2);
    arg0->world.rot.y = arg0->shape.rot.y;
    temp_a0 = &arg0[1];
    arg0->unk_160 = (f32) ((f32) temp_v1 * 0.01f);
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0);
    if (func_801378B8((SkelAnime *) temp_a0, 7.0f) != 0) {
        if (func_80893ADC(arg0) != 0) {
            Audio_PlayActorSound2(arg0, 0x3835U);
        } else {
            Audio_PlayActorSound2(arg0, 0x386FU);
        }
    }
    if ((Player_GetMask(arg1) == 0x10) || (arg0->xzDistToPlayer > 450.0f) || (arg0->yDistToPlayer > 80.0f)) {
        func_80893ED4((EnTite *) arg0);
        return;
    }
    if ((((arg0->bgCheckFlags & 1) != 0) || ((func_80893ADC(arg0) != 0) && (arg0->yDistToWater < 10.0f))) && (Actor_IsActorFacingLink(arg0, 0xE38) != 0)) {
        if ((arg0->xzDistToPlayer <= 180.0f) && (arg0->yDistToPlayer <= 80.0f)) {
            func_80893A9C(arg0, arg1);
            return;
        }
        func_8089484C(arg0);
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void func_8089484C(Actor *arg0) {
    void (*sp24)(Actor *, GlobalContext *);

    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06000C70, -3.0f);
    sp24 = func_80894910;
    if (func_80894910 != arg0[2].world.pos.z) {
        arg0->unk_2B8 = Rand_S16Offset(1, 3);
    }
    arg0->velocity.y = 9.5f;
    arg0->gravity = -1.0f;
    arg0->speedXZ = 4.0f;
    if (func_80893ADC(arg0) != 0) {
        arg0->world.pos.y += arg0->yDistToWater;
        Audio_PlayActorSound2(arg0, 0x388EU);
    } else {
        Audio_PlayActorSound2(arg0, 0x386CU);
    }
    arg0[2].world.pos.z = (bitwise f32) sp24;
}

void func_80894910(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    ? sp34;
    f32 temp_f0;
    f32 temp_f2;

    Math_SmoothStepToF(arg0 + 0x70, 0.0f, 0.1f, 1.0f, 0.0f);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if ((arg0->bgCheckFlags & 0x40) != 0) {
        Audio_PlayActorSound2(arg0, 0x388AU);
        if (func_80893ADC(arg0) != 0) {
            Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &arg0->world);
            sp38 += arg0->yDistToWater;
            arg0->velocity.y *= 0.75f;
            EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp34, 0, 0x1F4, (s16) 0);
        }
    } else {
        func_80893BCC(arg0, arg1);
    }
    if ((((arg0->bgCheckFlags & 1) != 0) || ((func_80893ADC(arg0) != 0) && (arg0->yDistToWater > 0.0f))) && (arg0->velocity.y <= 0.0f)) {
        arg0->speedXZ = 0.0f;
        Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0xFA0);
        arg0->world.rot.y = arg0->shape.rot.y;
        if ((func_80893ADC(arg0) == 0) || (arg0->gravity = 0.0f, (func_80893B10(arg0) != 0))) {
            if ((Player_GetMask(arg1) == 0x10) || (temp_f0 = arg0->xzDistToPlayer, (temp_f0 > 450.0f)) || (temp_f2 = arg0->yDistToPlayer, (temp_f2 > 80.0f))) {
                func_80893ED4((EnTite *) arg0);
                return;
            }
            if ((temp_f0 <= 180.0f) && (temp_f2 <= 80.0f)) {
                func_808945EC((bitwise Actor *) 80.0f, arg0);
                return;
            }
            func_8089484C((bitwise Actor *) 80.0f, arg0);
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0x3E8);
}

void func_80894B2C(Actor *arg0) {
    Actor **temp_a1;
    Actor *temp_a0_2;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060012E4, 4.0f);
    arg0->speedXZ = -6.0f;
    arg0->gravity = -1.0f;
    if (arg0[2].next != 0) {
        temp_a0_2 = arg0;
        temp_a1 = arg0 + 0x3AC;
        arg0 = arg0;
        func_800BE568(temp_a0_2, temp_a1);
    } else {
        arg0->world.rot.y = arg0->yawTowardsPlayer + 0x8000;
    }
    arg0->world.rot.y += 0x8000;
    arg0[2].world.pos.z = func_80894BC8;
}

void func_80894BC8(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;

    Math_SmoothStepToF(arg0 + 0x70, 0.0f, 1.0f, 0.5f, 0.0f);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if ((func_80893ADC(arg0) != 0) && (arg0->velocity.y <= 0.0f)) {
        arg0->gravity = 0.0f;
        arg0->velocity.y = 0.0f;
        arg0->world.pos.y += arg0->yDistToWater - 1.0f;
    }
    if ((arg0->bgCheckFlags & 0x40) != 0) {
        Audio_PlayActorSound2(arg0, 0x388FU);
    } else {
        func_80893BCC(arg0, arg1);
    }
    if ((arg0->speedXZ == 0.0f) && (((arg0->bgCheckFlags & 1) != 0) || (func_80893ADC(arg0) != 0))) {
        arg0->unk_3BD = (u8) (arg0->unk_3BD | 1);
        arg0->world.rot.y = arg0->shape.rot.y;
        if (Player_GetMask(arg1) != 0x10) {
            temp_f0 = arg0->xzDistToPlayer;
            if ((temp_f0 > 450.0f) || (arg0->yDistToPlayer > 80.0f)) {
                temp_v0 = arg0->shape.rot.x;
                phi_v1 = (s32) temp_v0;
                if ((s32) temp_v0 < 0) {
                    phi_v1 = -(s32) temp_v0;
                }
                if (phi_v1 < 0xFA0) {
                    temp_v0_2 = arg0->shape.rot.z;
                    phi_v1_2 = (s32) temp_v0_2;
                    if ((s32) temp_v0_2 < 0) {
                        phi_v1_2 = -(s32) temp_v0_2;
                    }
                    if (phi_v1_2 < 0xFA0) {
                        goto block_18;
                    }
                    goto block_19;
                }
                goto block_19;
            }
block_19:
            if ((temp_f0 < 180.0f) && (arg0->yDistToPlayer <= 80.0f) && (Actor_IsActorFacingLink(arg0, 0x1770) != 0)) {
                func_80893A9C(arg0, arg1);
                return;
            }
            func_8089484C(arg0);
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
block_18:
        func_80893ED4((EnTite *) arg0);
    }
}

void func_80894DD0(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    arg0[2].world.pos.z = func_80894E0C;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80894E0C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a0_2;
    Actor *temp_a0_3;
    Actor *temp_a0_4;
    Actor *temp_a0_5;
    Actor *temp_a2;
    Actor *temp_a2_2;
    Actor *temp_a2_3;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_a2 = arg0;
    temp_v0 = temp_a2[2].world.rot.z;
    temp_a0 = temp_a2;
    if (temp_v0 != 0) {
        temp_a2[2].world.rot.z = temp_v0 - 1;
    }
    arg0 = temp_a2;
    temp_a2_2 = arg0;
    if ((func_80893ADC(temp_a0, temp_a2) != 0) && (temp_a2_2->velocity.y <= 0.0f)) {
        temp_a2_2->gravity = 0.0f;
        temp_a2_2->velocity.y = 0.0f;
        temp_a2_2->world.pos.y += temp_a2_2->yDistToWater;
    }
    temp_a0_2 = temp_a2_2;
    if ((temp_a2_2->bgCheckFlags & 0x40) != 0) {
        temp_a0_3 = temp_a2_2;
        arg0 = temp_a2_2;
        Audio_PlayActorSound2(temp_a0_3, 0x388FU);
    } else {
        arg0 = temp_a2_2;
        func_80893BCC(temp_a0_2, arg1, temp_a2_2);
    }
    temp_a2_3 = arg0;
    temp_a0_4 = temp_a2_3;
    if (temp_a2_3[2].world.rot.z == 0) {
        arg0 = temp_a2_3;
        func_80893E54(temp_a0_4, arg1, temp_a2_3);
        if (arg0->colChkInfo.health == 0) {
            func_80895020(arg0, arg1, arg0);
            return;
        }
        if (arg0->unk_2B9 != 0) {
            func_808955E4(arg0);
            return;
        }
        arg0 = arg0;
        if (Player_GetMask(arg1) != 0x10) {
            temp_f0 = arg0->xzDistToPlayer;
            if ((temp_f0 > 450.0f) || (arg0->yDistToPlayer > 80.0f)) {
                temp_v0_2 = arg0->shape.rot.x;
                phi_v1 = (s32) temp_v0_2;
                if ((s32) temp_v0_2 < 0) {
                    phi_v1 = -(s32) temp_v0_2;
                }
                if (phi_v1 < 0xFA0) {
                    temp_v0_3 = arg0->shape.rot.z;
                    phi_v1_2 = (s32) temp_v0_3;
                    if ((s32) temp_v0_3 < 0) {
                        phi_v1_2 = -(s32) temp_v0_3;
                    }
                    if (phi_v1_2 < 0xFA0) {
                        goto block_22;
                    }
                    goto block_23;
                }
                goto block_23;
            }
block_23:
            if ((temp_f0 < 180.0f) && (temp_a0_5 = arg0, (arg0->yDistToPlayer <= 80.0f)) && (arg0 = arg0, (Actor_IsActorFacingLink(temp_a0_5, 0x1770) != 0))) {
                func_80893A9C(arg0, arg1, arg0);
                return;
            }
            func_8089484C(arg0);
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
block_22:
        func_80893ED4((EnTite *) arg0);
    }
}

void func_80895020(Actor *arg0, GlobalContext *arg1) {
    f32 sp74;
    Vec3f *temp_s5;
    f32 temp_f0;
    s16 *temp_s0;
    s32 temp_s1;
    s32 temp_t9;
    Vec3f *phi_s2;
    f32 phi_f2;
    s16 *phi_s0;
    s32 phi_s1;

    temp_s5 = arg0 + 0x24;
    arg0->speedXZ = 0.0f;
    arg0->unk_3BD = (u8) (arg0->unk_3BD & 0xFFFE);
    arg0->colorFilterTimer = 0;
    Audio_PlaySoundAtPosition(arg1, temp_s5, 0x28, 0x386EU);
    temp_t9 = arg0->flags & ~1;
    arg0->flags = temp_t9;
    arg0->flags = temp_t9 | 0x10;
    arg0->unk_2BA = 1;
    Item_DropCollectibleRandom(arg1, arg0, temp_s5, arg0[2].world.unk_12);
    arg0[2].world.rot.z = 0x19;
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->gravity = -0.58f;
    phi_s2 = (Vec3f *) &arg0[2].focus.rot;
    phi_s0 = &arg0[2].colChkInfo.cylYShift;
    phi_s1 = 0;
    do {
        Math_Vec3f_Diff(phi_s2, temp_s5, (Vec3f *) &sp74);
        temp_f0 = Math3D_Vec3fMagnitude((Vec3f *) &sp74);
        phi_f2 = temp_f0;
        if (temp_f0 > 1.0f) {
            phi_f2 = 1.2f / temp_f0;
        }
        phi_s0->unk_0 = (f32) (sp74 * phi_f2);
        phi_s0->unk_8 = (f32) (sp7C * phi_f2);
        temp_s1 = phi_s1 + 0xC;
        temp_s0 = phi_s0 + 0xC;
        temp_s0->unk_-8 = (f32) (Rand_ZeroFloat(3.5f) + 5.5f);
        phi_s2 = &phi_s2[1];
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x6C);
    arg0[2].world.pos.z = (bitwise f32) func_808951B8;
}

void func_808951B8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_s1_2;
    s32 temp_s1;
    s32 temp_s2;
    Vec3f *phi_s0;
    s32 phi_s1;
    Vec3f *phi_s0_2;
    Vec3f *phi_s3;
    Actor *phi_s1_2;
    s32 phi_s2;

    arg0[2].world.rot.z += -1;
    Math_SmoothStepToS(arg0 + 0x34, 0x4000, 4, 0x1000, (s16) 0x400);
    phi_s0_2 = arg0 + 0x2D0;
    phi_s1_2 = arg0;
    phi_s2 = 0;
    if (arg0[2].world.rot.z == 0) {
        phi_s0 = arg0 + 0x2D0;
        phi_s1 = 0;
        do {
            func_800B3030(arg1, phi_s0, &D_801D15B0, &D_801D15B0, (s16) 0x28, (s16) 7, 1);
            Audio_PlaySoundAtPosition(arg1, phi_s0, 0xB, 0x3878U);
            temp_s1 = phi_s1 + 0xC;
            phi_s0 = &phi_s0[1];
            phi_s1 = temp_s1;
        } while (temp_s1 != 0x6C);
        Actor_MarkForDeath(arg0);
        return;
    }
    phi_s3 = (Vec3f *) &arg0[2].colChkInfo.cylYShift;
    do {
        Math_Vec3f_Sum(phi_s0_2, phi_s3, phi_s0_2);
        temp_s2 = phi_s2 + 1;
        temp_s1_2 = phi_s1_2 + 0xC;
        temp_s1_2[2].colChkInfo.displacement.z = phi_s1_2->unk_340 + arg0->gravity;
        phi_s0_2 = &phi_s0_2[1];
        phi_s3 = &phi_s3[1];
        phi_s1_2 = temp_s1_2;
        phi_s2 = temp_s2;
    } while (temp_s2 != 9);
}

void func_808952EC(Actor *arg0) {
    SkelAnime_ChangeAnimPlaybackRepeat(arg0 + 0x144, &D_06000A14, 1.5f);
    Audio_PlayActorSound2(arg0, 0x3888U);
    arg0->unk_3BD = (u8) (arg0->unk_3BD & 0xFFFE);
    func_80893A18(arg0);
    arg0->unk_2B9 = 1;
    arg0[2].world.rot.z = 0x190;
    arg0->speedXZ = 0.0f;
    arg0->gravity = -1.0f;
    arg0->unk_2B8 = (s8) (u32) (Rand_ZeroOne() * 50.0f);
    arg0->bgCheckFlags &= 0xFFFE;
    arg0[2].world.pos.z = (bitwise f32) func_80895424;
    arg0->velocity.y = 11.0f;
}

void func_80895424(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0_3;
    u16 temp_v0_2;
    u8 temp_v0;

    Math_ScaledStepToS(arg0 + 0xC0, -0x8000, 0xFA0);
    temp_v0 = arg0->unk_2B8;
    if (temp_v0 != 0) {
        arg0->unk_2B8 = (u8) (temp_v0 - 1);
    } else {
        arg0->unk_2B8 = (u8) (u32) (Rand_ZeroOne() * 30.0f);
        arg0->unk_15C = (f32) (Rand_ZeroOne() * 5.0f);
    }
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_v0_2 = arg0->bgCheckFlags;
    if ((temp_v0_2 & 1) != 0) {
        arg0->unk_3BD = (u8) (arg0->unk_3BD | 1);
        if ((temp_v0_2 & 2) != 0) {
            func_800BBDAC(arg1, arg0, arg0 + 0x24, 20.0f, 0xB, 4.0f, (s16) 0, (s16) 0, (u8) 0);
            Audio_PlayActorSound2(arg0, 0x387BU);
        }
        temp_v0_3 = arg0[2].world.rot.z;
        if (temp_v0_3 == 0) {
            func_808955E4(arg0);
            return;
        }
        arg0[2].world.rot.z = temp_v0_3 - 1;
        return;
    }
    temp_f0 = arg0->shape.yOffset;
    if (temp_f0 < 2800.0f) {
        arg0->shape.yOffset = temp_f0 + 400.0f;
    }
}

void func_808955E4(Actor *arg0) {
    arg0->unk_2B9 = 0;
    arg0->velocity.y = 13.0f;
    Audio_PlayActorSound2(arg0, 0x3888U);
    arg0[2].world.pos.z = (bitwise f32) func_80895640;
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->unk_3BD = (u8) (arg0->unk_3BD & 0xFFFE);
}

void func_80895640(Actor *arg0, GlobalContext *arg1) {
    Math_ScaledStepToS(arg0 + 0xC0, 0, 0xFA0);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->unk_3BD = (u8) (arg0->unk_3BD | 1);
        arg0->shape.yOffset = 0.0f;
        func_80893BCC(arg0, arg1);
        func_80893ED4((EnTite *) arg0);
    }
}

void func_808956B8(Actor *arg0) {
    arg0[2].world.rot.z = 0x190;
    arg0->unk_3C0 = 0xC;
    arg0->unk_3BD = (u8) (arg0->unk_3BD | 4);
    arg0[2].world.pos.z = func_80895738;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    arg0->gravity = -1.0f;
}

void func_808956FC(Actor *arg0) {
    arg0[2].world.rot.z = -1;
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->velocity.y = 7.5f;
    func_80893A18();
}

void func_80895738(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    u8 temp_t0;
    u8 temp_v0;

    func_80893BCC(arg0, arg1);
    temp_v0 = arg0->unk_3BC;
    temp_t0 = temp_v0 & 0xFFFD;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_3BC = temp_t0;
        arg0->world.rot.y = arg0->yawTowardsPlayer + 0x8000;
        if ((temp_t0 & 4) != 0) {
            func_808956FC(arg0);
        }
    } else if ((arg0->bgCheckFlags & 8) != 0) {
        arg0->world.rot.y = ((arg0->wallYaw * 2) - arg0->world.rot.y) - 0x8000;
    }
    temp_v0_2 = arg0[2].world.rot.z;
    if (temp_v0_2 == -1) {
        Math_StepToF(&arg0->speedXZ, 0.0f, 0.3f);
        if ((arg0->bgCheckFlags & 1) != 0) {
            arg0->world.rot.y = arg0->shape.rot.y;
            func_80893ED4((EnTite *) arg0);
            arg0[2].world.rot.z = 0x64;
        }
    } else if ((s32) temp_v0_2 > 0) {
        arg0[2].world.rot.z = temp_v0_2 - 1;
        Math_StepToF(&arg0->speedXZ, 10.0f, 0.3f);
        arg0->flags |= 0x1000000;
        CollisionCheck_SetAT(arg1, &arg1->colChkCtx, (Collider *) &arg0[2].child);
        if (func_80893A34(arg0, arg1) == 0) {
            arg0[2].world.rot.z = 0;
        }
    } else if ((temp_v0_2 == 0) && (Math_StepToF(&arg0->speedXZ, 0.0f, 0.3f) != 0)) {
        arg0->world.rot.y = arg0->shape.rot.y;
        func_80893A18(arg0);
        if ((Player_GetMask(arg1) == 0x10) || (arg0->xzDistToPlayer > 450.0f) || (arg0->yDistToPlayer > 80.0f)) {
            func_80893ED4((EnTite *) arg0);
        } else if (Actor_IsActorFacingLink(arg0, 0x2328) == 0) {
            func_808945EC(arg0);
        } else {
            func_80893A9C(arg0, arg1);
        }
    }
    arg0->shape.rot.y += (s32) (arg0->speedXZ * 768.0f);
}

void func_8089595C(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    sp2C = randPlusMinusPoint5Scaled(20.0f) + arg0->world.pos.x;
    sp30 = arg0->world.pos.y + 15.0f;
    sp34 = randPlusMinusPoint5Scaled(20.0f) + arg0->world.pos.z;
    func_800B0DE0(arg1, (Vec3f *) &sp2C, &D_801D15B0, &D_80896B44, &D_80896B3C, &D_80896B40, (s16) 0x1F4, (s16) 0x32);
}

void func_80895A10(EnTite *arg0) {
    s16 sp2A;
    s32 phi_v0;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000A14, 2.0f, 0.0f, 0.0f, (u8) 0, 4.0f);
    arg0->actor.speedXZ = 0.0f;
    sp2A = Rand_S16Offset(0x14, 0x14);
    phi_v0 = 1;
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0 = -1;
    }
    arg0->actionFunc = func_80895AC0;
    arg0->unk_2BC = phi_v0 * sp2A;
}

void func_80895AC0(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 7.0f) != 0) {
        if (Rand_ZeroOne() < 0.25f) {
            func_8089595C(arg0, arg1);
        }
        Audio_PlayActorSound2(arg0, 0x386FU);
    }
    temp_a0_2 = arg0[2].world.rot.z;
    if ((temp_a0_2 == 1) || (temp_a0_2 == -1)) {
        temp_a1 = &arg0->home;
        if ((arg0->bgCheckFlags & 8) != 0) {
            temp_v1 = arg0->shape.rot.y - arg0->wallYaw;
            phi_v0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_v0 = -(s32) temp_v1;
            }
            if (phi_v0 >= 0x3001) {
                arg0[2].world.rot.z = (phi_v0 >> 9) * temp_a0_2;
            }
        } else {
            sp24 = (SkelAnime *) temp_a1;
            if (Actor_XZDistanceToPoint(arg0, (Vec3f *) temp_a1) < 200.0f) {
                temp_v1_2 = arg0->shape.rot.y - Actor_YawToPoint(arg0, (Vec3f *) temp_a1);
                phi_v0_2 = (s32) temp_v1_2;
                if ((s32) temp_v1_2 < 0) {
                    phi_v0_2 = -(s32) temp_v1_2;
                }
                if (phi_v0_2 >= 0x2001) {
                    arg0[2].world.rot.z *= phi_v0_2 >> 9;
                }
            }
        }
    }
    if ((arg0->xzDistToPlayer < 240.0f) && (Player_GetMask(arg1) != 0x10)) {
        func_8089408C(arg0, arg1);
        return;
    }
    temp_a0_3 = arg0[2].world.rot.z;
    if ((s32) temp_a0_3 > 0) {
        arg0[2].world.rot.z = temp_a0_3 - 1;
        arg0->shape.rot.y += 0x100;
        return;
    }
    if ((s32) temp_a0_3 < 0) {
        arg0[2].world.rot.z = temp_a0_3 + 1;
        arg0->shape.rot.y += -0x100;
        return;
    }
    func_80895CB0(arg0);
}

void func_80895CB0(Actor *arg0) {
    arg0->unk_160 = 1.0f;
    arg0->speedXZ = 1.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    arg0 = arg0;
    arg0[2].world.rot.z = Rand_S16Offset(0x14, 0x14);
    arg0[2].world.pos.z = func_80895D08;
}

void func_80895D08(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 7.0f) != 0) {
        if (Rand_ZeroOne() < 0.5f) {
            func_8089595C(arg0, arg1);
        }
        Audio_PlayActorSound2(arg0, 0x386FU);
    }
    if ((arg0->xzDistToPlayer < 240.0f) && (Player_GetMask(arg1) != 0x10)) {
        func_8089408C(arg0, arg1);
        return;
    }
    arg0[2].world.rot.z += -1;
    if (arg0[2].world.rot.z == 0) {
        func_80895A10((EnTite *) arg0);
    }
}

void func_80895DE8(Actor *arg0) {
    arg0->unk_3BD = (u8) (arg0->unk_3BD & 0xFFFE);
    arg0->shape.shadowDraw = func_800B3FC0;
    arg0[2].world.pos.z = func_80895E28;
    arg0->unk_160 = 1.0f;
    arg0->speedXZ = 0.0f;
}

void func_80895E28(Actor *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    f32 temp_f10;
    s16 temp_a0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    arg0->shape.rot.y += 0x1E00;
    temp_f10 = (Math_SinS(arg0->shape.rot.y) * 25.0f) + arg0->world.pos.x;
    sp44 = temp_f10;
    sp48 = arg0->world.pos.y + 15.0f;
    sp4C = (Math_CosS(arg0->shape.rot.y) * 25.0f) + arg0->world.pos.z;
    temp_a0 = arg0->shape.rot.y - 0x4000;
    sp36 = temp_a0;
    sp38 = 2.0f * Math_SinS(temp_a0);
    sp3C = 3.0f;
    sp40 = 2.0f * Math_CosS(temp_a0);
    func_800B0DE0(arg1, (Vec3f *) &sp44, (Vec3f *) &sp38, &D_80896B44, &D_80896B3C, &D_80896B40, (s16) 0x1F4, (s16) 0x32);
    sp44 = (2.0f * arg0->world.pos.x) - temp_f10;
    sp38 *= -1.0f;
    sp4C = (2.0f * arg0->world.pos.z) - sp4C;
    sp40 *= -1.0f;
    func_800B0DE0(arg1, (Vec3f *) &sp44, (Vec3f *) &sp38, &D_80896B44, &D_80896B3C, &D_80896B40, (s16) 0x1F4, (s16) 0x32);
    if (Math_StepToF(arg0 + 0xC4, 0.0f, 200.0f) != 0) {
        arg0->flags |= 1;
        arg0->unk_3BD = (u8) (arg0->unk_3BD | 1);
        arg0->world.rot.y = arg0->shape.rot.y;
        func_808945EC(arg0);
    }
}

void func_80895FF8(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk_3BD;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_3BD = (u8) (temp_v0 & 0xFFFD);
        arg0->unk_3BC = (u8) (arg0->unk_3BC & 0xFFFD);
        if (arg0->unk_3C0 == 0xC) {
            func_808956FC(arg0);
            func_800BE568(arg0, &arg0[2].child);
            return;
        }
        func_800BE258(arg0, (void *) &arg0[2].draw);
        if ((arg0->unk_2BB != 0xA) || ((*arg0->unk_3E8 & 0xDB0B3) == 0)) {
            func_80893E54(arg0, arg1);
            if (arg0->shape.yOffset < 0.0f) {
                func_80895DE8(arg0);
                return;
            }
            if (Actor_ApplyDamage(arg0) == 0) {
                Enemy_StartFinishingBlow(arg1, arg0);
            }
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            if (temp_v0_2 != 0xF) {
                if (temp_v0_2 == 5) {
                    arg0[2].world.rot.z = 0x28;
                    func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    arg0->unk_2BB = 0x20U;
                    arg0[2].focus.pos.y = 0.5f;
                    arg0[2].focus.pos.x = 2.0f;
                    func_80894DD0(arg0);
                    return;
                }
                if (temp_v0_2 == 1) {
                    arg0[2].world.rot.z = 0x28;
                    func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    func_80894DD0(arg0);
                    return;
                }
                if (temp_v0_2 == 3) {
                    func_80893DD4(arg0);
                    if (arg0->colChkInfo.health == 0) {
                        arg0[2].world.rot.z = 3;
                        arg0->unk_3BD = (u8) (arg0->unk_3BD & 0xFFFE);
                    }
                    func_80894DD0(arg0);
                    return;
                }
                if (temp_v0_2 == 2) {
                    arg0->unk_2BB = 0U;
                    arg0[2].focus.pos.x = 4.0f;
                    arg0[2].focus.pos.y = 0.5f;
                } else if (temp_v0_2 == 4) {
                    arg0->unk_2BB = 0x14U;
                    arg0[2].focus.pos.x = 4.0f;
                    arg0[2].focus.pos.y = 0.5f;
                    Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_3D2, (f32) arg0->unk_3D4, (f32) arg0->unk_3D6, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                }
                func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
                if (arg0->colChkInfo.health == 0) {
                    func_80895020(arg0, arg1);
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x386DU);
                if (arg0->unk_2B9 == 0) {
                    func_80894B2C(arg0);
                    arg0->unk_3BD = (u8) (arg0->unk_3BD & 0xFFFE);
                    return;
                }
                func_808955E4(arg0);
                return;
            }
            /* Duplicate return node #37. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return;
    }
    if (((arg0->bgCheckFlags & 1) != 0) && ((temp_v0 & 1) != 0) && (arg0->colChkInfo.health != 0) && (arg1->actorCtx.unk2 != 0) && (arg0->xyzDistToPlayerSq < 40000.0f)) {
        arg0->flags |= 1;
        if (arg0->shape.yOffset < 0.0f) {
            arg0->shape.yOffset = 0.0f;
            arg0->shape.shadowDraw = func_800B3FC0;
        }
        if (arg0->unk_2B9 != 0) {
            func_808955E4(arg0);
            return;
        }
        func_808952EC(arg0);
        /* Duplicate return node #37. Try simplifying control flow for better match */
    }
}

void func_808963B4(EnTite *arg0, GlobalContext *arg1) {
    f32 sp4C;
    ? sp48;
    s32 temp_s0;
    s32 temp_v0_2;
    u16 temp_v0;
    Vec3f *phi_s1;
    s32 phi_s0;

    temp_v0 = arg0->actor.bgCheckFlags;
    phi_s1 = arg0 + 0x30C;
    phi_s0 = 0x3C;
    if ((temp_v0 & 0x40) != 0) {
        do {
            Math_Vec3f_Copy((Vec3f *) &sp48, phi_s1);
            sp4C = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
            EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp48, 0, 0xDC, (s16) 0);
            temp_s0 = phi_s0 + 0xC;
            phi_s1 = &phi_s1[1];
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x6C);
        return;
    }
    if ((temp_v0 & 0x20) != 0) {
        temp_v0_2 = arg1->gameplayFrames & 7;
        if (((temp_v0_2 & 1) == 0) && (arg0->actor.yDistToWater < 10.0f)) {
            Math_Vec3f_Copy((Vec3f *) &sp48, arg0 + ((temp_v0_2 >> 1) * 0xC) + 0x30C);
            sp4C = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
            EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp48, 0, 0xDC, (s16) 0);
        }
    }
}

void EnTite_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    EnTite *this = (EnTite *) thisx;

    func_80895FF8((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    if (func_808951B8 != this->actionFunc) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 25.0f, 40.0f, 20.0f, this->unk_2C0);
        func_808963B4(this, globalCtx);
        if ((this->actor.bgCheckFlags & 1) != 0) {
            func_800BE3D0(this, this->actor.shape.rot.y, &this->actor.shape);
            if (this->unk_2B9 != 0) {
                this->actor.shape.rot.z += 0x8000;
            }
        } else {
            Math_ScaledStepToS((s16 *) &this->actor.shape, 0, 0x3E8);
            if (this->unk_2B9 == 0) {
                Math_ScaledStepToS(&this->actor.shape.rot.z, 0, 0x3E8);
                temp_f0 = this->actor.shape.yOffset;
                if (temp_f0 > 0.0f) {
                    this->actor.shape.yOffset = temp_f0 - 400.0f;
                }
            }
        }
        Actor_SetHeight((Actor *) this, this->actor.scale.y * 2000.0f);
        this->unk_3AC.dim.worldSphere.center.y = (s32) this->actor.world.pos.y + 0xF;
        this->unk_3AC.dim.worldSphere.center.x = (s16) (s32) this->actor.world.pos.x;
        this->unk_3AC.dim.worldSphere.center.z = (s16) (s32) this->actor.world.pos.z;
        if ((this->unk_3AC.base.acFlags & 1) != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_3AC);
        }
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_3AC);
        if (this->unk_2C4 > 0.0f) {
            if (this->unk_2BB != 0xA) {
                Math_StepToF(&this->unk_2C4, 0.0f, 0.05f);
                temp_f0_2 = (this->unk_2C4 + 1.0f) * 0.25f;
                this->unk_2C8 = temp_f0_2;
                if (temp_f0_2 > 0.5f) {
                    this->unk_2C8 = 0.5f;
                    return;
                }
                this->unk_2C8 = this->unk_2C8;
                return;
            }
            if (Math_StepToF(&this->unk_2CC, 0.5f, 0.0125f) == 0) {
                func_800B9010((Actor *) this, 0x20B2U);
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

s32 func_80896750(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg5->unk_2BA == -1) {
        arg5->unk_3A8 = (Gfx *) *arg2;
        *arg2 = NULL;
    }
    return 0;
}

void func_80896788(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp38;
    Gfx *sp30;
    s32 sp28;
    void *sp24;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    MtxF *temp_v0_4;
    s32 temp_lo;
    s8 *temp_v1;
    s8 *temp_v1_2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    void *temp_a2;

    temp_v0 = arg4->unk_2BA;
    if (temp_v0 == 0) {
        temp_v0_2 = *(&D_80896B70 + arg1);
        if ((temp_v0_2 != -1) && (temp_lo = temp_v0_2 * 0xC, temp_a2 = arg4 + temp_lo, sp24 = temp_a2, sp28 = temp_lo, SysMatrix_GetStateTranslation(temp_a2 + 0x2D0), ((temp_lo < 0xC) == 0))) {
            SysMatrix_GetStateTranslationAndScaledX(2500.0f, temp_a2 + 0x300);
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v0 > 0) {
        temp_v1 = arg1 + &D_80896B8C;
        temp_v0_3 = *temp_v1;
        if (temp_v0_3 != -1) {
            sp28 = (s32) temp_v1;
            SysMatrix_GetStateTranslation(arg4 + (temp_v0_3 * 0xC) + 0x2D0);
        }
        if ((arg1 + &D_80896B8C) == &D_80896BA4) {
            arg4->unk_2BA = -1;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    temp_v1_2 = arg1 + &D_80896B8C;
    if (*temp_v1_2 != -1) {
        sp28 = (s32) temp_v1_2;
        sp38 = *arg0;
        temp_v0_4 = SysMatrix_GetCurrentState();
        temp_v0_4->mf[3][0] = (arg4 + (*temp_v1_2 * 0xC))->unk_2D0;
        temp_v0_4->mf[3][1] = (arg4 + (*temp_v1_2 * 0xC))->unk_2D4;
        temp_v0_4->mf[3][2] = (arg4 + (*temp_v1_2 * 0xC))->unk_2D8;
        SysMatrix_InsertZRotation_s(arg4->world.rot.z, 1);
        temp_v0_5 = sp38->polyOpa.p;
        sp38->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp30 = temp_v0_5;
        sp30->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_6 = sp38->polyOpa.p;
        sp38->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = arg4[2].parent;
    }
}

void EnTite_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    GraphicsContext *temp_t0;
    EnTite *this = (EnTite *) thisx;

    temp_t0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_t0->polyOpa.p;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) &sSetupDL[150];
    if (this->actor.params == -2) {
        temp_v0[1].words.w0 = 0xDB060020;
        temp_v0[1].words.w1 = (u32) D_80896B24->unk_0;
        temp_v0[2].words.w0 = 0xDB060024;
        temp_v0[2].words.w1 = (u32) D_80896B24[1];
        temp_v0[3].words.w0 = 0xDB060028;
        temp_v0[3].words.w1 = (u32) D_80896B24[2];
    } else {
        temp_v0[1].words.w0 = 0xDB060020;
        temp_v0[1].words.w1 = (u32) D_80896B24[3];
        temp_v0[2].words.w0 = 0xDB060024;
        temp_v0[2].words.w1 = (u32) D_80896B24[4];
        temp_v0[3].words.w0 = 0xDB060028;
        temp_v0[3].words.w1 = (u32) D_80896B24[5];
    }
    temp_t0->polyOpa.p = &temp_v0[4];
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80896750, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80896788, (Actor *) this);
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2D0, 9, this->unk_2C8, this->unk_2CC, this->unk_2C4, (u8) (s32) this->unk_2BB);
}
