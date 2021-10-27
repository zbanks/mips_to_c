typedef struct EnSlime {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnSlime *, GlobalContext *);
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ u8 unk_149;                         /* inferred */
    /* 0x14A */ u8 unk_14A;                         /* inferred */
    /* 0x14B */ char pad_14B[0x1];
    /* 0x14C */ s16 unk_14C;                        /* inferred */
    /* 0x14E */ s16 unk_14E;                        /* inferred */
    /* 0x150 */ s16 unk_150;                        /* inferred */
    /* 0x152 */ s16 unk_152;                        /* inferred */
    /* 0x154 */ f32 unk_154;                        /* inferred */
    /* 0x158 */ f32 unk_158;                        /* inferred */
    /* 0x15C */ f32 unk_15C;                        /* inferred */
    /* 0x160 */ void *unk_160;                      /* inferred */
    /* 0x164 */ f32 unk_164;                        /* inferred */
    /* 0x168 */ f32 unk_168;                        /* inferred */
    /* 0x16C */ f32 unk_16C;                        /* inferred */
    /* 0x170 */ f32 unk_170;                        /* inferred */
    /* 0x174 */ f32 unk_174;                        /* inferred */
    /* 0x178 */ f32 unk_178;                        /* inferred */
    /* 0x17C */ f32 unk_17C;                        /* inferred */
    /* 0x180 */ Vec3f unk_180;                      /* inferred */
    /* 0x18C */ char pad_18C[0x30];                 /* maybe part of unk_180[5]? */
    /* 0x1BC */ ColliderCylinder unk_1BC;           /* inferred */
} EnSlime;                                          /* size = 0x208 */

struct _mips2c_stack_EnSlime_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSlime_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ char pad_58[0x8];                    /* maybe part of sp54[3]? */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ char pad_64[0xC];                    /* maybe part of sp60[4]? */
    /* 0x70 */ Gfx *sp70;                           /* inferred */
    /* 0x74 */ char pad_74[0x20];                   /* maybe part of sp70[9]? */
    /* 0x94 */ void *sp94;                          /* inferred */
    /* 0x98 */ void *sp98;                          /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x8];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_EnSlime_Init {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnSlime_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A2EFAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2F028 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2F0A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2F110 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2F140 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2F180 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2F1A4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A2F354 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A2F418 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2F684 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2F6CC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A2F8B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2F8E0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2F9A0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2FA88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2FB60 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2FBA0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A2FD94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2FE38 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A30018 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x4];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A30344 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A30454 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A304B8 {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char pad_AC[0x4];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80A3072C {};              /* size 0x0 */

struct _mips2c_stack_func_80A30778 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A30820 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ s32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A30924 {};              /* size 0x0 */

struct _mips2c_stack_func_80A30944 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A309C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A30A20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A30A90 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A30AE4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A30BE0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A30C2C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A30C68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A30CEC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A30F98 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

void func_80A2EFAC(Actor *arg0);                    /* static */
void func_80A2F028(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A2F0A8(EnSlime *arg0);                  /* static */
void func_80A2F110(EnSlime *arg0);                  /* static */
void func_80A2F180(EnSlime *arg0);                  /* static */
void func_80A2F354(EnSlime *arg0, GlobalContext *); /* static */
void func_80A2F684(EnSlime *arg0);                  /* static */
void func_80A2F8B4(EnSlime *arg0);                  /* static */
void func_80A2F9A0(EnSlime *arg0);                  /* static */
void func_80A2FB60(EnSlime *arg0);                  /* static */
void func_80A2FD94(Actor *arg0);                    /* static */
void func_80A30018(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80A30454(EnSlime *arg0);                  /* static */
f32 func_80A3072C(f32 arg0, f32 arg1);              /* static */
void func_80A30778(Actor *arg0);                    /* static */
void func_80A30924(EnSlime *arg0);                  /* static */
void func_80A309C8(Actor *arg0);                    /* static */
void func_80A30A90(Actor *arg0);                    /* static */
void func_80A30BE0(EnSlime *arg0);                  /* static */
void func_80A30C68(Actor *arg0);                    /* static */
void func_80A30F98(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_060004C0;
extern ? D_06000650;
extern void D_06000828;
extern ? D_06000A10;
static ColliderCylinderInit D_80A31AF0 = {
    {0xA, 0x11, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 5, 1},
    {0x16, 0x23, 0, {0, 0, 0}},
};
static DamageTable D_80A31B1C = {
    {
        0x10,
        3,
        1,
        1,
        1,
        1,
        0,
        0xE0,
        0xF0,
        1,
        0xF0,
        2,
        0x32,
        0x42,
        1,
        1,
        0xF0,
        2,
        0x10,
        0x51,
        0,
        0,
        0xF0,
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
static CollisionCheckInfoInit D_80A31B3C = {1, 0x16, 0x23, 0x3C};
static void *D_80A31B44[4] = {(void *)0x6000F70, (void *)0x6001070, (void *)0x6001170, (void *)0x6001070};
static InitChainEntry D_80A31B54[2];                /* unable to generate initializer */
static s32 D_80A31B5C = 0;
static Color_RGBA8 D_80A31B60 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80A31B64 = {0x96, 0x96, 0x96, 0};
static Vec3f D_80A31B68 = {0.0f, -0.8f, 0.0f};
static ? D_80A31B74;                                /* unable to generate initializer */
static ? D_80A31B84;                                /* unable to generate initializer */
static Vec3f D_80A31B94[5] = {
    {2000.0f, 2000.0f, 0.0f},
    {-1500.0f, 2500.0f, -500.0f},
    {-500.0f, 1000.0f, 2500.0f},
    {0.0f, 4000.0f, 0.0f},
    {0.0f, 2000.0f, -2000.0f},
};
static void *D_80A32200;

void EnSlime_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v1;
    void **temp_s0;
    s32 phi_v1;
    void **phi_s0;
    EnSlime *this = (EnSlime *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80A31B54);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_1BC, (Actor *) this, &D_80A31AF0);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80A31B1C, &D_80A31B3C);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 38.0f);
    temp_v0 = this->actor.shape.rot.x;
    this->unk_148 = 0xFF;
    this->unk_149 = 0;
    this->unk_158 = 0.0f;
    if ((s32) temp_v0 <= 0) {
        this->unk_170 = 30000.0f;
    } else {
        this->unk_170 = (f32) temp_v0 * 40.0f;
    }
    temp_v0_2 = this->actor.params;
    this->actor.shape.rot.x = 0;
    temp_v1 = ((s32) temp_v0_2 >> 8) & 0xFF;
    this->actor.shape.rot.z = 0;
    this->actor.params = temp_v0_2 & 0xFF;
    phi_v1 = temp_v1;
    if (temp_v1 == 0xFF) {
        phi_v1 = 0;
    }
    this->unk_152 = (phi_v1 * 0x14) + 0xC8;
    phi_s0 = D_80A31B44;
    if (D_80A31B5C == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk_-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != D_80A31B54);
        D_80A32200 = Lib_SegmentedToVirtual(&D_06000828);
        D_80A31B5C = 1;
    }
    temp_v0_3 = this->actor.params;
    if (temp_v0_3 == 2) {
        this->unk_160 = Lib_SegmentedToVirtual((void *) &D_0405BEF0);
        this->actor.hintId = 0x22;
    } else if (temp_v0_3 == 1) {
        this->unk_160 = Lib_SegmentedToVirtual((void *) &D_0405FFC0);
        this->actor.hintId = 0x5D;
    } else if (temp_v0_3 == 3) {
        this->unk_160 = Lib_SegmentedToVirtual((void *) &D_0405E6F0);
        this->actor.hintId = 5;
    } else {
        this->actor.hintId = 6;
    }
    func_80A2F110(this);
}

void EnSlime_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSlime *this = (EnSlime *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_1BC);
}

void func_80A2EFAC(Actor *arg0) {
    arg0->unk_14A = 0xA;
    arg0->unk_1D0 = 3;
    arg0[1].world.pos.x = 0.4f;
    arg0->unk_14C = 0x50;
    arg0->flags &= -0x401;
    arg0[1].world.pos.y = 0.6f;
    arg0->unk_164 = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0x2000, (s16) 0x50);
}

void func_80A2F028(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_14A == 0xA) {
        arg0->unk_14A = 0U;
        arg0->unk_1D0 = 0xA;
        arg0->unk_164 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x180), 5, 2, 0.2f, 0.2f);
        arg0->flags |= 0x200;
    }
}

void func_80A2F0A8(EnSlime *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0->unk_149;
    temp_t6 = temp_v0 + 1;
    if (temp_v0 != 0) {
        arg0->unk_149 = temp_t6;
        if ((temp_t6 & 0xFF) == 4) {
            arg0->unk_149 = 0;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    if (Rand_ZeroOne() < 0.05f) {
        arg0->unk_149 = 1;
    }
}

void func_80A2F110(EnSlime *arg0) {
    arg0->actor.scale.x = 0.008f;
    arg0->actor.scale.z = 0.008f;
    arg0->actionFunc = func_80A2F140;
    arg0->actor.scale.y = 0.011f;
}

void func_80A2F140(EnSlime *this, GlobalContext *globalCtx) {
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.flags &= -0x11;
        func_80A2F180();
    }
}

void func_80A2F180(EnSlime *arg0) {
    arg0->unk_14C = 0x19;
    arg0->actionFunc = func_80A2F1A4;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A2F1A4(EnSlime *this, GlobalContext *globalCtx) {
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_v0;

    this->unk_14C += -1;
    temp_f20 = sqrtf((f32) this->unk_14C) * 0.2f;
    func_80A2F0A8(this);
    temp_v0 = this->unk_14C;
    temp_f2 = ((sin_rad((f32) this->unk_14C * 1.2566371f) * (0.13f * temp_f20)) + 1.0f) * 0.01f;
    this->actor.scale.x = temp_f2;
    this->actor.scale.z = temp_f2;
    if ((s32) temp_v0 < 0x18) {
        this->actor.scale.y = ((cos_rad((f32) temp_v0 * 1.2566371f) * (0.05f * temp_f20)) + 1.0f) * 0.01f;
    }
    this->actor.shape.rot.x = (s16) (s32) (randPlusMinusPoint5Scaled(512.0f) * temp_f20);
    this->actor.shape.rot.z = (s16) (s32) (randPlusMinusPoint5Scaled(512.0f) * temp_f20);
    if ((Player_GetMask(globalCtx) != 0x10) && (this->actor.xzDistToPlayer < 280.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x5000) != 0)) {
        func_80A2F8B4(this);
        return;
    }
    if (this->unk_14C == 0) {
        func_80A2F354(this);
    }
}

void func_80A2F354(Actor *arg0) {
    Vec3f *sp24;
    Vec3f *temp_a1;

    arg0->unk_14C = 0x78;
    temp_a1 = arg0 + 8;
    sp24 = temp_a1;
    if (Actor_XZDistanceToPoint(arg0, temp_a1) > 120.0f) {
        arg0->unk_14E = Actor_YawToPoint(arg0, temp_a1);
    } else if (Rand_ZeroOne() < 0.7f) {
        arg0->unk_14E = (s16) ((s32) randPlusMinusPoint5Scaled(16384.0f) + arg0->shape.rot.y);
    }
    arg0->unk_144 = func_80A2F418;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80A2F418(EnSlime *this, GlobalContext *globalCtx) {
    f32 sp2C;
    PosRot *sp24;
    PosRot *temp_a1;
    f32 temp_f0;
    f32 temp_f18;

    func_80A2F0A8(this);
    this->unk_14C += -1;
    Math_ApproachS(&this->actor.shape.rot.y, this->unk_14E, 4, 0x100);
    temp_a1 = &this->actor.home;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk_14E = this->actor.wallYaw;
        sp24 = &this->actor.home;
    } else {
        sp24 = temp_a1;
        if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1) > 120.0f) {
            this->unk_14E = Actor_YawToPoint((Actor *) this, (Vec3f *) sp24);
        }
    }
    temp_f0 = fabsf(sin_rad((f32) this->unk_14C * 0.1308997f));
    temp_f18 = 0.15f * temp_f0;
    sp2C = temp_f0;
    Math_StepToF(&this->actor.scale.z, (temp_f18 + 1.0f) * 0.01f, 0.0002f);
    Math_StepToF((f32 *) &this->actor.scale, (1.0f - (0.2f * sp2C)) * 0.01f, 0.0002f);
    Math_StepToF(&this->actor.scale.y, (1.0f - (0.1f * sp2C)) * 0.01f, 0.0002f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->actor.speedXZ = (0.8f * temp_f0) + 0.2f;
    this->actor.shape.rot.x = (s16) (s32) (2048.0f * temp_f0);
    if (this->unk_170 < Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) sp24)) {
        func_80A2F684(this);
        return;
    }
    if ((Player_GetMask(globalCtx) != 0x10) && (this->actor.xzDistToPlayer < 280.0f) && (Actor_IsActorFacingLink((Actor *) this, 0x5000) != 0)) {
        func_80A2F8B4(this);
        return;
    }
    if (this->unk_14C == 0) {
        func_80A2F180(this);
    }
}

void func_80A2F684(Actor *arg0) {
    arg0->unk_14C = 0x18;
    arg0->unk_14E = Actor_YawToPoint(arg0, arg0 + 8);
    arg0->unk_144 = func_80A2F6CC;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80A2F6CC(EnSlime *this, GlobalContext *globalCtx) {
    PosRot *sp2C;
    PosRot *temp_a1;
    f32 temp_f20;

    func_80A2F0A8(this);
    this->unk_14C += -1;
    Math_ApproachS(&this->actor.shape.rot.y, this->unk_14E, 4, 0x400);
    temp_a1 = &this->actor.home;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk_14E = this->actor.wallYaw;
        sp2C = &this->actor.home;
    } else {
        sp2C = temp_a1;
        this->unk_14E = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1);
    }
    temp_f20 = fabsf(sin_rad((f32) this->unk_14C * 0.1308997f));
    Math_StepToF(&this->actor.scale.z, ((0.15f * temp_f20) + 1.0f) * 0.01f, 0.0002f);
    Math_StepToF((f32 *) &this->actor.scale, (1.0f - (0.2f * temp_f20)) * 0.01f, 0.0002f);
    Math_StepToF(&this->actor.scale.y, (1.0f - (0.1f * temp_f20)) * 0.01f, 0.0002f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->actor.speedXZ = (0.8f * temp_f20) + 0.2f;
    this->actor.shape.rot.x = (s16) (s32) (2048.0f * temp_f20);
    if (this->unk_14C == 0) {
        this->unk_14C = 0x18;
    }
    if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) sp2C) < (this->unk_170 * 0.8f)) {
        func_80A2F180(this);
    }
}

void func_80A2F8B4(EnSlime *arg0) {
    arg0->actor.shape.rot.x = 0;
    arg0->actor.shape.rot.z = 0;
    arg0->unk_14C = 8;
    arg0->actionFunc = func_80A2F8E0;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A2F8E0(EnSlime *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;

    this->unk_14C += -1;
    func_80A2F0A8(this);
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0x1000);
    temp_v0 = this->unk_14C;
    if ((s32) temp_v0 >= 0) {
        temp_f0 = (f32) (8 - temp_v0);
        temp_f2 = ((temp_f0 * 0.04f) + 1.0f) * 0.01f;
        this->actor.scale.x = temp_f2;
        this->actor.scale.z = temp_f2;
        this->actor.scale.y = (1.0f - (temp_f0 * 0.05f)) * 0.01f;
    }
    if ((s32) temp_v0 < -2) {
        func_80A2F9A0(this);
    }
}

void func_80A2F9A0(Actor *arg0) {
    if (arg0->xzDistToPlayer > 120.0f) {
        arg0->velocity.y = 11.0f;
        arg0->speedXZ = 5.0f;
        arg0->gravity = -2.0f;
    } else {
        arg0->velocity.y = 18.0f;
        arg0->speedXZ = 7.0f;
        arg0->gravity = -3.5f;
    }
    arg0->unk_14C = 0xC;
    arg0->unk_149 = 0;
    arg0->world.rot.y = arg0->shape.rot.y;
    Math_StepToF(arg0 + 0x58, 0.008f, 0.0025f);
    Math_StepToF(arg0 + 0x5C, 0.011f, 0.0025f);
    arg0->scale.z = arg0->scale.x;
    Audio_PlayActorSound2(arg0, 0x38B9U);
    arg0->unk_144 = func_80A2FA88;
}

void func_80A2FA88(EnSlime *this, GlobalContext *globalCtx) {
    Vec3f *temp_a0;
    f32 temp_f0;
    u8 temp_v0;

    temp_v0 = this->unk_1BC.base.atFlags;
    temp_a0 = &this->actor.scale;
    this->unk_14C += -1;
    if ((temp_v0 & 2) != 0) {
        temp_f0 = this->actor.speedXZ;
        if (temp_f0 > 0.0f) {
            this->unk_1BC.base.atFlags = temp_v0 & 0xFFFD;
            this->actor.speedXZ = temp_f0 * -1.2f;
        }
    }
    this = this;
    Math_StepToF((f32 *) temp_a0, 0.008f, 0.0025f);
    Math_StepToF(&this->actor.scale.y, 0.011f, 0.0025f);
    this->actor.scale.z = this->actor.scale.x;
    if ((this->actor.velocity.y < 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        func_80A2FB60(this);
    }
}

void func_80A2FB60(EnSlime *arg0) {
    arg0->unk_14C = 0xF;
    arg0->actor.scale.x = 0.0132f;
    arg0->actor.scale.z = 0.0132f;
    arg0->actionFunc = func_80A2FBA0;
    arg0->actor.scale.y = 0.0074399994f;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A2FBA0(EnSlime *this, GlobalContext *globalCtx) {
    f32 sp24;
    f32 sp20;
    f32 temp_f10;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    s16 temp_v0;
    s16 temp_v0_2;

    func_80A2F0A8(this);
    this->unk_14C += -1;
    temp_v0 = this->unk_14C;
    temp_f2 = (f32) temp_v0;
    temp_f10 = (f32) (((s32) temp_v0 / 5) + 1) * 1.6f;
    temp_f4 = sqrtf(temp_f2) * 0.2f;
    sp24 = temp_f10;
    sp20 = temp_f4;
    temp_v0_2 = this->unk_14C;
    temp_f2_2 = ((cos_rad(temp_f2 * 1.2566371f) * (0.05f * temp_f10)) + 1.0f) * 0.01f;
    this->actor.scale.x = temp_f2_2;
    this->actor.scale.z = temp_f2_2;
    if ((s32) temp_v0_2 < 0xF) {
        this->actor.scale.y = (1.0f - (sin_rad((f32) temp_v0_2 * 1.2566371f) * (0.04f * sp24))) * 0.01f;
    }
    this->actor.shape.rot.x = (s16) (s32) (randPlusMinusPoint5Scaled(512.0f) * sp20);
    this->actor.shape.rot.z = (s16) (s32) (randPlusMinusPoint5Scaled(512.0f) * sp20);
    if (this->unk_170 < Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) &this->actor.home)) {
        func_80A2F684(this);
        return;
    }
    if ((Player_GetMask(globalCtx) != 0x10) && (this->actor.xzDistToPlayer < 280.0f) && ((s32) this->unk_14C < 0xC)) {
        func_80A2F8B4(this);
        return;
    }
    if (this->unk_14C == 0) {
        func_80A2F180(this);
    }
}

void func_80A2FD94(Actor *arg0) {
    Actor *temp_a0;
    CollisionPoly *temp_a1;
    Actor *phi_a0;

    arg0->speedXZ = 10.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    arg0->unk_14C = 0x1E;
    arg0->unk_1CD = (u8) (arg0->unk_1CD & 0xFFFE);
    Audio_PlayActorSound2(arg0, 0x38BFU);
    temp_a0 = arg0;
    temp_a1 = temp_a0[1].floorPoly;
    phi_a0 = temp_a0;
    if (temp_a1 != 0) {
        arg0 = temp_a0;
        arg0->world.rot.y = Actor_YawBetweenActors(temp_a0, (Actor *) temp_a1) + 0x8000;
        phi_a0 = arg0;
    } else {
        temp_a0->world.rot.y = temp_a0->yawTowardsPlayer + 0x8000;
    }
    phi_a0->unk_144 = func_80A2FE38;
}

void func_80A2FE38(EnSlime *this, GlobalContext *globalCtx) {
    f32 sp24;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v1;
    s16 phi_v1;

    func_80A2F0A8(this);
    this->unk_14C += -1;
    Math_StepToF(&this->actor.speedXZ, 0.0f, 1.0f);
    temp_v1 = this->unk_14C;
    temp_f2 = (f32) temp_v1;
    sp24 = sqrtf(temp_f2);
    if ((s32) temp_v1 < 0x1E) {
        temp_f2_2 = ((cos_rad(temp_f2 * 1.2566371f) * (0.08f * sp24)) + 1.0f) * 0.01f;
        this->actor.scale.x = temp_f2_2;
        this->actor.scale.z = temp_f2_2;
    }
    phi_v1 = this->unk_14C;
    if (this->unk_14C == 0xF) {
        this->unk_1BC.base.acFlags |= 1;
        phi_v1 = this->unk_14C;
    }
    this->actor.scale.y = ((sin_rad((f32) phi_v1 * 1.2566371f) * (0.07f * sp24)) + 1.0f) * 0.01f;
    this->actor.shape.rot.x = (s16) (s32) (randPlusMinusPoint5Scaled(512.0f) * sp24);
    this->actor.shape.rot.z = (s16) (s32) (randPlusMinusPoint5Scaled(512.0f) * sp24);
    if (this->unk_14C == 0) {
        if (this->unk_170 < Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) &this->actor.home)) {
            func_80A2F684(this);
            return;
        }
        if ((this->actor.xzDistToPlayer < 280.0f) && (Player_GetMask(globalCtx) != 0x10)) {
            func_80A2F8B4(this);
            return;
        }
        func_80A2F180(this);
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_80A30018(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f28;
    s32 temp_s1;
    s32 phi_s1;

    arg0->unk_1CD = (u8) (arg0->unk_1CD & 0xFFFE);
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0x2000, (s16) 0x14);
    arg0->unk_14C = 0x14;
    arg0->speedXZ = 10.0f;
    if (arg2 == 1) {
        func_800BE504(arg0, (ColliderCylinder *) &arg0[1].minVelocityY);
    }
    arg0->unk_149 = 0;
    Actor_SetScale(arg0, 0.01f);
    arg0[1].home.pos.z = Rand_ZeroOne() * 6.2831855f;
    arg0->unk_15C = (f32) (Rand_ZeroOne() * 6.2831855f);
    sp98 = Math_SinS(arg0->world.rot.y) * 10.0f;
    temp_f28 = Math_CosS(arg0->world.rot.y) * 10.0f;
    sp9C = arg0->world.pos.x + sp98;
    temp_s2 = &sp9C;
    spA0 = arg0->world.pos.y + 20.0f;
    spA4 = arg0->world.pos.z + temp_f28;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s2, NULL, NULL, (s16) 1, (s16) 0x226);
    temp_s3 = &spA8;
    phi_s1 = 0;
    do {
        sp9C = randPlusMinusPoint5Scaled(40.0f) + arg0->world.pos.x + sp98;
        spA0 = randPlusMinusPoint5Scaled(10.0f) + arg0->world.pos.y + 40.0f;
        spA4 = randPlusMinusPoint5Scaled(40.0f) + arg0->world.pos.z + temp_f28;
        temp_f20 = Rand_ZeroOne();
        spA8 = -Math_SinS(arg0->world.rot.y) * ((temp_f20 * 3.5f) + 1.0f);
        temp_f20_2 = Rand_ZeroOne();
        spB0 = -Math_CosS(arg0->world.rot.y) * ((temp_f20_2 * 3.5f) + 1.0f);
        spAC = (Rand_ZeroOne() * 6.0f) + 2.0f;
        EffectSsDtBubble_SpawnCustomColor(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s3, &D_80A31B68, &D_80A31B60, &D_80A31B64, (s16) Rand_S16Offset(0x28, 0x14), (s16) 0x14, (s16) 0);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xA);
    if (arg0->colChkInfo.health == 0) {
        Audio_PlayActorSound2(arg0, 0x38BEU);
    } else {
        Audio_PlayActorSound2(arg0, 0x38BAU);
    }
    arg0->unk_144 = func_80A30344;
}

void func_80A30344(EnSlime *this, GlobalContext *globalCtx) {
    this->unk_14C += -1;
    Math_StepToF(&this->actor.speedXZ, 0.0f, 1.0f);
    if (((s32) this->unk_14C % 5) == 0) {
        this->unk_154 = Rand_ZeroOne() * 6.2831855f;
        this->unk_15C = Rand_ZeroOne() * 6.2831855f;
    }
    if (this->unk_14C == 0) {
        if (this->actor.colChkInfo.health != 0) {
            this->unk_1BC.base.acFlags |= 1;
            if ((this->actor.xzDistToPlayer < 280.0f) && (Player_GetMask(globalCtx) != 0x10)) {
                func_80A2F8B4(this);
                return;
            }
            func_80A2F180(this);
            return;
        }
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x38BBU);
        func_80A30454(this);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80A30454(Actor *arg0) {
    arg0->unk_1CD = (u8) (arg0->unk_1CD & 0xFFFE);
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    Actor_SetScale(arg0, 0.01f);
    arg0->unk_144 = func_80A304B8;
    arg0->speedXZ = 0.0f;
}

void func_80A304B8(EnSlime *this, GlobalContext *globalCtx) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_v0;
    s32 temp_s0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_s0;

    temp_s2 = &sp94;
    if (Math_StepToF((f32 *) &this->actor.scale, 0.0f, 0.002f) != 0) {
        sp94 = this->actor.world.pos.x;
        sp98 = this->actor.world.pos.y + 20.0f;
        sp9C = this->actor.world.pos.z;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) temp_s2, NULL, NULL, (s16) 1, (s16) 0x320);
        temp_s3 = &spA0;
        phi_s0 = 0;
        do {
            temp_f20 = Rand_ZeroOne();
            phi_v0 = 1;
            phi_v0_2 = 1;
            if (Rand_ZeroOne() < 0.5f) {
                phi_v0 = -1;
            }
            spA0 = (f32) phi_v0 * ((temp_f20 * 2.5f) + 2.0f);
            temp_f20_2 = Rand_ZeroOne();
            if (Rand_ZeroOne() < 0.5f) {
                phi_v0_2 = -1;
            }
            spA8 = (f32) phi_v0_2 * ((temp_f20_2 * 2.5f) + 2.0f);
            spA4 = (Rand_ZeroOne() * 6.0f) + 2.0f;
            EffectSsDtBubble_SpawnCustomColor(globalCtx, (Vec3f *) temp_s2, (Vec3f *) temp_s3, &D_80A31B68, &D_80A31B60, &D_80A31B64, (s16) Rand_S16Offset(0x28, 0x14), (s16) 0x14, (s16) 0);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0xF);
        temp_v0 = this->actor.params;
        if (temp_v0 == 2) {
            Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 5U);
        } else if (temp_v0 == 1) {
            Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 0xFU);
        } else if (temp_v0 == 3) {
            Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 3U);
        }
        func_80A30BE0(this);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
}

f32 func_80A3072C(f32 arg0, f32 arg1) {
    s32 temp_f6;
    s32 phi_v0;

    temp_f6 = (s32) (arg0 - arg1);
    phi_v0 = temp_f6 - 0x1E;
    if (temp_f6 > 0) {
        phi_v0 = temp_f6 + 0x1E;
    }
    return ((f32) (phi_v0 / 0x3C) * 60.0f) + arg1;
}

void func_80A30778(Actor *arg0) {
    arg0->unk_1CD = (u8) (arg0->unk_1CD & 0xFFFE);
    arg0->flags &= -2;
    arg0->unk_164 = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->gravity = 0.0f;
    arg0[1].home.pos.z = func_80A3072C(arg0->world.pos.x, arg0->home.pos.x);
    arg0->unk_15C = func_80A3072C(arg0->world.pos.z, arg0->home.pos.z);
    func_800BCB70(arg0, 0x8000, 0x80FF, 0x2000, (s16) 0xA);
    arg0->unk_149 = 0;
    arg0->unk_148 = 0xFE;
    arg0->unk_144 = func_80A30820;
}

void func_80A30820(EnSlime *this, GlobalContext *globalCtx) {
    s32 sp44;
    Actor *temp_v0_2;
    s32 temp_v0;

    sp44 = Math_StepToF((f32 *) &this->actor.world, this->unk_154, 10.0f);
    temp_v0 = Math_StepToF(&this->actor.world.pos.z, this->unk_15C, 10.0f);
    this->actor.colorFilterTimer = 0xA;
    if ((sp44 & temp_v0) != 0) {
        temp_v0_2 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x143, this->actor.world.pos.x, this->actor.world.pos.y + 30.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0);
        this->actor.child = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_2->cutscene = this->actor.cutscene;
            func_80A30924(this);
            return;
        }
        this->actor.colorFilterTimer = 0;
        this->unk_1BC.base.acFlags |= 1;
        this->unk_148 = 0xFF;
        this->actor.flags |= 1;
        this->actor.gravity = -2.0f;
        func_80A2F180(this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80A30924(EnSlime *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->actionFunc = func_80A30944;
}

void func_80A30944(EnSlime *this, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    s32 temp_v1;
    u8 temp_v0;

    temp_v0 = this->unk_148;
    temp_v1 = temp_v0 - 5;
    if (temp_v0 == 0) {
        temp_v0_2 = this->actor.child;
        if ((temp_v0_2 == 0) || (temp_v0_2->update == 0) || !(temp_v0_2->scale.y >= 0.1f)) {
            func_80A30A90();
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    this->actor.colorFilterTimer = 0xA;
    if (temp_v1 < 0) {
        this->unk_148 = 0;
        return;
    }
    this->unk_148 = (u8) temp_v1;
}

void func_80A309C8(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    func_800BE504(arg0, arg0 + 0x1BC);
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    arg0->unk_144 = func_80A30A20;
}

void func_80A30A20(EnSlime *this, GlobalContext *globalCtx) {
    this->unk_14C += -1;
    if (this->unk_14C == 0) {
        func_80A2F028((Actor *) globalCtx);
        if (this->actor.colChkInfo.health == 0) {
            func_80A30018((Actor *) this, globalCtx, 0);
            return;
        }
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80A2F354(this, globalCtx);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80A30A90(Actor *arg0) {
    arg0->colorFilterTimer = 0;
    arg0->gravity = -2.0f;
    func_800BCB70(arg0, 0x8000, 0x80FF, 0x2000, (s16) 0xA);
    arg0->unk_144 = func_80A30AE4;
}

void func_80A30AE4(EnSlime *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    s32 temp_f6;
    s32 temp_v0;
    u32 temp_t4;
    u8 phi_v1;

    temp_v1 = this->actor.child;
    this->actor.colorFilterTimer = 0xA;
    if ((temp_v1 != 0) && (temp_v1->update != 0)) {
        temp_f6 = (s32) ((0.1f - temp_v1->scale.y) * 10.0f * 255.0f);
        if (temp_f6 < 0) {
            this->unk_148 = 0;
        } else {
            phi_v1 = (u8) temp_f6;
            if (temp_f6 >= 0x100) {
                phi_v1 = 0xFFU;
            }
            this->unk_148 = phi_v1;
        }
    } else {
        this->actor.child = NULL;
        temp_v0 = this->unk_148 + 0xA;
        if (temp_v0 >= 0x100) {
            this->unk_148 = 0xFF;
        } else {
            this->unk_148 = (u8) temp_v0;
        }
    }
    if (this->unk_148 == 0xFF) {
        temp_t4 = this->actor.flags | 1;
        this->actor.flags = temp_t4;
        this->unk_1BC.base.acFlags |= 1;
        this->actor.flags = temp_t4 & ~0x10;
        func_80A2F180();
    }
}

void func_80A30BE0(EnSlime *arg0) {
    arg0->actor.draw = NULL;
    arg0->actor.flags |= 0x10;
    arg0->unk_164 = 0.0f;
    arg0->actor.gravity = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_1BC.base.ocFlags1 &= 0xFFFE;
    arg0->actionFunc = func_80A30C2C;
    arg0->unk_14C = arg0->unk_152;
}

void func_80A30C2C(EnSlime *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_14C;
    if (temp_v0 == 0) {
        func_80A30C68();
        return;
    }
    this->unk_14C = temp_v0 - 1;
}

void func_80A30C68(Actor *arg0) {
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a2->draw = EnSlime_Draw;
    temp_a2->unk_148 = 0xFF;
    temp_a2->colChkInfo.health = D_80A31B3C.health;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a2 + 0x24, temp_a2 + 8);
    arg0->unk_14C = 0;
    arg0->colorFilterTimer = 0;
    arg0->home.rot.y = arg0->yawTowardsPlayer;
    Audio_PlayActorSound2(arg0, 0x39FEU);
    arg0->unk_144 = func_80A30CEC;
    arg0->gravity = -2.0f;
}

void func_80A30CEC(EnSlime *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u32 temp_t9;

    this->unk_14C += 1;
    temp_v0 = this->unk_14C;
    if (temp_v0 == 0x1C) {
        temp_t9 = this->actor.flags & ~0x10;
        this->actor.flags = temp_t9;
        this->actor.flags = temp_t9 | 1;
        this->unk_1BC.base.acFlags |= 1;
        this->actor.shape.rot.y = this->actor.home.rot.y;
        func_80A2F354(this);
        return;
    }
    if ((s32) temp_v0 < 0xC) {
        temp_f2 = (f32) temp_v0;
        temp_f0 = temp_f2 * 0.0008333333f;
        this->unk_174 = temp_f0;
        this->unk_17C = temp_f0;
        this->unk_178 = 2.0f * temp_f0;
        this->unk_150 = (s16) (s32) (temp_f2 * 1638.4f);
    } else if ((s32) temp_v0 < 0x14) {
        temp_f0_2 = (f32) (temp_v0 - 0xC) * 0.000625f;
        temp_f2_2 = 0.01f + temp_f0_2;
        this->unk_174 = temp_f2_2;
        this->unk_17C = temp_f2_2;
        this->unk_178 = 2.0f * (0.01f - temp_f0_2);
        this->unk_150 = (s16) (s32) ((f32) temp_v0 * 1638.4f);
    } else if ((s32) temp_v0 < 0x18) {
        temp_f0_3 = (f32) (temp_v0 - 0x14) * 0.0033333332f;
        temp_f2_3 = 0.015f - temp_f0_3;
        this->unk_174 = temp_f2_3;
        this->unk_17C = temp_f2_3;
        this->unk_178 = (2.0f * temp_f0_3) + 0.01f;
        Actor_SetScale((Actor *) this, 1.5f * temp_f0_3);
        temp_v0_2 = this->unk_14C;
        this->unk_150 = (s16) (s32) (((f32) (0x17 - temp_v0_2) * 7281.778f) + 10922.667f);
        this->actor.shape.rot.y = (s16) (s32) ((f32) (0x1C - temp_v0_2) * 4096.0f);
    } else {
        Actor_SetScale((Actor *) this, (((f32) (0x1C - temp_v0) * 0.1f) + 1.0f) * 0.01f);
        Math_Vec3f_Copy((Vec3f *) &this->unk_174, &D_801D15B0);
        this->actor.shape.rot.y = (s16) (s32) ((f32) (0x1C - this->unk_14C) * 4096.0f);
    }
    if (this->unk_14C == 0x15) {
        this->unk_1BC.base.ocFlags1 |= 1;
    }
    temp_v0_3 = this->actor.home.rot.y;
    this->unk_150 += temp_v0_3;
    this->actor.shape.rot.y += temp_v0_3;
}

void func_80A30F98(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk_1CD;
    if (((temp_v0 & 2) != 0) && ((arg0->unk_1CD = (u8) (temp_v0 & 0xFFFD), (arg0->unk_14A != 0xA)) || ((*arg0->unk_1F8 & 0xDB0B3) == 0))) {
        func_80A2F028(arg0, arg1);
        if ((arg0->params == 0) && (arg0->colChkInfo.damageEffect == 3)) {
            arg0->colChkInfo.damage = 0;
        }
        if (Actor_ApplyDamage(arg0) == 0) {
            func_800BE258(arg0, (void *) &arg0[1].bgCheckFlags);
            Enemy_StartFinishingBlow(arg1, arg0);
            arg0->flags &= -2;
        }
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 == 0xF) {
            func_80A2FD94(arg0);
            return;
        }
        if (temp_v0_2 == 1) {
            arg0->unk_14C = 0x28;
            func_800BCB70(arg0, 0, 0xFF, 0x2000, (s16) 0x28);
            Audio_PlayActorSound2(arg0, 0x389EU);
            func_80A309C8(arg0);
            return;
        }
        if (temp_v0_2 != 0xE) {
            if (temp_v0_2 == 3) {
                if (arg0->params == 0) {
                    func_80A30778(arg0);
                    return;
                }
                func_80A2EFAC(arg0);
                if (arg0->colChkInfo.health == 0) {
                    arg0->unk_14C = 3;
                    arg0->unk_1CD = (u8) (arg0->unk_1CD & 0xFFFE);
                }
                func_80A309C8(arg0);
                return;
            }
            if (temp_v0_2 == 4) {
                arg0->unk_164 = 4.0f;
                arg0->unk_14A = 0x14U;
                arg0[1].world.pos.x = 0.4f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_1E2, (f32) arg0->unk_1E4, (f32) arg0->unk_1E6, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            } else if (temp_v0_2 == 5) {
                arg0->unk_14A = 0x20U;
                arg0->unk_164 = 4.0f;
                arg0[1].world.pos.x = 0.4f;
            }
            func_80A30018(arg0, arg1, 1);
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
    }
}

void EnSlime_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    EnSlime *this = (EnSlime *) thisx;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    func_80A30F98((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    this->actor.shape.shadowAlpha = this->unk_148;
    if (this->unk_148 == 0xFF) {
        temp_f0 = this->actor.scale.y;
        if (temp_f0 > 0.0001f) {
            this->actor.targetArrowOffset = 60.0f / temp_f0;
        }
        if ((this->unk_1BC.base.ocFlags1 & 1) != 0) {
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 35.0f, 40.0f, 0x1DU);
        }
        temp_a1 = &this->unk_1BC;
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        this->unk_1BC.dim.radius = (s16) (s32) ((f32) D_80A31AF0.dim.radius * (100.0f * this->actor.scale.z));
        this->unk_1BC.dim.height = (s16) (s32) ((f32) D_80A31AF0.dim.height * (100.0f * this->actor.scale.y));
        if (func_80A2FA88 == this->actionFunc) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
        }
        if ((this->unk_1BC.base.acFlags & 1) != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
        }
        if (((bitwise s32) sp2C[8].targetArrowOffset & 0x100) != 0) {
            this->unk_1BC.base.ocFlags1 &= 0xFFF7;
        } else {
            this->unk_1BC.base.ocFlags1 |= 8;
        }
        if ((this->unk_1BC.base.ocFlags1 & 1) != 0) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
        }
        Actor_SetHeight((Actor *) this, 15.0f);
        if (this->unk_164 > 0.0f) {
            if (this->unk_14A != 0xA) {
                Math_StepToF(&this->unk_164, 0.0f, 0.05f);
                temp_f0_2 = (this->unk_164 + 1.0f) * 0.2f;
                this->unk_168 = temp_f0_2;
                if (temp_f0_2 > 0.4f) {
                    this->unk_168 = 0.4f;
                    return;
                }
                this->unk_168 = this->unk_168;
                return;
            }
            if (Math_StepToF(&this->unk_16C, 0.4f, 0.01f) == 0) {
                func_800B9010((Actor *) this, 0x20B2U);
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

void EnSlime_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    void *sp98;
    void *sp94;
    Gfx *sp70;
    Gfx *sp60;
    Gfx *sp54;
    Gfx *sp4C;
    Gfx *sp40;
    Vec3f *sp38;
    Vec3f *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    Vec3f *temp_a0_2;
    s32 temp_v0_4;
    void *temp_a2;
    void *temp_a3;
    Vec3f *phi_a0;
    Vec3f *phi_a1;
    EnSlime *this = (EnSlime *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    func_800B8118((Actor *) this, globalCtx, 0);
    if (this->unk_148 != 0xFF) {
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060028;
        temp_v0->words.w1 = (u32) D_801AEFA0;
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = -1;
        temp_v0_2->words.w0 = 0xFA0000AA;
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = this->unk_148 | 0x96FFFF00;
    } else {
        temp_v0_4 = this->actor.params * 4;
        temp_a2 = temp_v0_4 + &D_80A31B74;
        temp_a3 = temp_v0_4 + &D_80A31B84;
        sp94 = temp_a3;
        sp98 = temp_a2;
        AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80A32200);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFA000064;
        temp_v0_5->words.w1 = (temp_a2->unk_0 << 0x18) | (temp_a2->unk_1 << 0x10) | (temp_a2->unk_2 << 8) | temp_a2->unk_3;
        temp_v0_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xFB000000;
        temp_v0_6->words.w1 = (temp_a3->unk_0 << 0x18) | (temp_a3->unk_1 << 0x10) | (temp_a3->unk_2 << 8) | 0xFF;
    }
    if (func_80A30344 == this->actionFunc) {
        sp9C = 1.0f - (sin_rad((f32) this->unk_14C * 1.5707964f) * 0.3f);
        spA0 = (sin_rad((f32) this->unk_14C * 1.5707964f) * 0.3f) + 1.0f;
        spA4 = 1.0f - (cos_rad((f32) this->unk_14C * 1.5707964f) * 0.3f);
        SysMatrix_RotateStateAroundXAxis(this->unk_154);
        SysMatrix_InsertZRotation_f(this->unk_15C, 1);
        Matrix_Scale(sp9C, spA0, spA4, 1);
        SysMatrix_InsertZRotation_f(-this->unk_15C, 1);
        SysMatrix_RotateStateAroundXAxis(-this->unk_154);
    }
    temp_v0_7 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_7[1];
    temp_v0_7->words.w0 = 0xDA380003;
    sp70 = temp_v0_7;
    sp70->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_8 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_8[1];
    temp_v0_8->words.w1 = (u32) &D_060004C0;
    temp_v0_8->words.w0 = 0xDE000000;
    if (this->unk_148 == 0xFF) {
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v0_9 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_9[1];
        temp_v0_9->words.w0 = 0xDB060024;
        temp_v0_9->words.w1 = (u32) D_80A31B44[this->unk_149];
        temp_v0_10 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = 0x1E46FF;
        temp_v0_10->words.w0 = 0xFB000000;
        temp_v0_11 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_11[1];
        temp_v0_11->words.w0 = 0xDA380003;
        sp60 = temp_v0_11;
        sp60->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_12 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_12[1];
        temp_v0_12->words.w1 = (u32) &D_06000650;
        temp_v0_12->words.w0 = 0xDE000000;
    } else {
        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        temp_v0_13 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_13[1];
        temp_v0_13->words.w0 = 0xDB060024;
        temp_v0_13->words.w1 = (u32) D_80A31B44[this->unk_149];
        temp_v0_14 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_14[1];
        temp_v0_14->words.w0 = 0xDA380003;
        sp54 = temp_v0_14;
        sp54->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_15 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_15[1];
        temp_v0_15->words.w1 = (u32) &D_06000650;
        temp_v0_15->words.w0 = 0xDE000000;
    }
    phi_a0 = D_80A31B94;
    phi_a1 = &this->unk_180;
    do {
        sp38 = phi_a0;
        sp34 = phi_a1;
        SysMatrix_MultiplyVector3fByState(phi_a0, phi_a1);
        temp_a0_2 = &phi_a0[1];
        phi_a0 = temp_a0_2;
        phi_a1 = &phi_a1[1];
    } while (temp_a0_2 != &D_80A31BD0);
    if (func_80A30CEC == this->actionFunc) {
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        Matrix_RotateY(this->unk_150, 1U);
        Matrix_Scale(this->unk_174, this->unk_178, this->unk_17C, 1);
        temp_v0_16 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_16[1];
        temp_v0_16->words.w0 = 0xDA380003;
        sp4C = temp_v0_16;
        sp4C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_17 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_17[1];
        temp_v0_17->words.w1 = (u32) &D_06000A10;
        temp_v0_17->words.w0 = 0xDE000000;
    }
    if ((this->actor.params != 0) && (this->actor.scale.x > 0.0f)) {
        temp_v0_18 = func_801660B8(globalCtx, temp_s1->polyOpa.p);
        temp_s1->polyOpa.p = temp_v0_18;
        temp_s1->polyOpa.p = func_8012C724(temp_v0_18);
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + (2000.0f * this->actor.scale.y), this->actor.world.pos.z, 0);
        Matrix_Scale(0.03f, 0.03f, 0.03f, 1);
        temp_v0_19 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_19[1];
        temp_v0_19->words.w0 = 0xDB060020;
        temp_v0_19->words.w1 = (u32) this->unk_160;
        temp_v0_20 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_20[1];
        temp_v0_20->words.w0 = 0xDA380003;
        sp40 = temp_v0_20;
        sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_21 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_21[1];
        temp_v0_21->words.w1 = (u32) D_0405F6F0;
        temp_v0_21->words.w0 = 0xDE000000;
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_180, 5, this->unk_168, this->unk_16C, this->unk_164, (u8) (s32) this->unk_14A);
}
