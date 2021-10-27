typedef struct Boss03 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x4];
    /* 0x148 */ SkelAnime unk_148;                  /* inferred */
    /* 0x18C */ Vec3s unk_18C;                      /* inferred */
    /* 0x192 */ char pad_192[0x54];                 /* maybe part of unk_18C[15]? */
    /* 0x1E6 */ Vec3s unk_1E6;                      /* inferred */
    /* 0x1EC */ char pad_1EC[0x54];                 /* maybe part of unk_1E6[15]? */
    /* 0x240 */ s16 unk_240;                        /* inferred */
    /* 0x242 */ u8 unk_242;                         /* inferred */
    /* 0x243 */ char pad_243[0x9];                  /* maybe part of unk_242[10]? */
    /* 0x24C */ s16 unk_24C;                        /* inferred */
    /* 0x24E */ s16 unk_24E;                        /* inferred */
    /* 0x250 */ s16 unk_250;                        /* inferred */
    /* 0x252 */ s8 unk_252;                         /* inferred */
    /* 0x253 */ u8 unk_253;                         /* inferred */
    /* 0x254 */ s16 unk_254;                        /* inferred */
    /* 0x256 */ char pad_256[0x2];
    /* 0x258 */ f32 unk_258;                        /* inferred */
    /* 0x25C */ s16 unk_25C;                        /* inferred */
    /* 0x25E */ s16 unk_25E;                        /* inferred */
    /* 0x260 */ f32 unk_260;                        /* inferred */
    /* 0x264 */ char pad_264[0x4];
    /* 0x268 */ f32 unk_268;                        /* inferred */
    /* 0x26C */ f32 unk_26C;                        /* inferred */
    /* 0x270 */ f32 unk_270;                        /* inferred */
    /* 0x274 */ s16 unk_274;                        /* inferred */
    /* 0x276 */ s16 unk_276;                        /* inferred */
    /* 0x278 */ f32 unk_278;                        /* inferred */
    /* 0x27C */ f32 unk_27C;                        /* inferred */
    /* 0x280 */ s16 unk_280;                        /* inferred */
    /* 0x282 */ char pad_282[0x2];
    /* 0x284 */ f32 unk_284;                        /* inferred */
    /* 0x288 */ f32 unk_288;                        /* inferred */
    /* 0x28C */ f32 unk_28C;                        /* inferred */
    /* 0x290 */ u8 unk_290;                         /* inferred */
    /* 0x291 */ char pad_291[0x3];                  /* maybe part of unk_290[4]? */
    /* 0x294 */ f32 unk_294;                        /* inferred */
    /* 0x298 */ f32 unk_298;                        /* inferred */
    /* 0x29C */ s16 unk_29C;                        /* inferred */
    /* 0x29E */ s16 unk_29E;                        /* inferred */
    /* 0x2A0 */ s16 unk_2A0;                        /* inferred */
    /* 0x2A2 */ char pad_2A2[0x2];
    /* 0x2A4 */ s16 unk_2A4;                        /* inferred */
    /* 0x2A6 */ char pad_2A6[0x2];
    /* 0x2A8 */ s16 unk_2A8;                        /* inferred */
    /* 0x2AA */ char pad_2AA[0x2];
    /* 0x2AC */ f32 unk_2AC;                        /* inferred */
    /* 0x2B0 */ f32 unk_2B0;                        /* inferred */
    /* 0x2B4 */ f32 unk_2B4;                        /* inferred */
    /* 0x2B8 */ f32 unk_2B8;                        /* inferred */
    /* 0x2BC */ u8 unk_2BC;                         /* inferred */
    /* 0x2BD */ u8 unk_2BD;                         /* inferred */
    /* 0x2BE */ s16 unk_2BE;                        /* inferred */
    /* 0x2C0 */ char pad_2C0[0x4];                  /* maybe part of unk_2BE[3]? */
    /* 0x2C4 */ f32 unk_2C4;                        /* inferred */
    /* 0x2C8 */ f32 unk_2C8;                        /* inferred */
    /* 0x2CC */ f32 unk_2CC;                        /* inferred */
    /* 0x2D0 */ f32 unk_2D0;                        /* inferred */
    /* 0x2D4 */ u8 unk_2D4;                         /* inferred */
    /* 0x2D5 */ u8 unk_2D5;                         /* inferred */
    /* 0x2D6 */ s16 unk_2D6;                        /* inferred */
    /* 0x2D8 */ s16 unk_2D8;                        /* inferred */
    /* 0x2DA */ s16 unk_2DA;                        /* inferred */
    /* 0x2DC */ char pad_2DC[0x48];                 /* maybe part of unk_2DA[37]? */
    /* 0x324 */ s16 unk_324;                        /* inferred */
    /* 0x326 */ char pad_326[0x2];
    /* 0x328 */ void (*actionFunc)(Boss03 *, GlobalContext *);
    /* 0x32C */ ColliderJntSph unk_32C;             /* inferred */
    /* 0x34C */ ColliderJntSphElement unk_34C;      /* inferred */
    /* 0x38C */ char pad_38C[0x40];
    /* 0x3CC */ ColliderJntSph unk_3CC;             /* inferred */
    /* 0x3EC */ ColliderJntSphElement unk_3EC;      /* inferred */
    /* 0x42C */ char pad_42C[0x100];                /* maybe part of unk_3EC[5]? */
    /* 0x52C */ f32 unk_52C;                        /* inferred */
    /* 0x530 */ u32 unk_530;                        /* inferred */
    /* 0x534 */ u16 unk_534;                        /* inferred */
    /* 0x536 */ s16 unk_536;                        /* inferred */
    /* 0x538 */ f32 unk_538;                        /* inferred */
    /* 0x53C */ f32 unk_53C;                        /* inferred */
    /* 0x540 */ f32 unk_540;                        /* inferred */
    /* 0x544 */ f32 unk_544;                        /* inferred */
    /* 0x548 */ f32 unk_548;                        /* inferred */
    /* 0x54C */ f32 unk_54C;                        /* inferred */
    /* 0x550 */ Vec3f unk_550;                      /* inferred */
    /* 0x55C */ f32 unk_55C;                        /* inferred */
    /* 0x560 */ f32 unk_560;                        /* inferred */
    /* 0x564 */ f32 unk_564;                        /* inferred */
    /* 0x568 */ f32 unk_568;                        /* inferred */
    /* 0x56C */ f32 unk_56C;                        /* inferred */
    /* 0x570 */ f32 unk_570;                        /* inferred */
    /* 0x574 */ char pad_574[0x4];
    /* 0x578 */ f32 unk_578;                        /* inferred */
} Boss03;                                           /* size = 0x57C */

struct _mips2c_stack_Boss03_Destroy {};             /* size 0x0 */

struct _mips2c_stack_Boss03_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Boss03_Init {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_Boss03_Update {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ColliderJntSph *sp44;                /* inferred */
    /* 0x48 */ ColliderJntSph *sp48;                /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ void (*sp50)(Actor *, GlobalContext *); /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x2];
    /* 0x5E */ s16 sp5E;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ Actor *sp88;                         /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ Boss03 *sp90;                        /* inferred */
    /* 0x94 */ char pad_94[0x4];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_809E2760 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E2788 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E2880 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E299C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809E2AB4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E2B8C {};              /* size 0x0 */

struct _mips2c_stack_func_809E2C1C {};              /* size 0x0 */

struct _mips2c_stack_func_809E2C3C {};              /* size 0x0 */

struct _mips2c_stack_func_809E2D64 {};              /* size 0x0 */

struct _mips2c_stack_func_809E2DA0 {
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

struct _mips2c_stack_func_809E344C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E34B8 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
    /* 0x50 */ char pad_50[0x18];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_809E38EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E3968 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x7];                    /* maybe part of sp38[2]? */
    /* 0x43 */ u8 sp43;                             /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809E3D34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E3D98 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809E4180 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809E421C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x10];                   /* maybe part of sp2C[5]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809E4674 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E475C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809E4910 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E497C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Vec3s *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ Actor *sp48;                         /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809E4C34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E4C90 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809E4E2C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E4E80 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x14];                   /* maybe part of sp38[6]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x2];
    /* 0x56 */ s16 sp56;                            /* inferred */
    /* 0x58 */ char pad_58[0x2];
    /* 0x5A */ s16 sp5A;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809E5ADC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E5B64 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 *sp44;                           /* inferred */
    /* 0x48 */ f32 *sp48;                           /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0xC];                    /* maybe part of sp4C[4]? */
    /* 0x5C */ Actor *sp5C;                         /* inferred */
    /* 0x60 */ Camera *sp60;                        /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x10];                   /* maybe part of sp64[5]? */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x2];
    /* 0x9E */ s16 sp9E;                            /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_809E65F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E6640 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 *sp40;                           /* inferred */
    /* 0x44 */ CutsceneContext *sp44;               /* inferred */
    /* 0x48 */ char pad_48[0xC];                    /* maybe part of sp44[4]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809E69A4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void (*sp18)(Actor *, GlobalContext *); /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E6A38 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E6B70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E6BC0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809E6CB4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ void (*sp30)(Actor *, GlobalContext *); /* inferred */
    /* 0x34 */ char pad_34[0x17];                   /* maybe part of sp30[6]? */
    /* 0x4B */ u8 sp4B;                             /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809E7920 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809E79C4 {};              /* size 0x0 */

struct _mips2c_stack_func_809E7AA8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s8 *sp20;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x40];
    /* 0x64 */ void *sp64;                          /* inferred */
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0xF];
    /* 0x77 */ s8 sp77;                             /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809E7D00 {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0xC];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x8];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_809E81E4 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? *sp48;                             /* inferred */
    /* 0x4C */ ? *sp4C;                             /* inferred */
    /* 0x50 */ char pad_50[0xC];                    /* maybe part of sp4C[4]? */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ char pad_60[0xC];                    /* maybe part of sp5C[4]? */
    /* 0x6C */ Gfx *sp6C;                           /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ Gfx *sp74;                           /* inferred */
    /* 0x78 */ char pad_78[0xC];                    /* maybe part of sp74[4]? */
    /* 0x84 */ Gfx *sp84;                           /* inferred */
    /* 0x88 */ char pad_88[0x4];
    /* 0x8C */ Gfx *sp8C;                           /* inferred */
    /* 0x90 */ char pad_90[0x14];                   /* maybe part of sp8C[6]? */
    /* 0xA4 */ void *spA4;                          /* inferred */
    /* 0xA8 */ char pad_A8[0x10];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_809E8810 {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ Actor *sp50;                         /* inferred */
    /* 0x54 */ char pad_54[0x1];
    /* 0x55 */ u8 sp55;                             /* inferred */
    /* 0x56 */ char pad_56[0xA];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809E8BEC {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

? func_800BC848(Boss03 *, GlobalContext *, ?, ?);   /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_80169940(GlobalContext *, s16, f32);         /* extern */
void func_809E2760(Vec3f *arg0, s32 arg1, void *);  /* static */
void func_809E2788(GlobalContext *arg0, f32 *arg1); /* static */
void func_809E2880(GlobalContext *arg0, f32 *arg1); /* static */
void func_809E299C(GlobalContext *arg0, void *arg1, ? *arg2); /* static */
void func_809E2AB4(GlobalContext *arg0, f32 *arg1); /* static */
void func_809E2B8C(s8 arg0, void *arg1, ? *arg2, s8); /* static */
void func_809E2C1C(s32 arg0, s32 arg1, s32 arg2);   /* static */
f32 func_809E2C3C();                                /* static */
void *func_809E2D64(GlobalContext *arg0);           /* static */
void func_809E2DA0(Boss03 *arg0, GlobalContext *arg1); /* static */
void func_809E38EC(Boss03 *arg0, GlobalContext *arg1); /* static */
void func_809E3D34(f32 arg0, Boss03 *arg1, GlobalContext *arg2, u8); /* static */
void func_809E4180(Boss03 *arg0, GlobalContext *arg1); /* static */
void func_809E4674(Boss03 *arg0, GlobalContext *arg1); /* static */
void func_809E4910(Boss03 *arg0, GlobalContext *arg1); /* static */
void func_809E4C34(f32 arg0, Boss03 *arg1, GlobalContext *); /* static */
void func_809E4E2C(Boss03 *arg0, GlobalContext *arg1); /* static */
void func_809E5ADC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809E65F4(Boss03 *arg0, GlobalContext *arg1); /* static */
void func_809E69A4(Actor *arg0, GlobalContext *arg1, u16); /* static */
void func_809E6A38(Actor *arg0, GlobalContext *arg1); /* static */
void func_809E6B70(Actor *arg0, GlobalContext *arg1, u16); /* static */
void func_809E6CB4(Actor *arg0, GlobalContext *arg1); /* static */
void func_809E7920(Camera **arg0, s16 arg1);        /* static */
s32 func_809E79C4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809E7AA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809E7D00(GlobalContext *arg0);            /* static */
void func_809E81E4(GlobalContext *arg0);            /* static */
void func_809E8810(Actor *this, GlobalContext *globalCtx); /* static */
void func_809E8BEC(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06004260;
extern ? D_060042B0;
extern ? D_060042F8;
extern ? D_06007E50;
extern ? D_06007EB0;
extern void D_06007EC8;
extern FlexSkeletonHeader D_060093A8;
extern AnimationHeader D_06009554;
extern AnimationHeader D_060099D0;
extern AnimationHeader D_06009C14;
extern AnimationHeader D_06009CF8;
extern AnimationHeader D_0600A6C8;
static ? D_809E8EA0;                                /* unable to generate initializer */
static ColliderJntSphElementInit D_809E8ECC[2] = {
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x46}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0x32}, 0x64},
    },
};
static ColliderJntSphInit D_809E8F14 = {{3, 0x11, 9, 9, 0x10, 0}, 2, &D_809E8ECC};
static ColliderJntSphElementInit D_809E8F24[5] = {
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {2, {{0, 0, 0}, 0x14}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {5, {{0, 0, 0}, 0x14}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {6, {{0, 0, 0}, 0x46}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {7, {{0, 0, 0}, 0x46}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {8, {{0, 0, 0}, 0x1E}, 0x64},
    },
};
static ColliderJntSphInit D_809E8FD8 = {{9, 0x11, 9, 9, 0x10, 0}, 5, &D_809E8F24};
static ? D_809E8FE8;                                /* unable to generate initializer */
static Color_RGBA8 D_809E90FC = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_809E9100 = {0x28, 0x1E, 0x1E, 0xFF};
static ? D_809E9104;                                /* unable to generate initializer */
static ? D_809E9128;                                /* unable to generate initializer */
static ? D_809E9136;                                /* unable to generate initializer */
static Vec3f D_809E9148 = {600.0f, -100.0f, 0.0f};
static ? D_809E9154;                                /* unable to generate initializer */
static ? D_809E91A8;                                /* unable to generate initializer */
static Vec3f D_809E91B4 = {300.0f, -100.0f, -200.0f};
static ? D_809E91C0;                                /* unable to generate initializer */
static u8 D_809E9840;
static u8 D_809E9841;
static u8 D_809E9842;
static Vec3f D_809E9848;
static void D_809E9858;
static s8 D_809E989C[68];
static ? D_809E98E0;
static Boss03 *D_809EC030;
static s32 D_809EC034;
static s32 D_809EC038;
static s32 D_809EC03C;

void func_809E2760(Vec3f *arg0, s32 arg1) {
    func_8019F420(arg0, arg1 & 0xFFFF);
}

void func_809E2788(GlobalContext *arg0, f32 *arg1) {
    void *sp18;
    s16 temp_v0;
    u8 temp_v1;
    void *phi_a2;
    s16 phi_v0;

    phi_a2 = arg0->specialEffects;
    phi_v0 = 0;
loop_1:
    temp_v1 = phi_a2->unk_0;
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if ((temp_v1 == 0) || (temp_v1 == 1)) {
        phi_a2->unk_0 = 4U;
        phi_a2->unk_4 = (s32) arg1->unk_0;
        phi_a2->unk_8 = (s32) arg1[1];
        phi_a2->unk_C = (s32) arg1[2];
        phi_a2->unk_34 = 0.1f;
        phi_a2->unk_38 = 0.4f;
        phi_a2->unk_10 = (f32) D_801D15B0.x;
        phi_a2->unk_14 = (f32) D_801D15B0.y;
        phi_a2->unk_18 = (f32) D_801D15B0.z;
        phi_a2->unk_1C = (f32) D_801D15B0.x;
        phi_a2->unk_20 = (f32) D_801D15B0.y;
        phi_a2->unk_2C = 0x96;
        phi_a2->unk_24 = (f32) D_801D15B0.z;
        sp18 = phi_a2;
        phi_a2->unk_2E = (s16) (s32) (Rand_ZeroFloat(4.0f) + 5.0f);
        return;
    }
    phi_a2 += 0x44;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_809E2880(GlobalContext *arg0, f32 *arg1) {
    s16 temp_v0;
    u8 temp_v1;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0->specialEffects;
    phi_v0 = 0;
loop_1:
    temp_v1 = phi_s0->unk_0;
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if ((temp_v1 == 0) || (temp_v1 == 1)) {
        phi_s0->unk_0 = 2U;
        phi_s0->unk_4 = (s32) arg1->unk_0;
        phi_s0->unk_8 = (s32) arg1[1];
        phi_s0->unk_C = (s32) arg1[2];
        phi_s0->unk_10 = (f32) D_801D15B0.x;
        phi_s0->unk_14 = (f32) D_801D15B0.y;
        phi_s0->unk_18 = (f32) D_801D15B0.z;
        phi_s0->unk_1C = (f32) D_801D15B0.x;
        phi_s0->unk_20 = (f32) D_801D15B0.y;
        phi_s0->unk_20 = -2.0f;
        phi_s0->unk_24 = (f32) D_801D15B0.z;
        phi_s0->unk_38 = 0.0f;
        phi_s0->unk_34 = 0.1f;
        phi_s0->unk_3C = Rand_ZeroFloat(6.2831855f);
        phi_s0->unk_2 = (s16) (s32) Rand_ZeroFloat(100.0f);
        phi_s0->unk_10 = randPlusMinusPoint5Scaled(25.0f);
        phi_s0->unk_18 = randPlusMinusPoint5Scaled(25.0f);
        return;
    }
    phi_s0 += 0x44;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_809E299C(GlobalContext *arg0, void *arg1, ? *arg2) {
    ? sp34;
    f32 temp_f2;
    s16 temp_v0;
    u8 temp_v1;
    void *phi_s0;
    s16 phi_v0;

    sp34.unk_0 = (s32) D_809E8EA0.unk_0;
    sp34.unk_4 = (s32) D_809E8EA0.unk_4;
    sp34.unk_8 = (s32) D_809E8EA0.unk_8;
    phi_s0 = arg0->specialEffects;
    phi_v0 = 0;
loop_1:
    temp_v1 = phi_s0->unk_0;
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if ((temp_v1 == 0) || (temp_v1 == 1)) {
        phi_s0->unk_0 = 3U;
        phi_s0->unk_4 = (s32) arg1->unk_0;
        phi_s0->unk_8 = (s32) arg1->unk_4;
        phi_s0->unk_C = (s32) arg1->unk_8;
        phi_s0->unk_10 = (s32) arg2->unk_0;
        phi_s0->unk_14 = (s32) arg2->unk_4;
        phi_s0->unk_18 = (s32) arg2->unk_8;
        phi_s0->unk_1C = (s32) sp34.unk_0;
        phi_s0->unk_20 = (s32) sp34.unk_4;
        phi_s0->unk_24 = (s32) sp34.unk_8;
        temp_f2 = Rand_ZeroFloat(0.02f) + 0.02f;
        phi_s0->unk_38 = temp_f2;
        phi_s0->unk_34 = temp_f2;
        phi_s0->unk_3C = Rand_ZeroFloat(6.2831855f);
        phi_s0->unk_2 = (s16) (s32) Rand_ZeroFloat(100.0f);
        return;
    }
    phi_s0 += 0x44;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_809E2AB4(GlobalContext *arg0, f32 *arg1) {
    void *sp18;
    f32 temp_f8;
    s16 temp_v1;
    void *phi_v0;
    s16 phi_v1;

    phi_v0 = arg0->specialEffects;
    phi_v1 = 0;
loop_1:
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (phi_v0->unk_0 == 0) {
        phi_v0->unk_0 = 1U;
        phi_v0->unk_4 = (s32) arg1->unk_0;
        phi_v0->unk_8 = (s32) arg1[1];
        phi_v0->unk_C = (s32) arg1[2];
        phi_v0->unk_10 = (f32) D_801D15B0.x;
        phi_v0->unk_14 = (f32) D_801D15B0.y;
        phi_v0->unk_18 = (f32) D_801D15B0.z;
        phi_v0->unk_1C = (f32) D_801D15B0.x;
        phi_v0->unk_20 = (f32) D_801D15B0.y;
        phi_v0->unk_24 = (f32) D_801D15B0.z;
        phi_v0->unk_20 = 0.2f;
        sp18 = phi_v0;
        temp_f8 = Rand_ZeroFloat(0.3f) + 0.2f;
        phi_v0->unk_2 = 0;
        phi_v0->unk_34 = temp_f8;
        return;
    }
    phi_v0 += 0x44;
    if ((s32) temp_v1 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_809E2B8C(s8 arg0, void *arg1, ? *arg2) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 << 6;
    (arg1->unk_1C + temp_v0)->unk_30 = (s16) (s32) arg2->unk_0;
    (arg1->unk_1C + temp_v0)->unk_32 = (s16) (s32) arg2->unk_4;
    (arg1->unk_1C + temp_v0)->unk_34 = (s16) (s32) arg2->unk_8;
    temp_v1 = arg1->unk_1C + temp_v0;
    temp_v1->unk_36 = (s16) (s32) (temp_v1->unk_38 * (f32) temp_v1->unk_2E);
}

void func_809E2C1C(s32 arg0, s32 arg1, s32 arg2) {
    D_809EC034 = arg0;
    D_809EC038 = arg1;
    D_809EC03C = arg2;
}

f32 func_809E2C3C(void) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s32 temp_f16;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_t7;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_hi = (s32) (D_809EC034 * 0xAB) % 0x763D;
    temp_hi_2 = (s32) (D_809EC038 * 0xAC) % 0x7663;
    temp_f16 = temp_hi_2;
    temp_t7 = (s32) (D_809EC03C * 0xAA) % 0x7673;
    temp_f6 = (f32) temp_hi;
    D_809EC034 = temp_hi;
    D_809EC038 = temp_hi_2;
    D_809EC03C = temp_t7;
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

void *func_809E2D64(GlobalContext *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[1].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if (phi_v1->id == 0x174) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_809E2DA0(Boss03 *arg0, GlobalContext *arg1) {
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
    f32 temp_f20;
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    if (arg0->unk_2B0 < 80.0f) {
        temp_s5 = &sp88;
        temp_s4 = &sp94;
        temp_s3 = &spA0;
        do {
            sp94 = randPlusMinusPoint5Scaled(10.0f);
            sp98 = Rand_ZeroFloat(2.0f) + 2.0f;
            sp9C = randPlusMinusPoint5Scaled(10.0f);
            sp8C = -0.075f;
            sp90 = 0.0f;
            sp88 = 0.0f;
            spA4 = Rand_ZeroFloat(20.0f) + 5.0f;
            spA8 = randPlusMinusPoint5Scaled(150.0f) + arg0->unk_2B4;
            spA0 = randPlusMinusPoint5Scaled(150.0f) + arg0->unk_2AC;
            temp_f20 = Rand_ZeroFloat(200.0f);
            func_800B0EB0(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_s4, (Vec3f *) temp_s5, &D_809E90FC, &D_809E9100, (s16) (s32) (temp_f20 + 400.0f), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(10.0f) + 25.0f));
            temp_s0 = (phi_s0 + 1) & 0xFF;
            phi_s0 = temp_s0;
        } while (temp_s0 < 5);
    }
}

void Boss03_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp70;
    ? *temp_v0;
    ActorContext *temp_s1;
    ActorContext *temp_s1_3;
    Boss03 *temp_s0;
    s32 temp_s1_2;
    s32 temp_s4;
    s32 phi_s2;
    Boss03 *phi_s0;
    s32 phi_s3;
    s32 phi_s1;
    s32 phi_s4;
    ? *phi_v0;
    Boss03 *this = (Boss03 *) thisx;

    temp_s1 = &globalCtx->actorCtx;
    if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
        Actor_SpawnAsChild(temp_s1, (Actor *) this, globalCtx, 0x38, 0.0f, 440.0f, 200.0f, (s16) 0, (s16) 0, (s16) 0, 1);
        Actor_Spawn(temp_s1, globalCtx, 0x3A, 0.0f, 440.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (this->actor.params == 0x23) {
        this->actor.update = func_809E8810;
        this->actor.draw = func_809E8BEC;
        this->unk_240 = (s16) (s32) Rand_ZeroFloat(1000.0f);
        this->actor.scale.x = Rand_ZeroFloat(0.0075f) + 0.027f;
        this->actor.scale.y = 0.02f;
        this->actor.scale.z = 0.015f;
        phi_s2 = 0;
        phi_s0 = this;
        phi_s3 = 0;
        phi_s1 = 0;
        do {
            phi_s0->unk_18C.x = (s16) (s32) (Math_SinS((s16) ((this->unk_240 << 8) + phi_s2)) * 3000.0f);
            phi_s0->unk_18C.y = (s16) (s32) (Math_SinS((s16) ((this->unk_240 * 0x180) + phi_s3)) * 2000.0f);
            temp_s1_2 = phi_s1 + 0x4A38;
            temp_s0 = phi_s0 + 6;
            temp_s0->unk_148.unk3E.z = (s16) (s32) (Math_SinS((s16) ((this->unk_240 * 0x10) + phi_s1)) * 4000.0f);
            phi_s2 += 0x3A98;
            phi_s0 = temp_s0;
            phi_s3 += 0x4E20;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 != 0x1BD50);
        this->actor.flags &= -2;
        return;
    }
    this->actor.world.pos.x = D_809E8FE8.unk_0;
    this->actor.world.pos.y = D_809E8FE8.unk_4;
    this->actor.world.pos.z = D_809E8FE8.unk_8;
    func_809E2C1C(1, 0x71A5, 0x263A);
    temp_s1_3 = &globalCtx->actorCtx;
    phi_s4 = 0;
    do {
        SysMatrix_InsertYRotation_f((func_809E2C3C() * 3.1415927f * 0.2f) + (1.2566371f * (f32) phi_s4), 0);
        SysMatrix_GetStateTranslationAndScaledZ((func_809E2C3C() * 800.0f) + 400.0f, (Vec3f *) &sp70);
        Actor_Spawn(temp_s1_3, globalCtx, 0x12B, sp70, sp74, sp78, (s16) 0, (s16) (s32) (func_809E2C3C() * 65536.0f), (s16) 0, (s16) 0x23);
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
    } while (temp_s4 < 5);
    D_809EC030 = this;
    globalCtx->specialEffects = &D_809E9858;
    D_809E9858 = 0;
    *D_809E989C = 0;
    phi_v0 = &D_809E98E0;
    do {
        temp_v0 = phi_v0 + 0x110;
        temp_v0->unk_-CC = 0;
        temp_v0->unk_-88 = 0;
        temp_v0->unk_-44 = 0;
        temp_v0->unk_-110 = 0;
        phi_v0 = temp_v0;
    } while (temp_v0 != &D_809EC030);
    this->actor.targetMode = 5;
    this->actor.colChkInfo.mass = 0xFE;
    this->actor.colChkInfo.health = 0xA;
    Collider_InitAndSetJntSph(globalCtx, &this->unk_32C, (Actor *) this, &D_809E8F14, &this->unk_34C);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_3CC, (Actor *) this, &D_809E8FD8, &this->unk_3EC);
    SkelAnime_InitSV(globalCtx, &this->unk_148, &D_060093A8, &D_0600A6C8, &this->unk_18C, &this->unk_1E6, 0xF);
    Actor_SetScale((Actor *) this, 0.2f);
    if ((gGameInfo->data[1312] != 0) || ((gSaveContext.eventInf[5] & 0x40) != 0)) {
        this->actionFunc = func_809E344C;
        D_809E9842 = 0;
        func_801A89A8(0x100100FF);
    } else {
        func_809E4E2C(this, globalCtx);
        D_809E9842 = 1;
    }
    this->unk_252 = -1;
    this->unk_258 = 430.0f;
}

void Boss03_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Boss03 *this = (Boss03 *) thisx;

}

void func_809E344C(Boss03 *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_148;
    if (globalCtx->actorCtx.actorList[2].first->world.pos.y < 540.0f) {
        this->actionFunc = func_809E34B8;
        this = this;
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06009CF8, -15.0f);
        this->unk_274 = 0;
        this->actor.flags |= 1;
    }
}

void func_809E34B8(Boss03 *this, GlobalContext *globalCtx) {
    Actor *sp4C;
    f32 sp40;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f6;
    s16 temp_s0;
    u8 temp_v0;
    s16 phi_s0;

    sp4C = globalCtx->actorCtx.actorList[2].first;
    func_809E2760(&this->actor.projectedPos, 0x32AB);
    this->unk_276 = 0x800;
    this->unk_148.animPlaybackSpeed = 1.0f;
    this->unk_27C = 1.0f;
    this->unk_278 = 10.0f;
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.world.rot.y, 1U);
    temp_f20 = this->unk_268 - this->actor.world.pos.x;
    temp_f22 = this->unk_270 - this->actor.world.pos.z;
    temp_f12 = sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22));
    sp40 = temp_f12;
    Math_ApproachS((s16 *) &this->actor.world.rot, Math_FAtan2F(temp_f12, -(this->unk_26C - this->actor.world.pos.y)), 0xA, this->unk_274);
    Math_ApproachS(&this->unk_2A0, (s16) (s32) ((f32) Math_SmoothStepToS(&this->actor.world.rot.y, Math_FAtan2F(temp_f22, temp_f20), 0xA, this->unk_274, (s16) 0) * -0.5f), 5, 0x100);
    Math_ApproachS(&this->unk_274, this->unk_276, 1, 0x100);
    Math_ApproachF(&this->actor.speedXZ, this->unk_278, 1.0f, this->unk_27C);
    Math_ApproachF(&this->unk_260, __sinf(this->unk_148.animCurrentFrame * 0.62831855f) * 10.0f * 0.01f, 0.5f, 1.0f);
    if ((this->unk_250 == 0) && ((this->actor.bgCheckFlags & 8) != 0)) {
        SysMatrix_GetStateTranslationAndScaledZ(-500.0f, (Vec3f *) &this->unk_268);
        temp_f6 = Rand_ZeroFloat(100.0f) + 150.0f;
        this->unk_250 = 0x3C;
        this->unk_26C = temp_f6;
        temp_f0 = Rand_ZeroFloat(60.0f);
        this->unk_274 = 0x100;
        this->unk_24C = (s16) (s32) (temp_f0 + 60.0f);
    }
    if ((this->unk_250 == 0) && ((phi_s0 = 0, (sp40 < 100.0f)) || (this->unk_24C == 0))) {
loop_7:
        this->unk_268 = randPlusMinusPoint5Scaled(2500.0f);
        this->unk_26C = Rand_ZeroFloat(100.0f) + 150.0f;
        temp_f0_2 = randPlusMinusPoint5Scaled(2500.0f);
        this->unk_270 = temp_f0_2;
        temp_f20_2 = this->unk_268 - this->actor.world.pos.x;
        temp_f22_2 = temp_f0_2 - this->actor.world.pos.z;
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (!(sqrtf((temp_f20_2 * temp_f20_2) + (temp_f22_2 * temp_f22_2)) > 300.0f)) {
            if ((s32) temp_s0 < 0xC8) {
                goto loop_7;
            }
        }
        this->unk_274 = 0x100;
        this->unk_24C = (s16) (s32) (Rand_ZeroFloat(60.0f) + 60.0f);
    }
    Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
    Math_ApproachS((s16 *) &this->actor.shape, this->actor.world.rot.x, 2, (s16) (this->unk_274 * 2));
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 2, (s16) (this->unk_274 * 2));
    if (this->unk_24E == 0) {
        if ((this->unk_258 < sp4C->world.pos.y) && ((sp4C->bgCheckFlags & 1) != 0)) {
            func_809E4674(this, globalCtx);
            return;
        }
        temp_v0 = sp4C->unk_14B;
        if ((temp_v0 != 1) && (temp_v0 != 3)) {
            if (gGameInfo->data[1318] == 0) {
                func_809E38EC(this, globalCtx);
                return;
            }
            if ((s32) this->unk_252 <= 0) {
                func_809E38EC(this, globalCtx);
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void func_809E38EC(Boss03 *arg0, GlobalContext *arg1) {
    Boss03 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809E3968;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x148, &D_06009CF8, -10.0f);
    arg0->unk_24C = 0x64;
    arg0->unk_276 = 0x1000;
    arg0->unk_148.animPlaybackSpeed = 1.5f;
    arg0->unk_278 = 10.0f;
    arg0->unk_27C = 1.0f;
}

void func_809E3968(Boss03 *this, GlobalContext *globalCtx) {
    f32 sp68;
    f32 sp60;
    f32 sp50;
    f32 sp48;
    f32 sp44;
    u8 sp43;
    f32 sp38;
    Actor *temp_s1;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 phi_f2;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    this->unk_2BD = 1;
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    temp_f2 = temp_s1->world.pos.x - this->actor.world.pos.x;
    sp68 = temp_f2;
    temp_f18 = temp_s1->world.pos.z - this->actor.world.pos.z;
    sp60 = temp_f18;
    Math_ApproachS((s16 *) &this->actor.world.rot, Math_FAtan2F(sqrtf((temp_f2 * temp_f2) + (temp_f18 * temp_f18)), -((temp_s1->world.pos.y - this->actor.world.pos.y) + 50.0f)), 0xA, this->unk_274);
    Math_ApproachS(&this->unk_2A0, (s16) (s32) ((f32) Math_SmoothStepToS(&this->actor.world.rot.y, Math_FAtan2F(sp60, sp68), 0xA, this->unk_274, (s16) 0) * -0.5f), 5, 0x100);
    Math_ApproachS(&this->unk_274, this->unk_276, 1, 0x100);
    Math_ApproachF(&this->actor.speedXZ, this->unk_278, 1.0f, this->unk_27C);
    Math_ApproachF(&this->unk_260, __sinf(this->unk_148.animCurrentFrame * 0.62831855f) * 10.0f * 0.01f, 0.5f, 1.0f);
    Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
    Math_ApproachS((s16 *) &this->actor.shape, this->actor.world.rot.x, 2, (s16) (this->unk_274 * 2));
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 2, (s16) (this->unk_274 * 2));
    if ((((temp_s1->bgCheckFlags & 1) != 0) && (temp_s1->shape.feetPos[0].y >= 438.0f)) || (this->unk_24C == 0)) {
        if (this == temp_s1->parent) {
            temp_s1->unk_AE8 = 0x65;
            temp_s1->parent = NULL;
            temp_s1->unk_394 = 0;
        }
        func_809E344C(this, globalCtx);
        this->unk_24E = 0x64;
    } else {
        if ((this->unk_258 - 80.0f) < temp_s1->world.pos.y) {
            sp43 = 1;
            sp44 = 50.0f;
            phi_f2 = 100.0f;
        } else {
            sp43 = 0;
            sp44 = 100.0f;
            phi_f2 = 200.0f;
        }
        sp48 = phi_f2;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        Matrix_RotateY(this->actor.world.rot.y, 1U);
        SysMatrix_GetStateTranslationAndScaledZ(sp44, (Vec3f *) &sp50);
        temp_f14 = sp50 - temp_s1->world.pos.x;
        temp_f16 = sp58 - temp_s1->world.pos.z;
        temp_f12 = sqrtf((temp_f14 * temp_f14) + (temp_f16 * temp_f16));
        if (temp_f12 < (2.0f * phi_f2)) {
            sp48 = phi_f2;
            sp38 = temp_f12;
            Math_ApproachS(&this->unk_2A8, 0x3200, 2, 0x1800);
            this->unk_278 = 25.0f;
            this->unk_27C = 5.0f;
            this->unk_148.animPlaybackSpeed = 2.5f;
        }
        if (temp_f12 < phi_f2) {
            func_809E3D34(temp_f12, this, globalCtx, sp43);
            if (sp43 != 0) {
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x170, temp_s1->world.pos.x, this->unk_258, temp_s1->world.pos.z, (s16) 0, (s16) 0, (s16) 0x78, (s16) 0x309);
                func_809E2760(&this->actor.projectedPos, 0x3942);
            }
            func_809E2760(&this->actor.projectedPos, 0x3943);
        }
    }
    func_809E2DA0(this, globalCtx);
}

void func_809E3D34(void *arg0, Boss03 *arg1, u8 arg2) {
    void *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_328 = func_809E3D98;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x148, &D_06009CF8, -15.0f);
    arg0->unk_24C = 0x64;
    arg0->unk_2C4 = 0.0f;
    arg0->unk_2B8 = 0.0f;
    arg0->unk_242 = arg2;
}

void func_809E3D98(Boss03 *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp30;
    f32 sp28;
    Actor *temp_s1;
    f32 temp_f18;
    f32 temp_f2;
    f32 phi_f0;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    this->unk_148.animPlaybackSpeed = 2.0f;
    this->unk_27C = 2.0f;
    this->unk_276 = 0x1000;
    this->unk_2BD = 1;
    this->actor.flags &= -2;
    this->unk_278 = 15.0f;
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    temp_f2 = temp_s1->world.pos.x - this->actor.world.pos.x;
    sp38 = temp_f2;
    temp_f18 = temp_s1->world.pos.z - this->actor.world.pos.z;
    sp30 = temp_f18;
    Math_ApproachS((s16 *) &this->actor.world.rot, Math_FAtan2F(sqrtf((temp_f2 * temp_f2) + (temp_f18 * temp_f18)), -(temp_s1->world.pos.y - this->actor.world.pos.y)), 0xA, this->unk_274);
    Math_ApproachS(&this->unk_2A0, (s16) (s32) ((f32) Math_SmoothStepToS(&this->actor.world.rot.y, Math_FAtan2F(sp30, sp38), 0xA, this->unk_274, (s16) 0) * -0.5f), 5, 0x100);
    Math_ApproachS(&this->unk_274, this->unk_276, 1, 0x100);
    Math_ApproachF(&this->actor.speedXZ, this->unk_278, 1.0f, this->unk_27C);
    Math_ApproachF(&this->unk_260, __sinf(this->unk_148.animCurrentFrame * 0.62831855f) * 10.0f * 0.01f, 0.5f, 1.0f);
    Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
    Math_ApproachS((s16 *) &this->actor.shape, this->actor.world.rot.x, 2, (s16) (this->unk_274 * 2));
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 2, (s16) (this->unk_274 * 2));
    if ((((temp_s1->bgCheckFlags & 1) != 0) && (temp_s1->shape.feetPos[0].y >= 438.0f)) || (this->unk_24C == 0)) {
        if (this == temp_s1->parent) {
            temp_s1->unk_AE8 = 0x65;
            temp_s1->parent = NULL;
            temp_s1->unk_394 = 0;
            func_80165690();
        }
        func_809E344C(this, globalCtx);
    } else {
        Math_ApproachF((f32 *) &temp_s1->world, this->unk_2AC, 1.0f, this->unk_2B8);
        Math_ApproachF(&temp_s1->world.pos.y, this->unk_2B0, 1.0f, this->unk_2B8);
        Math_ApproachF(&temp_s1->world.pos.z, this->unk_2B4, 1.0f, this->unk_2B8);
        if (this->unk_242 != 0) {
            phi_f0 = 10.0f;
        } else {
            phi_f0 = 2.0f;
        }
        sp28 = phi_f0;
        Math_ApproachF(&this->unk_2B8, 100.0f, 1.0f, phi_f0);
        if (this->unk_2B8 > 30.0f) {
            if ((this != temp_s1->parent) && (globalCtx->grabPlayer(globalCtx, (Player *) temp_s1) != 0)) {
                temp_s1->parent = (Actor *) this;
                func_801A5CFC(0x6805U, &temp_s1->projectedPos, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
                func_809E4180(this, globalCtx);
            }
        } else {
            Math_ApproachS(&this->unk_2A8, 0x3200, 2, (s16) (s32) (3072.0f * phi_f0));
        }
        Math_ApproachS((s16 *) &temp_s1->world.rot, 0x4000, 1, 0x400);
        Math_ApproachS((s16 *) &temp_s1->shape, 0x4000, 1, 0x400);
        Math_ApproachS(&temp_s1->world.rot.y, this->unk_2A4, 1, 0x400);
        Math_ApproachS(&temp_s1->shape.rot.y, this->unk_2A4, 1, 0x400);
    }
    func_809E2DA0(this, globalCtx);
}

void func_809E4180(Boss03 *arg0, GlobalContext *arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 *temp_a0;

    arg0->actionFunc = func_809E421C;
    Matrix_RotateY(Math_FAtan2F(arg0->actor.world.pos.z, arg0->actor.world.pos.x), 0U);
    temp_a0 = &sp20;
    sp24 = 200.0f;
    sp20 = 0.0f;
    sp28 = 700.0f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, arg0 + 0x268);
    arg0->unk_276 = 0x800;
    arg0->unk_242 = 0;
    arg0->unk_24C = 0x64;
    arg0->unk_148.animPlaybackSpeed = 1.0f;
}

void func_809E421C(Boss03 *this, GlobalContext *globalCtx) {
    Actor *sp54;
    f32 sp48;
    f32 sp40;
    SkelAnime *sp2C;
    f32 sp28;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    s16 *temp_a0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u16 temp_v0_2;
    u8 temp_v0;

    sp54 = globalCtx->actorCtx.actorList[2].first;
    this->unk_2BD = 1;
    this->unk_25C = 0xF;
    if (this->unk_24C == 0x5A) {
        func_8016566C(0x96);
    }
    temp_a0 = &this->unk_148;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.world.rot.y, 1U);
    temp_f2 = this->unk_268 - this->actor.world.pos.x;
    sp48 = temp_f2;
    temp_f18 = this->unk_270 - this->actor.world.pos.z;
    sp40 = temp_f18;
    temp_f12 = sqrtf((temp_f2 * temp_f2) + (temp_f18 * temp_f18));
    sp28 = temp_f12;
    Math_ApproachS((s16 *) &this->actor.world.rot, Math_FAtan2F(temp_f12, -(this->unk_26C - this->actor.world.pos.y)), 0xA, this->unk_274);
    Math_ApproachS(&this->unk_2A0, (s16) (s32) ((f32) Math_SmoothStepToS(&this->actor.world.rot.y, Math_FAtan2F(sp40, sp48), 0xA, this->unk_274, (s16) 0) * -0.5f), 5, 0x100);
    Math_ApproachS(&this->unk_274, this->unk_276, 1, 0x100);
    Math_ApproachF(&this->unk_260, __sinf(this->unk_148.animCurrentFrame * 0.62831855f) * 10.0f * 0.01f, 0.5f, 1.0f);
    temp_v0 = this->unk_242;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else {
            Math_ApproachF(&this->actor.speedXZ, 0.0f, 1.0f, 0.5f);
            Math_ApproachF(&this->actor.world.pos.y, 200.0f, 0.05f, 5.0f);
        }
    } else {
        Math_ApproachF(&this->actor.speedXZ, 10.0f, 1.0f, 1.0f);
        if (sp28 < 100.0f) {
            this->unk_242 = 1;
            SkelAnime_ChangeAnimTransitionRepeat(sp2C, &D_06009C14, -15.0f);
        }
    }
    Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
    Math_ApproachS((s16 *) &this->actor.shape, this->actor.world.rot.x, 2, (s16) (this->unk_274 * 2));
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 2, (s16) (this->unk_274 * 2));
    temp_v0_2 = globalCtx->state.input[0].press.button;
    if ((~(temp_v0_2 | 0xFFFF7FFF) == 0) || (~(temp_v0_2 | ~0x4000) == 0)) {
        temp_v0_3 = this->unk_24C;
        if (temp_v0_3 != 0) {
            this->unk_24C = temp_v0_3 - 1;
        }
        if (this->unk_24C != 0) {
            this->unk_24C += -1;
        }
    }
    if (this->unk_24C == 0) {
        if (this == sp54->parent) {
            sp54->unk_AE8 = 0x65;
            sp54->parent = NULL;
            sp54->unk_394 = 0;
            func_80165690();
            func_800B8D50(globalCtx, NULL, 10.0f, this->actor.shape.rot.y, 0.0f, 0x20U);
        }
        func_809E344C(this, globalCtx);
        this->unk_24E = (s16) (s32) (Rand_ZeroFloat(100.0f) + 200.0f);
        return;
    }
    sp54->world.pos.x = this->unk_2AC;
    sp54->world.pos.y = this->unk_2B0;
    sp54->world.pos.z = this->unk_2B4;
    temp_f0 = Math_SinS((s16) (this->unk_240 << 0xD));
    temp_a0_2 = &this->unk_2A8;
    sp2C = (SkelAnime *) temp_a0_2;
    Math_ApproachS(temp_a0_2, (s16) (s32) (temp_f0 * 2000.0f), 2, 0x3000);
    sp54->shape.rot.x = 0x4000;
    sp54->world.rot.x = sp54->shape.rot.x;
    temp_v0_4 = this->unk_2A4;
    sp54->shape.rot.y = temp_v0_4;
    sp54->world.rot.y = temp_v0_4;
    if ((s32) this->unk_24C < 5) {
        Math_ApproachS(temp_a0_2, 0x3200, 2, 0x1800);
        Math_ApproachF(&this->unk_2C4, 100.0f, 1.0f, 100.0f);
        return;
    }
    Math_ApproachF(&this->unk_2C4, -300.0f, 1.0f, 5.0f);
    if ((this->unk_240 & 7) == 0) {
        func_809E2760(&this->actor.projectedPos, 0x3960);
    }
}

void func_809E4674(Boss03 *arg0, GlobalContext *arg1) {
    Boss03 *temp_a3;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f6;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809E475C;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x148, &D_06009C14, -15.0f);
    temp_f2 = arg0->actor.world.pos.x;
    temp_f12 = arg0->actor.world.pos.z;
    temp_f6 = Rand_ZeroFloat(30.0f) + 80.0f;
    arg0->unk_24E = 0x32;
    arg0->unk_274 = 0;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    arg0->unk_24C = (s16) (s32) temp_f6;
    if (temp_f0 > 600.0f) {
        arg0 = arg0;
        if (Rand_ZeroOne() < 0.5f) {
            arg0->unk_242 = 1;
            return;
        }
        goto block_4;
    }
block_4:
    arg0->unk_242 = 0;
}

void func_809E475C(Boss03 *this, GlobalContext *globalCtx) {
    Actor *sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;

    sp28 = globalCtx->actorCtx.actorList[2].first;
    if (this->unk_24E != 0) {
        func_809E2760(&this->actor.projectedPos, 0x32AB);
    }
    Math_ApproachS(&this->unk_2A0, (s16) (s32) ((f32) Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, this->unk_274, (s16) 0) * -0.7f), 5, 0x200);
    Math_ApproachS(&this->unk_274, 0x800, 1, 0x100);
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 2, 0x1000);
    Math_ApproachS((s16 *) &this->actor.world.rot, 0, 0xA, 0x200);
    Math_ApproachS((s16 *) &this->actor.shape, 0, 0xA, 0x200);
    temp_f0 = this->unk_258 - 70.0f;
    if (temp_f0 < this->actor.world.pos.y) {
        Math_ApproachF(&this->actor.world.pos.y, temp_f0, 0.05f, 5.0f);
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    temp_f0_2 = this->unk_258;
    temp_f2 = sp28->world.pos.y;
    if ((temp_f0_2 < temp_f2) && ((sp28->bgCheckFlags & 1) != 0)) {
        if (this->unk_24C == 0) {
            func_809E4910(this, globalCtx);
        }
    } else if (temp_f2 <= temp_f0_2) {
        func_809E344C(this, globalCtx);
        this->unk_24E = 0x14;
    }
    Math_ApproachF(&this->actor.speedXZ, -3.0f, 1.0f, 0.5f);
    Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
}

void func_809E4910(Boss03 *arg0, GlobalContext *arg1) {
    void *sp1C;
    Boss03 *temp_a3;

    temp_a3 = arg0;
    sp1C = arg1->actorCtx.actorList[2].first;
    temp_a3->actionFunc = func_809E497C;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x148, &D_06009CF8, -15.0f);
    arg0->unk_268 = sp1C->world.pos.x;
    arg0->unk_26C = sp1C->world.pos.y;
    arg0->unk_270 = sp1C->world.pos.z;
}

void func_809E497C(Boss03 *this, GlobalContext *globalCtx) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    Actor *sp48;
    Vec3s *sp3C;
    Vec3s *temp_a0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_a1;

    sp48 = globalCtx->actorCtx.actorList[2].first;
    this->unk_148.animPlaybackSpeed = 2.0f;
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    func_809E2760(&this->actor.projectedPos, 0x322D);
    temp_f14 = this->unk_268 - this->actor.world.pos.x;
    sp50 = (this->unk_26C - this->actor.world.pos.y) - 50.0f;
    sp54 = temp_f14;
    temp_f12 = this->unk_270 - this->actor.world.pos.z;
    sp4C = temp_f12;
    Math_ApproachS(&this->actor.world.rot.y, Math_FAtan2F(temp_f12, temp_f14), 0xA, 0x1000);
    temp_a0 = &this->actor.world.rot;
    temp_a1 = Math_FAtan2F(sqrtf((sp54 * sp54) + (sp4C * sp4C)), -sp50);
    sp3C = temp_a0;
    Math_ApproachS((s16 *) temp_a0, temp_a1, 0xA, 0x1000);
    this->unk_BC = (unaligned s32) sp3C->unk_0;
    this->actor.shape.rot.z = (s16) (u16) sp3C->z;
    Math_ApproachF(&this->actor.speedXZ, 25.0f, 1.0f, 3.0f);
    Math_ApproachF(&this->unk_260, __sinf(this->unk_148.animCurrentFrame * 0.62831855f) * 10.0f * 0.01f, 0.5f, 1.0f);
    Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
    if (this->actor.speedXZ >= 20.0f) {
        if ((this->unk_242 == 1) && (temp_f2 = this->actor.world.pos.x, temp_f12_2 = this->actor.world.pos.z, (sqrtf((temp_f2 * temp_f2) + (temp_f12_2 * temp_f12_2)) < 700.0f))) {
            func_809E4C34(temp_f12_2, this, globalCtx);
            return;
        }
        if ((this->actor.bgCheckFlags & 8) != 0) {
            play_sound(0x185CU);
            func_800BC848(this, globalCtx, 0x14, 0xF);
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x170, 0.0f, this->unk_258, 0.0f, (s16) 0, (s16) 0, (s16) 0x96, (s16) 0x30C);
            if ((this->unk_258 < sp48->world.pos.y) && ((sp48->bgCheckFlags & 1) != 0)) {
                func_800B8D50(globalCtx, NULL, 7.0f, Math_FAtan2F(sp48->world.pos.z, sp48->world.pos.x), 7.0f, 0U);
            }
            func_809E344C(this, globalCtx);
            this->unk_24E = 0x32;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_809E4C34(void *arg0, Boss03 *arg1) {
    arg0->unk_328 = func_809E4C90;
    arg0->unk_74 = -2.0f;
    arg0->unk_68 = 30.0f;
    arg0->unk_70 = 25.0f;
    func_809E2760(arg0 + 0xEC, 0x3941, arg0);
}

void func_809E4C90(Boss03 *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 *temp_s2;
    s16 temp_s0;
    s16 phi_s0;

    this->unk_254 = 0;
    func_809E2760(&this->actor.projectedPos, 0x324E);
    this->unk_148.animPlaybackSpeed = 2.0f;
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    Math_ApproachS((s16 *) &this->actor.world.rot, (s16) (s32) (this->actor.velocity.y * -300.0f), 2, 0x2000);
    this->actor.shape.rot.x = this->actor.world.rot.x;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    phi_s0 = 0;
    if ((this->actor.velocity.y < 0.0f) && (this->actor.world.pos.y < (this->unk_258 + 50.0f))) {
        this->unk_254 = 2;
        this->actor.gravity = 0.0f;
        Math_ApproachZeroF(&this->actor.velocity.y, 1.0f, 1.0f);
        if (this->actor.velocity.y == 0.0f) {
            func_809E344C(this, globalCtx);
            this->unk_24E = 0x32;
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    temp_s2 = &sp30;
    do {
        sp30 = randPlusMinusPoint5Scaled(150.0f) + this->actor.world.pos.x;
        sp34 = this->actor.world.pos.y;
        sp38 = randPlusMinusPoint5Scaled(150.0f) + this->actor.world.pos.z;
        func_809E2880(globalCtx, temp_s2);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 3);
}

void func_809E4E2C(Boss03 *arg0, GlobalContext *arg1) {
    Boss03 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809E4E80;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x148, &D_06009CF8, -10.0f);
    arg0->unk_148.animPlaybackSpeed = 2.0f;
}

void func_809E4E80(Boss03 *this, GlobalContext *globalCtx) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    f32 sp5C;
    s16 sp5A;
    s16 sp56;
    f32 sp50;
    f32 *sp38;
    f32 sp34;
    Actor *temp_s0;
    Camera *temp_v0_4;
    f32 *temp_s0_3;
    f32 *temp_s0_4;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a1;
    s16 temp_s0_2;
    s16 temp_s0_5;
    s16 temp_v0_5;
    u16 temp_t0;
    u32 temp_v0_2;
    u8 temp_t9;
    u8 temp_v0_3;
    void *temp_v0;
    s16 phi_s0;
    f32 phi_f2;
    s16 phi_s0_2;

    sp56 = 0;
    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    this->unk_254 = 0;
    this->unk_530 += 1;
    this->unk_290 = 0;
    sp5A = 0x4BC;
    temp_t0 = this->unk_534;
    switch (temp_t0) {
    case 0:
        if (temp_s0->world.pos.y < 1350.0f) {
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->unk_536 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk_536, 7);
            this->actor.world.rot.y = -0x7B30;
            this->unk_2CC = 1850.0f;
            this->actor.world.pos.x = 1400.0f;
            this->actor.world.pos.z = 1400.0f;
            this->actor.world.pos.y = 130.0f;
            temp_s0->shape.rot.y = 0;
            temp_s0->world.pos.y = 1850.0f;
            temp_s0->world.rot.y = temp_s0->shape.rot.y;
            this->unk_548 = 1850.0f + 30.0f;
            this->unk_534 = 1;
            this->unk_530 = 0;
            this->actor.flags &= -2;
            this->unk_2D5 = 1;
            this->unk_578 = (f32) gGameInfo->data[1262] + 60.0f;
        case 1:
            temp_s0->world.pos.z = 0.0f;
            temp_s0->world.pos.x = 0.0f;
            temp_s0->speedXZ = 0.0f;
            this->unk_538 = 100.0f;
            this->unk_53C = 540.0f;
            this->unk_540 = temp_s0->world.pos.z + 100.0f;
            this->unk_544 = temp_s0->world.pos.x;
            Math_ApproachF(&this->unk_548, temp_s0->world.pos.y + 30.0f, 0.5f, 100.0f);
            this->unk_54C = temp_s0->world.pos.z;
            if ((u32) this->unk_530 >= 0x6AU) {
                this->unk_534 = 2;
                this->unk_530 = 0;
                this->unk_240 = 0;
                func_8016566C(0x96);
                this->unk_578 = 80.0f;
            case 2:
                Audio_PlayActorSound2((Actor *) this, 0x3140U);
                temp_v0 = (this->unk_242 * 0xC) + &D_809E9104;
                temp_f2 = temp_v0->unk_0 - this->actor.world.pos.x;
                sp6C = temp_f2;
                temp_f18 = temp_v0->unk_8 - this->actor.world.pos.z;
                sp64 = temp_f18;
                temp_f12 = sqrtf((temp_f2 * temp_f2) + (temp_f18 * temp_f18));
                sp34 = temp_f12;
                Math_ApproachS((s16 *) &this->actor.world.rot, Math_FAtan2F(temp_f12, -(temp_v0->unk_4 - this->actor.world.pos.y)), 0xA, this->unk_274);
                Math_ApproachS(&this->actor.world.rot.y, Math_FAtan2F(sp64, sp6C), 0xA, this->unk_274);
                Math_ApproachS(&this->unk_274, 0x200, 1, 0x10);
                temp_v0_2 = this->unk_530;
                if ((temp_v0_2 >= 0x1FU) && (temp_v0_2 < 0x32U)) {
                    sp56 = 2;
                }
                if ((temp_v0_2 == 0x28) || (temp_v0_2 == (gGameInfo->data[1339] + 0x10E))) {
                    Audio_PlayActorSound2((Actor *) this, 0x389CU);
                }
                if (this->unk_530 >= 0x33U) {
                    Math_ApproachF(&this->actor.speedXZ, this->unk_278, 1.0f, 0.1f);
                }
                temp_v0_3 = this->unk_242;
                if ((s32) temp_v0_3 < 2) {
                    temp_t9 = temp_v0_3 + 1;
                    if (sp34 < 100.0f) {
                        this->unk_242 = temp_t9;
                        this->unk_274 = 0;
                        if ((temp_t9 & 0xFF) >= 2) {
                            this->unk_530 = 0x64;
                        }
                    }
                    this->unk_278 = 5.0f;
                } else {
                    this->unk_278 = 0.0f;
                    sp56 = 1;
                    if ((this->actor.speedXZ == 0.0f) && ((u32) this->unk_530 >= 0xE7U)) {
                        this->unk_534 = 3;
                        this->unk_530 = 0;
                    }
                    if (this->unk_530 == 0xA5) {
                        Audio_PlayActorSound2((Actor *) this, 0x38C5U);
                    }
                    if (this->unk_530 == 0xB4) {
                        Audio_PlayActorSound2((Actor *) this, 0x389CU);
                    }
                }
            }
        }
        break;
    case 3:
        func_809E2760(&this->actor.projectedPos, 0x322D);
        sp5A = 0x1970;
        Math_ApproachF(&this->actor.speedXZ, 15.0f, 1.0f, 2.0f);
        if ((u32) this->unk_530 >= 0x15U) {
            this->unk_534 = 4;
            this->unk_530 = 0;
        }
        break;
    case 4:
        temp_s0->shape.rot.y = 0;
        temp_s0->world.rot.y = temp_s0->shape.rot.y;
        if (this->unk_530 == 5) {
            func_800B7298(globalCtx, (Actor *) this, 8U);
        }
        this->unk_538 = temp_s0->world.pos.x + 30.0f;
        this->unk_53C = (f32) gGameInfo->data[2417] + ((temp_s0->world.pos.y + func_800B6FC8((Player *) temp_s0)) - 4.0f);
        this->unk_540 = temp_s0->world.pos.z - 30.0f;
        this->unk_544 = temp_s0->world.pos.x;
        this->unk_548 = (f32) gGameInfo->data[2418] + (((temp_s0->world.pos.y + func_800B6FC8((Player *) temp_s0)) - 18.0f) + 6.0f);
        this->unk_54C = temp_s0->world.pos.z;
        if (temp_s0->unk_14B == 0) {
            this->unk_53C -= 60.0f;
            this->unk_548 -= 35.0f;
        }
        this->unk_578 = 60.0f;
        if (this->unk_530 == 0x10) {
            this->unk_534 = 5;
            this->unk_530 = 0;
            this->unk_2D5 = 0;
            this->actor.speedXZ = -200.0f;
            Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
            this->actor.world.pos.y = this->unk_258 - 150.0f;
            func_80165690();
        case 5:
            SkelAnime_FrameUpdateMatrix(&this->unk_148);
            this->actor.speedXZ = 20.0f;
            Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
            temp_s0->shape.rot.y = -0x1470;
            temp_s0->world.rot.y = temp_s0->shape.rot.y;
            this->unk_538 = ((temp_s0->world.pos.x + 30.0f) - 90.0f) + 300.0f;
            this->unk_53C = temp_s0->world.pos.y + 40.0f + 10.0f;
            this->unk_544 = this->actor.world.pos.x;
            this->unk_540 = (temp_s0->world.pos.z - 30.0f) + 160.0f + 300.0f;
            this->unk_548 = this->actor.world.pos.y - 100.0f;
            this->unk_54C = this->actor.world.pos.z;
            if (this->unk_530 == 0xA) {
                this->actor.velocity.y = 30.0f;
                this->unk_534 = 6;
                this->unk_530 = 0;
                this->actor.gravity = -1.5f;
                this->actor.speedXZ = 20.0f;
                func_801A89A8(0x801B);
                Audio_PlayActorSound2((Actor *) this, 0x3941U);
                this->unk_148.animPlaybackSpeed = 1.0f;
            }
        }
        break;
    case 6:
        Audio_PlayActorSound2((Actor *) this, 0x324EU);
        if (this->unk_530 == 0x1E) {
            Actor_TitleCardCreate(globalCtx, &globalCtx->actorCtx.titleCtxt, Lib_SegmentedToVirtual(&D_06007EC8), 0xA0, (s16) 0xB4, (u8) 0x80, (u8) 0x28);
        }
        if ((this->unk_530 < 0x18U) || (this->unk_530 >= 0x5AU)) {
            SkelAnime_FrameUpdateMatrix(&this->unk_148);
            Math_ApproachS((s16 *) &this->actor.world.rot, (s16) (s32) (this->actor.velocity.y * -300.0f), 3, 0x1000);
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            phi_s0 = 0;
            if ((this->actor.velocity.y <= 0.0f) && (this->actor.world.pos.y < (this->unk_258 + 50.0f))) {
                this->unk_254 = 2;
                this->actor.gravity = 0.0f;
                Math_ApproachZeroF(&this->actor.velocity.y, 1.0f, 1.0f);
                Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 0.5f);
            } else {
                do {
                    sp70 = randPlusMinusPoint5Scaled(150.0f) + this->actor.world.pos.x;
                    sp74 = this->actor.world.pos.y;
                    sp78 = randPlusMinusPoint5Scaled(150.0f) + this->actor.world.pos.z;
                    func_809E2880(globalCtx, &sp70);
                    temp_s0_2 = phi_s0 + 1;
                    phi_s0 = temp_s0_2;
                } while ((s32) temp_s0_2 < 3);
                this->unk_55C = this->actor.world.pos.x;
                this->unk_564 = this->actor.world.pos.z;
                this->unk_560 = this->actor.world.pos.y - 100.0f;
            }
        } else {
            Math_ApproachF(&this->unk_538, (((temp_s0->world.pos.x + 30.0f) - 90.0f) + 300.0f) - 90.0f, 0.05f, 3.0f);
            Math_ApproachF(&this->unk_53C, temp_s0->world.pos.y + 40.0f + 10.0f + 90.0f, 0.05f, 3.0f);
            Math_ApproachF(&this->unk_540, ((temp_s0->world.pos.z - 30.0f) + 160.0f + 300.0f) - 90.0f, 0.05f, 3.0f);
            Math_ApproachF(&this->unk_568, 90.0f, 0.05f, 3.0f);
        }
        temp_s0_3 = &this->unk_544;
        Math_ApproachF(temp_s0_3, this->unk_55C, 0.5f, 100.0f);
        Math_ApproachF(&this->unk_548, this->unk_560 + this->unk_568, 0.5f, 100.0f);
        Math_ApproachF(&this->unk_54C, this->unk_564, 0.5f, 100.0f);
        if (this->unk_530 == 0x91) {
            sp38 = &this->unk_538;
            temp_v0_4 = Play_GetCamera(globalCtx, 0);
            temp_v0_4->eye.x = sp38->unk_0;
            temp_v0_4->eye.y = sp38[1];
            temp_v0_4->eye.z = sp38[2];
            temp_v0_4->eyeNext.x = sp38->unk_0;
            temp_v0_4->eyeNext.y = sp38[1];
            temp_v0_4->eyeNext.z = sp38[2];
            temp_v0_4->at.x = temp_s0_3->unk_0;
            temp_v0_4->at.y = temp_s0_3[1];
            temp_v0_4->at.z = temp_s0_3[2];
            func_80169AFC(globalCtx, this->unk_536, 0);
            func_800EA0EC(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            this->unk_536 = 0;
            func_809E344C(this, globalCtx);
            this->unk_24E = 0x32;
            gSaveContext.eventInf[5] |= 0x40;
        }
        break;
    }
    temp_v0_5 = (s16) this->unk_534;
    this->unk_BC = (unaligned s32) this->unk_30;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
    if ((temp_v0_5 == 2) || (temp_v0_5 == 3)) {
        sp38 = &this->unk_538;
        temp_s0_4 = &this->unk_544;
        Actor_SetVelocityAndMoveXYRotationReverse((Actor *) this);
        temp_f2_2 = this->actor.speedXZ * 0.02f;
        phi_f2 = temp_f2_2;
        if (temp_f2_2 > 0.12f) {
            phi_f2 = 0.12f;
        }
        sp50 = phi_f2;
        sp5C = Math_SinS((s16) (this->unk_240 * sp5A)) * phi_f2;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        Matrix_RotateY(this->actor.world.rot.y, 1U);
        SysMatrix_InsertYRotation_f(sp5C, 1);
        SysMatrix_InsertXRotation_s(this->actor.world.rot.x, 1);
        SysMatrix_GetStateTranslationAndScaledZ(100.0f, (Vec3f *) temp_s0_4);
        sp38->unk_0 = this->actor.world.pos.x;
        sp38[1] = this->actor.world.pos.y;
        sp38[2] = this->actor.world.pos.z;
        phi_s0_2 = 0;
        if ((s32) sp56 > 0) {
            do {
                sp70 = randPlusMinusPoint5Scaled(100.0f) + this->unk_544;
                sp74 = (randPlusMinusPoint5Scaled(100.0f) + this->unk_548) - 150.0f;
                sp78 = randPlusMinusPoint5Scaled(100.0f) + this->unk_54C;
                func_809E2AB4(globalCtx, &sp70);
                temp_s0_5 = phi_s0_2 + 1;
                phi_s0_2 = temp_s0_5;
            } while ((s32) temp_s0_5 < (s32) sp56);
        }
    }
    temp_a1 = this->unk_536;
    if (temp_a1 != 0) {
        Play_CameraSetAtEye(globalCtx, temp_a1, (Vec3f *) &this->unk_544, (Vec3f *) &this->unk_538);
        func_80169940(globalCtx, this->unk_536, this->unk_578);
    }
}

void func_809E5ADC(Actor *arg0, GlobalContext *arg1) {
    arg0[2].colChkInfo.damageTable = func_809E5B64;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x148, &D_06009554, -10.0f);
    arg0->unk_52C = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06009554);
    func_801A89A8(0x100100FF);
    arg0->unk_24C = 0;
    arg0->unk_242 = 0;
    arg0->unk_534 = 0;
    arg0->flags &= -2;
}

void func_809E5B64(Boss03 *this, GlobalContext *globalCtx) {
    s16 sp9E;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp64;
    Camera *sp60;
    Actor *sp5C;
    f32 sp4C;
    f32 *sp48;
    f32 *sp44;
    ActorContext *temp_a0_4;
    Camera *temp_a0;
    Camera *temp_v0;
    Camera *temp_v0_2;
    SkelAnime *temp_a0_2;
    Vec3f *temp_a0_3;
    f32 *temp_v1_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a1;
    s16 temp_v0_3;
    s16 temp_v1;
    u8 temp_v1_2;
    Camera *phi_a0;
    s16 phi_v0;

    temp_v0 = Play_GetCamera(globalCtx, 0);
    temp_a0 = temp_v0;
    sp5C = globalCtx->actorCtx.actorList[2].first;
    sp64 = this->actor.scale.x * 5.0f;
    temp_v1 = (s16) this->unk_534;
    this->unk_530 += 1;
    if (temp_v1 != 0) {
        phi_a0 = temp_a0;
        if (temp_v1 != 1) {
            sp60 = temp_v0;
            if (temp_v1 != 2) {

            } else {
                goto block_10;
            }
        } else {
            goto block_9;
        }
    } else {
        sp60 = temp_a0;
        if (ActorCutscene_GetCurrentIndex() == -1) {
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 1U);
            this->unk_536 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk_536, 7);
            this->unk_2BE = Math_FAtan2F(this->actor.world.pos.z, this->actor.world.pos.x);
            if ((this->unk_258 < sp5C->world.pos.y) && ((sp5C->bgCheckFlags & 1) != 0)) {
                sp5C->world.pos.x = 0.0f;
                sp5C->world.pos.z = -200.0f;
            }
            phi_a0 = sp60;
block_9:
            this->unk_530 = 0;
            this->unk_534 = 2;
            this->unk_538 = phi_a0->eye.x;
            this->unk_53C = phi_a0->eye.y;
            this->unk_540 = phi_a0->eye.z;
            this->unk_544 = phi_a0->at.x;
            this->unk_548 = phi_a0->at.y;
            this->unk_54C = phi_a0->at.z;
            this->unk_568 = Math_Acot2F(this->unk_540 - this->actor.world.pos.z, this->unk_538 - this->actor.world.pos.x);
            this->unk_570 = 0.0f;
            this->unk_56C = 0.0f;
block_10:
            sp90 = 0.0f;
            sp94 = (50.0f * sp64) + 150.0f;
            sp98 = (400.0f * sp64) + 300.0f;
            this->unk_55C = this->actor.world.pos.x;
            this->unk_560 = this->actor.world.pos.y;
            this->unk_568 += this->unk_56C;
            this->unk_564 = this->actor.world.pos.z;
            SysMatrix_InsertYRotation_f(this->unk_568, 0);
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp90, &this->unk_550);
            this->unk_550.x += this->actor.world.pos.x;
            this->unk_550.y += this->unk_258;
            temp_f0 = 40.0f + 0.0f;
            this->unk_550.z += this->actor.world.pos.z;
            sp4C = temp_f0;
            Math_ApproachF(&this->unk_538, this->unk_550.x, 0.1f, temp_f0);
            Math_ApproachF(&this->unk_53C, this->unk_550.y, 0.1f, sp4C);
            Math_ApproachF(&this->unk_540, this->unk_550.z, 0.1f, sp4C);
            temp_f0_2 = 70.0f + 0.0f;
            sp4C = temp_f0_2;
            Math_ApproachF(&this->unk_544, this->unk_55C, 0.1f, temp_f0_2);
            Math_ApproachF(&this->unk_548, this->unk_560, 0.1f, sp4C);
            Math_ApproachF(&this->unk_54C, this->unk_564, 0.1f, sp4C);
        }
    }
    temp_a0_2 = &this->unk_148;
    sp4C = (bitwise f32) temp_a0_2;
    SkelAnime_FrameUpdateMatrix(temp_a0_2);
    temp_v1_2 = this->unk_242;
    if (temp_v1_2 != 0) {
        if (temp_v1_2 != 1) {
            if (temp_v1_2 != 2) {
                if (temp_v1_2 != 3) {

                } else {
                    this->actor.world.pos.y = 5000.0f;
                }
            } else {
                Math_ApproachZeroF(&this->unk_56C, 1.0f, 0.0005f);
                if (this->unk_530 == 0x3C) {
                    temp_v1_3 = &this->unk_538;
                    sp44 = &this->unk_544;
                    sp48 = temp_v1_3;
                    sp4C = (bitwise f32) &globalCtx->csCtx;
                    temp_v0_2 = Play_GetCamera(globalCtx, 0);
                    temp_v0_2->eye.x = temp_v1_3->unk_0;
                    temp_v0_2->eye.y = temp_v1_3[1];
                    temp_v0_2->eye.z = temp_v1_3[2];
                    temp_v0_2->eyeNext.x = temp_v1_3->unk_0;
                    temp_v0_2->eyeNext.y = temp_v1_3[1];
                    temp_v0_2->eyeNext.z = temp_v1_3[2];
                    temp_v0_2->at.x = sp44->unk_0;
                    temp_v0_2->at.y = sp44[1];
                    temp_v0_2->at.z = sp44[2];
                    func_80169AFC(globalCtx, this->unk_536, 0);
                    this->unk_536 = 0;
                    func_800EA0EC(globalCtx, (bitwise CutsceneContext *) sp4C);
                    func_800B7298(globalCtx, (Actor *) this, 6U);
                    this->unk_534 = 3;
                    func_80165690();
                    func_809E2760(&this->actor.projectedPos, 0x3952);
                    func_809E2760(&D_809E9848, 0x3952);
                }
            }
        } else {
            if (this->unk_240 == 0x96) {
                func_801A89A8(0x8021);
            }
            Math_ApproachF(&this->unk_56C, 0.01f, 1.0f, 0.0005f);
            Math_ApproachF((f32 *) &this->actor.scale, 0.01f, 0.05f, 0.001f);
            Actor_SetScale((Actor *) this, this->actor.scale.x);
            if (this->actor.velocity.y < 0.0f) {
                temp_f0_3 = 440.0f + (100.0f * sp64);
                if (this->actor.world.pos.y < temp_f0_3) {
                    this->actor.world.pos.y = temp_f0_3;
                    this->actor.velocity.y = ((Rand_ZeroFloat(10.0f) + 7.5f) * sp64) + 7.5f;
                    this->actor.speedXZ = ((Rand_ZeroFloat(5.0f) + 2.5f) * sp64) + 2.5f;
                    if (Rand_ZeroOne() < 0.5f) {
                        this->unk_2D6 = (s32) randPlusMinusPoint5Scaled(500.0f) + this->unk_2D6 + 0x8000;
                    }
                    if (Rand_ZeroOne() < 0.5f) {
                        this->unk_2DA = (s32) randPlusMinusPoint5Scaled(500.0f) + this->unk_2DA + 0x8000;
                    }
                    if (Rand_ZeroOne() < 0.5f) {
                        this->unk_2D8 = (s16) (s32) Rand_ZeroFloat(65536.0f);
                    }
                    this->actor.world.rot.y = Math_FAtan2F(-this->actor.world.pos.z, -this->actor.world.pos.x);
                    temp_a0_3 = &this->actor.projectedPos;
                    sp48 = (f32 *) temp_a0_3;
                    func_809E2760(temp_a0_3, 0x3947);
                    func_809E2760(temp_a0_3, 0x3958);
                }
            }
            Math_ApproachS(&this->actor.shape.rot.y, this->unk_2D8, 3, 0x500);
            Math_ApproachS((s16 *) &this->actor.shape, this->unk_2D6, 3, 0xA00);
            Math_ApproachS(&this->actor.shape.rot.z, this->unk_2DA, 3, 0xA00);
            sp4C = 150.0f * sp64;
            phi_v0 = 0;
            do {
                sp9E = phi_v0;
                sp78 = randPlusMinusPoint5Scaled(sp4C) + this->actor.world.pos.x;
                sp7C = this->actor.world.pos.y;
                sp80 = randPlusMinusPoint5Scaled(sp4C) + this->actor.world.pos.z;
                func_809E2880(globalCtx, &sp78);
                temp_v0_3 = phi_v0 + 1;
                phi_v0 = temp_v0_3;
            } while ((s32) temp_v0_3 <= 0);
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            if (this->actor.scale.x <= 0.0111f) {
                this->unk_242 = 2;
                temp_a0_4 = &globalCtx->actorCtx;
                sp4C = (bitwise f32) temp_a0_4;
                sp48 = (f32 *) &this->actor.projectedPos;
                Actor_SpawnAsChild(temp_a0_4, (Actor *) this, globalCtx, 0x38, 0.0f, 440.0f, 200.0f, (s16) 0, (s16) 0, (s16) 0, 1);
                Actor_Spawn(temp_a0_4, globalCtx, 0x3A, this->actor.focus.pos.x, 440.0f, this->actor.focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
                this->unk_530 = 0;
                Actor_SetScale((Actor *) this, 0.0f);
                func_801A72CC((Vec3f *) sp48);
            }
        }
    } else {
        Math_ApproachF(&this->actor.world.pos.y, (Math_SinS((s16) (this->unk_240 << 0xC)) * 80.0f) + this->unk_258, 1.0f, 10.0f);
        this->actor.shape.rot.z += 0x100;
        Matrix_RotateY(this->unk_2BE, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(500.0f, (Vec3f *) &sp84);
        Math_ApproachF((f32 *) &this->actor.world, sp84, 0.1f, 5.0f);
        Math_ApproachF(&this->actor.world.pos.z, sp8C, 0.1f, 5.0f);
        if (func_801378B8((bitwise SkelAnime *) sp4C, this->unk_52C) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x395AU);
        }
        if (func_801378B8((bitwise SkelAnime *) sp4C, this->unk_52C * 0.5f) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3959U);
        }
        if ((this->unk_24C == 0) && ((this->unk_258 - 100.0f) < this->actor.world.pos.y)) {
            this->unk_24C = (s16) (s32) (Rand_ZeroFloat(15.0f) + 15.0f);
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x170, this->actor.world.pos.x, this->unk_258, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0x78, (s16) 0x309);
            if (func_809E5B64 == this->actionFunc) {
                if ((D_809E9840 & 1) != 0) {
                    func_809E2760(&this->actor.projectedPos, 0x3941);
                } else {
                    func_809E2760(&this->actor.projectedPos, 0x3942);
                }
                D_809E9840 = D_809E9840 + 1;
            }
            temp_f2 = this->actor.world.pos.x;
            temp_f12 = this->actor.world.pos.z;
            this->unk_280 = 0x1B;
            this->unk_284 = temp_f2;
            this->unk_288 = this->unk_258;
            this->unk_28C = temp_f12;
            if ((fabsf(temp_f2 - sp84) < 5.0f) && (fabsf(temp_f12 - sp8C) < 5.0f)) {
                this->unk_242 = 1;
                this->actor.world.rot.y = this->unk_2BE + 0x8000;
                this->unk_240 = 0;
                this->actor.gravity = -2.0f;
                this->actor.velocity.y = 25.0f;
                this->actor.speedXZ = 10.0f;
                Audio_PlayActorSound2((Actor *) this, 0x395AU);
            }
        }
        Math_ApproachF(&this->unk_56C, 0.01f, 1.0f, 0.0005f);
    }
    temp_a1 = this->unk_536;
    if (temp_a1 != 0) {
        Play_CameraSetAtEye(globalCtx, temp_a1, (Vec3f *) &this->unk_544, (Vec3f *) &this->unk_538);
    }
}

void func_809E65F4(Boss03 *arg0, GlobalContext *arg1) {
    Boss03 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809E6640;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x148, &D_06009C14, -15.0f);
    arg0->unk_534 = 0;
    arg0->unk_530 = 0;
}

void func_809E6640(Boss03 *this, GlobalContext *globalCtx) {
    Actor *sp54;
    CutsceneContext *sp44;
    f32 *sp40;
    Camera *temp_v0_2;
    f32 *temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u32 phi_v1;

    sp54 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    temp_v1 = (s16) this->unk_534;
    this->unk_530 += 1;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {

        } else {
            goto block_5;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, (Actor *) this, 1U);
        this->unk_536 = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unk_536, 7);
        this->unk_534 = 1;
        this->unk_2BE = 0xBB8;
block_5:
        if (sp54->world.pos.y < 437.0f) {
            sp54->world.pos.z = 500.0f;
            sp54->world.pos.x = 500.0f;
        }
        this->actor.shape.rot.z = 0;
        this->actor.world.pos.z = 1000.0f;
        this->actor.world.pos.x = 1000.0f;
        this->actor.world.pos.y = 200.0f;
        this->actor.shape.rot.x = this->actor.shape.rot.z;
        temp_v0 = Math_FAtan2F(-1000.0f, -1000.0f);
        this->actor.world.rot.y = temp_v0;
        this->actor.shape.rot.y = temp_v0;
        this->unk_260 = 0.0f;
        temp_v1_2 = this->actor.world.rot.y + 0x8000;
        sp54->world.rot.y = temp_v1_2;
        sp54->shape.rot.y = temp_v1_2;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        Matrix_RotateY((s16) (this->actor.shape.rot.y + this->unk_2BE), 1U);
        temp_a1 = &this->unk_538;
        sp40 = temp_a1;
        SysMatrix_GetStateTranslationAndScaledZ(340.0f, (Vec3f *) temp_a1);
        this->unk_544 = this->actor.world.pos.x;
        this->unk_548 = this->actor.world.pos.y;
        this->unk_54C = this->actor.world.pos.z;
        Math_ApproachS(&this->unk_2BE, -0xFA0, 0xA, 0x46);
        temp_v1_3 = this->unk_530;
        phi_v1 = temp_v1_3;
        if (temp_v1_3 >= 0x3DU) {
            Math_ApproachS(&this->unk_2A8, 0x3200, 5, 0x500);
            temp_v1_4 = this->unk_530;
            phi_v1 = temp_v1_4;
            if ((temp_v1_4 >= 0x5AU) && (temp_v1_4 < 0x82U)) {
                if ((temp_v1_4 & 1) != 0) {
                    Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x23F, this->actor.world.pos.x - 110.0f, this->actor.world.pos.y - 20.0f, this->actor.world.pos.z - 110.0f, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 0);
                    this->unk_252 += 1;
                }
                phi_v1 = this->unk_530;
                if ((this->unk_530 & 7) == 0) {
                    Audio_PlayActorSound2((Actor *) this, 0x3AD6U);
                    phi_v1 = this->unk_530;
                }
            }
        }
        if (phi_v1 >= 0x96U) {
            sp44 = &globalCtx->csCtx;
            temp_v0_2 = Play_GetCamera(globalCtx, 0);
            temp_v0_2->eye.x = sp40->unk_0;
            temp_v0_2->eye.y = sp40[1];
            temp_v0_2->eye.z = sp40[2];
            temp_v0_2->eyeNext.x = sp40->unk_0;
            temp_v0_2->eyeNext.y = sp40[1];
            temp_v0_2->eyeNext.z = sp40[2];
            temp_v0_2->at.x = this->unk_544;
            temp_v0_2->at.y = this->unk_548;
            temp_v0_2->at.z = this->unk_54C;
            func_80169AFC(globalCtx, this->unk_536, 0);
            this->unk_536 = 0;
            func_800EA0EC(globalCtx, sp44);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            func_809E344C(this, globalCtx);
            this->unk_24E = 0x32;
        }
    }
    temp_a1_2 = this->unk_536;
    if (temp_a1_2 != 0) {
        Play_CameraSetAtEye(globalCtx, temp_a1_2, (Vec3f *) &this->unk_544, (Vec3f *) &this->unk_538);
    }
}

void func_809E69A4(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    void (*sp18)(Actor *, GlobalContext *);
    SkelAnime *temp_a0;
    Actor *phi_a3;

    if (func_809E6A38 != arg0[2].colChkInfo.damageTable) {
        temp_a0 = arg0 + 0x148;
        sp1C = arg1->actorCtx.actorList[2].first;
        sp18 = func_809E6A38;
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060099D0, -15.0f);
        arg0->unk_250 = 0xC8;
        arg0[2].colChkInfo.damageTable = func_809E6A38;
    }
    phi_a3 = arg0;
    if (arg0 == arg1->actorCtx.actorList[2].first->parent) {
        arg1->actorCtx.actorList[2].first->unk_AE8 = 0x65;
        arg1->actorCtx.actorList[2].first->parent = NULL;
        arg1->actorCtx.actorList[2].first->unk_394 = 0;
        arg0 = arg0;
        func_80165690();
        phi_a3 = arg0;
    }
    phi_a3->unk_240 = 0;
}

void func_809E6A38(Actor *arg0, GlobalContext *arg1) {
    arg0->hintId = 0x29;
    if ((s32) arg0->unk_240 >= 0x10) {
        func_809E2760(arg0 + 0xEC, 0x301B);
    }
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if ((arg0->unk_258 + 30.0f) < arg0->world.pos.y) {
        arg0->gravity = -2.0f;
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        if ((arg0->bgCheckFlags & 2) != 0) {
            play_sound(0x181AU);
            func_800BC848((Boss03 *) arg0, arg1, 0xA, 0xA);
        }
    } else {
        Math_ApproachS(arg0 + 0xC0, -0x6000, 0xA, 0x900);
        Math_ApproachS((s16 *) &arg0->world.rot, 0x800, 0xA, 0x1000);
        arg0->shape.rot.x = arg0->world.rot.x;
        Math_ApproachF(&arg0->world.pos.y, 100.0f, 0.05f, 5.0f);
        Math_ApproachF(&arg0->speedXZ, 0.0f, 1.0f, 1.5f);
        Actor_SetVelocityAndMoveXYRotationReverse(arg0);
    }
    if (arg0->unk_250 == 0) {
        func_809E344C((Boss03 *) arg0, arg1);
    }
}

void func_809E6B70(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x148;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06009554, -10.0f);
    arg0[2].colChkInfo.damageTable = func_809E6BC0;
    arg0->unk_24C = 0x1E;
}

void func_809E6BC0(Boss03 *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    this->unk_25C = 0xF;
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    Math_ApproachS(&this->unk_2A8, (s16) (s32) ((Math_SinS((s16) (this->unk_240 << 0xD)) * 3000.0f) + 12288.0f), 2, 0x3000);
    Math_ApproachF(&this->actor.world.pos.y, 200.0f, 0.05f, 10.0f);
    if (this->unk_24C == 0) {
        if (((s32) (s8) this->actor.colChkInfo.health < 6) && (temp_v0 = this->unk_253, (temp_v0 == 0))) {
            this->unk_253 = temp_v0 + 1;
            func_809E65F4(this, globalCtx);
            return;
        }
        func_809E344C(this, globalCtx);
        this->unk_24E = 0x64;
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_809E6CB4(Actor *arg0, GlobalContext *arg1) {
    u8 sp4B;
    void (*sp30)(Actor *, GlobalContext *);
    Vec3f *temp_s2;
    Vec3f *temp_s2_2;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    void *temp_a1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    s32 phi_s0;
    void *phi_v0;
    void *phi_v0_2;
    void *phi_v0_3;
    void *phi_v0_4;
    u8 phi_v0_5;
    u8 phi_v1;
    s32 phi_s0_2;
    s32 phi_s0_3;
    u8 phi_v0_6;
    u8 phi_v1_2;

    sp4B = 1;
    temp_f0 = arg0->unk_258;
    temp_s1 = arg1->actorCtx.actorList[2].first;
    temp_f2 = temp_s1->world.pos.y;
    phi_s0 = 0;
    phi_s0_2 = 0;
    phi_s0_3 = 0;
    if ((((f32) gGameInfo->data[1268] + (temp_f0 - 50.0f)) < temp_f2) && (temp_s1->unk_14B != 0)) {
        sp4B = 0;
    }
    if (temp_f0 < temp_f2) {
        do {
            temp_v0 = arg0->unk_348 + phi_s0;
            temp_v1 = temp_v0->unk_15;
            temp_s0 = phi_s0 + 0x40;
            phi_s0 = temp_s0;
            if ((temp_v1 & 2) != 0) {
                temp_v0->unk_15 = (u8) (temp_v1 & ~2);
                temp_s1->unk_B80 = 20.0f;
                temp_s1[9].unk20 = arg0->shape.rot.y;
            }
        } while (temp_s0 < 0x80);
        temp_a1 = arg0->unk_3E8;
        temp_s0_2 = 1 << 6;
        temp_v1_2 = temp_a1->unk_15;
        if ((temp_v1_2 & 2) != 0) {
            temp_a1->unk_15 = (u8) (temp_v1_2 & ~2);
            temp_s1->unk_B80 = 20.0f;
            temp_s1[9].unk20 = arg0->shape.rot.y;
        }
        temp_v0_2 = arg0->unk_3E8 + temp_s0_2;
        temp_v1_3 = temp_v0_2->unk_15;
        phi_v0 = temp_v0_2;
        if ((temp_v1_3 & 2) != 0) {
            temp_v0_2->unk_15 = (u8) (temp_v1_3 & ~2);
            temp_s1->unk_B80 = 20.0f;
            temp_s1[9].unk20 = arg0->shape.rot.y;
            phi_v0 = arg0->unk_3E8 + temp_s0_2;
        }
        temp_v1_4 = phi_v0->unk_55;
        phi_v0_2 = phi_v0;
        if ((temp_v1_4 & 2) != 0) {
            phi_v0->unk_55 = (u8) (temp_v1_4 & ~2);
            temp_s1->unk_B80 = 20.0f;
            temp_s1[9].unk20 = arg0->shape.rot.y;
            phi_v0_2 = arg0->unk_3E8 + temp_s0_2;
        }
        temp_v1_5 = phi_v0_2->unk_95;
        phi_v0_3 = phi_v0_2;
        if ((temp_v1_5 & 2) != 0) {
            phi_v0_2->unk_95 = (u8) (temp_v1_5 & ~2);
            temp_s1->unk_B80 = 20.0f;
            temp_s1[9].unk20 = arg0->shape.rot.y;
            phi_v0_3 = arg0->unk_3E8 + temp_s0_2;
        }
        temp_v1_6 = phi_v0_3->unk_D5;
        if ((temp_v1_6 & 2) != 0) {
            phi_v0_3->unk_D5 = (u8) (temp_v1_6 & ~2);
            temp_s1->unk_B80 = 20.0f;
            temp_s1[9].unk20 = arg0->shape.rot.y;
        }
    }
    if (arg0[1].freezeTimer == 0) {
        sp30 = func_809E6A38;
        if ((func_809E6A38 == arg0[2].colChkInfo.damageTable) && (sp4B != 0)) {
            phi_v0_4 = arg0->unk_3E8;
loop_22:
            temp_v1_7 = phi_v0_4->unk_16;
            if ((temp_v1_7 & 2) != 0) {
                phi_v0_4->unk_16 = (u8) (temp_v1_7 & ~2);
                arg0[1].freezeTimer = 0xF;
                arg0[1].colorFilterParams = 0xF;
                phi_v0_5 = 0U;
                if ((*phi_v0_4->unk_24 & 0x38AC302) != 0) {
                    phi_v0_5 = (arg0->unk_3E8 + phi_s0_2)->unk_24->unk_5;
                }
                phi_v1 = phi_v0_5;
                if (phi_v0_5 == 0) {
                    phi_v1 = 1U;
                }
                arg0->colChkInfo.health -= phi_v1;
                if ((s32) (s8) arg0->colChkInfo.health <= 0) {
                    func_809E2760(&D_809E9848, 0x3946);
                    func_809E2760(&D_809E9848, 0x3953);
                    func_809E5ADC(arg0, arg1);
                    Enemy_StartFinishingBlow(arg1, arg0);
                    return;
                }
                func_809E6B70(arg0, arg1);
                func_809E2760(&arg0->projectedPos, 0x3945);
                return;
            }
            temp_s0_3 = phi_s0_2 + 0x40;
            phi_v0_4 += 0x40;
            phi_s0_2 = temp_s0_3;
            if (temp_s0_3 == 0x140) {
                goto block_31;
            }
            goto loop_22;
        }
block_31:
loop_32:
        temp_s2 = &arg0->projectedPos;
        temp_v0_3 = arg0->unk_348 + phi_s0_3;
        temp_v1_8 = temp_v0_3->unk_16;
        if ((temp_v1_8 & 2) != 0) {
            temp_v0_3->unk_16 = (u8) (temp_v1_8 & ~2);
            arg0[1].freezeTimer = 0xF;
            if (sp30 != arg0[2].colChkInfo.damageTable) {
                func_809E69A4(arg0, arg1, 0xFU);
                func_809E2760(temp_s2, 0x3945);
                if (arg0 == temp_s1->parent) {
                    temp_s1->unk_AE8 = 0x65;
                    temp_s1->parent = NULL;
                    temp_s1->unk_394 = 0;
                    func_80165690();
                }
                goto block_44;
            }
            if (sp4B != 0) {
                arg0[1].colorFilterParams = 0xF;
                phi_v0_6 = 0U;
                if ((*temp_v0_3->unk_24 & 0x38AC302) != 0) {
                    phi_v0_6 = (arg0->unk_348 + phi_s0_3)->unk_24->unk_5;
                }
                phi_v1_2 = phi_v0_6;
                if (phi_v0_6 == 0) {
                    phi_v1_2 = 1U;
                }
                arg0->colChkInfo.health -= phi_v1_2;
                if ((s32) (s8) arg0->colChkInfo.health <= 0) {
                    func_809E2760(&D_809E9848, 0x3946, (void *) 0xFU);
                    func_809E2760(&D_809E9848, 0x3953);
                    Enemy_StartFinishingBlow(arg1, arg0);
                    func_809E5ADC(arg0, arg1);
                    return;
                }
                temp_s2_2 = &arg0->projectedPos;
                func_809E6B70(arg0, arg1, 0xFU);
                func_809E2760(temp_s2_2, 0x3945);
                return;
            }
            /* Duplicate return node #45. Try simplifying control flow for better match */
            return;
        }
block_44:
        temp_s0_4 = phi_s0_3 + 0x40;
        phi_s0_3 = temp_s0_4;
        if (temp_s0_4 == 0x80) {
            /* Duplicate return node #45. Try simplifying control flow for better match */
            return;
        }
        goto loop_32;
    }
}

void Boss03_Update(Actor *thisx, GlobalContext *globalCtx) {
    Boss03 *sp90;
    Actor *sp88;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s16 sp5E;
    f32 sp58;
    void (*sp50)(Actor *, GlobalContext *);
    ColliderJntSph *sp48;
    ColliderJntSph *sp44;
    Actor *temp_v0_4;
    ColliderJntSph *temp_a2;
    ColliderJntSph *temp_a2_2;
    CollisionCheckContext *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_7;
    s32 temp_s0_2;
    s32 temp_v1;
    u8 temp_v0_5;
    u8 temp_v0_6;
    void (*temp_v1_2)(Boss03 *, GlobalContext *);
    Boss03 *phi_v0;
    s32 phi_v1;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;
    Boss03 *this = (Boss03 *) thisx;

    sp90 = this;
    sp88 = globalCtx->actorCtx.actorList[2].first;
    this->actor.hintId = 0x28;
    if ((D_809E9842 == 0) && (sp88->world.pos.y < 445.0f)) {
        D_809E9842 = 1;
        D_809E9841 = 5;
    }
    if (gGameInfo->data[1311] == 0) {
        this->unk_290 = 1;
        this->unk_240 += 1;
        this->unk_2BC = 1;
        this->unk_2BD = 0;
        Math_Vec3f_Copy(&D_809E9848, &this->actor.projectedPos);
        phi_v0 = this;
        phi_v1 = 0;
        do {
            temp_a0 = phi_v0->unk_24C;
            temp_v1 = phi_v1 + 2;
            phi_v1 = temp_v1;
            if (temp_a0 != 0) {
                phi_v0->unk_24C = temp_a0 - 1;
            }
            phi_v0 += 2;
        } while (temp_v1 != 6);
        temp_v0 = this->unk_324;
        if (temp_v0 != 0) {
            this->unk_324 = temp_v0 - 1;
        }
        temp_v0_2 = this->unk_25C;
        if (temp_v0_2 != 0) {
            this->unk_25C = temp_v0_2 - 1;
        }
        temp_v0_3 = this->unk_25E;
        if (temp_v0_3 != 0) {
            this->unk_25E = temp_v0_3 - 1;
        }
        this->actionFunc(this, globalCtx);
        if (func_809E5B64 != this->actionFunc) {
            Math_ApproachS(&this->actor.shape.rot.z, 0, 0xA, 0x800);
            this->actor.world.pos.y -= 100.0f;
            this->actor.prevPos.y -= 100.0f;
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 150.0f, 100.0f, 5U);
            this->actor.world.pos.y += 100.0f;
            this->actor.prevPos.y += 100.0f;
        }
    }
    temp_v1_2 = this->actionFunc;
    if ((func_809E5B64 != temp_v1_2) && (this->unk_2D5 == 0) && (((temp_f0 = this->unk_258, temp_f2 = this->actor.world.pos.y, temp_f12 = temp_f0 + 50.0f, (temp_f2 < temp_f12)) && (temp_f12 <= this->actor.prevPos.y)) || ((temp_f12_2 = temp_f0 - 50.0f, (temp_f12_2 < temp_f2)) && (this->actor.prevPos.y <= temp_f12_2)))) {
        if ((this->actor.velocity.y < 0.0f) && (func_809E5B64 != temp_v1_2)) {
            Audio_PlayActorSound2((Actor *) this, 0x3942U);
        }
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x170, this->actor.world.pos.x, this->unk_258, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0x78, (s16) 0x309);
        this->unk_280 = 0x1B;
        this->unk_284 = this->actor.world.pos.x;
        this->unk_288 = this->unk_258;
        this->unk_28C = this->actor.world.pos.z;
    }
    if (func_809E5B64 != this->actionFunc) {
        if ((func_809E6A38 == this->actionFunc) || (func_809E6BC0 == this->actionFunc)) {
            this->unk_3CC.base.colType = 3;
        } else {
            this->unk_3CC.base.colType = 9;
        }
        sp50 = func_809E6A38;
        func_809E6CB4((Actor *) this, globalCtx);
        temp_s0 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk_3CC;
        sp48 = temp_a2;
        CollisionCheck_SetAC(globalCtx, temp_s0, (Collider *) temp_a2);
        if (sp88->unk_14B == 4) {
            CollisionCheck_SetAC(globalCtx, temp_s0, (Collider *) &this->unk_32C);
        }
        if (this->unk_2BD == 0) {
            temp_a2_2 = &this->unk_32C;
            if (sp88->unk_14B != 4) {
                sp44 = temp_a2_2;
                CollisionCheck_SetAC(globalCtx, temp_s0, (Collider *) temp_a2_2);
            }
            CollisionCheck_SetOC(globalCtx, temp_s0, (Collider *) &this->unk_32C);
            CollisionCheck_SetOC(globalCtx, temp_s0, (Collider *) sp48);
        }
        if ((sp50 != this->actionFunc) && (this->unk_2BD == 0)) {
            CollisionCheck_SetAT(globalCtx, temp_s0, (Collider *) &this->unk_32C);
            CollisionCheck_SetAT(globalCtx, temp_s0, (Collider *) sp48);
        }
    }
    temp_v0_4 = func_809E2D64(globalCtx);
    if (temp_v0_4 != 0) {
        temp_v0_4->world.pos.y = this->unk_258;
    }
    Math_ApproachZeroF(&this->unk_260, 0.1f, 0.05f);
    if (this->unk_290 != 0) {
        this->unk_294 += 0.1f;
        this->unk_298 += 0.12f;
        this->unk_29C = (s16) (s32) (__sinf(this->unk_294) * 1280.0f);
        this->unk_29E = (s16) (s32) (__sinf(this->unk_298) * 1280.0f);
    } else {
        Math_ApproachS(&this->unk_29E, 0, 0xA, 0x100);
        Math_ApproachS(&this->unk_29C, 0, 0xA, 0x100);
    }
    Math_ApproachS(&this->unk_2A0, 0, 0xA, 0x100);
    Math_ApproachS(&this->unk_2A8, 0, 0xA, 0x200);
    if ((this->unk_240 & 1) == 0) {
        phi_s0 = 0;
        if ((s32) this->unk_254 > 0) {
            do {
                sp6C = randPlusMinusPoint5Scaled(100.0f) + this->actor.world.pos.x;
                sp70 = randPlusMinusPoint5Scaled(100.0f) + this->actor.world.pos.y;
                sp74 = randPlusMinusPoint5Scaled(100.0f) + this->actor.world.pos.z;
                func_809E2AB4(globalCtx, &sp6C);
                temp_s0_2 = phi_s0 + 1;
                phi_s0 = temp_s0_2;
            } while (temp_s0_2 < (s32) sp90->unk_254);
        }
    }
    this->unk_254 = 1;
    func_809E7D00(globalCtx);
    temp_v0_5 = D_809E9841;
    if (temp_v0_5 != 0) {
        D_809E9841 = temp_v0_5 - 1;
        if (D_809E9841 == 0) {
            func_801A89A8(0x801B);
        }
    }
    if (func_809E3D98 != this->actionFunc) {
        Math_ApproachS((s16 *) &sp88->world.rot, 0, 1, 0x80);
        Math_ApproachS((s16 *) &sp88->shape, 0, 1, 0x80);
    }
    temp_f0_2 = this->unk_258;
    if ((temp_f0_2 < sp88->world.pos.y) && (this->unk_2CC <= temp_f0_2)) {
        this->unk_2D4 = 0x14;
    }
    if (((sp88->bgCheckFlags & 1) != 0) && (sp88->shape.feetPos[0].y >= 438.0f)) {
        temp_v0_6 = this->unk_2D4;
        if (temp_v0_6 != 0) {
            this->unk_2D4 = temp_v0_6 - 1;
            temp_f16 = randPlusMinusPoint5Scaled(50.0f) + sp88->world.pos.x;
            sp7C = 440.0f;
            sp78 = temp_f16;
            sp80 = randPlusMinusPoint5Scaled(50.0f) + sp88->world.pos.z;
            func_809E2788(globalCtx, &sp78);
        }
    }
    this->unk_2C8 = sp88->world.pos.x;
    this->unk_2CC = sp88->world.pos.y;
    this->unk_2D0 = sp88->world.pos.z;
    if (this->unk_258 < this->actor.world.pos.y) {
        func_8019F540(0U);
    } else {
        func_8019F540((u8) (s8) 1);
    }
    temp_v0_7 = this->unk_280;
    if (temp_v0_7 != 0) {
        this->unk_280 = temp_v0_7 - 1;
    }
    if ((this->unk_280 == 1) || (this->unk_280 == 5) || (this->unk_280 == 9)) {
        sp5E = 0;
        sp58 = 0.0f;
        phi_s0_3 = 0;
loop_69:
        SysMatrix_InsertYRotation_f(sp58, 0);
        SysMatrix_GetStateTranslationAndScaledZ(Rand_ZeroFloat(60.000004f) + 312.0f, (Vec3f *) &sp60);
        temp_f8 = sp60 + (this->unk_284 + randPlusMinusPoint5Scaled(40.0f));
        sp64 = 440.0f;
        sp60 = temp_f8;
        temp_f6 = sp68 + (this->unk_28C + randPlusMinusPoint5Scaled(40.0f));
        temp_f8_2 = temp_f6 * temp_f6;
        sp68 = temp_f6;
        phi_s0_2 = phi_s0_3;
        if (sqrtf((sp60 * sp60) + temp_f8_2) < 355.0f) {
            func_809E2880(globalCtx, &sp60);
            phi_s0_2 = phi_s0_3 + 1;
        }
        sp58 += 0.12566371f;
        phi_s0_3 = phi_s0_2;
        if ((s32) sp5E < 0x32) {
            sp5E += 1;
            if (phi_s0_2 < 0x14) {
                goto loop_69;
            }
        }
    }
}

void func_809E7920(Camera **arg0, s16 arg1) {
    Camera *temp_a1;
    ObjectContext *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_a2_2;

    temp_a0 = arg0 + 0x17D88;
    arg0 = arg0;
    temp_a2 = arg0 + (Object_GetIndex(temp_a0, arg1) * 0x44);
    temp_a2_2 = temp_a2 + 0x10000;
    temp_a1 = *arg0;
    gSegments[6] = temp_a2->unk_17D98 + 0x80000000;
    temp_a0_2 = temp_a1->unk_2B0;
    temp_a1->unk_2B0 = (void *) (temp_a0_2 + 8);
    temp_a0_2->unk_0 = 0xDB060018;
    temp_a0_2->unk_4 = (s32) temp_a2_2->unk_7D98;
    temp_a0_3 = temp_a1->unk_2C0;
    temp_a1->unk_2C0 = (void *) (temp_a0_3 + 8);
    temp_a0_3->unk_0 = 0xDB060018;
    temp_a0_3->unk_4 = (s32) temp_a2_2->unk_7D98;
}

s32 func_809E79C4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if ((arg1 == 4) || (arg1 == 5) || (arg1 == 6)) {
        arg4->y += arg5[2].home.rot.z;
    }
    if (arg1 == 8) {
        arg4->y += arg5[2].home.rot.y;
    }
    if (arg1 == 9) {
        arg4->y += arg5[2].home.rot.y * 2;
    }
    if (arg1 == 0xB) {
        arg4->y -= arg5[2].home.rot.x;
    }
    if (arg1 == 0xC) {
        arg4->y -= arg5[2].home.rot.x * 2;
    }
    if (arg1 == 0xE) {
        arg4->z += arg5[2].unk20;
    }
    return 0;
}

void func_809E7AA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s8 sp77;
    ? sp68;
    void *sp64;
    ? sp24;
    s8 *sp20;
    s8 *temp_t8;
    s8 temp_a3;

    sp64 = arg0->actorCtx.actorList[2].first;
    if (arg1 == 2) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_809E9148, arg4 + 0x3C);
    }
    temp_t8 = arg1 + &D_809E9128;
    sp20 = temp_t8;
    temp_a3 = *temp_t8;
    if ((s32) temp_a3 >= 0) {
        sp77 = temp_a3;
        SysMatrix_MultiplyVector3fByState((temp_a3 * 0xC) + &D_809E9154, (Vec3f *) &sp68);
        if ((s32) temp_a3 < 2) {
            if ((func_809E6A38 == arg4[2].colChkInfo.damageTable) && (arg4->unk_258 < sp64->world.pos.y)) {
                func_809E2B8C(temp_a3, arg4 + 0x32C, &D_809E91A8, temp_a3);
            } else {
                func_809E2B8C(temp_a3, arg4 + 0x32C, &sp68, temp_a3);
            }
        } else {
            func_809E2B8C(temp_a3 - 2, arg4 + 0x3CC, &sp68, temp_a3);
        }
    }
    if (sp20 == &D_809E9136) {
        D_809E91B4.x = arg4[2].focus.pos.x + 300.0f;
        SysMatrix_MultiplyVector3fByState(&D_809E91B4, arg4 + 0x2AC);
        SysMatrix_CopyCurrentState((MtxF *) &sp24);
        func_8018219C((MtxF *) &sp24, arg4 + 0x2A2, 0);
    }
}

void Boss03_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    Boss03 *this = (Boss03 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk_2D5 == 0) {
        if ((this->unk_25E & 1) != 0) {
            temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
        }
        SysMatrix_InsertYRotation_f(this->unk_260, 1);
        SysMatrix_InsertTranslation(0.0f, -600.0f, 0.0f, 1);
        SkelAnime_DrawSV(globalCtx, this->unk_148.skeleton, this->unk_148.limbDrawTbl, (s32) this->unk_148.dListCount, func_809E79C4, func_809E7AA8, (Actor *) this);
        temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
    }
    this->unk_2BC = 0;
    func_809E81E4(globalCtx);
}

void func_809E7D00(GlobalContext *arg0) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    ? sp88;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f14;
    s16 temp_s0;
    s16 temp_s7;
    u8 temp_v0;
    void *phi_s1;
    f32 phi_f0;
    s16 phi_s0;
    s16 phi_s7;

    temp_s5 = &sp94;
    phi_s1 = arg0->specialEffects;
    phi_s7 = 0;
    do {
        if (phi_s1->unk_0 != 0) {
            temp_f14 = phi_s1->unk_14;
            phi_s1->unk_2 = (s16) (phi_s1->unk_2 + 1);
            phi_s1->unk_4 = (f32) (phi_s1->unk_4 + phi_s1->unk_10);
            phi_s1->unk_8 = (f32) (phi_s1->unk_8 + temp_f14);
            phi_s1->unk_C = (f32) (phi_s1->unk_C + phi_s1->unk_18);
            phi_s1->unk_14 = (f32) (temp_f14 + phi_s1->unk_20);
            if ((phi_s1->unk_2 & 6) != 0) {
                phi_f0 = 80.0f;
            } else {
                phi_f0 = 200.0f;
            }
            Math_ApproachF(phi_s1 + 0x40, phi_f0, 1.0f, 80.0f);
            temp_v0 = phi_s1->unk_0;
            if (temp_v0 == 2) {
                phi_s1->unk_3C = (f32) (phi_s1->unk_3C + 0.15f);
                Math_ApproachF(phi_s1 + 0x34, 0.03f, 0.5f, 0.005f);
                Math_ApproachF(phi_s1 + 0x38, 0.5f, 0.5f, 0.02f);
                temp_f0 = phi_s1->unk_8;
                if (temp_f0 <= 430.0f) {
                    phi_s1->unk_0 = 0U;
                    phi_s1->unk_8 = 430.0f;
                    EffectSsGRipple_Spawn(arg0, phi_s1 + 4, 0, 0x50, (s16) 0);
                } else if (temp_f0 <= 440.0f) {
                    phi_s1->unk_0 = 4U;
                    phi_s1->unk_8 = 440.0f;
                    phi_s1->unk_34 = 0.1f;
                    phi_s1->unk_38 = 0.6f;
                    phi_s1->unk_10 = (f32) D_801D15B0.x;
                    phi_s1->unk_14 = (f32) D_801D15B0.y;
                    phi_s1->unk_18 = (f32) D_801D15B0.z;
                    phi_s1->unk_1C = (f32) D_801D15B0.x;
                    phi_s1->unk_20 = (f32) D_801D15B0.y;
                    phi_s1->unk_2C = 0x96;
                    phi_s1->unk_24 = (f32) D_801D15B0.z;
                    phi_s1->unk_2E = (s16) (s32) (Rand_ZeroFloat(4.0f) + 5.0f);
                    phi_s0 = 0;
                    do {
                        SysMatrix_InsertYRotation_f((2.0f * ((f32) phi_s0 * 3.1415927f)) / 6.0f, 0);
                        sp94 = 0.0f;
                        sp98 = Rand_ZeroFloat(4.0f) + 2.0f;
                        sp9C = Rand_ZeroFloat(1.5f) + 1.5f;
                        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s5, (Vec3f *) &sp88);
                        func_809E299C(arg0, phi_s1 + 4, &sp88);
                        temp_s0 = phi_s0 + 1;
                        phi_s0 = temp_s0;
                    } while ((s32) temp_s0 < 4);
                }
            } else if (temp_v0 == 3) {
                phi_s1->unk_3C = (f32) (phi_s1->unk_3C + 0.15f);
                if (phi_s1->unk_14 < -8.0f) {
                    phi_s1->unk_14 = -8.0f;
                }
                if ((phi_s1->unk_14 < 0.0f) && (phi_s1->unk_8 <= 440.0f)) {
                    phi_s1->unk_0 = 4U;
                    phi_s1->unk_8 = 440.0f;
                    phi_s1->unk_34 = 0.05f;
                    phi_s1->unk_38 = 0.2f;
                    phi_s1->unk_10 = (f32) D_801D15B0.x;
                    phi_s1->unk_14 = (f32) D_801D15B0.y;
                    phi_s1->unk_18 = (f32) D_801D15B0.z;
                    phi_s1->unk_1C = (f32) D_801D15B0.x;
                    phi_s1->unk_20 = (f32) D_801D15B0.y;
                    phi_s1->unk_2C = 0x96;
                    phi_s1->unk_24 = (f32) D_801D15B0.z;
                    phi_s1->unk_2E = (s16) (s32) (Rand_ZeroFloat(4.0f) + 5.0f);
                }
            } else if (temp_v0 == 4) {
                Math_ApproachF(phi_s1 + 0x34, phi_s1->unk_38, 0.1f, 0.6f);
                phi_s1->unk_2C = (s16) (phi_s1->unk_2C - phi_s1->unk_2E);
                if ((s32) phi_s1->unk_2C <= 0) {
                    phi_s1->unk_2C = 0;
                    goto block_25;
                }
            } else if (temp_v0 == 1) {
                if (phi_s1->unk_14 > 5.0f) {
                    phi_s1->unk_14 = 5.0f;
                }
                if (D_809EC030->unk_258 < phi_s1->unk_8) {
block_25:
                    phi_s1->unk_0 = 0U;
                }
            }
        }
        temp_s7 = phi_s7 + 1;
        phi_s1 += 0x44;
        phi_s7 = temp_s7;
    } while ((s32) temp_s7 < 0x96);
}

void func_809E81E4(Camera **arg0) {
    void *spA4;
    Gfx *sp8C;
    Gfx *sp84;
    Gfx *sp74;
    Gfx *sp6C;
    Gfx *sp5C;
    ? *sp4C;
    ? *sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s32 temp_f8;
    u8 temp_v0_6;
    void *temp_s1;
    void *phi_s1;
    s32 phi_s4;
    s16 phi_s3;
    void *phi_s1_2;
    s32 phi_s4_2;
    s16 phi_s3_2;
    void *phi_s1_3;
    s32 phi_s4_3;
    s16 phi_s3_3;

    temp_a0 = arg0->unk_0;
    temp_s1 = arg0[25116];
    temp_s0 = temp_a0;
    spA4 = temp_s1;
    func_8012C2DC(temp_a0);
    func_8012C28C(temp_s0);
    phi_s1 = temp_s1;
    phi_s4 = 0;
    phi_s3 = 0;
    phi_s4_2 = 0;
    phi_s3_2 = 0;
    phi_s4_3 = 0;
    phi_s3_3 = 0;
    do {
        if (phi_s1->paramData[0] == 1) {
            sp48 = &D_06007EB0;
            if (phi_s4 == 0) {
                temp_v0 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0[1];
                temp_v0->words.w1 = (u32) &D_06007E50;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_2[1];
                temp_v0_2->words.w1 = -1;
                temp_v0_2->words.w0 = 0xFA000000;
                temp_v0_3 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_3[1];
                temp_v0_3->words.w1 = 0x96969600;
                temp_v0_3->words.w0 = 0xFB000000;
                phi_s4 = 1;
            }
            SysMatrix_InsertTranslation(phi_s1->unk_4, phi_s1->unk_8, phi_s1->unk_C, 0);
            temp_f12 = phi_s1->unk_34;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
            temp_v0_4 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xDA380003;
            sp8C = temp_v0_4;
            sp8C->words.w1 = Matrix_NewMtx(arg0->unk_0);
            temp_v0_5 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_5[1];
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_5->words.w1 = (u32) sp48;
        }
        temp_s3 = phi_s3 + 1;
        phi_s1 += 0x44;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x96);
    func_809E7920(arg0, 0x182);
    phi_s1_2 = spA4;
    do {
        temp_v0_6 = phi_s1_2->paramData[0];
        if ((temp_v0_6 == 2) || (temp_v0_6 == 3)) {
            sp4C = &D_060042B0;
            if (phi_s4_2 == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                temp_v0_7 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_7[1];
                temp_v0_7->words.w0 = 0xDB060020;
                sp84 = temp_v0_7;
                sp84->words.w1 = Lib_SegmentedToVirtual((void *) D_0408DBE0);
                temp_v0_8 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_8[1];
                temp_v0_8->words.w1 = (u32) &D_06004260;
                temp_v0_8->words.w0 = 0xDE000000;
                temp_v0_9 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_9[1];
                temp_v0_9->words.w1 = 0xFAFAFF00;
                temp_v0_9->words.w0 = 0xFB000000;
                phi_s4_2 = (phi_s4_2 + 1) & 0xFF;
            }
            temp_v1 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v1[1];
            temp_v1->words.w0 = 0xFA000000;
            temp_f0 = phi_s1_2->unk_40;
            temp_v1->words.w1 = (((u32) (temp_f0 + 55.0f) & 0xFF) << 0x10) | ((u32) temp_f0 << 0x18) | 0xE196;
            SysMatrix_InsertTranslation(phi_s1_2->unk_4, phi_s1_2->unk_8, phi_s1_2->unk_C, 0);
            if (phi_s1_2->paramData[0] == 2) {
                SysMatrix_InsertYRotation_f((f32) func_800DFC68((&arg0[arg0->unk_810])[512]) * 0.0000958738f, 1);
            } else {
                SysMatrix_NormalizeXYZ((MtxF *) &arg0[25087]);
            }
            Matrix_Scale(phi_s1_2->unk_34, phi_s1_2->unk_38, 1.0f, 1);
            SysMatrix_InsertZRotation_f(phi_s1_2->unk_3C, 1);
            temp_v0_10 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_10[1];
            temp_v0_10->words.w0 = 0xDA380003;
            sp74 = temp_v0_10;
            sp74->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_11 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_11[1];
            temp_v0_11->words.w0 = 0xDE000000;
            temp_v0_11->words.w1 = (u32) sp4C;
        }
        temp_s3_2 = phi_s3_2 + 1;
        phi_s1_2 += 0x44;
        phi_s3_2 = temp_s3_2;
    } while ((s32) temp_s3_2 < 0x96);
    phi_s1_3 = spA4;
    do {
        if (phi_s1_3->paramData[0] == 4) {
            sp4C = &D_060042F8;
            if (phi_s4_3 == 0) {
                func_8012C448(temp_s0);
                temp_v0_12 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_12[1];
                temp_v0_12->words.w0 = 0xDB060020;
                sp6C = temp_v0_12;
                sp6C->words.w1 = Lib_SegmentedToVirtual((void *) D_0408DBE0);
                temp_v0_13 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_13[1];
                temp_v0_13->words.w1 = 0xFAFAFF00;
                temp_v0_13->words.w0 = 0xFB000000;
                temp_v0_14 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_14[1];
                temp_v0_14->words.w1 = (u32) &D_06004260;
                temp_v0_14->words.w0 = 0xDE000000;
                phi_s4_3 = (phi_s4_3 + 1) & 0xFF;
            }
            temp_v0_15 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_15[1];
            temp_v0_15->words.w0 = 0xFA000000;
            temp_f8 = (s32) phi_s1_3->unk_40;
            temp_v0_15->words.w1 = ((((s16) temp_f8 + 0x37) & 0xFF) << 0x10) | ((s16) temp_f8 << 0x18) | 0xE100 | (phi_s1_3->unk_2C & 0xFF);
            SysMatrix_InsertTranslation(phi_s1_3->unk_4, phi_s1_3->unk_8, phi_s1_3->unk_C, 0);
            temp_f12_2 = phi_s1_3->unk_34;
            Matrix_Scale(temp_f12_2, 1.0f, temp_f12_2, 1);
            SysMatrix_InsertYRotation_f(phi_s1_3->unk_3C, 1);
            temp_v0_16 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_16[1];
            temp_v0_16->words.w0 = 0xDA380003;
            sp5C = temp_v0_16;
            sp5C->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_17 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_17[1];
            temp_v0_17->words.w0 = 0xDE000000;
            temp_v0_17->words.w1 = (u32) sp4C;
        }
        temp_s3_3 = phi_s3_3 + 1;
        phi_s1_3 += 0x44;
        phi_s3_3 = temp_s3_3;
    } while ((s32) temp_s3_3 < 0x96);
    func_809E7920(arg0, 0x15C);
}

void func_809E8810(Actor *this, GlobalContext *globalCtx) {
    u8 sp55;
    Actor *sp50;
    Boss03 *temp_v1;
    Boss03 *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f6;
    s16 *temp_s0;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s1_3;
    s32 temp_f18;
    s32 temp_f18_2;
    void *temp_v0;
    void *temp_v0_2;
    Actor *phi_v1;
    s16 phi_s1;
    u8 phi_t0;
    s16 phi_s0;
    u8 phi_t0_2;
    s16 phi_s1_2;
    s16 phi_s0_2;
    u8 phi_s3;
    u8 phi_s3_2;
    s16 phi_s1_3;
    u8 phi_s3_3;
    u8 phi_s3_4;

    this->unk_240 = (s16) (this->unk_240 + 1);
    phi_v1 = globalCtx->actorCtx.actorList[2].first;
    phi_s1 = 0;
    phi_t0 = 0U;
    phi_s1_2 = 0;
    phi_s1_3 = 0;
    do {
        temp_f12 = phi_v1->speedXZ;
        temp_v0 = this + (phi_s1 * 0xC);
        temp_f20 = phi_v1->world.pos.x - temp_v0->unk_2DC;
        temp_f2 = phi_v1->world.pos.y - temp_v0->unk_2E0;
        temp_f22 = phi_v1->world.pos.z - temp_v0->unk_2E4;
        temp_f14 = (temp_f12 * 3.0f) + 70.0f;
        temp_f0 = sqrtf((temp_f20 * temp_f20) + (temp_f2 * temp_f2) + (temp_f22 * temp_f22));
        phi_t0_2 = phi_t0;
        if ((phi_v1->bgCheckFlags & 1) != 0) {
            phi_s0 = 0;
        } else {
            temp_f18 = (s32) (temp_f12 * 16.0f);
            phi_s0 = (s16) temp_f18;
            if ((s32) (s16) temp_f18 >= 0x1001) {
                phi_s0 = 0x1000;
            } else if ((s32) (s16) temp_f18 < 0x100) {
                phi_s0 = 0x100;
            }
        }
        if (temp_f0 < temp_f14) {
            temp_f6 = (temp_f14 - temp_f0) * 200.0f;
            sp50 = phi_v1;
            sp55 = phi_t0;
            Math_ApproachS(this + (phi_s1 * 6) + 0x1E6, (s16) (s32) temp_f6, 0xA, phi_s0);
            phi_t0_2 = phi_t0;
            if (phi_s0 != 0) {
                phi_t0_2 = (phi_t0 | 1) & 0xFF;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_v1 = phi_v1;
        phi_s1 = temp_s1;
        phi_t0 = phi_t0_2;
    } while ((s32) temp_s1 < 6);
    phi_s3_2 = phi_t0_2;
    phi_s3_3 = phi_t0_2;
    if ((phi_t0_2 & 1) != 0) {
        Math_ApproachS(&this->shape.rot.y, Math_FAtan2F(temp_f22, temp_f20), 0x14, 0x800);
    }
    temp_v1 = D_809EC030;
    if ((temp_v1->actor.world.pos.y - 40.0f) < temp_v1->unk_258) {
loop_14:
        temp_v1_2 = D_809EC030;
        temp_v0_2 = this + (phi_s1_2 * 0xC);
        temp_f20_2 = temp_v1_2->actor.world.pos.x - temp_v0_2->unk_2DC;
        temp_f2_2 = temp_v1_2->actor.world.pos.y - temp_v0_2->unk_2E0;
        temp_f22_2 = temp_v1_2->actor.world.pos.z - temp_v0_2->unk_2E4;
        temp_f0_2 = sqrtf((temp_f20_2 * temp_f20_2) + (temp_f2_2 * temp_f2_2) + (temp_f22_2 * temp_f22_2));
        phi_s3 = phi_s3_3;
        phi_s3_4 = phi_s3_3;
        if ((phi_s1_2 != 0) || !(temp_f0_2 > 400.0f)) {
            temp_f2_3 = temp_v1_2->actor.speedXZ;
            temp_f18_2 = (s32) (temp_f2_3 * 16.0f);
            temp_f14_2 = (temp_f2_3 * 5.0f) + 150.0f;
            phi_s0_2 = (s16) temp_f18_2;
            if ((s32) (s16) temp_f18_2 >= 0x1001) {
                phi_s0_2 = 0x1000;
            } else if ((s32) (s16) temp_f18_2 < 0x100) {
                phi_s0_2 = 0x100;
            }
            if (temp_f0_2 < temp_f14_2) {
                Math_ApproachS(this + (phi_s1_2 * 6) + 0x1E6, (s16) (s32) ((temp_f14_2 - temp_f0_2) * 200.0f), 0xA, phi_s0_2);
                if (phi_s0_2 != 0) {
                    phi_s3_4 = (phi_s3_3 | 2) & 0xFF;
                }
            }
            temp_s1_2 = phi_s1_2 + 1;
            phi_s1_2 = temp_s1_2;
            phi_s3 = phi_s3_4;
            phi_s3_3 = phi_s3_4;
            if ((s32) temp_s1_2 < 6) {
                goto loop_14;
            }
        }
        temp_s0 = &this->shape.rot.y;
        phi_s3_2 = phi_s3;
        if ((phi_s3 & 2) != 0) {
            Math_ApproachS(temp_s0, Math_FAtan2F(temp_f22_2, temp_f20_2), 0x14, 0x800);
        }
    }
    if (phi_s3_2 == 0) {
        do {
            Math_ApproachS(this + (phi_s1_3 * 6) + 0x1E6, 0, 0x14, 0x80);
            temp_s1_3 = phi_s1_3 + 1;
            phi_s1_3 = temp_s1_3;
        } while ((s32) temp_s1_3 < 6);
    }
}

void func_809E8BEC(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_s0;
    Gfx *temp_s4;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s3;
    s16 temp_s1;
    void *temp_s0_2;
    s16 phi_s1;
    RSPMatrix *phi_s4;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0->polyOpa.d - 0x280;
    temp_s4 = temp_s0;
    temp_a0->polyOpa.d = temp_s0;
    temp_a0_2 = globalCtx->state.gfxCtx;
    temp_s3 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    temp_v0 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = &temp_v0[1];
    temp_v0->words.w1 = (u32) temp_s0;
    temp_v0->words.w0 = 0xDB060034;
    SysMatrix_InsertTranslation(this->world.pos.x, this->world.pos.y, this->world.pos.z, 0);
    Matrix_Scale(this->scale.x, this->scale.y, this->scale.z, 1);
    Matrix_RotateY(this->shape.rot.y, 1U);
    SysMatrix_InsertZRotation_s(0x4000, 1);
    Matrix_RotateY((s16) (s32) ((f32) this->unk_1AA * -5.0f * 0.1f), 1U);
    SysMatrix_InsertXRotation_s((s16) (s32) ((f32) this->unk_1A0 * -5.0f * 0.1f), 1);
    SysMatrix_InsertZRotation_s((s16) (s32) ((f32) this->unk_19C * 6.0f * 0.1f), 1);
    phi_s1 = 0;
    phi_s4 = (RSPMatrix *) temp_s4;
    do {
        temp_s0_2 = this + (phi_s1 * 6);
        Matrix_RotateY((s16) (temp_s0_2->unk_1E6 + temp_s0_2->unk_18C), 1U);
        SysMatrix_InsertXRotation_s((s16) (temp_s0_2->unk_1E8 + temp_s0_2->unk_18E), 1);
        SysMatrix_InsertZRotation_s((s16) (temp_s0_2->unk_1EA + temp_s0_2->unk_190), 1);
        SysMatrix_GetStateAsRSPMatrix(phi_s4);
        temp_v0_2 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) phi_s4;
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_3 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = *(&D_809E91C0 + (phi_s1 * 4));
        SysMatrix_GetStateTranslation(this + (phi_s1 * 0xC) + 0x2DC);
        SysMatrix_InsertTranslation(4000.0f, 0.0f, 0.0f, 1);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s4 = &phi_s4[1];
    } while ((s32) temp_s1 < 6);
}
