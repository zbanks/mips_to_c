typedef struct EnSw {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x154 */ f32 unk_154;                        /* overlap; inferred */
    /* 0x188 */ void (*actionFunc)(EnSw *, GlobalContext *);
    /* 0x18C */ ColliderSphere unk_18C;             /* inferred */
    /* 0x1E4 */ u8 *unk_1E4;                        /* inferred */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0xAE];                 /* maybe part of unk_1E8[30]? */
    /* 0x29C */ Vec3s unk_29C;                      /* inferred */
    /* 0x2A2 */ char pad_2A2[0xC6];                 /* maybe part of unk_29C[34]? */
    /* 0x368 */ f32 unk_368;                        /* inferred */
    /* 0x36C */ f32 unk_36C;                        /* inferred */
    /* 0x370 */ f32 unk_370;                        /* inferred */
    /* 0x374 */ Vec3f unk_374;                      /* inferred */
    /* 0x380 */ char pad_380[0x90];                 /* maybe part of unk_374[13]? */
    /* 0x410 */ u16 unk_410;                        /* inferred */
    /* 0x412 */ u8 unk_412;                         /* inferred */
    /* 0x413 */ char pad_413[0x1];
    /* 0x414 */ f32 unk_414;                        /* inferred */
    /* 0x418 */ char pad_418[0x30];                 /* maybe part of unk_414[13]? */
    /* 0x448 */ f32 unk_448;                        /* inferred */
    /* 0x44C */ f32 unk_44C;                        /* inferred */
    /* 0x450 */ f32 unk_450;                        /* inferred */
    /* 0x454 */ s16 unk_454;                        /* inferred */
    /* 0x456 */ s16 unk_456;                        /* inferred */
    /* 0x458 */ char pad_458[0x2];
    /* 0x45A */ s16 unk_45A;                        /* inferred */
    /* 0x45C */ s16 unk_45C;                        /* inferred */
    /* 0x45E */ s16 unk_45E;                        /* inferred */
    /* 0x460 */ s16 unk_460;                        /* inferred */
    /* 0x462 */ s16 unk_462;                        /* inferred */
    /* 0x464 */ char pad_464[0x34];                 /* maybe part of unk_462[27]? */
    /* 0x498 */ s16 unk_498;                        /* inferred */
    /* 0x49A */ char pad_49A[0x2];
    /* 0x49C */ s32 unk_49C;                        /* inferred */
    /* 0x4A0 */ s32 unk_4A0;                        /* inferred */
} EnSw;                                             /* size = 0x4A4 */

struct _mips2c_stack_EnSw_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSw_Draw {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnSw_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnSw_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D8940 {
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

struct _mips2c_stack_func_808D8B58 {
    /* 0x00 */ char pad_0[0x70];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_808D8D60 {
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

struct _mips2c_stack_func_808D8ED0 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808D8FC4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D90C4 {};              /* size 0x0 */

struct _mips2c_stack_func_808D90F0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D91C4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808D93BC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x14];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808D9440 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ CollisionContext *sp30;              /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808D94D0 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ u32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ u32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];                    /* maybe part of sp6C[3]? */
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x4];
    /* 0xA0 */ CollisionPoly *spA0;                 /* inferred */
    /* 0xA4 */ CollisionPoly *spA4;                 /* inferred */
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_808D9894 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808D9968 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808D99C8 {};              /* size 0x0 */

struct _mips2c_stack_func_808D9A70 {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808D9C18 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808D9DA0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x44];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808D9E44 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Vec3f *sp18;                         /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808D9F08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808D9F78 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808DA024 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808DA08C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808DA350 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808DA3F4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2C[3]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x2];
    /* 0x46 */ s16 sp46;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808DA578 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808DA6FC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808DA89C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808DAA60 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808DACF4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808DAEB4 {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808DB100 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808DB25C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808DB2E0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808DB7F4 {};              /* size 0x0 */

u8 *func_8013BEDC(GlobalContext *, s32, ?, s32 *);  /* extern */
void func_808D8940(EnSw *arg0, GlobalContext *arg1); /* static */
? func_808D8B58(Actor *arg0);                       /* static */
s16 func_808D8D60(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_808D8ED0(Actor *arg0, GlobalContext *arg1); /* static */
void func_808D8FC4(EnSw *arg0, GlobalContext *arg1); /* static */
u8 func_808D90C4(Actor *arg0);                      /* static */
void func_808D90F0(Actor *arg0, s32 arg1, s16 arg2); /* static */
? func_808D91C4(Actor *arg0, CollisionPoly *arg1);  /* static */
void func_808D93BC(Actor *arg0);                    /* static */
s32 func_808D9440(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 *arg5, CollisionPoly **, s32 *); /* static */
void func_808D94D0(Actor *arg0, Vec3f *arg1, s32 arg2, s32 arg3, s16 arg4); /* static */
void func_808D9894(EnSw *arg0, Vec3f *arg1);        /* static */
s32 func_808D9968(EnSw *arg0, GlobalContext *arg1); /* static */
s32 func_808D99C8(Actor *arg0, GlobalContext *arg1); /* static */
? func_808D9A70(Actor *arg0, Vec3f *arg1, EnSw *);  /* static */
? func_808D9C18(Actor *arg0);                       /* static */
void func_808D9DA0(Actor *arg0);                    /* static */
void func_808D9E44(Actor *arg0, s32, s32, s32);     /* static */
void func_808D9F08(EnSw *arg0);                     /* static */
void func_808D9F78(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_808DA024(Actor *arg0, Vec3f *arg1);       /* static */
s32 func_808DA08C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808DB7F4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
extern Gfx D_06003FB0;
extern Gfx D_060043D8;
extern Gfx D_060045C0;
extern Gfx D_06004658;
extern Gfx D_060046F0;
extern Gfx D_06004788;
extern Gfx D_06004820;
extern Gfx D_060048B8;
extern Gfx D_06004950;
extern Gfx D_060049E8;
extern SkeletonHeader D_06005298;
static ColliderSphereInit D_808DB9E0 = {
    {0xA, 0x11, 9, 0x39, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x10}, 0x64},
};
static CollisionCheckInfoInit2 D_808DBA0C = {1, 0, 0, 0, 0xFF};
static DamageTable D_808DBA18 = {
    {
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        2,
        0x22,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        1,
        0x51,
        1,
        1,
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
static CollisionCheckInfoInit2 D_808DBA38 = {1, 0, 0, 0, 0xFF};
static DamageTable D_808DBA44 = {
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
        2,
        0x22,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        0x10,
        0x51,
        1,
        1,
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
static ActorAnimationEntryS D_808DBA64[4] = {
    {(AnimationHeader *)0x6000304, 1.0f, 0, 0xFFFF, 3, 0},
    {(AnimationHeader *)0x6000304, 1.0f, 0, 0xFFFF, 3, 0xFFFC},
    {(AnimationHeader *)0x60055A8, 1.0f, 0, 0xFFFF, 1, 0xFFFC},
    {(AnimationHeader *)0x6005B98, 1.0f, 0, 0xFFFF, 1, 0xFFFC},
};
static Color_RGBA8 D_808DBAA4 = {0xAA, 0x82, 0x5A, 0xFF};
static Color_RGBA8 D_808DBAA8 = {0x64, 0x3C, 0x14, 0};
static Vec3f D_808DBAAC = {0.0f, 1.0f, 0.0f};

void func_808D8940(EnSw *arg0, GlobalContext *arg1) {
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
        sp98 = 0.7f;
        sp9C = 2.0f;
        Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, phi_s0, (Vec3f *) temp_s5, (Vec3f *) &spB8);
        spA0 = arg0->actor.world.pos.x + (2.0f * spB8);
        spA8 = arg0->actor.world.pos.z + (2.0f * spC0);
        func_800B0EB0(arg1, (Vec3f *) &spA0, (Vec3f *) &spB8, (Vec3f *) &spAC, &D_808DBAA4, &D_808DBAA8, (s16) 0x3C, (s16) 0x1E, (s16) (s32) (temp_f4 + 8.0f));
        temp_s1 = phi_s1 + 1;
        phi_s0 = (s16) (phi_s0 + 0x1FFE);
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
}

? func_808D8B58(Actor *arg0) {
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
        if (arg0->unk_412 != 0xA) {
            phi_s0->unk_464 = (s16) (s32) ((Rand_ZeroOne() * 16.0f) + 8.0f);
        } else {
            phi_s0->unk_464 = 0x50;
        }
        phi_s0[3].colChkInfo.cylRadius = phi_s0->unk_464;
        phi_s4->unk_418 = 0.45000002f;
        temp_v0 = arg0->unk_412;
        if ((temp_v0 == 0) || (temp_v0 == 1) || (temp_v0 == 0xA)) {
            phi_s1[2].uncullZoneForward = (Rand_ZeroOne() - 0.5f) * 20.0f;
        } else {
            phi_s1[2].uncullZoneForward = ((Rand_ZeroOne() - 0.5f) * 20.0f) + 10.0f;
        }
        phi_s1[2].projectedW = Math_SinS(phi_s2) * 10.0f;
        temp_s3 = phi_s3 + 4;
        temp_s1 = phi_s1 + 0xC;
        temp_s1[2].projectedPos.z = Math_CosS(phi_s2) * 10.0f;
        phi_s0 += 2;
        phi_s4 += 4;
        phi_s1 = temp_s1;
        phi_s2 = (s16) (phi_s2 + 0x1555);
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x30);
    arg0->unk_462 = 1;
    return 0;
}

s16 func_808D8D60(Actor *arg0, GlobalContext *arg1, s32 arg2) {
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
    if (arg2 < (s32) arg0->unk_462) {
        temp_v0 = temp_v1->unk_464;
        if (temp_v0 != 0) {
            temp_t1 = arg0 + (arg2 * 4);
            sp40 = (f32) temp_v0 / (f32) temp_v1->unk_47C;
            temp_t0 = arg0->unk_412;
            sp34 = temp_t1;
            sp3C = temp_v1;
            sp53 = temp_t0;
            Math_ApproachF(temp_t1 + 0x418, 0.3f, 0.3f, 0.5f);
            Math_Vec3f_Copy((Vec3f *) &sp44, arg0 + 0x24);
            temp_v0_2 = arg0 + (arg2 * 0xC);
            sp44 += temp_v0_2->unk_380;
            sp48 += temp_v0_2->unk_384;
            sp4C += temp_v0_2->unk_388;
            phi_t0 = (s32) temp_t0;
            phi_a3 = 1;
            phi_t0 = (s32) temp_t0;
            if (temp_t0 == 0xA) {
                if ((temp_v1->unk_47C - temp_v1->unk_464) < 0x14) {
                    phi_t0 = 0xB;
                }
                sp40 = 1.0f;
            }
            func_800BE680(arg1, arg0, (Vec3f []) (Vec3f *) &sp44, 1, 0.3f, sp34->unk_418, sp40, (u8) phi_t0);
        }
    }
    return phi_a3;
}

void func_808D8ED0(Actor *arg0, GlobalContext *arg1) {
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
    temp_s2 = arg0 + 0x380;
    arg0 = arg0;
    phi_s0 = temp_s0;
    phi_s2 = temp_s2;
    phi_s1 = 0;
    do {
        Math_Vec3f_Copy((Vec3f *) &sp54, temp_s4);
        temp_a1 = &sp54;
        sp54 += phi_s0[2].projectedW;
        sp58 += phi_s0[2].uncullZoneForward;
        sp5C += phi_s0[2].uncullZoneScale;
        Math_Vec3f_Copy(phi_s2, (Vec3f *) temp_a1);
        temp_s1 = phi_s1 + 0xC;
        phi_s0 += 0xC;
        phi_s2 = &phi_s2[1];
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x90);
    func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x380), 0xC, 3, 0.1f, 0.3f);
}

void func_808D8FC4(EnSw *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;

    Math_Vec3f_ToVec3s(arg0 + 0x1D4, arg0 + 0x24);
    arg0->unk_18C.dim.worldSphere.radius = (s16) (s32) ((f32) arg0->unk_18C.dim.modelSphere.radius * arg0->unk_18C.dim.scale);
    if (((arg0->unk_410 & 0x10) == 0) && (arg0->actor.colChkInfo.health != 0)) {
        temp_v0 = arg0->unk_458;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_458 = temp_v0 - 1;
            phi_v1 = (s32) arg0->unk_458;
        }
        if (phi_v1 < 0xB) {
            CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x18C);
        }
    }
    if (((arg0->unk_410 & 0x10) == 0) && (arg0->actor.colChkInfo.health != 0)) {
        CollisionCheck_SetAT(arg1, &arg1->colChkCtx, arg0 + 0x18C);
    }
    if ((arg0->unk_410 & 4) != 0) {
        CollisionCheck_SetOC(arg1, &arg1->colChkCtx, arg0 + 0x18C);
    }
}

u8 func_808D90C4(Actor *arg0) {
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

void func_808D90F0(Actor *arg0, s32 arg1, s16 arg2) {
    ? sp2C;
    s16 sp2A;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s32 phi_v0;

    phi_v0 = arg2 << 0x10;
    if (arg1 == 1) {
        sp2A = arg0->unk_494;
        Math_ApproachS(arg0 + 0x494, arg0->unk_496, 4, 0xE38);
        phi_v0 = (arg0->unk_494 - sp2A) << 0x10;
    }
    temp_a1 = arg0 + 0x368;
    sp24 = temp_a1;
    SysMatrix_InsertRotationAroundUnitVector_f(((f32) (phi_v0 >> 0x10) / 32768.0f) * 3.1415927f, temp_a1, 0);
    temp_a0 = arg0 + 0x350;
    sp20 = temp_a0;
    SysMatrix_MultiplyVector3fByState(temp_a0, (Vec3f *) &sp2C);
    Math_Vec3f_Copy(temp_a0, (Vec3f *) &sp2C);
    Math3D_CrossProduct(sp24, sp20, arg0 + 0x35C);
}

? func_808D91C4(Actor *arg0, CollisionPoly *arg1) {
    f32 sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    ? sp2C;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;

    arg0->floorPoly = arg1;
    if (arg1 != 0) {
        sp38 = (f32) arg1->normal.x * 0.00003051851f;
        sp3C = (f32) arg1->normal.y * 0.00003051851f;
        sp40 = (f32) arg1->normal.z * 0.00003051851f;
        temp_f12 = (arg0[2].shape.feetPos[1].x * sp38) + (sp3C * arg0[2].shape.feetPos[1].y) + (sp40 * arg0[2].shape.feetPos[1].z);
        if (fabsf(temp_f12) >= 0.999f) {
            return 0;
        }
        temp_f0 = func_80086C48(temp_f12);
        sp4C = temp_f0;
        temp_a0 = arg0 + 0x368;
        if (temp_f0 < 0.001f) {
            return 0;
        }
        sp28 = temp_a0;
        Math3D_CrossProduct(temp_a0, (Vec3f *) &sp38, (Vec3f *) &sp2C);
        temp_f0_2 = Math3D_Vec3fMagnitude((Vec3f *) &sp2C);
        if (temp_f0_2 < 0.001f) {
            return 0;
        }
        Math_Vec3f_Scale((Vec3f *) &sp2C, 1.0f / temp_f0_2);
        SysMatrix_InsertRotationAroundUnitVector_f(sp4C, (Vec3f *) &sp2C, 0);
        temp_a0_2 = arg0 + 0x35C;
        sp24 = temp_a0_2;
        SysMatrix_MultiplyVector3fByState(temp_a0_2, (Vec3f *) &sp2C);
        Math_Vec3f_Copy(temp_a0_2, (Vec3f *) &sp2C);
        temp_a2 = arg0 + 0x350;
        sp20 = temp_a2;
        Math3D_CrossProduct(temp_a0_2, (Vec3f *) &sp38, temp_a2);
        temp_f0_3 = Math3D_Vec3fMagnitude(sp20);
        if (temp_f0_3 < 0.001f) {
            return 0;
        }
        Math_Vec3f_Scale(sp20, 1.0f / temp_f0_3);
        Math_Vec3f_Copy(sp28, (Vec3f *) &sp38);
        return 1;
    }
    return 0;
}

void func_808D93BC(Actor *arg0) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    Vec3s *temp_a1;
    f32 *temp_a0;
    f32 temp_f8;

    temp_a0 = &sp18;
    temp_a1 = arg0 + 0x30;
    sp18 = arg0[2].shape.feetPos[0].x;
    sp1C = arg0[2].shape.feetPos[0].y;
    sp20 = arg0[2].shape.feetPos[0].z;
    sp28 = arg0[2].shape.feetPos[1].x;
    sp2C = arg0[2].shape.feetPos[1].y;
    sp30 = arg0[2].shape.feetPos[1].z;
    sp38 = arg0[2].shape.shadowDraw;
    sp3C = arg0[2].shape.shadowScale;
    temp_f8 = arg0->unk_358;
    arg0 = arg0;
    sp40 = temp_f8;
    func_8018219C((MtxF *) temp_a0, temp_a1, 0);
    arg0->world.rot.x = (s16) -(s32) arg0->world.rot.x;
}

s32 func_808D9440(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 *arg5) {
    s32 sp34;
    CollisionContext *sp30;
    CollisionContext *temp_a0;

    temp_a0 = arg0 + 0x830;
    sp34 = 0;
    sp30 = temp_a0;
    if ((func_800C55C4(temp_a0, arg1, arg2, arg3, arg4, 1U, 1U, 1U, 1U, arg5) != 0) && ((func_800C9A4C(temp_a0, *arg4, (s32) *arg5) & 0x30) == 0)) {
        sp34 = 1;
    }
    return sp34;
}

void func_808D94D0(Actor *arg0, Vec3f *arg1, s32 arg2, s32 arg3, s16 arg4) {
    CollisionPoly *spA4;
    CollisionPoly *spA0;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    ? sp78;
    u32 sp6C;
    s32 sp68;
    u32 sp64;
    f32 *temp_a2;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 phi_s1;

    spA4 = NULL;
    spA0 = NULL;
    sp68 = 0x32;
    sp64 = 0x32;
    func_808D90F0(arg0, arg3, arg4);
    arg0->speedXZ = arg0[3].floorPoly;
    temp_f14 = arg0->speedXZ;
    temp_s4 = &sp90;
    sp90 = arg0->world.pos.x + (2.0f * arg0[2].shape.feetPos[1].x);
    temp_s5 = &sp84;
    temp_a2 = temp_s5;
    sp94 = arg0->world.pos.y + (2.0f * arg0[2].shape.feetPos[1].y);
    temp_f12 = arg0[2].shape.feetPos[1].z;
    temp_f20 = 2.0f * temp_f14;
    sp98 = arg0->world.pos.z + (2.0f * temp_f12);
    sp84 = arg0->world.pos.x - (arg0[2].shape.feetPos[1].x * 4.0f);
    sp88 = arg0->world.pos.y - (arg0[2].shape.feetPos[1].y * 4.0f);
    sp8C = arg0->world.pos.z - (arg0[2].shape.feetPos[1].z * 4.0f);
    if (func_808D9440((bitwise Vec3f *) temp_f12, (bitwise Vec3f *) temp_f14, arg1, (Vec3f *) temp_s4, (CollisionPoly **) temp_a2, &sp6C, &spA0, &sp68) != 0) {
        sp84 = (arg0[2].shape.shadowDraw * temp_f20) + sp90;
        sp88 = (arg0[2].shape.shadowScale * temp_f20) + sp94;
        sp8C = (arg0->unk_358 * temp_f20) + sp98;
        if (func_808D9440(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) &sp78, &spA4, &sp64) != 0) {
            func_808D91C4(arg0, spA4);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp78);
            arg0->floorBgId = (u8) sp64;
            arg0->speedXZ = 0.0f;
        } else {
            if (spA0 != arg0->floorPoly) {
                func_808D91C4(arg0, spA0);
            }
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp6C);
            arg0->floorBgId = (u8) sp68;
        }
    } else {
        temp_f20_2 = temp_f20 * 3.0f;
        arg0->speedXZ = 0.0f;
        Math_Vec3f_Copy((Vec3f *) temp_s4, (Vec3f *) temp_s5);
        phi_s1 = 0;
loop_7:
        if (phi_s1 == 0) {
            sp84 = sp90 - (arg0[2].shape.shadowDraw * temp_f20_2);
            sp88 = sp94 - (arg0[2].shape.shadowScale * temp_f20_2);
            sp8C = sp98 - (arg0->unk_358 * temp_f20_2);
        } else if (phi_s1 == 1) {
            sp84 = (arg0[2].shape.feetPos[0].x * temp_f20_2) + sp90;
            sp88 = (arg0[2].shape.feetPos[0].y * temp_f20_2) + sp94;
            sp8C = (arg0[2].shape.feetPos[0].z * temp_f20_2) + sp98;
        } else {
            sp84 = sp90 - (arg0[2].shape.feetPos[0].x * temp_f20_2);
            sp88 = sp94 - (arg0[2].shape.feetPos[0].y * temp_f20_2);
            sp8C = sp98 - (arg0[2].shape.feetPos[0].z * temp_f20_2);
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        if (func_808D9440(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) &sp78, &spA4, &sp64) != 0) {
            func_808D91C4(arg0, spA4);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp78);
            arg0->floorBgId = (u8) sp64;
        } else if (temp_s1 != 3) {
            goto loop_7;
        }
    }
    func_808D93BC(arg0);
    temp_f14_2 = arg0->speedXZ;
    arg0->shape.rot.x = (s16) -(s32) arg0->world.rot.x;
    arg0->shape.rot.y = arg0->world.rot.y;
    arg0->shape.rot.z = arg0->world.rot.z;
    if (temp_f14_2 != 0.0f) {
        arg0[3].floorPoly = temp_f14_2;
    }
    if (arg2 == 1) {
        Actor_SetVelocityAndMoveXYRotation(arg0);
    }
}

void func_808D9894(EnSw *arg0, Vec3f *arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 temp_f8;

    temp_a0 = &sp1C;
    sp1C = arg0->unk_35C;
    sp2C = arg0->unk_360;
    sp4C = 0.0f;
    sp3C = arg0->unk_364;
    sp20 = arg0->unk_368;
    sp30 = arg0->unk_36C;
    sp50 = 0.0f;
    sp40 = arg0->unk_370;
    sp24 = arg0->unk_350;
    sp34 = arg0->unk_354;
    temp_f8 = arg0->unk_358;
    sp54 = 0.0f;
    sp28 = 0.0f;
    sp38 = 0.0f;
    sp48 = 0.0f;
    sp58 = 0.0f;
    arg0 = arg0;
    sp44 = temp_f8;
    SysMatrix_SetCurrentState((MtxF *) temp_a0);
    temp_a0_2 = &sp5C;
    sp5C = arg1->x - arg0->actor.world.pos.x;
    sp60 = arg1->y - arg0->actor.world.pos.y;
    sp64 = arg1->z - arg0->actor.world.pos.z;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, arg1);
}

s32 func_808D9968(EnSw *arg0, GlobalContext *arg1) {
    s32 sp1C;
    s16 temp_t6;
    u32 temp_a2;
    s32 phi_v1;

    temp_t6 = arg0->actor.params;
    temp_a2 = ((s32) (temp_t6 & 0x3FC) >> 2) & 0xFF;
    phi_v1 = 0;
    if (((temp_t6 & 3) != 0) && (temp_a2 != 0x3F)) {
        sp1C = 0;
        phi_v1 = sp1C;
        if (Actor_GetChestFlag(arg1, temp_a2) != 0) {
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_808D99C8(Actor *arg0, GlobalContext *arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (((arg0->params & 3) != 0) || ((s32) arg0->unk_458 >= 0xB) || (arg0->colChkInfo.health == 0)) {
        return 0;
    }
    if ((arg0->xyzDistToPlayerSq < (f32) ((gGameInfo->data[1552] * 0xA) + 0xEA60)) && (arg1->actorCtx.unk1F5 != 0) && (arg1->actorCtx.unk1F4 == 0)) {
        arg0->colChkInfo.damage = 4;
        phi_v1 = 1;
    }
    return phi_v1;
}

? func_808D9A70(Actor *arg0, Vec3f *arg1) {
    s16 sp2E;
    s16 temp_v0;
    s16 phi_v1;

    sp2E = 0;
    temp_v0 = arg0->unk_454;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_454 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_454;
    }
    if (phi_v1 == 0) {
        if (func_801378B8(arg0 + 0x144, arg0[1].home.pos.z) == 0) {
            sp2E = (s16) (s32) (80.0f * (arg0[1].home.pos.z - arg0->unk_15C) * arg0->unk_450);
        } else {
            if (arg0->unk_456 != 0) {
                if ((arg0->params & 3) == 0) {
                    Audio_PlayActorSound2(arg0, 0x388CU);
                } else {
                    Audio_PlayActorSound2(arg0, 0x39DAU);
                }
                arg0->unk_456 = (s16) (arg0->unk_456 - 1);
                arg0->unk_15C = 0.0f;
            } else {
                arg0->unk_454 = Rand_S16Offset(0x14, 0x14);
                arg0->unk_456 = (s16) (s32) ((Rand_ZeroOne() * 10.0f) + 3.0f);
            }
            if (((s32) arg0->unk_456 % 2) != 0) {
                if (Rand_ZeroOne() < 0.5f) {
                    arg0->unk_450 = -1.0f;
                } else {
                    arg0->unk_450 = 1.0f;
                }
            }
        }
        func_808D94D0(arg0, arg1, 0, 0, (s16) (s32) sp2E);
    }
    return 0;
}

? func_808D9C18(Actor *arg0) {
    ? sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Vec3f *sp24;
    Vec3f *temp_a1;
    f32 *temp_a1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0;

    temp_v0 = arg0->unk_498;
    if ((temp_v0 == 0xF9) || (temp_v0 == 0x82) || (temp_v0 == 0xE4) || (temp_v0 == 0xE5)) {
        temp_f0_2 = arg0->speedXZ;
        arg0->velocity.x = temp_f0_2;
        arg0->velocity.z = temp_f0_2;
        arg0->velocity.x *= Math_SinS(arg0->world.rot.y);
        arg0->velocity.z *= Math_CosS(arg0->world.rot.y);
    } else {
        temp_f0 = arg0->speedXZ;
        temp_a1 = arg0 + 0x24;
        arg0->velocity.x = (temp_f0 * arg0[2].shape.feetPos[1].x) + (temp_f0 * arg0[2].shape.shadowDraw);
        arg0->velocity.y = 14.0f;
        arg0->velocity.z = (temp_f0 * arg0[2].shape.feetPos[1].z) + (temp_f0 * arg0->unk_358);
        sp24 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &sp3C, temp_a1);
        Math_Vec3f_Copy((Vec3f *) &sp30, temp_a1);
        temp_a1_2 = &sp30;
        sp30 += arg0->velocity.x;
        sp34 += arg0->velocity.y;
        sp38 += arg0->velocity.z;
        arg0->world.rot.x = 0;
        arg0->world.rot.z = 0;
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp3C, (Vec3f *) temp_a1_2);
    }
    Audio_PlayActorSound2(arg0, 0x39C2U);
    if ((arg0->params & 3) == 1) {
        Actor_SetScale(arg0, 0.0f);
        arg0->world.rot.x = 0;
        arg0->world.rot.z = 0;
        Math_Vec3s_Copy((Vec3s *) &arg0->shape, &arg0->world.rot);
        arg0->unk_410 = (u16) (arg0->unk_410 | 4);
    }
    arg0->parent = NULL;
    arg0->gravity = -1.4f;
    return 0;
}

void func_808D9DA0(Actor *arg0) {
    ? sp24;

    SkinMatrix_SetRotateYRP((MtxF *) &sp24, arg0->shape.rot.x, arg0->shape.rot.y, arg0->shape.rot.z);
    SkinMatrix_Vec3fMtxFMultXYZ((MtxF *) &sp24, &D_808DBAAC, arg0 + 0x368);
    arg0[2].shape.shadowDraw = Math_SinS(arg0->shape.rot.y);
    arg0[2].shape.shadowScale = 0.0f;
    arg0->unk_358 = Math_CosS(arg0->shape.rot.y);
    arg0[2].shape.feetPos[0].x = Math_SinS((s16) (arg0->shape.rot.y + 0x4000));
    arg0[2].shape.feetPos[0].y = 0.0f;
    arg0[2].shape.feetPos[0].z = Math_CosS((s16) (arg0->shape.rot.y + 0x4000));
}

void func_808D9E44(Actor *arg0) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    Vec3f *sp18;
    Actor *temp_a2;
    Vec3f *temp_a3;
    f32 *temp_a1;

    temp_a2 = arg0;
    temp_a2->shape.rot.z = -0x8000;
    temp_a2->shape.rot.x = 0;
    temp_a2->shape.rot.y = 0;
    arg0 = temp_a2;
    Math_Vec3s_Copy(temp_a2 + 0x30, temp_a2 + 0xBC);
    arg0->unk_456 = 2;
    temp_a3 = arg0 + 0x24;
    arg0->gravity = -1.4f;
    arg0->velocity.y = 0.0f;
    sp18 = temp_a3;
    Math_Vec3f_Copy((Vec3f *) &sp1C, temp_a3);
    temp_a1 = &sp1C;
    sp1C += arg0[2].shape.feetPos[1].x * 16.0f;
    sp20 += arg0[2].shape.feetPos[1].y * 16.0f;
    sp24 += arg0[2].shape.feetPos[1].z * 16.0f;
    Math_Vec3f_Copy(sp18, (Vec3f *) temp_a1);
}

void func_808D9F08(EnSw *arg0) {
    f32 temp_f6;

    arg0 = arg0;
    arg0->unk_454 = Rand_S16Offset(0x14, 0x14);
    temp_f6 = Rand_ZeroOne() * 10.0f;
    arg0->unk_414 = 0.0f;
    arg0->unk_45E = arg0->unk_460;
    arg0->unk_456 = (s16) (s32) (temp_f6 + 3.0f);
}

void func_808D9F78(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    if (arg2 != 0) {
        func_800BC154(arg1, arg1 + 0x1CA0, arg0, 5U);
    }
    Actor_SetScale(arg0, 0.02f);
    func_808D9DA0(arg0);
    arg0->speedXZ = 10.0f;
    arg0[3].floorPoly = (bitwise CollisionPoly *) 10.0f;
    func_808D94D0(arg0, (Vec3f *) arg1, 0, 0, (s16) 0);
    arg0->speedXZ = 0.0f;
    arg0[3].floorPoly = (bitwise CollisionPoly *) 0.0f;
    arg0->unk_450 = 1.0f;
    Math_Vec3f_Copy((Vec3f *) &arg0->home, (Vec3f *) &arg0->world);
    arg0->unk_410 = (u16) (arg0->unk_410 | 4);
}

void func_808DA024(Actor *arg0, Vec3f *arg1) {
    func_808D9DA0();
    arg0->speedXZ = 10.0f;
    arg0[3].floorPoly = 10.0f;
    func_808D94D0(arg0, arg1, 0, 0, (s16) 0);
    arg0->speedXZ = 0.0f;
    arg0[3].floorPoly = (bitwise CollisionPoly *) 0.0f;
    arg0->unk_450 = 1.0f;
}

s32 func_808DA08C(Actor *arg0, GlobalContext *arg1) {
    s32 sp3C;
    s32 temp_v1;
    u8 temp_v0;
    Actor *phi_v0;
    s32 phi_v1;

    sp3C = 0;
    if ((func_808D99C8(arg0, arg1) != 0) || ((arg0->unk_19D & 2) != 0)) {
        arg0->unk_19D = (u8) (arg0->unk_19D & 0xFFFD);
        if (arg0->colChkInfo.damageEffect == 4) {
            Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        phi_v0 = arg0;
        phi_v1 = 0;
        if (arg0->unk_412 == 0xA) {
            do {
                temp_v1 = phi_v1 + 4;
                phi_v0->unk_464 = 0;
                phi_v0->unk_466 = 0;
                phi_v0->unk_468 = 0;
                phi_v0->unk_46A = 0;
                phi_v0 += 8;
                phi_v1 = temp_v1;
            } while (temp_v1 != 0xC);
            arg0[3].bgCheckFlags = 0;
        } else if (func_808D90C4(arg0) == 0) {
            Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x28, 0x3885U);
            Enemy_StartFinishingBlow(arg1, arg0);
            arg0->flags &= -2;
            if ((arg0->params & 3) == 0) {
                func_8013BC6C((SkelAnime *) &arg0[1], D_808DBA64, 3);
            }
            temp_v0 = arg0->colChkInfo.damageEffect;
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    if (temp_v0 != 4) {
                        if (temp_v0 != 5) {
                            arg0->unk_412 = 1U;
                            arg0[3].bgCheckFlags = 0;
                        } else {
                            arg0->unk_412 = 0x1EU;
                            arg0[3].bgCheckFlags = 0x14;
                            func_808D8B58(arg0);
                        }
                    } else {
                        arg0->unk_412 = 0x14U;
                        arg0[3].bgCheckFlags = 0x14;
                        func_808D8B58(arg0);
                    }
                } else {
                    arg0->unk_412 = 0xAU;
                    arg0[3].bgCheckFlags = 0;
                    func_808D8B58(arg0);
                }
            } else {
                arg0->unk_412 = 0U;
                arg0[3].bgCheckFlags = 0x14;
                func_808D8B58(arg0);
            }
            if (((arg0->params & 3) == 0) && (arg0->unk_412 != 0xA)) {
                func_808D9E44(arg0);
            }
            arg0->unk_458 = 0x14;
            arg0->unk_45A = 0;
            func_800BCB70(arg0, 0x4000, 0xC8, 0, (s16) (s32) arg0->unk_458);
            sp3C = 1;
        } else if (arg0->colChkInfo.damageEffect == 1) {
            if (arg0->unk_45A == 0) {
                Audio_PlayActorSound2(arg0, 0x389EU);
                arg0->unk_45A = 0x28;
                func_800BCB70(arg0, 0, 0xC8, 0, (s16) (s32) arg0->unk_45A);
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x386BU);
            arg0->unk_458 = 0x14;
            arg0->unk_45A = 0;
            func_800BCB70(arg0, 0x4000, 0xC8, 0, (s16) (s32) arg0->unk_458);
        }
    }
    return sp3C;
}

void func_808DA350(EnSw *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v0;
    EnSw *temp_a0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v0->unk_A6C & 0x200000) && (temp_a0 = this, (this->actor.xyzDistToPlayerSq < 8000.0f))) {
        sp1C = temp_v0;
        this = this;
        Audio_PlayActorSound2((Actor *) temp_a0, 0x39F2U);
        Math_Vec3f_Copy(&this->unk_374, (Vec3f *) &temp_v0->world);
        this->actionFunc = func_808DA3F4;
        this->unk_410 &= 0xFFDF;
        this->unk_414 = 0.0f;
        return;
    }
    func_808D9A70((Actor *) this, (Vec3f *) this);
}

void func_808DA3F4(EnSw *this, GlobalContext *globalCtx) {
    s16 sp46;
    f32 sp38;
    s32 sp2C;
    s16 temp_a2;
    s16 temp_s1;
    s32 temp_f16;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_s1;
    s16 phi_s1_2;
    s32 phi_v1_2;
    s32 phi_s1_3;

    phi_s1 = 0;
    if (func_801378B8(&this->unk_144, this->unk_154) == 0) {
        temp_f16 = (s32) (80.0f * (this->unk_144.animFrameCount - this->unk_144.animCurrentFrame));
        temp_s1 = (s16) temp_f16;
        sp2C = temp_f16;
        Math_Vec3f_Copy((Vec3f *) &sp38, &this->unk_374);
        func_808D9894(this, (Vec3f *) &sp38);
        temp_v0 = Math_FAtan2F(sp40, sp38);
        temp_a2 = (s16) temp_v0;
        if (temp_v0 < 0) {
            phi_v1 = -(s32) (s16) temp_v0;
        } else {
            phi_v1 = (s32) (s16) temp_v0;
        }
        phi_s1_2 = temp_s1;
        if (phi_v1 < (s32) unksp2E) {
            this->unk_144.animCurrentFrame = 0.0f;
            sp46 = temp_a2;
            Audio_PlayActorSound2((Actor *) this, 0x388DU);
            this->unk_414 = 0.0f;
            if ((this->unk_410 & 0x20) != 0) {
                this->actionFunc = func_808DA6FC;
            } else {
                this->actionFunc = func_808DA578;
            }
            phi_s1_3 = temp_a2 << 0x10;
            if ((s32) temp_a2 < 0) {
                phi_s1_3 = (s32) temp_a2 * -0x10000;
            }
            phi_s1_2 = (s16) (phi_s1_3 >> 0x10);
        }
        phi_v1_2 = 1;
        if ((s32) temp_a2 < 0) {
            phi_v1_2 = -1;
        }
        phi_s1 = (s32) (s16) (phi_s1_2 * phi_v1_2);
    } else {
        Audio_PlayActorSound2((Actor *) this, 0x388CU);
        this->unk_144.animCurrentFrame = 0.0f;
    }
    func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 0, 0, (s16) phi_s1);
}

void func_808DA578(EnSw *this, GlobalContext *globalCtx) {
    f32 sp30;
    Vec3f *sp2C;
    Vec3f *temp_a2;
    f32 temp_f0;
    s32 temp_f6;
    u16 temp_v0;

    if (func_801378B8(&this->unk_144, this->unk_144.animFrameCount) == 0) {
        this->unk_44C = 0.3f * (this->unk_144.animFrameCount - this->unk_144.animCurrentFrame);
        func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 1, 0, (s16) 0);
        if ((this->actor.speedXZ == 0.0f) && (this->unk_44C != 0.0f)) {
            Math_Vec3f_Copy((Vec3f *) &sp30, &this->unk_374);
            func_808D9894(this, (Vec3f *) &sp30);
            func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 0, 0, (s16) Math_FAtan2F(sp38, sp30));
        }
    } else {
        temp_a2 = &this->unk_374;
        if ((this->unk_410 & 0x20) != 0) {
            sp2C = temp_a2;
            Math_Vec3f_Copy(temp_a2, (Vec3f *) &this->actor.home);
            this->actionFunc = func_808DA3F4;
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x388DU);
            this->unk_144.animCurrentFrame = 0.0f;
        }
    }
    temp_f0 = Math_Vec3f_DistXYZ((Vec3f *) &this->actor.world, &this->unk_374);
    temp_v0 = this->unk_410;
    if ((temp_v0 & 0x20) == 0) {
        temp_f6 = (s32) this->unk_414;
        if ((temp_f6 != 0) && (temp_f6 < (s32) temp_f0)) {
            this->unk_410 = temp_v0 | 0x20;
        }
    }
    this->unk_414 = temp_f0;
}

void func_808DA6FC(EnSw *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp38;
    Vec3f *sp34;
    PosRot *sp30;
    PosRot *temp_a0;
    f32 temp_f0;
    f32 temp_f6;
    s32 temp_f16;

    if (func_801378B8(&this->unk_144, this->unk_144.animFrameCount) == 0) {
        this->unk_44C = 0.14f * (this->unk_144.animFrameCount - this->unk_144.animCurrentFrame);
        func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 1, 0, (s16) 0);
        if ((this->actor.speedXZ == 0.0f) && (this->unk_44C != 0.0f)) {
            Math_Vec3f_Copy((Vec3f *) &sp38, &this->unk_374);
            func_808D9894(this, (Vec3f *) &sp38);
            func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 0, 0, (s16) Math_FAtan2F(sp40, sp38));
        }
    } else {
        Audio_PlayActorSound2((Actor *) this, 0x388DU);
        this->unk_144.animCurrentFrame = 0.0f;
    }
    temp_a0 = &this->actor.world;
    sp30 = temp_a0;
    sp34 = &this->unk_374;
    temp_f0 = Math_Vec3f_DistXYZ((Vec3f *) temp_a0, &this->unk_374);
    sp4C = temp_f0;
    temp_f16 = (s32) this->unk_414;
    if ((temp_f16 != 0) && (temp_f16 < (s32) temp_f0)) {
        Math_Vec3f_Copy((Vec3f *) temp_a0, &this->unk_374);
        this->unk_454 = Rand_S16Offset(0x14, 0x14);
        temp_f6 = Rand_ZeroOne() * 10.0f;
        this->actionFunc = func_808DA350;
        this->unk_144.animCurrentFrame = 0.0f;
        this->unk_456 = (s16) (s32) (temp_f6 + 3.0f);
    }
    this->unk_414 = sp4C;
}

void func_808DA89C(EnSw *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_a1;
    EnSw *phi_v0;
    s16 phi_a0;
    s32 phi_a1;
    s32 phi_a2;
    s32 phi_a2_2;

    phi_a1 = 0;
    phi_a2_2 = 0;
    if (this->unk_412 == 0xA) {
        phi_v0 = this;
        do {
            temp_v1 = phi_v0->unk_464;
            temp_a1 = phi_a1 + 2;
            phi_a1 = temp_a1;
            phi_a2 = phi_a2_2;
            if (temp_v1 == 0) {
                phi_a0 = 0;
            } else {
                phi_v0->unk_464 = temp_v1 - 1;
                phi_a0 = phi_v0->unk_464;
            }
            if (phi_a0 == 0) {
                phi_a2 = phi_a2_2 + 1;
            }
            phi_v0 += 2;
            phi_a2_2 = phi_a2;
        } while (temp_a1 != 0x18);
        if (phi_a2 == 0xC) {
            if ((this->actor.params & 3) == 0) {
                func_808D9E44((Actor *) this, temp_a1, phi_a2, 0x18);
            }
            this->unk_412 = 1;
            func_808D8ED0((Actor *) this, globalCtx);
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    if ((this->actor.params & 3) != 0) {
        this->actionFunc = func_808DAEB4;
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.shape.yOffset = 400.0f;
        temp_f2 = fabsf(this->actor.velocity.y) * 0.6f;
        this->actor.speedXZ = 0.0f;
        this->actor.velocity.y = temp_f2;
        this->unk_448 = temp_f2;
        if ((s32) temp_f2 != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x39E9U);
        } else {
            this->actionFunc = func_808DAEB4;
            this->actor.velocity.y = 0.0f;
        }
        if ((s32) this->actor.velocity.y >= 2) {
            func_808D8940(this, globalCtx);
        }
    } else {
        Math_ApproachF(&this->actor.shape.yOffset, 400.0f, 0.3f, 1000.0f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
}

void func_808DAA60(EnSw *this, GlobalContext *globalCtx) {
    void *sp44;
    s16 sp42;
    s16 sp40;
    f32 sp34;
    s32 sp28;
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_v0_2;
    s32 temp_f16;
    s32 temp_v0;
    s16 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    sp44 = Lib_SegmentedToVirtual(this->unk_1E4->unk_4);
    sp40 = 0;
    temp_a0 = this->unk_454;
    if (temp_a0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_454 = temp_a0 - 1;
        phi_v1 = this->unk_454;
    }
    if (phi_v1 == 0) {
        if (func_801378B8(&this->unk_144, this->unk_144.animFrameCount) == 0) {
            temp_f16 = (s32) (80.0f * (this->unk_144.animFrameCount - this->unk_144.animCurrentFrame));
            sp40 = (s16) temp_f16;
            if (this->unk_45E == 0) {
                sp28 = temp_f16;
                Math_Vec3s_ToVec3f((Vec3f *) &sp34, (this->unk_4A0 * 6) + sp44);
                func_808D9894(this, (Vec3f *) &sp34);
                temp_v0 = Math_FAtan2F(sp3C, sp34);
                temp_a2 = (s16) temp_v0;
                if (temp_v0 < 0) {
                    phi_v1_2 = -(s32) (s16) temp_v0;
                } else {
                    phi_v1_2 = (s32) (s16) temp_v0;
                }
                if (phi_v1_2 < (s32) unksp2A) {
                    this->unk_144.animCurrentFrame = 0.0f;
                    sp42 = temp_a2;
                    Audio_PlayActorSound2((Actor *) this, 0x388DU);
                    Math_Vec3s_ToVec3f(&this->unk_374, (this->unk_4A0 * 6) + sp44);
                    this->actionFunc = func_808DACF4;
                    this->unk_414 = 0.0f;
                    if ((s32) temp_a2 < 0) {
                        sp40 = (s16) -(s32) temp_a2;
                    } else {
                        sp40 = temp_a2;
                    }
                }
                if ((s32) temp_a2 < 0) {
                    phi_v1_3 = -1;
                } else {
                    phi_v1_3 = 1;
                }
                sp40 *= phi_v1_3;
            }
        } else {
            if (this->unk_456 != 0) {
                Audio_PlayActorSound2((Actor *) this, 0x39DAU);
                this->unk_456 += -1;
                this->unk_144.animCurrentFrame = 0.0f;
            } else {
                this->unk_454 = Rand_S16Offset(0x14, 0x14);
                temp_v0_2 = this->unk_45E;
                this->unk_456 = (s16) (s32) ((Rand_ZeroOne() * 10.0f) + 3.0f);
                if (temp_v0_2 != 0) {
                    this->unk_45E = temp_v0_2 - 1;
                }
            }
            if (((s32) this->unk_456 % 2) != 0) {
                if (Rand_ZeroOne() < 0.5f) {
                    this->unk_450 = -1.0f;
                } else {
                    this->unk_450 = 1.0f;
                }
            }
        }
    }
    func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 0, 0, (s16) (s32) sp40);
}

void func_808DACF4(EnSw *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp38;
    Vec3f *sp34;
    PosRot *sp30;
    PosRot *temp_a0;
    f32 temp_f0;
    s32 temp_f6;
    s32 temp_t0;
    s32 temp_v1;

    if (func_801378B8(&this->unk_144, this->unk_144.animFrameCount) == 0) {
        this->unk_44C = 0.1f * (this->unk_144.animFrameCount - this->unk_144.animCurrentFrame);
        func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 1, 0, (s16) 0);
        if ((this->actor.speedXZ == 0.0f) && (this->unk_44C != 0.0f)) {
            Math_Vec3f_Copy((Vec3f *) &sp38, &this->unk_374);
            func_808D9894(this, (Vec3f *) &sp38);
            func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 0, 0, (s16) Math_FAtan2F(sp40, sp38));
        }
    } else {
        Audio_PlayActorSound2((Actor *) this, 0x388DU);
        this->unk_144.animCurrentFrame = 0.0f;
    }
    temp_a0 = &this->actor.world;
    sp30 = temp_a0;
    sp34 = &this->unk_374;
    temp_f0 = Math_Vec3f_DistXYZ((Vec3f *) temp_a0, &this->unk_374);
    sp4C = temp_f0;
    temp_f6 = (s32) this->unk_414;
    if ((temp_f6 != 0) && (temp_f6 < (s32) temp_f0)) {
        Math_Vec3f_Copy((Vec3f *) temp_a0, &this->unk_374);
        temp_v1 = this->unk_49C;
        temp_t0 = this->unk_4A0 + temp_v1;
        this->unk_4A0 = temp_t0;
        if ((temp_t0 >= (s32) *this->unk_1E4) || (temp_t0 < 0)) {
            this->unk_49C = -temp_v1;
            this->unk_4A0 = temp_t0 + (temp_v1 * -2);
        }
        if ((this->unk_410 & 8) != 0) {
            func_808D9F08(this);
            this->actionFunc = func_808DAA60;
        } else {
            this->actionFunc = func_808DB100;
        }
    }
    this->unk_414 = sp4C;
}

void func_808DAEB4(EnSw *this, GlobalContext *globalCtx) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f6;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_a1;
    u16 temp_v0;
    s16 phi_a0;
    EnSw *phi_v0;
    s16 phi_a0_2;
    s32 phi_a1;
    s32 phi_a2;
    s16 phi_a0_3;
    s32 phi_a2_2;

    temp_v0 = this->unk_410;
    if ((temp_v0 & 2) != 0) {
        phi_a1 = (bitwise s32) 0.0f;
        if ((this->actor.params & 3) == 0) {
            phi_a2_2 = 0;
            if ((temp_v0 & 4) != 0) {
                temp_v0_2 = this->unk_45C;
                if (temp_v0_2 == 0) {
                    phi_a0 = 0;
                } else {
                    this->unk_45C = temp_v0_2 - 1;
                    phi_a0 = this->unk_45C;
                }
                if (phi_a0 == 0) {
                    this->unk_410 &= 0xFFFB;
                }
            }
            phi_v0 = this;
            do {
                temp_v1 = phi_v0->unk_464;
                temp_a1 = phi_a1 + 2;
                phi_a1 = temp_a1;
                phi_a2 = phi_a2_2;
                if (temp_v1 == 0) {
                    phi_a0_2 = 0;
                } else {
                    phi_v0->unk_464 = temp_v1 - 1;
                    phi_a0_2 = phi_v0->unk_464;
                }
                if (phi_a0_2 == 0) {
                    phi_a2 = phi_a2_2 + 1;
                }
                phi_v0 += 2;
                phi_a2_2 = phi_a2;
            } while (temp_a1 != 0x18);
            if (phi_a2 == 0xC) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            /* Duplicate return node #30. Try simplifying control flow for better match */
            return;
        }
        Math_ApproachF((f32 *) &this->actor.scale, 0.0f, 0.08f, 1.0f);
        Actor_SetScale((Actor *) this, this->actor.scale.x);
        if ((s32) (this->actor.scale.x * 100.0f) == 0) {
            Math_Vec3f_Copy((Vec3f *) &sp5C, (Vec3f *) &this->actor.world);
            temp_f6 = sp5C + (this->unk_368 * 10.0f);
            sp5C = temp_f6;
            temp_f16 = sp60 + (this->unk_36C * 10.0f);
            sp60 = temp_f16;
            temp_f18 = sp64 + (this->unk_370 * 10.0f);
            sp64 = temp_f18;
            if (Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0xE3, temp_f6, temp_f16, temp_f18, (s16) 0, (s16) 0, (s16) 0, (s32) this->actor.params) != 0) {
                play_sound(0x4843U);
            }
            Actor_MarkForDeath((Actor *) this);
        }
        func_808D94D0((Actor *) this, (Vec3f *) globalCtx, 0, 0, (s16) 0x1554);
        return;
    }
    temp_v0_3 = this->unk_45C;
    if (temp_v0_3 == 0) {
        phi_a0_3 = 0;
    } else {
        this->unk_45C = temp_v0_3 - 1;
        phi_a0_3 = this->unk_45C;
    }
    if (phi_a0_3 == 0) {
        this->unk_410 |= 2;
        if (((this->actor.params & 3) == 0) && (this->unk_412 == 1)) {
            func_808D8B58((Actor *) this);
            this->unk_45C = 0xA;
            return;
        }
        this->unk_45C = 0x14;
        /* Duplicate return node #30. Try simplifying control flow for better match */
    }
}

void func_808DB100(EnSw *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_v0 = this->actor.parent;
    if (temp_v0 != 0) {
        this->unk_456 = 0;
        this->unk_454 = 0;
        this->unk_498 = temp_v0->id;
        this->unk_144.animCurrentFrame = 0.0f;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 4U);
        this->actionFunc = func_808DB25C;
        return;
    }
    if ((this->unk_410 & 1) == 0) {
        func_808D9A70((Actor *) this, (Vec3f *) globalCtx, this);
        return;
    }
    temp_v0_2 = this->unk_454;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_454 = temp_v0_2 - 1;
        phi_v1 = this->unk_454;
    }
    if ((phi_v1 == 0) && (func_801378B8(&this->unk_144, this->unk_144.animFrameCount) != 0)) {
        if (this->unk_456 != 0) {
            if ((this->actor.params & 3) == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x388CU);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x39DAU);
            }
            this->unk_456 += -1;
            this->unk_144.animCurrentFrame = 0.0f;
            return;
        }
        this->unk_454 = Rand_S16Offset(0x14, 0x14);
        this->unk_456 = (s16) (s32) ((Rand_ZeroOne() * 10.0f) + 3.0f);
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

void func_808DB25C(EnSw *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        func_808D9C18((Actor *) this);
        this->actionFunc = func_808DB2E0;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_808DB2E0(EnSw *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;

    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_808D9F78((Actor *) this, globalCtx, 0);
        temp_f0 = fabsf(this->actor.velocity.y);
        this->actor.velocity.x *= 0.5f;
        temp_f2 = temp_f0 * 0.6f;
        this->actor.velocity.y = temp_f2;
        this->unk_448 = temp_f2;
        this->actor.velocity.z *= 0.5f;
        if ((s32) temp_f2 != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x39E9U);
        } else {
            func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 5U);
            Math_Vec3f_Copy(&this->actor.velocity, &D_801D15B0);
            this->unk_410 &= 0xFFEE;
            this->actionFunc = func_808DB100;
        }
        if ((s32) this->actor.velocity.y >= 2) {
            func_808D8940(this, globalCtx);
        }
    }
    Math_ApproachF((f32 *) &this->actor.scale, 0.02f, 0.4f, 1.0f);
    Actor_SetScale((Actor *) this, this->actor.scale.x);
    this->actor.velocity.y += this->actor.gravity;
    Actor_ApplyMovement((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
}

void EnSw_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v0_2;
    u16 temp_t8;
    u32 temp_t2;
    u32 temp_t9;
    u8 *temp_v0;
    EnSw *this = (EnSw *) thisx;

    if (func_808D9968(this, globalCtx) == 0) {
        ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
        temp_a1 = &this->unk_144;
        sp30 = temp_a1;
        SkelAnime_Init(globalCtx, temp_a1, &D_06005298, NULL, &this->unk_1E8, &this->unk_29C, 0x1E);
        func_8013BC6C(sp30, D_808DBA64, 0);
        this->unk_144.animPlaybackSpeed = 4.0f;
        Collider_InitAndSetSphere(globalCtx, &this->unk_18C, (Actor *) this, &D_808DB9E0);
        if ((this->actor.params & 3) == 0) {
            this->actor.hintId = 0x1F;
            CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_808DBA18, &D_808DBA0C);
            this->unk_18C.info.toucher.damage = 8;
        } else {
            this->actor.hintId = 0x20;
            CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_808DBA44, &D_808DBA38);
            this->unk_18C.info.toucher.damage = 0x10;
        }
        temp_v0 = func_8013BEDC(globalCtx, ((s32) (this->actor.params & 0xFF00) >> 8) & 0xFF, 0xFF, &this->unk_4A0);
        this->unk_1E4 = temp_v0;
        if (temp_v0 != 0) {
            this->unk_4A0 = 1;
        }
        temp_v0_2 = this->actor.params & 3 & 0xFF;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                if ((temp_v0_2 != 2) && (temp_v0_2 != 3)) {
                    return;
                }
                temp_v0_3 = this->actor.world.rot.z;
                temp_t2 = this->actor.flags & ~1;
                this->actor.flags = temp_t2;
                this->actor.flags = temp_t2 | 0x10;
                if ((s32) temp_v0_3 < 0) {
                    this->unk_460 = (s16) -(s32) temp_v0_3;
                } else {
                    this->unk_460 = temp_v0_3;
                }
                if ((s32) this->actor.world.rot.z >= 0) {
                    this->unk_410 |= 8;
                }
                func_808D9F78((Actor *) this, globalCtx, 1);
                if (this->unk_1E4 != 0) {
                    this->unk_49C = 1;
                    func_808D9F08(this);
                    this->actionFunc = func_808DAA60;
                    return;
                }
                this->actionFunc = func_808DB100;
                return;
            }
            temp_v0_4 = this->actor.world.rot.z;
            temp_t9 = this->actor.flags & ~1;
            this->actor.flags = temp_t9;
            this->actor.flags = temp_t9 | 0x10;
            if ((s32) temp_v0_4 < 0) {
                this->unk_460 = (s16) -(s32) temp_v0_4;
            } else {
                this->unk_460 = temp_v0_4;
            }
            if ((s32) this->actor.world.rot.z >= 0) {
                this->unk_410 |= 8;
            }
            func_808DA024((Actor *) this, (Vec3f *) globalCtx);
            temp_t8 = this->unk_410 | 0x11;
            this->unk_410 = temp_t8;
            this->unk_410 = temp_t8 & 0xFFFB;
            this->actionFunc = func_808DB100;
            return;
        }
        func_808D9F78((Actor *) this, globalCtx, 1);
        this->actionFunc = func_808DA350;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnSw_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSw *this = (EnSw *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk_18C);
}

void EnSw_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 phi_v0;
    EnSw *this = (EnSw *) thisx;

    if (func_808DA08C((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_808DA89C;
    } else {
        temp_v1 = this->unk_45A;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk_45A = temp_v1 - 1;
            phi_v0 = this->unk_45A;
        }
        if (phi_v0 == 0) {
            this->actionFunc(this, globalCtx);
        }
    }
    if ((this->unk_412 != 0xA) || (this->unk_45A != 0)) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    Actor_SetHeight((Actor *) this, 0.0f);
    func_808D8FC4(this, globalCtx);
}

s32 func_808DB7F4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((arg5[4].z & 3) != 0) {
        switch (arg1) {
        case 23:
            *arg2 = &D_06004788;
            break;
        case 8:
            *arg2 = &D_060046F0;
            break;
        case 14:
            *arg2 = &D_06004658;
            break;
        case 11:
            *arg2 = &D_060045C0;
            break;
        case 26:
            *arg2 = &D_06004820;
            break;
        case 20:
            *arg2 = &D_060048B8;
            break;
        case 17:
            *arg2 = &D_06004950;
            break;
        case 29:
            *arg2 = &D_060049E8;
            break;
        case 5:
            *arg2 = &D_06003FB0;
            break;
        case 4:
            *arg2 = &D_060043D8;
            break;
        }
    }
    return 0;
}

void EnSw_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_s0;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;
    EnSw *this = (EnSw *) thisx;

    if ((this->unk_410 & 4) != 0) {
        if ((this->actor.params & 3) != 0) {
            func_800B8050((Actor *) this, globalCtx, 0);
        }
        func_8012C28C(globalCtx->state.gfxCtx);
        SysMatrix_InsertXRotation_s(-0x3C72, 1);
        SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_808DB7F4, NULL, (Actor *) this);
    }
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        temp_s0 = phi_s0 + 1;
        temp_s1 = phi_s1 + func_808D8D60((Actor *) this, globalCtx, phi_s0);
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s0 != 0xC);
    if (temp_s1 != 0) {
        this->unk_462 += 3;
    }
}
