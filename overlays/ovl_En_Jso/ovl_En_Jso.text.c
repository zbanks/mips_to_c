typedef struct EnJso {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ ? unk_18E;                          /* inferred */
    /* 0x18E */ char pad_18E[0x6];
    /* 0x194 */ ? unk_194;                          /* inferred */
    /* 0x194 */ char pad_194[0x6];
    /* 0x19A */ ? unk_19A;                          /* inferred */
    /* 0x19A */ char pad_19A[0x66];
    /* 0x200 */ Vec3s unk_200;                      /* inferred */
    /* 0x206 */ char pad_206[0x72];                 /* maybe part of unk_200[20]? */
    /* 0x278 */ void (*actionFunc)(EnJso *, GlobalContext *);
    /* 0x27C */ s16 unk_27C;                        /* inferred */
    /* 0x27E */ s16 unk_27E;                        /* inferred */
    /* 0x280 */ s16 unk_280;                        /* inferred */
    /* 0x282 */ s16 unk_282;                        /* inferred */
    /* 0x284 */ char pad_284[0x2];
    /* 0x286 */ s16 unk_286;                        /* inferred */
    /* 0x288 */ s16 unk_288;                        /* inferred */
    /* 0x28A */ s16 unk_28A;                        /* inferred */
    /* 0x28C */ s16 unk_28C;                        /* inferred */
    /* 0x28E */ s16 unk_28E;                        /* inferred */
    /* 0x290 */ s16 unk_290;                        /* inferred */
    /* 0x292 */ s16 unk_292;                        /* inferred */
    /* 0x294 */ s16 unk_294;                        /* inferred */
    /* 0x296 */ s16 unk_296;                        /* inferred */
    /* 0x298 */ s16 unk_298;                        /* inferred */
    /* 0x29A */ s16 unk_29A;                        /* inferred */
    /* 0x29C */ s16 unk_29C;                        /* inferred */
    /* 0x29E */ s16 unk_29E;                        /* inferred */
    /* 0x2A0 */ s16 unk_2A0;                        /* inferred */
    /* 0x2A2 */ s16 unk_2A2;                        /* inferred */
    /* 0x2A4 */ s16 unk_2A4;                        /* inferred */
    /* 0x2A6 */ s16 unk_2A6;                        /* inferred */
    /* 0x2A8 */ s16 unk_2A8;                        /* inferred */
    /* 0x2AA */ s16 unk_2AA;                        /* inferred */
    /* 0x2AC */ char pad_2AC[0x8];                  /* maybe part of unk_2AA[5]? */
    /* 0x2B4 */ Vec3f unk_2B4;                      /* inferred */
    /* 0x2C0 */ char pad_2C0[0x86];                 /* maybe part of unk_2B4[12]? */
    /* 0x346 */ s16 unk_346;                        /* inferred */
    /* 0x348 */ s16 unk_348;                        /* inferred */
    /* 0x34A */ s16 unk_34A;                        /* inferred */
    /* 0x34C */ u8 unk_34C;                         /* inferred */
    /* 0x34D */ u8 unk_34D;                         /* inferred */
    /* 0x34E */ u8 unk_34E;                         /* inferred */
    /* 0x34F */ char pad_34F[0x1];
    /* 0x350 */ f32 unk_350;                        /* inferred */
    /* 0x354 */ f32 unk_354;                        /* inferred */
    /* 0x358 */ char pad_358[0x4];
    /* 0x35C */ ColliderCylinder unk_35C;           /* inferred */
    /* 0x3A8 */ ColliderQuad unk_3A8;               /* inferred */
    /* 0x428 */ ColliderQuad unk_428;               /* inferred */
    /* 0x4A8 */ s32 unk_4A8;                        /* inferred */
    /* 0x4AC */ s32 unk_4AC;                        /* inferred */
    /* 0x4B0 */ s16 unk_4B0;                        /* inferred */
    /* 0x4B2 */ char pad_4B2[0x2];
    /* 0x4B4 */ s32 unk_4B4;                        /* inferred */
    /* 0x4B8 */ s16 unk_4B8;                        /* inferred */
    /* 0x4BA */ char pad_4BA[0x2];
    /* 0x4BC */ u32 unk_4BC;                        /* inferred */
    /* 0x4C0 */ u16 unk_4C0;                        /* inferred */
    /* 0x4C2 */ s16 unk_4C2;                        /* inferred */
    /* 0x4C4 */ char pad_4C4[0x4];                  /* maybe part of unk_4C2[3]? */
    /* 0x4C8 */ Vec3f unk_4C8;                      /* inferred */
    /* 0x4D4 */ Vec3f unk_4D4;                      /* inferred */
    /* 0x4E0 */ ? unk_4E0;                          /* inferred */
    /* 0x4E0 */ char pad_4E0[0x4];
    /* 0x4E4 */ f32 unk_4E4;                        /* inferred */
    /* 0x4E8 */ f32 unk_4E8;                        /* inferred */
    /* 0x4EC */ f32 unk_4EC;                        /* inferred */
    /* 0x4F0 */ f32 unk_4F0;                        /* inferred */
    /* 0x4F4 */ f32 unk_4F4;                        /* inferred */
    /* 0x4F8 */ f32 unk_4F8;                        /* inferred */
    /* 0x4FC */ f32 unk_4FC;                        /* inferred */
    /* 0x500 */ f32 unk_500;                        /* inferred */
    /* 0x504 */ char pad_504[0x10];                 /* maybe part of unk_500[5]? */
    /* 0x514 */ s16 unk_514;                        /* inferred */
    /* 0x516 */ char pad_516[0xACA];                /* maybe part of unk_514[1382]? */
    /* 0xFE0 */ Vec3f unk_FE0;                      /* inferred */
} EnJso;                                            /* size = 0xFEC */

struct _mips2c_stack_EnJso_Destroy {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnJso_Init {
    /* 0x000 */ char pad_0[0x4C];
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad_4C[0x184];
    /* 0x1D0 */ s8 sp1D0;                           /* inferred */
    /* 0x1D1 */ s8 sp1D1;                           /* inferred */
    /* 0x1D2 */ s8 sp1D2;                           /* inferred */
    /* 0x1D3 */ s8 sp1D3;                           /* inferred */
    /* 0x1D4 */ s8 sp1D4;                           /* inferred */
    /* 0x1D5 */ s8 sp1D5;                           /* inferred */
    /* 0x1D6 */ s8 sp1D6;                           /* inferred */
    /* 0x1D7 */ s8 sp1D7;                           /* inferred */
    /* 0x1D8 */ s8 sp1D8;                           /* inferred */
    /* 0x1D9 */ s8 sp1D9;                           /* inferred */
    /* 0x1DA */ s8 sp1DA;                           /* inferred */
    /* 0x1DB */ s8 sp1DB;                           /* inferred */
    /* 0x1DC */ s8 sp1DC;                           /* inferred */
    /* 0x1DD */ s8 sp1DD;                           /* inferred */
    /* 0x1DE */ s8 sp1DE;                           /* inferred */
    /* 0x1DF */ s8 sp1DF;                           /* inferred */
    /* 0x1E0 */ s32 sp1E0;                          /* inferred */
    /* 0x1E4 */ s32 sp1E4;                          /* inferred */
    /* 0x1E8 */ s32 sp1E8;                          /* inferred */
    /* 0x1EC */ ? sp1EC;                            /* inferred */
    /* 0x1EC */ char pad_1EC[0x184];
    /* 0x370 */ s8 sp370;                           /* inferred */
    /* 0x371 */ s8 sp371;                           /* inferred */
    /* 0x372 */ s8 sp372;                           /* inferred */
    /* 0x373 */ s8 sp373;                           /* inferred */
    /* 0x374 */ s8 sp374;                           /* inferred */
    /* 0x375 */ s8 sp375;                           /* inferred */
    /* 0x376 */ s8 sp376;                           /* inferred */
    /* 0x377 */ s8 sp377;                           /* inferred */
    /* 0x378 */ s8 sp378;                           /* inferred */
    /* 0x379 */ s8 sp379;                           /* inferred */
    /* 0x37A */ s8 sp37A;                           /* inferred */
    /* 0x37B */ s8 sp37B;                           /* inferred */
    /* 0x37C */ s8 sp37C;                           /* inferred */
    /* 0x37D */ s8 sp37D;                           /* inferred */
    /* 0x37E */ s8 sp37E;                           /* inferred */
    /* 0x37F */ s8 sp37F;                           /* inferred */
    /* 0x380 */ s32 sp380;                          /* inferred */
    /* 0x384 */ s32 sp384;                          /* inferred */
    /* 0x388 */ s32 sp388;                          /* inferred */
    /* 0x38C */ char pad_38C[0x4];
};                                                  /* size = 0x390 */

struct _mips2c_stack_EnJso_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809ADBC8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ AnimationHeaderCommon **sp28;        /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809ADC7C {};              /* size 0x0 */

struct _mips2c_stack_func_809ADCB8 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 *sp38;                           /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ f32 *sp40;                           /* inferred */
    /* 0x44 */ PosRot *sp44;                        /* inferred */
    /* 0x48 */ char pad_48[0x16];                   /* maybe part of sp44[6]? */
    /* 0x5E */ s16 sp5E;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ Actor *sp64;                         /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_809AE754 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809AE87C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809AE9B0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809AEA08 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809AECA8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AED00 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AED54 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AEDAC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809AEE44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AEEC0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809AF064 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809AF110 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809AF28C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF2F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF368 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF3C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF3FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF440 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF470 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809AF53C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809AF5F8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809AF714 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF76C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AF7F4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809AF8D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809AF99C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809AFA58 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AFAF4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809AFC10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AFE38 {
    /* 0x000 */ char pad_0[0x74];
    /* 0x074 */ Actor *sp74;                        /* inferred */
    /* 0x078 */ char pad_78[0x10];                  /* maybe part of sp74[5]? */
    /* 0x088 */ ? sp88;                             /* inferred */
    /* 0x088 */ char pad_88[0x6C];
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
};                                                  /* size = 0x100 */

struct _mips2c_stack_func_809B0034 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809B0734 {};              /* size 0x0 */

struct _mips2c_stack_func_809B0820 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809B0B70 {};              /* size 0x0 */

struct _mips2c_stack_func_809B0BB0 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

? func_800F0590(GlobalContext *, PosRot *, ?, ?);   /* extern */
? func_8016981C(GlobalContext *, s16, Vec3f *, PosRot *, ? *); /* extern */
? func_801A0654(Vec3f *, ?, ?);                     /* extern */
void func_809ADBC8(EnJso *arg0, s32 arg1, EnJso *); /* static */
void func_809ADC7C(EnJso *arg0);                    /* static */
void func_809AE754(EnJso *arg0, GlobalContext *arg1, EnJso *, GlobalContext *); /* static */
void func_809AE9B0(EnJso *arg0, GlobalContext *arg1); /* static */
void func_809AECA8(Actor *arg0, s32);               /* static */
void func_809AED54(EnJso *arg0);                    /* static */
void func_809AEE44(EnJso *arg0);                    /* static */
void func_809AF064(EnJso *arg0, GlobalContext *arg1); /* static */
void func_809AF28C(EnJso *arg0);                    /* static */
void func_809AF368(EnJso *arg0);                    /* static */
void func_809AF3FC(void *arg0);                     /* static */
void func_809AF470(EnJso *arg0, GlobalContext *, s32); /* static */
void func_809AF5F8(EnJso *arg0, GlobalContext *arg1); /* static */
void func_809AF76C(EnJso *arg0);                    /* static */
void func_809AF8D0(EnJso *arg0, GlobalContext *arg1, s32); /* static */
void func_809AFA58(EnJso *arg0, GlobalContext *arg1); /* static */
void func_809B0034(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809B0734(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809B0820(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void *func_809B0B70(GraphicsContext *arg0);         /* static */
void func_809B0BB0(Actor *this, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_060081F4;
extern FlexSkeletonHeader D_0600AA00;
static s32 D_809B0F40 = 0;
static s32 D_809B0F44 = 0;
static DamageTable D_809B0F48 = {
    {
        0x10,
        0xF1,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0x10,
        0xF1,
        0xF1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0x10,
        0xF1,
        0xF2,
        0x10,
        0x50,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderCylinderInit D_809B0F88 = {
    {0xA, 0x11, 0xD, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 8, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0x16, 0x37, 0, {0, 0, 0}},
};
static ColliderQuadInit D_809B0FB4 = {
    {0xA, 0x11, 0, 0, 0, 3},
    {0, {0xF7CFFFFF, 4, 8}, {0, 0, 0}, 0x81, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ? D_809B1004;                                /* unable to generate initializer */
static ? D_809B100C;                                /* unable to generate initializer */
static ? D_809B103C;                                /* unable to generate initializer */
static s32 D_809B1048[27] = {
    0x3F800000,
    0,
    0x3F000000,
    0x3F800000,
    0,
    0xBF000000,
    0xBF800000,
    0,
    0x3F000000,
    0xBF800000,
    0,
    0xBF000000,
    0x3F000000,
    0,
    0x3F800000,
    0xBF000000,
    0,
    0x3F800000,
    0x3F000000,
    0,
    0xBF800000,
    0xBF000000,
    0,
    0xBF800000,
    0,
    0,
    0,
};
static Vec3f D_809B10B4 = {1600.0f, 0.0f, 0.0f};
static Vec3f D_809B10C0 = {0.0f, 0.0f, 0.0f};
static Vec3f D_809B10CC = {1700.0f, 0.0f, 0.0f};
static Vec3f D_809B10D8 = {0.0f, 0.0f, 0.0f};
static s16 D_809B10E4[22] = {0x80, 0, 0, 0, 0, 0x80, 0, 0, 0, 0, 0x80, 0, 0, 0, 0, 0x80, 0, 0, 0, 0, 0, 0};

void EnJso_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp388;
    s32 sp384;
    s32 sp380;
    s8 sp37F;
    s8 sp37E;
    s8 sp37D;
    s8 sp37C;
    s8 sp37B;
    s8 sp37A;
    s8 sp379;
    s8 sp378;
    s8 sp377;
    s8 sp376;
    s8 sp375;
    s8 sp374;
    s8 sp373;
    s8 sp372;
    s8 sp371;
    s8 sp370;
    ? sp1EC;
    s32 sp1E8;
    s32 sp1E4;
    s32 sp1E0;
    s8 sp1DF;
    s8 sp1DE;
    s8 sp1DD;
    s8 sp1DC;
    s8 sp1DB;
    s8 sp1DA;
    s8 sp1D9;
    s8 sp1D8;
    s8 sp1D7;
    s8 sp1D6;
    s8 sp1D5;
    s8 sp1D4;
    s8 sp1D3;
    s8 sp1D2;
    s8 sp1D1;
    s8 sp1D0;
    ? sp4C;
    EnJso *this = (EnJso *) thisx;

    this->actor.hintId = 0x17;
    this->actor.targetMode = 5;
    this->actor.colChkInfo.mass = 0x50;
    this->actor.colChkInfo.health = 3;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    this->actor.colChkInfo.damageTable = &D_809B0F48;
    this->actor.shape.shadowScale = 0.0f;
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600AA00, &D_060081F4, &this->unk_188, &this->unk_200, 0x14);
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_35C, (Actor *) this, &D_809B0F88);
    Collider_InitAndSetQuad(globalCtx, &this->unk_3A8, (Actor *) this, &D_809B0FB4);
    Collider_InitAndSetQuad(globalCtx, &this->unk_428, (Actor *) this, &D_809B0FB4);
    sp37E = 0xFF;
    sp1DD = 0xFF;
    sp37D = 0xFF;
    sp1DC = 0xFF;
    sp37C = 0xFF;
    sp1DA = 0xFF;
    sp37A = 0xFF;
    sp1D9 = 0xFF;
    sp379 = 0xFF;
    sp1D8 = 0xFF;
    sp378 = 0xFF;
    sp1D6 = 0xFF;
    sp376 = 0xFF;
    sp1D5 = 0xFF;
    sp375 = 0xFF;
    sp1D4 = 0xFF;
    sp374 = 0xFF;
    sp1D3 = 0xFF;
    sp373 = 0xFF;
    sp1D2 = 0xFF;
    sp372 = 0xFF;
    sp1D1 = 0xFF;
    sp371 = 0xFF;
    sp1D0 = 0xFF;
    sp370 = 0xFF;
    sp1D7 = 0x40;
    sp37F = 0;
    sp1DB = 0;
    sp37B = 0;
    sp380 = 8;
    sp1E0 = 8;
    sp1E4 = 0;
    sp384 = 0;
    sp388 = 2;
    sp1E8 = 2;
    sp377 = 0x40;
    sp1DE = 0xFF;
    sp1DF = 0;
    Effect_Add(globalCtx, &this->unk_4A8, 1, 0U, (u8) 0, (void *) &sp1EC);
    Effect_Add(globalCtx, &this->unk_4AC, 1, 0U, (u8) 0, (void *) &sp4C);
    this->actor.gravity = -3.0f;
    this->unk_34A = this->actor.params;
    this->actor.flags |= 0x8000000;
    this->unk_514 = this->unk_34A & 3;
    this->unk_354 = 0.035f;
    func_809ADC7C(this);
}

void EnJso_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v1;
    s16 temp_v1_2;
    EnJso *this = (EnJso *) thisx;

    Collider_DestroyCylinder(globalCtx, &this->unk_35C);
    Collider_DestroyQuad(globalCtx, &this->unk_3A8);
    Collider_DestroyQuad(globalCtx, &this->unk_428);
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0) && (temp_v1->update != 0)) {
        temp_v1->unk_17C = 0;
        temp_v1_2 = temp_v1->unk_14E;
        if ((s32) temp_v1_2 > 0) {
            temp_v1->unk_14E = (s16) (temp_v1_2 - 1);
        }
    }
    Effect_Destroy(globalCtx, this->unk_4A8);
    Effect_Destroy(globalCtx, this->unk_4AC);
}

void func_809ADBC8(EnJso *arg0, s32 arg1) {
    f32 sp2C;
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_v1;
    f32 phi_f0;

    temp_v1 = (arg1 * 4) + &D_809B100C;
    sp28 = temp_v1;
    sp2C = -4.0f;
    arg0->unk_350 = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_f0 = -4.0f;
    if ((arg1 == 3) || (arg1 == 9)) {
        phi_f0 = 0.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, arg0->unk_350, (u8) (s32) *(&D_809B103C + arg1), phi_f0);
}

void func_809ADC7C(EnJso *arg0) {
    arg0->unk_34D = 5;
    arg0->unk_27C = 0;
    arg0->actor.flags |= 0x100000;
    arg0->actionFunc = func_809ADCB8;
    arg0->unk_4B8 = arg0->actor.parent->unk_15A;
}

void func_809ADCB8(EnJso *this, GlobalContext *globalCtx) {
    Actor *sp64;
    f32 sp60;
    s16 sp5E;
    PosRot *sp44;
    f32 *sp40;
    Vec3f *sp3C;
    f32 *sp38;
    Actor *temp_v0_7;
    Actor *temp_v1;
    MessageContext *temp_a0;
    PosRot *temp_a1;
    f32 temp_f2;
    s16 temp_a0_2;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_at;
    s32 temp_at_2;
    u16 temp_t7;
    u32 temp_t0;
    u32 temp_t2;
    u32 temp_t4;
    u32 temp_t9;
    s32 phi_a0;
    s32 phi_v0;

    temp_t7 = this->unk_4C0;
    temp_f2 = this->unk_144.animCurrentFrame;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    switch (temp_t7) {
    case 0:
        sp64 = temp_v1;
        if (ActorCutscene_GetCanPlayNext(this->unk_4B8) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_4B8);
            return;
        }
        sp64 = temp_v1;
        ActorCutscene_StartAndSetUnkLinkFields(this->unk_4B8, (Actor *) this);
        func_800B7298(globalCtx, (Actor *) this, 0x15U);
        this->unk_4C2 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
        temp_a1 = &this->actor.world;
        temp_v1->world.pos.x = this->actor.home.pos.x + 30.0f;
        temp_v1->world.pos.z = this->actor.home.pos.z + 30.0f;
        this->actor.flags &= -2;
        this->unk_4EC = temp_v1->world.pos.x;
        this->unk_4F0 = temp_v1->world.pos.y;
        this->unk_4F4 = temp_v1->world.pos.z;
        this->unk_4F8 = temp_v1->world.pos.x;
        this->unk_4FC = temp_v1->world.pos.y;
        this->unk_500 = temp_v1->world.pos.z;
        sp44 = temp_a1;
        sp64 = temp_v1;
        temp_v0 = Math_Vec3f_Yaw((Vec3f *) &temp_v1->world, (Vec3f *) temp_a1);
        temp_v1->world.rot.y = temp_v0;
        temp_v1->shape.rot.y = temp_v0;
        Math_Vec3f_Copy(&this->unk_4C8, (Vec3f *) &this->unk_4EC);
        Math_Vec3f_Copy(&this->unk_4D4, (Vec3f *) &this->unk_4F8);
        func_809ADBC8(this, 1);
        this->actor.draw = func_809B0BB0;
        Audio_PlayActorSound2((Actor *) this, 0x3812U);
        temp_v0_2 = this->unk_514;
        this->actor.shape.yOffset = 970.0f;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {

                    } else {
                        this->unk_354 = 0.0f;
                    }
                } else {
                    temp_v0_3 = this->actor.yawTowardsPlayer;
                    this->actor.world.rot.y = temp_v0_3;
                    this->actor.shape.rot.y = temp_v0_3;
                    this->actor.world.pos.y = this->actor.home.pos.y + 200.0f;
                }
            } else {
                func_809ADBC8(this, 0);
                func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) sp44, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
                temp_v0_4 = this->actor.yawTowardsPlayer;
                this->actor.world.rot.y = temp_v0_4;
                this->actor.shape.rot.y = temp_v0_4;
            }
        } else {
            this->actor.shape.yOffset = -300.0f;
        }
        this->unk_4BC = 0;
        this->unk_4C0 = (s16) this->unk_4C0 + 1;
    default:
block_55:
        sp38 = &this->unk_4F8;
        sp3C = &this->unk_4D4;
        sp40 = &this->unk_4EC;
        sp44 = (PosRot *) &this->unk_4C8;
        Math_SmoothStepToS(&this->unk_29C, this->unk_2A2, 1, 0xBB8, (s16) 0);
        Math_SmoothStepToS(&this->unk_29E, this->unk_2A4, 1, 0xBB8, (s16) 0);
        Math_SmoothStepToS(&this->unk_2A0, this->unk_2A6, 1, 0xBB8, (s16) 0);
        Math_SmoothStepToS(&this->unk_290, this->unk_296, 1, 0xBB8, (s16) 0);
        Math_SmoothStepToS(&this->unk_292, this->unk_298, 1, 0xBB8, (s16) 0);
        Math_SmoothStepToS(&this->unk_294, this->unk_29A, 1, 0xBB8, (s16) 0);
        Math_Vec3f_Copy((Vec3f *) sp44, (Vec3f *) sp40);
        Math_Vec3f_Copy(sp3C, (Vec3f *) sp38);
        temp_a1_2 = this->unk_4C2;
        if (temp_a1_2 != 0) {
            this->unk_4E0 = 0.0f;
            this->unk_4E4 = 1.0f;
            this->unk_4E8 = 0.0f;
            func_8016981C(globalCtx, temp_a1_2, sp3C, sp44, &this->unk_4E0);
        }
        return;
    case 1:
        temp_v1->world.pos.x = this->actor.home.pos.x + 30.0f;
        temp_v1->world.pos.z = this->actor.home.pos.z + 90.0f;
        this->unk_4EC = temp_v1->world.pos.x - 170.0f;
        this->unk_4F0 = temp_v1->world.pos.y + 30.0f;
        this->unk_4F4 = temp_v1->world.pos.z - 80.0f;
        this->unk_4F8 = temp_v1->world.pos.x + 200.0f;
        this->unk_4FC = temp_v1->world.pos.y + 10.0f;
        this->unk_500 = temp_v1->world.pos.z;
        sp60 = temp_f2;
        Math_ApproachF(&this->actor.shape.shadowScale, 16.0f, 0.4f, 4.0f);
        sp5E = 0;
        temp_v0_5 = this->unk_514;
        if (temp_v0_5 != 0) {
            if (temp_v0_5 != 1) {
                if (temp_v0_5 != 2) {
                    if (temp_v0_5 != 3) {

                    } else {
                        Math_ApproachF(&this->unk_354, 0.035f, 0.2f, 0.03f);
                        if (this->unk_354 >= 0.034f) {
                            this->unk_354 = 0.035f;
                            sp5E = 1;
                        }
                    }
                } else if ((this->actor.bgCheckFlags & 1) != 0) {
                    sp5E = 1;
                    func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
                }
            } else if (this->unk_350 <= temp_f2) {
                sp5E = 1;
                func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
            }
        } else {
            Math_ApproachF(&this->actor.shape.yOffset, 970.0f, 0.5f, 100.0f);
            this->actor.shape.rot.y += 0x1770;
            if (this->actor.shape.yOffset >= 969.0f) {
                sp5E = 1;
            }
            if ((globalCtx->gameplayFrames & 3) == 0) {
                func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
            }
        }
        if (sp5E != 0) {
            func_800B7298(globalCtx, (Actor *) this, 4U);
            func_801518B0(globalCtx, *(&D_809B1004 + (this->unk_348 * 2)), (Actor *) this);
            this->unk_348 += 1;
            this->unk_4BC = 0;
            this->unk_4C0 = (s16) this->unk_4C0 + 1;
            this->actor.shape.yOffset = 970.0f;
        }
        goto block_55;
    case 2:
        this->unk_4EC = temp_v1->world.pos.x - 30.0f;
        this->unk_4F0 = temp_v1->world.pos.y + 30.0f;
        this->unk_4F4 = temp_v1->world.pos.z + 70.0f;
        this->unk_4F8 = temp_v1->world.pos.x - 20.0f;
        this->unk_4FC = temp_v1->world.pos.y + 20.0f;
        this->unk_500 = temp_v1->world.pos.z;
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xBB8, (s16) 0);
        if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            func_80151938(globalCtx, *(&D_809B1004 + (this->unk_348 * 2)));
            this->unk_4BC = 0;
            this->unk_348 += 1;
            this->unk_4C0 = (s16) this->unk_4C0 + 1;
        }
        goto block_55;
    case 3:
        sp64 = temp_v1;
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xBB8, (s16) 0);
        temp_a0 = &globalCtx->msgCtx;
        sp44 = (PosRot *) temp_a0;
        if (func_80152498(temp_a0) == 0xA) {
            this->unk_296 = -0x2710;
            this->unk_29A = -0x2710;
        }
        temp_v0_6 = this->unk_296;
        temp_a0_2 = temp_v0_6 - this->unk_290;
        phi_a0 = (s32) temp_a0_2;
        if ((s32) temp_a0_2 < 0) {
            phi_a0 = (s32) (s16) ((s32) temp_a0_2 * -1);
        }
        if (temp_v0_6 != 0) {
            phi_v0 = phi_a0;
            if (phi_a0 < 0) {
                phi_v0 = -phi_a0;
            }
            if ((phi_v0 < 0x64) && (this->unk_34D == 5)) {
                this->unk_2A6 = -0x32C8;
                this->unk_34D = 2;
                this->unk_2A2 = -0x32C8;
                this->unk_2A4 = -0xBB8;
                this->unk_2A0 = this->unk_2A6;
                sp64 = temp_v1;
                Audio_PlayActorSound2((Actor *) this, 0x39C7U);
            }
        }
        this->unk_4EC = globalCtx->actorCtx.actorList[2].first->world.pos.x + 100.0f;
        this->unk_4F0 = globalCtx->actorCtx.actorList[2].first->world.pos.y + 60.0f;
        this->unk_4F4 = globalCtx->actorCtx.actorList[2].first->world.pos.z - 30.0f;
        this->unk_4F8 = globalCtx->actorCtx.actorList[2].first->world.pos.x - 35.0f;
        this->unk_4FC = globalCtx->actorCtx.actorList[2].first->world.pos.y + 30.0f;
        this->unk_500 = globalCtx->actorCtx.actorList[2].first->world.pos.z - 40.0f;
        if ((func_80152498((MessageContext *) sp44) == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            this->unk_29A = 0;
            temp_v1_2 = this->unk_29A;
            this->unk_4BC = 0;
            this->unk_298 = temp_v1_2;
            this->unk_4C0 = (s16) this->unk_4C0 + 1;
            this->unk_296 = temp_v1_2;
            this->unk_2A6 = temp_v1_2;
            this->unk_2A4 = temp_v1_2;
            this->unk_2A2 = temp_v1_2;
        }
        goto block_55;
    case 4:
        this->unk_4EC = temp_v1->world.pos.x - 40.0f;
        temp_t2 = this->unk_4BC + 1;
        this->unk_4F0 = temp_v1->world.pos.y + 20.0f;
        this->unk_4F4 = temp_v1->world.pos.z;
        temp_at = temp_t2 < 0xAU;
        this->unk_4F8 = temp_v1->world.pos.x - 30.0f;
        this->unk_4FC = temp_v1->world.pos.y + 40.0f;
        this->unk_4BC = temp_t2;
        this->unk_500 = temp_v1->world.pos.z - 130.0f;
        if (temp_at == 0) {
            this->unk_34D = 0;
            Audio_PlayActorSound2((Actor *) this, 0x39C7U);
            temp_v0_7 = this->actor.parent;
            if ((temp_v0_7 != 0) && (temp_v0_7->update != 0) && (temp_v0_7->update != 0)) {
                temp_v0_7->unk_148 = 1U;
                globalCtx->unk_18880 = 1;
            }
            func_809ADBC8(this, 1);
            this->unk_4BC = 0;
            this->unk_4C0 = (s16) this->unk_4C0 + 1;
        }
        goto block_55;
    case 5:
        this->unk_4EC = temp_v1->world.pos.x - 40.0f;
        temp_t9 = this->unk_4BC + 1;
        this->unk_4F0 = temp_v1->world.pos.y + 20.0f;
        this->unk_4F4 = temp_v1->world.pos.z;
        temp_at_2 = temp_t9 < 0xAU;
        this->unk_4F8 = temp_v1->world.pos.x - 30.0f;
        this->unk_4FC = temp_v1->world.pos.y + 40.0f;
        this->unk_4BC = temp_t9;
        this->unk_500 = temp_v1->world.pos.z - 130.0f;
        if (temp_at_2 == 0) {
            func_800B7298(globalCtx, (Actor *) this, 6U);
            ActorCutscene_Stop(this->unk_4B8);
            this->unk_294 = 0;
            temp_v1_3 = this->unk_294;
            temp_t0 = this->actor.flags & 0xFFEFFFFF;
            temp_t4 = temp_t0 & 0xF7FFFFFF;
            this->actor.flags = temp_t0;
            this->actor.flags = temp_t4;
            this->unk_4C0 = 0;
            this->unk_4C2 = 0;
            this->actor.flags = temp_t4 | 1;
            this->unk_292 = temp_v1_3;
            this->unk_290 = temp_v1_3;
            this->unk_2A0 = temp_v1_3;
            this->unk_29E = temp_v1_3;
            this->unk_29C = temp_v1_3;
            this->actor.world.rot.y = this->actor.yawTowardsPlayer;
            func_809AF76C(this);
        }
        goto block_55;
    }
}

void func_809AE754(EnJso *arg0, GlobalContext *arg1) {
    PosRot *sp38;
    PosRot *temp_a2;
    s16 temp_v0;

    func_809ADBC8(arg0, 0);
    temp_a2 = &arg0->actor.world;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    if (arg0->unk_28C != 0) {
        arg0->unk_28C = 0;
        D_809B0F44 = 0;
    }
    if (arg0->unk_28E != 0) {
        arg0->unk_28E = 0;
        D_809B0F40 = 0;
    }
    if (arg0->unk_34D != 0) {
        arg0->unk_34D = 0;
    }
    temp_v0 = arg0->actor.yawTowardsPlayer;
    arg0->actor.world.rot.x = 0;
    arg0->actor.world.rot.y = temp_v0;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->actor.shape.rot.x = arg0->actor.world.rot.x;
    sp38 = temp_a2;
    Math_Vec3f_Copy((Vec3f *) temp_a2, (Vec3f *) &arg0->actor.home);
    arg0->actor.floorHeight = arg0->actor.home.pos.y;
    func_800BBDAC(arg1, (Actor *) arg0, (Vec3f *) temp_a2, arg0->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    arg0->actor.flags |= 0x8000000;
    Audio_PlayActorSound2((Actor *) arg0, 0x3812U);
    arg0->unk_4B4 = 0;
    arg0->unk_27C = 1;
    arg0->actionFunc = func_809AE87C;
    arg0->actor.gravity = 0.0f;
}

void func_809AE87C(EnJso *this, GlobalContext *globalCtx) {
    f32 sp3C;

    sp3C = this->unk_144.animCurrentFrame;
    if ((s32) this->actor.colChkInfo.health <= 0) {
        globalCtx->actorCtx.actorList[2].first->freezeTimer = 3;
    }
    Math_ApproachF(&this->actor.shape.shadowScale, 16.0f, 0.4f, 4.0f);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xBB8, (s16) 0x14);
    if ((globalCtx->gameplayFrames & 7) == 0) {
        func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    }
    if (this->unk_350 <= sp3C) {
        this->actor.gravity = -3.0f;
        if ((s32) this->actor.colChkInfo.health > 0) {
            this->actor.flags &= 0xF7FFFFFF;
            func_809AE9B0(this, globalCtx);
            return;
        }
        func_809AFA58(this, globalCtx);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_809AE9B0(EnJso *arg0, GlobalContext *arg1) {
    void *sp1C;

    sp1C = arg1->actorCtx.actorList[2].first;
    func_809ADBC8((EnJso *)2, (s32) arg1);
    arg0->unk_280 = 0x258;
    arg0->unk_27C = 2;
    arg0->actionFunc = func_809AEA08;
    arg0->unk_27E = sp1C->shape.rot.y;
}

void func_809AEA08(EnJso *this, GlobalContext *globalCtx) {
    f32 sp44;
    Actor *sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    s16 temp_v0;

    sp44 = this->unk_144.animCurrentFrame;
    sp40 = globalCtx->actorCtx.actorList[2].first;
    Audio_PlayActorSound2((Actor *) this, 0x31BDU);
    temp_v0 = this->unk_27C;
    if ((temp_v0 != 1) && (temp_v0 != 0) && (fabsf(sp40->world.pos.y - this->actor.world.pos.y) > 60.0f)) {
        func_809AE754(this, globalCtx);
        return;
    }
    if (sp44 < this->unk_350) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    } else if ((this->actor.bgCheckFlags & 1) != 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    temp_a0 = &this->unk_144;
    sp28 = temp_a0;
    if (func_801378B8(temp_a0, 6.0f) != 0) {
        this->actor.velocity.y = 10.0f;
        if ((globalCtx->gameplayFrames & 1) == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x39C0U);
        }
    }
    if (func_801378B8(sp28, 12.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x39C1U);
        this->actor.speedXZ = 0.0f;
        if (Rand_ZeroFloat(1.0f) < 0.5f) {
            this->unk_280 = (s16) -(s32) this->unk_280;
        }
    }
    if ((this->unk_286 == 0) && (D_809B0F40 == 0) && ((D_809B0F44 == 0) || (this->unk_28C != 0))) {
        D_809B0F40 = 1;
        this->unk_28E = 1;
        this->unk_27C = 4;
        this->actor.speedXZ = 0.0f;
        func_809AED54(this);
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xFA0, (s16) 0x14);
    Math_ApproachF(&this->actor.speedXZ, 5.0f, 0.3f, 2.0f);
    this->unk_27E += this->unk_280;
    sp34 = (Math_SinS(this->unk_27E) * 200.0f) + sp40->world.pos.x;
    sp38 = this->actor.world.pos.y;
    sp3C = (Math_CosS(this->unk_27E) * 200.0f) + sp40->world.pos.z;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &sp34), 0xA, 0xFA0, (s16) 0x14);
}

void func_809AECA8(Actor *arg0) {
    func_809ADBC8((EnJso *)3);
    arg0->unk_27C = 3;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    Audio_PlayActorSound2(arg0, 0x1806U);
    arg0->unk_278 = func_809AED00;
    arg0->unk_36D = (u8) (arg0->unk_36D | 4);
}

void func_809AED00(EnJso *this, GlobalContext *globalCtx) {
    if (this->unk_350 <= this->unk_144.animCurrentFrame) {
        this->unk_28A = 0;
        if (this->unk_28E != 0) {
            this->unk_28E = 0;
            D_809B0F40 = 0;
        }
        func_809AE9B0();
    }
}

void func_809AED54(EnJso *arg0) {
    func_809ADBC8((EnJso *)4);
    arg0->actor.world.rot.y = (s16) -(s32) arg0->actor.yawTowardsPlayer;
    arg0->actionFunc = func_809AEDAC;
    arg0->actor.speedXZ = 10.0f;
    arg0->actor.velocity.y = 20.0f;
}

void func_809AEDAC(EnJso *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    this->actor.world.rot.x += 0x1770;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xFA0, (s16) 0x14);
    if (!(this->actor.velocity.y > 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        temp_v0 = this->actor.yawTowardsPlayer;
        this->actor.world.rot.x = 0;
        this->actor.velocity.y = 0.0f;
        this->actor.speedXZ = 0.0f;
        this->actor.shape.rot.y = temp_v0;
        this->actor.world.rot.y = temp_v0;
        func_809AEE44(this);
    }
}

void func_809AEE44(Actor *arg0) {
    arg0->unk_27C = 5;
    arg0->unk_282 = 0x28;
    arg0->unk_370 = 2;
    arg0->unk_36D = (u8) (arg0->unk_36D & 0xFFFB);
    arg0->speedXZ = 15.0f;
    arg0->velocity.y = 13.0f;
    Audio_PlayActorSound2(arg0, 0x3812U);
    Audio_PlayActorSound2(arg0, 0x39BEU);
    arg0->unk_278 = func_809AEEC0;
}

void func_809AEEC0(EnJso *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 *temp_a0;
    s16 temp_v0_2;
    u8 temp_v0;
    s32 phi_v1;

    temp_v0 = this->unk_3A8.base.atFlags;
    if ((((temp_v0 & 4) != 0) || ((this->unk_428.base.atFlags & 4) != 0)) && (this->unk_3A8.base.atFlags = temp_v0 & 0xFFF9, this->unk_428.base.atFlags &= 0xFFF9, (this->unk_34D == 0))) {
        Matrix_RotateY(this->actor.yawTowardsPlayer, 0U);
        temp_a0 = &sp24;
        sp24 = 0.0f;
        sp28 = 0.0f;
        sp2C = -10.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, &this->unk_FE0);
        this->unk_34D = 1;
        this->unk_282 = 0;
        this->unk_34C = 1;
        func_801A0654(&this->actor.projectedPos, 0x39BE, 0);
        func_809AF368(this);
        return;
    }
    if ((this->actor.velocity.y < 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        this->actor.velocity.y = 13.0f;
    }
    if (!(this->unk_144.animCurrentFrame < this->unk_350)) {
        temp_v0_2 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        phi_v1 = temp_v0_2 << 0x10;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = (s32) temp_v0_2 * -0x10000;
        }
        if ((this->unk_282 == 0) || (this->actor.xzDistToPlayer < 100.0f) || ((phi_v1 >> 0x10) >= 0x4301)) {
            func_801A0654(&this->actor.projectedPos, 0x39BE, 0);
            Math_ApproachZeroF(&this->actor.speedXZ, 0.3f, 3.0f);
            func_809AF064(this, globalCtx);
        }
    }
}

void func_809AF064(EnJso *arg0, GlobalContext *arg1) {
    func_809ADBC8(arg0, 5);
    arg0->unk_27C = 6;
    func_800BBDAC(arg1, (Actor *) arg0, (Vec3f *) &arg0->actor.world, arg0->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    Math_ApproachZeroF(&arg0->actor.speedXZ, 0.3f, 3.0f);
    arg0->unk_34E = 0;
    Audio_PlayActorSound2((Actor *) arg0, 0x1818U);
    arg0->actionFunc = func_809AF110;
}

void func_809AF110(EnJso *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 *temp_a0;
    u8 temp_t5;
    u8 temp_t7;
    u8 temp_v0;
    u8 temp_v1;
    u8 phi_v0;
    u8 phi_v1;

    sp4C = this->unk_144.animCurrentFrame;
    Math_ApproachZeroF(&this->actor.speedXZ, 0.5f, 5.0f);
    if ((globalCtx->gameplayFrames & 7) == 0) {
        func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    }
    temp_v0 = this->unk_3A8.base.atFlags;
    temp_t5 = temp_v0 & 0xFFFD;
    phi_v0 = temp_v0;
    if (((temp_v0 & 2) != 0) || (temp_v1 = this->unk_428.base.atFlags, phi_v1 = temp_v1, ((temp_v1 & 2) != 0))) {
        this->unk_34E = 1;
        this->unk_3A8.base.atFlags = temp_t5;
        temp_t7 = this->unk_428.base.atFlags & 0xFFFD;
        this->unk_428.base.atFlags = temp_t7;
        phi_v0 = temp_t5 & 0xFF;
        phi_v1 = temp_t7 & 0xFF;
    }
    if ((((phi_v0 & 4) != 0) || ((phi_v1 & 4) != 0)) && (this->unk_3A8.base.atFlags = phi_v0 & 0xFFF9, this->unk_428.base.atFlags = phi_v1 & 0xFFF9, (this->unk_34D == 0))) {
        Matrix_RotateY(this->actor.yawTowardsPlayer, 0U);
        temp_a0 = &sp40;
        sp40 = 0.0f;
        sp44 = 0.0f;
        sp48 = -10.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, &this->unk_FE0);
        this->unk_34D = 1;
        this->unk_34C = 1;
        func_809AF368(this);
        return;
    }
    if (this->unk_350 <= sp4C) {
        this->unk_34C = 1;
        this->actor.speedXZ = 0.0f;
        func_809AF28C(this);
    }
}

void func_809AF28C(EnJso *arg0) {
    if (arg0->unk_34E != 0) {
        func_809ADBC8((EnJso *)6);
        arg0->unk_288 = 0x14;
    } else {
        func_809ADBC8((EnJso *)6);
        arg0->unk_288 = 0x28;
    }
    arg0->unk_27C = 7;
    arg0->actionFunc = func_809AF2F8;
}

void func_809AF2F8(EnJso *this, GlobalContext *globalCtx) {
    if (this->unk_288 == 0) {
        this = this;
        this->unk_286 = Rand_S16Offset(0x1E, 0x1E);
        this->unk_35C.base.colType = 0xA;
        this->unk_35C.base.acFlags |= 4;
        this->unk_34E = 0;
        D_809B0F40 = 0;
        this->unk_28E = 0;
        func_809AE9B0(this, globalCtx);
    }
}

void func_809AF368(EnJso *arg0) {
    func_809ADBC8((EnJso *)7);
    arg0->unk_35C.base.acFlags &= 0xFFFB;
    arg0->unk_288 = 0x1E;
    arg0->unk_27C = 9;
    arg0->actionFunc = func_809AF3C0;
    arg0->actor.speedXZ = 0.0f;
}

void func_809AF3C0(EnJso *this, GlobalContext *globalCtx) {
    if (this->unk_350 <= this->unk_144.animCurrentFrame) {
        func_809AF3FC();
    }
}

void func_809AF3FC(void *arg0) {
    func_809ADBC8((EnJso *)8);
    arg0->unk_27C = 0xA;
    arg0->unk_288 = 0x1E;
    arg0->unk_278 = func_809AF440;
}

void func_809AF440(EnJso *this, GlobalContext *globalCtx) {
    if (this->unk_288 == 0) {
        func_809AF76C();
    }
}

void func_809AF470(EnJso *arg0) {
    ? sp24;
    s16 temp_v0;

    func_801A0654(arg0 + 0xEC, 0x39BE, 0);
    func_809ADBC8(arg0, 9);
    temp_v0 = arg0->unk_2AA;
    arg0->unk_288 = 0x1E;
    arg0->actor.speedXZ = 0.0f;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk_2A8 == 0)) {
        arg0->unk_2A8 = 0;
        arg0->unk_2AA = 0;
    }
    arg0->unk_288 = 0x28;
    Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-10.0f, (Vec3f *) &sp24);
    Math_Vec3f_Copy(&arg0->unk_FE0, (Vec3f *) &sp24);
    arg0->unk_27C = 8;
    arg0->unk_35C.base.acFlags &= 0xFFFB;
    arg0->actionFunc = func_809AF53C;
}

void func_809AF53C(EnJso *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (this->unk_2AA == 0xB) {
        temp_v0 = this->unk_2A8;
        if ((temp_v0 != 0) && ((s32) temp_v0 < 0x3C)) {
            this->unk_2AA = 0xA;
        }
    }
    if ((this->unk_288 == 0) && (this->unk_2A8 == 0)) {
        temp_v0_2 = this->unk_2AA;
        if ((temp_v0_2 == 0xB) || (temp_v0_2 == 0xA)) {
            func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2B4, 0xC, 2, 0.3f, 0.2f);
            this->unk_2A8 = 0;
            this->unk_2AA = 0;
        }
        func_809AF76C(this);
    }
}

void func_809AF5F8(EnJso *arg0, GlobalContext *arg1) {
    ? sp34;
    s16 temp_v0;

    func_801A0654(arg0 + 0xEC, 0x39BE, 0);
    func_809ADBC8(arg0, 9);
    arg0->unk_34E = 0;
    arg0->actor.velocity.y = 10.0f;
    arg0->actor.speedXZ = 0.0f;
    Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-20.0f, (Vec3f *) &sp34);
    Math_Vec3f_Copy(&arg0->unk_FE0, (Vec3f *) &sp34);
    temp_v0 = arg0->unk_2AA;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk_2A8 != 0)) {
        func_800BF7CC(arg1, (Actor *) arg0, (Vec3f []) &arg0->unk_2B4, 0xC, 2, 0.3f, 0.2f);
        arg0->unk_2A8 = 0;
        arg0->unk_2AA = 0;
    }
    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
    Audio_PlayActorSound2((Actor *) arg0, 0x39C5U);
    arg0->unk_27C = 0xB;
    arg0->actionFunc = func_809AF714;
}

void func_809AF714(EnJso *this, GlobalContext *globalCtx) {
    if (!(this->actor.velocity.y > 0.0f) && (this->actor.colorFilterTimer == 0) && ((this->actor.bgCheckFlags & 1) != 0)) {
        func_809AF76C();
    }
}

void func_809AF76C(Actor *arg0) {
    Actor *temp_a0;
    Actor *phi_a0;

    func_809ADBC8((EnJso *)0xA);
    temp_a0 = arg0;
    temp_a0->unk_27C = 0xC;
    temp_a0->unk_288 = 0x1E;
    temp_a0->speedXZ = 7.0f;
    temp_a0->velocity.y = 20.0f;
    phi_a0 = temp_a0;
    if (temp_a0->unk_34D != 0) {
        arg0 = temp_a0;
        Audio_PlayActorSound2(temp_a0, 0x39C7U);
        arg0->unk_34D = 0U;
        phi_a0 = arg0;
    }
    phi_a0->world.rot.y += 0x8000;
    phi_a0->unk_278 = func_809AF7F4;
}

void func_809AF7F4(EnJso *this, GlobalContext *globalCtx) {
    f32 sp2C;

    sp2C = this->unk_144.animCurrentFrame;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xBB8, (s16) 0x14);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.speedXZ = 0.0f;
    }
    if ((this->unk_288 == 0) || ((this->unk_350 <= sp2C) && ((this->actor.bgCheckFlags & 1) != 0))) {
        this->actor.world.rot.x = 0;
        this->actor.velocity.y = 0.0f;
        this->actor.speedXZ = 0.0f;
        this->unk_288 = 0;
        D_809B0F40 = 0;
        this->unk_28E = 0;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        this->unk_286 = Rand_S16Offset(0xA, 0xA);
        func_809AE9B0(this, globalCtx);
    }
}

void func_809AF8D0(EnJso *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u32 temp_t8;

    func_801A0654(arg0 + 0xEC, 0x39BE, 0);
    func_809ADBC8(arg0, 9);
    temp_v0 = arg0->unk_2AA;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk_2A8 == 0)) {
        arg0->unk_2AA = 0;
    }
    temp_t8 = arg0->actor.flags & ~5;
    arg0->actor.flags = temp_t8;
    arg0->actor.flags = temp_t8 | 0x8000000;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_34C = 1;
    arg0->unk_288 = 0x1E;
    Enemy_StartFinishingBlow(arg1, (Actor *) arg0);
    Audio_PlayActorSound2((Actor *) arg0, 0x39C6U);
    arg0->unk_27C = 0xD;
    arg0->actionFunc = func_809AF99C;
}

void func_809AF99C(EnJso *this, GlobalContext *globalCtx) {
    f32 sp34;
    s16 temp_v0;

    temp_v0 = this->unk_2AA;
    if ((temp_v0 == 0xB) || (temp_v0 == 0xA)) {
        if (this->unk_2A8 != 0) {
            sp34 = this->unk_144.animCurrentFrame;
            func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2B4, 0xC, 2, 0.3f, 0.2f);
            this->unk_2A8 = 0;
            this->unk_2AA = 0;
            goto block_4;
        }
    } else {
block_4:
        if ((this->unk_350 <= this->unk_144.animCurrentFrame) && (this->unk_288 == 0)) {
            func_809AFA58(this, globalCtx);
        }
    }
}

void func_809AFA58(EnJso *arg0, GlobalContext *arg1) {
    EnJso *temp_a0;
    EnJso *temp_a2;
    u32 temp_t1;
    u32 temp_t3;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_809ADBC8(temp_a0, 0xB, temp_a2);
    arg0->unk_348 = 2;
    arg0->actor.colChkInfo.mass = 0xFF;
    arg0->actor.flags |= 9;
    func_800BC154(arg1, arg1 + 0x1CA0, (Actor *) arg0, 4U);
    temp_t1 = arg0->actor.flags & 0xF7FFFFFF;
    temp_t3 = temp_t1 & 0xFFEFFFFF;
    arg0->actor.flags = temp_t1;
    arg0->actor.flags = temp_t3;
    arg0->unk_27C = 0xE;
    arg0->actionFunc = func_809AFAF4;
}

void func_809AFAF4(EnJso *this, GlobalContext *globalCtx) {
    Actor *sp20;
    Actor *sp1C;
    Actor *temp_v0;
    Actor *temp_v1;
    EnJso *temp_a2;
    GlobalContext *temp_a0;
    u16 temp_t9;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_a0 = globalCtx;
    if (!(this->unk_144.animCurrentFrame < this->unk_350) && (sp20 = temp_v1, this = this, globalCtx = globalCtx, temp_a2 = this, (func_801690CC(temp_a0) == 0)) && (globalCtx->msgCtx.unk11F10 == 0)) {
        if (fabsf(temp_v1->world.pos.y - temp_a2->actor.world.pos.y) < 60.0f) {
            temp_v0 = globalCtx->actorCtx.actorList[2].first;
            temp_t9 = *(&D_809B1004 + (temp_a2->unk_348 * 2));
            temp_a2->actor.textId = temp_t9;
            this = temp_a2;
            sp1C = temp_v0;
            func_801518B0(globalCtx, temp_t9 & 0xFFFF, (Actor *) temp_a2);
            temp_v0->freezeTimer = 3;
            temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C | 0x10000000);
            this->actor.flags |= 0x8000000;
            this->actionFunc = func_809AFC10;
            return;
        }
        func_809AE754(temp_a2, globalCtx, temp_a2, globalCtx);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_809AFC10(EnJso *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    MessageContext *temp_a0;
    s16 temp_v0;
    u16 temp_t0;
    u16 temp_t9;
    u16 temp_v1;
    u16 phi_a1;

    globalCtx->actorCtx.actorList[2].first->freezeTimer = 3;
    temp_v1 = globalCtx->msgCtx.unk11F04;
    temp_a0 = &globalCtx->msgCtx;
    if (((s32) temp_v1 >= 0x1BB2) && ((s32) temp_v1 < 0x1BB7)) {
        temp_t9 = *(&D_809B1004 + (this->unk_348 * 2));
        this->actor.textId = temp_t9;
        func_801518B0(globalCtx, temp_t9 & 0xFFFF, (Actor *) this);
        return;
    }
    this = this;
    globalCtx = globalCtx;
    if ((func_80152498(temp_a0) == 5) && (temp_a0_2 = globalCtx, this = this, globalCtx = globalCtx, (func_80147624(temp_a0_2) != 0))) {
        temp_a0_3 = globalCtx;
        this = this;
        globalCtx = globalCtx;
        func_801477B4(temp_a0_3);
        temp_v0 = this->unk_348;
        if (temp_v0 == 2) {
            temp_t0 = (u16) this->unk_34A;
            phi_a1 = 0x139CU;
            phi_a1 = 0x139CU;
            switch (temp_t0) {
            case 0:
                phi_a1 = 0x139AU;
                break;
            case 1:
                phi_a1 = 0x139BU;
                break;
            case 2:
                phi_a1 = 0x139DU;
                if ((gSaveContext.weekEventReg[14] & 4) != 0) {
                    phi_a1 = 0x13A1U;
                }
                break;
            case 3:
                phi_a1 = 0x139EU;
                if ((gSaveContext.weekEventReg[14] & 4) != 0) {
                    phi_a1 = 0x13A2U;
                }
                break;
            case 4:
                phi_a1 = 0x139FU;
                if ((gSaveContext.weekEventReg[14] & 4) != 0) {
                    phi_a1 = 0x13A3U;
                }
                break;
            case 5:
                phi_a1 = 0x13A0U;
                if ((gSaveContext.weekEventReg[14] & 4) != 0) {
                    phi_a1 = 0x13A4U;
                }
                break;
            case 6:
                phi_a1 = 0x13A5U;
                break;
            case 7:
                phi_a1 = 0x13A6U;
                break;
            case 8:
                phi_a1 = 0x13A7U;
                break;
            case 9:
                phi_a1 = 0x13A8U;
                break;
            }
            if ((*(gBitFlags + 0x24) & gSaveContext.inventory.questItems) != 0) {

            }
            this = this;
            func_80151938(globalCtx, phi_a1);
            this->unk_348 += 1;
            return;
        }
        if (temp_v0 == 3) {
            this = this;
            func_80151938(globalCtx, *(&D_809B1004 + (temp_v0 * 2)));
            this->actionFunc = func_809AFE38;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
    }
}

void func_809AFE38(EnJso *this, GlobalContext *globalCtx) {
    f32 spFC;
    f32 spF8;
    f32 spF4;
    ? sp88;
    Actor *sp74;
    ? *temp_t6;
    PosRot *temp_s2;
    Vec3f *temp_s0;
    f32 *temp_s1;
    f32 *temp_s4;
    s32 *temp_t7;
    s32 *phi_t7;
    ? *phi_t6;
    Vec3f *phi_s0;

    phi_t7 = D_809B1048;
    phi_t6 = &sp88;
    do {
        temp_t7 = phi_t7 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk_-C = (s32) *phi_t7;
        temp_t6->unk_-8 = (s32) temp_t7->unk_-8;
        temp_t6->unk_-4 = (s32) temp_t7->unk_-4;
        phi_t7 = temp_t7;
        phi_t6 = temp_t6;
    } while (temp_t7 != (D_809B1048 + 0x6C));
    globalCtx->actorCtx.actorList[2].first->freezeTimer = 3;
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        sp74 = globalCtx->actorCtx.actorList[2].first;
        func_801477B4(globalCtx);
        temp_s1 = &spF4;
        temp_s4 = temp_s1;
        temp_s2 = &this->actor.world;
        phi_s0 = (Vec3f *) &sp88;
        do {
            Math_Vec3f_Copy((Vec3f *) temp_s1, (Vec3f *) temp_s2);
            spF4 += randPlusMinusPoint5Scaled(30.0f);
            spF8 = this->actor.floorHeight;
            spFC += randPlusMinusPoint5Scaled(30.0f);
            func_800B3030(globalCtx, (Vec3f *) temp_s1, phi_s0, phi_s0, (s16) (s32) ((Rand_ZeroFloat(1.0f) * 100.0f) + 100.0f), (s16) (s32) (s16) (s32) 20.0f, 1);
            temp_s0 = phi_s0 + 0xC;
            phi_s0 = temp_s0;
        } while (temp_s0 != temp_s4);
        func_800F0590(globalCtx, temp_s2, 0xA, 0x321F);
        D_809B0F40 = 0;
        this->unk_28E = 0;
        if (this->unk_28C != 0) {
            this->unk_28C = 0;
            D_809B0F44 = 0;
        }
        sp74->unk_A6C = (s32) (sp74->unk_A6C & 0xEFFFFFFF);
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_809B0034(Actor *arg0, GlobalContext *arg1) {
    s32 sp3C;
    s16 temp_t3;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u8 temp_v0;
    u8 temp_v1;
    s32 phi_a2;

    temp_v0 = arg0->unk_36D;
    phi_a2 = 0;
    if ((temp_v0 & 2) != 0) {
        temp_v1 = arg0->colChkInfo.damageEffect;
        arg0->unk_36D = (u8) (temp_v0 & 0xFFFD);
        if ((temp_v1 == 1) || (temp_v1 == 5)) {
            temp_v0_4 = arg0->unk_2AA;
            if (((temp_v0_4 != 0xB) && (temp_v0_4 != 0xA)) || (arg0->unk_2A8 == 0)) {
                Audio_PlayActorSound2(arg0, 0x389EU);
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                if (arg0->colChkInfo.damageEffect == 5) {
                    arg0->unk_2A8 = 0x28;
                    arg0->unk_2AA = 0x1E;
                }
                func_809AF470((EnJso *) arg0);
                return;
            }
            /* Duplicate return node #34. Try simplifying control flow for better match */
            return;
        }
        temp_t3 = arg0->unk_27C;
        switch (temp_t3) {
        case 2:
        case 3:
            arg0->speedXZ = 0.0f;
            sp3C = 0;
            func_809AECA8(arg0, 0);
block_29:
            phi_a2 = sp3C;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {
                    if (temp_v1 != 4) {
                        if (temp_v1 == 0xF) {
                            phi_a2 = 1;
                        }
                    } else {
                        temp_v0_2 = arg0->unk_2AA;
                        if (((temp_v0_2 != 0xB) && (temp_v0_2 != 0xA)) || (arg0->unk_2A8 == 0)) {
                            Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                            arg0->unk_2A8 = 0x14;
                            arg0->unk_2AA = 0x14;
                            phi_a2 = 1;
                        }
                    }
                } else {
                    temp_v0_3 = arg0->unk_2AA;
                    if (((temp_v0_3 != 0xB) && (temp_v0_3 != 0xA)) || (arg0->unk_2A8 == 0)) {
                        sp3C = 0;
                        Actor_ApplyDamage(arg0);
                        arg0->unk_2A8 = 0x50;
                        arg0->unk_2AA = 0xB;
                        arg0->unk_2AC = 0.0f;
                        arg0->unk_2B0 = 1.5f;
                    }
                    if ((s32) arg0->colChkInfo.health <= 0) {
                        sp3C = 0;
                        func_809AF8D0((EnJso *) arg0, arg1, 0);
                    } else {
                        sp3C = 0;
                        func_809AF470((EnJso *) arg0, arg1, 0);
                    }
                    goto block_29;
                }
            } else {
                arg0->unk_2A8 = 0x28;
                arg0->unk_2AA = 0;
                phi_a2 = 1;
            }
            break;
        }
        if (phi_a2 != 0) {
            Actor_ApplyDamage(arg0);
            arg0->unk_370 = 0xA;
            arg0->unk_36D = (u8) (arg0->unk_36D | 4);
            if ((s32) arg0->colChkInfo.health > 0) {
                func_809AF5F8((EnJso *) arg0, arg1);
                return;
            }
            func_809AF8D0((EnJso *) arg0, arg1);
            /* Duplicate return node #34. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
    }
}

void EnJso_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp30;
    ColliderCylinder *sp2C;
    ? *temp_a0;
    ? *temp_a1;
    ? *temp_a2;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s32 temp_v0_5;
    s32 temp_v0_6;
    void *temp_t0;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t4_3;
    void *temp_t4_4;
    void *temp_t4_5;
    void *temp_t8;
    Vec3s *phi_v1;
    s32 phi_v0;
    ? *phi_a0;
    ? *phi_a1;
    ? *phi_a2;
    EnJso *this = (EnJso *) thisx;

    if ((this->unk_27C != 2) && (this->unk_346 == 0)) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    func_809B0034((Actor *) this, globalCtx);
    if (this->actor.isTargeted != 0) {
        D_809B0F44 = 1;
        this->unk_28C = 1;
    } else if (this->unk_28C != 0) {
        this->unk_28C = 0;
        D_809B0F44 = 0;
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_282;
    if (temp_v0 != 0) {
        this->unk_282 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_286;
    if (temp_v0_2 != 0) {
        this->unk_286 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_288;
    if (temp_v0_3 != 0) {
        this->unk_288 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_2A8;
    if (temp_v0_4 != 0) {
        this->unk_2A8 = temp_v0_4 - 1;
    }
    if (this->unk_27C != 0xE) {
        Actor_SetHeight((Actor *) this, 50.0f);
    } else {
        Actor_SetHeight((Actor *) this, 30.0f);
    }
    Actor_SetScale((Actor *) this, this->unk_354);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actor.world.pos.x += this->unk_FE0.x;
    this->actor.world.pos.z += this->unk_FE0.z;
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Math_ApproachZeroF((f32 *) &this->unk_FE0, 1.0f, 2.0f);
        Math_ApproachZeroF(&this->unk_FE0.z, 1.0f, 2.0f);
    }
    if (this->unk_27C != 1) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 40.0f, 40.0f, 0x1FU);
    }
    if ((this->unk_27C == 4) || (this->unk_27C == 5)) {
        this->unk_4B0 += 1;
        phi_v1 = &this->unk_188;
        phi_a0 = &this->unk_18E;
        phi_a1 = &this->unk_194;
        phi_a2 = &this->unk_19A;
        if ((s32) this->unk_4B0 >= 0x14) {
            this->unk_4B0 = 0;
        }
        temp_v0_5 = this->unk_4B4;
        if (temp_v0_5 < 0x13) {
            this->unk_4B4 = temp_v0_5 + 1;
        }
        temp_t8 = this + (this->unk_4B0 * 0xC);
        temp_t8->unk_518 = (f32) this->actor.world.pos.x;
        temp_t8->unk_51C = (f32) this->actor.world.pos.y;
        temp_t8->unk_520 = (f32) this->actor.world.pos.z;
        temp_t0 = this + (this->unk_4B0 * 0xC);
        temp_t0->unk_51C = (f32) (temp_t0->unk_51C + 40.0f);
        temp_t4 = this + (this->unk_4B0 * 6);
        temp_t4->unk_608 = (unaligned s32) this->unk_30;
        temp_t4->unk_60C = (u16) this->actor.world.rot.z;
        phi_v0 = 0;
        do {
            temp_t4_2 = this + (this->unk_4B0 * 0x78) + phi_v0;
            temp_t4_2->unk_680 = (unaligned s32) phi_v1->unk_0;
            temp_a0 = phi_a0 + 0x18;
            temp_t4_2->unk_684 = (u16) phi_v1->z;
            temp_t4_3 = this + (this->unk_4B0 * 0x78) + phi_v0;
            temp_t4_3->unk_686 = (unaligned s32) temp_a0->unk_-18;
            temp_a1 = phi_a1 + 0x18;
            temp_a2 = phi_a2 + 0x18;
            temp_t4_3->unk_68A = (u16) temp_a0->unk_-14;
            temp_t4_4 = this + (this->unk_4B0 * 0x78) + phi_v0;
            temp_t4_4->unk_68C = (unaligned s32) temp_a1->unk_-18;
            temp_t4_4->unk_690 = (u16) temp_a1->unk_-14;
            temp_t4_5 = this + (this->unk_4B0 * 0x78) + phi_v0;
            temp_t4_5->unk_692 = (unaligned s32) temp_a2->unk_-18;
            temp_v0_6 = phi_v0 + 0x18;
            temp_t4_5->unk_696 = (u16) temp_a2->unk_-14;
            phi_v1 += 0x18;
            phi_v0 = temp_v0_6;
            phi_a0 = temp_a0;
            phi_a1 = temp_a1;
            phi_a2 = temp_a2;
        } while (temp_v0_6 != 0x78);
    } else {
        this->unk_4B4 = 0;
    }
    temp_v0_7 = this->unk_27C;
    if ((temp_v0_7 != 0) && (temp_v0_7 != 2) && (temp_v0_7 != 4) && (temp_v0_7 != 0xB) && (temp_v0_7 != 0xC)) {
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    temp_a1_2 = &this->unk_35C;
    this->actor.shape.rot.x = this->actor.world.rot.x;
    sp2C = temp_a1_2;
    Collider_UpdateCylinder((Actor *) this, temp_a1_2);
    temp_v0_8 = this->unk_27C;
    if ((temp_v0_8 != 0) && (temp_v0_8 != 1) && (temp_v0_8 != 0xB) && (temp_v0_8 != 4) && (temp_v0_8 != 0xD) && (temp_v0_8 != 0xE) && (temp_v0_8 != 0xF)) {
        temp_a1_3 = &globalCtx->colChkCtx;
        sp30 = temp_a1_3;
        CollisionCheck_SetOC(globalCtx, temp_a1_3, (Collider *) sp2C);
        CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp2C);
        if ((this->unk_27C == 6) && (this->unk_34E == 0) && (this->unk_34D == 0)) {
            CollisionCheck_SetAT(globalCtx, sp30, (Collider *) &this->unk_3A8);
            CollisionCheck_SetAT(globalCtx, sp30, (Collider *) &this->unk_428);
        }
    }
}

s32 func_809B0734(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    u8 temp_v1;

    if (arg1 == 5) {
        arg4->x += arg5->unk_29C;
        arg4->y += arg5->unk_29E;
        arg4->z += arg5->unk_2A0;
    }
    if (arg1 == 0xA) {
        arg4->x += arg5->unk_290;
        arg4->y += arg5->unk_292;
        arg4->z += arg5->unk_294;
    }
    if ((arg1 == 4) || (arg1 == 6)) {
        temp_v1 = arg5->unk_34D;
        if (temp_v1 == 5) {
            goto block_13;
        }
        if (arg1 == 4) {
            if (temp_v1 == 2) {
                goto block_13;
            }
        } else if ((arg1 == 6) && (temp_v1 == 3)) {
block_13:
            *arg2 = NULL;
        }
    }
    return 0;
}

void func_809B0820(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp48;
    ? sp3C;
    Vec3f *sp34;
    Vec3f *sp30;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a0_3;
    Vec3f *temp_a0_4;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_a1_3;
    Vec3f *temp_a1_4;
    s16 temp_v0;
    s16 temp_v0_2;

    SysMatrix_StatePush();
    if (arg1 == 4) {
        if (arg4->unk_34D == 1) {
            func_800BBCEC(arg4, arg0, 0xF, arg2);
        }
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        temp_a0 = arg4 + 0x48C;
        temp_a1 = arg4 + 0x474;
        sp30 = temp_a1;
        sp28 = temp_a0;
        Math_Vec3f_Copy(temp_a0, temp_a1);
        temp_a0_2 = arg4 + 0x480;
        temp_a1_2 = arg4 + 0x468;
        sp34 = temp_a1_2;
        sp2C = temp_a0_2;
        Math_Vec3f_Copy(temp_a0_2, temp_a1_2);
        SysMatrix_MultiplyVector3fByState(&D_809B10CC, temp_a1);
        SysMatrix_MultiplyVector3fByState(&D_809B10D8, temp_a1_2);
        Collider_SetQuadVertices(arg4 + 0x428, temp_a1_2, sp30, sp2C, sp28);
        SysMatrix_MultiplyVector3fByState(&D_809B10B4, (Vec3f *) &sp48);
        SysMatrix_MultiplyVector3fByState(&D_809B10C0, (Vec3f *) &sp3C);
        temp_v0 = arg4->unk_27C;
        if (((temp_v0 == 6) || (temp_v0 == 5)) && (arg4->unk_34C == 0)) {
            func_800A81F0(Effect_GetParams(arg4->unk_4AC), (Vec3f *) &sp48, (Vec3f *) &sp3C);
        } else if (arg4->unk_34C == 1) {
            func_800A8514(Effect_GetParams(arg4->unk_4AC));
        }
    }
    if (arg1 == 6) {
        if (arg4->unk_34D == 1) {
            func_800BBCEC(arg4, arg0, 0xF, arg2);
            arg4->unk_34D = 5U;
        }
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        temp_a0_3 = arg4 + 0x40C;
        temp_a1_3 = arg4 + 0x3F4;
        sp30 = temp_a1_3;
        sp28 = temp_a0_3;
        Math_Vec3f_Copy(temp_a0_3, temp_a1_3);
        temp_a0_4 = arg4 + 0x400;
        temp_a1_4 = arg4 + 0x3E8;
        sp34 = temp_a1_4;
        sp2C = temp_a0_4;
        Math_Vec3f_Copy(temp_a0_4, temp_a1_4);
        SysMatrix_MultiplyVector3fByState(&D_809B10CC, temp_a1_3);
        SysMatrix_MultiplyVector3fByState(&D_809B10D8, temp_a1_4);
        Collider_SetQuadVertices(arg4 + 0x3A8, temp_a1_4, sp30, sp2C, sp28);
        SysMatrix_MultiplyVector3fByState(&D_809B10B4, (Vec3f *) &sp48);
        SysMatrix_MultiplyVector3fByState(&D_809B10C0, (Vec3f *) &sp3C);
        temp_v0_2 = arg4->unk_27C;
        if (((temp_v0_2 == 6) || (temp_v0_2 == 5)) && (arg4->unk_34C == 0)) {
            func_800A81F0(Effect_GetParams(arg4->unk_4A8), (Vec3f *) &sp48, (Vec3f *) &sp3C);
        } else if (arg4->unk_34C == 1) {
            func_800A8514(Effect_GetParams(arg4->unk_4A8));
            arg4->unk_34C = 0U;
        }
    }
    if ((arg1 == 4) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xA) || (arg1 == 0xB) || (arg1 == 0xC) || (arg1 == 0xE) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x13)) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk_344 * 0xC) + 0x2B4);
        arg4->unk_344 = (s16) (arg4->unk_344 + 1);
        if ((s32) arg4->unk_344 >= 0xC) {
            arg4->unk_344 = 0;
        }
    }
    SysMatrix_StatePop();
}

void *func_809B0B70(GraphicsContext *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w1 = 0xC81049F8;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xE200001C;
    temp_v0->unk_0 = 0xDF000000;
    temp_v0->unk_4 = 0;
    return temp_v1;
}

void func_809B0BB0(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    f32 temp_f12;
    s16 *temp_s4;
    s16 temp_v0_6;
    s16 temp_v1_2;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s0;
    void *temp_v0_2;
    s16 *phi_s4;
    s16 phi_s2;
    s32 phi_t2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s3 = temp_a0;
    func_8012C2DC(temp_a0);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v1 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060030;
    temp_v1->words.w1 = (u32) D_801AEFA0;
    SkelAnime_DrawSV(globalCtx, this->unk_148, this->unk_164, (s32) this->unk_146, func_809B0734, func_809B0820, this);
    temp_v0 = this->unk_4B4;
    if (temp_v0 > 0) {
        phi_s2 = this->unk_4B0;
        if (temp_v0 > 0) {
            phi_s4 = D_809B10E4;
            do {
                if (*phi_s4 == 0) {
                    phi_t2 = this->unk_4B4 * 2;
                } else {
                    temp_v0_2 = this + (phi_s2 * 0xC);
                    temp_s0 = this + (phi_s2 * 6);
                    SysMatrix_InsertTranslation(temp_v0_2->unk_518, temp_v0_2->unk_51C, temp_v0_2->unk_520, 0);
                    temp_f12 = this->unk_354;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    Matrix_RotateY((s16) (s32) ((f32) temp_s0->unk_60A * 0.0000958738f), 1U);
                    SysMatrix_InsertXRotation_s((s16) (s32) ((f32) temp_s0->unk_608 * 0.0000958738f), 1);
                    SysMatrix_InsertZRotation_s((s16) (s32) ((f32) temp_s0->unk_60C * 0.0000958738f), 1);
                    temp_v0_3 = temp_s3->polyXlu.p;
                    temp_s3->polyXlu.p = temp_v0_3 + 8;
                    temp_v0_3->words.w1 = 0;
                    temp_v0_3->words.w0 = 0xE7000000;
                    temp_v0_4 = temp_s3->polyXlu.p;
                    temp_s3->polyXlu.p = temp_v0_4 + 8;
                    temp_v0_4->words.w0 = 0xFB000000;
                    temp_v0_4->words.w1 = *phi_s4 & 0xFF;
                    temp_v0_5 = temp_s3->polyXlu.p;
                    temp_s3->polyXlu.p = temp_v0_5 + 8;
                    temp_v0_5->words.w0 = 0xDB060030;
                    temp_v0_5->words.w1 = func_809B0B70(globalCtx->state.gfxCtx);
                    temp_s2 = phi_s2 - 1;
                    temp_s3->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_148, this + (phi_s2 * 0x78) + 0x680, (s32) this->unk_146, NULL, NULL, this, temp_s3->polyXlu.p);
                    phi_s2 = (s16) temp_s2;
                    if (temp_s2 < 0) {
                        phi_s2 = 0x13;
                    }
                    phi_t2 = this->unk_4B4 * 2;
                }
                temp_s4 = phi_s4 + 2;
                phi_s4 = temp_s4;
            } while ((u32) temp_s4 < (u32) (phi_t2 + D_809B10E4));
        }
    }
    temp_v1_2 = this->unk_2A8;
    if (temp_v1_2 != 0) {
        temp_v0_6 = this->unk_2AA;
        if ((temp_v0_6 == 0xB) || (temp_v0_6 == 0xA)) {
            this->unk_2AC = (f32) (this->unk_2AC + 0.3f);
            if (this->unk_2AC > 0.5f) {
                this->unk_2AC = 0.5f;
            }
            Math_ApproachF(this + 0x2B0, this->unk_2AC, 0.1f, 0.04f);
        } else {
            this->unk_2AC = 0.8f;
            this->unk_2B0 = 0.8f;
        }
        func_800BE680(globalCtx, this, (Vec3f []) (this + 0x2B4), 0xC, this->unk_2AC, this->unk_2B0, (f32) temp_v1_2 * 0.05f, (u8) (s32) this->unk_2AA);
    }
}
