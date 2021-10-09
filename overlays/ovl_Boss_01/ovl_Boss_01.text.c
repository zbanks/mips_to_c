typedef struct Boss01 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ char pad_146[0x2];
    /* 0x148 */ s32 unk_148;                        /* inferred */
    /* 0x14C */ u8 unk_14C;                         /* inferred */
    /* 0x14D */ char pad_14D[0x1];
    /* 0x14E */ s16 unk_14E;                        /* inferred */
    /* 0x150 */ char pad_150[0x4];                  /* maybe part of unk_14E[3]? */
    /* 0x154 */ f32 unk_154;                        /* inferred */
    /* 0x158 */ f32 unk_158;                        /* inferred */
    /* 0x15C */ s16 unk_15C;                        /* inferred */
    /* 0x15E */ s16 unk_15E;                        /* inferred */
    /* 0x160 */ s8 unk_160;                         /* inferred */
    /* 0x161 */ u8 unk_161;                         /* inferred */
    /* 0x162 */ u8 unk_162;                         /* inferred */
    /* 0x163 */ u8 unk_163;                         /* inferred */
    /* 0x164 */ SkelAnime unk_164;                  /* inferred */
    /* 0x1A8 */ f32 unk_1A8;                        /* inferred */
    /* 0x1AC */ f32 unk_1AC;                        /* inferred */
    /* 0x1B0 */ char pad_1B0[0x8];                  /* maybe part of unk_1AC[3]? */
    /* 0x1B8 */ u8 unk_1B8;                         /* inferred */
    /* 0x1B9 */ u8 unk_1B9;                         /* inferred */
    /* 0x1BA */ u8 unk_1BA;                         /* inferred */
    /* 0x1BB */ u8 unk_1BB;                         /* inferred */
    /* 0x1BC */ u8 unk_1BC;                         /* inferred */
    /* 0x1BD */ char pad_1BD[0x1];
    /* 0x1BE */ s16 unk_1BE;                        /* inferred */
    /* 0x1C0 */ u8 unk_1C0;                         /* inferred */
    /* 0x1C1 */ char pad_1C1[0x3];                  /* maybe part of unk_1C0[4]? */
    /* 0x1C4 */ f32 unk_1C4;                        /* inferred */
    /* 0x1C8 */ f32 unk_1C8;                        /* inferred */
    /* 0x1CC */ s16 unk_1CC;                        /* inferred */
    /* 0x1CE */ s16 unk_1CE;                        /* inferred */
    /* 0x1D0 */ Vec3s unk_1D0;                      /* inferred */
    /* 0x1D6 */ char pad_1D6[0x132];                /* maybe part of unk_1D0[52]? */
    /* 0x308 */ Vec3s unk_308;                      /* inferred */
    /* 0x30E */ char pad_30E[0x14A];                /* maybe part of unk_308[56]? */
    /* 0x458 */ f32 unk_458;                        /* inferred */
    /* 0x45C */ f32 unk_45C;                        /* inferred */
    /* 0x460 */ f32 unk_460;                        /* inferred */
    /* 0x464 */ void (*actionFunc)(Boss01 *, GlobalContext *);
    /* 0x468 */ ColliderJntSph unk_468;             /* inferred */
    /* 0x488 */ ColliderJntSphElement unk_488;      /* inferred */
    /* 0x4C8 */ char pad_4C8[0x80];                 /* maybe part of unk_488[3]? */
    /* 0x548 */ ColliderJntSph unk_548;             /* inferred */
    /* 0x568 */ ColliderJntSphElement unk_568;      /* inferred */
    /* 0x5A8 */ ColliderJntSph unk_5A8;             /* inferred */
    /* 0x5C8 */ ColliderJntSphElement unk_5C8;      /* inferred */
    /* 0x608 */ char pad_608[0x280];                /* maybe part of unk_5C8[11]? */
    /* 0x888 */ ColliderJntSph unk_888;             /* inferred */
    /* 0x8A8 */ ColliderJntSphElement unk_8A8;      /* inferred */
    /* 0x8E8 */ char pad_8E8[0x40];
    /* 0x928 */ f32 unk_928;                        /* inferred */
    /* 0x92C */ f32 unk_92C;                        /* inferred */
    /* 0x930 */ f32 unk_930;                        /* inferred */
    /* 0x934 */ char pad_934[0xA8];                 /* maybe part of unk_930[43]? */
    /* 0x9DC */ u32 unk_9DC;                        /* inferred */
    /* 0x9E0 */ s16 unk_9E0;                        /* inferred */
    /* 0x9E2 */ s16 unk_9E2;                        /* inferred */
    /* 0x9E4 */ f32 unk_9E4;                        /* inferred */
    /* 0x9E8 */ f32 unk_9E8;                        /* inferred */
    /* 0x9EC */ f32 unk_9EC;                        /* inferred */
    /* 0x9F0 */ f32 unk_9F0;                        /* inferred */
    /* 0x9F4 */ f32 unk_9F4;                        /* inferred */
    /* 0x9F8 */ f32 unk_9F8;                        /* inferred */
    /* 0x9FC */ f32 unk_9FC;                        /* inferred */
    /* 0xA00 */ f32 unk_A00;                        /* inferred */
    /* 0xA04 */ f32 unk_A04;                        /* inferred */
    /* 0xA08 */ Vec3f unk_A08;                      /* inferred */
    /* 0xA0C */ f32 unk_A0C;                        /* overlap; inferred */
    /* 0xA14 */ f32 unk_A14;                        /* inferred */
    /* 0xA18 */ f32 unk_A18;                        /* inferred */
    /* 0xA1C */ f32 unk_A1C;                        /* inferred */
    /* 0xA20 */ f32 unk_A20;                        /* inferred */
    /* 0xA24 */ f32 unk_A24;                        /* inferred */
    /* 0xA28 */ f32 unk_A28;                        /* inferred */
    /* 0xA2C */ ColliderCylinder unk_A2C;           /* inferred */
    /* 0xA78 */ ColliderCylinder unk_A78;           /* inferred */
    /* 0xAC4 */ f32 unk_AC4;                        /* inferred */
    /* 0xAC8 */ f32 unk_AC8;                        /* inferred */
    /* 0xACC */ f32 unk_ACC;                        /* inferred */
    /* 0xAD0 */ f32 unk_AD0;                        /* inferred */
    /* 0xAD4 */ f32 unk_AD4;                        /* inferred */
    /* 0xAD8 */ u8 unk_AD8;                         /* inferred */
    /* 0xAD9 */ u8 unk_AD9;                         /* inferred */
    /* 0xADA */ s16 unk_ADA;                        /* inferred */
} Boss01;                                           /* size = 0xADC */

struct _mips2c_stack_Boss01_Destroy {};             /* size 0x0 */

struct _mips2c_stack_Boss01_Draw {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x14];
};                                                  /* size = 0x50 */

struct _mips2c_stack_Boss01_Init {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ActorContext *sp40;                  /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_Boss01_Update {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ColliderJntSph *sp40;                /* inferred */
    /* 0x44 */ ColliderJntSph *sp44;                /* inferred */
    /* 0x48 */ CollisionCheckContext *sp48;         /* inferred */
    /* 0x4C */ char pad_4C[0x14];                   /* maybe part of sp48[6]? */
    /* 0x60 */ s16 sp60;                            /* inferred */
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];                    /* maybe part of sp62[7]? */
    /* 0x70 */ Actor *sp70;                         /* inferred */
    /* 0x74 */ char pad_74[0xC];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809D0530 {};              /* size 0x0 */

struct _mips2c_stack_func_809D0550 {};              /* size 0x0 */

struct _mips2c_stack_func_809D0678 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D082C {};              /* size 0x0 */

struct _mips2c_stack_func_809D089C {};              /* size 0x0 */

struct _mips2c_stack_func_809D092C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D0AA4 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809D119C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809D1258 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D12B4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ f32 *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ Camera *sp4C;                        /* inferred */
    /* 0x50 */ char pad_50[0x3];
    /* 0x53 */ u8 sp53;                             /* inferred */
    /* 0x54 */ Actor *sp54;                         /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809D1AB8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D1B2C {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ CutsceneContext *sp48;               /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ Actor *sp6C;                         /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809D1E5C {};              /* size 0x0 */

struct _mips2c_stack_func_809D1E74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D1EA4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D20D0 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ SkelAnime *sp38;                     /* inferred */
    /* 0x3C */ char pad_3C[0xC];                    /* maybe part of sp38[4]? */
    /* 0x48 */ Actor *sp48;                         /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ Actor *sp58;                         /* inferred */
    /* 0x5C */ char pad_5C[0x2];
    /* 0x5E */ s16 sp5E;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809D2588 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D25E8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D2664 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D26B8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D2780 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D27D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D2858 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D2914 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0xC];                    /* maybe part of sp24[4]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809D2A44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D2AA0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809D2BCC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D2CDC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D2DE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D2E4C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809D3074 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D30D0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809D32B4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (*sp24)(Boss01 *, GlobalContext *); /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D3374 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D3400 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D345C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D34D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D3530 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D35A8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void (*sp1C)(Boss01 *, f32);         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D365C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D370C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809D3A7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D3ADC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809D3C10 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D3CD0 {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ f32 *sp58;                           /* inferred */
    /* 0x5C */ f32 *sp5C;                           /* inferred */
    /* 0x60 */ CutsceneContext *sp60;               /* inferred */
    /* 0x64 */ char pad_64[0x8];                    /* maybe part of sp60[3]? */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0x4];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x16];                   /* maybe part of sp70[6]? */
    /* 0x8A */ s16 sp8A;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ s16 spA4;                            /* inferred */
    /* 0xA6 */ char pad_A6[0x2];
    /* 0xA8 */ Camera *spA8;                        /* inferred */
    /* 0xAC */ char pad_AC[0x8];                    /* maybe part of spA8[3]? */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809D441C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D4464 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D44C0 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_809D4668 {};              /* size 0x0 */

struct _mips2c_stack_func_809D519C {
    /* 0x00 */ char pad_0[0x78];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_809D5584 {};              /* size 0x0 */

struct _mips2c_stack_func_809D55CC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ MtxF *sp18;                          /* inferred */
    /* 0x1C */ s8 *sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xF];
    /* 0x4F */ s8 sp4F;                             /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809D5B0C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809D5BC4 {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ u8 *sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x10];                   /* maybe part of sp7C[5]? */
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x14];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_809D5FB4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809D606C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x10];                   /* maybe part of sp1C[5]? */
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809D62D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D6314 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];                    /* maybe part of sp22[3]? */
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809D6424 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D6488 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D64E0 {};              /* size 0x0 */

struct _mips2c_stack_func_809D6540 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D6588 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809D65E0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809D670C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ s32 *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809D694C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809D6B08 {};              /* size 0x0 */

struct _mips2c_stack_func_809D6BB4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809D6C98 {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char pad_AC[0x4];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_809D6E7C {
    /* 0x00 */ char pad_0[0x78];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_809D73D4 {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ Gfx *sp84;                           /* inferred */
    /* 0x88 */ MtxF *sp88;                          /* inferred */
    /* 0x8C */ char pad_8C[0x44];
};                                                  /* size = 0xD0 */

? EffectSsKFire_Spawn(GlobalContext *, f32 *, Vec3f *, ? *, s32, s32); /* extern */
? func_800BC848(Actor *, GlobalContext *, ?, ?);    /* extern */
? func_8013EC44(?, ?, ?, ?);                        /* extern */
? func_8016981C(GlobalContext *, s16, ? *, SkelAnime *, f32 *); /* extern */
void func_809D0530(s32 arg0, s32 arg1, s32 arg2);   /* static */
f32 func_809D0550();                                /* static */
void func_809D0678(void *arg0, f32 *arg1, s16 arg2); /* static */
void func_809D082C(void *arg0, PosRot *arg1);       /* static */
void func_809D089C(s8 arg0, MtxF *arg1, ? *arg2);   /* static */
void func_809D092C(Boss01 *arg0, GlobalContext *arg1, u8 arg2); /* static */
void func_809D0AA4(Boss01 *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_809D119C(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D1258(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D1AB8(Boss01 *arg0, u8 arg1);          /* static */
void func_809D1E5C(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D1EA4(Boss01 *arg0, GlobalContext *arg1, s32 arg2, Boss01 *); /* static */
void func_809D2588(Actor *arg0, GlobalContext *arg1, s16); /* static */
void func_809D2664(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D2780(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D2858(Boss01 *arg0, GlobalContext *arg1, Boss01 *); /* static */
void func_809D2914(Actor *arg0, GlobalContext *arg1); /* static */
void func_809D2A44(f32 arg0, f32 arg1, Boss01 *arg2, GlobalContext *, ?); /* static */
void func_809D2DE8(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D3074(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D32B4(Boss01 *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_809D3374(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D3400(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D34D4(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D35A8(Actor *arg0, GlobalContext *arg1, u8 arg2); /* static */
void func_809D365C(Boss01 *arg0, f32 arg1);         /* static */
void func_809D370C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809D3A7C(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D3C10(Actor *arg0, GlobalContext *arg1, s16); /* static */
void func_809D441C(Actor *arg0, GlobalContext *arg1, s16); /* static */
void func_809D44C0(Boss01 *arg0, GlobalContext *arg1); /* static */
s32 func_809D4668(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D519C(Boss01 *arg0, GraphicsContext **arg1); /* static */
s32 func_809D5584(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809D55CC(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809D5B0C(Actor *this, GlobalContext *globalCtx); /* static */
void func_809D5BC4(Boss01 *arg0, Gfx *arg1, f32 arg2); /* static */
void func_809D5FB4(Gfx *arg0, Boss01 *arg1, GlobalContext *arg2); /* static */
void func_809D606C(Gfx *arg0, Boss01 *arg1, GlobalContext *arg2); /* static */
void func_809D62D4(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D6424(Actor *arg0, GlobalContext *arg1); /* static */
void func_809D64E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809D6540(Actor *arg0, GlobalContext *arg1); /* static */
void func_809D670C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809D694C(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_809D6B08(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3); /* static */
void func_809D6BB4(Actor *this, GlobalContext *globalCtx); /* static */
void func_809D6C98(GlobalContext *arg0, f32 *arg1, f32 arg2); /* static */
void func_809D6E7C(Boss01 *arg0, GlobalContext *arg1); /* static */
void func_809D73D4(GlobalContext *arg0);            /* static */
extern AnimationHeader D_06000C44;
extern AnimationHeader D_06001884;
extern void D_0600C338;
extern ? D_0600C498;
extern s8 D_0600C5E0;
extern ? D_0600C7A8;
extern ? D_0600C7C8;
extern void D_0600C7F8;
extern ? D_0600E3E8;
extern FlexSkeletonHeader D_0600F0A8;
extern AnimationHeader D_0600FDEC;
extern AnimationHeader D_0600FF94;
extern AnimationHeader D_06010150;
extern AnimationHeader D_06010980;
extern AnimationHeader D_060124CC;
extern AnimationHeader D_06012B70;
extern AnimationHeader D_06012D10;
extern AnimationHeader D_06012EBC;
extern AnimationHeader D_06013480;
extern AnimationHeader D_0601407C;
extern AnimationHeader D_06014F14;
extern AnimationHeader D_06015A30;
extern AnimationHeader D_06016168;
extern AnimationHeader D_060164CC;
extern AnimationHeader D_06018438;
extern AnimationHeader D_06019C10;
extern AnimationHeader D_0601F6A4;
extern AnimationHeader D_060204AC;
extern Gfx D_060213A8;
extern ? D_060220A0;
extern ? D_06022118;
extern FlexSkeletonHeader D_060222D0;
extern AnimationHeader D_06022550;
static Vec3f D_809D7980 = {0.0f, 1000.0f, 0.0f};
static f32 D_809D798C = 10.0f;
static DamageTable D_809D7990 = {
    {
        0x10,
        0xF1,
        0,
        0xE1,
        0xF1,
        0xF1,
        0,
        0,
        0xE1,
        0xE1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0xF1,
        0x10,
        0xE1,
        0x10,
        0xB0,
        0,
        0,
        0xF1,
        0xE1,
        0xD1,
        0xC2,
        0,
        0,
        0,
        0,
        0,
        0xE1,
    },
};
static DamageTable D_809D79B0 = {
    {
        0x10,
        0xF1,
        0,
        0xF2,
        0x10,
        0xF2,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0x10,
        0x10,
        0xF1,
        0x10,
        0x10,
        0,
        0,
        0xF1,
        0xE1,
        0xD2,
        0xD2,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderJntSphElementInit D_809D79D0[3] = {
    {
        {2, {0xF7CFFFFF, 4, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x23}, 0x64},
    },
    {
        {2, {0xF7CFFFFF, 4, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x23}, 0x64},
    },
    {
        {2, {0xF7CFFFFF, 4, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x46}, 0x64},
    },
};
static ColliderJntSphInit D_809D7A3C = {{9, 0x11, 0xD, 9, 0x10, 0}, 3, &D_809D79D0};
static ColliderJntSphElementInit D_809D7A4C = {
    {2, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x24}, 0x64},
};
static ColliderJntSphInit D_809D7A70 = {{9, 0x11, 0xD, 9, 0x10, 0}, 1, &D_809D7A4C};
static ColliderJntSphElementInit D_809D7A80[11] = {
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x14}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0x1E}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0x19}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
};
static ColliderJntSphInit D_809D7C0C = {{3, 0x11, 9, 9, 0x10, 0}, 0xB, &D_809D7A80};
static ColliderJntSphElementInit D_809D7C1C[2] = {
    {
        {3, {0xF7CFFFFF, 4, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {0, {{0, 0, 0}, 0x24}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {0, {{0, 0, 0}, 0x24}, 0x64},
    },
};
static ColliderJntSphInit D_809D7C64 = {{3, 0x11, 9, 9, 0x10, 0}, 2, &D_809D7C1C};
static ColliderCylinderInit D_809D7C74 = {
    {3, 0x11, 9, 0x39, 0x10, 1},
    {3, {0xF7CFFFFF, 0, 4}, {0xF7FFFFFF, 0, 0}, 1, 1, 1},
    {0xF, 0xF, 0xA, {0, 0, 0}},
};
static ColliderCylinderInit D_809D7CA0 = {
    {3, 0x11, 9, 0x39, 0x10, 1},
    {3, {0xF7CFFFFF, 0, 4}, {0xF7FFFFFF, 0, 0}, 1, 1, 1},
    {8, 0xF, 0xA, {0, 0, 0}},
};
static Color_RGBA8 D_809D7CEC = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_809D7CF0 = {0x28, 0x1E, 0x1E, 0xFF};
static ? D_809D7CF4;                                /* unable to generate initializer */
static f32 D_809D7D24[5] = {0.0f, 350.0f, -350.0f, 350.0f, -350.0f};
static ? D_809D7D38;                                /* unable to generate initializer */
static Color_RGBA8 D_809D7D4C = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_809D7D50 = {0xC8, 0xC8, 0xFF, 0xFF};
static Vec3f D_809D7D54 = {0.0f, -1.0f, 0.0f};
static u8 D_809D7D60[12] = {0, 2, 4, 6, 8, 0xA, 0xC, 0xE, 0x10, 0x12, 0x14, 0};
static u8 D_809D7D6C[12] = {1, 3, 5, 7, 9, 0xB, 0xD, 0xF, 0x11, 0x13, 0x15, 0};
static ? D_809D7D78;                                /* unable to generate initializer */
static ? D_809D7D7A;                                /* unable to generate initializer */
static ? D_809D7D7F;                                /* unable to generate initializer */
static ? D_809D7D84;                                /* unable to generate initializer */
static ? D_809D7D8F;                                /* unable to generate initializer */
static ? D_809D7D97;                                /* unable to generate initializer */
static ? D_809D7D98;                                /* unable to generate initializer */
static ? D_809D7DB4;                                /* unable to generate initializer */
static Vec3f D_809D7E38 = {0.0f, 500.0f, 0.0f};
static Vec3f D_809D7E44 = {500.0f, -2500.0f, 0.0f};
static Vec3f D_809D7E50 = {1500.0f, -7000.0f, 0.0f};
static Vec3f D_809D7E5C = {5000.0f, 0.0f, 9000.0f};
static ? D_809D7E68;                                /* unable to generate initializer */
static ? D_809D7EA0;                                /* unable to generate initializer */
static s32 D_809D7EAC[6] = {1, 2, 3, 3, 2, 1};
static s32 D_809D7EC4[7] = {2, 3, 4, 4, 4, 3, 2};
static s32 D_809D7EE0[8] = {2, 3, 4, 4, 4, 4, 3, 2};
static s32 D_809D7F00[12] = {2, 4, 5, 5, 6, 6, 6, 6, 5, 5, 4, 2};
static ? D_809D7F30;                                /* unable to generate initializer */
static ? D_809D7F6C;                                /* unable to generate initializer */
static s16 D_809D8A10;
static Boss01 *D_809D8A14;
static Actor *D_809D8A18;
static f32 D_809D8A1C;
static f32 D_809D8A20;
static f32 D_809D8A24;
static f32 D_809D8A28;
static f32 D_809D8A2C;
static f32 D_809D8A30;
static f32 D_809D8A34;
static u8 D_809D8A38;
static Vec3f D_809D8A40;
static s32 D_809D8A4C;
static s32 D_809D8A50;
static s32 D_809D8A54;
static void D_809D8A58;

void func_809D0530(s32 arg0, s32 arg1, s32 arg2) {
    D_809D8A4C = arg0;
    D_809D8A50 = arg1;
    D_809D8A54 = arg2;
}

f32 func_809D0550(void) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s32 temp_f16;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_t7;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_hi = (s32) (D_809D8A4C * 0xAB) % 0x763D;
    temp_hi_2 = (s32) (D_809D8A50 * 0xAC) % 0x7663;
    temp_f16 = temp_hi_2;
    temp_t7 = (s32) (D_809D8A54 * 0xAA) % 0x7673;
    temp_f6 = (f32) temp_hi;
    D_809D8A4C = temp_hi;
    D_809D8A50 = temp_hi_2;
    D_809D8A54 = temp_t7;
    temp_f2 = (temp_f6 / 30269.0f) + ((f32) temp_f16 / 30307.0f) + ((f32) temp_t7 / 30323.0f);
    phi_f2 = temp_f2;
    phi_f2_2 = temp_f2;
    if (temp_f2 >= 1.0f) {
        do {
            temp_f2_2 = phi_f2 - 1.0f;
            phi_f2 = temp_f2_2;
            phi_f2_2 = temp_f2_2;
        } while (temp_f2_2 >= 1.0f);
    }
    return fabsf(phi_f2_2);
}

void func_809D0678(void *arg0, f32 *arg1, s16 arg2) {
    s16 temp_v0;
    s32 temp_t3;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0;
    phi_v0 = 1;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk_28 == 0) {
        phi_s0->unk_28 = 1U;
        phi_s0->unk_0 = (s32) arg1->unk_0;
        phi_s0->unk_4 = (s32) arg1->unk_4;
        phi_s0->unk_2A = 0;
        phi_s0->unk_8 = (s32) arg1->unk_8;
        phi_s0->unk_1C = (s16) (s32) Rand_ZeroFloat(65536.0f);
        temp_t3 = (s32) Rand_ZeroFloat(65536.0f);
        phi_s0->unk_2C = arg2;
        phi_s0->unk_18 = -1.0f;
        phi_s0->unk_1E = (s16) temp_t3;
        if (arg2 == 0) {
            phi_s0->unk_30 = (s16) (s32) randPlusMinusPoint5Scaled(800.0f);
            phi_s0->unk_2E = (s16) (s32) randPlusMinusPoint5Scaled(800.0f);
            phi_s0->unk_34 = 0.008f;
            phi_s0->unk_C = (f32) D_801D15B0.x;
            phi_s0->unk_10 = (f32) D_801D15B0.y;
            phi_s0->unk_14 = (f32) D_801D15B0.z;
            return;
        }
        phi_s0->unk_30 = (s16) (s32) randPlusMinusPoint5Scaled(8000.0f);
        phi_s0->unk_2E = (s16) (s32) randPlusMinusPoint5Scaled(8000.0f);
        phi_s0->unk_34 = (f32) (randPlusMinusPoint5Scaled(0.0016000001f) + 0.0032000002f);
        phi_s0->unk_C = randPlusMinusPoint5Scaled(13.0f);
        phi_s0->unk_10 = (f32) (Rand_ZeroFloat(4.0f) + 7.0f);
        phi_s0->unk_14 = randPlusMinusPoint5Scaled(13.0f);
        return;
    }
    phi_s0 += 0x3C;
    if ((s32) temp_v0 >= 0x64) {
        return;
    }
    goto loop_1;
}

void func_809D082C(void *arg0, PosRot *arg1) {
    if (arg0->unk_28 == 0) {
        arg0->unk_28 = 3U;
        arg0->unk_0 = (s32) arg1->pos.x;
        arg0->unk_4 = (s32) arg1->pos.y;
        arg0->unk_2A = 0;
        arg0->unk_8 = (s32) arg1->pos.z;
        arg0->unk_C = (f32) D_801D15B0.x;
        arg0->unk_10 = (f32) D_801D15B0.y;
        arg0->unk_18 = 0.0f;
        arg0->unk_34 = 0.0f;
        arg0->unk_38 = 230.0f;
        arg0->unk_14 = (f32) D_801D15B0.z;
    }
}

void func_809D089C(s8 arg0, MtxF *arg1, ? *arg2) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 << 6;
    (arg1->mf[1][3] + temp_v0)->unk_30 = (s16) (s32) arg2->unk_0;
    (arg1->mf[1][3] + temp_v0)->unk_32 = (s16) (s32) arg2->unk_4;
    (arg1->mf[1][3] + temp_v0)->unk_34 = (s16) (s32) arg2->unk_8;
    temp_v1 = arg1->mf[1][3] + temp_v0;
    temp_v1->unk_36 = (s16) (s32) (temp_v1->unk_38 * (f32) temp_v1->unk_2E);
}

void func_809D092C(Boss01 *arg0, GlobalContext *arg1, u8 arg2) {
    f32 temp_f0;

    if (arg1->actorCtx.actorList[2].first->unk_28 > 200.0f) {
        func_809D1EA4((Boss01 *)0x64);
        return;
    }
    if ((Rand_ZeroOne() < 0.2f) && (arg2 == 0)) {
        func_809D2780(arg0, arg1);
        return;
    }
    temp_f0 = arg0->actor.xzDistToPlayer;
    if (temp_f0 <= 250.0f) {
        if (temp_f0 <= 150.0f) {
            arg0 = arg0;
            arg1 = arg1;
            if (Rand_ZeroOne() < 0.5f) {
                func_809D3400(arg0, arg1);
                return;
            }
            func_809D34D4(arg0, arg1);
            return;
        }
        func_809D3074(arg0, arg1);
        return;
    }
    if (((s32) arg0->actor.colChkInfo.health < 8) && (arg0 = arg0, arg1 = arg1, (Rand_ZeroOne() < 0.75f))) {
        func_809D2664(arg0, arg1);
        return;
    }
    func_809D2DE8(arg0, arg1);
}

void func_809D0AA4(Boss01 *arg0, GlobalContext *arg1, s32 arg2) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f20;
    s32 temp_a2;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    temp_a2 = arg2 & 0xFF;
    if (((arg0->unk_144 & temp_a2) == 0) && ((phi_s1 = 0, (arg0->unk_1C4 > 1.0f)) || (arg0->unk_1C8 > 1.0f) || (temp_a2 == 0) || (arg0->actor.speedXZ > 1.0f))) {
        temp_s6 = &sp98;
        temp_s5 = &spA4;
        temp_s4 = &spB0;
        do {
            spA4 = randPlusMinusPoint5Scaled(5.0f);
            spA8 = Rand_ZeroFloat(2.0f) + 1.0f;
            spAC = randPlusMinusPoint5Scaled(5.0f);
            sp9C = -0.1f;
            spA0 = 0.0f;
            sp98 = 0.0f;
            temp_s0 = arg0 + (phi_s1 * 0xC);
            spB0 = randPlusMinusPoint5Scaled(20.0f) + temp_s0->unk_440;
            spB4 = Rand_ZeroFloat(10.0f) + 3.0f;
            spB8 = randPlusMinusPoint5Scaled(20.0f) + temp_s0->unk_448;
            temp_f20 = Rand_ZeroFloat(150.0f);
            func_800B0EB0(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &D_809D7CEC, &D_809D7CF0, (s16) (s32) (temp_f20 + 350.0f), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
            temp_s1 = (phi_s1 + 1) & 0xFF;
            phi_s1 = temp_s1;
        } while (temp_s1 < 2);
    }
}

void Boss01_Init(Actor *thisx, GlobalContext *globalCtx) {
    ActorContext *sp40;
    ActorContext *temp_a0;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v0;
    Boss01 *this = (Boss01 *) thisx;

    Actor_SetScale((Actor *) this, 0.015f);
    temp_v0 = this->actor.params;
    if (temp_v0 == 0xA) {
        SkelAnime_InitSV(globalCtx, &this->unk_164, &D_060222D0, &D_06022550, &this->unk_1D0, &this->unk_308, 0x15);
        this->actor.update = func_809D694C;
        this->actor.draw = func_809D6BB4;
        this->unk_14C = 1;
        func_809D62D4(this, globalCtx);
        this->actor.gravity = -2.0f;
        Collider_InitAndSetCylinder(globalCtx, &this->unk_A2C, (Actor *) this, &D_809D7C74);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_A78, (Actor *) this, &D_809D7CA0);
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 12.0f);
        Actor_SetScale((Actor *) this, 0.025f);
        this->actor.colChkInfo.health = 2;
        D_809D8A10 += 1;
        Audio_PlayActorSound2((Actor *) this, 0x295BU);
        this->actor.colChkInfo.damageTable = &D_809D79B0;
        D_809D8A14->actor.hintId = 0x63;
        goto block_13;
    }
    if (temp_v0 == 0x23) {
        SkelAnime_InitSV(globalCtx, &this->unk_164, &D_0600F0A8, &D_06018438, &this->unk_1D0, &this->unk_308, 0x34);
        func_809D1E5C(this, globalCtx);
        temp_t1 = this->actor.world.rot.z;
        this->actor.world.rot.z = 0;
        this->actor.draw = func_809D5B0C;
        this->actor.flags &= -2;
        this->unk_14E = temp_t1;
        goto block_13;
    }
    if ((gSaveContext.weekEventReg[20] & 2) != 0) {
        temp_a0 = &globalCtx->actorCtx;
        sp40 = temp_a0;
        Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x38, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 1);
        Actor_Spawn(temp_a0, globalCtx, 0x3A, 0.0f, 0.0f, 250.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    globalCtx->envCtx.unk_C3 = 0;
    globalCtx->envCtx.unk_E0 = 2;
    globalCtx->envCtx.unk_DC = 0.0f;
    D_809D8A14 = this;
    D_809D8A10 = 0;
    globalCtx->specialEffects = &D_809D8A58;
    phi_v0 = 0;
    do {
        temp_v0_2 = phi_v0 + 1;
        (&D_809D8A58 + (phi_v0 * 0x3C))->unk_28 = 0;
        phi_v0 = temp_v0_2;
    } while ((s32) temp_v0_2 < 0x64);
    this->actor.hintId = 0x5E;
    this->actor.targetMode = 5;
    this->actor.colChkInfo.mass = 0xFE;
    this->actor.colChkInfo.damageTable = &D_809D7990;
    this->actor.colChkInfo.health = 0x14;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_468, (Actor *) this, &D_809D7A3C, &this->unk_488);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_548, (Actor *) this, &D_809D7A70, &this->unk_568);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_5A8, (Actor *) this, &D_809D7C0C, &this->unk_5C8);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_888, (Actor *) this, &D_809D7C64, &this->unk_8A8);
    SkelAnime_InitSV(globalCtx, &this->unk_164, &D_0600F0A8, &D_06018438, &this->unk_1D0, &this->unk_308, 0x34);
    if ((gGameInfo->data[1312] != 0) || ((gSaveContext.eventInf[5] & 0x10) != 0)) {
        func_809D1EA4(this, globalCtx, 0);
        this->actor.gravity = -2.5f;
        D_809D8A38 = gGameInfo->data[1263] + 0x14;
    } else {
        func_809D1258(this, globalCtx);
    }
    D_809D8A18 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x23D, 0.0f, 437.0f, -750.0f, (s16) 0, (s16) 0, (s16) 0, 0x100);
block_13:
    this->unk_154 = -2.0f;
    this->unk_158 = -4.0f;
}

void Boss01_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Boss01 *this = (Boss01 *) thisx;

}

void func_809D119C(Boss01 *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[3].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            temp_f2 = phi_s0->world.pos.x - arg0->actor.world.pos.x;
            temp_f12 = phi_s0->world.pos.y - arg0->actor.world.pos.y;
            temp_f14 = phi_s0->world.pos.z - arg0->actor.world.pos.z;
            if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 150.0f) {
                func_809D2A44(temp_f12, temp_f14, arg0, arg1, 0);
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void func_809D1258(Boss01 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809D12B4;
    arg0->actor.world.pos.x = 0.0f;
    arg0->actor.world.pos.z = 0.0f;
    arg0->actor.gravity = 0.0f;
    arg0->actor.world.pos.y = 2400.0f;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x164, &D_06012D10, 0.0f);
}

void func_809D12B4(Boss01 *this, GlobalContext *globalCtx) {
    Actor *sp54;
    u8 sp53;
    Camera *sp4C;
    f32 sp44;
    ? sp40;
    f32 *sp38;
    SkelAnime *sp34;
    f32 *sp30;
    Actor *temp_a3;
    Camera *temp_v0_2;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_v0;
    u8 phi_v0;
    u32 phi_v1;
    u32 phi_v1_2;
    u32 phi_v1_3;
    u32 phi_v1_4;
    u32 phi_v1_5;
    u32 phi_v1_6;

    temp_a3 = globalCtx->actorCtx.actorList[2].first;
    temp_a0 = &this->unk_164;
    this->unk_9DC += 1;
    sp34 = temp_a0;
    sp54 = temp_a3;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk_9E0;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {

                } else {
                    if ((u32) this->unk_9DC < 0x33U) {
                        Audio_PlayActorSound2((Actor *) this, 0x3010U);
                    }
                    phi_v0 = 0U;
                    phi_v1 = this->unk_9DC;
                    if ((this->unk_9DC == 1) || (this->unk_9DC == 3)) {
                        do {
                            sp53 = phi_v0;
                            func_809D0AA4(this, globalCtx, 0);
                            temp_v0 = (phi_v0 + 1) & 0xFF;
                            phi_v0 = (u8) temp_v0;
                        } while (temp_v0 < 0xA);
                        play_sound(0x380CU);
                        func_8013EC44(0, 0xC8, 0x14, 0x14);
                        this->unk_A28 = 10.0f;
                        phi_v1 = this->unk_9DC;
                    }
                    phi_v1_2 = phi_v1;
                    if (phi_v1 == 5) {
                        SkelAnime_ChangeAnimTransitionRepeat(sp34, &D_06019C10, -20.0f);
                        phi_v1_2 = this->unk_9DC;
                    }
                    if ((phi_v1_2 >= 6U) && ((func_801378B8(sp34, 30.0f) != 0) || (func_801378B8(sp34, 54.0f) != 0))) {
                        Audio_PlayActorSound2((Actor *) this, 0x3811U);
                    }
                    if ((u32) this->unk_9DC < 0x1EU) {
                        Math_ApproachF(&this->unk_9F4, this->actor.world.pos.y + 80.0f, 0.25f, 1000.0f);
                    } else {
                        Math_ApproachF(&this->unk_9E4, this->actor.world.pos.x + 70.0f, 0.05f, this->unk_A1C * 70.0f);
                        Math_ApproachF(&this->unk_9E8, 200.0f, 0.05f, this->unk_A1C * 170.0f);
                        Math_ApproachF(&this->unk_9EC, (this->actor.world.pos.z + 200.0f + 50.0f) - 30.0f, 0.05f, this->unk_A1C * 120.0f);
                        Math_ApproachF(&this->unk_9F4, this->actor.world.pos.y + 80.0f + 20.0f, 0.05f, this->unk_A1C * 20.0f);
                        Math_ApproachF(&this->unk_A1C, 1.0f, 1.0f, 0.001f);
                    }
                    if (this->unk_9DC == 0x14) {
                        func_801A89A8(0x801B);
                    }
                    phi_v1_3 = this->unk_9DC;
                    if (this->unk_9DC == 0x32) {
                        Actor_TitleCardCreate(globalCtx, &globalCtx->actorCtx.titleCtxt, Lib_SegmentedToVirtual(&D_0600C7F8), 0xA0, (s16) 0xB4, (u8) 0x80, (u8) 0x28);
                        phi_v1_3 = this->unk_9DC;
                    }
                    if (phi_v1_3 == 0x8C) {
                        sp34 = (SkelAnime *) &this->unk_9E4;
                        temp_v0_2 = Play_GetCamera(globalCtx, 0);
                        this->unk_9E0 = 0;
                        this->unk_148 = 0;
                        sp4C = temp_v0_2;
                        func_809D1EA4(this, globalCtx, 0);
                        sp4C->eye.x = sp34->unk_0;
                        sp4C->eye.y = (bitwise f32) sp34->skeleton;
                        sp4C->eye.z = (bitwise f32) sp34->animCurrentSeg;
                        sp4C->eyeNext.x = sp34->unk_0;
                        sp4C->eyeNext.y = (bitwise f32) sp34->skeleton;
                        sp4C->eyeNext.z = (bitwise f32) sp34->animCurrentSeg;
                        sp4C->at.x = this->unk_9F0;
                        sp4C->at.y = this->unk_9F4;
                        sp4C->at.z = this->unk_9F8;
                        func_80169AFC(globalCtx, this->unk_9E2, 0);
                        this->unk_9E2 = 0;
                        func_800EA0EC(globalCtx, &globalCtx->csCtx);
                        func_800B7298(globalCtx, (Actor *) this, 6U);
                        this->actor.flags |= 1;
                        gSaveContext.eventInf[5] |= 0x10;
                    }
                }
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x3010U);
                Math_ApproachZeroF(&this->unk_9FC, 0.1f, 0.1f);
                play_sound(0x3008U);
                this->unk_1C0 = 2;
                Math_ApproachF(&this->unk_9F4, this->actor.world.pos.y + 80.0f, 0.25f, 30.0f);
                if (this->actor.world.pos.y < 40.0f) {
                    SkelAnime_ChangeAnimTransitionStop(sp34, &D_06012D10, -2.0f);
                    this->unk_9E0 = 3;
                    this->unk_9DC = 0;
                }
            }
        } else {
            goto block_8;
        }
    } else {
        sp54 = temp_a3;
        if ((ActorCutscene_GetCurrentIndex() == -1) && (temp_a3->world.pos.z < 590.0f)) {
            sp54 = temp_a3;
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->unk_9E2 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk_9E2, 7);
            this->actor.flags &= -2;
            this->unk_9DC = 0;
            this->unk_9E0 = 1;
            this->unk_9FC = 0.0f;
            this->unk_A00 = 1.0f;
            this->unk_A04 = 0.0f;
block_8:
            globalCtx->actorCtx.actorList[2].first->world.rot.y = -0x8000;
            globalCtx->actorCtx.actorList[2].first->shape.rot.y = -0x8000;
            globalCtx->actorCtx.actorList[2].first->world.pos.x = -9.0f;
            globalCtx->actorCtx.actorList[2].first->world.pos.z = 587.0f;
            this->unk_9E4 = -9.0f;
            sp54 = globalCtx->actorCtx.actorList[2].first;
            this->unk_9E8 = (func_800B6FC8((Player *) globalCtx->actorCtx.actorList[2].first) + sp54->world.pos.y) - 24.0f;
            this->unk_9EC = (sp54->world.pos.z - 200.0f) + 110.0f;
            this->unk_9F0 = sp54->world.pos.x;
            this->unk_9F4 = (func_800B6FC8((Player *) sp54) + globalCtx->actorCtx.actorList[2].first->world.pos.y) - 14.0f;
            this->unk_9F8 = globalCtx->actorCtx.actorList[2].first->world.pos.z;
            if (globalCtx->actorCtx.actorList[2].first->unk_14B == 0) {
                this->unk_9E8 -= 30.0f + (f32) gGameInfo->data[2416];
                this->unk_9F4 -= 30.0f + (f32) gGameInfo->data[2417];
            }
            if ((u32) this->unk_9DC >= 0x14U) {
                Audio_PlayActorSound2((Actor *) this, 0x3010U);
            }
            phi_v1_4 = this->unk_9DC;
            if (this->unk_9DC == 0x28) {
                func_800B7298(globalCtx, (Actor *) this, 0x15U);
                phi_v1_4 = this->unk_9DC;
            }
            phi_v1_5 = phi_v1_4;
            if (phi_v1_4 == 0x64) {
                func_800B7298(globalCtx, (Actor *) this, 4U);
                phi_v1_5 = this->unk_9DC;
            }
            phi_v1_6 = phi_v1_5;
            if (phi_v1_5 >= 0x5AU) {
                play_sound(0x3008U);
                phi_v1_6 = this->unk_9DC;
            }
            if (phi_v1_6 == 0x78) {
                this->unk_9E0 = 2;
                this->unk_9DC = 0;
                this->actor.world.pos.y = 1500.0f;
                this->actor.gravity = -2.5f;
                SkelAnime_ChangeAnimTransitionStop(sp34, &D_06012EBC, 0.0f);
                temp_f2 = this->actor.world.pos.z;
                this->unk_9F4 = 80.0f;
                this->unk_9E8 = 30.0f;
                temp_f0 = this->actor.world.pos.x;
                this->unk_9F8 = temp_f2;
                this->unk_9E4 = temp_f0;
                this->unk_9EC = (temp_f2 + 200.0f + 50.0f) - 150.0f;
                this->unk_9F0 = temp_f0;
                this->unk_9FC = 2.0f;
            }
        }
    }
    if (this->unk_9E2 != 0) {
        sp30 = &this->unk_9F0;
        sp38 = &this->unk_9FC;
        sp34 = (SkelAnime *) &this->unk_9E4;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        this->unk_A24 = Math_CosS((s16) (globalCtx->gameplayFrames << 0xF)) * this->unk_A28;
        Math_ApproachZeroF(&this->unk_A28, 1.0f, 0.75f);
        sp40.unk_0 = (f32) sp30->unk_0;
        sp40.unk_4 = (s32) sp30->unk_4;
        sp40.unk_8 = (s32) sp30->unk_8;
        sp44 += this->unk_A24;
        func_8016981C(globalCtx, this->unk_9E2, &sp40, sp34, sp38);
    }
}

void func_809D1AB8(Boss01 *arg0, u8 arg1) {
    Boss01 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809D1B2C;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x164, &D_0601F6A4, -10.0f);
    arg0->unk_9E0 = 0;
    arg0->unk_9DC = 0;
    arg0->unk_1C1 += 1;
    arg0->unk_1BE = 0x1E;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_1C8 = 0.0f;
    arg0->unk_1C4 = 0.0f;
}

void func_809D1B2C(Boss01 *this, GlobalContext *globalCtx) {
    Actor *sp6C;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    CutsceneContext *sp48;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v1;
    u32 temp_v1_2;

    sp6C = globalCtx->actorCtx.actorList[2].first;
    this->unk_1BE = 0x1E;
    this->unk_9DC += 1;
    SkelAnime_FrameUpdateMatrix(&this->unk_164);
    temp_v1 = this->unk_9E0;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {

        } else {
            goto block_5;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, (Actor *) this, 7U);
        this->unk_9E2 = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unk_9E2, 7);
        this->actor.flags &= -2;
        this->unk_9E0 = 1;
        this->actor.shape.rot.y = 0;
        this->actor.world.pos.z = 0.0f;
        this->actor.world.pos.x = 0.0f;
        this->unk_A1C = 0.0f;
        this->unk_A0C = 100.0f;
block_5:
        Audio_PlayActorSound2((Actor *) this, 0x3015U);
        Matrix_RotateY(this->actor.shape.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(250.0f, (Vec3f *) &sp60);
        temp_f0 = this->actor.world.pos.x;
        temp_f2 = this->actor.world.pos.y;
        temp_f12 = this->actor.world.pos.z;
        this->unk_9E4 = temp_f0 + sp60;
        this->unk_9E8 = temp_f2 + sp64 + 40.0f;
        this->unk_9F0 = temp_f0;
        this->unk_9F4 = temp_f2 + this->unk_A0C;
        this->unk_9F8 = temp_f12;
        this->unk_9EC = temp_f12 + sp68;
        if ((u32) this->unk_9DC >= 0x29U) {
            Math_ApproachF(&this->unk_A0C, 800.0f, 0.1f, this->unk_A1C);
            Math_ApproachF(&this->unk_A1C, 100.0f, 1.0f, 1.0f);
            temp_v1_2 = this->unk_9DC;
            if ((temp_v1_2 >= 0x51U) && ((temp_v1_2 & 0xF) == 0)) {
                SysMatrix_GetStateTranslationAndScaledZ(100.0f, (Vec3f *) &sp60);
                sp54 = randPlusMinusPoint5Scaled(200.0f) + (this->actor.world.pos.x + sp60);
                sp5C = randPlusMinusPoint5Scaled(200.0f) + (this->actor.world.pos.z + sp68);
                play_sound(0x9ACU);
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x129, sp54, 1200.0f, sp5C, (s16) 0, (s16) (s32) Rand_ZeroFloat(65536.0f), (s16) 0, (s16) 0xA);
            }
        }
        if (this->unk_9DC >= 0xAAU) {
            sp48 = &globalCtx->csCtx;
            func_809D1EA4(this, globalCtx, 0);
            func_80169AFC(globalCtx, this->unk_9E2, 0);
            this->unk_9E2 = 0;
            func_800EA0EC(globalCtx, sp48);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            this->actor.flags |= 1;
            sp6C->shape.rot.y = -0x8000;
            sp6C->world.pos.x = 0.0f;
            sp6C->world.pos.z = -600.0f;
            sp6C->world.rot.y = sp6C->shape.rot.y;
        }
    }
    if (this->unk_9E2 != 0) {
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk_9E2, (Vec3f *) &this->unk_9F0, (Vec3f *) &this->unk_9E4);
    }
}

void func_809D1E5C(Boss01 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809D1E74;
}

void func_809D1E74(Boss01 *this, GlobalContext *globalCtx) {
    if (this->unk_14E == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_809D1EA4(Boss01 *arg0, GlobalContext *arg1, s32 arg2) {
    f32 temp_f16;
    u8 temp_a2;

    temp_a2 = arg2 & 0xFF;
    if (arg0->unk_148 >= 0x3E9) {
        if (arg0->unk_1C1 == 0) {
            func_809D1AB8(arg0, temp_a2);
            return;
        }
        if (temp_a2 == 0x64) {
            if (Rand_ZeroOne() < 0.3f) {
                func_809D3A7C(arg0, arg1);
                return;
            }
            arg0->unk_162 = (u8) (u32) Rand_ZeroFloat(11.999f);
            goto block_9;
        }
        arg0->unk_162 = temp_a2;
        goto block_9;
    }
    arg0->unk_162 = 0;
block_9:
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x164, *(&D_809D7CF4 + (arg0->unk_162 * 4)), 2.0f * arg0->unk_158);
    temp_f16 = (f32) SkelAnime_GetFrameCount(*(&D_809D7CF4 + (arg0->unk_162 * 4)));
    arg0->actionFunc = func_809D20D0;
    arg0->unk_14E = 0x50;
    arg0->unk_1A8 = temp_f16;
    arg0->unk_14C = (u8) (u32) Rand_ZeroFloat(1.999f);
    arg0->unk_9DC = 0;
}

void func_809D20D0(Boss01 *this, GlobalContext *globalCtx) {
    s16 sp5E;
    Actor *sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    Actor *sp48;
    SkelAnime *sp38;
    s16 temp_v0_3;
    u32 temp_t4;
    u32 temp_v0_4;
    u8 temp_t1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    s16 phi_v0;

    sp58 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_162;
    this->unk_163 = 1;
    if ((temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 5) || (temp_v0 == 6)) {
        Audio_PlayActorSound2((Actor *) this, 0x3015U);
    } else {
        Audio_PlayActorSound2((Actor *) this, 0x3016U);
    }
    temp_v0_2 = this->unk_162;
    if ((temp_v0_2 == 0) || (temp_v0_2 == 1) || (temp_v0_2 == 2) || (temp_v0_2 == 3)) {
        this->unk_1BB = 1;
        this->unk_1BA = 1;
    }
    if (((this->unk_162 == 2) || (this->unk_162 == 8) || (this->unk_162 == 9)) && (func_801378B8(&this->unk_164, 6.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x380CU);
        phi_v0 = 0;
        do {
            sp5E = phi_v0;
            func_809D0AA4(this, globalCtx, 0);
            temp_v0_3 = phi_v0 + 1;
            phi_v0 = temp_v0_3;
        } while ((s32) temp_v0_3 < 3);
    }
    sp38 = &this->unk_164;
    if (this->unk_162 == 9) {
        this->unk_158 = 0.0f;
        this->unk_154 = 0.0f;
    }
    temp_t4 = this->unk_9DC + 1;
    this->unk_1B8 = 1;
    this->unk_9DC = temp_t4;
    if (this->unk_162 == 6) {
        if (temp_t4 == 7) {
            Audio_PlayActorSound2((Actor *) this, 0x3812U);
        }
    } else if ((this->unk_162 == 7) && ((temp_v0_4 = this->unk_9DC, (temp_v0_4 == 0xC)) || (temp_v0_4 == 0x14))) {
        Audio_PlayActorSound2((Actor *) this, 0x3812U);
    }
    SkelAnime_FrameUpdateMatrix(sp38);
    Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x800);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.5f);
    if ((this->actor.xzDistToPlayer <= 150.0f) && (this->unk_14C != 0)) {
        func_809D2A44((bitwise f32) this, (bitwise f32) globalCtx, NULL);
        this->unk_1BB = 0;
    }
    if (((this->unk_14E == 0) && (temp_v0_5 = this->unk_162, (temp_v0_5 != 6)) && (temp_v0_5 != 7)) || ((func_801378B8(sp38, this->unk_1A8) != 0) && ((temp_v0_6 = this->unk_162, (temp_v0_6 == 6)) || (temp_v0_6 == 7)))) {
        if (this->actor.xzDistToPlayer <= 450.0f) {
            func_809D092C(this, globalCtx, 0U);
        } else if (Rand_ZeroOne() < 0.5f) {
            func_809D2A44((bitwise f32) this, (bitwise f32) globalCtx, (Boss01 *)1);
        } else {
            func_809D2858(this, globalCtx, (Boss01 *)1);
        }
    }
    func_809D0AA4(this, globalCtx, 1);
    temp_v0_7 = this->unk_162;
    this->unk_154 = -2.0f;
    this->unk_158 = -4.0f;
    if (((temp_v0_7 == 3) || (temp_v0_7 == 4) || (temp_v0_7 == 7) || (temp_v0_7 == 8)) && (this->unk_9DC == 0x1E)) {
        func_809D082C(globalCtx->specialEffects, &sp58->world);
        this->unk_14E = 0x78;
    }
    if (((this->unk_14E & 0xF) == 0) && (this->unk_162 != 0) && ((s32) D_809D8A10 < 5)) {
        sp48 = globalCtx->actorCtx.actorList[2].first;
        if (Rand_ZeroOne() < 0.2f) {
            sp4C.unk_0 = sp48->world.pos.x;
            sp4C.unk_4 = (f32) sp48->world.pos.y;
            sp4C.unk_8 = (f32) sp48->world.pos.z;
        } else {
            sp4C = randPlusMinusPoint5Scaled(1200.0f);
            sp54 = randPlusMinusPoint5Scaled(1200.0f);
        }
        sp50 = 1200.0f;
        temp_t1 = this->unk_162;
        switch (temp_t1) {
        case 1:
        case 2:
        case 5:
        case 6:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x129, sp4C, sp50, sp54, (s16) 0, (s16) (s32) Rand_ZeroFloat(65536.0f), (s16) 0, (s16) 0xA);
            return;
        case 9:
        case 10:
        case 11:
            func_8019F1C0(&D_809D7980, 0x295BU);
            func_809D0678(globalCtx->specialEffects, &sp4C, 0);
            /* Duplicate return node #56. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_809D2588(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    f32 temp_a2;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x164, &D_06014F14, temp_a2);
    if (func_809D25E8 != arg0->unk_464) {
        arg0->unk_14E = 0x46;
        arg0->unk_464 = func_809D25E8;
    }
    arg0->unk_1BB = 0;
}

void func_809D25E8(Boss01 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_164);
    Audio_PlayActorSound2((Actor *) this, 0x301BU);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.5f);
    if (this->unk_14E == 0) {
        func_809D1EA4(this, globalCtx, 0x64);
    }
    this->unk_1BB = 0;
    func_809D0AA4(this, globalCtx, 1);
}

void func_809D2664(Boss01 *arg0, GlobalContext *arg1) {
    Boss01 *temp_a3;
    f32 temp_a2;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x164, &D_060164CC, temp_a2);
    arg0->unk_14E = 0x78;
    arg0->actionFunc = func_809D26B8;
    arg0->unk_1BB = 0;
}

void func_809D26B8(Boss01 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_164;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ApproachF(&this->actor.speedXZ, 7.0f, 1.0f, 1.5f);
    Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 4, 0x1000);
    if (func_801378B8(temp_a0, 5.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3811U);
        Audio_PlayActorSound2((Actor *) this, 0x381DU);
    }
    if (this->unk_14E == 0) {
        func_809D1EA4(this, globalCtx, 0x64);
    }
    this->unk_1BB = 0;
    this->unk_1B8 = 1;
    this->unk_1BA = 1;
    func_809D0AA4(this, globalCtx, 1U & 0xFF);
    this->unk_1C0 = 1;
}

void func_809D2780(Boss01 *arg0, GlobalContext *arg1) {
    Boss01 *temp_a3;
    f32 temp_a2;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x164, &D_060204AC, temp_a2);
    arg0->unk_14E = 0x28;
    arg0->actionFunc = func_809D27D4;
    arg0->unk_1BB = 0;
}

void func_809D27D4(Boss01 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_164);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.5f);
    Audio_PlayActorSound2((Actor *) this, 0x3016U);
    if (this->unk_14E == 0) {
        func_809D092C(this, globalCtx, 1U);
    }
    this->unk_1BB = 0;
    this->unk_1BA = 1;
    func_809D0AA4(this, globalCtx, 1);
}

void func_809D2858(Boss01 *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x164, &D_06016168, arg0->unk_158);
    arg0->actionFunc = func_809D2914;
    arg0->unk_14E = (s16) (s32) (Rand_ZeroFloat(100.0f) + 50.0f);
    arg0->unk_1B0 = 0.07f;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->unk_1B0 *= -1.0f;
    }
    arg0->actor.gravity = -3.0f;
}

void func_809D2914(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    arg0->unk_163 = 1;
    temp_a0 = arg0 + 0x164;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (((arg0->bgCheckFlags & 1) != 0) && ((func_801378B8(temp_a0, 6.0f) != 0) || (func_801378B8(sp24, 16.0f) != 0))) {
        arg0->velocity.y = 10.0f;
        Audio_PlayActorSound2(arg0, 0x380CU);
    }
    arg0->unk_1B4 = (f32) (arg0->unk_1B4 + arg0->unk_1B0);
    SysMatrix_InsertYRotation_f(arg0->unk_1B4, 0);
    SysMatrix_GetStateTranslationAndScaledZ(450.0f, (Vec3f *) &sp34);
    Math_ApproachS(&arg0->world.rot.y, Math_FAtan2F(sp3C - arg0->world.pos.z, sp34 - arg0->world.pos.x), 0xA, 0x1000);
    Math_ApproachF(&arg0->speedXZ, 12.0f, 1.0f, 3.0f);
    if (arg0->unk_14E == 0) {
        func_809D1EA4((Boss01 *) arg0, arg1, 0x64);
    }
    func_809D0AA4((Boss01 *) arg0, arg1, 3);
    arg0->unk_1B8 = 1;
    arg0->unk_1BA = 1;
}

void func_809D2A44(void *arg0, f32 arg1, u8 arg2) {
    f32 temp_a2;
    void *temp_a3;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    temp_a3->unk_14C = arg2;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x164, &D_06012D10, temp_a2);
    arg0->unk_464 = func_809D2AA0;
    arg0->unk_14E = 5;
}

void func_809D2AA0(Boss01 *this, GlobalContext *globalCtx) {
    f32 sp30;
    SkelAnime *temp_s0;
    s32 temp_s0_2;
    f32 phi_f12;
    s32 phi_s0;

    temp_s0 = &this->unk_164;
    SkelAnime_FrameUpdateMatrix(temp_s0);
    if (this->unk_14E == 0) {
        this->actionFunc = func_809D2BCC;
        SkelAnime_ChangeAnimTransitionStop(temp_s0, &D_06012EBC, this->unk_154);
        this->actor.velocity.y = 35.0f;
        this->actor.gravity = -2.5f;
        Matrix_RotateY(this->actor.world.rot.y, 0U);
        if (this->unk_14C == 0) {
            phi_f12 = Rand_ZeroFloat(10.0f) + 10.0f;
        } else {
            phi_f12 = 12.0f;
        }
        SysMatrix_GetStateTranslationAndScaledZ(phi_f12, (Vec3f *) &sp30);
        this->unk_1C4 = sp30;
        this->unk_1C8 = sp38;
        phi_s0 = 0;
        do {
            func_809D0AA4(this, globalCtx, 0);
            temp_s0_2 = (phi_s0 + 1) & 0xFF;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 < 5);
        Audio_PlayActorSound2((Actor *) this, 0x3813U);
        Audio_PlayActorSound2((Actor *) this, 0x3014U);
        this->unk_1BE = 5;
    }
    this->unk_1BA = 1;
}

void func_809D2BCC(Boss01 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_164;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Audio_PlayActorSound2((Actor *) this, 0x3014U);
    if (this->unk_14C == 0) {
        Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 5, 0x1000);
    } else if ((this->actor.velocity.y < -5.0f) && (this->unk_1AC >= -5.0f)) {
        SkelAnime_ChangeAnimTransitionStop(sp24, &D_06013480, this->unk_154);
        Audio_PlayActorSound2((Actor *) this, 0x3811U);
    }
    if (this->actor.world.pos.y < 40.0f) {
        this->actionFunc = func_809D2CDC;
        SkelAnime_ChangeAnimTransitionStop(sp24, &D_06012D10, this->unk_154);
        this->unk_14E = 5;
        this->unk_161 = 0;
    }
    this->unk_1B8 = 1;
    this->unk_1BA = 1;
    this->unk_1C0 = 2;
    this->unk_1AC = this->actor.velocity.y;
}

void func_809D2CDC(Boss01 *this, GlobalContext *globalCtx) {
    s32 temp_s0;
    s32 phi_s0;

    SkelAnime_FrameUpdateMatrix(&this->unk_164);
    if (this->unk_161 == 0) {
        phi_s0 = 0;
        if ((this->actor.bgCheckFlags & 1) != 0) {
            this->unk_161 = 1;
            do {
                func_809D0AA4(this, globalCtx, 0);
                temp_s0 = (phi_s0 + 1) & 0xFF;
                phi_s0 = temp_s0;
            } while (temp_s0 < 5);
            Audio_PlayActorSound2((Actor *) this, 0x380CU);
        }
    }
    if (this->unk_14C == 0) {
        Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 4, 0x2800);
    }
    if (this->unk_14E == 0) {
        if (this->actor.xzDistToPlayer <= 450.0f) {
            func_809D092C(this, globalCtx, 0U);
        } else {
            func_809D1EA4(this, globalCtx, 0x64);
        }
    }
    this->unk_1B8 = 1;
    this->unk_1BA = 1;
}

void func_809D2DE8(Boss01 *arg0, GlobalContext *arg1) {
    Boss01 *temp_a3;
    f32 temp_a2;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x164, &D_06000C44, temp_a2);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06000C44);
    arg0->actionFunc = func_809D2E4C;
    arg0->unk_14E = 0x14;
    arg0->unk_1A8 = temp_f6;
}

void func_809D2E4C(Boss01 *this, GlobalContext *globalCtx) {
    f32 sp2C;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = &this->unk_164;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_f0 = this->unk_164.animCurrentFrame;
    if ((temp_f0 >= 10.0f) && (temp_f0 <= 15.0f)) {
        this->unk_160 = 1;
    }
    temp_v0 = this->unk_14E;
    if (((s32) temp_v0 >= 7) && ((s32) temp_v0 < 0xD)) {
        SysMatrix_InsertYRotation_f(((f32) this->actor.world.rot.y / 32768.0f) * 3.1415927f, 0);
        SysMatrix_GetStateTranslationAndScaledZ(20.0f, (Vec3f *) &sp2C);
        this->unk_1C4 = sp2C;
        this->unk_1C8 = sp34;
        func_809D0AA4(this, globalCtx, 0);
    }
    D_809D8A1C = 0.0f;
    D_809D8A20 = 90.0f;
    D_809D8A24 = -70.0f;
    D_809D8A28 = 0.4712388f;
    D_809D8A2C = 3.1415927f;
    D_809D8A30 = 1.7278761f;
    if (func_801378B8(sp28, 12.0f) != 0) {
        D_809D8A34 = 255.0f;
        D_809D798C = 100.0f;
    }
    if (func_801378B8(sp28, 13.0f) != 0) {
        D_809D798C = 20.0f;
    }
    if (func_801378B8(sp28, 14.0f) != 0) {
        D_809D798C = 7.0f;
    }
    if (func_801378B8(sp28, 7.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x380AU);
    }
    if (func_801378B8(sp28, 10.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3811U);
    }
    if (func_801378B8(sp28, this->unk_1A8) != 0) {
        func_809D1EA4(this, globalCtx, 0x64);
        this->unk_1C8 = 0.0f;
        this->unk_1C4 = 0.0f;
    }
    this->unk_1B8 = 1;
    this->unk_1BA = 1;
}

void func_809D3074(Boss01 *arg0, GlobalContext *arg1) {
    Boss01 *temp_a3;
    f32 temp_a2;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x164, &D_06001884, temp_a2);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06001884);
    arg0->actionFunc = func_809D30D0;
    arg0->unk_1A8 = temp_f6;
}

void func_809D30D0(Boss01 *this, GlobalContext *globalCtx) {
    f32 sp2C;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = &this->unk_164;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_f0 = this->unk_164.animCurrentFrame;
    if ((temp_f0 >= 10.0f) && (temp_f0 <= 15.0f)) {
        this->unk_1B8 = 2;
    }
    temp_v0 = this->unk_14E;
    if (((s32) temp_v0 >= 7) && ((s32) temp_v0 < 0xD)) {
        SysMatrix_InsertYRotation_f(((f32) this->actor.world.rot.y / 32768.0f) * 3.1415927f, 0);
        SysMatrix_GetStateTranslation((Vec3f *) &sp2C);
        this->unk_1C4 = sp2C;
        this->unk_1C8 = sp34;
        func_809D0AA4(this, globalCtx, 0);
    }
    D_809D8A1C = 0.0f;
    D_809D8A20 = 140.0f;
    D_809D8A24 = 0.0f;
    D_809D8A28 = 0.4712388f;
    D_809D8A2C = 0.0f;
    D_809D8A30 = 0.0f;
    if (func_801378B8(sp28, 12.0f) != 0) {
        D_809D8A34 = 255.0f;
        D_809D798C = 100.0f;
    }
    if (func_801378B8(sp28, 13.0f) != 0) {
        D_809D798C = 20.0f;
    }
    if (func_801378B8(sp28, 14.0f) != 0) {
        D_809D798C = 7.0f;
    }
    if (func_801378B8(sp28, 10.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3811U);
    }
    if (func_801378B8(sp28, this->unk_1A8) != 0) {
        func_809D1EA4(this, globalCtx, 0x64);
        this->unk_1C8 = 0.0f;
        this->unk_1C4 = 0.0f;
    }
    this->unk_1BA = 1;
}

void func_809D32B4(Boss01 *arg0, GlobalContext *arg1, s32 arg2) {
    void (*sp24)(Boss01 *, GlobalContext *);

    sp24 = func_809D3374;
    if (func_809D3374 != arg0->actionFunc) {
        if ((arg2 & 0xFF) == 0) {
            SkelAnime_ChangeAnimTransitionStop(arg0 + 0x164, &D_0600FF94, arg0->unk_154);
            arg0->unk_1A8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600FF94);
        } else {
            SkelAnime_ChangeAnimTransitionStop(arg0 + 0x164, &D_06010150, arg0->unk_154);
            arg0->unk_1A8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06010150);
        }
        arg0->actionFunc = sp24;
    }
    arg0->unk_14E = 5;
}

void func_809D3374(Boss01 *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x164);
    Math_ApproachS(arg0 + 0x32, arg0->actor.yawTowardsPlayer, 2, 0x500);
    Math_ApproachZeroF(arg0 + 0x70, 1.0f, 1.0f);
    if (arg0->unk_14E != 0) {
        arg0->unk_1BA = 1;
    } else {
        func_809D1EA4(arg0, arg1, 0x64);
    }
    arg0->unk_1BB = 1;
}

void func_809D3400(Boss01 *arg0, GlobalContext *arg1) {
    Boss01 *temp_a3;
    f32 temp_a2;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x164, &D_0601407C, temp_a2);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0601407C);
    arg0->actionFunc = func_809D345C;
    arg0->unk_1A8 = temp_f6;
}

void func_809D345C(Boss01 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_164;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    if (func_801378B8(temp_a0, this->unk_1A8) != 0) {
        func_809D1EA4(this, globalCtx, 0x64);
    }
    this->unk_1B9 = 1;
}

void func_809D34D4(Boss01 *arg0, GlobalContext *arg1) {
    Boss01 *temp_a3;
    f32 temp_a2;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_158;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x164, &D_06015A30, temp_a2);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06015A30);
    arg0->actionFunc = func_809D3530;
    arg0->unk_1A8 = temp_f6;
}

void func_809D3530(Boss01 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_164;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    if (func_801378B8(temp_a0, this->unk_1A8) != 0) {
        func_809D1EA4(this, globalCtx, 0x64);
    }
    this->unk_1B9 = 1;
}

void func_809D35A8(Actor *arg0, GlobalContext *arg1, u8 arg2) {
    void (*sp1C)(Boss01 *, f32);
    Actor *temp_a3;
    f32 temp_f6;

    temp_a3 = arg0;
    if (func_809D365C != temp_a3->unk_464) {
        temp_a3->unk_14E = 0x14;
        arg0 = temp_a3;
        sp1C = func_809D365C;
        SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x164, &D_0600FDEC, 0.0f);
        temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600FDEC);
        arg0->unk_464 = func_809D365C;
        arg0->unk_1A8 = temp_f6;
        return;
    }
    if ((arg2 & 0xFF) == 0xE) {
        if ((s32) temp_a3->unk_14E >= 6) {
            temp_a3->unk_1BE = 0x14;
            return;
        }
        temp_a3->unk_14E = 0x14;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_809D365C(Boss01 *arg0, f32 arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x164;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ApproachZeroF(arg0 + 0x70, 1.0f, 1.0f);
    if (func_801378B8(temp_a0, arg0->unk_1A8) != 0) {
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06010980, arg0->unk_158);
        arg0->unk_1A8 = 1000.0f;
    }
    if (arg0->unk_14E == 0) {
        func_809D2A44((bitwise f32) arg0, arg1, NULL);
    }
    func_809D0AA4(arg0, (bitwise GlobalContext *) arg1, 1);
}

void func_809D370C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_t9;
    u8 temp_v0_4;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    s32 phi_v0;
    s32 phi_v0_2;
    void *phi_v1;
    s32 phi_v0_3;

    temp_a2 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk_564->unk_16 & 2) != 0) {
        arg0->unk_1BC = 5;
        if ((arg0->unk_15C == 0) && (*arg0->unk_564->unk_24 == 0x2000000)) {
            Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 3, (s16) 4);
            Audio_PlayActorSound2(arg0, 0x1806U);
            arg0->unk_15C = 5;
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    if (arg0->unk_15C == 0) {
        do {
            temp_v1 = arg0->unk_484 + phi_v0;
            temp_a0 = temp_v1->unk_15;
            temp_v0 = phi_v0 + 0x40;
            phi_v0 = temp_v0;
            if ((temp_a0 & 2) != 0) {
                temp_v1->unk_15 = (u8) (temp_a0 & ~2);
                temp_a2->unk_B80 = 15.0f;
                temp_a2->unk_B84 = (s16) arg0->yawTowardsPlayer;
            }
        } while (temp_v0 < 0xC0);
        do {
            temp_v1_2 = arg0->unk_8A4 + phi_v0_2;
            temp_a0_2 = temp_v1_2->unk_15;
            temp_v0_2 = phi_v0_2 + 0x40;
            phi_v0_2 = temp_v0_2;
            if ((temp_a0_2 & 2) != 0) {
                temp_v1_2->unk_15 = (u8) (temp_a0_2 & ~2);
                temp_a2->unk_B80 = 20.0f;
                temp_a2->unk_B84 = (s16) arg0->yawTowardsPlayer;
            }
        } while (temp_v0_2 < 0x80);
        phi_v1 = arg0->unk_5C4;
loop_14:
        temp_a0_3 = phi_v1->unk_16;
        temp_v0_3 = phi_v0_3 + 0x40;
        phi_v0_3 = temp_v0_3;
        if ((temp_a0_3 & 2) != 0) {
            phi_v1->unk_16 = (u8) (temp_a0_3 & ~2);
            temp_t9 = arg0->colChkInfo.damageEffect;
            switch (temp_t9) {
            case 3:
                arg0->unk_AD9 = 0xA;
            case 1:
block_22:
                func_809D441C(arg0, arg1, 0x2C0);
                arg0->unk_15C = 0xF;
                Audio_PlayActorSound2(arg0, 0x389EU);
                arg0->unk_1BB = 0;
                return;
            case 2:
                arg0->unk_AD9 = 1;
            default:
block_23:
                D_809D8A18->unk_148 = 0;
                temp_v0_4 = arg0->colChkInfo.damageEffect;
                if (temp_v0_4 == 1) {
                    func_809D441C(arg0, arg1, 0xF);
                    arg0->unk_15C = 0xF;
                } else if (temp_v0_4 == 0xF) {
                    func_809D2588(arg0, arg1, 0xF);
                    func_8019F1C0(&D_809D8A40, 0x3809U);
                    arg0->unk_15C = 0xF;
                } else {
                    arg0->unk_15E = 0xF;
                    arg0->colChkInfo.health -= arg0->colChkInfo.damage;
                    arg0->unk_15C = 5;
                    if ((s32) (s8) arg0->colChkInfo.health <= 0) {
                        func_809D3C10(arg0, arg1, 0xF);
                        Audio_PlayActorSound2(arg0, 0x380BU);
                        Enemy_StartFinishingBlow(arg1, arg0);
                    } else {
                        func_809D35A8(arg0, arg1, arg0->colChkInfo.damageEffect);
                        func_8019F1C0(&D_809D8A40, 0x3809U);
                    }
                }
                arg0->unk_1BB = 0;
                return;
            case 4:
                arg0->unk_AD9 = 0x14;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                goto block_23;
            case 11:
                arg0->unk_AD9 = 0x28;
                goto block_22;
            case 12:
                arg0->unk_AD9 = 0x1E;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 3, (s16) 4);
                goto block_23;
            }
        } else {
            phi_v1 += 0x40;
            if (temp_v0_3 == 0x2C0) {
                /* Duplicate return node #32. Try simplifying control flow for better match */
                return;
            }
            goto loop_14;
        }
    }
}

void func_809D3A7C(Boss01 *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    f32 temp_f6;

    temp_a0 = arg0 + 0x164;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06012B70, -5.0f);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06012B70);
    arg0->actionFunc = func_809D3ADC;
    arg0->unk_9DC = 0;
    arg0->unk_1A8 = temp_f6;
}

void func_809D3ADC(Boss01 *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_164;
    this->unk_9DC += 1;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Audio_PlayActorSound2((Actor *) this, 0x3017U);
    if (func_801378B8(temp_a0, this->unk_1A8) != 0) {
        this->unk_164.animCurrentFrame = this->unk_1A8 - 20.0f;
    }
    if ((u32) this->unk_9DC >= 0x1EU) {
        D_809D8A18->world.pos.x = this->unk_928;
        D_809D8A18->world.pos.y = this->unk_92C;
        D_809D8A18->world.pos.z = this->unk_930;
        D_809D8A18->world.rot.y = this->actor.world.rot.y;
        if (this->unk_9DC == 0x1E) {
            D_809D8A18->unk_148 = 0x64;
            Audio_PlayActorSound2((Actor *) this, 0x484FU);
        }
    }
    Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 5, 0x500);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    if ((u32) this->unk_9DC >= 0x83U) {
        func_809D1EA4(this, globalCtx, 0xA);
    }
}

void func_809D3C10(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f6;

    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x164, &D_060124CC, arg0->unk_154);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060124CC);
    arg0->unk_464 = func_809D3CD0;
    arg0->unk_1A8 = temp_f6;
    Audio_PlayActorSound2(arg0, 0x38AFU);
    arg0->flags &= -2;
    arg0->unk_1BE = 0x3E8;
    arg0->unk_9DC = 0;
    arg0->unk_9E0 = 0;
    func_801A89A8(0x100100FF);
    D_809D8A18->unk_144 = 0xFA;
    func_800BC154(arg1, arg1 + 0x1CA0, D_809D8A18, 9U);
}

void func_809D3CD0(Boss01 *this, GlobalContext *globalCtx) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    Camera *spA8;
    s16 spA4;
    f32 sp9C;
    ? sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s16 sp8A;
    f32 sp70;
    ? sp6C;
    CutsceneContext *sp60;
    f32 *sp5C;
    f32 *sp58;
    ? *temp_v0_3;
    Actor *temp_a0_3;
    CutsceneContext *temp_v0_2;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 temp_f12;
    f32 temp_f14;
    s16 temp_s0;
    s16 temp_v0;
    u32 phi_v1;
    s16 phi_s0;
    u32 phi_v1_2;
    f32 *phi_v1_3;
    ? *phi_v0;

    spA8 = Play_GetCamera(globalCtx, 0);
    this->unk_1BE = 0x3E8;
    this->actor.flags &= -2;
    SkelAnime_FrameUpdateMatrix(&this->unk_164);
    this->unk_9DC += 1;
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    temp_v0 = this->unk_9E0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else {
                    this->actor.world.pos.y = 5000.0f;
                }
            } else {
                goto block_13;
            }
        } else {
            goto block_7;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, (Actor *) this, 1U);
        this->unk_9E2 = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unk_9E2, 7);
        this->unk_9DC = 0;
        this->unk_9E0 = 1;
        this->unk_9E4 = spA8->eye.x;
        this->unk_9E8 = spA8->eye.y;
        this->unk_9EC = spA8->eye.z;
        this->unk_9F0 = spA8->at.x;
        this->unk_9F4 = spA8->at.y;
        this->unk_9F8 = spA8->at.z;
        this->unk_A14 = Math_Acot2F(this->unk_9EC - this->actor.world.pos.z, this->unk_9E4 - this->actor.world.pos.x);
        this->unk_A18 = -0.5f;
block_7:
        if ((u32) this->unk_9DC < 0xFU) {
            Math_ApproachF((f32 *) &this->actor.world, 0.0f, 0.1f, 5.0f);
            Math_ApproachF(&this->actor.world.pos.z, 0.0f, 0.1f, 5.0f);
        }
        phi_v1 = this->unk_9DC;
        if (this->unk_9DC == 0x46) {
            func_801A89A8(0x8021);
            phi_v1 = this->unk_9DC;
        }
        if (phi_v1 == 0x47) {
            Audio_PlayActorSound2((Actor *) this, 0x380EU);
            this->unk_9E0 = 2;
            this->unk_9DC = 0;
        }
block_13:
        Math_ApproachF(&this->unk_A18, 1.3f, 0.1f, 0.008f);
        spB8 = 30.0f;
        spB4 = 0.0f;
        spBC = 300.0f;
        SysMatrix_InsertYRotation_f(this->unk_A14 + this->unk_A18, 0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spB4, &this->unk_A08);
        temp_a0 = &this->unk_9E4;
        this->unk_A08.x += this->unk_458;
        this->unk_A08.y += this->unk_45C;
        this->unk_A08.z += this->unk_460;
        sp5C = temp_a0;
        Math_ApproachF(temp_a0, this->unk_A08.x, 0.1f, 40.0f);
        Math_ApproachF(&this->unk_9E8, this->unk_A08.y, 0.1f, 40.0f);
        Math_ApproachF(&this->unk_9EC, this->unk_A08.z, 0.1f, 40.0f);
        temp_a0_2 = &this->unk_9F0;
        sp58 = temp_a0_2;
        Math_ApproachF(temp_a0_2, this->unk_458, 0.1f, 70.0f);
        Math_ApproachF(&this->unk_9F4, this->unk_45C + 50.0f, 0.1f, 70.0f);
        Math_ApproachF(&this->unk_9F8, this->unk_460, 0.1f, 70.0f);
        if ((u32) this->unk_9DC >= 0x47U) {
            sp98.unk_0 = (f32) D_801D15B0.x;
            sp98.unk_4 = (f32) D_801D15B0.y;
            sp98.unk_8 = (f32) D_801D15B0.z;
            sp9C = 0.03f;
            if ((u32) this->unk_9DC >= 0x51U) {
                Math_ApproachZeroF(&this->actor.scale.y, 0.1f, this->unk_A20 * 0.00075f);
                Math_ApproachF(&this->unk_A20, 1.0f, 1.0f, 0.01f);
            }
            if (this->unk_9DC >= 0x79U) {
                spA4 = 1;
            } else {
                spA4 = 2;
            }
            phi_s0 = 0;
            if ((s32) spA4 > 0) {
                do {
                    sp8A = (s16) (s32) Rand_ZeroFloat(14.9f);
                    temp_v0_2 = this + (sp8A * 0xC);
                    sp8C = randPlusMinusPoint5Scaled(40.0f) + temp_v0_2->unk_928;
                    sp60 = temp_v0_2;
                    sp90 = temp_v0_2->unk_92C - 10.0f;
                    sp94 = randPlusMinusPoint5Scaled(40.0f) + temp_v0_2->unk_930;
                    EffectSsKFire_Spawn(globalCtx, &sp8C, &D_801D15B0, &sp98, (s32) (Rand_ZeroFloat(30.0f) + 30.0f), 0);
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                } while ((s32) temp_s0 < (s32) spA4);
            }
            Audio_PlayActorSound2((Actor *) this, 0x321FU);
        }
        phi_v1_2 = this->unk_9DC;
        if (this->unk_9DC == 0x47) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x3A, this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            phi_v1_2 = this->unk_9DC;
        }
        if (phi_v1_2 == 0xB4) {
            temp_a0_3 = globalCtx->actorCtx.actorList[2].first;
            sp60 = &globalCtx->csCtx;
            phi_v1_3 = D_809D7D24;
            phi_v0 = &D_809D7D38;
loop_26:
            temp_f12 = *phi_v1_3;
            temp_v0_3 = phi_v0 + 4;
            temp_f14 = temp_v0_3->unk_-4;
            phi_v0 = temp_v0_3;
            if (((fabsf(temp_f12 - this->actor.focus.pos.x) < 220.0f) && (fabsf(temp_f14 - this->actor.focus.pos.z) < 220.0f)) || ((fabsf(temp_f12 - temp_a0_3->world.pos.x) < 220.0f) && (fabsf(temp_f14 - temp_a0_3->world.pos.z) < 220.0f))) {
                phi_v1_3 += 4;
                if (temp_v0_3 != &D_809D7D4C) {
                    goto loop_26;
                }
            }
            Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x38, temp_f12, 0.0f, temp_f14, (s16) 0, (s16) 0, (s16) 0, 1);
            this->unk_9E0 = 3;
            spA8->eye.x = sp5C->unk_0;
            spA8->eye.y = sp5C->unk_4;
            spA8->eye.z = sp5C->unk_8;
            spA8->eyeNext.x = sp5C->unk_0;
            spA8->eyeNext.y = sp5C->unk_4;
            spA8->eyeNext.z = sp5C->unk_8;
            spA8->at.x = sp58->unk_0;
            spA8->at.y = sp58->unk_4;
            spA8->at.z = sp58->unk_8;
            func_80169AFC(globalCtx, this->unk_9E2, 0);
            this->unk_9E2 = 0;
            func_800EA0EC(globalCtx, sp60);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            this->actor.flags &= -2;
        }
    }
    if (this->unk_9E2 != 0) {
        sp58 = &this->unk_9F0;
        sp5C = &this->unk_9E4;
        this->unk_A24 = Math_CosS((s16) (globalCtx->gameplayFrames << 0xF)) * this->unk_A28;
        Math_ApproachZeroF(&this->unk_A28, 1.0f, 0.75f);
        sp6C.unk_0 = (f32) sp58->unk_0;
        sp6C.unk_4 = (f32) sp58->unk_4;
        sp6C.unk_8 = (f32) sp58->unk_8;
        sp70 += this->unk_A24;
        Play_CameraSetAtEye(globalCtx, this->unk_9E2, (Vec3f *) &sp6C, (Vec3f *) sp5C);
    }
}

void func_809D441C(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_464 = func_809D4464;
    arg0->unk_14E = 0x28;
    func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
}

void func_809D4464(Boss01 *this, GlobalContext *globalCtx) {
    f32 *temp_a0;

    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_ApproachZeroF(temp_a0, 1.0f, 1.0f);
    if (this->unk_14E == 0) {
        func_809D1EA4(this, globalCtx, 0x64, this);
    }
}

void func_809D44C0(Boss01 *arg0, GlobalContext *arg1) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 *temp_s4;
    f32 *temp_s5;
    s32 temp_s0;
    void *temp_v0;
    s32 phi_s0;

    Audio_PlaySoundAtPosition(arg1, arg0 + 0x928, 0x1E, 0x28CBU);
    temp_s5 = &sp80;
    temp_s4 = &sp8C;
    phi_s0 = 0;
    do {
        sp80 = randPlusMinusPoint5Scaled(7.0f);
        sp88 = randPlusMinusPoint5Scaled(7.0f);
        sp84 = Rand_ZeroFloat(6.0f) + 4.0f;
        temp_v0 = arg0 + ((phi_s0 / 2) * 0xC);
        sp8C = temp_v0->unk_928 + sp80;
        sp90 = temp_v0->unk_92C + sp84;
        sp94 = temp_v0->unk_930 + sp88;
        EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_s4, Rand_ZeroFloat(1.0f) + 1.5f, (Vec3f *) temp_s5, &D_809D7D54, &D_809D7D4C, &D_809D7D50, 0x1E);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x1E);
}

s32 func_809D4668(Boss01 *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_v1;
    s32 phi_a0;
    s32 phi_v0;

    temp_v1 = arg0->actor.yawTowardsPlayer;
    temp_a2 = temp_v1 - arg0->actor.shape.rot.y;
    phi_a0 = (s32) temp_a2;
    if ((s32) temp_a2 < 0) {
        phi_a0 = -(s32) temp_a2;
    }
    if (phi_a0 < 0x3000) {
        temp_a0 = temp_v1 - (arg1->actorCtx.actorList[2].first->unk_BE + 0x8000);
        phi_v0 = (s32) temp_a0;
        if ((s32) temp_a0 < 0) {
            phi_v0 = -(s32) temp_a0;
        }
        if (phi_v0 < 0x3000) {
            return 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void Boss01_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp70;
    s16 sp62;
    s16 sp60;
    CollisionCheckContext *sp48;
    ColliderJntSph *sp44;
    ColliderJntSph *sp40;
    Actor *temp_v0_21;
    ColliderJntSph *temp_a2;
    ColliderJntSph *temp_a2_2;
    ColliderJntSphElement *temp_v0_13;
    ColliderJntSphElement *temp_v0_14;
    ColliderJntSphElement *temp_v0_15;
    ColliderJntSphElement *temp_v0_6;
    ColliderJntSphElement *temp_v0_7;
    ColliderJntSphElement *temp_v0_8;
    CollisionCheckContext *temp_a1;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_23;
    s16 temp_v0_25;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_t7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    u8 temp_t0_3;
    u8 temp_v0_20;
    u8 temp_v0_22;
    u8 temp_v0_24;
    u8 temp_v0_5;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1;
    void *temp_t3;
    void *temp_t5;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t8;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_9;
    Boss01 *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v0_2;
    s32 phi_v1_4;
    s16 phi_a1;
    s16 phi_a1_2;
    Boss01 *this = (Boss01 *) thisx;

    sp70 = globalCtx->actorCtx.actorList[2].first;
    if (this->actor.params == 0x23) {
        if (gGameInfo->data[1311] == 0) {
            temp_v0 = this->unk_14E;
            if (temp_v0 != 0) {
                this->unk_14E = temp_v0 - 1;
            }
            this->actionFunc(this, globalCtx);
            return;
        }
        /* Duplicate return node #92. Try simplifying control flow for better match */
        return;
    }
    globalCtx = globalCtx;
    Math_Vec3f_Copy(&D_809D8A40, &this->actor.projectedPos);
    globalCtx->envCtx.unk_C1 = 0;
    globalCtx->envCtx.unk_C2 = 1;
    Math_ApproachZeroF(&globalCtx->envCtx.unk_DC, 1.0f, 0.03f);
    this->unk_144 += 1;
    phi_v0 = this;
    phi_v1 = 0;
    phi_v1_4 = 0;
    if (gGameInfo->data[1311] == 0) {
        temp_t7 = this->unk_148 + 1;
        this->unk_148 = temp_t7;
        if (temp_t7 == 0x320) {
            D_809D8A14->actor.hintId = 0x62;
        }
        this->unk_1BB = 0;
        this->unk_1BA = 0;
        this->unk_160 = 0;
        this->unk_1C0 = 0;
        this->unk_1B9 = 0;
        this->unk_1B8 = 0;
        do {
            temp_a0 = phi_v0->unk_14E;
            temp_v1 = phi_v1 + 2;
            phi_v1 = temp_v1;
            if (temp_a0 != 0) {
                phi_v0->unk_14E = temp_a0 - 1;
            }
            phi_v0 += 2;
        } while (temp_v1 != 6);
        temp_v0_2 = this->unk_15C;
        if (temp_v0_2 != 0) {
            this->unk_15C = temp_v0_2 - 1;
        }
        temp_v0_3 = this->unk_15E;
        if (temp_v0_3 != 0) {
            this->unk_15E = temp_v0_3 - 1;
        }
        this->actor.flags |= 1;
        this->actionFunc(this, globalCtx);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        this->actor.world.pos.x += this->unk_1C4;
        this->actor.world.pos.z += this->unk_1C8;
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 150.0f, 100.0f, 5U);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Math_ApproachZeroF(&this->unk_1C4, 1.0f, 1.0f);
        Math_ApproachZeroF(&this->unk_1C8, 1.0f, 1.0f);
    }
    temp_v0_4 = this->unk_1BE;
    this->unk_BC = (unaligned s32) this->unk_30;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
    if (temp_v0_4 == 0) {
        func_809D370C((Actor *) this, globalCtx);
        temp_v0_5 = this->unk_1BC;
        if (temp_v0_5 == 0) {
            temp_a2 = &this->unk_5A8;
            temp_a1 = &globalCtx->colChkCtx;
            sp48 = temp_a1;
            sp44 = temp_a2;
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        } else {
            temp_v0_6 = this->unk_5A8.elements;
            this->unk_1BC = temp_v0_5 - 1;
            temp_v0_6->info.bumperFlags &= 0xFFFD;
            temp_v0_7 = this->unk_5A8.elements;
            temp_v0_7->unk_56 = (u8) (temp_v0_7->unk_56 & 0xFFFD);
            temp_v0_8 = this->unk_5A8.elements;
            temp_v0_8->unk_96 = (u8) (temp_v0_8->unk_96 & 0xFFFD);
            phi_v1_2 = 0xC0;
            do {
                temp_v0_9 = this->unk_5A8.elements + phi_v1_2;
                temp_v0_9->unk_16 = (u8) (temp_v0_9->unk_16 & ~2);
                temp_v0_10 = this->unk_5A8.elements + phi_v1_2;
                temp_v0_10->unk_56 = (u8) (temp_v0_10->unk_56 & ~2);
                temp_v0_11 = this->unk_5A8.elements + phi_v1_2;
                temp_v0_11->unk_96 = (u8) (temp_v0_11->unk_96 & ~2);
                temp_v0_12 = this->unk_5A8.elements + phi_v1_2;
                temp_v1_2 = phi_v1_2 + 0x100;
                temp_v0_12->unk_D6 = (u8) (temp_v0_12->unk_D6 & ~2);
                phi_v1_2 = temp_v1_2;
            } while (temp_v1_2 != 0x2C0);
            sp44 = &this->unk_5A8;
            sp48 = &globalCtx->colChkCtx;
        }
        temp_a2_2 = &this->unk_548;
        if (this->unk_1BA != 0) {
            sp40 = temp_a2_2;
            CollisionCheck_SetAC(globalCtx, sp48, (Collider *) temp_a2_2);
            CollisionCheck_SetOC(globalCtx, sp48, (Collider *) temp_a2_2);
            CollisionCheck_SetAC(globalCtx, sp48, (Collider *) &this->unk_468);
        }
        if (this->unk_1B8 != 0) {
            CollisionCheck_SetAT(globalCtx, sp48, (Collider *) &this->unk_468);
        }
        if (this->unk_1B9 != 0) {
            CollisionCheck_SetAT(globalCtx, sp48, (Collider *) &this->unk_888);
        }
    } else {
        temp_v0_13 = this->unk_5A8.elements;
        this->unk_1BE = temp_v0_4 - 1;
        temp_v0_13->info.bumperFlags &= 0xFFFD;
        temp_v0_14 = this->unk_5A8.elements;
        temp_v0_14->unk_56 = (u8) (temp_v0_14->unk_56 & 0xFFFD);
        temp_v0_15 = this->unk_5A8.elements;
        temp_v0_15->unk_96 = (u8) (temp_v0_15->unk_96 & 0xFFFD);
        phi_v1_3 = 0xC0;
        do {
            temp_v0_16 = this->unk_5A8.elements + phi_v1_3;
            temp_v0_16->unk_16 = (u8) (temp_v0_16->unk_16 & ~2);
            temp_v0_17 = this->unk_5A8.elements + phi_v1_3;
            temp_v0_17->unk_56 = (u8) (temp_v0_17->unk_56 & ~2);
            temp_v0_18 = this->unk_5A8.elements + phi_v1_3;
            temp_v0_18->unk_96 = (u8) (temp_v0_18->unk_96 & ~2);
            temp_v0_19 = this->unk_5A8.elements + phi_v1_3;
            temp_v1_3 = phi_v1_3 + 0x100;
            temp_v0_19->unk_D6 = (u8) (temp_v0_19->unk_D6 & ~2);
            phi_v1_3 = temp_v1_3;
        } while (temp_v1_3 != 0x2C0);
        sp44 = &this->unk_5A8;
        sp48 = &globalCtx->colChkCtx;
    }
    CollisionCheck_SetOC(globalCtx, sp48, (Collider *) sp44);
    if ((this->unk_1BB != 0) && ((sp70->unk_D57 != 0) || ((sp70->unk_ADC != 0) && (this->actor.xzDistToPlayer <= 120.0f))) && (func_809D4668(this, globalCtx) != 0)) {
        if ((Rand_ZeroOne() < 0.25f) && (func_809D3374 != this->actionFunc)) {
            func_809D2A44((bitwise f32) this, (bitwise f32) globalCtx, NULL);
            this->unk_1BE = 0xA;
        } else if ((sp70->unk_ADC != 0) && (this->actor.xzDistToPlayer <= 120.0f)) {
            func_809D32B4(this, globalCtx, 1);
        } else {
            func_809D32B4(this, globalCtx, 0);
        }
    }
    if (this->unk_1BB != 0) {
        func_809D119C(this, globalCtx);
    }
    temp_v0_20 = this->unk_1C0;
    if (((this->unk_144 & (temp_v0_20 - 1)) == 0) && (temp_v0_20 != 0)) {
        phi_v0_2 = 0xA;
        if (func_809D26B8 == this->actionFunc) {
            phi_v0_2 = 4;
        }
        temp_v0_21 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x129, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (s32) this->actor.world.rot.y, (s16) phi_v0_2, 0x23);
        if (temp_v0_21 != 0) {
            do {
                temp_t0 = this->unk_164.limbDrawTbl + phi_v1_4;
                temp_t8 = temp_v0_21->unk_184 + phi_v1_4;
                temp_t8->unk_0 = (unaligned s32) temp_t0->unk_0;
                temp_t8->unk_4 = (u16) temp_t0->unk_4;
                temp_t6 = this->unk_164.limbDrawTbl + phi_v1_4;
                temp_t5 = temp_v0_21->unk_184 + phi_v1_4;
                temp_t5->unk_6 = (unaligned s32) temp_t6->unk_6;
                temp_t5->unk_A = (u16) temp_t6->unk_A;
                temp_t3 = this->unk_164.limbDrawTbl + phi_v1_4;
                temp_t0_2 = temp_v0_21->unk_184 + phi_v1_4;
                temp_t0_2->unk_C = (unaligned s32) temp_t3->unk_C;
                temp_t0_2->unk_10 = (u16) temp_t3->unk_10;
                temp_t1 = this->unk_164.limbDrawTbl + phi_v1_4;
                temp_t6_2 = temp_v0_21->unk_184 + phi_v1_4;
                temp_v1_4 = phi_v1_4 + 0x18;
                temp_t6_2->unk_12 = (unaligned s32) temp_t1->unk_12;
                temp_t6_2->unk_16 = (u16) temp_t1->unk_16;
                phi_v1_4 = temp_v1_4;
            } while (temp_v1_4 != 0x138);
        }
    }
    func_809D6E7C(this, globalCtx);
    temp_v0_22 = D_809D8A38;
    temp_t0_3 = temp_v0_22 - 1;
    if (temp_v0_22 != 0) {
        D_809D8A38 = temp_t0_3;
        if ((temp_t0_3 & 0xFF) == 0) {
            func_801A89A8(0x801B);
        }
    }
    phi_a1 = 0;
    phi_a1_2 = 0;
    if (this->unk_163 != 0) {
        temp_a1_2 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        phi_a1 = temp_a1_2;
        if (((s32) temp_a1_2 >= 0x3801) || ((s32) temp_a1_2 < -0x3800)) {

        }
        temp_f2 = sp70->world.pos.x - this->actor.focus.pos.x;
        sp62 = phi_a1;
        temp_f16 = sp70->world.pos.z - this->actor.focus.pos.z;
        sp60 = Math_Atan2S((f32) gGameInfo->data[1284] + ((sp70->world.pos.y + 25.0f) - this->actor.focus.pos.y), sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)));
        this->unk_163 = 0;
        phi_a1_2 = phi_a1;
    } else {
        sp60 = 0;
    }
    Math_ApproachS(&this->unk_1CC, phi_a1_2, 3, 0x2000);
    Math_ApproachS(&this->unk_1CE, sp60, 3, 0x2000);
    temp_v0_23 = this->unk_ADA;
    if (temp_v0_23 != 0) {
        this->unk_ADA = temp_v0_23 - 1;
    }
    temp_v0_24 = this->unk_AD9;
    switch (temp_v0_24) {
    case 0:
        this->unk_AD8 = 0;
        this->unk_ADA = 0;
        this->unk_AD4 = 0.0f;
        return;
    case 1:
        this->unk_AD8 = 0;
        this->unk_ADA = 0x28;
        this->unk_AD9 = temp_v0_24 + 1;
        this->unk_AD4 = 1.0f;
        this->unk_ACC = 0.0f;
        func_800BCB70((Actor *) this, 0x4000, 0x78, 0, (s16) 0x3C);
        /* fallthrough */
    case 2:
        if (this->unk_ADA == 0) {
            Math_ApproachZeroF(&this->unk_AD4, 1.0f, 0.02f);
            if (this->unk_AD4 == 0.0f) {
                this->unk_AD9 = 0;
                return;
            }
        default:
            return;
        }
        Math_ApproachF(&this->unk_ACC, 1.0f, 0.1f, 0.5f);
        return;
    case 10:
        this->unk_AD8 = 0xB;
        this->unk_ADA = 0x28;
        this->unk_AD9 = temp_v0_24 + 1;
        this->unk_AD4 = 1.0f;
        this->unk_ACC = 0.0f;
        this->unk_AD0 = 1.0f;
        /* fallthrough */
    case 11:
        temp_v0_25 = this->unk_ADA;
        if (temp_v0_25 == 0) {
            func_809D44C0(this, globalCtx);
            this->unk_AD9 = 0;
            return;
        }
        if (temp_v0_25 == 0x32) {
            this->unk_AD8 = 0xA;
        }
        Math_ApproachF(&this->unk_ACC, 1.0f, 1.0f, 0.08f);
        Math_ApproachF(&this->unk_AD0, 1.0f, 0.05f, 0.05f);
        return;
    case 20:
        this->unk_AD8 = 0x14;
        this->unk_ADA = 0x28;
        this->unk_ACC = 1.0f;
block_82:
        this->unk_AD9 = 0x15;
        this->unk_AD4 = 1.0f;
    case 21:
        if (this->unk_ADA == 0) {
            Math_ApproachZeroF(&this->unk_ACC, 1.0f, 0.03f);
            if (this->unk_ACC == 0.0f) {
                this->unk_AD9 = 0;
block_91:
                this->unk_AD4 = 0.0f;
            }
            /* Duplicate return node #92. Try simplifying control flow for better match */
            return;
        }
        Math_ApproachF(&this->unk_ACC, 1.5f, 0.5f, 0.5f);
        return;
    case 30:
        this->unk_AD8 = 0x15;
        this->unk_ADA = 0x28;
        this->unk_ACC = 3.0f;
        goto block_82;
    case 40:
        this->unk_AD8 = 0x1E;
        this->unk_ADA = 0x32;
        this->unk_AD4 = 1.0f;
        this->unk_AD9 = temp_v0_24 + 1;
        this->unk_ACC = ((f32) gGameInfo->data[1266] * 0.1f) + 1.0f;
        /* fallthrough */
    case 41:
        if (this->unk_ADA == 0) {
            Math_ApproachZeroF(&this->unk_ACC, 1.0f, 0.05f);
            if (this->unk_ACC == 0.0f) {
                this->unk_AD9 = 0;
                goto block_91;
            }
        }
        /* Duplicate return node #92. Try simplifying control flow for better match */
        return;
    }
}

void func_809D519C(Boss01 *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v1;
    GraphicsContext *temp_s6;
    f32 temp_f20;
    f32 temp_f6;
    s32 temp_s4;
    void *temp_s0;
    s32 phi_s4;
    f32 phi_f6;
    u8 *phi_s2;
    u8 *phi_s3;

    temp_s6 = arg1->unk_0;
    temp_s0 = Lib_SegmentedToVirtual(&D_0600C338);
    phi_s4 = 0;
    phi_s2 = D_809D7D60;
    phi_s3 = D_809D7D6C;
    do {
        temp_f6 = (f32) phi_s4;
        phi_f6 = temp_f6;
        if (phi_s4 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_f20 = phi_f6 * 3.1415927f;
        *(temp_s0 + (*phi_s2 * 0x10)) = (s16) (s32) (__cosf(temp_f20 / D_809D798C) * 200.0f);
        (temp_s0 + (*phi_s2 * 0x10))->unk_2 = 0;
        (temp_s0 + (*phi_s2 * 0x10))->unk_4 = (s16) (s32) (__sinf(temp_f20 / D_809D798C) * 200.0f);
        *(temp_s0 + (*phi_s3 * 0x10)) = (s16) (s32) (__cosf(temp_f20 / D_809D798C) * 100.0f);
        (temp_s0 + (*phi_s3 * 0x10))->unk_2 = 0;
        temp_s4 = phi_s4 + 1;
        (temp_s0 + (*phi_s3 * 0x10))->unk_4 = (s16) (s32) (__sinf(temp_f20 / D_809D798C) * 100.0f);
        phi_s4 = temp_s4;
        phi_s2 += 1;
        phi_s3 += 1;
    } while (temp_s4 != 0xB);
    temp_v0 = temp_s6->polyXlu.p;
    temp_s6->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v0->words.w1 = Gfx_TwoTexScroll(arg1->unk_0, 0, 0U, 0U, 0x20, 0x20, 1, arg1->unk_18840 * 0x12, 0U, 0x20, 0x20);
    temp_v0_2 = temp_s6->polyXlu.p;
    temp_s6->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE7000000;
    temp_v1 = temp_s6->polyXlu.p;
    temp_s6->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFA000000;
    temp_v1->words.w1 = ((u32) D_809D8A34 & 0xFF) | ~0xFF;
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x + D_809D8A1C, arg0->actor.world.pos.y + D_809D8A20, arg0->actor.world.pos.z + D_809D8A24, 0);
    SysMatrix_InsertYRotation_f((f32) arg0->actor.shape.rot.y * 0.0000958738f, 1);
    SysMatrix_RotateStateAroundXAxis(D_809D8A28);
    SysMatrix_InsertZRotation_f(D_809D8A30, 1);
    SysMatrix_InsertYRotation_f(D_809D8A2C, 1);
    temp_v0_3 = temp_s6->polyXlu.p;
    temp_s6->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    temp_v0_3->words.w1 = Matrix_NewMtx(arg1->unk_0);
    temp_v0_4 = temp_s6->polyXlu.p;
    temp_s6->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_0600C498;
}

s32 func_809D5584(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x20) {
        arg4->x += arg5->unk_1CC;
        arg4->y += arg5->unk_1CE;
    }
    return 0;
}

void func_809D55CC(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s8 sp4F;
    ? sp40;
    GraphicsContext *sp3C;
    Gfx *sp2C;
    Gfx *sp24;
    s8 *sp1C;
    MtxF *sp18;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    MtxF *temp_a0_2;
    s8 *temp_t9;
    s8 temp_a3;
    s8 temp_a3_2;
    void *temp_v0;
    void *temp_v0_2;
    s32 phi_a1;

    if (arg1 == 0x20) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
    temp_a3 = *(&D_809D7E68 + arg1);
    phi_a1 = arg1;
    if ((s32) temp_a3 >= 0) {
        arg1 = arg1;
        SysMatrix_GetStateTranslation(arg4 + (temp_a3 * 0xC) + 0x928);
        phi_a1 = arg1;
    }
    temp_t9 = phi_a1 + &D_809D7D78;
    sp1C = temp_t9;
    temp_a3_2 = *temp_t9;
    if ((s32) temp_a3_2 >= 0) {
        sp4F = temp_a3_2;
        SysMatrix_MultiplyVector3fByState((temp_a3_2 * 0xC) + &D_809D7DB4, (Vec3f *) &sp40);
        func_809D089C(sp4F, arg4 + 0x5A8, &sp40);
    }
    if (sp1C == &D_809D7D7A) {
        SysMatrix_GetStateTranslation(arg4 + 0x458);
        if (arg4->unk_1B8 == 2) {
            SysMatrix_MultiplyVector3fByState(&D_809D7E5C, (Vec3f *) &sp40);
            func_809D089C(2, arg4 + 0x468, &sp40);
        }
    }
    if (sp1C == &D_809D7D97) {
        sp18 = arg4 + 0x468;
        SysMatrix_MultiplyVector3fByState(&D_809D7E44, (Vec3f *) &sp40);
        func_809D089C(0, sp18, &sp40);
        SysMatrix_MultiplyVector3fByState(&D_809D7E50, (Vec3f *) &sp40);
        func_809D089C(1, sp18, &sp40);
    }
    if (sp1C == &D_809D7D8F) {
        SysMatrix_MultiplyVector3fByState(&D_809D7E38, (Vec3f *) &sp40);
        func_809D089C(0, arg4 + 0x548, &sp40);
        func_809D089C(0, arg4 + 0x888, &sp40);
    }
    if (sp1C == &D_809D7D7F) {
        SysMatrix_GetStateTranslation(arg4 + 0x440);
    }
    if (sp1C == &D_809D7D84) {
        sp18 = arg4 + 0x888;
        SysMatrix_GetStateTranslation(arg4 + 0x44C);
        SysMatrix_GetStateTranslation((Vec3f *) &sp40);
        func_809D089C(1, sp18, &sp40);
    }
    if (sp1C == &D_809D7D98) {
        temp_a0 = *arg0;
        temp_v0 = temp_a0->polyXlu.p;
        temp_a0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = 0xFF0000FF;
        temp_v0_2 = temp_a0->polyXlu.p;
        temp_a0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xFF000000;
        temp_v0_2->words.w0 = 0xFB000000;
        sp3C = temp_a0;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(1470.0f, 400.0f, 450.0f, 1);
        Matrix_Scale(0.35f, 0.35f, 0.35f, 1);
        temp_a0_2 = arg0 + 0x187FC;
        sp18 = temp_a0_2;
        SysMatrix_NormalizeXYZ(temp_a0_2);
        temp_v0_3 = sp3C->polyXlu.p;
        sp3C->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp2C = temp_v0_3;
        sp2C->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_4 = sp3C->polyXlu.p;
        sp3C->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_0600C5E0;
        temp_v0_4->words.w0 = 0xDE000000;
        sp1C = &D_0600C5E0;
        SysMatrix_StatePop();
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(1470.0f, -360.0f, 450.0f, 1);
        Matrix_Scale(0.35f, 0.35f, 0.35f, 1);
        SysMatrix_NormalizeXYZ(temp_a0_2);
        temp_v0_5 = sp3C->polyXlu.p;
        sp3C->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp24 = temp_v0_5;
        sp24->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_6 = sp3C->polyXlu.p;
        sp3C->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = (u32) sp1C;
        SysMatrix_StatePop();
    }
}

void Boss01_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *temp_v1;
    GraphicsContext *temp_s2;
    GraphicsContext *temp_v0;
    Boss01 *this = (Boss01 *) thisx;

    temp_v0 = globalCtx->state.gfxCtx;
    temp_v1 = temp_v0->polyOpa.d - 0x1000;
    temp_v0->polyOpa.d = temp_v1;
    temp_s2 = globalCtx->state.gfxCtx;
    sp38 = temp_v1;
    func_809D089C(2, (MtxF *) &this->unk_468, &D_809D7EA0);
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    if ((this->unk_15E & 1) != 0) {
        temp_s2->polyOpa.p = Gfx_SetFog(temp_s2->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    SkelAnime_DrawSV(globalCtx, this->unk_164.skeleton, this->unk_164.limbDrawTbl, (s32) this->unk_164.dListCount, func_809D5584, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_809D55CC, (Actor *) this);
    temp_s2->polyOpa.p = func_801660B8(globalCtx, temp_s2->polyOpa.p);
    func_809D5FB4(sp38, this, globalCtx);
    func_809D606C(sp38, this, globalCtx);
    if (D_809D8A34 > 0.0f) {
        func_809D519C(this, (GraphicsContext **) globalCtx);
        Math_ApproachZeroF(&D_809D8A34, 1.0f, 50.0f);
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) (Vec3f *) &this->unk_928, 0xF, this->unk_ACC, this->unk_AD0, this->unk_AD4, (u8) (s32) this->unk_AD8);
    func_809D73D4(globalCtx);
}

void func_809D5B0C(Actor *this, GlobalContext *globalCtx) {
    Actor *sp34;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    sp34 = this->parent;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_s0->polyOpa.p = Gfx_SetFog(temp_s0->polyOpa.p, 0x32, 0, 0x28, 0xFF, 0x384, 0x44B);
    SkelAnime_DrawSV(globalCtx, sp34->unk_168, this->unk_184, (s32) sp34->unk_166, NULL, NULL, this);
    temp_s0->polyOpa.p = func_801660B8(globalCtx, temp_s0->polyOpa.p);
}

void func_809D5BC4(Boss01 *arg0, Gfx *arg1, f32 arg2) {
    s32 sp90;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    f32 sp68;
    u8 *sp60;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_f8;
    s32 temp_s2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_t1_5;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    u8 *temp_t0;
    u8 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    s32 phi_s2;
    s32 phi_t1;
    s32 phi_t4;
    Gfx *phi_a2;
    s32 *phi_a1;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_a0;
    s32 phi_t1_2;
    s32 *phi_a1_2;
    s32 phi_v0_2;
    s32 phi_v1_2;
    s32 phi_a0_2;
    s32 phi_t1_3;
    s32 *phi_a1_3;
    s32 phi_v0_3;
    s32 phi_v1_3;
    s32 phi_a0_3;
    s32 phi_t1_4;
    s32 *phi_a1_4;
    s32 phi_v0_4;
    s32 phi_v1_4;
    s32 phi_a0_4;
    s32 phi_t1_5;
    s32 phi_t0;
    s32 phi_t0_2;
    s32 phi_t0_3;
    s32 phi_t0_4;

    phi_s2 = 0;
    phi_t4 = 0xC;
    phi_a2 = arg1;
    phi_t1 = 0;
    phi_t4 = 0xC;
    do {
        if ((arg2 == 0.0f) || (temp_t1 = *(&D_809D7F30 + (phi_s2 * 4)), phi_t1 = temp_t1, phi_t1 = temp_t1, (temp_t1 >= 0))) {
            temp_t0 = phi_s2 + &D_809D7F6C;
            temp_v1 = arg0 + (phi_s2 * 0xC);
            if (arg2 > 0.0f) {
                temp_f0 = temp_v1->unk_928;
                temp_f2 = temp_v1->unk_92C;
                temp_f12 = temp_v1->unk_930;
                temp_v0 = arg0 + (phi_t1 * phi_t4);
                sp74 = (((temp_v0->unk_928 - temp_f0) * arg2) + temp_f0) - arg0->actor.world.pos.x;
                sp78 = ((((temp_v0->unk_92C - temp_f2) * arg2) + temp_f2) - arg0->actor.world.pos.y) + 76.0f + 30.0f + 30.0f + 100.0f;
                sp7C = (((temp_v0->unk_930 - temp_f12) * arg2) + temp_f12) - arg0->actor.world.pos.z;
            } else {
                sp74 = temp_v1->unk_928 - arg0->actor.world.pos.x;
                sp78 = (temp_v1->unk_92C - arg0->actor.world.pos.y) + 76.0f + 30.0f + 30.0f + 100.0f;
                sp7C = temp_v1->unk_930 - arg0->actor.world.pos.z;
            }
            arg1 = phi_a2;
            sp60 = temp_t0;
            sp90 = 0;
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp74, (Vec3f *) &sp68);
            temp_f0_2 = sp68 * 0.2f;
            temp_f2_2 = sp6C * 0.2f;
            temp_v0_2 = *temp_t0;
            temp_f8 = (s32) (temp_f0_2 + 32.0f);
            temp_t3 = (s32) temp_f2_2;
            sp6C = temp_f2_2;
            sp68 = temp_f0_2;
            temp_t3_2 = (temp_t3 << 6) & 0xFFFF;
            temp_t2 = temp_f8 & 0xFFFF;
            phi_t1_2 = 0;
            phi_t1_3 = 0;
            phi_t1_4 = 0;
            phi_t1_5 = 0;
            phi_a2 = arg1;
            if (temp_v0_2 == 2) {
                phi_a1 = D_809D7F00;
                phi_t0 = -0x180;
                do {
                    temp_a0 = *phi_a1;
                    temp_t1_2 = phi_t1_2 + 1;
                    temp_v1_2 = -temp_a0;
                    phi_v1 = temp_v1_2;
                    phi_t1_2 = temp_t1_2;
                    phi_a0 = temp_a0;
                    phi_t1 = temp_t1_2;
                    if (temp_v1_2 < temp_a0) {
                        phi_v0 = temp_t2 + temp_v1_2 + temp_t3_2 + phi_t0;
                        do {
                            temp_v1_3 = phi_v1 + 1;
                            phi_v1 = temp_v1_3;
                            if ((phi_v0 >= 0) && (phi_v0 < 0x1000)) {
                                *(arg1 + phi_v0) = 0xFF;
                                phi_a0 = *phi_a1;
                            }
                            phi_v0 += 1;
                        } while (temp_v1_3 < phi_a0);
                    }
                    phi_a1 += 4;
                    phi_t0 += 0x40;
                } while (temp_t1_2 != 0xC);
            } else {
                phi_t0_2 = -0x100;
                if (temp_v0_2 == 1) {
                    phi_a1_2 = D_809D7EE0;
                    do {
                        temp_a0_2 = *phi_a1_2;
                        temp_t1_3 = phi_t1_3 + 1;
                        temp_v1_4 = -temp_a0_2;
                        phi_v1_2 = temp_v1_4;
                        phi_t1_3 = temp_t1_3;
                        phi_a0_2 = temp_a0_2;
                        phi_t1 = temp_t1_3;
                        if (temp_v1_4 < temp_a0_2) {
                            phi_v0_2 = temp_t2 + temp_v1_4 + temp_t3_2 + phi_t0_2;
                            do {
                                temp_v1_5 = phi_v1_2 + 1;
                                phi_v1_2 = temp_v1_5;
                                if ((phi_v0_2 >= 0) && (phi_v0_2 < 0x1000)) {
                                    *(arg1 + phi_v0_2) = 0xFF;
                                    phi_a0_2 = *phi_a1_2;
                                }
                                phi_v0_2 += 1;
                            } while (temp_v1_5 < phi_a0_2);
                        }
                        phi_a1_2 += 4;
                        phi_t0_2 += 0x40;
                    } while (temp_t1_3 != 8);
                } else {
                    phi_t0_4 = -0x80;
                    if (temp_v0_2 == 0) {
                        phi_a1_3 = D_809D7EC4;
                        phi_t0_3 = -0xC0;
                        do {
                            temp_v0_3 = *phi_a1_3;
                            temp_t1_4 = phi_t1_4 + 1;
                            temp_v1_6 = -temp_v0_3;
                            temp_a0_3 = temp_v0_3 - 1;
                            phi_v1_3 = temp_v1_6;
                            phi_t1_4 = temp_t1_4;
                            phi_a0_3 = temp_a0_3;
                            phi_t1 = temp_t1_4;
                            if (temp_v1_6 < temp_a0_3) {
                                phi_v0_3 = temp_t2 + temp_v1_6 + temp_t3_2 + phi_t0_3;
                                do {
                                    temp_v1_7 = phi_v1_3 + 1;
                                    phi_v1_3 = temp_v1_7;
                                    if ((phi_v0_3 >= 0) && (phi_v0_3 < 0x1000)) {
                                        *(arg1 + phi_v0_3) = 0xFF;
                                        phi_a0_3 = *phi_a1_3 - 1;
                                    }
                                    phi_v0_3 += 1;
                                } while (temp_v1_7 < phi_a0_3);
                            }
                            phi_a1_3 += 4;
                            phi_t0_3 += 0x40;
                        } while (temp_t1_4 != 7);
                    } else {
                        phi_a1_4 = D_809D7EAC;
                        do {
                            temp_v0_4 = *phi_a1_4;
                            temp_t1_5 = phi_t1_5 + 1;
                            temp_v1_8 = -temp_v0_4;
                            temp_a0_4 = temp_v0_4 - 1;
                            phi_v1_4 = temp_v1_8;
                            phi_t1_5 = temp_t1_5;
                            phi_a0_4 = temp_a0_4;
                            phi_t1 = temp_t1_5;
                            if (temp_v1_8 < temp_a0_4) {
                                phi_v0_4 = temp_t2 + temp_v1_8 + temp_t3_2 + phi_t0_4;
                                do {
                                    temp_v1_9 = phi_v1_4 + 1;
                                    phi_v1_4 = temp_v1_9;
                                    if ((phi_v0_4 >= 0) && (phi_v0_4 < 0x1000)) {
                                        *(arg1 + phi_v0_4) = 0xFF;
                                        phi_a0_4 = *phi_a1_4 - 1;
                                    }
                                    phi_v0_4 += 1;
                                } while (temp_v1_9 < phi_a0_4);
                            }
                            phi_a1_4 += 4;
                            phi_t0_4 += 0x40;
                        } while (temp_t1_5 != 6);
                    }
                }
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xF);
}

void func_809D5FB4(Gfx *arg0, Boss01 *arg1, GlobalContext *arg2) {
    Gfx *temp_v0;
    s16 temp_s0;
    s16 temp_s0_2;
    Gfx *phi_v0;
    s16 phi_s0;
    s16 phi_s0_2;

    phi_v0 = arg0;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        temp_s0 = phi_s0 + 1;
        temp_v0 = phi_v0 + 4;
        temp_v0->unk_-4 = 0;
        phi_v0 = temp_v0;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 0x400);
    SysMatrix_SetStateXRotation(1.0f);
    do {
        func_809D5BC4(arg1, arg0, (f32) phi_s0_2 / 5.0f);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_2;
    } while ((s32) temp_s0_2 < 6);
}

void func_809D606C(u32 arg0, Boss01 *arg1, GlobalContext *arg2) {
    GraphicsContext *sp30;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    f32 temp_f0;
    f32 phi_f0;
    f32 phi_f0_2;

    temp_a0 = arg2->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_f0 = (400.0f - arg1->actor.world.pos.y) * 0.0025f;
    phi_f0 = temp_f0;
    if (temp_f0 < 0.0f) {
        phi_f0 = 0.0f;
    }
    phi_f0_2 = phi_f0;
    if (phi_f0 > 1.0f) {
        phi_f0_2 = 1.0f;
    }
    temp_v0 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = (s32) (phi_f0_2 * 80.0f) & 0xFF;
    temp_v0_2 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xFB000000;
    sp30 = temp_a0;
    SysMatrix_InsertTranslation(arg1->actor.world.pos.x, arg1->actor.floorHeight, arg1->actor.world.pos.z - 20.0f, 0);
    Matrix_Scale(1.65f, 1.0f, 1.65f, 1);
    temp_v0_3 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp30 = temp_a0;
    sp1C = temp_v0_3;
    sp1C->words.w1 = Matrix_NewMtx(arg2->state.gfxCtx);
    temp_v0_4 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_0600C7A8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFD900000;
    temp_v0_5->words.w1 = arg0;
    temp_v0_6 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0x7098260;
    temp_v0_6->words.w0 = 0xF5900000;
    temp_v0_7 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE6000000;
    temp_v0_8 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0x77FF100;
    temp_v0_8->words.w0 = 0xF3000000;
    temp_v0_9 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE7000000;
    temp_v0_10 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0x98260;
    temp_v0_10->words.w0 = 0xF5881000;
    temp_v0_11 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_11 + 8;
    temp_v0_11->words.w0 = 0xF2000000;
    temp_v0_11->words.w1 = 0xFC0FC;
    temp_v0_12 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v0_12 + 8;
    temp_v0_12->words.w1 = (u32) &D_0600C7C8;
    temp_v0_12->words.w0 = 0xDE000000;
}

void func_809D62D4(Boss01 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809D6314;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x164, &D_06022550, -5.0f);
}

void func_809D6314(Boss01 *this, GlobalContext *globalCtx) {
    f32 sp2C;
    Actor *sp28;
    s16 sp22;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *phi_v0;
    s16 phi_a2;
    Actor *phi_t0;
    f32 phi_f0;

    temp_v0 = globalCtx->actorCtx.actorList[3].first;
    phi_v0 = temp_v0;
    phi_a2 = 0x3E8;
    phi_t0 = globalCtx->actorCtx.actorList[2].first;
    phi_f0 = 3.0f;
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->unk_164.animPlaybackSpeed = 1.0f;
        if (temp_v0 != 0) {
loop_3:
            if (phi_v0->params == 1) {
                temp_v0_2 = phi_v0->next;
                phi_v0 = temp_v0_2;
                if (temp_v0_2 != 0) {
                    goto loop_3;
                }
            } else {
                this->unk_164.animPlaybackSpeed = 1.5f;
                phi_a2 = 0x7D0;
                phi_t0 = phi_v0;
                phi_f0 = 5.0f;
            }
        }
        sp22 = phi_a2;
        sp28 = phi_t0;
        sp2C = phi_f0;
        SkelAnime_FrameUpdateMatrix(&this->unk_164);
        Audio_PlayActorSound2((Actor *) this, 0x319DU);
        Math_ApproachF(&this->actor.speedXZ, phi_f0, 1.0f, 1.0f);
        Math_ApproachS(&this->actor.world.rot.y, Math_Atan2S(phi_t0->world.pos.x - this->actor.world.pos.x, phi_t0->world.pos.z - this->actor.world.pos.z), 5, sp22);
    }
}

void func_809D6424(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;

    temp_a1 = arg0;
    if ((s32) arg0->colChkInfo.health > 0) {
        arg0->unk_464 = func_809D6488;
        arg0->unk_14E = 0x1E;
        return;
    }
    arg0->unk_14E = 0xF;
    arg0 = arg0;
    Enemy_StartFinishingBlow(arg1, temp_a1);
    func_809D64E0(arg0, arg1);
}

void func_809D6488(Boss01 *this, GlobalContext *globalCtx) {
    f32 *temp_a0;

    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_ApproachZeroF(temp_a0, 1.0f, 1.0f);
    if (this->unk_14E == 0) {
        func_809D62D4(this, globalCtx);
    }
}

void func_809D64E0(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_464 = func_809D65E0;
    arg0->unk_1C8 = 0.0f;
    arg0->unk_1C4 = 0.0f;
    arg0->flags &= -2;
    arg0->unk_AC8 = 1.0f;
    arg0->speedXZ = -15.0f;
    arg0->velocity.y = 12.0f;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
}

void func_809D6540(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_464 = func_809D6588;
    arg0->unk_14E = 0x28;
    func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
}

void func_809D6588(Boss01 *this, GlobalContext *globalCtx) {
    f32 *temp_a0;

    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_ApproachZeroF(temp_a0, 1.0f, 1.0f);
    if (this->unk_14E == 0) {
        func_809D62D4(this, globalCtx);
    }
}

void func_809D65E0(Boss01 *this, GlobalContext *globalCtx) {
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x321FU);
        Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 2.0f);
        Math_ApproachZeroF(&this->actor.scale.y, 1.0f, 0.00075f);
        Math_ApproachF(&this->unk_AC4, 1.0f, 0.5f, 0.15f);
        if (this->actor.scale.y < 0.001f) {
            Math_ApproachZeroF(&this->unk_AC8, 1.0f, 0.05f);
            if (this->unk_AC8 < 0.01f) {
                Actor_MarkForDeath((Actor *) this);
                Item_DropCollectibleRandom(globalCtx, NULL, (Vec3f *) &this->actor.world, 0x60);
                D_809D8A10 += -1;
            }
        }
        Math_ApproachS((s16 *) &this->actor.shape, 0, 1, 0x800);
        return;
    }
    this->actor.shape.rot.x += -0x2000;
    this->actor.shape.rot.z += 0x1000;
}

void func_809D670C(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    s32 *sp2C;
    void *sp28;
    Boss01 *temp_v0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 *temp_v1;
    u8 temp_v0;

    sp28 = arg1->specialEffects;
    temp_v0 = arg0->unk_A3D;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_A3D = (u8) (temp_v0 & 0xFFFD);
        temp_v1 = arg0->unk_A68;
        if (arg0->unk_15C == 0) {
            sp2C = temp_v1;
            Matrix_RotateY(arg0->yawTowardsPlayer, 0U);
            if ((*temp_v1 & 0x300000) != 0) {
                arg0->unk_15C = 0xA;
                SysMatrix_GetStateTranslationAndScaledZ(-10.0f, (Vec3f *) &sp3C);
                arg0->unk_1C4 = sp3C;
                arg0->unk_1C8 = sp44;
            } else {
                arg0->unk_15C = 0xF;
                arg0->unk_15E = 0xF;
                SysMatrix_GetStateTranslationAndScaledZ(-20.0f, (Vec3f *) &sp3C);
                arg0->unk_1C4 = sp3C;
                arg0->unk_1C8 = sp44;
                if (arg0->colChkInfo.damageEffect == 1) {
                    func_809D6540(arg0, arg1);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                } else {
                    arg0->colChkInfo.health -= arg0->colChkInfo.damage;
                    func_809D6424(arg0, arg1);
                    Audio_PlayActorSound2(arg0, 0x3807U);
                }
            }
        }
    }
    temp_v0_2 = D_809D8A14;
    if ((temp_v0_2 != 0) && (func_809D3CD0 == temp_v0_2->actionFunc)) {
        func_809D64E0(arg0, arg1);
        arg0->velocity.y = 0.0f;
        arg0->speedXZ = 0.0f;
    }
    if ((sp28->unk_28 == 3) && ((s32) sp28->unk_2A < 0x96)) {
        temp_f2 = sp28->unk_0 - arg0->world.pos.x;
        temp_f12 = sp28->unk_8 - arg0->world.pos.z;
        temp_f14 = (f32) gGameInfo->data[1297];
        temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        if ((temp_f0 < (temp_f14 + 210.0f)) && ((temp_f14 + 190.0f) < temp_f0)) {
            Audio_PlayActorSound2(arg0, 0x3807U);
            func_809D64E0(arg0, arg1);
            arg0->unk_15E = 0xF;
            arg0->unk_14C = 0;
            arg0->speedXZ = 0.0f;
            arg0->velocity.y = 5.0f;
        }
    }
}

void func_809D694C(Actor *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    ColliderCylinder *temp_a2_2;
    CollisionCheckContext *temp_a1;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    this->unk_144 = (s16) (this->unk_144 + 1);
    phi_v0 = this;
    phi_v1 = 0;
    do {
        temp_a0 = phi_v0->unk_14E;
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (temp_a0 != 0) {
            phi_v0->unk_14E = (s16) (temp_a0 - 1);
        }
        phi_v0 += 2;
    } while (temp_v1 != 6);
    temp_v0 = this->unk_15C;
    if (temp_v0 != 0) {
        this->unk_15C = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = this->unk_15E;
    if (temp_v0_2 != 0) {
        this->unk_15E = (s16) (temp_v0_2 - 1);
    }
    this->unk_464(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(this);
    this->world.pos.x += this->unk_1C4;
    this->world.pos.z += this->unk_1C8;
    Actor_SetHeight(this, 10.0f);
    Actor_UpdateBgCheckInfo(globalCtx, this, 50.0f, 21.0f, 100.0f, 5U);
    if ((this->bgCheckFlags & 1) != 0) {
        Math_ApproachZeroF(this + 0x1C4, 1.0f, 1.0f);
        Math_ApproachZeroF(this + 0x1C8, 1.0f, 1.0f);
    }
    if (func_809D65E0 != this->unk_464) {
        func_809D670C(this, globalCtx);
        temp_a2 = this + 0xA2C;
        sp2C = temp_a2;
        Collider_UpdateCylinder(this, temp_a2);
        temp_a1 = &globalCtx->colChkCtx;
        sp30 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        temp_a2_2 = this + 0xA78;
        sp2C = temp_a2_2;
        Collider_UpdateCylinder(this, temp_a2_2);
        CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2_2);
        this->unk_BC = (unaligned s32) this->unk_30;
        this->shape.rot.z = (s16) (u16) this->world.rot.z;
    }
}

s32 func_809D6B08(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    if ((arg1 == 2) && (func_809D1B2C == D_809D8A14->actionFunc)) {
        *arg2 = &D_060213A8;
    }
    if (arg1 == 4) {
        temp_v0 = *arg0;
        if (func_809D1B2C == D_809D8A14->actionFunc) {
            temp_a0 = temp_v0->unk_2B0;
            temp_v0->unk_2B0 = (void *) (temp_a0 + 8);
            temp_a0->unk_4 = &D_06022118;
            temp_a0->unk_0 = 0xDE000000;
        } else {
            temp_a0_2 = temp_v0->unk_2B0;
            temp_v0->unk_2B0 = (void *) (temp_a0_2 + 8);
            temp_a0_2->unk_4 = &D_060220A0;
            temp_a0_2->unk_0 = 0xDE000000;
        }
    }
    return 0;
}

void func_809D6BB4(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk_15E & 1) != 0) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    SkelAnime_DrawSV(globalCtx, this->unk_168, this->unk_184, (s32) this->unk_166, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_809D6B08, NULL, this);
    temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
    func_800BE680(globalCtx, this, (Vec3f []) (Vec3f *) &this->world, 1, this->unk_AC4, 0.0f, this->unk_AC8, (u8) (s32) this->unk_14C);
}

void func_809D6C98(GlobalContext *arg0, f32 *arg1, f32 arg2) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f22;
    s16 temp_s0;
    s16 phi_s0;

    temp_s5 = &sp94;
    temp_s4 = &spA0;
    temp_s3 = &sp88;
    phi_s0 = 0;
    do {
        spA0 = randPlusMinusPoint5Scaled(5.0f);
        spA4 = Rand_ZeroFloat(2.0f) + 1.0f;
        spA8 = randPlusMinusPoint5Scaled(5.0f);
        sp9C = 0.0f;
        sp94 = 0.0f;
        sp98 = -0.1f;
        sp88 = (randPlusMinusPoint5Scaled(70.0f) * arg2) + arg1->unk_0;
        sp8C = (Rand_ZeroFloat(10.0f) * arg2) + arg1->unk_4;
        sp90 = (randPlusMinusPoint5Scaled(70.0f) * arg2) + arg1->unk_8;
        temp_f22 = Rand_ZeroFloat(150.0f);
        func_800B0EB0(arg0, (Vec3f *) temp_s3, (Vec3f *) temp_s4, (Vec3f *) temp_s5, &D_809D7CEC, &D_809D7CF0, (s16) (s32) ((temp_f22 + 350.0f) * arg2), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 5);
}

void func_809D6E7C(Actor *arg0, GlobalContext *arg1) {
    Boss01 *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f2;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s1;
    s16 temp_s6;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s32 temp_f6;
    u8 temp_v0;
    void *temp_s3;
    f32 *phi_s2;
    s16 phi_s0;
    s16 phi_s1;
    s16 phi_s0_2;
    s16 phi_s6;

    temp_s3 = arg1->actorCtx.actorList[2].first;
    phi_s2 = (f32 *) arg1->specialEffects;
    phi_s6 = 0;
    do {
        temp_v0 = phi_s2->unk_28;
        if (temp_v0 != 0) {
            phi_s2->unk_2A = (s16) (phi_s2->unk_2A + 1);
            if (temp_v0 == 3) {
                temp_v0_2 = phi_s2->unk_2A;
                if ((s32) temp_v0_2 < 0x96) {
                    Math_ApproachF(arg1 + 0x170E0, (Math_SinS((s16) ((s32) (temp_v0_2 << 0x1C) >> 0x10)) * 0.1f) + 0.9f, 1.0f, 0.2f);
                    D_809D8A18->unk_144 = 0xFA;
                    temp_v0_3 = D_809D8A14;
                    if ((temp_v0_3 != 0) && (func_809D3CD0 == temp_v0_3->actionFunc)) {
                        phi_s2->unk_2A = 0x96;
                    }
                    play_sound(0x2034U);
                    Math_ApproachF(phi_s2 + 0x34, 1.0f, 0.1f, 0.3f);
                    if (((temp_s3->unk_A74 & 0x1000) == 0) && (temp_s3->world.pos.y < 70.0f)) {
                        temp_f20 = phi_s2->unk_0 - temp_s3->world.pos.x;
                        temp_f22 = phi_s2->unk_8 - temp_s3->world.pos.z;
                        temp_f0 = sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22));
                        if (temp_s3->unk_D5C == 0) {
                            temp_f2 = (f32) gGameInfo->data[1297];
                            if (temp_f0 < (temp_f2 + 210.0f)) {
                                phi_s0 = 0;
                                if ((temp_f2 + 190.0f) < temp_f0) {
                                    do {
                                        temp_s0 = phi_s0 + 1;
                                        (temp_s3 + phi_s0)->unk_D45 = Rand_S16Offset(0, 0xC8);
                                        phi_s0 = temp_s0;
                                    } while ((s32) temp_s0 < 0x12);
                                    temp_s3->unk_D44 = 1;
                                    temp_v0_4 = Math_FAtan2F(temp_f22, temp_f20);
                                    phi_s1 = temp_v0_4;
                                    if (((f32) gGameInfo->data[1297] + 100.0f) < temp_f0) {
                                        phi_s1 = (s16) (temp_v0_4 + 0x8000);
                                    }
                                    func_800B8D50(arg1, arg0, 10.0f, phi_s1, 0.0f, 8U);
                                }
                            }
                        }
                    }
                } else {
                    Math_ApproachZeroF(phi_s2 + 0x38, 1.0f, 10.0f);
                    if (phi_s2->unk_38 < 0.1f) {
                        phi_s2->unk_28 = 0U;
                    }
                }
            } else {
                temp_f0_2 = phi_s2->unk_10;
                phi_s2->unk_0 += phi_s2->unk_C;
                phi_s2->unk_4 = (f32) (phi_s2->unk_4 + temp_f0_2);
                phi_s2->unk_8 = (f32) (phi_s2->unk_8 + phi_s2->unk_14);
                phi_s2->unk_10 = (f32) (temp_f0_2 + phi_s2->unk_18);
                if (temp_v0 == 1) {
                    phi_s2->unk_1E = (s16) (phi_s2->unk_1E + phi_s2->unk_30);
                    phi_s2->unk_1C = (s16) (phi_s2->unk_1C + phi_s2->unk_2E);
                    if (phi_s2->unk_2C == 0) {
                        temp_f20_2 = temp_s3->world.pos.x - phi_s2->unk_0;
                        temp_f22_2 = temp_s3->world.pos.z - phi_s2->unk_8;
                        temp_f24 = (temp_s3->world.pos.y + 20.0f) - phi_s2->unk_4;
                        if (((temp_f20_2 * temp_f20_2) + (temp_f22_2 * temp_f22_2) + (temp_f24 * temp_f24)) < 2500.0f) {
                            func_800B8D50(arg1, NULL, 0.0f, (s16) (s32) Rand_ZeroFloat(65526.0f), 0.0f, 8U);
                        }
                        phi_s0_2 = 0;
                        if (phi_s2->unk_4 < 10.0f) {
                            phi_s2->unk_4 = 10.0f;
                            temp_f6 = (s32) (Rand_ZeroFloat(2.0f) + 4.0f);
                            temp_s1 = (s16) temp_f6;
                            if ((s32) (s16) temp_f6 > 0) {
                                do {
                                    func_809D0678(arg1->specialEffects, phi_s2, 1);
                                    temp_s0_2 = phi_s0_2 + 1;
                                    phi_s0_2 = temp_s0_2;
                                } while ((s32) temp_s0_2 < (s32) temp_s1);
                            }
                            phi_s2->unk_28 = 0U;
                            Audio_PlaySoundAtPosition(arg1, (Vec3f *) phi_s2, 0x28, 0x2810U);
                            func_809D6C98(arg1, phi_s2, 1.0f);
                            CollisionCheck_SpawnShieldParticles(arg1, (Vec3f *) phi_s2);
                            func_800BC848(arg0, arg1, 3, 0xA);
                        }
                    } else if ((phi_s2->unk_4 < 10.0f) && (phi_s2->unk_10 < 0.0f)) {
                        phi_s2->unk_4 = 10.0f;
                        phi_s2->unk_28 = 0U;
                        func_809D6C98(arg1, phi_s2, 0.5f);
                    }
                }
            }
        }
        temp_s6 = phi_s6 + 1;
        phi_s2 += 0x3C;
        phi_s6 = temp_s6;
    } while ((s32) temp_s6 < 0x64);
}

void func_809D73D4(GlobalContext *arg0) {
    MtxF *sp88;
    Gfx *sp84;
    GameInfo *temp_v0_8;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s32 temp_f10;
    u32 *temp_s4;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *phi_s1;
    s16 phi_s3;
    void *phi_s1_2;
    s16 phi_s3_2;
    f32 phi_f2;
    s32 phi_t4;
    s16 phi_s3_3;

    temp_s1 = arg0->specialEffects;
    temp_a0 = arg0->state.gfxCtx;
    sp88 = arg0 + 0x18000;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(arg0->state.gfxCtx);
    phi_s1 = temp_s1;
    phi_s3 = 1;
    do {
        if (phi_s1->unk_28 == 1U) {
            SysMatrix_InsertTranslation(phi_s1->unk_0, phi_s1->unk_4, phi_s1->unk_8, 0);
            Matrix_RotateY(phi_s1->unk_1E, 1U);
            SysMatrix_InsertXRotation_s(phi_s1->unk_1C, (s32) 1U);
            temp_f12 = phi_s1->unk_34;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, (s32) 1U);
            temp_v0 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_2 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = (u32) &D_0600E3E8;
            temp_v0_2->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s1 += 0x3C;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x64);
    temp_s1_2 = sp88->unk_870;
    func_8012C448(arg0->state.gfxCtx);
    temp_v0_3 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x64;
    temp_v0_3->words.w0 = 0xFA000000;
    phi_s1_2 = temp_s1_2;
    phi_s3_2 = (s16) 1U;
    do {
        if (phi_s1_2->unk_28 == 1U) {
            temp_s4 = &gSegments[(u32) ((s32) D_04076BC0 * 0x10) >> 0x1C];
            SysMatrix_InsertTranslation(phi_s1_2->unk_0, 0.0f, phi_s1_2->unk_8, 0);
            temp_f12_2 = phi_s1_2->unk_34 * 50.0f;
            Matrix_Scale(temp_f12_2, 1.0f, temp_f12_2, (s32) 1U);
            temp_v0_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_5 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_5->words.w1 = *temp_s4 + ((s32) D_04076BC0 & 0xFFFFFF) + 0x80000000;
        }
        temp_s3_2 = phi_s3_2 + 1;
        phi_s1_2 += 0x3C;
        phi_s3_2 = temp_s3_2;
    } while ((s32) temp_s3_2 < 0x64);
    func_8012C2DC(arg0->state.gfxCtx);
    temp_s1_3 = sp88->unk_870;
    func_809D0530(1, 0x71A5, 0x263A);
    if (temp_s1_3->unk_28 == 3) {
        temp_v0_6 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0xFF0A0000;
        temp_v0_6->words.w0 = 0xFB000000;
        SysMatrix_InsertTranslation(temp_s1_3->unk_0, 0.0f, temp_s1_3->unk_8, 0);
        sp84 = D_0407D590;
        sp88 = arg0 + 0x187FC;
        phi_s3_3 = 0;
        do {
            SysMatrix_StatePush();
            temp_f2 = temp_s1_3->unk_38 - (func_809D0550() * 50.0f);
            phi_f2 = temp_f2;
            if (temp_f2 < 0.0f) {
                phi_f2 = 0.0f;
            }
            temp_v1 = temp_s2->polyXlu.p;
            temp_f10 = (s32) phi_f2;
            temp_s2->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA008080;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t4 = (s32) (phi_f2 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_15;
                }
            } else {
                phi_t4 = temp_f10;
                if (temp_f10 < 0) {
block_15:
                    phi_t4 = -1;
                }
            }
            temp_v1->words.w1 = (phi_t4 & 0xFF) | 0xFFFF0000;
            temp_v0_7 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDB060020;
            temp_v0_7->words.w1 = Gfx_TwoTexScroll(arg0->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) (temp_s1_3->unk_2A + (phi_s3_3 * 0xA)) * -0x14) & 0x1FF, 0x20, 0x80);
            SysMatrix_InsertYRotation_f((f32) phi_s3_3 * 0.19634955f, 1);
            SysMatrix_InsertTranslation(0.0f, 0.0f, (f32) gGameInfo->data[1297] + 200.0f, 1);
            SysMatrix_NormalizeXYZ(sp88);
            if (func_809D0550() < 0.5f) {
                SysMatrix_InsertYRotation_f(3.1415927f, 1);
            }
            temp_v0_8 = gGameInfo;
            Matrix_Scale(((f32) temp_v0_8->data[1296] * 0.0001f) + 0.018f, ((func_809D0550() * 30.0f * 0.0001f) + (0.007f + ((f32) temp_v0_8->data[1302] * 0.0001f))) * temp_s1_3->unk_34, 1.0f, 1);
            temp_v0_9 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xDA380003;
            temp_v0_9->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_10 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0xDE000000;
            temp_v0_10->words.w1 = (u32) sp84;
            SysMatrix_StatePop();
            temp_s3_3 = phi_s3_3 + 1;
            phi_s3_3 = temp_s3_3;
        } while ((s32) temp_s3_3 < 0x20);
    }
}
