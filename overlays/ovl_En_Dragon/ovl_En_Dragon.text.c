typedef struct EnDragon {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x5A];                 /* maybe part of unk_188[16]? */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0x5A];                 /* maybe part of unk_1E8[16]? */
    /* 0x248 */ void (*actionFunc)(EnDragon *, GlobalContext *);
    /* 0x24C */ s32 unk_24C;                        /* inferred */
    /* 0x250 */ u32 unk_250;                        /* inferred */
    /* 0x254 */ Vec3f unk_254;                      /* inferred */
    /* 0x260 */ Vec3f unk_260;                      /* inferred */
    /* 0x26C */ Vec3f unk_26C;                      /* inferred */
    /* 0x278 */ char pad_278[0x18];                 /* maybe part of unk_26C[3]? */
    /* 0x290 */ Vec3f unk_290;                      /* inferred */
    /* 0x29C */ Vec3f unk_29C;                      /* inferred */
    /* 0x2A8 */ s16 unk_2A8;                        /* inferred */
    /* 0x2AA */ char pad_2AA[0x4];                  /* maybe part of unk_2A8[3]? */
    /* 0x2AE */ s16 unk_2AE;                        /* inferred */
    /* 0x2B0 */ s16 unk_2B0;                        /* inferred */
    /* 0x2B2 */ s16 unk_2B2;                        /* inferred */
    /* 0x2B4 */ s16 unk_2B4;                        /* inferred */
    /* 0x2B6 */ s16 unk_2B6;                        /* inferred */
    /* 0x2B8 */ s16 unk_2B8;                        /* inferred */
    /* 0x2BA */ s16 unk_2BA;                        /* inferred */
    /* 0x2BC */ char pad_2BC[0x2];
    /* 0x2BE */ s16 unk_2BE;                        /* inferred */
    /* 0x2C0 */ s16 unk_2C0;                        /* inferred */
    /* 0x2C2 */ s16 unk_2C2;                        /* inferred */
    /* 0x2C4 */ char pad_2C4[0x4];                  /* maybe part of unk_2C2[3]? */
    /* 0x2C8 */ s16 unk_2C8;                        /* inferred */
    /* 0x2CA */ s16 unk_2CA;                        /* inferred */
    /* 0x2CC */ char pad_2CC[0x4];                  /* maybe part of unk_2CA[3]? */
    /* 0x2D0 */ f32 unk_2D0;                        /* inferred */
    /* 0x2D4 */ f32 unk_2D4;                        /* inferred */
    /* 0x2D8 */ char pad_2D8[0x4];
    /* 0x2DC */ ColliderJntSph unk_2DC;             /* inferred */
    /* 0x2FC */ ColliderJntSphElement unk_2FC;      /* inferred */
    /* 0x33C */ char pad_33C[0x1C0];                /* maybe part of unk_2FC[8]? */
} EnDragon;                                         /* size = 0x4FC */

struct _mips2c_stack_EnDragon_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDragon_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnDragon_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnDragon_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderJntSph *sp20;                /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B5EAA0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B5EB40 {
    /* 0x00 */ char pad_0[0x9C];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x8];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80B5ED90 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B5EDF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B5EE3C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B5EF88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B5EFD0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B5F3A4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B5F418 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B5F508 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ Actor *sp5C;                         /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B5F888 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B5F8D8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B5FCC0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B5FD68 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B60138 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B6043C {};              /* size 0x0 */

struct _mips2c_stack_func_80B60494 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

void func_80B5EAA0(EnDragon *arg0, s32 arg1);       /* static */
void func_80B5EB40(EnDragon *arg0, GlobalContext *arg1, s32 arg2, f32 arg3, f32); /* static */
void func_80B5EDF0(EnDragon *arg0, s16);            /* static */
void func_80B5EF88(EnDragon *arg0);                 /* static */
void func_80B5F3A4(EnDragon *arg0, GlobalContext *arg1, s32 arg2, f32 arg3, f32 arg5, f32, f32, f32); /* static */
void func_80B5F888(EnDragon *arg0);                 /* static */
void func_80B60138(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B6043C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B60494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_06004398;
extern AnimationHeader D_060048B8;
static s32 D_80B605D0 = 0;
static DamageTable D_80B605F4 = {
    {
        0,
        0,
        0,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderJntSphElementInit D_80B60614[8] = {
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xD, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xC, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xC, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xA, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xA, {{0, 0, 0}, 0}, 1},
    },
    {{1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {9, {{0, 0, 0}, 0}, 1}},
    {{1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {9, {{0, 0, 0}, 0}, 1}},
    {{1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {9, {{0, 0, 0}, 0}, 1}},
};
static ColliderJntSphInit D_80B60734 = {{6, 0, 9, 9, 0x10, 0}, 8, &D_80B60614};
static ? D_80B60744;                                /* unable to generate initializer */
static ? D_80B60754;                                /* unable to generate initializer */
static ? D_80B60758;                                /* unable to generate initializer */
static ? D_80B60764;                                /* unable to generate initializer */
static Vec3f D_80B60770;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B60774 = 0.0f;
static f32 D_80B60778 = 0.0f;
static Vec3f D_80B6077C;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B60780 = 0.1f;
static ? D_80B60788;                                /* unable to generate initializer */
static ? D_80B60790;                                /* unable to generate initializer */
static ? D_80B607E8;                                /* unable to generate initializer */
static ? D_80B607F0;                                /* unable to generate initializer */
static ? D_80B60848;                                /* unable to generate initializer */
static ? D_80B60858;                                /* unable to generate initializer */
static ? D_80B60878;                                /* unable to generate initializer */

void EnDragon_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSphElement *temp_v0;
    f32 temp_f0;
    EnDragon *this = (EnDragon *) thisx;

    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06004398, &D_060048B8, &this->unk_188, &this->unk_1E8, 0x10);
    this->actor.colChkInfo.health = 4;
    this->actor.colChkInfo.damageTable = &D_80B605F4;
    this->actor.targetMode = 0xA;
    Collider_InitAndSetJntSph(globalCtx, &this->unk_2DC, (Actor *) this, &D_80B60734, &this->unk_2FC);
    this->unk_2DC.elements[7].dim.scale = 1.0f;
    temp_v0 = this->unk_2DC.elements;
    temp_f0 = temp_v0[7].dim.scale;
    temp_v0[6].dim.scale = temp_f0;
    this->unk_2DC.elements[5].dim.scale = temp_f0;
    this->unk_2DC.elements[4].dim.scale = temp_f0;
    this->unk_2DC.elements[3].dim.scale = temp_f0;
    this->unk_2DC.elements[2].dim.scale = temp_f0;
    this->unk_2DC.elements[1].dim.scale = temp_f0;
    this->unk_2DC.elements->dim.scale = temp_f0;
    this->unk_2DC.elements->dim.modelSphere.radius = 0x96;
    this->unk_2DC.elements->dim.modelSphere.center.x = 0x1A4;
    this->unk_2DC.elements[1].dim.modelSphere.radius = 0xA0;
    this->unk_2DC.elements[1].dim.modelSphere.center.x = 0x276;
    this->unk_2DC.elements[2].dim.modelSphere.radius = 0x82;
    this->unk_2DC.elements[2].dim.modelSphere.center.x = 0x276;
    this->unk_2DC.elements[3].dim.modelSphere.radius = 0xAA;
    this->unk_2DC.elements[3].dim.modelSphere.center.x = 0x398;
    this->unk_2DC.elements[4].dim.modelSphere.radius = 0x96;
    this->unk_2DC.elements[4].dim.modelSphere.center.x = 0x212;
    this->unk_2DC.elements[5].dim.modelSphere.radius = 0x8C;
    this->unk_2DC.elements[5].dim.modelSphere.center.x = 0x2DA;
    this->unk_2DC.elements[6].dim.modelSphere.radius = 0x78;
    this->unk_2DC.elements[6].dim.modelSphere.center.x = 0x1AE;
    this->unk_2DC.elements[7].dim.modelSphere.radius = 0x6E;
    this->unk_2DC.elements[7].dim.modelSphere.center.x = 0xA0;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk_250 = ((s32) this->actor.params >> 7) & 0x1F;
    this->unk_2BA = 0;
    this->actor.hintId = 0xE;
    this->actor.flags &= 0xF7FFFFFF;
    this->unk_2D4 = 0.5f;
    func_80B5EDF0(this, 0xA0);
}

void EnDragon_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDragon *this = (EnDragon *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_2DC);
}

void func_80B5EAA0(EnDragon *arg0, s32 arg1) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    s32 temp_t0;
    f32 phi_f0;

    arg0->unk_24C = arg1;
    temp_v1 = (arg1 * 4) + &D_80B60744;
    sp30 = temp_v1;
    temp_t0 = arg0->unk_24C;
    arg0->unk_2D0 = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_f0 = 0.0f;
    if (temp_t0 == 3) {
        phi_f0 = arg0->unk_2D0;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, phi_f0, arg0->unk_2D0, (u8) (s32) *(&D_80B60754 + temp_t0), -4.0f);
}

void func_80B5EB40(EnDragon *arg0, GlobalContext *arg1, s32 arg2, f32 arg3) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 *temp_s1;
    f32 temp_f20;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_v0;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s7;

    temp_v0 = (s32) randPlusMinusPoint5Scaled(5.0f) + 0xA;
    phi_v0 = temp_v0;
    phi_s1 = 0;
    phi_s7 = temp_v0;
    if (arg0->unk_2BA == 6) {
        temp_v0_2 = (s32) randPlusMinusPoint5Scaled(5.0f) + 0xA;
        phi_v0 = temp_v0_2;
        phi_s1 = 1;
        phi_s7 = temp_v0_2;
    }
    phi_s0 = 0;
    if (phi_v0 > 0) {
        temp_v0_3 = phi_s1 * 4;
        temp_s1 = &sp9C;
        do {
            Math_Vec3f_Copy((Vec3f *) temp_s1, (Vec3f *) &arg2);
            D_80B60770.x = Rand_ZeroFloat(1.0f) * 23.0f;
            D_80B60774 = Rand_ZeroFloat(1.0f) * 10.0f;
            D_80B60778 = Rand_ZeroFloat(1.0f) * 23.0f;
            temp_f20 = (f32) phi_s0 * 30.0f;
            sp9C += randPlusMinusPoint5Scaled(temp_f20);
            spA0 += randPlusMinusPoint5Scaled(5.0f);
            spA4 += randPlusMinusPoint5Scaled(temp_f20);
            D_80B60780 = Rand_ZeroFloat(1.0f) * 20.0f * 3.0f;
            EffectSsDtBubble_SpawnCustomColor(arg1, (Vec3f *) temp_s1, &D_80B60770, &D_80B6077C, temp_v0_3 + &D_80B60758, temp_v0_3 + &D_80B60764, (s16) Rand_S16Offset(0x17C, 0xF0), (s16) 0x1E, (s16) 0);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != phi_s7);
    }
}

void func_80B5ED90(EnDragon *this, GlobalContext *globalCtx) {
    if (this->unk_2B4 == 0) {
        func_800B8D50(globalCtx, (Actor *) this, 10.0f, this->actor.world.rot.y, 10.0f, 8U);
        func_80B5EDF0(this);
    }
}

void func_80B5EDF0(EnDragon *arg0) {
    func_80B5EAA0((EnDragon *)3);
    arg0->unk_2BE = 0;
    arg0->unk_2CC = 0;
    arg0->unk_2B8 = 0;
    arg0->unk_2CA = 0;
    arg0->unk_2B4 = 0x1E;
    arg0->actionFunc = func_80B5EE3C;
}

void func_80B5EE3C(EnDragon *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if (this->unk_2BA == 1) {
        func_80B5EF88(this);
        return;
    }
    if ((this->unk_2B4 != 0) && (fabsf(this->actor.world.pos.x - this->actor.home.pos.x) > 101.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 101.0f)) {
        this->actor.speedXZ = -100.0f;
        return;
    }
    temp_f2 = this->actor.home.pos.x;
    temp_f0 = fabsf(this->actor.world.pos.x - temp_f2);
    this->actor.speedXZ = 0.0f;
    if ((temp_f0 > 4.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 4.0f)) {
        Math_ApproachF((f32 *) &this->actor.world, temp_f2, 0.3f, 200.0f);
        Math_ApproachF(&this->actor.world.pos.z, this->actor.home.pos.z, 0.3f, 200.0f);
        return;
    }
    if (this->unk_2BA != 0) {
        this->unk_2BA = 0;
    }
}

void func_80B5EF88(Actor *arg0) {
    arg0[2].world.unk_12 = 0;
    arg0->unk_2B0 = (s16) arg0[2].world.unk_12;
    Audio_PlayActorSound2(arg0, 0x3963U);
    arg0->unk_2AE = 0xFA;
    arg0[1].uncullZoneDownward = (bitwise f32) func_80B5EFD0;
}

void func_80B5EFD0(EnDragon *this, GlobalContext *globalCtx) {
    Actor *sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp38;
    Vec3f *sp30;
    PosRot *sp2C;
    PosRot *temp_a1;
    Vec3f *temp_v0;
    f32 temp_f0;
    s32 phi_v1;

    temp_v0 = &this->unk_254;
    sp4C = globalCtx->actorCtx.actorList[2].first;
    sp48 = this->unk_144.animCurrentFrame;
    sp30 = temp_v0;
    func_80B5EB40(this, subroutine_arg2, temp_v0->y, temp_v0->z);
    if ((s32) this->unk_2BA >= 3) {
        Audio_PlayActorSound2((Actor *) this, 0x3857U);
        func_80B5EDF0(this);
        return;
    }
    if (this->unk_2AE == 0) {
        this->unk_2BA = 4;
        Audio_PlayActorSound2((Actor *) this, 0x3857U);
        func_80B5EDF0(this);
        return;
    }
    if (this->unk_2BE == 0) {
        Math_Vec3f_Copy((Vec3f *) &sp38, &this->unk_260);
        Audio_PlayActorSound2((Actor *) this, 0x3053U);
        sp38 += Math_SinS(this->actor.world.rot.y) * -530.0f;
        sp40 += Math_CosS(this->actor.world.rot.y) * -530.0f;
        this->actor.speedXZ = 40.0f;
        Math_SmoothStepToS(&this->unk_2A8, 0xFA0, 5, 0xBB8, (s16) 0x14);
        if ((fabsf(this->actor.world.pos.x - sp38) < 51.0f) && (fabsf(this->actor.world.pos.z - sp40) < 51.0f) && (this->actor.speedXZ = 0.0f, Math_ApproachF((f32 *) &this->actor.world, sp38, 0.3f, 50.0f), Math_ApproachF(&this->actor.world.pos.z, sp40, 0.3f, 50.0f), (fabsf(this->actor.world.pos.x - sp38) < 4.0f)) && (fabsf(this->actor.world.pos.z - sp40) < 4.0f)) {
            if (this->unk_24C != 1) {
                func_80B5EAA0(this, 1);
            }
            this->unk_2BE = 1;
            return;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return;
    }
    Math_SmoothStepToS(&this->unk_2A8, 0, 5, 0xBB8, (s16) 0x14);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if (this->unk_2BE == 1) {
        if (!(sp48 < this->unk_2D0)) {
            this->unk_2BE = 2;
            goto block_15;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return;
    }
block_15:
    temp_a1 = &sp4C->world;
    sp2C = temp_a1;
    if ((s32) (s16) (Math_Vec3f_Yaw(sp30, (Vec3f *) temp_a1) - this->actor.shape.rot.y) < 0) {
        phi_v1 = (s32) (s16) (Math_Vec3f_Yaw(sp30, (Vec3f *) temp_a1) - this->actor.shape.rot.y) * -0x10000;
    } else {
        phi_v1 = (Math_Vec3f_Yaw(sp30, (Vec3f *) temp_a1) - this->actor.shape.rot.y) << 0x10;
    }
    if ((phi_v1 >> 0x10) < 0x5000) {
        if ((this->unk_2D0 <= sp48) && (this->unk_2B2 == 0)) {
            if (this->unk_24C != 1) {
                func_80B5EAA0(this, 1);
            }
            this->unk_2BE = 2;
        }
        this->unk_2B0 = 0;
        return;
    }
    if (this->unk_2BE == 2) {
        func_80B5EAA0(this, 0);
        temp_f0 = Rand_ZeroFloat(20.0f);
        this->unk_2BE = 3;
        this->unk_2B2 = (s16) (s32) (temp_f0 + this->unk_2D0);
    }
    this->unk_2B0 += 1;
    if ((s32) this->unk_2B0 >= 0x3D) {
        this->unk_2BA = 4;
        Audio_PlayActorSound2((Actor *) this, 0x3857U);
        func_80B5EDF0(this);
    }
}

void func_80B5F3A4(EnDragon *arg0, GlobalContext *arg1, s32 arg2, f32 arg3, f32 arg5) {
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a2;

    arg0->unk_2C8 = ActorCutscene_GetCurrentCamera((s16) arg0->actor.cutscene);
    temp_a0 = arg0 + 0x278;
    sp24 = temp_a0;
    Math_Vec3f_Copy(temp_a0, (Vec3f *) &arg2);
    temp_a2 = arg0 + 0x284;
    sp20 = temp_a2;
    Math_Vec3f_Copy(temp_a2, (Vec3f *) &arg5);
    Play_CameraSetAtEye(arg1, arg0->unk_2C8, temp_a2, sp24);
}

void func_80B5F418(EnDragon *this, GlobalContext *globalCtx) {
    Actor *sp34;
    f32 sp30;
    f32 sp28;
    s16 temp_v0;

    sp34 = globalCtx->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCanPlayNext(this->unk_2C0) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk_2C0);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(this->unk_2C0, (Actor *) this);
    Math_Vec3f_Copy((Vec3f *) &sp28, &this->unk_260);
    sp28 += Math_SinS(this->actor.world.rot.y) * -530.0f;
    sp30 += Math_CosS(this->actor.world.rot.y) * -530.0f;
    Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &sp28);
    temp_v0 = Math_Vec3f_Yaw((Vec3f *) &sp34->world, &this->unk_254);
    sp34->shape.rot.y = temp_v0;
    sp34->world.rot.y = temp_v0;
    this->unk_2BE = 0;
    this->unk_2CA = 0;
    this->unk_2B8 = 0;
    func_80B5EAA0(this, 3);
    this->actionFunc = func_80B5F508;
}

void func_80B5F508(EnDragon *this, GlobalContext *globalCtx) {
    Actor *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Vec3f *sp3C;
    Vec3f *sp38;
    PosRot *sp34;
    Vec3f *temp_a1;

    sp5C = globalCtx->actorCtx.actorList[2].first;
    this->unk_2C8 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if (this->unk_2CA == 0) {
        temp_a1 = &this->unk_26C;
        if (this->unk_2B8 == 0) {
            sp3C = temp_a1;
            Math_Vec3f_Copy((Vec3f *) &sp5C->world, temp_a1);
            Math_Vec3f_Copy(&this->unk_290, temp_a1);
            this->unk_2B8 = 1;
        } else {
            Math_Vec3f_Copy((Vec3f *) &sp5C->world, &this->unk_290);
        }
        Math_Vec3f_Copy((Vec3f *) &sp50, &this->unk_260);
        sp50 += Math_SinS(this->actor.world.rot.y) * -930.0f;
        sp58 += Math_CosS(this->actor.world.rot.y) * -930.0f;
        Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &sp50);
        this->unk_2A8 = 0x1450;
        this->actor.speedXZ = 60.0f;
    }
    this->unk_2CA += 1;
    sp34 = &this->actor.world;
    sp38 = &this->unk_260;
    Math_SmoothStepToS(&this->actor.shape.rot.z, *(&D_80B60848 + (this->unk_250 * 2)), 0xA, 0x1F4, (s16) 0x14);
    func_80B5EB40(this, globalCtx, subroutine_arg2, this->unk_254.y, this->unk_254.z);
    Math_Vec3f_Copy((Vec3f *) &sp50, sp38);
    sp50 += Math_SinS(this->actor.world.rot.y) * *(&D_80B60788 + (this->unk_250 * 0xC));
    sp54 += (&D_80B60788 + (this->unk_250 * 0xC))->unk_4;
    sp58 += Math_CosS(this->actor.world.rot.y) * *(&D_80B60790 + (this->unk_250 * 0xC));
    Math_Vec3f_Copy((Vec3f *) &sp44, (Vec3f *) sp34);
    sp44 += Math_SinS(this->actor.world.rot.y) * *(&D_80B607E8 + (this->unk_250 * 0xC));
    sp48 += (&D_80B607E8 + (this->unk_250 * 0xC))->unk_4;
    sp4C += Math_CosS(this->actor.world.rot.y) * *(&D_80B607F0 + (this->unk_250 * 0xC));
    func_80B5F3A4(this, globalCtx, subroutine_arg2, (&sp50)[1], (&sp50)[2], sp44.unk_0, (&sp44)[1], (&sp44)[2]);
    if (*(&D_80B60858 + (this->unk_250 * 4)) < (s32) this->unk_2CA) {
        if (this->unk_2BE == 0) {
            func_800B7298(globalCtx, (Actor *) this, 6U);
            this->unk_2BE = 1;
        }
        ((? (*)(GlobalContext *, Actor *)) globalCtx->unk_18770)(globalCtx, sp5C);
        sp5C->parent = (Actor *) this;
        sp5C->unk_AE8 = 0x32;
        this->unk_2BA = 2;
        Audio_PlayActorSound2((Actor *) this, 0x3943U);
        func_80B5F888(this);
    }
}

void func_80B5F888(EnDragon *arg0) {
    if (arg0->unk_24C != 1) {
        func_80B5EAA0((EnDragon *)1);
    }
    arg0->unk_2B0 = 0;
    arg0->unk_2CA = 0;
    arg0->unk_2BE = 0;
    arg0->actionFunc = func_80B5F8D8;
}

void func_80B5F8D8(EnDragon *this, GlobalContext *globalCtx) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    PosRot *sp34;
    PosRot *sp30;
    Actor *temp_s1;
    ColliderJntSphElement *temp_v0_4;
    PosRot *temp_a1;
    f32 temp_f16;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp58 = this->unk_144.animCurrentFrame;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Math_SmoothStepToS(&this->actor.shape.rot.z, 0, 0xA, 0x1388, (s16) 0);
    if ((globalCtx->gameplayFrames & 0xF) == 0) {
        globalCtx->damagePlayer(globalCtx, -2);
        func_800B8E58((Actor *) this, (temp_s1->unk_A68->unk_92 + 0x6805) & 0xFFFF);
        Audio_PlayActorSound2((Actor *) this, 0x38D7U);
        CollisionCheck_GreenBlood(globalCtx, NULL, (Vec3f *) &temp_s1->world);
    }
    temp_a1 = &this->actor.world;
    sp34 = &temp_s1->world;
    sp30 = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp4C, (Vec3f *) temp_a1);
    temp_f16 = sp4C + (Math_SinS(this->actor.world.rot.y) * 3000.0f);
    sp50 += 600.0f;
    sp4C = temp_f16;
    sp54 += Math_CosS(this->actor.world.rot.y) * 3000.0f;
    Math_Vec3f_Copy((Vec3f *) &sp40, (Vec3f *) temp_a1);
    temp_f6 = sp40 + (Math_SinS(this->actor.world.rot.y) * 1200.0f);
    sp44 += -100.0f;
    sp40 = temp_f6;
    sp48 += Math_CosS(this->actor.world.rot.y) * 1200.0f;
    func_80B5F3A4(this, globalCtx, subroutine_arg2, (&sp4C)[1], (&sp4C)[2], sp40.unk_0, (&sp40)[1], (&sp40)[2]);
    temp_v0 = this->actor.world.rot.y;
    temp_s1->shape.rot.y = temp_v0;
    temp_s1->world.rot.y = temp_v0;
    temp_v0_2 = this->actor.world.rot.x;
    temp_s1->shape.rot.x = temp_v0_2;
    temp_s1->world.rot.x = temp_v0_2;
    temp_v0_3 = this->actor.world.rot.z - 0x36B0;
    temp_s1->shape.rot.z = temp_v0_3;
    temp_s1->world.rot.z = temp_v0_3;
    Math_Vec3f_Copy((Vec3f *) sp34, &this->unk_26C);
    this->unk_2A8 = 0xC8;
    Math_Vec3f_Copy((Vec3f *) &sp4C, &this->unk_260);
    sp4C += Math_SinS(this->actor.world.rot.y) * -530.0f;
    sp54 += Math_CosS(this->actor.world.rot.y) * -530.0f;
    Math_ApproachF((f32 *) sp30, sp4C, 0.3f, 200.0f);
    Math_ApproachF(&this->actor.world.pos.y, sp50, 0.3f, 200.0f);
    Math_ApproachF(&this->actor.world.pos.z, sp54, 0.3f, 200.0f);
    if (((s32) this->unk_2BE <= 0) && (this->unk_2D0 <= sp58)) {
        Audio_PlayActorSound2((Actor *) this, 0x38D7U);
        if (this->unk_24C != 1) {
            func_80B5EAA0(this, 1);
        }
        this->unk_2BE += 1;
    }
    if (((this->unk_2BE != 0) && (this->unk_2D0 <= sp58)) || ((temp_s1->unk_A70 & 0x80) == 0) || (temp_v0_4 = this->unk_2DC.elements, ((temp_v0_4->info.bumperFlags & 2) != 0)) || ((temp_v0_4[1].info.bumperFlags & 2) != 0) || ((temp_v0_4[2].info.bumperFlags & 2) != 0)) {
        temp_s1->parent = NULL;
        this->unk_2B6 = 0x1E;
        ActorCutscene_Stop(this->unk_2C0);
        if ((temp_s1->unk_A70 & 0x80) != 0) {
            temp_s1->unk_AE8 = 0x64;
        }
        this->actor.flags &= 0xFFEFFFFF;
        if ((this->unk_2BE != 0) && (this->unk_2D0 <= sp58)) {
            this->unk_2B4 = 3;
            this->actionFunc = func_80B5ED90;
            return;
        }
        func_80B5EDF0(this);
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void func_80B5FCC0(EnDragon *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext(this->unk_2C2) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk_2C2);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(this->unk_2C2, (Actor *) this);
    this->unk_2D0 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060048B8);
    SkelAnime_ChangeAnim(&this->unk_144, &D_060048B8, 1.0f, 0.0f, 0.0f, (u8) 2, 0.0f);
    this->unk_2B4 = 0x14;
    this->actionFunc = func_80B5FD68;
}

void func_80B5FD68(EnDragon *this, GlobalContext *globalCtx) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Vec3f *sp48;
    GameInfo *temp_v0;
    Vec3f *temp_v1;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f2;
    s32 temp_t7;
    u32 temp_t4;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->unk_2A8 = 0xFA0;
    this->actor.shape.rot.z += 0x1000;
    temp_v1 = &this->unk_254;
    sp48 = temp_v1;
    func_80B5EB40(this, globalCtx, subroutine_arg2, temp_v1->y, temp_v1->z);
    if ((this->unk_2B4 != 0) && (fabsf(this->actor.world.pos.x - this->actor.home.pos.x) > 121.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 121.0f)) {
        this->actor.speedXZ = -120.0f;
        if (((this->unk_250 & 1) == 0) && (Rand_ZeroOne() < 0.5f) && (((globalCtx->gameplayFrames == 0) & 0x1F) != 0)) {
            Item_DropCollectibleRandom(globalCtx, NULL, sp48, 0x90);
        }
        this->unk_2BA = 6;
        return;
    }
    temp_f2 = this->actor.home.pos.x;
    temp_f0 = fabsf(this->actor.world.pos.x - temp_f2);
    this->actor.speedXZ = 0.0f;
    if ((temp_f0 > 20.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 20.0f)) {
        Math_ApproachF((f32 *) &this->actor.world, temp_f2, 0.3f, 300.0f);
        Math_ApproachF(&this->actor.world.pos.z, this->actor.home.pos.z, 0.3f, 300.0f);
        return;
    }
    temp_t7 = D_80B605D0 + 1;
    D_80B605D0 = temp_t7;
    if (temp_t7 >= (gGameInfo->data[2439] + 8)) {
        Math_Vec3f_Copy((Vec3f *) &sp54, (Vec3f *) &this->actor.parent->world);
        temp_v0 = gGameInfo;
        sp54 += Math_SinS((s16) (this->actor.parent->world.rot.y + 0x8000)) * (500.0f + (f32) temp_v0->data[2438]);
        sp58 += -100.0f + (f32) temp_v0->data[2433];
        temp_f16 = sp5C + (Math_CosS((s16) (this->actor.parent->world.rot.y + 0x8000)) * (500.0f + (f32) gGameInfo->data[2438]));
        sp5C = temp_f16;
        if (Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0x205, sp54, sp58, temp_f16, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 0x4000, (u32) this->actor.cutscene, (s32) this->actor.unk20, NULL) != 0) {
            gSaveContext.weekEventReg[13] |= 1;
            temp_t4 = this->unk_250;
            switch (temp_t4) {
            case 0:
                gSaveContext.weekEventReg[83] |= 0x10;
                break;
            case 1:
                gSaveContext.weekEventReg[83] |= 0x20;
                break;
            case 2:
                gSaveContext.weekEventReg[83] |= 0x40;
                break;
            case 3:
                gSaveContext.weekEventReg[83] |= 0x80;
                break;
            case 4:
                gSaveContext.weekEventReg[84] |= 1;
                break;
            case 5:
                gSaveContext.weekEventReg[84] |= 2;
                break;
            case 6:
                gSaveContext.weekEventReg[84] |= 4;
                break;
            case 7:
                gSaveContext.weekEventReg[84] |= 8;
                break;
            }
        }
    }
    Actor_MarkForDeath((Actor *) this);
}

void func_80B60138(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    u32 sp30;
    u32 temp_t4;
    u32 temp_t6;
    void *temp_v0;

    sp34 = arg1->actorCtx.actorList[2].first;
    if ((arg0[2].world.rot.y == 1) && ((temp_v0 = arg0[2].speedXZ, ((temp_v0->unk_96 & 2) != 0)) || ((temp_v0->unk_D6 & 2) != 0) || ((temp_v0->unk_116 & 2) != 0) || ((temp_v0->unk_156 & 2) != 0) || ((temp_v0->unk_196 & 2) != 0) || ((temp_v0->unk_1D6 & 2) != 0))) {
        Actor_ApplyDamage(arg0);
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x19);
        if ((s32) arg0->colChkInfo.health > 0) {
            Audio_PlayActorSound2(arg0, 0x38D1U);
            arg0[2].world.rot.y = 3;
        } else {
            Enemy_StartFinishingBlow(arg1, arg0);
            Audio_PlayActorSound2(arg0, 0x38D0U);
            temp_t4 = arg0->flags | 0x8000000;
            temp_t6 = temp_t4 & ~1;
            arg0->flags = temp_t4;
            arg0->flags = temp_t6;
            arg0[2].world.rot.y = 5;
            arg0->flags = temp_t6 | 0x100000;
            arg0[1].uncullZoneDownward = (bitwise f32) func_80B5FCC0;
        }
    }
    if ((arg0[2].world.rot.y == 1) && (arg0->unk_2B6 == 0) && (sp34->unk_D5C == 0) && ((arg0[2].speedXZ->unk_17 & 2) != 0) && (!(func_800B64FC(arg1, 1000.0f, (Vec3f *) &arg0->world, &sp30) >= 0.0f) || (sp30 != 1))) {
        arg0->speedXZ = 0.0f;
        arg0[2].world.rot.y = 2;
        arg0->flags |= 0x100000;
        arg0[1].uncullZoneDownward = (bitwise f32) func_80B5F418;
    }
}

void EnDragon_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    EnDragon *this = (EnDragon *) thisx;

    temp_v0 = this->unk_2AE;
    if (temp_v0 != 0) {
        this->unk_2AE = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_2B4;
    if (temp_v0_2 != 0) {
        this->unk_2B4 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_2B2;
    if (temp_v0_3 != 0) {
        this->unk_2B2 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_2B6;
    if (temp_v0_4 != 0) {
        this->unk_2B6 = temp_v0_4 - 1;
    }
    func_80B60138((Actor *) this, globalCtx);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, &this->unk_29C);
    Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.world.rot);
    Actor_SetScale((Actor *) this, this->unk_2D4);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (this->unk_2BA != 2) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_2DC);
    }
    if ((s32) this->unk_2BA < 3) {
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk_2DC;
        sp20 = temp_a2;
        sp24 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2);
    }
}

s32 func_80B6043C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        arg4->x += arg5->unk_2AC;
        arg4->y += arg5[2].unk_22;
        arg4->z += arg5[2].unk20;
    }
    return 0;
}

void func_80B60494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 *temp_a0;

    sp18.unk_0 = D_80B60878.unk_0;
    (&sp18)[1] = D_80B60878.unk_4;
    (&sp18)[2] = D_80B60878.unk_8;
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x254);
        temp_a0 = &sp18;
        sp18 = 0x43AF0000;
        sp1C = -120.0f;
        sp20 = -60.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, arg4 + 0x26C);
    }
    if (arg1 == 0xB) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x29C);
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x2DC);
}

void EnDragon_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDragon *this = (EnDragon *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80B6043C, func_80B60494, (Actor *) this);
}
