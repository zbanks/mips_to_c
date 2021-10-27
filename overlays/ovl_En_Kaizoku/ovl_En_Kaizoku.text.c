typedef struct EnKaizoku {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 (*unk_144)(GlobalContext *, Actor *); /* inferred */
    /* 0x148 */ SkelAnime unk_148;                  /* inferred */
    /* 0x18C */ Vec3s unk_18C;                      /* inferred */
    /* 0x192 */ char pad_192[0x8A];                 /* maybe part of unk_18C[24]? */
    /* 0x21C */ Vec3s unk_21C;                      /* inferred */
    /* 0x222 */ char pad_222[0x8A];                 /* maybe part of unk_21C[24]? */
    /* 0x2AC */ void (*actionFunc)(EnKaizoku *, GlobalContext *);
    /* 0x2B0 */ s16 unk_2B0;                        /* inferred */
    /* 0x2B2 */ s16 unk_2B2;                        /* inferred */
    /* 0x2B4 */ s16 unk_2B4;                        /* inferred */
    /* 0x2B6 */ s16 unk_2B6;                        /* inferred */
    /* 0x2B8 */ s16 unk_2B8;                        /* inferred */
    /* 0x2BA */ char pad_2BA[0x2];
    /* 0x2BC */ s16 unk_2BC;                        /* inferred */
    /* 0x2BE */ char pad_2BE[0xC];                  /* maybe part of unk_2BC[7]? */
    /* 0x2CA */ s16 unk_2CA;                        /* inferred */
    /* 0x2CC */ s16 unk_2CC;                        /* inferred */
    /* 0x2CE */ s16 unk_2CE;                        /* inferred */
    /* 0x2D0 */ s16 unk_2D0;                        /* inferred */
    /* 0x2D2 */ s16 unk_2D2;                        /* inferred */
    /* 0x2D4 */ s16 unk_2D4;                        /* inferred */
    /* 0x2D6 */ s16 unk_2D6;                        /* inferred */
    /* 0x2D8 */ u8 unk_2D8;                         /* inferred */
    /* 0x2D9 */ char pad_2D9[0x13];                 /* maybe part of unk_2D8[20]? */
    /* 0x2EC */ s32 unk_2EC;                        /* inferred */
    /* 0x2F0 */ f32 unk_2F0;
    /* 0x2F4 */ s16 unk_2F4;
    /* 0x2F6 */ char pad_2F6[0xCE];                 /* maybe part of unk_2F4[104]? */
    /* 0x3C4 */ f32 unk_3C4;                        /* inferred */
    /* 0x3C8 */ char pad_3C8[0x4];
    /* 0x3CC */ f32 unk_3CC;                        /* inferred */
    /* 0x3D0 */ s32 unk_3D0;                        /* inferred */
    /* 0x3D4 */ ColliderCylinder unk_3D4;           /* inferred */
    /* 0x420 */ ColliderQuad unk_420;               /* inferred */
    /* 0x4A0 */ char pad_4A0[0xF8];                 /* maybe part of unk_420[2]? */
    /* 0x598 */ s32 unk_598;                        /* inferred */
    /* 0x59C */ char pad_59C[0x54];                 /* maybe part of unk_598[22]? */
} EnKaizoku;                                        /* size = 0x5F0 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnKaizoku_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnKaizoku_Init {
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
    /* 0x1EC */ Actor *sp1EC;                       /* inferred */
    /* 0x1F0 */ char pad_1F0[0x8];
};                                                  /* size = 0x1F8 */

struct _mips2c_stack_EnKaizoku_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B85858 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B85900 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B85A00 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B85E18 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B85EA0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3s *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B85F48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B85FA8 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ CollisionCheckInfo *sp3C;            /* inferred */
    /* 0x40 */ f32 *sp40;                           /* inferred */
    /* 0x44 */ f32 *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0xC];                    /* maybe part of sp44[4]? */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B86804 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B868B8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B86B58 {};              /* size 0x0 */

struct _mips2c_stack_func_80B86B74 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ CollisionCheckInfo *sp38;            /* inferred */
    /* 0x3C */ CollisionPoly **sp3C;                /* inferred */
    /* 0x40 */ char pad_40[0x14];                   /* maybe part of sp3C[6]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B872A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B872F4 {
    /* 0x00 */ char pad_0[0x1A];
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B874D8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B8760C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B87900 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B8798C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B87C7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B87CF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B87D3C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B87E28 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B87E9C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B87F70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B87FDC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B88214 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B88278 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B8833C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B88378 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B88770 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B887AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B88910 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B88964 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ SkelAnime *sp38;                     /* inferred */
    /* 0x3C */ char pad_3C[0xC];                    /* maybe part of sp38[4]? */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B88CD8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B88D6C {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B891B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B89280 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B893CC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B894C0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B8960C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B8971C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ u32 *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B89A08 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ s32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80B8A318 {};              /* size 0x0 */

struct _mips2c_stack_func_80B8A468 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B8A6B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B8A718 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

? func_800B4A98(Actor *, s32, ?, Vec3f *, s32, Vec3f *); /* extern */
s32 func_800BC4EC(Actor *, GlobalContext *, f32, s16); /* extern */
s32 func_800BC5B8(GlobalContext *, Actor *);        /* extern */
s32 func_800BE184(GlobalContext *, Actor *, s16, ?, s32, s32); /* extern */
? func_8016981C(GlobalContext *, s16, CollisionCheckInfo *, f32 *, f32 *); /* extern */
? func_801A0238(?, ?);                              /* extern */
? func_801A7328(Vec3f *, ?, Actor *);               /* extern */
s32 func_80B85858(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B85900(EnKaizoku *arg0);                /* static */
s32 func_80B85A00(Actor *arg0, GlobalContext *arg1, s16 arg2); /* static */
void func_80B85E18(Actor *arg0, s32 arg1, GlobalContext *); /* static */
s32 func_80B85EA0(GlobalContext *arg0, Actor *arg1); /* static */
void func_80B85F48(EnKaizoku *arg0);                /* static */
void func_80B85FA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B86804(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B868B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B86B58(Actor *arg0);                    /* static */
void func_80B86B74(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B872A4(Actor *arg0);                    /* static */
void func_80B872F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B874D8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B8760C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B87900(Actor *arg0, Actor *);           /* static */
void func_80B8798C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B87C7C(Actor *arg0, Actor *, void *, s16); /* static */
void func_80B87CF8(GlobalContext *arg0, Vec3f *arg1); /* static */
void func_80B87D3C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B87E28(Actor *arg0, Actor *);           /* static */
void func_80B87E9C(Actor *arg0, void *arg1);        /* static */
void func_80B87F70(Actor *arg0, GlobalContext *);   /* static */
void func_80B87FDC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B88214(Actor *arg0);                    /* static */
void func_80B88278(Actor *arg0, void *arg1);        /* static */
void func_80B8833C(Actor *arg0);                    /* static */
void func_80B88378(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B88770(Actor *arg0);                    /* static */
void func_80B887AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B88910(Actor *arg0);                    /* static */
void func_80B88964(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B88CD8(Actor *arg0, GlobalContext *, s16, ?); /* static */
void func_80B88D6C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B891B8(Actor *arg0);                    /* static */
void func_80B89280(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B893CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B894C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B8960C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B8971C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B89A08(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B8A318(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B8A468(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B8A6B0(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80B8A718(Actor *this, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_060058B8;
extern FlexSkeletonHeader D_0600D828;
static ? D_80B8A8D0;                                /* unable to generate initializer */
static ? D_80B8A8E4;                                /* unable to generate initializer */
static ? D_80B8AA04;                                /* unable to generate initializer */
static ? D_80B8AB24;                                /* unable to generate initializer */
static ? D_80B8AB30;                                /* unable to generate initializer */
static DamageTable D_80B8AB3C = {
    {
        0x10,
        0xF1,
        0,
        0xF1,
        0x10,
        0xF1,
        0,
        0x10,
        0xE1,
        0xE1,
        0xD0,
        0x22,
        0x32,
        0x42,
        0xE1,
        0x10,
        0xE1,
        0xE2,
        0x10,
        0x50,
        0,
        0,
        0xE1,
        0xE1,
        0xD1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xE1,
    },
};
static ColliderCylinderInit D_80B8AB7C = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {4, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x14, 0x32, 0, {0, 0, 0}},
};
static ColliderQuadInit D_80B8ABA8 = {
    {0xA, 0x19, 0, 0, 0, 3},
    {4, {0xF7CFFFFF, 0, 0}, {0, 0, 0}, 0x81, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ? D_80B8ABF8;                                /* unable to generate initializer */
static ? D_80B8AC44;                                /* unable to generate initializer */
static Color_RGBA8 D_80B8AC58 = {0xC8, 0xA0, 0x78, 0xFF};
static Color_RGBA8 D_80B8AC5C = {0x82, 0x5A, 0x32, 0xFF};
static Vec3f D_80B8AC60 = {0.0f, -1.5f, 0.0f};
static Vec3f D_80B8AC6C = {0.0f, -0.2f, 0.0f};
static Vec3f D_80B8AC78 = {300.0f, 0.0f, 0.0f};
static Vec3f D_80B8AC84 = {0.0f, -3000.0f, 0.0f};
static Vec3f D_80B8AC90 = {400.0f, 0.0f, 0.0f};
static Vec3f D_80B8AC9C = {1600.0f, -4000.0f, 0.0f};
static Vec3f D_80B8ACA8 = {-3000.0f, -2000.0f, 1300.0f};
static Vec3f D_80B8ACB4 = {-3000.0f, -2000.0f, -1300.0f};
static Vec3f D_80B8ACC0 = {1000.0f, 1000.0f, 0.0f};
static ? D_80B8ACCC;                                /* unable to generate initializer */

void EnKaizoku_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp1EC;
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
    s16 temp_a0;
    s16 temp_v0;
    u32 temp_t7;
    u32 temp_t9;
    EnKaizoku *this = (EnKaizoku *) thisx;

    sp1EC = globalCtx->actorCtx.actorList[2].first;
    this->actor.hintId = 0x54;
    this->actor.targetMode = 3;
    this->actor.colChkInfo.mass = 0x50;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B42F8, 0.0f);
    temp_v0 = this->actor.params;
    this->unk_2CA = this->actor.world.rot.z;
    temp_a0 = this->unk_2CA;
    this->actor.colChkInfo.health = 8;
    this->unk_2D4 = temp_v0 & 0x3F;
    this->unk_2BC = ((s32) temp_v0 >> 6) & 0x7F;
    if ((s32) temp_a0 >= 2) {
        this->unk_2CA = 0;
        goto block_4;
    }
    if (temp_a0 == 2) {
        this->unk_2CA = 0;
block_4:
    }
    this->unk_2EC = (s32) this->actor.world.rot.z;
    this->actor.world.rot.z = 0;
    this->actor.colChkInfo.damageTable = &D_80B8AB3C;
    SkelAnime_InitSV(globalCtx, &this->unk_148, &D_0600D828, &D_060058B8, &this->unk_18C, &this->unk_21C, 0x18);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_3D4, (Actor *) this, &D_80B8AB7C);
    Collider_InitAndSetQuad(globalCtx, &this->unk_420, (Actor *) this, &D_80B8ABA8);
    sp1DD = 0xFF;
    sp1DC = 0xFF;
    sp1DA = 0xFF;
    sp1D9 = 0xFF;
    sp1D8 = 0xFF;
    sp1D6 = 0xFF;
    sp1D5 = 0xFF;
    sp1D4 = 0xFF;
    sp1D3 = 0xFF;
    sp1D2 = 0xFF;
    sp1D1 = 0xFF;
    sp1D0 = 0xFF;
    sp1D7 = 0x40;
    sp1DB = 0;
    sp1E0 = 8;
    sp1E4 = 0;
    sp1E8 = 2;
    sp1DE = 0xFF;
    sp1DF = 0;
    Effect_Add(globalCtx, &this->unk_3D0, 1, 0U, (u8) 0, (void *) &sp4C);
    Actor_SetScale((Actor *) this, 0.0125f);
    temp_t7 = this->actor.flags | 0x8000000;
    temp_t9 = temp_t7 & ~1;
    this->actor.flags = temp_t7;
    this->actor.flags = temp_t9;
    if (this->unk_2BC == 0x7F) {
        this->unk_2BC = -1;
    }
    if (((s32) this->unk_2BC >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk_2BC) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_3D4.dim.radius = 0x14;
    this->unk_3D4.dim.height = 0x41;
    this->unk_3D4.dim.yShift = 0;
    this->unk_2D6 = (s16) this->actor.cutscene;
    this->unk_144 = func_80B85EA0;
    this->actor.world.pos.y = sp1EC->world.pos.y + 160.0f;
    this->actor.flags |= 0x400;
    func_80B85F48(this);
}

void EnKaizoku_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKaizoku *this = (EnKaizoku *) thisx;
    Effect_Destroy(globalCtx, this->unk_3D0);
    Collider_DestroyCylinder(globalCtx, &this->unk_3D4);
    Collider_DestroyQuad(globalCtx, &this->unk_420);
    func_801A2ED8();
}

s32 func_80B85858(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 temp_a3;
    s16 temp_v0;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;
    s16 phi_a3;

    temp_v1 = arg1->actorCtx.actorList[7].first;
    temp_a2 = arg1->actorCtx.actorList[2].first;
    temp_a3 = arg0->unk_2B0;
    phi_v1 = temp_v1;
    phi_a3 = temp_a3;
    if (temp_v1 != 0) {
loop_1:
        temp_v0 = phi_v1->id;
        if (((temp_v0 == 0x3D) || (temp_v0 == (Actor *)0xF)) && (temp_a2->unk_D57 != 0)) {
            if (((temp_v0 != 0x3D) || (temp_a3 != 0xD)) && (temp_a3 != 6)) {
                sp1E = temp_a3;
                func_80B87C7C(arg0, (Actor *)0xF, temp_a2, temp_a3);
                phi_a3 = arg0->unk_2B0;
            }
        } else {
            temp_v1_2 = phi_v1->next;
            phi_v1 = temp_v1_2;
            if (temp_v1_2 != 0) {
                goto loop_1;
            }
        }
    }
    if (temp_a3 != phi_a3) {
        return 1;
    }
    return 0;
}

void func_80B85900(EnKaizoku *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->unk_2B0;
    if (temp_v0 == 1) {
        arg0->unk_57A = (s16) (s32) (Math_SinS((s16) (arg0->unk_2B4 * 0x1068)) * 8920.0f);
        return;
    }
    if (temp_v0 != 0xD) {
        if ((temp_v0 == 9) || (temp_v0 == 0xB)) {
            Math_SmoothStepToS(arg0 + 0x57A, (s16) (arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y), 1, 0x1F4, (s16) 0);
            temp_v0_2 = arg0->unk_57A;
            if ((s32) temp_v0_2 < -0x256F) {
                arg0->unk_57A = -0x256F;
                return;
            }
            phi_v1 = temp_v0_2;
            if ((s32) temp_v0_2 >= 0x2570) {
                phi_v1 = 0x256F;
            }
            arg0->unk_57A = phi_v1;
            return;
        }
        arg0->unk_57A = 0;
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

s32 func_80B85A00(Actor *arg0, GlobalContext *arg1, s16 arg2) {
    void *sp34;
    s16 sp32;
    s16 sp30;
    Actor *sp2C;
    s16 sp2A;
    Actor *temp_a1;
    Actor *temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_t1;
    s32 phi_t0;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v1 = arg0->shape.rot.y;
    temp_v0 = arg0->wallYaw - temp_v1;
    temp_t1 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 < 0) {
        phi_t0 = temp_v0 * -0x10000;
    } else {
        phi_t0 = temp_v0 << 0x10;
    }
    temp_t0 = phi_t0 >> 0x10;
    temp_v0_2 = arg0->yawTowardsPlayer - temp_v1;
    if (temp_v0_2 < 0) {
        sp30 = (s16) -temp_v0_2;
    } else {
        sp30 = (s16) temp_v0_2;
    }
    sp32 = (s16) temp_t0;
    sp34 = temp_t1;
    if (func_800BE184(arg1, arg0, 0x42C80000, 0x2710, 0x4000, (s32) temp_v1) != 0) {
        if (temp_t1[8].colChkInfo.atHitEffect == 0x11) {
            if (arg0->unk_2B0 != 2) {
                func_80B874D8(arg0, arg1);
            }
            return 1;
        }
        func_80B87900(arg0);
        return 1;
    }
    sp34 = temp_t1;
    sp32 = (s16) temp_t0;
    if (func_800BE184(arg1, arg0, 0x42C80000, 0x5DC0, 0x2AA8, (s32) arg0->shape.rot.y) != 0) {
        temp_v1_2 = arg0->yawTowardsPlayer;
        arg0->world.rot.y = temp_v1_2;
        arg0->shape.rot.y = temp_v1_2;
        if ((arg0->bgCheckFlags & 8) != 0) {
            phi_v0 = temp_t0;
            if (temp_t0 < 0) {
                phi_v0 = -temp_t0;
            }
            if ((phi_v0 < 0x2EE0) && (arg0->xzDistToPlayer < 90.0f)) {
                if (arg0->unk_2B0 != 6) {
                    func_80B87C7C(arg0);
                }
                return 1;
            }
            goto block_21;
        }
block_21:
        if (temp_t1[8].colChkInfo.atHitEffect == 0x11) {
            if (arg0->unk_2B0 != 2) {
                func_80B874D8(arg0, arg1);
                return 1;
            }
            goto block_28;
        }
        if (arg0->xzDistToPlayer < ((f32) gGameInfo->data[2411] + 180.0f)) {
            func_80B87900(arg0);
            return 1;
        }
        if (arg0->unk_2B0 != 7) {
            func_80B87E28(arg0);
        }
block_28:
        return 1;
    }
    sp32 = (s16) temp_t0;
    sp34 = temp_t1;
    temp_v0_3 = func_800BE0B8(arg1, arg0, -1, 3U, 80.0f);
    temp_a1 = temp_v0_3;
    if (temp_v0_3 != 0) {
        temp_v1_3 = arg0->yawTowardsPlayer;
        arg0->world.rot.y = temp_v1_3;
        arg0->shape.rot.y = temp_v1_3;
        if ((((arg0->bgCheckFlags & 8) != 0) && (temp_t0 < 0x2EE0)) || (temp_v0_3->id == 0x6A)) {
            if ((temp_v0_3->id == 0x6A) && (sp2C = temp_a1, (Actor_DistanceBetweenActors(arg0, temp_a1) < 80.0f)) && ((s32) (s16) ((arg0->shape.rot.y - temp_a1->world.rot.y) + 0x8000) < 0x4000)) {
                if (arg0->unk_2B0 != 6) {
                    func_80B87C7C(arg0, temp_a1);
                    return 1;
                }
                goto block_39;
            }
            func_80B87900(arg0, temp_a1);
block_39:
            return 1;
        }
        if (arg0->unk_2B0 != 7) {
            func_80B87E28(arg0, temp_a1);
        }
        return 1;
    }
    if (arg2 != 0) {
        if ((s32) sp30 >= 0x2710) {
            func_80B87900(arg0, temp_a1);
            return 1;
        }
        temp_v1_4 = temp_t1->shape.rot.y - arg0->shape.rot.y;
        if ((arg0->xzDistToPlayer <= 65.0f) && (sp2A = temp_v1_4, (func_800BC5EC(arg1, arg0) == 0))) {
            phi_v0_2 = (s32) temp_v1_4;
            if ((s32) temp_v1_4 < 0) {
                phi_v0_2 = -(s32) temp_v1_4;
            }
            if (phi_v0_2 < 0x5000) {
                if (arg0->unk_2B0 != 9) {
                    func_80B87F70(arg0);
                    return 1;
                }
                goto block_55;
            }
            goto block_53;
        }
block_53:
        if (arg0->unk_2B0 != 3) {
            func_80B88CD8(arg0);
        }
block_55:
        return 1;
    }
    return 0;
}

void func_80B85E18(Actor *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0[2].scale.y = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80B8ABF8 + (arg1 * 4)));
    temp_v1 = arg0[2].scale.y;
    arg0[2].targetArrowOffset = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x148, *(&D_80B8ABF8 + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80B8AC44 + temp_v1), 0.0f);
}

s32 func_80B85EA0(GlobalContext *arg0, Actor *arg1) {
    s32 sp34;
    Vec3f *sp2C;
    Vec3s *sp28;
    Vec3f *temp_a3;
    Vec3s *temp_t0;

    temp_a3 = arg1 + 0x3C;
    temp_t0 = arg1 + 0xBC;
    sp28 = temp_t0;
    sp2C = temp_a3;
    sp34 = func_8013A530(arg0, arg1, 9, temp_a3, temp_t0, 10.0f, 400.0f, (s16) -1);
    return sp34 | func_8013A530(arg0, arg1, 0xB, temp_a3, temp_t0, 10.0f, 1200.0f, (s16) -1);
}

void func_80B85F48(EnKaizoku *arg0) {
    Vec3f *temp_a0;

    temp_a0 = arg0 + 0x2F8;
    arg0 = arg0;
    Math_Vec3f_Copy(temp_a0, &D_801D15B0);
    Math_Vec3f_Copy(arg0 + 0x304, &D_801D15B0);
    arg0->unk_2D8 = 1;
    arg0->unk_2B0 = 0;
    arg0->actionFunc = func_80B85FA8;
}

void func_80B85FA8(Actor *arg0, GlobalContext *arg1) {
    void *sp5C;
    f32 sp58;
    s32 sp54;
    f32 *sp44;
    f32 *sp40;
    CollisionCheckInfo *sp3C;
    CollisionPoly *temp_f0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 temp_a3;
    u16 temp_v0_3;
    u32 temp_t5;
    u32 temp_t7;
    void *temp_a0;
    void *temp_v1_3;
    f32 phi_f4;
    s32 phi_a3;
    s32 phi_a2;

    sp5C = arg1->actorCtx.actorList[2].first;
    sp58 = arg0->unk_160;
    temp_a2 = arg0->unk_59C;
    phi_a2 = (s32) temp_a2;
    switch (temp_a2) {
    case 0:
        if (arg0->xzDistToPlayer < 200.0f) {
            if (ActorCutscene_GetCanPlayNext(arg0[2].focus.unk_12) == 0) {
                ActorCutscene_SetIntentToPlay(arg0[2].focus.unk_12);
                return;
            }
            ActorCutscene_StartAndSetUnkLinkFields(arg0[2].focus.unk_12, arg0);
            func_800B7298(arg1, arg0, 0x15U);
            temp_v1 = arg0->yawTowardsPlayer;
            arg0->unk_59E = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
            arg0->world.rot.y = temp_v1;
            arg0->shape.rot.y = temp_v1;
            if ((bitwise s32) arg0[2].velocity.x != 2) {
                sp5C->world.pos.x = arg0->home.pos.x + 90.0f;
                sp5C->world.pos.z = arg0->home.pos.z + 30.0f;
            } else {
                sp5C->world.pos.x = arg0->home.pos.x - 90.0f;
                sp5C->world.pos.z = arg0->home.pos.z - 30.0f;
            }
            sp5C->speedXZ = 0.0f;
            arg0->world.pos.x = arg0->home.pos.x;
            arg0->world.pos.z = arg0->home.pos.z;
            func_801518B0(arg1, *(&D_80B8A8D0 + (((arg0->unk_2CA * 4) + arg0->unk_2C8) * 2)), arg0);
            arg0->unk_2C8 = (s16) (arg0->unk_2C8 + 1);
            arg0->flags &= -2;
            temp_v0 = Math_Vec3f_Yaw(sp5C + 0x24, (Vec3f *) &arg0->world);
            sp5C->world.rot.y = temp_v0;
            sp5C->shape.rot.y = temp_v0;
            Math_Vec3f_Copy((Vec3f *) &arg0[4].xyzDistToPlayerSq, (Vec3f *) &arg0[4].colChkInfo.damage);
            Math_Vec3f_Copy((Vec3f *) &arg0[4].colChkInfo, (Vec3f *) &arg0[4].shape.yOffset);
            arg0->draw = func_80B8A718;
            arg0[4].floorHeight = 0.0f;
            arg0[4].colChkInfo.displacement.z = -0.11f;
            func_801A0238(0, 0xA);
            arg0->unk_59C = (s16) (arg0->unk_59C + 1);
        case 1:
            temp_v0_2 = Math_Vec3f_Yaw(sp5C + 0x24, (Vec3f *) &arg0->world);
            sp5C->world.rot.y = temp_v0_2;
            sp5C->shape.rot.y = temp_v0_2;
            temp_v1_2 = arg0->yawTowardsPlayer;
            arg0->world.rot.y = temp_v1_2;
            arg0->shape.rot.y = temp_v1_2;
            if ((bitwise s32) arg0[2].velocity.x != 2) {
                sp5C->world.pos.x = arg0->home.pos.x + 90.0f;
                phi_f4 = arg0->home.pos.z + 30.0f;
            } else {
                sp5C->world.pos.x = arg0->home.pos.x - 90.0f;
                phi_f4 = arg0->home.pos.z - 30.0f;
            }
            sp5C->world.pos.z = phi_f4;
            if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
                func_801477B4(arg1);
                func_80B85E18(arg0, 0xB);
                arg0[4].floorHeight = 0.0f;
                arg0->unk_59C = (s16) (arg0->unk_59C + 1);
                arg0->gravity = -2.0f;
            }
block_42:
            phi_a2 = (s32) arg0->unk_59C;
            goto block_43;
        }
    default:
block_43:
        sp3C = &arg0[4].colChkInfo;
        sp40 = &arg0[4].xyzDistToPlayerSq;
        if (phi_a2 < 7) {
            temp_a1 = (((bitwise s32) arg0[2].velocity.x * 8) + phi_a2) * 0xC;
            temp_v1_3 = temp_a1 + &D_80B8A8E4;
            temp_f0 = arg0->home.pos.x;
            temp_f2 = arg0->home.pos.z;
            temp_a0 = temp_a1 + &D_80B8AA04;
            arg0->unk_5C8 = (f32) (temp_v1_3->unk_0 + temp_f0);
            arg0->unk_5CC = (f32) (temp_v1_3->unk_4 + sp5C->world.pos.y);
            arg0->unk_5D0 = (f32) (temp_v1_3->unk_8 + temp_f2);
            arg0[4].shape.yOffset = temp_a0->unk_0 + temp_f0;
            arg0[4].shape.shadowDraw = (bitwise void (*)(Actor *, Lights *, GlobalContext *)) (temp_a0->unk_4 + sp5C->world.pos.y);
            arg0[4].shape.shadowScale = temp_a0->unk_8 + temp_f2;
        }
        if (phi_a2 >= 5) {
            if (sp58 >= 6.0f) {
                Math_ApproachF(&arg0[2].speedXZ, 1.0f, 0.3f, 0.3f);
                temp_f0_2 = arg0[2].speedXZ;
                arg0[2].gravity = temp_f0_2;
                arg0[2].minVelocityY = temp_f0_2;
            }
            if (sp58 >= 22.0f) {
                Math_ApproachF((f32 *) &arg0[2].wallPoly, 1.0f, 0.3f, 0.3f);
                temp_f0_3 = arg0[2].wallPoly;
                arg0[2].floorPoly = temp_f0_3;
                arg0->unk_30C = (bitwise f32) temp_f0_3;
            }
        }
        if ((s32) arg0->unk_59C >= 5) {
            Math_ApproachF(sp40, arg0->unk_5C8, 0.5f, arg0->unk_5E0);
            Math_ApproachF(&arg0[4].xzDistToPlayer, arg0->unk_5CC, 0.5f, arg0->unk_5E0);
            Math_ApproachF(&arg0[4].yDistToPlayer, arg0->unk_5D0, 0.5f, arg0->unk_5E0);
            Math_ApproachF((f32 *) sp3C, arg0[4].shape.yOffset, 0.5f, arg0->unk_5E0);
            Math_ApproachF((f32 *) &arg0[4].colChkInfo.displacement, (bitwise f32) arg0[4].shape.shadowDraw, 0.5f, arg0->unk_5E0);
            Math_ApproachF(&arg0[4].colChkInfo.displacement.y, arg0[4].shape.shadowScale, 0.5f, arg0->unk_5E0);
        } else {
            sp44 = &arg0[4].shape.yOffset;
            Math_Vec3f_Copy((Vec3f *) sp40, (Vec3f *) &arg0[4].colChkInfo.damage);
            Math_Vec3f_Copy((Vec3f *) sp3C, (Vec3f *) sp44);
        }
        temp_a1_2 = arg0->unk_59E;
        if (temp_a1_2 != 0) {
            arg0->unk_5C0 = 1.0f;
            arg0->unk_5C4 = 0.0f;
            func_8016981C(arg1, temp_a1_2, sp3C, sp40, &arg0[4].colChkInfo.displacement.z);
        }
        return;
    case 2:
        if ((arg0->bgCheckFlags & 1) != 0) {
            if (arg0->unk_2D8 != 0) {
                arg0->unk_2D8 = 0U;
                arg0->world.pos.y = arg0->floorHeight;
                arg0->velocity.y = 0.0f;
                func_800B7298(arg1, arg0, 4U);
                func_800BBDAC(arg1, arg0, (Vec3f *) &arg0[4].wallPoly, 3.0f, 2, 2.0f, (s16) 0, (s16) 0, (u8) 0);
                func_800BBDAC(arg1, arg0, (Vec3f *) &arg0[4].speedXZ, 3.0f, 2, 2.0f, (s16) 0, (s16) 0, (u8) 0);
                Audio_PlayActorSound2(arg0, 0x3A66U);
            }
            phi_a2 = (s32) arg0->unk_59C;
            if (sp58 >= 11.0f) {
                arg0->unk_59C = (s16) (arg0->unk_59C + 1);
                arg0[4].floorHeight = 0.0f;
                arg0[4].colChkInfo.displacement.z = 0.0f;
                phi_a2 = (s32) arg0->unk_59C;
            }
        }
        goto block_43;
    case 3:
        if (arg0[2].targetArrowOffset <= sp58) {
            temp_a3 = (arg0->unk_2CA * 4) + arg0->unk_2C8;
            sp54 = temp_a3;
            phi_a3 = temp_a3;
            if (Player_GetMask(arg1) == 0x10) {
                temp_v0_3 = *(&D_80B8A8D0 + (temp_a3 * 2));
                if (temp_v0_3 == 0x11A5) {
                    phi_a3 = 8;
                } else if (temp_v0_3 == 0x11A9) {
                    phi_a3 = 9;
                }
            }
            func_801518B0(arg1, *(&D_80B8A8D0 + (phi_a3 * 2)), arg0);
            func_80B85E18(arg0, 0xC);
            arg0[4].floorHeight = 0.0f;
            arg0->unk_59C = (s16) (arg0->unk_59C + 1);
            arg0->unk_2C8 = (s16) (arg0->unk_2C8 + 1);
            goto block_42;
        }
        goto block_43;
    case 4:
        if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            arg0[4].floorHeight = 0.0f;
            arg0->unk_59C = (s16) (arg0->unk_59C + 1);
            func_801A0238(0x7F, 0);
            func_801A2E54(0x38);
            func_80B85E18(arg0, 0xD);
        }
        goto block_42;
    case 5:
        Math_ApproachF((f32 *) &arg0[4].shape.shadowAlpha, 2.0f, 0.2f, 1.0f);
        if (func_801378B8((SkelAnime *) &arg0[1].flags, 20.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x3A4DU);
        }
        if (sp58 >= 30.0f) {
            arg0[4].floorHeight = 0.0f;
            arg0->unk_59C = (s16) (arg0->unk_59C + 1);
        }
        goto block_42;
    case 6:
        Math_ApproachF((f32 *) &arg0[4].shape.shadowAlpha, 5.0f, 0.3f, 1.0f);
        if (arg0[2].targetArrowOffset <= sp58) {
            arg0[4].floorHeight = 1e-44.0f;
            arg0[2].speedXZ = 1.0f;
            arg0->unk_59C = (s16) (arg0->unk_59C + 1);
            arg0[2].gravity = 1.0f;
            arg0[2].minVelocityY = 1.0f;
            arg0[2].wallPoly = (bitwise CollisionPoly *) 1.0f;
            arg0[2].floorPoly = (bitwise CollisionPoly *) 1.0f;
            arg0->unk_30C = 1.0f;
        }
        goto block_42;
    case 7:
        if ((bitwise s32) arg0[4].floorHeight == 0) {
            func_800B7298(arg1, arg0, 6U);
            ActorCutscene_Stop(arg0[2].focus.unk_12);
            temp_t5 = arg0->flags & 0xFFEFFFFF;
            temp_t7 = temp_t5 & 0xF7FFFFFF;
            arg0->flags = temp_t5;
            arg0->flags = temp_t7;
            arg0->unk_59C = 0;
            arg0->unk_59E = 0;
            arg0->flags = temp_t7 | 1;
            func_80B872A4(arg0);
            goto block_42;
        }
        goto block_43;
    }
}

void func_80B86804(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_59E == 0) {
        if (ActorCutscene_GetCanPlayNext(arg0[2].focus.unk_12) == 0) {
            ActorCutscene_SetIntentToPlay(arg0[2].focus.unk_12);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(arg0[2].focus.unk_12, arg0);
        goto block_4;
    }
block_4:
    func_800B7298(arg1, arg0, 0x60U);
    arg0->unk_59E = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
    arg0->unk_2B2 = 0x1E;
    arg0->flags &= -2;
    arg0[4].floorHeight = 0.0f;
    arg0->unk_59C = 0;
    arg0->unk_2D8 = 0;
    arg0->unk_2B0 = 0;
    arg0[2].world.pos.x = (bitwise f32) func_80B868B8;
    arg0->speedXZ = 0.0f;
}

void func_80B868B8(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 temp_f16;
    s16 temp_a1;
    s16 temp_v0;

    sp2C = arg0->unk_160;
    Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 1, 0xFA0, (s16) 1);
    temp_f16 = (Math_SinS(arg0->yawTowardsPlayer) * 155.0f) + arg0->world.pos.x;
    arg0[4].xzDistToPlayer = arg0->world.pos.y + 10.0f;
    arg0[4].xyzDistToPlayerSq = temp_f16;
    arg0[4].yDistToPlayer = (Math_CosS(arg0->yawTowardsPlayer) * 115.0f) + arg0->world.pos.z;
    arg0[4].colChkInfo.damageTable = Math_SinS(arg0->yawTowardsPlayer) + arg0->world.pos.x;
    arg0[4].colChkInfo.displacement.x = arg0->world.pos.y + 30.0f;
    temp_v0 = arg0->unk_59C;
    arg0[4].colChkInfo.displacement.y = (Math_CosS(arg0->yawTowardsPlayer) * 11.0f) + arg0->world.pos.z;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
                func_801477B4(arg1);
                func_800B7298(arg1, arg0, 6U);
                ActorCutscene_Stop(arg0[2].focus.unk_12);
                arg0->unk_59E = 0;
                arg1->nextEntranceIndex = arg1->setupExitList[arg0[2].focus.rot.z];
                gSaveContext.nextCutsceneIndex = 0;
                Scene_SetExitFade(arg1);
                arg1->sceneLoadFlag = 0x14;
                arg0->unk_2B0 = 0x10;
                arg0->unk_59C = (s16) (arg0->unk_59C + 1);
            }
        } else if (arg0[2].targetArrowOffset <= sp2C) {
            func_80B85E18(arg0, 0xF);
            func_801518B0(arg1, *(&D_80B8A8D0 + (((arg0->unk_2CA * 4) + arg0->unk_2C8) * 2)), arg0);
            Audio_PlayActorSound2(arg0, 0x39B9U);
            arg0[4].floorHeight = 0.0f;
            arg0->unk_59C = (s16) (arg0->unk_59C + 1);
        }
    } else if (arg0[2].targetArrowOffset <= sp2C) {
        func_80B85E18(arg0, 0xE);
        arg0->unk_2C8 = 3;
        arg0[4].floorHeight = 0.0f;
        arg0->unk_59C = (s16) (arg0->unk_59C + 1);
    }
    temp_a1 = arg0->unk_59E;
    if (temp_a1 != 0) {
        arg0[4].colChkInfo.displacement.z = 0.0f;
        arg0->unk_5C4 = 0.0f;
        arg0->unk_5C0 = 1.0f;
        func_8016981C(arg1, temp_a1, &arg0[4].colChkInfo, &arg0[4].xyzDistToPlayerSq, &arg0[4].colChkInfo.displacement.z);
    }
}

void func_80B86B58(Actor *arg0) {
    arg0->unk_2D8 = 0;
    arg0->unk_2B0 = 0;
    arg0[2].world.pos.x = func_80B86B74;
}

void func_80B86B74(Actor *arg0, GlobalContext *arg1) {
    void *sp5C;
    f32 sp54;
    CollisionPoly **sp3C;
    CollisionCheckInfo *sp38;
    Actor *temp_v0_3;
    CollisionCheckInfo *temp_a0_3;
    CollisionPoly *temp_f0_3;
    f32 *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_4;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_t8;
    void *temp_v1;
    s32 phi_v0;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp54 = arg0->unk_160;
    if ((s32) arg0->unk_59C < 2) {
        sp5C = temp_v1;
        Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 1, 0xFA0, (s16) 1);
        temp_v1->world.pos.x = arg0->home.pos.x + 90.0f;
        temp_v1->world.pos.z = arg0->home.pos.z + 30.0f;
        arg0->world.pos.x = arg0->home.pos.x;
        arg0->world.pos.z = arg0->home.pos.z;
        arg0->unk_5C8 = (f32) (temp_v1->world.pos.x + 39.0f);
        arg0->unk_5CC = (f32) (temp_v1->world.pos.y + 4.0f);
        arg0->unk_5D0 = (f32) (temp_v1->world.pos.z - 41.0f);
        arg0[4].shape.yOffset = temp_v1->world.pos.x - 150.0f;
        arg0[4].shape.shadowDraw = temp_v1->world.pos.y + 60.0f;
        arg0[4].shape.shadowScale = temp_v1->world.pos.z + 50.0f;
    }
    sp5C = arg1->actorCtx.actorList[2].first;
    temp_v0 = Math_Vec3f_Yaw(arg1->actorCtx.actorList[2].first + 0x24, arg0 + 0x24);
    arg1->actorCtx.actorList[2].first->world.rot.y = temp_v0;
    arg1->actorCtx.actorList[2].first->shape.rot.y = temp_v0;
    temp_a0 = arg0->unk_59C;
    if (temp_a0 != 0) {
        if (temp_a0 != 1) {
            if (temp_a0 != 2) {
                if (temp_a0 != 3) {

                } else if (arg0[4].floorHeight == 0) {
                    Math_ApproachZeroF(arg0 + 0x5EC, 0.5f, 10.0f);
                    temp_f0 = arg0[4].shape.feetPos[0].z / 60.0f;
                    arg0[4].shape.feetPos[0].y = temp_f0;
                    temp_t8 = (u32) (temp_f0 * 255.0f);
                    arg1->envCtx.unk_E6[3] = (u8) temp_t8;
                    if ((temp_t8 & 0xFF) < 0xA) {
                        arg1->envCtx.unk_E6[0] = 0;
                        arg1->envCtx.unk_E6[1] = 0;
                        arg1->envCtx.unk_E6[2] = 0;
                        arg1->envCtx.unk_E6[3] = 0;
                        arg1->envCtx.unk_E5 = 0;
                        arg0->unk_59C = 0;
                        arg0->unk_59E = 0;
                        func_800B7298(arg1, arg0, 6U);
                        ActorCutscene_Stop(arg0[2].focus.unk_12);
                        temp_a1 = arg0[2].world.rot.z;
                        if ((s32) temp_a1 >= 0) {
                            Actor_SetSwitchFlag(arg1, (s32) temp_a1);
                        }
                        Actor_MarkForDeath(arg0);
                    }
                }
            } else {
                arg0->unk_5C8 = (f32) (arg1->actorCtx.actorList[2].first->world.pos.x + 77.0f);
                arg0->unk_5CC = (f32) (arg1->actorCtx.actorList[2].first->world.pos.y + 84.0f);
                arg0->unk_5D0 = (f32) (arg1->actorCtx.actorList[2].first->world.pos.z - 71.0f);
                arg0[4].shape.yOffset = arg1->actorCtx.actorList[2].first->world.pos.x - 110.0f;
                arg0[4].shape.shadowDraw = (bitwise void (*)(Actor *, Lights *, GlobalContext *)) arg1->actorCtx.actorList[2].first->world.pos.y;
                arg0[4].bgCheckFlags = (s16) arg0[4].bgCheckFlags + 1;
                arg0[4].shape.shadowScale = arg1->actorCtx.actorList[2].first->world.pos.z + 30.0f;
                if (sp54 >= 1.0f) {
                    Math_ApproachZeroF(&arg0[2].speedXZ, 0.3f, 0.3f);
                    Math_ApproachZeroF((f32 *) &arg0[2].wallPoly, 0.3f, 0.3f);
                    temp_f0_2 = arg0[2].speedXZ;
                    arg0[2].gravity = temp_f0_2;
                    arg0[2].minVelocityY = temp_f0_2;
                    temp_f0_3 = arg0[2].wallPoly;
                    arg0[2].floorPoly = temp_f0_3;
                    arg0->unk_30C = temp_f0_3;
                }
                temp_v0_2 = (s16) arg0[4].bgCheckFlags;
                phi_v0 = (s32) temp_v0_2;
                if (temp_v0_2 == 0x12) {
                    Audio_PlayActorSound2(arg0, 0x3A74U);
                    temp_v0_3 = Actor_Spawn(&arg1->actorCtx, arg1, 0xF, arg0->world.pos.x, arg0->world.pos.y + 10.0f, arg0->world.pos.z, (s16) (s32) arg0->shape.rot.x, (s16) (s32) arg0->shape.rot.y, (s16) (s32) arg0->shape.rot.z, (s16) -8);
                    if (temp_v0_3 != 0) {
                        temp_v0_3->gravity = -10.0f;
                        arg1->envCtx.unk_E5 = 1;
                    }
                    phi_v0 = (s32) (s16) arg0[4].bgCheckFlags;
                }
                if (phi_v0 >= 0x12) {
                    Math_ApproachF(&arg0[4].shape.feetPos[0].z, 60.0f, 1.0f, 20.0f);
                    temp_f0_4 = arg0[4].shape.feetPos[0].z / 60.0f;
                    arg0[4].shape.feetPos[0].y = temp_f0_4;
                    arg1->envCtx.unk_E6[3] = (u8) (u32) (temp_f0_4 * 255.0f);
                    arg1->envCtx.unk_E6[2] = 0xFF;
                    arg1->envCtx.unk_E6[1] = 0xFF;
                    arg1->envCtx.unk_E6[0] = 0xFF;
                }
                if ((arg0[2].targetArrowOffset <= sp54) && ((s32) (s16) arg0[4].bgCheckFlags >= 0x28)) {
                    arg0->draw = NULL;
                    arg0[4].floorHeight = 1.4e-44f;
                    sp3C = &arg0[2].wallPoly;
                    Math_Vec3f_Copy((Vec3f *) &arg0[2].speedXZ, &D_801D15B0);
                    Math_Vec3f_Copy((Vec3f *) sp3C, &D_801D15B0);
                    arg0->unk_59C = (s16) (arg0->unk_59C + 1);
                }
            }
        } else {
            if (arg0[2].targetArrowOffset <= sp54) {
                if (arg0->unk_2D9 == 0) {
                    Audio_PlayActorSound2(arg0, 0x3A73U);
                    arg0->unk_2D9 = 1U;
                } else {
                    Audio_PlayActorSound2(arg0, 0x39B7U);
                }
            }
            if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
                func_801477B4(arg1);
                func_80B85E18(arg0, 0x12);
                func_800B7298(arg1, arg0, 0x85U);
                arg0[4].bgCheckFlags = 0;
                arg0[4].floorHeight = 0.0f;
                arg0->unk_59C = (s16) (arg0->unk_59C + 1);
            }
        }
    } else {
        func_80B85E18(arg0, 0x11);
        arg0->unk_2C8 = 2;
        func_801518B0(arg1, *(&D_80B8A8D0 + (((arg0->unk_2CA * 4) + arg0->unk_2C8) * 2)), arg0);
        arg0->unk_2D9 = 0U;
        arg0[4].floorHeight = 0.0f;
        arg0->unk_59C = (s16) (arg0->unk_59C + 1);
    }
    temp_a0_2 = &arg0[4].xyzDistToPlayerSq;
    sp3C = (CollisionPoly **) temp_a0_2;
    Math_ApproachF(temp_a0_2, arg0->unk_5C8, 0.5f, arg0->unk_5E0);
    Math_ApproachF(&arg0[4].xzDistToPlayer, arg0->unk_5CC, 0.5f, arg0->unk_5E0);
    Math_ApproachF(&arg0[4].yDistToPlayer, arg0->unk_5D0, 0.5f, arg0->unk_5E0);
    temp_a0_3 = &arg0[4].colChkInfo;
    sp38 = temp_a0_3;
    Math_ApproachF((f32 *) temp_a0_3, arg0[4].shape.yOffset, 0.5f, arg0->unk_5E0);
    Math_ApproachF((f32 *) &arg0[4].colChkInfo.displacement, (bitwise f32) arg0[4].shape.shadowDraw, 0.5f, arg0->unk_5E0);
    Math_ApproachF(&arg0[4].colChkInfo.displacement.y, arg0[4].shape.shadowScale, 0.5f, arg0->unk_5E0);
    Math_ApproachF((f32 *) &arg0[4].shape.shadowAlpha, 10.0f, 0.5f, 100.0f);
    temp_a1_2 = arg0->unk_59E;
    if (temp_a1_2 != 0) {
        arg0[4].colChkInfo.displacement.z = 0.0f;
        arg0->unk_5C4 = 0.0f;
        arg0->unk_5C0 = 1.0f;
        func_8016981C(arg1, temp_a1_2, sp38, (f32 *) sp3C, &arg0[4].colChkInfo.displacement.z);
    }
}

void func_80B872A4(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    func_80B85E18(NULL);
    arg0->unk_2B0 = 1;
    arg0[2].world.pos.x = func_80B872F4;
    arg0->shape.shadowScale = 90.0f;
}

void func_80B872F4(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    s16 sp1A;
    Actor *temp_a0;
    Actor *temp_a0_2;
    f32 temp_f0;
    s16 temp_a2;
    s16 temp_v1;
    s32 phi_v0;

    sp1C = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk_2B4 == 0) && (temp_a0 = arg0, (func_80B85858() == 0)) && (arg0 = temp_a0, temp_a0_2 = arg0, (func_80B85A00(temp_a0, arg1, 0) == 0))) {
        temp_v1 = temp_a0_2->yawTowardsPlayer;
        temp_a2 = temp_v1 - temp_a0_2->shape.rot.y;
        if ((temp_a0_2->xzDistToPlayer < 100.0f) && (sp1C[8].colChkInfo.acHitEffect != 0) && ((s32) temp_a2 >= 0x1F40)) {
            temp_a0_2->world.rot.y = temp_v1;
            temp_a0_2->shape.rot.y = temp_v1;
            func_80B88CD8(temp_a0_2);
            return;
        }
        arg0 = temp_a0_2;
        sp1A = temp_a2;
        if (Actor_IsActorFacingLink(temp_a0_2, 0xBB8) != 0) {
            temp_f0 = arg0->xzDistToPlayer;
            if ((temp_f0 < 400.0f) && (temp_f0 > 150.0f) && (arg0 = arg0, sp1A = temp_a2, (Rand_ZeroOne() < 0.7f))) {
                arg0 = arg0;
                sp1A = temp_a2;
                if (!(Rand_ZeroOne() > 0.5f)) {
                    phi_v0 = (s32) temp_a2;
                    if ((s32) temp_a2 < 0) {
                        phi_v0 = -(s32) temp_a2;
                    }
                    if (phi_v0 < 0x3000) {
                        goto block_15;
                    }
                    func_80B88910(arg0);
                    return;
                }
block_15:
                func_80B88214(arg0);
                return;
            }
            arg0 = arg0;
            if (Rand_ZeroOne() > 0.1f) {
                func_80B8833C(arg0);
                return;
            }
            func_80B88CD8(arg0);
            return;
        }
        func_80B88770(arg0);
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

void func_80B874D8(Actor *arg0, GlobalContext *arg1) {
    void *sp24;

    sp24 = arg1->actorCtx.actorList[2].first;
    func_80B85E18(arg0, 3, arg1);
    if (Math_SinS((s16) (sp24->shape.rot.y - arg0->shape.rot.y)) > 0.0f) {
        arg0->speedXZ = -10.0f;
    } else if (Math_SinS((s16) (sp24->shape.rot.y - arg0->shape.rot.y)) < 0.0f) {
        arg0->speedXZ = 10.0f;
    } else if (Rand_ZeroOne() > 0.5f) {
        arg0->speedXZ = 10.0f;
    } else {
        arg0->speedXZ = -10.0f;
    }
    arg0->unk_2B2 = 6;
    arg0->unk_2B0 = 2;
    arg0[2].world.pos.x = (bitwise f32) func_80B8760C;
    arg0->unk_164 = 1.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    arg0[2].scale.x = 0.0f;
}

void func_80B8760C(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v1;
    s32 phi_v0_3;

    temp_v0 = arg0->bgCheckFlags & 8;
    arg0->world.rot.y = arg0->yawTowardsPlayer + 0x3A98;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        if (func_800BC4EC(arg0, arg1, arg0->speedXZ, (s16) (arg0->shape.rot.y + 0x4000)) == 0) {
            phi_v0 = arg0->bgCheckFlags & 8;
            goto block_3;
        }
        goto block_13;
    }
block_3:
    if (phi_v0 != 0) {
        if (arg0->speedXZ >= 0.0f) {
            phi_v0_3 = (arg0->shape.rot.y + 0x4000) << 0x10;
        } else {
            phi_v0_3 = (arg0->shape.rot.y - 0x4000) << 0x10;
        }
        phi_v0_2 = (s32) (s16) (arg0->wallYaw - (phi_v0_3 >> 0x10));
    } else {
        arg0->speedXZ *= -0.8f;
        phi_v0_2 = 0;
    }
    phi_v1 = phi_v0_2;
    if (phi_v0_2 < 0) {
        phi_v1 = -phi_v0_2;
    }
    if (phi_v1 >= 0x4001) {
        func_80B87C7C(arg0);
        return;
    }
block_13:
    temp_f0 = arg0->xzDistToPlayer;
    if (temp_f0 <= 65.0f) {
        Math_ApproachF((f32 *) &arg0[2].scale, -4.0f, 1.0f, 1.5f);
    } else if (temp_f0 > 40.0f) {
        Math_ApproachF((f32 *) &arg0[2].scale, 4.0f, 1.0f, 1.5f);
    } else {
        Math_ApproachZeroF((f32 *) &arg0[2].scale, 1.0f, 6.65f);
    }
    if (arg0[2].scale.x != 0.0f) {
        arg0->world.pos.x += Math_SinS(arg0->yawTowardsPlayer) * arg0[2].scale.x;
        arg0->world.pos.z += Math_CosS(arg0->yawTowardsPlayer) * arg0[2].scale.x;
    }
    temp_f0_2 = arg0->unk_160;
    arg0->unk_164 = 1.0f;
    temp_f4 = (s32) (temp_f0_2 - 1.0f);
    temp_f6 = (s32) (temp_f0_2 + 1.0f);
    if ((temp_f0_2 != 0.0f) && (((temp_f4 < 0) && (temp_f6 > 0)) || ((temp_f4 < 5) && (temp_f6 >= 6)))) {
        Audio_PlayActorSound2(arg0, 0x39A0U);
    }
    if ((arg1->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2(arg0, 0x39B7U);
    }
    if (arg0->unk_2B2 == 0) {
        arg0->shape.rot.y = arg0->yawTowardsPlayer;
        if (func_80B85858(arg0, arg1) == 0) {
            if (arg0->xzDistToPlayer <= 70.0f) {
                func_80B87F70(arg0);
                return;
            }
            func_80B87E28(arg0);
            return;
        }
        /* Duplicate return node #36. Try simplifying control flow for better match */
        return;
    }
    if (arg0->speedXZ >= 0.0f) {
        arg0->shape.rot.y += 0x4000;
        return;
    }
    arg0->shape.rot.y += -0x4000;
}

void func_80B87900(Actor *arg0) {
    Actor *temp_a0;
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80B85E18(temp_a0, 7, (GlobalContext *) temp_a2);
    if (arg0[2].focus.rot.y != 0) {
        arg0[2].focus.rot.y = -1;
    }
    arg0->unk_2D8 = 0;
    arg0->speedXZ = 0.0f;
    arg0 = arg0;
    arg0->unk_2B2 = Rand_S16Offset(0xA, 0xA);
    arg0->unk_3E5 = (u8) (arg0->unk_3E5 | 4);
    arg0->unk_2B4 = 0xC;
    arg0->unk_2B0 = 0xC;
    arg0[2].world.pos.x = (bitwise f32) func_80B8798C;
}

void func_80B8798C(Actor *arg0, GlobalContext *arg1, s16 arg2, ? arg3) {
    void *sp2C;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_t1;
    s32 phi_v1;
    s32 phi_v1_2;
    GlobalContext *phi_a1;
    s16 phi_a2;
    ? phi_a3;

    temp_t1 = arg1->actorCtx.actorList[2].first;
    arg0->unk_2D8 = 1;
    phi_a1 = arg1;
    phi_a2 = arg2;
    phi_a3 = arg3;
    if (arg0->unk_2B2 == 0) {
        arg0->unk_164 = 1.0f;
    }
    if (arg0->unk_2B4 == 0) {
        temp_t0 = arg0->shape.rot.y;
        arg0->unk_2D8 = 0;
        temp_v0 = arg0->yawTowardsPlayer - temp_t0;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 < 0x4001) && (arg0->xzDistToPlayer < 40.0f) && (phi_a1 = (GlobalContext *) arg0, phi_a2 = 0x42C80000, phi_a3 = 0x2710, (fabsf(arg0->yDistToPlayer) < 50.0f))) {
            sp2C = temp_t1;
            if (func_800BE184(arg1, arg0, 0x42C80000, 0x2710, 0x4000, (s32) temp_t0) != 0) {
                if (temp_t1[8].colChkInfo.atHitEffect == 0x11) {
                    arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
                    func_80B874D8(arg0, arg1);
                    return;
                }
                if ((arg1->gameplayFrames & 1) == 0) {
                    func_80B87900(arg0, (Actor *) arg1);
                    return;
                }
                arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
                func_80B87E28(arg0, (Actor *) arg1);
                return;
            }
            temp_v0_2 = temp_t1->shape.rot.y - arg0->shape.rot.y;
            phi_v1_2 = (s32) temp_v0_2;
            if ((s32) temp_v0_2 < 0) {
                phi_v1_2 = -(s32) temp_v0_2;
            }
            if (phi_v1_2 < 0x4000) {
                arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
                func_80B87F70(arg0, arg1);
                return;
            }
            arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
            func_80B88CD8(arg0, arg1);
            return;
        }
        arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
        func_80B88CD8(arg0, phi_a1, phi_a2, phi_a3);
        return;
    }
    if ((arg0->unk_2B2 == 0) && (sp2C = temp_t1, (func_800BE184(arg1, arg0, 0x42C80000, 0x2710, 0x4000, (s32) arg0->shape.rot.y) != 0))) {
        if (temp_t1[8].colChkInfo.atHitEffect == 0x11) {
            arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
            func_80B874D8(arg0, arg1);
            return;
        }
        if (func_80B85858(arg0, arg1) == 0) {
            if ((arg1->gameplayFrames & 1) == 0) {
                if ((arg0->xzDistToPlayer < 100.0f) && (Rand_ZeroOne() > 0.7f)) {
                    arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
                    func_80B87C7C(arg0);
                    return;
                }
                arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFB);
                func_80B87E28(arg0);
                return;
            }
            func_80B87900(arg0, (Actor *) arg1);
            /* Duplicate return node #31. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #31. Try simplifying control flow for better match */
    }
}

void func_80B87C7C(Actor *arg0) {
    func_80B85E18((Actor *)8);
    arg0->speedXZ = 6.5f;
    arg0->velocity.y = 15.0f;
    Audio_PlayActorSound2(arg0, 0x386CU);
    arg0->unk_400 = 4;
    arg0->unk_3E8 = 0xA;
    arg0->unk_44C = 4;
    arg0->unk_2B0 = 6;
    arg0[2].world.pos.x = (bitwise f32) func_80B87D3C;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80B87CF8(GlobalContext *arg0, Vec3f *arg1) {
    EffectSsKiraKira_SpawnSmall(arg0, arg1, &D_80B8AC60, &D_80B8AC6C, &D_80B8AC58, &D_80B8AC5C);
}

void func_80B87D3C(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    s16 temp_v0;

    sp2C = arg0->unk_160;
    Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 1, 0xFA0, (s16) 1);
    if (arg0->velocity.y >= 5.0f) {
        func_80B87CF8(arg1, arg0 + 0x58C);
        func_80B87CF8(arg1, arg0 + 0x580);
    }
    arg0->unk_2D8 = 0;
    if ((arg0[2].targetArrowOffset <= sp2C) && ((arg0->bgCheckFlags & 3) != 0)) {
        temp_v0 = arg0->yawTowardsPlayer;
        arg0->unk_400 = 1;
        arg0->unk_3E8 = 3;
        arg0->unk_44C = 2;
        arg0->shape.rot.x = 0;
        arg0->shape.rot.y = temp_v0;
        arg0->world.rot.y = temp_v0;
        arg0->speedXZ = 0.0f;
        arg0->velocity.y = 0.0f;
        arg0->world.pos.y = arg0->floorHeight;
        func_80B87F70(arg0);
    }
}

void func_80B87E28(Actor *arg0) {
    s16 temp_v0;

    func_80B85E18((Actor *)8);
    arg0->speedXZ = -8.0f;
    Audio_PlayActorSound2(arg0, 0x386CU);
    temp_v0 = arg0->yawTowardsPlayer;
    arg0->unk_400 = 4;
    arg0->unk_3E8 = 0xA;
    arg0->unk_44C = 4;
    arg0->unk_2B0 = 7;
    arg0[2].world.pos.x = (bitwise f32) func_80B87E9C;
    arg0->world.rot.y = temp_v0;
    arg0->shape.rot.y = temp_v0;
}

void func_80B87E9C(Actor *arg0, void *arg1) {
    f32 temp_f0;

    arg0->unk_2D8 = 0;
    if (arg0[2].targetArrowOffset <= arg0->unk_160) {
        temp_f0 = arg0->xzDistToPlayer;
        if ((temp_f0 < 170.0f) && (temp_f0 > 140.0f) && (Rand_ZeroOne() < 0.2f)) {
            func_80B88910(arg0);
        } else {
            func_80B87900(arg0);
        }
    }
    if ((arg1->unk_9C & 0x5F) == 0) {
        Audio_PlayActorSound2(arg0, 0x39B7U);
    }
}

void func_80B87F70(Actor *arg0) {
    Actor *temp_a0;
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80B85E18(temp_a0, 9, (GlobalContext *) temp_a2);
    arg0[2].focus.rot.x = 0;
    arg0->unk_430 = (u8) (arg0->unk_430 & 0xFFFB);
    arg0->speedXZ = 0.0f;
    func_801A7328(&arg0->projectedPos, 0x39B7, arg0);
    arg0->unk_2B0 = 9;
    arg0[2].world.pos.x = (bitwise f32) func_80B87FDC;
}

void func_80B87FDC(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    s16 sp2E;
    s16 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_v0_2;

    sp30 = arg0->unk_160;
    temp_a2 = arg0->shape.rot.y;
    temp_a0 = arg0 + 0x148;
    temp_v1 = arg1->actorCtx.actorList[2].first->unk_BE - temp_a2;
    if (temp_v1 < 0) {
        sp2E = (s16) -temp_v1;
    } else {
        sp2E = (s16) temp_v1;
    }
    temp_v0 = arg0->yawTowardsPlayer - temp_a2;
    if (temp_v0 < 0) {
        sp2C = (s16) -temp_v0;
    } else {
        sp2C = (s16) temp_v0;
    }
    arg0->speedXZ = 0.0f;
    sp24 = temp_a0;
    if (func_801378B8(temp_a0, 1.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x3998U);
        arg0[2].focus.rot.y = 1;
    } else if (func_801378B8(temp_a0, 6.0f) != 0) {
        arg0[2].focus.rot.y = -1;
    }
    temp_v0_2 = arg0->unk_430;
    if ((temp_v0_2 & 4) != 0) {
        arg0[2].focus.rot.y = -1;
        arg0->unk_430 = (u8) (temp_v0_2 & 0xFFF9);
        func_80B87E28(arg0);
        return;
    }
    arg0->unk_2D8 = 0;
    if (arg0[2].targetArrowOffset <= sp30) {
        if (Actor_IsActorFacingLink(arg0, 0x1554) == 0) {
            func_80B872A4(arg0);
            if ((s32) sp2C >= 0x4001) {
                arg0->unk_2B4 = 0x14;
                return;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        if ((Rand_ZeroOne() > 0.7f) || (arg0->xzDistToPlayer >= 120.0f)) {
            func_80B872A4(arg0);
            return;
        }
        arg0->world.rot.y = arg0->yawTowardsPlayer;
        if ((((f32) gGameInfo->data[2412] * 0.1f) + 0.39999998f) < Rand_ZeroOne()) {
            func_80B87900(arg0);
            return;
        }
        if ((s32) sp2E < 0x2711) {
            if ((s32) sp2C >= 0x4001) {
                arg0->world.rot.y = arg0->yawTowardsPlayer;
                func_80B88CD8(arg0);
                return;
            }
            func_80B85A00(arg0, arg1, 1);
            return;
        }
        func_80B88CD8(arg0);
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_80B88214(Actor *arg0) {
    s16 temp_v0;

    func_80B85E18((Actor *)8);
    temp_v0 = arg0->yawTowardsPlayer;
    arg0->unk_2B2 = 0;
    arg0->speedXZ = 10.0f;
    arg0->shape.rot.y = temp_v0;
    arg0->world.rot.y = temp_v0;
    Audio_PlayActorSound2(arg0, 0x386CU);
    arg0->unk_2B0 = 5;
    arg0[2].world.pos.x = (bitwise f32) func_80B88278;
}

void func_80B88278(Actor *arg0, void *arg1) {
    arg0->unk_2D8 = 0;
    if (arg0[2].targetArrowOffset <= arg0->unk_160) {
        arg0->speedXZ = 0.0f;
        if (Actor_IsActorFacingLink(arg0, 0x1554) == 0) {
            func_80B872A4(arg0);
            arg0->unk_2B2 = (s16) (s32) ((Rand_ZeroOne() * 5.0f) + 5.0f);
        } else {
            func_80B87F70(arg0);
        }
    }
    if ((arg1->unk_18840 & 0x5F) == 0) {
        Audio_PlayActorSound2(arg0, 0x39B7U);
    }
}

void func_80B8833C(Actor *arg0) {
    func_80B85E18((Actor *)4);
    arg0->unk_2B0 = 4;
    arg0[2].world.pos.x = func_80B88378;
}

void func_80B88378(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    s32 sp30;
    s32 sp2C;
    s16 sp2A;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    s16 temp_v0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    sp34 = arg1->actorCtx.actorList[2].first;
    if (func_80B85858(arg0) == 0) {
        Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 1, 0x2EE, (s16) 0);
        temp_f0 = arg0->xzDistToPlayer;
        arg0->world.rot.y = arg0->shape.rot.y;
        if (temp_f0 <= 40.0f) {
            Math_ApproachF(&arg0->speedXZ, -8.0f, 1.0f, 1.5f);
        } else if (temp_f0 > 55.0f) {
            Math_ApproachF(&arg0->speedXZ, 8.0f, 1.0f, 1.5f);
        } else {
            Math_ApproachZeroF(&arg0->speedXZ, 2.0f, 6.65f);
        }
        arg0->unk_164 = 1.0f;
        temp_v0 = sp34->shape.rot.y - arg0->shape.rot.y;
        phi_v1 = temp_v0 << 0x10;
        if (temp_v0 < 0) {
            phi_v1 = temp_v0 * -0x10000;
        }
        temp_v1 = phi_v1 >> 0x10;
        if ((arg0->xzDistToPlayer < 150.0f) && (sp34[8].colChkInfo.acHitEffect != 0) && (temp_v1 >= 0x2000) && (temp_v0_2 = arg0->yawTowardsPlayer, arg0->world.rot.y = temp_v0_2, arg0->shape.rot.y = temp_v0_2, sp2A = (s16) temp_v1, (Rand_ZeroOne() > 0.7f))) {
            func_80B88CD8(arg0);
            return;
        }
        temp_f0_2 = arg0->unk_160;
        temp_f2 = arg0->unk_164;
        sp2A = (s16) (phi_v1 >> 0x10);
        sp30 = (s32) (temp_f0_2 - temp_f2);
        sp2C = (s32) (temp_f0_2 + temp_f2);
        if (Actor_IsActorFacingLink(arg0, 0x11C7) == 0) {
            if (Rand_ZeroOne() > 0.5f) {
                func_80B88CD8(arg0);
            } else {
                func_80B872A4(arg0);
            }
        } else if (arg0->xzDistToPlayer < 90.0f) {
            sp2A = (s16) (phi_v1 >> 0x10);
            if ((Rand_ZeroOne() > 0.03f) || ((arg0->xzDistToPlayer <= 65.0f) && ((s32) (s16) (phi_v1 >> 0x10) < 0x4000))) {
                func_80B87F70(arg0);
            } else if ((func_800BC5EC(arg1, arg0) != 0) && (Rand_ZeroOne() > 0.5f)) {
                func_80B87E28(arg0);
            } else {
                func_80B88CD8(arg0);
            }
        }
        if (func_80B85A00(arg0, arg1, 0) == 0) {
            temp_f0_3 = arg0->xzDistToPlayer;
            if ((temp_f0_3 < 210.0f) && (temp_f0_3 > 150.0f) && (Actor_IsActorFacingLink(arg0, 0x1388) != 0)) {
                if (func_800BC5B8(arg1, arg0) != 0) {
                    if (Rand_ZeroOne() > 0.5f) {
                        func_80B88214(arg0);
                    } else {
                        func_80B88910(arg0);
                    }
                    goto block_35;
                }
                func_80B88CD8(arg0);
                return;
            }
block_35:
            if ((arg1->gameplayFrames & 0x5F) == 0) {
                Audio_PlayActorSound2(arg0, 0x39B7U);
            }
            if ((arg0->unk_160 != 0.0f) && (((sp30 < 0) && (sp2C > 0)) || ((sp30 < 4) && (sp2C >= 5)))) {
                Audio_PlayActorSound2(arg0, 0x39A0U);
            }
            /* Duplicate return node #43. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
    }
}

void func_80B88770(Actor *arg0) {
    func_80B85E18((Actor *)3);
    arg0->unk_2B0 = 0xA;
    arg0[2].world.pos.x = func_80B887AC;
}

void func_80B887AC(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_a2;

    if ((func_80B85858(arg0, arg1) == 0) && (func_80B85A00(arg0, arg1, 0) == 0)) {
        temp_v1 = arg0->shape.rot.y;
        temp_v0 = arg0->yawTowardsPlayer - temp_v1;
        if ((s32) temp_v0 > 0) {
            phi_a2 = ((s16) (s32) ((f32) temp_v0 * 0.25f) + 0x7D0) << 0x10;
        } else {
            phi_a2 = ((s16) (s32) ((f32) temp_v0 * 0.25f) - 0x7D0) << 0x10;
        }
        arg0->shape.rot.y = temp_v1 + (phi_a2 >> 0x10);
        arg0->world.rot.y = arg0->shape.rot.y;
        arg0->unk_164 = 1.0f;
        if (Actor_IsActorFacingLink(arg0, 0x1388) != 0) {
            if (Rand_ZeroOne() > 0.8f) {
                func_80B88CD8(arg0);
            } else {
                func_80B8833C(arg0);
            }
        }
        if ((arg1->gameplayFrames & 0x5F) == 0) {
            Audio_PlayActorSound2(arg0, 0x39B7U);
        }
    }
}

void func_80B88910(Actor *arg0) {
    func_80B85E18((Actor *)0xA);
    arg0->unk_430 = (u8) (arg0->unk_430 & 0xFFF9);
    arg0[2].focus.rot.x = 0;
    arg0->unk_2B0 = 0xB;
    arg0[2].world.pos.x = func_80B88964;
    arg0->speedXZ = 0.0f;
}

void func_80B88964(Actor *arg0, GlobalContext *arg1) {
    void *sp4C;
    f32 sp48;
    SkelAnime *sp38;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_a0_2;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u8 temp_v0;
    s32 phi_v1;
    s32 phi_a0;

    temp_a0 = arg0 + 0x148;
    sp4C = arg1->actorCtx.actorList[2].first;
    sp48 = arg0->unk_160;
    if ((s32) arg0[2].focus.rot.x < 2) {
        temp_v0 = arg0->unk_430;
        if ((temp_v0 & 4) != 0) {
            arg0->unk_430 = (u8) (temp_v0 & 0xFFF9);
            arg0[2].focus.rot.x = 1;
            arg0->unk_164 = 1.0f;
        }
    }
    if (arg0->unk_160 <= 8.0f) {
        temp_v0_2 = arg0->yawTowardsPlayer;
        arg0->world.rot.y = temp_v0_2;
        arg0->shape.rot.y = temp_v0_2;
    } else {
        sp38 = temp_a0;
        if (func_801378B8(temp_a0, 13.0f) != 0) {
            func_800BBDAC(arg1, arg0, arg0 + 0x58C, 3.0f, 2, 2.0f, (s16) 0, (s16) 0, (u8) 0);
            func_800BBDAC(arg1, arg0, (Vec3f *) &arg0[4].speedXZ, 3.0f, 2, 2.0f, (s16) 0, (s16) 0, (u8) 0);
            arg0[2].focus.rot.y = 1;
            arg0->speedXZ = 10.0f;
            Audio_PlayActorSound2(arg0, 0x3998U);
        } else if (func_801378B8(temp_a0, 21.0f) != 0) {
            arg0->speedXZ = 0.0f;
        } else if (func_801378B8(sp38, 24.0f) != 0) {
            arg0[2].focus.rot.y = -1;
        }
    }
    arg0->unk_2D8 = 0;
    if ((arg0[2].targetArrowOffset <= sp48) && ((s32) arg0[2].focus.rot.x < 2)) {
        if (Actor_IsActorFacingLink(arg0, 0x1554) == 0) {
            func_80B872A4(arg0);
            temp_f0 = Rand_ZeroOne();
            arg0->unk_2B4 = 0x2E;
            arg0->unk_2B2 = (s16) (s32) ((temp_f0 * 5.0f) + 5.0f);
            return;
        }
        if (arg0[2].focus.rot.x != 0) {
            func_80B87E28(arg0);
            return;
        }
        if ((Rand_ZeroOne() > 0.7f) || (arg0->xzDistToPlayer >= 120.0f)) {
            func_80B872A4(arg0);
            arg0->unk_2B2 = (s16) (s32) ((Rand_ZeroOne() * 5.0f) + 5.0f);
            return;
        }
        arg0->world.rot.y = arg0->yawTowardsPlayer;
        if ((((f32) gGameInfo->data[2412] * 0.1f) + 0.39999998f) < Rand_ZeroOne()) {
            func_80B87900(arg0);
            return;
        }
        temp_a0_2 = arg0->shape.rot.y;
        temp_v0_3 = sp4C->shape.rot.y - temp_a0_2;
        phi_v1 = temp_v0_3 << 0x10;
        if (temp_v0_3 < 0) {
            phi_v1 = temp_v0_3 * -0x10000;
        }
        if ((phi_v1 >> 0x10) < 0x2711) {
            temp_v1 = arg0->yawTowardsPlayer;
            temp_v0_4 = temp_v1 - temp_a0_2;
            phi_a0 = temp_v0_4 << 0x10;
            if (temp_v0_4 < 0) {
                phi_a0 = temp_v0_4 * -0x10000;
            }
            if ((phi_a0 >> 0x10) >= 0x4001) {
                arg0->world.rot.y = temp_v1;
                func_80B88CD8(arg0, arg1, 1);
                return;
            }
            func_80B85A00(arg0, arg1, 1);
            return;
        }
        func_80B88CD8(arg0);
        /* Duplicate return node #31. Try simplifying control flow for better match */
    }
}

void func_80B88CD8(Actor *arg0) {
    f32 temp_f6;

    func_80B85E18(arg0, 3);
    arg0->speedXZ = randPlusMinusPoint5Scaled(12.0f);
    arg0->unk_164 = 1.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    temp_f6 = Rand_ZeroOne() * 30.0f;
    arg0->unk_2B0 = 3;
    arg0[2].world.pos.x = (bitwise f32) func_80B88D6C;
    arg0[2].scale.x = 0.0f;
    arg0->unk_2B2 = (s16) (s32) (temp_f6 + 30.0f);
}

void func_80B88D6C(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s16 sp2A;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_f16;
    s32 temp_f18;
    s32 temp_v0_2;
    f32 phi_f0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v1;
    s32 phi_v0_3;

    sp2C = arg1->actorCtx.actorList[2].first;
    Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 1, 0xFA0, (s16) 1);
    if ((func_80B85858(arg0, arg1) == 0) && (func_80B85A00(arg0, arg1, 0) == 0)) {
        temp_v0 = arg0->shape.rot.y;
        arg0->world.rot.y = temp_v0 + 0x4000;
        temp_v1 = sp2C->shape.rot.y + 0x8000;
        sp2A = temp_v1;
        if (Math_SinS((s16) (temp_v1 - temp_v0)) >= 0.0f) {
            arg0->speedXZ -= 0.25f;
            phi_f0 = -8.0f;
            if (arg0->speedXZ < -8.0f) {
                goto block_7;
            }
        } else if (Math_SinS((s16) (temp_v1 - arg0->shape.rot.y)) < 0.0f) {
            arg0->speedXZ += 0.25f;
            phi_f0 = 8.0f;
            if (arg0->speedXZ > 8.0f) {
block_7:
                arg0->speedXZ = phi_f0;
            }
        }
        temp_v0_2 = arg0->bgCheckFlags & 8;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            if (func_800BC4EC(arg0, arg1, arg0->speedXZ, (s16) (arg0->shape.rot.y + 0x4000)) == 0) {
                phi_v0 = arg0->bgCheckFlags & 8;
                goto block_11;
            }
        } else {
block_11:
            if (phi_v0 != 0) {
                if (arg0->speedXZ >= 0.0f) {
                    phi_v0_3 = (arg0->shape.rot.y + 0x4000) << 0x10;
                } else {
                    phi_v0_3 = (arg0->shape.rot.y - 0x4000) << 0x10;
                }
                phi_v0_2 = (s32) (s16) (arg0->wallYaw - (phi_v0_3 >> 0x10));
            } else {
                arg0->speedXZ *= -0.8f;
                phi_v0_2 = 0;
            }
            phi_v1 = phi_v0_2;
            if (phi_v0_2 < 0) {
                phi_v1 = -phi_v0_2;
            }
            if (phi_v1 >= 0x4001) {
                arg0->speedXZ *= -0.8f;
                temp_f0 = arg0->speedXZ;
                if (temp_f0 < 0.0f) {
                    arg0->speedXZ = temp_f0 - 0.5f;
                } else {
                    arg0->speedXZ = temp_f0 + 0.5f;
                }
            }
        }
        temp_f0_2 = arg0->xzDistToPlayer;
        if (temp_f0_2 <= 65.0f) {
            Math_ApproachF((f32 *) &arg0[2].scale, -4.0f, 1.0f, 1.5f);
        } else if (temp_f0_2 > 40.0f) {
            Math_ApproachF((f32 *) &arg0[2].scale, 4.0f, 1.0f, 1.5f);
        } else {
            Math_ApproachZeroF((f32 *) &arg0[2].scale, 1.0f, 6.65f);
        }
        if (arg0[2].scale.x != 0.0f) {
            arg0->world.pos.x += Math_SinS(arg0->shape.rot.y) * arg0[2].scale.x;
            arg0->world.pos.z += Math_CosS(arg0->shape.rot.y) * arg0[2].scale.x;
        }
        temp_f0_3 = arg0->unk_160;
        temp_f2 = arg0->unk_164;
        temp_f16 = (s32) (temp_f0_3 - temp_f2);
        temp_f18 = (s32) (temp_f0_3 + temp_f2);
        if ((temp_f0_3 != 0.0f) && (((temp_f16 < 0) && (temp_f18 > 0)) || ((temp_f16 < 5) && (temp_f18 >= 6)))) {
            Audio_PlayActorSound2(arg0, 0x39A0U);
        }
        if ((arg1->gameplayFrames & 0x5F) == 0) {
            Audio_PlayActorSound2(arg0, 0x39B7U);
        }
        if (arg0->xzDistToPlayer <= 65.0f) {
            func_80B87F70(arg0);
            return;
        }
        if (arg0->unk_2B2 == 0) {
            if ((func_800BC5EC(arg1, arg0) != 0) && (Rand_ZeroOne() > 0.5f)) {
                func_80B87E28(arg0);
                return;
            }
            func_80B872A4(arg0);
            /* Duplicate return node #45. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #45. Try simplifying control flow for better match */
    }
}

void func_80B891B8(Actor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->speedXZ = 0.0f;
    }
    if (arg0->unk_2B0 == 0xB) {
        func_80B85E18((Actor *)5);
    }
    temp_v0 = arg0[2].world.rot.y;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0[2].world.rot.x == 0)) {
        arg0[2].world.rot.x = 0;
        arg0[2].world.rot.y = 0;
    }
    arg0 = arg0;
    Audio_PlayActorSound2(arg0, 0x389EU);
    temp_v0_2 = arg0[2].world.rot.y;
    arg0->unk_2D8 = 1;
    if ((temp_v0_2 != 0xB) && (temp_v0_2 != 0xA)) {
        arg0->unk_2B6 = 0x28;
    }
    arg0->unk_2B0 = 0xD;
    arg0[2].world.pos.x = (bitwise f32) func_80B89280;
}

void func_80B89280(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;

    if (arg0[2].world.rot.y == 0xB) {
        temp_v0 = arg0[2].world.rot.x;
        if ((temp_v0 != 0) && ((s32) temp_v0 < 0x3C)) {
            arg0[2].world.rot.y = 0xA;
        }
    }
    if ((arg0->bgCheckFlags & 2) != 0) {
        arg0->speedXZ = 0.0f;
    }
    if ((arg0->bgCheckFlags & 1) != 0) {
        temp_f0 = arg0->speedXZ;
        if (temp_f0 < 0.0f) {
            arg0->speedXZ = temp_f0 + 0.05f;
        }
    }
    if ((arg0->unk_2B6 == 0) && (arg0[2].world.rot.x == 0) && ((arg0->flags & 0x2000) != 0x2000) && ((arg0->bgCheckFlags & 1) != 0) && ((arg0->unk_2D8 = 0, func_80B85A00(arg0, arg1, 1), temp_v0_2 = arg0[2].world.rot.y, (temp_v0_2 == 0xB)) || (temp_v0_2 == 0xA))) {
        func_800BF7CC(arg1, arg0, (Vec3f []) (Vec3f *) &arg0[2].floorHeight, 0xF, 2, 0.7f, 0.4f);
        arg0[2].world.rot.x = 0;
        arg0[2].world.rot.y = 0;
        arg0->flags |= 0x400;
    }
}

void func_80B893CC(Actor *arg0, GlobalContext *arg1) {
    ? sp34;
    s16 temp_v0;

    Matrix_RotateY(arg0->yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-10.0f, (Vec3f *) &sp34);
    Math_Vec3f_Copy(arg0 + 0x3C4, (Vec3f *) &sp34);
    arg0->unk_2B4 = 0;
    arg0->unk_2D8 = 0;
    arg0->speedXZ = 0.0f;
    func_80B85E18(arg0, 5);
    temp_v0 = arg0[2].world.rot.y;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0[2].world.rot.x != 0)) {
        func_800BF7CC(arg1, arg0, (Vec3f []) (Vec3f *) &arg0[2].floorHeight, 0xF, 2, 0.7f, 0.4f);
        arg0[2].world.rot.x = 0;
        arg0[2].world.rot.y = 0;
        arg0->flags |= 0x400;
    }
    Audio_PlayActorSound2(arg0, 0x3999U);
    arg0->unk_2B0 = 0xE;
    arg0[2].world.pos.x = (bitwise f32) func_80B894C0;
}

void func_80B894C0(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;

    Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 1, 0x1194, (s16) 0);
    if ((func_80B85858(arg0, arg1) == 0) && (func_80B85A00(arg0, arg1, 0) == 0) && ((bitwise f32) arg0[2].draw < 1.0f) && (arg0->unk_3CC < 1.0f)) {
        temp_v0 = arg0->wallYaw - arg0->shape.rot.y;
        if ((arg0->bgCheckFlags & 8) != 0) {
            phi_v1 = (s32) temp_v0;
            if ((s32) temp_v0 < 0) {
                phi_v1 = -(s32) temp_v0;
            }
            if ((phi_v1 < 0x3000) && (arg0->xzDistToPlayer < 90.0f)) {
                func_80B87C7C(arg0);
                return;
            }
            goto block_10;
        }
block_10:
        if ((arg0->xzDistToPlayer <= 65.0f) && ((arg1->gameplayFrames & 7) != 0)) {
            arg0->unk_44C = 2;
            func_80B87F70(arg0);
            return;
        }
        func_80B87E28(arg0);
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void func_80B8960C(Actor *arg0, GlobalContext *arg1) {
    ? sp24;
    s16 temp_v0;
    u32 temp_t1;
    u32 temp_t3;

    arg0->flags |= 0x100000;
    Matrix_RotateY(arg0->yawTowardsPlayer, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-10.0f, (Vec3f *) &sp24);
    Math_Vec3f_Copy(arg0 + 0x3C4, (Vec3f *) &sp24);
    func_80B85E18(arg0, 0x10);
    temp_v0 = arg0[2].world.rot.y;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0[2].world.rot.x == 0)) {
        arg0[2].world.rot.y = 0;
    }
    arg0->speedXZ = 0.0f;
    arg0->unk_2D8 = 1;
    func_800B7298(arg1, arg0, 0x7BU);
    Enemy_StartFinishingBlow(arg1, arg0);
    Audio_PlayActorSound2(arg0, 0x399AU);
    temp_t1 = arg0->flags | 0x8000000;
    temp_t3 = temp_t1 & ~1;
    arg0->flags = temp_t1;
    arg0->flags = temp_t3;
    arg0->flags = temp_t3 & ~0x400;
    arg0[4].floorHeight = 0.0f;
    arg0->unk_59C = 0;
    arg0->unk_2B0 = 0xF;
    arg0[2].world.pos.x = (bitwise f32) func_80B8971C;
}

void func_80B8971C(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    Actor *sp40;
    u32 *sp34;
    Actor *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 *temp_a0;

    sp44 = arg0->unk_160;
    if ((arg0->bgCheckFlags & 2) != 0) {
        arg0->speedXZ = 0.0f;
    }
    if ((arg0->bgCheckFlags & 1) != 0) {
        Math_SmoothStepToF(arg0 + 0x70, 0.0f, 1.0f, 0.5f, 0.0f);
    }
    temp_v0 = arg0[2].world.rot.y;
    if ((temp_v0 == 0xB) || (temp_v0 == 0xA)) {
        if (arg0[2].world.rot.x != 0) {
            func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x310), 0xF, 2, 0.7f, 0.4f);
            arg0[2].world.rot.x = 0;
            arg0[2].world.rot.y = 0;
            goto block_8;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
block_8:
    if (sp44 >= 25.0f) {
        temp_v1 = arg1->actorCtx.actorList[2].first;
        if (arg0->unk_59E == 0) {
            sp40 = temp_v1;
            if (ActorCutscene_GetCanPlayNext(arg0[2].focus.unk_12) == 0) {
                ActorCutscene_SetIntentToPlay(arg0[2].focus.unk_12);
                return;
            }
            sp40 = temp_v1;
            ActorCutscene_StartAndSetUnkLinkFields(arg0[2].focus.unk_12, arg0);
            arg0->unk_59E = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
            goto block_13;
        }
block_13:
        sp40 = arg1->actorCtx.actorList[2].first;
        Math_Vec3f_Copy((Vec3f *) &arg0[2].draw, &D_801D15B0);
        arg1->actorCtx.actorList[2].first->world.pos.x = arg0->home.pos.x + 90.0f;
        arg1->actorCtx.actorList[2].first->world.pos.z = arg0->home.pos.z + 30.0f;
        arg0->world.pos.x = arg0->home.pos.x;
        arg0->world.pos.z = arg0->home.pos.z;
        temp_f0 = arg1->actorCtx.actorList[2].first->world.pos.x + 39.0f;
        arg0->unk_5C8 = temp_f0;
        arg0[4].xyzDistToPlayerSq = temp_f0;
        temp_f0_2 = arg1->actorCtx.actorList[2].first->world.pos.y + 4.0f;
        arg0->unk_5CC = temp_f0_2;
        arg0[4].xzDistToPlayer = temp_f0_2;
        temp_f0_3 = arg1->actorCtx.actorList[2].first->world.pos.z - 41.0f;
        arg0->unk_5D0 = temp_f0_3;
        arg0[4].yDistToPlayer = temp_f0_3;
        temp_f0_4 = arg1->actorCtx.actorList[2].first->world.pos.x - 150.0f;
        arg0[4].shape.yOffset = temp_f0_4;
        arg0[4].colChkInfo.damageTable = (bitwise DamageTable *) temp_f0_4;
        temp_f0_5 = arg1->actorCtx.actorList[2].first->world.pos.y + 60.0f;
        arg0[4].shape.shadowDraw = (bitwise void (*)(Actor *, Lights *, GlobalContext *)) temp_f0_5;
        arg0[4].colChkInfo.displacement.x = temp_f0_5;
        temp_f0_6 = arg1->actorCtx.actorList[2].first->world.pos.z + 50.0f;
        arg0[4].shape.shadowScale = temp_f0_6;
        arg0[4].colChkInfo.displacement.y = temp_f0_6;
        sp40 = arg1->actorCtx.actorList[2].first;
        temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &arg1->actorCtx.actorList[2].first->world, (Vec3f *) &arg0->world);
        arg1->actorCtx.actorList[2].first->world.rot.y = temp_v0_2;
        arg1->actorCtx.actorList[2].first->shape.rot.y = temp_v0_2;
        temp_a1 = arg0->unk_59E;
        if (temp_a1 != 0) {
            arg0[4].colChkInfo.displacement.z = 0.0f;
            arg0->unk_5C0 = 1.0f;
            arg0->unk_5C4 = 0.0f;
            func_8016981C(arg1, temp_a1, &arg0[4].colChkInfo, &arg0[4].xyzDistToPlayerSq, &arg0[4].colChkInfo.displacement.z);
        }
        goto block_15;
    }
block_15:
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 1, 0xFA0, (s16) 1);
    temp_a0 = &arg0[1].flags;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0);
    if (arg0[2].targetArrowOffset <= sp44) {
        arg0->unk_2D8 = 0;
        func_80B86B58(arg0);
        return;
    }
    if (func_801378B8((SkelAnime *) temp_a0, 10.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x387AU);
    }
}

void func_80B89A08(Actor *arg0, GlobalContext *arg1) {
    s32 sp64;
    f32 sp5C;
    ? sp58;
    s32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    Actor *temp_v0_14;
    f32 temp_v0_2;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_13;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s32 temp_v0_12;
    s32 temp_v1;
    u8 temp_t4;
    u8 temp_v0;
    s32 phi_v0;

    sp64 = 0;
    if ((s32) gSaveContext.health < 0x11) {
        arg0->unk_43D = 0;
    } else {
        arg0->unk_43D = 4;
    }
    temp_v0 = arg0->unk_430;
    if (((temp_v0 & 4) == 0) && ((temp_v0 & 2) != 0)) {
        if (((s32) gSaveContext.health < 0x11) && (arg0->unk_2B0 != 0x10)) {
            arg0[2].focus.rot.x = 2;
            arg0->unk_59E = 0;
            arg0->flags |= 0x100000;
            if (ActorCutscene_GetCanPlayNext(arg0[2].focus.unk_12) == 0) {
                ActorCutscene_SetIntentToPlay(arg0[2].focus.unk_12);
                arg0[2].world.pos.x = func_80B86804;
                return;
            }
            ActorCutscene_StartAndSetUnkLinkFields(arg0[2].focus.unk_12, arg0);
            arg0->unk_59E = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
            arg0[2].world.pos.x = (bitwise f32) func_80B86804;
            return;
        }
        if ((arg0->unk_2B0 == 0xB) && ((bitwise s32) arg0[3].scale.x == arg1->actorCtx.actorList[2].first) && (func_800B8D98(arg1, arg0, 3.0f, arg0->yawTowardsPlayer, 1.0f), func_80115908(arg1, -0xCU), (((s32) gSaveContext.health < 0x11) != 0)) && (arg0->unk_2B0 != 0x10)) {
            func_80115908(arg1, 0x10U);
            arg0[2].focus.rot.x = 2;
            arg0->unk_59E = 0;
            arg0->flags |= 0x100000;
            if (ActorCutscene_GetCanPlayNext(arg0[2].focus.unk_12) == 0) {
                ActorCutscene_SetIntentToPlay(arg0[2].focus.unk_12);
                arg0[2].world.pos.x = (bitwise f32) func_80B86804;
                return;
            }
            ActorCutscene_StartAndSetUnkLinkFields(arg0[2].focus.unk_12, arg0);
            arg0->unk_59E = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
            arg0[2].world.pos.x = (bitwise f32) func_80B86804;
            return;
        }
        temp_v0_2 = arg0[3].scale.x;
        if (temp_v0_2->unk_0 == 0x22D) {
            temp_v0_2->unk_18 = 1;
        }
        goto block_19;
    }
block_19:
    if (((arg0->bgCheckFlags & 8) != 0) && (arg0->wallBgId != 0x32) && ((temp_v0_3 = arg0->unk_2B0, (temp_v0_3 == 2)) || (temp_v0_3 == 3) || (temp_v0_3 == 4) || (temp_v0_3 == 1))) {
        func_80B87F70(arg0);
    }
    temp_v1 = arg0->unk_3E5 & 2;
    if ((temp_v1 != 0) && (temp_v0_4 = arg0->unk_2B0, ((s32) temp_v0_4 > 0)) && ((s32) arg0[2].focus.rot.x < 2) && (temp_v0_4 != 6) && (temp_v0_4 != 0xC) && (temp_v0_4 != 0xE) && (temp_v0_4 != 0xF)) {
        func_800BE258(arg0, (void *) &arg0[3].unk20);
        func_801A7328(&arg0->projectedPos, 0x39B7);
        temp_t4 = arg0->colChkInfo.damageEffect;
        switch (temp_t4) {
        case 5:
            temp_v0_5 = arg0[2].world.rot.y;
            if (((temp_v0_5 != 0xB) && (temp_v0_5 != 0xA)) || (arg0[2].world.rot.x == 0)) {
                arg0[2].world.rot.x = 0x28;
                arg0[2].world.rot.y = 0x1F;
            }
            /* fallthrough */
        case 1:
            temp_v0_6 = arg0[2].world.rot.y;
            if (((temp_v0_6 != 0xB) && (temp_v0_6 != 0xA)) || (arg0[2].world.rot.x == 0)) {
                func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
                arg0->unk_400 = 1;
                arg0->unk_3E8 = 3;
                arg0->unk_44C = 2;
                func_80B891B8(arg0);
            }
            break;
        case 15:
            temp_v0_7 = arg0->unk_2B0;
            if ((temp_v0_7 != 5) && (temp_v0_7 != 7) && ((s32) temp_v0_7 < 0xE)) {
                sp64 = 1;
            }
            break;
        case 14:
            sp64 = 1;
            break;
        case 13:
            temp_v0_8 = arg0->unk_2B0;
            if (temp_v0_8 == 0xD) {
                sp64 = 1;
            } else if (temp_v0_8 != 6) {
                func_80B87C7C(arg0);
            }
            break;
        case 2:
            temp_v0_9 = arg0->unk_2B0;
            if ((temp_v0_9 != 5) && (temp_v0_9 != 7) && ((s32) temp_v0_9 < 0xE)) {
                arg0[2].world.rot.x = 0x28;
                arg0[2].world.rot.y = 0;
                sp64 = 1;
            }
            break;
        case 3:
            temp_v0_10 = arg0[2].world.rot.y;
            if (((temp_v0_10 != 0xB) && (temp_v0_10 != 0xA)) || (arg0[2].world.rot.x == 0)) {
                Actor_ApplyDamage(arg0);
                arg0->unk_400 = 1;
                arg0->unk_3E8 = 3;
                arg0->unk_44C = 4;
                arg0[2].world.rot.x = 0x50;
                arg0[2].world.rot.y = 0xB;
                arg0->flags &= -0x401;
                arg0[2].focus.pos.x = 1.5f;
                arg0->unk_2C0 = 0.0f;
                if ((s32) arg0->colChkInfo.health <= 0) {
                    func_80B8960C(arg0, arg1);
                } else {
                    func_80B891B8(arg0);
                }
            }
            break;
        case 4:
            temp_v0_11 = arg0[2].world.rot.y;
            if (((temp_v0_11 != 0xB) && (temp_v0_11 != 0xA)) || (arg0[2].world.rot.x == 0)) {
                arg0[2].world.rot.x = 0x14;
                arg0[2].world.rot.y = 0x14;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                sp64 = 1;
            }
            break;
        }
        if (sp64 != 0) {
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            Actor_ApplyDamage(arg0);
            if ((s32) arg0->colChkInfo.health <= 0) {
                func_80B8960C(arg0, arg1);
                return;
            }
            arg0->unk_400 = 1;
            arg0->unk_3E8 = 3;
            arg0->unk_44C = 4;
            Math_Vec3f_Copy((Vec3f *) &sp58, (Vec3f *) &arg0->focus);
            phi_v0 = 0;
            do {
                sp54 = phi_v0;
                sp5C += Rand_ZeroFloat(20.0f);
                CollisionCheck_BlueBlood(arg1, NULL, (Vec3f *) &sp58);
                temp_v0_12 = phi_v0 + 1;
                phi_v0 = temp_v0_12;
            } while (temp_v0_12 != 3);
            func_80B893CC(arg0, arg1);
            return;
        }
        /* Duplicate return node #79. Try simplifying control flow for better match */
        return;
    }
    if (temp_v1 != 0) {
        temp_v0_13 = arg0->unk_2B0;
        if ((temp_v0_13 != 6) && (temp_v0_13 != 0xE) && (temp_v0_13 != 0xF)) {
            temp_v0_14 = arg1->actorCtx.actorList[2].first;
            sp48 = (f32) arg0->unk_3FA;
            sp4C = (f32) arg0[3].world.rot.x;
            sp50 = (f32) arg0[3].world.rot.y;
            if (temp_v0_14->unk_14B != 4) {
                temp_v0_14[9].unk20 = arg0->yawTowardsPlayer;
                temp_v0_14->unk_B80 = 15.0f;
            }
            arg0->unk_3E5 = (u8) (arg0->unk_3E5 & 0xFFFD);
            Audio_PlayActorSound2(arg0, 0x1806U);
            EffectSsHitMark_SpawnFixedScale(arg1, 3, (Vec3f *) &sp48);
            CollisionCheck_SpawnShieldParticlesMetal(arg1, (Vec3f *) &sp48);
        }
    }
}

void EnKaizoku_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp34;
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_6;
    s32 temp_v0_5;
    EnKaizoku *this = (EnKaizoku *) thisx;

    if (this->unk_2D8 == 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk_148);
    }
    if (this->unk_2B0 != 0) {
        func_80B85900(this);
    }
    temp_v0 = this->unk_2CE;
    if (temp_v0 != 0) {
        this->unk_2CE = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_2B2;
    if (temp_v0_2 != 0) {
        this->unk_2B2 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_2B4;
    if (temp_v0_3 != 0) {
        this->unk_2B4 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_2B6;
    if (temp_v0_4 != 0) {
        this->unk_2B6 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk_598;
    if (temp_v0_5 != 0) {
        this->unk_598 = temp_v0_5 - 1;
    }
    temp_v0_6 = this->unk_2B8;
    if (temp_v0_6 != 0) {
        this->unk_2B8 = temp_v0_6 - 1;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (this->unk_2B0 != 0) {
        func_80B89A08((Actor *) this, globalCtx);
    }
    if (this->unk_2B0 != 0) {
        Actor_SetHeight((Actor *) this, 60.0f);
    }
    Actor_SetScale((Actor *) this, 0.0125f);
    if (this->unk_2CE == 0) {
        this->unk_2CC += 1;
        if ((s32) this->unk_2CC >= 4) {
            this->unk_2CC = 0;
            this->unk_2CE = Rand_S16Offset(0x14, 0x3C);
        }
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Matrix_RotateY((s16) (this->actor.shape.rot.y + this->unk_2F4), 0U);
        SysMatrix_GetStateTranslationAndScaledZ(this->unk_2F0, (Vec3f *) &sp34);
        this->actor.world.pos.x += this->unk_3C4 + sp34;
        this->actor.world.pos.z += this->unk_3CC + sp3C;
        Math_ApproachZeroF(&this->unk_3C4, 1.0f, 2.0f);
        Math_ApproachZeroF(&this->unk_3CC, 1.0f, 2.0f);
        Math_ApproachZeroF(&this->unk_2F0, 1.0f, 5.0f);
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 40.0f, 35.0f, 0x1FU);
    temp_a1 = &this->unk_3D4;
    sp28 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp2C = temp_a1_2;
    CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp28);
    if (((s32) this->unk_2D0 < 2) && (this->unk_2B0 != 0)) {
        CollisionCheck_SetAC(globalCtx, sp2C, (Collider *) sp28);
    }
    if ((s32) this->unk_2D2 > 0) {
        CollisionCheck_SetAT(globalCtx, sp2C, (Collider *) &this->unk_420);
    }
}

s32 func_80B8A318(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v1;

    temp_v1 = *arg0;
    if (arg1 == 5) {
        *arg2 = NULL;
    }
    if (arg1 == 3) {
        arg4->z += arg5->unk_578;
        arg4->x += arg5->unk_57A;
        arg4->y += arg5->unk_57C;
    } else if (arg1 == 6) {
        temp_a0 = temp_v1->unk_2B0;
        temp_v1->unk_2B0 = (void *) (temp_a0 + 8);
        temp_a0->unk_4 = 0;
        temp_a0->unk_0 = 0xE7000000;
        temp_a0_2 = temp_v1->unk_2B0;
        temp_v1->unk_2B0 = (void *) (temp_a0_2 + 8);
        temp_a0_2->unk_0 = 0xFB000000;
        temp_a2 = (arg5[2].velocity.x * 4) + &D_80B8AB24;
        temp_a0_2->unk_4 = (s32) ((temp_a2->unk_2 << 8) | (temp_a2->unk_0 << 0x18) | (temp_a2->unk_1 << 0x10) | 0xFF);
    } else {
        temp_a0_3 = temp_v1->unk_2B0;
        temp_v1->unk_2B0 = (void *) (temp_a0_3 + 8);
        temp_a0_3->unk_4 = 0;
        temp_a0_3->unk_0 = 0xE7000000;
        temp_a0_4 = temp_v1->unk_2B0;
        temp_v1->unk_2B0 = (void *) (temp_a0_4 + 8);
        temp_a0_4->unk_0 = 0xFB000000;
        temp_a2_2 = (arg5[2].velocity.x * 4) + &D_80B8AB30;
        temp_a0_4->unk_4 = (s32) ((temp_a2_2->unk_2 << 8) | (temp_a2_2->unk_0 << 0x18) | (temp_a2_2->unk_1 << 0x10) | 0xFF);
    }
    return 0;
}

void func_80B8A468(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp4C;
    ? sp40;
    Vec3f *sp34;
    Vec3f *sp30;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_a1_3;
    Vec3f *temp_a3;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_t2;

    if (arg1 == 0xB) {
        temp_a1 = arg4 + 0x46C;
        sp30 = temp_a1;
        SysMatrix_MultiplyVector3fByState(&D_80B8AC9C, temp_a1);
        temp_a1_2 = arg4 + 0x460;
        sp34 = temp_a1_2;
        SysMatrix_MultiplyVector3fByState(&D_80B8ACA8, temp_a1_2);
        temp_a1_3 = arg4 + 0x484;
        sp28 = temp_a1_3;
        SysMatrix_MultiplyVector3fByState(&D_80B8ACB4, temp_a1_3);
        temp_a3 = arg4 + 0x478;
        sp2C = temp_a3;
        SysMatrix_MultiplyVector3fByState(&D_80B8ACC0, temp_a3);
        Collider_SetQuadVertices(arg4 + 0x420, temp_a1_2, sp30, temp_a3, sp28);
        SysMatrix_MultiplyVector3fByState(&D_80B8AC84, (Vec3f *) &sp4C);
        SysMatrix_MultiplyVector3fByState(&D_80B8AC90, (Vec3f *) &sp40);
        temp_v0 = arg4[2].focus.rot.y;
        if ((temp_v0 == 1) && ((temp_v1 = arg4->unk_2B0, (temp_v1 == 9)) || (temp_v1 == 0xB))) {
            func_800A81F0(Effect_GetParams(arg4[3].flags), (Vec3f *) &sp4C, (Vec3f *) &sp40);
        } else if (temp_v0 != 0) {
            func_800A8514(Effect_GetParams(arg4[3].flags));
            arg4[2].focus.rot.y = 0;
        }
    } else {
        func_800B4A98(arg4, arg1, 0x13, &D_80B8AC78, 0x16, &D_80B8AC78);
    }
    if (arg1 == 0x13) {
        SysMatrix_MultiplyVector3fByState(&D_80B8AC78, arg4 + 0x58C);
    } else if (arg1 == 0x16) {
        SysMatrix_MultiplyVector3fByState(&D_80B8AC78, arg4 + 0x580);
    }
    if ((arg1 == 2) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 0xA) || (arg1 == 0xC) || (arg1 == 0xD) || (arg1 == 0xF) || (arg1 == 0x11) || (arg1 == 0x12) || (arg1 == 0x13) || (arg1 == 0x14) || (arg1 == 0x15) || (arg1 == 0x16) || (arg1 == 0x17)) {
        SysMatrix_GetStateTranslation(arg4 + (arg4[2].scale.z * 0xC) + 0x310);
        temp_t2 = arg4[2].scale.z + 1;
        arg4[2].scale.z = temp_t2;
        if (temp_t2 >= 0xF) {
            arg4[2].scale.z = 0;
        }
    }
}

void func_80B8A6B0(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_a2;
    f32 temp_f12;
    f32 temp_f14;

    if (arg1 == 0xB) {
        temp_f12 = arg2[2].speedXZ;
        temp_f14 = arg2[2].gravity;
        temp_a2 = arg2[2].minVelocityY;
        arg2 = arg2;
        Matrix_Scale(temp_f12, temp_f14, temp_a2, 1);
    }
    if (arg1 == 0x10) {
        Matrix_Scale(arg2[2].wallPoly, arg2[2].floorPoly, arg2->unk_30C, 1);
    }
}

void func_80B8A718(Actor *this, GlobalContext *globalCtx) {
    f32 sp34;
    Gfx *temp_v1;
    GraphicsContext *temp_a1;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v1_2;
    s32 temp_a0;

    func_8012C2DC(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_a1 = globalCtx->state.gfxCtx;
    temp_v1 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDB060020;
    temp_a0 = *(&D_80B8ACCC + (this->unk_2CC * 4));
    temp_v1->words.w1 = (temp_a0 & 0xFFFFFF) + gSegments[(u32) (temp_a0 * 0x10) >> 0x1C] + 0x80000000;
    func_801343C0(globalCtx, (bitwise void **) this[1].home.pos.x, (bitwise Vec3s *) this[1].world.pos.x, (s32) this->unk_14A, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_80B8A318, func_80B8A468, func_80B8A6B0, this);
    temp_v1_2 = this[2].world.rot.x;
    if (temp_v1_2 != 0) {
        temp_f6 = (f32) temp_v1_2;
        temp_v0 = this[2].world.rot.y;
        if ((temp_v0 == 0xB) || (temp_v0 == 0xA)) {
            this->unk_2C0 = (f32) (this->unk_2C0 + 0.3f);
            if (this->unk_2C0 > 0.5f) {
                this->unk_2C0 = 0.5f;
            }
            sp34 = temp_f6 * 0.05f;
            Math_ApproachF((f32 *) &this[2].focus, this->unk_2C0, 0.1f, 0.04f);
        } else {
            this->unk_2C0 = 0.8f;
            this[2].focus.pos.x = 0.8f;
        }
        func_800BE680(globalCtx, this, (Vec3f []) (Vec3f *) &this[2].floorHeight, 0xF, this->unk_2C0, this[2].focus.pos.x, temp_f6 * 0.05f, (u8) (s32) this[2].world.rot.y);
    }
}
