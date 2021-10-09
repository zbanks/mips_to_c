typedef struct ActorListEntry {
    /* 0x0 */ s32 length;
    /* 0x4 */ Actor *first;
    /* 0x8 */ Collider unk_8;                       /* inferred */
} ActorListEntry;                                   /* size = 0xC */

typedef struct EnJso2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk_144;                 /* inferred */
    /* 0x0188 */ Vec3s unk_188;                     /* inferred */
    /* 0x018E */ ? unk_18E;                         /* inferred */
    /* 0x018E */ char pad_18E[0x6];
    /* 0x0194 */ ? unk_194;                         /* inferred */
    /* 0x0194 */ char pad_194[0x6];
    /* 0x019A */ ? unk_19A;                         /* inferred */
    /* 0x019A */ char pad_19A[0x66];
    /* 0x0200 */ Vec3s unk_200;                     /* inferred */
    /* 0x0206 */ char pad_206[0x72];                /* maybe part of unk_200[20]? */
    /* 0x0278 */ void (*actionFunc)(EnJso2 *, GlobalContext *);
    /* 0x027C */ ? unk_27C;                         /* inferred */
    /* 0x027C */ char pad_27C[0x8];
    /* 0x0284 */ s16 unk_284;                       /* inferred */
    /* 0x0286 */ s16 unk_286;                       /* inferred */
    /* 0x0288 */ s16 unk_288;                       /* inferred */
    /* 0x028A */ s16 unk_28A;                       /* inferred */
    /* 0x028C */ char pad_28C[0x2];
    /* 0x028E */ s16 unk_28E;                       /* inferred */
    /* 0x0290 */ s16 unk_290;                       /* inferred */
    /* 0x0292 */ char pad_292[0x2];
    /* 0x0294 */ f32 unk_294;                       /* inferred */
    /* 0x0298 */ f32 unk_298;                       /* inferred */
    /* 0x029C */ s32 unk_29C;                       /* inferred */
    /* 0x02A0 */ s16 unk_2A0;                       /* inferred */
    /* 0x02A2 */ s16 unk_2A2;                       /* inferred */
    /* 0x02A4 */ f32 unk_2A4;                       /* inferred */
    /* 0x02A8 */ f32 unk_2A8;                       /* inferred */
    /* 0x02AC */ char pad_2AC[0x4];
    /* 0x02B0 */ s16 unk_2B0;                       /* inferred */
    /* 0x02B2 */ char pad_2B2[0x2];
    /* 0x02B4 */ s32 unk_2B4;                       /* inferred */
    /* 0x02B8 */ Vec3f unk_2B8;                     /* inferred */
    /* 0x02C4 */ f32 unk_2C4;                       /* inferred */
    /* 0x02C8 */ f32 unk_2C8;                       /* inferred */
    /* 0x02CC */ f32 unk_2CC;                       /* inferred */
    /* 0x02D0 */ Actor *unk_2D0;                    /* inferred */
    /* 0x02D4 */ Vec3f unk_2D4;                     /* inferred */
    /* 0x02E0 */ char pad_2E0[0x86];                /* maybe part of unk_2D4[12]? */
    /* 0x0366 */ s16 unk_366;                       /* inferred */
    /* 0x0368 */ s8 unk_368;                        /* inferred */
    /* 0x0369 */ char pad_369[0x3];                 /* maybe part of unk_368[4]? */
    /* 0x036C */ s32 unk_36C;                       /* inferred */
    /* 0x0370 */ s8 unk_370;                        /* inferred */
    /* 0x0371 */ u8 unk_371;                        /* inferred */
    /* 0x0372 */ char pad_372[0x2];                 /* maybe part of unk_371[3]? */
    /* 0x0374 */ f32 unk_374;                       /* inferred */
    /* 0x0378 */ f32 unk_378;                       /* inferred */
    /* 0x037C */ char pad_37C[0x4];
    /* 0x0380 */ s32 unk_380;                       /* inferred */
    /* 0x0384 */ s32 unk_384;                       /* inferred */
    /* 0x0388 */ s32 unk_388;                       /* inferred */
    /* 0x038C */ s16 unk_38C;                       /* inferred */
    /* 0x038E */ s16 unk_38E;                       /* inferred */
    /* 0x0390 */ char pad_390[0xAC8];               /* maybe part of unk_38E[1381]? */
    /* 0x0E58 */ Vec3f unk_E58;                     /* inferred */
    /* 0x0E64 */ char pad_E64[0x48];                /* maybe part of unk_E58[7]? */
    /* 0x0EAC */ ActorContext unk_EAC;              /* inferred */
    /* 0x0EF4 */ ColliderCylinder unk_EF4;          /* overlap; inferred */
    /* 0x0F40 */ ColliderQuad unk_F40;              /* overlap; inferred */
    /* 0x0FC0 */ ColliderQuad unk_FC0;              /* overlap; inferred */
    /* 0x1044 */ s16 unk_1044;                      /* overlap; inferred */
    /* 0x1046 */ s16 unk_1046;                      /* overlap; inferred */
    /* 0x1048 */ s16 unk_1048;                      /* overlap; inferred */
    /* 0x104C */ f32 unk_104C;                      /* overlap; inferred */
    /* 0x1050 */ f32 unk_1050;                      /* overlap; inferred */
    /* 0x1054 */ Vec3f unk_1054;                    /* overlap; inferred */
    /* 0x1060 */ Vec3f unk_1060;                    /* overlap; inferred */
    /* 0x1078 */ Vec3f unk_1078;                    /* overlap; inferred */
    /* 0x107C */ f32 unk_107C;                      /* overlap; inferred */
    /* 0x1080 */ f32 unk_1080;                      /* overlap; inferred */
    /* 0x1084 */ f32 unk_1084;                      /* overlap; inferred */
    /* 0x1088 */ f32 unk_1088;                      /* overlap; inferred */
    /* 0x108C */ f32 unk_108C;                      /* overlap; inferred */
} EnJso2;                                           /* size = 0x1090 */

typedef struct {
    /* 0x00 */ ? unk_0;                             /* inferred */
    /* 0x00 */ char pad_0[0x2];
    /* 0x02 */ ? unk_2;                             /* inferred */
    /* 0x02 */ char pad_2[0x2];
    /* 0x04 */ ? unk_4;                             /* inferred */
    /* 0x04 */ char pad_4[0x2];
    /* 0x06 */ s16 unk_6;                           /* inferred */
    /* 0x08 */ ? unk_8;                             /* inferred */
    /* 0x08 */ char pad_8[0x4];
    /* 0x0C */ f32 unkC;
    /* 0x10 */ Color_RGBA8 unk10;
} TargetContextEntry;                               /* size = 0x14 */

struct _mips2c_stack_EnJso2_Destroy {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnJso2_Draw {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ MtxF *sp5C;                          /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ Vec3s *sp64;                         /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x44];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_EnJso2_Init {
    /* 0x000 */ char pad_0[0x34];
    /* 0x034 */ ? sp34;                             /* inferred */
    /* 0x034 */ char pad_34[0x184];
    /* 0x1B8 */ s8 sp1B8;                           /* inferred */
    /* 0x1B9 */ s8 sp1B9;                           /* inferred */
    /* 0x1BA */ s8 sp1BA;                           /* inferred */
    /* 0x1BB */ s8 sp1BB;                           /* inferred */
    /* 0x1BC */ s8 sp1BC;                           /* inferred */
    /* 0x1BD */ s8 sp1BD;                           /* inferred */
    /* 0x1BE */ s8 sp1BE;                           /* inferred */
    /* 0x1BF */ s8 sp1BF;                           /* inferred */
    /* 0x1C0 */ s8 sp1C0;                           /* inferred */
    /* 0x1C1 */ s8 sp1C1;                           /* inferred */
    /* 0x1C2 */ s8 sp1C2;                           /* inferred */
    /* 0x1C3 */ s8 sp1C3;                           /* inferred */
    /* 0x1C4 */ s8 sp1C4;                           /* inferred */
    /* 0x1C5 */ s8 sp1C5;                           /* inferred */
    /* 0x1C6 */ s8 sp1C6;                           /* inferred */
    /* 0x1C7 */ s8 sp1C7;                           /* inferred */
    /* 0x1C8 */ s32 sp1C8;                          /* inferred */
    /* 0x1CC */ s32 sp1CC;                          /* inferred */
    /* 0x1D0 */ s32 sp1D0;                          /* inferred */
    /* 0x1D4 */ ? sp1D4;                            /* inferred */
    /* 0x1D4 */ char pad_1D4[0x184];
    /* 0x358 */ s8 sp358;                           /* inferred */
    /* 0x359 */ s8 sp359;                           /* inferred */
    /* 0x35A */ s8 sp35A;                           /* inferred */
    /* 0x35B */ s8 sp35B;                           /* inferred */
    /* 0x35C */ s8 sp35C;                           /* inferred */
    /* 0x35D */ s8 sp35D;                           /* inferred */
    /* 0x35E */ s8 sp35E;                           /* inferred */
    /* 0x35F */ s8 sp35F;                           /* inferred */
    /* 0x360 */ s8 sp360;                           /* inferred */
    /* 0x361 */ s8 sp361;                           /* inferred */
    /* 0x362 */ s8 sp362;                           /* inferred */
    /* 0x363 */ s8 sp363;                           /* inferred */
    /* 0x364 */ s8 sp364;                           /* inferred */
    /* 0x365 */ s8 sp365;                           /* inferred */
    /* 0x366 */ s8 sp366;                           /* inferred */
    /* 0x367 */ s8 sp367;                           /* inferred */
    /* 0x368 */ s32 sp368;                          /* inferred */
    /* 0x36C */ s32 sp36C;                          /* inferred */
    /* 0x370 */ s32 sp370;                          /* inferred */
    /* 0x374 */ char pad_374[0x4];
};                                                  /* size = 0x378 */

struct _mips2c_stack_EnJso2_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Collider *sp28;                      /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A776E0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ AnimationHeaderCommon **sp28;        /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A77790 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 *sp20;                           /* inferred */
    /* 0x24 */ f32 *sp24;                           /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A77880 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A778D8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A778F8 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ f32 *sp4C;                           /* inferred */
    /* 0x50 */ ActorContext *sp50;                  /* inferred */
    /* 0x54 */ PosRot *sp54;                        /* inferred */
    /* 0x58 */ char pad_58[0x8];                    /* maybe part of sp54[3]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x8];                    /* maybe part of sp68[3]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80A78588 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A785E4 {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A787FC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A78868 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A78A70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A78ACC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A78B04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A78B70 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A78C08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A78C7C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x10];
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A78E8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A78F04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A78F80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A79038 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A790E4 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A7919C {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A79300 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A79364 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A79450 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A794C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A79524 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A79600 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A796BC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A7980C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A79864 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A798C8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A7998C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A79A84 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A79B60 {};              /* size 0x0 */

struct _mips2c_stack_func_80A79BA0 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ Actor *sp5C;                         /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A7A0D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A7A124 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A7A2EC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A7A360 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A7AA48 {};              /* size 0x0 */

struct _mips2c_stack_func_80A7AA9C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x10];
};                                                  /* size = 0x78 */

? func_80169940(GlobalContext *, s16, s32);         /* extern */
? func_801A0238(?, ?);                              /* extern */
? func_801A0654(Vec3f *, ?, ?);                     /* extern */
void func_80A776E0(EnJso2 *arg0, s32 arg1, ? *, s32); /* static */
void func_80A77790(EnJso2 *arg0, GlobalContext *arg1); /* static */
s32 func_80A77880(GlobalContext *arg0);             /* static */
void func_80A778D8(EnJso2 *arg0);                   /* static */
void func_80A78588(EnJso2 *arg0);                   /* static */
void func_80A787FC(EnJso2 *arg0, GlobalContext *arg1); /* static */
void func_80A78A70(Actor *arg0, s16, s32);          /* static */
void func_80A78B04(EnJso2 *arg0);                   /* static */
void func_80A78C08(EnJso2 *arg0);                   /* static */
void func_80A78E8C(EnJso2 *arg0);                   /* static */
void func_80A78F80(EnJso2 *arg0, GlobalContext *arg1); /* static */
void func_80A790E4(EnJso2 *arg0, GlobalContext *arg1); /* static */
void func_80A79300(Actor *arg0);                    /* static */
void func_80A79450(EnJso2 *arg0, u8);               /* static */
void func_80A79524(EnJso2 *arg0, GlobalContext *, s16, s32); /* static */
void func_80A796BC(EnJso2 *arg0, GlobalContext *arg1); /* static */
void func_80A79864(EnJso2 *arg0);                   /* static */
void func_80A7998C(EnJso2 *arg0, GlobalContext *arg1, s16, s32); /* static */
void func_80A79B60(EnJso2 *arg0);                   /* static */
void func_80A7A0D0(EnJso2 *arg0);                   /* static */
void func_80A7A360(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A7AA48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80A7AA9C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern ? D_06002ED8;
extern FlexSkeletonHeader D_06003168;
extern AnimationHeader D_060081F4;
static DamageTable D_80A7B4F0 = {
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
static f32 D_80A7B510[18] = {
    0.003f,
    0.003f,
    0.003f,
    0.002f,
    0.002f,
    0.002f,
    0.001f,
    0.001f,
    0.001f,
    0.003f,
    0.003f,
    0.003f,
    0.002f,
    0.002f,
    0.002f,
    0.001f,
    0.001f,
    0.001f,
};
static Vec3f D_80A7B558 = {800.0f, -20.0f, -50.0f};
static Vec3f D_80A7B564 = {500.0f, -20.0f, -70.0f};
static Vec3f D_80A7B570 = {300.0f, -20.0f, -90.0f};
static Vec3f D_80A7B57C = {800.0f, -20.0f, 50.0f};
static Vec3f D_80A7B588 = {500.0f, -20.0f, 70.0f};
static Vec3f D_80A7B594 = {300.0f, -20.0f, 90.0f};
static Vec3f D_80A7B5A0 = {600.0f, -100.0f, 100.0f};
static Vec3f D_80A7B5AC = {300.0f, -100.0f, 80.0f};
static Vec3f D_80A7B5B8 = {100.0f, -100.0f, 60.0f};
static Vec3f D_80A7B5C4 = {600.0f, -100.0f, -100.0f};
static Vec3f D_80A7B5D0 = {300.0f, -100.0f, -80.0f};
static Vec3f D_80A7B5DC = {100.0f, -100.0f, -60.0f};
static ColliderCylinderInit D_80A7B608 = {
    {0xA, 0x11, 0xD, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 8, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0x16, 0x46, 0, {0, 0, 0}},
};
static ColliderQuadInit D_80A7B634 = {
    {0xA, 0x11, 0, 0, 0, 3},
    {0, {0xF7CFFFFF, 9, 0x10}, {0, 0, 0}, 0x81, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ? D_80A7B684;                                /* unable to generate initializer */
static ? D_80A7B6DC;                                /* unable to generate initializer */
static Vec3s D_80A7B6F4 = {0x15E, 0xFFEC, 0xF29A};
static ? D_80A7B6FC;                                /* unable to generate initializer */
static Vec3f D_80A7B708 = {1600.0f, 0.0f, 0.0f};
static Vec3f D_80A7B714 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80A7B720 = {1700.0f, 0.0f, 0.0f};
static Vec3f D_80A7B72C = {0.0f, 0.0f, 0.0f};
static s16 D_80A7B738[20] = {0x80, 0, 0, 0, 0, 0x80, 0, 0, 0, 0, 0x80, 0, 0, 0, 0, 0x80, 0, 0, 0, 0};

void EnJso2_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp370;
    s32 sp36C;
    s32 sp368;
    s8 sp367;
    s8 sp366;
    s8 sp365;
    s8 sp364;
    s8 sp363;
    s8 sp362;
    s8 sp361;
    s8 sp360;
    s8 sp35F;
    s8 sp35E;
    s8 sp35D;
    s8 sp35C;
    s8 sp35B;
    s8 sp35A;
    s8 sp359;
    s8 sp358;
    ? sp1D4;
    s32 sp1D0;
    s32 sp1CC;
    s32 sp1C8;
    s8 sp1C7;
    s8 sp1C6;
    s8 sp1C5;
    s8 sp1C4;
    s8 sp1C3;
    s8 sp1C2;
    s8 sp1C1;
    s8 sp1C0;
    s8 sp1BF;
    s8 sp1BE;
    s8 sp1BD;
    s8 sp1BC;
    s8 sp1BB;
    s8 sp1BA;
    s8 sp1B9;
    s8 sp1B8;
    ? sp34;
    s16 temp_v0;
    u32 temp_t9;
    EnJso2 *this = (EnJso2 *) thisx;

    this->actor.hintId = 0x18;
    this->actor.targetMode = 5;
    this->actor.colChkInfo.mass = 0x50;
    this->actor.colChkInfo.health = 0xE;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    this->actor.colChkInfo.damageTable = &D_80A7B4F0;
    this->actor.shape.shadowScale = 0.0f;
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06003168, &D_060081F4, &this->unk_188, &this->unk_200, 0x14);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_EF4, (Actor *) this, &D_80A7B608);
    Collider_InitAndSetQuad(globalCtx, &this->unk_F40, (Actor *) this, &D_80A7B634);
    Collider_InitAndSetQuad(globalCtx, &this->unk_FC0, (Actor *) this, &D_80A7B634);
    sp360 = 0xFF;
    sp364 = 0xFF;
    sp1C0 = 0xFF;
    sp1C6 = 0xFF;
    sp1C4 = 0xFF;
    sp366 = 0xFF;
    sp1BF = 0x40;
    sp35F = 0x40;
    sp1C8 = 8;
    sp358 = 0xFF;
    sp359 = 0;
    sp35A = 0;
    sp35B = 0x80;
    sp35C = 0xFF;
    sp35D = 0;
    sp35E = 0;
    sp1C1 = 0;
    sp361 = 0;
    sp1C2 = 0;
    sp362 = 0;
    sp1C5 = 0;
    sp365 = 0;
    sp1C7 = 0;
    sp367 = 0;
    sp1C3 = 0;
    sp363 = 0;
    sp368 = 8;
    sp1CC = 0;
    sp36C = 0;
    sp1D0 = 2;
    sp370 = 2;
    sp1BC = 0xFF;
    sp1BB = 0x80;
    sp1B8 = 0xFF;
    sp1B9 = 0;
    sp1BA = 0;
    sp1BD = 0;
    sp1BE = 0;
    Effect_Add(globalCtx, &this->unk_380, 1, 0U, (u8) 0, (void *) &sp1D4);
    Effect_Add(globalCtx, &this->unk_384, 1, 0U, (u8) 0, (void *) &sp34);
    this->unk_378 = 0.042f;
    this->unk_29C = (s32) this->actor.params;
    this->unk_38E = Rand_S16Offset(0, 7);
    this->unk_2B0 = 0xC;
    this->unk_366 = 0xFF;
    if (this->unk_29C == 0) {
        temp_t9 = this->actor.flags | 0x8000000;
        this->actor.flags = temp_t9;
        this->actor.draw = NULL;
        this->actor.flags = temp_t9 & ~1;
        this->actor.shape.yOffset = 0.0f;
        func_80A778D8(this);
        return;
    }
    temp_v0 = this->actor.yawTowardsPlayer;
    this->actor.gravity = -3.0f;
    this->actor.shape.rot.y = temp_v0;
    this->actor.world.rot.y = temp_v0;
    this->actor.shape.yOffset = 960.0f;
    func_80A78588(this);
}

void EnJso2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnJso2 *this = (EnJso2 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_EF4);
    Collider_DestroyQuad(globalCtx, &this->unk_F40);
    Collider_DestroyQuad(globalCtx, &this->unk_FC0);
    Effect_Destroy(globalCtx, this->unk_380);
    Effect_Destroy(globalCtx, this->unk_384);
    func_801A0238(0x7F, 0);
    func_801A2ED8();
}

void func_80A776E0(EnJso2 *arg0, s32 arg1) {
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_v1;
    f32 temp_f6;
    f32 phi_f0;

    temp_v1 = (arg1 * 4) + &D_80A7B684;
    sp28 = temp_v1;
    temp_f6 = (f32) SkelAnime_GetFrameCount(*temp_v1);
    arg0->unk_EAC.targetContext.unk50[1].unk10 = arg1;
    arg0->unk_374 = temp_f6;
    phi_f0 = 1.0f;
    if (arg1 == 8) {
        phi_f0 = 2.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, phi_f0, 0.0f, arg0->unk_374, (u8) (s32) *(&D_80A7B6DC + arg1), -2.0f);
}

void func_80A77790(EnJso2 *arg0, GlobalContext *arg1) {
    f32 *sp24;
    f32 *sp20;
    f32 *temp_a0;
    f32 *temp_a0_2;

    temp_a0 = arg0 + 0x1054;
    if (arg0->unk_1048 != 0) {
        sp24 = temp_a0;
        Math_ApproachF(temp_a0, arg0->unk_EAC.clearedRooms, arg0->unk_294, arg0->unk_298);
        Math_ApproachF(arg0 + 0x1058, arg0->unk_EAC.clearedRoomsTemp, arg0->unk_294, arg0->unk_298);
        Math_ApproachF(arg0 + 0x105C, arg0->unk_EAC.collectibleFlags[0], arg0->unk_294, arg0->unk_298);
        temp_a0_2 = arg0 + 0x1060;
        sp20 = temp_a0_2;
        Math_ApproachF(temp_a0_2, arg0->unk_EAC.collectibleFlags[1], arg0->unk_294, arg0->unk_298);
        Math_ApproachF(arg0 + 0x1064, arg0->unk_EAC.collectibleFlags[2], arg0->unk_294, arg0->unk_298);
        Math_ApproachF(arg0 + 0x1068, arg0->unk_EAC.collectibleFlags[3], arg0->unk_294, arg0->unk_298);
        Math_ApproachF(arg0 + 0x104C, arg0->unk_EAC.targetContext.unk50[2].unkC, 0.3f, 10.0f);
        Play_CameraSetAtEye(arg1, arg0->unk_1048, (Vec3f *) sp20, (Vec3f *) sp24);
        func_80169940(arg1, arg0->unk_1048, arg0->unk_104C);
    }
}

s32 func_80A77880(GlobalContext *arg0) {
    if ((func_80152498(arg0 + 0x4908) == 5) && (func_80147624(arg0) != 0)) {
        func_801477B4(arg0);
        return 1;
    }
    return 0;
}

void func_80A778D8(EnJso2 *arg0) {
    arg0->unk_284 = 0;
    arg0->unk_36C = 2;
    arg0->actionFunc = func_80A778F8;
}

void func_80A778F8(EnJso2 *this, GlobalContext *globalCtx) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    PosRot *sp54;
    ActorContext *sp50;
    f32 *sp4C;
    ? *temp_a0_2;
    ? *temp_a0_3;
    ? *temp_a1_3;
    ? *temp_a1_4;
    ? *temp_a2;
    ? *temp_a2_2;
    Actor *temp_s0;
    PosRot *temp_a0;
    PosRot *temp_a1_2;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *temp_s0_5;
    Vec3s *temp_v0_6;
    f32 *temp_a1;
    f32 *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f8;
    s16 temp_v0;
    s32 temp_s0_4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u32 temp_t3_3;
    u32 temp_t5_3;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t9;
    void *temp_t9_2;
    s32 phi_s0;
    Vec3s *phi_v1;
    s32 phi_v0;
    ? *phi_a0;
    ? *phi_a1;
    ? *phi_a2;
    Vec3s *phi_v1_2;
    s32 phi_v0_2;
    ? *phi_a0_2;
    ? *phi_a1_2;
    ? *phi_a2_2;
    PosRot *phi_v0_3;
    f32 *phi_v1_3;
    ActorContext *phi_a0_3;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    sp80 = this->unk_144.animCurrentFrame;
    temp_v0 = this->unk_1046;
    switch (temp_v0) {
    case 0:
        if (this->actor.xzDistToPlayer < 400.0f) {
            func_801A0238(0, 0xA);
            this->unk_1046 += 1;
            this->actor.gravity = 0.0f;
        }
        break;
    case 1:
        if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) == 0) {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        } else {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            this->unk_1048 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
            this->unk_294 = 0.4f;
            this->unk_298 = 40.0f;
            temp_s0->world.pos.x = 420.0f;
            temp_s0->world.pos.z = -3430.0f;
            this->actor.draw = EnJso2_Draw;
            func_80A776E0(this, 0x11);
            temp_a0 = &this->actor.world;
            sp54 = temp_a0;
            temp_a1 = &sp74;
            sp74 = (f32) D_80A7B6F4.x;
            sp78 = (f32) D_80A7B6F4.y;
            sp7C = (f32) D_80A7B6F4.z;
            this->actor.world.rot.y = Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) temp_a1);
            this->unk_1050 = 60.0f;
            this->unk_104C = 60.0f;
            temp_s0_2 = &this->unk_1078;
            this->actor.world.pos.x = -285.0f;
            this->actor.world.pos.y = 535.0f;
            this->actor.world.pos.z = -3425.0f;
            this->unk_EAC.clearedRooms = 82.0f;
            this->unk_1080 = 780.0f;
            temp_f0 = -586.0f + 500.0f;
            this->unk_107C = temp_f0;
            this->unk_1088 = temp_f0;
            Math_Vec3f_Copy((Vec3f *) &sp74, temp_s0_2);
            OLib_DbCameraVec3fSum(temp_a0, (Vec3f *) &sp74, temp_s0_2, 1);
            this->unk_1084 = this->actor.world.pos.x - 90.0f;
            this->unk_108C = this->actor.world.pos.z + 100.0f;
            Math_Vec3f_Copy(&this->unk_1054, temp_s0_2);
            Math_Vec3f_Copy(&this->unk_1060, (Vec3f *) &this->unk_1084);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            func_80122744(globalCtx, (void *) &this->unk_27C, 1U, &D_80A7B6F4);
            this->unk_1046 += 1;
        }
        break;
    case 2:
        temp_s0_3 = &this->unk_1078;
        this->actor.world.pos.x = -285.0f;
        this->actor.world.pos.y = 535.0f;
        this->actor.world.pos.z = -3425.0f;
        this->unk_1078.x = 82.0f;
        this->unk_1078.y = -516.0f;
        this->unk_1078.z = 800.0f;
        Math_Vec3f_Copy((Vec3f *) &sp74, temp_s0_3);
        OLib_DbCameraVec3fSum(&this->actor.world, (Vec3f *) &sp74, temp_s0_3, 1);
        this->unk_1084 = this->actor.world.pos.x - 90.0f;
        this->unk_1088 = this->actor.world.pos.y - 591.0f;
        this->unk_108C = this->actor.world.pos.z + 100.0f;
        Math_Vec3f_Copy(&this->unk_1054, temp_s0_3);
        Math_Vec3f_Copy(&this->unk_1060, (Vec3f *) &this->unk_1084);
        if (func_80122760(globalCtx, (void *) &this->unk_27C, 60.0f) != 0) {
            func_800B7298(globalCtx, NULL, 0x13U);
            this->unk_1044 = 0xA;
            this->unk_1046 += 1;
        }
        break;
    case 3:
        phi_s0 = 0;
        if (this->unk_1044 == 1) {
            sp50 = &globalCtx->actorCtx;
            sp54 = &this->actor.home;
            do {
                Math_Vec3f_Copy((Vec3f *) &sp60, (Vec3f *) sp54);
                sp60 += randPlusMinusPoint5Scaled(80.0f);
                sp64 = this->actor.world.pos.y + ((f32) phi_s0 * 120.0f);
                temp_f8 = sp68 + randPlusMinusPoint5Scaled(80.0f);
                sp68 = temp_f8;
                Actor_Spawn(sp50, globalCtx, 0x1D9, sp60, sp64, temp_f8, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, (s16) 2);
                temp_s0_4 = phi_s0 + 1;
                phi_s0 = temp_s0_4;
            } while (temp_s0_4 != 2);
            this->unk_1044 = 0x19;
            this->unk_1046 += 1;
        }
        break;
    case 4:
        if (this->unk_1044 == 0) {
            func_800B7298(globalCtx, NULL, 4U);
            this->unk_1044 = 0x14;
            this->unk_1046 += 1;
        }
        break;
    case 5:
        if (this->unk_1044 == 0) {
            this->unk_1044 = 0x14;
            this->unk_1046 = temp_v0 + 1;
        }
        break;
    case 6:
        temp_s0_5 = &this->unk_1078;
        this->unk_1078.x = 82.0f;
        this->unk_1078.y = -533.0f;
        this->unk_1078.z = 800.0f;
        Math_Vec3f_Copy((Vec3f *) &sp74, temp_s0_5);
        OLib_DbCameraVec3fSum(&this->actor.world, (Vec3f *) &sp74, temp_s0_5, 1);
        this->unk_1084 = this->actor.focus.pos.x - 80.0f;
        this->unk_1088 = this->actor.focus.pos.y - 360.0f;
        this->unk_108C = this->actor.focus.pos.z + 100.0f;
        if (this->unk_1044 == 0) {
            this->unk_1044 = 5;
            this->unk_1046 += 1;
        }
        break;
    case 7:
        if (this->unk_1044 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3AC6U);
            this->unk_1044 = 0x2D;
            this->unk_1046 += 1;
        }
        break;
    case 8:
        if (this->unk_1044 == 0) {
            this->actor.speedXZ = 3.0f;
            this->actor.velocity.y = 10.0f;
            this->actor.gravity = -1.0f;
            func_80A776E0(this, 0x10);
            this->unk_294 = 0.4f;
            this->unk_298 = 40.0f;
            Audio_PlayActorSound2((Actor *) this, 0x38EEU);
            Math_Vec3f_Copy(&this->unk_2B8, &this->unk_1054);
            this->unk_1044 = 0x19;
            this->unk_1046 += 1;
        }
        break;
    case 9:
        this->unk_38C += 1;
        if ((s32) this->unk_38C >= 0x14) {
            this->unk_38C = 0;
        }
        temp_v0_2 = this->unk_388;
        if (temp_v0_2 < 0x13) {
            this->unk_388 = temp_v0_2 + 1;
        }
        temp_a1_2 = &this->actor.world;
        sp54 = temp_a1_2;
        Math_Vec3f_Copy(this + (this->unk_38C * 0xC) + 0x390, (Vec3f *) temp_a1_2);
        Math_Vec3s_Copy(this + (this->unk_38C * 6) + 0x480, &this->actor.world.rot);
        temp_t0 = this + (this->unk_38C * 0xC);
        temp_t0->unk_394 = (f32) (temp_t0->unk_394 + 40.0f);
        phi_v1 = &this->unk_188;
        phi_v0 = 0;
        phi_a0 = &this->unk_18E;
        phi_a1 = &this->unk_194;
        phi_a2 = &this->unk_19A;
        do {
            temp_t3 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t3->unk_4F8 = (unaligned s32) phi_v1->unk_0;
            temp_a0_2 = phi_a0 + 0x18;
            temp_t3->unk_4FC = (u16) phi_v1->z;
            temp_t9 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t9->unk_4FE = (unaligned s32) temp_a0_2->unk_-18;
            temp_a1_3 = phi_a1 + 0x18;
            temp_a2 = phi_a2 + 0x18;
            temp_t9->unk_502 = (u16) temp_a0_2->unk_-14;
            temp_t7 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t7->unk_504 = (unaligned s32) temp_a1_3->unk_-18;
            temp_t7->unk_508 = (u16) temp_a1_3->unk_-14;
            temp_t5 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t5->unk_50A = (unaligned s32) temp_a2->unk_-18;
            temp_v0_3 = phi_v0 + 0x18;
            temp_t5->unk_50E = (u16) temp_a2->unk_-14;
            phi_v1 += 0x18;
            phi_v0 = temp_v0_3;
            phi_a0 = temp_a0_2;
            phi_a1 = temp_a1_3;
            phi_a2 = temp_a2;
        } while (temp_v0_3 != 0x78);
        Math_ApproachF(&this->actor.shape.shadowScale, 17.0f, 0.4f, 4.0f);
        if (this->unk_1044 == 0) {
            this->unk_1078.x = this->unk_2B8.x - 490.0f;
            this->unk_1078.y = this->unk_2B8.y;
            this->unk_1078.z = this->unk_2B8.z + 100.0f;
        }
        this->unk_1084 = this->actor.focus.pos.x - 80.0f;
        this->unk_108C = this->actor.focus.pos.z;
        this->unk_1088 = this->actor.focus.pos.y - 130.0f;
        if ((this->actor.bgCheckFlags & 1) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3AD9U);
            this->actor.gravity = 0.0f;
            this->actor.velocity.y = 0.0f;
            this->actor.speedXZ = 0.0f;
            func_80A776E0(this, 0xF);
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) sp54, this->actor.shape.shadowScale, 0xA, 4.0f, (s16) 0x1F4, (s16) 0x32, (u8) 1);
            this->unk_1044 = 1;
            Audio_PlayActorSound2((Actor *) this, 0x387BU);
            this->unk_1046 += 1;
        }
        break;
    case 10:
        this->unk_38C += 1;
        if ((s32) this->unk_38C >= 0x14) {
            this->unk_38C = 0;
        }
        temp_v0_4 = this->unk_388;
        if (temp_v0_4 < 0x13) {
            this->unk_388 = temp_v0_4 + 1;
        }
        Math_Vec3f_Copy(this + (this->unk_38C * 0xC) + 0x390, (Vec3f *) &this->actor.world);
        Math_Vec3s_Copy(this + (this->unk_38C * 6) + 0x480, &this->actor.world.rot);
        temp_t0_2 = this + (this->unk_38C * 0xC);
        temp_t0_2->unk_394 = (f32) (temp_t0_2->unk_394 + 40.0f);
        phi_v1_2 = &this->unk_188;
        phi_v0_2 = 0;
        phi_a0_2 = &this->unk_18E;
        phi_a1_2 = &this->unk_194;
        phi_a2_2 = &this->unk_19A;
        do {
            temp_t7_2 = this + (this->unk_38C * 0x78) + phi_v0_2;
            temp_t7_2->unk_4F8 = (unaligned s32) phi_v1_2->unk_0;
            temp_a0_3 = phi_a0_2 + 0x18;
            temp_t7_2->unk_4FC = (u16) phi_v1_2->z;
            temp_t5_2 = this + (this->unk_38C * 0x78) + phi_v0_2;
            temp_t5_2->unk_4FE = (unaligned s32) temp_a0_3->unk_-18;
            temp_a1_4 = phi_a1_2 + 0x18;
            temp_a2_2 = phi_a2_2 + 0x18;
            temp_t5_2->unk_502 = (u16) temp_a0_3->unk_-14;
            temp_t3_2 = this + (this->unk_38C * 0x78) + phi_v0_2;
            temp_t3_2->unk_504 = (unaligned s32) temp_a1_4->unk_-18;
            temp_t3_2->unk_508 = (u16) temp_a1_4->unk_-14;
            temp_t9_2 = this + (this->unk_38C * 0x78) + phi_v0_2;
            temp_t9_2->unk_50A = (unaligned s32) temp_a2_2->unk_-18;
            temp_v0_5 = phi_v0_2 + 0x18;
            temp_t9_2->unk_50E = (u16) temp_a2_2->unk_-14;
            phi_v1_2 += 0x18;
            phi_v0_2 = temp_v0_5;
            phi_a0_2 = temp_a0_3;
            phi_a1_2 = temp_a1_4;
            phi_a2_2 = temp_a2_2;
        } while (temp_v0_5 != 0x78);
        if (this->unk_1044 == 0) {
            this->unk_1078.x = this->unk_2B8.x - 518.0f;
            this->unk_1078.y = this->unk_2B8.y - 11.0f;
            this->unk_1078.z = this->unk_2B8.z + 100.0f;
        }
        this->unk_1084 = this->actor.focus.pos.x + 20.0f;
        this->unk_108C = this->actor.focus.pos.z;
        this->unk_1088 = this->actor.focus.pos.y - 50.0f;
        if (this->unk_374 <= sp80) {
            this->unk_388 = 0;
            this->unk_38C = 0;
            this->unk_1044 = 0x14;
            func_80A776E0(this, 0x12, temp_a2_2, 0x78);
            this->unk_1046 += 1;
        }
        break;
    case 11:
        if (func_801378B8(&this->unk_144, 17.0f) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x39C7U);
            Audio_PlayActorSound2((Actor *) this, 0x2822U);
            this->unk_36C = 0;
            func_801A0238(0x7F, 0);
            func_801A2E54(0x38);
        }
        if (this->unk_1044 == 0) {
            this->unk_1078.x = this->unk_2B8.x - 470.0f;
            this->unk_1078.y = this->unk_2B8.y - 10.0f;
            this->unk_1078.z = this->unk_2B8.z + 100.0f;
            this->unk_1084 = this->actor.focus.pos.x - 80.0f;
            this->unk_108C = this->actor.focus.pos.z;
            this->unk_1088 = this->actor.focus.pos.y - 30.0f;
            if (this->unk_36C == 0) {
                phi_v0_3 = (PosRot *) this;
                phi_v1_3 = D_80A7B510;
                phi_a0_3 = &this->unk_EAC;
                do {
                    sp54 = phi_v0_3;
                    sp4C = phi_v1_3;
                    sp50 = phi_a0_3;
                    Math_ApproachF((f32 *) phi_a0_3, *phi_v1_3, 0.3f, 0.0005f);
                    temp_f0_2 = phi_v0_3->unk_EAC;
                    temp_v1 = phi_v1_3 + 0xC;
                    temp_v0_6 = &phi_v0_3->rot;
                    temp_v0_6->unk_EA4 = temp_f0_2;
                    temp_v0_6->unk_EA8 = temp_f0_2;
                    phi_v0_3 = (PosRot *) temp_v0_6;
                    phi_v1_3 = temp_v1;
                    phi_a0_3 = (ActorContext *) &phi_a0_3->unkC;
                } while (temp_v1 != &D_80A7B558);
            }
        }
        if (this->unk_374 <= sp80) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
            temp_t3_3 = this->actor.flags & 0xFFEFFFFF;
            temp_t5_3 = temp_t3_3 & 0xF7FFFFFF;
            this->actor.flags = temp_t3_3;
            this->actor.flags = temp_t5_3;
            this->unk_1048 = 0;
            this->actor.flags = temp_t5_3 | 1;
            this->actor.gravity = -3.0f;
            func_80A787FC(this, globalCtx);
        }
        break;
    }
    this->actor.shape.yOffset = 960.0f;
    func_80A77790(this, globalCtx);
}

void func_80A78588(EnJso2 *arg0) {
    arg0->unk_36C = 2;
    arg0->unk_EF4.base.acFlags |= 4;
    arg0->actor.flags &= 0xFFEFFFFF;
    func_80A776E0((EnJso2 *)0xD);
    arg0->actionFunc = func_80A785E4;
}

void func_80A785E4(EnJso2 *this, GlobalContext *globalCtx) {
    f32 sp5C;
    EnJso2 *temp_s0_2;
    SkelAnime *temp_s0;
    f32 *temp_s1;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;
    f32 *phi_s2;
    f32 *phi_s1;
    EnJso2 *phi_s0;

    sp5C = this->unk_144.animCurrentFrame;
    temp_v0 = this->actor.yawTowardsPlayer;
    temp_v1 = this->unk_1046;
    this->actor.shape.rot.y = temp_v0;
    this->actor.world.rot.y = temp_v0;
    if (temp_v1 != 0) {
        temp_s0 = &this->unk_144;
        if (temp_v1 != 1) {
            return;
        }
        if (func_801378B8(temp_s0, 18.0f) != 0) {
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
        }
        Math_ApproachF(&this->actor.shape.shadowScale, 17.0f, 0.4f, 4.0f);
        if (func_801378B8(temp_s0, 45.0f) != 0) {
            func_801A0238(0x7F, 0);
            func_801A2E54(0x38);
            Audio_PlayActorSound2((Actor *) this, 0x39C7U);
            Audio_PlayActorSound2((Actor *) this, 0x2822U);
            this->unk_36C = 0;
        }
        phi_s2 = (f32 *) &this->unk_EAC;
        phi_s0 = this;
        if (this->unk_36C == 0) {
            phi_s1 = D_80A7B510;
            do {
                Math_ApproachF(phi_s2, *phi_s1, 0.3f, 0.0005f);
                temp_f0 = phi_s0->unk_EAC.unk_0;
                temp_s1 = phi_s1 + 0xC;
                temp_s0_2 = phi_s0 + 0xC;
                temp_s0_2->unk_EA4 = temp_f0;
                temp_s0_2->unk_EA8 = temp_f0;
                phi_s2 += 0xC;
                phi_s1 = temp_s1;
                phi_s0 = temp_s0_2;
            } while (temp_s1 != &D_80A7B558);
        }
        if (this->unk_374 <= sp5C) {
            func_80A787FC(this, globalCtx);
        }
        return;
    }
    func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    func_801A0238(0, 0xA);
    Audio_PlayActorSound2((Actor *) this, 0x3812U);
    this->unk_1046 += 1;
}

void func_80A787FC(EnJso2 *arg0, GlobalContext *arg1) {
    void *sp1C;

    sp1C = arg1->actorCtx.actorList[2].first;
    func_80A776E0((EnJso2 *)8, (s32) arg1);
    arg0->unk_288 = 0x258;
    arg0->unk_284 = 3;
    arg0->unk_370 = 0;
    arg0->unk_EF4.base.acFlags |= 4;
    arg0->actionFunc = func_80A78868;
    arg0->unk_286 = sp1C->shape.rot.y;
}

void func_80A78868(EnJso2 *this, GlobalContext *globalCtx) {
    f32 sp44;
    Actor *sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    SkelAnime *sp28;
    SkelAnime *temp_a0;

    sp44 = this->unk_144.animCurrentFrame;
    sp40 = globalCtx->actorCtx.actorList[2].first;
    Audio_PlayActorSound2((Actor *) this, 0x31BDU);
    if (sp44 < this->unk_374) {
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
            this->unk_288 = (s16) -(s32) this->unk_288;
        }
    }
    if (this->unk_28E == 0) {
        this->actor.speedXZ = 0.0f;
        func_80A78B04(this);
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xFA0, (s16) 0x14);
    Math_ApproachF(&this->actor.speedXZ, 5.0f, 0.3f, 2.0f);
    this->unk_286 += this->unk_288;
    sp34 = (Math_SinS(this->unk_286) * 200.0f) + sp40->world.pos.x;
    sp38 = this->actor.world.pos.y;
    sp3C = (Math_CosS(this->unk_286) * 200.0f) + sp40->world.pos.z;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &sp34), 0xA, 0xFA0, (s16) 0x14);
}

void func_80A78A70(Actor *arg0) {
    func_80A776E0((EnJso2 *)5);
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    Audio_PlayActorSound2(arg0, 0x1806U);
    arg0->unk_284 = 4;
    arg0->unk_F05 = (u8) (arg0->unk_F05 | 4);
    arg0->unk_278 = func_80A78ACC;
}

void func_80A78ACC(EnJso2 *this, GlobalContext *globalCtx) {
    if (this->unk_374 <= this->unk_144.animCurrentFrame) {
        func_80A787FC();
    }
}

void func_80A78B04(EnJso2 *arg0) {
    func_80A776E0(NULL);
    arg0->actor.world.rot.y = (s16) -(s32) arg0->actor.yawTowardsPlayer;
    arg0->unk_EF4.base.acFlags |= 4;
    arg0->unk_284 = 5;
    arg0->actionFunc = func_80A78B70;
    arg0->actor.speedXZ = 10.0f;
    arg0->actor.velocity.y = 20.0f;
}

void func_80A78B70(EnJso2 *this, GlobalContext *globalCtx) {
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
        func_80A78C08(this);
    }
}

void func_80A78C08(Actor *arg0) {
    arg0->unk_28A = 0x28;
    arg0->unk_F05 = (u8) (arg0->unk_F05 | 4);
    arg0->speedXZ = 15.0f;
    arg0->velocity.y = 13.0f;
    Audio_PlayActorSound2(arg0, 0x3812U);
    Audio_PlayActorSound2(arg0, 0x39BEU);
    arg0->unk_284 = 6;
    arg0->unk_278 = func_80A78C7C;
}

void func_80A78C7C(EnJso2 *this, GlobalContext *globalCtx) {
    f32 sp3C;
    ? sp2C;
    s16 temp_v0_2;
    u8 temp_v0;
    s32 phi_v1;

    temp_v0 = this->unk_F40.base.atFlags;
    if (((temp_v0 & 4) != 0) || ((this->unk_FC0.base.atFlags & 4) != 0)) {
        this->unk_F40.base.atFlags = temp_v0 & 0xFFF9;
        this->unk_FC0.base.atFlags &= 0xFFF9;
        Matrix_RotateY(this->actor.yawTowardsPlayer, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-10.0f, (Vec3f *) &sp2C);
        Math_Vec3f_Copy(&this->unk_E58, (Vec3f *) &sp2C);
        this->unk_368 = 1;
        this->unk_28A = 0;
        func_801A0654(&this->actor.projectedPos, 0x39BE, 0);
        func_80A79864(this);
        return;
    }
    if ((this->actor.velocity.y < 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        sp3C = this->unk_144.animCurrentFrame;
        if (Rand_ZeroOne() < (((f32) gGameInfo->data[2422] * 0.1f) + 0.7f)) {
            this->actor.velocity.y = 13.0f;
            goto block_8;
        }
        func_801A0654(&this->actor.projectedPos, 0x39BE, 0);
        this->unk_368 = 1;
        this->unk_370 = 1;
        this->actor.speedXZ = 0.0f;
        func_80A78E8C(this);
        return;
    }
block_8:
    if (!(this->unk_144.animCurrentFrame < this->unk_374)) {
        temp_v0_2 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        phi_v1 = temp_v0_2 << 0x10;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = (s32) temp_v0_2 * -0x10000;
        }
        if ((this->unk_28A == 0) || (this->actor.xzDistToPlayer < 120.0f) || ((phi_v1 >> 0x10) >= 0x4301)) {
            func_801A0654(&this->actor.projectedPos, 0x39BE, 0);
            Math_ApproachZeroF(&this->actor.speedXZ, 0.3f, 3.0f);
            func_80A790E4(this, globalCtx);
        }
    }
}

void func_80A78E8C(Actor *arg0) {
    func_80A776E0(NULL);
    arg0->unk_28A = 0x14;
    arg0->speedXZ = 0.0f;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 10.0f;
    Audio_PlayActorSound2(arg0, 0x39C3U);
    arg0->flags |= 0x8000000;
    arg0->unk_284 = 0xF;
    arg0->unk_278 = func_80A78F04;
}

void func_80A78F04(EnJso2 *this, GlobalContext *globalCtx) {
    EnJso2 *temp_a3;

    temp_a3 = this;
    temp_a3->actor.shape.rot.y += -0x1D4C;
    this = temp_a3;
    Math_ApproachZeroF(&temp_a3->unk_378, 0.3f, 0.01f);
    Math_ApproachZeroF(&this->actor.shape.shadowScale, 0.3f, 3.0f);
    if (this->unk_28A == 0) {
        func_80A78F80(this, globalCtx);
    }
}

void func_80A78F80(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;

    temp_a2 = arg0;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a2 + 0x24, arg1->actorCtx.actorList[2].first + 0x24);
    arg0->velocity.y = 0.0f;
    arg0->world.pos.y += 300.0f + (f32) gGameInfo->data[2452];
    arg0->gravity = (f32) gGameInfo->data[2453] + -3.0f;
    Audio_PlayActorSound2(arg0, 0x39C4U);
    arg0->unk_284 = 0x10;
    arg0->unk_278 = func_80A79038;
}

void func_80A79038(EnJso2 *this, GlobalContext *globalCtx) {
    Math_ApproachF(&this->unk_378, 0.042f, 0.3f, 0.03f);
    Math_ApproachF(&this->actor.shape.shadowScale, 17.0f, 0.4f, 4.0f);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->unk_370 = 0;
        this->actor.flags &= 0xF7FFFFFF;
        this->unk_378 = 0.042f;
        this->actor.shape.shadowScale = 17.0f;
        func_80A790E4(this, globalCtx);
    }
}

void func_80A790E4(EnJso2 *arg0, GlobalContext *arg1) {
    func_80A776E0(arg0, 1);
    func_800BBDAC(arg1, (Actor *) arg0, (Vec3f *) &arg0->actor.world, arg0->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    Math_ApproachZeroF(&arg0->actor.speedXZ, 0.3f, 3.0f);
    arg0->unk_371 = 0;
    Audio_PlayActorSound2((Actor *) arg0, 0x1818U);
    arg0->unk_284 = 7;
    arg0->unk_EF4.base.acFlags &= 0xFFFB;
    arg0->actionFunc = func_80A7919C;
}

void func_80A7919C(EnJso2 *this, GlobalContext *globalCtx) {
    ? sp44;
    f32 sp40;
    u8 temp_t5;
    u8 temp_t7;
    u8 temp_v0;
    u8 temp_v1;
    u8 phi_v0;
    u8 phi_v1;

    sp40 = this->unk_144.animCurrentFrame;
    Math_ApproachZeroF(&this->actor.speedXZ, 0.5f, 5.0f);
    if ((globalCtx->gameplayFrames & 7) == 0) {
        func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    }
    temp_v0 = this->unk_F40.base.atFlags;
    temp_t5 = temp_v0 & 0xFFFD;
    phi_v0 = temp_v0;
    if (((temp_v0 & 2) != 0) || (temp_v1 = this->unk_FC0.base.atFlags, phi_v1 = temp_v1, ((temp_v1 & 2) != 0))) {
        this->unk_371 = 1;
        this->unk_F40.base.atFlags = temp_t5;
        temp_t7 = this->unk_FC0.base.atFlags & 0xFFFD;
        this->unk_FC0.base.atFlags = temp_t7;
        phi_v0 = temp_t5 & 0xFF;
        phi_v1 = temp_t7 & 0xFF;
    }
    if (((phi_v0 & 4) != 0) || ((phi_v1 & 4) != 0)) {
        this->unk_F40.base.atFlags = phi_v0 & 0xFFF9;
        this->unk_FC0.base.atFlags = phi_v1 & 0xFFF9;
        Matrix_RotateY(this->actor.yawTowardsPlayer, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-10.0f, (Vec3f *) &sp44);
        Math_Vec3f_Copy(&this->unk_E58, (Vec3f *) &sp44);
        this->unk_368 = 1;
        func_80A79864(this);
        return;
    }
    if (this->unk_374 <= sp40) {
        this->unk_368 = 1;
        this->actor.speedXZ = 0.0f;
        func_80A79450(this, 0U);
    }
}

void func_80A79300(Actor *arg0) {
    func_80A776E0((EnJso2 *)0xE);
    arg0->unk_371 = 0;
    Audio_PlayActorSound2(arg0, 0x1818U);
    arg0->unk_368 = 0;
    arg0->unk_28E = 0xF;
    arg0->unk_284 = 8;
    arg0->unk_278 = func_80A79364;
    arg0->speedXZ = 12.0f;
}

void func_80A79364(EnJso2 *this, GlobalContext *globalCtx) {
    u8 temp_v0;
    u8 temp_v0_2;

    this->actor.shape.rot.y += -0x1770;
    func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 1, 4.0f, (s16) 0x12C, (s16) 5, (u8) 1);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFA0, (s16) 0x14);
    if ((this->unk_28E == 0) || (temp_v0 = this->unk_F40.base.atFlags, ((temp_v0 & 2) != 0)) || ((temp_v0 & 4) != 0) || (temp_v0_2 = this->unk_FC0.base.atFlags, ((temp_v0_2 & 2) != 0)) || ((temp_v0_2 & 4) != 0)) {
        this->unk_F40.base.atFlags &= 0xFFF9;
        this->unk_FC0.base.atFlags &= 0xFFF9;
        func_80A79864(this);
    }
}

void func_80A79450(EnJso2 *arg0) {
    if (arg0->unk_371 != 0) {
        func_80A776E0((EnJso2 *)2);
        arg0->unk_290 = 0x14;
    } else {
        func_80A776E0((EnJso2 *)0xC);
        arg0->unk_290 = 0x28;
    }
    arg0->unk_EF4.base.acFlags &= 0xFFFB;
    arg0->unk_284 = 9;
    arg0->actionFunc = func_80A794C8;
}

void func_80A794C8(EnJso2 *this, GlobalContext *globalCtx) {
    if (this->unk_290 == 0) {
        this = this;
        this->unk_28E = Rand_S16Offset(0x1E, 0x1E);
        this->unk_371 = 0;
        this->unk_EF4.base.acFlags |= 4;
        func_80A787FC(this, globalCtx);
    }
}

void func_80A79524(EnJso2 *arg0) {
    ? sp24;
    s16 temp_v0;

    func_801A0654(arg0 + 0xEC, 0x39BE, 0);
    func_80A776E0(arg0, 4);
    arg0->unk_290 = 0x1E;
    arg0->unk_EF4.base.acFlags &= 0xFFFB;
    arg0->actor.speedXZ = 0.0f;
    Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-10.0f, (Vec3f *) &sp24);
    Math_Vec3f_Copy(&arg0->unk_E58, (Vec3f *) &sp24);
    temp_v0 = arg0->unk_2A2;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk_2A0 == 0)) {
        arg0->unk_2A2 = 0;
        arg0->unk_2A0 = 0;
    }
    if ((arg0->unk_2A2 != 0xB) && (arg0->unk_2A2 != 0xA)) {
        arg0->unk_290 = 0x28;
    }
    arg0->unk_284 = 0xA;
    arg0->actionFunc = func_80A79600;
}

void func_80A79600(EnJso2 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (this->unk_2A2 == 0xB) {
        temp_v0 = this->unk_2A0;
        if ((temp_v0 != 0) && ((s32) temp_v0 < 0x3C)) {
            this->unk_2A2 = 0xA;
        }
    }
    if ((this->unk_290 == 0) && (this->unk_2A0 == 0)) {
        temp_v0_2 = this->unk_2A2;
        if ((temp_v0_2 == 0xB) || (temp_v0_2 == 0xA)) {
            func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2D4, 0xC, 2, 0.7f, 0.4f);
            this->unk_2A0 = 0;
            this->unk_2A2 = 0;
        }
        func_80A79864(this);
    }
}

void func_80A796BC(EnJso2 *arg0, GlobalContext *arg1) {
    ? sp34;
    PosRot *sp30;
    PosRot *temp_a2;
    s16 temp_v0;

    func_801A0654(arg0 + 0xEC, 0x39BE, 0);
    func_80A776E0(arg0, 4);
    arg0->unk_371 = 0;
    arg0->actor.velocity.y = 10.0f;
    arg0->actor.speedXZ = 0.0f;
    Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-20.0f, (Vec3f *) &sp34);
    Math_Vec3f_Copy(&arg0->unk_E58, (Vec3f *) &sp34);
    temp_v0 = arg0->unk_2A2;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk_2A0 != 0)) {
        func_800BF7CC(arg1, (Actor *) arg0, (Vec3f []) &arg0->unk_2D4, 0xC, 2, 0.7f, 0.4f);
        arg0->unk_2A0 = 0;
        arg0->unk_2A2 = 0;
    }
    temp_a2 = &arg0->actor.focus;
    sp30 = temp_a2;
    CollisionCheck_GreenBlood(arg1, NULL, (Vec3f *) temp_a2);
    CollisionCheck_GreenBlood(arg1, NULL, (Vec3f *) temp_a2);
    CollisionCheck_GreenBlood(arg1, NULL, (Vec3f *) temp_a2);
    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
    Audio_PlayActorSound2((Actor *) arg0, 0x39C5U);
    arg0->unk_284 = 0xB;
    arg0->actionFunc = func_80A7980C;
}

void func_80A7980C(EnJso2 *this, GlobalContext *globalCtx) {
    if (!(this->actor.velocity.y > 0.0f) && (this->actor.colorFilterTimer == 0) && ((this->actor.bgCheckFlags & 1) != 0)) {
        func_80A79300();
    }
}

void func_80A79864(EnJso2 *arg0) {
    func_80A776E0((EnJso2 *)3);
    arg0->actor.world.rot.y = (s16) -(s32) arg0->actor.world.rot.y;
    arg0->unk_370 = 0;
    arg0->unk_284 = 0xC;
    arg0->actionFunc = func_80A798C8;
    arg0->actor.speedXZ = 7.0f;
    arg0->actor.velocity.y = 20.0f;
}

void func_80A798C8(EnJso2 *this, GlobalContext *globalCtx) {
    f32 sp2C;

    sp2C = this->unk_144.animCurrentFrame;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xBB8, (s16) 0x14);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.speedXZ = 0.0f;
    }
    if ((this->unk_374 <= sp2C) && ((this->actor.bgCheckFlags & 1) != 0)) {
        this->actor.world.rot.x = 0;
        this->actor.velocity.y = 0.0f;
        this->actor.speedXZ = 0.0f;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        this->unk_28E = Rand_S16Offset(0xA, 0xA);
        func_80A787FC(this, globalCtx);
    }
}

void func_80A7998C(EnJso2 *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_t8;

    func_801A0654(arg0 + 0xEC, 0x39BE, 0);
    func_80A776E0(arg0, 4);
    temp_v0 = arg0->unk_2A2;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk_2A0 == 0)) {
        arg0->unk_2A2 = 0;
    }
    arg0->actor.shape.rot.z = 0;
    temp_v0_2 = arg0->actor.shape.rot.z;
    temp_t8 = arg0->actor.flags | 0x8000000;
    arg0->actor.flags = temp_t8;
    arg0->actor.flags = temp_t8 & ~5;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_368 = 1;
    arg0->unk_290 = 0x1E;
    arg0->unk_36C = 2;
    arg0->actor.world.rot.z = temp_v0_2;
    arg0->actor.shape.rot.x = temp_v0_2;
    arg0->actor.world.rot.x = temp_v0_2;
    Enemy_StartFinishingBlow(arg1, (Actor *) arg0);
    Audio_PlayActorSound2((Actor *) arg0, 0x39C6U);
    Math_Vec3f_Copy(&arg0->unk_E58, &D_801D15B0);
    arg0->unk_284 = 0xD;
    arg0->actionFunc = func_80A79A84;
}

void func_80A79A84(EnJso2 *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xFA0, (s16) 0x14);
    temp_v0 = this->unk_2A2;
    if ((temp_v0 == 0xB) || (temp_v0 == 0xA)) {
        if (this->unk_2A0 != 0) {
            func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2D4, 0xC, 2, 0.7f, 0.4f);
            this->unk_2A0 = 0;
            this->unk_2A2 = 0;
            goto block_4;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
block_4:
    if (this->unk_290 == 0) {
        this->unk_EAC.targetContext.unk50[2].unkC = 60.0f;
        this->unk_104C = 60.0f;
        if (this->unk_29C == 0) {
            func_80A79B60(this);
            return;
        }
        func_80A7A0D0(this);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80A79B60(EnJso2 *arg0) {
    arg0->unk_1046 = 0;
    arg0->unk_1044 = 0;
    arg0->unk_1048 = 0;
    arg0->actor.flags |= 0x100000;
    arg0->unk_290 = 0x1E;
    arg0->unk_284 = 0xE;
    arg0->actionFunc = func_80A79BA0;
}

void func_80A79BA0(EnJso2 *this, GlobalContext *globalCtx) {
    Actor *sp5C;
    f32 sp58;
    f32 sp4C;
    Actor *temp_v0;
    Actor *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0_2;
    s16 temp_v0_4;
    u16 temp_a1;
    u16 temp_t3;
    u16 phi_a1;

    sp5C = globalCtx->actorCtx.actorList[2].first;
    temp_f0 = this->unk_144.animCurrentFrame;
    if (((s32) this->unk_EAC.targetContext.unk50[1].unk10 == 0x15) && (this->unk_374 <= temp_f0) && (this->unk_2D0 == 0)) {
        sp58 = temp_f0;
        this->unk_2D0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x1D9, this->unk_2C4, this->unk_2C8, this->unk_2CC, (s16) 0, (s16) 0, (s16) 0, 3);
    }
    temp_v0 = this->unk_2D0;
    if (temp_v0 != 0) {
        temp_v0->world.pos.x = this->unk_2C4;
        this->unk_2D0->world.pos.y = this->unk_2C8;
        this->unk_2D0->world.pos.z = this->unk_2CC;
    }
    temp_t3 = (u16) this->unk_1046;
    switch (temp_t3) {
    case 0:
        if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) == 0) {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        } else {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.home);
            this->actor.shape.rot.y = temp_v0_2;
            this->actor.world.rot.y = temp_v0_2;
            func_801A0238(0, 0xA);
            func_80A776E0(this, 0x13);
            this->unk_1048 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->unk_1046 += 1;
            this->unk_294 = 0.4f;
            this->unk_298 = 40.0f;
        }
        break;
    case 1:
        if (this->unk_374 <= this->unk_144.animCurrentFrame) {
            func_80A776E0(this, 0x14);
            this->unk_1046 += 1;
        }
        break;
    case 2:
        if (this->unk_374 <= this->unk_144.animCurrentFrame) {
            this->actor.textId = 0x13AE;
            func_801518B0(globalCtx, 0x13AEU & 0xFFFF, (Actor *) this);
            this->unk_1046 += 1;
        }
        break;
    case 3:
        if (func_80A77880(globalCtx) != 0) {
            temp_a1 = this->actor.textId;
            phi_a1 = temp_a1;
            if (temp_a1 == 0x13AE) {
                this->actor.textId = 0x13AF;
                phi_a1 = 0x13AFU & 0xFFFF;
                goto block_24;
            }
            if (temp_a1 == 0x13AF) {
                this->actor.textId = 0x13B0;
                func_80A776E0(this, 0x15);
                phi_a1 = this->actor.textId;
                goto block_24;
            }
            if (temp_a1 == 0x13B0) {
                globalCtx->msgCtx.unk11F10 = 0;
                temp_v0_3 = this->unk_2D0;
                if (temp_v0_3 != 0) {
                    temp_v0_3->world.rot.z = 1;
                    func_800B7298(globalCtx, (Actor *) this, 0x2FU);
                    this->unk_2B4 = 1;
                }
                this->unk_1044 = 0x1E;
                this->unk_1046 += 1;
            } else {
block_24:
                func_80151938(globalCtx, phi_a1);
            }
        }
        break;
    case 4:
        Math_SmoothStepToS(&this->unk_366, 0, 1, 0xF, (s16) 0x32);
        Math_ApproachZeroF(&this->actor.shape.shadowScale, 0.3f, 3.0f);
        if (this->unk_1044 == 0) {
            this->actor.textId = 0x13B1;
            func_801518B0(globalCtx, 0x13B1U & 0xFFFF, (Actor *) this);
            Audio_PlayActorSound2((Actor *) this, 0x3AC6U);
            this->unk_290 = 0x32;
            this->unk_1046 += 1;
        }
        break;
    case 5:
        func_800B7298(globalCtx, (Actor *) this, 7U);
        if (this->unk_290 == 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            Actor_MarkForDeath((Actor *) this);
        }
        break;
    }
    if (this->unk_1048 != 0) {
        sp5C->world.pos.x = (Math_SinS(this->actor.world.rot.y) * 170.0f) + this->actor.world.pos.x;
        sp5C->world.pos.z = (Math_CosS(this->actor.world.rot.y) * 170.0f) + this->actor.world.pos.z;
        temp_v0_4 = this->actor.world.rot.y + 0x8000;
        sp5C->shape.rot.y = temp_v0_4;
        sp5C->world.rot.y = temp_v0_4;
        Matrix_RotateY((s16) ((gGameInfo->data[2449] << 8) + this->actor.shape.rot.y + 0x1000), 0U);
        SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[2448] + 230.0f, (Vec3f *) &sp4C);
        temp_f0_2 = this->actor.world.pos.x;
        this->unk_EAC.clearedRooms = (bitwise u32) (temp_f0_2 + sp4C);
        temp_f2 = this->actor.world.pos.z;
        this->unk_EAC.clearedRoomsTemp = (bitwise u32) ((f32) gGameInfo->data[2450] + -43.0f + this->actor.world.pos.y + 50.0f);
        this->unk_EAC.collectibleFlags[0] = (bitwise u32) (temp_f2 + sp54);
        temp_f12 = sp5C->world.pos.x;
        this->unk_EAC.collectibleFlags[1] = (bitwise u32) (temp_f12 + ((temp_f0_2 - temp_f12) * 0.5f));
        this->unk_EAC.collectibleFlags[2] = (bitwise u32) ((f32) gGameInfo->data[2451] + 6.0f + sp5C->world.pos.y + 5.0f);
        temp_f14 = sp5C->world.pos.z;
        this->unk_EAC.collectibleFlags[3] = (bitwise u32) (temp_f14 + ((temp_f2 - temp_f14) * 0.5f));
    }
    func_80A77790(this, globalCtx);
}

void func_80A7A0D0(EnJso2 *arg0) {
    arg0->unk_1044 = 0;
    func_801A0238(0, 0xA);
    func_80A776E0(arg0, 0x13);
    arg0->unk_284 = 0xE;
    arg0->actionFunc = func_80A7A124;
}

void func_80A7A124(EnJso2 *this, GlobalContext *globalCtx) {
    f32 sp44;
    Actor *temp_v0;
    Actor *temp_v0_2;
    s16 temp_v1_2;
    s32 temp_v1;
    s32 phi_v1;

    sp44 = this->unk_144.animCurrentFrame;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xFA0, (s16) 0x14);
    temp_v1 = (s32) this->unk_EAC.targetContext.unk50[1].unk10;
    phi_v1 = temp_v1;
    if ((temp_v1 == 0x13) && (this->unk_374 <= sp44)) {
        this->unk_EAC.targetContext.unk50[2].unk_6 = 0;
        func_80A776E0(this, 0x14);
        phi_v1 = (s32) this->unk_EAC.targetContext.unk50[1].unk10;
    }
    if ((phi_v1 == 0x14) && (this->unk_374 <= sp44)) {
        this->unk_EAC.targetContext.unk50[2].unk_6 += 1;
        if ((s32) this->unk_EAC.targetContext.unk50[2].unk_6 >= 2) {
            this->unk_EAC.targetContext.unk50[2].unk_6 = 0;
            func_80A776E0(this, 0x15);
        }
    }
    if (((s32) this->unk_EAC.targetContext.unk50[1].unk10 == 0x15) && (this->unk_374 <= sp44)) {
        temp_v0 = this->unk_2D0;
        if (temp_v0 == 0) {
            this->unk_2D0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x1D9, this->unk_2C4, this->unk_2C8, this->unk_2CC, (s16) 0, (s16) 0, (s16) 0, 4);
            goto block_15;
        }
        temp_v1_2 = this->unk_EAC.targetContext.unk50[2].unk_6;
        if ((s32) temp_v1_2 >= 0xA) {
            if (temp_v0 != 0) {
                temp_v0->world.rot.z = 1;
                this->unk_2B4 = (s32) 1;
                this->actionFunc = func_80A7A2EC;
                return;
            }
            goto block_15;
        }
        this->unk_EAC.targetContext.unk50[2].unk_6 = temp_v1_2 + 1;
        goto block_15;
    }
block_15:
    temp_v0_2 = this->unk_2D0;
    if (temp_v0_2 != 0) {
        temp_v0_2->world.pos.x = this->unk_2C4;
        this->unk_2D0->world.pos.y = this->unk_2C8;
        this->unk_2D0->world.pos.z = this->unk_2CC;
    }
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk_EAC.actorList[4].unk_8);
}

void func_80A7A2EC(EnJso2 *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->unk_366, 0, 1, 0xF, (s16) 0x32);
    Math_ApproachZeroF(&this->actor.shape.shadowScale, 0.3f, 3.0f);
    if ((s32) this->unk_366 < 2) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80A7A360(Actor *arg0, GlobalContext *arg1) {
    s32 sp3C;
    s16 temp_t4;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    u8 temp_v0_2;
    u8 temp_v1;
    s32 phi_a3;

    temp_v0 = arg0->unk_284;
    phi_a3 = 0;
    if ((temp_v0 != 0xB) && (temp_v0 != 0xC) && (temp_v0 != 0xD) && (temp_v0 != 0xE) && (temp_v0_2 = arg0->unk_F05, ((temp_v0_2 & 2) != 0))) {
        temp_v1 = arg0->colChkInfo.damageEffect;
        arg0->unk_F05 = (u8) (temp_v0_2 & 0xFFFD);
        if ((temp_v1 == 1) || (temp_v1 == 5)) {
            temp_v0_5 = arg0->unk_2A2;
            arg0->shape.rot.x = 0;
            arg0->world.rot.x = arg0->shape.rot.x;
            if (((temp_v0_5 != 0xB) && (temp_v0_5 != 0xA)) || (arg0->unk_2A0 == 0)) {
                Audio_PlayActorSound2(arg0, 0x389EU);
                if (arg0->colChkInfo.damageEffect == 5) {
                    arg0->unk_2A0 = 0x28;
                    arg0->unk_2A2 = 0x20;
                }
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                func_80A79524((EnJso2 *) arg0);
                return;
            }
            /* Duplicate return node #38. Try simplifying control flow for better match */
            return;
        }
        temp_t4 = arg0->unk_284;
        switch (temp_t4) {
        case 2:
        case 3:
        case 4:
            arg0->speedXZ = 0.0f;
            sp3C = 0;
            func_80A78A70(arg0, 0xB, 0);
block_33:
            phi_a3 = sp3C;
            break;
        case 7:
        case 9:
        case 10:
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {
                    if (temp_v1 != 4) {
                        if (temp_v1 == 0xF) {
                            phi_a3 = 1;
                        }
                    } else {
                        temp_v0_3 = arg0->unk_2A2;
                        if (((temp_v0_3 != 0xB) && (temp_v0_3 != 0xA)) || (arg0->unk_2A0 == 0)) {
                            Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                            arg0->unk_2A0 = 0x14;
                            arg0->unk_2A2 = 0x14;
                            phi_a3 = 1;
                        }
                    }
                } else {
                    temp_v0_4 = arg0->unk_2A2;
                    if (((temp_v0_4 != 0xB) && (temp_v0_4 != 0xA)) || (arg0->unk_2A0 == 0)) {
                        sp3C = 0;
                        Actor_ApplyDamage(arg0);
                        arg0->unk_2A0 = 0x50;
                        arg0->unk_2A2 = 0xB;
                        arg0->unk_2A4 = 0.0f;
                        arg0->unk_2A8 = 1.5f;
                    }
                    if ((s32) arg0->colChkInfo.health <= 0) {
                        sp3C = 0;
                        func_80A7998C((EnJso2 *) arg0, arg1, 0xB, 0);
                    } else {
                        sp3C = 0;
                        func_80A79524((EnJso2 *) arg0, arg1, 0xB, 0);
                    }
                    goto block_33;
                }
            } else {
                arg0->unk_2A0 = 0x28;
                arg0->unk_2A2 = 0;
                phi_a3 = 1;
            }
            break;
        }
        if (phi_a3 != 0) {
            Actor_ApplyDamage(arg0);
            if ((s32) arg0->colChkInfo.health > 0) {
                func_80A796BC((EnJso2 *) arg0, arg1);
                return;
            }
            func_80A7998C((EnJso2 *) arg0, arg1);
            /* Duplicate return node #38. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
    }
}

void EnJso2_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    Collider *sp28;
    ? *temp_a0;
    ? *temp_a1;
    ? *temp_a2;
    Collider *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    CollisionCheckContext *temp_a1_4;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_9;
    s32 temp_v0_7;
    s32 temp_v0_8;
    void *temp_t0;
    void *temp_t3;
    void *temp_t4;
    void *temp_t6;
    void *temp_t8;
    Vec3s *phi_v1;
    s32 phi_v0;
    ? *phi_a0;
    ? *phi_a1;
    ? *phi_a2;
    EnJso2 *this = (EnJso2 *) thisx;

    if (this->unk_284 != 3) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    temp_v0 = this->unk_28A;
    if (temp_v0 != 0) {
        this->unk_28A = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_28E;
    if (temp_v0_2 != 0) {
        this->unk_28E = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_290;
    if (temp_v0_3 != 0) {
        this->unk_290 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_1044;
    if (temp_v0_4 != 0) {
        this->unk_1044 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk_2A0;
    if (temp_v0_5 != 0) {
        this->unk_2A0 = temp_v0_5 - 1;
    }
    func_80A7A360((Actor *) this, globalCtx);
    Actor_SetScale((Actor *) this, this->unk_378);
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 80.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.world.pos.x += this->unk_E58.x;
        this->actor.world.pos.z += this->unk_E58.z;
        Math_ApproachZeroF((f32 *) &this->unk_E58, 1.0f, 2.0f);
        Math_ApproachZeroF(&this->unk_E58.z, 1.0f, 2.0f);
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 60.0f, 60.0f, 0x1DU);
    temp_v0_6 = this->unk_284;
    if ((temp_v0_6 == 5) || (temp_v0_6 == 6) || (temp_v0_6 == 0xF) || (temp_v0_6 == 0x10)) {
        this->unk_38C += 1;
        if ((s32) this->unk_38C >= 0x14) {
            this->unk_38C = 0;
        }
        temp_v0_7 = this->unk_388;
        if (temp_v0_7 < 0x13) {
            this->unk_388 = temp_v0_7 + 1;
        }
        Math_Vec3f_Copy(this + (this->unk_38C * 0xC) + 0x390, (Vec3f *) &this->actor.world);
        Math_Vec3s_Copy(this + (this->unk_38C * 6) + 0x480, &this->actor.world.rot);
        temp_t0 = this + (this->unk_38C * 0xC);
        temp_t0->unk_394 = (f32) (temp_t0->unk_394 + 40.0f);
        phi_v1 = &this->unk_188;
        phi_v0 = 0;
        phi_a0 = &this->unk_18E;
        phi_a1 = &this->unk_194;
        phi_a2 = &this->unk_19A;
        do {
            temp_t4 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t4->unk_4F8 = (unaligned s32) phi_v1->unk_0;
            temp_a0 = phi_a0 + 0x18;
            temp_t4->unk_4FC = (u16) phi_v1->z;
            temp_t3 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t3->unk_4FE = (unaligned s32) temp_a0->unk_-18;
            temp_a1 = phi_a1 + 0x18;
            temp_a2 = phi_a2 + 0x18;
            temp_t3->unk_502 = (u16) temp_a0->unk_-14;
            temp_t8 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t8->unk_504 = (unaligned s32) temp_a1->unk_-18;
            temp_t8->unk_508 = (u16) temp_a1->unk_-14;
            temp_t6 = this + (this->unk_38C * 0x78) + phi_v0;
            temp_t6->unk_50A = (unaligned s32) temp_a2->unk_-18;
            temp_v0_8 = phi_v0 + 0x18;
            temp_t6->unk_50E = (u16) temp_a2->unk_-14;
            phi_v1 += 0x18;
            phi_v0 = temp_v0_8;
            phi_a0 = temp_a0;
            phi_a1 = temp_a1;
            phi_a2 = temp_a2;
        } while (temp_v0_8 != 0x78);
        goto block_27;
    }
    if (temp_v0_6 != 0) {
        this->unk_388 = 0;
block_27:
    }
    if ((this->unk_284 != 3) && (this->unk_284 != 5) && (this->unk_284 != 0xB) && (this->unk_284 != 8) && (this->unk_284 != 0xF) && (this->unk_284 != 0xC)) {
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    temp_a1_2 = &this->unk_EAC.actorList[4].unk_8;
    this->actor.shape.rot.x = this->actor.world.rot.x;
    sp28 = temp_a1_2;
    Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a1_2);
    temp_v0_9 = this->unk_284;
    if ((temp_v0_9 != 0) && (temp_v0_9 != 8) && (temp_v0_9 != 0xF)) {
        temp_a1_3 = &globalCtx->colChkCtx;
        sp2C = temp_a1_3;
        CollisionCheck_SetOC(globalCtx, temp_a1_3, sp28);
        temp_v0_10 = this->unk_284;
        if ((temp_v0_10 != 1) && (temp_v0_10 != 8)) {
            CollisionCheck_SetAC(globalCtx, temp_a1_3, sp28);
        }
    }
    if (((this->unk_284 == 7) || (this->unk_284 == 0x10) || (this->unk_284 == 6) || (this->unk_284 == 8)) && (this->unk_371 == 0) && (this->unk_36C == 0)) {
        temp_a1_4 = &globalCtx->colChkCtx;
        sp2C = temp_a1_4;
        CollisionCheck_SetAT(globalCtx, temp_a1_4, (Collider *) &this->unk_EAC.actorList[11]);
        CollisionCheck_SetAT(globalCtx, temp_a1_4, (Collider *) &this->unk_EAC.undrawnActors[29]);
    }
}

s32 func_80A7AA48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg5->unk_36C == 2) {
        if ((arg1 == 4) && (arg5->unk_284 != 0xE)) {
            *arg2 = NULL;
        }
        if (arg1 == 6) {
            *arg2 = NULL;
        }
    }
    return 0;
}

void func_80A7AA9C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp68;
    ? sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Gfx *sp44;
    Vec3f *sp38;
    Vec3f *sp34;
    Vec3f *sp30;
    Vec3f *sp2C;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_s0;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a0_3;
    Vec3f *temp_a0_4;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_a1_3;
    Vec3f *temp_a1_4;
    f32 *temp_a0_5;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;

    sp50.unk_0 = D_80A7B6FC.unk_0;
    sp50.unk_4 = (s32) D_80A7B6FC.unk_4;
    sp50.unk_8 = (s32) D_80A7B6FC.unk_8;
    if (arg1 == 4) {
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        temp_a0 = arg4 + 0x1024;
        temp_a1 = arg4 + 0x100C;
        sp34 = temp_a1;
        sp2C = temp_a0;
        Math_Vec3f_Copy(temp_a0, temp_a1);
        temp_a0_2 = arg4 + 0x1018;
        temp_a1_2 = arg4 + 0x1000;
        sp38 = temp_a1_2;
        sp30 = temp_a0_2;
        Math_Vec3f_Copy(temp_a0_2, temp_a1_2);
        SysMatrix_MultiplyVector3fByState(&D_80A7B720, temp_a1);
        SysMatrix_MultiplyVector3fByState(&D_80A7B72C, temp_a1_2);
        Collider_SetQuadVertices(arg4 + 0xFC0, temp_a1_2, sp34, sp30, sp2C);
        SysMatrix_MultiplyVector3fByState(&D_80A7B708, (Vec3f *) &sp68);
        SysMatrix_MultiplyVector3fByState(&D_80A7B714, (Vec3f *) &sp5C);
        temp_v0 = arg4->unk_284;
        if ((temp_v0 == 7) || (temp_v0 == 9)) {
            SysMatrix_MultiplyVector3fByState(&D_80A7B5A0, arg4 + 0xE64);
            SysMatrix_MultiplyVector3fByState(&D_80A7B5AC, arg4 + 0xE70);
            SysMatrix_MultiplyVector3fByState(&D_80A7B5B8, arg4 + 0xE7C);
        } else {
            SysMatrix_MultiplyVector3fByState(&D_80A7B558, arg4 + 0xE64);
            SysMatrix_MultiplyVector3fByState(&D_80A7B564, arg4 + 0xE70);
            SysMatrix_MultiplyVector3fByState(&D_80A7B570, arg4 + 0xE7C);
        }
        temp_v0_2 = arg4->unk_284;
        if (((temp_v0_2 == 7) || (temp_v0_2 == 8) || (temp_v0_2 == 6) || (temp_v0_2 == 0x10)) && (arg4->unk_368 == 0)) {
            func_800A81F0(Effect_GetParams(arg4->unk_384), (Vec3f *) &sp68, (Vec3f *) &sp5C);
        } else if (arg4->unk_368 == 1) {
            func_800A8514(Effect_GetParams(arg4->unk_384));
        }
    }
    if (arg1 == 6) {
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        temp_a0_3 = arg4 + 0xFA4;
        temp_a1_3 = arg4 + 0xF8C;
        sp34 = temp_a1_3;
        sp2C = temp_a0_3;
        Math_Vec3f_Copy(temp_a0_3, temp_a1_3);
        temp_a0_4 = arg4 + 0xF98;
        temp_a1_4 = arg4 + 0xF80;
        sp38 = temp_a1_4;
        sp30 = temp_a0_4;
        Math_Vec3f_Copy(temp_a0_4, temp_a1_4);
        SysMatrix_MultiplyVector3fByState(&D_80A7B720, temp_a1_3);
        SysMatrix_MultiplyVector3fByState(&D_80A7B72C, temp_a1_4);
        Collider_SetQuadVertices(arg4 + 0xF40, temp_a1_4, sp34, sp30, sp2C);
        SysMatrix_MultiplyVector3fByState(&D_80A7B708, (Vec3f *) &sp68);
        SysMatrix_MultiplyVector3fByState(&D_80A7B714, (Vec3f *) &sp5C);
        temp_v0_3 = arg4->unk_284;
        if ((temp_v0_3 == 7) || (temp_v0_3 == 9)) {
            SysMatrix_MultiplyVector3fByState(&D_80A7B5C4, arg4 + 0xE88);
            SysMatrix_MultiplyVector3fByState(&D_80A7B5D0, arg4 + 0xE94);
            SysMatrix_MultiplyVector3fByState(&D_80A7B5DC, arg4 + 0xEA0);
        } else {
            SysMatrix_MultiplyVector3fByState(&D_80A7B57C, arg4 + 0xE88);
            SysMatrix_MultiplyVector3fByState(&D_80A7B588, arg4 + 0xE94);
            SysMatrix_MultiplyVector3fByState(&D_80A7B594, arg4 + 0xEA0);
        }
        temp_v0_4 = arg4->unk_284;
        if (((temp_v0_4 == 7) || (temp_v0_4 == 8) || (temp_v0_4 == 6) || (temp_v0_4 == 0x10)) && (arg4->unk_368 == 0)) {
            func_800A81F0(Effect_GetParams(arg4->unk_380), (Vec3f *) &sp68, (Vec3f *) &sp5C);
        } else if (arg4->unk_368 == 1) {
            func_800A8514(Effect_GetParams(arg4->unk_380));
            arg4->unk_368 = 0U;
        }
    }
    temp_a0_5 = &sp50;
    if (arg1 == 0xA) {
        sp50 = 0x44610000;
        sp54 = 50.0f;
        sp58 = -330.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_5, arg4 + 0x2C4);
    }
    if ((arg4->unk_284 != 0xE) && ((arg1 == 4) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xA) || (arg1 == 0xB) || (arg1 == 0xC) || (arg1 == 0xE) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x13))) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk_364 * 0xC) + 0x2D4);
        arg4->unk_364 = (s16) (arg4->unk_364 + 1);
        if ((s32) arg4->unk_364 >= 0xC) {
            arg4->unk_364 = 0;
        }
    }
    if (arg1 == 0xC) {
        SysMatrix_StatePush();
        Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
        temp_s0 = *arg0;
        temp_v0_5 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp44 = temp_v0_5;
        sp44->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_6 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_06002ED8;
        temp_v0_6->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
    }
}

void EnJso2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp68;
    Vec3s *sp64;
    MtxF *sp5C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_2;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    f32 temp_f6;
    s16 *temp_s4;
    s16 temp_v0_14;
    s16 temp_v0_7;
    s16 temp_v1;
    s32 temp_s1;
    s32 temp_s4_2;
    s32 temp_v0_3;
    void *temp_s0;
    void *temp_v0_4;
    s16 *phi_s4;
    s16 phi_s1;
    u32 phi_v1;
    EnJso2 *phi_s1_2;
    s32 phi_s4_2;
    EnJso2 *this = (EnJso2 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    func_8012C28C(globalCtx->state.gfxCtx);
    if (this->unk_2B4 == 0) {
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80A7AA48, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80A7AA9C, (Actor *) this);
    } else {
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_2->words.w1 = this->unk_366 & 0xFF;
        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        temp_s2->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, NULL, (Actor *) this, temp_s2->polyXlu.p);
    }
    temp_v0_3 = this->unk_388;
    if (temp_v0_3 > 0) {
        phi_s1 = this->unk_38C;
        if (temp_v0_3 > 0) {
            phi_s4 = D_80A7B738;
            do {
                if (*phi_s4 == 0) {
                    phi_v1 = (u32) ((this->unk_388 * 2) + D_80A7B738);
                } else {
                    temp_v0_4 = this + (phi_s1 * 0xC);
                    sp64 = this + (phi_s1 * 0x78) + 0x4F8;
                    temp_s0 = this + (phi_s1 * 6);
                    SysMatrix_InsertTranslation(temp_v0_4->unk_390, temp_v0_4->unk_394, temp_v0_4->unk_398, 0);
                    temp_f12 = this->unk_378;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    Matrix_RotateY(temp_s0->unk_482, 1U);
                    SysMatrix_InsertXRotation_s(temp_s0->unk_480, 1);
                    SysMatrix_InsertZRotation_s(temp_s0->unk_484, 1);
                    temp_v0_5 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = 0;
                    temp_v0_5->words.w0 = 0xE7000000;
                    temp_v0_6 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_6 + 8;
                    temp_v0_6->words.w0 = 0xFB000000;
                    temp_v0_6->words.w1 = *phi_s4 & 0xFF;
                    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
                    temp_s1 = phi_s1 - 1;
                    temp_s2->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, sp64, (s32) this->unk_144.dListCount, NULL, NULL, (Actor *) this, temp_s2->polyXlu.p);
                    phi_s1 = (s16) temp_s1;
                    if (temp_s1 < 0) {
                        phi_s1 = 0x13;
                    }
                    phi_v1 = (u32) ((this->unk_388 * 2) + D_80A7B738);
                }
                temp_s4 = phi_s4 + 2;
                phi_s4 = temp_s4;
            } while ((u32) temp_s4 < phi_v1);
        }
    }
    if (((s32) this->unk_284 < 0xF) && (this->unk_36C == 0) && (((temp_v0_7 = this->unk_2A2, (temp_v0_7 != 0xB)) && (temp_v0_7 != 0xA)) || (((temp_v0_7 == 0xB) || (temp_v0_7 == 0xA)) && (this->unk_2A0 == 0)))) {
        sp5C = &globalCtx->mf_187FC;
        phi_s1_2 = this;
        phi_s4_2 = 0;
        do {
            SysMatrix_StatePush();
            SysMatrix_InsertTranslation(phi_s1_2->unk_E64, phi_s1_2->unk_E68, phi_s1_2->unk_E6C, 0);
            Matrix_Scale(phi_s1_2->unk_EAC.unk_0, phi_s1_2->unk_EB0, phi_s1_2->unk_EAC.unk_8, 1);
            temp_v0_8 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDB060020;
            temp_v0_8->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((this->unk_38E * 0xA) - (globalCtx->state.frames * 0x14)) & 0x1FF, 0x20, 0x80);
            temp_v0_9 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = 0;
            temp_v0_9->words.w0 = 0xE7000000;
            temp_v0_10 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_10 + 8;
            temp_v0_10->words.w1 = -0x5501;
            temp_v0_10->words.w0 = 0xFA008080;
            temp_v0_11 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_11 + 8;
            temp_v0_11->words.w0 = 0xFB000000;
            temp_v0_11->words.w1 = 0xFF3200FF;
            SysMatrix_InsertMatrix(sp5C, 1);
            temp_v0_12 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_12 + 8;
            temp_v0_12->words.w0 = 0xDA380003;
            temp_v0_12->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_13 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_13 + 8;
            temp_v0_13->words.w1 = (u32) D_0407D590;
            temp_v0_13->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
            temp_s4_2 = phi_s4_2 + 0xC;
            phi_s1_2 += 0xC;
            phi_s4_2 = temp_s4_2;
        } while (temp_s4_2 != 0x48);
    }
    temp_v1 = this->unk_2A0;
    if (temp_v1 != 0) {
        temp_f6 = (f32) temp_v1;
        temp_v0_14 = this->unk_2A2;
        if ((temp_v0_14 == 0xB) || (temp_v0_14 == 0xA)) {
            this->unk_2A4 += 0.3f;
            if (this->unk_2A4 > 0.5f) {
                this->unk_2A4 = 0.5f;
            }
            sp68 = temp_f6 * 0.05f;
            Math_ApproachF(&this->unk_2A8, this->unk_2A4, 0.1f, 0.04f);
        }
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_2D4, this->unk_2B0, this->unk_2A4, this->unk_2A8, temp_f6 * 0.05f, (u8) (s32) this->unk_2A2);
    }
}
