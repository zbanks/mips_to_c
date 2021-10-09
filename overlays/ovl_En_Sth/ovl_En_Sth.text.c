typedef struct EnSth {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x190 */ SkelAnime unk190;                   /* inferred */
    /* 0x1D4 */ Vec3s unk1D4;                       /* inferred */
    /* 0x1DA */ char pad1DA[0x5A];                  /* maybe part of unk1D4[16]? */
    /* 0x234 */ Vec3s unk234;                       /* inferred */
    /* 0x23A */ char pad23A[0x60];                  /* maybe part of unk234[17]? */
    /* 0x29A */ s16 unk29A;                         /* inferred */
    /* 0x29C */ u16 unk29C;                         /* inferred */
    /* 0x29E */ u8 unk29E;                          /* inferred */
    /* 0x29F */ s8 unk29F;                          /* inferred */
    /* 0x2A0 */ void (*unk2A0)(Actor *, GlobalContext *); /* inferred */
} EnSth;                                            /* size = 0x2A4 */

struct _mips2c_stack_EnSth_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSth_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ObjectContext *sp20;                 /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSth_Update {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B6703C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B670A4 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B67148 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B671A0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B67208 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B672A4 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B67348 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B67458 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B67540 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B677BC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B67838 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B678A8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B67958 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B67984 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B67AB4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B67B50 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B67C1C {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B67DA0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B67E20 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B680A8 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad3E[0xA];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B681E8 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B68310 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad24[0x14];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B6849C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

s32 func_80B6703C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B670A4(Actor *arg0, s16 arg1, Actor *, u16); /* static */
void func_80B67148(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B671A0(void *arg0, GlobalContext *arg1); /* static */
void func_80B67208(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B672A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67348(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67458(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67540(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B677BC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67838(void *arg0, GlobalContext *arg1); /* static */
void func_80B678A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67958(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67984(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67AB4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67B50(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67C1C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67DA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B67E20(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B680A8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B681E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B68310(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B6849C(Actor *this, GlobalContext *globalCtx); /* static */
extern FlexSkeletonHeader D_060031F8;
extern FlexSkeletonHeader D_06005998;
extern ? D_0A0001A0;
static ? D_80B685C0;                                /* unable to generate initializer */
static ? D_80B68640;                                /* unable to generate initializer */
static ? D_80B68740;                                /* unable to generate initializer */
static ? D_80B687C0;                                /* unable to generate initializer */
static ? D_80B68840;                                /* unable to generate initializer */
static ? D_80B69040;                                /* unable to generate initializer */
static ? D_80B69540;                                /* unable to generate initializer */
static ? D_80B695D0;                                /* unable to generate initializer */
static ? D_80B69710;                                /* unable to generate initializer */
static ? D_80B69740;                                /* unable to generate initializer */
static ? D_80B697A0;                                /* unable to generate initializer */
static ? D_80B699A0;                                /* unable to generate initializer */
static ? D_80B69AD0;                                /* unable to generate initializer */
static Gfx D_80B6A1D0[100] = {
    {{0xD7000002, 0xFFFFFFFF}},
    {{0xE7000000, 0}},
    {{0xE200001C, 0xC8112078}},
    {{0xFC127E60, 0xFFFFF3F8}},
    {{0xE3001001, 0}},
    {{0xFD100000, (u32) &D_80B69040}},
    {{0xF5100000, 0x70D0350}},
    {{0xE6000000, 0}},
    {{0xF3000000, 0x71FF100}},
    {{0xE7000000, 0}},
    {{0xF5101000, 0xD0350}},
    {{0xF2000000, 0x7C03C}},
    {{0xFA000080, 0xFFFFFFFF}},
    {{0xD9000000, 0x230405}},
    {{0x1009012, (u32) &D_80B69540}},
    {{0x6000204, 0x20604}},
    {{0x6040800, 0x80A00}},
    {{0x6080C0A, 0xA0E}},
    {{0x60A0C0E, 0x100200}},
    {{0x5100602, 0}},
    {{0xE7000000, 0}},
    {{0xFD100000, (u32) &D_80B68840}},
    {{0xF5100000, 0x70D4350}},
    {{0xE6000000, 0}},
    {{0xF3000000, 0x73FF100}},
    {{0xE7000000, 0}},
    {{0xF5101000, 0xD4350}},
    {{0xF2000000, 0x7C07C}},
    {{0x1014028, (u32) &D_80B695D0}},
    {{0x6000204, 0x6080A}},
    {{0x60C080E, 0xA080C}},
    {{0x60C0E10, 0x121416}},
    {{0x6181412, 0x1A021C}},
    {{0x61E1A1C, 0x202224}},
    {{0x6242226, 0x1C0200}},
    {{0xE7000000, 0}},
    {{0xFD100000, (u32) &D_80B687C0}},
    {{0xF5100000, 0x70CC130}},
    {{0xE6000000, 0}},
    {{0xF3000000, 0x703F400}},
    {{0xE7000000, 0}},
    {{0xF5100400, 0xCC130}},
    {{0xF2000000, 0x1C01C}},
    {{0x1003006, (u32) &D_80B69710}},
    {{0x5000204, 0}},
    {{0xE7000000, 0}},
    {{0xFD100000, (u32) &D_80B68740}},
    {{0xF5100000, 0x70CC330}},
    {{0xE6000000, 0}},
    {{0xF3000000, 0x703F400}},
    {{0xE7000000, 0}},
    {{0xF5100400, 0xCC330}},
    {{0xF2000000, 0x1C01C}},
    {{0x100600C, (u32) &D_80B69740}},
    {{0x6000204, 0x6080A}},
    {{0xE7000000, 0}},
    {{0xFD100000, (u32) &D_80B68640}},
    {{0xF5100000, 0x70D0030}},
    {{0xE6000000, 0}},
    {{0xF3000000, 0x707F400}},
    {{0xE7000000, 0}},
    {{0xF5100400, 0xD0030}},
    {{0xF2000000, 0x1C03C}},
    {{0x1020040, (u32) &D_80B697A0}},
    {{0x6000204, 0x6080A}},
    {{0x60A0802, 0xC0200}},
    {{0x60C0A02, 0xE060A}},
    {{0x6100E0C, 0xE0A0C}},
    {{0x6060E12, 0xE1012}},
    {{0x6101412, 0x16181A}},
    {{0x61C161A, 0x1E2022}},
    {{0x61E2420, 0x26282A}},
    {{0x62C2E30, 0x40832}},
    {{0x6323404, 0x121436}},
    {{0x6380612, 0x123A38}},
    {{0x63C3E04, 0x141036}},
    {{0x63C003E, 0x36100C}},
    {{0x50C003C, 0}},
    {{0x1013026, (u32) &D_80B699A0}},
    {{0x6000204, 0x6080A}},
    {{0x60C0E10, 0xE1210}},
    {{0x6141618, 0x141A16}},
    {{0x61C1E20, 0x222420}},
    {{0xE7000000, 0}},
    {{0xFD100000, (u32) &D_80B685C0}},
    {{0xF5100000, 0x70CC330}},
    {{0xE6000000, 0}},
    {{0xF3000000, 0x703F400}},
    {{0xE7000000, 0}},
    {{0xF5100400, 0xCC330}},
    {{0xF2000000, 0x1C01C}},
    {{0x101F03E, (u32) &D_80B69AD0}},
    {{0x6000204, 0x20604}},
    {{0x6060208, 0xA0802}},
    {{0x60C020E, 0x101214}},
    {{0x616181A, 0x1C1E20}},
    {{0x6222426, 0x282A2C}},
    {{0x60A0200, 0x2E3032}},
    {{0x6343638, 0x3A3C16}},
    {{0xDF000000, 0}},
};
static ? D_80B6A4F0;                                /* unable to generate initializer */
static s16 D_80B6A678[724] = {
    0,
    0x8FF,
    0xC000,
    0x8FF,
    0x9DD,
    0xB7C,
    0xC62,
    0xB95,
    0xA10,
    0x94C,
    0x9E6,
    0xB1E,
    0xC60,
    0xD1C,
    0xD53,
    0xD6D,
    0xD6E,
    0xD5C,
    0xD3A,
    0xD0C,
    0xCD7,
    0xCA0,
    0xC5C,
    0xC05,
    0xB9E,
    0xB2F,
    0xABC,
    0xA4B,
    0x9E3,
    0x988,
    0x93F,
    0x910,
    0x8FF,
    0,
    0x2F,
    0x87,
    0xB7,
    0x87,
    0x2F,
    0,
    0x1D,
    0x5B,
    0x9A,
    0xB7,
    0xB0,
    0x9E,
    0x84,
    0x65,
    0x45,
    0x27,
    0xF,
    0,
    0xFFF8,
    0xFFF3,
    0xFFF1,
    0xFFF0,
    0xFFF2,
    0xFFF4,
    0xFFF7,
    0xFFFA,
    0xFFFD,
    0xFFFF,
    0,
    0xC81,
    0x506,
    0xF8FC,
    0xF308,
    0xF854,
    0x374,
    0x9DD,
    0x4CE,
    0xFB9E,
    0xF32F,
    0xEE40,
    0xEC9C,
    0xEBBE,
    0xEBC7,
    0xEC8C,
    0xEDBB,
    0xEF1E,
    0xF095,
    0xF20A,
    0xF3C1,
    0xF5F6,
    0xF891,
    0xFB7D,
    0xFE9F,
    0x1DA,
    0x504,
    0x7E9,
    0xA4C,
    0xBEA,
    0xC81,
    0xDD2B,
    0xDE1C,
    0xE1B2,
    0xE4E4,
    0xE200,
    0xDE75,
    0xDD7B,
    0xDE3A,
    0xE0B3,
    0xE4D8,
    0xE8AC,
    0xEA53,
    0xEB50,
    0xEB53,
    0xEA8A,
    0xE966,
    0xE82F,
    0xE706,
    0xE5F8,
    0xE4D8,
    0xE391,
    0xE245,
    0xE10D,
    0xDFF7,
    0xDF0D,
    0xDE54,
    0xDDCB,
    0xDD70,
    0xDD3C,
    0xDD2B,
    0xCC69,
    0xD5FA,
    0xE662,
    0xEF82,
    0xE741,
    0xD7CF,
    0xCF65,
    0xD5D7,
    0xE233,
    0xEED7,
    0xF75C,
    0xFA5C,
    0xFBDB,
    0xFB74,
    0xF97F,
    0xF6CB,
    0xF3DD,
    0xF0FE,
    0xEE5E,
    0xEB8E,
    0xE82C,
    0xE470,
    0xE07F,
    0xDC7C,
    0xD889,
    0xD4D0,
    0xD181,
    0xCED6,
    0xCD0E,
    0xCC69,
    0x471F,
    0x4037,
    0x303A,
    0x2450,
    0x2F13,
    0x3E80,
    0x44D4,
    0x3FED,
    0x345D,
    0x248D,
    0x16E4,
    0x110F,
    0xD94,
    0xD8D,
    0x1062,
    0x147C,
    0x18DD,
    0x1D16,
    0x20EF,
    0x2515,
    0x29DF,
    0x2EDA,
    0x33BB,
    0x3850,
    0x3C74,
    0x400B,
    0x42FE,
    0x4536,
    0x469F,
    0x471F,
    0xE9BF,
    0xEABE,
    0xECA4,
    0xEDD2,
    0xED52,
    0xEC19,
    0xEB60,
    0xEBE3,
    0xECE6,
    0xED69,
    0xED52,
    0xED32,
    0xED09,
    0xECD9,
    0xECA4,
    0xEC69,
    0xEC2B,
    0xEBEB,
    0xEBA9,
    0xEB67,
    0xEB25,
    0xEAE6,
    0xEAAA,
    0xEA73,
    0xEA40,
    0xEA15,
    0xE9F1,
    0xE9D6,
    0xE9C5,
    0xE9BF,
    0xFD3D,
    0xFB20,
    0xF869,
    0xF761,
    0xF84E,
    0xFAC2,
    0xFC81,
    0xFB22,
    0xF903,
    0xF77C,
    0xF6D7,
    0xF6B8,
    0xF6B4,
    0xF6C6,
    0xF6E6,
    0xF712,
    0xF746,
    0xF77D,
    0xF7B4,
    0xF7F5,
    0xF84D,
    0xF8BD,
    0xF944,
    0xF9E1,
    0xFA91,
    0xFB4B,
    0xFC01,
    0xFCA1,
    0xFD12,
    0xFD3D,
    0xB14B,
    0xB21B,
    0xB631,
    0xBA68,
    0xB6A1,
    0xB293,
    0xB1BB,
    0xB275,
    0xB53A,
    0xBA9F,
    0xC043,
    0xC2FF,
    0xC4CD,
    0xC514,
    0xC413,
    0xC288,
    0xC0E3,
    0xBF4F,
    0xBDD8,
    0xBC3B,
    0xBA63,
    0xB88A,
    0xB6D0,
    0xB549,
    0xB401,
    0xB2FC,
    0xB239,
    0xB1B3,
    0xB165,
    0xB14B,
    0xF374,
    0xFAF2,
    0x701,
    0xCF6,
    0x7A9,
    0xFC85,
    0xF61A,
    0xFB2B,
    0x45E,
    0xCCF,
    0x11C0,
    0x1366,
    0x1443,
    0x143B,
    0x1375,
    0x1245,
    0x10E2,
    0xF6B,
    0xDF5,
    0xC3D,
    0xA07,
    0x76B,
    0x47F,
    0x15C,
    0xFE20,
    0xFAF5,
    0xF80E,
    0xF5AB,
    0xF40C,
    0xF374,
    0x22D8,
    0x21E7,
    0x1E52,
    0x1B1F,
    0x1E04,
    0x218F,
    0x2288,
    0x21C9,
    0x1F51,
    0x1B2B,
    0x1756,
    0x15AE,
    0x14B2,
    0x14AE,
    0x1578,
    0x169D,
    0x17D4,
    0x18FD,
    0x1A0B,
    0x1B2B,
    0x1C73,
    0x1DBE,
    0x1EF7,
    0x200D,
    0x20F6,
    0x21B0,
    0x2238,
    0x2293,
    0x22C7,
    0x22D8,
    0xCC5E,
    0xD5F3,
    0xE660,
    0xEF82,
    0xE73E,
    0xD7C8,
    0xCF5B,
    0xD5CF,
    0xE230,
    0xEED6,
    0xF75E,
    0xFA5E,
    0xFBDE,
    0xFB77,
    0xF981,
    0xF6CC,
    0xF3DE,
    0xF0FE,
    0xEE5E,
    0xEB8C,
    0xE82A,
    0xE46C,
    0xE07B,
    0xDC77,
    0xD883,
    0xD4C8,
    0xD178,
    0xCECC,
    0xCD04,
    0xCC5E,
    0x4721,
    0x4039,
    0x303B,
    0x2450,
    0x2F13,
    0x3E82,
    0x44D7,
    0x3FEF,
    0x345E,
    0x248D,
    0x16E2,
    0x110B,
    0xD8E,
    0xD87,
    0x105E,
    0x1479,
    0x18DB,
    0x1D14,
    0x20EF,
    0x2515,
    0x29DF,
    0x2EDB,
    0x33BD,
    0x3852,
    0x3C76,
    0x400D,
    0x4300,
    0x4539,
    0x46A2,
    0x4721,
    0x1525,
    0x1449,
    0x12B3,
    0x11E3,
    0x12DA,
    0x1496,
    0x158D,
    0x14BE,
    0x1329,
    0x124B,
    0x124C,
    0x1258,
    0x126D,
    0x128B,
    0x12B0,
    0x12DB,
    0x130B,
    0x133F,
    0x1375,
    0x13AD,
    0x13E4,
    0x141B,
    0x1450,
    0x1482,
    0x14AF,
    0x14D6,
    0x14F7,
    0x1510,
    0x1520,
    0x1525,
    0x133,
    0x349,
    0x5F3,
    0x6F4,
    0x60D,
    0x3A4,
    0x1EB,
    0x345,
    0x55A,
    0x6D7,
    0x777,
    0x794,
    0x795,
    0x782,
    0x760,
    0x733,
    0x6FF,
    0x6C8,
    0x692,
    0x653,
    0x5FD,
    0x591,
    0x50E,
    0x476,
    0x3CC,
    0x318,
    0x266,
    0x1CB,
    0x15D,
    0x133,
    0xAFF7,
    0xB0CE,
    0xB4F3,
    0xB933,
    0xB565,
    0xB14A,
    0xB06C,
    0xB12C,
    0xB3FC,
    0xB96E,
    0xBF1A,
    0xC1DA,
    0xC3AC,
    0xC3F6,
    0xC2F7,
    0xC16D,
    0xBFC8,
    0xBE34,
    0xBCBB,
    0xBB1B,
    0xB940,
    0xB761,
    0xB5A1,
    0xB413,
    0xB2C4,
    0xB1B8,
    0xB0EE,
    0xB064,
    0xB012,
    0xAFF7,
    0x85B4,
    0x82A4,
    0x7CF4,
    0x79E3,
    0x7CE3,
    0x8283,
    0x85B4,
    0x858E,
    0x84AE,
    0x834F,
    0x81AC,
    0x8000,
    0x7E86,
    0x7D78,
    0x7D11,
    0x7D2D,
    0x7D7C,
    0x7DF7,
    0x7E94,
    0x7F4E,
    0x801B,
    0x80F4,
    0x81D1,
    0x82AA,
    0x8377,
    0x8430,
    0x84CE,
    0x8549,
    0x8598,
    0x85B4,
    0,
    0,
    0x8000,
    0x8000,
    0x8000,
    0,
    0,
    0,
    0,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0xE4AB,
    0xD131,
    0xD321,
    0xE71D,
    0xD4D8,
    0xCDC2,
    0xE021,
    0xD7CC,
    0xC4D1,
    0xD19B,
    0xE444,
    0xEBF5,
    0xEB10,
    0xE8E1,
    0xE593,
    0xE14E,
    0xDC3C,
    0xD687,
    0xD058,
    0xC9D9,
    0xC333,
    0xC370,
    0xC9E7,
    0xD008,
    0xD5A9,
    0xDAA1,
    0xDEC7,
    0xE1F1,
    0xE3F6,
    0xE4AB,
    0x8000,
    0x8000,
    0,
    0,
    0,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
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
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0,
    0,
    0x8000,
    0x8000,
    0x8000,
    0,
    0,
    0,
    0,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x1B55,
    0x2ECF,
    0x2CDF,
    0x18E3,
    0x2B28,
    0x323E,
    0x1FDF,
    0x2834,
    0x3B2F,
    0x2E65,
    0x1BBC,
    0x140B,
    0x14F0,
    0x171F,
    0x1A6D,
    0x1EB2,
    0x23C4,
    0x2979,
    0x2FA8,
    0x3627,
    0x3CCD,
    0x3C90,
    0x3619,
    0x2FF8,
    0x2A57,
    0x255F,
    0x2139,
    0x1E0F,
    0x1C0A,
    0x1B55,
    0x8000,
    0x8000,
    0,
    0,
    0,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
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
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0x8000,
    0,
    0x289,
    0x73E,
    0x9C7,
    0x89B,
    0x5D5,
    0x297,
    0,
    0xFE01,
    0xFBE4,
    0xF9D2,
    0xF7F1,
    0xF669,
    0xF561,
    0xF500,
    0xF524,
    0xF589,
    0xF625,
    0xF6EE,
    0xF7DA,
    0xF8DF,
    0xF9F3,
    0xFB0D,
    0xFC21,
    0xFD26,
    0xFE12,
    0xFEDB,
    0xFF77,
    0xFFDC,
    0,
    0,
};
static JointIndex D_80B6AC20[16] = {
    {0, 3, 0x21},
    {2, 0, 2},
    {0x3F, 0x5D, 0x7B},
    {0, 0, 0x99},
    {0xB7, 0xD5, 0xF3},
    {0x111, 0x12F, 0x14D},
    {0, 0, 0x16B},
    {0x189, 0x1A7, 0x1C5},
    {0, 0, 0x1E3},
    {0x201, 0x21F, 0x23D},
    {0, 0, 0},
    {0, 0, 0},
    {0x25B, 0x279, 0x297},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0x2B5},
};
static AnimationHeader D_80B6AC80 = {{0x1E, 0}, &D_80B6A678, &D_80B6AC20, 3};
static s16 D_80B6AC90[762] = {
    0,
    0xD33,
    0xFE01,
    0xC000,
    0xF3C7,
    0xB639,
    0xB00,
    0xD33,
    0xD34,
    0xD38,
    0xD3E,
    0xD45,
    0xD4E,
    0xD57,
    0xD61,
    0xD6B,
    0xD75,
    0xD7E,
    0xD85,
    0xD8B,
    0xD8F,
    0xD90,
    0xD8F,
    0xD8C,
    0xD86,
    0xD80,
    0xD78,
    0xD6F,
    0xD66,
    0xD5D,
    0xD54,
    0xD4B,
    0xD43,
    0xD3C,
    0xD37,
    0xD34,
    0xFE01,
    0xFE02,
    0xFE05,
    0xFE0B,
    0xFE11,
    0xFE19,
    0xFE21,
    0xFE2A,
    0xFE33,
    0xFE3C,
    0xFE43,
    0xFE4A,
    0xFE4F,
    0xFE53,
    0xFE54,
    0xFE53,
    0xFE50,
    0xFE4B,
    0xFE45,
    0xFE3E,
    0xFE37,
    0xFE2F,
    0xFE26,
    0xFE1E,
    0xFE16,
    0xFE0F,
    0xFE09,
    0xFE05,
    0xFE02,
    0xF7C1,
    0xF7BF,
    0xF7BA,
    0xF7B3,
    0xF7AA,
    0xF79F,
    0xF794,
    0xF788,
    0xF77B,
    0xF76F,
    0xF765,
    0xF75B,
    0xF754,
    0xF74F,
    0xF74D,
    0xF74F,
    0xF753,
    0xF75A,
    0xF762,
    0xF76C,
    0xF776,
    0xF782,
    0xF78D,
    0xF799,
    0xF7A3,
    0xF7AD,
    0xF7B5,
    0xF7BB,
    0xF7BF,
    0xFA23,
    0xFA25,
    0xFA2A,
    0xFA32,
    0xFA3D,
    0xFA4A,
    0xFA58,
    0xFA67,
    0xFA77,
    0xFA87,
    0xFA95,
    0xFAA2,
    0xFAAC,
    0xFAB3,
    0xFAB6,
    0xFAB4,
    0xFAAE,
    0xFAA4,
    0xFA99,
    0xFA8C,
    0xFA7E,
    0xFA6F,
    0xFA60,
    0xFA52,
    0xFA45,
    0xFA3A,
    0xFA30,
    0xFA29,
    0xFA24,
    0xE526,
    0xE535,
    0xE55F,
    0xE5A1,
    0xE5F5,
    0xE658,
    0xE6C5,
    0xE738,
    0xE7AC,
    0xE81D,
    0xE885,
    0xE8DF,
    0xE926,
    0xE954,
    0xE965,
    0xE956,
    0xE92D,
    0xE8EE,
    0xE89E,
    0xE840,
    0xE7DA,
    0xE76F,
    0xE702,
    0xE699,
    0xE636,
    0xE5DD,
    0xE592,
    0xE558,
    0xE533,
    0x2565,
    0x2552,
    0x251F,
    0x24D1,
    0x246A,
    0x23F2,
    0x236B,
    0x22DC,
    0x224A,
    0x21BB,
    0x2136,
    0x20C1,
    0x2065,
    0x2028,
    0x2012,
    0x2025,
    0x205B,
    0x20AD,
    0x2115,
    0x218D,
    0x2210,
    0x2298,
    0x231F,
    0x23A2,
    0x241C,
    0x2488,
    0x24E2,
    0x2528,
    0x2555,
    0xB61,
    0xB64,
    0xB6A,
    0xB73,
    0xB7F,
    0xB8D,
    0xB9C,
    0xBAC,
    0xBBC,
    0xBCB,
    0xBDA,
    0xBE6,
    0xBEF,
    0xBF5,
    0xBF8,
    0xBF6,
    0xBF0,
    0xBE8,
    0xBDD,
    0xBD0,
    0xBC2,
    0xBB4,
    0xBA5,
    0xB96,
    0xB88,
    0xB7B,
    0xB71,
    0xB69,
    0xB63,
    0x7B6,
    0x7B3,
    0x7AC,
    0x7A1,
    0x792,
    0x781,
    0x76D,
    0x758,
    0x743,
    0x72E,
    0x71A,
    0x708,
    0x6FB,
    0x6F1,
    0x6EE,
    0x6F1,
    0x6F9,
    0x705,
    0x715,
    0x727,
    0x73A,
    0x74E,
    0x762,
    0x775,
    0x787,
    0x796,
    0x7A3,
    0x7AD,
    0x7B4,
    0xE588,
    0xE597,
    0xE5C1,
    0xE603,
    0xE657,
    0xE6B9,
    0xE726,
    0xE798,
    0xE80B,
    0xE87B,
    0xE8E2,
    0xE93C,
    0xE982,
    0xE9B0,
    0xE9C1,
    0xE9B3,
    0xE98A,
    0xE94C,
    0xE8FC,
    0xE89F,
    0xE839,
    0xE7CE,
    0xE762,
    0xE6F9,
    0xE697,
    0xE63F,
    0xE5F4,
    0xE5BA,
    0xE595,
    0x2559,
    0x2547,
    0x2514,
    0x24C5,
    0x245F,
    0x23E6,
    0x235F,
    0x22D0,
    0x223E,
    0x21AF,
    0x2129,
    0x20B4,
    0x2058,
    0x201B,
    0x2005,
    0x2018,
    0x204D,
    0x20A0,
    0x2108,
    0x2181,
    0x2204,
    0x228C,
    0x2313,
    0x2396,
    0x2410,
    0x247C,
    0x24D7,
    0x251D,
    0x2549,
    0xB2EE,
    0xB2D1,
    0xB27E,
    0xB1FD,
    0xB157,
    0xB091,
    0xAFB5,
    0xAEC9,
    0xADD6,
    0xACE3,
    0xABF7,
    0xAB1B,
    0xAA56,
    0xA9AF,
    0xA92E,
    0xA8DC,
    0xA8BE,
    0xA8EA,
    0xA965,
    0xAA1F,
    0xAB0B,
    0xAC1B,
    0xAD40,
    0xAE6C,
    0xAF91,
    0xB0A1,
    0xB18D,
    0xB248,
    0xB2C2,
    0xE8D6,
    0xE8EA,
    0xE921,
    0xE975,
    0xE9DD,
    0xEA52,
    0xEACF,
    0xEB4D,
    0xEBC7,
    0xEC39,
    0xECA0,
    0xECF9,
    0xED42,
    0xED7A,
    0xED9C,
    0xEDAA,
    0xEDA3,
    0xED83,
    0xED4A,
    0xECFB,
    0xEC99,
    0xEC26,
    0xEBA6,
    0xEB1E,
    0xEA93,
    0xEA0D,
    0xE993,
    0xE930,
    0xE8EE,
    0x6408,
    0x640C,
    0x6417,
    0x642A,
    0x6446,
    0x646C,
    0x649C,
    0x64D5,
    0x6515,
    0x6559,
    0x659F,
    0x65E1,
    0x661D,
    0x664D,
    0x666D,
    0x667A,
    0x6673,
    0x6655,
    0x6622,
    0x65DF,
    0x6593,
    0x6544,
    0x64F8,
    0x64B2,
    0x6478,
    0x644B,
    0x642B,
    0x6416,
    0x640C,
    0x2A21,
    0x2A26,
    0x2A30,
    0x2A34,
    0x2A23,
    0x29F4,
    0x299F,
    0x2927,
    0x2892,
    0x27EC,
    0x2741,
    0x269F,
    0x2611,
    0x25A3,
    0x255C,
    0x2544,
    0x2559,
    0x25A2,
    0x261D,
    0x26BE,
    0x2778,
    0x283A,
    0x28F2,
    0x298D,
    0x29FD,
    0x2A3B,
    0x2A4D,
    0x2A41,
    0x2A2B,
    0xC566,
    0xC5EC,
    0xC763,
    0xC9A1,
    0xCC78,
    0xCFB2,
    0xD317,
    0xD674,
    0xD9A0,
    0xDC7E,
    0xDEFD,
    0xE114,
    0xE2C3,
    0xE408,
    0xE4E4,
    0xE555,
    0xE55B,
    0xE4DA,
    0xE3C0,
    0xE214,
    0xDFD5,
    0xDD09,
    0xD9BA,
    0xD604,
    0xD219,
    0xCE3C,
    0xCABE,
    0xC7ED,
    0xC611,
    0x1BF2,
    0x1C83,
    0x1E82,
    0x2193,
    0x255D,
    0x2985,
    0x2DB3,
    0x318C,
    0x34B5,
    0x36D6,
    0x3848,
    0x399D,
    0x3ACE,
    0x3BD6,
    0x3CAF,
    0x3D51,
    0x3DB6,
    0x3DD9,
    0x3DB3,
    0x3D3D,
    0x3C71,
    0x3B49,
    0x38F0,
    0x34F9,
    0x2FFA,
    0x2A88,
    0x2539,
    0x20A2,
    0x1D58,
    0xE1E6,
    0xE1D8,
    0xE1BE,
    0xE1B8,
    0xE1EB,
    0xE275,
    0xE35F,
    0xE49D,
    0xE610,
    0xE795,
    0xE90C,
    0xEA5D,
    0xEB77,
    0xEC50,
    0xECDE,
    0xED1E,
    0xED10,
    0xECA5,
    0xEBD6,
    0xEAB1,
    0xE941,
    0xE79E,
    0xE5EA,
    0xE451,
    0xE307,
    0xE22E,
    0xE1CB,
    0xE1BE,
    0xE1D7,
    0x9E2,
    0x95A,
    0x7DA,
    0x58B,
    0x2A5,
    0xFF74,
    0xFC4B,
    0xF972,
    0xF714,
    0xF53B,
    0xF3E0,
    0xF2EE,
    0xF24E,
    0xF1EF,
    0xF1C0,
    0xF1B6,
    0xF1CA,
    0xF200,
    0xF265,
    0xF30A,
    0xF40C,
    0xF58A,
    0xF7A4,
    0xFA64,
    0xFDB1,
    0x140,
    0x4A3,
    0x769,
    0x93B,
    0x16C8,
    0x168E,
    0x15F2,
    0x1511,
    0x140A,
    0x12F7,
    0x11EA,
    0x10F2,
    0x1017,
    0xF5E,
    0xECB,
    0xE5F,
    0xE1E,
    0xE01,
    0xE01,
    0xE1C,
    0xE51,
    0xEA2,
    0xF10,
    0xF9B,
    0x1040,
    0x10FE,
    0x11D2,
    0x12B8,
    0x13A6,
    0x1492,
    0x156C,
    0x1621,
    0x169B,
    0x68CE,
    0x68D7,
    0x68F2,
    0x691F,
    0x6960,
    0x69B3,
    0x6A16,
    0x6A84,
    0x6AF8,
    0x6B6A,
    0x6BD2,
    0x6C27,
    0x6C5F,
    0x6C78,
    0x6C78,
    0x6C5D,
    0x6C26,
    0x6BD4,
    0x6B6B,
    0x6AF3,
    0x6A76,
    0x69FC,
    0x698F,
    0x6936,
    0x68F5,
    0x68CE,
    0x68BF,
    0x68C1,
    0x68C9,
    0xDFC3,
    0xDFF5,
    0xE085,
    0xE164,
    0xE287,
    0xE3D7,
    0xE53E,
    0xE6A3,
    0xE7F0,
    0xE913,
    0xE9FF,
    0xEAA9,
    0xEB06,
    0xEB21,
    0xEB09,
    0xEABF,
    0xEA46,
    0xE99D,
    0xE8C5,
    0xE7C2,
    0xE69C,
    0xE560,
    0xE41C,
    0xE2E6,
    0xE1D4,
    0xE0F8,
    0xE05C,
    0xDFFD,
    0xDFD0,
    0xC9DA,
    0xCA55,
    0xCBA2,
    0xCD82,
    0xCFB3,
    0xD1FD,
    0xD437,
    0xD649,
    0xD826,
    0xD9CD,
    0xDB42,
    0xDC8C,
    0xDDB2,
    0xDEB2,
    0xDF7B,
    0xE009,
    0xE057,
    0xE04C,
    0xDFD6,
    0xDEF5,
    0xDDA6,
    0xDBE6,
    0xD9B5,
    0xD720,
    0xD440,
    0xD145,
    0xCE70,
    0xCC10,
    0xCA71,
    0xDF6C,
    0xDF7D,
    0xDF59,
    0xDF05,
    0xDE88,
    0xDDEA,
    0xDD32,
    0xDC65,
    0xDB8B,
    0xDAAB,
    0xD9CC,
    0xD8F4,
    0xD82A,
    0xD776,
    0xD6DD,
    0xD643,
    0xD590,
    0xD4D3,
    0xD41E,
    0xD380,
    0xD309,
    0xD2C9,
    0xD2D2,
    0xD333,
    0xD479,
    0xD6CB,
    0xD99A,
    0xDC58,
    0xDE78,
    0x14B6,
    0x148F,
    0x141B,
    0x1351,
    0x1233,
    0x10D0,
    0xF42,
    0xDAC,
    0xC2C,
    0xAD7,
    0x9BB,
    0x8DF,
    0x848,
    0x7EC,
    0x7C3,
    0x7CC,
    0x808,
    0x87F,
    0x938,
    0xA31,
    0xB67,
    0xCD3,
    0xE64,
    0x1000,
    0x1182,
    0x12C8,
    0x13B8,
    0x1450,
    0x149E,
    0xFF8F,
    0xFF2E,
    0xFE2A,
    0xFCBB,
    0xFB1E,
    0xF98B,
    0xF827,
    0xF704,
    0xF624,
    0xF581,
    0xF50D,
    0xF4BA,
    0xF47C,
    0xF44D,
    0xF42D,
    0xF417,
    0xF409,
    0xF403,
    0xF40D,
    0xF432,
    0xF482,
    0xF511,
    0xF5F0,
    0xF72D,
    0xF8C2,
    0xFA94,
    0xFC6E,
    0xFE0A,
    0xFF27,
    0xE109,
    0xE1E2,
    0xE2E1,
    0xE3F3,
    0xE506,
    0xE608,
    0xE6E7,
    0xE790,
    0xE7F2,
    0xE7FD,
    0xE7BB,
    0xE73D,
    0xE695,
    0xE5D4,
    0xE50B,
    0xE44D,
    0xE37E,
    0xE286,
    0xE178,
    0xE066,
    0xDF62,
    0xDE81,
    0xDDD4,
    0xDD6E,
    0xDD6E,
    0xDDD3,
    0xDE7F,
    0xDF54,
    0xE037,
    0,
};
static JointIndex D_80B6B284[16] = {
    {0, 7, 0x24},
    {3, 0, 3},
    {0x41, 0x5E, 0x7B},
    {0, 0, 0x98},
    {0, 4, 5},
    {0xB5, 0xD2, 0xEF},
    {0, 0, 0x10C},
    {0, 6, 5},
    {0, 0, 0x129},
    {0, 0x146, 0x163},
    {0, 0x180, 0x19D},
    {0x1BA, 0x1D7, 0x1F4},
    {0, 0x211, 0x22E},
    {0, 0x24B, 0x268},
    {0x285, 0x2A2, 0x2BF},
    {0, 0, 0x2DC},
};
static AnimationHeader D_80B6B2E4 = {{0x1D, 0}, &D_80B6AC90, &D_80B6B284, 7};
static ColliderCylinderInit D_80B6D19C = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static ? D_80B6D1C8;                                /* unable to generate initializer */
static ? D_80B6D1E8;                                /* unable to generate initializer */
static ? D_80B6D1F0;                                /* unable to generate initializer */
static ? D_80B6D1F8;                                /* unable to generate initializer */
static Vec3f D_80B6D200 = {700.0f, 400.0f, 0.0f};
static ? D_80B6D20C;                                /* unable to generate initializer */

void EnSth_Init(EnSth *this, GlobalContext *globalCtx) {
    ObjectContext *sp20;
    ObjectContext *temp_a0;
    ObjectContext *temp_a0_2;
    s32 temp_t1;
    u8 temp_v0;
    u8 phi_v0;
    ObjectContext *phi_a0;
    EnSth *this = (EnSth *) thisx;

    if ((this->actor.params & 0x100) != 0) {
        temp_a0 = &globalCtx->objectCtx;
        sp20 = temp_a0;
        phi_v0 = Object_GetIndex(temp_a0, 0xD9);
        phi_a0 = temp_a0;
    } else {
        temp_a0_2 = &globalCtx->objectCtx;
        sp20 = temp_a0_2;
        phi_v0 = Object_GetIndex(temp_a0_2, 0x26A);
        phi_a0 = temp_a0_2;
    }
    this->unk29E = phi_v0;
    this->unk29F = Object_GetIndex(phi_a0, 0x1DE);
    Actor_SetScale((Actor *) this, 0.01f);
    Collider_InitAndSetCylinder(globalCtx, &this->unk144, (Actor *) this, &D_80B6D19C);
    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    temp_t1 = this->actor.params & 0xF;
    this->unk29C = 0;
    this->unk29A = 8;
    this->actor.minVelocityY = -9.0f;
    this->actor.gravity = -1.0f;
    switch (temp_t1) {
    case 1:
        if ((globalCtx->actorCtx.unk5 & 2) != 0) {
            this->unk2A0 = func_80B67958;
            this->actor.flags |= 0x30;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    case 2:
        if (func_8012F22C(globalCtx->sceneNum) >= 0x1E) {
            this->unk2A0 = func_80B67DA0;
        } else {
            Actor_MarkForDeath((Actor *) this);
        }
        this->actor.textId = 0;
        temp_v0 = gSaveContext.weekEventReg[34];
        if (((temp_v0 & 0x40) == 0) || ((temp_v0 & 8) == 0)) {
            this->unk29C |= 1;
            return;
        }
        return;
    case 3:
        if ((u32) (gSaveContext.roomInf[126][0] & 0xFFFF) >= 0x1EU) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk2A0 = func_80B678A8;
        this->unk29C |= 8;
        this->actor.targetMode = 3;
        this->actor.uncullZoneForward = 800.0f;
        return;
    case 4:
        if ((gSaveContext.weekEventReg[13] & 0x20) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->actor.textId = 0;
        this->unk2A0 = func_80B677BC;
        if ((gSaveContext.weekEventReg[13] & 0x80) != 0) {
            this->unk29C |= 2;
            return;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    case 5:
        if (((gSaveContext.weekEventReg[13] & 0x20) == 0) || (func_8012F22C(globalCtx->sceneNum) < 0x1E)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk2A0 = func_80B67208;
        this->actor.textId = 0;
        this->unk29C |= 8;
        return;
    default:
        this->unk2A0 = func_80B67958;
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return;
    }
}

void EnSth_Destroy(EnSth *this, GlobalContext *globalCtx) {
    EnSth *this = (EnSth *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

s32 func_80B6703C(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x2000) != 0)) {
        return 1;
    }
    return 0;
}

void func_80B670A4(Actor *arg0, s16 arg1) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;

    if (((s32) arg1 >= 0) && ((s32) arg1 < 8) && (arg1 != arg0->unk29A)) {
        temp_v1 = (arg1 * 4) + &D_80B6D1C8;
        sp30 = temp_v1;
        SkelAnime_ChangeAnim(arg0 + 0x190, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) 0, -5.0f);
        arg0->unk29A = arg1;
    }
}

void func_80B67148(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = ((s32) gSaveContext.day % 5) - 1;
    phi_v0 = temp_v0;
    if (temp_v0 < 0) {
        phi_v0 = 0;
    }
    func_801518B0(arg1, *(&D_80B6D1E8 + (phi_v0 * 2)), arg0);
}

void func_80B671A0(void *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg0->unk2A0 = func_80B67208;
        func_801477B4(arg1);
    }
}

void func_80B67208(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80B67148(arg0, arg1);
        arg0->unk2A0 = func_80B671A0;
        return;
    }
    if ((arg0->xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0)) {
        func_800B8614(arg0, arg1, 110.0f);
    }
}

void func_80B672A4(Actor *arg0, GlobalContext *arg1) {
    u16 sp1E;
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0;
    u16 temp_a3;
    s32 phi_v0;
    u16 phi_a3;
    Actor *phi_a2;

    temp_a2 = arg0;
    temp_v0 = ((s32) gSaveContext.day % 5) - 1;
    phi_v0 = temp_v0;
    phi_a2 = temp_a2;
    if (temp_v0 < 0) {
        phi_v0 = 0;
    }
    if ((temp_a2->unk29C & 2) != 0) {
        temp_a3 = *(&D_80B6D1F0 + (phi_v0 * 2));
        phi_a3 = temp_a3;
        if (phi_v0 == 2) {
            temp_a0 = temp_a2;
            arg0 = temp_a2;
            sp1E = temp_a3;
            func_80B670A4(temp_a0, 5, temp_a2, temp_a3);
            phi_a3 = temp_a3;
            phi_a2 = arg0;
        }
    } else {
        phi_a3 = *(&D_80B6D1F8 + (phi_v0 * 2));
    }
    func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
}

void func_80B67348(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 phi_a1;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = arg0->home.rot.z;
        arg0->flags &= 0xFFFEFFFF;
        arg0->unk2A0 = func_80B67540;
        if (temp_v0 != 5) {
            if (temp_v0 != 6) {
                if ((temp_v0 == 8) || (temp_v0 == 9)) {
                    phi_a1 = 0x1137U;
                } else {
                    phi_a1 = 0x1141U;
                    if ((gSaveContext.weekEventReg[13] & 0x40) != 0) {
                        phi_a1 = 0x1142U;
                    }
                }
            } else {
                phi_a1 = 0x1138U;
            }
        } else if ((gSaveContext.weekEventReg[13] & 0x40) != 0) {
            phi_a1 = 0x113DU;
        } else {
            phi_a1 = 0x113CU;
        }
        func_801518B0(arg1, phi_a1, arg0);
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void func_80B67458(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk2A0 = func_80B67348;
        arg0->flags |= 0x10000;
        func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
        if (((s32) gSaveContext.day % 5) == 3) {
            func_80B670A4(arg0, 6);
            return;
        }
        func_80B670A4(arg0, 3);
        return;
    }
    func_800B8A1C(arg0, arg1, (s32) arg0->home.rot.z, 10000.0f, 500.0f);
}

void func_80B67540(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    s32 temp_t0;
    u16 temp_v0_2;
    u32 temp_v0_3;
    u8 temp_v0;
    u8 temp_v1;
    s32 phi_t0;
    s16 phi_t6;

    temp_t0 = ((s32) gSaveContext.day % 5) - 1;
    phi_t0 = temp_t0;
    if (temp_t0 < 0) {
        phi_t0 = 0;
    }
    if (arg0->unk29A == 6) {
        sp2C = phi_t0;
        Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 2, 0x1000, (s16) 0x200);
        arg0->world.rot.y = arg0->shape.rot.y;
    }
    sp2C = phi_t0;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (sp2C = phi_t0, (func_80147624(arg1) != 0))) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 4404:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 4402:
            case 4410:
            case 4415:
                func_80151938(arg1, 0x1133U);
                return;
            case 4403:
                func_80151938(arg1, 0x1136U);
                func_80B670A4(arg0, 6);
                return;
            case 4406:
                gSaveContext.weekEventReg[13] |= 0x80;
                if (phi_t0 != 0) {
                    phi_t6 = 5;
                    if (phi_t0 != 1) {
                        arg0->home.rot.z = 4;
                    } else {
                        goto block_22;
                    }
                } else {
                    temp_v1 = gSaveContext.weekEventReg[13];
                    if ((temp_v1 & 0x40) != 0) {
                        phi_t6 = 6;
block_22:
                        arg0->home.rot.z = phi_t6;
                    } else {
                        gSaveContext.weekEventReg[13] = temp_v1 | 0x40;
                        temp_v0_3 = (u32) (gSaveContext.inventory.upgrades & *(gUpgradeMasks + 0x10)) >> gUpgradeShifts[4];
                        if (temp_v0_3 != 0) {
                            if (temp_v0_3 != 1) {

                            } else {
                                arg0->home.rot.z = 9;
                            }
                        } else {
                            arg0->home.rot.z = 8;
                        }
                    }
                }
                func_801477B4(arg1);
                arg0->unk2A0 = func_80B67458;
                func_80B67458(arg0, arg1);
                return;
            case 4412:
                func_80151938(arg1, 0x113BU);
                return;
            case 4417:
                func_80151938(arg1, 0x1140U);
                func_80B670A4(arg0, 3);
                return;
            default:
                arg0->unk2A0 = func_80B677BC;
                func_801477B4(arg1);
                arg0->unk29C = (u16) (arg0->unk29C | 2);
                return;
            }
        } else {
            /* Duplicate return node #28. Try simplifying control flow for better match */
        }
    } else {
        arg0->unk2A0 = func_80B677BC;
        arg0->unk29C = (u16) (arg0->unk29C | 2);
    }
}

void func_80B677BC(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80B672A4(arg0, arg1);
        arg0->unk2A0 = func_80B67540;
        return;
    }
    if (func_80B6703C(arg0, arg1) != 0) {
        func_800B8614(arg0, arg1, 110.0f);
    }
}

void func_80B67838(void *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg0->unk2A0 = func_80B678A8;
        func_801477B4(arg1);
    }
    arg0->unk294 = -0x1388;
}

void func_80B678A8(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk2A0 = func_80B67838;
    } else if ((func_80B6703C(arg0, arg1) != 0) || (arg0->isTargeted != 0)) {
        temp_v0 = gSaveContext.time;
        if (((s32) temp_v0 >= 0x4000) && ((s32) temp_v0 < 0xC001)) {
            arg0->textId = 0x1130;
        } else {
            arg0->textId = 0x1131;
        }
        func_800B8614(arg0, arg1, 110.0f);
    }
    arg0->unk294 = -0x1388;
}

void func_80B67958(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
}

void func_80B67984(Actor *arg0, GlobalContext *arg1) {
    u16 sp1E;
    u8 temp_v0;
    u8 temp_v0_2;
    u16 phi_a3;
    u16 phi_a3_2;

    temp_v0 = gSaveContext.weekEventReg[34];
    phi_a3_2 = 0x903U;
    if ((temp_v0 & 0x10) != 0) {
        sp1E = 0x903;
        func_80B670A4(arg0, 2, (Actor *) 0x903U);
    } else if ((temp_v0 & 0x20) != 0) {
        sp1E = 0x90F;
        func_80B670A4(arg0, 2, (Actor *) 0x90FU);
        phi_a3_2 = 0x90FU;
    } else if ((temp_v0 & 0x40) != 0) {
        if ((temp_v0 & 8) == 0) {
            phi_a3 = 0x91BU;
        } else {
            phi_a3 = 0x918U;
        }
        sp1E = phi_a3;
        func_80B670A4(arg0, 2, (Actor *) phi_a3);
        phi_a3_2 = phi_a3;
    } else if (func_8012F22C(arg1->sceneNum) >= 0x1E) {
        if (gSaveContext.inventory.items[gItemSlots[0x36]] == 0x36) {
            arg0->unk29C = (u16) (arg0->unk29C | 4);
            phi_a3_2 = 0x919U;
        } else {
            phi_a3_2 = 0x916U;
        }
    } else {
        temp_v0_2 = gSaveContext.weekEventReg[34];
        phi_a3_2 = 0x8FCU;
        if ((temp_v0_2 & 2) != 0) {
            phi_a3_2 = 0x8FFU;
        } else {
            gSaveContext.weekEventReg[34] = temp_v0_2 | 2;
        }
    }
    func_801518B0(arg1, phi_a3_2 & 0xFFFF, arg0);
}

void func_80B67AB4(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk2A0 = func_80B67C1C;
        gSaveContext.weekEventReg[34] |= 0x40;
        func_801518B0(arg1, 0x918U, arg0);
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void func_80B67B50(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk2A0 = func_80B67AB4;
        arg0->flags |= 0x10000;
        func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
        return;
    }
    arg0->unk29C = (u16) (arg0->unk29C & 0xFFFE);
    gSaveContext.weekEventReg[34] |= 8;
    func_800B8A1C(arg0, arg1, 0x8A, 10000.0f, 50.0f);
}

void func_80B67C1C(Actor *arg0, GlobalContext *arg1) {
    void *sp18;
    u16 temp_v1;
    u8 temp_t1;
    void *temp_v0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1 + 0x10000;
        temp_v1 = arg1->msgCtx.unk11F04;
        switch (temp_v1) {
        case 2316:
            sp18 = temp_v0;
            func_80B670A4(arg0, 2, (Actor *) arg1);
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 2326:
        case 2329:
            sp18 = temp_v0;
            func_80B670A4(arg0, 3, (Actor *) arg1);
            func_80151938(arg1, (arg1->msgCtx.unk11F04 + 1) & 0xFFFF);
            return;
        case 2300:
        case 2301:
        case 2304:
        case 2314:
        case 2317:
            func_80151938(arg1, (temp_v1 + 1) & 0xFFFF);
            return;
        case 2305:
        case 2315:
        case 2327:
            func_801477B4(arg1);
            arg0->unk2A0 = func_80B67B50;
            func_80B67B50(arg0, arg1);
            return;
        case 2330:
            temp_t1 = gSaveContext.weekEventReg[34] | 0x40;
            gSaveContext.weekEventReg[34] = temp_t1;
            gSaveContext.weekEventReg[34] = temp_t1 & 0xF7;
            /* fallthrough */
        case 2306:
        case 2307:
        case 2318:
        case 2319:
        case 2328:
        case 2331:
            func_80B670A4(arg0, 3, (Actor *) arg1);
            /* fallthrough */
        default:
            arg0->flags &= 0xFFFEFFFF;
            func_801477B4(arg1);
            arg0->unk2A0 = func_80B67DA0;
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_80B67DA0(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80B67984(arg0, arg1);
        arg0->unk2A0 = func_80B67C1C;
        return;
    }
    if (func_80B6703C(arg0, arg1) != 0) {
        arg0->textId = 0;
        func_800B8614(arg0, arg1, 110.0f);
    }
}

void func_80B67E20(Actor *arg0, GlobalContext *arg1) {
    arg0 = arg0;
    if (func_8012F22C(arg1->sceneNum) >= 0x1E) {
        arg0->update = func_80B680A8;
        arg0->draw = func_80B6849C;
        arg0->flags |= 1;
    }
}

void EnSth_Update(EnSth *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    s32 temp_v1;
    u8 temp_v0;
    s32 phi_v1;
    EnSth *this = (EnSth *) thisx;

    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk29E) != 0) {
        this->actor.objBankIndex = (s8) this->unk29E;
        Actor_SetObjectSegment(globalCtx, (Actor *) this);
        temp_a1 = &this->unk190;
        if ((this->actor.params & 0x100) != 0) {
            temp_a1_2 = &this->unk190;
            sp30 = temp_a1_2;
            SkelAnime_InitSV(globalCtx, temp_a1_2, &D_06005998, &D_80B6B2E4, &this->unk1D4, &this->unk234, 0x10);
            SkelAnime_ChangeAnimDefaultRepeat(sp30, &D_80B6B2E4);
            this->unk29A = 1;
            temp_v0 = gSaveContext.weekEventReg[34];
            if (((temp_v0 & 0x10) != 0) || ((temp_v0 & 0x20) != 0) || ((temp_v0 & 0x40) != 0) || (func_8012F22C(globalCtx->sceneNum) >= 0x1E)) {
                func_80B670A4((Actor *) this, 3);
            }
        } else {
            sp30 = temp_a1;
            SkelAnime_InitSV(globalCtx, temp_a1, &D_060031F8, &D_80B6AC80, &this->unk1D4, &this->unk234, 0x10);
            SkelAnime_ChangeAnimDefaultRepeat(sp30, &D_80B6AC80);
        }
        temp_v1 = this->actor.params & 0xF;
        this->actor.update = func_80B680A8;
        this->actor.draw = func_80B6849C;
        phi_v1 = temp_v1;
        if (temp_v1 != 3) {
            if (temp_v1 != 4) {
                if (temp_v1 != 5) {

                } else {
                    func_80B670A4((Actor *) this, 7);
                    goto block_18;
                }
            } else {
                if ((gSaveContext.weekEventReg[13] & 0x80) != 0) {
                    func_80B670A4((Actor *) this, 5);
                } else {
                    func_80B670A4((Actor *) this, 5);
                }
                goto block_18;
            }
        } else {
            func_80B670A4((Actor *) this, 4);
block_18:
            phi_v1 = this->actor.params & 0xF;
        }
        if ((phi_v1 == 4) && (func_8012F22C(globalCtx->sceneNum) < 0x1E)) {
            this->actor.update = func_80B67E20;
            this->actor.draw = NULL;
            this->actor.flags &= -2;
        }
    }
}

void func_80B680A8(Actor *arg0, GlobalContext *arg1) {
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    Actor *sp34;
    Actor *temp_a2;

    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    temp_a2 = arg0 + 0x144;
    sp34 = temp_a2;
    Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_a2);
    CollisionCheck_SetOC(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
    Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 0.0f, 0.0f, 4U);
    arg0->unk2A0(arg0, arg1);
    if ((func_80B6703C(arg0, arg1) != 0) && ((arg0->unk29C & 8) == 0) && (arg0->unk29A != 5)) {
        sp3C = 0;
        sp3A = 0;
        sp38 = 0;
        func_800E9250(arg1, arg0, arg0 + 0x294, (Vec3s *) &sp38, (bitwise Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
        return;
    }
    Math_SmoothStepToS(arg0 + 0x294, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x296, 0, 6, 0x1838, (s16) 0x64);
}

s32 func_80B681E8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 sp18;
    s32 temp_v1;

    if (arg1 == 0xF) {
        arg4->x += arg5->unk296;
        arg4->z += arg5->unk294;
        *arg2 = D_80B6A1D0;
    }
    if ((arg1 == 8) || (arg1 == 0xA) || (arg1 == 0xD)) {
        temp_v1 = arg1 * 0x32;
        sp18 = temp_v1;
        arg4->y += (s32) (Math_SinS((s16) (arg0->state.frames * (temp_v1 + 0x814))) * 200.0f);
        arg4->z += (s32) (Math_CosS((s16) (arg0->state.frames * (temp_v1 + 0x940))) * 200.0f);
    }
    return 0;
}

void func_80B68310(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_t0;
    void *temp_v1;

    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_80B6D200, arg4 + 0x3C);
        if ((arg4->params & 0x100) == 0) {
            temp_a0 = *arg0;
            temp_v1 = temp_a0->polyOpa.p;
            temp_a0->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w1 = &D_80B6A4F0;
            temp_v1->words.w0 = 0xDE000000;
            return;
        }
        temp_t0 = *arg0;
        if ((arg4->unk29C & 1) != 0) {
            sp20 = temp_t0;
            if (Object_IsLoaded(arg0 + 0x17D88, (s32) arg4->unk29F) != 0) {
                sp20 = temp_t0;
                SysMatrix_StatePush();
                SysMatrix_InsertZRotation_s(0x3A98, 1);
                SysMatrix_InsertTranslation(0.0f, 190.0f, 0.0f, 1);
                temp_v0 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = temp_v0 + 8;
                temp_v0->words.w0 = 0xDA380003;
                sp20 = temp_t0;
                sp18 = temp_v0;
                sp18->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_2 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xDB060028;
                temp_v0_2->words.w1 = (arg0 + (arg4->unk29F * 0x44))->unk17D98;
                temp_v0_3 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w1 = (u32) &D_0A0001A0;
                temp_v0_3->words.w0 = 0xDE000000;
                SysMatrix_StatePop();
            }
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80B6849C(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp34;
    Gfx *sp2C;
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp34 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp34->polyOpa.p;
    sp34->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = sp34;
    sp2C = temp_v0;
    sp2C->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) D_80B6D20C.unk3, (s32) D_80B6D20C.unk4, (s32) D_80B6D20C.unk5, 0xFF);
    temp_v0_2 = sp34->polyOpa.p;
    sp34->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp28 = temp_v0_2;
    sp28->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0x5A, 0x6E, 0x82, 0xFF);
    SkelAnime_DrawSV(globalCtx, this->unk194, this->unk1B0, (s32) this->unk192, func_80B681E8, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B68310, this);
}
