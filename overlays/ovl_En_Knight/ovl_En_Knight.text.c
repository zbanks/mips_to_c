typedef struct EnKnight {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u16 unk144;                         /* inferred */
    /* 0x146 */ s16 unk146;                         /* inferred */
    /* 0x148 */ u8 unk148;                          /* inferred */
    /* 0x149 */ char pad149[0x1];
    /* 0x14A */ s16 unk14A;                         /* inferred */
    /* 0x14C */ s16 unk14C;                         /* inferred */
    /* 0x14E */ s16 unk14E;                         /* inferred */
    /* 0x150 */ char pad150[0x1];
    /* 0x151 */ u8 unk151;                          /* inferred */
    /* 0x152 */ u8 unk152;                          /* inferred */
    /* 0x153 */ s8 unk153;                          /* inferred */
    /* 0x154 */ u8 unk154;                          /* inferred */
    /* 0x155 */ char pad155[0x1];
    /* 0x156 */ s16 unk156;                         /* inferred */
    /* 0x158 */ s16 unk158;                         /* inferred */
    /* 0x15A */ s16 unk15A;                         /* inferred */
    /* 0x15C */ s16 unk15C;                         /* inferred */
    /* 0x15E */ s16 unk15E;                         /* inferred */
    /* 0x160 */ char pad160[0x2];
    /* 0x162 */ u8 unk162;                          /* inferred */
    /* 0x163 */ char pad163[0x1];
    /* 0x164 */ f32 unk164;                         /* inferred */
    /* 0x168 */ f32 unk168;                         /* inferred */
    /* 0x16C */ f32 unk16C;                         /* inferred */
    /* 0x170 */ s16 unk170;                         /* inferred */
    /* 0x172 */ s16 unk172;                         /* inferred */
    /* 0x174 */ s16 unk174;                         /* inferred */
    /* 0x176 */ s16 unk176;                         /* inferred */
    /* 0x178 */ s16 unk178;                         /* inferred */
    /* 0x17A */ s16 unk17A;                         /* inferred */
    /* 0x17C */ f32 unk17C;                         /* inferred */
    /* 0x180 */ f32 unk180;                         /* inferred */
    /* 0x184 */ s16 unk184;                         /* inferred */
    /* 0x186 */ s16 unk186;                         /* inferred */
    /* 0x188 */ s16 unk188;                         /* inferred */
    /* 0x18A */ s16 unk18A;                         /* inferred */
    /* 0x18C */ s16 unk18C;                         /* inferred */
    /* 0x18E */ s16 unk18E;                         /* inferred */
    /* 0x190 */ u8 unk190;                          /* inferred */
    /* 0x191 */ u8 unk191;                          /* inferred */
    /* 0x192 */ u8 unk192;                          /* inferred */
    /* 0x193 */ u8 unk193;                          /* inferred */
    /* 0x194 */ SkelAnime unk194;                   /* inferred */
    /* 0x1D8 */ f32 unk1D8;                         /* inferred */
    /* 0x1DC */ Vec3f unk1DC;                       /* inferred */
    /* 0x1E8 */ char pad1E8[0xA8];                  /* maybe part of unk1DC[15]? */
    /* 0x290 */ u8 unk290;                          /* inferred */
    /* 0x291 */ u8 unk291;                          /* inferred */
    /* 0x292 */ char pad292[0x2];                   /* maybe part of unk291[3]? */
    /* 0x294 */ f32 unk294;                         /* inferred */
    /* 0x298 */ f32 unk298;                         /* inferred */
    /* 0x29C */ f32 unk29C;                         /* inferred */
    /* 0x2A0 */ u8 unk2A0;                          /* inferred */
    /* 0x2A1 */ u8 unk2A1;                          /* inferred */
    /* 0x2A2 */ s16 unk2A2;                         /* inferred */
    /* 0x2A4 */ f32 unk2A4;                         /* inferred */
    /* 0x2A8 */ f32 unk2A8;                         /* inferred */
    /* 0x2AC */ Vec3f unk2AC;                       /* inferred */
    /* 0x2B8 */ Vec3f unk2B8;                       /* inferred */
    /* 0x2C4 */ Vec3s unk2C4;                       /* inferred */
    /* 0x2CA */ char pad2CA[0xA8];                  /* maybe part of unk2C4[29]? */
    /* 0x372 */ Vec3s unk372;                       /* inferred */
    /* 0x378 */ char pad378[0xA8];                  /* maybe part of unk372[29]? */
    /* 0x420 */ void (*actionFunc)(EnKnight *, GlobalContext *);
    /* 0x424 */ s32 unk424;                         /* inferred */
    /* 0x428 */ s16 unk428;                         /* inferred */
    /* 0x42A */ char pad42A[0x2];
    /* 0x42C */ CutsceneContext unk42C;             /* inferred */
    /* 0x430 */ f32 unk430;                         /* overlap; inferred */
    /* 0x434 */ char pad434[0xC];                   /* maybe part of unk430[4]? */
    /* 0x440 */ f32 unk440;                         /* inferred */
    /* 0x444 */ char pad444[0x4];
    /* 0x448 */ f32 unk448;                         /* inferred */
    /* 0x44C */ char pad44C[0x4];
    /* 0x450 */ f32 unk450;                         /* inferred */
    /* 0x454 */ f32 unk454;                         /* inferred */
    /* 0x458 */ f32 unk458;                         /* inferred */
    /* 0x45C */ f32 unk45C;                         /* inferred */
    /* 0x460 */ f32 unk460;                         /* inferred */
    /* 0x464 */ f32 unk464;                         /* inferred */
    /* 0x468 */ f32 unk468;                         /* inferred */
    /* 0x46C */ f32 unk46C;                         /* inferred */
    /* 0x470 */ f32 unk470;                         /* inferred */
    /* 0x474 */ char pad474[0xC];                   /* maybe part of unk470[4]? */
    /* 0x480 */ f32 unk480;                         /* inferred */
    /* 0x484 */ f32 unk484;                         /* inferred */
    /* 0x488 */ ColliderCylinder unk488;            /* inferred */
    /* 0x4D4 */ ColliderJntSph unk4D4;              /* inferred */
    /* 0x4F4 */ ColliderJntSphElement unk4F4;       /* inferred */
    /* 0x534 */ ColliderJntSph unk534;              /* inferred */
    /* 0x554 */ ColliderJntSphElement unk554;       /* inferred */
    /* 0x594 */ ColliderJntSph unk594;              /* inferred */
    /* 0x5B4 */ ColliderJntSphElement unk5B4;       /* inferred */
    /* 0x5F4 */ char pad5F4[0x40];
    /* 0x634 */ ColliderCylinder unk634;            /* inferred */
    /* 0x680 */ s8 unk680;                          /* inferred */
    /* 0x681 */ char pad681[0x3];                   /* maybe part of unk680[4]? */
    /* 0x684 */ u32 unk684;                         /* inferred */
    /* 0x688 */ s16 unk688;                         /* inferred */
    /* 0x68A */ s16 unk68A;                         /* inferred */
    /* 0x68C */ f32 unk68C;                         /* inferred */
    /* 0x690 */ f32 unk690;                         /* inferred */
    /* 0x694 */ f32 unk694;                         /* inferred */
    /* 0x698 */ f32 unk698;                         /* inferred */
    /* 0x69C */ f32 unk69C;                         /* inferred */
    /* 0x6A0 */ f32 unk6A0;                         /* inferred */
    /* 0x6A4 */ f32 unk6A4;                         /* inferred */
    /* 0x6A8 */ char pad6A8[0x4];
    /* 0x6AC */ s16 unk6AC;                         /* inferred */
    /* 0x6AE */ char pad6AE[0x2];
    /* 0x6B0 */ f32 unk6B0;                         /* inferred */
    /* 0x6B4 */ u16 unk6B4;                         /* inferred */
    /* 0x6B6 */ u16 unk6B6;                         /* inferred */
    /* 0x6B8 */ u16 unk6B8;                         /* inferred */
    /* 0x6BA */ char pad6BA[0x2];
    /* 0x6BC */ u16 unk6BC;                         /* inferred */
    /* 0x6BE */ u16 unk6BE;                         /* inferred */
    /* 0x6C0 */ u16 unk6C0;                         /* inferred */
    /* 0x6C2 */ u16 unk6C2;                         /* inferred */
    /* 0x6C4 */ u8 unk6C4;                          /* inferred */
    /* 0x6C5 */ char pad6C5[0x3];                   /* maybe part of unk6C4[4]? */
    /* 0x6C8 */ Vec3f unk6C8;                       /* inferred */
} EnKnight;                                         /* size = 0x6D4 */

struct _mips2c_stack_EnKnight_Destroy {};           /* size 0x0 */

struct _mips2c_stack_EnKnight_Draw {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0xC];                     /* maybe part of sp44[4]? */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ char pad64[0x8];                     /* maybe part of sp60[3]? */
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ char pad70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_EnKnight_Init {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ ActorContext *sp44;                  /* inferred */
    /* 0x48 */ char pad48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnKnight_Update {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ ColliderCylinder *sp44;              /* inferred */
    /* 0x48 */ CollisionCheckContext *sp48;         /* inferred */
    /* 0x4C */ void (*sp4C)(EnKnight *, GlobalContext *); /* inferred */
    /* 0x50 */ char pad50[0x8];                     /* maybe part of sp4C[3]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad5C[0x10];                    /* maybe part of sp58[5]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ Actor *sp78;                         /* inferred */
    /* 0x7C */ char pad7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_809B20F0 {};              /* size 0x0 */

struct _mips2c_stack_func_809B21F4 {};              /* size 0x0 */

struct _mips2c_stack_func_809B22CC {
    /* 0x00 */ char pad0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char padBC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809B2DD0 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B2F54 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809B316C {};              /* size 0x0 */

struct _mips2c_stack_func_809B31E8 {};              /* size 0x0 */

struct _mips2c_stack_func_809B329C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B331C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B3394 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B33F0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B35BC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B3618 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B37C8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B3834 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B389C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B3958 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809B3A7C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B3B94 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809B3CD0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void (*sp1C)(EnKnight *, f32);       /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B3DAC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B3E9C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B3F0C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B4024 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B40E8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B41D8 {};              /* size 0x0 */

struct _mips2c_stack_func_809B41F8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B42B8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B4308 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ char pad36[0x2];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0xC];                     /* maybe part of sp4C[4]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809B47EC {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void (*sp1C)(Actor *, GlobalContext *); /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B4880 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B4BFC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B4C58 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809B4E84 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B4ED8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B4F90 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B5058 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809B51DC {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B52E8 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809B5634 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B5698 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad30[0x6];                     /* maybe part of sp2C[2]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809B58D4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B592C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B59FC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B5B08 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B5D38 {};              /* size 0x0 */

struct _mips2c_stack_func_809B5D54 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B5E90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B5ED0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B5FA8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B601C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809B631C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B638C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809B6528 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B6574 {
    /* 0x00 */ char pad0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char padBC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809B6764 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ Actor *sp50;                         /* inferred */
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ char pad56[0x2];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809B6C04 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B6C54 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809B6D38 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B6D94 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809B6EC8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B6F40 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809B7190 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B71DC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ CutsceneContext *sp24;               /* inferred */
    /* 0x28 */ char pad28[0x8];                     /* maybe part of sp24[3]? */
    /* 0x30 */ Camera *sp30;                        /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B7708 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B7778 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809B78A4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B7950 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ void (*sp30)(EnKnight *, GlobalContext *); /* inferred */
    /* 0x34 */ char pad34[0x8];                     /* maybe part of sp30[3]? */
    /* 0x3C */ Camera *sp3C;                        /* inferred */
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809B842C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809B8458 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 *sp20;                           /* inferred */
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ f32 *sp28;                           /* inferred */
    /* 0x2C */ f32 *sp2C;                           /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ CutsceneContext *sp38;               /* inferred */
    /* 0x3C */ char pad3C[0x8];                     /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ Camera *sp5C;                        /* inferred */
    /* 0x60 */ Actor *sp60;                         /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_809B9A18 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809B9D24 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809B9E00 {
    /* 0x00 */ char pad0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_809B9F8C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809BA058 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809BA0CC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad2C[0x8];                     /* maybe part of sp28[3]? */
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809BA940 {};              /* size 0x0 */

struct _mips2c_stack_func_809BA978 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ActorShape *sp2C;                    /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809BC2C4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x18];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809BC67C {};              /* size 0x0 */

struct _mips2c_stack_func_809BC720 {};              /* size 0x0 */

struct _mips2c_stack_func_809BC8B4 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderJntSph *sp20;                /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809BCA80 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Vec3f *sp18;                         /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809BCAD8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809BCB54 {};              /* size 0x0 */

struct _mips2c_stack_func_809BCB78 {};              /* size 0x0 */

struct _mips2c_stack_func_809BD1AC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809BD260 {};              /* size 0x0 */

struct _mips2c_stack_func_809BD29C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809BD490 {
    /* 0x00 */ char pad0[0x80];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809BD858 {
    /* 0x00 */ char pad0[0x68];
};                                                  /* size = 0x68 */

? EffectSsKFire_Spawn(GlobalContext *, f32 *, ? *, ? *, s32, s32); /* extern */
? func_800B8D10(f32, GlobalContext *, EnKnight *, f32, ?, f32, s32, s32); /* extern */
f32 func_800C3FA0(CollisionContext *, ? *, f32 *);  /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_80169940(GlobalContext *, s16, f32);         /* extern */
void func_809B20F0(GlobalContext *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, s16 arg6); /* static */
void func_809B21F4(EnKnight *arg0, s32 arg1, ColliderJntSph *arg2, f32 *arg3); /* static */
void func_809B22CC(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_809B2DD0(EnKnight *arg0, GlobalContext *arg1); /* static */
s32 func_809B2F54(EnKnight *arg0, GlobalContext *arg1); /* static */
s32 func_809B316C(EnKnight *arg0, GlobalContext *arg1); /* static */
s32 func_809B31E8(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B329C(EnKnight *arg0, GlobalContext *arg1, s32 arg2, GlobalContext *); /* static */
void func_809B3394(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B35BC(EnKnight *arg0, GlobalContext *arg1, s32); /* static */
void func_809B37C8(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B389C(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B3A7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809B3CD0(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B3DAC(EnKnight *arg0, f32 arg1);       /* static */
void func_809B3E9C(EnKnight *arg0, GlobalContext *arg1, s16, s16); /* static */
void func_809B3F0C(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B4024(EnKnight *arg0, GlobalContext *arg1, s16 arg2, GlobalContext *); /* static */
void func_809B41D8(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B42B8(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B47EC(f32 arg0, f32 arg1, EnKnight *arg2, GlobalContext *, ?); /* static */
void func_809B4880(Actor *arg0, GlobalContext *arg1); /* static */
void func_809B4BFC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809B4E84(Actor *arg0, GlobalContext *arg1, u16 arg2); /* static */
void func_809B4F90(Actor *arg0, GlobalContext *arg1); /* static */
void func_809B51DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809B5634(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B592C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809B59FC(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B5D38(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B5E90(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B5FA8(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B631C(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B638C(Actor *arg0, GlobalContext *arg1, s16 arg2); /* static */
void func_809B6528(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B6574(GlobalContext *arg0, s32 arg1);  /* static */
void func_809B6C04(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B6D38(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B6EC8(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B7190(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B7708(Actor *arg0, GlobalContext *arg1, EnKnight *); /* static */
void func_809B78A4(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B842C(s32 arg0, ? arg1);               /* static */
void func_809B9A18(Actor *arg0, GlobalContext *arg1); /* static */
void func_809B9D24(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B9E00(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809B9F8C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809BA058(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809BA940(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809BC2C4(EnKnight *arg0, GlobalContext *arg1); /* static */
s32 func_809BC67C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
? func_809BC720(s32 arg0, s32 arg1, ? **arg2, ? arg3, void *arg4, void *arg5); /* static */
void func_809BC8B4(s32 arg0, s32 arg1, ? arg2, ? arg3, EnKnight *arg4); /* static */
void func_809BCA80(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809BCAD8(s32 arg0, s32 arg1, void *arg2, ? arg3); /* static */
void *func_809BCB54(GraphicsContext *arg0);         /* static */
void *func_809BCB78(GraphicsContext *arg0, s32 arg1); /* static */
void func_809BD1AC(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_809BD260(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_809BD29C(Actor *this, GlobalContext *globalCtx); /* static */
void func_809BD490(EnKnight *arg0, GlobalContext *arg1); /* static */
void func_809BD858(EnKnight *arg0, GlobalContext *arg1); /* static */
extern ? D_04023428;
extern AnimationHeader D_060005A8;
extern AnimationHeader D_060009E0;
extern AnimationHeader D_06000D9C;
extern AnimationHeader D_06001CDC;
extern AnimationHeader D_06002174;
extern AnimationHeader D_06003008;
extern AnimationHeader D_060031F0;
extern AnimationHeader D_06003650;
extern AnimationHeader D_060040E0;
extern AnimationHeader D_06004620;
extern AnimationHeader D_06004974;
extern AnimationHeader D_06005D30;
extern AnimationHeader D_06005E78;
extern AnimationHeader D_06006754;
extern AnimationHeader D_06006EF8;
extern AnimationHeader D_060079D4;
extern AnimationHeader D_06008390;
extern AnimationHeader D_06008524;
extern AnimationHeader D_060089E4;
extern AnimationHeader D_06008D80;
extern AnimationHeader D_06009538;
extern AnimationHeader D_06009D8C;
extern AnimationHeader D_0600A530;
extern AnimationHeader D_0600A88C;
extern AnimationHeader D_0600AFAC;
extern AnimationHeader D_0600B5D4;
extern AnimationHeader D_0600BCF4;
extern AnimationHeader D_0600C384;
extern AnimationHeader D_0600C7F0;
extern AnimationHeader D_0600CDE0;
extern AnimationHeader D_0600D870;
extern AnimationHeader D_0600DDCC;
extern AnimationHeader D_0600E15C;
extern AnimationHeader D_0600E45C;
extern AnimationHeader D_0600E7F4;
extern AnimationHeader D_0600EA90;
extern AnimationHeader D_0600EF44;
extern AnimationHeader D_0600FC78;
extern AnimationHeader D_0601024C;
extern AnimationHeader D_06010E98;
extern AnimationHeader D_06011298;
extern ? D_06012400;
extern ? D_06012DB0;
extern ? D_06013020;
extern ? D_060188F8;
extern ? D_060189F0;
extern ? D_06018AF0;
extern void D_06018BC4;
extern FlexSkeletonHeader D_060201A8;
extern FlexSkeletonHeader D_06020374;
extern AnimationHeader D_06020950;
extern AnimationHeader D_0602105C;
extern AnimationHeader D_06021B10;
extern AnimationHeader D_06021E34;
extern AnimationHeader D_06022728;
extern AnimationHeader D_06022CAC;
extern ? D_08000000;
static ? D_809BDAF0;                                /* unable to generate initializer */
static u8 D_809BDAFC = 0;
static u8 D_809BDB00 = 0;
static DamageTable D_809BDB04 = {
    {
        0x10,
        0xF1,
        0,
        0xF1,
        0x10,
        0xF3,
        0,
        0xF0,
        0xF1,
        0xF1,
        0xD0,
        0x21,
        0x31,
        0x42,
        0xF1,
        0x10,
        0xF2,
        0xF1,
        0,
        0xA0,
        0,
        0xE0,
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
static ? D_809BDB24;                                /* unable to generate initializer */
static ColliderJntSphElementInit D_809BDB44 = {
    {2, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x1B}, 0x64},
};
static ColliderJntSphElementInit D_809BDB68 = {
    {2, {0xF7CFFFFF, 0, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x20}, 0x64},
};
static ColliderJntSphInit D_809BDB8C = {{9, 0x11, 0xD, 9, 0x10, 0}, 1, &D_809BDB44};
static ColliderJntSphInit D_809BDB9C = {{9, 0x11, 0xD, 9, 0x10, 0}, 1, &D_809BDB68};
static ColliderJntSphElementInit D_809BDBAC = {
    {2, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x1B}, 0x64},
};
static ColliderJntSphInit D_809BDBD0 = {{9, 0x11, 0xD, 9, 0x10, 0}, 1, &D_809BDBAC};
static ColliderJntSphElementInit D_809BDBE0[2] = {
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7EFFFFF, 0, 0}, 1, 5, 1},
        {0, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7EFFFFF, 0, 0}, 1, 5, 1},
        {1, {{0, 0, 0}, 0x11}, 0x64},
    },
};
static ColliderJntSphInit D_809BDC28 = {{3, 0x11, 9, 0x19, 0x10, 0}, 2, &D_809BDBE0};
static ColliderCylinderInit D_809BDC38 = {
    {9, 0x11, 0xD, 0x39, 0x10, 1},
    {3, {0xF7CFFFFF, 0, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0xF, 0x14, 0xFFF6, {0, 0, 0}},
};
static ColliderCylinderInit D_809BDC64 = {
    {3, 0x39, 0x39, 0x39, 0x10, 1},
    {3, {0xF7CFFFFF, 0, 0}, {0xF7FFFFFF, 0, 0}, 1, 1, 1},
    {0x14, 0x28, 0, {0, 0, 0}},
};
static Color_RGBA8 D_809BDC90 = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_809BDC94 = {0x28, 0x1E, 0x1E, 0xFF};
static ? D_809BDCB8;                                /* unable to generate initializer */
static ? D_809BDCC0;                                /* unable to generate initializer */
static ? D_809BDCC8;                                /* unable to generate initializer */
static ? D_809BDCD0;                                /* unable to generate initializer */
static ? D_809BDCD8;                                /* unable to generate initializer */
static ? D_809BDCE0;                                /* unable to generate initializer */
static ? D_809BDCE8;                                /* unable to generate initializer */
static Color_RGBA8 D_809BDCF0 = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_809BDCF4 = {0x28, 0x1E, 0x1E, 0xFF};
static Color_RGBA8 D_809BDCF8 = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_809BDCFC = {0xC8, 0xC8, 0xFF, 0xFF};
static Vec3f D_809BDD00 = {0.0f, -1.0f, 0.0f};
static Vec3f D_809BDD0C = {100.0f, 0.0f, 0.0f};
static Vec3f D_809BDD18 = {0.0f, 600.0f, 0.0f};
static Vec3f D_809BDD24 = {0.0f, 600.0f, 1000.0f};
static Vec3f D_809BDD30 = {1000.0f, 0.0f, 0.0f};
static ? D_809BDD3C;                                /* unable to generate initializer */
static Vec3f D_809BDD5C = {300.0f, 500.0f, 0.0f};
static Vec3f D_809BDD68 = {1000.0f, 0.0f, 0.0f};
static Vec3f D_809BDD74 = {700.0f, -500.0f, 0.0f};
static Vec3f D_809BDD80 = {300.0f, 500.0f, 0.0f};
static EnKnight *D_809BEFD0;
static Actor *D_809BEFD4;
static Actor *D_809BEFD8;
static Actor *D_809BEFDC;
static EnKnight *D_809BEFE0;
static Actor *D_809BEFE4;
static void D_809BEFE8;
static ? D_809C0758;

void func_809B20F0(GlobalContext *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, s16 arg6) {
    s16 temp_v1;
    void *phi_v0;
    s16 phi_v1;

    phi_v0 = arg0->specialEffects;
    phi_v1 = 0;
loop_1:
    if (phi_v0->unk2A == 0) {
        phi_v0->unk2A = 1U;
        phi_v0->unk0 = (s32) arg1->unk0;
        phi_v0->unk4 = (s32) arg1->unk4;
        phi_v0->unk8 = (s32) arg1->unk8;
        phi_v0->unkC = (s32) arg2->unk0;
        phi_v0->unk10 = (s32) arg2->unk4;
        phi_v0->unk14 = (s32) arg2->unk8;
        phi_v0->unk18 = (s32) arg3->unk0;
        phi_v0->unk1C = (s32) arg3->unk4;
        phi_v0->unk30 = 0;
        phi_v0->unk20 = (s32) arg3->unk8;
        phi_v0->unk34 = (f32) ((((f32) gGameInfo->data[2450] * 0.0001f) + 0.001f) * arg4);
        phi_v0->unk38 = (f32) ((((f32) gGameInfo->data[2451] * 0.0001f) + 0.001f) * arg5);
        phi_v0->unk2C = 0;
        phi_v0->unk2E = arg6;
        return;
    }
    temp_v1 = phi_v1 + 1;
    phi_v0 += 0x3C;
    phi_v1 = temp_v1;
    if ((s32) temp_v1 >= 0x64) {
        return;
    }
    goto loop_1;
}

void func_809B21F4(EnKnight *arg0, s32 arg1, ColliderJntSph *arg2, f32 *arg3) {
    s32 temp_v0;
    void *temp_v1;
    f32 phi_f0;
    f32 phi_f0_2;

    if (arg0 == D_809BEFD0) {
        phi_f0_2 = 1.3076924f;
    } else {
        phi_f0_2 = 1.0f;
    }
    phi_f0 = phi_f0_2;
    if (func_809B52E8 == arg0->actionFunc) {
        phi_f0 = 2.0f * phi_f0_2;
    }
    temp_v0 = arg1 << 6;
    (arg2->elements + temp_v0)->unk30 = (s16) (s32) arg3->unk0;
    (arg2->elements + temp_v0)->unk32 = (s16) (s32) arg3->unk4;
    (arg2->elements + temp_v0)->unk34 = (s16) (s32) arg3->unk8;
    temp_v1 = arg2->elements + temp_v0;
    temp_v1->unk36 = (s16) (s32) (temp_v1->unk38 * ((f32) temp_v1->unk2E * phi_f0));
}

void func_809B22CC(Actor *arg0, GlobalContext *arg1, s32 arg2) {
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
    if (((arg0->unk146 & temp_a2) == 0) && (arg0->unk162 == 0) && ((phi_s1 = 0, (arg0->unk2A4 > 1.0f)) || (arg0->unk2A8 > 1.0f) || (temp_a2 == 0) || (arg0->speedXZ > 1.0f))) {
        temp_s6 = &sp98;
        temp_s5 = &spA4;
        temp_s4 = &spB0;
        do {
            spA4 = randPlusMinusPoint5Scaled(3.0f);
            spA8 = Rand_ZeroFloat(1.0f);
            spAC = randPlusMinusPoint5Scaled(3.0f);
            sp9C = -0.1f;
            spA0 = 0.0f;
            sp98 = 0.0f;
            temp_s0 = arg0 + (phi_s1 * 0xC);
            spB0 = randPlusMinusPoint5Scaled(10.0f) + temp_s0->unk2AC;
            spB4 = (Rand_ZeroFloat(5.0f) + arg0->floorHeight) - 5.0f;
            spB8 = randPlusMinusPoint5Scaled(10.0f) + temp_s0->unk2B4;
            temp_f20 = Rand_ZeroFloat(80.0f);
            func_800B0EB0(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &D_809BDC90, &D_809BDC94, (s16) (s32) (temp_f20 + 150.0f), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
            temp_s1 = (phi_s1 + 1) & 0xFF;
            phi_s1 = temp_s1;
        } while (temp_s1 < 2);
    }
}

void EnKnight_Init(EnKnight *this, GlobalContext *globalCtx) {
    ActorContext *sp44;
    ActorContext *temp_a0;
    s16 temp_v0;
    s32 temp_t0;
    s32 temp_v0_2;
    u8 temp_v1;
    void *temp_v0_3;
    void *phi_v0;
    EnKnight *this = (EnKnight *) thisx;

    this->actor.targetMode = 5;
    this->actor.colChkInfo.mass = 0xFE;
    this->actor.colChkInfo.damageTable = &D_809BDB04;
    this->unk17C = 255.0f;
    temp_v0 = this->actor.params;
    temp_t0 = (s32) Rand_ZeroFloat(1000.0f);
    this->actor.flags |= 0x400;
    this->unk146 = (s16) temp_t0;
    if (temp_v0 == 0x64) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 12.0f);
        SkelAnime_InitSV(globalCtx, &this->unk194, &D_060201A8, &D_06003008, &this->unk2C4, &this->unk372, 0x1D);
        Actor_SetScale((Actor *) this, ((f32) gGameInfo->data[1260] * 0.001f) + 0.017f);
        func_809BA058(this, globalCtx);
        Collider_InitAndSetCylinder(globalCtx, &this->unk488, (Actor *) this, &D_809BDC38);
        Collider_InitAndSetCylinder(globalCtx, &this->unk634, (Actor *) this, &D_809BDC64);
        this->actor.colChkInfo.health = 0xA - gGameInfo->data[2440];
        return;
    }
    if ((s32) temp_v0 >= 0xC8) {
        this->actor.update = func_809BD1AC;
        this->actor.draw = func_809BD29C;
        this->actor.flags &= -2;
        if (this->actor.params == 0xC8) {
            SkelAnime_InitSV(globalCtx, &this->unk194, &D_06020374, &D_060040E0, &this->unk2C4, &this->unk372, 0x1D);
            Actor_SetScale((Actor *) this, ((f32) gGameInfo->data[1261] * 0.001f) + 0.013f);
        } else {
            SkelAnime_InitSV(globalCtx, &this->unk194, &D_060201A8, &D_060040E0, &this->unk2C4, &this->unk372, 0x1D);
            Actor_SetScale((Actor *) this, ((f32) gGameInfo->data[1261] * 0.001f) + 0.017f);
        }
        if (this->actor.params == 0xCA) {
            this->unk17C = (f32) gGameInfo->data[2479] + 100.0f;
            return;
        }
        this->unk17C = (f32) gGameInfo->data[2477] + 120.0f;
        return;
    }
    this->actor.hintId = 0x16;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 40.0f);
    Collider_InitAndSetJntSph(globalCtx, &this->unk534, (Actor *) this, &D_809BDBD0, &this->unk554);
    Collider_InitAndSetJntSph(globalCtx, &this->unk594, (Actor *) this, &D_809BDC28, &this->unk5B4);
    if (this->actor.params == 0x23) {
        Collider_InitAndSetJntSph(globalCtx, &this->unk4D4, (Actor *) this, &D_809BDB8C, &this->unk4F4);
        SkelAnime_InitSV(globalCtx, &this->unk194, &D_06020374, &D_060040E0, &this->unk2C4, &this->unk372, 0x1D);
        this->actor.colChkInfo.health = 6 - gGameInfo->data[2440];
        Actor_SetScale((Actor *) this, ((f32) gGameInfo->data[1261] * 0.001f) + 0.013f);
    } else {
        Collider_InitAndSetJntSph(globalCtx, &this->unk4D4, (Actor *) this, &D_809BDB9C, &this->unk4F4);
        SkelAnime_InitSV(globalCtx, &this->unk194, &D_060201A8, &D_060040E0, &this->unk2C4, &this->unk372, 0x1D);
        this->actor.colChkInfo.health = 0xE - gGameInfo->data[2441];
        Actor_SetScale((Actor *) this, ((f32) gGameInfo->data[1260] * 0.001f) + 0.017f);
        this->unk290 = (u8) (u32) Rand_ZeroFloat(1.9999f);
    }
    this->unk18E = 3;
    this->unk180 = 180.0f;
    temp_v1 = D_809BDAFC;
    temp_v0_2 = (temp_v1 & 3) * 2;
    D_809BDAFC = temp_v1 + 1;
    this->unk6B4 = *(&D_809BDCB8 + temp_v0_2);
    this->unk6B6 = *(&D_809BDCC0 + temp_v0_2);
    this->unk6B8 = *(&D_809BDCC8 + temp_v0_2);
    this->unk6BC = *(&D_809BDCD0 + temp_v0_2);
    this->unk6BE = *(&D_809BDCD8 + temp_v0_2);
    this->unk6C0 = *(&D_809BDCE0 + temp_v0_2);
    this->unk6C2 = *(&D_809BDCE8 + temp_v0_2);
    if (this->actor.params != 0x23) {
        globalCtx->specialEffects = &D_809BEFE8;
        phi_v0 = &D_809BEFE8;
        do {
            temp_v0_3 = phi_v0 + 0xF0;
            temp_v0_3->unk-8A = 0;
            temp_v0_3->unk-4E = 0;
            temp_v0_3->unk-12 = 0;
            temp_v0_3->unk-C6 = 0;
            phi_v0 = temp_v0_3;
        } while (temp_v0_3 != &D_809C0758);
        D_809BEFD0 = this;
        D_809BEFE0 = NULL;
        D_809BEFDC = NULL;
        this->actor.shape.rot.y = -0x4000;
        temp_a0 = &globalCtx->actorCtx;
        sp44 = temp_a0;
        D_809BEFD4 = Actor_Spawn(temp_a0, globalCtx, 0x115, 1398.0f, 66.0f, 2730.0f, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, (s16) 0x23);
        D_809BEFD8 = Actor_Spawn(temp_a0, globalCtx, 0x115, 1398.0f, 66.0f, 2969.0f, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, (s16) 0x23);
        Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x12E, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 0);
        Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x12E, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 1);
    }
    if (((gSaveContext.eventInf[5] & 0x80) != 0) && (Actor_GetRoomCleared(globalCtx, (u32) globalCtx->roomCtx.currRoom.num) == 0)) {
        if (this == D_809BEFD0) {
            this->actor.world.pos.y = 45.0f;
            this->actor.world.pos.x = (f32) gGameInfo->data[2427] + 1376.0f;
            this->actor.world.pos.z = (f32) gGameInfo->data[2428] + 2864.0f;
            func_809B6528(this, globalCtx);
            this->actor.flags &= -2;
            this->unk194.animCurrentFrame = 25.0f;
            D_809BDB00 = gGameInfo->data[1331] + 0x28;
        } else {
            func_809B3E9C(this, globalCtx);
            this->unk152 = 1;
            this->unk470 = 1.0f;
            this->unk46C = 1.0f;
            this->actor.gravity = -1.5f;
            this->unk6B0 = 60.0f;
        }
        globalCtx->envCtx.unk_C3 = 7;
        return;
    }
    func_809B631C(this, globalCtx);
    globalCtx->envCtx.unk_C3 = 0;
}

void EnKnight_Destroy(EnKnight *this, GlobalContext *globalCtx) {
    EnKnight *this = (EnKnight *) thisx;

}

void func_809B2DD0(EnKnight *arg0, GlobalContext *arg1) {
    void *sp34;
    Actor *temp_v0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f2;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    if (arg0->unk162 == 0) {
        sp34 = arg1->actorCtx.actorList[2].first;
        temp_s0 = arg1->actorCtx.actorList[3].first;
        phi_s0 = temp_s0;
        if (temp_s0 != 0) {
            do {
                temp_f14 = arg0->actor.world.pos.x;
                temp_f16 = arg0->actor.world.pos.z;
                temp_f2 = phi_s0->world.pos.x - temp_f14;
                temp_f12 = phi_s0->world.pos.z - temp_f16;
                if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 100.0f) {
                    arg0->unk42C.unk_14 = temp_f14 - (temp_f2 * 100.0f);
                    arg0->unk42C.cameraFocus = temp_f16 - (temp_f12 * 100.0f);
                    func_809B47EC(temp_f12, temp_f14, arg0, arg1, 0);
                }
                temp_s0_2 = phi_s0->next;
                phi_s0 = temp_s0_2;
            } while (temp_s0_2 != 0);
        }
        temp_v0 = D_809BEFE4;
        if ((temp_v0 != 0) && (temp_v0->unk214 > 0.1f) && (arg0->actor.xzDistToPlayer <= ((f32) gGameInfo->data[2470] + 300.0f))) {
            temp_f14_2 = arg0->actor.world.pos.x;
            temp_f16_2 = arg0->actor.world.pos.z;
            temp_f12_2 = sp34->world.pos.z - temp_f16_2;
            arg0->unk42C.unk_14 = temp_f14_2 - ((sp34->world.pos.x - temp_f14_2) * 100.0f);
            arg0->unk42C.cameraFocus = temp_f16_2 - (temp_f12_2 * 100.0f);
            func_809B47EC(temp_f12_2, temp_f14_2, arg0, arg1, 1);
        }
    }
}

s32 func_809B2F54(EnKnight *arg0, GlobalContext *arg1) {
    s32 sp20;
    void *sp1C;
    EnKnight *temp_a0;
    EnKnight *temp_a0_2;
    EnKnight *temp_v0;
    GameInfo *temp_v0_2;
    f32 temp_f0;
    void *temp_v1;
    f32 phi_f0;
    EnKnight *phi_v0;

    temp_v0 = D_809BEFD0;
    sp20 = 0;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    phi_v0 = temp_v0;
    if (arg0 == temp_v0) {
        phi_f0 = 1.3076924f;
    } else {
        phi_f0 = 1.0f;
    }
    if ((arg0->actor.xzDistToPlayer <= (90.0f * phi_f0)) && ((arg0->unk146 & 7) == 0)) {
        sp1C = temp_v1;
        temp_a0 = arg0;
        if ((Rand_ZeroOne() < 0.5f) && (D_809BEFDC != temp_v1->parent)) {
            arg0 = temp_a0;
            func_809B389C(temp_a0, arg1);
        } else {
            arg0 = temp_a0;
            temp_a0_2 = arg0;
            if (Rand_ZeroOne() < 0.5f) {
                arg0 = temp_a0_2;
                func_809B329C(temp_a0_2, arg1, 0);
            } else {
                arg0 = temp_a0_2;
                func_809B35BC(temp_a0_2, arg1, 0);
            }
        }
        sp20 = 1;
        phi_v0 = D_809BEFD0;
    }
    if ((arg0 == phi_v0) && (arg0->unk162 == 0) && ((arg0->unk14E == 0) || (gGameInfo->data[2415] == 1))) {
        temp_v0_2 = gGameInfo;
        temp_f0 = arg0->actor.xzDistToPlayer;
        if (((f32) temp_v0_2->data[1319] + 100.0f) < temp_f0) {
            sp20 = 1;
            if (temp_f0 < ((f32) temp_v0_2->data[1320] + 300.0f)) {
                arg0 = arg0;
                if (Rand_ZeroOne() > 0.5f) {
                    func_809B6EC8(arg0, arg1);
                } else {
                    func_809B6C04(arg0, arg1);
                }
            } else {
                func_809B6C04(arg0, arg1);
            }
        }
    }
    return sp20;
}

s32 func_809B316C(EnKnight *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_v1;
    s32 phi_a0;
    s32 phi_v0;

    temp_v1 = arg0->unk172;
    temp_a2 = temp_v1 - arg0->actor.shape.rot.y;
    phi_a0 = (s32) temp_a2;
    if ((s32) temp_a2 < 0) {
        phi_a0 = -(s32) temp_a2;
    }
    if (phi_a0 < 0x3000) {
        temp_a0 = temp_v1 - (arg1->actorCtx.actorList[2].first->unkBE + 0x8000);
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

s32 func_809B31E8(EnKnight *arg0, GlobalContext *arg1) {
    GameInfo *temp_v1_2;
    s16 temp_a1;
    s16 temp_v1;
    void *temp_v0;
    s32 phi_a1;
    s32 phi_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0->unk172 - (temp_v0->focus.rot.y + 0x8000);
    phi_a1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_a1 = -(s32) temp_v1;
    }
    temp_v1_2 = gGameInfo;
    if (phi_a1 < (s32) (s16) ((temp_v1_2->data[1339] << 8) + 0x400)) {
        temp_a1 = -(s32) arg0->unk170 - temp_v0->focus.rot.x;
        phi_v0 = (s32) temp_a1;
        if ((s32) temp_a1 < 0) {
            phi_v0 = -(s32) temp_a1;
        }
        if (phi_v0 < (s32) (s16) ((temp_v1_2->data[1340] << 8) + 0x300)) {
            return 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_809B329C(EnKnight *arg0, GlobalContext *arg1, s32 arg2) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06020950, -5.0f);
    arg0->actionFunc = func_809B331C;
    if (arg0 == D_809BEFD0) {
        if (arg2 != 0) {
            arg0->unk14A = 0;
            return;
        }
        arg0->unk14A = 6;
        return;
    }
    arg0->unk14A = 0xF;
}

void func_809B331C(EnKnight *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_ApproachS(&this->actor.world.rot.y, this->unk172, 2, 0x500);
    if (this->unk14A == 0) {
        func_809B3394(this, globalCtx);
    }
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
}

void func_809B3394(EnKnight *arg0, GlobalContext *arg1) {
    f32 temp_f6;

    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06011298, 0.0f);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06011298);
    arg0->actionFunc = func_809B33F0;
    arg0->unk1D8 = temp_f6;
}

void func_809B33F0(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;

    temp_f0 = this->unk194.animCurrentFrame;
    this->unk186 = 0;
    temp_a0 = &this->unk194;
    if ((temp_f0 >= 3.0f) && (temp_f0 <= 6.0f)) {
        this->unk450 = 255.0f;
        this->unk454 = -19.0f;
        this->unk458 = 46.0f;
        this->unk45C = 17.0f;
        this->unk460 = -0.5497787f;
        this->unk464 = 2.9059734f;
        this->unk468 = -1.1780972f;
    }
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    temp_f0_2 = this->unk194.animCurrentFrame;
    if ((temp_f0_2 >= 2.0f) && (temp_f0_2 <= 5.0f)) {
        Matrix_RotateY(this->actor.world.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(5.0f, (Vec3f *) &sp2C);
        this->unk2A4 = sp2C;
        this->unk2A8 = sp34;
    }
    if (func_801378B8(sp24, 1.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, this->unk6BC);
    }
    if (func_801378B8(sp24, this->unk1D8) != 0) {
        if ((Rand_ZeroOne() < 0.5f) && (this->actor.xzDistToPlayer <= 100.0f)) {
            func_809B35BC(this, globalCtx);
        } else {
            func_809B3E9C(this, globalCtx);
        }
    }
    this->unk190 = 1;
}

void func_809B35BC(EnKnight *arg0, GlobalContext *arg1) {
    f32 temp_f6;

    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06022728, -5.0f);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06022728);
    arg0->actionFunc = func_809B3618;
    arg0->unk1D8 = temp_f6;
}

void func_809B3618(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;

    this->unk186 = 0;
    if (this == D_809BEFD0) {
        Math_ApproachS(&this->actor.world.rot.y, this->unk172, 2, 0x800);
    }
    temp_f0 = this->unk194.animCurrentFrame;
    temp_a0 = &this->unk194;
    if ((temp_f0 >= 12.0f) && (temp_f0 <= 15.0f)) {
        this->unk450 = 255.0f;
        this->unk454 = -20.0f;
        this->unk458 = 47.0f;
        this->unk45C = 0.0f;
        this->unk460 = 3.1415927f;
        this->unk464 = 0.0f;
        this->unk468 = 0.47123894f;
    }
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    temp_f0_2 = this->unk194.animCurrentFrame;
    if ((temp_f0_2 >= 12.0f) && (temp_f0_2 <= 15.0f)) {
        Matrix_RotateY(this->actor.world.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(5.0f, (Vec3f *) &sp2C);
        this->unk2A4 = sp2C;
        this->unk2A8 = sp34;
    }
    if (func_801378B8(sp24, 12.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, this->unk6BC);
    }
    if (func_801378B8(sp24, this->unk1D8) != 0) {
        func_809B37C8(this, globalCtx);
    }
    if (this->unk194.animCurrentFrame >= 12.0f) {
        this->unk190 = 1;
    }
}

void func_809B37C8(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06022CAC, 0.0f);
    arg0->actionFunc = func_809B3834;
    if (arg0 == D_809BEFD0) {
        arg0->unk14A = 6;
        return;
    }
    arg0->unk14A = 0xF;
}

void func_809B3834(EnKnight *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    if (this->unk14A == 0) {
        func_809B3E9C(this, globalCtx);
    }
    Math_ApproachZeroF(this + 0x70, 1.0f, 1.0f);
}

void func_809B389C(EnKnight *arg0, GlobalContext *arg1) {
    if (Rand_ZeroOne() < 0.5f) {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_0600C384, -2.0f);
        arg0->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600C384);
    } else {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_0600BCF4, -2.0f);
        arg0->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600BCF4);
    }
    arg0->actionFunc = func_809B3958;
    arg0->unk14A = 0x14;
}

void func_809B3958(EnKnight *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk194;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, this->unk1D8) != 0) {
        if ((Rand_ZeroOne() < 0.6f) && (this->actor.xzDistToPlayer <= 100.0f)) {
            if (Rand_ZeroOne() < 0.5f) {
                func_809B389C(this, globalCtx);
            } else {
                func_809B329C(this, globalCtx, 0);
            }
        } else {
            func_809B3E9C(this, globalCtx);
        }
    }
    Math_ApproachS(&this->actor.world.rot.y, this->unk172, 5, 0x500);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    if (this->unk14A == 0x10) {
        this->unk190 = 1;
    }
}

void func_809B3A7C(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    f32 temp_f10;
    s32 temp_s0;
    s32 phi_s0;

    if (arg0->xzDistToPlayer <= 200.0f) {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_0600AFAC, -3.0f);
        temp_f10 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600AFAC);
        arg0->unk420 = func_809B3B94;
        arg0->unk1D8 = temp_f10;
        Matrix_RotateY(arg0->unk172, 0U);
        SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[1297] + 7.0f, (Vec3f *) &sp28);
        arg0->unk2A4 = sp28;
        arg0->velocity.y = 10.0f;
        arg0->unk2A8 = sp30;
        Audio_PlayActorSound2(arg0, 0x386CU);
        arg0->unk14A = 0xF;
        phi_s0 = 0;
        do {
            func_809B22CC(arg0, arg1, 0);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 5);
    }
}

void func_809B3B94(EnKnight *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk14A;
    temp_a0 = &this->unk194;
    if (((s32) temp_v0 >= 2) && ((s32) temp_v0 < 6)) {
        this->unk450 = 255.0f;
        this->unk454 = -19.0f;
        this->unk458 = 46.0f;
        this->unk45C = 17.0f;
        this->unk460 = -0.5497787f;
        this->unk464 = 2.9059734f;
        this->unk468 = -1.1780972f;
    }
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, this->unk1D8) != 0) {
        SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_0600B5D4, 0.0f);
        Audio_PlayActorSound2((Actor *) this, this->unk6BC);
        this->unk1D8 = 1000.0f;
    }
    this->actor.speedXZ = 0.0f;
    if ((this->actor.velocity.y <= 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        this->unk2A8 = 0.0f;
        this->unk2A4 = 0.0f;
        Audio_PlayActorSound2((Actor *) this, 0x387BU);
    }
    if (this->unk14A == 0) {
        func_809B3E9C(this, globalCtx);
    }
    this->unk190 = 1;
}

void func_809B3CD0(EnKnight *arg0, GlobalContext *arg1) {
    void (*sp1C)(EnKnight *, f32);
    f32 temp_f16;
    s32 temp_v0;
    EnKnight *phi_a3;

    if ((arg0 == D_809BEFD0) && (arg0->actor.xzDistToPlayer <= 120.0f) && (arg0 = arg0, (Rand_ZeroOne() < 0.1f))) {
        func_809B59FC(arg0, arg1);
        return;
    }
    temp_v0 = arg0->actionFunc;
    phi_a3 = arg0;
    if (func_809B3DAC != temp_v0) {
        arg0->unk424 = temp_v0;
        arg0 = arg0;
        sp1C = func_809B3DAC;
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_060031F0, -2.0f);
        temp_f16 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060031F0);
        arg0->actionFunc = func_809B3DAC;
        arg0->unk1D8 = temp_f16;
        phi_a3 = arg0;
    }
    phi_a3->unk14A = 5;
}

void func_809B3DAC(EnKnight *arg0, f32 arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x194);
    Math_ApproachS(arg0 + 0x32, arg0->unk172, 2, 0x800);
    Math_ApproachZeroF(arg0 + 0x70, 1.0f, 1.0f);
    if (arg0->unk14A != 0) {
        arg0->unk191 = 1;
    } else if (func_809B4880 == arg0->unk424) {
        func_809B47EC((bitwise f32) arg0, arg1, (EnKnight *)1);
    } else {
        func_809B3E9C(arg0, (bitwise GlobalContext *) arg1);
        if ((arg0 == D_809BEFD0) && (Rand_ZeroOne() < 0.4f)) {
            Audio_PlayActorSound2((Actor *) arg0, 0x3A31U);
        }
    }
    arg0->unk192 = 1;
}

void func_809B3E9C(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x194, &D_060040E0, -5.0f);
    arg0->actionFunc = func_809B3F0C;
    arg0->unk14A = (s16) (s32) (Rand_ZeroFloat(50.0f) + 20.0f);
}

void func_809B3F0C(EnKnight *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 phi_v0;
    s32 phi_a0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x194);
    temp_v1 = arg0->unk172 - arg0->actor.shape.rot.y;
    if (arg0 == D_809BEFD0) {
        phi_a0 = 0x7FFF;
    } else {
        phi_a0 = 0x6000;
    }
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if (phi_v0 < phi_a0) {
        func_809B41D8(arg0, arg1);
    } else {
        if (((arg0->unk146 & 7) == 0) && (Rand_ZeroOne() < 0.75f)) {
            arg0->unk186 = (s16) (s32) randPlusMinusPoint5Scaled(28672.0f);
        }
        if (arg0->unk14A == 0) {
            func_809B4024(arg0, arg1, 0x4000);
        }
    }
    Math_ApproachZeroF(arg0 + 0x70, 1.0f, 1.0f);
    arg0->unk192 = 1;
}

void func_809B4024(EnKnight *arg0, GlobalContext *arg1, s16 arg2) {
    EnKnight *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809B40E8;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x194, &D_0600EF44, -2.0f);
    if (Rand_ZeroOne() < 0.5f) {
        arg0->unk186 = 0x3800;
        arg0->unk15A = arg0->actor.shape.rot.y + arg2;
    } else {
        arg0->unk186 = -0x3800;
        arg0->unk15A = arg0->actor.shape.rot.y - arg2;
    }
    if (arg2 == 0x4000) {
        arg0->unk15C = 0;
    } else {
        arg0->unk15C = 0x800;
    }
    arg0->unk14A = 0x14;
}

void func_809B40E8(EnKnight *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    if ((s32) this->unk14A < 0xF) {
        Math_ApproachS(&this->actor.world.rot.y, this->unk15A, 2, this->unk15C);
        Math_ApproachS(&this->unk15C, 0x800, 1, 0x200);
    }
    temp_v0 = this->unk172 - this->actor.shape.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0x6000) {
        func_809B41D8(this, globalCtx);
    } else if (this->unk14A == 0) {
        func_809B3E9C(this, globalCtx);
    }
    this->unk18C = 0x3000;
    this->unk18E = 2;
}

void func_809B41D8(EnKnight *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809B41F8;
    arg0->unk14A = 0xA;
}

void func_809B41F8(EnKnight *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk194);
    temp_v0 = this->unk172 - this->actor.shape.rot.y;
    if ((s32) temp_v0 >= 0x3801) {
        this->unk186 = 0x3800;
    } else if ((s32) temp_v0 < -0x3800) {
        this->unk186 = -0x3800;
    } else {
        this->unk186 = temp_v0;
    }
    if (this->unk14A == 0) {
        func_809B42B8(this, globalCtx);
    }
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    this->unk18C = 0x3000;
    this->unk18E = 2;
    this->unk192 = 1;
}

void func_809B42B8(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06004620, -5.0f);
    arg0->actionFunc = func_809B4308;
    arg0->actor.speedXZ = 0.0f;
}

void func_809B4308(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp5C;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp38;
    s16 sp34;
    Actor *sp30;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    f32 temp_f2;
    s16 temp_v0;
    f32 phi_f0;
    s32 phi_v1;

    temp_a0 = &this->unk194;
    sp28 = temp_a0;
    sp30 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (((this->unk146 & 0x3F) == 0) && (Rand_ZeroOne() < 0.5f)) {
        if (Rand_ZeroOne() < 0.6666f) {
            Audio_PlayActorSound2((Actor *) this, this->unk6B6);
        } else {
            Audio_PlayActorSound2((Actor *) this, this->unk6B8);
        }
    }
    if ((this != D_809BEFD0) && (this->actor.xzDistToPlayer > 150.0f)) {
        Matrix_RotateY(sp30->world.rot.y, 0U);
        if (this == D_809BEFD4) {
            sp44 = 100.0f;
        } else {
            sp44 = -100.0f;
        }
        sp48 = 0.0f;
        sp4C = 100.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, (Vec3f *) &sp38);
        this->unk440 = sp30->world.pos.x + sp38;
        this->unk448 = sp30->world.pos.z + sp40;
        sp34 = Math_FAtan2F(this->unk448 - this->actor.world.pos.z, this->unk440 - this->actor.world.pos.x);
    } else {
        sp34 = this->unk172;
    }
    Math_ApproachS(&this->actor.world.rot.y, sp34, 5, 0xA00);
    Math_ApproachS(&this->actor.shape.rot.y, this->unk172, 5, 0x500);
    sp5C = this->actor.speedXZ;
    if (this == D_809BEFD0) {
        phi_f0 = 1.3076924f;
    } else {
        phi_f0 = 1.0f;
    }
    temp_f2 = this->actor.xzDistToPlayer;
    if (temp_f2 <= (150.0f * phi_f0)) {
        if (temp_f2 <= (80.0f * phi_f0)) {
            if (temp_f2 <= (40.0f * phi_f0)) {
                Math_ApproachF(&this->actor.speedXZ, -2.5f, 1.0f, 1.0f);
            } else {
                Math_ApproachF(&this->actor.speedXZ, 0.0f, 1.0f, 1.0f);
            }
        } else {
            Math_ApproachF(&this->actor.speedXZ, 2.5f, 1.0f, 1.0f);
        }
    } else {
        Math_ApproachF(&this->actor.speedXZ, 5.0f, 1.0f, 1.0f);
        if ((func_801378B8(sp28, 0.0f) != 0) || (func_801378B8(sp28, 5.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) this, this->unk6B4);
        }
        func_809B22CC((Actor *) this, globalCtx, 3);
    }
    if ((this->actor.speedXZ > 3.0f) && (sp5C <= 3.0f)) {
        SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_06003650, -3.0f);
        if (Rand_ZeroOne() < 0.25f) {
            func_809B3A7C((Actor *) this, globalCtx);
        }
    }
    if (func_809B4308 == this->actionFunc) {
        if ((this->actor.speedXZ < 4.0f) && (sp5C >= 4.0f)) {
            SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_06004620, -5.0f);
            if (Rand_ZeroOne() < 0.25f) {
                func_809B3A7C((Actor *) this, globalCtx);
            }
        }
        if ((this->actor.speedXZ < 1.0f) && (sp5C >= 1.0f)) {
            SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_060040E0, -10.0f);
        }
        if ((this->actor.speedXZ >= 1.0f) && (sp5C < 1.0f)) {
            SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_06004620, -5.0f);
        }
    }
    temp_v0 = sp34 - this->actor.shape.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0x6000) {
        if ((s32) temp_v0 >= 0x3801) {
            this->unk186 = 0x3800;
        } else if ((s32) temp_v0 < -0x3800) {
            this->unk186 = -0x3800;
        } else {
            this->unk186 = temp_v0;
        }
        if (func_809B2F54(this, globalCtx) != 0) {
            return;
        }
        goto block_51;
    }
    func_809B3E9C(this, globalCtx);
block_51:
    this->unk192 = 1;
}

void func_809B47EC(void *arg0, f32 arg1, u8 arg2) {
    void (*sp1C)(Actor *, GlobalContext *);
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    if (func_809B4880 != arg0->unk420) {
        sp1C = func_809B4880;
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06003650, -5.0f);
        arg0->unk148 = 0;
        arg0->unk420 = func_809B4880;
    }
    arg0 = arg0;
    arg0->unk14A = (s16) (s32) (Rand_ZeroFloat(15.0f) + 10.0f);
    arg0->unk292 = arg2;
}

void func_809B4880(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    Actor *temp_v0;
    Actor *temp_v0_2;
    SkelAnime *temp_a0;
    u8 temp_v1;

    temp_a0 = arg0 + 0x194;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = arg0->unk148;
    arg0->unk186 = 0;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {

                } else {
                    if (func_801378B8(sp24, arg0->unk1D8) != 0) {
                        arg0->unk148 = 2U;
                        SkelAnime_ChangeAnimTransitionStop(sp24, &D_060031F0, -2.0f);
                        arg0->unk1D8 = 1000.0f;
                    }
                    goto block_24;
                }
            } else {
                if (arg0->unk291 == 0) {
                    arg0->unk148 = 1U;
                    SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_060040E0, -5.0f);
                }
                if ((s32) arg0->unk291 >= 8) {
                    Math_ApproachF(arg0 + 0x474, 1.0f, 1.0f, 0.5f);
                }
                goto block_24;
            }
        } else {
            if (arg0->unk291 != 0) {
                arg0->unk148 = 2U;
                SkelAnime_ChangeAnimTransitionStop(sp24, &D_060031F0, -2.0f);
                Audio_PlayActorSound2(arg0, arg0->unk6B6);
            }
block_24:
            arg0->unk5A8 = 0xA;
            Math_ApproachZeroF(&arg0->speedXZ, 1.0f, 1.0f);
            if (arg0->unk1D8 > 10.0f) {
                Math_ApproachS(&arg0->world.rot.y, arg0->unk172, 2, 0xE00);
            }
            temp_v0 = D_809BEFE4;
            if ((temp_v0 != 0) && (temp_v0->unk214 > 0.1f)) {
                arg0->unk14A = (s16) (s32) (Rand_ZeroFloat(15.0f) + 10.0f);
            }
            arg0->unk192 = 1;
        }
    } else {
        Math_ApproachF(arg0 + 0x70, 5.0f, 1.0f, 1.0f);
        Math_ApproachS(&arg0->world.rot.y, Math_FAtan2F(arg0->unk448 - arg0->world.pos.z, arg0->unk440 - arg0->world.pos.x), 5, 0xA00);
        if ((func_801378B8(sp24, 0.0f) != 0) || (func_801378B8(sp24, 5.0f) != 0)) {
            Audio_PlayActorSound2(arg0, arg0->unk6B4);
        }
        func_809B22CC(arg0, arg1, 3);
        if ((arg0->unk292 != 0) && (((temp_v0_2 = D_809BEFE4, (temp_v0_2 != 0)) && (temp_v0_2->unk214 < 0.1f)) || (((f32) gGameInfo->data[2470] + 300.0f) < arg0->xzDistToPlayer) || (arg0->unk291 != 0))) {
            if (arg0->unk291 != 0) {
                arg0->unk148 = 3U;
                arg0->unk2A1 = 0x1E;
                SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_0600E45C, -2.0f);
                arg0->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600E45C);
                Audio_PlayActorSound2(arg0, 0x3A4BU);
            } else {
                arg0->unk148 = 1U;
                SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_060040E0, -5.0f);
                arg0->unk1D8 = 1000.0f;
            }
        }
    }
    if (arg0->unk14A == 0) {
        func_809B4024((EnKnight *) arg0, arg1, 0x7000);
    }
}

void func_809B4BFC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_0600CDE0, -25.0f);
    Audio_PlayActorSound2(arg0, arg0->unk6B6);
    arg0->unk420 = func_809B4C58;
    arg0->unk14A = 0x23;
}

void func_809B4C58(EnKnight *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    GameInfo *temp_v1;
    Vec3s *temp_t0;
    s32 temp_v1_2;
    void *temp_t0_2;
    void *temp_t2;
    void *temp_t3;
    void *temp_t4;
    void *temp_t5;
    void *temp_t6;
    void *temp_t7;
    void *temp_t8;
    void *temp_t9;
    s32 phi_v0;
    s32 phi_v1;

    SkelAnime_FrameUpdateMatrix(&this->unk194);
    this->unk186 = 0;
    Math_ApproachF(&this->unk180, 180.0f, 1.0f, 10.0f);
    if (this->unk14A == 0) {
        func_809B3E9C(this, globalCtx);
    }
    temp_v1 = gGameInfo;
    if (((s32) (s16) (temp_v1->data[2474] + 0xA) < (s32) this->unk14A) && (((temp_v1->data[2476] + 3) & this->unk146) == 0)) {
        phi_v0 = 0xC8;
        if (this == D_809BEFD0) {
            phi_v0 = 0xC9;
        }
        temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x115, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (s32) this->actor.world.rot.y, (s16) (s32) this->actor.world.rot.z, phi_v0);
        if (temp_v0 != 0) {
            temp_t0 = this->unk194.limbDrawTbl;
            temp_t9 = temp_v0->unk1B4;
            temp_t9->unk0 = (unaligned s32) temp_t0->unk0;
            temp_t9->unk4 = (u16) temp_t0->z;
            temp_v0->unk198 = (void **) this->unk194.skeleton;
            temp_v0->unk196 = (u8) this->unk194.dListCount;
            phi_v1 = 6;
            do {
                temp_t8 = this->unk194.limbDrawTbl + phi_v1;
                temp_t6 = temp_v0->unk1B4 + phi_v1;
                temp_t6->unk0 = (unaligned s32) temp_t8->unk0;
                temp_t6->unk4 = (u16) temp_t8->unk4;
                temp_v0->unk198 = (void **) this->unk194.skeleton;
                temp_t4 = temp_v0->unk1B4 + phi_v1;
                temp_v0->unk196 = (u8) this->unk194.dListCount;
                temp_t7 = this->unk194.limbDrawTbl + phi_v1;
                temp_t4->unk6 = (unaligned s32) temp_t7->unk6;
                temp_t4->unkA = (u16) temp_t7->unkA;
                temp_v0->unk198 = (void **) this->unk194.skeleton;
                temp_t2 = temp_v0->unk1B4 + phi_v1;
                temp_v0->unk196 = (u8) this->unk194.dListCount;
                temp_t5 = this->unk194.limbDrawTbl + phi_v1;
                temp_t2->unkC = (unaligned s32) temp_t5->unkC;
                temp_t2->unk10 = (u16) temp_t5->unk10;
                temp_v0->unk198 = (void **) this->unk194.skeleton;
                temp_t0_2 = temp_v0->unk1B4 + phi_v1;
                temp_v0->unk196 = (u8) this->unk194.dListCount;
                temp_t3 = this->unk194.limbDrawTbl + phi_v1;
                temp_v1_2 = phi_v1 + 0x18;
                temp_t0_2->unk12 = (unaligned s32) temp_t3->unk12;
                temp_t0_2->unk16 = (u16) temp_t3->unk16;
                temp_v0->unk198 = (void **) this->unk194.skeleton;
                temp_v0->unk196 = (u8) this->unk194.dListCount;
                phi_v1 = temp_v1_2;
            } while (temp_v1_2 != 0xAE);
        }
    }
}

void func_809B4E84(Actor *arg0, GlobalContext *arg1, u16 arg2) {
    arg0->unk420 = func_809B4ED8;
    arg0->unk14C = 0x1E;
    arg0->unk14A = arg2;
    func_800BCB70(arg0, 0, 0x78, 0, (s16) (s32) arg2);
}

void func_809B4ED8(EnKnight *this, GlobalContext *globalCtx) {
    f32 *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->unk14C;
    if (((s32) temp_v0 > 0) && ((s32) temp_v0 < 0x17)) {
        if (temp_v0 == 1) {
            D_809BEFE0 = NULL;
        } else {
            D_809BEFE0 = this;
        }
    }
    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_ApproachZeroF(temp_a0, 1.0f, 1.0f);
    temp_v0_2 = this->unk14A;
    if ((s32) temp_v0_2 < 0x14) {
        if ((temp_v0_2 & 1) != 0) {
            this->unk184 = 0x708;
        } else {
            this->unk184 = -0x708;
        }
    } else {
        this->unk186 = 0;
    }
    if (this->unk14A == 0) {
        func_809B3E9C(this, globalCtx);
    }
}

void func_809B4F90(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk172 - arg0->shape.rot.y;
    arg0->unk420 = func_809B5058;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    } else {
        phi_v1 = (s32) temp_v0;
    }
    if (phi_v1 < 0x4000) {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06004974, 0.0f);
        arg0->unk148 = 0;
    } else {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06000D9C, 0.0f);
        arg0->unk148 = 1;
    }
    Matrix_RotateY(arg0->unk172, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-15.0f, (Vec3f *) &sp2C);
    arg0->unk2A4 = sp2C;
    arg0->unk14A = 0xA;
    arg0->unk2A8 = sp34;
}

void func_809B5058(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp24;

    globalCtx = globalCtx;
    sp24 = Rand_ZeroOne();
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    if (this->unk14A == 0) {
        if ((this == D_809BEFD0) && (this->actor.xzDistToPlayer < 150.0f)) {
            if (sp24 < 0.25f) {
                func_809B35BC(this, globalCtx);
            } else if (sp24 < 0.5f) {
                func_809B329C(this, globalCtx, 0, globalCtx);
            } else if (sp24 < 0.75f) {
                func_809B59FC(this, globalCtx);
            } else {
                func_809B3CD0(this, globalCtx);
            }
        } else if (this->unk148 == 0) {
            func_809B3E9C(this, globalCtx);
        } else {
            func_809B4024(this, globalCtx, 0x6000, globalCtx);
        }
    }
    if ((this == D_809BEFD0) && ((s32) this->unk14A < 4)) {
        this->unk192 = 1;
    }
}

void func_809B51DC(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk172 - arg0->shape.rot.y;
    arg0->unk420 = func_809B52E8;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    } else {
        phi_v1 = (s32) temp_v0;
    }
    if (phi_v1 < 0x4000) {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06001CDC, 0.0f);
        arg0->unk1D8 = 1.0f;
    } else {
        SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06005D30, 0.0f);
        arg0->unk1D8 = -1.0f;
    }
    Matrix_RotateY(arg0->unk172, 0U);
    SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[1277] + -15.0f, (Vec3f *) &sp2C);
    arg0->unk2A4 = sp2C;
    arg0->unk14A = 0x23;
    arg0->unk14C = 0x96;
    arg0->colChkInfo.damageTable = &D_809BDB24;
    arg0->unk2A8 = sp34;
}

void func_809B52E8(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    ? sp3C;
    ColliderJntSphElement *temp_v0_2;
    ColliderJntSphElement *temp_v0_3;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_v0;
    f32 phi_f0;
    s16 phi_v0;

    if ((s32) this->unk14A < (s32) (s16) (gGameInfo->data[1254] + 0x19)) {
        Matrix_RotateY(this->actor.shape.rot.y, 0U);
        if (this == D_809BEFD0) {
            phi_f0 = -75.0f;
        } else {
            phi_f0 = -65.0f;
        }
        SysMatrix_GetStateTranslationAndScaledZ(((f32) gGameInfo->data[1257] + 1.0f) * (phi_f0 * this->unk1D8), (Vec3f *) &sp40);
        temp_a2 = &sp40;
        sp40 += this->actor.world.pos.x;
        sp44 += this->actor.world.pos.y + 300.0f;
        sp48 += this->actor.world.pos.z;
        temp_f0 = func_800C3FA0(&globalCtx->colCtx, &sp3C, temp_a2);
        if ((temp_f0 > -10.0f) && (temp_f0 != this->actor.floorHeight)) {
            temp_f2 = sp40 - this->actor.world.pos.x;
            temp_f16 = sp48 - this->actor.world.pos.z;
            Math_ApproachS((s16 *) &this->actor.shape, (s16) (Math_Atan2S(temp_f0 - this->actor.world.pos.y, sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16))) * (s32) this->unk1D8), 1, 0x800);
        } else {
            Math_ApproachS((s16 *) &this->actor.shape, 0, 1, 0x800);
        }
    }
    temp_v0 = this->unk14C;
    if (((s32) temp_v0 >= 0x78) && ((s32) temp_v0 < 0x8C)) {
        if (temp_v0 == 0x78) {
            D_809BEFE0 = NULL;
        } else {
            D_809BEFE0 = this;
        }
    }
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    Math_ApproachZeroF(&this->unk180, 1.0f, 10.0f);
    if (this->unk1D8 > 0.0f) {
        phi_v0 = 0x14;
    } else {
        phi_v0 = (s16) (gGameInfo->data[1256] + 8);
    }
    if (phi_v0 == this->unk14A) {
        Audio_PlayActorSound2((Actor *) this, 0x387AU);
        this->actor.flags &= -2;
        if (this->unk2A0 == 0xA) {
            this->unk2A2 = 0;
        }
    }
    if ((this->unk14C == 0) && (func_809B7950 != D_809BEFD0->actionFunc)) {
        this->actor.flags |= 1;
        func_809B4BFC((Actor *) this, globalCtx);
        if (this == D_809BEFD0) {
            this->actor.colChkInfo.health = 0xE - gGameInfo->data[2441];
        } else {
            this->actor.colChkInfo.health = 6 - gGameInfo->data[2440];
        }
        temp_v0_2 = this->unk594.elements;
        temp_v0_2->info.bumperFlags &= 0xFFFD;
        temp_v0_3 = this->unk594.elements;
        temp_v0_3->unk56 = (u8) (temp_v0_3->unk56 & 0xFFFD);
        this->actor.colChkInfo.damageTable = &D_809BDB04;
        this->unk156 = 0x19;
    }
}

void func_809B5634(EnKnight *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809B5698;
    arg0->unk14E = 0x32;
    arg0->unk2A1 = 0x14;
    if (arg0 == D_809BEFD0) {
        arg0 = arg0;
        func_801A2ED8();
    }
    func_8019F1C0(arg0 + 0x6C8, arg0->unk6C2);
}

void func_809B5698(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp48;
    ? sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    void *sp2C;
    s16 temp_v0;
    void *temp_v0_2;

    temp_v0 = this->unk14E;
    if (((s32) temp_v0 >= 0xA) && ((s32) temp_v0 < 0x28)) {
        if (temp_v0 == 0xA) {
            D_809BEFE0 = NULL;
        } else {
            D_809BEFE0 = this;
        }
    }
    if (this->unk14E == 0) {
        this->unk152 = 0;
        this->actor.draw = NULL;
        this->actor.world.pos.y = 1000.0f;
        this->actor.world.pos.x = 1300.0f;
        this->actor.world.pos.z = 2864.0f;
        this->actor.gravity = 0.0f;
    }
    Math_ApproachZeroF(&this->actor.scale.y, 0.1f, 0.0015f);
    if (this->unk14E != 0) {
        sp36 = (s16) (s32) Rand_ZeroFloat(14.9f);
        sp44.unk0 = (s32) D_809BDAF0.unk0;
        sp44.unk4 = (s32) D_809BDAF0.unk4;
        sp44.unk8 = (s32) D_809BDAF0.unk8;
        sp48 = 0.03f;
        temp_v0_2 = this + (sp36 * 0xC);
        sp38 = randPlusMinusPoint5Scaled(20.0f) + temp_v0_2->unk1DC;
        sp2C = temp_v0_2;
        sp3C = temp_v0_2->unk1E0 - 5.0f;
        sp40 = randPlusMinusPoint5Scaled(20.0f) + temp_v0_2->unk1E4;
        EffectSsKFire_Spawn(globalCtx, &sp38, &D_809BDAF0, &sp44, (s32) (Rand_ZeroFloat(20.0f) + 20.0f), 0);
        Audio_PlayActorSound2((Actor *) this, 0x321FU);
    }
    if (this->unk14E == 0) {
        this->actor.flags &= -2;
        if (this == D_809BEFD0) {
            if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
                ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
                this->actionFunc = func_809B58D4;
            } else {
                ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            }
        } else {
            this->actionFunc = func_809B58D4;
        }
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 5U);
        this->unk14A = 0x1E;
    }
}

void func_809B58D4(EnKnight *this, GlobalContext *globalCtx) {
    if ((this == D_809BEFD0) && (this->unk14A == 0)) {
        Actor_MarkForDeath((Actor *) this);
        Actor_MarkForDeath(D_809BEFD4);
        Actor_MarkForDeath(D_809BEFD8);
    }
}

void func_809B592C(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    s32 temp_s0;
    s32 phi_s0;

    arg0->unk420 = func_809B5B08;
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06002174, 0.0f);
    Matrix_RotateY(arg0->unk172, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-15.0f, (Vec3f *) &sp28);
    arg0->unk2A4 = sp28;
    arg0->velocity.y = 7.5f;
    arg0->unk2A8 = sp30;
    phi_s0 = 0;
    do {
        func_809B22CC(arg0, arg1, 0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 5);
    Audio_PlayActorSound2(arg0, 0x386CU);
    arg0->unk148 = 0;
    arg0->unk156 = 0xA;
}

void func_809B59FC(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    s32 temp_s0;
    s32 phi_s0;

    arg0->unk420 = func_809B5B08;
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x194, &D_06002174, 0.0f);
    Matrix_RotateY(arg0->unk172, 0U);
    SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[1338] + 14.0f, (Vec3f *) &sp28);
    arg0->unk2A4 = sp28;
    arg0->unk2A8 = sp30;
    arg0->velocity.y = (f32) gGameInfo->data[1339] + 13.0f;
    phi_s0 = 0;
    do {
        func_809B22CC(arg0, arg1, 0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 5);
    Audio_PlayActorSound2(arg0, 0x3813U);
    arg0->unk148 = 1;
    arg0->unk156 = 0x14;
}

void func_809B5B08(EnKnight *this, GlobalContext *globalCtx) {
    if (this->unk148 == 1) {
        Audio_PlayActorSound2((Actor *) this, 0x3014U);
    }
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    this->actor.speedXZ = 0.0f;
    if (this == D_809BEFD0) {
        Math_ApproachS(&this->actor.world.rot.y, this->unk172, 2, 0x1000);
        if (this->unk156 == 0xD) {
            if (this->unk148 == 1) {
                Audio_PlayActorSound2((Actor *) this, 0x3A33U);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x3A31U);
            }
        }
    }
    if ((this->actor.velocity.y <= 0.0f) && ((this->actor.bgCheckFlags & 1) != 0)) {
        this->unk2A8 = 0.0f;
        this->unk2A4 = 0.0f;
        Audio_PlayActorSound2((Actor *) this, 0x387BU);
        if (this->unk148 == 1) {
            if (this->unk162 != 0) {
                if (Rand_ZeroOne() < 0.5f) {
                    func_809B3A7C((Actor *) this, globalCtx);
                    return;
                }
                func_809B329C(this, globalCtx, 0);
                return;
            }
            if (Rand_ZeroOne() < 0.5f) {
                func_809B3A7C((Actor *) this, globalCtx);
                return;
            }
            func_809B6EC8(this, globalCtx);
            return;
        }
        if ((this == D_809BEFD0) && (Rand_ZeroOne() < 0.3f)) {
            if ((Rand_ZeroOne() < 0.5f) || (this->unk162 != 0)) {
                func_809B3A7C((Actor *) this, globalCtx);
                return;
            }
            func_809B6EC8(this, globalCtx);
            return;
        }
        func_809B3E9C(this, globalCtx);
        /* Duplicate return node #24. Try simplifying control flow for better match */
    }
}

void func_809B5D38(EnKnight *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809B5D54;
    arg0->unk148 = 0;
}

void func_809B5D54(EnKnight *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v0;

    this->unk680 = 1;
    if (this->unk148 != 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk194);
    }
    if (this->unk148 != 0) {
        if (this->unk148 != 1) {
            if (this->unk148 != 2) {

            } else {
                goto block_10;
            }
        } else {
            temp_a0 = &this->unk194;
            if (this->unk290 == 0) {
                SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_060009E0, 0.0f);
            } else {
                SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_060005A8, 0.0f);
            }
            Audio_PlayActorSound2((Actor *) this, 0x3A2AU);
            this->unk290 = 1 - this->unk290;
            this->unk148 = 2;
            this->unk14A = 2;
block_10:
            if (this->unk14A == 1) {
                if (this->unk290 == 0) {
                    Audio_PlayActorSound2((Actor *) this, 0x3A2EU);
                } else {
                    Audio_PlayActorSound2((Actor *) this, 0x3A2FU);
                }
            }
            if (this->unk151 == 0) {
                func_809B6528(this, globalCtx);
                this->unk194.animCurrentFrame = 25.0f;
            }
        }
    }
    this->unk18A = 0;
    temp_v0 = this->unk18A;
    this->unk188 = temp_v0;
    this->unk186 = temp_v0;
    this->unk184 = temp_v0;
}

void func_809B5E90(EnKnight *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809B5ED0;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x194, &D_060040E0, -5.0f);
}

void func_809B5ED0(EnKnight *this, GlobalContext *globalCtx) {
    EnKnight *temp_v0;
    s16 temp_v1;

    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    temp_v0 = D_809BEFE0;
    if (temp_v0 == 0) {
        func_809B3E9C(this, globalCtx);
        return;
    }
    temp_v1 = Math_FAtan2F(temp_v0->actor.focus.pos.z - this->actor.world.pos.z, temp_v0->actor.focus.pos.x - this->actor.world.pos.x) - this->actor.shape.rot.y;
    if ((s32) temp_v1 >= 0x3801) {
        this->unk186 = 0x3800;
    } else if ((s32) temp_v1 < -0x3800) {
        this->unk186 = -0x3800;
    } else {
        this->unk186 = temp_v1;
    }
    this->unk18C = 0x3000;
    this->unk18E = 2;
}

void func_809B5FA8(EnKnight *arg0, GlobalContext *arg1) {
    EnKnight *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809B601C;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x194, &D_060040E0, -5.0f);
    arg0->unk148 = 0;
    arg0->unk14A = (s16) (s32) (Rand_ZeroFloat(10.0f) + 65.0f);
}

void func_809B601C(EnKnight *this, GlobalContext *globalCtx) {
    Actor *sp30;
    Actor *sp2C;
    SkelAnime *sp24;
    Actor *temp_v1;
    SkelAnime *temp_a0;
    s16 temp_v0_2;
    s16 temp_v1_2;
    u8 temp_v0;
    Actor *phi_t0;

    temp_a0 = &this->unk194;
    sp24 = temp_a0;
    sp2C = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = D_809BEFD4;
    phi_t0 = temp_v1;
    if (this == temp_v1) {
        phi_t0 = D_809BEFD8;
    }
    temp_v0 = this->unk148;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                if (this->unk14A == 0) {
                    func_809B3E9C(this, globalCtx, 2, 0x500);
                }
                goto block_29;
            }
        } else {
            this->actor.speedXZ = (f32) gGameInfo->data[1286] + 1.0f;
            if (this == D_809BEFD4) {
                this->actor.world.rot.y = (gGameInfo->data[1287] << 8) + this->actor.world.rot.y + 0x100;
            } else {
                this->actor.world.rot.y = (this->actor.world.rot.y - (gGameInfo->data[1287] << 8)) - 0x100;
            }
            if ((this->unk14A == 0) || ((sp2C->unkA74 * 4) >= 0)) {
                this->unk148 = 2;
                this->unk14A = 0xA;
            }
block_29:
            if ((func_801378B8(sp24, (f32) gGameInfo->data[1301] + 1.0f) != 0) || (func_801378B8(sp24, (f32) gGameInfo->data[1302] + 11.0f) != 0)) {
                Audio_PlayActorSound2((Actor *) this, this->unk6B4);
            }
        }
    } else {
        sp30 = phi_t0;
        Math_ApproachS(&this->actor.world.rot.y, this->unk172, 2, 0x500);
        Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
        temp_v0_2 = this->unk14A;
        if (((s32) temp_v0_2 < 0x28) && ((s32) temp_v0_2 >= 0x10)) {
            temp_v1_2 = Math_FAtan2F(phi_t0->focus.pos.z - this->actor.world.pos.z, phi_t0->focus.pos.x - this->actor.world.pos.x) - this->actor.shape.rot.y;
            if ((s32) temp_v1_2 >= 0x3801) {
                this->unk186 = 0x3800;
            } else if ((s32) temp_v1_2 < -0x3800) {
                this->unk186 = -0x3800;
            } else {
                this->unk186 = temp_v1_2;
            }
            this->unk18C = 0x3000;
            this->unk18E = 2;
        } else {
            this->unk186 = 0;
        }
        if ((this->unk14A == 0) && (func_801A46F8() == 1)) {
            SkelAnime_ChangeAnimTransitionRepeat(sp24, &D_0600DDCC, -3.0f);
            this->unk148 = 1;
            this->unk14A = 0xC8;
        }
        if ((sp2C->unkA74 * 4) >= 0) {
            this->unk148 = 2;
            this->unk14A = 0xA;
        }
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 5, 0x500);
}

void func_809B631C(EnKnight *arg0, GlobalContext *arg1) {
    EnKnight *temp_a3;
    EnKnight *phi_a3;

    temp_a3 = arg0;
    phi_a3 = temp_a3;
    if (temp_a3 == D_809BEFD0) {
        temp_a3->actionFunc = func_809B8458;
        arg0 = temp_a3;
        SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x194, &D_060040E0, -5.0f);
        phi_a3 = arg0;
    } else {
        temp_a3->actionFunc = func_809B842C;
    }
    phi_a3->actor.world.pos.y = 1000.0f;
}

void func_809B638C(Actor *arg0, GlobalContext *arg1, s16 arg2) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    ?32 sp3C;
    ?32 sp38;
    ?32 sp34;
    f32 *temp_a1;
    s16 phi_a1;

    Math_Vec3f_Copy((Vec3f *) &sp4C, arg0 + 0x434);
    Matrix_RotateY((s16) (arg0->unk184 + arg0->shape.rot.y), 0U);
    SysMatrix_InsertXRotation_s((s16) (arg0->shape.rot.x + arg2), 1);
    SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[2448] + 20.0f, (Vec3f *) &sp40);
    phi_a1 = 0xC8;
    if ((s32) arg0->unk14A < 0x28) {
        phi_a1 = 0;
    }
    Math_ApproachS(arg0 + 0x160, phi_a1, 1, 5);
    if ((s32) arg0->unk160 >= 0x3D) {
        func_800B9010(arg0, 0x31A4U);
    }
    sp3C = 0;
    sp38 = 0;
    sp34 = 0;
    func_809B20F0(arg1, &sp4C, &sp40, &sp34, 2.0f, 25.0f, (s16) (s32) arg0->unk160);
    temp_a1 = &sp4C;
    sp4C -= sp40 * 0.5f;
    sp50 -= sp44 * 0.5f;
    sp54 -= sp48 * 0.5f;
    func_809B20F0(arg1, temp_a1, &sp40, &sp34, 2.0f, 25.0f, (s16) (s32) arg0->unk160);
}

void func_809B6528(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_0600A530, -5.0f);
    arg0->actionFunc = func_809B6764;
    arg0->unk148 = 0;
}

void func_809B6574(GlobalContext *arg0, s32 arg1) {
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
    s32 temp_a1;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    temp_a1 = arg1 & 0xFF;
    temp_s0 = arg0->actorCtx.actorList[2].first;
    phi_s1 = 0;
    if (temp_a1 > 0) {
        temp_s6 = &sp98;
        temp_s5 = &spA4;
        temp_s4 = &spB0;
        do {
            spA4 = randPlusMinusPoint5Scaled(3.0f);
            spA8 = Rand_ZeroFloat(2.0f) + 1.0f;
            spAC = randPlusMinusPoint5Scaled(3.0f);
            spA0 = 0.0f;
            sp98 = 0.0f;
            sp9C = -0.1f;
            spB0 = randPlusMinusPoint5Scaled(30.0f) + temp_s0->world.pos.x;
            spB4 = randPlusMinusPoint5Scaled(30.0f) + (temp_s0->world.pos.y + 20.0f);
            spB8 = randPlusMinusPoint5Scaled(30.0f) + temp_s0->world.pos.z;
            temp_f20 = Rand_ZeroFloat(50.0f);
            func_800B0EB0(arg0, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &D_809BDCF0, &D_809BDCF4, (s16) (s32) (temp_f20 + 100.0f), (s16) 0xA, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
            temp_s1 = (phi_s1 + 1) & 0xFF;
            phi_s1 = temp_s1;
        } while (temp_s1 < temp_a1);
    }
}

void func_809B6764(EnKnight *this, GlobalContext *globalCtx) {
    s16 sp54;
    Actor *sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    ? sp38;
    SkelAnime *sp30;
    ColliderJntSph *temp_a2;
    GameInfo *temp_v0_2;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    u8 temp_v1_2;

    sp54 = 0;
    temp_a0 = &this->unk194;
    sp30 = temp_a0;
    sp50 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk172 - this->actor.shape.rot.y;
    if ((s32) temp_v1 >= 0x3801) {
        this->unk186 = 0x3800;
    } else if ((s32) temp_v1 < -0x3800) {
        this->unk186 = -0x3800;
    } else {
        this->unk186 = temp_v1;
    }
    temp_v1_2 = this->unk148;
    switch (temp_v1_2) {
    case 0:
        if (this->actor.xzDistToPlayer < 35.0f) {
            if (sp50->world.pos.z < this->actor.world.pos.z) {
                this->unk148 = 1;
            } else {
                this->unk148 = 5;
            }
            this->unk14A = 8;
            Audio_PlayActorSound2((Actor *) this, this->unk6BC);
        }
        if ((sp50->unkD57 == 4) && (func_809B31E8(this, globalCtx) != 0)) {
            this->unk148 = 0xA;
            SkelAnime_ChangeAnimTransitionStop(sp30, &D_06008524, 0.0f);
            this->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06008524);
        }
block_37:
        break;
    case 1:
        if (this->unk14A == 0) {
            this->unk148 = temp_v1_2 + 1;
            this->unk14A = 0x14;
        case 2:
            Math_ApproachS(&this->unk17A, 0, 1, 0xBB8);
            Math_ApproachS(&this->unk176, 0, 1, 0xBB8);
            if (this->unk14A == 0) {
                this->unk148 = 0;
            }
        } else {
            Math_ApproachS(&this->unk17A, 0x3C00, 1, 0x1770);
            Math_ApproachS(&this->unk176, 0x1400, 1, 0x1770);
            if (this->unk14A == 7) {
                sp54 = -0x2000;
            }
        }
        goto block_37;
    case 5:
        if (this->unk14A == 0) {
            this->unk148 = temp_v1_2 + 1;
            this->unk14A = 0x14;
        case 6:
            Math_ApproachS(&this->unk178, 0, 1, 0xBB8);
            Math_ApproachS(&this->unk174, 0, 1, 0xBB8);
            if (this->unk14A == 0) {
                this->unk148 = 0;
            }
        } else {
            Math_ApproachS(&this->unk178, 0x3C00, 1, 0x1770);
            Math_ApproachS(&this->unk174, 0x1400, 1, 0x1770);
            if (this->unk14A == 7) {
                sp54 = 0x2000;
            }
        }
        goto block_37;
    case 10:
        if (func_801378B8(sp30, this->unk1D8) != 0) {
            this->unk148 = 0xB;
            SkelAnime_ChangeAnimTransitionStop(sp30, &D_060089E4, 0.0f);
            this->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060089E4);
        }
        goto block_37;
    case 11:
        if (func_801378B8(sp30, this->unk1D8) != 0) {
            SkelAnime_ChangeAnimTransitionStop(sp30, &D_0600A530, -15.0f);
            this->unk148 = 0;
        }
        goto block_37;
    }
    if ((s32) this->unk148 >= 0xA) {
        temp_a2 = &this->unk534;
        sp44 = this->actor.world.pos.x + 40.0f;
        sp48 = this->actor.world.pos.y + 70.0f;
        sp30 = (SkelAnime *) temp_a2;
        sp4C = this->actor.world.pos.z;
        func_809B21F4(this, 0, temp_a2, &sp44);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
    if ((D_809BEFD4->draw == 0) && (D_809BEFD8->draw == 0)) {
        func_809B7190(this, globalCtx);
        this->unk174 = 0;
        temp_v0 = this->unk174;
        this->unk176 = temp_v0;
        this->unk178 = temp_v0;
        this->unk17A = temp_v0;
    }
    if (sp54 != 0) {
        Math_Vec3f_Copy((Vec3f *) &sp38, (Vec3f *) &sp50->world);
        sp3C += 25.0f;
        EffectSsHitMark_SpawnFixedScale(globalCtx, 0, (Vec3f *) &sp38);
        temp_v0_2 = gGameInfo;
        func_800B8D50(globalCtx, NULL, (f32) temp_v0_2->data[1301] + 12.0f, (s16) (this->actor.shape.rot.y + sp54), (f32) temp_v0_2->data[1302] + 7.0f, 0x10U);
        func_809B6574(globalCtx, 0xC);
        Audio_PlayActorSound2((Actor *) this, 0x2838U);
    }
}

void func_809B6C04(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06003008, -5.0f);
    arg0->actionFunc = func_809B6C54;
    arg0->unk14A = 0x32;
}

void func_809B6C54(EnKnight *this, GlobalContext *globalCtx) {
    SkelAnime *sp3C;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk194;
    sp3C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 19.0f) != 0) {
        this->unk162 = 1;
        D_809BEFDC = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x115, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, (s16) 0x64);
        Audio_PlayActorSound2((Actor *) this, 0x3A21U);
    }
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    if (this->unk14A == 0) {
        func_809B3E9C(this, globalCtx);
        Audio_PlayActorSound2((Actor *) this, 0x3A33U);
    }
}

void func_809B6D38(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_060079D4, -10.0f);
    arg0->actionFunc = func_809B6D94;
    arg0->unk148 = 0;
    arg0->unk14A = 0x3C;
    arg0->unk194.animPlaybackSpeed = 0.0f;
}

void func_809B6D94(EnKnight *this, GlobalContext *globalCtx) {
    Actor *sp24;
    u8 temp_v0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    this->unk156 = 5;
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    temp_v0 = this->unk148;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            goto block_5;
        }
        this->unk148 = 2;
        this->unk14A = 0x28;
        this->unk194.animPlaybackSpeed = 1.0f;
block_5:
        if (this->unk14A == 0x22) {
            this->unk162 = 0;
            Actor_MarkForDeath(D_809BEFDC);
            D_809BEFDC = NULL;
            this->actor.flags |= 1;
            sp24->unk730 = this;
            globalCtx->actorCtx.targetContext.unk38 = (Actor *) this;
            globalCtx->actorCtx.targetContext.unk3C = (Actor *) this;
        }
        if (this->unk14A == 0xF) {
            func_809B3E9C(this, globalCtx);
            this->unk14E = (s16) (s32) (Rand_ZeroFloat(100.0f) + 150.0f);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_809B6EC8(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    f32 temp_f6;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06009538, -5.0f);
    temp_f6 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06009538);
    arg0->actionFunc = func_809B6F40;
    arg0->unk148 = 0;
    arg0->unk1D8 = temp_f6;
    arg0->unk160 = 0;
    arg0->unk14A = gGameInfo->data[1305] + 0x96;
}

void func_809B6F40(EnKnight *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    GameInfo *temp_v0_2;
    SkelAnime *temp_a0;
    s16 temp_v0;
    u8 temp_v1;
    s32 phi_v1;

    temp_a0 = &this->unk194;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
    Math_ApproachS(&this->actor.world.rot.y, this->unk172, 5, 0x500);
    temp_v0 = this->unk172 - this->actor.shape.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0x6000) {
        if ((s32) temp_v0 >= 0x3801) {
            this->unk186 = 0x3800;
        } else if ((s32) temp_v0 < -0x3800) {
            this->unk186 = -0x3800;
        } else {
            this->unk186 = temp_v0;
        }
    }
    temp_v1 = this->unk148;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {

            } else {
                func_809B638C((Actor *) this, globalCtx, 0x1600);
                if (func_801378B8(sp20, this->unk1D8) != 0) {
                    func_809B3E9C(this, globalCtx);
                    this->unk14E = (s16) (s32) (Rand_ZeroFloat(150.0f) + 150.0f);
                }
            }
        } else {
            func_809B638C((Actor *) this, globalCtx, 0x1600);
            temp_v0_2 = gGameInfo;
            if (temp_v0_2->data[1269] == 0) {
                this->unk186 = (s16) (s32) (((f32) ((gGameInfo->data[1333] << 0xB) + 0x1800) * Math_SinS((s16) ((temp_v0_2->data[1332] + 0x11DC) * this->unk146))) + (f32) this->unk186);
            }
            if (this->unk14A == 0) {
                this->unk148 = 2;
                SkelAnime_ChangeAnimTransitionStop(sp20, &D_0600E15C, -5.0f);
                this->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600E15C);
            }
        }
    } else {
        if (func_801378B8(sp20, this->unk1D8) != 0) {
            this->unk148 = 1;
            SkelAnime_ChangeAnimTransitionRepeat(sp20, &D_06008D80, 0.0f);
        }
        func_809B638C((Actor *) this, globalCtx, 0x1600);
    }
    this->unk192 = 1;
}

void func_809B7190(EnKnight *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809B71DC;
    arg0->unk684 = 0;
    arg0->unk688 = 0;
    arg0->unk6A4 = 0.0f;
    func_801A89A8(0x101400FF);
}

void func_809B71DC(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp34;
    Camera *sp30;
    CutsceneContext *sp24;
    SkelAnime *sp20;
    Camera *temp_v0_4;
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    SkelAnime *temp_a0;
    f32 *temp_a3;
    f32 *temp_a3_2;
    f32 temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v1;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_v1_2;
    GameInfo *phi_v0;
    GameInfo *phi_v0_2;
    u32 phi_v1;
    u32 phi_a0;
    GameInfo *phi_v0_3;
    u32 phi_v1_2;
    GameInfo *phi_v0_4;

    temp_a0 = &this->unk194;
    this->unk684 += 1;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk688;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {

            } else {
                goto block_10;
            }
        } else {
            goto block_6;
        }
    } else if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800EA0D4(globalCtx, &globalCtx->csCtx);
        func_800B7298(globalCtx, (Actor *) this, 7U);
        this->unk68A = func_801694DC(globalCtx);
        func_80169590(globalCtx, 0, 1);
        func_80169590(globalCtx, this->unk68A, 7);
        this->actor.flags &= -2;
        this->unk684 = 0;
        this->unk688 = 1;
        this->unk68C = 1342.0f;
        this->unk690 = 56.0f;
        this->unk694 = 2810.0f;
        this->unk698 = 1400.0f;
        this->unk69C = 57.0f;
        this->unk6A0 = 2870.0f;
        this->unk6B0 = 60.0f;
block_6:
        temp_v0 = gGameInfo;
        phi_v0 = temp_v0;
        if (this->unk684 == (temp_v0->data[1600] + 0xD)) {
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_06009D8C, (f32) temp_v0->data[1601]);
            Audio_PlayActorSound2((Actor *) this, 0x3A2AU);
            phi_v0 = gGameInfo;
        }
        if (this->unk684 == (phi_v0->data[1602] + 0x17)) {
            this->unk68C = 1253.0f;
            this->unk690 = 79.0f;
            this->unk694 = 2903.0f;
            this->unk698 = 1354.0f;
            this->unk69C = 83.0f;
            this->unk6A0 = 2865.0f;
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_06009D8C, 0.0f);
            this->unk684 = 0;
            this->unk688 = 2;
block_10:
            this->unk6A4 = ((f32) gGameInfo->data[1603] * 0.001f) + 0.05f;
            Math_ApproachF(&this->unk69C, 119.0f, 0.2f, this->unk6A4 * 36.0f);
            temp_v0_2 = gGameInfo;
            temp_v1_2 = this->unk684;
            temp_a0_2 = temp_v0_2->data[1604] + 0xA;
            phi_v0_2 = temp_v0_2;
            if (temp_v1_2 >= temp_a0_2) {
                if (temp_v1_2 == temp_a0_2) {
                    this->unk14C = 0x11;
                    Audio_PlayActorSound2((Actor *) this, 0x3A4DU);
                }
                temp_f2 = (f32) this->unk14C;
                temp_f12 = (temp_f2 * 0.0175f) + (Math_SinS((s16) (this->unk14C * 0x6000)) * temp_f2 * 0.0175f) + 1.0f;
                temp_a1 = temp_f12;
                sp34 = temp_f12;
                Math_ApproachF(&this->unk46C, temp_a1, 1.0f, 0.5f);
                Math_ApproachF(&this->unk470, temp_f12, 1.0f, 0.5f);
                phi_v0_2 = gGameInfo;
            }
            temp_a0_3 = phi_v0_2->data[1605] + 0x32;
            phi_v1 = this->unk684;
            phi_a0 = temp_a0_3;
            phi_v0_3 = phi_v0_2;
            if (this->unk684 == temp_a0_3) {
                SkelAnime_ChangeAnimTransitionStop(sp20, &D_06008390, (f32) phi_v0_2->data[1601] + -10.0f);
                Audio_PlayActorSound2((Actor *) this, 0x3A4CU);
                temp_v0_3 = gGameInfo;
                phi_v1 = this->unk684;
                phi_a0 = temp_v0_3->data[1605] + 0x32;
                phi_v0_3 = temp_v0_3;
            }
            phi_v1_2 = phi_v1;
            phi_v0_4 = phi_v0_3;
            if (phi_v1 >= phi_a0) {
                Math_ApproachF(&this->unk6B0, (f32) phi_v0_3->data[1606] + 40.0f, 0.2f, ((f32) phi_v0_3->data[1607] * 0.1f) + 3.0f);
                phi_v1_2 = this->unk684;
                phi_v0_4 = gGameInfo;
            }
            if (phi_v1_2 >= (u32) (phi_v0_4->data[1608] + 0x5A)) {
                sp24 = &globalCtx->csCtx;
                temp_v0_4 = Play_GetCamera(globalCtx, 0);
                this->unk688 = 0;
                sp30 = temp_v0_4;
                func_809B3E9C(this, globalCtx);
                this->unk14E = 0x12C;
                this->unk152 = 1;
                this->actor.flags |= 1;
                temp_a3 = &this->unk68C;
                this->actor.gravity = -1.5f;
                sp30->eye.x = temp_a3->unk0;
                sp30->eye.y = temp_a3->unk4;
                sp30->eye.z = temp_a3->unk8;
                sp30->eyeNext.x = temp_a3->unk0;
                sp30->eyeNext.y = temp_a3->unk4;
                sp30->eyeNext.z = temp_a3->unk8;
                sp30->at.x = this->unk698;
                sp30->at.y = this->unk69C;
                sp30->at.z = this->unk6A0;
                func_80169AFC(globalCtx, this->unk68A, 0);
                this->unk68A = 0;
                func_800EA0EC(globalCtx, sp24);
                func_800B7298(globalCtx, (Actor *) this, 6U);
                D_809BDB00 = 1;
            }
        }
    }
    temp_a3_2 = &this->unk68C;
    if (this->unk68A != 0) {
        sp20 = (SkelAnime *) &this->unk698;
        sp24 = (CutsceneContext *) temp_a3_2;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk68A, (Vec3f *) sp20, (Vec3f *) temp_a3_2);
        func_80169940(globalCtx, this->unk68A, this->unk6B0);
    }
}

void func_809B7708(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    void (*temp_v0)(EnKnight *, GlobalContext *);

    temp_v0 = arg0->unk420;
    if ((func_809B52E8 != temp_v0) && (func_809B5698 != temp_v0)) {
        temp_a0 = arg0 + 0x194;
        if (func_809B58D4 != temp_v0) {
            arg0 = arg0;
            SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060040E0, -5.0f);
            arg0->unk420 = func_809B7778;
        }
    }
}

void func_809B7778(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp2C;
    Actor *sp28;
    EnKnight *temp_v1;
    s16 temp_v0;
    EnKnight *phi_v1;

    sp28 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk194);
    temp_v0 = this->actor.yawTowardsPlayer;
    this->unk186 = 0;
    this->actor.shape.rot.y = temp_v0;
    this->actor.world.rot.y = temp_v0;
    this->actor.speedXZ = 0.0f;
    temp_v1 = D_809BEFD0;
    phi_v1 = temp_v1;
    if (temp_v1->unk148 == 0) {
        if (this == D_809BEFD4) {
            Matrix_RotateY((s16) (temp_v1->actor.shape.rot.y + 0x1400), 0U);
        } else {
            Matrix_RotateY((s16) (temp_v1->actor.shape.rot.y - 0x1400), 0U);
        }
        SysMatrix_GetStateTranslationAndScaledZ(((f32) gGameInfo->data[1267] + 350.0f) - 220.0f, (Vec3f *) &sp2C);
        this->actor.world.pos.x = sp28->world.pos.x + sp2C;
        this->actor.world.pos.z = sp28->world.pos.z + sp34;
        phi_v1 = D_809BEFD0;
    }
    if (func_809B7950 != phi_v1->actionFunc) {
        func_809B3E9C(this, globalCtx);
    }
}

void func_809B78A4(EnKnight *arg0, GlobalContext *arg1) {
    EnKnight *temp_a2;
    s16 temp_v0;
    void (*temp_t9)(EnKnight *, GlobalContext *);

    arg0->unk684 = 0;
    arg0->unk688 = 0;
    arg0->unk6A4 = 0.0f;
    arg0 = arg0;
    func_801A89A8(0x100A00FF);
    temp_a2 = arg0;
    if (func_809B6764 != temp_a2->actionFunc) {
        temp_v0 = temp_a2->actor.yawTowardsPlayer;
        temp_a2->unk148 = 1;
        temp_a2->actor.shape.rot.y = temp_v0;
        temp_a2->actor.world.rot.y = temp_v0;
    } else {
        temp_a2->unk148 = 0;
    }
    arg0 = temp_a2;
    func_809B7708(D_809BEFD4, arg1, temp_a2);
    func_809B7708(D_809BEFD8, arg1);
    temp_t9 = arg0->actionFunc;
    arg0->actionFunc = func_809B7950;
    arg0->unk424 = temp_t9;
}

void func_809B7950(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp44;
    Actor *sp40;
    Camera *sp3C;
    void (*sp30)(EnKnight *, GlobalContext *);
    SkelAnime *sp2C;
    Camera *temp_v0_5;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    GameInfo *temp_v0_4;
    SkelAnime *temp_a0;
    f32 *temp_a3;
    f32 *temp_a3_2;
    s16 temp_a0_2;
    s16 temp_v0;
    u16 temp_t0;
    u32 phi_v1;
    GameInfo *phi_v0;
    u32 phi_v1_2;
    GameInfo *phi_v0_2;
    u32 phi_v1_3;
    u32 phi_v1_4;
    u32 phi_v1_5;
    u32 phi_v1_6;
    GameInfo *phi_v0_3;
    u32 phi_v1_7;
    s16 phi_a0;
    u32 phi_v1_8;
    GameInfo *phi_v0_4;
    u32 phi_v1_9;
    GameInfo *phi_v0_5;
    Camera *phi_v1_10;

    temp_a0 = &this->unk194;
    sp40 = globalCtx->actorCtx.actorList[2].first;
    this->unk186 = 0;
    this->actor.speedXZ = 0.0f;
    this->unk684 += 1;
    this->unk2A4 = 0.0f;
    this->unk2A8 = 0.0f;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_t0 = (u16) this->unk688;
    switch (temp_t0) {
    case 0:
        if (ActorCutscene_GetCurrentIndex() == -1) {
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->unk68A = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk68A, 7);
            this->actor.flags &= -2;
            this->unk684 = 0;
            this->unk688 = 1;
            this->unk6B0 = 60.0f;
            if (func_809B6764 == this->unk424) {
                SkelAnime_ChangeAnimTransitionStop(sp2C, &D_0600EA90, 0.0f);
            } else {
                SkelAnime_ChangeAnimTransitionStop(sp2C, &D_0600E7F4, 0.0f);
            }
            Audio_PlayActorSound2((Actor *) this, 0x3A2AU);
        case 1:
            Matrix_RotateY((s16) (gGameInfo->data[1277] + this->actor.shape.rot.y + 0x1B58), 0U);
            SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[1264] + 90.0f, (Vec3f *) &sp44);
            this->unk68C = this->actor.world.pos.x + sp44;
            this->unk690 = (f32) gGameInfo->data[1265] + this->actor.world.pos.y + 40.0f;
            this->unk698 = this->actor.focus.pos.x;
            this->unk694 = this->actor.world.pos.z + sp4C;
            this->unk6A0 = this->actor.focus.pos.z;
            this->unk69C = ((f32) gGameInfo->data[1266] + this->actor.focus.pos.y) - 10.0f;
            Matrix_RotateY(this->actor.shape.rot.y, 0U);
            temp_v0 = this->actor.yawTowardsPlayer + 0x8000;
            sp40->shape.rot.y = temp_v0;
            sp40->world.rot.y = temp_v0;
            SysMatrix_GetStateTranslationAndScaledZ(((f32) gGameInfo->data[1267] + 350.0f) - 220.0f, (Vec3f *) &sp44);
            sp40->world.pos.x = this->actor.world.pos.x + sp44;
            sp40->world.pos.z = this->actor.world.pos.z + sp4C;
            if (this->unk684 == (gGameInfo->data[1279] + 0x19)) {
                this->unk688 = 2;
                this->unk684 = 0;
                this->unk6A4 = (f32) gGameInfo->data[1268] + 80.0f;
            }
        }
        break;
    case 2:
        Matrix_RotateY(sp40->shape.rot.y, 0U);
        SysMatrix_InsertXRotation_s((s16) (gGameInfo->data[1274] - 0x7D0), 1);
        SysMatrix_GetStateTranslationAndScaledZ(this->unk6A4, (Vec3f *) &sp44);
        if ((u32) this->unk684 >= 0x1AU) {
            Math_ApproachF(&this->unk6A4, 40.0f, 0.2f, 2.0f);
        }
        this->unk68C = sp40->world.pos.x + sp44;
        this->unk690 = (f32) gGameInfo->data[1269] + (sp40->world.pos.y + sp48) + 44.0f;
        this->unk694 = sp40->world.pos.z + sp4C;
        this->unk698 = sp40->world.pos.x;
        this->unk69C = ((f32) gGameInfo->data[1270] + sp40->world.pos.y + 44.0f) - 5.0f;
        this->unk6A0 = sp40->world.pos.z;
        if (this->unk684 == (gGameInfo->data[1296] + 0x55)) {
            this->unk688 = 3;
            this->unk684 = 0;
            this->unk1D8 = 1000.0f;
        }
        break;
    case 3:
        if (this->unk684 == 7) {
            if (func_809B6764 == this->unk424) {
                SkelAnime_ChangeAnimTransitionStop(sp2C, &D_06006EF8, 0.0f);
                this->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06006EF8);
                Audio_PlayActorSound2((Actor *) this, 0x3A9CU);
            } else {
                SkelAnime_ChangeAnimTransitionStop(sp2C, &D_06006754, 0.0f);
                this->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06006754);
            }
            func_801518B0(globalCtx, 0x153EU, NULL);
        }
        Matrix_RotateY((s16) (gGameInfo->data[1277] + this->actor.shape.rot.y + 0x1B58), 0U);
        SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[1264] + 90.0f, (Vec3f *) &sp44);
        this->unk68C = this->actor.world.pos.x + sp44;
        this->unk690 = (f32) gGameInfo->data[1265] + this->actor.world.pos.y + 40.0f;
        this->unk694 = this->actor.world.pos.z + sp4C;
        if ((u32) this->unk684 < (u32) (gGameInfo->data[1272] + 0x23)) {
            this->unk698 = this->actor.focus.pos.x;
            this->unk6A0 = this->actor.focus.pos.z;
            this->unk69C = ((f32) gGameInfo->data[1266] + this->actor.focus.pos.y) - 10.0f;
        }
        if (func_801378B8(sp2C, this->unk1D8) != 0) {
            SkelAnime_ChangeAnimTransitionRepeat(sp2C, &D_0600C7F0, 0.0f);
            this->unk1D8 = 1000.0f;
            Audio_PlayActorSound2((Actor *) this, 0x3A2BU);
        }
        if (this->unk684 == (gGameInfo->data[1273] + 0x78)) {
            this->unk688 = 4;
            this->unk684 = 0;
            SkelAnime_ChangeAnimTransitionStop(sp2C, &D_0600C7F0, 0.0f);
        }
        break;
    case 4:
        Matrix_RotateY((s16) ((gGameInfo->data[1277] << 8) + this->actor.shape.rot.y + 0x2400), 0U);
        SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[1264] + 230.0f, (Vec3f *) &sp44);
        this->unk68C = this->actor.world.pos.x + sp44;
        this->unk690 = (f32) gGameInfo->data[1265] + this->actor.world.pos.y + 40.0f;
        this->unk694 = this->actor.world.pos.z + sp4C;
        Matrix_RotateY(this->actor.shape.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ((f32) gGameInfo->data[1297] + 65.0f, (Vec3f *) &sp44);
        this->unk698 = this->actor.world.pos.x + sp44;
        this->unk69C = ((f32) gGameInfo->data[1298] + this->actor.world.pos.y + 50.0f) - 20.0f;
        this->unk6A0 = this->actor.world.pos.z + sp4C;
        if (this->unk684 == 0x3C) {
            func_801518B0(globalCtx, 0x153FU, NULL);
        }
        temp_v0_2 = gGameInfo;
        phi_v1 = this->unk684;
        phi_v0 = temp_v0_2;
        if (this->unk684 == (temp_v0_2->data[2416] + 0x78)) {
            func_801477B4(globalCtx);
            phi_v1 = this->unk684;
            phi_v0 = gGameInfo;
        }
        phi_v1_2 = phi_v1;
        phi_v0_2 = phi_v0;
        if (phi_v1 == (phi_v0->data[2417] + 0xA0)) {
            func_801518B0(globalCtx, 0x1542U, NULL);
            SkelAnime_ChangeAnimTransitionRepeat(sp2C, &D_0600A88C, 0.0f);
            phi_v1_2 = this->unk684;
            phi_v0_2 = gGameInfo;
        }
        phi_v1_3 = phi_v1_2;
        if (phi_v1_2 == (phi_v0_2->data[2418] + 0xAA)) {
            func_800B7298(globalCtx, (Actor *) this, 4U);
            phi_v1_3 = this->unk684;
        }
        phi_v1_4 = phi_v1_3;
        phi_v1_5 = phi_v1_3;
        if ((phi_v1_3 >= 0x9DU) && (phi_v1_3 < 0xDDU)) {
            if ((phi_v1_3 & 1) == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x3A26U);
                phi_v1_4 = this->unk684;
            }
            phi_v1_5 = phi_v1_4;
            if ((phi_v1_4 & 3) == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x3A29U);
                phi_v1_5 = this->unk684;
            }
        }
        temp_v0_3 = gGameInfo;
        phi_v1_6 = phi_v1_5;
        phi_v0_3 = temp_v0_3;
        if (phi_v1_5 == (temp_v0_3->data[2419] + 0xDC)) {
            SkelAnime_ChangeAnimTransitionStop(sp2C, &D_06021E34, -3.0f);
            phi_v1_6 = this->unk684;
            phi_v0_3 = gGameInfo;
        }
        temp_a0_2 = phi_v0_3->data[2420];
        phi_v1_7 = phi_v1_6;
        phi_a0 = temp_a0_2;
        phi_v0_4 = phi_v0_3;
        if (phi_v1_6 == (temp_a0_2 + 0xE6)) {
            func_801518B0(globalCtx, 0x1540U, NULL);
            temp_v0_4 = gGameInfo;
            phi_v1_7 = this->unk684;
            phi_a0 = temp_v0_4->data[2420];
            phi_v0_4 = temp_v0_4;
        }
        phi_v1_8 = phi_v1_7;
        if (phi_v1_7 == (phi_a0 + 0xF0)) {
            SkelAnime_ChangeAnimTransitionRepeat(sp2C, &D_06005E78, 0.0f);
            phi_v1_8 = this->unk684;
            phi_v0_4 = gGameInfo;
        }
        phi_v1_9 = phi_v1_8;
        phi_v0_5 = phi_v0_4;
        if (phi_v1_8 == (phi_v0_4->data[2421] + 0x140)) {
            if (func_809B6764 == this->unk424) {
                SkelAnime_ChangeAnimTransitionStop(sp2C, &D_0601024C, 0.0f);
                Audio_PlayActorSound2((Actor *) this, 0x3A29U);
            } else {
                SkelAnime_ChangeAnimTransitionStop(sp2C, &D_0602105C, 0.0f);
            }
            func_801477B4(globalCtx);
            phi_v1_9 = this->unk684;
            phi_v0_5 = gGameInfo;
        }
        if (phi_v1_9 >= (u32) (phi_v0_5->data[2422] + 0x154)) {
            sp30 = func_809B6764;
            temp_v0_5 = Play_GetCamera(globalCtx, 0);
            this->unk688 = 0;
            if (sp30 == this->unk424) {
                sp3C = temp_v0_5;
                func_809B6528(this, globalCtx);
                this->unk194.animCurrentFrame = 25.0f;
                phi_v1_10 = sp3C;
            } else {
                sp3C = temp_v0_5;
                func_809B3E9C(this, globalCtx);
                this->actor.flags |= 1;
                phi_v1_10 = temp_v0_5;
            }
            temp_a3 = &this->unk68C;
            phi_v1_10->eye.x = temp_a3->unk0;
            phi_v1_10->eye.y = temp_a3->unk4;
            phi_v1_10->eye.z = temp_a3->unk8;
            phi_v1_10->eyeNext.x = temp_a3->unk0;
            phi_v1_10->eyeNext.y = temp_a3->unk4;
            phi_v1_10->eyeNext.z = temp_a3->unk8;
            phi_v1_10->at.x = this->unk698;
            phi_v1_10->at.y = this->unk69C;
            phi_v1_10->at.z = this->unk6A0;
            func_80169AFC(globalCtx, this->unk68A, 0);
            this->unk68A = 0;
            func_800EA0EC(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 6U);
            D_809BDB00 = 5;
        }
        break;
    }
    temp_a3_2 = &this->unk68C;
    if (this->unk68A != 0) {
        sp2C = (SkelAnime *) &this->unk698;
        sp30 = (void (*)(EnKnight *, GlobalContext *)) temp_a3_2;
        ShrinkWindow_SetLetterboxTarget(0x1B);
        Play_CameraSetAtEye(globalCtx, this->unk68A, (Vec3f *) sp2C, (Vec3f *) temp_a3_2);
        func_80169940(globalCtx, this->unk68A, this->unk6B0);
    }
}

void func_809B842C(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x194);
}

void func_809B8458(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp64;
    Actor *sp60;
    Camera *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    CutsceneContext *sp38;
    SkelAnime *sp34;
    f32 *sp2C;
    f32 *sp28;
    f32 *sp24;
    f32 *sp20;
    Actor *temp_a0_2;
    Actor *temp_a0_4;
    Camera *temp_v0_3;
    Camera *temp_v0_4;
    CutsceneContext *temp_a0_6;
    GameInfo *temp_v1;
    GameInfo *temp_v1_10;
    GameInfo *temp_v1_11;
    GameInfo *temp_v1_2;
    GameInfo *temp_v1_3;
    GameInfo *temp_v1_4;
    GameInfo *temp_v1_5;
    GameInfo *temp_v1_6;
    GameInfo *temp_v1_7;
    GameInfo *temp_v1_8;
    GameInfo *temp_v1_9;
    SkelAnime *temp_a0;
    f32 *temp_a2;
    f32 *temp_t1;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v1_12;
    u16 temp_t0;
    u32 temp_a0_3;
    u32 temp_a0_5;
    u32 temp_v0_2;
    s16 phi_a1;
    u32 phi_a0;
    s16 phi_a1_2;
    u32 phi_a0_2;
    GameInfo *phi_v1;
    u32 phi_a0_3;
    GameInfo *phi_v1_2;
    u32 phi_a0_4;
    u32 phi_a0_5;
    GameInfo *phi_v1_3;
    u32 phi_a0_6;
    s16 phi_v0;
    u32 phi_a0_7;
    u32 phi_a0_8;
    u32 phi_a0_9;
    GameInfo *phi_v1_4;
    u32 phi_a0_10;
    GameInfo *phi_v1_5;
    GameInfo *phi_v1_6;
    GameInfo *phi_v1_7;
    u32 phi_a0_11;
    GameInfo *phi_v1_8;
    u32 phi_a0_12;
    u32 phi_a0_13;
    u32 phi_a0_14;
    u32 phi_a0_15;

    temp_a0 = &this->unk194;
    sp64 = 0.0f;
    sp60 = globalCtx->actorCtx.actorList[2].first;
    this->unk684 += 1;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_t0 = (u16) this->unk688;
    switch (temp_t0) {
    case 0:
        if ((Actor_GetRoomCleared(globalCtx, (u32) globalCtx->roomCtx.currRoom.num) == 0) && (ActorCutscene_GetCurrentIndex() == -1) && (sp60->world.pos.x >= 870.0f)) {
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->unk68A = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, this->unk68A, 7);
            this->actor.flags &= -2;
            this->unk684 = 0;
            this->unk688 = 1;
            this->unk6B0 = 60.0f;
            this->unk68C = 621.0f;
            this->unk690 = 54.0f;
            this->unk694 = 2865.0f;
            this->unk698 = 661.0f;
            this->unk69C = 110.0f;
            this->unk6A0 = 2939.0f;
            func_801A89A8(0x105000FF);
        case 1:
            sp60->world.pos.x = 870.0f;
            sp60->world.pos.z = 2865.0f;
            this->unk6AC = 0x4000;
            this->unk68C = (f32) gGameInfo->data[2416] + sp60->world.pos.x + 100.0f;
            this->unk690 = (f32) gGameInfo->data[2417] + sp60->world.pos.y + 20.0f;
            this->unk694 = (f32) gGameInfo->data[2418] + sp60->world.pos.z;
            this->unk698 = (f32) gGameInfo->data[2419] + sp60->world.pos.x;
            this->unk69C = (f32) gGameInfo->data[2420] + sp60->world.pos.y + 40.0f;
            this->unk6A0 = (f32) gGameInfo->data[2421] + sp60->world.pos.z;
            temp_v1 = gGameInfo;
            temp_a1 = temp_v1->data[2422];
            phi_a1 = temp_a1;
            phi_v1 = temp_v1;
            if ((u32) this->unk684 >= (u32) (temp_a1 + 0x14)) {
                sp64 = 0.5f;
                play_sound(0x2098U);
                temp_v1_2 = gGameInfo;
                phi_a1 = temp_v1_2->data[2422];
                phi_v1 = temp_v1_2;
            }
            phi_a0 = this->unk684;
            phi_a1_2 = phi_a1;
            if (this->unk684 == (phi_a1 + 0x1E)) {
                func_800B7298(globalCtx, (Actor *) this, 0x15U);
                temp_v1_3 = gGameInfo;
                phi_a0 = this->unk684;
                phi_a1_2 = temp_v1_3->data[2422];
                phi_v1 = temp_v1_3;
            }
            phi_a0_2 = phi_a0;
            if (phi_a0 == (phi_a1_2 + 0x32)) {
                func_801518B0(globalCtx, 0x1518U, NULL);
                phi_a0_2 = this->unk684;
                phi_v1 = gGameInfo;
            }
            if (phi_a0_2 == (phi_v1->data[2423] + 0x96)) {
                func_801477B4(globalCtx);
                this->unk688 = 2;
                this->unk684 = 0;
                this->unk153 = 1;
                globalCtx->envCtx.unk_C3 = 1;
                globalCtx->envCtx.unk_E0 = 0;
                D_809BEFD0->unk154 = 0;
            case 2:
                this->unk144 = 0x8000;
                if (this->unk684 == 0xA) {
                    func_800B7298(globalCtx, (Actor *) this, 4U);
                }
                phi_a0_3 = this->unk684;
                if (this->unk684 >= 0xAU) {
                    Math_ApproachS(&this->unk6AC, 0, 2, 0x1000);
                    phi_a0_3 = this->unk684;
                }
                this->unk68C = 896.0f;
                this->unk690 = 4.0f;
                this->unk694 = 2752.0f;
                this->unk698 = 894.0f;
                this->unk69C = 46.0f;
                this->unk6A0 = 2860.0f;
                temp_v1_4 = gGameInfo;
                phi_v1_2 = temp_v1_4;
                phi_a0_4 = phi_a0_3;
                if (phi_a0_3 == (temp_v1_4->data[2465] + 0x28)) {
                    func_801518B0(globalCtx, 0x1519U, NULL);
                    phi_v1_2 = gGameInfo;
                    phi_a0_4 = this->unk684;
                }
                phi_a0_5 = phi_a0_4;
                phi_v1_3 = phi_v1_2;
                if ((u32) (phi_v1_2->data[2494] + 0x82) >= phi_a0_4) {
                    sp64 = 0.5f;
                    play_sound(0x2098U);
                    phi_a0_5 = this->unk684;
                    phi_v1_3 = gGameInfo;
                }
                temp_v0 = phi_v1_3->data[2465];
                phi_a0_6 = phi_a0_5;
                phi_v0 = temp_v0;
                if (phi_a0_5 == (temp_v0 + 0x8C)) {
                    func_801477B4(globalCtx);
                    phi_a0_6 = this->unk684;
                    phi_v0 = gGameInfo->data[2465];
                }
                phi_a0_7 = phi_a0_6;
                if (phi_a0_6 == (phi_v0 + 0xAA)) {
                    func_801518B0(globalCtx, 0x151AU, NULL);
                    phi_a0_7 = this->unk684;
                }
                phi_a0_8 = phi_a0_7;
                if ((phi_a0_7 >= 0xAAU) && (phi_a0_7 < 0xBFU)) {
                    this->unk430 = (f32) gGameInfo->data[1290] + 200.0f;
                    phi_a0_8 = this->unk684;
                }
                phi_a0_9 = phi_a0_8;
                if ((phi_a0_8 == 0x96) || (phi_a0_8 == 0xB4)) {
                    Audio_PlayActorSound2((Actor *) this, this->unk6B4);
                    phi_a0_9 = this->unk684;
                }
                if (phi_a0_9 == (gGameInfo->data[2424] + 0xBE)) {
                    this->unk688 = 3;
                    this->unk684 = 0;
                    func_800B7298(globalCtx, (Actor *) this, 0x85U);
                case 3:
                    Math_ApproachS(&this->unk6AC, 0x4000, 2, 0x1000);
                    if (this->unk684 == (gGameInfo->data[2426] + 0xF)) {
                        this->unk688 = 4;
                        this->unk684 = 0;
                        SkelAnime_ChangeAnimTransitionStop(sp34, &D_06010E98, 0.0f);
                        this->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06010E98);
                    case 4:
                        this->unk6A4 = ((f32) gGameInfo->data[2429] * 0.01f) + 0.1f;
                        Math_ApproachF(&this->unk68C, 1076.0f, 0.5f, this->unk6A4 * 180.0f);
                        Math_ApproachF(&this->unk690, 20.0f, 0.5f, this->unk6A4 * 16.0f);
                        Math_ApproachF(&this->unk694, 2741.0f, 0.5f, this->unk6A4 * 11.0f);
                        Math_ApproachF(&this->unk698, 1155.0f, 0.5f, this->unk6A4 * 261.0f);
                        Math_ApproachF(&this->unk69C, 50.0f, 0.5f, this->unk6A4 * 4.0f);
                        Math_ApproachF(&this->unk6A0, 2822.0f, 0.5f, this->unk6A4 * 38.0f);
                        this->actor.world.pos.y = 45.0f;
                        this->actor.world.pos.x = (f32) gGameInfo->data[2427] + 1376.0f;
                        this->actor.world.pos.z = (f32) gGameInfo->data[2428] + 2864.0f;
                        if (this->unk684 == (gGameInfo->data[2429] + 0x14)) {
                            this->unk688 = 5;
                            this->unk684 = 0;
                            SkelAnime_ChangeAnimTransitionRepeat(D_809BEFD8 + 0x194, &D_06021B10, 0.0f);
                            D_809BEFD8->world.pos.x = (f32) gGameInfo->data[2430] + 1363.0f + 120.0f;
                            func_801518B0(globalCtx, 0x1533U, NULL);
                            this->unk6B0 = 30.0f;
                            globalCtx->envCtx.unk_C3 = 2;
                        case 5:
                            temp_v1_5 = gGameInfo;
                            phi_v1_4 = temp_v1_5;
                            if (this->unk684 == (temp_v1_5->data[2471] + 2)) {
                                Audio_PlayActorSound2((Actor *) this, 0x3A29U);
                                phi_v1_4 = gGameInfo;
                            }
                            phi_a0_10 = this->unk684;
                            if ((this->unk684 == (phi_v1_4->data[2472] + 0xA)) || (this->unk684 == (phi_v1_4->data[2473] + 0x19)) || (this->unk684 == (phi_v1_4->data[2474] + 0x28))) {
                                temp_a0_2 = D_809BEFD8;
                                Audio_PlayActorSound2(temp_a0_2, temp_a0_2->unk6B4);
                                phi_a0_10 = this->unk684;
                            }
                            if ((phi_a0_10 >= 9U) && (phi_a0_10 < 0x2CU)) {
                                this->unk430 = (f32) gGameInfo->data[1290] + 200.0f;
                            }
                            if (func_801378B8(sp34, this->unk1D8) != 0) {
                                SkelAnime_ChangeAnimTransitionRepeat(sp34, &D_0600FC78, 0.0f);
                                this->unk1D8 = 1000.0f;
                            }
                            this->unk68C = 1349.0f;
                            this->unk690 = 126.0f;
                            this->unk694 = 2740.0f;
                            this->unk698 = 1377.0f;
                            this->unk69C = 121.0f;
                            this->unk6A0 = 2851.0f;
                            temp_v1_6 = gGameInfo;
                            Math_ApproachF((f32 *) &D_809BEFD8->world, (f32) temp_v1_6->data[2430] + 1363.0f + 30.0f, 1.0f, (f32) temp_v1_6->data[2432] + 2.0f);
                            D_809BEFD8->world.pos.y = 45.0f;
                            D_809BEFD8->world.pos.z = (f32) gGameInfo->data[2431] + 2864.0f + 60.0f;
                            temp_v1_7 = gGameInfo;
                            phi_v1_5 = temp_v1_7;
                            if (this->unk684 == (temp_v1_7->data[2435] + 0x2D)) {
                                SkelAnime_ChangeAnimTransitionStop(D_809BEFD8 + 0x194, &D_0600D870, -10.0f);
                                Audio_PlayActorSound2(D_809BEFD8, 0x3A40U);
                                phi_v1_5 = gGameInfo;
                            }
                            if (this->unk684 == (phi_v1_5->data[2433] + 0x50)) {
                                this->unk688 = 6;
                                this->unk684 = 0;
                                SkelAnime_ChangeAnimTransitionRepeat(D_809BEFD4 + 0x194, &D_06021B10, 0.0f);
                                D_809BEFD4->world.pos.x = (f32) gGameInfo->data[2430] + 1363.0f + 120.0f;
                                D_809BEFD8->world.pos.z = 3164.0f;
                                func_801518B0(globalCtx, 0x151BU, NULL);
                                globalCtx->envCtx.unk_C3 = 3;
                            case 6:
                                temp_v1_8 = gGameInfo;
                                temp_a0_3 = this->unk684;
                                if ((temp_a0_3 == (temp_v1_8->data[2472] + 0xA)) || (temp_a0_3 == (temp_v1_8->data[2473] + 0x19)) || (temp_a0_3 == (temp_v1_8->data[2474] + 0x28))) {
                                    temp_a0_4 = D_809BEFD4;
                                    Audio_PlayActorSound2(temp_a0_4, temp_a0_4->unk6B4);
                                }
                                if ((this->unk684 >= 0xAU) && (this->unk684 < 0x22U)) {
                                    this->unk430 = (f32) gGameInfo->data[1290] + 200.0f;
                                }
                                this->unk68C = 1343.0f;
                                this->unk690 = 146.0f;
                                this->unk694 = 2975.0f;
                                this->unk698 = 1372.0f;
                                this->unk69C = 122.0f;
                                this->unk6A0 = 2867.0f;
                                temp_v1_9 = gGameInfo;
                                Math_ApproachF((f32 *) &D_809BEFD4->world, (f32) temp_v1_9->data[2430] + 1363.0f + 30.0f, 1.0f, (f32) temp_v1_9->data[2432] + 2.0f);
                                D_809BEFD4->world.pos.y = 45.0f;
                                D_809BEFD4->world.pos.z = ((f32) gGameInfo->data[2431] + 2864.0f) - 60.0f;
                                temp_v1_10 = gGameInfo;
                                phi_v1_6 = temp_v1_10;
                                if (this->unk684 == (temp_v1_10->data[2435] + 0x2D)) {
                                    SkelAnime_ChangeAnimTransitionStop(D_809BEFD4 + 0x194, &D_0600D870, -10.0f);
                                    Audio_PlayActorSound2(D_809BEFD4, 0x3A43U);
                                    phi_v1_6 = gGameInfo;
                                }
                                if (this->unk684 == (phi_v1_6->data[2433] + 0x50)) {
                                    this->unk688 = 7;
                                    this->unk684 = 0;
                                    D_809BEFD4->world.pos.z = (((f32) gGameInfo->data[2431] + 2864.0f) - 60.0f) - 10.0f;
                                    D_809BEFD8->world.pos.z = (f32) gGameInfo->data[2431] + 2864.0f + 60.0f + 10.0f;
                                    D_809BEFD4->world.pos.x = ((f32) gGameInfo->data[2430] + 1363.0f + 30.0f) - 40.0f;
                                    D_809BEFD8->world.pos.x = ((f32) gGameInfo->data[2430] + 1363.0f + 30.0f) - 40.0f;
                                    this->unk68C = 1339.0f;
                                    this->unk690 = 117.0f;
                                    this->unk694 = 2864.0f;
                                    this->unk698 = 1452.0f;
                                    this->unk69C = 120.0f;
                                    this->unk6A0 = 2864.0f;
                                    this->unk6A4 = 0.0f;
                                    func_801518B0(globalCtx, 0x1534U, NULL);
                                    this->unk6B0 = 60.0f;
                                    globalCtx->envCtx.unk_C3 = 4;
                                case 7:
                                    temp_a0_5 = this->unk684;
                                    temp_v0_2 = gGameInfo->data[2437] + 0x14;
                                    sp20 = &this->unk69C;
                                    sp24 = &this->unk698;
                                    sp28 = &this->unk690;
                                    sp2C = &this->unk68C;
                                    if (temp_a0_5 >= temp_v0_2) {
                                        if (temp_a0_5 == temp_v0_2) {
                                            SkelAnime_ChangeAnimTransitionStop(sp34, &D_06009D8C, 0.0f);
                                            this->unk1D8 = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06009D8C);
                                            Audio_PlayActorSound2((Actor *) this, 0x3A2AU);
                                        }
                                        if (func_801378B8(sp34, this->unk1D8) != 0) {
                                            SkelAnime_ChangeAnimTransitionRepeat(sp34, &D_06008390, 0.0f);
                                            this->unk1D8 = 1000.0f;
                                        }
                                    }
                                    temp_v1_11 = gGameInfo;
                                    phi_v1_7 = temp_v1_11;
                                    if ((u32) this->unk684 < (u32) (temp_v1_11->data[2487] + 0x14)) {
                                        this->unk430 = 200.0f;
                                        phi_v1_7 = gGameInfo;
                                    }
                                    phi_a0_11 = this->unk684;
                                    phi_v1_8 = phi_v1_7;
                                    if (this->unk684 == (phi_v1_7->data[2437] + 0x19)) {
                                        Audio_PlayActorSound2((Actor *) this, 0x3A2BU);
                                        Audio_PlayActorSound2((Actor *) this, 0x3A30U);
                                        phi_a0_11 = this->unk684;
                                        phi_v1_8 = gGameInfo;
                                    }
                                    phi_a0_12 = phi_a0_11;
                                    if (phi_a0_11 == (phi_v1_8->data[2444] + 0x28)) {
                                        SkelAnime_ChangeAnimTransitionRepeat(D_809BEFD4 + 0x194, &D_0600CDE0, -5.0f);
                                        SkelAnime_ChangeAnimTransitionRepeat(D_809BEFD8 + 0x194, &D_0600CDE0, -5.0f);
                                        phi_a0_12 = this->unk684;
                                    }
                                    phi_a0_13 = phi_a0_12;
                                    if (phi_a0_12 == 0x28) {
                                        Audio_PlayActorSound2((Actor *) this, 0x3A20U);
                                        phi_a0_13 = this->unk684;
                                    }
                                    phi_a0_14 = phi_a0_13;
                                    if (phi_a0_13 == 0x2D) {
                                        Audio_PlayActorSound2(D_809BEFD8, 0x3A42U);
                                        phi_a0_14 = this->unk684;
                                    }
                                    if (phi_a0_14 == 0x32) {
                                        Audio_PlayActorSound2(D_809BEFD4, 0x3A44U);
                                    }
                                    Math_ApproachF(sp2C, 1196.0f, 0.1f, this->unk6A4 * 143.0f);
                                    Math_ApproachF(sp28, 52.0f, 0.1f, this->unk6A4 * 65.0f);
                                    Math_ApproachF(sp24, 1302.0f, 0.1f, this->unk6A4 * 150.0f);
                                    Math_ApproachF(sp20, 90.0f, 0.1f, this->unk6A4 * 30.0f);
                                    temp_f0 = (f32) gGameInfo->data[2445];
                                    Math_ApproachF(&this->unk6A4, (temp_f0 * 0.01f) + 0.1f, 1.0f, (temp_f0 * 0.0001f) + 0.01f);
                                    if (this->unk684 == (gGameInfo->data[2418] + 0x3C)) {
                                        this->unk688 = 8;
                                        this->unk684 = 0;
                                        this->unk690 = 103.0f;
                                        this->unk694 = 2790.0f;
                                        this->unk68C = 1309.0f;
                                        this->unk69C = 103.0f;
                                        this->unk6A0 = 2790.0f;
                                        this->unk698 = 1421.0f;
                                        globalCtx->envCtx.unk_C3 = 5;
                                        Audio_PlayActorSound2(D_809BEFD4, 0x3A44U);
                                    case 8:
                                        if (this->unk684 == 0xF) {
                                            this->unk694 = 2930.0f;
                                            this->unk68C = 1309.0f;
                                            this->unk690 = 103.0f;
                                            this->unk6A0 = 2930.0f;
                                            this->unk698 = 1421.0f;
                                            this->unk69C = 103.0f;
                                            Audio_PlayActorSound2(D_809BEFD8, 0x3A42U);
                                            Audio_PlayActorSound2(D_809BEFD4, 0x3A44U);
                                        }
                                        phi_a0_15 = this->unk684;
                                        if (this->unk684 == 0x1E) {
                                            this->unk690 = 144.0f;
                                            this->unk68C = 1324.0f;
                                            this->unk694 = 2864.0f;
                                            this->unk69C = 144.0f;
                                            this->unk698 = 1436.0f;
                                            this->unk6A0 = 2864.0f;
                                            globalCtx->envCtx.unk_C3 = 6;
                                            Audio_PlayActorSound2((Actor *) this, 0x3A45U);
                                            Audio_PlayActorSound2(D_809BEFD8, 0x3A42U);
                                            Audio_PlayActorSound2(D_809BEFD4, 0x3A44U);
                                            phi_a0_15 = this->unk684;
                                        }
                                        temp_t1 = &this->unk68C;
                                        if (phi_a0_15 == (gGameInfo->data[2419] + 0x37)) {
                                            sp2C = temp_t1;
                                            sp24 = &this->unk698;
                                            sp38 = &globalCtx->csCtx;
                                            temp_v0_3 = Play_GetCamera(globalCtx, 0);
                                            sp5C = temp_v0_3;
                                            this->unk688 = 0;
                                            func_809B6528(this, globalCtx);
                                            func_809B41D8((EnKnight *) D_809BEFD4, globalCtx);
                                            func_809B41D8((EnKnight *) D_809BEFD8, globalCtx);
                                            temp_v0_4 = temp_v0_3;
                                            D_809BEFD8->gravity = -1.5f;
                                            D_809BEFD4->gravity = D_809BEFD8->gravity;
                                            D_809BEFD8->unk152 = 1;
                                            D_809BEFD4->unk152 = (u8) D_809BEFD8->unk152;
                                            temp_v0_4->eye.x = temp_t1->unk0;
                                            temp_v0_4->eye.y = temp_t1->unk4;
                                            temp_v0_4->eye.z = temp_t1->unk8;
                                            temp_v0_4->eyeNext.x = sp2C->unk0;
                                            temp_v0_4->eyeNext.y = sp2C->unk4;
                                            temp_v0_4->eyeNext.z = sp2C->unk8;
                                            temp_v0_4->at.x = sp24->unk0;
                                            temp_v0_4->at.y = sp24->unk4;
                                            temp_v0_4->at.z = sp24->unk8;
                                            func_80169AFC(globalCtx, this->unk68A, 0);
                                            this->unk68A = 0;
                                            func_800EA0EC(globalCtx, sp38);
                                            func_800B7298(globalCtx, (Actor *) this, 6U);
                                            D_809BDB00 = 1;
                                            this->unk153 = 2;
                                            func_801477B4(globalCtx);
                                            globalCtx->envCtx.unk_C3 = 7;
                                            gSaveContext.eventInf[5] |= 0x80;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
    }
    if (this->unk68A != 0) {
        ShrinkWindow_SetLetterboxTarget(0x1B);
        temp_f6 = Math_SinS((s16) (this->unk146 * 0x6000)) * 0.5f;
        sp50 = this->unk68C;
        temp_a2 = &sp44;
        temp_f2 = temp_f6 * sp64;
        sp54 = this->unk690 + temp_f2;
        sp58 = this->unk694;
        sp44 = this->unk698;
        sp48 = this->unk69C + (2.0f * temp_f2);
        sp4C = this->unk6A0;
        Play_CameraSetAtEye(globalCtx, this->unk68A, (Vec3f *) temp_a2, (Vec3f *) &sp50);
        func_80169940(globalCtx, this->unk68A, this->unk6B0);
        temp_v1_12 = this->unk6AC;
        sp60->shape.rot.y = temp_v1_12;
        sp60->world.rot.y = temp_v1_12;
    }
    temp_a0_6 = &this->unk42C;
    sp38 = temp_a0_6;
    Math_ApproachF((f32 *) temp_a0_6, this->unk430, 1.0f, (2.0f * (f32) gGameInfo->data[1289]) + 200.0f);
    temp_f2_2 = this->unk42C;
    this->unk428 = (s16) (s32) ((Math_SinS((s16) (((gGameInfo->data[1288] << 8) + 0x3F00) * this->unk146)) * temp_f2_2) + temp_f2_2);
    Math_ApproachZeroF((f32 *) temp_a0_6, 1.0f, (f32) gGameInfo->data[1289] + 100.0f);
    if (((bitwise f32) this->unk42C.segment >= 50.0f) && ((this->unk146 & 1) == 0) && (Rand_ZeroOne() < 0.5f)) {
        Audio_PlayActorSound2((Actor *) this, 0x3A90U);
    }
}

void func_809B9A18(Actor *arg0, GlobalContext *arg1) {
    f32 sp4C;
    s32 temp_s0;
    s32 temp_s4;
    u8 temp_a2;
    u8 temp_t8;
    u8 temp_v0_3;
    u8 temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    f32 phi_f12;
    s32 phi_s4;
    s32 phi_s0;

    temp_v1 = arg0->unk550;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_a2 = temp_v1->unk16;
    phi_s4 = 0;
    if ((temp_a2 & 2) != 0) {
        temp_v1->unk16 = (u8) (temp_a2 & 0xFFFD);
        arg0->unk193 = 5;
        if ((temp_v0->unkADB != 0) && ((s32) temp_v0->unkADA >= 0x1E) && (arg0->unk478 == 0)) {
            play_sound(0x1808U);
            CollisionCheck_SpawnShieldParticlesMetal(arg1, arg0 + 0x47C);
            arg0->unk478 = 5;
        }
        Matrix_RotateY(arg0->unk172, 0U);
        if (arg0 == D_809BEFD0) {
            phi_f12 = -6.0f;
        } else {
            phi_f12 = -4.0f;
        }
        SysMatrix_GetStateTranslationAndScaledZ(phi_f12, (Vec3f *) &sp4C);
        arg0->unk2A4 = sp4C;
        arg0->unk2A8 = sp54;
        return;
    }
    do {
        if (arg0->unk156 == 0) {
            temp_v0_2 = arg0->unk5B0 + (phi_s4 << 6);
            temp_v1_2 = temp_v0_2->unk16;
            if ((temp_v1_2 & 2) != 0) {
                temp_v0_2->unk16 = (u8) (temp_v1_2 & 0xFFFD);
                temp_t8 = arg0->colChkInfo.damageEffect;
                switch (temp_t8) {
                case 3:
                    arg0->unk2A1 = 0xA;
                    func_809B4E84(arg0, arg1, 0x50U);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    arg0->unk156 = 0xF;
                    break;
                case 1:
                    func_809B4E84(arg0, arg1, 0x28U);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    arg0->unk156 = 0xF;
                    break;
                case 2:
                    arg0->unk2A1 = 1;
                    break;
                case 4:
                    arg0->unk2A1 = 0x14;
                    break;
                case 14:
                    arg0->unk291 = 0xA;
                    break;
                case 10:
                    arg0->unk2A1 = 0x28;
                    func_809B4E84(arg0, arg1, 0x28U);
                    Audio_PlayActorSound2(arg0, 0x389EU);
                    arg0->unk156 = 0xF;
                    break;
                case 13:
                    if ((arg0->bgCheckFlags & 1) != 0) {
                        Matrix_RotateY(arg0->unk172, 0U);
                        SysMatrix_GetStateTranslationAndScaledZ(-4.0f, (Vec3f *) &sp4C);
                        arg0->unk2A4 = sp4C;
                        arg0->velocity.y = 5.0f;
                        arg0->unk2A8 = sp54;
                        phi_s0 = 0;
                        do {
                            func_809B22CC(arg0, arg1, 0);
                            temp_s0 = phi_s0 + 1;
                            phi_s0 = temp_s0;
                        } while (temp_s0 != 5);
                    }
                    break;
                }
                temp_v0_3 = arg0->colChkInfo.damage;
                if (temp_v0_3 != 0) {
                    arg0->colChkInfo.health -= temp_v0_3;
                    if ((s32) (s8) arg0->colChkInfo.health <= 0) {
                        func_809B51DC(arg0, arg1);
                        Enemy_StartFinishingBlow(arg1, arg0);
                        Audio_PlayActorSound2(arg0, arg0->unk6C0);
                    } else if (arg0->colChkInfo.damageEffect != 3) {
                        func_809B4F90(arg0, arg1);
                        Audio_PlayActorSound2(arg0, arg0->unk6BE);
                    }
                    arg0->unk156 = 0xA;
                    arg0->unk158 = 0xF;
                }
                arg0->unk192 = 0;
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
    } while (temp_s4 != 2);
}

void func_809B9D24(EnKnight *arg0, GlobalContext *arg1) {
    s32 temp_s1;
    u8 temp_a0;
    void *temp_v0;
    s32 phi_s1;

    phi_s1 = 0;
    if (arg0->unk156 == 0) {
        do {
            temp_v0 = arg0->unk594.elements + phi_s1;
            temp_a0 = temp_v0->unk16;
            if ((temp_a0 & 2) != 0) {
                temp_v0->unk16 = (u8) (temp_a0 & ~2);
                arg0->unk156 = 0xA;
                if ((*temp_v0->unk24 & 0x200000) != 0) {
                    arg0->unk158 = 0xF;
                    arg0->unk156 = 0x3E8;
                    func_809B5634(arg0, arg1);
                }
            }
            temp_s1 = phi_s1 + 0x40;
            phi_s1 = temp_s1;
        } while (temp_s1 != 0x80);
    }
}

void func_809B9E00(EnKnight *arg0, GlobalContext *arg1) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *temp_s3;
    f32 *temp_s4;
    s32 temp_s1;
    EnKnight *phi_s0;
    s32 phi_s1;

    Audio_PlaySoundAtPosition(arg1, arg0 + 0x1DC, 0x1E, 0x28CBU);
    temp_s3 = &sp94;
    temp_s4 = &sp88;
    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        sp88 = randPlusMinusPoint5Scaled(7.0f);
        sp90 = randPlusMinusPoint5Scaled(7.0f);
        sp8C = Rand_ZeroFloat(6.0f) + 4.0f;
        sp94 = phi_s0->unk1DC.x + sp88;
        sp98 = phi_s0->unk1DC.y + sp8C;
        sp9C = phi_s0->unk1DC.z + sp90;
        EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_s3, Rand_ZeroFloat(0.5f) + 0.7f, (Vec3f *) temp_s4, &D_809BDD00, &D_809BDCF8, &D_809BDCFC, 0x1E);
        temp_s1 = phi_s1 + 0xC;
        phi_s0 += 0xC;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xB4);
}

void func_809B9F8C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (arg0->unk156 == 0) {
        temp_v1 = arg0->unk645;
        if ((temp_v1 & 2) != 0) {
            arg0->unk645 = (u8) (temp_v1 & 0xFFFD);
            arg0->unk156 = 0xF;
            if (arg0 == temp_v0->parent) {
                temp_v0->unkAE8 = 0x65;
                temp_v0->parent = NULL;
                temp_v0->unk394 = 0;
                func_80165690();
                func_800B8D50(arg1, arg0, 10.0f, D_809BEFD0->unk172, 5.0f, 0x10U);
                func_809BA058((EnKnight *) arg0, arg1);
                arg0->unk148 = 1;
                arg0->unk14C = 0x1E;
                Audio_PlayActorSound2(arg0, 0x3A45U);
            }
        }
    }
}

void func_809BA058(EnKnight *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x194;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06003008, 0.0f);
    arg0->actionFunc = func_809BA0CC;
    arg0->unk148 = 0;
    arg0->unk194.animCurrentFrame = 19.0f;
    arg0->actor.flags |= 1;
    arg0->unk14C = gGameInfo->data[1325] + 0xC8;
}

void func_809BA0CC(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    s16 sp3A;
    s16 sp38;
    Actor *sp34;
    SkelAnime *sp28;
    f32 sp24;
    f32 sp20;
    EnKnight *temp_v0_2;
    EnKnight *temp_v0_4;
    SkelAnime *temp_a0;
    f32 temp_f16;
    f32 temp_f4;
    u8 temp_v0;
    void (*temp_v0_3)(EnKnight *, GlobalContext *);

    temp_a0 = &this->unk194;
    sp28 = temp_a0;
    sp34 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Audio_PlayActorSound2((Actor *) this, 0x3252U);
    temp_v0 = this->unk148;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if ((temp_v0 != 2) && (temp_v0 != 3)) {
                return;
            }
            this->unk156 = 0xA;
            Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 0.1f);
            Math_ApproachS(&this->actor.shape.rot.y, D_809BEFD0->actor.world.rot.y, 5, 0x800);
            Math_ApproachS((s16 *) &this->actor.shape, 0, 5, 0x800);
            Math_ApproachZeroF(&this->unk164, 0.5f, (((f32) gGameInfo->data[1609] * 0.01f) + 0.05f) * 300.0f);
            Math_ApproachZeroF(&this->unk168, 0.5f, (((f32) gGameInfo->data[1609] * 0.01f) + 0.05f) * 3800.0f);
            Math_ApproachZeroF(&this->unk16C, 0.5f, (((f32) gGameInfo->data[1609] * 0.01f) + 0.05f) * 900.0f);
            Math_ApproachF((f32 *) &this->actor.world, D_809BEFD0->actor.world.pos.x, 0.5f, ((f32) gGameInfo->data[1610] * 0.1f) + 4.0f);
            Math_ApproachF(&this->actor.world.pos.y, D_809BEFD0->actor.world.pos.y, 0.5f, ((f32) gGameInfo->data[1610] * 0.1f) + 4.0f);
            Math_ApproachF(&this->actor.world.pos.z, D_809BEFD0->actor.world.pos.z, 0.5f, ((f32) gGameInfo->data[1610] * 0.1f) + 4.0f);
            if (this->unk148 == 2) {
                temp_v0_2 = D_809BEFD0;
                if ((fabsf(this->actor.world.pos.x - temp_v0_2->actor.world.pos.x) < 30.0f) && (fabsf(this->actor.world.pos.z - temp_v0_2->actor.world.pos.z) < 30.0f) && (fabsf(this->actor.world.pos.y - temp_v0_2->actor.world.pos.y) < (((f32) gGameInfo->data[1611] * 0.1f) + 30.0f))) {
                    this->unk148 = 3;
                    D_809BEFD0->unk148 = 1;
                    this->unk194.animPlaybackSpeed = 1.0f;
                }
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return;
        }
        this->unk428 = (s16) (s32) ((Math_SinS((s16) (((gGameInfo->data[1288] << 8) + 0x1200) * this->unk146)) * 1000.0f) + 1000.0f);
        sp4C = (bitwise f32) this->unk42C.unk_14 - this->actor.world.pos.x;
        sp48 = this->unk444 - this->actor.world.pos.y;
        temp_f16 = sp4C * sp4C;
        sp44 = (bitwise f32) this->unk42C.cameraFocus - this->actor.world.pos.z;
        sp24 = temp_f16;
        temp_f4 = sp44 * sp44;
        sp20 = temp_f4;
        sp3C = sqrtf(temp_f16 + (sp48 * sp48) + temp_f4);
        if ((this->unk14C == 1) || (gGameInfo->data[1253] != 0)) {
            gGameInfo->data[1253] = 0;
            temp_v0_3 = D_809BEFD0->actionFunc;
            if ((func_809B52E8 != temp_v0_3) && (func_809B5698 != temp_v0_3)) {
                this->unk14C = 0;
                func_809B6D38(D_809BEFD0, globalCtx);
                SkelAnime_ChangeAnimTransitionStop(sp28, &D_060079D4, -10.0f);
                this->unk152 = 0;
                this->unk194.animPlaybackSpeed = 0.0f;
            } else {
                this->unk14C = 0x32;
            }
        }
        if (this->unk14C == 0) {
            Math_Vec3f_Copy((Vec3f *) &this->unk42C.unk_14, (Vec3f *) &D_809BEFD0->actor.world);
            this->unk444 = (f32) (this->unk444 + 100.0f);
            if (sp3C < 100.0f) {
                Math_ApproachF(&this->actor.speedXZ, (f32) gGameInfo->data[1584] + 1.5f, 1.0f, 0.3f);
            }
            if (sp3C < 30.0f) {
                this->unk148 = 2;
                this->unk14A = 0x32;
                this->unk156 = 0x3E8;
                return;
            }
            goto block_22;
        }
        Math_ApproachF(&this->actor.speedXZ, (f32) gGameInfo->data[1584] + 5.0f, 1.0f, 5.0f);
        if ((this->unk14A == 0) || (sp3C < 50.0f)) {
            this->unk14A = (s16) (s32) (Rand_ZeroFloat(50.0f) + 50.0f);
            if (Rand_ZeroOne() < 0.2f) {
                Math_Vec3f_Copy((Vec3f *) &this->unk42C.unk_14, (Vec3f *) &sp34->world);
                this->unk444 = (f32) (this->unk444 + 25.0f);
            } else {
                this->unk42C.unk_14 = (bitwise s32) (randPlusMinusPoint5Scaled(500.0f) + sp34->world.pos.x);
                this->unk444 = (f32) (Rand_ZeroFloat(100.0f) + sp34->world.pos.y + 50.0f);
                this->unk42C.cameraFocus = (bitwise CutsceneCameraPoint *) (randPlusMinusPoint5Scaled(500.0f) + sp34->world.pos.z);
            }
        }
block_22:
        sp38 = Math_Atan2S(sp4C, sp44);
        sp3A = Math_Atan2S(sp48, sqrtf(sp24 + sp20));
        Math_ApproachS(&this->actor.world.rot.y, sp38, 0xA, 0x800);
        Math_ApproachS((s16 *) &this->actor.world.rot, sp3A, 0xA, 0x800);
        Math_ApproachF(&this->unk164, 300.0f, 0.1f, 3.0f);
        Math_ApproachF(&this->unk168, -3800.0f, 0.1f, 38.0f);
        Math_ApproachF(&this->unk16C, -900.0f, 0.1f, 9.0f);
        Math_ApproachS(&this->actor.shape.rot.y, this->unk172, 0xA, 0x200);
        Math_ApproachS((s16 *) &this->actor.shape, this->unk170, 0xA, 0x200);
        if (this->unk14C == 0x28) {
            func_809BA940(this, globalCtx);
            Audio_PlayActorSound2((Actor *) this, 0x3A31U);
            return;
        }
        return;
    }
    this->unk148 = 1;
    Matrix_RotateY(this->actor.shape.rot.y, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(500.0f, (Vec3f *) &this->unk42C.unk_14);
    this->unk42C.unk_14 = (bitwise s32) ((bitwise f32) this->unk42C.unk_14 + this->actor.world.pos.x);
    this->unk444 = (f32) (this->actor.world.pos.y + 500.0f);
    this->unk42C.cameraFocus = (bitwise CutsceneCameraPoint *) ((bitwise f32) this->unk42C.cameraFocus + this->actor.world.pos.z);
    this->unk14A = 0x14;
    this->actor.world.rot.x = (gGameInfo->data[1287] << 0xC) + 0x2000;
    temp_v0_4 = D_809BEFD0;
    temp_v0_4->actor.flags &= -2;
    sp34->unk730 = this;
    globalCtx->actorCtx.targetContext.unk38 = (Actor *) this;
    globalCtx->actorCtx.targetContext.unk3C = (Actor *) this;
    Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &D_809BEFD0->actor.world);
    Math_Vec3s_Copy(&this->actor.world.rot, &D_809BEFD0->actor.world.rot);
    Math_Vec3s_Copy((Vec3s *) &this->actor.shape, &D_809BEFD0->actor.world.rot);
    this->unk156 = 0xA;
    this->unk152 = 1;
}

void func_809BA940(EnKnight *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809BA978;
    arg0->unk148 = 0;
    arg0->unk14E = 0xFA;
    arg0->unk14A = gGameInfo->data[2416] + 0x3C;
}

void func_809BA978(EnKnight *this, GlobalContext *globalCtx) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 sp42;
    s16 sp40;
    Actor *sp3C;
    f32 sp34;
    ActorShape *sp2C;
    Actor *temp_v0;
    GameInfo *temp_v0_3;
    GameInfo *temp_v0_6;
    GameInfo *temp_v0_7;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f4;
    s16 temp_v0_5;
    u16 temp_v0_4;
    u8 temp_v0_2;
    u8 temp_v1;
    f32 phi_f2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    u8 phi_v1;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp3C = temp_v0;
    Matrix_RotateY(temp_v0->shape.rot.y, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(7.0f, (Vec3f *) &sp54);
    temp_v0_2 = sp3C->unk14B;
    if (temp_v0_2 == 1) {
        sp58 = 67.0f;
    } else if (temp_v0_2 == 0) {
        sp58 = 85.0f;
    } else if (temp_v0_2 == 2) {
        sp58 = 60.0f;
    } else if (temp_v0_2 == 3) {
        sp58 = 34.0f;
    } else {
        sp58 = 40.0f;
    }
    temp_v0_3 = gGameInfo;
    temp_f18 = sp3C->world.pos.x;
    temp_f4 = this->actor.world.pos.x;
    sp4C = ((f32) temp_v0_3->data[2417] + (sp3C->world.pos.y + 100.0f)) - this->actor.world.pos.y;
    temp_v1 = this->unk148;
    temp_f18_2 = this->actor.world.pos.z;
    temp_f16 = sp3C->world.pos.z;
    if (temp_v1 != 1) {
        if (temp_v1 == 2) {
            phi_f2 = 3000.0f;
        } else {
            phi_f2 = 1000.0f;
        }
        sp48 = temp_f16 - temp_f18_2;
        sp50 = temp_f18 - temp_f4;
        sp34 = phi_f2;
        this->unk428 = (s16) (s32) ((Math_SinS((s16) (((temp_v0_3->data[1288] << 8) + 0x1200) * this->unk146)) * 1000.0f) + phi_f2);
    }
    sp44 = sqrtf(((temp_f18 - temp_f4) * (temp_f18 - temp_f4)) + ((temp_f16 - temp_f18_2) * (temp_f16 - temp_f18_2)));
    phi_v1 = this->unk148;
    if (this->unk148 != 0) {
        if (this->unk148 != 1) {
            if (this->unk148 != 2) {

            } else {
                temp_v0_4 = globalCtx->state.input[0].press.button;
                if ((~(temp_v0_4 | 0xFFFF7FFF) == 0) || (~(temp_v0_4 | ~0x4000) == 0)) {
                    temp_v0_5 = this->unk14A;
                    if (temp_v0_5 != 0) {
                        this->unk14A = temp_v0_5 - 1;
                    }
                    phi_v0 = this->unk14A;
                    if (this->unk14A != 0) {
                        this->unk14A += -1;
                        phi_v0 = this->unk14A;
                    }
                    phi_v0_2 = phi_v0;
                    if (phi_v0 != 0) {
                        this->unk14A = phi_v0 - 1;
                        phi_v0_2 = this->unk14A;
                    }
                    phi_v0_3 = phi_v0_2;
                    if (phi_v0_2 != 0) {
                        this->unk14A = phi_v0_2 - 1;
                        phi_v0_3 = this->unk14A;
                    }
                    if (phi_v0_3 != 0) {
                        this->unk14A = phi_v0_3 - 1;
                    }
                }
                Math_ApproachF((f32 *) &this->actor.world, sp3C->world.pos.x + sp54, 1.0f, this->unk6A4);
                Math_ApproachF(&this->actor.world.pos.y, sp3C->world.pos.y + sp58, 1.0f, this->unk6A4);
                Math_ApproachF(&this->actor.world.pos.z, sp3C->world.pos.z + sp5C, 1.0f, this->unk6A4);
                temp_v0_6 = gGameInfo;
                Math_ApproachF(&this->unk6A4, (f32) temp_v0_6->data[2420] + 20.0f, 1.0f, (f32) temp_v0_6->data[2421] + 0.5f);
                Math_ApproachS(&this->actor.shape.rot.y, (s16) (sp3C->shape.rot.y + 0x8000), 2, 0x1000);
                Math_ApproachS((s16 *) &this->actor.shape, (s16) ((gGameInfo->data[2483] << 0xB) + 0x4000), 2, 0x1000);
                sp3C->unkAE8 = 0x5A;
                Audio_PlayActorSound2((Actor *) this, 0x3251U);
                if ((this->unk14A == 0) && (this == sp3C->parent)) {
                    sp3C->unkAE8 = 0x65;
                    sp3C->parent = NULL;
                    sp3C->unk394 = 0;
                    func_80165690();
                    func_809BA058(this, globalCtx);
                    this->unk148 = 1;
                    this->unk14C = 0x1E;
                    Audio_PlayActorSound2((Actor *) this, 0x3A45U);
                }
                goto block_47;
            }
        } else {
            this->unk152 = 0;
            Math_ApproachS(&this->unk428, 0xFA0, 5, 0x1000);
            Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 1.0f);
            Math_ApproachF((f32 *) &this->actor.world, sp3C->world.pos.x + sp54, 1.0f, this->unk6A4);
            Math_ApproachF(&this->actor.world.pos.y, sp3C->world.pos.y + sp58, 1.0f, this->unk6A4);
            Math_ApproachF(&this->actor.world.pos.z, sp3C->world.pos.z + sp5C, 1.0f, this->unk6A4);
            temp_v0_7 = gGameInfo;
            Math_ApproachF(&this->unk6A4, (f32) temp_v0_7->data[2420] + 20.0f, 1.0f, (f32) temp_v0_7->data[2421] + 0.5f);
            if ((this->unk14E == 0) || ((sp3C->unkA74 & 0x1000) != 0)) {
                func_809BA058(this, globalCtx);
                this->unk148 = 1;
                this->unk14C = 0x1E;
                phi_v1 = 1U & 0xFF;
            } else {
                if (sp44 < ((f32) gGameInfo->data[2422] + 20.0f)) {
                    if (globalCtx->grabPlayer(globalCtx, (Player *) sp3C) != 0) {
                        func_8016566C(0x96);
                        sp3C->parent = (Actor *) this;
                        func_801A5CFC(0x6805U, &sp3C->projectedPos, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
                        this->actor.flags &= -2;
                        this->unk148 = 2;
                        this->unk14A = 0x50;
                    } else {
                        this->unk14E = 0;
                    }
                }
                goto block_47;
            }
        }
    } else {
        sp48 = temp_f16 - temp_f18_2;
        sp50 = temp_f18 - temp_f4;
        Math_ApproachF(&this->actor.speedXZ, (f32) gGameInfo->data[2418] + 10.0f, 1.0f, 1.0f);
        sp40 = Math_Atan2S(temp_f18 - temp_f4, temp_f16 - temp_f18_2);
        sp42 = Math_Atan2S(sp4C, sp44);
        Math_ApproachS(&this->actor.world.rot.y, sp40, 0xA, 0x800);
        Math_ApproachS((s16 *) &this->actor.world.rot, sp42, 0xA, 0x800);
        if (this->unk14E == 0) {
            func_809BA058(this, globalCtx);
            this->unk148 = 1;
            this->unk14C = 0x1E;
            phi_v1 = 1U & 0xFF;
        } else {
            if ((this->unk14A == 0) && (sp44 < ((f32) gGameInfo->data[2419] + 100.0f))) {
                this->unk148 = 1;
                this->unk14E = 0x3C;
                this->unk6A4 = 0.0f;
            }
block_47:
            phi_v1 = this->unk148;
        }
    }
    if (phi_v1 != 2) {
        sp2C = &this->actor.shape;
        Math_ApproachS(&this->actor.shape.rot.y, this->unk172, 0xA, 0x200);
        Math_ApproachS((s16 *) sp2C, this->unk170, 0xA, 0x200);
        Audio_PlayActorSound2((Actor *) this, 0x3252U);
    }
}

void EnKnight_Update(EnKnight *this, GlobalContext *globalCtx) {
    Actor *sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp58;
    void (*sp4C)(EnKnight *, GlobalContext *);
    CollisionCheckContext *sp48;
    ColliderCylinder *sp44;
    Actor *temp_v0_5;
    Actor *temp_v0_7;
    Actor *temp_v0_8;
    ColliderCylinder *temp_a2;
    ColliderJntSph *temp_a2_2;
    ColliderJntSph *temp_a2_3;
    ColliderJntSph *temp_a2_4;
    CollisionCheckContext *temp_a1;
    CollisionCheckContext *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    CollisionCheckContext *temp_a1_4;
    EnKnight *temp_v0_19;
    EnKnight *temp_v0_6;
    EnKnight *temp_v0_9;
    Vec3s *temp_t6;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f6;
    s16 temp_v0_10;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_16;
    s16 temp_v0_22;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1_2;
    u16 temp_v0_24;
    u8 temp_t1_2;
    u8 temp_v0_17;
    u8 temp_v0_20;
    u8 temp_v0_21;
    u8 temp_v0_23;
    u8 temp_v0_4;
    void (*temp_v0_18)(EnKnight *, GlobalContext *);
    void *temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *temp_t3;
    void *temp_t4;
    void *temp_t5;
    void *temp_t6_2;
    void *temp_t7;
    void *temp_t8;
    void *temp_v0;
    void *temp_v0_11;
    s32 phi_a0;
    s32 phi_v1;
    Actor *phi_v0;
    EnKnight *phi_v0_2;
    s32 phi_a0_2;
    f32 phi_f2;
    s32 phi_v0_3;
    f32 phi_f6;
    EnKnight *this = (EnKnight *) thisx;

    sp78 = globalCtx->actorCtx.actorList[2].first;
    Math_Vec3f_Copy(&this->unk6C8, &this->actor.projectedPos);
    temp_f14 = sp78->world.pos.x - this->actor.focus.pos.x;
    sp70 = (f32) gGameInfo->data[1341] + ((sp78->world.pos.y + 34.0f) - this->actor.focus.pos.y);
    sp74 = temp_f14;
    temp_f12 = sp78->world.pos.z - this->actor.focus.pos.z;
    sp6C = temp_f12;
    this->unk172 = Math_FAtan2F(temp_f12, temp_f14);
    this->unk170 = Math_Atan2S(-sp70, sqrtf((sp74 * sp74) + (sp6C * sp6C)));
    this->unk146 += 1;
    if (this == D_809BEFDC) {
        phi_a0 = 0;
        do {
            temp_v0 = this + (phi_a0 * 2);
            temp_v1 = temp_v0->unk14A;
            temp_a0 = (phi_a0 + 1) & 0xFF;
            phi_a0 = temp_a0;
            if (temp_v1 != 0) {
                temp_v0->unk14A = (s16) (temp_v1 - 1);
            }
        } while (temp_a0 < 3);
        temp_v0_2 = this->unk156;
        if (temp_v0_2 != 0) {
            this->unk156 = temp_v0_2 - 1;
        }
        temp_v0_3 = this->unk158;
        if (temp_v0_3 != 0) {
            this->unk158 = temp_v0_3 - 1;
        }
        this->actionFunc(this, globalCtx);
        Math_ApproachS(&this->unk184, this->unk186, 5, 0x2000);
        this->unk186 = 0;
        Actor_SetVelocityXYRotation((Actor *) this);
        Actor_ApplyMovement((Actor *) this);
        this->actor.world.pos.x += this->unk2A4;
        this->actor.world.pos.z += this->unk2A8;
        Math_ApproachZeroF(&this->unk2A4, 1.0f, (f32) gGameInfo->data[1334] + 2.0f);
        Math_ApproachZeroF(&this->unk2A8, 1.0f, (f32) gGameInfo->data[1334] + 2.0f);
        if (this->unk152 != 0) {
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 20.0f, 100.0f, 5U);
        }
        func_809B9F8C((Actor *) this, globalCtx);
        this->unk488.dim.pos.x = (s16) (s32) this->actor.focus.pos.x;
        this->unk488.dim.pos.y = (s16) (s32) this->actor.focus.pos.y;
        temp_a2 = &this->unk488;
        this->unk488.dim.pos.z = (s16) (s32) this->actor.focus.pos.z;
        sp4C = func_809BA978;
        temp_a1 = &globalCtx->colChkCtx;
        if (func_809BA978 == this->actionFunc) {
            temp_v0_4 = this->unk148;
            if ((s32) temp_v0_4 < 2) {
                if (temp_v0_4 == 0) {
                    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk488);
                }
                CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk488);
            } else {
                this->unk634.dim.radius = gGameInfo->data[1282] + 0x14;
                this->unk634.dim.yShift = 0;
                this->unk634.dim.height = gGameInfo->data[1283] + 0x28;
                this->unk634.dim.pos.x = (s16) (s32) sp78->world.pos.x;
                this->unk634.dim.pos.y = (s16) (s32) sp78->world.pos.y;
                this->unk634.dim.pos.z = (s16) (s32) sp78->world.pos.z;
                CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk634);
            }
        } else {
            sp48 = temp_a1;
            sp44 = temp_a2;
            CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2);
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        }
        if (((sp4C != this->actionFunc) || (this->unk148 != 2)) && ((gGameInfo->data[2476] & this->unk146) == 0) && (temp_v0_5 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x115, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, 0xCA), (temp_v0_5 != 0))) {
            temp_t6 = this->unk194.limbDrawTbl;
            temp_t5 = temp_v0_5->unk1B4;
            temp_t5->unk0 = (unaligned s32) temp_t6->unk0;
            temp_t5->unk4 = (u16) temp_t6->z;
            temp_v0_5->unk198 = (void **) this->unk194.skeleton;
            temp_v0_5->unk196 = (u8) this->unk194.dListCount;
            phi_v1 = 6;
            do {
                temp_t4 = this->unk194.limbDrawTbl + phi_v1;
                temp_t2 = temp_v0_5->unk1B4 + phi_v1;
                temp_t2->unk0 = (unaligned s32) temp_t4->unk0;
                temp_t2->unk4 = (u16) temp_t4->unk4;
                temp_v0_5->unk198 = (void **) this->unk194.skeleton;
                temp_t0 = temp_v0_5->unk1B4 + phi_v1;
                temp_v0_5->unk196 = (u8) this->unk194.dListCount;
                temp_t3 = this->unk194.limbDrawTbl + phi_v1;
                temp_t0->unk6 = (unaligned s32) temp_t3->unk6;
                temp_t0->unkA = (u16) temp_t3->unkA;
                temp_v0_5->unk198 = (void **) this->unk194.skeleton;
                temp_t7 = temp_v0_5->unk1B4 + phi_v1;
                temp_v0_5->unk196 = (u8) this->unk194.dListCount;
                temp_t1 = this->unk194.limbDrawTbl + phi_v1;
                temp_t7->unkC = (unaligned s32) temp_t1->unkC;
                temp_t7->unk10 = (u16) temp_t1->unk10;
                temp_v0_5->unk198 = (void **) this->unk194.skeleton;
                temp_t6_2 = temp_v0_5->unk1B4 + phi_v1;
                temp_v0_5->unk196 = (u8) this->unk194.dListCount;
                temp_t8 = this->unk194.limbDrawTbl + phi_v1;
                temp_v1_2 = phi_v1 + 0x18;
                temp_t6_2->unk12 = (unaligned s32) temp_t8->unk12;
                temp_t6_2->unk16 = (u16) temp_t8->unk16;
                temp_v0_5->unk198 = (void **) this->unk194.skeleton;
                temp_v0_5->unk196 = (u8) this->unk194.dListCount;
                phi_v1 = temp_v1_2;
            } while (temp_v1_2 != 0xAE);
            Math_Vec3f_Copy(temp_v0_5 + 0x164, (Vec3f *) &this->unk164);
            return;
        }
        /* Duplicate return node #170. Try simplifying control flow for better match */
        return;
    }
    this->unk680 = 0;
    temp_v0_6 = D_809BEFD0;
    if (this == temp_v0_6) {
        D_809BEFE4 = NULL;
        temp_v0_7 = globalCtx->actorCtx.actorList[7].first;
        phi_v0 = temp_v0_7;
        if (temp_v0_7 != 0) {
loop_27:
            if (phi_v0->id == 0x230) {
                D_809BEFE4 = phi_v0;
            } else {
                temp_v0_8 = phi_v0->next;
                phi_v0 = temp_v0_8;
                if (temp_v0_8 != 0) {
                    goto loop_27;
                }
            }
        }
        this->unk144 = gSaveContext.time;
        Math_ApproachS(&this->unk428, 0, 2, 0x200);
    } else if (temp_v0_6->unk154 == 0) {
        this->actor.hintId = 0x1D;
    } else {
        this->actor.hintId = 0x1E;
    }
    temp_v0_9 = D_809BEFD0;
    phi_v0_2 = temp_v0_9;
    if (temp_v0_9->unk151 != 0) {
        if ((this == temp_v0_9) && (func_809B6764 == this->actionFunc)) {
            func_809B5D38(this, globalCtx);
            phi_v0_2 = D_809BEFD0;
        }
        if ((this == phi_v0_2) && (func_809B5D54 == this->actionFunc)) {
            goto block_40;
        }
    } else {
block_40:
        this->unk190 = 0;
        this->unk191 = 0;
        this->unk192 = 0;
        this->unk594.base.colType = 3;
        temp_v0_10 = gGameInfo->data[1311];
        if (((temp_v0_10 == 0) && (this != D_809BEFD0)) || ((temp_v0_10 != 2) && (this == D_809BEFD0))) {
            phi_a0_2 = 0;
            do {
                temp_v0_11 = this + (phi_a0_2 * 2);
                temp_v1_3 = temp_v0_11->unk14A;
                temp_a0_2 = (phi_a0_2 + 1) & 0xFF;
                phi_a0_2 = temp_a0_2;
                if (temp_v1_3 != 0) {
                    temp_v0_11->unk14A = (s16) (temp_v1_3 - 1);
                }
            } while (temp_a0_2 < 3);
            temp_v0_12 = this->unk156;
            if (temp_v0_12 != 0) {
                this->unk156 = temp_v0_12 - 1;
            }
            temp_v0_13 = this->unk158;
            if (temp_v0_13 != 0) {
                this->unk158 = temp_v0_13 - 1;
            }
            temp_v0_14 = this->unk478;
            if (temp_v0_14 != 0) {
                this->unk478 = (s16) (temp_v0_14 - 1);
            }
            temp_v0_15 = this->unk2A2;
            if (temp_v0_15 != 0) {
                this->unk2A2 = temp_v0_15 - 1;
            }
            temp_v0_16 = this->unk15E;
            if (temp_v0_16 != 0) {
                this->unk15E = temp_v0_16 - 1;
            }
            temp_v0_17 = this->unk291;
            if (temp_v0_17 != 0) {
                this->unk291 = temp_v0_17 - 1;
            }
            Math_ApproachZeroF((f32 *) &this->unk42C.npcActions[8], 1.0f, 0.2f);
            temp_v0_18 = this->actionFunc;
            if ((func_809B52E8 != temp_v0_18) && (func_809B5698 != temp_v0_18)) {
                Math_ApproachS((s16 *) &this->actor.shape, 0, 0xA, 0x200);
            }
            this->actionFunc(this, globalCtx);
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            this->actor.world.pos.x += this->unk2A4;
            this->actor.world.pos.z += this->unk2A8;
            if ((this->unk192 != 0) || (func_809B4880 == this->actionFunc)) {
                func_809B2DD0(this, globalCtx);
                if ((this->unk192 != 0) && (temp_v0_19 = D_809BEFE0, (temp_v0_19 != 0)) && (this != temp_v0_19)) {
                    func_809B5E90(this, globalCtx);
                } else if ((this != D_809BEFD0) && ((sp78->unkA74 * 4) < 0)) {
                    func_809B5FA8(this, globalCtx);
                }
            }
        }
        if (this->unk152 != 0) {
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 100.0f, 50.0f, 150.0f, 5U);
        }
        if ((this->actor.bgCheckFlags & 1) != 0) {
            if (this->actor.velocity.y <= 0.0f) {
                this->actor.velocity.y = -2.0f;
            }
            Math_ApproachZeroF(&this->unk2A4, 1.0f, 1.0f);
            Math_ApproachZeroF(&this->unk2A8, 1.0f, 1.0f);
        }
        Math_ApproachS(&this->unk184, this->unk186, this->unk18E, this->unk18C);
        this->unk18C = 0x1000;
        this->unk18E = 3;
        Math_ApproachS(&this->unk188, this->unk18A, this->unk18E, this->unk18C);
        this->unk18A = 0;
        if (func_809B4308 != this->actionFunc) {
            Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 3, 0xA00);
        }
        if ((func_809B842C != this->actionFunc) && (func_809B5698 != this->actionFunc) && (func_809B58D4 != this->actionFunc) && (func_809B6764 != this->actionFunc) && (func_809B6C54 != this->actionFunc) && (func_809B6D94 != this->actionFunc) && (func_801690CC(globalCtx) == 0)) {
            if (func_809B52E8 != this->actionFunc) {
                func_809B9A18((Actor *) this, globalCtx);
                if (this->unk190 != 0) {
                    temp_a2_2 = &this->unk4D4;
                    sp4C = (void (*)(EnKnight *, GlobalContext *)) temp_a2_2;
                    temp_a1_2 = &globalCtx->colChkCtx;
                    sp48 = temp_a1_2;
                    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) temp_a2_2);
                    CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) temp_a2_2);
                }
                if (this->unk191 != 0) {
                    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk534);
                }
                if (this->unk162 == 0) {
                    temp_v0_20 = this->unk193;
                    temp_a1_3 = &globalCtx->colChkCtx;
                    if (temp_v0_20 == 0) {
                        temp_a2_3 = &this->unk594;
                        sp4C = (void (*)(EnKnight *, GlobalContext *)) temp_a2_3;
                        sp48 = temp_a1_3;
                        CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) temp_a2_3);
                    } else {
                        this->unk193 = temp_v0_20 - 1;
                    }
                    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk594);
                    if ((this->unk192 != 0) && ((sp78->unkD57 != 0) || ((sp78->unkADC != 0) && (this->actor.xzDistToPlayer <= 120.0f))) && (func_809B316C(this, globalCtx) != 0)) {
                        if (this == D_809BEFD0) {
                            phi_f2 = 0.65f;
                        } else {
                            phi_f2 = 0.25f;
                        }
                        sp58 = phi_f2;
                        if ((Rand_ZeroOne() < phi_f2) && (sp78->unkADC != 0) && (func_809B3DAC != this->actionFunc) && ((this->actor.bgCheckFlags & 8) == 0)) {
                            func_809B592C((Actor *) this, globalCtx);
                        } else {
                            func_809B3CD0(this, globalCtx);
                        }
                    }
                }
            } else {
                func_809B9D24(this, globalCtx);
                temp_a2_4 = &this->unk594;
                temp_a1_4 = &globalCtx->colChkCtx;
                sp48 = temp_a1_4;
                sp4C = (void (*)(EnKnight *, GlobalContext *)) temp_a2_4;
                CollisionCheck_SetOC(globalCtx, temp_a1_4, (Collider *) temp_a2_4);
                CollisionCheck_SetAC(globalCtx, temp_a1_4, (Collider *) temp_a2_4);
            }
        }
        if ((~(globalCtx->state.input[3].press.button | ~0x20) == 0) && (this == D_809BEFD0)) {
            func_809B5634((EnKnight *) D_809BEFD4, globalCtx);
            func_809B5634((EnKnight *) D_809BEFD8, globalCtx);
        }
        if ((~(globalCtx->state.input[3].press.button | ~0x10) == 0) && (this == D_809BEFD0)) {
            this->unk2A1 = (u8) gGameInfo->data[1265];
        }
        temp_v0_21 = this->unk2A1;
        switch (temp_v0_21) {
        case 0:
            this->unk2A0 = 0;
            this->unk2A2 = 0;
            this->unk29C = 0.0f;
            break;
        case 1:
            this->unk2A0 = 0;
            this->unk2A2 = 0x50;
            this->unk2A1 = temp_v0_21 + 1;
            this->unk29C = 1.0f;
            this->unk294 = 0.0f;
            func_800BCB70((Actor *) this, 0x4000, 0x78, 0, (s16) 0x3C);
            /* fallthrough */
        case 2:
            if (this->unk2A2 == 0) {
                Math_ApproachZeroF(&this->unk29C, 1.0f, 0.02f);
                if (this->unk29C == 0.0f) {
                    this->unk2A1 = 0;
                }
            } else {
                Math_ApproachF(&this->unk294, 0.5f, 0.1f, 0.5f);
            }
            break;
        case 10:
            this->unk2A0 = 0xB;
            this->unk2A2 = 0x50;
            this->unk2A1 = temp_v0_21 + 1;
            this->unk29C = 1.0f;
            this->unk294 = 0.0f;
            this->unk298 = 1.0f;
            /* fallthrough */
        case 11:
            temp_v0_22 = this->unk2A2;
            if (temp_v0_22 == 0) {
                func_809B9E00(this, globalCtx);
                this->unk2A1 = 0;
            } else {
                if (temp_v0_22 == 0x32) {
                    this->unk2A0 = 0xA;
                }
                Math_ApproachF(&this->unk294, 0.5f, 1.0f, 0.08f);
                Math_ApproachF(&this->unk298, 0.5f, 0.05f, 0.05f);
            }
            break;
        case 20:
            this->unk2A0 = 0x14;
            this->unk2A2 = 0x28;
            this->unk2A1 = temp_v0_21 + 1;
            this->unk29C = 1.0f;
            this->unk294 = 0.0f;
            /* fallthrough */
        case 21:
            if (this->unk2A2 == 0) {
                Math_ApproachZeroF(&this->unk294, 1.0f, 0.03f);
                if (this->unk294 == 0.0f) {
                    this->unk2A1 = 0;
                    this->unk29C = 0.0f;
                }
            } else {
                Math_ApproachF(&this->unk294, 0.75f, 0.5f, 0.5f);
            }
            break;
        case 30:
            this->unk2A0 = 0x14;
            this->unk2A2 = 0xA;
            this->unk2A1 = temp_v0_21 + 1;
            this->unk29C = 0.5f;
            /* fallthrough */
        case 31:
            if (this->unk2A2 == 0) {
                Math_ApproachZeroF(&this->unk294, 1.0f, 0.03f);
                if (this->unk294 == 0.0f) {
                    this->unk2A1 = 0;
                    this->unk29C = 0.0f;
                }
            } else {
                Math_ApproachF(&this->unk294, 0.5f, 0.5f, 0.3f);
            }
            break;
        case 40:
            this->unk2A0 = 0x1E;
            this->unk2A2 = 0x32;
            this->unk29C = 1.0f;
            this->unk2A1 = temp_v0_21 + 1;
            this->unk294 = ((f32) gGameInfo->data[1266] * 0.1f) + 0.5f;
            /* fallthrough */
        case 41:
            if (this->unk2A2 == 0) {
                Math_ApproachZeroF(&this->unk294, 1.0f, 0.05f);
                if (this->unk294 == 0.0f) {
                    this->unk2A1 = 0;
                    this->unk29C = 0.0f;
                }
            }
            break;
        }
        this->unk42C.segment = NULL;
        if (this == D_809BEFD0) {
            temp_v0_23 = D_809BDB00;
            temp_t1_2 = temp_v0_23 - 1;
            if (temp_v0_23 != 0) {
                D_809BDB00 = temp_t1_2;
                if ((temp_t1_2 & 0xFF) == 0) {
                    func_801A2E54(0x38);
                }
            }
            if (this->unk162 != 0) {
                Math_ApproachF(&this->unk17C, 60.0f, 1.0f, 8.0f);
            } else {
                Math_ApproachF(&this->unk17C, 255.0f, 1.0f, 8.0f);
            }
            func_809BD490(this, globalCtx);
            if (this->unk154 != 0) {
                globalCtx->envCtx.unk_C3 = 0;
                globalCtx->envCtx.unk_E0 = 2;
                if (this->unk154 == 1) {
                    globalCtx->envCtx.unk_C1 = 8;
                    globalCtx->envCtx.unk_C2 = 0xC;
                } else {
                    globalCtx->envCtx.unk_C1 = 0;
                    globalCtx->envCtx.unk_C2 = 0xA;
                }
                temp_v0_24 = gSaveContext.time;
                phi_v0_3 = (s32) temp_v0_24;
                if ((s32) temp_v0_24 >= 0x8001) {
                    phi_v0_3 = (0xFFFF - temp_v0_24) & 0xFFFF;
                }
                temp_f6 = (f32) phi_v0_3;
                phi_f6 = temp_f6;
                if (phi_v0_3 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                globalCtx->envCtx.unk_DC = phi_f6 * 0.000030517578f;
            }
            if ((this->unk6C4 == 0) && (this->unk162 == 0) && (Player_GetMask(globalCtx) == 0xF) && ((func_809B6764 == this->actionFunc) || (this->unk192 != 0)) && (this->actor.xzDistToPlayer < ((f32) gGameInfo->data[1330] + 130.0f)) && (func_809B316C(this, globalCtx) != 0)) {
                this->unk6C4 = 1;
                func_809B78A4(this, globalCtx);
            }
        }
        this->actor.shape.shadowAlpha = (u8) (u32) ((this->unk180 * this->unk17C) / 255.0f);
    }
}

void func_809BC2C4(EnKnight *arg0, GlobalContext *arg1) {
    Gfx *sp24;
    GameInfo *temp_a0_2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    u8 temp_v0_3;
    f32 phi_f0;

    temp_a0 = arg1->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_06018BC4));
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0->words.w1 = (u32) &D_08000000;
    if (arg0 == D_809BEFD0) {
        temp_v1 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000000;
        temp_a0_2 = gGameInfo;
        temp_v1->words.w1 = ((u32) ((((f32) temp_a0_2->data[1550] * 0.1f) + 1.0f) * arg0->unk42C.linkAction) & 0xFF) | ((temp_a0_2->data[1547] + 0xB4) << 0x18) | 0xFF0000 | 0xFF00;
    } else {
        temp_v1_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA000000;
        temp_v1_2->words.w1 = ((u32) ((((f32) gGameInfo->data[1550] * 0.1f) + 1.0f) * arg0->unk42C.linkAction) & 0xFF) | ~0x37FF;
    }
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertTranslation(arg0->unk42C.npcActions[0], arg0->unk42C.npcActions[1], arg0->unk42C.npcActions[2], 1);
    SysMatrix_RotateStateAroundXAxis(arg0->unk42C.npcActions[3]);
    SysMatrix_InsertZRotation_f(arg0->unk42C.npcActions[5], 1);
    SysMatrix_InsertYRotation_f(arg0->unk42C.npcActions[4], 1);
    if (arg0 == D_809BEFD0) {
        phi_f0 = 1.3076923f;
    } else {
        phi_f0 = 1.0f;
    }
    temp_f12 = 0.021f * phi_f0;
    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp24 = temp_v0_2;
    sp24->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_3 = arg0->unk44C;
    if (temp_v0_3 != 0) {
        if (temp_v0_3 != 1) {
            if (temp_v0_3 != 2) {

            }
            temp_v0_4 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_060188F8;
            temp_v0_4->words.w0 = 0xDE000000;
            return;
        }
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_060189F0;
        temp_v0_5->words.w0 = 0xDE000000;
        return;
    }
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = (u32) &D_06018AF0;
    temp_v0_6->words.w0 = 0xDE000000;
}

s32 func_809BC67C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        arg4->x = (s16) (s32) ((f32) arg4->x + (f32) arg5->unk184);
    }
    if (arg1 == 0x12) {
        arg4->z += arg5->unk428;
    } else if (arg1 == 0x13) {
        arg4->z -= arg5->unk428;
    }
    if ((arg1 != 0x12) && (arg1 != 0x13)) {
        *arg2 = NULL;
    }
    return 0;
}

? func_809BC720(s32 arg0, s32 arg1, ? **arg2, ? arg3, void *arg4, void *arg5) {
    if (arg1 == 0xF) {
        arg4->unk0 = (s16) (s32) ((f32) arg4->unk0 + (f32) arg5->unk184);
        arg4->unk4 = (s16) (arg4->unk4 + arg5->unk188);
    }
    if (arg5 == D_809BEFD0) {
        if (arg1 == 0x12) {
            arg4->unk4 = (s16) (arg4->unk4 + arg5->unk428);
        } else if (arg1 == 0x13) {
            arg4->unk4 = (s16) (arg4->unk4 - arg5->unk428);
        }
        if (arg1 == 0x17) {
            arg4->unk4 = (s16) (arg4->unk4 - arg5->unk174);
        }
        if (arg1 == 0x18) {
            arg4->unk4 = (s16) (arg4->unk4 - arg5->unk178);
        }
        if (arg1 == 0x1A) {
            arg4->unk4 = (s16) (arg4->unk4 - arg5->unk176);
        }
        if (arg1 == 0x1B) {
            arg4->unk4 = (s16) (arg4->unk4 - arg5->unk17A);
        }
        if (((arg1 == 0x12) || (arg1 == 0x13)) && (arg5->unk162 != 0)) {
            *arg2 = NULL;
        }
    } else if (arg5 == D_809BEFD8) {
        if (arg1 == 0xF) {
            *arg2 = &D_06013020;
        } else if (arg1 == 0x12) {
            *arg2 = &D_06012DB0;
        } else if (arg1 == 0x13) {
            *arg2 = &D_06012400;
        }
    }
    return 0;
}

void func_809BC8B4(s32 arg0, s32 arg1, ? arg2, ? arg3, EnKnight *arg4) {
    f32 sp28;
    ColliderJntSph *sp20;
    s8 temp_v0;

    if ((func_809B5698 == arg4->actionFunc) || (arg4->unk29C > 0.0f)) {
        temp_v0 = *(&D_809BDD3C + arg1);
        if ((s32) temp_v0 >= 0) {
            SysMatrix_GetStateTranslation(arg4 + (temp_v0 * 0xC) + 0x1DC);
        }
    }
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_809BDD0C, arg4 + 0x3C);
        SysMatrix_MultiplyVector3fByState(&D_809BDD5C, arg4 + 0x434);
    }
    if (arg1 == 0x14) {
        SysMatrix_MultiplyVector3fByState(&D_809BDD68, (Vec3f *) &sp28);
        func_809B21F4(arg4, 0, arg4 + 0x594, &sp28);
    }
    if (arg1 == 0x15) {
        sp20 = &arg4->unk594;
        SysMatrix_MultiplyVector3fByState(&D_809BDD74, (Vec3f *) &sp28);
        func_809B21F4(arg4, 1, sp20, &sp28);
    }
    if ((arg1 == 6) && (func_809B6764 != arg4->actionFunc)) {
        SysMatrix_MultiplyVector3fByState(&D_809BDD18, (Vec3f *) &sp28);
        func_809B21F4(arg4, 0, &arg4->unk534, &sp28);
        SysMatrix_MultiplyVector3fByState(&D_809BDD24, (Vec3f *) &arg4->unk42C.sceneCsList);
    }
    if (arg1 == 0xB) {
        SysMatrix_MultiplyVector3fByState(&D_809BDD30, (Vec3f *) &sp28);
        func_809B21F4(arg4, 0, &arg4->unk4D4, &sp28);
    }
    if (arg1 == 0x1C) {
        SysMatrix_GetStateTranslation(&arg4->unk2AC);
    }
    if (arg1 == 0x19) {
        SysMatrix_GetStateTranslation(&arg4->unk2B8);
    }
}

void func_809BCA80(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f *sp18;
    Vec3f *temp_a1;

    if (arg1 == 0xF) {
        temp_a1 = arg4 + 0x3C;
        sp18 = temp_a1;
        SysMatrix_MultiplyVector3fByState(&D_809BDD80, temp_a1);
        Math_Vec3f_Copy(arg4 + 0x434, temp_a1);
    }
}

void func_809BCAD8(s32 arg0, s32 arg1, void *arg2, ? arg3) {
    f32 temp_f12;
    f32 temp_f12_2;

    if (arg2 == D_809BEFD0) {
        if (arg1 == 6) {
            temp_f12 = arg2->unk470;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            return;
        }
        if (arg1 == 0xB) {
            temp_f12_2 = arg2->unk46C;
            Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void *func_809BCB54(GraphicsContext *arg0) {
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w0 = 0xDF000000;
    temp_v1->words.w1 = 0;
    return temp_v1;
}

void *func_809BCB78(GraphicsContext *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x30;
    arg0->polyOpa.d = temp_v1;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xE7000000;
    temp_v1->words.w1 = 0;
    temp_v0->unk0 = 0xFC127E60;
    temp_v0->unk4 = 0xFF17F3FF;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk0 = 0xFB000000;
    temp_v0_2->unk4 = (s32) ((arg1 & 0xFF & 0xFF) | ~0xFF);
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk0 = 0xE200001C;
    temp_v0_3->unk4 = 0xC81049D8;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->unk0 = 0xD9FFFBFF;
    temp_v0_4->unk4 = 0;
    temp_v0_5 = temp_v0_4 + 8;
    temp_v0_5->unk0 = 0xDF000000;
    temp_v0_5->unk4 = 0;
    return temp_v1;
}

void EnKnight_Draw(EnKnight *this, GlobalContext *globalCtx) {
    s32 sp6C;
    Gfx *sp60;
    Gfx *sp5C;
    Gfx *sp58;
    Gfx *sp54;
    Gfx *sp44;
    GameInfo *temp_a0;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v1;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    u8 temp_t0;
    EnKnight *this = (EnKnight *) thisx;

    sp6C = 0;
    temp_s1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060028;
    sp60 = temp_v0;
    sp60->words.w1 = func_809BCB54(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060028;
    sp5C = temp_v0_2;
    sp5C->words.w1 = func_809BCB54(globalCtx->state.gfxCtx);
    if (this->unk17C >= 254.0f) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060024;
        sp58 = temp_v0_3;
        sp58->words.w1 = func_809BCB54(globalCtx->state.gfxCtx);
    } else {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v1 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xDB060024;
        sp54 = temp_v1;
        temp_v1->words.w1 = func_809BCB78(globalCtx->state.gfxCtx, (u32) this->unk17C & 0xFF);
        sp6C = 1;
    }
    if ((this->unk158 & 1) != 0) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    if (func_809B5698 == this->actionFunc) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0, 0, 0, 0xFF, 0x384, 0x44B);
    }
    if (this == D_809BEFDC) {
        SysMatrix_InsertTranslation(this->unk164, this->unk168, this->unk16C, 1);
        SkelAnime_DrawSV(globalCtx, this->unk194.skeleton, this->unk194.limbDrawTbl, (s32) this->unk194.dListCount, func_809BC67C, func_809BCA80, (Actor *) this);
    } else {
        if ((this == D_809BEFD0) && (sp6C != 0)) {
            temp_s1->polyXlu.p = func_8013AB00(globalCtx, this->unk194.skeleton, this->unk194.limbDrawTbl, (s32) this->unk194.dListCount, (void *) func_809BC720, (void *) func_809BC8B4, (void *) func_809BCAD8, (Actor *) this, temp_s1->polyXlu.p);
        } else {
            temp_s1->polyOpa.p = func_8013AB00(globalCtx, this->unk194.skeleton, this->unk194.limbDrawTbl, (s32) this->unk194.dListCount, (void *) func_809BC720, (void *) func_809BC8B4, (void *) func_809BCAD8, (Actor *) this, temp_s1->polyOpa.p);
        }
        if ((bitwise f32) this->unk42C.linkAction > 0.0f) {
            func_809BC2C4(this, globalCtx);
            Math_ApproachZeroF((f32 *) &this->unk42C.linkAction, 1.0f, 40.0f);
            temp_t0 = this->unk44C + 1;
            this->unk44C = temp_t0;
            if ((temp_t0 & 0xFF) >= 3) {
                this->unk44C = 2U;
            }
        } else {
            this->unk44C = 0U;
        }
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk1DC, 0xF, this->unk294, this->unk298, this->unk29C, (u8) (s32) this->unk2A0);
        if ((bitwise f32) this->unk42C.npcActions[8] > 0.01f) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            temp_v0_4 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDE000000;
            temp_v0_4->words.w1 = (u32) &D_04023348;
            temp_v0_5 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xFA000000;
            temp_a0 = gGameInfo;
            temp_v0_5->words.w1 = ((temp_a0->data[1552] + 0xAA) & 0xFF) | 0xFFFF0000 | (((temp_a0->data[1554] + 0xDC) & 0xFF) << 8);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xFB000000;
            temp_v0_6->words.w1 = (((gGameInfo->data[1558] + 0x64) & 0xFF) << 8) | 0xFFFF0000 | 0x80;
            SysMatrix_InsertTranslation((bitwise f32) this->unk42C.sceneCsList, this->unk480, this->unk484, 0);
            SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
            SysMatrix_InsertZRotation_s((s16) (globalCtx->gameplayFrames << 7), 1);
            temp_f12 = (f32) (gGameInfo->data[1553] + 0x258) * 0.01f * (bitwise f32) this->unk42C.npcActions[8];
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDA380003;
            sp44 = temp_v0_7;
            sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_8 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = (u32) &D_04023428;
            temp_v0_8->words.w0 = 0xDE000000;
        }
    }
    temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
    if (this == D_809BEFD0) {
        func_809BD858(this, globalCtx);
    }
}

void func_809BD1AC(Actor *this, GlobalContext *globalCtx) {
    f32 *temp_a0;
    f32 phi_f0;

    temp_a0 = this + 0x17C;
    if (this->params == 0xCA) {
        phi_f0 = (f32) gGameInfo->data[2475] + 15.0f;
    } else {
        phi_f0 = (f32) gGameInfo->data[2478] + 8.0f;
    }
    this = this;
    Math_ApproachZeroF(temp_a0, 1.0f, phi_f0);
    if (this->unk17C < 0.1f) {
        Actor_MarkForDeath(this);
    }
}

s32 func_809BD260(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((arg5->unk1C == 0xCA) && (arg1 != 0x12) && (arg1 != 0x13)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_809BD29C(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v1 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060024;
    sp38 = temp_v1;
    temp_v1->words.w1 = func_809BCB78(globalCtx->state.gfxCtx, (u32) this->unk17C & 0xFF);
    temp_v1_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xDB060028;
    sp34 = temp_v1_2;
    temp_v1_2->words.w1 = func_809BCB78(globalCtx->state.gfxCtx, (u32) this->unk17C & 0xFF);
    SysMatrix_InsertTranslation(this->unk164, this->unk168, this->unk16C, 1);
    temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk198, this->unk1B4, (s32) this->unk196, func_809BD260, NULL, this, temp_s1->polyXlu.p);
}

void func_809BD490(EnKnight *arg0, GlobalContext *arg1) {
    GameInfo *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_s4;
    void *temp_s3;
    void *phi_s0;
    s32 phi_s4;

    temp_s3 = arg1->actorCtx.actorList[2].first;
    phi_s0 = arg1->specialEffects;
    phi_s4 = 0;
    do {
        if (phi_s0->unk2A != 0) {
            temp_f0 = phi_s0->unkC;
            temp_f2 = phi_s0->unk10;
            temp_f12 = phi_s0->unk14;
            phi_s0->unk0 = (f32) (phi_s0->unk0 + temp_f0);
            phi_s0->unk4 = (f32) (phi_s0->unk4 + temp_f2);
            phi_s0->unk8 = (f32) (phi_s0->unk8 + temp_f12);
            phi_s0->unk2C = (s16) (phi_s0->unk2C + 1);
            phi_s0->unkC = (f32) (temp_f0 + phi_s0->unk18);
            phi_s0->unk10 = (f32) (temp_f2 + phi_s0->unk1C);
            phi_s0->unk14 = (f32) (temp_f12 + phi_s0->unk20);
            phi_s0->unk1C = (f32) (((f32) gGameInfo->data[2456] * 0.01f) + 1.0f);
            if (phi_s0->unk2A == 1) {
                temp_f0_2 = phi_s0->unk38;
                Math_ApproachF(phi_s0 + 0x34, (((f32) gGameInfo->data[1307] * 0.01f) + 1.0f) * temp_f0_2, 0.1f, temp_f0_2 * 0.1f);
                temp_v0 = gGameInfo;
                temp_a1 = phi_s0->unk2E;
                temp_v1 = temp_v0->data[2460] + 0x6E;
                if (((s32) temp_v1 >= (s32) temp_a1) || (phi_s0->unk4 < ((f32) temp_v0->data[2462] + (arg0->actor.floorHeight + 30.0f)))) {
                    if ((s32) temp_v1 < (s32) temp_a1) {
                        phi_s0->unk2E = temp_v1;
                    }
                    phi_s0->unk1C = (f32) (((f32) gGameInfo->data[2461] * 0.01f) + 0.3f);
                    phi_s0->unkC = (f32) (phi_s0->unkC * (0.85f + ((f32) gGameInfo->data[2459] * 0.01f)));
                    phi_s0->unk14 = (f32) (phi_s0->unk14 * (0.85f + ((f32) gGameInfo->data[2459] * 0.01f)));
                    phi_s0->unk38 = (f32) ((((f32) gGameInfo->data[2458] * 0.1f) + 2.0f) * 0.025f);
                    if (phi_s0->unk10 < 0.0f) {
                        phi_s0->unk10 = 0.0f;
                    }
                }
                phi_s0->unk2E = (s16) (phi_s0->unk2E - (gGameInfo->data[2449] + 0xA));
                if ((s32) phi_s0->unk2E <= 0) {
                    phi_s0->unk2E = 0;
                    phi_s0->unk2A = 0U;
                }
                if (arg0->unk15E == 0) {
                    temp_f0_3 = temp_s3->world.pos.x - phi_s0->unk0;
                    temp_f2_2 = (temp_s3->world.pos.y + 25.0f) - phi_s0->unk4;
                    temp_f12_2 = temp_s3->world.pos.z - phi_s0->unk8;
                    if (((temp_f0_3 * temp_f0_3) + (temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2)) < ((((f32) gGameInfo->data[2457] * 0.1f) + 1.0f) * ((2500.0f * phi_s0->unk34) / 0.025f))) {
                        arg0->unk15E = 0xA;
                        func_800B8D10(temp_f12_2, arg1, arg0, 0.0f, 0, 0.0f, 1, 4);
                    }
                }
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s0 += 0x3C;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x64);
}

void func_809BD858(EnKnight *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s3;
    s32 temp_v1;
    void *temp_s2;
    void *phi_s2;
    s32 phi_s5;
    s16 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s2 = arg1->specialEffects;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0x40;
    temp_v0->words.w0 = 0xE3001801;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE3001A01;
    phi_s2 = temp_s2;
    phi_s5 = 0;
    phi_s3 = 0;
    do {
        if (phi_s2->unk2A == 1) {
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0;
            temp_v0_3->words.w0 = 0xE7000000;
            if (phi_s5 == 0) {
                temp_v0_4 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) &D_04051180;
                temp_v0_4->words.w0 = 0xDE000000;
                temp_v0_5 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = 0x9B919B80;
                temp_v0_5->words.w0 = 0xFB000000;
                phi_s5 = (phi_s5 + 1) & 0xFF;
            }
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xFA000000;
            temp_v0_6->words.w1 = (phi_s2->unk2E & 0xFF) | 0x9B9BFF00;
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDB060020;
            temp_v1 = phi_s2->unk2C + (phi_s3 * 3);
            temp_v0_7->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, temp_v1 * 3, temp_v1 * 0xF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s2->unk0, phi_s2->unk4, phi_s2->unk8, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unk34;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_8 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDA380003;
            temp_v0_8->words.w1 = Matrix_NewMtx(temp_s0);
            temp_v0_9 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = (u32) &D_04051238;
            temp_v0_9->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x3C;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x64);
}
