typedef struct EnTk {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnTk *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk_18C;           /* inferred */
    /* 0x1D8 */ Vec3s unk_1D8;                      /* inferred */
    /* 0x1DE */ char pad_1DE[0x66];                 /* maybe part of unk_1D8[18]? */
    /* 0x244 */ Vec3s unk_244;                      /* inferred */
    /* 0x24A */ char pad_24A[0x66];                 /* maybe part of unk_244[18]? */
    /* 0x2B0 */ s8 unk_2B0;                         /* inferred */
    /* 0x2B1 */ s8 unk_2B1;                         /* inferred */
    /* 0x2B2 */ char pad_2B2[0x2];                  /* maybe part of unk_2B1[3]? */
    /* 0x2B4 */ Vec3f unk_2B4;                      /* inferred */
    /* 0x2C0 */ char pad_2C0[0x2];
    /* 0x2C2 */ s16 unk_2C2;                        /* inferred */
    /* 0x2C4 */ char pad_2C4[0x6];                  /* maybe part of unk_2C2[4]? */
    /* 0x2CA */ u16 unk_2CA;                        /* inferred */
    /* 0x2CC */ s16 unk_2CC;                        /* inferred */
    /* 0x2CE */ char pad_2CE[0x2];
    /* 0x2D0 */ s32 unk_2D0;                        /* inferred */
    /* 0x2D4 */ s32 unk_2D4;                        /* inferred */
    /* 0x2D8 */ f32 unk_2D8;                        /* inferred */
    /* 0x2DC */ f32 unk_2DC;                        /* inferred */
    /* 0x2E0 */ s32 unk_2E0;                        /* inferred */
    /* 0x2E4 */ s16 unk_2E4;                        /* inferred */
    /* 0x2E6 */ u16 unk_2E6;                        /* inferred */
    /* 0x2E8 */ s16 unk_2E8;                        /* inferred */
    /* 0x2EA */ char pad_2EA[0x2];
    /* 0x2EC */ Vec3f unk_2EC;                      /* inferred */
    /* 0x2F8 */ Vec3s unk_2F8;                      /* inferred */
    /* 0x2FE */ char pad_2FE[0x2];
    /* 0x300 */ Vec3f unk_300;                      /* inferred */
    /* 0x30C */ ? (*unk_30C)(EnTk *, GlobalContext *); /* inferred */
    /* 0x310 */ s16 unk_310;                        /* inferred */
    /* 0x312 */ s16 unk_312;                        /* inferred */
    /* 0x314 */ s16 unk_314;                        /* inferred */
    /* 0x316 */ s16 unk_316;                        /* inferred */
    /* 0x318 */ s16 unk_318;                        /* inferred */
    /* 0x31A */ s16 unk_31A;                        /* inferred */
    /* 0x31C */ s16 unk_31C;                        /* inferred */
    /* 0x31E */ char pad_31E[0x2];
    /* 0x320 */ f32 unk_320;                        /* inferred */
    /* 0x324 */ char pad_324[0xA8];                 /* maybe part of unk_320[43]? */
    /* 0x3CC */ u8 unk_3CC;                         /* inferred */
    /* 0x3CD */ char pad_3CD[0x1];
    /* 0x3CE */ u16 unk_3CE;                        /* inferred */
    /* 0x3D0 */ s32 unk_3D0;                        /* inferred */
    /* 0x3D4 */ char pad_3D4[0x20];                 /* maybe part of unk_3D0[9]? */
} EnTk;                                             /* size = 0x3F4 */

struct _mips2c_stack_EnTk_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTk_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnTk_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnTk_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AEC460 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEC524 {};              /* size 0x0 */

struct _mips2c_stack_func_80AEC658 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AECA3C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AECA90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AECB0C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AECB6C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ u8 sp34;                             /* inferred */
    /* 0x35 */ char pad_35[0xF];                    /* maybe part of sp34[16]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80AECE0C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AECE60 {
    /* 0x000 */ char pad_0[0x44];
    /* 0x044 */ void *sp44;                         /* inferred */
    /* 0x048 */ char pad_48[0x4];
    /* 0x04C */ s32 *sp4C;                          /* inferred */
    /* 0x050 */ s32 *sp50;                          /* inferred */
    /* 0x054 */ char pad_54[0x8];                   /* maybe part of sp50[3]? */
    /* 0x05C */ ? sp5C;                             /* inferred */
    /* 0x05C */ char pad_5C[0x8];
    /* 0x064 */ f32 sp64;                           /* inferred */
    /* 0x068 */ char pad_68[0xC];                   /* maybe part of sp64[4]? */
    /* 0x074 */ s32 sp74;                           /* inferred */
    /* 0x078 */ s32 sp78;                           /* inferred */
    /* 0x07C */ f32 sp7C;                           /* inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ f32 sp84;                           /* inferred */
    /* 0x088 */ ? sp88;                             /* inferred */
    /* 0x088 */ char pad_88[0xC];
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad_94[0xC];
    /* 0x0A0 */ ? spA0;                             /* inferred */
    /* 0x0A0 */ char pad_A0[0x424];
    /* 0x4C4 */ Actor *sp4C4;                       /* inferred */
};                                                  /* size = 0x4C8 */

struct _mips2c_stack_func_80AED354 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AED38C {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AED4F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AED544 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AED610 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AED898 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AED940 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80AEDBEC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AEDC4C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AEDCBC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AEDD4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEDDA0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AEDE10 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AEDF5C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AEE2A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AEE2C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEE300 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEE374 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AEE414 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AEE478 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEE4D0 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ SkelAnime *sp48;                     /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80AEE650 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEE6B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AEE784 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEE7E0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AEE86C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ CollisionContext *sp20;              /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ CollisionPoly *sp38;                 /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80AEE9B0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AEEA4C {};              /* size 0x0 */

struct _mips2c_stack_func_80AEEAD4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AEEB88 {
    /* 0x00 */ char pad_0[0x68];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ s32 sp74;                            /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80AEED38 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x2];
    /* 0x56 */ s16 sp56;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80AEF048 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEF094 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AEF15C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEF1B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AEF1C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEF210 {};              /* size 0x0 */

struct _mips2c_stack_func_80AEF220 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEF278 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AEF2C8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AEF2D8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Vec3s *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AEF5F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AEF65C {};              /* size 0x0 */

struct _mips2c_stack_func_80AEF6A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

f32 func_800C40B4(CollisionContext *, CollisionPoly **, s32 *, f32 *); /* extern */
s32 func_800C5A64(s32, f32 *, f32);                 /* extern */
? func_8013E640(GlobalContext *, Actor *, ?, ?, s32, s32 *, ? (*)(s32, Actor *, Actor *, void *)); /* extern */
? func_8013E8F8(Actor *, GlobalContext *, f32, f32, s32, s32, s32); /* extern */
void func_80AEC460(Actor *arg0);                    /* static */
f32 func_80AEC524(f32 arg0, f32);                   /* static */
void func_80AEC658(SkelAnime *arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4); /* static */
void func_80AECA3C(EnTk *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80AECB0C(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AECE0C(EnTk *arg0, GlobalContext *);    /* static */
? func_80AECE60(EnTk *arg0, GlobalContext *arg1);   /* static */
s32 func_80AED354(EnTk *arg2, GlobalContext *, u8 *); /* static */
s32 func_80AED38C(void *arg0, GlobalContext *arg1, void *arg2); /* static */
void func_80AED4F8(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AED544(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AED898(EnTk *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80AEDBEC(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEDCBC(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEDDA0(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEDE10(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEE2A8(EnTk *arg0, GlobalContext *arg1); /* static */
? func_80AEE300(s32 arg0, Actor *arg1, Actor *arg2, void *arg3); /* static */
void func_80AEE374(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEE478(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEE650(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEE784(EnTk *arg0, GlobalContext *arg1, GlobalContext *); /* static */
s32 func_80AEE7E0(Vec3f *arg0, f32 arg1, Vec3f *arg2, s32 arg3); /* static */
s32 func_80AEE86C(EnTk *arg0, GlobalContext *arg1); /* static */
u32 func_80AEEA4C(EnTk *arg0, void *arg1);          /* static */
void func_80AEEAD4(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEEB88(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEED38(void *arg0, GlobalContext *arg1); /* static */
void func_80AEF048(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEF094(void *arg0, ? arg1);             /* static */
void func_80AEF15C(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEF1B4(s32 arg0, ? arg1);               /* static */
void func_80AEF1C4(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEF210(s32 arg0, ? arg1);               /* static */
void func_80AEF220(EnTk *arg0, GlobalContext *arg1); /* static */
void func_80AEF278(void *arg0, ? arg1);             /* static */
void func_80AEF2C8(Actor *this, GlobalContext *globalCtx); /* static */
void func_80AEF2D8(Actor *this, GlobalContext *globalCtx); /* static */
void func_80AEF5F4(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_80AEF65C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80AEF6A4(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeaderCommon D_060030A4;
extern ? D_0600B530;
extern FlexSkeletonHeader D_0600B9E8;
static void D_80AEF800;                             /* unable to generate initializer */
static ColliderCylinderInit D_80AEF830 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x1E, 0x34, 0, {0, 0, 0}},
}; /* extra bytes: 9 */
static struct_80B8E1A8 D_80AEF868[8] = {
    {(AnimationHeader *)0x6001FA8, 1.0f, 0, -10.0f},
    {(AnimationHeader *)0x6001FA8, 2.0f, 0, -10.0f},
    {(AnimationHeader *)0x60030A4, 1.0f, 0, -10.0f},
    {(AnimationHeader *)0x6001144, 1.0f, 2, -10.0f},
    {(AnimationHeader *)0x6003724, 1.0f, 2, -10.0f},
    {(AnimationHeader *)0x6003FB8, 1.0f, 0, -10.0f},
    {(AnimationHeader *)0x60020C8, 1.0f, 0, -10.0f},
    {(AnimationHeader *)0x6003B10, 1.0f, 0, -10.0f},
};
static ? D_80AEF8EC;                                /* unable to generate initializer */
static ? D_80AEF8F0;                                /* unable to generate initializer */
static ? D_80AEF9B4;                                /* unable to generate initializer */
static Vec3f D_80AEFA78 = {0.0f, 20.0f, 32.0f};
static Vec3f D_80AEFA84 = {0.0f, 0.0f, 4600.0f};
static ? D_80AEFA90;                                /* unable to generate initializer */
static s32 D_80AF0050;

void func_80AEC460(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_2C4;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_2C4 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_2C4;
    }
    if (phi_v1 == 0) {
        arg0[2].unk_3A += 1;
        if ((s32) arg0[2].unk_3A >= 3) {
            arg0->unk_2C0 = (s16) (arg0->unk_2C0 - 1);
            if ((s32) arg0->unk_2C0 < 0) {
                arg0 = arg0;
                arg0->unk_2C4 = Rand_S16Offset(0x1E, 0x1E);
                arg0->unk_2C0 = 2;
                if (Rand_ZeroOne() > 0.5f) {
                    arg0->unk_2C0 = (s16) (arg0->unk_2C0 + 1);
                }
            }
            arg0[2].unk_3A = 0;
        }
    }
}

f32 func_80AEC524(f32 arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_f4;
    f32 phi_f12;
    f32 phi_f12_2;
    f32 phi_f12_3;
    f32 phi_f2;

    phi_f12 = arg0;
    phi_f12_3 = arg0;
    if ((arg0 >= 49.0f) || (arg0 < 0.0f)) {
        do {
loop_2:
            phi_f12_2 = phi_f12;
            if (phi_f12 >= 49.0f) {
                phi_f12_2 = phi_f12 - 49.0f;
            } else if (phi_f12 < 0.0f) {
                phi_f12_2 = phi_f12 + 49.0f;
            }
            phi_f12 = phi_f12_2;
            phi_f12_3 = phi_f12_2;
            if (phi_f12_2 >= 49.0f) {
                goto loop_2;
            }
        } while (phi_f12_2 < 0.0f);
    }
    temp_f4 = (s32) phi_f12_3;
    temp_a0 = temp_f4 + 1;
    temp_f2 = (f32) temp_f4;
    temp_f0 = phi_f12_3 - temp_f2;
    if (phi_f12_3 != temp_f2) {
        if (temp_a0 >= 0x31) {
            temp_f12 = *(&D_80AEF8F0 + (temp_f4 * 4));
            phi_f2 = temp_f12 + (((*(&D_80AEF8F0 + ((temp_a0 - 0x31) * 4)) + D_80AEF8F0.unk_C0) - temp_f12) * temp_f0);
        } else {
            temp_f12_2 = *(&D_80AEF8F0 + (temp_f4 * 4));
            phi_f2 = temp_f12_2 + ((*(&D_80AEF8F0 + (temp_a0 * 4)) - temp_f12_2) * temp_f0);
        }
    } else {
        phi_f2 = *(&D_80AEF8F0 + (temp_f4 * 4));
    }
    return phi_f2;
}

void func_80AEC658(SkelAnime *arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4) {
    f32 sp1C;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_cond;

    temp_f14 = arg2;
    *arg3 = *(&D_80AEF9B4 + ((s32) arg0->animCurrentFrame * 4)) * 0.5f * arg0->animPlaybackSpeed * temp_f14;
    arg2 = temp_f14;
    sp1C = func_80AEC524(arg0->animCurrentFrame, temp_f14);
    temp_f12 = (sp1C - func_80AEC524(arg1)) * arg2;
    temp_cond = temp_f12 < 0.0f;
    *arg4 = temp_f12;
    if (temp_cond) {
        do {
            *arg4 += (&D_80AEF8F0 + ((s32) arg0->totalFrames * 4))->unk_-4 * arg2;
        } while (*arg4 < 0.0f);
    }
}

void EnTk_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    SkelAnime *sp30;
    ColliderCylinder *temp_a1;
    SkelAnime *temp_a1_2;
    s16 temp_v0;
    s8 temp_v1;
    EnTk *this = (EnTk *) thisx;

    temp_v0 = this->actor.params;
    temp_a1 = &this->unk_18C;
    this->unk_2B0 = temp_v0 & 0xF;
    this->unk_2B1 = ((s32) temp_v0 >> 4) & 0x7F;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, (s32) this->unk_2B1) != 0) {
        if (this->unk_2B0 == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_5;
    }
    if (this->unk_2B0 == 2) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_5:
    if ((this->unk_2B0 == 1) || (this->unk_2B0 == 3)) {
        this->actor.flags &= -0xA;
        this->actor.update = func_80AEF2C8;
        this->actor.draw = NULL;
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1_2 = &this->unk_144;
    sp30 = temp_a1_2;
    SkelAnime_InitSV(globalCtx, temp_a1_2, &D_0600B9E8, NULL, &this->unk_1D8, &this->unk_244, 0x12);
    SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_060030A4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060030A4), (u8) 0, 0.0f);
    this->unk_318 = 0;
    this->unk_2D4 = -1;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 1;
    this->actor.colChkInfo.mass = 0xFF;
    if (this->unk_2B0 == 2) {
        this->unk_316 = 0;
        this->actor.update = func_80AEF5F4;
        func_80AECA3C(this, globalCtx);
        return;
    }
    Collider_SetCylinder(globalCtx, sp34, (Actor *) this, &D_80AEF830);
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->actor.flags |= 0x10;
    this->actor.gravity = -1.0f;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_8013E1C8(sp30, (struct_80B8E1A8 []) D_80AEF868, 0, &this->unk_2D4);
    func_8013E3B8((Actor *) this, (s16 []) &this->unk_312, 2);
    temp_v1 = this->unk_2B0;
    if (temp_v1 != 0) {
        if (temp_v1 == 4) {
            if (D_80AF0050 != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            D_80AF0050 = 1;
            this->actor.room = -1;
            this->actor.update = func_80AEF2D8;
            this->unk_2D8 = 0.0f;
            func_80AECB0C(this, globalCtx);
            func_80AEF2D8((Actor *) this, globalCtx);
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_2D0 = -1;
    this->unk_310 = 0;
    this->unk_2E4 = 0;
    func_80AED898(this, globalCtx);
}

void EnTk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTk *this = (EnTk *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_18C);
}

void func_80AECA3C(EnTk *arg0, GlobalContext *arg1) {
    arg0->unk_316 = 0;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    arg0->actionFunc = func_80AECA90;
}

void func_80AECA90(EnTk *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        func_80AEDE10(this, globalCtx);
        return;
    }
    if (this->actor.xzDistToPlayer < 100.0f) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
}

void func_80AECB0C(EnTk *arg0, GlobalContext *arg1) {
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_3CC = 0xFF;
    arg0->unk_2DC = 0.0f;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 0, arg0 + 0x2D4);
    arg0->actionFunc = func_80AECB6C;
}

void func_80AECB6C(EnTk *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    u8 sp34;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_f6;
    s32 temp_f6_2;
    u8 phi_v0;

    this->actor.textId = 0;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        func_80AED4F8(this, globalCtx);
        return;
    }
    if ((f32) gGameInfo->data[15] != 0.0f) {
        this->unk_144.animPlaybackSpeed = (f32) func_800FE620(globalCtx) / (f32) gGameInfo->data[15];
    } else {
        this->unk_144.animPlaybackSpeed = 0.0f;
    }
    if ((this->unk_2CA & 0x10) != 0) {
        func_8013E1C8(&this->unk_144, (struct_80B8E1A8 []) D_80AEF868, 5, &this->unk_2D4);
        sp48 = 1.0f;
        sp44 = 22.0f;
    } else {
        func_80AEC658(&this->unk_144, this->unk_320, 1.0f, &sp48, &sp44);
    }
    temp_f0 = (f32) gGameInfo->data[15] * sp44;
    temp_f6 = (s32) temp_f0;
    this->unk_2DC += temp_f0 - (f32) temp_f6;
    temp_f2 = this->unk_2DC;
    temp_f6_2 = (s32) temp_f2;
    this->unk_3D0 = temp_f6 + temp_f6_2;
    this->unk_2DC = temp_f2 - (f32) temp_f6_2;
    this->unk_2E0 += gGameInfo->data[15];
    if (func_80133038(globalCtx, &D_80AEF800, (struct_80133038_arg2 *) &sp34) != 0) {
        if ((sp34 == this->unk_3CC) || (func_80AED354(this, globalCtx, &sp34) != 0)) {
            phi_v0 = sp34;
            goto block_13;
        }
    } else {
        sp34 = 0;
        phi_v0 = 0U;
block_13:
        if ((phi_v0 == 0) && (this->unk_3CC != 0)) {
            this->actor.draw = NULL;
            this->actor.flags &= -2;
        } else if ((phi_v0 != 0) && (this->unk_3CC == 0)) {
            this->actor.draw = EnTk_Draw;
            this->actor.flags |= 1;
        }
        this->unk_3CC = sp34;
        func_80AECE0C(this, globalCtx);
        if ((this->unk_3CE & 8) != 0) {
            this->actor.draw = NULL;
            this->actor.flags &= -2;
        }
    }
}

void func_80AECE0C(EnTk *arg0) {
    if (arg0->unk_3CC != 0) {
        func_80AECE60(arg0);
    }
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 4, 0x1555, (s16) 0xB6);
}

? func_80AECE60(Actor *arg0, GlobalContext *arg1) {
    Actor *sp4C4;
    ? spA0;
    ? sp94;
    ? sp88;
    f32 sp7C;
    s32 sp78;
    s32 sp74;
    ? sp5C;
    s32 *sp50;
    s32 *sp4C;
    void *sp44;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    PosRot *temp_s0_2;
    Vec3f *temp_s0;
    s32 *temp_a2;
    s32 *temp_v0;
    u16 temp_t8;
    u16 temp_v0_4;
    void *temp_s1;
    void *temp_v1;
    Vec3f *phi_s0;
    void *phi_s1;
    Actor *phi_s1_2;
    s32 phi_v1;
    Actor *phi_s1_3;
    Actor *phi_s0_2;
    Actor *phi_s0_3;

    func_8013AF00((void *) &spA0, 3, arg0[2].overlayEntry->count + 3);
    if ((arg0->unk_3CE & 4) == 0) {
        temp_v0 = arg0 + 0x3EC;
        sp7C.unk_0 = D_801D15B0.x;
        temp_s1 = arg0 + 0x3E0;
        (&sp7C)[1] = D_801D15B0.y;
        temp_a2 = arg0 + 0x3F0;
        (&sp7C)[2] = D_801D15B0.z;
        sp50 = temp_a2;
        sp4C = temp_v0;
        func_8013B6B0(arg0[2].overlayEntry, temp_s1, temp_a2, arg0->unk_3E8, arg0->unk_3E4, temp_v0, (void *) &spA0, (Vec3f *) &sp7C, (s16) arg0[3].flags);
        func_8013B878(arg1, arg0[2].overlayEntry, arg0->unk_3EC, (Vec3f *) &sp7C);
        arg0->world.pos.y = sp80;
        phi_s0 = arg0 + 0x3D4;
        phi_s1 = temp_s1;
    } else {
        temp_s0 = arg0 + 0x3D4;
        sp7C.unk_0 = temp_s0->x;
        (&sp7C)[1] = temp_s0->y;
        (&sp7C)[2] = temp_s0->z;
        sp4C = arg0 + 0x3EC;
        sp50 = arg0 + 0x3F0;
        phi_s0 = temp_s0;
        phi_s1 = arg0 + 0x3E0;
    }
    arg0->world.pos.x = sp7C;
    arg0->world.pos.z = sp84;
    if ((arg0->unk_3CE & 4) == 0) {
        Math_Vec3f_Copy(arg0 + 0x108, arg0 + 0x24);
        arg0->unk_3CE = (u16) (arg0->unk_3CE | 4);
    }
    temp_v1 = arg1 + 0x18000;
    if ((arg1->unk_18B4A != 0) || (arg0[3].flags == 0)) {
        sp78 = arg0[3].world.pos.x;
        sp74 = arg0->unk_3EC;
        sp7C.unk_0 = arg0->world.pos.x;
        (&sp7C)[1] = arg0->world.pos.y;
        (&sp7C)[2] = arg0->world.pos.z;
    }
    phi_s0->x = D_801D15B0.x;
    phi_s0->y = D_801D15B0.y;
    phi_s0->z = D_801D15B0.z;
    sp44 = temp_v1;
    if (func_8013B6B0(arg0[2].overlayEntry, phi_s1, sp50, arg0->unk_3E8, arg0->unk_3E4, sp4C, (void *) &spA0, phi_s0, (s16) arg0[3].flags) != 0) {
        arg0->unk_3CE = (u16) (arg0->unk_3CE | 8);
    } else {
        sp94.unk_0 = (f32) arg0->world.pos.x;
        sp94.unk_4 = (f32) arg0->world.pos.y;
        sp94.unk_8 = (f32) arg0->world.pos.z;
        sp88.unk_0 = (f32) phi_s0->x;
        sp88.unk_4 = (f32) phi_s0->y;
        sp88.unk_8 = (f32) phi_s0->z;
        sp44 = temp_v1;
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp94, (Vec3f *) &sp88);
    }
    phi_s1_2 = NULL;
    if (((arg1 + 0x18000)->unk_B4A != 0) || (arg0[3].flags == 0)) {
        arg0[3].world.pos.x = sp78;
        arg0->unk_3EC = sp74;
        phi_s0->x = sp7C.unk_0;
        phi_s0->y = (&sp7C)[1];
        phi_s0->z = (&sp7C)[2];
    }
    sp4C4 = NULL;
    phi_s0_2 = NULL;
    if ((arg0->unk_2CA & 0xC00) == 0) {
loop_15:
        temp_v0_2 = func_ActorCategoryIterateById(arg1, phi_s1_2, 0xA, 5);
        phi_s1_3 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_s0_2 = &temp_v0_2->world;
            if (Actor_XZDistanceBetweenActors(arg0, temp_v0_2) <= 120.0f) {
                if ((s32) (s16) (Actor_YawToPoint(arg0, (Vec3f *) temp_s0_2) - arg0->shape.rot.y) >= 0) {
                    phi_v1 = (s32) (s16) (Actor_YawToPoint(arg0, (Vec3f *) temp_s0_2) - arg0->shape.rot.y);
                } else {
                    phi_v1 = -(s32) (s16) (Actor_YawToPoint(arg0, (Vec3f *) temp_s0_2) - arg0->shape.rot.y);
                }
                if (phi_v1 < 0x2001) {
                    arg0->unk_2CA = (u16) (arg0->unk_2CA | 0x400);
                    sp4C4 = temp_v0_2;
                } else {
                    goto block_22;
                }
            } else {
block_22:
                phi_s1_3 = temp_v0_2->next;
                goto block_23;
            }
        } else {
block_23:
            phi_s1_2 = phi_s1_3;
            if (phi_s1_3 == 0) {

            } else {
                goto loop_15;
            }
        }
    } else {
loop_25:
        temp_v0_3 = func_ActorCategoryIterateById(arg1, phi_s0_2, 0xA, 5);
        phi_s0_3 = temp_v0_3;
        if (temp_v0_3 != 0) {
            if (Actor_XZDistanceBetweenActors(arg0, temp_v0_3) <= 160.0f) {
                sp4C4 = temp_v0_3;
            } else {
                phi_s0_3 = temp_v0_3->next;
                goto block_29;
            }
        } else {
block_29:
            phi_s0_2 = phi_s0_3;
            if (phi_s0_3 != 0) {
                goto loop_25;
            }
        }
    }
    if ((sp4C4 != 0) && ((arg0->unk_2CA & 0x400) != 0)) {
        Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp5C, (Vec3f *) &sp4C4->world);
        sp4C4->unk_1A7 = 2;
        if (sp64 < -20.0f) {
            temp_t8 = arg0->unk_2CA & 0xFBFF;
            arg0->unk_2CA = temp_t8;
            arg0->unk_2CA = (u16) (temp_t8 | 0x800);
        }
    }
    if (sp4C4 != 0) {
        temp_v0_4 = arg0->unk_2CA;
        if (((temp_v0_4 & 0x800) != 0) && (sp4C4->unk_1A7 == 0)) {
            arg0->unk_2CA = (u16) (temp_v0_4 & 0xF7FF);
        }
    }
    if (((arg0->unk_3CE & 8) == 0) && ((arg0->unk_2CA & 0x10) == 0) && (arg0->xzDistToPlayer < 100.0f)) {
        func_8013E8F8(arg0, arg1, 100.0f, 100.0f, 0, 0x4000, 0x4000);
    }
    return 0;
}

s32 func_80AED354(EnTk *arg2) {
    s32 phi_v1;

    phi_v1 = 0;
    if (*arg2 != 0) {
        phi_v1 = func_80AED38C();
    }
    return phi_v1;
}

s32 func_80AED38C(void *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp1E;
    Path *temp_v0;
    s32 temp_lo;
    s32 temp_t1;
    s32 temp_t1_2;
    u16 temp_t0;
    u16 temp_t9;
    u8 temp_a1;
    u8 temp_v0_2;
    u16 phi_a1;

    temp_t0 = gSaveContext.time - 0x3FFC;
    temp_a1 = ((s32) arg0->unk_1C >> 0xB) & 0x1F & 0xFF;
    sp1E = temp_t0;
    arg0 = arg0;
    temp_v0 = func_8013BB34(arg1, temp_a1, *(&D_80AEF8EC + ((arg2->unk_0 - 1) * 4)));
    arg0->unk_3C8 = temp_v0;
    if (temp_v0 == 0) {
        return 0;
    }
    temp_v0_2 = arg0->unk_3CC;
    if (((s32) temp_v0_2 <= 0) && (temp_v0_2 != 0) && (arg0->unk_3D0 >= 0)) {
        phi_a1 = temp_t0 & 0xFFFF;
    } else {
        phi_a1 = arg2->unk_6;
    }
    temp_t1 = arg2->unk_8 - phi_a1;
    arg0->unk_3E4 = temp_t1;
    arg0->unk_3F0 = (s32) (temp_t0 - phi_a1);
    temp_lo = temp_t1 / (s32) ((arg0->unk_3C8->count - 2) & 0xFFFF);
    arg0->unk_3E8 = temp_lo;
    temp_t9 = arg0->unk_3CE & ~4;
    temp_t1_2 = temp_t9 & 0xFFFF;
    arg0->unk_3CE = temp_t9;
    arg0->unk_3EC = (s32) (((s32) arg0->unk_3F0 / temp_lo) + 2);
    arg0->unk_3CE = (u16) (temp_t1_2 & ~8);
    return 1;
}

void func_80AED4F8(EnTk *arg0, GlobalContext *arg1) {
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    arg0->actionFunc = func_80AED610;
}

void func_80AED544(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if ((gSaveContext.weekEventReg[31] & 0x10) == 0) {
        func_801518B0(arg1, 0x13FEU, arg0);
        gSaveContext.weekEventReg[31] |= 0x10;
        return;
    }
    temp_v0 = gSaveContext.time;
    if ((s32) temp_v0 < 0x6000) {
        func_801518B0(arg1, 0x13FFU, arg0);
        return;
    }
    if ((s32) temp_v0 < 0x8000) {
        func_801518B0(arg1, 0x1400U, arg0);
        return;
    }
    if ((s32) temp_v0 < 0xA000) {
        func_801518B0(arg1, 0x1401U, arg0);
        return;
    }
    func_801518B0(arg1, 0x1402U, arg0);
}

void func_80AED610(EnTk *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    u16 temp_t3;
    u32 temp_v0;

    temp_a0 = &this->unk_144;
    if (this->unk_2D4 == 4) {
        sp24 = temp_a0;
        if (func_801378B8(temp_a0, this->unk_144.animFrameCount) != 0) {
            func_8013E1C8(temp_a0, (struct_80B8E1A8 []) D_80AEF868, 7, &this->unk_2D4);
        }
    }
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        if (Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer - 0x1555), 0x71C) != 0) {
            if (Player_GetMask(globalCtx) == 0xF) {
                func_8013E1C8(&this->unk_144, (struct_80B8E1A8 []) D_80AEF868, 4, &this->unk_2D4);
                func_801518B0(globalCtx, 0x13FDU, (Actor *) this);
                return;
            }
            if (((s32) gSaveContext.day % 5) != 2) {
                func_80AED544((Actor *) this, globalCtx);
                return;
            }
            if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 4) & 0x7F) == 0) {
                func_801518B0(globalCtx, 0x1403U, (Actor *) this);
                return;
            }
            if ((gSaveContext.weekEventReg[60] & 2) != 0) {
                func_80AED544((Actor *) this, globalCtx);
                return;
            }
            func_801518B0(globalCtx, 0x1413U, (Actor *) this);
            return;
        }
    default:                                        /* switch 1 */
        return;
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
        if (func_80147624(globalCtx) != 0) {
            temp_t3 = globalCtx->msgCtx.unk11F04;
            switch (temp_t3) {                      /* switch 2 */
            case 5117:                              /* switch 2 */
                this->unk_2CA |= 0x10;
                func_8013E1C8(&this->unk_144, (struct_80B8E1A8 []) D_80AEF868, 0, &this->unk_2D4);
                this->actionFunc = func_80AECB6C;
                this->unk_144.animPlaybackSpeed = 10.0f;
                return;
            case 5118:                              /* switch 2 */
                func_80151938(globalCtx, 0x13FFU);
                return;
            case 5139:                              /* switch 2 */
                func_801159EC(0x1E);
                gSaveContext.weekEventReg[60] |= 2;
                func_80151938(globalCtx, 0x13FFU);
                return;
            default:                                /* switch 2 */
                func_8013E1C8(&this->unk_144, (struct_80B8E1A8 []) D_80AEF868, 0, &this->unk_2D4);
                this->actionFunc = func_80AECB6C;
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        break;
    }
}

void func_80AED898(EnTk *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    arg0->unk_316 = 0;
    arg0->actor.speedXZ = 0.0f;
    if ((arg0->unk_2CA & 0x1000) != 0) {
        temp_a0 = arg0 + 0x144;
        if (arg0->unk_2D4 == 4) {
            sp24 = temp_a0;
            if (func_801378B8(temp_a0, arg0->unk_144.animFrameCount) != 0) {
                func_8013E1C8(temp_a0, (struct_80B8E1A8 []) D_80AEF868, 7, arg0 + 0x2D4);
            }
        }
    } else {
        func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    }
    arg0->actionFunc = func_80AED940;
}

void func_80AED940(EnTk *this, GlobalContext *globalCtx) {
    f32 sp48;
    ? sp44;
    Actor *temp_s0;
    Actor *temp_v0_3;
    SkelAnime *temp_s0_2;
    s16 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;
    Actor *phi_s0;
    Actor *phi_s0_2;

    temp_v0 = this->unk_2D4;
    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v0 != 4) && (temp_v0 != 7)) {
        temp_a1 = (this->actor.shape.rot.y - this->actor.yawTowardsPlayer) + 0x1555;
        phi_v1 = -(s32) temp_a1;
        if ((s32) temp_a1 >= 0) {
            phi_v1 = (s32) temp_a1;
        }
        if (phi_v1 < 0x1800) {
            Math_SmoothStepToS(&this->unk_31C, temp_a1, 3, 0x71C, (s16) 0);
        } else {
            Math_SmoothStepToS(&this->unk_31C, 0, 3, 0x71C, (s16) 0);
        }
        Math_Vec3f_Copy((Vec3f *) &sp44, (Vec3f *) &temp_s0->world);
        sp48 = temp_s0[9].shape.feetPos[1].x + 3.0f;
        temp_v0_2 = Math_Vec3f_Pitch((Vec3f *) &this->actor.focus, (Vec3f *) &sp44);
        if (temp_v0_2 >= 0) {
            phi_v1_2 = temp_v0_2;
        } else {
            phi_v1_2 = -temp_v0_2;
        }
        if (phi_v1_2 < 0x800) {
            Math_SmoothStepToS(&this->unk_31A, (s16) temp_v0_2, 3, 0x16C, (s16) 0);
        } else {
            Math_SmoothStepToS(&this->unk_31A, 0, 3, 0x16C, (s16) 0);
        }
    }
    temp_s0_2 = &this->unk_144;
    if ((this->unk_2D4 == 4) && (func_801378B8(temp_s0_2, this->unk_144.animFrameCount) != 0)) {
        func_8013E1C8(temp_s0_2, (struct_80B8E1A8 []) D_80AEF868, 7, &this->unk_2D4);
    }
    phi_s0 = NULL;
    if ((this->unk_2CA & 0x40) == 0) {
loop_18:
        temp_v0_3 = func_ActorCategoryIterateById(globalCtx, phi_s0, 4, 0x1CA);
        phi_s0_2 = temp_v0_3;
        if (temp_v0_3 != 0) {
            if ((temp_v0_3->params & 0xF) == 1) {
                Math_Vec3f_Copy(&this->unk_2EC, (Vec3f *) &temp_v0_3->world);
                Math_Vec3s_Copy(&this->unk_2F8, &temp_v0_3->world.rot);
                Actor_MarkForDeath(temp_v0_3);
                this->unk_2CA |= 0x40;
            } else {
                phi_s0_2 = temp_v0_3->next;
                goto block_22;
            }
        } else {
block_22:
            phi_s0 = phi_s0_2;
            if (phi_s0_2 != 0) {
                goto loop_18;
            }
        }
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk_2CA &= 0xFF7F;
        this->actor.flags &= 0xFFFEFFFF;
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        func_80AEDE10(this, globalCtx);
        return;
    }
    if ((this->unk_2CA & 0x80) == 0) {
        if (this->actor.xzDistToPlayer < 100.0f) {
            func_8013E8F8((Actor *) this, globalCtx, 100.0f, 100.0f, 0, 0x4000, 0x4000);
            return;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return;
    }
    func_800B8500((Actor *) this, globalCtx, this->actor.xzDistToPlayer, this->actor.yDistToPlayer, 0);
}

void func_80AEDBEC(EnTk *arg0, GlobalContext *arg1) {
    arg0->actor.params = -1;
    arg0->unk_2E8 = 0;
    arg0->actor.speedXZ = 0.0f;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    arg0->actionFunc = func_80AEDC4C;
}

void func_80AEDC4C(EnTk *this, GlobalContext *globalCtx) {
    s16 temp_a2;

    temp_a2 = this->actor.params;
    if (((s32) temp_a2 >= 0) && (func_8013E2D4((Actor *) this, this->unk_314, (s32) temp_a2, 0) != 0)) {
        this->unk_2E8 = ActorCutscene_GetLength(this->unk_314);
        func_80151938(globalCtx, 0x1411U);
        func_80AEDCBC(this, globalCtx);
    }
}

void func_80AEDCBC(EnTk *arg0, GlobalContext *arg1) {
    Vec3f *sp24;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;

    arg0->actor.speedXZ = 10.0f;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 5, arg0 + 0x2D4);
    temp_a1 = arg0 + 0x2EC;
    sp24 = temp_a1;
    Math_Vec3f_Copy(arg0 + 0x24, temp_a1);
    Math_Vec3f_Copy(arg0 + 0x108, temp_a1);
    temp_a1_2 = arg0 + 0x2F8;
    sp24 = temp_a1_2;
    Math_Vec3s_Copy(arg0 + 0x30, (Vec3s *) temp_a1_2);
    Math_Vec3s_Copy(arg0 + 0xBC, (Vec3s *) temp_a1_2);
    arg0->actionFunc = func_80AEDD4C;
}

void func_80AEDD4C(EnTk *this, GlobalContext *globalCtx) {
    s16 temp_a0;

    this->unk_2E8 += -1;
    if ((s32) this->unk_2E8 <= 0) {
        temp_a0 = this->unk_314;
        this = this;
        ActorCutscene_Stop(temp_a0);
        func_801477B4(globalCtx);
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80AEDDA0(EnTk *arg0, GlobalContext *arg1) {
    arg0->actor.speedXZ = 0.0f;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    arg0->actor.flags |= 0x10000;
    arg0->unk_2CA |= 0x80;
    arg0->actionFunc = func_80AED940;
}

void func_80AEDE10(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_v0_2;
    s8 temp_v0;

    temp_v0 = arg0->unk_2B0;
    temp_a0 = arg1;
    if (temp_v0 != 0) {
        if (temp_v0 != 2) {

        } else {
            arg0->unk_2E6 = 0x1414;
        }
    } else {
        arg1 = arg1;
        if (Player_GetMask(temp_a0) == 0xF) {
            arg0->unk_2E6 = 0x1404;
        } else {
            temp_v0_2 = arg0->unk_310;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {
                        if (temp_v0_2 != 4) {

                        } else {
                            func_801518B0(arg1, 0x140FU, arg0);
                            func_8013E1C8((SkelAnime *) &arg0[1], (struct_80B8E1A8 []) D_80AEF868, 2, (s32 *) &arg0[2].focus.rot.z);
                        }
                    } else {
                        func_801518B0(arg1, 0x1410U, arg0);
                        func_8013E1C8((SkelAnime *) &arg0[1], (struct_80B8E1A8 []) D_80AEF868, 2, (s32 *) &arg0[2].focus.rot.z);
                    }
                } else {
                    arg0->unk_2E6 = 0x140D;
                }
            } else {
                arg0->unk_2CA = (u16) (arg0->unk_2CA & 0xEFFF);
                if ((gSaveContext.weekEventReg[52] & 0x80) == 0) {
                    arg0->unk_2E6 = 0x1405;
                } else {
                    arg0->unk_2E6 = 0x140B;
                }
            }
        }
    }
    arg0[1].focus.pos.z = (bitwise f32) func_80AEDF5C;
}

void func_80AEDF5C(EnTk *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    s32 *temp_a3;
    u16 temp_a1;
    u16 temp_t8;
    u32 temp_v0;

    temp_a0 = &this->unk_144;
    if (this->unk_2D4 == 4) {
        sp2C = temp_a0;
        if (func_801378B8(temp_a0, this->unk_144.animFrameCount) != 0) {
            func_8013E1C8(temp_a0, (struct_80B8E1A8 []) D_80AEF868, 7, &this->unk_2D4);
        }
    }
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        temp_a1 = this->unk_2E6;
        switch (temp_a1) {                          /* switch 2 */
        case 5124:                                  /* switch 2 */
        case 5125:                                  /* switch 2 */
        case 5131:                                  /* switch 2 */
        case 5133:                                  /* switch 2 */
            Math_SmoothStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer - 0x1555), 1, 0x71C, (s16) 0);
            this->actor.world.rot.y = this->actor.shape.rot.y;
            if ((Math_SmoothStepToS(&this->unk_31A, 0, 3, 0x16C, (s16) 0xA) == 0) && (Math_SmoothStepToS(&this->unk_31C, 0, 3, 0x71C, (s16) 0xA) == 0) && ((s16) (this->actor.yawTowardsPlayer - 0x1555) == this->actor.shape.rot.y)) {
                temp_a0_2 = &this->unk_144;
                temp_a3 = &this->unk_2D4;
                if (this->unk_2E6 == 0x1404) {
                    func_8013E1C8(temp_a0_2, (struct_80B8E1A8 []) D_80AEF868, 4, temp_a3);
                } else {
                    func_8013E1C8(temp_a0_2, (struct_80B8E1A8 []) D_80AEF868, 2, temp_a3);
                }
                func_801518B0(globalCtx, this->unk_2E6, (Actor *) this);
                return;
            }
        default:                                    /* switch 1 */
        default:                                    /* switch 2 */
        default:                                    /* switch 3 */
            return;
        case 5140:                                  /* switch 2 */
            func_801518B0(globalCtx, temp_a1, (Actor *) this);
            return;
        }
        break;
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
        if (func_80147624(globalCtx) != 0) {
            temp_t8 = globalCtx->msgCtx.unk11F04;
            switch (temp_t8) {                      /* switch 3 */
            case 5124:                              /* switch 3 */
                this->unk_2CA |= 0x1000;
                func_80AED898(this, globalCtx, globalCtx);
                return;
            case 5125:                              /* switch 3 */
                func_80151938(globalCtx, 0x1406U);
                return;
            case 5126:                              /* switch 3 */
                func_80151938(globalCtx, 0x1407U);
                return;
            case 5127:                              /* switch 3 */
                if (globalCtx->msgCtx.choiceIndex == 0) {
                    func_8019F208();
                    func_80151938(globalCtx, 0x1409U);
                    return;
                }
                func_8019F230();
                func_80151938(globalCtx, 0x1408U);
                return;
            case 5128:                              /* switch 3 */
                func_80151938(globalCtx, 0x1407U);
                return;
            case 5129:                              /* switch 3 */
                func_80151938(globalCtx, 0x140AU);
                return;
            case 5130:                              /* switch 3 */
                gSaveContext.weekEventReg[52] |= 0x80;
                /* fallthrough */
            case 5131:                              /* switch 3 */
                func_80AEE784(this, globalCtx, globalCtx);
                return;
            case 5133:                              /* switch 3 */
                this->unk_2CA |= 2;
                if (globalCtx->msgCtx.choiceIndex == 0) {
                    func_8019F208();
                    globalCtx->msgCtx.unk11F22 = 0x44;
                    func_80AEE2A8(this, globalCtx);
                    return;
                }
                func_8019F230();
                func_80151938(globalCtx, 0x140EU);
                return;
            case 5134:                              /* switch 3 */
            case 5135:                              /* switch 3 */
            case 5136:                              /* switch 3 */
                func_80AEE784(this, globalCtx, globalCtx);
                return;
            case 5140:                              /* switch 3 */
                func_80AECA3C(this, globalCtx, globalCtx);
                /* Duplicate return node #33. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #33. Try simplifying control flow for better match */
            return;
        }
        break;
    }
}

void func_80AEE2A8(EnTk *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80AEE2C0;
}

void func_80AEE2C0(EnTk *this, GlobalContext *globalCtx) {
    if (func_8013E2D4((Actor *) this, this->unk_312, 0x7C, 0) != 0) {
        func_80AEE374(this, globalCtx);
    }
}

? func_80AEE300(s32 arg0, Actor *arg1, Actor *arg2, void *arg3) {
    f32 temp_f0;

    if ((arg2 != arg1) && ((arg2->params & 0xF) == 3)) {
        temp_f0 = Actor_DistanceBetweenActors(arg1, arg2);
        if (temp_f0 < arg3->unk_4) {
            arg3->unk_0 = arg2;
            arg3->unk_4 = temp_f0;
        }
    }
    return 0;
}

void func_80AEE374(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    s32 sp30;
    s32 *temp_t7;

    temp_t7 = &sp30;
    sp30 = 0;
    sp34 = 3.4028235e38f;
    func_8013E640(arg1, arg0, 0, 4, 0x1CA, temp_t7, func_80AEE300);
    if (sp30 == 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk_2CC = Actor_YawToPoint(arg0, sp30 + 0x24);
    arg0[1].focus.pos.z = (bitwise f32) func_80AEE414;
}

void func_80AEE414(EnTk *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk_2CC, 2, 0xE38, (s16) 0x5B);
    temp_v0 = this->actor.shape.rot.y;
    this->actor.world.rot.y = temp_v0;
    if (this->unk_2CC == temp_v0) {
        func_80AEE478(this, globalCtx);
    }
}

void func_80AEE478(EnTk *arg0, GlobalContext *arg1) {
    arg0->unk_310 = 2;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 3, arg0 + 0x2D4);
    arg0->actionFunc = func_80AEE4D0;
}

void func_80AEE4D0(EnTk *this, GlobalContext *globalCtx) {
    SkelAnime *sp48;
    Actor *temp_v0;
    SkelAnime *temp_a0;
    f32 temp_f0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    temp_f0 = this->unk_144.animCurrentFrame;
    if ((temp_f0 > 33.0f) && (temp_f0 < 41.0f)) {
        func_800BBFB0(globalCtx, &this->unk_2B4, 10.0f, 2, (s16) 0x32, (s16) 0x1E, (u8) 1);
    }
    temp_a0 = &this->unk_144;
    sp48 = temp_a0;
    if (func_801378B8(temp_a0, 33.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x28C8U);
    }
    if ((this->unk_2CA & 0x20) == 0) {
        phi_s0 = NULL;
        if (func_801378B8(sp48, 37.0f) != 0) {
            do {
                temp_v0 = func_ActorCategoryIterateById(globalCtx, phi_s0, 6, 0x208);
                phi_s0_2 = temp_v0;
                if (temp_v0 != 0) {
                    if ((temp_v0->params == 3) && (Actor_DistanceBetweenActors((Actor *) this, temp_v0) < 80.0f)) {
                        temp_v0->params = 4;
                        this->unk_2CA |= 0x20;
                        this->unk_2E4 += 1;
                    }
                    phi_s0_2 = temp_v0->next;
                }
                phi_s0 = phi_s0_2;
            } while (phi_s0_2 != 0);
        }
    }
    if (func_801378B8(sp48, this->unk_144.animFrameCount) != 0) {
        func_80AEE650(this, globalCtx);
    }
}

void func_80AEE650(EnTk *arg0, GlobalContext *arg1) {
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s32 temp_v0;

    temp_v0 = arg0->unk_36C;
    temp_a1 = arg0 + 0x24;
    if (temp_v0 < 6) {
        temp_a0 = arg0 + (temp_v0 * 0xC) + 0x324;
        arg0 = arg0;
        Math_Vec3f_Copy(temp_a0, temp_a1);
        arg0->unk_36C += 1;
    }
    arg0->actionFunc = func_80AEE6B8;
}

void func_80AEE6B8(EnTk *this, GlobalContext *globalCtx) {
    if ((this->unk_2CA & 0x20) != 0) {
        if ((s32) this->unk_2E4 >= 3) {
            ActorCutscene_Stop(this->unk_312);
            func_801477B4(globalCtx);
            func_80AEDBEC(this, globalCtx);
            return;
        }
        if (func_8013E2D4((Actor *) this, 0x7C, (s32) this->unk_312, 0) != 0) {
            this->unk_310 = 3;
            func_80AEDE10(this, globalCtx);
            this->unk_2CA &= 0xFFDF;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if (func_8013E2D4((Actor *) this, 0x7C, (s32) this->unk_312, 0) != 0) {
        this->unk_310 = 4;
        func_80AEDE10(this, globalCtx);
    }
}

void func_80AEE784(EnTk *arg0, GlobalContext *arg1) {
    EnTk *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk_2D0 = -1;
    temp_a2->unk_310 = 1;
    arg0 = temp_a2;
    Math_Vec3s_Copy(temp_a2 + 0x30, temp_a2 + 0xBC);
    func_80AEEAD4(arg0, arg1);
    arg0->actionFunc = func_80AEE9B0;
}

s32 func_80AEE7E0(Vec3f *arg0, f32 arg1, Vec3f *arg2, s32 arg3) {
    s32 sp30;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    sp30 = 1;
    phi_s0 = 0;
    if (arg3 > 0) {
        phi_s1 = arg2;
loop_2:
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (Math_Vec3f_DistXZ(arg0, phi_s1) < arg1) {
            sp30 = 0;
        } else {
            phi_s1 = &phi_s1[1];
            if (temp_s0 != arg3) {
                goto loop_2;
            }
        }
    }
    return sp30;
}

s32 func_80AEE86C(EnTk *arg0, GlobalContext *arg1) {
    s32 sp40;
    CollisionPoly *sp38;
    s32 sp34;
    f32 sp28;
    Vec3f *sp24;
    CollisionContext *sp20;
    CollisionContext *temp_a0_2;
    Vec3f *temp_a0;
    s32 temp_v0;
    s32 phi_v0;

    sp40 = 0;
    temp_a0 = arg0 + 0x24;
    sp24 = temp_a0;
    Lib_Vec3f_TranslateAndRotateY(temp_a0, arg0->actor.shape.rot.y, &D_80AEFA78, (Vec3f *) &sp28);
    temp_a0_2 = arg1 + 0x830;
    sp20 = temp_a0_2;
    if ((func_800C40B4(temp_a0_2, &sp38, &sp34, &sp28) != -32000.0f) && (func_800C9BB8(temp_a0_2, sp38, sp34) == 1) && (arg0->unk_2D0 == 1) && (arg0->actor.xyzDistToPlayerSq <= 13225.0f) && (func_80AEE7E0(sp24, 100.0f, arg0 + 0x324, arg0->unk_36C) != 0)) {
        temp_v0 = arg0->unk_2CA & 2;
        phi_v0 = temp_v0;
        if (temp_v0 != 0) {
            if (!(Math_Vec3f_DistXZ(arg0 + 0x300, (Vec3f *) &sp28) >= 100.0f)) {
                phi_v0 = arg0->unk_2CA & 2;
                goto block_8;
            }
            goto block_9;
        }
block_8:
        if (phi_v0 == 0) {
block_9:
            if (func_801690CC(arg1) == 0) {
                Math_Vec3f_Copy(arg0 + 0x300, (Vec3f *) &sp28);
                sp40 = 1;
            }
        }
    }
    return sp40;
}

void func_80AEE9B0(EnTk *this, GlobalContext *globalCtx) {
    this->unk_30C(this, globalCtx);
    func_80AEEAD4(this, globalCtx);
    if (Math_Vec3f_DistXZ((Vec3f *) &this->actor.world, &this->unk_300) >= 100.0f) {
        this->unk_2CA &= 0xFFFD;
    }
    if (func_80AEE86C(this, globalCtx) != 0) {
        this->unk_310 = 2;
        func_80AEDDA0(this, globalCtx);
    }
}

u32 func_80AEEA4C(EnTk *arg0, void *arg1) {
    f32 temp_f0;
    u32 phi_v1;

    if ((arg0->unk_2CA & 1) != 0) {
        phi_v1 = 3U;
    } else {
        temp_f0 = arg0->actor.xyzDistToPlayerSq;
        if (temp_f0 < 3600.0f) {
            phi_v1 = 0U;
        } else if ((arg0->actor.isTargeted != 0) || (arg0 == arg1->unk_1E54) || (phi_v1 = 2U, (temp_f0 < 6400.0f))) {
            phi_v1 = 1U;
        }
    }
    return phi_v1;
}

void func_80AEEAD4(EnTk *arg0, GlobalContext *arg1) {
    u32 sp24;
    u32 temp_v0;

    temp_v0 = func_80AEEA4C(arg0);
    sp24 = temp_v0;
    if (temp_v0 != arg0->unk_2D0) {
        switch (temp_v0) {
        case 0:
            func_80AEF220(arg0, arg1);
            break;
        case 1:
            func_80AEF048(arg0, arg1);
            break;
        case 2:
            func_80AEEB88(arg0, arg1);
            break;
        case 3:
            func_80AEF15C(arg0, arg1);
            break;
        case 4:
            func_80AEF1C4(arg0, arg1);
            break;
        }
        arg0->unk_2D0 = sp24;
    }
}

void func_80AEEB88(EnTk *arg0, GlobalContext *arg1) {
    s32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 *temp_s3;
    f32 temp_f6;
    f32 temp_f6_2;
    s32 temp_s1;
    s32 phi_s1;
    s32 phi_s1_2;

    temp_s3 = &sp68;
    phi_s1 = 0;
loop_1:
    sp68 = Math_SinS((s16) (arg0->actor.world.rot.y + phi_s1)) * 80.0f;
    temp_f6 = Math_CosS((s16) (arg0->actor.world.rot.y + phi_s1)) * 80.0f;
    sp70 = temp_f6;
    temp_f6_2 = temp_f6;
    sp68 += arg0->actor.world.pos.x;
    sp6C = arg0->actor.world.pos.y + 50.0f;
    sp70 = temp_f6_2 + arg0->actor.world.pos.z;
    phi_s1_2 = phi_s1;
    if (!((func_800C40B4(arg1 + 0x830, arg0 + 0x80, &sp74, temp_s3) - arg0->actor.world.pos.y) <= -80.0f)) {
        temp_s1 = phi_s1 + 0x2000;
        phi_s1 = temp_s1;
        phi_s1_2 = temp_s1;
        if (temp_s1 != 0x10000) {
            goto loop_1;
        }
    }
    if (phi_s1_2 == 0x10000) {
        arg0->unk_2CC = (s16) (s32) ((Rand_Centered() * 32768.0f) + (f32) arg0->actor.yawTowardsPlayer + 32768.0f);
    } else {
        arg0->unk_2CC = arg0->actor.world.rot.y + phi_s1_2;
    }
    arg0->unk_2C6 = 0x64;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 1, arg0 + 0x2D4);
    arg0->unk_30C = func_80AEED38;
}

void func_80AEED38(EnTk *arg0, GlobalContext *arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s16 sp56;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Vec3f *sp30;
    s32 sp2C;
    Vec3f *temp_a0_2;
    Vec3f *temp_a1;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_v0;
    s32 temp_a0;

    temp_a2 = arg0->actor.shape.rot.y;
    temp_a1 = arg0 + 0x24;
    sp30 = temp_a1;
    sp56 = temp_a2;
    Math_Vec3f_Copy((Vec3f *) &sp58, temp_a1);
    temp_f10 = sp58 + (Math_SinS(temp_a2) * 20.0f);
    sp5C += 30.0f;
    sp58 = temp_f10;
    temp_f8 = Math_CosS(temp_a2) * 20.0f;
    temp_a0 = arg1 + 0x830;
    sp2C = temp_a0;
    sp60 += temp_f8;
    if (func_800C5A64(temp_a0, &sp58, 20.0f) != 0) {
        Math_Vec3f_Copy((Vec3f *) &sp48, sp30);
        temp_a2_2 = arg0->actor.shape.rot.y + 0x4000;
        sp56 = temp_a2_2;
        temp_f4 = sp48 + (Math_SinS(temp_a2_2) * 20.0f);
        sp4C += 30.0f;
        sp48 = temp_f4;
        sp50 += Math_CosS(temp_a2_2) * 20.0f;
        Math_Vec3f_Copy((Vec3f *) &sp3C, sp30);
        temp_a2_3 = arg0->actor.shape.rot.y - 0x4000;
        sp56 = temp_a2_3;
        temp_f16 = sp3C + (Math_SinS(temp_a2_3) * 20.0f);
        sp40 += 30.0f;
        sp3C = temp_f16;
        sp44 += Math_CosS(temp_a2_3) * 20.0f;
        if (func_800C5A64(sp2C, &sp48, 20.0f) != 0) {
            if (func_800C5A64(sp2C, &sp3C, 20.0f) != 0) {
                arg0->unk_2CC = arg0->actor.shape.rot.y - 0x4000;
            } else {
                arg0->unk_2CC = arg0->actor.shape.rot.y - 0x4000;
            }
        } else {
            arg0->unk_2CC = arg0->actor.shape.rot.y + 0x4000;
        }
    }
    temp_a0_2 = arg0 + 0x144;
    if ((arg0->unk_2CA & 0x200) != 0) {
        func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    } else {
        sp30 = temp_a0_2;
        func_8013E1C8((SkelAnime *) temp_a0_2, (struct_80B8E1A8 []) D_80AEF868, 1, arg0 + 0x2D4);
        func_80AEC658((SkelAnime *) temp_a0_2, arg0->unk_320, 1.0f, arg0 + 0x70, &sp64);
    }
    if (arg0->actor.speedXZ > 0.5f) {
        Math_SmoothStepToS(arg0 + 0x32, arg0->unk_2CC, 2, 0xAAA, (s16) 1);
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    }
    if ((func_80152498(arg1 + 0x4908) == 0) && (func_801690CC(arg1) == 0)) {
        temp_v0 = arg0->unk_2C6;
        arg0->unk_2C6 = temp_v0 - 1;
        if ((s32) temp_v0 <= 0) {
            func_801518B0(arg1, 0x140CU, NULL);
            arg0->unk_2C6 = 0xC8;
            arg0->unk_2CA |= 0x4000;
        }
    }
}

void func_80AEF048(EnTk *arg0, GlobalContext *arg1) {
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 1, arg0 + 0x2D4);
    arg0->unk_30C = func_80AEF094;
}

void func_80AEF094(EnTk *arg0, GlobalContext *arg1) {
    f32 sp2C;
    SkelAnime *sp28;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if ((arg0->unk_2CA & 0x200) != 0) {
        func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    } else {
        sp28 = temp_a0;
        func_8013E1C8(temp_a0, (struct_80B8E1A8 []) D_80AEF868, 1, arg0 + 0x2D4);
        func_80AEC658(temp_a0, arg0->unk_320, 1.0f, arg0 + 0x70, &sp2C);
    }
    if (arg0->actor.speedXZ >= 0.5f) {
        Math_SmoothStepToS(arg0 + 0x32, arg0->actor.yawTowardsPlayer, 2, 0x38E, (s16) 1);
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    }
}

void func_80AEF15C(EnTk *arg0, GlobalContext *arg1) {
    arg0->actor.speedXZ = 0.0f;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    arg0->unk_30C = func_80AEF1B4;
}

void func_80AEF1B4(EnTk *arg0, GlobalContext *arg1) {

}

void func_80AEF1C4(EnTk *arg0, GlobalContext *arg1) {
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    arg0->unk_30C = func_80AEF210;
}

void func_80AEF210(EnTk *arg0, GlobalContext *arg1) {

}

void func_80AEF220(EnTk *arg0, GlobalContext *arg1) {
    arg0->actor.speedXZ = 0.0f;
    func_8013E1C8(arg0 + 0x144, (struct_80B8E1A8 []) D_80AEF868, 2, arg0 + 0x2D4);
    arg0->unk_30C = func_80AEF278;
}

void func_80AEF278(EnTk *arg0, GlobalContext *arg1) {
    Math_SmoothStepToS(arg0 + 0xBE, (s16) (arg0->actor.yawTowardsPlayer - 0x1555), 3, 0x1C7, (s16) 0);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80AEF2C8(Actor *this, GlobalContext *globalCtx) {

}

void func_80AEF2D8(Actor *this, GlobalContext *globalCtx) {
    Vec3s *sp2C;
    Actor *temp_a0;
    Vec3s *temp_a2;
    s32 temp_v0;

    temp_a2 = &this[1].focus.rot;
    if (this->draw != 0) {
        sp2C = temp_a2;
        Collider_UpdateCylinder(this, (ColliderCylinder *) temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
    temp_a0 = &this[1];
    this[2].xzDistToPlayer = this->unk_15C;
    sp2C = (Vec3s *) temp_a0;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0);
    if ((this->draw != 0) && ((temp_v0 = this->unk_2D4, (temp_v0 == 0)) || (temp_v0 == 1)) && ((func_801378B8((SkelAnime *) sp2C, 0.0f) != 0) || (func_801378B8((SkelAnime *) sp2C, 24.0f) != 0))) {
        Audio_PlayActorSound2(this, 0x38B8U);
    }
    (bitwise ? (*)(Actor *, GlobalContext *)) this[1].focus.pos.z(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(this);
    Actor_UpdateBgCheckInfo(globalCtx, this, 10.0f, 10.0f, 0.0f, 4U);
    func_80AEC460(this);
}

void EnTk_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    DynaPolyActor *temp_v0_2;
    PosRot *temp_a1_2;
    SkelAnime *temp_a0;
    s32 temp_v0;
    u16 temp_t1;
    u16 temp_v0_3;
    u8 temp_a1;
    EnTk *this = (EnTk *) thisx;

    temp_a2 = &this->unk_18C;
    sp28 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    temp_a0 = &this->unk_144;
    this->unk_320 = this->unk_144.animCurrentFrame;
    sp28 = (ColliderCylinder *) temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_80AEC460((Actor *) this);
    temp_v0 = this->unk_2D4;
    if (((temp_v0 == 0) || (temp_v0 == 1)) && ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8((SkelAnime *) sp28, 24.0f) != 0))) {
        Audio_PlayActorSound2((Actor *) this, 0x38B8U);
    }
    temp_a1 = this->actor.floorBgId;
    this->unk_2CA &= 0xFFFE;
    if (temp_a1 != 0x32) {
        temp_v0_2 = BgCheck_GetActorOfMesh(&globalCtx->colCtx, (s32) temp_a1);
        if (temp_v0_2 != 0) {
            if (temp_v0_2->actor.id == 0x1D3) {
                temp_t1 = temp_v0_2->unk_1CC | 1;
                temp_v0_2->unk_1CC = temp_t1;
                if ((temp_t1 & 2) != 0) {
                    this->unk_2CA |= 1;
                }
            }
        } else {
            temp_a1_2 = &this->actor.home;
            sp28 = (ColliderCylinder *) temp_a1_2;
            Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) temp_a1_2);
            Math_Vec3f_Copy(&this->actor.prevPos, (Vec3f *) temp_a1_2);
        }
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 0.0f, 5U);
    if ((this->unk_2B0 == 0) && (func_800C9B40(&globalCtx->colCtx, this->actor.floorPoly, (s32) this->actor.floorBgId) == 0xC)) {
        Math_Vec3f_Copy((Vec3f *) &this->actor.world, &this->actor.prevPos);
        this->unk_2CA |= 0x200;
        this->actor.velocity.y = 0.0f;
    } else {
        this->unk_2CA &= 0xFDFF;
    }
    if ((this->unk_2CA & 0x200) == 0) {
        temp_v0_3 = this->actor.bgCheckFlags;
        if ((temp_v0_3 & 1) == 0) {
            func_800B9010((Actor *) this, 0x20A0U);
            return;
        }
        if ((temp_v0_3 & 2) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x2896U);
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void func_80AEF5F4(Actor *this, GlobalContext *globalCtx) {
    s16 temp_a0;

    this->unk_316 = (s16) (this->unk_316 + 0x46C8);
    temp_a0 = this->unk_316;
    this = this;
    this[2].bgCheckFlags = (u16) (s32) (Math_SinS(temp_a0) * 900.0f);
    (bitwise ? (*)(Actor *, GlobalContext *)) this[1].focus.pos.z(this, globalCtx);
}

s32 func_80AEF65C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x10) {
        arg4->z += arg5[2].yawTowardsPlayer;
        arg4->y += arg5->unk_31C;
    }
    return 0;
}

void func_80AEF6A4(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_v1;

    if (arg4->unk_2B0 != 2) {
        if (arg1 != 0xE) {
            if (arg1 == 0x10) {
                SysMatrix_GetStateTranslation(arg4 + 0x3C);
                return;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return;
        }
        SysMatrix_MultiplyVector3fByState(&D_80AEFA84, arg4 + 0x2B4);
        temp_a0 = *arg0;
        temp_v1 = temp_a0->unk_2B0;
        temp_a0->unk_2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk_4 = &D_0600B530;
        temp_v1->unk_0 = 0xDE000000;
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void EnTk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v0;
    GraphicsContext *temp_v1;
    EnTk *this = (EnTk *) thisx;

    temp_v1 = globalCtx->state.gfxCtx;
    sp3C = temp_v1;
    temp_v1->polyOpa.p = Gfx_CallSetupDL(temp_v1->polyOpa.p, 0x19U);
    temp_v0 = temp_v1->polyOpa.p;
    temp_v1->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80AEFA90 + (this->unk_2C2 * 4)));
    Matrix_RotateY(this->unk_318, 1U);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80AEF65C, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80AEF6A4, (Actor *) this);
}
