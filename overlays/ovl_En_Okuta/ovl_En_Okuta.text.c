typedef struct EnOkuta {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnOkuta *, GlobalContext *);
    /* 0x18C */ u8 unk_18C;                         /* inferred */
    /* 0x18D */ char pad_18D[0x1];
    /* 0x18E */ s16 unk_18E;                        /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ Vec3s unk_192;                      /* inferred */
    /* 0x198 */ char pad_198[0x5A];                 /* maybe part of unk_192[16]? */
    /* 0x1F2 */ Vec3s unk_1F2;                      /* inferred */
    /* 0x1F8 */ char pad_1F8[0x5C];                 /* maybe part of unk_1F2[16]? */
    /* 0x254 */ f32 unk_254;                        /* inferred */
    /* 0x258 */ f32 unk_258;                        /* inferred */
    /* 0x25C */ f32 unk_25C;                        /* inferred */
    /* 0x260 */ f32 unk_260;                        /* inferred */
    /* 0x264 */ char pad_264[0x4];
    /* 0x268 */ f32 unk_268;                        /* inferred */
    /* 0x26C */ char pad_26C[0x4];
    /* 0x270 */ Vec3f unk_270;                      /* inferred */
    /* 0x27C */ char pad_27C[0x6C];                 /* maybe part of unk_270[10]? */
    /* 0x2E8 */ ColliderCylinder unk_2E8;           /* inferred */
} EnOkuta;                                          /* size = 0x334 */

struct _mips2c_stack_EnOkuta_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnOkuta_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnOkuta_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ CollisionContext *sp30;              /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ WaterBox *sp3C;                      /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnOkuta_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8086E084 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8086E0F0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8086E168 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8086E214 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8086E27C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8086E2C0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8086E378 {};              /* size 0x0 */

struct _mips2c_stack_func_8086E3B8 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8086E4FC {};              /* size 0x0 */

struct _mips2c_stack_func_8086E52C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086E5E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086E658 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8086E7A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086E7E8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8086E8E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086E948 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8086EAE0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (*sp24)(EnOkuta *, GlobalContext *); /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8086EC00 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x6];                    /* maybe part of sp28[2]? */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8086EE8C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8086EF14 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8086EF90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086EFE8 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_8086F2FC {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8086F434 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086F4B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086F4F4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8086F57C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8086F694 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];                    /* maybe part of sp4A[3]? */
    /* 0x50 */ Actor *sp50;                         /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8086F8FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086FCA4 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808700C0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 *sp2C;                           /* inferred */
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x18];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80870254 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808704DC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808705C8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

s32 func_800C9D50(CollisionContext *, CollisionPoly *, u8); /* extern */
void func_8086E084(Actor *arg0);                    /* static */
void func_8086E0F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8086E168(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086E214(Vec3f *arg0, Vec3f *arg1, s16 arg2, GlobalContext *arg3, ?, GlobalContext *); /* static */
void func_8086E27C(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086E2C0(EnOkuta *arg0, GlobalContext *arg1); /* static */
f32 func_8086E378(EnOkuta *arg0);                   /* static */
void func_8086E3B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8086E4FC(EnOkuta *arg0);                  /* static */
void func_8086E5E8(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086E7A8(EnOkuta *arg0);                  /* static */
void func_8086E8E8(EnOkuta *arg0);                  /* static */
void func_8086EAE0(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086EE8C(Actor *arg0);                    /* static */
void func_8086EF90(EnOkuta *arg0);                  /* static */
void func_8086F2FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8086F4F4(EnOkuta *arg0);                  /* static */
void func_8086F8FC(EnOkuta *arg0);                  /* static */
void func_8086FCA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808700C0(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_80870254(Vec3s *arg0, f32 arg1, f32 *arg2, Vec3s *); /* static */
s32 func_808704DC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_808705C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0600044C;
extern Gfx D_06003250;
extern SkeletonHeader D_060033D0;
extern AnimationHeader D_06003958;
extern AnimationHeader D_06003B24;
extern AnimationHeader D_06003EE4;
extern AnimationHeader D_06004204;
extern AnimationHeader D_0600466C;
static ? D_80870870;                                /* unable to generate initializer */
static ColliderCylinderInit D_808708A0 = {
    {0xA, 0x11, 9, 0x39, 0x20, 1},
    {4, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
    {0xD, 0x14, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_808708CC;             /* type too large by 12; unable to generate initializer */
static s16 D_808708EC = 0x14;
static s16 D_808708EE[5] = {0x28, 0xFFE2, 0, 0, 0};
static CollisionCheckInfoInit D_808708F8 = {4, 0xF, 0x3C, 0x64};
static DamageTable D_80870900 = {
    {
        0,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        0,
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
static InitChainEntry D_80870920[2];                /* unable to generate initializer */
static Color_RGBA8 D_80870928 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_8087092C = {0x96, 0x96, 0x96, 0xFF};
static Vec3f D_80870930 = {0.0f, -0.5f, 0.0f};
static Color_RGBA8 D_8087093C = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80870940 = {0x96, 0x96, 0x96, 0};
static ? D_80870944;                                /* unable to generate initializer */
static Vec3f D_80870954[3] = {
    {1500.0f, 1000.0f, 0.0f},
    {-1500.0f, 1000.0f, 0.0f},
    {0.0f, 1500.0f, -2000.0f},
};
static ? D_80870978;                                /* unable to generate initializer */

void EnOkuta_Init(Actor *thisx, GlobalContext *globalCtx) {
    WaterBox *sp3C;
    f32 sp38;
    s32 sp34;
    CollisionContext *sp30;
    CollisionContext *temp_a0;
    s16 temp_t6;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_t4;
    EnOkuta *this = (EnOkuta *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80870920);
    temp_t6 = this->actor.params;
    this->actor.params &= 0xFF;
    temp_v0 = this->actor.params;
    this->unk_190 = ((s32) temp_t6 >> 8) & 0xFF;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        SkelAnime_Init(globalCtx, &this->unk_144, &D_060033D0, &D_0600466C, &this->unk_192, &this->unk_1F2, 0x10);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_2E8, (Actor *) this, &D_808708CC);
        CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80870900, &D_808708F8);
        temp_v0_2 = this->unk_190;
        temp_a0 = &globalCtx->colCtx;
        if ((temp_v0_2 == 0xFF) || (temp_v0_2 == 0)) {
            this->unk_190 = 1;
        }
        sp30 = temp_a0;
        this->actor.floorHeight = func_800C411C(temp_a0, &this->actor.floorPoly, &sp34, (Actor *) this, (Vec3f *) &this->actor.world);
        if ((func_800CA1E8(globalCtx, sp30, this->actor.world.pos.x, this->actor.world.pos.z, &sp38, &sp3C) == 0) || (sp38 <= this->actor.floorHeight)) {
            Actor_MarkForDeath((Actor *) this);
        } else {
            this->actor.home.pos.y = sp38;
        }
        if (this->actor.params == 1) {
            this->unk_2E8.base.colType = 0xC;
            this->unk_2E8.base.acFlags |= 4;
        }
        this->actor.targetMode = 5;
        func_8086E4FC(this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 1100.0f, func_800B3FC0, 18.0f);
    temp_t4 = this->actor.flags & ~1;
    this->actor.flags = temp_t4;
    this->actor.flags = temp_t4 | 0x10;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_2E8, (Actor *) this, &D_808708A0);
    func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 6U);
    this->unk_18E = 0x16;
    this->actor.shape.rot.y = 0;
    this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
    this->actor.shape.rot.x = 0;
    this->actionFunc = func_8086F694;
    this->actor.update = func_808700C0;
    this->actor.speedXZ = 10.0f;
}

void EnOkuta_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOkuta *this = (EnOkuta *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_2E8);
}

void func_8086E084(Actor *arg0) {
    arg0->unk_18C = 0xA;
    arg0->unk_258 = 0.6f;
    arg0[1].focus.rot.y = 0x50;
    arg0->unk_2FC = 3;
    arg0->unk_25C = 0.90000004f;
    arg0[1].prevPos.z = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_8086E0F0(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_18C == 0xA) {
        arg0->unk_18C = 0U;
        arg0[1].prevPos.z = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x270), 0xA, 2, 0.3f, 0.2f);
        arg0->unk_2FC = 0;
    }
}

void func_8086E168(EnOkuta *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    do {
        EffectSsBubble_Spawn(arg1, arg0 + 0x24, -10.0f, 10.0f, 30.0f, 0.25f);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xA);
}

void func_8086E214(Vec3f *arg0, Vec3f *arg1, s16 arg2, GlobalContext *arg3) {
    func_800B0DE0(arg3, arg0, arg1, &D_801D15B0, &D_80870928, &D_8087092C, (s16) 0x190, (s16) (s32) arg2);
}

void func_8086E27C(EnOkuta *arg0, GlobalContext *arg1) {
    EffectSsGSplash_Spawn(arg1, arg0 + 8, NULL, NULL, (s16) 0, (s16) 0x514);
}

void func_8086E2C0(EnOkuta *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a1;
    f32 temp_f0;

    temp_f0 = arg0->actor.world.pos.y - arg0->actor.home.pos.y;
    if ((((u32) arg1->gameplayFrames % 7U) == 0) && (temp_f0 < 50.0f) && (temp_f0 >= -20.0f)) {
        temp_a1 = &sp28;
        sp28 = arg0->actor.world.pos.x;
        sp2C = arg0->actor.home.pos.y;
        sp30 = arg0->actor.world.pos.z;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0xFA, 0x28A, (s16) 0);
    }
}

f32 func_8086E378(EnOkuta *arg0) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = arg0->actor.home.pos.y;
    temp_f2 = arg0->actor.world.pos.y + arg0->actor.yDistToPlayer + 60.0f;
    if (temp_f12 < temp_f2) {
        return temp_f12;
    }
    return temp_f2;
}

void func_8086E3B8(Actor *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f8;

    sp3C = Math_SinS(arg0->shape.rot.y);
    temp_f0 = Math_CosS(arg0->shape.rot.y);
    temp_f8 = 25.0f * temp_f0;
    sp4C = arg0->world.pos.x + (25.0f * sp3C);
    sp50 = arg0->world.pos.y - 6.0f;
    sp54 = arg0->world.pos.z + temp_f8;
    sp38 = temp_f0;
    if (Actor_Spawn(arg1 + 0x1CA0, arg1, 8, sp4C, sp50, sp54, (s16) (s32) arg0->shape.rot.x, (s16) (s32) arg0->shape.rot.y, (s16) (s32) arg0->shape.rot.z, (s16) (arg0->params + 0x10)) != 0) {
        temp_a0 = &sp4C;
        temp_a1 = &sp40;
        sp4C = arg0->world.pos.x + (40.0f * sp3C);
        sp54 = arg0->world.pos.z + (40.0f * sp38);
        sp40 = 1.5f * sp3C;
        sp44 = 0.0f;
        sp48 = 1.5f * sp38;
        sp50 = arg0->world.pos.y;
        func_8086E214((bitwise Vec3f *) 1.5f, (bitwise Vec3f *) sp3C, (s16) temp_a0, (GlobalContext *) temp_a1, 0x14, arg1);
    }
    Audio_PlayActorSound2(arg0, 0x387EU);
}

void func_8086E4FC(EnOkuta *arg0) {
    arg0->actor.draw = NULL;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_8086E52C;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y;
}

void func_8086E52C(EnOkuta *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;
    s32 phi_v1;

    temp_f0 = this->actor.xzDistToPlayer;
    this->actor.world.pos.y = this->actor.home.pos.y;
    if ((temp_f0 < 480.0f) && (temp_f0 > 200.0f)) {
        if (this->actor.params == 0) {
            func_8086E5E8();
            return;
        }
        temp_v0 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 < 0x4000) && (globalCtx->unk_1887C == 0)) {
            func_8086E5E8();
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_8086E5E8(EnOkuta *arg0, GlobalContext *arg1) {
    EnOkuta *temp_a2;

    temp_a2 = arg0;
    temp_a2->actor.draw = EnOkuta_Draw;
    temp_a2->actor.flags |= 1;
    temp_a2->actor.shape.rot.y = temp_a2->actor.yawTowardsPlayer;
    arg0 = temp_a2;
    SkelAnime_ChangeAnimDefaultStop(temp_a2 + 0x144, &D_0600466C);
    func_8086E168(arg0, arg1);
    arg0->actionFunc = func_8086E658;
}

void func_8086E658(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;

    temp_a0 = &this->unk_144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if ((this->actor.xzDistToPlayer < 160.0f) && (this->actor.params == 0)) {
            func_8086E7A8(this);
        } else {
            func_8086E8E8(this);
        }
    } else {
        temp_f0 = this->unk_144.animCurrentFrame;
        if (temp_f0 <= 4.0f) {
            Actor_SetScale((Actor *) this, temp_f0 * 0.25f * 0.01f);
        } else if (func_801378B8(sp20, 5.0f) != 0) {
            Actor_SetScale((Actor *) this, 0.01f);
        }
    }
    if (func_801378B8(sp20, 2.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38C2U);
    }
    if (func_801378B8(sp20, 12.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38C3U);
    }
    if ((func_801378B8(sp20, 3.0f) != 0) || (func_801378B8(sp20, 15.0f) != 0)) {
        func_8086E27C(this, globalCtx);
    }
}

void func_8086E7A8(EnOkuta *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06003B24);
    arg0->actionFunc = func_8086E7E8;
}

void func_8086E7E8(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;

    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 30.0f);
    temp_a0 = &this->unk_144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38C5U);
        func_8086E168(this, globalCtx);
        func_8086E4FC(this);
    } else {
        temp_f0 = this->unk_144.animCurrentFrame;
        if (temp_f0 >= 4.0f) {
            Actor_SetScale((Actor *) this, (6.0f - temp_f0) * 0.5f * 0.01f);
        }
    }
    if (func_801378B8(sp20, 2.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38C4U);
    }
    if (func_801378B8(sp20, 4.0f) != 0) {
        func_8086E27C(this, globalCtx);
    }
}

void func_8086E8E8(EnOkuta *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06003EE4);
    if (func_8086EC00 == arg0->actionFunc) {
        arg0->unk_18E = 8;
    } else {
        arg0->unk_18E = 0;
    }
    arg0->actionFunc = func_8086E948;
}

void func_8086E948(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    s32 phi_v1;

    if (this->actor.params == 0) {
        this->actor.world.pos.y = this->actor.home.pos.y;
    } else {
        this->actor.world.pos.y = func_8086E378(this);
    }
    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_18E;
        if (temp_v0 != 0) {
            this->unk_18E = temp_v0 - 1;
        }
    }
    if (func_801378B8(sp2C, 0.5f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38C1U);
    }
    temp_f0 = this->actor.xzDistToPlayer;
    if ((temp_f0 > 560.0f) || ((temp_f0 < 160.0f) && (this->actor.params == 0))) {
        func_8086E7A8(this);
        return;
    }
    temp_v0_2 = Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xE38, (s16) 0x38E);
    if (temp_v0_2 < 0) {
        phi_v1 = -(s32) (s16) temp_v0_2;
    } else {
        phi_v1 = (s32) (s16) temp_v0_2;
    }
    if ((phi_v1 < 0x38E) && (((temp_v0_3 = this->actor.params, (temp_v0_3 == 0)) && (this->unk_18E == 0) && (this->actor.yDistToPlayer < 120.0f)) || ((temp_v0_3 == 1) && ((this->unk_18E == 0) || (this->actor.xzDistToPlayer < 150.0f))))) {
        func_8086EAE0(this, globalCtx);
    }
}

void func_8086EAE0(EnOkuta *arg0, GlobalContext *arg1) {
    void (*sp24)(EnOkuta *, GlobalContext *);
    f32 temp_f0;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600044C);
    if (func_8086EC00 != arg0->actionFunc) {
        if (arg0->actor.params == 0) {
            arg0->unk_18E = arg0->unk_190;
        } else {
            arg0->unk_18E = (s16) (s32) (((560.0f - arg0->actor.xzDistToPlayer) * 0.005f) + 1.0f);
        }
    }
    if (arg0->actor.params == 0) {
        temp_f0 = arg0->actor.yDistToPlayer + 20.0f;
        arg0->unk_260 = temp_f0;
        if (temp_f0 < 10.0f) {
            arg0->unk_260 = 10.0f;
        } else {
            arg0->unk_260 = arg0->unk_260;
        }
        if (arg0->unk_260 > 50.0f) {
            sp24 = func_8086EC00;
            func_8086E27C(arg0, arg1);
            Audio_PlayActorSound2((Actor *) arg0, 0x38C2U);
        }
    }
    arg0->actionFunc = func_8086EC00;
}

void func_8086EC00(EnOkuta *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp32;
    SkelAnime *sp28;
    Actor *temp_v0_2;
    SkelAnime *temp_a0;
    f32 *temp_a1;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s32 temp_v0_3;
    s16 phi_v0;
    s16 phi_v1;

    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x71C);
    temp_a0 = &this->unk_144;
    sp28 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = this->unk_18E;
        if (temp_v0 != 0) {
            this->unk_18E = temp_v0 - 1;
        }
        if (this->unk_18E == 0) {
            if ((this->actor.params != 1) || (this->actor.xzDistToPlayer > 150.0f)) {
                func_8086E8E8(this);
            } else {
                func_8086EAE0(this, globalCtx);
            }
        } else {
            func_8086EAE0(this, globalCtx);
        }
    } else {
        if (this->actor.params == 0) {
            temp_f2 = this->unk_144.animCurrentFrame;
            if (temp_f2 < 13.0f) {
                this->actor.world.pos.y = (sin_rad(0.2617889f * temp_f2) * this->unk_260) + this->actor.home.pos.y;
            }
            if ((this->unk_260 > 50.0f) && (func_801378B8(sp28, 13.0f) != 0)) {
                func_8086E27C(this, globalCtx);
                Audio_PlayActorSound2((Actor *) this, 0x38C3U);
            }
        } else {
            temp_f2_2 = this->unk_144.animCurrentFrame;
            this->actor.world.pos.y = func_8086E378(this);
            if (temp_f2_2 < 13.0f) {
                temp_v0_2 = globalCtx->actorCtx.actorList[2].first;
                temp_a1 = &sp34;
                sp34 = temp_v0_2->world.pos.x;
                sp38 = temp_v0_2->world.pos.y + 20.0f;
                sp44 = temp_f2_2;
                sp3C = temp_v0_2->world.pos.z;
                temp_v0_3 = Actor_PitchToPoint((Actor *) this, (Vec3f *) temp_a1);
                if (temp_v0_3 < -0x2AAA) {
                    phi_v0 = -0x2AAA;
                } else {
                    phi_v1 = (s16) temp_v0_3;
                    if ((s32) (s16) temp_v0_3 > 0) {
                        phi_v1 = 0;
                    }
                    phi_v0 = phi_v1;
                }
                sp32 = phi_v0;
                this->actor.shape.rot.x = (s16) (s32) (sin_rad(0.2617889f * temp_f2_2) * (f32) phi_v0);
            }
        }
        if (func_801378B8(sp28, 6.0f) != 0) {
            func_8086E3B8((Actor *) this, globalCtx);
        }
    }
    if ((this->actor.params == 0) && (this->actor.xzDistToPlayer < 160.0f)) {
        func_8086E7A8(this);
    }
}

void func_8086EE8C(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06004204, -5.0f);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0xB);
    arg0->unk_2F9 = (u8) (arg0->unk_2F9 & 0xFFFE);
    Actor_SetScale(arg0, 0.01f);
    Audio_PlayActorSound2(arg0, 0x38C6U);
    arg0[1].focus.pos.z = (bitwise f32) func_8086EF14;
}

void func_8086EF14(EnOkuta *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) {
        if (this->actor.colChkInfo.health == 0) {
            func_8086EF90(this);
        } else {
            this->unk_2E8.base.acFlags |= 1;
            func_8086E8E8(this);
        }
    }
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 5.0f);
}

void func_8086EF90(EnOkuta *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06003958, -3.0f);
    arg0->unk_18E = 0;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_8086EFE8;
}

void func_8086EFE8(EnOkuta *this, GlobalContext *globalCtx) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    PosRot *temp_s1;
    SkelAnime *temp_s0;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_s0_2;
    s32 phi_s0;

    temp_s0 = &this->unk_144;
    if (SkelAnime_FrameUpdateMatrix(temp_s0) != 0) {
        this->unk_18E += 1;
    }
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 5.0f);
    temp_a0 = &sp70;
    temp_a1 = &sp7C;
    if (this->unk_18E == 5) {
        sp70 = this->actor.world.pos.x;
        sp74 = this->actor.world.pos.y + 40.0f;
        sp7C = 0.0f;
        sp84 = 0.0f;
        sp80 = -0.5f;
        sp78 = this->actor.world.pos.z;
        func_8086E214((Vec3f *) temp_a0, (Vec3f *) temp_a1, -0x14, globalCtx);
        Audio_PlayActorSound2((Actor *) this, 0x38C7U);
    }
    if (func_801378B8(temp_s0, 15.0f) != 0) {
        func_8086E27C(this, globalCtx);
        Audio_PlayActorSound2((Actor *) this, 0x38C3U);
    }
    temp_v0 = this->unk_18E;
    if ((s32) temp_v0 < 3) {
        Actor_SetScale((Actor *) this, (((f32) temp_v0 * 0.25f) + 1.0f) * 0.01f);
        return;
    }
    if ((s32) temp_v0 < 6) {
        Actor_SetScale((Actor *) this, (1.5f - ((f32) (temp_v0 - 2) * 0.2333f)) * 0.01f);
        return;
    }
    if ((s32) temp_v0 < 0xB) {
        Actor_SetScale((Actor *) this, (((f32) (temp_v0 - 5) * 0.04f) + 0.8f) * 0.01f);
        return;
    }
    if (Math_StepToF((f32 *) &this->actor.scale, 0.0f, 0.0005f) != 0) {
        temp_s1 = &this->actor.world;
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) temp_s1, 0x1E, 0x38C5U);
        Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) temp_s1, 0xA0);
        phi_s0 = 0;
        do {
            sp7C = (Rand_ZeroOne() - 0.5f) * 7.0f;
            sp80 = Rand_ZeroOne() * 7.0f;
            sp84 = (Rand_ZeroOne() - 0.5f) * 7.0f;
            EffectSsDtBubble_SpawnCustomColor(globalCtx, (Vec3f *) temp_s1, (Vec3f *) &sp7C, &D_80870930, &D_8087093C, &D_80870940, (s16) Rand_S16Offset(0x64, 0x32), (s16) 0x19, (s16) 0);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0x14);
        Actor_MarkForDeath((Actor *) this);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.z = temp_f0;
    this->actor.scale.y = temp_f0;
}

void func_8086F2FC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    u32 temp_t3;

    arg0[1].focus.rot.y = 0xA;
    func_800BCB70(arg0, 0x8000, 0x80FF, 0, (s16) 0xA);
    temp_v0 = Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x143, arg0->world.pos.x, arg0->world.pos.y + ((f32) arg0->unk_164->unk_2 * arg0->scale.y) + (25.0f * (bitwise f32) arg0[1].child), arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->home.rot.y, (s16) 0, 3);
    arg0->child = temp_v0;
    if (temp_v0 != 0) {
        temp_t3 = arg0->flags & ~1;
        arg0->flags = temp_t3;
        arg0->flags = temp_t3 | 0x10;
        temp_v0->cutscene = arg0->cutscene;
        arg0[1].focus.pos.z = (bitwise f32) func_8086F434;
        return;
    }
    func_8086E084(arg0);
    if (Actor_ApplyDamage(arg0) == 0) {
        Enemy_StartFinishingBlow(arg1, arg0);
        arg0[1].focus.rot.y = 3;
        arg0->unk_2F9 = (u8) (arg0->unk_2F9 & 0xFFFE);
    }
    arg0[1].focus.pos.z = (bitwise f32) func_8086F4B0;
}

void func_8086F434(EnOkuta *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    f32 *temp_a0;
    f32 temp_a1;

    temp_v0 = this->actor.child;
    this->actor.colorFilterTimer = 0xA;
    temp_a0 = &this->actor.world.pos.y;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        temp_a1 = this->actor.home.pos.y;
        this->actor.flags |= 1;
        this = this;
        if (Math_StepToF(temp_a0, temp_a1, 10.0f) != 0) {
            this->actor.flags &= -0x11;
            func_8086E8E8(this);
        }
    }
}

void func_8086F4B0(EnOkuta *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    if (this->unk_18E == 0) {
        func_8086E0F0();
        func_8086EE8C((Actor *) this);
    }
}

void func_8086F4F4(EnOkuta *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06004204, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06004204) - 3.0f, (u8) 2, -3.0f);
    arg0->unk_18E = 0x14;
    arg0->actionFunc = func_8086F57C;
}

void func_8086F57C(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    s16 temp_v0;

    this->unk_18E += -1;
    Math_ScaledStepToS((s16 *) &this->actor.shape, 0, 0x400);
    temp_a0 = &this->unk_144;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnim(sp34, &D_06004204, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06004204) - 3.0f, (u8) 2, -3.0f);
    }
    temp_v0 = this->unk_18E;
    if ((s32) temp_v0 < 0xA) {
        this->actor.shape.rot.y += (s32) (8192.0f * sin_rad((f32) temp_v0 * 0.15707964f));
    } else {
        this->actor.shape.rot.y += 0x2000;
    }
    if (this->unk_18E == 0) {
        func_8086E8E8(this);
    }
}

void func_8086F694(EnOkuta *this, GlobalContext *globalCtx) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Actor *sp50;
    ? sp48;
    f32 *temp_a1;
    f32 temp_f16;
    f32 temp_f2;
    u16 temp_v0;
    u8 temp_t6;
    u8 temp_v0_2;
    u8 temp_v0_3;

    this->unk_18E += -1;
    if ((s32) this->unk_18E < 0) {
        temp_f2 = this->actor.velocity.x;
        temp_f16 = this->actor.velocity.z;
        this->actor.velocity.y -= 0.5f;
        sp50 = globalCtx->actorCtx.actorList[2].first;
        this->actor.world.rot.x = Math_FAtan2F(sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)), this->actor.velocity.y);
    }
    temp_v0 = this->actor.bgCheckFlags;
    this->actor.home.rot.z += 0x1554;
    if (((temp_v0 & 8) != 0) || ((temp_v0 & 1) != 0) || ((temp_v0 & 0x10) != 0) || ((this->unk_2E8.base.atFlags & 2) != 0) || ((this->unk_2E8.base.acFlags & 2) != 0) || ((this->unk_2E8.base.ocFlags1 & 2) != 0) || (this->actor.floorHeight == -32000.0f)) {
        temp_a1 = &sp54;
        if ((globalCtx->actorCtx.actorList[2].first->unk_144 == 1) && (temp_v0_2 = this->unk_2E8.base.atFlags, ((temp_v0_2 & 2) != 0)) && ((temp_v0_2 & 0x10) != 0) && (temp_t6 = temp_v0_2 & 0xFFE9, ((temp_v0_2 & 4) != 0))) {
            this->unk_2E8.base.atFlags = temp_t6;
            this->unk_2E8.base.atFlags = temp_t6 | 8;
            this->unk_2E8.info.toucher.dmgFlags = 0x400000;
            this->unk_2E8.info.toucher.damage = 2;
            func_8018219C(globalCtx->actorCtx.actorList[2].first + 0xD04, (Vec3s *) &sp48, 0);
            this->actor.world.rot.y = sp4A + 0x8000;
            this->unk_18E = 0x16;
            return;
        }
        sp54 = this->actor.world.pos.x;
        sp58 = this->actor.world.pos.y + 11.0f;
        sp5C = this->actor.world.pos.z;
        EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) temp_a1, 6.0f, 0, (s16) 1, (s16) 2, (s16) 0xF, (s16) 5, (s16) 0xA, &D_06003250);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x14, 0x38C0U);
        temp_v0_3 = this->unk_2E8.base.atFlags;
        if (((temp_v0_3 & 2) != 0) && ((temp_v0_3 & 0x10) != 0) && ((temp_v0_3 & 4) == 0) && (this->actor.params == 0x11)) {
            func_800B8D98(globalCtx, (Actor *) this, 8.0f, this->actor.world.rot.y, 6.0f);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (this->unk_18E == -0x12C) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_8086F8FC(EnOkuta *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_v0;
    f32 phi_f4;
    f32 phi_f16;
    f32 phi_f16_2;

    temp_v0 = arg0->actionFunc;
    temp_f14 = arg0->unk_144.animCurrentFrame;
    if (func_8086E658 == temp_v0) {
        if (temp_f14 < 8.0f) {
            arg0->unk_26C = 1.0f;
            arg0->unk_268 = 1.0f;
            phi_f16_2 = 1.0f;
            goto block_27;
        }
        if (temp_f14 < 10.0f) {
            arg0->unk_26C = 1.0f;
            arg0->unk_264 = 1.0f;
            arg0->unk_268 = ((temp_f14 - 7.0f) * 0.4f) + 1.0f;
            return;
        }
        if (temp_f14 < 14.0f) {
            temp_f0 = temp_f14 - 9.0f;
            temp_f2 = (temp_f0 * 0.075f) + 1.0f;
            arg0->unk_26C = temp_f2;
            arg0->unk_264 = temp_f2;
            arg0->unk_268 = 1.8f - (temp_f0 * 0.25f);
            return;
        }
        temp_f0_2 = temp_f14 - 13.0f;
        temp_f2_2 = 1.3f - (temp_f0_2 * 0.05f);
        arg0->unk_26C = temp_f2_2;
        arg0->unk_264 = temp_f2_2;
        arg0->unk_268 = (temp_f0_2 * 0.0333f) + 0.8f;
        return;
    }
    if (func_8086E7E8 == temp_v0) {
        if (temp_f14 < 3.0f) {
            arg0->unk_268 = 1.0f;
            phi_f16 = 1.0f;
        } else {
            if (temp_f14 < 4.0f) {
                phi_f4 = (temp_f14 - 2.0f) + 1.0f;
            } else {
                phi_f4 = 2.0f - ((temp_f14 - 3.0f) * 0.333f);
            }
            arg0->unk_268 = phi_f4;
            phi_f16 = 1.0f;
        }
        arg0->unk_26C = phi_f16;
        phi_f16_2 = phi_f16;
        goto block_27;
    }
    if (func_8086EC00 == temp_v0) {
        if (temp_f14 < 5.0f) {
            temp_f0_3 = (temp_f14 * 0.125f) + 1.0f;
            arg0->unk_26C = temp_f0_3;
            arg0->unk_268 = temp_f0_3;
            arg0->unk_264 = temp_f0_3;
            return;
        }
        if (temp_f14 < 7.0f) {
            temp_f0_4 = 1.5f - ((temp_f14 - 4.0f) * 0.35f);
            arg0->unk_26C = temp_f0_4;
            arg0->unk_268 = temp_f0_4;
            arg0->unk_264 = temp_f0_4;
            return;
        }
        if (temp_f14 < 17.0f) {
            arg0->unk_268 = 0.8f;
            temp_f0_5 = ((temp_f14 - 6.0f) * 0.05f) + 0.8f;
            arg0->unk_26C = temp_f0_5;
            arg0->unk_264 = temp_f0_5;
            return;
        }
        temp_f0_6 = temp_f14 - 16.0f;
        temp_f2_3 = 1.3f - (temp_f0_6 * 0.1f);
        arg0->unk_26C = temp_f2_3;
        arg0->unk_264 = temp_f2_3;
        arg0->unk_268 = (temp_f0_6 * 0.0666f) + 0.8f;
        return;
    }
    if (func_8086E948 == temp_v0) {
        arg0->unk_26C = 1.0f;
        arg0->unk_264 = 1.0f;
        arg0->unk_268 = (sin_rad(0.19634955f * temp_f14) * 0.2f) + 1.0f;
        return;
    }
    arg0->unk_26C = 1.0f;
    arg0->unk_268 = 1.0f;
    phi_f16_2 = 1.0f;
block_27:
    arg0->unk_264 = phi_f16_2;
}

void func_8086FCA4(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk_2F9;
    if (((temp_v0 & 2) != 0) && ((arg0->unk_2F9 = (u8) (temp_v0 & 0xFFFD), (arg0->unk_18C != 0xA)) || ((*arg0[2].yDistToPlayer & 0xDB0B3) == 0))) {
        func_800BE258(arg0, arg0 + 0x300);
        func_8086E0F0(arg0, arg1);
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 == 3) {
            func_8086F2FC(arg0, arg1);
            return;
        }
        if (temp_v0_2 == 4) {
            arg0[1].prevPos.z = 4.0f;
            arg0->unk_18C = 0x14U;
            arg0->unk_258 = 0.6f;
            Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0[2].wallYaw, (f32) arg0->unk_310, (f32) arg0->unk_312, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        if (Actor_ApplyDamage(arg0) == 0) {
            Enemy_StartFinishingBlow(arg1, arg0);
        }
        func_8086EE8C(arg0);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void EnOkuta_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f0;
    s32 temp_v0;
    void (*temp_v0_2)(EnOkuta *, GlobalContext *);
    EnOkuta *this = (EnOkuta *) thisx;

    if (this->actor.params == 0) {
        func_8086FCA4((Actor *) this, globalCtx);
    } else {
        temp_v0 = this->unk_2E8.base.atFlags & 2;
        if ((temp_v0 != 0) || ((this->unk_2E8.base.acFlags & 2) != 0)) {
            if (temp_v0 != 0) {
                func_800B8D98(globalCtx, (Actor *) this, 8.0f, this->actor.world.rot.y, 6.0f);
            }
            func_8086F4F4(this);
        }
    }
    this->actionFunc(this, globalCtx);
    if (func_8086F434 != this->actionFunc) {
        func_8086F8FC(this);
        temp_a1 = &this->unk_2E8;
        this->unk_2E8.dim.height = (s16) (s32) ((((f32) *D_808708EE * this->unk_268) - (f32) this->unk_2E8.dim.yShift) * this->actor.scale.y * 100.0f);
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_v0_2 = this->actionFunc;
        if ((func_8086E658 == temp_v0_2) || (func_8086E7E8 == temp_v0_2)) {
            this->unk_2E8.dim.pos.y = (s16) (s32) (this->actor.world.pos.y + ((f32) this->unk_144.limbDrawTbl->y * this->actor.scale.y));
            this->unk_2E8.dim.radius = (s16) (s32) ((f32) D_808708EC * this->actor.scale.x * 100.0f);
        }
        if (this->actor.draw != 0) {
            if (this->actor.params == 1) {
                CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
            }
            temp_a1_2 = &globalCtx->colChkCtx;
            if ((this->unk_2E8.base.acFlags & 1) != 0) {
                sp2C = temp_a1_2;
                CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
            }
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
            func_8086E2C0(this, globalCtx);
        }
        Actor_SetHeight((Actor *) this, 15.0f);
        if (this->unk_254 > 0.0f) {
            if (this->unk_18C != 0xA) {
                Math_StepToF(&this->unk_254, 0.0f, 0.05f);
                temp_f0 = (this->unk_254 + 1.0f) * 0.3f;
                this->unk_258 = temp_f0;
                if (temp_f0 > 0.6f) {
                    this->unk_258 = 0.6f;
                    return;
                }
                this->unk_258 = this->unk_258;
                return;
            }
            if (Math_StepToF(&this->unk_25C, 0.6f, 0.015000001f) == 0) {
                func_800B9010((Actor *) this, 0x20B2U);
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
    }
}

void func_808700C0(Actor *this, GlobalContext *globalCtx) {
    ? sp38;
    s32 sp34;
    PosRot *sp30;
    f32 *sp2C;
    CollisionCheckContext *temp_a1_3;
    PosRot *temp_a1;
    f32 *temp_a1_2;

    sp34 = 0;
    if ((globalCtx->actorCtx.actorList[2].first->unk_A6C & 0x300002C2) == 0) {
        (bitwise ? (*)(Actor *, GlobalContext *)) this[1].focus.pos.z(this, globalCtx);
        Actor_SetVelocityAndMoveXYRotation(this);
        temp_a1 = &this->world;
        sp30 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &sp38, (Vec3f *) temp_a1);
        Actor_UpdateBgCheckInfo(globalCtx, this, 10.0f, 15.0f, 30.0f, 7U);
        if (((this->bgCheckFlags & 8) != 0) && (func_800C9D50(&globalCtx->colCtx, this->wallPoly, this->wallBgId) != 0)) {
            sp34 = 1;
            this->bgCheckFlags &= 0xFFF7;
        }
        if (((this->bgCheckFlags & 1) != 0) && (func_800C9D50(&globalCtx->colCtx, this->floorPoly, this->floorBgId) != 0)) {
            sp34 = 1;
            this->bgCheckFlags &= 0xFFFE;
        }
        if ((sp34 != 0) && ((this->bgCheckFlags & 9) == 0)) {
            Math_Vec3f_Copy((Vec3f *) sp30, (Vec3f *) &sp38);
        }
        temp_a1_2 = &this[2].scale.z;
        sp2C = temp_a1_2;
        Collider_UpdateCylinder(this, (ColliderCylinder *) temp_a1_2);
        this->flags |= 0x1000000;
        temp_a1_3 = &globalCtx->colChkCtx;
        sp30 = (PosRot *) temp_a1_3;
        CollisionCheck_SetAT(globalCtx, temp_a1_3, (Collider *) sp2C);
        CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp2C);
        CollisionCheck_SetOC(globalCtx, temp_a1_3, (Collider *) sp2C);
    }
}

s32 func_80870254(Vec3s *arg0, f32 arg1, f32 *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v0;

    temp_v0 = arg0->unk_188;
    if (func_8086E948 == temp_v0) {
        arg2[1] = 1.0f;
        arg2[2] = 1.0f;
        arg2->unk_0 = (sin_rad(0.19634955f * arg1) * 0.4f) + 1.0f;
        goto block_18;
    }
    if (func_8086EC00 == temp_v0) {
        if (arg1 < 5.0f) {
            arg2[2] = 1.0f;
            temp_f0 = (arg1 * 0.25f) + 1.0f;
            arg2[1] = temp_f0;
            arg2->unk_0 = temp_f0;
        } else if (arg1 < 7.0f) {
            temp_f0_2 = (arg1 - 4.0f) * 0.5f;
            temp_f2 = 2.0f - temp_f0_2;
            arg2[1] = temp_f2;
            arg2->unk_0 = temp_f2;
            arg2[2] = temp_f0_2 + 1.0f;
        } else {
            arg2->unk_0 = 1.0f;
            arg2[1] = 1.0f;
            arg2[2] = 2.0f - ((arg1 - 6.0f) * 0.0769f);
        }
        goto block_18;
    }
    if (func_8086EFE8 == temp_v0) {
        if ((arg1 >= 35.0f) || (arg1 < 25.0f)) {
            return 0;
        }
        if (arg1 < 27.0f) {
            arg2[2] = 1.0f;
            temp_f0_3 = ((arg1 - 24.0f) * 0.5f) + 1.0f;
            arg2[1] = temp_f0_3;
            arg2->unk_0 = temp_f0_3;
        } else if (arg1 < 30.0f) {
            temp_f0_4 = (arg1 - 26.0f) * 0.333f;
            temp_f2_2 = 2.0f - temp_f0_4;
            arg2[1] = temp_f2_2;
            arg2->unk_0 = temp_f2_2;
            arg2[2] = temp_f0_4 + 1.0f;
        } else {
            arg2->unk_0 = 1.0f;
            arg2[1] = 1.0f;
            arg2[2] = 2.0f - ((arg1 - 29.0f) * 0.2f);
        }
block_18:
        return 1;
    }
    return 0;
}

s32 func_808704DC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    f32 sp1C;
    f32 temp_f0;
    f32 phi_f0;
    s32 phi_v1;

    temp_f0 = arg5->unk_15C;
    phi_f0 = temp_f0;
    phi_v1 = 0;
    if (func_8086EFE8 == arg5->unk_188) {
        phi_f0 = temp_f0 + (f32) arg5[66].y;
    }
    if (arg1 == 0xE) {
        if ((arg5->unk_264 != 1.0f) || (arg5->unk_268 != 1.0f) || (arg5->unk_26C != 1.0f)) {
            Math_Vec3f_Copy((Vec3f *) &sp1C, arg5 + 0x264);
            phi_v1 = 1;
        }
    } else if (arg1 == 0xF) {
        phi_v1 = func_80870254(arg5, phi_f0, &sp1C, arg5);
    }
    if (phi_v1 != 0) {
        Matrix_Scale(sp1C, sp20, sp24, 1);
    }
    return 0;
}

void func_808705C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f *temp_s0;
    s8 temp_s2;
    Vec3f *phi_s0;
    Vec3f *phi_s1;

    temp_s2 = *(&D_80870944 + arg1);
    if (temp_s2 != -1) {
        if (temp_s2 == 5) {
            SysMatrix_GetStateTranslationAndScaledX(1500.0f, arg4 + (temp_s2 * 0xC) + 0x270);
            return;
        }
        if (temp_s2 == 6) {
            SysMatrix_GetStateTranslationAndScaledY(2800.0f, arg4 + (temp_s2 * 0xC) + 0x270);
            phi_s0 = D_80870954;
            phi_s1 = arg4 + ((temp_s2 + 1) * 0xC) + 0x270;
            do {
                SysMatrix_MultiplyVector3fByState(phi_s0, phi_s1);
                temp_s0 = &phi_s0[1];
                phi_s0 = temp_s0;
                phi_s1 = &phi_s1[1];
            } while (temp_s0 != &D_80870978);
            return;
        }
        SysMatrix_GetStateTranslation(arg4 + (temp_s2 * 0xC) + 0x270);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void EnOkuta_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp34;
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_t0;
    s16 temp_v0;
    EnOkuta *this = (EnOkuta *) thisx;

    temp_t0 = globalCtx->state.gfxCtx;
    temp_v1 = temp_t0->polyOpa.p;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) &sSetupDL[150];
    temp_v0 = this->actor.params;
    if ((s32) temp_v0 < 0x10) {
        if (temp_v0 == 0) {
            temp_v1[1].words.w0 = 0xDB060020;
            temp_v1[1].words.w1 = (u32) D_801AEFA0;
        } else {
            temp_v1[1].words.w0 = 0xDB060020;
            temp_v1[1].words.w1 = (u32) &D_80870870;
        }
        temp_t0->polyOpa.p = &temp_v1[2];
        SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_808704DC, func_808705C8, (Actor *) this);
    } else {
        sp34 = temp_v1;
        sp30 = temp_t0;
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        SysMatrix_InsertZRotation_s(this->actor.home.rot.z, 1);
        temp_v1[1].words.w0 = 0xDA380003;
        sp30 = temp_t0;
        sp34 = temp_v1;
        temp_v1[1].words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1[2].words.w1 = (u32) &D_06003250;
        temp_v1[2].words.w0 = 0xDE000000;
        temp_t0->polyOpa.p = &temp_v1[3];
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_270, 0xA, this->unk_258 * this->actor.scale.y * 100.0f, this->unk_25C, this->unk_254, (u8) (s32) this->unk_18C);
}
