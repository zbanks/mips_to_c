typedef struct EnBsb {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk_144;                 /* inferred */
    /* 0x0188 */ Vec3s unk_188;                     /* inferred */
    /* 0x018E */ char pad_18E[0x78];                /* maybe part of unk_188[21]? */
    /* 0x0206 */ Vec3s unk_206;                     /* inferred */
    /* 0x020C */ char pad_20C[0x78];                /* maybe part of unk_206[21]? */
    /* 0x0284 */ void (*actionFunc)(EnBsb *, GlobalContext *);
    /* 0x0288 */ Path *unk_288;                     /* inferred */
    /* 0x028C */ s32 unk_28C;                       /* inferred */
    /* 0x0290 */ u8 unk_290;                        /* inferred */
    /* 0x0291 */ char pad_291[0x1];
    /* 0x0292 */ s16 unk_292;                       /* inferred */
    /* 0x0294 */ s16 unk_294;                       /* inferred */
    /* 0x0296 */ char pad_296[0x2];
    /* 0x0298 */ f32 unk_298;                       /* inferred */
    /* 0x029C */ char pad_29C[0x4];
    /* 0x02A0 */ f32 unk_2A0;                       /* inferred */
    /* 0x02A4 */ s32 unk_2A4;                       /* inferred */
    /* 0x02A8 */ s32 unk_2A8;                       /* inferred */
    /* 0x02AC */ s16 unk_2AC;                       /* inferred */
    /* 0x02AE */ char pad_2AE[0x1];
    /* 0x02AF */ u8 unk_2AF;                        /* inferred */
    /* 0x02B0 */ s32 unk_2B0;                       /* inferred */
    /* 0x02B4 */ s16 unk_2B4;                       /* inferred */
    /* 0x02B6 */ s16 unk_2B6;                       /* inferred */
    /* 0x02B8 */ s16 unk_2B8;                       /* inferred */
    /* 0x02BA */ s16 unk_2BA;                       /* inferred */
    /* 0x02BC */ s16 unk_2BC;                       /* inferred */
    /* 0x02BE */ char pad_2BE[0x2];
    /* 0x02C0 */ f32 unk_2C0;                       /* inferred */
    /* 0x02C4 */ f32 unk_2C4;                       /* inferred */
    /* 0x02C8 */ char pad_2C8[0x2];
    /* 0x02CA */ s16 unk_2CA;                       /* inferred */
    /* 0x02CC */ s16 unk_2CC;                       /* inferred */
    /* 0x02CE */ s16 unk_2CE;                       /* inferred */
    /* 0x02D0 */ char pad_2D0[0x2];
    /* 0x02D2 */ s16 unk_2D2;                       /* inferred */
    /* 0x02D4 */ char pad_2D4[0x4];                 /* maybe part of unk_2D2[3]? */
    /* 0x02D8 */ s32 unk_2D8;                       /* inferred */
    /* 0x02DC */ s32 unk_2DC;                       /* inferred */
    /* 0x02E0 */ f32 unk_2E0;                       /* inferred */
    /* 0x02E4 */ f32 unk_2E4;                       /* inferred */
    /* 0x02E8 */ f32 unk_2E8;                       /* inferred */
    /* 0x02EC */ Vec3f unk_2EC;                     /* inferred */
    /* 0x02F0 */ f32 unk_2F0;                       /* overlap; inferred */
    /* 0x02F8 */ CollisionPoly *unk_2F8;            /* inferred */
    /* 0x02FC */ char pad_2FC[0x8];                 /* maybe part of unk_2F8[3]? */
    /* 0x0304 */ CollisionPoly *unk_304;            /* inferred */
    /* 0x0308 */ char pad_308[0x14];                /* maybe part of unk_304[6]? */
    /* 0x031C */ s16 unk_31C;                       /* inferred */
    /* 0x031E */ s16 unk_31E;                       /* inferred */
    /* 0x0320 */ s16 unk_320;                       /* inferred */
    /* 0x0322 */ s16 unk_322;                       /* inferred */
    /* 0x0324 */ s16 unk_324;                       /* inferred */
    /* 0x0326 */ char pad_326[0x2];
    /* 0x0328 */ f32 unk_328;                       /* inferred */
    /* 0x032C */ f32 unk_32C;                       /* inferred */
    /* 0x0330 */ Vec3f unk_330;                     /* inferred */
    /* 0x033C */ char pad_33C[0xBF8];               /* maybe part of unk_330[256]? */
    /* 0x0F34 */ ColliderJntSph unk_F34;            /* inferred */
    /* 0x0F54 */ ColliderJntSphElement unk_F54;     /* inferred */
    /* 0x0F94 */ char pad_F94[0x184];               /* maybe part of unk_F54[7]? */
    /* 0x1118 */ u16 unk_1118;                      /* inferred */
    /* 0x111A */ s16 unk_111A;                      /* inferred */
    /* 0x111C */ s16 unk_111C;                      /* inferred */
    /* 0x111E */ char pad_111E[0xA];                /* maybe part of unk_111C[6]? */
    /* 0x1128 */ f32 unk_1128;                      /* inferred */
    /* 0x112C */ f32 unk_112C;                      /* inferred */
    /* 0x1130 */ f32 unk_1130;                      /* inferred */
    /* 0x1134 */ f32 unk_1134;                      /* inferred */
    /* 0x1138 */ f32 unk_1138;                      /* inferred */
    /* 0x113C */ f32 unk_113C;                      /* inferred */
    /* 0x1140 */ f32 unk_1140;                      /* inferred */
    /* 0x1144 */ f32 unk_1144;                      /* inferred */
    /* 0x1148 */ f32 unk_1148;                      /* inferred */
    /* 0x114C */ f32 unk_114C;                      /* inferred */
    /* 0x1150 */ f32 unk_1150;                      /* inferred */
    /* 0x1154 */ f32 unk_1154;                      /* inferred */
} EnBsb;                                            /* size = 0x1158 */

struct _mips2c_stack_EnBsb_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBsb_Draw {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x18];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnBsb_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnBsb_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C0B290 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C0B31C {
    /* 0x00 */ char pad_0[0x9C];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ ? spC0;                              /* inferred */
    /* 0xC0 */ char pad_C0[0x4];
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ char pad_C8[0x4];
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80C0B888 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0B970 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C0BA58 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SkelAnime *sp18;                     /* inferred */
    /* 0x1C */ char pad_1C[0x2];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0BC30 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ char pad_36[0x2];
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad_3E[0x2];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C0BE1C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ f32 *sp34;                           /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0BF2C {};              /* size 0x0 */

struct _mips2c_stack_func_80C0BFE8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0C0F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0C238 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0C32C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0C364 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0C430 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0C484 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0C610 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C0C6A8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0C86C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0C8EC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0CA28 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0CB3C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C0CCCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0CD04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0CD90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0CDE4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80C0CF4C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0CFDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0D00C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x8];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0D10C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0D214 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0D27C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0D334 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0D384 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0D3C0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0D51C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80C0D964 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0D9B4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0DA58 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0DB18 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ PosRot *sp3C;                        /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0xA];                    /* maybe part of sp44[3]? */
    /* 0x52 */ s16 sp52;                            /* inferred */
    /* 0x54 */ char pad_54[0xC];                    /* maybe part of sp52[7]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80C0E178 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0E1C0 {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80C0E3B8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0E480 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0E4FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0E618 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80C0E9CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C0EEA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0F078 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0F170 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0F544 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0F640 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0F758 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

? func_800BC770(GlobalContext *, s16, s16);         /* extern */
? func_800BC848(Actor *, GlobalContext *, s32, ?);  /* extern */
s16 func_8013D83C(Path *, s32, PosRot *, f32 *);    /* extern */
? func_8013EC44(f32, s32, s32, s32);                /* extern */
? func_80169940(GlobalContext *, s16, s32);         /* extern */
void func_80C0B290(Actor *arg0, s32 arg1, Actor *, f32); /* static */
void func_80C0B31C(GlobalContext *arg0, Actor *arg1, CollisionPoly **arg2); /* static */
s32 func_80C0B888(EnBsb *arg0, GlobalContext *arg1); /* static */
void func_80C0B970(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C0BA58(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80C0BC30(EnBsb *arg0);                     /* static */
void func_80C0BE1C(EnBsb *arg0, GlobalContext *arg1, EnBsb *, GlobalContext *); /* static */
void func_80C0BF2C(EnBsb *arg0);                    /* static */
void func_80C0C0F4(EnBsb *arg0, GlobalContext *arg1); /* static */
void func_80C0C32C(EnBsb *arg0);                    /* static */
void func_80C0C430(EnBsb *arg0);                    /* static */
void func_80C0C610(Actor *arg0);                    /* static */
void func_80C0C86C(EnBsb *arg0, f32, EnBsb *, s32, f32 *, EnBsb *); /* static */
void func_80C0CA28(EnBsb *arg0, GlobalContext *arg1); /* static */
void func_80C0CCCC(EnBsb *arg0);                    /* static */
void func_80C0CD90(EnBsb *arg0);                    /* static */
void func_80C0CF4C(EnBsb *arg0);                    /* static */
void func_80C0D00C(Actor *arg0);                    /* static */
void func_80C0D214(Actor *arg0, s16);               /* static */
void func_80C0D334(Actor *arg0, s32);               /* static */
void func_80C0D3C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C0D964(EnBsb *arg0, GlobalContext *arg1); /* static */
void func_80C0DA58(EnBsb *arg0);                    /* static */
void func_80C0E178(Actor *arg0);                    /* static */
void func_80C0E3B8(EnBsb *arg0);                    /* static */
void func_80C0E618(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80C0E9CC(EnBsb *arg0, GlobalContext *arg1); /* static */
s32 func_80C0EEA0(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
s32 func_80C0F078(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_80C0F170(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C0F544(Actor *arg0, f32 *arg1, f32 *arg2, ? *arg3, f32 arg4, s32 arg5); /* static */
void func_80C0F640(EnBsb *arg0, GlobalContext *arg1); /* static */
void func_80C0F758(EnBsb *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_06000C50;
extern AnimationHeader D_06004894;
extern AnimationHeader D_060086BC;
extern SkeletonHeader D_0600C3E0;
static f32 D_80C0F8D0 = 0.0f;
static ColliderJntSphElementInit D_80C0F8D4[7] = {
    {
        {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xA, {{0x3E8, 0x190, 0}, 0x28}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 4, 8}, {0, 0, 0}, 1, 1, 1},
        {9, {{0, 0x2BC, 0xC8}, 0x23}, 0x64},
    },
    {
        {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {6, {{0x64, 0x258, 0}, 0x23}, 0x64},
    },
    {
        {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
        {3, {{0x190, 0xC8, 0}, 0x28}, 0x64},
    },
    {
        {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xD, {{0x2BC, 0xFF9C, 0}, 0x23}, 0x64},
    },
    {
        {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0x10, {{0xC8, 0x12C, 0}, 0x1E}, 0x64},
    },
    {
        {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0x13, {{0xC8, 0x12C, 0}, 0x1E}, 0x64},
    },
};
static ColliderJntSphInit D_80C0F9D0 = {{6, 0x11, 9, 9, 0x10, 0}, 7, &D_80C0F8D4};
static DamageTable D_80C0F9E0 = {
    {
        0x10,
        0xD1,
        0,
        0xE1,
        0xF0,
        0xF0,
        0,
        0xF0,
        0xD1,
        0xD1,
        0xD1,
        0x20,
        0x30,
        0x40,
        0xF0,
        0xC0,
        0xF0,
        0xE1,
        0x10,
        0x51,
        0,
        0,
        0xF0,
        0xD1,
        0xD1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xD1,
    },
};
static ? D_80C0FA20;                                /* unable to generate initializer */
static ? D_80C0FA84;                                /* unable to generate initializer */
static ? D_80C0FAA0;                                /* unable to generate initializer */
static ? D_80C0FAAC;                                /* unable to generate initializer */
static ? D_80C0FAB8;                                /* unable to generate initializer */
static ? D_80C0FAC0;                                /* unable to generate initializer */
static ? D_80C0FAC8;                                /* unable to generate initializer */

void func_80C0B290(Actor *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk_2D8 = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80C0FA20 + (arg1 * 4)));
    temp_v1 = arg0->unk_2D8;
    arg0[2].focus.pos.x = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80C0FA20 + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80C0FA84 + temp_v1), -2.0f);
}

void func_80C0B31C(GlobalContext *arg0, Actor *arg1, CollisionPoly **arg2) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC4;
    ? spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spAC;
    ? spA8;
    f32 spA4;
    f32 sp9C;
    f32 *temp_s1;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    s32 temp_s0;
    s32 phi_s0;

    temp_s5 = &sp9C;
    spA8.unk_0 = (s32) D_80C0FAA0.unk_0;
    spA8.unk_4 = (s32) D_80C0FAA0.unk_4;
    spA8.unk_8 = (s32) D_80C0FAA0.unk_8;
    temp_s5->unk_0 = D_80C0FAAC.unk_0;
    temp_s5[1] = D_80C0FAAC.unk_4;
    temp_s5[2] = D_80C0FAAC.unk_8;
    temp_f12 = (Rand_ZeroOne() - 0.5f) * 12.56f;
    spD0 = arg1->floorHeight;
    spCC = (sin_rad(temp_f12) * 5.0f) + arg2->unk_0;
    spD4 = (cos_rad(temp_f12) * 5.0f) + arg2[2];
    sp9C = randPlusMinusPoint5Scaled(1.0f) * 0.5f;
    spA4 = randPlusMinusPoint5Scaled(1.0f) * 0.5f;
    spAC += (Rand_ZeroOne() - 0.5f) * 15.0f;
    temp_s1 = &spCC;
    EffectSsHahen_Spawn(arg0, (Vec3f *) temp_s1, (Vec3f *) &spA8, (Vec3f *) temp_s5, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 5.0f) + 10.0f), (s16) -1, (s16) 0xA, NULL);
    func_800BBFB0(arg0, (Vec3f *) temp_s1, 20.0f, 1, (s16) 0x12C, (s16) 0xA, (u8) 5);
    phi_s0 = 0;
    if (arg1->unk_2AE == 0) {
        arg1->unk_2AE = 1U;
        temp_s3 = &spB4;
        do {
            if ((phi_s0 & 1) == 0) {
                Math_Vec3f_Copy((Vec3f *) temp_s1, arg1 + 0x304);
            } else {
                Math_Vec3f_Copy((Vec3f *) temp_s1, arg1 + 0x2F8);
            }
            spCC += randPlusMinusPoint5Scaled(5.0f);
            spD0 += randPlusMinusPoint5Scaled(5.0f);
            temp_f0 = randPlusMinusPoint5Scaled(5.0f);
            spC4 = -1.0f;
            spD4 += temp_f0;
            spB4 = (Rand_ZeroOne() - 0.5f) * 4.0f;
            spB8 = (Rand_ZeroOne() * 10.0f) + 4.0f;
            spBC = (Rand_ZeroOne() - 0.5f) * 4.0f;
            temp_f20 = (randPlusMinusPoint5Scaled(1.0f) * 0.002f) + 0.005f;
            func_80C0F544(arg1, temp_s1, temp_s3, &spC0, temp_f20, (s32) Rand_ZeroFloat(10.0f) + 0x1E);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0xA);
    }
}

void EnBsb_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s8 temp_s0;
    s16 phi_s0;
    EnBsb *phi_s1;
    EnBsb *this = (EnBsb *) thisx;

    Actor_SetScale((Actor *) this, 0.04f);
    this->unk_2CA = 0xFF;
    this->actor.colChkInfo.mass = 0xFF;
    if ((this->actor.params & 0x8000) != 0) {
        SkelAnime_Init(globalCtx, &this->unk_144, &D_0600C3E0, &D_06004894, &this->unk_188, &this->unk_206, 0x15);
        this->unk_2B0 = this->actor.params & 0xFF;
        func_80C0E3B8(this);
        return;
    }
    this->actor.colChkInfo.damageTable = &D_80C0F9E0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_0600C3E0, &D_060086BC, &this->unk_188, &this->unk_206, 0x15);
    temp_v0 = this->actor.params;
    this->unk_2B6 = ((s32) temp_v0 >> 7) & 0x1F;
    this->unk_2B8 = temp_v0 & 0x7F;
    this->unk_2BA = this->actor.world.rot.z & 0x7F;
    this->actor.colChkInfo.health = 0x18;
    this->actor.hintId = 0x21;
    this->actor.gravity = -2.0f;
    Collider_InitAndSetJntSph(globalCtx, &this->unk_F34, (Actor *) this, &D_80C0F9D0, &this->unk_F54);
    if (this->unk_2B6 == 0x1F) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_s0 = this->actor.cutscene;
    phi_s0 = (s16) temp_s0;
    phi_s1 = this;
    if (temp_s0 != -1) {
        do {
            phi_s1->unk_2CC = phi_s0;
            temp_v0_2 = ActorCutscene_GetAdditionalCutscene(phi_s0);
            phi_s0 = temp_v0_2;
            phi_s1 += 2;
        } while (temp_v0_2 != -1);
    }
    this->actor.targetMode = 0xA;
    if ((gSaveContext.weekEventReg[23] & 4) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_80C0BF2C(this);
}

void EnBsb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_a0;
    EnBsb *this = (EnBsb *) thisx;

    if (this->unk_2B0 == 0) {
        func_801A2ED8();
        Collider_DestroyJntSph(globalCtx, &this->unk_F34);
    }
    temp_a0 = this->unk_2D2;
    if (ActorCutscene_GetCurrentIndex() == temp_a0) {
        ActorCutscene_Stop(temp_a0);
    }
}

s32 func_80C0B888(EnBsb *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    if (arg0->unk_2DC == 0) {
        temp_v0 = arg0->actor.yawTowardsPlayer - arg0->unk_2BC;
        phi_v1 = temp_v0 << 0x10;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s32) temp_v0 * -0x10000;
        }
        phi_v0 = 0;
        if (((phi_v1 >> 0x10) < (s32) (s16) (gGameInfo->data[2401] + 0x4000)) && (fabsf(arg0->actor.world.pos.y - arg1->actorCtx.actorList[2].first->unk_28) < 20.0f) && (arg0->actor.xzDistToPlayer < 200.0f)) {
            arg0->unk_2DC = 1;
            func_801A2E54(0x38);
            return 1;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return phi_v0;
    }
    phi_v0 = 1;
    return phi_v0;
}

void func_80C0B970(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s32 temp_f18;
    s32 phi_a2;

    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    if ((func_801378B8(temp_a0, 8.0f) != 0) || (func_801378B8(temp_a0, 14.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x3AA2U);
        temp_f18 = (s32) ((700.0f - arg0->xzDistToPlayer) * 0.01f);
        phi_a2 = (s32) (s16) temp_f18;
        if ((s32) (s16) temp_f18 >= 5) {
            phi_a2 = 4;
        }
        if (phi_a2 > 0) {
            func_800BC848(arg0, arg1, phi_a2, 2);
        }
        if (func_801378B8(sp20, 8.0f) != 0) {
            func_80C0B31C(arg1, arg0, &arg0[2].wallPoly);
            return;
        }
        func_80C0B31C(arg1, arg0, (CollisionPoly **) &arg0[2].speedXZ);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80C0BA58(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    SkelAnime *sp18;
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s32 temp_f18;
    s16 phi_v1;

    temp_a0 = arg0 + 0x144;
    sp18 = temp_a0;
    if ((func_801378B8(temp_a0, 2.0f) != 0) || (func_801378B8(temp_a0, 4.0f) != 0) || (func_801378B8(sp18, 6.0f) != 0) || (func_801378B8(sp18, 8.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x3AA2U);
        temp_v0 = gGameInfo;
        func_800BC770(arg1, (s16) (temp_v0->data[2410] + 1), (s16) (temp_v0->data[2411] + 2));
        if ((func_801378B8(sp18, 4.0f) != 0) || (func_801378B8(sp18, 8.0f) != 0)) {
            func_80C0B31C(arg1, arg0, &arg0[2].wallPoly);
        } else {
            func_80C0B31C(arg1, arg0, (CollisionPoly **) &arg0[2].speedXZ);
        }
    }
    temp_v0_2 = gGameInfo;
    temp_f0 = arg0->xzDistToPlayer;
    if (temp_f0 < ((f32) temp_v0_2->data[2407] + 400.0f)) {
        temp_f18 = (s32) (((f32) temp_v0_2->data[2408] + 160.0f) - (temp_f0 * 0.3f));
        phi_v1 = (s16) temp_f18;
        if ((s32) (s16) temp_f18 >= 0x47) {
            phi_v1 = 0x46;
        } else if ((s32) (s16) temp_f18 < 0) {
            phi_v1 = 0;
        }
        sp1E = phi_v1;
        if (func_801378B8(sp18, 1.0f) != 0) {
            temp_v0_3 = gGameInfo;
            func_8013EC44((f32) temp_v0_3->data[2415], (temp_v0_3->data[2412] + phi_v1) & 0xFF, (temp_v0_3->data[2413] + 0xF) & 0xFF, (temp_v0_3->data[2414] + 0x46) & 0xFF);
        }
    }
}

s32 func_80C0BC30(EnBsb *arg0) {
    s16 sp38;
    s16 sp30;
    f32 temp_f0;

    temp_f0 = arg0->actor.world.pos.z;
    if ((temp_f0 < -2180.0f) && (temp_f0 > -2470.0f) && (fabsf(arg0->actor.world.pos.y - arg0->actor.home.pos.y) < 30.0f)) {
        sp38.unk_0 = (s32) D_80C0FAB8.unk_0;
        (&sp38)[2] = D_80C0FAB8.unk_4;
        sp30.unk_0 = (s32) D_80C0FAC0.unk_0;
        (&sp30)[2] = D_80C0FAC0.unk_4;
        Math_SmoothStepToS(arg0 + 0x316, sp38, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x318, sp3A, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x31A, sp3C, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x310, sp30, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x312, sp32, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x314, sp34, 1, 0x7D0, (s16) 0);
        return 1;
    }
    if (arg0->unk_31A != 0) {
        Math_SmoothStepToS(arg0 + 0x316, 0, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x318, 0, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x31A, 0, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x310, 0, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x312, 0, 1, 0x7D0, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x314, 0, 1, 0x7D0, (s16) 0);
    }
    return 0;
}

void func_80C0BE1C(EnBsb *arg0, GlobalContext *arg1) {
    f32 *sp34;
    f32 *sp30;
    f32 *temp_a0;
    f32 *temp_a0_2;

    temp_a0 = arg0 + 0x1128;
    if (arg0->unk_111A != 0) {
        sp34 = temp_a0;
        Math_ApproachF(temp_a0, arg0->unk_1140, 0.5f, 30.0f);
        Math_ApproachF(arg0 + 0x112C, arg0->unk_1144, 0.5f, 30.0f);
        Math_ApproachF(arg0 + 0x1130, arg0->unk_1148, 0.5f, 30.0f);
        temp_a0_2 = arg0 + 0x1134;
        sp30 = temp_a0_2;
        Math_ApproachF(temp_a0_2, arg0->unk_114C, 0.5f, 30.0f);
        Math_ApproachF(arg0 + 0x1138, arg0->unk_1150, 0.5f, 30.0f);
        Math_ApproachF(arg0 + 0x113C, arg0->unk_1154, 0.5f, 30.0f);
        Math_ApproachF(arg0 + 0x1120, arg0->unk_1124, 0.5f, 10.0f);
        Play_CameraSetAtEye(arg1, arg0->unk_111A, (Vec3f *) sp30, (Vec3f *) sp34);
        func_80169940(arg1, arg0->unk_111A, arg0->unk_1120);
        ShrinkWindow_SetLetterboxTarget(0x1B);
    }
}

void func_80C0BF2C(EnBsb *arg0) {
    s32 temp_v1;

    arg0->unk_F34.elements->unk_2E = 0x6E;
    arg0->unk_F34.elements->dim.modelSphere.center.x = 0x12C;
    arg0->unk_F34.elements->dim.modelSphere.center.y = 0x190;
    arg0->unk_F34.base.colType = 0xC;
    temp_v1 = 3 << 6;
    arg0->unk_F34.elements->info.elemType = 2;
    arg0->unk_F34.elements[1].info.elemType = 2;
    arg0->unk_F34.elements[2].info.elemType = 2;
    (arg0->unk_F34.elements + temp_v1)->unk_14 = 2U;
    (arg0->unk_F34.elements + temp_v1)->unk_54 = 2U;
    (arg0->unk_F34.elements + temp_v1)->unk_94 = 2U;
    (arg0->unk_F34.elements + temp_v1)->unk_D4 = 2U;
    arg0->actor.flags |= 0x8000000;
    gSaveContext.weekEventReg[85] &= 0xBF;
    arg0->unk_2B4 = 0;
    arg0->actionFunc = func_80C0BFE8;
}

void func_80C0BFE8(EnBsb *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    phi_v1 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    if (((phi_v1 >> 0x10) < 0x4300) && !(this->actor.xzDistToPlayer > 300.0f)) {
        if ((globalCtx->actorCtx.actorList[2].first->unk_A70 * 0x10) < 0) {
            if (this->unk_290 == 0) {
                this = this;
                play_sound(0x4807U);
                this->unk_290 = 1;
            }
        } else {
            this->unk_290 = 0;
        }
        if ((globalCtx->msgCtx.unk1202A == 3) && (globalCtx->msgCtx.unk1202E == 0)) {
            globalCtx->msgCtx.unk1202A = 4;
            this = this;
            func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 9U);
            func_80C0C0F4(this, globalCtx);
        }
    }
}

void func_80C0C0F4(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    arg0->flags |= 0x2000000;
    arg0->unk_2A4 = 0;
    arg0->unk_F50->unk_2E = 0x28;
    arg0->unk_F50->unk_28 = 0x3E8;
    arg0->unk_F50->unk_2A = 0x190;
    arg0->unk_F48 = 0xA;
    temp_v0 = 3 << 6;
    arg0->unk_F50->unk_14 = 0;
    arg0->unk_F50->unk_54 = 0;
    arg0->unk_F50->unk_94 = 0;
    (arg0->unk_F50 + temp_v0)->unk_14 = 0;
    (arg0->unk_F50 + temp_v0)->unk_54 = 0;
    (arg0->unk_F50 + temp_v0)->unk_94 = 0;
    (arg0->unk_F50 + temp_v0)->unk_D4 = 0;
    arg0->unk_2AE = 0;
    Audio_PlayActorSound2(arg0, 0x3869U);
    func_80C0B290(arg0, 0);
    if (ActorCutscene_GetCanPlayNext(arg0->unk_2CC) == 0) {
        ActorCutscene_SetIntentToPlay(arg0->unk_2CC);
        arg0->unk_2B4 = 1;
        arg0[1].overlayEntry = (ActorOverlay *) func_80C0C238;
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_2CC, arg0);
    arg0->flags &= 0xF7FFFFFF;
    Actor_SetSwitchFlag(arg1, (s32) arg0[2].world.rot.x);
    arg0->unk_2A4 = 1;
    arg0->unk_2B4 = (s16) 1;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0C238;
}

void func_80C0C238(EnBsb *this, GlobalContext *globalCtx) {
    s32 temp_v1;
    s32 phi_v1;

    func_80C0BC30(this);
    temp_v1 = this->unk_2A4;
    phi_v1 = temp_v1;
    if (temp_v1 == 0) {
        if (ActorCutscene_GetCanPlayNext(this->unk_2CC) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_2CC);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(this->unk_2CC, (Actor *) this);
        this->actor.flags &= 0xF7FFFFFF;
        Actor_SetSwitchFlag(globalCtx, (s32) this->unk_2B8);
        this->unk_2A4 = 1;
        phi_v1 = 1;
        goto block_4;
    }
block_4:
    if (phi_v1 == 1) {
        if ((globalCtx->gameplayFrames & 1) == 0) {
            func_80C0B31C(globalCtx, (Actor *) this, (CollisionPoly **) &this->actor.world);
        }
        Math_ApproachF(&this->actor.shape.shadowScale, 25.0f, 1.0f, 2.5f);
        if (this->unk_2C4 <= this->unk_144.animCurrentFrame) {
            func_80C0C32C(this);
        }
    }
}

void func_80C0C32C(EnBsb *arg0) {
    arg0->unk_2A4 = 0;
    func_80C0B290((Actor *)1);
    arg0->actionFunc = func_80C0C364;
}

void func_80C0C364(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp2C;
    s16 sp2A;
    s32 sp24;
    Path *temp_a0;
    s16 temp_v0;
    s32 phi_v1;

    sp2A = this->actor.yawTowardsPlayer;
    this->unk_288 = func_8013D648(globalCtx, this->unk_2B6, 0x1F);
    func_80C0BC30(this);
    temp_a0 = this->unk_288;
    if (temp_a0 != 0) {
        sp2A = func_8013D83C(temp_a0, this->unk_28C, &this->actor.world, &sp2C);
    }
    this->actor.world.rot.y += -0x2EE;
    temp_v0 = this->actor.world.rot.y - sp2A;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    sp24 = phi_v1;
    func_80C0B970((Actor *) this, globalCtx);
    if (phi_v1 < 0x1000) {
        this->unk_2BC = this->actor.world.rot.y;
        func_80C0C430(this);
    }
}

void func_80C0C430(EnBsb *arg0) {
    arg0->unk_2A4 = 0;
    if (arg0->unk_2D8 != 1) {
        func_80C0B290((Actor *)1);
    }
    arg0->unk_294 = 0x46;
    arg0->unk_2B4 = 2;
    arg0->actionFunc = func_80C0C484;
}

void func_80C0C484(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp34;
    s16 sp32;
    Path *temp_a0;
    Path *temp_a0_3;
    s16 temp_a0_2;
    s16 temp_v1;
    s32 temp_t5;
    s16 phi_a1;
    s32 phi_v0;

    func_80C0BC30(this);
    if (func_80C0B888(this, globalCtx) != 0) {
        this->actor.flags &= 0xFDFFFFFF;
        func_80C0C86C(this);
        return;
    }
    phi_a1 = this->actor.yawTowardsPlayer;
    if (this->unk_294 == 1) {
        this->actor.flags &= 0xFDFFFFFF;
    }
    temp_a0 = this->unk_288;
    if (temp_a0 != 0) {
        phi_a1 = func_8013D83C(temp_a0, this->unk_28C, &this->actor.world, &sp34);
    }
    sp32 = phi_a1;
    Math_SmoothStepToS(&this->actor.world.rot.y, phi_a1, 2, 0x2EE, (s16) 5);
    temp_a0_2 = this->actor.world.rot.y;
    temp_v1 = temp_a0_2 - phi_a1;
    phi_v0 = temp_v1 << 0x10;
    if ((s32) temp_v1 < 0) {
        phi_v0 = (s32) temp_v1 * -0x10000;
    }
    if ((phi_v0 >> 0x10) < 0x1000) {
        this->unk_2BC = temp_a0_2;
        this->actor.speedXZ = 3.5f;
        if (this->unk_2AF == 0) {
            this->unk_2AF = 1;
            func_801A2E54(3);
        }
    }
    func_80C0B970((Actor *) this, globalCtx);
    if (sp34 < 25.0f) {
        temp_a0_3 = this->unk_288;
        if (temp_a0_3 != 0) {
            temp_t5 = this->unk_28C + 1;
            this->unk_28C = temp_t5;
            if (temp_t5 >= (s32) temp_a0_3->count) {
                this->unk_28C = temp_t5 - 1;
                func_80C0DA58(this);
            }
        }
    }
}

void func_80C0C610(Actor *arg0) {
    arg0->unk_2A4 = 0;
    arg0->speedXZ = 0.0f;
    func_80C0B290(arg0, 2);
    Audio_PlayActorSound2(arg0, 0x3AA5U);
    arg0->unk_294 = 0;
    if ((bitwise s32) arg0[2].targetArrowOffset != 0) {
        arg0->unk_294 = 0x28;
        Audio_PlayActorSound2(arg0, 0x389EU);
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
    }
    arg0->unk_2B4 = 3;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0C6A8;
}

void func_80C0C6A8(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp34;
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s32 temp_t3;
    s32 temp_v0_2;
    s32 temp_v1;

    sp34 = this->unk_144.animCurrentFrame;
    func_80C0B888(this, globalCtx);
    temp_v1 = this->unk_2DC;
    if (((temp_v1 == 0) || ((temp_v1 != 0) && (this->unk_2D8 == 2) && (this->unk_2C4 <= sp34) && (this->unk_294 == 0))) && ((temp_v0 = this->unk_324, (temp_v0 == 0xB)) || (temp_v0 == 0xA)) && (this->unk_322 != 0)) {
        func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_330, 0x11, 2, this->unk_32C, 0.4f);
        this->unk_322 = 0;
        this->unk_324 = 0;
    }
    temp_v0_2 = this->unk_2D8;
    if ((temp_v0_2 == 2) && (this->unk_2C4 <= sp34) && (this->unk_294 == 0)) {
        if (this->unk_2DC == 0) {
            func_80C0B290((Actor *) this, 3);
            return;
        }
        func_80C0C86C(this);
        return;
    }
    if (temp_v0_2 == 3) {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x7D0, (s16) 0);
        temp_a0 = &this->unk_144;
        sp30 = temp_a0;
        if ((func_801378B8(temp_a0, 7.0f) != 0) || (func_801378B8(temp_a0, 15.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) this, 0x3AA3U);
        }
        if (this->unk_2C4 <= sp34) {
            temp_t3 = this->unk_2A4 + 1;
            this->unk_2A4 = temp_t3;
            if (temp_t3 >= 2) {
                func_80C0C430(this);
            }
        }
    }
}

void func_80C0C86C(Actor *arg0) {
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk_2A4 = 0;
    temp_a2[2].targetArrowOffset = 1e-45.0f;
    temp_a2->speedXZ = 2.0f;
    arg0 = temp_a2;
    func_80C0B290(temp_a2, 4, temp_a2);
    arg0->unk_294 = Rand_S16Offset(0, 0x1E);
    gSaveContext.weekEventReg[85] |= 0x40;
    arg0->unk_2B4 = 4;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0C8EC;
}

void func_80C0C8EC(EnBsb *this, GlobalContext *globalCtx) {
    Actor *sp2C;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if (func_80C0BC30(this) == 0) {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xBB8, (s16) 0);
    }
    if ((this->unk_294 == 0) && (fabsf(sp2C->world.pos.y - this->actor.world.pos.y) >= 100.0f) && (this->actor.xzDistToPlayer < 500.0f)) {
        func_80C0CA28(this, globalCtx);
        return;
    }
    func_80C0BA58((Actor *) this, globalCtx);
    if ((this->unk_294 == 0) && (Actor_IsActorFacingLink((Actor *) this, 0x11C7) != 0) && (fabsf(this->actor.world.pos.y - sp2C->world.pos.y) < 20.0f) && (this->actor.xzDistToPlayer < 180.0f)) {
        func_80C0CD90(this);
    }
}

void func_80C0CA28(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_2A4 = 0;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x3AAAU);
    arg0->velocity.y = 85.0f;
    arg0->gravity = -8.0f;
    func_80C0B290(arg0, 0xB);
    func_800BBDAC(arg1, arg0, (Vec3f *) &arg0[2].wallPoly, 5.0f, 0xA, 8.0f, (s16) 0x3E8, (s16) 0x64, (u8) 1);
    func_800BBDAC(arg1, arg0, (Vec3f *) &arg0[2].speedXZ, 5.0f, 0xA, 8.0f, (s16) 0x3E8, (s16) 0x64, (u8) 1);
    Audio_PlayActorSound2(arg0, 0x386CU);
    arg0->flags |= 0x8000000;
    arg0->unk_2B4 = 5;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0CB3C;
}

void func_80C0CB3C(EnBsb *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if (this->actor.velocity.y > 0.0f) {
        sp3C = temp_v0;
        Math_ApproachF((f32 *) &this->actor.world, temp_v0->world.pos.x, 0.5f, 30.0f);
        Math_ApproachF(&this->actor.world.pos.z, temp_v0->world.pos.z, 0.5f, 30.0f);
        return;
    }
    this->actor.gravity = -8.0f;
    if (this->unk_2D8 != 0x16) {
        sp3C = temp_v0;
        func_80C0B290((Actor *) this, 0x16, (bitwise Actor *) 0.5f, 30.0f);
    }
    if ((fabsf(globalCtx->actorCtx.actorList[2].first->world.pos.y - this->actor.world.pos.y) < 40.0f) && (this->actor.xzDistToPlayer < 70.0f) && (globalCtx->actorCtx.actorList[2].first->unk_D5C == 0)) {
        func_800B8D50(globalCtx, (Actor *) this, 2.0f, this->actor.yawTowardsPlayer, 5.0f, 0x10U);
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale, 0xA, 8.0f, (s16) 0x7D0, (s16) 0x64, (u8) 1);
        func_800BC848((Actor *) this, globalCtx, 0xA, 0xA);
        Audio_PlayActorSound2((Actor *) this, 0x387BU);
        func_80C0CCCC(this);
    }
}

void func_80C0CCCC(Actor *arg0) {
    func_80C0B290(arg0, 0x17);
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0CD04;
}

void func_80C0CD04(EnBsb *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = this->unk_2D8;
    if ((temp_v0 == 0x18) && (this->unk_2C4 <= this->unk_144.animCurrentFrame)) {
        this->unk_294 = 0xA;
        this->actor.flags &= 0xF7FFFFFF;
        this->actor.gravity = -2.0f;
        func_80C0C86C();
        return;
    }
    if (temp_v0 == 0x17) {
        func_80C0B290((Actor *)0x18);
    }
}

void func_80C0CD90(Actor *arg0) {
    arg0->unk_2A4 = 0;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x3AAAU);
    func_80C0B290(arg0, 5);
    arg0->unk_2B4 = 6;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0CDE4;
}

void func_80C0CDE4(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Actor *temp_v0;
    f32 *temp_a2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_v1;
    u8 temp_t0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_a2 = &sp34;
    temp_f6 = (f32) this->unk_F34.elements[1].info.bumper.hitPos.x;
    sp34 = temp_f6;
    temp_f10 = (f32) this->unk_F34.elements[1].info.bumper.hitPos.y;
    sp38 = temp_f10;
    temp_f4 = (f32) this->unk_F34.elements[1].info.bumper.hitPos.z;
    sp3C = temp_f4;
    temp_f2 = temp_f6 - temp_v0->world.pos.x;
    temp_t0 = this->unk_F34.base.atFlags;
    temp_f12 = temp_f10 - temp_v0->world.pos.y;
    temp_f14 = temp_f4 - temp_v0->world.pos.z;
    if (((temp_t0 & 4) != 0) || ((temp_v0->unk_A6C & 0x400000) && (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) <= 70.0f) && (temp_v1 = (temp_v0->shape.rot.y - this->actor.shape.rot.y) + 0x8000, (((s32) temp_v1 < 0x2000) != 0)) && ((s32) temp_v1 >= -0x1FFF))) {
        this->unk_F34.base.atFlags = temp_t0 & 0xFFF9;
        this = this;
        EffectSsHitMark_SpawnFixedScale(globalCtx, 3, (Vec3f *) temp_a2);
        Audio_PlayActorSound2((Actor *) this, 0x1806U);
        func_80C0CF4C(this);
        return;
    }
    if (this->unk_2C4 <= this->unk_144.animCurrentFrame) {
        func_80C0C86C((bitwise EnBsb *) temp_f12, temp_f14, this, 3, temp_a2, this);
    }
}

void func_80C0CF4C(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    arg0->unk_2A4 = 0;
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000C50, -1.0f, arg0->unk_15C - 1.0f, 0.0f, (u8) 2, 0.0f);
    arg0->unk_294 = 0xA;
    Audio_PlayActorSound2(arg0, 0x3AA3U);
    arg0->unk_2B4 = 7;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0CFDC;
}

void func_80C0CFDC(EnBsb *this, GlobalContext *globalCtx) {
    if (this->unk_294 == 0) {
        func_80C0C86C();
    }
}

void func_80C0D00C(Actor *arg0) {
    f32 sp2C;
    ? sp24;

    arg0->unk_2A4 = 0;
    arg0->speedXZ = 0.0f;
    if (arg0->world.pos.z < -1300.0f) {
        Matrix_RotateY((s16) ((s32) randPlusMinusPoint5Scaled(16384.0f) + arg0->yawTowardsPlayer), 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-30.0f, (Vec3f *) &sp24);
    } else {
        Matrix_RotateY(arg0->yawTowardsPlayer, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-50.0f, (Vec3f *) &sp24);
        sp2C = 0.0f;
    }
    Math_Vec3f_Copy(arg0 + 0x298, (Vec3f *) &sp24);
    Audio_PlayActorSound2(arg0, 0x3AA5U);
    func_80C0B290(arg0, 7);
    arg0->unk_2AE = 1;
    arg0->unk_2B4 = 8;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0D10C;
}

void func_80C0D10C(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp34;
    s16 temp_v0;

    sp34 = this->unk_144.animCurrentFrame;
    temp_v0 = this->unk_324;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (this->unk_322 != 0)) {
        func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_330, 0x11, 2, this->unk_32C, 0.4f);
        this->unk_322 = 0;
        this->unk_324 = 0;
    }
    func_80C0B31C(globalCtx, (Actor *) this, &this->unk_304);
    func_80C0B31C(globalCtx, (Actor *) this, &this->unk_2F8);
    if (this->unk_2C4 <= sp34) {
        if ((this->actor.world.pos.z > -1300.0f) || ((s32) this->actor.colChkInfo.health < 0xA)) {
            func_80C0CA28(this, globalCtx);
            return;
        }
        func_80C0C86C(this);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80C0D214(Actor *arg0) {
    arg0->unk_294 = 0x28;
    arg0->speedXZ = 0.0f;
    func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk_2B4 = 0xA;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0D27C;
}

void func_80C0D27C(EnBsb *this, GlobalContext *globalCtx) {
    s16 temp_v1;

    if (this->unk_324 == 0xB) {
        temp_v1 = this->unk_322;
        if ((temp_v1 != 0) && ((s32) temp_v1 < 0x3C)) {
            this->unk_324 = 0xA;
        }
    }
    if (((this->unk_324 == 0xB) || (this->unk_324 == 0xA)) && (this->unk_322 != 0)) {
        func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_330, 0x11, 2, this->unk_32C, 0.4f);
        this->unk_322 = 0;
        this->unk_324 = 0;
    }
    if (this->unk_294 == 0) {
        func_80C0C86C(this);
    }
}

void func_80C0D334(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x3AA4U);
    func_80C0B290(arg0, 6);
    arg0->unk_2B4 = 0xB;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0D384;
}

void func_80C0D384(EnBsb *this, GlobalContext *globalCtx) {
    if (this->unk_2C4 <= this->unk_144.animCurrentFrame) {
        func_80C0C86C();
    }
}

void func_80C0D3C0(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f6;
    s16 temp_v0;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp2C = temp_v1;
    func_801A2ED8();
    temp_v0 = arg0->yawTowardsPlayer + 0x8000;
    arg0->unk_2A4 = 0;
    arg0->unk_2A8 = 0;
    arg0->unk_2AC = 0x4000;
    arg0->speedXZ = 0.0f;
    temp_v1->world.rot.y = temp_v0;
    temp_v1->shape.rot.y = temp_v0;
    temp_f20 = (Math_SinS(arg0->yawTowardsPlayer) * 300.0f) + arg0[2].scale.x;
    arg0[13].shape.shadowScale = temp_f20;
    arg0->unk_1128 = temp_f20;
    temp_f20_2 = arg0[2].scale.y - 30.0f;
    arg0->unk_1144 = temp_f20_2;
    arg0->unk_112C = temp_f20_2;
    temp_f20_3 = (Math_CosS(arg0->yawTowardsPlayer) * 300.0f) + arg0[2].scale.z;
    arg0[13].shape.feetPos[0].x = temp_f20_3;
    arg0->unk_1130 = temp_f20_3;
    temp_f20_4 = (Math_SinS(arg0->yawTowardsPlayer) * 10.0f) + arg0[2].scale.x;
    arg0[13].shape.feetPos[0].y = temp_f20_4;
    arg0->unk_1134 = temp_f20_4;
    temp_f20_5 = arg0[2].scale.y - 10.0f;
    arg0[13].shape.feetPos[0].z = temp_f20_5;
    arg0[13].shape.yOffset = temp_f20_5;
    temp_f6 = Math_CosS(arg0->yawTowardsPlayer) * 10.0f;
    arg0->unk_1124 = 60.0f;
    temp_f20_6 = temp_f6 + arg0[2].scale.z;
    arg0[13].shape.feetPos[1].x = temp_f20_6;
    arg0[13].shape.shadowDraw = temp_f20_6;
    func_80C0B290(arg0, 2);
    arg0->unk_2B4 = 9;
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0D51C;
    arg0->velocity.y = 30.0f;
}

void func_80C0D51C(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp44;
    Actor *sp3C;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0_2;
    s32 phi_v0;
    s32 phi_v0_2;

    sp4C = this->unk_144.animCurrentFrame;
    temp_v0 = this->unk_324;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (this->unk_322 != 0)) {
        func_800BF7CC(globalCtx, (Actor *) this, (Vec3f []) &this->unk_330, 0x11, 2, this->unk_32C, 0.4f);
        this->unk_322 = 0;
        this->unk_324 = 0;
    }
    if (this->unk_2A4 == 0) {
        if (ActorCutscene_GetCanPlayNext(this->unk_2CE) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_2CE);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(this->unk_2CE, (Actor *) this);
        func_800B7298(globalCtx, (Actor *) this, 0x51U);
        this->unk_111A = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
        this->unk_2A4 = 1;
        goto block_8;
    }
block_8:
    if (this->unk_2A8 == 2) {
        sp44 = Math_SinS(this->actor.world.rot.y) * 380.0f;
        temp_f0 = Math_CosS(this->actor.world.rot.y);
        this->unk_1140 = this->unk_2E0 + sp44;
        this->unk_1144 = this->unk_2E4 + 30.0f;
        this->unk_1148 = this->unk_2E8 + (temp_f0 * 380.0f);
        temp_f18 = (Math_SinS(this->actor.world.rot.y) * 10.0f) + this->unk_2E0;
        this->unk_1150 = this->unk_2E4 - 63.0f;
        this->unk_114C = temp_f18;
        this->unk_1154 = (Math_CosS(this->actor.world.rot.y) * 10.0f) + this->unk_2E8;
    } else {
        temp_f8 = Math_SinS(this->actor.world.rot.y) * 10.0f;
        this->unk_1150 = this->unk_2E4 - 10.0f;
        this->unk_114C = temp_f8 + this->unk_2E0;
        this->unk_1154 = (Math_CosS(this->actor.world.rot.y) * 10.0f) + this->unk_2E8;
    }
    if (this->unk_2A8 == 0) {
        this->actor.world.rot.y += this->unk_2AC;
        Math_SmoothStepToS(&this->unk_2AC, 0x1000, 1, 0x1F4, (s16) 0);
        temp_v1 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        phi_v0_2 = phi_v0;
        if ((this->actor.velocity.y < -5.0f) && (phi_v0 < 0x1000)) {
            this->unk_2A8 = 1;
        }
    } else {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3E8, (s16) 0);
        temp_v1_2 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
        phi_v0_2 = (s32) temp_v1_2;
        if ((s32) temp_v1_2 < 0) {
            phi_v0_2 = -(s32) temp_v1_2;
        }
    }
    if ((this->unk_2A8 != 0) && (phi_v0_2 < 0x100) && (this->actor.world.pos.y < (this->actor.floorHeight + 30.0f))) {
        temp_v0_2 = this->unk_2D8;
        this->unk_2A8 = 2;
        if (temp_v0_2 < 9) {
            sp3C = globalCtx->actorCtx.actorList[2].first;
            func_80C0B290((Actor *) this, 9);
            func_800B7298(globalCtx, (Actor *) this, 4U);
            sp3C->velocity.y = 5.0f;
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale - 20.0f, 0x14, 8.0f, (s16) 0x3E8, (s16) 0x64, (u8) 1);
            Audio_PlayActorSound2((Actor *) this, 0x387BU);
            func_800BC848((Actor *) this, globalCtx, 4, 0xA);
        } else if ((temp_v0_2 == 9) && (this->unk_2C4 <= sp4C)) {
            func_80C0B290((Actor *) this, 0xA);
            func_800B7298(globalCtx, (Actor *) this, 0x51U);
        }
    }
    func_80C0BE1C(this, globalCtx);
    if ((this->unk_2A4 != 0) && (this->unk_2A8 != 0) && (this->unk_2D8 == 0xA) && (this->unk_2C4 <= sp4C)) {
        func_80C0D964(this, globalCtx);
    }
}

void func_80C0D964(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk_2A4 = 0;
    temp_a2->unk_2A8 = 0;
    temp_a2->textId = 0x1535;
    arg0 = temp_a2;
    func_801518B0(arg1, 0x1535U & 0xFFFF, temp_a2);
    arg0[1].overlayEntry = (ActorOverlay *) func_80C0D9B4;
}

void func_80C0D9B4(EnBsb *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        globalCtx->nextEntranceIndex = Entrance_CreateIndexFromSpawn(5);
        gSaveContext.nextCutsceneIndex = 0;
        globalCtx->sceneLoadFlag = 0x14;
        globalCtx->unk_1887F = 2;
        gSaveContext.nextTransition = 3;
        this->unk_111A = 0;
    }
}

void func_80C0DA58(EnBsb *arg0) {
    arg0->unk_111C = 0;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_1120 = 0.0f;
    arg0->unk_2A4 = 0;
    arg0->unk_111A = 0;
    arg0->unk_1140 = -480.0f;
    arg0->unk_1128 = -480.0f;
    arg0->unk_1144 = 375.0f;
    arg0->unk_112C = 375.0f;
    arg0->unk_1148 = -1630.0f;
    arg0->unk_1130 = -1630.0f;
    arg0->unk_114C = -360.0f;
    arg0->unk_1134 = -360.0f;
    arg0->unk_1124 = 60.0f;
    arg0->unk_1118 = arg0->unk_111C;
    arg0->unk_1118 = 0;
    arg0->unk_1138 = 500.0f;
    arg0->unk_1150 = 500.0f;
    arg0->unk_1154 = -2250.0f;
    arg0->unk_113C = -2250.0f;
    gSaveContext.weekEventReg[85] |= 0x40;
    arg0->unk_2B4 = 0xD;
    arg0->actionFunc = func_80C0DB18;
}

void func_80C0DB18(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp6C;
    f32 sp64;
    f32 sp60;
    s16 sp52;
    f32 sp44;
    PosRot *sp3C;
    Path *temp_a0_2;
    PosRot *temp_a0;
    SkelAnime *temp_a0_3;
    f32 *temp_a1_3;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_4;
    u16 temp_t3;
    s32 phi_v0;
    s32 phi_v0_2;

    sp64.unk_0 = D_80C0FAC8.unk_0;
    (&sp64)[1] = D_80C0FAC8.unk_4;
    (&sp64)[2] = D_80C0FAC8.unk_8;
    sp60 = this->unk_144.animCurrentFrame;
    if (this->unk_2A4 == 0) {
        if (ActorCutscene_GetCanPlayNext(this->unk_2D2) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_2D2);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(this->unk_2D2, (Actor *) this);
        func_80C0B290((Actor *) this, 1);
        func_800B7298(globalCtx, (Actor *) this, 7U);
        this->unk_111A = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
        this->unk_2A4 = 1;
        goto block_4;
    }
block_4:
    if (this->unk_2D8 == 1) {
        func_80C0B970((Actor *) this, globalCtx);
    }
    this->unk_1128 = -480.0f;
    this->unk_1140 = -480.0f;
    this->unk_112C = 375.0f;
    this->unk_1144 = 375.0f;
    this->unk_1130 = -1630.0f;
    this->unk_1148 = -1630.0f;
    this->unk_1134 = -360.0f;
    this->unk_114C = -360.0f;
    this->unk_1138 = 500.0f;
    this->unk_1150 = 500.0f;
    this->unk_1154 = -2250.0f;
    this->unk_113C = -2250.0f;
    func_80C0BE1C((bitwise EnBsb *) -1630.0f, (bitwise GlobalContext *) -360.0f, this, globalCtx);
    temp_t3 = this->unk_1118;
    switch (temp_t3) {
    case 0:
        temp_a0 = &this->actor.world;
        sp3C = temp_a0;
        Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) &sp64), 1, 0x7D0, (s16) 0);
        Math_ApproachF((f32 *) temp_a0, sp64, 0.5f, fabsf(Math_SinS(this->actor.world.rot.y) * 3.2f));
        Math_ApproachF(&this->actor.world.pos.z, sp6C, 0.5f, fabsf(Math_CosS(this->actor.world.rot.y) * 3.2f));
        temp_f2 = this->actor.world.pos.x - sp64;
        temp_f12 = this->actor.world.pos.z - sp6C;
        if ((sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 3.0f) && (temp_a0_2 = this->unk_288, temp_a1 = temp_a0_2->count - 1, this->unk_28C = temp_a1, (func_8013D68C(temp_a0_2, (s16) temp_a1, (void *) &this->unk_2EC) != 0))) {
            this->unk_2F0 = this->actor.world.pos.y;
            func_80C0B290((Actor *) this, 3);
            this->unk_1118 = (s16) this->unk_1118 + 1;
            return;
        }
    default:
        return;
    case 1:
        temp_a0_3 = &this->unk_144;
        sp3C = (PosRot *) temp_a0_3;
        if ((func_801378B8(temp_a0_3, 7.0f) != 0) || (func_801378B8(temp_a0_3, 15.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) this, 0x3AA3U);
        }
        Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, &this->unk_2EC), 1, 0x7D0, (s16) 0);
        if ((this->unk_2C4 <= sp60) && (this->unk_111C += 1, (((s32) this->unk_111C < 3) == 0))) {
            func_80C0B290((Actor *) this, 1);
            this->unk_111C = 0;
            this->unk_1118 = (s16) this->unk_1118 + 1;
            return;
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
        return;
    case 2:
        temp_v0 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &this->unk_1128);
        temp_a1_2 = temp_v0 << 0x10;
        sp52 = temp_v0;
        Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (temp_a1_2 >> 0x10), 1, 0x7D0, (s16) 0);
        temp_v1 = this->actor.world.rot.y - sp52;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0x100) {
            Audio_PlayActorSound2((Actor *) this, 0x3AA4U);
            func_80C0B290((Actor *) this, 0x15);
            this->unk_1118 = (s16) this->unk_1118 + 1;
            func_801518B0(globalCtx, 0x1541U, (Actor *) this);
            return;
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
        return;
    case 3:
        if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            func_80C0B290((Actor *) this, 1);
            this->unk_1118 = (s16) this->unk_1118 + 1;
            return;
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
        return;
    case 4:
        temp_a1_3 = &sp64;
        sp64 = -100.0f;
        temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) temp_a1_3);
        temp_a1_4 = temp_v0_2 << 0x10;
        sp52 = temp_v0_2;
        Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (temp_a1_4 >> 0x10), 1, 0x7D0, (s16) 0);
        temp_v1_2 = this->actor.world.rot.y - sp52;
        phi_v0_2 = (s32) temp_v1_2;
        if ((s32) temp_v1_2 < 0) {
            phi_v0_2 = -(s32) temp_v1_2;
        }
        if (phi_v0_2 < 0x100) {
            Audio_PlayActorSound2((Actor *) this, 0x386CU);
            this->actor.velocity.y = 20.0f;
            this->actor.speedXZ = 3.0f;
            func_80C0B290((Actor *) this, 0xB);
            this->unk_1118 = (s16) this->unk_1118 + 1;
            return;
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
        return;
    case 5:
        if (this->actor.world.pos.y < (this->actor.home.pos.y + 30.0f)) {
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, this->actor.shape.shadowScale - 20.0f, 0x14, 8.0f, (s16) 0x3E8, (s16) 0x64, (u8) 1);
            this->actor.speedXZ = 0.0f;
            Audio_PlayActorSound2((Actor *) this, 0x380DU);
            func_800BC848((Actor *) this, globalCtx, 4, 0xA);
            this->unk_1118 = (s16) this->unk_1118 + 1;
            return;
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
        return;
    case 6:
        this->actor.world.rot.y += 0x2000;
        if ((globalCtx->gameplayFrames & 7) == 0) {
            Math_Vec3f_Copy((Vec3f *) &sp64, (Vec3f *) &this->actor.world);
            sp64 += randPlusMinusPoint5Scaled(40.0f);
            sp6C += randPlusMinusPoint5Scaled(40.0f);
            sp44 = Rand_ZeroFloat(10.0f);
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &sp64, sp44 + 5.0f, Rand_S16Offset(1, 3), 4.0f, (s16) 0x3E8, (s16) 0x64, (u8) 1);
        }
        Math_ApproachF(&this->actor.shape.yOffset, -7000.0f, 0.5f, 200.0f);
        if (this->actor.shape.yOffset < -6999.0f) {
            ActorCutscene_Stop(this->unk_2D2);
            Actor_MarkForDeath((Actor *) this);
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
        return;
    }
}

void func_80C0E178(Actor *arg0) {
    s32 temp_t7;

    temp_t7 = arg0->flags | 0x8000000;
    arg0->flags = temp_t7;
    arg0->unk_2AE = 0;
    arg0->unk_2A4 = 0;
    arg0->flags = temp_t7 & ~1;
    arg0->unk_2B4 = 0xE;
    arg0[1].overlayEntry = func_80C0E1C0;
    arg0->speedXZ = 0.0f;
}

void func_80C0E1C0(EnBsb *this, GlobalContext *globalCtx) {
    f32 sp50;
    Actor *temp_v0_2;
    f32 temp_f0;
    s32 temp_s0;
    u16 temp_v0;
    EnBsb *phi_s1;
    s32 phi_s0;

    temp_f0 = this->unk_144.animCurrentFrame;
    if (this->unk_2D8 == 0x10) {
        sp50 = temp_f0;
        if (func_801378B8(&this->unk_144, 30.0f) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x3AA1U);
        } else if ((temp_f0 < 30.0f) && ((temp_v0 = globalCtx->csCtx.frames, (temp_v0 == 0x1D8)) || (temp_v0 == 0x1E7))) {
            Audio_PlayActorSound2((Actor *) this, 0x3AA2U);
        }
    }
    if ((this->unk_2D8 == 0x12) && (globalCtx->csCtx.frames == 0x381)) {
        Audio_PlayActorSound2((Actor *) this, 0x3AA1U);
    }
    if (this->unk_2A4 == 0) {
        phi_s0 = 0;
        if ((gSaveContext.weekEventReg[23] & 4) != 0) {
            D_80C0F8D0 = this->unk_144.animCurrentFrame;
            phi_s1 = this;
            do {
                temp_v0_2 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x28F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, (s16) (phi_s1->unk_3FC + 0x8000));
                if (temp_v0_2 != 0) {
                    temp_v0_2->unk_2C0 = (f32) (this + (phi_s0 * 0xC))->unk_334;
                }
                temp_s0 = phi_s0 + 1;
                phi_s1 += 4;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x11);
            this->unk_2A4 = 1;
            this->actor.draw = NULL;
        }
    }
    if (globalCtx->csCtx.frames == 0x3B6) {
        Audio_PlayActorSound2((Actor *) this, 0x380DU);
    }
    if (func_80C0E9CC(this, globalCtx) == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80C0E3B8(EnBsb *arg0) {
    SkelAnime *sp30;
    SkelAnime *temp_a0;
    s32 temp_t7;

    arg0->actor.gravity = 0.0f;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_2AE = 0;
    arg0->unk_2A4 = 0;
    Math_Vec3s_Copy(arg0 + 0x31C, &D_801D15BC);
    temp_t7 = arg0->actor.flags | 0x8000000;
    arg0->actor.flags = temp_t7;
    arg0->actor.flags = temp_t7 & ~1;
    temp_a0 = arg0 + 0x144;
    sp30 = temp_a0;
    SkelAnime_ChangeAnim(temp_a0, &D_06004894, 1.0f, D_80C0F8D0, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06004894), (u8) 2, 0.0f);
    SkelAnime_FrameUpdateMatrix(temp_a0);
    arg0->unk_2B4 = 0xF;
    arg0->actionFunc = func_80C0E480;
}

void func_80C0E480(EnBsb *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = this->unk_2C0;
    if (temp_f0 != 0.0f) {
        temp_f2 = this->actor.world.pos.y;
        if (temp_f0 <= temp_f2) {
            this->unk_2C0 = temp_f2 - 40.0f;
        }
        this->unk_294 = 2;
        this->unk_2CA = 0xFF;
        this->actionFunc = func_80C0E4FC;
        this->unk_2C0 = this->actor.home.pos.y + (temp_f2 - this->unk_2C0);
    }
}

void func_80C0E4FC(EnBsb *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_294;
    if (temp_v0 != 0) {
        if (temp_v0 == 1) {
            this->actor.speedXZ = 0.0f;
            this->actor.velocity.y = 10.0f;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (this->actor.velocity.y <= -11.0f) {
        this->unk_2CA += -0x30;
        if ((s32) this->unk_2CA < 0) {
            this->unk_2CA = 0;
        }
    }
    Math_ApproachF(&this->actor.gravity, -3.0f, 0.5f, 0.5f);
    Math_ApproachF(&this->actor.velocity.y, -10.0f, 0.5f, 0.5f);
    this->unk_31C += 0x320;
    this->unk_31E += 0x320;
    this->unk_320 += 0x320;
    if ((this->actor.gravity != 0.0f) && (this->actor.world.pos.y <= this->unk_2C0)) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80C0E618(Actor *arg0, GlobalContext *arg1) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ActorContext *temp_s0;
    f32 *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s0_2;
    u32 temp_t6;
    u8 temp_a0;
    u8 temp_t3;
    void *temp_v0_4;
    void *temp_v1;
    s32 phi_s0;
    s32 phi_s0_2;

    temp_v0 = arg0->unk_2B4;
    phi_s0 = 0;
    phi_s0_2 = 0;
    if ((temp_v0 != 0) && (temp_v0 != 1) && (temp_v0 != 9) && (temp_v0 != 0xC) && (temp_v0 != 0xD) && (temp_v0 != 5) && ((temp_v0 != 8) || (arg0[2].targetArrowOffset == 0))) {
        if ((arg0->unk_F44 & 4) == 0) {
            temp_v1 = arg0->unk_F50;
            temp_a0 = temp_v1->unk_55;
            if ((temp_a0 & 2) != 0) {
                temp_v1->unk_55 = (u8) (temp_a0 & 0xFFFD);
                temp_v0_2 = arg0->unk_2B4;
                if ((temp_v0_2 != 0xB) && (temp_v0_2 != 7)) {
                    func_80C0D334(arg0, 0xB);
                }
            }
        }
        if ((arg0->unk_F45 & 2) != 0) {
            temp_t3 = arg0->colChkInfo.damageEffect;
            switch (temp_t3) {
            case 14:
                if ((bitwise s32) arg0[2].targetArrowOffset != 0) {
                    phi_s0 = 1;
                } else {
                case 15:
                    phi_s0 = -1;
                }
                break;
            case 13:
                if ((bitwise s32) arg0[2].targetArrowOffset == 0) {
                    arg0[2].targetArrowOffset = 1e-45.0f;
                    func_801A2E54(0x38);
                }
                phi_s0 = 1;
                break;
            case 12:
                if ((bitwise s32) arg0[2].targetArrowOffset == 0) {
                    arg0[2].targetArrowOffset = 1e-45.0f;
                    func_801A2E54(0x38);
                }
                break;
            case 1:
                if ((bitwise s32) arg0[2].targetArrowOffset != 0) {
                    func_80C0D214(arg0, 0xB);
                }
                break;
            case 2:
                arg0->unk_322 = 0x28;
                arg0->unk_324 = 0;
                phi_s0 = -1;
                break;
            case 3:
                temp_v0_3 = arg0->unk_324;
                if (((temp_v0_3 != 0xB) && (temp_v0_3 != 0xA)) || (arg0->unk_322 == 0)) {
                    arg0->unk_322 = 0x50;
                    arg0->unk_324 = 0xB;
                    arg0[2].colChkInfo.damageTable = NULL;
                    arg0[2].colChkInfo.displacement.x = 1.5f;
                    phi_s0 = -1;
                }
                break;
            case 4:
                arg0->unk_322 = 0x28;
                arg0->unk_324 = 0x14;
                Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                phi_s0 = -1;
                break;
            case 5:
                arg0->unk_322 = 0x28;
                arg0->unk_324 = 0x20;
                if ((bitwise s32) arg0[2].targetArrowOffset == 0) {
                    arg0[2].targetArrowOffset = 1e-45.0f;
                    func_801A2E54(0x38);
                } else {
                    func_80C0D214(arg0, 0xB);
                }
                break;
            }
        }
        if (phi_s0 == -1) {
            if (arg0->unk_2B4 != 3) {
                func_80C0C610(arg0);
                return;
            }
            /* Duplicate return node #45. Try simplifying control flow for better match */
            return;
        }
        if (phi_s0 == 1) {
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            Actor_ApplyDamage(arg0);
            if ((s32) arg0->colChkInfo.health <= 0) {
                temp_s0 = &arg1->actorCtx;
                Enemy_StartFinishingBlow(arg1, arg0);
                Audio_PlayActorSound2(arg0, 0x3AA6U);
                temp_t6 = arg0->flags | 0x8000000;
                arg0->flags = temp_t6;
                arg0->flags = temp_t6 & ~1;
                func_800BC154(arg1, temp_s0, arg0, 4U);
                func_80C0D3C0(arg0, arg1);
                return;
            }
            do {
                temp_v0_4 = arg0->unk_F50 + phi_s0_2;
                if ((temp_v0_4->unk_16 & 2) != 0) {
                    temp_a2 = &sp48;
                    sp48 = (f32) temp_v0_4->unk_E;
                    sp4C = (f32) (arg0->unk_F50 + phi_s0_2)->unk_10;
                    sp50 = (f32) (arg0->unk_F50 + phi_s0_2)->unk_12;
                    CollisionCheck_BlueBlood(arg1, NULL, (Vec3f *) temp_a2);
                }
                temp_s0_2 = phi_s0_2 + 0x40;
                phi_s0_2 = temp_s0_2;
            } while (temp_s0_2 != 0x1C0);
            func_80C0D00C(arg0);
            /* Duplicate return node #45. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #45. Try simplifying control flow for better match */
    }
}

s32 func_80C0E9CC(Actor *arg0, GlobalContext *arg1) {
    u32 sp24;
    s32 temp_t8;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 temp_t9;
    u32 temp_v0;

    if (func_800EE29C(arg1, 0x214U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x214U);
        temp_t8 = temp_v0 * 4;
        sp24 = temp_v0;
        if (arg0->unk_296 != *(arg1 + temp_t8)->unk_1F4C) {
            if (arg0->unk_2B4 != 0xE) {
                func_80C0E178(arg0);
            }
            temp_t9 = arg1->csCtx.npcActions[sp24]->unk0;
            switch (temp_t9) {
            case 1:
                func_80C0B290(arg0, 0xD);
                break;
            case 2:
                temp_v0_2 = arg0->unk_2D8;
                if ((temp_v0_2 != 0xE) && (temp_v0_2 != 0xF)) {
                    func_80C0B290(arg0, 0xE);
                }
                break;
            case 3:
                temp_v0_3 = arg0->unk_2D8;
                if ((temp_v0_3 != 0x10) && (temp_v0_3 != 0x11)) {
                    func_80C0B290(arg0, 0x10);
                }
                break;
            case 4:
                temp_v0_4 = arg0->unk_2D8;
                if ((temp_v0_4 != 0x12) && (temp_v0_4 != 0x13)) {
                    func_80C0B290(arg0, 0x12);
                }
                break;
            case 5:
                gSaveContext.weekEventReg[23] |= 4;
                Audio_PlayActorSound2(arg0, 0x3AA9U);
                break;
            case 6:
                Actor_SetSwitchFlag(arg1, (s32) arg0[2].world.rot.y);
                Audio_PlayActorSound2(arg0, 0x4823U);
                break;
            }
        }
        arg0->unk_296 = (s16) arg1->csCtx.npcActions[sp24]->unk0;
        func_800EDF24(arg0, arg1, sp24);
        return 1;
    }
    return 0;
}

void EnBsb_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp34;
    CollisionCheckContext *sp30;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f6;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 phi_v0;
    EnBsb *this = (EnBsb *) thisx;

    temp_v0 = this->unk_292;
    if (temp_v0 != 0) {
        this->unk_292 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_294;
    if (temp_v0_2 != 0) {
        this->unk_294 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_322;
    if (temp_v0_3 != 0) {
        this->unk_322 = temp_v0_3 - 1;
    }
    temp_v1 = this->unk_2B4;
    if ((temp_v1 != 0) && (temp_v1 != 0xA) && ((gSaveContext.weekEventReg[23] & 4) == 0) && (this->unk_2B0 == 0)) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (this->unk_2B0 == 0) {
        func_80C0E618((Actor *) this, globalCtx);
        if ((func_80C0E9CC(this, globalCtx) == 0) && (this->unk_2B4 != 0xE)) {
            temp_a0 = this->actor.world.rot.y;
            this->actor.shape.rot.y = temp_a0;
            temp_f6 = Math_SinS(temp_a0) * 20.0f;
            this->actor.focus.pos.y = this->unk_2E4;
            this->actor.focus.pos.x = temp_f6 + this->unk_2E0;
            this->actor.focus.pos.z = (Math_CosS(this->actor.world.rot.y) * 20.0f) + this->unk_2E8;
            Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.world.rot);
            if ((this->actor.bgCheckFlags & 1) != 0) {
                temp_f0 = this->actor.world.pos.z;
                if (temp_f0 < -1300.0f) {
                    this->actor.world.pos.z = temp_f0 + this->unk_2A0;
                }
                this->actor.world.pos.x += this->unk_298;
                Math_ApproachZeroF(&this->unk_298, 1.0f, 2.0f);
                Math_ApproachZeroF(&this->unk_2A0, 1.0f, 2.0f);
            }
        } else {
            temp_f0_2 = this->unk_144.animCurrentFrame;
            if ((this->unk_2D8 == 0xE) && (this->unk_2C4 <= temp_f0_2)) {
                sp34 = temp_f0_2;
                func_80C0B290((Actor *) this, 0xF);
            }
            phi_v0 = this->unk_2D8;
            if ((this->unk_2D8 == 0x10) && (this->unk_2C4 <= this->unk_144.animCurrentFrame)) {
                sp34 = this->unk_144.animCurrentFrame;
                func_80C0B290((Actor *) this, 0x11);
                phi_v0 = this->unk_2D8;
            }
            if ((phi_v0 == 0x12) && (this->unk_2C4 <= this->unk_144.animCurrentFrame)) {
                func_80C0B290((Actor *) this, 0x13);
            }
        }
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 60.0f, 40.0f, 0x1DU);
        func_80C0F640(this, globalCtx);
        if (func_80C0E9CC(this, globalCtx) == 0) {
            temp_v1_2 = this->unk_2B4;
            if ((temp_v1_2 != 9) && (temp_v1_2 != 0xE) && (temp_v1_2 != 0xF) && ((temp_a1 = &globalCtx->colChkCtx, temp_a2 = &this->unk_F34, sp2C = temp_a2, sp30 = temp_a1, CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2), CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2), temp_v1_3 = this->unk_2B4, (temp_v1_3 == 6)) || (temp_v1_3 == 4))) {
                CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) sp2C);
            }
        }
    }
}

s32 func_80C0EEA0(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    temp_v1 = arg5[2].world.pos.y;
    temp_v0 = *arg0;
    if (temp_v1 == 0) {
        if (arg1 == 0xB) {
            if (arg5->unk_2B4 == 0) {
                *arg2 = NULL;
            } else {
                temp_a0 = temp_v0->unk_2B0;
                temp_v0->unk_2B0 = (void *) (temp_a0 + 8);
                temp_a0->unk_0 = 0xFB000000;
                temp_a0->unk_4 = (s32) ((arg5->unk_2CA & 0xFF) | ~0xFF);
            }
        } else {
            temp_a0_2 = temp_v0->unk_2B0;
            temp_v0->unk_2B0 = (void *) (temp_a0_2 + 8);
            temp_a0_2->unk_4 = -1;
            temp_a0_2->unk_0 = 0xFB000000;
        }
        if (arg1 == 7) {
            arg4->x += arg5->unk_310;
            arg4->y += arg5->unk_312;
            arg4->z += arg5->unk_314;
        }
        if (arg1 == 4) {
            arg4->x += arg5->unk_316;
            arg4->y += arg5[2].bgCheckFlags;
            arg4->z += arg5[2].yawTowardsPlayer;
        }
    } else if (arg1 != temp_v1) {
        *arg2 = NULL;
    } else if ((arg1 == 2) || (arg1 == 3) || (arg1 == 4) || (arg1 == 5) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xA) || (arg1 == 0xC) || (arg1 == 0xD) || (arg1 == 0xF) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x12) || (arg1 == 0x13) || (arg1 == 0x14)) {
        arg4->x += arg5->unk_31C;
        arg4->y += arg5->unk_31E;
        arg4->z += arg5->unk_320;
    }
    return 0;
}

s32 func_80C0F078(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 temp_v0;

    temp_v0 = arg5[2].world.pos.y;
    if (arg1 != temp_v0) {
        *arg2 = NULL;
    } else if (arg1 != temp_v0) {
        *arg2 = NULL;
    } else if ((arg1 == 2) || (arg1 == 3) || (arg1 == 4) || (arg1 == 5) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xA) || (arg1 == 0xC) || (arg1 == 0xD) || (arg1 == 0xF) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x12) || (arg1 == 0x13) || (arg1 == 0x14)) {
        arg4->x += arg5->unk_31C;
        arg4->y += arg5->unk_31E;
        arg4->z += arg5->unk_320;
    }
    return 0;
}

void func_80C0F170(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s32 phi_a2;
    Actor *phi_a3;
    s32 phi_a2_2;
    Actor *phi_a3_2;
    s32 phi_a2_3;
    Actor *phi_a3_3;

    phi_a2_3 = arg1;
    phi_a3_3 = arg4;
    if (arg4[2].world.pos.y == 0) {
        if (arg1 == 0xA) {
            arg1 = arg1;
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x2E0);
        }
        phi_a2 = arg1;
        phi_a3 = arg4;
        if (arg1 == 0x11) {
            arg1 = arg1;
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x304);
            phi_a2 = arg1;
            phi_a3 = arg4;
        }
        phi_a2_2 = phi_a2;
        phi_a3_2 = phi_a3;
        if (phi_a2 == 0x14) {
            arg1 = phi_a2;
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, phi_a3 + 0x2F8);
            phi_a2_2 = arg1;
            phi_a3_2 = arg4;
        }
        phi_a2_3 = phi_a2_2;
        phi_a3_3 = phi_a3_2;
        if ((phi_a2_2 == 2) || (phi_a2_2 == 3) || (phi_a2_2 == 4) || (phi_a2_2 == 5) || (phi_a2_2 == 6) || (phi_a2_2 == 7) || (phi_a2_2 == 8) || (phi_a2_2 == 9) || (phi_a2_2 == 0xA) || (phi_a2_2 == 0xC) || (phi_a2_2 == 0xD) || (phi_a2_2 == 0xF) || (phi_a2_2 == 0x10) || (phi_a2_2 == 0x11) || (phi_a2_2 == 0x12) || (phi_a2_2 == 0x13) || (phi_a2_2 == 0x14)) {
            arg1 = phi_a2_2;
            SysMatrix_GetStateTranslation(phi_a3_2 + (phi_a3_2->unk_440 * 0xC) + 0x330);
            (arg4 + (arg4->unk_440 * 4))->unk_3FC = arg1;
            arg4->unk_440 = (s16) (arg4->unk_440 + 1);
            phi_a2_3 = arg1;
            phi_a3_3 = arg4;
            if ((s32) arg4->unk_440 >= 0x11) {
                arg4->unk_440 = 0;
            }
        }
    }
    Collider_UpdateSpheres(phi_a2_3, phi_a3_3 + 0xF34);
}

void EnBsb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp3C;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s1;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v1_3;
    EnBsb *this = (EnBsb *) thisx;

    temp_s1 = globalCtx->state.gfxCtx;
    func_80C0F758(this, globalCtx);
    if (this->unk_2CA == 0xFF) {
        func_8012C28C(globalCtx->state.gfxCtx);
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v1 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1[1];
        temp_v1->words.w1 = 0;
        temp_v1->words.w0 = 0xE7000000;
        temp_v1_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = (this->unk_2CA & 0xFF) | ~0xFF;
        SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_80C0EEA0, func_80C0F170, (Actor *) this);
        temp_v1_3 = this->unk_322;
        if (temp_v1_3 != 0) {
            temp_f6 = (f32) temp_v1_3;
            temp_v0 = this->unk_324;
            if ((temp_v0 == 0xB) || (temp_v0 == 0xA)) {
                this->unk_328 += 0.3f;
                if (this->unk_328 > 1.0f) {
                    this->unk_328 = 1.0f;
                }
                sp3C = temp_f6 * 0.05f;
                Math_ApproachF(&this->unk_32C, this->unk_328, 0.1f, 0.04f);
            } else {
                this->unk_328 = 0.8f;
                this->unk_32C = 0.8f;
            }
            func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_330, 0x11, this->unk_328, this->unk_32C, temp_f6 * 0.05f, (u8) (s32) this->unk_324);
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    func_8012C2DC(globalCtx->state.gfxCtx);
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE7000000;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (this->unk_2CA & 0xFF) | ~0xFF;
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_4[1];
    temp_s1->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80C0F078, NULL, (Actor *) this, temp_v0_4);
}

void func_80C0F544(Actor *arg0, f32 *arg1, f32 *arg2, ? *arg3, f32 arg4, s16 arg5) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x444;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk_0 == 0) {
        phi_s0->unk_0 = 1U;
        phi_s0->unk_4 = (s32) arg1->unk_0;
        phi_s0->unk_8 = (s32) arg1[1];
        phi_s0->unk_C = (s32) arg1[2];
        phi_s0->unk_10 = (s32) arg2->unk_0;
        phi_s0->unk_14 = (s32) arg2[1];
        phi_s0->unk_18 = (s32) arg2[2];
        phi_s0->unk_1C = (s32) arg3->unk_0;
        phi_s0->unk_20 = (s32) arg3->unk_4;
        phi_s0->unk_24 = (s32) arg3->unk_8;
        phi_s0->unk_30 = arg4;
        phi_s0->unk_34 = arg5;
        phi_s0->unk_28 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_2A = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_2C = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x38;
    if ((s32) temp_v0 >= 0x32) {
        return;
    }
    goto loop_1;
}

void func_80C0F640(EnBsb *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f8;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_v1;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x444;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->unk_0 != 0) {
            temp_f0 = phi_v0->unk_14;
            phi_v0->unk_4 = (f32) (phi_v0->unk_4 + phi_v0->unk_10);
            temp_a0 = phi_v0->unk_34;
            phi_v0->unk_28 = (s16) (phi_v0->unk_28 + 0x100);
            phi_v0->unk_2C = (s16) (phi_v0->unk_2C + 0x130);
            phi_v0->unk_8 = (f32) (phi_v0->unk_8 + temp_f0);
            phi_v0->unk_C = (f32) (phi_v0->unk_C + phi_v0->unk_18);
            phi_v0->unk_14 = (f32) (temp_f0 + phi_v0->unk_20);
            if (temp_a0 != 0) {
                phi_v0->unk_34 = (s16) (temp_a0 - 1);
            } else {
                phi_v0->unk_0 = 0U;
            }
        }
        temp_v0 = phi_v0 + 0x38;
        if (phi_v0->unk_38 != 0) {
            temp_f0_2 = temp_v0->unk_14;
            temp_f8 = temp_v0->unk_8 + temp_f0_2;
            temp_v0->unk_4 = (f32) (temp_v0->unk_4 + temp_v0->unk_10);
            temp_a0_2 = temp_v0->unk_34;
            temp_v0->unk_2C = (s16) (temp_v0->unk_2C + 0x130);
            temp_v0->unk_28 = (s16) (temp_v0->unk_28 + 0x100);
            temp_v0->unk_14 = (f32) (temp_f0_2 + temp_v0->unk_20);
            temp_v0->unk_C = (f32) (temp_v0->unk_C + temp_v0->unk_18);
            temp_v0->unk_8 = temp_f8;
            if (temp_a0_2 != 0) {
                temp_v0->unk_34 = (s16) (temp_a0_2 - 1);
            } else {
                temp_v0->unk_0 = 0;
            }
        }
        phi_v0 = temp_v0 + 0x38;
    } while (temp_v1 != 0x32);
}

void func_80C0F758(EnBsb *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    GraphicsContext *temp_s6;
    f32 temp_f12;
    s32 temp_s3;
    void *phi_s0;
    s32 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s6 = temp_a0;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s0 = arg0 + 0x444;
    phi_s3 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertTranslation(phi_s0->unk_4, phi_s0->unk_8, phi_s0->unk_C, 0);
            SysMatrix_InsertXRotation_s(phi_s0->unk_28, 1);
            Matrix_RotateY(phi_s0->unk_2A, 1U);
            SysMatrix_InsertZRotation_s(phi_s0->unk_2C, 1);
            temp_f12 = phi_s0->unk_30;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0[1];
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(temp_s6);
            temp_v0_2 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w1 = -1;
            temp_v0_2->words.w0 = 0xFA000080;
            temp_v0_3 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0_3[1];
            temp_v0_3->words.w1 = -1;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_4 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w1 = (u32) &D_0406AB30;
            temp_v0_4->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x32);
}
