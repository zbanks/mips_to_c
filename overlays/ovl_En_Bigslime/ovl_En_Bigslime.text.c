typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnBigslime_Destroy {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBigslime_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ void (*sp34)(EnBigslime *, GlobalContext *); /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnBigslime_Init {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnBigslime_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808E5388 {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_808E5430 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E5484 {
    /* 0x000 */ char pad_0[0x64];
    /* 0x064 */ ? sp64;                             /* inferred */
    /* 0x064 */ char pad_64[0xC];
    /* 0x070 */ f32 sp70;                           /* inferred */
    /* 0x074 */ f32 sp74;                           /* inferred */
    /* 0x078 */ f32 sp78;                           /* inferred */
    /* 0x07C */ f32 sp7C;                           /* inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ f32 sp84;                           /* inferred */
    /* 0x088 */ ? sp88;                             /* inferred */
    /* 0x088 */ char pad_88[0x798];
};                                                  /* size = 0x820 */

struct _mips2c_stack_func_808E574C {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_808E5988 {};              /* size 0x0 */

struct _mips2c_stack_func_808E5A00 {};              /* size 0x0 */

struct _mips2c_stack_func_808E5BB0 {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x30];                   /* maybe part of sp6C[13]? */
    /* 0xA0 */ s16 spA0;                            /* inferred */
    /* 0xA2 */ char pad_A2[0x1A];                   /* maybe part of spA0[14]? */
    /* 0xBC */ s16 spBC;                            /* inferred */
    /* 0xBE */ char pad_BE[0x22];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_808E5ED4 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808E601C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E616C {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808E62B8 {};              /* size 0x0 */

struct _mips2c_stack_func_808E64D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E6538 {};              /* size 0x0 */

struct _mips2c_stack_func_808E6570 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E670C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ Camera *sp44;                        /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808E6828 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Vec3f *sp1C;                         /* inferred */
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ Camera *sp2C;                        /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E68AC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x2];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];                    /* maybe part of sp22[3]? */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ Camera *sp34;                        /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808E69AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E69F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E6A70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E6B08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E6B68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E6C18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E6C44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E6C70 {};              /* size 0x0 */

struct _mips2c_stack_func_808E6CC8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E6D58 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Camera *sp20;                        /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808E6E80 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E6F08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E6F50 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808E6FE0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E7048 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808E7154 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E71FC {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E732C {};              /* size 0x0 */

struct _mips2c_stack_func_808E7354 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808E75D8 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ f64 sp8;                             /* inferred */
    /* 0x10 */ f64 sp10;                            /* inferred */
    /* 0x18 */ f64 sp18;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E7770 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808E7AF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E7B80 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808E7D68 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808E8064 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808E836C {};              /* size 0x0 */

struct _mips2c_stack_func_808E844C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E84DC {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808E88B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E89CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x10];                   /* maybe part of sp24[5]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808E8C38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E8CCC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0xA];                    /* maybe part of sp24[3]? */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808E90A4 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E91EC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x10];                   /* maybe part of sp28[5]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808E9778 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E97D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E994C {};              /* size 0x0 */

struct _mips2c_stack_func_808E9AE0 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808E9DA8 {};              /* size 0x0 */

struct _mips2c_stack_func_808E9DD0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808E9F38 {};              /* size 0x0 */

struct _mips2c_stack_func_808E9FC0 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808EA14C {};              /* size 0x0 */

struct _mips2c_stack_func_808EA1C8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808EA264 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808EA2D0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808EA538 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808EA5E8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808EA748 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808EA7A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808EA80C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808EA860 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808EA8FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808EA9B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808EAA40 {};              /* size 0x0 */

struct _mips2c_stack_func_808EAA8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808EAAF8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808EAB74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808EABCC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808EACEC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808EAEBC {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];                    /* maybe part of sp3A[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808EB0A8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808EB178 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808EB24C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Camera *sp24;                        /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808EB328 {
    /* 0x00 */ char pad_0[0x78];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x4];
    /* 0x94 */ Camera *sp94;                        /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_808EB574 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ Camera *sp34;                        /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808EB690 {};              /* size 0x0 */

struct _mips2c_stack_func_808EB708 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808EB7F0 {};              /* size 0x0 */

struct _mips2c_stack_func_808EB804 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808EB83C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808EB8B4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (*sp24)(EnBigslime *, GlobalContext *); /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808EB9E8 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808EBBE4 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808EBED0 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808EC158 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808EC354 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808EC708 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x10];                   /* maybe part of sp30[5]? */
    /* 0x44 */ MtxF *sp44;                          /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808EC990 {
    /* 0x000 */ char pad_0[0x80];
    /* 0x080 */ LightContext *sp80;                 /* inferred */
    /* 0x084 */ char pad_84[0x4];
    /* 0x088 */ ? *sp88;                            /* inferred */
    /* 0x08C */ char pad_8C[0x28];                  /* maybe part of sp88[11]? */
    /* 0x0B4 */ s32 spB4;                           /* inferred */
    /* 0x0B8 */ char pad_B8[0x34];                  /* maybe part of spB4[14]? */
    /* 0x0EC */ ? spEC;                             /* inferred */
    /* 0x0EC */ char pad_EC[0x4];
    /* 0x0F0 */ ? spF0;                             /* inferred */
    /* 0x0F0 */ char pad_F0[0x18];
};                                                  /* size = 0x108 */

struct _mips2c_stack_func_808ECD14 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808ED07C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s8 *sp1C;                            /* inferred */
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808ED3F4 {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

void func_808E5388(Actor *arg0);                    /* static */
void func_808E5430(Vec3f *arg0);                    /* static */
void func_808E5484(Actor *arg0);                    /* static */
void func_808E574C(Actor *arg0, ? *arg1, ? *arg2);  /* static */
void func_808E5988(Actor *arg0, ? *arg1, ? *arg2);  /* static */
void func_808E5A00(Actor *arg0, ? *arg1, ? *arg2);  /* static */
void func_808E5BB0(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E5ED4(EnBigslime *arg0);               /* static */
void func_808E601C(EnBigslime *arg0);               /* static */
void func_808E616C(EnBigslime *arg0);               /* static */
void func_808E62B8(Actor *arg0, s32);               /* static */
void func_808E64D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E6538(Actor *arg0);                    /* static */
void func_808E6570(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E670C(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808E6828(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808E68AC(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_808E69AC(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808E69F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E6A70(EnBigslime *arg0, s16 arg1, f32 arg2, f32 arg3); /* static */
void func_808E6B08(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E6B68(EnBigslime *arg0);               /* static */
void func_808E6C18(EnBigslime *arg0, s32 arg1);     /* static */
void func_808E6C44(EnBigslime *arg0, s32 arg1);     /* static */
void func_808E6C70(Actor *arg0);                    /* static */
void func_808E6CC8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E6D58(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E6F08(EnBigslime *arg0);               /* static */
void func_808E6FE0(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808E7154(EnBigslime *arg0, s32, s32);     /* static */
void func_808E732C(EnBigslime *arg0);               /* static */
void func_808E75D8(Actor *arg0, EnBigslime *, s32, s32, s16 *); /* static */
void func_808E7770(Actor *arg0);                    /* static */
void func_808E7AF8(EnBigslime *arg0);               /* static */
void func_808E7D68(EnBigslime *arg0);               /* static */
void func_808E8064(EnBigslime *arg0);               /* static */
void func_808E836C(EnBigslime *arg0);               /* static */
void func_808E844C(EnBigslime *arg0);               /* static */
void func_808E88B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808E8C38(f32 arg0, EnBigslime *);         /* static */
void func_808E90A4(EnBigslime *arg0);               /* static */
void func_808E9778(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808E994C(Actor *arg0);                    /* static */
void func_808E9DA8(EnBigslime *arg0);               /* static */
void func_808E9F38(Actor *arg0);                    /* static */
void func_808EA14C(EnBigslime *arg0);               /* static */
void func_808EA264(Actor *arg0);                    /* static */
void func_808EA538(EnBigslime *arg0);               /* static */
void func_808EA748(EnBigslime *arg0);               /* static */
void func_808EA80C(EnBigslime *arg0);               /* static */
void func_808EA8FC(Actor *arg0, s32 arg1);          /* static */
void func_808EAA40(Actor *arg0);                    /* static */
void func_808EAAF8(Actor *arg0);                    /* static */
void func_808EABCC(EnBigslime *arg0);               /* static */
void func_808EAEBC(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808EB178(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808EB328(EnBigslime *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_808EB690(EnBigslime *arg0);               /* static */
void func_808EB7F0(EnBigslime *arg0);               /* static */
void func_808EB83C(EnBigslime *arg0);               /* static */
void func_808EB9E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808EBBE4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808EBED0(Actor *arg0, GlobalContext *arg1); /* static */
void func_808EC158(Actor *arg0);                    /* static */
void func_808EC354(Actor *arg0, GlobalContext *arg1); /* static */
void func_808EC708(Vec3f *arg0, GraphicsContext **arg1, u32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, f32 arg7); /* static */
void func_808EC990(EnBigslime *arg0, GlobalContext *arg1); /* static */
void func_808ECD14(Actor *arg0, GlobalContext *arg1); /* static */
void func_808ED07C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_808ED3F4(EnBigslime *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_060010F4;
extern AnimationHeader D_06001B08;
extern AnimationHeader D_0600276C;
extern AnimationHeader D_06002E0C;
extern ? D_0600347C;
extern AnimationHeader D_060039C4;
extern ? D_06003F28;
extern AnimationHeader D_060066B4;
extern AnimationHeader D_060069FC;
extern ? D_060070C4;
extern AnimationHeader D_06007790;
extern FlexSkeletonHeader D_0600DF98;
extern AnimationHeader D_0600F048;
extern AnimationHeader D_0600F3F0;
extern AnimationHeader D_0600F990;
extern ? D_0600F9D0;
extern ? D_0600FB40;
extern ? D_06010530;
extern ? D_060105E8;
extern ? D_06010B80;
extern void D_06010C48;
extern ? D_06010DB0;
extern void D_06010EC8;
extern ? D_06010F20;
extern ? D_06010FE0;
extern void D_06011008;
extern ? D_06011050;
extern ? D_060113B0;
static s16 D_808ED640 = 0;
static s16 D_808ED642 = 0x3E8;
static s16 D_808ED644[6] = {0, 0, 0x200, 0xFE00, 0x78, 0x32};
static s16 D_808ED650 = 0;
static s16 D_808ED652 = 0x3C2;
static s16 D_808ED654[6] = {0xFEEF, 0, 0x200, 0xFE27, 0x73, 0xDF32};
static ? D_808ED660;                                /* unable to generate initializer */
static ? D_808ED740;                                /* unable to generate initializer */
static ? D_808EDF60;                                /* unable to generate initializer */
static ? D_808EE060;                                /* unable to generate initializer */
static s16 D_808EF4A0 = 0;
static u8 D_808EF4AF = 0;
static s16 D_808EF4B0 = 0;
static u8 D_808EF4BF = 0;
static ? D_808EF4C0;                                /* unable to generate initializer */
static ? D_808EF4E0;                                /* unable to generate initializer */
static u8 D_808EF4EF[15] = {0, 0xFE, 0xFC, 3, 0xC2, 0xFF, 0xAC, 0, 0, 0xE, 0x66, 9, 0x7F, 0xFF, 0xFF};
static u8 D_808EF4FF = 0;
static ? D_808EF500;                                /* unable to generate initializer */
static ? D_808EFE90;                                /* unable to generate initializer */
static s16 D_808EFEB4[6] = {0, 0, 0, 0xFE49, 0xFFFF, 0xFF00};
static ? D_808EFEC0;                                /* unable to generate initializer */
static ColliderCylinderInit D_808F02A0 = {
    {0xA, 0x11, 9, 0x3D, 0x10, 1},
    {0, {0x20000000, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 5, 1},
    {0x1E, 0x3C, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_808F02CC = {0xA, 0x64, 0x64, 0x32};
static DamageTable D_808F02D4 = {
    {
        0x10,
        1,
        0,
        0xF1,
        1,
        1,
        0,
        0xE0,
        0xF1,
        1,
        0xF1,
        0x21,
        0x31,
        0x42,
        0xF1,
        0xD0,
        1,
        0,
        0x10,
        0x50,
        0,
        0,
        0xF1,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ? D_808F02F4;                                /* unable to generate initializer */
static ? D_808F02F8;                                /* unable to generate initializer */
static ? D_808F0328;                                /* unable to generate initializer */
static ? D_808F032C;                                /* unable to generate initializer */
static InitChainEntry D_808F0338[3];                /* unable to generate initializer */
static ? D_808F0344;                                /* unable to generate initializer */
static s32 D_808F0358 = 7;
static s32 D_808F035C[14] = {9, 0xB, 0xD, 0xF, 0x34, 0x38, 0x3C, 0x40, 0x44, 0x5E, 0x62, 0x66, 0x6A, 0x6E};
static Vec3f D_808F0394 = {0.0f, 2.0f, 0.0f};
static Color_RGBA8 D_808F03A0 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_808F03A4 = {0xB4, 0xB4, 0xB4, 0xFF};
static Vec3f D_808F03A8 = {0.0f, -0.5f, 0.0f};
static s32 D_808F03B4 = 0;
static ? D_808F03B8;                                /* unable to generate initializer */
static ? D_808F0498;                                /* unable to generate initializer */
static ? D_808F04A1;                                /* unable to generate initializer */
static Vec3f D_808F04B0 = {1500.0f, 2200.0f, 0.0f};
static Color_RGBA8 D_808F04BC = {0xFF, 0, 0, 0};
static Color_RGBA8 D_808F04C0 = {0, 0, 0xFF, 0};
ActorInit En_Bigslime_InitVars = {
    0x65,
    9,
    0x235,
    0x128,
    0x3634,
    EnBigslime_Init,
    EnBigslime_Destroy,
    EnBigslime_Update,
    EnBigslime_Draw,
};

void EnBigslime_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0;
    ColliderCylinder *phi_s2;
    s32 phi_s1;
    s16 phi_v0;
    s32 phi_s0;
    EnBigslime *phi_s1_2;
    s32 phi_s2_2;
    void *phi_s1_3;
    s32 phi_s2_3;
    EnBigslime *this = (EnBigslime *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808F0338);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808F02D4, &D_808F02CC);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600DF98, &D_060066B4, this->jointTable, this->morphTable, 0x18);
    phi_s2 = this->bigslimeCollider;
    phi_s1 = 0;
    do {
        Collider_InitAndSetCylinder(globalCtx, phi_s2, (Actor *) this, &D_808F02A0);
        temp_s1 = phi_s1 + 0x4C;
        phi_s2 = &phi_s2[1];
        phi_s1 = temp_s1;
    } while (temp_s1 < 0x390);
    this->bigslimeCollider[0].base.atFlags &= 0xFFFE;
    Collider_InitAndSetCylinder(globalCtx, &this->gekkoCollider, (Actor *) this, &D_808F02A0);
    temp_v1 = this->actor.params;
    this->gekkoCollider.base.colType = 6;
    this->gekkoCollider.info.elemType = 1;
    this->gekkoCollider.base.atFlags &= -2;
    this->gekkoCollider.base.ocFlags1 &= 0xFFFB;
    if ((s32) temp_v1 <= 0) {
        this->actor.params = 1;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 5) {
            phi_v0 = 4;
        }
        this->actor.params = phi_v0;
    }
    if (Actor_GetRoomCleared(globalCtx, (u32) globalCtx->roomCtx.currRoom.num) != 0) {
        Actor_MarkForDeath((Actor *) this);
        temp_v1_2 = this->actor.params;
        temp_v0 = *(&D_808F0344 + (temp_v1_2 * 4));
        if ((temp_v0 & 0xFF & gSaveContext.weekEventReg[temp_v0 >> 8]) == 0) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x22, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, (s16) (s32) temp_v1_2);
            return;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return;
    }
    this->actor.scale.x = 0.15f;
    this->actor.scale.z = 0.15f;
    this->cutscene = (s16) this->actor.cutscene;
    this->vtxScaleX = 0.015000001f;
    this->vtxScaleZ = 0.015000001f;
    this->actor.scale.y = 0.075f;
    this->actor.home.pos.x = 1338.0f;
    this->actor.home.pos.y = -165.0f;
    this->actor.home.pos.z = -2492.0f;
    phi_s0 = 0;
    phi_s1_2 = this;
    phi_s2_2 = 0;
loop_11:
    temp_v0_2 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0xD9, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, phi_s0);
    phi_s1_2->minislime[0] = temp_v0_2;
    if (temp_v0_2 == 0) {
        temp_s2 = phi_s2_2 - 4;
        phi_s1_3 = phi_s1_2 - 4;
        phi_s2_3 = temp_s2;
        if (temp_s2 >= 0) {
            do {
                Actor_MarkForDeath(phi_s1_3->unk_A08);
                temp_s2_2 = phi_s2_3 - 4;
                phi_s1_3 += -4;
                phi_s2_3 = temp_s2_2;
            } while (temp_s2_2 >= 0);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_s0 = phi_s0 + 1;
    phi_s0 = temp_s0;
    phi_s1_2 += 4;
    phi_s2_2 += 4;
    if (temp_s0 >= 0xF) {
        this->minislimeFrozenTex = Lib_SegmentedToVirtual(&D_06010EC8);
        this->bigslimeFrozenTex = Lib_SegmentedToVirtual(&D_06010C48);
        this->iceShardTex = Lib_SegmentedToVirtual(&D_06011008);
        this->actor.flags &= -2;
        this->actor.shape.shadowAlpha = 0xFF;
        this->actor.world.pos.y = -690.0f;
        this->actor.shape.rot.y = 0;
        this->gekkoScale = 0.007f;
        this->minislimeToThrow = this->minislime[0];
        func_808EB7F0(this);
        return;
    }
    goto loop_11;
}

void EnBigslime_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_s0;
    ColliderCylinder *phi_s1;
    s32 phi_s0;
    EnBigslime *this = (EnBigslime *) thisx;

    phi_s1 = this->bigslimeCollider;
    phi_s0 = 0;
    do {
        Collider_DestroyCylinder(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x4C;
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x390);
    Collider_DestroyCylinder(globalCtx, &this->gekkoCollider);
    func_801A72CC(&this->gekkoProjectedPos);
}

void func_808E5388(Actor *arg0) {
    s16 *temp_t3;
    s32 temp_a1;
    s32 temp_a3;
    u8 temp_v1;
    void *temp_t0;
    void *temp_t2;
    void *temp_t2_2;
    s16 *phi_t1;
    void *phi_t0;
    s16 *phi_t3;
    void *phi_t2;
    s32 phi_a3;
    s32 phi_a1;

    phi_a1 = 0;
    do {
        temp_v1 = arg0->unk_2B1;
        temp_t2 = &D_808EE060 + (temp_v1 * 0xA20) + phi_a1;
        temp_t3 = &D_808EE060 + ((temp_v1 ^ 1) * 0xA20) + phi_a1;
        phi_t1 = temp_t3;
        phi_t0 = temp_t2;
        phi_t3 = temp_t3;
        phi_t2 = temp_t2;
        phi_a3 = 0;
loop_2:
        temp_a3 = phi_a3 + 1;
        temp_t0 = phi_t0 + 2;
        temp_t0->unk_-2 = (s16) *phi_t1;
        temp_t2_2 = phi_t2 + 1;
        temp_t2_2->unk_B = (s8) phi_t3->unk_C;
        phi_t1 += 2;
        phi_t0 = temp_t0;
        phi_t3 += 1;
        phi_t2 = temp_t2_2;
        phi_a3 = temp_a3;
        if (temp_a3 != 3) {
            goto loop_2;
        }
        temp_a1 = phi_a1 + 0x10;
        phi_a1 = temp_a1;
    } while (temp_a1 != 0xA20);
}

void func_808E5430(Vec3f *arg0) {
    f32 temp_f0;

    temp_f0 = Math3D_Vec3fMagnitude(arg0);
    if (temp_f0 > 1.0f) {
        Math_Vec3f_Scale(arg0, 1.0f / temp_f0);
    }
}

void func_808E5484(Actor *arg0) {
    ? sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    ? sp64;
    ? *temp_s0_2;
    Vec3f *temp_a0_2;
    Vec3f *temp_a0_3;
    Vec3f *temp_a0_4;
    Vec3f *temp_s0;
    f32 *temp_a0;
    f32 *temp_a1;
    s32 temp_s1;
    void *temp_a3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    Vec3f *phi_s0;
    ? *phi_s0_2;
    Vec3f *phi_s0_3;
    s32 phi_s1;

    phi_s0 = (Vec3f *) &sp88;
    do {
        Math_Vec3f_Copy(phi_s0, &D_801D15B0);
        temp_s0 = &phi_s0[1];
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) &arg0);
    phi_s0_2 = &D_808EFEC0;
    do {
        temp_a3 = &D_808EE060 + (arg0->unk_2B1 * 0xA20);
        temp_v1 = temp_a3 + (phi_s0_2->unk_0 * 0x10);
        temp_v0 = temp_a3 + (phi_s0_2->unk_1 * 0x10);
        temp_a0 = &sp7C;
        temp_a1 = &sp70;
        sp7C = (f32) (temp_v0->unk_0 - temp_v1->unk_0);
        sp80 = (f32) (temp_v0->unk_2 - temp_v1->unk_2);
        sp84 = (f32) (temp_v0->unk_4 - temp_v1->unk_4);
        temp_v0_2 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + (phi_s0_2->unk_2 * 0x10);
        sp70 = (f32) (temp_v0_2->unk_0 - temp_v1->unk_0);
        sp74 = (f32) (temp_v0_2->unk_2 - temp_v1->unk_2);
        sp78 = (f32) (temp_v0_2->unk_4 - temp_v1->unk_4);
        Math3D_CrossProduct((Vec3f *) temp_a0, (Vec3f *) temp_a1, (Vec3f *) &sp64);
        func_808E5430((Vec3f *) &sp64);
        temp_a0_2 = &sp88 + (phi_s0_2->unk_0 * 0xC);
        Math_Vec3f_Sum(temp_a0_2, (Vec3f *) &sp64, temp_a0_2);
        temp_a0_3 = &sp88 + (phi_s0_2->unk_1 * 0xC);
        Math_Vec3f_Sum(temp_a0_3, (Vec3f *) &sp64, temp_a0_3);
        temp_a0_4 = &sp88 + (phi_s0_2->unk_2 * 0xC);
        Math_Vec3f_Sum(temp_a0_4, (Vec3f *) &sp64, temp_a0_4);
        temp_s0_2 = phi_s0_2 + 3;
        phi_s0_2 = temp_s0_2;
    } while ((u32) temp_s0_2 < (u32) &En_Bigslime_InitVars);
    phi_s0_3 = (Vec3f *) &sp88;
    phi_s1 = 0;
    do {
        func_808E5430(phi_s0_3);
        temp_v0_3 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + phi_s1;
        temp_s1 = phi_s1 + 0x10;
        temp_v0_3->unk_C = (s8) (s32) (phi_s0_3->x * 120.0f);
        temp_v0_3->unk_D = (s8) (s32) (phi_s0_3->y * 120.0f);
        temp_v0_3->unk_E = (s8) (s32) (phi_s0_3->z * 120.0f);
        phi_s0_3 = &phi_s0_3[1];
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xA20);
}

void func_808E574C(Actor *arg0, ? *arg1, ? *arg2) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s32 temp_t4;
    void *temp_t5;
    s32 phi_v0;
    void *phi_t5;
    s32 phi_t0;
    s32 phi_v1;
    s32 phi_t1;
    s32 phi_a3;
    s32 phi_t2;
    s32 phi_v0_2;
    void *phi_s0;
    s32 phi_t0_2;
    s32 phi_v1_2;
    s32 phi_t1_2;
    s32 phi_a3_2;
    s32 phi_t2_2;
    s32 phi_t4;
    s32 phi_v0_3;
    s32 phi_v1_3;
    s32 phi_a3_3;
    s32 phi_t0_3;
    s32 phi_t1_3;
    s32 phi_t2_3;

    temp_t5 = (arg0->unk_2B1 * 0xA20) + &D_808EE060;
    phi_v0 = 0;
    phi_t5 = temp_t5;
    phi_t0 = 0;
    phi_v1 = 0;
    phi_t1 = 0;
    phi_a3 = 0;
    phi_t2 = 0;
    phi_s0 = temp_t5 + 0x10;
    phi_t4 = 0;
    do {
        temp_t4 = phi_t4 + 0x20;
        phi_v0_2 = phi_v0;
        phi_t0_2 = phi_t0;
        phi_v1_2 = phi_v1;
        phi_t1_2 = phi_t1;
        phi_a3_2 = phi_a3;
        phi_t2_2 = phi_t2;
        phi_t4 = temp_t4;
        if (phi_v0 < (s32) phi_t5->unk_0) {
            phi_v0_2 = (s32) phi_t5->unk_0;
        } else {
            temp_a0 = phi_t5->unk_0;
            if ((s32) temp_a0 < phi_t0) {
                phi_t0_2 = (s32) temp_a0;
            }
        }
        temp_a0_2 = phi_t5->unk_2;
        phi_v0_3 = phi_v0_2;
        phi_t0_3 = phi_t0_2;
        if (phi_v1 < (s32) temp_a0_2) {
            phi_v1_2 = (s32) temp_a0_2;
        } else if ((s32) temp_a0_2 < phi_t1) {
            phi_t1_2 = (s32) temp_a0_2;
        }
        temp_a0_3 = phi_t5->unk_4;
        phi_t5 += 0x20;
        phi_v1_3 = phi_v1_2;
        phi_t1_3 = phi_t1_2;
        if (phi_a3 < (s32) temp_a0_3) {
            phi_a3_2 = (s32) temp_a0_3;
        } else if ((s32) temp_a0_3 < phi_t2) {
            phi_t2_2 = (s32) temp_a0_3;
        }
        temp_a1 = phi_s0->unk_0;
        phi_a3_3 = phi_a3_2;
        phi_t2_3 = phi_t2_2;
        if (phi_v0_2 < (s32) temp_a1) {
            phi_v0_3 = (s32) temp_a1;
        } else if ((s32) temp_a1 < phi_t0_2) {
            phi_t0_3 = (s32) temp_a1;
        }
        temp_a1_2 = phi_s0->unk_2;
        phi_v0 = phi_v0_3;
        phi_t0 = phi_t0_3;
        if (phi_v1_2 < (s32) temp_a1_2) {
            phi_v1_3 = (s32) temp_a1_2;
        } else if ((s32) temp_a1_2 < phi_t1_2) {
            phi_t1_3 = (s32) temp_a1_2;
        }
        temp_a1_3 = phi_s0->unk_4;
        phi_v1 = phi_v1_3;
        phi_t1 = phi_t1_3;
        if (phi_a3_2 < (s32) temp_a1_3) {
            phi_a3_3 = (s32) temp_a1_3;
        } else if ((s32) temp_a1_3 < phi_t2_2) {
            phi_t2_3 = (s32) temp_a1_3;
        }
        phi_a3 = phi_a3_3;
        phi_t2 = phi_t2_3;
        phi_s0 += 0x20;
    } while (temp_t4 != 0xA20);
    arg1->unk_0 = (f32) ((f32) phi_v0_3 * arg0->scale.x);
    arg1->unk_4 = (f32) ((f32) phi_v1_3 * arg0->scale.y);
    arg1->unk_8 = (f32) ((f32) phi_a3_3 * arg0->scale.z);
    arg2->unk_0 = (f32) ((f32) phi_t0_3 * arg0->scale.x);
    arg2->unk_4 = (f32) ((f32) phi_t1_3 * arg0->scale.y);
    arg2->unk_8 = (f32) ((f32) phi_t2_3 * arg0->scale.z);
}

void func_808E5988(Actor *arg0, ? *arg1, ? *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f0 = arg2->unk_0;
    temp_f2 = arg1->unk_0;
    if (temp_f0 < temp_f2) {
        arg0[4].prevPos.z = temp_f2 * 0.000100000005f;
    } else {
        arg0[4].prevPos.z = -temp_f0 * 0.000100000005f;
    }
    temp_f0_2 = arg2->unk_8;
    temp_f2_2 = arg1->unk_8;
    if (temp_f0_2 < temp_f2_2) {
        arg0->unk_624 = (f32) (temp_f2_2 * 0.000100000005f);
        return;
    }
    arg0->unk_624 = (f32) (-temp_f0_2 * 0.000100000005f);
}

void func_808E5A00(Actor *arg0, ? *arg1, ? *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    u16 temp_t1;
    u16 temp_t7;
    u16 temp_v0;
    u16 phi_v0;

    temp_t7 = arg0->bgCheckFlags & ~0x1A;
    arg0->bgCheckFlags = temp_t7;
    temp_f2 = arg1->unk_4;
    if ((arg0->world.pos.y + temp_f2) > -90.0f) {
        arg0->bgCheckFlags = temp_t7 | 0x10;
        arg0->world.pos.y = -90.0f - temp_f2;
    }
    temp_f2_2 = arg2->unk_4;
    if ((arg0->world.pos.y + temp_f2_2) <= -690.0f) {
        temp_v0 = arg0->bgCheckFlags;
        arg0->world.pos.y = -690.0f - temp_f2_2;
        phi_v0 = temp_v0;
        if ((temp_v0 & 1) == 0) {
            temp_t1 = temp_v0 | 2;
            arg0->bgCheckFlags = temp_t1;
            phi_v0 = temp_t1 & 0xFFFF;
        }
        arg0->bgCheckFlags = phi_v0 | 1;
    } else {
        arg0->bgCheckFlags &= 0xFFFE;
    }
    if ((func_808E9AE0 != arg0[1].focus.pos.z) || ((arg0->bgCheckFlags & 1) == 0)) {
        temp_f0 = arg0->world.pos.x;
        temp_f2_3 = arg1->unk_0;
        if ((temp_f0 + temp_f2_3) > 1818.0f) {
            arg0->bgCheckFlags |= 8;
            arg0->world.pos.x = 1818.0f - temp_f2_3;
        } else {
            temp_f2_4 = arg2->unk_0;
            if ((temp_f0 + temp_f2_4) < 858.0f) {
                arg0->world.pos.x = 858.0f - temp_f2_4;
                arg0->bgCheckFlags |= 8;
            }
        }
        temp_f0_2 = arg0->world.pos.z;
        temp_f2_5 = arg1->unk_8;
        if ((temp_f0_2 + temp_f2_5) > -2012.0f) {
            arg0->bgCheckFlags |= 8;
            arg0->world.pos.z = -2012.0f - temp_f2_5;
            return;
        }
        temp_f2_6 = arg2->unk_8;
        if ((temp_f0_2 + temp_f2_6) < -2972.0f) {
            arg0->world.pos.z = -2972.0f - temp_f2_6;
            arg0->bgCheckFlags |= 8;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
    }
}

void func_808E5BB0(Actor *arg0, GlobalContext *arg1) {
    s16 spBC;
    s16 spA0;
    f32 sp6C;
    ? *temp_t3;
    CollisionCheckContext *temp_s3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a0_2;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a0;
    s16 *phi_t0;
    s16 *phi_a2;
    f32 *phi_a3;
    ? *phi_t3;
    s32 phi_a1;
    s16 *phi_a2_2;
    Actor *phi_v1;
    s16 *phi_t0_2;
    f32 *phi_a3_2;
    f32 phi_f12;
    f32 phi_f14;
    void *phi_v0;
    s32 phi_s1;
    Collider *phi_s0;
    s32 phi_s1_2;
    Collider *phi_s0_2;
    s32 phi_s1_3;
    Collider *phi_s0_3;
    s32 phi_s1_4;

    temp_f0 = arg0->scale.z;
    temp_f2 = arg0->scale.x;
    phi_t0 = &spBC;
    phi_a2 = &spA0;
    phi_a3 = &sp6C;
    phi_t3 = &D_808F02F4;
    if (temp_f0 < temp_f2) {
        phi_f14 = temp_f2;
    } else {
        phi_f14 = temp_f0;
    }
    do {
        temp_v0 = phi_t3->unk_0;
        temp_v1 = phi_t3->unk_4;
        *phi_t0 = -0x7530;
        *phi_a2 = 0x7530;
        *phi_a3 = 0.0f;
        if (temp_v0 < temp_v1) {
            phi_a1 = temp_v0 * 0x10;
            do {
                temp_a0 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + phi_a1;
                temp_v0_2 = temp_a0->unk_2;
                temp_a1 = phi_a1 + 0x10;
                phi_a1 = temp_a1;
                if ((s32) *phi_t0 < (s32) temp_v0_2) {
                    *phi_t0 = temp_v0_2;
                }
                if ((s32) temp_a0->unk_2 < (s32) *phi_a2) {
                    *phi_a2 = (s16) (s32) temp_a0->unk_2;
                }
                temp_v0_3 = temp_a0->unk_4;
                temp_v1_2 = temp_a0->unk_0;
                temp_f0_2 = sqrtf((f32) ((temp_v0_3 * temp_v0_3) + (temp_v1_2 * temp_v1_2)));
                if (*phi_a3 < temp_f0_2) {
                    *phi_a3 = temp_f0_2;
                }
            } while (temp_a1 < (temp_v1 * 0x10));
        }
        temp_t3 = phi_t3 + 4;
        phi_t0 += 2;
        phi_a2 += 2;
        phi_a3 += 4;
        phi_t3 = temp_t3;
    } while ((u32) temp_t3 < (u32) &D_808F0328);
    phi_a2_2 = &spA0;
    phi_v1 = arg0;
    phi_t0_2 = &spBC;
    phi_a3_2 = &sp6C;
    phi_v0 = arg0 + 0x6B8;
    phi_s1 = 0;
    phi_s1_2 = 0;
    phi_s1_3 = 0;
    phi_s1_4 = 0;
    do {
        phi_v1->unk_6C0 = (s16) (s32) (((f32) phi_a2_2[1] * arg0->scale.y) + arg0->world.pos.y);
        phi_v1->unk_6BA = (s16) (s32) ((f32) (*phi_t0_2 - phi_a2_2[1]) * arg0->scale.y);
        temp_f0_3 = phi_a3_2[1];
        temp_f2_2 = phi_a3_2->unk_0;
        if (temp_f2_2 < temp_f0_3) {
            phi_f12 = temp_f0_3;
        } else {
            phi_f12 = temp_f2_2;
        }
        temp_a0_2 = phi_v0->unk_2;
        phi_v0->unk_0 = (s16) (s32) (phi_f12 * phi_f14);
        if ((s32) temp_a0_2 <= 0) {
            phi_v0->unk_2 = 1;
        } else {
            phi_v0->unk_2 = temp_a0_2;
        }
        temp_s1 = phi_s1 + 0x4C;
        phi_v0->unk_6 = (s16) (s32) arg0->world.pos.x;
        phi_v0->unk_A = (s16) (s32) arg0->world.pos.z;
        phi_a2_2 += 2;
        phi_v1 += 0x4C;
        phi_t0_2 += 2;
        phi_a3_2 += 4;
        phi_v0 += 0x4C;
        phi_s1 = temp_s1;
    } while (temp_s1 < 0x390);
    if ((arg0->unk_688 & 1) != 0) {
        phi_s0 = arg0 + 0x678;
        do {
            CollisionCheck_SetAT(arg1, arg1 + 0x18884, phi_s0);
            temp_s1_2 = phi_s1_2 + 0x4C;
            phi_s0 = (Collider *) &phi_s0[3].at;
            phi_s1_2 = temp_s1_2;
        } while (temp_s1_2 != 0x390);
    }
    temp_s3 = &arg1->colChkCtx;
    if ((arg0->unk_689 & 1) != 0) {
        phi_s0_2 = arg0 + 0x678;
        do {
            CollisionCheck_SetAC(arg1, temp_s3, phi_s0_2);
            temp_s1_3 = phi_s1_3 + 0x4C;
            phi_s0_2 = (Collider *) &phi_s0_2[3].at;
            phi_s1_3 = temp_s1_3;
        } while (temp_s1_3 != 0x390);
    }
    phi_s0_3 = arg0 + 0x678;
    do {
        CollisionCheck_SetOC(arg1, temp_s3, phi_s0_3);
        temp_s1_4 = phi_s1_4 + 0x4C;
        phi_s0_3 = (Collider *) &phi_s0_3[3].at;
        phi_s1_4 = temp_s1_4;
    } while (temp_s1_4 != 0x390);
}

void func_808E5ED4(EnBigslime *arg0) {
    EnBigslime *temp_s2;
    s32 temp_s0;
    s32 temp_s4;
    s32 phi_s0;
    s32 phi_s1;
    f32 phi_f20;
    EnBigslime *phi_s2;

    arg0->wavySurfaceTimer = 0x18;
    temp_s4 = (s32) (Rand_ZeroOne() * 6.0f) >> 1;
    phi_s0 = 0;
    phi_s1 = temp_s4;
    phi_s2 = arg0;
    phi_f20 = (Rand_ZeroOne() * 40.0f) + 50.0f;
    do {
        if ((phi_s0 % 6) == 0) {
            phi_f20 = (Rand_ZeroOne() * 40.0f) + 50.0f;
        }
        temp_s0 = phi_s0 + 1;
        temp_s2 = phi_s2 + 4;
        temp_s2->gekkoScale = sin_rad((f32) phi_s1 * 1.0471976f) * phi_f20 * 0.001f;
        phi_s0 = temp_s0;
        phi_s1 += 1;
        phi_s2 = temp_s2;
    } while (temp_s0 != 0xA2);
}

void func_808E601C(EnBigslime *arg0) {
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f18_2;
    s16 *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_t2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    f32 phi_f18;
    s16 phi_v0;
    void *phi_a0;
    s32 phi_v1;
    f32 phi_f18_2;
    s16 phi_v0_2;
    void *phi_a0_2;
    s32 phi_t2;
    EnBigslime *phi_a2;
    s16 *phi_t1;
    s16 *phi_a1;
    s32 phi_t0;

    if (arg0->wavySurfaceTimer == 0) {
        func_808E5ED4(arg0);
    }
    arg0->wavySurfaceTimer += -1;
    temp_f0 = sin_rad((f32) arg0->wavySurfaceTimer * 0.2617994f);
    phi_t2 = 0;
    phi_a2 = arg0;
    phi_t1 = &D_808ED640;
    phi_t0 = 0;
    do {
        temp_a0 = &D_808EE060 + (arg0->dynamicVtxState * 0xA20) + phi_t0;
        temp_v0 = *phi_t1;
        temp_f18 = temp_f0 * (f32) temp_v0;
        phi_f18 = temp_f18;
        phi_v0 = temp_v0;
        phi_a0 = temp_a0;
        phi_v1 = 1;
        phi_f18_2 = temp_f18;
        phi_v0_2 = temp_v0;
        phi_a0_2 = temp_a0;
        phi_a1 = phi_t1;
        if (1 != 3) {
            do {
                temp_v1 = phi_v1 + 1;
                temp_a0_2 = phi_a0 + 2;
                temp_a1 = phi_a1 + 2;
                temp_a0_2->unk_-2 = (s16) ((s32) (phi_a2->vtxSurfacePerturbation[0] * phi_f18) + phi_v0);
                temp_v0_2 = *temp_a1;
                temp_f18_2 = temp_f0 * (f32) temp_v0_2;
                phi_f18 = temp_f18_2;
                phi_v0 = temp_v0_2;
                phi_a0 = temp_a0_2;
                phi_v1 = temp_v1;
                phi_f18_2 = temp_f18_2;
                phi_v0_2 = temp_v0_2;
                phi_a0_2 = temp_a0_2;
                phi_a1 = temp_a1;
            } while (temp_v1 != 3);
        }
        (phi_a0_2 + 2)->unk_-2 = (s16) ((s32) (phi_a2->vtxSurfacePerturbation[0] * phi_f18_2) + phi_v0_2);
        temp_t2 = phi_t2 + 4;
        phi_t2 = temp_t2;
        phi_a2 += 4;
        phi_t1 += 0x10;
        phi_t0 += 0x10;
    } while (temp_t2 != 0x288);
}

void func_808E616C(EnBigslime *arg0) {
    s32 temp_s0;
    void *temp_s1;
    EnBigslime *phi_s2;
    s32 phi_s0;

    phi_s2 = arg0;
    phi_s0 = 0;
    do {
        temp_s1 = phi_s2->minislime[0];
        temp_s1->actor.params = 1;
        temp_s1->actor.world.pos.x = randPlusMinusPoint5Scaled(80.0f) + (858.0f + ((f32) ((phi_s0 % 4) + 1) * 192.0f));
        temp_s1->actor.world.pos.y = Rand_ZeroFloat(250.0f) + -340.0f;
        temp_s0 = phi_s0 + 1;
        temp_s1->actor.world.pos.z = randPlusMinusPoint5Scaled(80.0f) + (-2972.0f + ((f32) ((phi_s0 / 4) + 1) * 192.0f));
        phi_s2 += 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xF);
    arg0->minislimeState = 2;
}

void func_808E62B8(Actor *arg0) {
    s16 temp_t1;
    s32 *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *phi_a3;
    s32 *phi_a1;
    s16 phi_t0;
    s16 phi_t1;

    arg0->unk_2B0 = 1;
    temp_a2 = arg0[7].next;
    temp_v1 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + (D_808F0358 * 0x10);
    temp_a2->params = 2;
    temp_a2->world.pos.x = ((f32) temp_v1->unk_0 * arg0->scale.x) + arg0->world.pos.x;
    temp_a2->world.pos.y = ((f32) temp_v1->unk_2 * arg0->scale.y) + arg0->world.pos.y;
    temp_a2->world.rot.x = 0x3FFD;
    temp_a2->world.pos.z = ((f32) temp_v1->unk_4 * arg0->scale.z) + arg0->world.pos.z;
    phi_a3 = arg0 + 4;
    phi_a1 = D_808F035C;
    phi_t0 = 0x3CCA;
    phi_t1 = 0x3997;
    do {
        temp_a2_2 = phi_a3->unk_A08;
        temp_v1_2 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + (*phi_a1 * 0x10);
        temp_a2_2->unk_1C = 2;
        temp_a1 = phi_a1 + 8;
        temp_a3 = phi_a3 + 8;
        temp_a2_2->unk_24 = (f32) (((f32) temp_v1_2->unk_0 * arg0->scale.x) + arg0->world.pos.x);
        temp_a2_2->unk_28 = (f32) (((f32) temp_v1_2->unk_2 * arg0->scale.y) + arg0->world.pos.y);
        temp_a2_2->unk_30 = phi_t0;
        temp_a2_2->unk_2C = (f32) (((f32) temp_v1_2->unk_4 * arg0->scale.z) + arg0->world.pos.z);
        temp_a2_3 = temp_a3->unk_A04;
        temp_v1_3 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + (temp_a1->unk_-4 * 0x10);
        temp_a2_3->unk_1C = 2;
        temp_a2_3->unk_24 = (f32) (((f32) temp_v1_3->unk_0 * arg0->scale.x) + arg0->world.pos.x);
        temp_a2_3->unk_28 = (f32) (((f32) temp_v1_3->unk_2 * arg0->scale.y) + arg0->world.pos.y);
        temp_a2_3->unk_30 = phi_t1;
        temp_t1 = phi_t1 - 0x666;
        temp_a2_3->unk_2C = (f32) (((f32) temp_v1_3->unk_4 * arg0->scale.z) + arg0->world.pos.z);
        phi_a3 = temp_a3;
        phi_a1 = temp_a1;
        phi_t0 += -0x666;
        phi_t1 = temp_t1;
    } while (temp_t1 != 0xCCD);
}

void func_808E64D4(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((temp_v0->unk_A70 & 0x80) != 0) {
        temp_v0->parent = NULL;
        temp_v0->unk_AE8 = 0x64;
        func_800B8D98(arg1, arg0, 10.0f, arg0->world.rot.y, 10.0f);
    }
}

void func_808E6538(Actor *arg0) {
    void *temp_v0;

    if (func_808EA860 == arg0[1].focus.pos.z) {
        temp_v0 = arg0[8].world.pos.x;
        if (temp_v0->unk_1C == 0xA) {
            temp_v0->unk_1C = 3;
        }
    }
}

void func_808E6570(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    Actor *temp_v0_2;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    u32 temp_t5;
    Actor *phi_v0;
    s32 phi_a0;

    temp_v0 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk_800, 3U);
    temp_a0 = temp_v0 << 0x10;
    sp2A = temp_v0;
    Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x4E20);
    Quake_SetQuakeValues(sp2A, 0xF, 0, 0, (s16) 0);
    Quake_SetCountdown(sp2A, 0xF);
    func_8013ECE0(arg0->xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
    arg0->unk_688 = (u8) (arg0->unk_688 & 0xFFFE);
    arg0->unk_63D = (u8) (arg0->unk_63D & 0xFFFC);
    phi_v0 = arg0;
    phi_a0 = 0;
    do {
        temp_a0_2 = phi_a0 + 4;
        phi_v0->unk_76D = (u8) (phi_v0->unk_76D & ~2);
        phi_v0->unk_721 = (u8) (phi_v0->unk_721 & ~2);
        phi_v0->unk_6D5 = (u8) (phi_v0->unk_6D5 & ~2);
        temp_v0_2 = phi_v0 + 0x130;
        temp_v0_2->unk_559 = (s8) (phi_v0->unk_689 & ~2);
        phi_v0 = temp_v0_2;
        phi_a0 = temp_a0_2;
    } while (temp_a0_2 != 0xC);
    func_808E62B8(arg0, 0xC);
    arg0->update = EnBigslime_Update;
    arg0->draw = EnBigslime_Draw;
    arg0->gravity = -2.0f;
    func_808E64D4(arg0, arg1);
    func_808E69F4(arg0, arg1);
    temp_t5 = arg0->flags & ~0x401;
    arg0->flags = temp_t5;
    arg0->colChkInfo.mass = 0x32;
    arg0->flags = temp_t5 | 0x200;
    arg0->hintId = 0x5F;
    arg0->unk_2CE = 0;
    arg0[2].focus.rot.x = 0;
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->unk_2B3 = 2;
    func_808EBED0(arg0, arg1);
    Audio_PlayActorSound2(arg0, 0x38DBU);
    func_808EA264(arg0);
}

void func_808E670C(EnBigslime *arg0, GlobalContext *arg1) {
    Camera *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Camera *temp_v0;

    temp_v0 = Play_GetCamera(arg1, arg0->camId);
    sp44 = temp_v0;
    Math_Vec3f_Copy((Vec3f *) &sp38, &temp_v0->eye);
    Math_Vec3f_Copy((Vec3f *) &sp2C, &sp44->at);
    Math_StepToF(&sp38, (Math_SinS(arg0->cameraYawGrabPlayer) * 250.0f) + arg0->actor.world.pos.x, 10.0f);
    Math_StepToF(&sp3C, -502.5f, 10.0f);
    Math_StepToF(&sp40, (Math_CosS(arg0->cameraYawGrabPlayer) * 250.0f) + arg0->actor.world.pos.z, 10.0f);
    Math_StepToF(&sp2C, arg0->actor.world.pos.x, 10.0f);
    Math_StepToF(&sp30, -602.5f, 10.0f);
    Math_StepToF(&sp34, arg0->actor.world.pos.z, 10.0f);
    Play_CameraSetAtEye(arg1, arg0->camId, (Vec3f *) &sp2C, (Vec3f *) &sp38);
}

void func_808E6828(EnBigslime *arg0, GlobalContext *arg1) {
    Camera *sp2C;
    ? sp20;
    Vec3f *sp1C;
    Camera *temp_v0;
    Vec3f *temp_a1;

    temp_v0 = Play_GetCamera(arg1, arg0->camId);
    sp2C = temp_v0;
    Math_Vec3f_Diff(&temp_v0->eye, &temp_v0->at, (Vec3f *) &sp20);
    Math_Vec3f_Scale((Vec3f *) &sp20, 0.9f);
    temp_a1 = &sp2C->at;
    sp1C = temp_a1;
    Math_Vec3f_Sum((Vec3f *) &sp20, temp_a1, (Vec3f *) &sp20);
    Play_CameraSetAtEye(arg1, arg0->camId, sp1C, (Vec3f *) &sp20);
}

void func_808E68AC(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    Camera *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s16 sp22;
    f32 sp1C;
    f32 sp18;
    Camera *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a0;

    temp_v0 = Play_GetCamera(arg1, arg0->unk_2C6);
    temp_a0 = arg0->yawTowardsPlayer + (arg2 * 0x31);
    sp22 = temp_a0;
    sp34 = temp_v0;
    temp_f0 = Math_SinS(temp_a0);
    temp_f2 = (f32) arg2;
    sp1C = temp_f2;
    temp_f12 = (temp_f2 * 19.0f) + 67.0f;
    sp18 = temp_f12;
    sp28 = (temp_f0 * temp_f12) + sp34->at.x;
    sp30 = (Math_CosS(temp_a0) * temp_f12) + sp34->at.z;
    sp2C = sp34->at.y + -4.0f + (2.0f * temp_f2);
    Play_CameraSetAtEye(arg1, arg0->unk_2C6, &sp34->at, (Vec3f *) &sp28);
}

void func_808E69AC(EnBigslime *arg0, GlobalContext *arg1) {
    Play_CameraSetAtEye(arg1, arg0->camId, arg0 + 0x3C, Play_GetCamera(arg1, arg0->camId) + 0x5C);
}

void func_808E69F4(Actor *arg0, GlobalContext *arg1) {
    Camera *temp_v0;
    s16 temp_a2;

    temp_a2 = arg0->unk_2C6;
    if (temp_a2 != 0) {
        temp_v0 = Play_GetCamera(arg1, temp_a2);
        Play_CameraSetAtEye(arg1, 0, temp_v0 + 0x50, temp_v0 + 0x5C);
        arg0->unk_2C6 = 0;
        ActorCutscene_Stop(arg0[2].world.rot.x);
        arg0[2].world.rot.x = ActorCutscene_GetAdditionalCutscene((s16) arg0->cutscene);
        func_800B724C(arg1, arg0, 6U);
    }
}

void func_808E6A70(EnBigslime *arg0, s16 arg1, f32 arg2, f32 arg3) {
    arg0->actor.scale.x = ((Math_SinS(arg1) * arg2) + 1.5f) * 0.1f;
    arg0->actor.scale.y = ((Math_CosS(arg1) * arg3) + 0.75f) * 0.1f;
    arg0->actor.scale.z = 0.3f - arg0->actor.scale.x;
}

void func_808E6B08(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;

    temp_a2 = arg0;
    arg1->envCtx.unk_C3 = 3;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a2 + 0x2EC, temp_a2 + 0x24);
    arg0->unk_2B4 = 0xEB;
    arg0[2].velocity.y = -690.0f;
    arg0->unk_628 = 0.025f;
}

void func_808E6B68(EnBigslime *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;

    temp_v0 = arg0->actionFuncStored;
    arg0->bigslimeCollider[0].base.acFlags |= 1;
    arg0->actionFunc = temp_v0;
    arg0->skelAnime.animPlaybackSpeed = 1.0f;
    if (func_808E7B80 == temp_v0) {
        arg0->bigslimeCollider[0].base.atFlags |= 1;
        func_808E7770();
        return;
    }
    if (func_808E84DC == arg0->actionFunc) {
        temp_v0_2 = arg0->idleTimer;
        if (temp_v0_2 == 0) {
            func_808E7D68();
            return;
        }
        if (temp_v0_2 == 1) {
            func_808E8064();
            return;
        }
        func_808E836C();
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_808E6C18(EnBigslime *arg0, s32 arg1) {
    func_8019F1C0(arg0 + 0x2E0, arg1 & 0xFFFF);
}

void func_808E6C44(EnBigslime *arg0, s32 arg1) {
    func_8019F420(arg0 + 0x2E0, arg1 & 0xFFFF);
}

void func_808E6C70(Actor *arg0) {
    arg0->unk_2B5 = 0xA;
    arg0->unk_640 = 3;
    arg0->unk_658 = 0;
    arg0[2].world.unk_12 = 2;
    arg0->flags &= -0x201;
    arg0[2].uncullZoneDownward = 0.75f;
    arg0[2].prevPos.x = 1.125f;
    arg0[2].uncullZoneScale = 1.0f;
}

void func_808E6CC8(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_2B5 == 0xA) {
        arg0->unk_2B5 = 0U;
        arg0->unk_640 = 6;
        arg0->unk_658 = 1;
        arg0[2].uncullZoneScale = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2F8), 0xC, 2, 0.3f, 0.2f);
        arg0->flags |= 0x200;
    }
}

void func_808E6D58(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    Camera *sp20;
    void *temp_t6;

    temp_t6 = arg1->actorCtx.actorList[2].first;
    sp24 = temp_t6;
    sp20 = Play_GetCamera(arg1, arg0->unk_2C6);
    arg1->envCtx.unk_C3 = 4;
    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_060066B4);
    arg0->unk_688 = (u8) (arg0->unk_688 & 0xFFFE);
    arg0->unk_689 = (u8) (arg0->unk_689 & 0xFFFE);
    Math_Vec3f_Copy(&sp20->at, arg0 + 0x3C);
    func_800B7298(arg1, arg0, 4U);
    sp24->shape.rot.y = arg0->yawTowardsPlayer + 0x8000;
    sp24->world.pos.x = (Math_SinS(arg0->yawTowardsPlayer) * 347.0f) + arg0->world.pos.x;
    temp_t6->world.pos.z = (Math_CosS(arg0->yawTowardsPlayer) * 347.0f) + arg0->world.pos.z;
    func_808E68AC(arg0, arg1, 0x19);
    arg0[2].focus.rot.x = arg0->yawTowardsPlayer + 0x8000;
    arg0[2].world.rot.y = 0;
    arg0[1].focus.pos.z = (bitwise f32) func_808E6E80;
}

void func_808E6E80(EnBigslime *this, GlobalContext *globalCtx) {
    if (this->isAnimUpdate != 0) {
        func_808E6F08(this);
        return;
    }
    if ((this->idleTimer == 0) && (Math_ScaledStepToS(&this->gekkoRot.y, this->actor.yawTowardsPlayer, 0x200) != 0)) {
        SkelAnime_ChangeAnimDefaultStop(&this->skelAnime, &D_060010F4);
        func_808E6C18(this, 0x395B);
        this->idleTimer = 1;
    }
}

void func_808E6F08(EnBigslime *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060069FC);
    arg0->idleTimer = 0x19;
    arg0->actionFunc = func_808E6F50;
}

void func_808E6F50(EnBigslime *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_a2;

    temp_a2 = this->idleTimer;
    if (temp_a2 != 0) {
        this->idleTimer = temp_a2 - 1;
    }
    func_808E68AC((Actor *) this, globalCtx, (s32) this->idleTimer);
    temp_a0 = &this->skelAnime;
    sp24 = temp_a0;
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 4.0f) != 0)) {
        func_808E6C18(this, 0x2902);
    }
    if (this->idleTimer == 0) {
        func_808E6FE0(this, globalCtx);
    }
}

void func_808E6FE0(EnBigslime *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06001B08, 5.0f);
    func_808E6C18(arg0, 0x395C);
    arg0->idleTimer = 0;
    func_800B7298(arg1, (Actor *) arg0, 7U);
    arg0->actionFunc = func_808E7048;
}

void func_808E7048(EnBigslime *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_v0 = this->idleTimer;
    temp_a0 = &this->skelAnime;
    if ((s32) temp_v0 > 0) {
        this->idleTimer = temp_v0 - 1;
        sp20 = temp_a0;
        if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 4.0f) != 0)) {
            func_808E6C18(this, 0x2902);
        }
        if (this->idleTimer == 0) {
            func_808E69F4((Actor *) this, globalCtx);
            this->formBigslimeTimer = 2;
            this->actor.flags |= 1;
            func_808EA748(this);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (this->isAnimUpdate != 0) {
        SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_060069FC);
        func_808E68AC((Actor *) this, globalCtx, 0x19);
        func_801A2E54(0x38);
        func_808E616C(this);
        globalCtx->envCtx.unk_C3 = 0xFF;
        this->idleTimer = 0x23;
        func_800B7298(globalCtx, (Actor *) this, 4U);
    }
}

void func_808E7154(EnBigslime *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06007790);
    arg0->actor.gravity = 0.0f;
    arg0->actor.velocity.y = 20.0f;
    if (arg0->camId != 0) {
        arg0->actor.speedXZ = 0.0f;
        arg0->idleTimer = 0x14;
    } else {
        arg0->idleTimer = 0x140;
        arg0->actor.speedXZ = 5.0f;
    }
    arg0->wavySurfaceTimer = 0;
    arg0->bigslimeCollider[0].base.acFlags |= 1;
    arg0->actor.colChkInfo.mass = 0xFF;
    arg0->actor.flags &= -0x201;
    arg0->actionFunc = func_808E71FC;
}

void func_808E71FC(EnBigslime *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 temp_a1;

    Math_ScaledStepToS((s16 *) &this->gekkoRot, 0, 0x400);
    this->idleTimer += -1;
    temp_a1 = this->idleTimer << 0xB;
    sp2E = temp_a1;
    func_808E6A70(this, temp_a1, 0.04f, 0.04f);
    func_808E601C(this);
    if (this->camId != 0) {
        if (this->idleTimer == 0) {
            func_808E69F4((Actor *) this, globalCtx);
            this->idleTimer = 0x140;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if ((this->actor.xzDistToPlayer < 250.0f) || (this->idleTimer == 0)) {
        func_808E732C(this);
        return;
    }
    this->actor.speedXZ = (fabsf(Math_SinS(sp2E)) * 3.0f) + 5.0f;
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x800, (s16) 0x80);
    this->gekkoRot.y = this->actor.world.rot.y;
}

void func_808E732C(EnBigslime *arg0) {
    arg0->actor.velocity.y = 0.0f;
    arg0->ceilingDropTimer = 0x1E;
    arg0->actor.speedXZ = 0.0f;
    arg0->actionFunc = func_808E7354;
}

void func_808E7354(EnBigslime *this, GlobalContext *globalCtx) {
    s16 *temp_s1;
    s16 temp_v0;
    u32 temp_s0;
    u32 phi_s0;
    s32 phi_s2;

    Math_ScaledStepToS((s16 *) &this->gekkoRot, 0x4000, 0x400);
    temp_v0 = this->ceilingDropTimer;
    if (temp_v0 != 0) {
        this->ceilingDropTimer = temp_v0 - 1;
        this->idleTimer += -1;
        func_808E601C(this);
        func_808E6A70(this, (s16) (this->idleTimer << 0xE), 0.2f, 0.15f);
        this->actor.scale.z = this->actor.scale.x;
        if (this->ceilingDropTimer == 0) {
            this->actor.gravity = -2.0f;
            func_808E6C18(this, 0x3964);
            this->rotation = 0;
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_808E7AF8(this);
        return;
    }
    Math_StepToF((f32 *) &this->actor.scale, 0.15f, 0.0025f);
    Math_StepToF(&this->actor.scale.y, 0.080000006f, 0.0025f);
    Math_StepToF(&this->actor.scale.z, 0.15f, 0.0025f);
    phi_s0 = (u32) &D_808ED640;
    phi_s2 = 0;
    do {
        temp_s1 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_s2;
        if (phi_s0 >= (u32) &D_808EDF60) {
            Math_StepToS(temp_s1 + 2, (s16) (s32) ((f32) phi_s0->unk_2 * 0.9f), 5);
        } else if (phi_s0 < (u32) &D_808ED740) {
            Math_StepToS(temp_s1 + 2, (s16) (s32) ((f32) phi_s0->unk_2 * 1.3f), 5);
        } else {
            Math_StepToS(temp_s1 + 2, phi_s0->unk_2, 5);
        }
        Math_StepToS(temp_s1, phi_s0->unk_0, 5);
        Math_StepToS(&temp_s1[2], phi_s0->unk_4, 5);
        temp_s0 = phi_s0 + 0x10;
        phi_s0 = temp_s0;
        phi_s2 += 0x10;
    } while (temp_s0 != &D_808EE060);
}

void func_808E75D8(Actor *arg0) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a2;
    s32 temp_v1;
    void *temp_v0;
    s32 phi_v1;
    s32 phi_a1;
    s32 phi_a1_2;

    phi_v1 = 0;
    do {
        temp_f2 = arg0->scale.x;
        temp_f14 = arg0->world.pos.x;
        temp_v0 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + phi_v1;
        temp_v1 = phi_v1 + 0x10;
        temp_f16 = temp_f14 + ((f32) temp_v0->unk_0 * temp_f2);
        phi_v1 = temp_v1;
        phi_a1_2 = 0;
        if (temp_f16 > 1818.0f) {
            temp_v0->unk_0 = (s16) (s32) ((1818.0f - temp_f14) / temp_f2);
            phi_a1_2 = 1;
        } else if (temp_f16 < 858.0f) {
            temp_v0->unk_0 = (s16) (s32) ((858.0f - temp_f14) / temp_f2);
            phi_a1_2 = 1;
        }
        temp_f0 = arg0->world.pos.z;
        temp_f2_2 = temp_f0 + ((f32) temp_v0->unk_4 * arg0->scale.z);
        phi_a1 = phi_a1_2;
        if (temp_f2_2 > -2012.0f) {
            temp_v0->unk_4 = (s16) (s32) ((-2012.0f - temp_f0) / arg0->scale.z);
            phi_a1 = phi_a1_2 + 1;
        } else if (temp_f2_2 < -2972.0f) {
            temp_v0->unk_4 = (s16) (s32) ((-2972.0f - temp_f0) / arg0->scale.z);
            phi_a1 = phi_a1_2 + 1;
        }
        temp_a2 = temp_v0->unk_2;
        if (temp_a2 != -0x3E8) {
            temp_v0->unk_2 = (s16) (temp_a2 + (phi_a1 * 0x64));
        }
    } while (temp_v1 != 0xA20);
}

void func_808E7770(Actor *arg0) {
    ? *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 phi_s1;
    ? *phi_s0;
    void *phi_a1;
    f32 phi_f2;
    void *phi_t0;
    s32 phi_a3;
    s32 phi_s1_2;
    ? *phi_s0_2;
    void *phi_a1_2;
    f32 phi_f2_2;
    void *phi_t0_2;
    s32 phi_a3_2;

    phi_s1 = 0;
    phi_s0 = &D_808F02F4;
    do {
        temp_f20 = (f32) phi_s1;
        temp_a3 = phi_s0->unk_0;
        temp_v0 = temp_a3 * 0x10;
        temp_s1 = phi_s1 + 1;
        temp_t1 = (s16) (s32) ((((cos_rad(temp_f20 * 0.5235988f) + 1.0f) * 0.925f) + -0.85f) * 1000.0f);
        phi_s1 = temp_s1;
        phi_a1 = temp_v0 + &D_808ED640;
        phi_t0 = temp_v0 + &D_808EF4A0;
        phi_a3 = temp_a3;
        phi_s1_2 = temp_s1;
        if (temp_a3 < phi_s0->unk_4) {
            do {
                temp_v0_2 = phi_a1->unk_4;
                temp_v1 = phi_a1->unk_0;
                temp_f0 = sqrtf((f32) ((temp_v0_2 * temp_v0_2) + (temp_v1 * temp_v1)));
                if (temp_f0 > 1.0f) {
                    phi_f2 = (1000.0f / (5.0f * temp_f0)) * temp_f20;
                } else {
                    phi_f2 = temp_f20 * 200.0f;
                }
                temp_a3_2 = phi_a3 + 1;
                phi_t0->unk_0 = (s16) (s32) ((f32) phi_a1->unk_0 * phi_f2);
                phi_t0->unk_2 = temp_t1;
                phi_t0->unk_4 = (s16) (s32) ((f32) phi_a1->unk_4 * phi_f2);
                phi_a1 += 0x10;
                phi_t0 += 0x10;
                phi_a3 = temp_a3_2;
            } while (temp_a3_2 < phi_s0->unk_4);
        }
        temp_s0 = phi_s0 + 4;
        phi_s0 = temp_s0;
        phi_s0_2 = temp_s0;
    } while (temp_s1 != 6);
    if (temp_s1 < 0xD) {
        do {
            temp_a3_3 = phi_s0_2->unk_0;
            temp_v0_3 = temp_a3_3 * 0x10;
            temp_t1_2 = (s16) (s32) (((cos_rad((f32) (phi_s1_2 - 6) * 0.19634955f) * 0.05f) + -1.0f) * 1000.0f);
            phi_a1_2 = temp_v0_3 + &D_808ED640;
            phi_a3_2 = temp_a3_3;
            if (temp_a3_3 < phi_s0_2->unk_4) {
                temp_f12 = (f32) (0xE - phi_s1_2);
                phi_t0_2 = temp_v0_3 + &D_808EF4A0;
                do {
                    temp_v0_4 = phi_a1_2->unk_4;
                    temp_v1_2 = phi_a1_2->unk_0;
                    temp_f0_2 = sqrtf((f32) ((temp_v0_4 * temp_v0_4) + (temp_v1_2 * temp_v1_2)));
                    if (temp_f0_2 > 1.0f) {
                        phi_f2_2 = (1000.0f / (8.0f * temp_f0_2)) * temp_f12;
                    } else {
                        phi_f2_2 = temp_f12 * 125.0f;
                    }
                    temp_a3_4 = phi_a3_2 + 1;
                    phi_t0_2->unk_0 = (s16) (s32) ((f32) phi_a1_2->unk_0 * phi_f2_2);
                    phi_t0_2->unk_2 = temp_t1_2;
                    phi_t0_2->unk_4 = (s16) (s32) ((f32) phi_a1_2->unk_4 * phi_f2_2);
                    phi_a1_2 += 0x10;
                    phi_t0_2 += 0x10;
                    phi_a3_2 = temp_a3_4;
                } while (temp_a3_4 < phi_s0_2->unk_4);
            }
            temp_s1_2 = phi_s1_2 + 1;
            phi_s1_2 = temp_s1_2;
            phi_s0_2 += 4;
        } while (temp_s1_2 < 0xD);
    }
    (&D_808EF4A0)[1288] = 0;
    (&D_808EF4A0)[1290] = 0;
    (&D_808EF4A0)[1289] = -0x3E8;
}

void func_808E7AF8(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x392FU);
    arg0[2].world.rot.y = 0x14;
    arg0->scale.x = 0.2f;
    arg0->scale.z = 0.2f;
    arg0->scale.y = 0.05f;
    arg0->world.pos.y = -640.0f;
    func_808E7770(arg0);
    func_808E75D8(arg0);
    arg0->unk_688 = (u8) (arg0->unk_688 | 1);
    arg0[1].focus.pos.z = (bitwise f32) func_808E7B80;
}

void func_808E7B80(EnBigslime *this, GlobalContext *globalCtx) {
    Actor *temp_s0_2;
    s16 *temp_s0;
    s16 *temp_s1;
    s32 temp_v1;
    s32 phi_s2;
    s16 *phi_s0;
    EnBigslime *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    this->idleTimer += -1;
    Math_ScaledStepToS((s16 *) &this->gekkoRot, 0, 0x400);
    Math_SmoothStepToF((f32 *) &this->actor.scale, 0.35f, 0.4f, 0.035f, 0.0034999999f);
    Math_SmoothStepToF(&this->actor.scale.y, 0.030000001f, 0.4f, 0.0030000003f, 0.0003f);
    this->actor.scale.z = this->actor.scale.x;
    phi_s2 = 0;
    phi_s0 = &D_808EF4A0;
    do {
        temp_s1 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_s2;
        Math_SmoothStepToS(temp_s1, phi_s0->unk_0, 5, 0x28, (s16) 5);
        Math_SmoothStepToS(&temp_s1[2], phi_s0[2], 5, 0x28, (s16) 5);
        Math_SmoothStepToS(&temp_s1[1], phi_s0[1], 2, 0x258, (s16) 3);
        temp_s0 = phi_s0 + 0x10;
        phi_s2 += 0x10;
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) &D_808EFEC0);
    func_808E75D8((Actor *) this);
    phi_v0 = this;
    phi_v1 = 0;
loop_3:
    phi_v1_2 = phi_v1;
    if ((phi_v0->bigslimeCollider[0].base.atFlags & 2) == 0) {
        temp_v1 = phi_v1 + 0x4C;
        phi_v0 += 0x4C;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        if (temp_v1 != 0x390) {
            goto loop_3;
        }
    }
    if ((phi_v1_2 != 0x390) && (temp_s0_2 = globalCtx->actorCtx.actorList[2].first, (globalCtx->grabPlayer(globalCtx, (Player *) temp_s0_2) != 0))) {
        temp_s0_2->parent = (Actor *) this;
        func_808EB83C(this);
        return;
    }
    if (this->idleTimer == 0) {
        func_808E844C(this);
    }
}

void func_808E7D68(EnBigslime *arg0) {
    ? *temp_s0;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_t1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    u32 temp_v1;
    s32 phi_s1;
    ? *phi_s0;
    void *phi_v0;
    f32 phi_f0;
    void *phi_v1;
    s32 phi_t0;
    s32 phi_s1_2;
    ? *phi_s0_2;
    void *phi_v1_2;
    void *phi_v0_2;

    (&D_808EF4A0)[1] = 0x3E8;
    D_808EF4A0.unk_0 = 0;
    (&D_808EF4A0)[2] = 0;
    phi_s1 = 1;
    phi_s0 = &D_808F02F8;
    do {
        temp_t0 = phi_s0->unk_0;
        temp_a2 = temp_t0 * 0x10;
        temp_t1 = (s16) (s32) ((((cos_rad((f32) (phi_s1 - 1) * 0.62831855f) + 1.0f) * 0.925f) + -0.85f) * 1000.0f);
        phi_v0 = temp_a2 + &D_808ED640;
        phi_t0 = temp_t0;
        if (temp_t0 < phi_s0->unk_4) {
            phi_v1 = temp_a2 + &D_808EF4A0;
            do {
                temp_a0 = phi_v0->unk_4;
                temp_a1 = phi_v0->unk_0;
                temp_f2 = (1000.0f / (5.0f * sqrtf((f32) ((temp_a0 * temp_a0) + (temp_a1 * temp_a1))))) * (f32) phi_s1;
                if (temp_f2 < 500.0f) {
                    phi_f0 = temp_f2 * 0.75f;
                } else {
                    phi_f0 = 1000.0f - ((1000.0f - temp_f2) * 0.75f);
                }
                temp_t0_2 = phi_t0 + 1;
                phi_v1->unk_0 = (s16) (s32) ((f32) phi_v0->unk_0 * phi_f0);
                phi_v1->unk_2 = temp_t1;
                phi_v1->unk_4 = (s16) (s32) ((f32) phi_v0->unk_4 * phi_f0);
                phi_v0 += 0x10;
                phi_v1 += 0x10;
                phi_t0 = temp_t0_2;
            } while (temp_t0_2 < phi_s0->unk_4);
        }
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 4;
        phi_s1 = temp_s1;
        phi_s0 = temp_s0;
        phi_s1_2 = temp_s1;
        phi_s0_2 = temp_s0;
    } while (temp_s1 != 6);
    if (temp_s1 < 0xC) {
        do {
            temp_t0_3 = phi_s0_2->unk_0;
            temp_a3 = phi_s0_2->unk_4;
            temp_s1_2 = phi_s1_2 + 1;
            phi_s1_2 = temp_s1_2;
            if (temp_t0_3 < temp_a3) {
                temp_a2_2 = temp_t0_3 * 0x10;
                phi_v1_2 = temp_a2_2 + &D_808EF4A0;
                phi_v0_2 = temp_a2_2 + &D_808ED640;
                do {
                    temp_v1 = phi_v1_2 + 0x10;
                    temp_v1->unk_-E = (s16) (s32) (((cos_rad((f32) (phi_s1_2 - 6) * 0.2617994f) * 0.05f) + -1.0f) * 1000.0f);
                    temp_v1->unk_-10 = (s16) phi_v0_2->unk_0;
                    temp_v1->unk_-C = (s16) phi_v0_2->unk_4;
                    phi_v1_2 = (void *) temp_v1;
                    phi_v0_2 += 0x10;
                } while (temp_v1 < (u32) ((temp_a3 * 0x10) + &D_808EF4A0));
            }
            phi_s0_2 += 4;
        } while (temp_s1_2 < 0xC);
    }
    *D_808EFEB4 = -0x3E8;
    *D_808EFEB4 = 0;
    *D_808EFEB4 = 0;
}

void func_808E8064(EnBigslime *arg0) {
    ? *temp_s0;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_t1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    u32 temp_v1;
    s32 phi_s1;
    ? *phi_s0;
    void *phi_v1;
    void *phi_v0;
    s32 phi_s1_2;
    ? *phi_s0_2;
    void *phi_v0_2;
    f32 phi_f0;
    void *phi_v1_2;
    s32 phi_t0;

    (&D_808EF4A0)[1] = 0x3E8;
    D_808EF4A0.unk_0 = 0;
    (&D_808EF4A0)[2] = 0;
    phi_s1 = 1;
    phi_s0 = &D_808F02F8;
    do {
        temp_t0 = phi_s0->unk_0;
        temp_a3 = phi_s0->unk_4;
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s1_2 = temp_s1;
        if (temp_t0 < temp_a3) {
            temp_a2 = temp_t0 * 0x10;
            phi_v1 = temp_a2 + &D_808EF4A0;
            phi_v0 = temp_a2 + &D_808ED640;
            do {
                temp_v1 = phi_v1 + 0x10;
                temp_v1->unk_-E = (s16) (s32) (((cos_rad((f32) (phi_s1 - 1) * 0.31415927f) * 0.1f) + 0.9f) * 1000.0f);
                temp_v1->unk_-10 = (s16) phi_v0->unk_0;
                temp_v1->unk_-C = (s16) phi_v0->unk_4;
                phi_v1 = (void *) temp_v1;
                phi_v0 += 0x10;
            } while (temp_v1 < (u32) ((temp_a3 * 0x10) + &D_808EF4A0));
        }
        temp_s0 = phi_s0 + 4;
        phi_s0 = temp_s0;
        phi_s0_2 = temp_s0;
    } while (temp_s1 != 6);
    if (temp_s1 < 0xC) {
        do {
            temp_t0_2 = phi_s0_2->unk_0;
            temp_a2_2 = temp_t0_2 * 0x10;
            temp_t1 = (s16) (s32) ((((cos_rad((f32) (phi_s1_2 - 6) * 0.62831855f) + 1.0f) * 0.925f) + -1.0f) * 1000.0f);
            phi_v0_2 = temp_a2_2 + &D_808ED640;
            phi_t0 = temp_t0_2;
            if (temp_t0_2 < phi_s0_2->unk_4) {
                phi_v1_2 = temp_a2_2 + &D_808EF4A0;
                do {
                    temp_a1 = phi_v0_2->unk_4;
                    temp_a0 = phi_v0_2->unk_0;
                    temp_f2 = (1000.0f / (6.0f * sqrtf((f32) ((temp_a1 * temp_a1) + (temp_a0 * temp_a0))))) * (f32) (0xC - phi_s1_2);
                    if (temp_f2 < 500.0f) {
                        phi_f0 = temp_f2 * 0.75f;
                    } else {
                        phi_f0 = 1000.0f - ((1000.0f - temp_f2) * 0.75f);
                    }
                    temp_t0_3 = phi_t0 + 1;
                    phi_v1_2->unk_0 = (s16) (s32) ((f32) phi_v0_2->unk_0 * phi_f0);
                    phi_v1_2->unk_2 = temp_t1;
                    phi_v1_2->unk_4 = (s16) (s32) ((f32) phi_v0_2->unk_4 * phi_f0);
                    phi_v0_2 += 0x10;
                    phi_v1_2 += 0x10;
                    phi_t0 = temp_t0_3;
                } while (temp_t0_3 < phi_s0_2->unk_4);
            }
            temp_s1_2 = phi_s1_2 + 1;
            phi_s1_2 = temp_s1_2;
            phi_s0_2 += 4;
        } while (temp_s1_2 < 0xC);
    }
    *D_808EFEB4 = -0x3E8;
    *D_808EFEB4 = 0;
    *D_808EFEB4 = 0;
}

void func_808E836C(EnBigslime *arg0) {
    ? *temp_a0;
    ? *phi_v1;
    ? *phi_a0;

    D_808EF4A0 = D_808ED642;
    D_808EF4A0 = *D_808ED644;
    D_808EF4A0 = D_808ED640;
    D_808EF4B0 = D_808ED652;
    D_808EF4B0 = *D_808ED654;
    D_808EF4B0 = D_808ED650;
    phi_v1 = &D_808ED660;
    phi_a0 = &D_808EF4C0;
    do {
        phi_a0->unk_0 = (s16) phi_v1->unk_0;
        phi_a0->unk_4 = (s16) phi_v1->unk_4;
        temp_a0 = phi_a0 + 0x40;
        temp_a0->unk_-30 = (s16) phi_v1->unk_10;
        temp_a0->unk_-E = (s16) phi_v1->unk_32;
        temp_a0->unk_-C = (s16) phi_v1->unk_34;
        temp_a0->unk_-2C = (s16) phi_v1->unk_14;
        temp_a0->unk_-2E = (s16) phi_v1->unk_12;
        temp_a0->unk_-20 = (s16) phi_v1->unk_20;
        temp_a0->unk_-1C = (s16) phi_v1->unk_24;
        temp_a0->unk_-1E = (s16) phi_v1->unk_22;
        temp_a0->unk_-10 = (s16) phi_v1->unk_30;
        temp_a0->unk_-3E = (s16) phi_v1->unk_2;
        phi_v1 += 0x40;
        phi_a0 = temp_a0;
    } while (temp_a0 != &D_808EFEC0);
}

void func_808E844C(EnBigslime *arg0) {
    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06007790);
    func_808E6C18(arg0, 0x3965);
    func_808E6C18(arg0, 0x3963);
    Audio_PlayActorSound2((Actor *) arg0, 0x392EU);
    arg0->idleTimer = 0;
    arg0->bigslimeCollider[0].base.atFlags &= 0xFFFE;
    arg0->actor.gravity = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    func_808E7D68(arg0);
    arg0->actionFunc = func_808E84DC;
    arg0->actor.world.rot.y = arg0->gekkoRot.y;
}

void func_808E84DC(EnBigslime *this, GlobalContext *globalCtx) {
    s16 *temp_s0;
    s16 *temp_s0_2;
    s16 *temp_s0_3;
    s16 *temp_s1;
    s16 *temp_s1_2;
    s16 *temp_s1_3;
    s16 temp_v0;
    s32 phi_s2;
    s16 *phi_s1;
    s32 phi_s2_2;
    s16 *phi_s1_2;
    s32 phi_s2_3;
    s16 *phi_s1_3;

    if ((s32) this->idleTimer < 2) {
        Math_SmoothStepToF((f32 *) &this->actor.scale, 0.13f, 0.2f, 0.039f, 0.0038999997f);
        Math_ScaledStepToS((s16 *) &this->gekkoRot, -0x4000, 0x400);
    } else {
        Math_SmoothStepToF((f32 *) &this->actor.scale, 0.15f, 0.4f, 0.015000001f, 0.0015f);
        Math_ScaledStepToS((s16 *) &this->gekkoRot, 0, 0x400);
    }
    this->actor.scale.z = this->actor.scale.x;
    func_808E75D8((Actor *) this);
    temp_v0 = this->idleTimer;
    if (temp_v0 == 0) {
        if (Math_SmoothStepToF(&this->actor.scale.y, 0.3f, 0.5f, 0.015000001f, 0.00075f) < 0.01f) {
            this->idleTimer = 1;
            func_808E8064(this);
        }
        phi_s2 = 0;
        phi_s1 = &D_808EF4A0;
        do {
            temp_s0 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_s2;
            Math_SmoothStepToS(temp_s0 + 2, phi_s1[1], 5, 0x226, (s16) 3);
            Math_SmoothStepToS(temp_s0, phi_s1->unk_0, 5, 0x28, (s16) 5);
            Math_SmoothStepToS(&temp_s0[2], phi_s1[2], 5, 0x28, (s16) 5);
            temp_s1 = phi_s1 + 0x10;
            phi_s2 += 0x10;
            phi_s1 = temp_s1;
        } while (temp_s1 != &D_808EFEC0);
    } else if (temp_v0 == 1) {
        if (Math_SmoothStepToF(&this->actor.scale.y, 0.075f, 0.4f, 0.0075000003f, 0.00075f) < 0.01f) {
            func_808E836C(this);
            this->idleTimer += 1;
        }
        phi_s2_2 = 0;
        phi_s1_2 = &D_808EF4A0;
        do {
            temp_s0_2 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_s2_2;
            Math_SmoothStepToS(temp_s0_2 + 2, phi_s1_2[1], 5, 0x32, (s16) 3);
            Math_SmoothStepToS(temp_s0_2, phi_s1_2->unk_0, 5, 0x28, (s16) 5);
            Math_SmoothStepToS(&temp_s0_2[2], phi_s1_2[2], 5, 0x28, (s16) 5);
            temp_s1_2 = phi_s1_2 + 0x10;
            phi_s2_2 += 0x10;
            phi_s1_2 = temp_s1_2;
        } while (temp_s1_2 != &D_808EFEC0);
        this->actor.world.pos.y = -90.0f - (this->actor.scale.y * 1000.0f);
    } else if (temp_v0 == 0xA) {
        func_808E7154(this, 0x3E990000);
    } else {
        this->idleTimer = temp_v0 + 1;
        phi_s2_3 = 0;
        phi_s1_3 = &D_808EF4A0;
        do {
            temp_s0_3 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_s2_3;
            Math_SmoothStepToS(temp_s0_3 + 2, phi_s1_3[1], 5, 0x226, (s16) 3);
            Math_SmoothStepToS(temp_s0_3, phi_s1_3->unk_0, 5, 0x28, (s16) 5);
            Math_SmoothStepToS(&temp_s0_3[2], phi_s1_3[2], 5, 0x28, (s16) 5);
            temp_s1_3 = phi_s1_3 + 0x10;
            phi_s2_3 += 0x10;
            phi_s1_3 = temp_s1_3;
        } while (temp_s1_3 != &D_808EFEC0);
    }
    func_808E75D8((Actor *) this);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x800, (s16) 0x80);
}

void func_808E88B8(Actor *arg0, GlobalContext *arg1) {
    Camera *temp_v0;
    s16 temp_v1;

    temp_v0 = Play_GetCamera(arg1, 0);
    Play_CameraSetAtEye(arg1, arg0->unk_2C6, temp_v0 + 0x50, temp_v0 + 0x5C);
    arg0[2].world.rot.y = 0xF;
    arg0[2].world.rot.z = 0;
    arg0->unk_688 = (u8) (arg0->unk_688 & 0xFFFE);
    arg0->world.rot.y = Actor_YawToPoint(arg0, arg0 + 8);
    temp_v1 = func_800DFCDC(arg1->cameraPtrs[arg1->activeCamera]) - arg0->world.rot.y;
    if ((s32) temp_v1 >= 0x4001) {
        arg0->unk_2C8 = -0x2000;
    } else if ((s32) temp_v1 > 0) {
        arg0->unk_2C8 = -0x6000;
    } else if ((s32) temp_v1 < -0x4000) {
        arg0->unk_2C8 = 0x2000;
    } else {
        arg0->unk_2C8 = 0x6000;
    }
    arg0->unk_2C8 = (s16) (arg0->unk_2C8 + arg0->world.rot.y);
    SkelAnime_ChangeAnimDefaultRepeat((SkelAnime *) &arg0[1], &D_0600F990);
    Audio_PlayActorSound2(arg0, 0x38D4U);
    arg0[1].focus.pos.z = (bitwise f32) func_808E89CC;
}

void func_808E89CC(EnBigslime *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    f32 sp38;
    f32 sp24;
    Actor *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 *temp_a1;
    s16 *temp_a3;
    s16 *temp_v1_2;
    s16 *temp_v1_3;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_a0;
    s16 phi_v0;
    s16 phi_t3;
    s16 *phi_v1;
    s32 phi_a0;
    s16 phi_v0_2;
    s16 phi_t3_2;
    s16 *phi_v1_2;
    s16 *phi_a3;
    s32 phi_t0;
    s16 *phi_a1;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_v0->unk_AE8 = 0;
    sp3C = temp_v0;
    Math_ScaledStepToS((s16 *) &this->gekkoRot, 0, 0x400);
    func_808E670C(this, globalCtx);
    temp_v1 = this->idleTimer;
    if ((s32) temp_v1 > 0) {
        temp_f0 = this->actor.scale.x;
        temp_f12 = this->actor.scale.y;
        temp_f2 = 1.0f / (f32) temp_v1;
        this->actor.scale.x = temp_f0 + ((0.15f - temp_f0) * temp_f2);
        this->actor.scale.z = this->actor.scale.x;
        this->actor.scale.y = temp_f12 + ((0.075f - temp_f12) * temp_f2);
        temp_f14 = temp_v0->world.pos.x;
        temp_f16 = temp_v0->world.pos.z;
        temp_f0_2 = temp_v0->world.pos.y;
        temp_v0->world.pos.x = temp_f14 + ((this->actor.world.pos.x - temp_f14) * temp_f2);
        temp_v0->world.pos.z = temp_f16 + ((this->actor.world.pos.z - temp_f16) * temp_f2);
        temp_v0->world.pos.y = temp_f0_2 + (((this->actor.world.pos.y + (this->actor.scale.y * -500.0f)) - temp_f0_2) * temp_f2);
        phi_a3 = &D_808ED640;
        phi_t0 = 0;
        do {
            temp_v1_2 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_t0;
            temp_v0_2 = *temp_v1_2;
            temp_t3 = *phi_a3;
            phi_v0 = temp_v0_2;
            phi_t3 = temp_t3;
            phi_v1 = temp_v1_2;
            phi_a0 = 1;
            phi_v0_2 = temp_v0_2;
            phi_t3_2 = temp_t3;
            phi_v1_2 = temp_v1_2;
            phi_a1 = phi_a3;
            if (1 != 3) {
                do {
                    temp_a0 = phi_a0 + 1;
                    temp_v1_3 = phi_v1 + 2;
                    temp_a1 = phi_a1 + 2;
                    temp_v1_3->unk_-2 = (s16) (phi_v0 + (s32) ((f32) (phi_t3 - phi_v0) * temp_f2));
                    temp_v0_3 = temp_v1_3->unk_0;
                    temp_t3_2 = *temp_a1;
                    phi_v0 = temp_v0_3;
                    phi_t3 = temp_t3_2;
                    phi_v1 = temp_v1_3;
                    phi_a0 = temp_a0;
                    phi_v0_2 = temp_v0_3;
                    phi_t3_2 = temp_t3_2;
                    phi_v1_2 = temp_v1_3;
                    phi_a1 = temp_a1;
                } while (temp_a0 != 3);
            }
            (phi_v1_2 + 2)->unk_-2 = (s16) (phi_v0_2 + (s32) ((f32) (phi_t3_2 - phi_v0_2) * temp_f2));
            temp_a3 = phi_a3 + 0x10;
            phi_a3 = temp_a3;
            phi_t0 += 0x10;
        } while (temp_a3 != &D_808EE060);
        temp_f2_2 = (f32) (0xF - this->idleTimer) / 15.0f;
        sp38 = temp_f2_2;
        temp_f12_2 = temp_f2_2 * -50.0f;
        this->gekkoPosOffset.x = Math_SinS(this->gekkoRot.y) * temp_f12_2;
        this->gekkoPosOffset.y = temp_f2_2 * -40.0f;
        sp24 = temp_f12_2;
        temp_f18 = Math_CosS(this->gekkoRot.y) * temp_f12_2;
        this->idleTimer += -1;
        this->gekkoPosOffset.z = temp_f18;
        if (this->idleTimer == 0) {
            func_808E8C38(temp_f12_2, this);
        }
    }
}

void func_808E8C38(void *arg0) {
    s32 temp_t1;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, *(&D_808F032C + (((s32) Rand_ZeroFloat(3.0f) % 3) * 4)));
    temp_t1 = (s32) Rand_ZeroFloat(3.0f);
    arg0->unk_2C4 = 6;
    arg0->unk_2B3 = (s8) (temp_t1 + 1);
    arg0->unk_188 = func_808E8CCC;
}

void func_808E8CCC(EnBigslime *this, GlobalContext *globalCtx) {
    Actor *sp34;
    s16 sp32;
    s32 sp24;
    SkelAnime *sp20;
    Actor *temp_v0;
    f32 temp_f0;
    s16 temp_v0_2;
    u8 temp_t0;
    AnimationHeader *phi_v0;
    s32 phi_v1;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp32 = this->idleTimer * 0x3333;
    temp_v0->unk_AE8 = 0;
    sp34 = temp_v0;
    Math_ScaledStepToS((s16 *) &this->gekkoRot, 0, 0x400);
    func_808E670C(this, globalCtx);
    func_808E601C(this);
    temp_v0_2 = this->idleTimer;
    if (temp_v0_2 != 0) {
        this->idleTimer = temp_v0_2 - 1;
    }
    if (&D_0600347C == this->skelAnime.animCurrentSeg) {
        if (func_801378B8(&this->skelAnime, 2.0f) == 0) {
            goto block_5;
        }
        goto block_10;
    }
block_5:
    phi_v0 = this->skelAnime.animCurrentSeg;
    if (&D_060070C4 == this->skelAnime.animCurrentSeg) {
        if (func_801378B8(&this->skelAnime, 9.0f) == 0) {
            phi_v0 = this->skelAnime.animCurrentSeg;
            goto block_8;
        }
        goto block_10;
    }
block_8:
    if ((&D_06003F28 == phi_v0) && (func_801378B8(&this->skelAnime, 2.0f) != 0)) {
block_10:
        this->idleTimer = 0xA;
        sp34->world.pos.x += 20.0f * Math_SinS(this->gekkoRot.y);
        sp34->world.pos.z += 20.0f * Math_CosS(this->gekkoRot.y);
        func_808E6828(this, globalCtx);
        if (&D_06003F28 == this->skelAnime.animCurrentSeg) {
            func_808E6C44(this, 0x3966);
        } else {
            func_808E6C44(this, 0x3961);
        }
    } else {
        Math_StepToF((f32 *) &sp34->world, this->actor.world.pos.x, 4.0f);
        Math_StepToF(&sp34->world.pos.z, this->actor.world.pos.z, 4.0f);
    }
    temp_f0 = ((f32) this->idleTimer * 0.08f) + 0.2f;
    func_808E6A70(this, sp32, temp_f0 * 0.15f, temp_f0 * 0.05f);
    sp34->world.pos.y = this->actor.world.pos.y + (this->actor.scale.y * -500.0f);
    if (this->isAnimUpdate != 0) {
        temp_t0 = this->formBigslimeTimer - 1;
        this->formBigslimeTimer = temp_t0;
        if ((temp_t0 & 0xFF) == 0) {
            this->numGekkoPosGrabPlayer += -1;
            if (((s32) gSaveContext.health < 5) || (this->numGekkoPosGrabPlayer == 0)) {
                this->numGekkoPosGrabPlayer = 0;
                this->gekkoRot.y = this->actor.world.rot.y;
                this->gekkoPosOffset.x = Math_SinS(this->gekkoRot.y) * -50.0f;
                this->gekkoPosOffset.z = Math_CosS(this->gekkoRot.y) * -50.0f;
                func_808E90A4(this);
                return;
            }
            globalCtx->damagePlayer(globalCtx, -4);
            func_800B8E58(sp34, (sp34->unk_A68->unk_92 + 0x6805) & 0xFFFF);
            phi_v1 = 1;
            if (Rand_ZeroOne() < 0.5f) {
                phi_v1 = -1;
            }
            sp24 = phi_v1;
            this->gekkoRot.y += Rand_S16Offset(0x4000, 0x4000) * phi_v1;
            this->gekkoPosOffset.x = Math_SinS(this->gekkoRot.y) * -50.0f;
            this->gekkoPosOffset.z = Math_CosS(this->gekkoRot.y) * -50.0f;
            this->formBigslimeTimer = (s32) Rand_ZeroFloat(3.0f) + 1;
            goto block_22;
        }
block_22:
        sp20 = &this->skelAnime;
        SkelAnime_ChangeAnimDefaultStop(sp20, *(&D_808F032C + (((s32) Rand_ZeroFloat(3.0f) % 3) * 4)));
        goto block_23;
    }
block_23:
    func_800B9010((Actor *) this, 0x3139U);
}

void func_808E90A4(EnBigslime *arg0) {
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_a1;
    void *temp_v0;
    s32 phi_a0;
    EnBigslime *phi_v1;
    s32 phi_a1;

    temp_f20 = Math_SinS(arg0->actor.world.rot.y) * 0.70710677f;
    phi_a0 = 0;
    phi_v1 = arg0;
    phi_a1 = 0;
    do {
        temp_a1 = phi_a1 + 4;
        temp_v0 = &D_808EE060 + (arg0->dynamicVtxState * 0xA20) + phi_a0;
        temp_f0 = (((f32) temp_v0->unk_4 * (Math_CosS(arg0->actor.world.rot.y) * 0.70710677f)) + (((f32) temp_v0->unk_0 * temp_f20) + ((f32) temp_v0->unk_2 * 0.70710677f))) * 0.001f;
        phi_a0 += 0x10;
        phi_a1 = temp_a1;
        if (temp_f0 < 0.01f) {
            phi_v1->vtxSurfacePerturbation[0] = 0.0f;
        } else {
            phi_v1->vtxSurfacePerturbation[0] = temp_f0 * 0.5f;
        }
        phi_v1 += 4;
    } while (temp_a1 != 0x288);
    arg0->idleTimer = 0x1B;
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600F048);
    func_808E6C44(arg0, 0x3962);
    arg0->actionFunc = func_808E91EC;
}

void func_808E91EC(EnBigslime *this, GlobalContext *globalCtx) {
    Actor *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 *temp_a0;
    s16 *temp_a0_2;
    s16 *temp_a0_3;
    s16 *temp_a0_4;
    s16 *temp_a1;
    s16 *temp_a2;
    s16 *temp_v0_4;
    s16 *temp_v0_5;
    s16 *temp_v0_6;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_a2_4;
    s16 temp_a2_5;
    s16 temp_t7;
    s16 temp_t7_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_t2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    EnBigslime *phi_t0;
    s16 *phi_v0;
    s16 phi_a2;
    f32 phi_f18;
    f32 phi_f2;
    s32 phi_v1;
    s16 *phi_v0_2;
    s16 phi_a2_2;
    f32 phi_f18_2;
    s16 phi_a2_3;
    f32 phi_f16;
    s16 *phi_v0_3;
    s32 phi_v1_2;
    s16 phi_a2_4;
    f32 phi_f16_2;
    s16 *phi_v0_4;
    s16 phi_a1;
    s16 phi_t7;
    s16 *phi_v0_5;
    s32 phi_v1_3;
    s16 phi_a1_2;
    s16 phi_t7_2;
    s16 *phi_v0_6;
    s32 phi_t2;
    s32 phi_t1;
    s16 *phi_a0;
    f32 phi_f12;
    s16 *phi_a0_2;
    s16 *phi_a0_3;

    sp44 = globalCtx->actorCtx.actorList[2].first;
    this->idleTimer += -1;
    func_808E670C(this);
    temp_v0 = this->idleTimer;
    if ((s32) temp_v0 > 0) {
        temp_f0 = (f32) temp_v0;
        temp_f2 = 1.0f / temp_f0;
        sp3C = temp_f2;
        temp_f12 = cos_rad(temp_f0 * 0.116355285f) + 1.0f;
        sp44->world.pos.y = this->actor.world.pos.y + (this->actor.scale.y * -500.0f);
        temp_v0_2 = this->gekkoRot.y;
        this->gekkoRot.y = temp_v0_2 + (s32) ((f32) (s16) (this->actor.world.rot.y - temp_v0_2) * temp_f2);
        sp40 = temp_f12;
        this->gekkoPosOffset.x = Math_SinS(this->gekkoRot.y) * -50.0f;
        this->gekkoPosOffset.z = Math_CosS(this->gekkoRot.y) * -50.0f;
        phi_f2 = temp_f2;
        phi_f12 = temp_f12;
    } else {
        if (temp_v0 == 0) {
            Audio_PlayActorSound2((Actor *) this, 0x38D8U);
            func_808E6C44(this, 0x3961);
        }
        temp_f12_2 = 0.5f - (cos_rad((f32) -(s32) this->idleTimer * 0.62831855f) * 0.5f);
        if (this->idleTimer == -5) {
            if ((sp44->unk_A70 & 0x80) != 0) {
                sp44->parent = NULL;
                sp44->unk_AE8 = 0x64;
            }
            sp44->velocity.y = 0.0f;
            sp40 = temp_f12_2;
            func_800B8D50(globalCtx, (Actor *) this, 10.0f, this->actor.world.rot.y, 10.0f, 4U);
            func_808E9778(this, globalCtx);
        }
        sp40 = temp_f12_2;
        sp44->world.pos.x = (Math_SinS(this->actor.world.rot.y) * (1060.5f * this->actor.scale.x) * temp_f12_2) + this->actor.world.pos.x;
        sp44->world.pos.z = (Math_CosS(this->actor.world.rot.y) * (1060.5f * this->actor.scale.z) * temp_f12_2) + this->actor.world.pos.z;
        temp_f14 = this->actor.scale.y;
        sp44->world.pos.y = this->actor.world.pos.y + (temp_f14 * -500.0f) + (1060.5f * temp_f14 * temp_f12_2);
        temp_f16 = this->gekkoPosOffset.x;
        temp_f18 = this->gekkoPosOffset.y;
        temp_f2_2 = 1.0f / (f32) (this->idleTimer + 6);
        this->gekkoPosOffset.x = temp_f16 - (temp_f16 * temp_f2_2);
        this->gekkoPosOffset.y = temp_f18 - (temp_f18 * temp_f2_2);
        sp28 = this->gekkoPosOffset.z;
        this->gekkoPosOffset.z = sp28 - (sp28 * temp_f2_2);
        phi_f2 = temp_f2_2;
        phi_f12 = 2.0f - (3.0f * temp_f12_2);
    }
    phi_t0 = this;
    phi_t2 = 0;
    phi_t1 = 0;
    do {
        temp_v0_3 = this->idleTimer;
        temp_a2 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_t1;
        if (phi_t0->vtxSurfacePerturbation[0] != 0.0f) {
            temp_a1 = phi_t1 + &D_808ED640;
            if ((s32) temp_v0_3 > 0) {
                temp_a2_2 = *temp_a1;
                temp_f18_2 = phi_f12 * (f32) temp_a2_2;
                phi_v0 = temp_a2;
                phi_a2 = temp_a2_2;
                phi_f18 = temp_f18_2;
                phi_v1 = 1;
                phi_v0_2 = temp_a2;
                phi_a2_2 = temp_a2_2;
                phi_f18_2 = temp_f18_2;
                phi_a0 = temp_a1;
                if (1 != 3) {
                    do {
                        temp_a1_2 = *phi_v0;
                        temp_v1 = phi_v1 + 1;
                        temp_v0_4 = phi_v0 + 2;
                        temp_a0 = phi_a0 + 2;
                        temp_v0_4->unk_-2 = (s16) (temp_a1_2 + (s32) ((f32) ((phi_a2 - (s32) (phi_f18 * phi_t0->vtxSurfacePerturbation[0])) - temp_a1_2) * phi_f2));
                        temp_a2_3 = *temp_a0;
                        temp_f18_3 = phi_f12 * (f32) temp_a2_3;
                        phi_v0 = temp_v0_4;
                        phi_a2 = temp_a2_3;
                        phi_f18 = temp_f18_3;
                        phi_v1 = temp_v1;
                        phi_v0_2 = temp_v0_4;
                        phi_a2_2 = temp_a2_3;
                        phi_f18_2 = temp_f18_3;
                        phi_a0 = temp_a0;
                    } while (temp_v1 != 3);
                }
                temp_a1_3 = *phi_v0_2;
                (phi_v0_2 + 2)->unk_-2 = (s16) (temp_a1_3 + (s32) ((f32) ((phi_a2_2 - (s32) (phi_f18_2 * phi_t0->vtxSurfacePerturbation[0])) - temp_a1_3) * phi_f2));
            } else {
                temp_a2_4 = *temp_a1;
                temp_f16_2 = phi_f12 * (f32) temp_a2_4;
                phi_a2_3 = temp_a2_4;
                phi_f16 = temp_f16_2;
                phi_v0_3 = temp_a2;
                phi_v1_2 = 1;
                phi_a2_4 = temp_a2_4;
                phi_f16_2 = temp_f16_2;
                phi_v0_4 = temp_a2;
                phi_a0_2 = temp_a1;
                if (1 != 3) {
                    do {
                        temp_v1_2 = phi_v1_2 + 1;
                        temp_v0_5 = phi_v0_3 + 2;
                        temp_a0_2 = phi_a0_2 + 2;
                        temp_v0_5->unk_-2 = (s16) (phi_a2_3 - (s32) (phi_t0->vtxSurfacePerturbation[0] * phi_f16));
                        temp_a2_5 = *temp_a0_2;
                        temp_f16_3 = phi_f12 * (f32) temp_a2_5;
                        phi_a2_3 = temp_a2_5;
                        phi_f16 = temp_f16_3;
                        phi_v0_3 = temp_v0_5;
                        phi_v1_2 = temp_v1_2;
                        phi_a2_4 = temp_a2_5;
                        phi_f16_2 = temp_f16_3;
                        phi_v0_4 = temp_v0_5;
                        phi_a0_2 = temp_a0_2;
                    } while (temp_v1_2 != 3);
                }
                (phi_v0_4 + 2)->unk_-2 = (s16) (phi_a2_4 - (s32) (phi_t0->vtxSurfacePerturbation[0] * phi_f16_2));
            }
        } else if ((s32) temp_v0_3 > 0) {
            temp_a0_3 = phi_t1 + &D_808ED640;
            temp_a1_4 = *temp_a2;
            temp_t7 = *temp_a0_3;
            phi_a1 = temp_a1_4;
            phi_t7 = temp_t7;
            phi_v0_5 = temp_a2;
            phi_v1_3 = 1;
            phi_a1_2 = temp_a1_4;
            phi_t7_2 = temp_t7;
            phi_v0_6 = temp_a2;
            phi_a0_3 = temp_a0_3;
            if (1 != 3) {
                do {
                    temp_v1_3 = phi_v1_3 + 1;
                    temp_v0_6 = phi_v0_5 + 2;
                    temp_a0_4 = phi_a0_3 + 2;
                    temp_v0_6->unk_-2 = (s16) (phi_a1 + (s32) ((f32) (phi_t7 - phi_a1) * phi_f2));
                    temp_a1_5 = temp_v0_6->unk_0;
                    temp_t7_2 = *temp_a0_4;
                    phi_a1 = temp_a1_5;
                    phi_t7 = temp_t7_2;
                    phi_v0_5 = temp_v0_6;
                    phi_v1_3 = temp_v1_3;
                    phi_a1_2 = temp_a1_5;
                    phi_t7_2 = temp_t7_2;
                    phi_v0_6 = temp_v0_6;
                    phi_a0_3 = temp_a0_4;
                } while (temp_v1_3 != 3);
            }
            (phi_v0_6 + 2)->unk_-2 = (s16) (phi_a1_2 + (s32) ((f32) (phi_t7_2 - phi_a1_2) * phi_f2));
        }
        temp_t2 = phi_t2 + 4;
        phi_t0 += 4;
        phi_t2 = temp_t2;
        phi_t1 += 0x10;
    } while (temp_t2 != 0x288);
}

void func_808E9778(Actor *arg0, GlobalContext *arg1) {
    arg0[2].world.rot.y = 0xA;
    func_808E7770(arg0);
    func_808E75D8(arg0);
    func_808E69F4(arg0, arg1);
    arg0[1].focus.pos.z = (bitwise f32) func_808E97D0;
}

void func_808E97D0(EnBigslime *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 *temp_a1;
    s16 *temp_a3;
    s16 *temp_v1;
    s16 *temp_v1_2;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0;
    s16 phi_v0;
    s16 phi_t4;
    s16 *phi_v1;
    s32 phi_a0;
    s16 phi_v0_2;
    s16 phi_t4_2;
    s16 *phi_v1_2;
    s16 *phi_a3;
    s16 *phi_a1;
    s32 phi_t0;
    s16 *phi_a1_2;

    this->idleTimer += -1;
    temp_v0 = this->idleTimer;
    phi_t0 = 0;
    if ((s32) temp_v0 > 0) {
        temp_f0 = 1.0f / (f32) temp_v0;
        phi_a3 = &D_808EF4A0;
        do {
            temp_v1 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + phi_t0;
            temp_v0_2 = *temp_v1;
            temp_t4 = *phi_a3;
            phi_v0 = temp_v0_2;
            phi_t4 = temp_t4;
            phi_v1 = temp_v1;
            phi_a0 = 1;
            phi_v0_2 = temp_v0_2;
            phi_t4_2 = temp_t4;
            phi_v1_2 = temp_v1;
            phi_a1 = phi_a3;
            phi_a1_2 = phi_a3;
            if (1 != 3) {
                do {
                    temp_a0 = phi_a0 + 1;
                    temp_v1_2 = phi_v1 + 2;
                    temp_a1 = phi_a1_2 + 2;
                    temp_v1_2->unk_-2 = (s16) (phi_v0 + (s32) ((f32) (phi_t4 - phi_v0) * temp_f0));
                    temp_v0_3 = temp_v1_2->unk_0;
                    temp_t4_2 = *temp_a1;
                    phi_v0 = temp_v0_3;
                    phi_t4 = temp_t4_2;
                    phi_v1 = temp_v1_2;
                    phi_a0 = temp_a0;
                    phi_v0_2 = temp_v0_3;
                    phi_t4_2 = temp_t4_2;
                    phi_v1_2 = temp_v1_2;
                    phi_a1 = temp_a1;
                    phi_a1_2 = temp_a1;
                } while (temp_a0 != 3);
            }
            (phi_v1_2 + 2)->unk_-2 = (s16) (phi_v0_2 + (s32) ((f32) (phi_t4_2 - phi_v0_2) * temp_f0));
            temp_a3 = phi_a3 + 0x10;
            phi_a3 = temp_a3;
            phi_t0 += 0x10;
        } while (temp_a3 != &D_808EFEC0);
        temp_f2 = this->actor.scale.x;
        temp_f12 = this->actor.scale.y;
        this->actor.scale.x = temp_f2 + ((0.2f - temp_f2) * temp_f0);
        this->actor.scale.z = this->actor.scale.x;
        this->actor.scale.y = temp_f12 + ((0.05f - temp_f12) * temp_f0);
        func_808E75D8((bitwise Actor *) temp_f12, this, phi_a1 + 2, 3, temp_a3);
    }
    if (this->idleTimer == 0) {
        func_808E844C(this);
    }
}

void func_808E994C(Actor *arg0) {
    s16 *temp_t1;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_a2;
    u32 temp_a2_2;
    void (*temp_t8)(EnBigslime *, GlobalContext *);
    s16 *phi_t0;
    s16 *phi_t1;
    s32 phi_a3;
    s16 *phi_a2;
    s8 phi_v1;
    s16 *phi_a2_2;
    s16 *phi_a2_3;
    Actor *phi_v1_2;
    s32 phi_v0;
    s8 phi_v1_3;

    arg0->speedXZ = 0.0f;
    arg0->unk_2C0 = 0x28;
    phi_v1 = 0;
    phi_v1_3 = 0;
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->velocity.y = 0.0f;
        arg0->gravity = 0.0f;
    } else if ((func_808E84DC == arg0[1].focus.pos.z) && ((s32) arg0[2].world.rot.y < 2)) {
        arg0->gravity = -2.0f;
    }
    arg0->unk_688 = (u8) (arg0->unk_688 & 0xFFFE);
    arg0->unk_689 = (u8) (arg0->unk_689 & 0xFFFE);
    phi_a2 = &D_808EF4A0;
    do {
        phi_t0 = &D_808EE060 + (arg0->unk_2B1 * 0xA20) + phi_v1_3;
        phi_t1 = phi_a2;
        phi_a3 = 0;
loop_7:
        temp_a3 = phi_a3 + 1;
        temp_t1 = phi_t1 + 2;
        temp_t1->unk_-2 = (s16) *phi_t0;
        phi_t0 += 2;
        phi_t1 = temp_t1;
        phi_a3 = temp_a3;
        if (temp_a3 != 3) {
            goto loop_7;
        }
        temp_a2 = phi_a2 + 0x10;
        phi_a2->unk_F = 0;
        phi_a2 = (s16 *) temp_a2;
        phi_v1_3 += 0x10;
    } while (temp_a2 < (u32) &D_808EFEC0);
    phi_a2_2 = &D_808EF4A0;
    do {
        phi_a2_2->unk_8AF = phi_v1;
        temp_v1 = phi_v1 + 0xA;
        phi_v1 = (s8) temp_v1;
        phi_a2_2 += 0x10;
    } while (temp_v1 < 0xC8);
    phi_a2_3 = &D_808EF4A0;
    do {
        temp_a2_2 = phi_a2_3 + 0x10;
        temp_a2_2->unk_9DF = 0xC8;
        phi_a2_3 = (s16 *) temp_a2_2;
    } while (temp_a2_2 < (u32) &D_808EF4E0);
    phi_v1_2 = arg0;
    phi_v0 = 0;
    do {
        phi_v1_2->unk_68A = (u8) (phi_v1_2->unk_68A & ~4);
        temp_v0 = phi_v0 + 4;
        phi_v1_2->unk_76E = (u8) (phi_v1_2->unk_76E & ~4);
        phi_v1_2->unk_722 = (u8) (phi_v1_2->unk_722 & ~4);
        phi_v1_2->unk_6D6 = (u8) (phi_v1_2->unk_6D6 & ~4);
        phi_v1_2 += 0x130;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0xC);
    temp_t8 = arg0[1].focus.pos.z;
    arg0[1].focus.pos.z = func_808E9AE0;
    arg0->unk_18C = temp_t8;
}

void func_808E9AE0(EnBigslime *this, GlobalContext *globalCtx) {
    ? *temp_v0_4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 *temp_s0;
    s16 temp_v0;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v0_5;
    void *temp_a0;
    s32 phi_s2;
    s16 *phi_v1;
    void *phi_a0;
    s32 phi_v0;
    s32 phi_s3;
    ? *phi_v0_2;

    temp_v0 = this->freezeTimer;
    if (temp_v0 != 0) {
        this->freezeTimer = temp_v0 - 1;
    }
    this->skelAnime.animPlaybackSpeed = (f32) this->freezeTimer / 40.0f;
    phi_s2 = this->freezeTimer * 4;
    phi_s3 = 0;
    do {
        temp_v0_2 = phi_s2 * 0x10;
        if (phi_s2 < 0xA2) {
            temp_s0 = &D_808EE060 + (this->dynamicVtxState * 0xA20) + temp_v0_2;
            temp_f0 = randPlusMinusPoint5Scaled(40.0f);
            temp_s0->unk_0 += (s32) (temp_f0 / this->actor.scale.x);
            temp_s0[1] += (s32) (temp_f0 / this->actor.scale.y);
            temp_s0[2] += (s32) (temp_f0 / this->actor.scale.z);
            temp_f2 = this->actor.scale.y;
            temp_f12 = this->actor.world.pos.y;
            phi_v1 = temp_s0;
            phi_a0 = temp_v0_2 + &D_808EF4A0;
            phi_v0 = 0;
            if ((((f32) temp_s0[1] * temp_f2) + temp_f12) < -690.0f) {
                temp_s0[1] = (s16) (s32) (((-690.0f - temp_f12) / temp_f2) - 1.0f);
            }
            do {
                temp_v0_3 = phi_v0 + 1;
                temp_a0 = phi_a0 + 2;
                temp_a0->unk_-2 = (s16) *phi_v1;
                phi_v1 += 2;
                phi_a0 = temp_a0;
                phi_v0 = temp_v0_3;
            } while (temp_v0_3 != 3);
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 1;
        phi_s3 = temp_s3;
    } while (temp_s3 < 4);
    D_808EF4AF = *D_808EF4EF;
    D_808EF4BF = D_808EF4FF;
    phi_v0_2 = &D_808EF500;
    do {
        temp_v0_4 = phi_v0_2 + 0x40;
        temp_v0_4->unk_-61 = (u8) phi_v0_2->unk_1F;
        temp_v0_4->unk_-51 = (u8) phi_v0_2->unk_2F;
        temp_v0_4->unk_-41 = (u8) phi_v0_2->unk_3F;
        temp_v0_4->unk_-71 = (u8) phi_v0_2->unk_F;
        phi_v0_2 = temp_v0_4;
    } while (temp_v0_4 != &D_808EFEC0);
    func_800B9010((Actor *) this, 0x20B2U);
    temp_v0_5 = this->actor.bgCheckFlags;
    if ((temp_v0_5 & 2) != 0) {
        if (this->freezeTimer == 0) {
            func_808E6570((Actor *) this, globalCtx);
            return;
        }
        this->bigslimeCollider[0].base.acFlags |= 1;
        func_808EBED0((Actor *) this, globalCtx);
        func_808E7AF8(this);
        return;
    }
    if (this->freezeTimer == 0) {
        if ((temp_v0_5 & 1) == 0) {
            func_808EA14C(this);
            return;
        }
        func_808E9DA8(this);
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_808E9DA8(EnBigslime *arg0) {
    arg0->freezeTimer = 0x50;
    arg0->bigslimeCollider[0].base.acFlags |= 1;
    arg0->actionFunc = func_808E9DD0;
}

void func_808E9DD0(EnBigslime *this, GlobalContext *globalCtx) {
    f32 sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    s16 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;

    this->freezeTimer += -1;
    temp_v0 = this->freezeTimer;
    if (temp_v0 == 0) {
        func_808EBED0((Actor *) this);
        func_808E6B68(this);
        return;
    }
    if (temp_v0 == 0x28) {
        Math_Vec3f_Copy(&this->iceShardRefPos, (Vec3f *) &this->actor.world);
        return;
    }
    if (((s32) temp_v0 < 0x14) || (((s32) temp_v0 < 0x28) && ((temp_v0 & 1) != 0))) {
        temp_f0 = 1.0f / (f32) temp_v0;
        temp_f12 = 4.0f * temp_f0;
        sp34 = temp_f0;
        sp24 = temp_f12;
        sp2C = Rand_ZeroFloat(temp_f12);
        temp_f0_2 = 1.0f + sp34;
        phi_v0 = 1;
        phi_v0_2 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0 = -1;
        }
        this->actor.world.pos.x = ((f32) phi_v0 * (temp_f0_2 + sp2C)) + this->iceShardRefPos.x;
        sp28 = temp_f0_2;
        sp2C = Rand_ZeroFloat(sp24);
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0_2 = -1;
        }
        this->actor.world.pos.z = ((f32) phi_v0_2 * (sp28 + sp2C)) + this->iceShardRefPos.z;
    }
}

void func_808E9F38(Actor *arg0) {
    s8 temp_t0;
    u32 temp_v1;
    s16 *phi_v1;
    s8 phi_t0;
    s16 *phi_v1_2;
    s8 phi_a2;
    s8 phi_a3;
    s8 phi_a1;

    arg0->unk_689 = (u8) (arg0->unk_689 & 0xFFFE);
    phi_v1 = &D_808EF4A0;
    do {
        temp_v1 = phi_v1 + 0x10;
        temp_v1->unk_-1 = 0;
        phi_v1 = (s16 *) temp_v1;
    } while (temp_v1 < (u32) &D_808EF4C0);
    phi_t0 = 0x1E;
    phi_v1_2 = &D_808EF4A0;
    phi_a2 = 0xA;
    phi_a3 = 0x14;
    phi_a1 = 0;
    do {
        phi_v1_2->unk_5F = phi_t0;
        temp_t0 = phi_t0 + 0x28;
        phi_v1_2->unk_3F = phi_a2;
        phi_v1_2->unk_4F = phi_a3;
        phi_v1_2->unk_2F = phi_a1;
        phi_t0 = temp_t0;
        phi_v1_2 += 0x40;
        phi_a2 += 0x28;
        phi_a3 += 0x28;
        phi_a1 += 0x28;
    } while (temp_t0 != 0xE6);
    arg0->unk_2C0 = 0;
    arg0[1].focus.pos.z = func_808E9FC0;
}

void func_808E9FC0(EnBigslime *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? *temp_v0_3;
    f32 *temp_a1;
    s16 *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_4;
    ? *phi_v0;

    this->freezeTimer += 1;
    temp_v0 = this->freezeTimer;
    if (((s32) temp_v0 < 0x46) && ((temp_v0 & 1) != 0)) {
        temp_v0_2 = (this->dynamicVtxState * 0xA20) + (((s32) Rand_ZeroFloat(162.0f) % 0xA2) * 0x10) + &D_808EE060;
        temp_a1 = &sp3C;
        sp3C = ((f32) temp_v0_2->unk_0 * this->actor.scale.x) + this->actor.world.pos.x;
        sp40 = ((f32) temp_v0_2[1] * this->actor.scale.y) + this->actor.world.pos.y;
        sp44 = ((f32) temp_v0_2[2] * this->actor.scale.z) + this->actor.world.pos.z;
        EffectSsIceSmoke_Spawn(globalCtx, (Vec3f *) temp_a1, &D_808F0394, &D_801D15B0, (s16) 0x258);
    }
    func_800B9010((Actor *) this, 0x2144U);
    phi_v0 = &D_808EFE90;
    do {
        temp_v0_3 = phi_v0 - 0x10;
        temp_v0_3->unk_3F = (u8) phi_v0->unk_F;
        phi_v0 = temp_v0_3;
    } while ((u32) temp_v0_3 >= (u32) &D_808EF4A0);
    temp_v0_4 = this->freezeTimer;
    if (temp_v0_4 == 0x64) {
        func_808E6B68(this);
        return;
    }
    if (temp_v0_4 == 0x32) {
        globalCtx->envCtx.unk_C3 = 0xFF;
    }
}

void func_808EA14C(EnBigslime *arg0) {
    EnBigslime *temp_v1;
    s32 temp_v0;
    EnBigslime *phi_v1;
    s32 phi_v0;

    arg0->bigslimeCollider[0].base.atFlags |= 1;
    arg0->actor.gravity = -2.0f;
    arg0->actor.velocity.y = 0.0f;
    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 4;
        phi_v1->bigslimeCollider[3].base.ocFlags1 |= 4;
        phi_v1->bigslimeCollider[2].base.ocFlags1 |= 4;
        phi_v1->bigslimeCollider[1].base.ocFlags1 |= 4;
        temp_v1 = phi_v1 + 0x130;
        temp_v1->unk_55A = (s8) (phi_v1->bigslimeCollider[0].base.ocFlags1 | 4);
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0xC);
    arg0->actionFunc = func_808EA1C8;
}

void func_808EA1C8(EnBigslime *this, GlobalContext *globalCtx) {
    s32 temp_v1;
    EnBigslime *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    phi_v0 = this;
    phi_v1 = 0;
loop_1:
    phi_v1_2 = phi_v1;
    if ((phi_v0->bigslimeCollider[0].base.atFlags & 2) == 0) {
        temp_v1 = phi_v1 + 0x4C;
        phi_v0 += 0x4C;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        if (temp_v1 != 0x390) {
            goto loop_1;
        }
    }
    if (phi_v1_2 != 0x390) {
        func_800B8D50(globalCtx, (Actor *) this, 7.0f, this->actor.yawTowardsPlayer, 5.0f, 0x10U);
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_808E6570((Actor *) this, globalCtx);
    }
}

void func_808EA264(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060039C4);
    arg0[2].world.rot.y = 0x64;
    arg0->unk_2B6 = (s16) (arg0->yawTowardsPlayer + 0x8000);
    arg0[1].focus.pos.z = func_808EA2D0;
    arg0->speedXZ = 8.0f;
    arg0->world.rot.y = arg0[2].focus.rot.x;
}

void func_808EA2D0(EnBigslime *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    Actor *temp_v0_3;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v1;
    u8 temp_v0_2;
    s32 phi_a1;

    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->gekkoCollider.base.acFlags |= 1;
        this->actor.flags |= 1;
    }
    temp_a0 = &this->skelAnime;
    this->idleTimer += -1;
    sp2C = temp_a0;
    if (func_801378B8(temp_a0, 1.0f) != 0) {
        func_808E6C18(this, 0x395B);
    } else if (func_801378B8(temp_a0, 11.0f) != 0) {
        func_808E6C18(this, 0x2902);
    }
    if (((this->actor.bgCheckFlags & 1) == 0) || ((temp_f0 = this->skelAnime.animCurrentFrame, (temp_f0 > 1.0f)) && (temp_f0 < 12.0f))) {
        this->actor.speedXZ = 8.0f;
    } else {
        this->actor.speedXZ = 0.0f;
    }
    if (Math_SmoothStepToS(&this->actor.world.rot.y, this->gekkoYaw, 5, 0x1000, (s16) 0x80) == 0) {
        temp_a1 = &this->actor.home;
        sp2C = (SkelAnime *) temp_a1;
        if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1) > 240.0f) {
            temp_v0 = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1);
            temp_a0_2 = this->actor.yawTowardsPlayer + 0x8000;
            temp_v1 = temp_v0 - temp_a0_2;
            phi_a1 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_a1 = -(s32) temp_v1;
            }
            if (phi_a1 < 0x3000) {
                this->gekkoYaw = temp_v0;
            } else {
                this->gekkoYaw = ((s32) temp_v1 / 2) + temp_a0_2;
            }
        } else {
            this->gekkoYaw = this->actor.yawTowardsPlayer + 0x8000;
        }
    }
    this->gekkoRot.y = this->actor.world.rot.y;
    if (this->idleTimer == 0) {
        temp_v0_2 = this->formBigslimeTimer;
        if (temp_v0_2 == 0) {
            func_808EB83C(this);
            return;
        }
        this->formBigslimeTimer = temp_v0_2 - 1;
        func_808EA538(this);
        return;
    }
    if ((this->actor.xzDistToPlayer > 300.0f) && ((this->gekkoCollider.base.ocFlags1 & 2) != 0)) {
        temp_v0_3 = this->gekkoCollider.base.oc;
        if ((temp_v0_3->params == 3) && (temp_v0_3->id == 0xD9)) {
            temp_v0_3->params = 0xA;
            this->minislimeToThrow = (EnMinislime *) this->gekkoCollider.base.oc;
            func_808EA80C(this);
        }
    }
}

void func_808EA538(Actor *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_060069FC);
    arg0[2].world.rot.y = 0x3C;
    arg0->speedXZ = 0.0f;
    if ((s32) (s16) (Actor_YawToPoint(arg0, arg0 + 8) - arg0[2].focus.rot.x) > 0) {
        arg0->unk_2B6 = (s16) ((Rand_Next() >> 0x14) + arg0[2].focus.rot.x + 0x2000);
    } else {
        arg0->unk_2B6 = (s16) ((arg0[2].focus.rot.x - (Rand_Next() >> 0x14)) - 0x2000);
    }
    arg0[1].focus.pos.z = (bitwise f32) func_808EA5E8;
}

void func_808EA5E8(EnBigslime *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    this->idleTimer += -1;
    if (this->isAnimUpdate != 0) {
        if (Rand_ZeroOne() < 0.25f) {
            SkelAnime_ChangeAnimDefaultStop(&this->skelAnime, &D_060066B4);
        } else {
            SkelAnime_ChangeAnimDefaultStop(&this->skelAnime, &D_060069FC);
        }
    }
    if ((&D_060069FC == this->skelAnime.animCurrentSeg) && (Math_ScaledStepToS(&this->gekkoRot.y, this->gekkoYaw, 0x400) != 0)) {
        if ((s32) (s16) (Actor_YawToPoint((Actor *) this, (Vec3f *) &this->actor.home) - this->gekkoRot.y) > 0) {
            this->gekkoYaw = (Rand_Next() >> 0x14) + this->gekkoRot.y + 0x2000;
        } else {
            this->gekkoYaw = (this->gekkoRot.y - (Rand_Next() >> 0x14)) - 0x2000;
        }
    }
    temp_v0 = this->actor.yawTowardsPlayer - this->gekkoRot.y;
    if (this->idleTimer != 0) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 < 0x2800) && (this->actor.xzDistToPlayer < 240.0f)) {
            goto block_14;
        }
    } else {
block_14:
        func_808EA748(this);
    }
}

void func_808EA748(EnBigslime *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_060010F4);
    arg0->gekkoYaw = arg0->gekkoRot.y + 0x8000;
    func_808E6C18(arg0, 0x395F);
    arg0->actionFunc = func_808EA7A4;
}

void func_808EA7A4(EnBigslime *this, GlobalContext *globalCtx) {
    s16 *temp_a0;
    s16 temp_a1;

    temp_a0 = &this->gekkoRot.y;
    if (this->skelAnime.animCurrentFrame > 10.0f) {
        temp_a1 = this->gekkoYaw;
        this = this;
        Math_ScaledStepToS(temp_a0, temp_a1, 0x800);
    }
    if ((Actor *) this->unk_2B2 != 0) {
        func_808EA264((Actor *) this);
    }
}

void func_808EA80C(EnBigslime *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600F048);
    func_808E6C18(arg0, 0x395D);
    arg0->actionFunc = func_808EA860;
    arg0->actor.speedXZ = 0.0f;
}

void func_808EA860(EnBigslime *this, GlobalContext *globalCtx) {
    s16 sp26;

    Math_ScaledStepToS(&this->gekkoRot.y, this->actor.yawTowardsPlayer, 0x300);
    if ((func_801378B8(&this->skelAnime, 27.0f) != 0) && (this->minislimeToThrow->actor.params == 0xA)) {
        func_808E6C18(this, 0x395E);
        this->minislimeToThrow->actor.params = 0xB;
    }
    if (this->isAnimUpdate != 0) {
        sp26 = this->idleTimer;
        func_808EA264((Actor *) this);
        this->idleTimer = sp26;
    }
}

void func_808EA8FC(Actor *arg0, s32 arg1) {
    u32 temp_v0;

    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_0600276C, -3.0f);
    arg0->unk_63D = (u8) (arg0->unk_63D & 0xFFFE);
    arg0[2].world.rot.y = 0x14;
    arg0->speedXZ = 10.0f;
    arg0->gravity = -2.0f;
    arg0->velocity.y = 0.0f;
    if (arg1 != 0) {
        func_800BE504(arg0, arg0 + 0x62C);
    }
    func_808E6C18((EnBigslime *) arg0, 0x38D3);
    temp_v0 = arg0->flags;
    if ((temp_v0 & 0x2000) == 0x2000) {
        arg0->flags = temp_v0 & ~0x2000;
    }
    arg0[1].focus.pos.z = (bitwise f32) func_808EA9B8;
}

void func_808EA9B8(EnBigslime *this, GlobalContext *globalCtx) {
    f32 *temp_a0;
    s16 temp_v0;
    s16 phi_v1;

    temp_a0 = &this->actor.speedXZ;
    this->idleTimer += -1;
    temp_v0 = this->idleTimer;
    phi_v1 = temp_v0;
    if ((s32) temp_v0 >= 0xB) {
        phi_v1 = 0xA;
    }
    this->gekkoRot.y += phi_v1 * 0x300;
    this = this;
    Math_StepToF(temp_a0, 0.0f, 0.5f);
    if (this->idleTimer == 0) {
        func_808EB83C(this);
    }
}

void func_808EAA40(Actor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0[1].home.pos.x;
    if ((&D_060039C4 == temp_v0) || (&D_060010F4 == temp_v0)) {
        arg0->unk_15C = 1.0f;
    }
    arg0[1].focus.pos.z = func_808EAA8C;
    arg0->unk_160 = 0.0f;
    arg0->speedXZ = 0.0f;
}

void func_808EAA8C(EnBigslime *this, GlobalContext *globalCtx) {
    this->stunTimer += -1;
    if (this->stunTimer == 0) {
        if (this->gekkoDrawEffect == 0xA) {
            func_808E6CC8();
            func_808EA8FC((Actor *) this, 0);
            return;
        }
        this->gekkoCollider.base.acFlags &= 0xFFFE;
        func_808EB83C();
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_808EAAF8(Actor *arg0) {
    Vec3f *sp24;
    Vec3f *temp_a1;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06002E0C);
    temp_a1 = arg0 + 8;
    arg0->unk_63D = (u8) (arg0->unk_63D & 0xFFFE);
    sp24 = temp_a1;
    arg0->world.rot.x = (s16) -Actor_PitchToPoint(arg0, temp_a1);
    arg0->world.rot.y = Actor_YawToPoint(arg0, temp_a1);
    arg0[1].focus.pos.z = (bitwise f32) func_808EAB74;
    arg0->speedXZ = 0.0f;
}

void func_808EAB74(EnBigslime *this, GlobalContext *globalCtx) {
    func_808E69AC(this);
    Math_ScaledStepToS(&this->gekkoRot.y, this->actor.world.rot.y, 0x800);
    if (func_801378B8(&this->skelAnime, 18.0f) != 0) {
        func_808EABCC(this);
    }
}

void func_808EABCC(Actor *arg0) {
    Actor *temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    Actor *phi_v0;
    s32 phi_v1;
    Actor *phi_v0_2;
    s32 phi_v1_2;

    arg0->gravity = 0.0f;
    arg0->unk_2CE = (s16) (0x4000 - arg0->world.rot.x);
    arg0->unk_2B3 = 0;
    arg0[2].world.rot.z = 0;
    arg0[2].world.rot.y = 2;
    arg0->speedXZ = 25.0f;
    arg0[2].focus.rot.x = arg0->world.rot.y;
    phi_v0 = arg0;
    phi_v1 = 0;
    phi_v1_2 = 0;
    do {
        temp_v1 = phi_v1 + 1;
        phi_v0[7].next->unk_1C = 4;
        phi_v0 += 4;
        phi_v1 = temp_v1;
    } while (temp_v1 < 0xF);
    phi_v0_2 = arg0;
    do {
        temp_v1_2 = phi_v1_2 + 4;
        phi_v0_2->unk_76E = (u8) (phi_v0_2->unk_76E | 4);
        phi_v0_2->unk_722 = (u8) (phi_v0_2->unk_722 | 4);
        phi_v0_2->unk_6D6 = (u8) (phi_v0_2->unk_6D6 | 4);
        temp_v0 = phi_v0_2 + 0x130;
        temp_v0->unk_55A = (s8) (phi_v0_2->unk_68A | 4);
        phi_v0_2 = temp_v0;
        phi_v1_2 = temp_v1_2;
    } while (temp_v1_2 != 0xC);
    arg0->update = func_808EC354;
    arg0->draw = func_808ECD14;
    Actor_SetScale(arg0, 0.0f);
    arg0[4].prevPos.z = 0.0f;
    arg0->unk_624 = 0.0f;
    func_808E6C18((EnBigslime *) arg0, 0x3965);
    func_808E6C18((EnBigslime *) arg0, 0x3963);
    arg0[1].focus.pos.z = (bitwise f32) func_808EACEC;
}

void func_808EACEC(EnBigslime *this, GlobalContext *globalCtx) {
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_v0_2;
    u8 temp_v0_3;
    void *temp_a0;
    EnBigslime *phi_v1;
    s32 phi_v0;
    f32 phi_f10;

    func_808E601C(this);
    func_808E69AC(this, globalCtx);
    temp_v0 = this->idleTimer;
    if ((s32) temp_v0 < 0) {
        Math_ScaledStepToS((s16 *) &this->gekkoRot, 0, 0x400);
    } else if (this->actor.world.pos.y > -190.0f) {
        this->gekkoRot.x += -0x4000;
        Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.home);
        this->actor.gravity = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->actor.speedXZ = 0.0f;
        SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_06007790);
        this->idleTimer += -1;
        Audio_PlayActorSound2((Actor *) this, 0x3938U);
    } else if (this->isAnimUpdate != 0) {
        this->idleTimer = temp_v0 - 1;
        if (this->idleTimer == 0) {
            SkelAnime_ChangeAnimDefaultRepeat(&this->skelAnime, &D_0600F3F0);
        }
    }
    phi_v1 = this;
    phi_v0 = 0;
    do {
        temp_a0 = phi_v1->minislime[0];
        temp_v0_2 = phi_v0 + 4;
        phi_v0 = temp_v0_2;
        if (temp_a0->actor.params == 5) {
            temp_a0->actor.params = 0;
            this->formBigslimeTimer += 1;
        }
        phi_v1 += 4;
    } while (temp_v0_2 != 0x3C);
    temp_v0_3 = this->formBigslimeTimer;
    if ((s32) temp_v0_3 > 0) {
        temp_f10 = (f32) temp_v0_3;
        phi_f10 = temp_f10;
        if ((s32) temp_v0_3 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        temp_f2 = (sqrtf(phi_f10 * 0.06666667f) * 0.6f) + 0.4f;
        temp_f12 = 0.15f * temp_f2;
        this->actor.scale.x = temp_f12;
        this->actor.scale.z = temp_f12;
        this->actor.scale.y = 0.079f * temp_f2;
    }
    if (temp_v0_3 == 0xF) {
        this->minislimeState = 0;
        this->actor.hintId = 3;
        func_808E7154(this, 5, 0x3C);
    }
}

void func_808EAEBC(EnBigslime *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3A;
    f32 *temp_v0;
    f32 temp_f6;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 phi_a0;
    f32 *phi_v0;
    s32 phi_a0_2;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600276C, 0.5f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600276C), (u8) 3, 0.0f);
    arg0->gekkoCollider.base.acFlags &= 0xFFFE;
    arg0->idleTimer = 0x3C;
    arg0->actor.speedXZ = 10.0f;
    arg0->actor.gravity = -2.0f;
    arg0->actor.velocity.y = 0.0f;
    func_808E6C18(arg0, 0x38D6);
    sp40 = arg0->actor.world.pos.x;
    sp44 = arg0->actor.world.pos.y + 40.0f;
    sp48 = arg0->actor.world.pos.z;
    temp_v1 = arg0->actor.world.rot.y;
    if ((s32) (s16) (Actor_YawToPoint((Actor *) arg0, (Vec3f *) &arg0->actor.home) - temp_v1) > 0) {
        phi_a0 = (temp_v1 + 0x4000) << 0x10;
    } else {
        phi_a0 = (temp_v1 - 0x4000) << 0x10;
    }
    temp_a0 = phi_a0 >> 0x10;
    sp3A = (s16) temp_a0;
    temp_f6 = (Math_SinS((s16) temp_a0) * 250.0f) + sp40;
    sp50 = sp44 + 60.0f;
    sp4C = temp_f6;
    sp54 = (Math_CosS((s16) temp_a0) * 250.0f) + sp48;
    Play_CameraSetAtEye(arg1, arg0->camId, (Vec3f *) &sp40, (Vec3f *) &sp4C);
    arg0->minislime[0]->actor.params = 7;
    arg0->minislime[1]->actor.params = 7;
    arg0->minislime[2]->actor.params = 7;
    phi_v0 = &arg0->actor.home.pos.y;
    phi_a0_2 = 3;
    do {
        temp_a0_2 = phi_a0_2 + 4;
        temp_v0 = phi_v0 + 0x10;
        phi_v0[642]->unk_1C = 7;
        temp_v0[639]->unk_1C = 7;
        temp_v0[640]->unk_1C = 7;
        temp_v0[641]->unk_1C = 7;
        phi_v0 = temp_v0;
        phi_a0_2 = temp_a0_2;
    } while (temp_a0_2 != 0xF);
    arg0->actor.flags &= -2;
    func_808E6CC8((Actor *) arg0, arg1);
    arg0->actionFunc = func_808EB0A8;
}

void func_808EB0A8(EnBigslime *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Camera *temp_v0_2;
    s16 temp_v0;
    s16 phi_v1;

    this->idleTimer += -1;
    temp_v0 = this->idleTimer;
    phi_v1 = temp_v0;
    if ((s32) temp_v0 >= 0xB) {
        phi_v1 = 0xA;
    }
    this->gekkoRot.y += phi_v1 * 0x300;
    if (Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f) != 0) {
        func_808EB178(this, globalCtx);
        return;
    }
    temp_v0_2 = Play_GetCamera(globalCtx, this->camId);
    sp24 = this->actor.world.pos.x;
    sp28 = this->actor.world.pos.y + 40.0f;
    sp2C = this->actor.world.pos.z;
    Play_CameraSetAtEye(globalCtx, this->camId, (Vec3f *) &sp24, &temp_v0_2->eye);
}

void func_808EB178(EnBigslime *arg0, GlobalContext *arg1) {
    Vec3f *sp20;
    Camera *temp_v0;
    Vec3f *temp_a2;
    f32 temp_f0;

    temp_v0 = Play_GetCamera(arg1, arg0->camId);
    temp_a2 = arg0 + 0x2EC;
    sp20 = temp_a2;
    Math_Vec3f_Diff(&temp_v0->eye, &temp_v0->at, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp20);
    if (temp_f0 > 78.0f) {
        Math_Vec3f_Scale(temp_a2, ((temp_f0 - 77.0f) / 20.0f) * (1.0f / temp_f0));
    } else {
        Math_Vec3f_Copy(temp_a2, &D_801D15B0);
    }
    arg0->iceShardAlpha = 0;
    arg0->idleTimer = 0x14;
    arg0->actionFunc = func_808EB24C;
}

void func_808EB24C(EnBigslime *this, GlobalContext *globalCtx) {
    f32 sp38;
    ? sp34;
    f32 sp2C;
    ? sp28;
    Camera *sp24;
    Camera *temp_v0_2;
    GlobalContext *temp_a0;
    s16 temp_v0;

    this->idleTimer += -1;
    temp_v0 = this->idleTimer;
    temp_a0 = globalCtx;
    this->gekkoScale = (f32) temp_v0 * 0.00035000002f;
    if (temp_v0 == 0) {
        func_808EB328(this, globalCtx, globalCtx);
        return;
    }
    globalCtx = globalCtx;
    temp_v0_2 = Play_GetCamera(temp_a0, this->camId);
    sp24 = temp_v0_2;
    Math_Vec3f_Copy((Vec3f *) &sp28, &temp_v0_2->at);
    Math_Vec3f_Diff(&sp24->eye, &this->iceShardRefPos, (Vec3f *) &sp34);
    sp38 -= 1.8f;
    sp2C -= 1.7f;
    Play_CameraSetAtEye(globalCtx, this->camId, (Vec3f *) &sp28, (Vec3f *) &sp34);
}

void func_808EB328(EnBigslime *arg0, GlobalContext *arg1) {
    Camera *sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    Vec3f *temp_s1;
    f32 *temp_s3;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_v1;
    s32 phi_s0;

    sp94 = Play_GetCamera(arg1, arg0->camId);
    temp_v0 = func_800DFCDC(arg1->cameraPtrs[arg1->activeCamera]);
    arg0->gekkoCollider.base.ocFlags1 &= 0xFFFE;
    temp_v1 = temp_v0 + 0x8000;
    Actor_Spawn(&arg1->actorCtx, arg1, 0x22, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) temp_v1, (s16) 0, (s16) (s32) arg0->actor.params);
    sp84 = (Math_SinS((s16) temp_v1) * 20.0f) + arg0->actor.world.pos.x;
    sp88 = arg0->actor.world.pos.y + 20.0f;
    temp_s1 = arg0 + 0x24;
    sp8C = (Math_CosS((s16) temp_v1) * 20.0f) + arg0->actor.world.pos.z;
    Audio_PlaySoundAtPosition(arg1, temp_s1, 0x28, 0x3A86U);
    func_800B0DE0(arg1, (Vec3f *) &sp84, &D_801D15B0, &D_801D15B0, &D_808F03A0, &D_808F03A4, (s16) 0x1F4, (s16) 0x32);
    temp_s3 = &sp78;
    phi_s0 = 0;
    do {
        sp78 = randPlusMinusPoint5Scaled(5.0f);
        sp7C = Rand_ZeroFloat(3.0f) + 4.0f;
        sp80 = randPlusMinusPoint5Scaled(5.0f);
        EffectSsHahen_Spawn(arg1, temp_s1, (Vec3f *) temp_s3, &D_808F03A8, (s16) 0, (s16) Rand_S16Offset(0xC, 3), (s16) -1, (s16) 0xA, NULL);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x19);
    arg0->idleTimer = 0x28;
    Math_Vec3f_Diff(&sp94->eye, &sp94->at, arg0 + 0x2EC);
    arg0->actionFunc = func_808EB574;
}

void func_808EB574(EnBigslime *this, GlobalContext *globalCtx) {
    Camera *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Camera *temp_v0;
    f32 *temp_a3;
    f32 temp_f2;

    temp_v0 = Play_GetCamera(globalCtx, this->camId);
    this->idleTimer += -1;
    sp34 = temp_v0;
    temp_a3 = &sp28;
    temp_f2 = (sin_rad((f32) this->idleTimer * 0.62831855f) * ((0.04f * ((f32) this->idleTimer * 0.1f)) + 0.02f)) + 1.0f;
    sp28 = sp34->at.x + (this->iceShardRefPos.x * temp_f2);
    sp30 = sp34->at.z + (this->iceShardRefPos.z * temp_f2);
    sp2C = sp34->at.y + (this->iceShardRefPos.y * temp_f2);
    Play_CameraSetAtEye(globalCtx, this->camId, &sp34->at, (Vec3f *) temp_a3);
    if (this->idleTimer == 0) {
        func_808E69F4((Actor *) this, globalCtx);
        func_808EB690(this);
    }
}

void func_808EB690(EnBigslime *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *phi_v1;
    s32 phi_v0;

    arg0->minislime[0]->unk_1C = 8;
    arg0->minislime[1]->unk_1C = 8;
    arg0->minislime[2]->unk_1C = 8;
    phi_v1 = arg0 + 0xC;
    phi_v0 = 3;
    do {
        temp_v0 = phi_v0 + 4;
        temp_v1 = phi_v1 + 0x10;
        phi_v1->unk_A08->unk_1C = 8;
        temp_v1->unk_9FC->unk_1C = 8;
        temp_v1->unk_A00->unk_1C = 8;
        temp_v1->unk_A04->unk_1C = 8;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0xF);
    arg0->idleTimer = 0;
    arg0->actionFunc = func_808EB708;
    arg0->gekkoCollider.base.ocFlags1 &= 0xFFFE;
}

void func_808EB708(EnBigslime *this, GlobalContext *globalCtx) {
    s32 sp20;
    f32 *temp_v0;
    s32 temp_a2;
    s32 temp_v1;
    EnBigslime *phi_v0;
    s32 phi_v1;
    s32 phi_a3;
    f32 *phi_v0_2;
    s32 phi_a2;
    s32 phi_a3_2;

    phi_v0 = this;
    phi_v1 = 0;
    phi_a3_2 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v1 = temp_v1;
        phi_a3 = phi_a3_2;
        if (phi_v0->minislime[0]->unk_D0 == 0) {
            phi_a3 = phi_a3_2 + 1;
        }
        phi_v0 += 4;
        phi_a3_2 = phi_a3;
    } while (temp_v1 < 0x3C);
    if (this->idleTimer == 0) {
        sp20 = phi_a3;
        Actor_SetRoomClearedTemp(globalCtx, (u32) globalCtx->roomCtx.currRoom.num);
        this->idleTimer = 1;
    }
    if (phi_a3 == 0xF) {
        this->minislime[0]->actor.params = 9;
        this->minislime[1]->actor.params = 9;
        this->minislime[2]->actor.params = 9;
        phi_v0_2 = &this->actor.home.pos.y;
        phi_a2 = 3;
        do {
            temp_a2 = phi_a2 + 4;
            temp_v0 = phi_v0_2 + 0x10;
            phi_v0_2[642]->unk_1C = 9;
            temp_v0[639]->unk_1C = 9;
            temp_v0[640]->unk_1C = 9;
            temp_v0[641]->unk_1C = 9;
            phi_v0_2 = temp_v0;
            phi_a2 = temp_a2;
        } while (temp_a2 != 0xF);
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_808EB7F0(EnBigslime *arg0) {
    arg0->actionFunc = func_808EB804;
}

void func_808EB804(EnBigslime *this, GlobalContext *globalCtx) {
    if (globalCtx->roomCtx.prevRoom.num == -1) {
        func_808EB83C();
    }
}

void func_808EB83C(EnBigslime *arg0) {
    void (*temp_t8)(EnBigslime *, GlobalContext *);

    if (ActorCutscene_GetCurrentIndex() == 0x7D) {
        ActorCutscene_Stop(0x7D);
    }
    if (arg0->actor.colChkInfo.health == 0) {
        arg0->cutscene = (s16) arg0->actor.cutscene;
    }
    ActorCutscene_SetIntentToPlay(arg0->cutscene);
    temp_t8 = arg0->actionFunc;
    arg0->actionFunc = func_808EB8B4;
    arg0->actionFuncStored = temp_t8;
    arg0->actor.speedXZ = 0.0f;
}

void func_808EB8B4(EnBigslime *this, GlobalContext *globalCtx) {
    void (*sp24)(EnBigslime *, GlobalContext *);
    void (*temp_v0)(EnBigslime *, GlobalContext *);

    if (ActorCutscene_GetCurrentIndex() == 0x7D) {
        ActorCutscene_Stop(0x7D);
        ActorCutscene_SetIntentToPlay(this->cutscene);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(this->cutscene) != 0) {
        ActorCutscene_Start(this->cutscene, (Actor *) this);
        if (func_808E7B80 != this->actionFuncStored) {
            sp24 = func_808E7B80;
            func_800B724C(globalCtx, (Actor *) this, 7U);
        }
        sp24 = func_808E7B80;
        this->camId = ActorCutscene_GetCurrentCamera(this->cutscene);
        if (this->actor.colChkInfo.health == 0) {
            func_808EAEBC(this, globalCtx);
            return;
        }
        temp_v0 = this->actionFuncStored;
        if ((func_808EA9B8 == temp_v0) || (func_808EA2D0 == temp_v0) || (func_808EAA8C == temp_v0)) {
            func_808EAAF8((Actor *) this);
            return;
        }
        if (func_808E7B80 == temp_v0) {
            func_808E88B8((Actor *) this, globalCtx);
            return;
        }
        func_808E6D58((Actor *) this, globalCtx);
        return;
    }
    ActorCutscene_SetIntentToPlay(this->cutscene);
}

void func_808EB9E8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_s1;
    Actor *temp_s1_2;
    Actor *temp_v0_4;
    f32 temp_f0;
    s32 temp_s2;
    s32 temp_s2_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    Actor *phi_s1;
    s32 phi_s2;
    s32 phi_s2_2;
    Actor *phi_s1_2;
    s32 phi_s2_3;

    phi_s1 = arg0;
    phi_s2 = 0;
loop_1:
    temp_v0 = phi_s1->unk_689;
    phi_s2_2 = phi_s2;
    phi_s1_2 = phi_s1;
    if ((temp_v0 & 2) != 0) {
        phi_s1->unk_689 = (u8) (temp_v0 & ~2);
        if (func_808E9DD0 == arg0[1].focus.pos.z) {
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            if (temp_v0_2 == 0xF) {
                func_808E6570(arg0, arg1);
            } else if (temp_v0_2 == 2) {
                func_808E64D4(arg0, arg1);
                func_808E9F38(arg0);
            } else {
                goto block_17;
            }
        } else {
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            if (temp_v0_3 == 3) {
                arg1->envCtx.unk_C3 = 2;
                func_808E64D4(arg0, arg1);
                arg0->unk_2CA = 0;
                func_808E994C(arg0);
                temp_v0_4 = func_ActorCategoryIterateById(arg1, NULL, 7, 0x7E);
                if (temp_v0_4 != 0) {
                    temp_v0_4->unk_15C = -100.0f;
                }
            } else {
                if ((temp_v0_3 != 1) && (arg0->unk_2CC == 0)) {
                    temp_f0 = Rand_ZeroOne();
                    if (temp_f0 < 0.15f) {
                        Item_DropCollectible(arg1, (Vec3f *) &arg0->world, 5U);
                    } else if (temp_f0 < 0.3f) {
                        Item_DropCollectible(arg1, (Vec3f *) &arg0->world, 0xFU);
                    }
                    arg0->unk_2CC = 0x28;
                }
                goto block_17;
            }
        }
    } else {
block_17:
        temp_s2 = phi_s2 + 1;
        temp_s1 = phi_s1 + 0x4C;
        phi_s1 = temp_s1;
        phi_s2 = temp_s2;
        phi_s2_2 = temp_s2;
        phi_s1_2 = temp_s1;
        if (temp_s2 != 0xC) {
            goto loop_1;
        }
    }
    phi_s2_3 = phi_s2_2;
    if (phi_s2_2 < 0xC) {
        do {
            temp_s2_2 = phi_s2_3 + 1;
            temp_s1_2 = phi_s1_2 + 0x4C;
            temp_s1_2->unk_63D = (s8) (phi_s1_2->unk_689 & ~2);
            phi_s1_2 = temp_s1_2;
            phi_s2_3 = temp_s2_2;
        } while (temp_s2_2 < 0xC);
    }
}

void func_808EBBE4(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;

    temp_v0 = arg0->unk_63D;
    if (((temp_v0 & 2) != 0) && ((arg0->unk_63D = (u8) (temp_v0 & 0xFFFD), (arg0->unk_2B5 != 0xA)) || ((*arg0->unk_668 & 0xDB0B3) == 0)) && (func_808E6538(arg0), (arg0->colChkInfo.damageEffect != 0xE))) {
        if (Actor_ApplyDamage(arg0) == 0) {
            func_800BE504(arg0, (ColliderCylinder *) &arg0[4].colorFilterTimer);
            func_801A2ED8();
            Enemy_StartFinishingBlow(arg1, arg0);
            arg0->unk_63D = (u8) (arg0->unk_63D & 0xFFFE);
            func_808E6CC8(arg0, arg1);
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            if ((temp_v0_2 == 2) || (temp_v0_2 == 4)) {
                arg0[2].uncullZoneScale = 4.0f;
                arg0[2].uncullZoneDownward = 0.75f;
                if (temp_v0_2 == 2) {
                    arg0->unk_2B5 = 0U;
                } else {
                    arg0->unk_2B5 = 0x14U;
                    Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_652, (f32) arg0[5].id, (f32) arg0->unk_656, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                }
            } else if (temp_v0_2 == 3) {
                func_808E6C70(arg0);
            }
            func_808EB83C((EnBigslime *) arg0);
            return;
        }
        temp_v0_3 = arg0->colChkInfo.damageEffect;
        if (temp_v0_3 == 5) {
            arg0[2].world.unk_12 = 0x28;
            Audio_PlayActorSound2(arg0, 0x389EU);
            arg0->unk_2B5 = 0x1EU;
            arg0[2].uncullZoneDownward = 0.75f;
            arg0[2].uncullZoneScale = 2.0f;
            func_808EAA40(arg0);
            return;
        }
        if ((temp_v0_3 == 1) || (temp_v0_3 == 0xD)) {
            arg0[2].world.unk_12 = 0x28;
            Audio_PlayActorSound2(arg0, 0x389EU);
            func_808EAA40(arg0);
            return;
        }
        if (temp_v0_3 == 3) {
            func_808E6C70(arg0);
            func_800BE504(arg0, (ColliderCylinder *) &arg0[4].colorFilterTimer);
            func_808EAA40(arg0);
            return;
        }
        func_808E6CC8(arg0, arg1);
        temp_v0_4 = arg0->colChkInfo.damageEffect;
        if ((temp_v0_4 == 2) || (temp_v0_4 == 4)) {
            arg0[2].uncullZoneScale = 3.0f;
            arg0[2].uncullZoneDownward = 0.75f;
            if (temp_v0_4 == 2) {
                arg0->unk_2B5 = 0U;
            } else {
                arg0->unk_2B5 = 0x14U;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_652, (f32) arg0[5].id, (f32) arg0->unk_656, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
        }
        func_808EA8FC(arg0, 1);
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_808EBED0(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f20;
    f32 temp_f22;
    s16 temp_a0;
    s16 temp_s2;
    s16 temp_v1;
    s32 temp_s4;
    void *temp_s0;
    void *temp_v0;
    s16 *phi_s1;
    s32 phi_s4;
    f32 phi_f20;

    phi_s1 = &D_808EF4A0;
    phi_s4 = 0;
    do {
        if ((s32) phi_s1->unk_F > 0) {
            temp_v0 = arg0 + (phi_s4 * 0x24);
            temp_s0 = temp_v0 + 0xA54;
            temp_v0->unk_A54 = (f32) (((f32) phi_s1->unk_0 * arg0->scale.x) + arg0->world.pos.x);
            temp_v0->unk_A58 = (f32) (((f32) phi_s1[1] * arg0->scale.y) + arg0->world.pos.y);
            temp_v0->unk_A5C = (f32) (((f32) phi_s1[2] * arg0->scale.z) + arg0->world.pos.z);
            temp_s0->unk_1A = (s16) (Rand_Next() >> 0x10);
            temp_s0->unk_1C = (s16) (Rand_Next() >> 0x10);
            temp_s0->unk_1E = (s16) (Rand_Next() >> 0x10);
            temp_s0->unk_18 = 1;
            temp_v1 = phi_s1[2];
            temp_a0 = phi_s1->unk_0;
            temp_s2 = Rand_S16Offset(0x1000, 0x3000);
            temp_f20 = sqrtf((f32) ((temp_v1 * temp_v1) + (temp_a0 * temp_a0)));
            temp_f22 = Rand_ZeroFloat(5.0f) + 14.0f;
            if (temp_f20 > 1.0f) {
                phi_f20 = (Math_CosS(temp_s2) * temp_f22) / temp_f20;
            } else {
                phi_f20 = Math_CosS(temp_s2) * temp_f22;
            }
            temp_s0->unk_C = (f32) ((f32) phi_s1->unk_0 * phi_f20);
            temp_s0->unk_10 = (f32) (Math_SinS(temp_s2) * temp_f22);
            temp_s0->unk_14 = (f32) ((f32) phi_s1[2] * phi_f20);
            temp_s0->unk_20 = (f32) ((Rand_ZeroFloat(6.0f) + 2.0f) * 0.001f);
        }
        temp_s4 = phi_s4 + 1;
        phi_s1 += 0x10;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0xA2);
    Audio_PlayActorSound2(arg0, 0x28CBU);
    func_808E6B08(arg0, arg1);
}

void func_808EC158(Actor *arg0) {
    Vec3f *temp_s0;
    f32 temp_f0;
    s32 temp_s2;
    s32 temp_v1;
    u8 temp_v0;
    Actor *phi_s1;
    s32 phi_s2;

    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_s0 = phi_s1 + 0xA54;
        if ((s32) phi_s1[8].focus.rot.z > 0) {
            temp_s0[1].y += -1.0f;
            Math_Vec3f_Sum(temp_s0, temp_s0 + 0xC, temp_s0);
            if (temp_s0->y < -710.0f) {
                temp_s0->unk_18 = 0;
            }
            temp_s0->unk_1A = (s16) (temp_s0->unk_1A + ((Rand_Next() >> 0x17) + 0x700));
            temp_s0->unk_1C = (s16) (temp_s0->unk_1C + ((Rand_Next() >> 0x17) + 0x900));
            temp_s0->unk_1E = (s16) (temp_s0->unk_1E + ((Rand_Next() >> 0x17) + 0xB00));
        }
        temp_s2 = phi_s2 + 0x24;
        phi_s1 += 0x24;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x2BE0);
    temp_v0 = arg0->unk_2B4;
    temp_v1 = temp_v0 - 0xA;
    if ((s32) temp_v0 > 0) {
        if (temp_v1 < 0) {
            arg0->unk_2B4 = 0U;
        } else {
            arg0->unk_2B4 = (u8) temp_v1;
        }
        arg0->unk_628 = (f32) (arg0->unk_628 + 0.0013f);
    }
    if (arg0[2].uncullZoneScale > 0.0f) {
        if ((arg0->unk_2B5 != 0xA) && (func_808EB8B4 != arg0[1].focus.pos.z)) {
            Math_StepToF(arg0 + 0x388, 0.0f, 0.05f);
            temp_f0 = (arg0[2].uncullZoneScale + 1.0f) * 0.375f;
            arg0[2].uncullZoneDownward = temp_f0;
            if (temp_f0 > 0.75f) {
                arg0[2].uncullZoneDownward = 0.75f;
                return;
            }
            arg0[2].uncullZoneDownward = arg0[2].uncullZoneDownward;
            return;
        }
        if (Math_StepToF(arg0 + 0x390, 0.75f, 0.01875f) == 0) {
            func_800B9010(arg0, 0x20B2U);
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void func_808EC354(Actor *arg0, GlobalContext *arg1) {
    ? sp34;
    ? sp28;
    Actor *temp_v0;
    s16 temp_v0_2;
    s32 temp_a0;
    Actor *phi_v0;
    s32 phi_a0;

    if (arg1->envCtx.unk_C3 == 3) {
        arg1->envCtx.unk_C3 = 0xFF;
    }
    func_8019F540(1U);
    arg0->unk_2B1 = (u8) (arg0->unk_2B1 ^ 1);
    func_808E5388(arg0);
    arg0->unk_2B2 = SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (func_808EB8B4 != arg0[1].focus.pos.z) {
        func_808EB9E8(arg0, arg1);
    } else {
        phi_v0 = arg0;
        phi_a0 = 0;
        do {
            temp_a0 = phi_a0 + 4;
            phi_v0->unk_76D = (u8) (phi_v0->unk_76D & ~2);
            phi_v0->unk_721 = (u8) (phi_v0->unk_721 & ~2);
            phi_v0->unk_6D5 = (u8) (phi_v0->unk_6D5 & ~2);
            temp_v0 = phi_v0 + 0x130;
            temp_v0->unk_559 = (s8) (phi_v0->unk_689 & ~2);
            phi_v0 = temp_v0;
            phi_a0 = temp_a0;
        } while (temp_a0 != 0xC);
    }
    (bitwise ? (*)(Actor *, GlobalContext *)) arg0[1].focus.pos.z(arg0, arg1);
    if (func_808EACEC != (bitwise s32) arg0[1].focus.pos.z) {
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    } else {
        Actor_SetVelocityAndMoveXYRotation(arg0);
    }
    if (func_808EA2D0 != (bitwise s32) arg0[1].focus.pos.z) {
        func_808E574C(arg0, &sp34, &sp28);
        func_808E5988(arg0, &sp34, &sp28);
        func_808E5A00(arg0, &sp34, &sp28);
        func_808E5484(arg0);
        func_808E5BB0(arg0, arg1);
    }
    func_808EC158(arg0);
    temp_v0_2 = arg0->unk_2CC;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk_2CC = (s16) (temp_v0_2 - 1);
    }
}

void EnBigslime_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Actor *temp_v0;
    EnBigslime *this = (EnBigslime *) thisx;

    if (globalCtx->envCtx.unk_C3 == 3) {
        globalCtx->envCtx.unk_C3 = 0xFF;
    }
    func_8019F540(0U);
    this->isAnimUpdate = SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    if (func_808EB8B4 != this->actionFunc) {
        func_808EBBE4((Actor *) this, globalCtx);
    } else {
        this->gekkoCollider.base.acFlags &= 0xFFFD;
    }
    this->actionFunc(this, globalCtx);
    if (func_808EACEC != this->actionFunc) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    } else {
        Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 40.0f, 80.0f, 0x1FU);
    this->gekkoCollider.dim.pos.x = (s16) (s32) this->actor.world.pos.x;
    this->gekkoCollider.dim.pos.z = (s16) (s32) this->actor.world.pos.z;
    if ((this->gekkoCollider.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->gekkoCollider);
    }
    if ((EnBigslime_Update == this->actor.update) && ((this->gekkoCollider.base.ocFlags1 & 1) != 0)) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->gekkoCollider);
    }
    func_808EC158((Actor *) this);
    if ((func_808EAA8C != this->actionFunc) && ((s32) this->gekkoCollider.dim.pos.y < -0x2AF)) {
        if (((globalCtx->gameplayFrames & 3) == 0) || (D_808F03B4 == 0)) {
            temp_v0 = globalCtx->actorCtx.actorList[2].first;
            sp28 = this->actor.world.pos.x;
            sp30 = this->actor.world.pos.z;
            sp2C = temp_v0->world.pos.y + temp_v0->yDistToWater;
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp28, 0x96, 0x226, (s16) 0);
            D_808F03B4 = 1;
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    D_808F03B4 = 0;
}

void func_808EC708(Vec3f *arg0, GraphicsContext **arg1, u32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, f32 arg7) {
    f32 sp4C;
    MtxF *sp44;
    Gfx *sp30;
    f32 sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s0;
    MtxF *temp_v1;
    f32 temp_f16;
    f32 temp_f2;
    f32 phi_f2;
    f32 phi_f12;

    temp_v1 = SysMatrix_GetCurrentState();
    temp_f2 = (arg0->y - arg5) - -690.0f;
    if (temp_f2 < 0.0f) {
        phi_f2 = 0.0f;
    } else {
        if (temp_f2 > 150.0f) {
            phi_f12 = 150.0f;
        } else {
            phi_f12 = temp_f2;
        }
        phi_f2 = phi_f12;
    }
    temp_s0 = *arg1;
    sp4C = phi_f2;
    sp44 = temp_v1;
    temp_s0->polyOpa.p = Gfx_CallSetupDL(temp_s0->polyOpa.p, 0x2CU);
    temp_v1->mf[1][1] = 1.0f;
    temp_v1->mf[0][1] = 0.0f;
    temp_v1->mf[0][2] = 0.0f;
    temp_v1->mf[1][0] = 0.0f;
    temp_v1->mf[1][2] = 0.0f;
    temp_v1->mf[2][0] = 0.0f;
    temp_v1->mf[2][1] = 0.0f;
    temp_f16 = 1.0f - (phi_f2 * 0.0006451613f);
    temp_v1->mf[0][0] = temp_f16;
    temp_v1->mf[2][2] = temp_f16;
    temp_v1->mf[3][0] = arg0->x;
    temp_v1->mf[3][1] = -690.0f;
    temp_v1->mf[3][3] = 1.0f;
    temp_v1->mf[0][3] = 0.0f;
    temp_v1->mf[1][3] = 0.0f;
    temp_v1->mf[2][3] = 0.0f;
    temp_v1->mf[3][2] = arg0->z;
    sp24 = temp_f16;
    Matrix_RotateY(arg6, 1U);
    Matrix_Scale(arg3, 1.0f, arg4, 1);
    if (arg2 != &D_06011050) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xFCFF97FF;
        temp_v0->words.w1 = 0xFFFDFE38;
    }
    temp_v1_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v1_2[1];
    temp_v1_2->words.w0 = 0xFA000000;
    temp_v1_2->words.w1 = (u32) (arg7 * temp_f16) & 0xFF;
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDA380003;
    sp30 = temp_v0_2;
    sp30->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = arg2;
}

void func_808EC990(EnBigslime *arg0, GlobalContext *arg1) {
    ? spF0;
    ? spEC;
    s32 spB4;
    ? *sp88;
    LightContext *sp80;
    Actor *temp_s0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s2;
    Lights *temp_s3;
    Lights *temp_v0_2;
    Vec3f *temp_s6;
    f32 temp_f6;
    s32 *temp_s1_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_s1;
    u8 temp_t5;
    s32 phi_v0;
    s32 *phi_s1;
    s32 *phi_s1_2;
    s32 *phi_s1_3;
    s32 *phi_s1_4;
    f32 phi_f6;

    phi_v0 = 0;
    phi_s1 = &spB4;
    do {
        *phi_s1 = phi_v0;
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        phi_s1 += 4;
    } while (temp_v0 < 0xF);
    phi_s1_2 = &spB4;
    do {
        temp_v1 = phi_s1_2->unk_0;
        temp_a0 = phi_s1_2[1];
        phi_s1_3 = phi_s1_2;
        if ((arg0 + (temp_v1 * 4))->unk_A08->unk_F4 < (arg0 + (temp_a0 * 4))->unk_A08->unk_F4) {
            phi_s1_2->unk_0 = temp_a0;
            phi_s1_2[1] = temp_v1;
            if (phi_s1_2 != &spB4) {
                phi_s1_3 = phi_s1_2 - 8;
            }
        }
        temp_s1 = phi_s1_3 + 4;
        phi_s1_2 = (s32 *) temp_s1;
    } while (temp_s1 < (u32) &spEC);
    temp_s2 = arg1->state.gfxCtx;
    sp80 = arg1 + 0x818;
    sp88 = &D_060113B0;
    phi_s1_4 = &spB4;
    do {
        temp_s0 = (arg0 + (*phi_s1_4 * 4))->unk_A08;
        temp_v0_2 = LightContext_NewLights(sp80, arg1->state.gfxCtx);
        temp_s6 = temp_s0 + 0x24;
        temp_s3 = temp_v0_2;
        Lights_BindAll(temp_v0_2, arg1->lightCtx.listHead, temp_s6, arg1);
        Lights_Draw(temp_s3, arg1->state.gfxCtx);
        func_8012C2DC(arg1->state.gfxCtx);
        func_800B8118(temp_s0, arg1, 0);
        SysMatrix_SetStateRotationAndTranslation(temp_s0->world.pos.x, temp_s0->world.pos.y, temp_s0->world.pos.z, (Vec3s *) &temp_s0->shape);
        Matrix_Scale(temp_s0->scale.x, temp_s0->scale.y, temp_s0->scale.z, 1);
        temp_v0_3 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFA000080;
        temp_v0_3->words.w1 = temp_s0->shape.shadowAlpha | ~0xFF;
        temp_v0_4 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_5 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) sp88;
        if ((s32) temp_s0->unk_148 > 0) {
            SysMatrix_InsertTranslation(0.0f, (0.1f - temp_s0[1].home.pos.y) * -4000.0f, 0.0f, 1);
            Matrix_Scale(0.1f, temp_s0[1].home.pos.y, 0.1f, 1);
            AnimatedMat_Draw(arg1, arg0->minislimeFrozenTex);
            temp_v0_6 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v0_6[1];
            temp_v0_6->words.w0 = 0xFA000080;
            temp_v0_6->words.w1 = temp_s0->unk_148 | ~0xFF;
            temp_v0_7 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v0_7[1];
            temp_v0_7->words.w0 = 0xDA380003;
            temp_v0_7->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v0_8 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v0_8[1];
            temp_v0_8->words.w1 = (u32) &D_06010DB0;
            temp_v0_8->words.w0 = 0xDE000000;
        }
        temp_t5 = temp_s0->shape.shadowAlpha;
        temp_f6 = (f32) temp_t5;
        phi_f6 = temp_f6;
        if ((s32) temp_t5 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        func_808EC708(temp_s6, (GraphicsContext **) arg1, (u32) &D_06011050, temp_s0->scale.x * 0.4f * 0.1f, phi_f6 * 0.6862745f);
        temp_s1_2 = phi_s1_4 + 4;
        phi_s1_4 = temp_s1_2;
    } while (temp_s1_2 != &spF0);
}

void func_808ECD14(Actor *arg0, GlobalContext *arg1) {
    ? *temp_s0_2;
    Gfx *temp_s0;
    Gfx *temp_s1;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    GraphicsContext *temp_s4;
    MtxF *temp_s2;
    f32 temp_v0;
    void *temp_v0_2;
    ? *phi_s0;

    func_8012C2DC(arg1->state.gfxCtx);
    func_800B8118(arg0, arg1, 0);
    temp_s4 = arg1->state.gfxCtx;
    temp_v1 = temp_s4->polyXlu.p;
    temp_s4->polyXlu.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDB060024;
    temp_v1->words.w1 = (u32) ((arg0->unk_2B1 * 0xA20) + &D_808EE060);
    temp_s0 = temp_s4->polyXlu.p;
    temp_s4->polyXlu.p = &temp_s0[1];
    temp_s0->words.w0 = 0xDA380003;
    temp_s0->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v1_2 = temp_s4->polyXlu.p;
    temp_s4->polyXlu.p = &temp_v1_2[1];
    temp_v1_2->words.w1 = (u32) &D_06010530;
    temp_v1_2->words.w0 = 0xDE000000;
    temp_v1_3 = temp_s4->polyXlu.p;
    temp_s4->polyXlu.p = &temp_v1_3[1];
    temp_v1_3->words.w1 = (u32) &D_060105E8;
    temp_v1_3->words.w0 = 0xDE000000;
    temp_v0 = arg0[1].focus.pos.z;
    if ((func_808E9AE0 == (bitwise s32) temp_v0) || (func_808E9DD0 == (bitwise s32) temp_v0) || (func_808EA1C8 == (bitwise s32) temp_v0) || (func_808E9FC0 == (bitwise s32) temp_v0)) {
        AnimatedMat_Draw(arg1, (bitwise AnimatedMaterial *) arg0[8].world.pos.y);
        temp_v1_4 = temp_s4->polyXlu.p;
        temp_s4->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w1 = (u32) &D_808EF4A0;
        temp_v1_4->words.w0 = 0xDB060024;
        temp_v1_5 = temp_s4->polyXlu.p;
        temp_s4->polyXlu.p = &temp_v1_5[1];
        temp_v1_5->words.w1 = (u32) &D_06010B80;
        temp_v1_5->words.w0 = 0xDE000000;
        temp_v1_6 = temp_s4->polyXlu.p;
        temp_s4->polyXlu.p = &temp_v1_6[1];
        temp_v1_6->words.w1 = (u32) &D_060105E8;
        temp_v1_6->words.w0 = 0xDE000000;
    }
    if (arg0->scale.x > 0.0f) {
        SysMatrix_SetCurrentState(&arg1->mf_187FC);
        Matrix_Scale(0.0050000004f, 0.0050000004f, 0.0050000004f, 1);
        temp_s2 = SysMatrix_GetCurrentState();
        phi_s0 = &D_808F03B8;
        do {
            temp_v0_2 = (arg0->unk_2B1 * 0xA20) + (phi_s0->unk_0 * 0x10) + &D_808EE060;
            temp_s2->mf[3][0] = ((f32) temp_v0_2->unk_0 * arg0->scale.x * phi_s0->unk_4) + arg0->world.pos.x;
            temp_s2->mf[3][1] = ((f32) temp_v0_2->unk_2 * arg0->scale.y * phi_s0->unk_4) + arg0->world.pos.y;
            temp_s2->mf[3][2] = ((f32) temp_v0_2->unk_4 * arg0->scale.z * phi_s0->unk_4) + arg0->world.pos.z;
            temp_s1 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = &temp_s1[1];
            temp_s1->words.w0 = 0xDA380003;
            temp_s1->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v1_7 = temp_s4->polyXlu.p;
            temp_s0_2 = phi_s0 + 8;
            temp_s4->polyXlu.p = &temp_v1_7[1];
            temp_v1_7->words.w1 = (u32) &D_0600F9D0;
            temp_v1_7->words.w0 = 0xDE000000;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != &D_808F0498);
    }
    func_808EC708((Vec3f *) &arg0->world, (GraphicsContext **) arg1, (u32) &D_06011050, arg0[4].prevPos.z, arg0->unk_624, arg0->scale.y * 1000.0f, (s16) (s32) arg0->unk_2CA, 175.0f);
    EnBigslime_Draw(arg0, arg1);
}

void func_808ED07C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp20;
    s8 *sp1C;
    s8 *temp_v0;
    s8 temp_v1;

    if (arg1 == 0x14) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
        arg4->focus.rot.y = arg4[2].focus.rot.x;
    }
    temp_v0 = arg1 + &D_808F0498;
    temp_v1 = *temp_v0;
    if (temp_v1 != -1) {
        sp1C = temp_v0;
        SysMatrix_GetStateTranslation(arg4 + (temp_v1 * 0xC) + 0x2F8);
    }
    if ((arg1 + &D_808F0498) == &D_808F04A1) {
        SysMatrix_MultiplyVector3fByState(&D_808F04B0, (Vec3f *) &sp20);
        arg4[5].unk20 = (s16) (s32) sp24;
    }
}

void EnBigslime_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp4C;
    GraphicsContext *sp40;
    Gfx *sp38;
    void (*sp34)(EnBigslime *, GlobalContext *);
    Gfx *temp_v0_3;
    f32 temp_f0;
    f32 temp_f12;
    u8 temp_v0_2;
    void (*temp_v0)(EnBigslime *, GlobalContext *);
    void (*temp_v0_4)(EnBigslime *, GlobalContext *);
    EnBigslime *this = (EnBigslime *) thisx;

    func_8012C28C(globalCtx->state.gfxCtx);
    sp34 = func_808EA9B8;
    temp_v0 = this->actionFunc;
    if (func_808EA9B8 == temp_v0) {
        func_800AE434(globalCtx, &D_808F04BC, this->idleTimer, 0x14);
    } else if ((func_808EB0A8 == temp_v0) || (func_808EB24C == temp_v0)) {
        func_800AE434(globalCtx, &D_808F04BC, 0x14, 0x14);
    } else if (func_808EAA8C == temp_v0) {
        temp_v0_2 = this->gekkoDrawEffect;
        if (temp_v0_2 == 0xA) {
            func_800AE434(globalCtx, &D_808F04BC, this->stunTimer, 0x50);
        } else if (temp_v0_2 == 0x1E) {
            func_800AE434(globalCtx, &D_808F04C0, this->stunTimer, 0x28);
        } else {
            func_800AE434(globalCtx, &D_808F04C0, this->stunTimer, 0x28);
        }
    }
    sp40 = globalCtx->state.gfxCtx;
    Math_Vec3f_Sum((Vec3f *) &this->actor.world, &this->gekkoPosOffset, (Vec3f *) &sp4C);
    SysMatrix_SetStateRotationAndTranslation(sp4C, sp50, sp54, &this->gekkoRot);
    temp_f12 = this->gekkoScale;
    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, (Vec3f *) &sp4C, &this->gekkoProjectedPos);
    temp_v0_3 = sp40->polyOpa.p;
    sp40->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp38 = temp_v0_3;
    sp38->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, func_808ED07C, (Actor *) this);
    temp_v0_4 = this->actionFunc;
    if ((sp34 == temp_v0_4) || (func_808EB0A8 == temp_v0_4) || (func_808EB24C == temp_v0_4) || (func_808EAA8C == temp_v0_4)) {
        func_800AE5A0(globalCtx);
    }
    temp_f0 = this->gekkoScale * 78.57143f;
    func_808EC708((Vec3f *) &sp4C, (GraphicsContext **) globalCtx, (u32) D_04076BC0, temp_f0, temp_f0, 0.0f, (s16) 0, 255.0f);
    if (this->minislimeState != 0) {
        func_808EC990(this, globalCtx);
    }
    func_808ED3F4(this, globalCtx);
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) this->limbPos, 0xC, this->gekkoScale * 142.85713f * this->unk_38C, this->unk_390, this->unk_388, (u8) (s32) this->gekkoDrawEffect);
}

void func_808ED3F4(EnBigslime *arg0, GlobalContext *arg1) {
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_s0_4;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s4;
    f32 temp_f12;
    f32 temp_f12_2;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s0_3;
    EnBigslime *phi_s1;
    s32 phi_s2;

    temp_a0 = arg1->state.gfxCtx;
    temp_s4 = temp_a0;
    func_8012C2DC(temp_a0);
    if ((s32) arg0->iceShardAlpha > 0) {
        temp_v1 = temp_s4->polyXlu.p;
        temp_s4->polyXlu.p = &temp_v1[1];
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = arg0->iceShardAlpha | 0xC3E1EB00;
        temp_s0 = temp_s4->polyXlu.p;
        temp_s4->polyXlu.p = &temp_s0[1];
        temp_s0->words.w0 = 0xDB060034;
        temp_v0 = arg1->gameplayFrames;
        temp_s0->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_v0 & 0x7F, (temp_v0 * 8) & 0xFF, 0x20, 0x40, 1, (temp_v0 * -2) & 0x3F, 0U, 0x10, 0x10);
        SysMatrix_InsertTranslation(arg0->iceShardRefPos.x, arg0->iceShardRefPos.y, arg0->iceShardRefPos.z, 0);
        temp_f12 = arg0->iceShardScale;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_s0_2 = temp_s4->polyXlu.p;
        temp_s4->polyXlu.p = &temp_s0_2[1];
        temp_s0_2->words.w0 = 0xDA380003;
        temp_s0_2->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v1_2 = temp_s4->polyXlu.p;
        temp_s4->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w1 = (u32) &D_0600FB40;
        temp_v1_2->words.w0 = 0xDE000000;
    }
    AnimatedMat_Draw(arg1, arg0->iceShardTex);
    temp_v1_3 = temp_s4->polyXlu.p;
    temp_s4->polyXlu.p = &temp_v1_3[1];
    temp_v1_3->words.w1 = (u32) &D_06010F20;
    temp_v1_3->words.w0 = 0xDE000000;
    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_s0_3 = phi_s1 + 0xA54;
        if ((s32) phi_s1->iceShardEffect[0].isActive > 0) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0_3->unk_0, temp_s0_3->unk_4, temp_s0_3->unk_8, temp_s0_3 + 0x1A);
            temp_f12_2 = temp_s0_3->unk_20;
            Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
            temp_s0_4 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = &temp_s0_4[1];
            temp_s0_4->words.w0 = 0xDA380003;
            temp_s0_4->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v1_4 = temp_s4->polyXlu.p;
            temp_s4->polyXlu.p = &temp_v1_4[1];
            temp_v1_4->words.w1 = (u32) &D_06010FE0;
            temp_v1_4->words.w0 = 0xDE000000;
        }
        temp_s2 = phi_s2 + 0x24;
        phi_s1 += 0x24;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x2BE0);
}
