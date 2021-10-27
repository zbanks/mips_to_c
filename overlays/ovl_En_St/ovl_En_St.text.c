typedef struct EnSt {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnSt *, GlobalContext *);
    /* 0x18C */ u16 unk_18C;                        /* inferred */
    /* 0x18E */ u8 unk_18E;                         /* inferred */
    /* 0x18F */ char pad_18F[0x1];
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ ColliderCylinder unk_1DC;           /* inferred */
    /* 0x228 */ ColliderCylinder unk_228;           /* inferred */
    /* 0x274 */ ColliderCylinder unk_274;           /* inferred */
    /* 0x2C0 */ s8 unk_2C0;                         /* inferred */
    /* 0x2C1 */ char pad_2C1[0x3];                  /* maybe part of unk_2C0[4]? */
    /* 0x2C4 */ f32 unk_2C4;                        /* inferred */
    /* 0x2C8 */ f32 unk_2C8;                        /* inferred */
    /* 0x2CC */ f32 unk_2CC;                        /* inferred */
    /* 0x2D0 */ f32 unk_2D0;                        /* inferred */
    /* 0x2D4 */ f32 unk_2D4;                        /* inferred */
    /* 0x2D8 */ char pad_2D8[0x34];                 /* maybe part of unk_2D4[14]? */
    /* 0x30C */ s16 unk_30C;                        /* inferred */
    /* 0x30E */ s16 unk_30E;                        /* inferred */
    /* 0x310 */ s16 unk_310;                        /* inferred */
    /* 0x312 */ s16 unk_312;                        /* inferred */
    /* 0x314 */ s16 unk_314;                        /* inferred */
    /* 0x316 */ s16 unk_316;                        /* inferred */
    /* 0x318 */ s16 unk_318;                        /* inferred */
    /* 0x31A */ char pad_31A[0xCE];                 /* maybe part of unk_318[104]? */
    /* 0x3E8 */ Vec3s unk_3E8;                      /* inferred */
    /* 0x3EE */ char pad_3EE[0xAE];                 /* maybe part of unk_3E8[30]? */
    /* 0x49C */ Vec3s unk_49C;                      /* inferred */
    /* 0x4A2 */ char pad_4A2[0xAE];                 /* maybe part of unk_49C[30]? */
} EnSt;                                             /* size = 0x550 */

struct _mips2c_stack_EnSt_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSt_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSt_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A5050 {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0xC];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0x4];
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_808A52A8 {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0xC];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0x4];
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_808A54B0 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0x14];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808A576C {
    /* 0x00 */ char pad_0[0x70];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_808A5988 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x3];
    /* 0x53 */ u8 sp53;                             /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808A5AF8 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808A5BEC {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A5CCC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A5D7C {};              /* size 0x0 */

struct _mips2c_stack_func_808A5DCC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A5F28 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A6064 {};              /* size 0x0 */

struct _mips2c_stack_func_808A60E0 {
    /* 0x00 */ char pad_0[0x1A];
    /* 0x1A */ u16 sp1A;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A61F4 {};              /* size 0x0 */

struct _mips2c_stack_func_808A6220 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ CollisionCheckContext *sp20;         /* inferred */
    /* 0x24 */ void (**sp24)(Actor *, GlobalContext *); /* inferred */
    /* 0x28 */ f32 *sp28;                           /* inferred */
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808A63E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A6468 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A650C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A6580 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808A6A3C {};              /* size 0x0 */

struct _mips2c_stack_func_808A6A78 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808A6C04 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A6D84 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A6E24 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A701C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A73E8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ u8 sp21;                             /* inferred */
    /* 0x22 */ u8 sp22;                             /* inferred */
    /* 0x23 */ char pad_23[0x5];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A7478 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

? EffectSsBlast_SpawnWhiteCustomScale(GlobalContext *, f32 *, Vec3f *, Vec3f *, s32, s32, s32); /* extern */
void func_808A5050(EnSt *arg0, GlobalContext *arg1); /* static */
void func_808A52A8(EnSt *arg0, GlobalContext *arg1); /* static */
void func_808A54B0(Actor *arg0, GraphicsContext **arg1); /* static */
? func_808A576C(Actor *arg0, s32, s32, s32);        /* static */
s16 func_808A5988(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_808A5AF8(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
s16 func_808A5BEC(Actor *arg0);                     /* static */
void func_808A5CCC(Actor *arg0);                    /* static */
void func_808A5D7C(EnSt *arg0);                     /* static */
void func_808A5DCC(Vec3s *arg0, u8 *arg1);          /* static */
s32 func_808A5F28(EnSt *arg0, GlobalContext *arg1); /* static */
s32 func_808A6064(EnSt *arg0);                      /* static */
void func_808A60E0(Actor *arg0);                    /* static */
u8 func_808A61F4(Actor *arg0);                      /* static */
void func_808A6220(Actor *arg0, GlobalContext *arg1); /* static */
void func_808A63E8(EnSt *arg0);                     /* static */
void func_808A6468(EnSt *arg0, GlobalContext *);    /* static */
void func_808A650C(EnSt *arg0);                     /* static */
s32 func_808A6580(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808A6A3C(EnSt *arg0);                      /* static */
s32 func_808A73E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, void **arg6); /* static */
void func_808A7478(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_04025970;
extern SkeletonHeader D_06005298;
static ColliderCylinderInit D_808A75B0 = {
    {2, 0x11, 0, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0x800C3829, 0, 0}, 1, 0, 1},
    {0x12, 0x30, 0xFFEC, {0, 0, 0}},
};
static ColliderCylinderInit D_808A75DC = {
    {2, 0, 9, 0, 0x10, 1},
    {0, {0, 0, 0}, {0x77C3C7D6, 0, 0}, 0, 1, 0},
    {0x12, 0x30, 0xFFEC, {0, 0, 0}},
};
static ColliderCylinderInit D_808A7608 = {
    {9, 0, 0xD, 0, 0x10, 1},
    {2, {0, 0, 0}, {0x77C3C7D6, 0, 0}, 0, 1, 0},
    {0x12, 0x30, 0xFFEC, {0, 0, 0}},
};
static ColliderCylinderInit D_808A7634 = {
    {2, 0, 9, 0, 0x10, 1},
    {0, {0, 0, 0}, {0x800C3829, 0, 0}, 0, 1, 0},
    {0x12, 0x30, 0xFFEC, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_808A7660 = {2, 0, 0, 0, 0xFF};
static DamageTable D_808A766C = {
    {
        0x10,
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
        0x22,
        0x32,
        0x42,
        1,
        0,
        1,
        2,
        0x10,
        0x50,
        1,
        1,
        0,
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
static ActorAnimationEntryS D_808A768C[8] = {
    {(AnimationHeader *)0x6000304, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005B98, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6000304, 4.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6000304, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60055A8, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6000304, 8.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6000304, 6.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6005B98, 2.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static Color_RGBA8 D_808A770C = {0xAA, 0x82, 0x5A, 0xFF};
static Color_RGBA8 D_808A7710 = {0x64, 0x3C, 0x14, 0};
static Color_RGBA8 D_808A7714 = {0xAA, 0x82, 0x5A, 0xFF};
static Color_RGBA8 D_808A7718 = {0x64, 0x3C, 0x14, 0};

void func_808A5050(EnSt *arg0, GlobalContext *arg1) {
    f32 spB8;
    ? spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_fp;
    f32 *temp_s4;
    f32 temp_f4;
    s16 temp_s0;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    temp_s0 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 65536.0f);
    temp_fp = &spA0;
    temp_s4 = &sp94;
    spA4 = arg0->actor.floorHeight;
    phi_s0 = temp_s0;
    phi_s1 = 0;
    do {
        temp_f4 = Rand_ZeroOne() * 4.0f;
        sp94 = 0.0f;
        sp98 = (Rand_ZeroOne() * 0.2f) + 0.1f;
        sp9C = Rand_ZeroOne() + 1.0f;
        Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, phi_s0, (Vec3f *) temp_s4, (Vec3f *) &spAC);
        sp94 = 0.0f;
        sp98 = 1.0f;
        sp9C = 5.0f;
        Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, phi_s0, (Vec3f *) temp_s4, (Vec3f *) &spB8);
        spA0 = arg0->actor.world.pos.x + (2.0f * spB8);
        spA8 = arg0->actor.world.pos.z + (2.0f * spC0);
        func_800B0EB0(arg1, (Vec3f *) temp_fp, (Vec3f *) &spB8, (Vec3f *) &spAC, &D_808A770C, &D_808A7710, (s16) 0x64, (s16) 0x28, (s16) (s32) (temp_f4 + 8.0f));
        temp_s1 = phi_s1 + 1;
        phi_s0 = (s16) (phi_s0 + 0xFFF);
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x10);
    spA0 = arg0->actor.world.pos.x;
    spA8 = arg0->actor.world.pos.z;
    spA4 = arg0->actor.floorHeight;
    EffectSsBlast_SpawnWhiteCustomScale(arg1, temp_fp, &D_801D15B0, &D_801D15B0, 0x64, 0xDC, 8);
}

void func_808A52A8(EnSt *arg0, GlobalContext *arg1) {
    f32 spB8;
    ? spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s5;
    f32 temp_f4;
    s16 temp_s0;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    temp_s0 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 65536.0f);
    temp_s5 = &sp94;
    spA4 = arg0->actor.floorHeight;
    phi_s0 = temp_s0;
    phi_s1 = 0;
    do {
        temp_f4 = Rand_ZeroOne() * 4.0f;
        sp94 = 0.0f;
        sp98 = (Rand_ZeroOne() * 0.2f) + 0.1f;
        sp9C = Rand_ZeroOne() + 1.0f;
        Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, phi_s0, (Vec3f *) temp_s5, (Vec3f *) &spAC);
        sp94 = 0.0f;
        sp98 = 1.0f;
        sp9C = 4.0f;
        Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, phi_s0, (Vec3f *) temp_s5, (Vec3f *) &spB8);
        spA0 = arg0->actor.world.pos.x + (2.0f * spB8);
        spA8 = arg0->actor.world.pos.z + (2.0f * spC0);
        func_800B0EB0(arg1, (Vec3f *) &spA0, (Vec3f *) &spB8, (Vec3f *) &spAC, &D_808A7714, &D_808A7718, (s16) 0x64, (s16) 0x28, (s16) (s32) (temp_f4 + 8.0f));
        temp_s1 = phi_s1 + 1;
        phi_s0 = (s16) (phi_s0 + 0x1FFE);
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
}

void func_808A54B0(Actor *arg0, GraphicsContext **arg1) {
    Gfx *sp48;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 phi_f0;

    if (((arg0[1].focus.rot.x & 1) != 0) && (arg0->colChkInfo.health != 0)) {
        temp_s0 = *arg1;
        gSegments[6] = (arg1 + (arg0[2].cutscene * 0x44))->unk_17D98 + 0x80000000;
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060018;
        temp_v0->words.w1 = (arg1 + (arg0[2].cutscene * 0x44))->unk_17D98;
        func_8012C2DC(*arg1);
        SysMatrix_InsertTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, 0);
        Matrix_RotateY(arg0->shape.rot.y, 1U);
        Matrix_Scale(0.06f, 0.12f, 0.06f, 1);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDA380003;
        sp48 = temp_v0_2;
        sp48->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDB060020;
        sp44 = temp_v0_3;
        sp44->words.w1 = Gfx_TwoTexScroll(*arg1, 0, 0xC3U, 0U, 0x40, 0x20, 1, 0xD7U, 0U, 8, 8);
        temp_f0 = (f32) arg0->unk_310 / 8.0f;
        phi_f0 = temp_f0;
        if (temp_f0 > 1.0f) {
            phi_f0 = 1.0f;
        }
        temp_v1 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1[1];
        temp_v1->words.w0 = 0xFA000080;
        temp_v1->words.w1 = ((u32) (255.0f * phi_f0) & 0xFF) | 0xAAFFFF00;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = (u32) &D_04025850;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = (u32) &D_04025970;
        temp_v0_5->words.w0 = 0xDE000000;
    }
}

? func_808A576C(Actor *arg0) {
    Actor *temp_s1;
    s32 temp_s3;
    u8 temp_v0;
    Actor *phi_s0;
    Actor *phi_s4;
    Actor *phi_s1;
    s16 phi_s2;
    s32 phi_s3;

    phi_s0 = arg0;
    phi_s4 = arg0;
    phi_s1 = arg0;
    phi_s2 = (s16) ((s16) ((s32) (s16) (s32) (Rand_ZeroOne() * 1000.0f) % 0xC) * 0x1555);
    phi_s3 = 0;
    do {
        if (arg0->unk_18E != 0xA) {
            phi_s0->unk_31C = (s16) (s32) ((Rand_ZeroOne() * 16.0f) + 8.0f);
        } else {
            phi_s0->unk_31C = 0x50;
        }
        phi_s0->unk_334 = (s16) phi_s0->unk_31C;
        phi_s4[2].targetArrowOffset = 0.90000004f;
        temp_v0 = arg0->unk_18E;
        if ((temp_v0 == 0) || (temp_v0 == 1)) {
            phi_s1[2].shape.feetPos[0].x = ((Rand_ZeroOne() - 0.5f) * 40.0f) - 10.0f;
        } else {
            phi_s1[2].shape.feetPos[0].x = ((Rand_ZeroOne() - 0.5f) * 30.0f) + 10.0f;
        }
        phi_s1->unk_358 = (f32) (Math_SinS(phi_s2) * 18.0f);
        temp_s3 = phi_s3 + 4;
        temp_s1 = phi_s1 + 0xC;
        temp_s1[2].shape.shadowScale = Math_CosS(phi_s2) * 18.0f;
        phi_s0 += 2;
        phi_s4 += 4;
        phi_s1 = temp_s1;
        phi_s2 = (s16) (phi_s2 + 0x1555);
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x30);
    arg0[2].yawTowardsPlayer = 1;
    return 0;
}

s16 func_808A5988(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    u8 sp53;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    void *sp3C;
    void *sp34;
    s16 temp_v0;
    u8 temp_t0;
    void *temp_t1;
    void *temp_v0_2;
    void *temp_v1;
    s32 phi_t0;
    s16 phi_a3;

    temp_v1 = arg0 + (arg2 * 2);
    phi_a3 = 0;
    if (arg2 < (s32) arg0[2].yawTowardsPlayer) {
        temp_v0 = temp_v1->unk_31C;
        if (temp_v0 != 0) {
            temp_t1 = arg0 + (arg2 * 4);
            sp40 = (f32) temp_v0 / (f32) temp_v1->unk_334;
            temp_t0 = arg0->unk_18E;
            sp34 = temp_t1;
            sp3C = temp_v1;
            sp53 = temp_t0;
            Math_ApproachF(temp_t1 + 0x2DC, 0.6f, 0.3f, 0.5f);
            Math_Vec3f_Copy((Vec3f *) &sp44, arg0 + 0x24);
            temp_v0_2 = arg0 + (arg2 * 0xC);
            sp44 += temp_v0_2->unk_358;
            sp48 += temp_v0_2->unk_35C;
            sp4C += temp_v0_2->unk_360;
            phi_t0 = (s32) temp_t0;
            phi_a3 = 1;
            phi_t0 = (s32) temp_t0;
            if (temp_t0 == 0xA) {
                if ((temp_v1->unk_334 - temp_v1->unk_31C) < 0x14) {
                    phi_t0 = 0xB;
                }
                sp40 = 1.0f;
            }
            func_800BE680(arg1, arg0, (Vec3f []) (Vec3f *) &sp44, 1, 0.6f, sp34->unk_2DC, sp40, (u8) phi_t0);
        }
    }
    return phi_a3;
}

void func_808A5AF8(Actor *arg0, GlobalContext *arg1) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Actor *temp_s0;
    Vec3f *temp_s2;
    Vec3f *temp_s4;
    f32 *temp_a1;
    s32 temp_s1;
    Actor *phi_s0;
    Vec3f *phi_s2;
    s32 phi_s1;

    temp_s4 = arg0 + 0x24;
    temp_s0 = arg0;
    temp_s2 = arg0 + 0x358;
    arg0 = arg0;
    phi_s0 = temp_s0;
    phi_s2 = temp_s2;
    phi_s1 = 0;
    do {
        Math_Vec3f_Copy((Vec3f *) &sp54, temp_s4);
        temp_a1 = &sp54;
        sp54 += phi_s0->unk_358;
        sp58 += phi_s0[2].shape.feetPos[0].x;
        sp5C += phi_s0[2].shape.feetPos[0].y;
        Math_Vec3f_Copy(phi_s2, (Vec3f *) temp_a1);
        temp_s1 = phi_s1 + 0xC;
        phi_s0 += 0xC;
        phi_s2 = &phi_s2[1];
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x90);
    func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x358), 0xC, 3, 0.1f, 0.3f);
}

s16 func_808A5BEC(Actor *arg0) {
    s16 sp1E;
    s16 temp_t2;
    s16 temp_v0;
    s16 phi_v1;
    s16 phi_a2;

    if (((arg0[1].focus.rot.x & 4) == 0) || (arg0->xzDistToPlayer > 180.0f)) {
        phi_a2 = arg0->home.rot.y;
    } else {
        temp_v0 = arg0[2].wallYaw;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0[2].wallYaw = temp_v0 - 1;
            phi_v1 = arg0[2].wallYaw;
        }
        if (phi_v1 == 0) {
            sp1E = arg0->yawTowardsPlayer;
            Audio_PlayActorSound2(arg0, 0x3884U);
            arg0->unk_310 = 8;
            temp_t2 = (u16) arg0[1].focus.rot.x ^ 2;
            arg0[1].focus.rot.x = temp_t2;
            if ((temp_t2 & 1) != 0) {
                arg0->unk_310 = (s16) (arg0->unk_310 * 2);
            }
            arg0[2].wallYaw = 0x1E;
        }
        phi_a2 = arg0->yawTowardsPlayer;
        if ((arg0[1].focus.rot.x & 2) != 0) {
            phi_a2 = (s16) (arg0->yawTowardsPlayer + 0x8000);
        }
    }
    return phi_a2;
}

void func_808A5CCC(Actor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->unk_310;
    if (temp_v0 != 0) {
        arg0->unk_310 = (s16) (temp_v0 - 1);
    }
    if ((s32) arg0->unk_310 < 8) {
        Math_ApproachS(&arg0->world.rot.y, func_808A5BEC(arg0), 3, 0x1FFE);
    } else {
        arg0->world.rot.y += 0x2AA8;
    }
    temp_v0_2 = arg0->unk_310;
    arg0->shape.rot.y = arg0->world.rot.y;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_310 = (s16) (temp_v0_2 - 1);
        phi_v1 = arg0->unk_310;
    }
    if (phi_v1 == 0) {
        arg0[1].focus.rot.x = (u16) arg0[1].focus.rot.x & 0xFFFE;
    }
}

void func_808A5D7C(EnSt *arg0) {
    if (arg0->unk_2C8 > 0.0f) {
        arg0->actor.world.pos.y = arg0->actor.home.pos.y - 10.0f;
        return;
    }
    arg0->actor.world.pos.y = arg0->actor.floorHeight + 20.0f;
}

void func_808A5DCC(Vec3s *arg0, u8 *arg1) {
    f32 temp_f2;
    f32 phi_f0;

    temp_f2 = arg0->unk_2D8;
    if (temp_f2 == 0.0f) {
        Math_SmoothStepToF(arg0 + 0x34C, 0.0f, 0.3f, 1000.0f, 0.0f);
        phi_f0 = arg0->unk_34C;
    } else {
        arg0->unk_34C = (f32) (arg0->unk_34C + temp_f2);
        if (arg0->unk_34C >= 255.0f) {
            arg0->unk_34C = 255.0f;
            arg0->unk_2D8 = (f32) (temp_f2 * -1.0f);
        }
        phi_f0 = arg0->unk_34C;
        if (arg0->unk_34C <= 0.0f) {
            arg0->unk_34C = 0.0f;
            arg0->unk_2D8 = (f32) (arg0->unk_2D8 * -1.0f);
            phi_f0 = arg0->unk_34C;
        }
    }
    arg1->unk_0 = (u8) (u32) phi_f0;
    arg1[1] = 0;
    arg1[2] = 0;
}

s32 func_808A5F28(EnSt *arg0, GlobalContext *arg1) {
    void *sp1C;
    s32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    void *temp_v1;
    s32 phi_a3;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp18 = 0;
    arg0 = arg0;
    sp1C = temp_v1;
    phi_a3 = sp18;
    if (Player_GetMask(arg1) == 0x10) {
        if (arg0->unk_2C8 <= 0.0f) {
            return 0;
        }
        return 1;
    }
    temp_f0 = arg0->unk_2C8;
    if ((((temp_f0 > 0.0f) && (arg0->actor.world.pos.y < temp_v1->world.pos.y)) || ((temp_f0 > 0.0f) && (arg0->actor.xzDistToPlayer > 180.0f)) || ((temp_f0 < 0.0f) && (temp_f0_2 = temp_v1->world.pos.y, (temp_f0_2 <= arg0->actor.world.pos.y)) && (arg0->actor.floorHeight <= temp_f0_2) && (arg0->actor.xzDistToPlayer < 120.0f))) && ((arg0->unk_18C & 8) == 0)) {
        phi_a3 = 1;
    }
    return phi_a3;
}

s32 func_808A6064(EnSt *arg0) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg0->unk_2C8 > 0.0f) {
        if ((arg0->actor.home.pos.y - 10.0f) < arg0->actor.world.pos.y) {
            goto block_4;
        }
    } else if (arg0->actor.world.pos.y < (arg0->actor.floorHeight + 20.0f)) {
block_4:
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_808A60E0(Actor *arg0) {
    f32 sp20;
    f32 sp1C;
    u16 sp1A;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f12;
    s32 phi_a2;
    f32 phi_f0;

    temp_f0 = arg0[2].focus.pos.y;
    phi_a2 = 6;
    phi_f0 = temp_f0;
    if (temp_f0 > 0.0f) {
        phi_a2 = 2;
    }
    temp_a0 = arg0 + 0x144;
    if (temp_f0 > 0.0f) {
        phi_f12 = 4.0f;
    } else {
        phi_f12 = 9.0f;
    }
    if (temp_f0 < 0.0f) {
        sp1A = 0x3868;
    } else {
        sp1A = 0x3869;
    }
    temp_f2 = arg0->unk_15C / (arg0->unk_158 - 1.0f);
    if (temp_f2 == 1.0f) {
        arg0 = arg0;
        sp1C = temp_f2;
        sp20 = phi_f12;
        func_8013BC6C(temp_a0, D_808A768C, phi_a2);
        Audio_PlayActorSound2(arg0, sp1A);
        phi_f0 = arg0[2].focus.pos.y;
    }
    arg0->unk_2D4 = (f32) ((1.0f - temp_f2) * phi_f12 * phi_f0);
    if (phi_f0 < 0.0f) {
        arg0->unk_2D4 = (f32) (phi_f0 * phi_f12);
    }
}

u8 func_808A61F4(Actor *arg0) {
    u8 temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->colChkInfo.damage;
    temp_v1 = arg0->colChkInfo.health;
    if ((s32) temp_v0 < (s32) temp_v1) {
        arg0->colChkInfo.health = temp_v1 - temp_v0;
    } else {
        arg0->colChkInfo.health = 0;
    }
    return arg0->colChkInfo.health;
}

void func_808A6220(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp2C;
    f32 *sp28;
    void (**sp24)(Actor *, GlobalContext *);
    CollisionCheckContext *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_4;
    CollisionCheckContext *temp_a1_5;
    f32 *temp_a1_2;
    s16 *temp_a1_6;
    s16 temp_v1;
    s16 temp_v1_2;
    void (**temp_a1_3)(Actor *, GlobalContext *);
    s16 phi_v0;
    s16 phi_v0_2;

    temp_v1 = arg0->unk_314;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0->unk_314 = (s16) (temp_v1 - 1);
        phi_v0 = arg0->unk_314;
    }
    if (phi_v0 == 0) {
        temp_a1 = arg0 + 0x1DC;
        if (arg0->colChkInfo.health != 0) {
            sp2C = temp_a1;
            Collider_UpdateCylinder(arg0, temp_a1);
            temp_a1_2 = &arg0[1].shape.feetPos[1].y;
            sp28 = temp_a1_2;
            Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_a1_2);
            temp_a1_3 = &arg0[1].init;
            sp24 = temp_a1_3;
            Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_a1_3);
            temp_v1_2 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
            phi_v0_2 = temp_v1_2;
            if ((s32) temp_v1_2 < 0) {
                phi_v0_2 = (s16) -(s32) temp_v1_2;
            }
            if ((s32) phi_v0_2 < 0x4E00) {
                temp_a1_4 = arg1 + 0x18884;
                sp20 = temp_a1_4;
                CollisionCheck_SetAC(arg1, temp_a1_4, (Collider *) sp28);
            } else {
                temp_a1_5 = &arg1->colChkCtx;
                sp20 = temp_a1_5;
                CollisionCheck_SetAC(arg1, temp_a1_5, (Collider *) sp2C);
            }
            CollisionCheck_SetAC(arg1, sp20, (Collider *) sp24);
        }
    }
    temp_a1_6 = &arg0[1].focus.rot.z;
    if (arg0->colChkInfo.health != 0) {
        sp20 = &arg1->colChkCtx;
        sp2C = (ColliderCylinder *) temp_a1_6;
        Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_a1_6);
        if (((arg0[2].focus.pos.y < 0.0f) && (((u16) arg0[1].focus.rot.x & 0x10) != 0)) || (((u16) arg0[1].focus.rot.x & 1) != 0)) {
            arg0[1].bgCheckFlags = -0x28;
            arg0->unk_1D0 = 0x38;
            arg0->unk_1D2 = 0x50;
        } else {
            arg0[1].bgCheckFlags = -0x14;
            arg0->unk_1D0 = 0x12;
            arg0->unk_1D2 = 0x30;
        }
        CollisionCheck_SetOC(arg1, sp20, (Collider *) sp2C);
        CollisionCheck_SetAT(arg1, sp20, (Collider *) sp2C);
    }
}

void func_808A63E8(EnSt *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    func_8013BC6C(temp_a0, D_808A768C, 3);
    arg0->unk_2C8 = 1.0f;
    func_808A5D7C(arg0);
    arg0->unk_30C = 0;
    arg0->unk_18C &= 0xFFEF;
    arg0->unk_2C8 = -1.0f;
    arg0->unk_2D4 = 0.0f;
    arg0->unk_2CC = 0.0f;
    arg0->unk_2C4 = 1.0f;
}

void func_808A6468(EnSt *arg0) {
    u16 temp_t8;

    func_808A5050(arg0);
    func_8013BC6C(arg0 + 0x144, D_808A768C, 4);
    temp_t8 = arg0->unk_18C | 0xC;
    arg0->unk_18C = temp_t8;
    arg0->unk_18C = temp_t8 & 0xFFED;
    arg0->unk_2C8 = -1.0f;
    func_808A5D7C(arg0);
    arg0->unk_30E = 0x1E;
    arg0->unk_30C = 0;
    arg0->unk_2C8 = 1.0f;
    arg0->unk_2D8 = 30.0f;
    arg0->unk_2D4 = 0.0f;
    arg0->unk_2CC = 0.0f;
    arg0->unk_2C4 = 6.0f;
}

void func_808A650C(EnSt *arg0) {
    SkelAnime *temp_a0;
    u16 temp_t8;
    u16 temp_t9;
    s32 phi_a2;

    temp_a0 = arg0 + 0x144;
    phi_a2 = 6;
    if (arg0->unk_2C8 > 0.0f) {
        phi_a2 = 2;
    }
    arg0 = arg0;
    func_8013BC6C(temp_a0, D_808A768C, phi_a2);
    arg0->unk_2CC = 0.0f;
    arg0->unk_2D4 = 0.0f;
    temp_t8 = arg0->unk_18C & 0xFFFB;
    temp_t9 = temp_t8 | 0x10;
    arg0->unk_18C = temp_t8;
    arg0->unk_18C = temp_t9;
    arg0->unk_2D8 = 0.0f;
}

s32 func_808A6580(Actor *arg0, GlobalContext *arg1) {
    Actor *sp3C;
    s32 sp38;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    Actor *phi_v0;
    s32 phi_v1;
    Actor *phi_v0_2;
    s32 phi_v1_2;

    sp38 = 0;
    sp3C = arg1->actorCtx.actorList[2].first;
    temp_v0 = arg0->unk_316;
    if (temp_v0 != 0) {
        arg0->unk_316 = (s16) (temp_v0 - 1);
    }
    if ((arg0->unk_239 & 2) != 0) {
        phi_v0 = arg0;
        phi_v1 = 0;
        if (arg0->unk_18E == 0xA) {
            do {
                temp_v1 = phi_v1 + 4;
                phi_v0->unk_31C = 0;
                phi_v0->unk_31E = 0;
                phi_v0->unk_320 = 0;
                phi_v0->unk_322 = 0;
                phi_v0 += 8;
                phi_v1 = temp_v1;
            } while (temp_v1 != 0xC);
            arg0[2].bgCheckFlags = 0;
        }
        if (arg0->colChkInfo.damageEffect == 4) {
            Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        arg0->unk_239 = (u8) (arg0->unk_239 & 0xFFFD);
    }
    temp_v0_2 = arg0->unk_1ED;
    if (((temp_v0_2 & 2) != 0) || ((arg0->unk_285 & 2) != 0)) {
        arg0->unk_1ED = (u8) (temp_v0_2 & 0xFFFD);
        arg0->unk_285 = (u8) (arg0->unk_285 & 0xFFFD);
        if (arg0->colChkInfo.damageEffect == 4) {
            Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        phi_v0_2 = arg0;
        phi_v1_2 = 0;
        if (arg0->unk_18E == 0xA) {
            do {
                temp_v1_2 = phi_v1_2 + 4;
                phi_v0_2->unk_31C = 0;
                phi_v0_2->unk_31E = 0;
                phi_v0_2->unk_320 = 0;
                phi_v0_2->unk_322 = 0;
                phi_v0_2 += 8;
                phi_v1_2 = temp_v1_2;
            } while (temp_v1_2 != 0xC);
            arg0[2].bgCheckFlags = 0;
        } else if (func_808A61F4(arg0) != 0) {
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            if (temp_v0_3 != 1) {
                if (temp_v0_3 != 5) {
                    Audio_PlayActorSound2(arg0, 0x386BU);
                    arg0->unk_314 = 0x14;
                    arg0->unk_312 = 0;
                    func_800BCB70(arg0, 0x4000, 0xC8, 0, (s16) (s32) arg0->unk_314);
                    func_8013BC6C((SkelAnime *) &arg0[1], D_808A768C, 1);
                    arg0[1].focus.rot.x = (u16) arg0[1].focus.rot.x | 8;
                    arg0[1].focus.pos.z = (bitwise f32) func_808A6D84;
                    arg0[2].focus.pos.y = -1.0f;
                } else {
                    arg0->unk_18E = 0x1EU;
                    arg0->unk_312 = 0x28;
                    func_808A576C(arg0);
                    func_800BCB70(arg0, 0, 0xC8, 0, (s16) (s32) arg0->unk_312);
                }
            } else {
                Audio_PlayActorSound2(arg0, 0x389EU);
                arg0->unk_312 = 0x28;
                func_800BCB70(arg0, 0, 0xC8, 0, (s16) (s32) arg0->unk_312);
            }
        } else {
            temp_a1 = arg0->params & 0x3F & 0xFF;
            if (temp_a1 != 0x3F) {
                Actor_SetSwitchFlag(arg1, temp_a1);
            }
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x28, 0x3885U);
            Enemy_StartFinishingBlow(arg1, arg0);
            temp_v0_4 = arg0->colChkInfo.damageEffect;
            arg0->flags &= -2;
            if (temp_v0_4 != 2) {
                if (temp_v0_4 != 3) {
                    if (temp_v0_4 != 4) {
                        arg0->unk_18E = 1U;
                        arg0[2].bgCheckFlags = 0;
                    } else {
                        arg0->unk_18E = 0x14U;
                        arg0[2].bgCheckFlags = 0x14;
                        func_808A576C(arg0);
                    }
                } else {
                    arg0->unk_18E = 0xAU;
                    arg0[2].bgCheckFlags = 0;
                    func_808A576C(arg0);
                }
            } else {
                arg0->unk_18E = 0U;
                arg0[2].bgCheckFlags = 0x14;
                func_808A576C(arg0);
            }
            if (arg0->unk_18E != 0xA) {
                func_8013BC6C((SkelAnime *) &arg0[1], D_808A768C, 7);
                arg0[2].focus.pos.z = 0.0f;
                arg0->unk_2D4 = 0.0f;
                arg0->gravity = -1.0f;
            }
            arg0->unk_314 = 0x14;
            arg0->unk_312 = 0;
            func_800BCB70(arg0, 0x4000, 0xC8, 0, (s16) (s32) arg0->unk_314);
            sp38 = 1;
        }
        arg0->unk_310 = 0;
        arg0[1].focus.rot.x = (u16) arg0[1].focus.rot.x & 0xFFFE;
    }
    if (((arg0->unk_1A3 & 1) != 0) || ((arg0->unk_1A0 & 2) != 0)) {
        if ((arg0->unk_316 == 0) && (arg0->unk_314 == 0) && (arg0->unk_312 == 0) && ((arg0->unk_1A0 & 4) == 0) && (arg0->colChkInfo.health != 0)) {
            arg1->damagePlayer(arg1, -8);
            Audio_PlayActorSound2(sp3C, 0x83EU);
            func_800B8D98(arg1, arg0, 4.0f, arg0->yawTowardsPlayer, 6.0f);
            arg0->unk_316 = 0xA;
            arg0[1].focus.rot.x = (u16) arg0[1].focus.rot.x | 1;
            arg0[2].wallYaw = 0;
        }
        arg0->unk_1A0 = (u8) (arg0->unk_1A0 & 0xFFFD);
        arg0->unk_1A2 = (u8) (arg0->unk_1A2 & 0xFFFD);
    }
    return sp38;
}

s32 func_808A6A3C(EnSt *arg0) {
    s32 phi_v1;

    phi_v1 = 0;
    if (((((s32) (arg0->actor.params & 0x1C0) >> 6) & 0xFF) == 1) && (arg0->actor.colChkInfo.health != 0)) {
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_808A6A78(EnSt *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk_2C0) != 0) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 8.0f);
        temp_a1 = &this->unk_144;
        sp34 = temp_a1;
        SkelAnime_Init(globalCtx, temp_a1, &D_06005298, NULL, &this->unk_3E8, &this->unk_49C, 0x1E);
        func_8013BC6C(sp34, D_808A768C, 0);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_190, (Actor *) this, &D_808A75B0);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_1DC, (Actor *) this, &D_808A75DC);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_228, (Actor *) this, &D_808A7608);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_274, (Actor *) this, &D_808A7634);
        CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_808A766C, &D_808A7660);
        if ((((s32) (this->actor.params & 0x1C0) >> 6) & 0xFF) == 1) {
            this->actor.flags |= 0x80;
        }
        Actor_SetScale((Actor *) this, 0.04f);
        this->actor.draw = func_808A7478;
        this->actor.hintId = 4;
        this->actor.gravity = 0.0f;
        func_808A63E8(this);
        this->unk_18C = 0;
        this->unk_18C = 0 & 0xFFEF;
        this->actionFunc = func_808A6C04;
    }
}

void func_808A6C04(EnSt *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f6;

    temp_f6 = Math_SinS(this->unk_30C) * this->unk_2C4;
    this->unk_30C += 0xE00;
    this->unk_2CC = temp_f6;
    Math_ApproachF(&this->unk_2C4, 1.0f, 0.1f, 0.3f);
    this->actor.velocity.y = this->unk_2D4 + this->unk_2CC;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    temp_a0 = &this->unk_144;
    if (((this->unk_18C & 8) != 0) && (sp24 = temp_a0, (func_801378B8(temp_a0, this->unk_144.animFrameCount) != 0))) {
        func_8013BC6C(temp_a0, D_808A768C, 3);
        this->unk_18C &= 0xFFF7;
        return;
    }
    if ((this->unk_310 == 0) && (func_808A5F28(this, globalCtx) != 0) && (func_808A6064(this) == 0)) {
        func_808A650C(this);
        this->actionFunc = func_808A6D84;
        return;
    }
    if ((this->unk_316 == 0) && (this->unk_314 == 0) && (this->unk_312 == 0) && (this->unk_2C8 > 0.0f) && (this->actor.xzDistToPlayer < 62.0f)) {
        this->unk_30E = 0;
        this->unk_18C |= 1;
    }
    func_808A5CCC((Actor *) this);
}

void func_808A6D84(EnSt *this, GlobalContext *globalCtx) {
    func_808A60E0((Actor *) this);
    this->actor.velocity.y = this->unk_2D4 + this->unk_2CC;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (func_808A6064(this) != 0) {
        if (this->unk_2C8 < 0.0f) {
            func_808A6468(this, globalCtx);
        } else {
            func_808A63E8(this);
        }
        this->actionFunc = func_808A6C04;
    }
    func_808A5CCC((Actor *) this);
}

void func_808A6E24(EnSt *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_a1;
    EnSt *phi_v0;
    s16 phi_a0;
    s32 phi_a1;
    s32 phi_a2;
    s32 phi_a2_2;

    phi_a1 = 0;
    phi_a2_2 = 0;
    if (this->unk_18E == 0xA) {
        phi_v0 = this;
        do {
            temp_v1 = phi_v0->unk_31C;
            temp_a1 = phi_a1 + 2;
            phi_a1 = temp_a1;
            phi_a2 = phi_a2_2;
            if (temp_v1 == 0) {
                phi_a0 = 0;
            } else {
                phi_v0->unk_31C = temp_v1 - 1;
                phi_a0 = phi_v0->unk_31C;
            }
            if (phi_a0 == 0) {
                phi_a2 = phi_a2_2 + 1;
            }
            phi_v0 += 2;
            phi_a2_2 = phi_a2;
        } while (temp_a1 != 0x18);
        if (phi_a2 == 0xC) {
            func_8013BC6C(&this->unk_144, D_808A768C, 7);
            this->unk_18E = 1;
            this->unk_2CC = 0.0f;
            this->unk_2D4 = 0.0f;
            this->actor.gravity = -1.0f;
            func_808A5AF8((bitwise Actor *) 0.0f, (GlobalContext *) this, globalCtx);
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    if ((this->unk_18C & 0x80) != 0) {
        this->actionFunc = func_808A701C;
        this->actor.gravity = 0.0f;
        this->unk_2CC = 0.0f;
        this->unk_2D4 = 0.0f;
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.world.rot.x = 0x4000;
        this->actor.shape.yOffset = 400.0f;
        this->actor.shape.rot.x = this->actor.world.rot.x;
        temp_f2 = fabsf(this->actor.velocity.y) * 0.6f;
        this->actor.speedXZ = 0.0f;
        this->actor.velocity.y = temp_f2;
        this->unk_2D0 = temp_f2;
        if ((s32) temp_f2 != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x387BU);
        } else {
            this->actor.velocity.y = 0.0f;
            this->actionFunc = func_808A701C;
        }
        if ((s32) this->actor.velocity.y >= 2) {
            func_808A52A8(this, globalCtx);
        }
    } else {
        Math_ApproachF(&this->actor.shape.yOffset, 400.0f, 0.3f, 1000.0f);
        this->actor.world.rot.x += 0x1000;
        if ((s32) this->actor.world.rot.x >= 0x4000) {
            this->actor.world.rot.x = 0x4000;
        }
        this->actor.shape.rot.x = this->actor.world.rot.x;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_808A701C(EnSt *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_a1;
    s16 phi_a0;
    EnSt *phi_v0;
    s16 phi_a0_2;
    s32 phi_a1;
    s32 phi_a2;
    s16 phi_a0_3;
    s32 phi_a2_2;

    phi_a1 = 0;
    phi_a2_2 = 0;
    if ((this->unk_18C & 0x40) != 0) {
        temp_v0 = this->unk_318;
        if (temp_v0 == 0) {
            phi_a0 = 0;
        } else {
            this->unk_318 = temp_v0 - 1;
            phi_a0 = this->unk_318;
        }
        phi_v0 = this;
        if (phi_a0 == 0) {
            this->unk_18C |= 0x20;
        }
        do {
            temp_v1 = phi_v0->unk_31C;
            temp_a1 = phi_a1 + 2;
            phi_a1 = temp_a1;
            phi_a2 = phi_a2_2;
            if (temp_v1 == 0) {
                phi_a0_2 = 0;
            } else {
                phi_v0->unk_31C = temp_v1 - 1;
                phi_a0_2 = phi_v0->unk_31C;
            }
            if (phi_a0_2 == 0) {
                phi_a2 = phi_a2_2 + 1;
            }
            phi_v0 += 2;
            phi_a2_2 = phi_a2;
        } while (temp_a1 != 0x18);
        if (phi_a2 == 0xC) {
            Item_DropCollectibleRandom(globalCtx, NULL, (Vec3f *) &this->actor.world, 0);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = this->unk_318;
    if (temp_v0_2 == 0) {
        phi_a0_3 = 0;
    } else {
        this->unk_318 = temp_v0_2 - 1;
        phi_a0_3 = this->unk_318;
    }
    if (phi_a0_3 == 0) {
        this->unk_18C |= 0x40;
        if (this->unk_18E == 1) {
            func_808A576C((Actor *) this, 0, 0, 0x18);
            this->unk_318 = 0xA;
        }
    }
}

void EnSt_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_a1;
    Actor *phi_a2;
    EnSt *this = (EnSt *) thisx;

    this = this;
    this->unk_2C0 = Object_GetIndex(&globalCtx->objectCtx, 1);
    temp_a1 = this->actor.params & 0x3F & 0xFF;
    if (((temp_a1 != 0x3F) && (this = this, phi_a2 = (Actor *) this, (Flags_GetSwitch(globalCtx, temp_a1) != 0))) || (phi_a2 = (Actor *) this, ((s32) this->unk_2C0 < 0))) {
        Actor_MarkForDeath(phi_a2);
        return;
    }
    this->actionFunc = func_808A6A78;
}

void EnSt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSt *this = (EnSt *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_190);
    Collider_DestroyCylinder(globalCtx, &this->unk_1DC);
    Collider_DestroyCylinder(globalCtx, &this->unk_228);
    Collider_DestroyCylinder(globalCtx, &this->unk_274);
}

void EnSt_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    s32 temp_v1;
    u32 temp_v0;
    s16 phi_v1;
    s32 phi_v0;
    EnSt *phi_v0_2;
    s32 phi_v1_2;
    EnSt *this = (EnSt *) thisx;

    temp_v0 = this->actor.flags;
    if ((temp_v0 & 0x8000) != 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
        this->unk_18C |= 0x80;
        return;
    }
    if (((temp_v0 & 0x80) == 0) && (func_808A6A3C(this) != 0)) {
        this->actor.flags |= 0x80;
    }
    if (func_808A6580((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_808A6E24;
    } else {
        temp_v0_2 = this->unk_312;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            this->unk_312 = temp_v0_2 - 1;
            phi_v1 = this->unk_312;
        }
        if (phi_v1 == 0) {
            this->actionFunc(this, globalCtx);
            if (this->unk_18E != 0xA) {
                SkelAnime_FrameUpdateMatrix(&this->unk_144);
            }
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 5U);
        } else if ((s32) this->unk_312 < 0x14) {
            if (((s32) this->unk_312 % 2) != 0) {
                phi_v0 = -1;
            } else {
                phi_v0 = 1;
            }
            this->actor.shape.rot.y = (s16) (phi_v0 << 0xB) + this->actor.world.rot.y;
            if (this->unk_18E == 0x1E) {
                phi_v0_2 = this;
                phi_v1_2 = 0;
                if (this->unk_312 == 1) {
                    do {
                        temp_v1 = phi_v1_2 + 4;
                        phi_v0_2->unk_31C = 0;
                        phi_v0_2->unk_31E = 0;
                        phi_v0_2->unk_320 = 0;
                        phi_v0_2->unk_322 = 0;
                        phi_v0_2 += 8;
                        phi_v1_2 = temp_v1;
                    } while (temp_v1 != 0xC);
                }
            }
        }
    }
    Actor_SetHeight((Actor *) this, 0.0f);
    func_808A6220((Actor *) this, globalCtx);
}

s32 func_808A73E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, void **arg6) {
    u8 sp20;
    void *temp_v1;
    void *temp_v1_2;

    if (arg1 == 4) {
        func_808A5DCC(arg5, &sp20);
        temp_v1 = *arg6;
        *arg6 = temp_v1 + 8;
        temp_v1->unk_4 = 0;
        temp_v1->unk_0 = 0xE7000000;
        temp_v1_2 = *arg6;
        *arg6 = temp_v1_2 + 8;
        temp_v1_2->unk_0 = 0xFB000000;
        temp_v1_2->unk_4 = (s32) ((sp20 << 0x18) | (sp21 << 0x10) | (sp22 << 8));
    }
    return 0;
}

void func_808A7478(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    if (((u16) this[1].focus.rot.x & 0x20) == 0) {
        temp_s0 = globalCtx->state.gfxCtx;
        if (func_808A6A3C((EnSt *) this) != 0) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            temp_s0->polyXlu.p = SkelAnime_Draw2(globalCtx, (void **) this[1].flags, this->unk_164, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_808A73E8, NULL, this, temp_s0->polyXlu.p);
        } else {
            func_8012C28C(globalCtx->state.gfxCtx);
            temp_s0->polyOpa.p = SkelAnime_Draw2(globalCtx, (void **) this[1].flags, this->unk_164, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_808A73E8, NULL, this, temp_s0->polyOpa.p);
        }
    }
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        temp_s0_2 = phi_s0 + 1;
        temp_s1 = phi_s1 + func_808A5988(this, globalCtx, phi_s0);
        phi_s0 = temp_s0_2;
        phi_s1 = temp_s1;
    } while (temp_s0_2 != 0xC);
    if (temp_s1 != 0) {
        this[2].yawTowardsPlayer += 2;
    }
    func_808A54B0(this, (GraphicsContext **) globalCtx);
}
