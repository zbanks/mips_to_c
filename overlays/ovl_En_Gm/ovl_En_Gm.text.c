typedef struct EnGm {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnGm *, GlobalContext *);
    /* 0x18C */ char pad_18C[0x4];
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ ColliderSphere unk_1DC;             /* inferred */
    /* 0x234 */ char pad_234[0x24];
    /* 0x258 */ u8 unk_258;                         /* inferred */
    /* 0x259 */ char pad_259[0x3];                  /* maybe part of unk_258[4]? */
    /* 0x25C */ s32 unk_25C;                        /* inferred */
    /* 0x260 */ s8 unk_260;                         /* inferred */
    /* 0x261 */ char pad_261[0x1];
    /* 0x262 */ s8 unk_262;                         /* inferred */
    /* 0x263 */ char pad_263[0x1];
    /* 0x264 */ s32 *unk_264;                       /* inferred */
    /* 0x268 */ Actor *unk_268;                     /* inferred */
    /* 0x26C */ char pad_26C[0x48];                 /* maybe part of unk_268[19]? */
    /* 0x2B4 */ Vec3s unk_2B4;                      /* inferred */
    /* 0x2BA */ char pad_2BA[0x72];                 /* maybe part of unk_2B4[20]? */
    /* 0x32C */ Vec3s unk_32C;                      /* inferred */
    /* 0x332 */ char pad_332[0x72];                 /* maybe part of unk_32C[20]? */
    /* 0x3A4 */ u16 unk_3A4;                        /* inferred */
    /* 0x3A6 */ char pad_3A6[0xE];                  /* maybe part of unk_3A4[8]? */
    /* 0x3B4 */ f32 unk_3B4;                        /* inferred */
    /* 0x3B8 */ s16 unk_3B8;                        /* inferred */
    /* 0x3BA */ char pad_3BA[0xA];                  /* maybe part of unk_3B8[6]? */
    /* 0x3C4 */ s16 unk_3C4;                        /* inferred */
    /* 0x3C6 */ s16 unk_3C6;                        /* inferred */
    /* 0x3C8 */ char pad_3C8[0x6];                  /* maybe part of unk_3C6[4]? */
    /* 0x3CE */ s16 unk_3CE;                        /* inferred */
    /* 0x3D0 */ char pad_3D0[0x2];
    /* 0x3D2 */ s16 unk_3D2;                        /* inferred */
    /* 0x3D4 */ char pad_3D4[0x4];                  /* maybe part of unk_3D2[3]? */
    /* 0x3D8 */ s16 unk_3D8;                        /* inferred */
    /* 0x3DA */ char pad_3DA[0xA];                  /* maybe part of unk_3D8[6]? */
    /* 0x3E4 */ void *unk_3E4;                      /* inferred */
    /* 0x3E8 */ s32 unk_3E8;                        /* inferred */
    /* 0x3EC */ char pad_3EC[0x10];                 /* maybe part of unk_3E8[5]? */
    /* 0x3FC */ s32 unk_3FC;                        /* inferred */
    /* 0x400 */ char pad_400[0x4];
} EnGm;                                             /* size = 0x404 */

struct _mips2c_stack_EnGm_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGm_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnGm_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGm_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8094DEE0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094DF90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094DFF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094E054 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094E0F8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8094E1DC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8094E278 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094E2D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094E454 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8094E4D0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8094E52C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094E69C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ s16 sp48;                            /* inferred */
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8094EA34 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8094EB1C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094EDBC {};              /* size 0x0 */

struct _mips2c_stack_func_8094EE84 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8094EFC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094F074 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094F0E0 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8094F2E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094F3D0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094F4EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8094F53C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ u16 sp32;                            /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8094F7D0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x3];
    /* 0x4F */ u8 sp4F;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8094F904 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ void *sp50;                          /* inferred */
    /* 0x54 */ char pad_54[0x1];
    /* 0x55 */ u8 sp55;                             /* inferred */
    /* 0x56 */ u16 sp56;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8094FAC4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x7];                    /* maybe part of sp20[2]? */
    /* 0x2B */ u8 sp2B;                             /* inferred */
    /* 0x2C */ char pad_2C[0x2];                    /* maybe part of sp2B[3]? */
    /* 0x2E */ u16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094FCC4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094FD88 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094FE10 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8094FF04 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x3];
    /* 0x4F */ u8 sp4F;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80950088 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3s *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80950120 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3s *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809501B8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3s *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80950280 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80950388 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809503F8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80950490 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80950690 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80950804 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0xC];                    /* maybe part of sp28[4]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8095097C {
    /* 0x000 */ char pad_0[0x3C];
    /* 0x03C */ Vec3f *sp3C;                        /* inferred */
    /* 0x040 */ s32 *sp40;                          /* inferred */
    /* 0x044 */ s32 *sp44;                          /* inferred */
    /* 0x048 */ void *sp48;                         /* inferred */
    /* 0x04C */ char pad_4C[0x4];
    /* 0x050 */ s32 sp50;                           /* inferred */
    /* 0x054 */ s32 sp54;                           /* inferred */
    /* 0x058 */ f32 sp58;                           /* inferred */
    /* 0x05C */ f32 sp5C;                           /* inferred */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ ? sp64;                             /* inferred */
    /* 0x064 */ char pad_64[0xC];
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad_70[0xC];
    /* 0x07C */ ? sp7C;                             /* inferred */
    /* 0x07C */ char pad_7C[0x424];
};                                                  /* size = 0x4A0 */

struct _mips2c_stack_func_80950C24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80950CDC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad_21[0xF];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80950DB8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80950F2C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x10];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x10];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809513AC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x14];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809514BC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x20];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80951594 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_800E0308(Camera *, Actor *);                 /* extern */
? func_8013A7C0(?);                                 /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
Actor *func_8094DEE0(GlobalContext *arg0, GlobalContext *arg1, u8 arg2, s16 arg3); /* static */
void func_8094DF90(GlobalContext *arg1, u8);        /* static */
s32 func_8094DFF8(EnGm *arg0, GlobalContext *arg1); /* static */
s32 func_8094E054(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
s32 func_8094E0F8(EnGm *arg0, GlobalContext *arg1); /* static */
void func_8094E1DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8094E278(GlobalContext *arg0);            /* static */
void func_8094E2D0(EnGm *arg0);                     /* static */
s32 func_8094E454(Actor *arg0, s16 arg1, s32);      /* static */
s8 func_8094E4D0(Actor *arg0, s32 arg1);            /* static */
s32 func_8094E52C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8094E69C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8094EA34(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_8094EB1C(Actor *arg0, GlobalContext *arg1); /* static */
Actor *func_8094EDBC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8094EE84(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8094EFC4(EnGm *arg0, GlobalContext *arg1); /* static */
Actor *func_8094F074(EnGm *arg0, GlobalContext *arg1); /* static */
void func_8094F0E0(void *arg0);                     /* static */
void func_8094F2E8(EnGm *arg0);                     /* static */
void func_8094F3D0(Actor *arg0, GlobalContext *arg1, s32, GlobalContext *); /* static */
? func_8094F4EC(GlobalContext *arg0, GlobalContext *); /* static */
? func_8094F53C(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_8094F7D0(GlobalContext *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4); /* static */
s32 func_8094F904(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_8094FAC4(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_8094FCC4(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_8094FD88(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_8094FE10(GlobalContext *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_8094FF04(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80950088(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
s32 func_80950120(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
s32 func_809501B8(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
s32 func_80950280(EnGm *arg0, u8 *arg2, u8 *);      /* static */
? func_80950388(Actor *arg0, ? arg1);               /* static */
? func_809503F8(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80950490(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80950690(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80950804(Actor *arg0, GlobalContext *arg1);  /* static */
? func_8095097C(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80950C24(Actor *arg0, GlobalContext *);   /* static */
void func_80950F2C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809513AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809514BC(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80951594(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern ? D_06007528;
extern FlexSkeletonHeader D_060078B0;
static void D_80951820;                             /* unable to generate initializer */
static ? D_80951A0C;                                /* unable to generate initializer */
static Actor D_80951A88;                            /* type too large by 316; unable to generate initializer */
static Actor D_80951A90;                            /* type too large by 316; unable to generate initializer */
static Actor D_80951A98;                            /* type too large by 260; unable to generate initializer */
static Actor D_80951AD8;                            /* type too large by 132; unable to generate initializer */
static Actor D_80951B98;                            /* type too large by 244; unable to generate initializer */
static Actor D_80951BE8;                            /* type too large by 256; unable to generate initializer */
static Actor D_80951C2C;                            /* type too large by 316; unable to generate initializer */
static Actor D_80951C34;                            /* type too large by 316; unable to generate initializer */
static ColliderCylinderInit D_80951C5C = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xE, 0x3E, 0, {0, 0, 0}},
};
static ColliderSphereInit D_80951C88 = {
    {0xA, 0, 0, 0x39, 0x10, 4},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0, {{0, 0, 0}, 0x14}, 0x64},
};
static CollisionCheckInfoInit2 D_80951CB4 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80951CC0[13] = {
    {(AnimationHeader *)0x6009CDC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6009CDC, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600A5E0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600A70C, 1.0f, 0, 1, 0, 0},
    {(AnimationHeader *)0x6008090, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600898C, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6009450, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x600AD18, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600AD18, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600B8B0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600BA80, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600C03C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600B990, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static Vec3f D_80951D90 = {64.0f, 0.0f, -122.0f};
static Vec3f D_80951D9C = {64.0f, 0.0f, -122.0f};
static Vec3f D_80951DA8 = {278.0f, 0.0f, 223.0f};
static Vec3s D_80951DB4 = {0, 0xC000, 0};
static Vec3f D_80951DBC = {-525.0f, 214.0f, 515.0f};
static Vec3s D_80951DC8 = {0, 0x38E0, 0};
static Vec3f D_80951DD0 = {-334.0f, 225.0f, 903.0f};
static Vec3s D_80951DDC = {0, 0x7FFF, 0};
static ? D_80951DE4;                                /* unable to generate initializer */
static ? D_80951E14;                                /* unable to generate initializer */
static Vec3f D_80951E24 = {1400.0f, 0.0f, 0.0f};
static ? D_80951E30;                                /* unable to generate initializer */

Actor *func_8094DEE0(GlobalContext *arg0, GlobalContext *arg1, u8 arg2, s16 arg3) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, arg2 & 0xFF & 0xFF, (s32) arg3);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0 == arg0) || (temp_v0->update == 0))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {

        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void func_8094DF90(GlobalContext *arg1) {
    ? phi_a1;

    phi_a1 = -1;
    switch (arg1) {
    case 9:
    case 13:
    case 15:
        phi_a1 = 0xB;
        break;
    case 10:
    case 11:
    case 16:
    case 17:
        phi_a1 = 0x11;
        break;
    case 12:
    case 14:
    case 20:
        phi_a1 = 0xA;
        break;
    case 18:
    case 19:
        phi_a1 = 0x13;
        break;
    }
    func_8013A7C0(phi_a1);
}

s32 func_8094DFF8(EnGm *arg0, GlobalContext *arg1) {
    s8 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk_262;
    phi_v1 = 0;
    if ((s32) temp_v0 < 0) {
        return 0;
    }
    if ((s32) temp_v0 >= 0) {
        arg0->unk_144.animPlaybackSpeed = arg0->unk_3A8;
        phi_v1 = SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    }
    return phi_v1;
}

s32 func_8094E054(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    SkelAnime *temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_a1;

    phi_v1 = 0;
    phi_a1 = 0;
    if ((arg2 == 0) || (arg2 == 1)) {
        temp_v0 = arg0->unk_3E8;
        if ((temp_v0 != 0) && (temp_v0 != 1)) {
            goto block_6;
        }
    } else if (arg2 != arg0->unk_3E8) {
block_6:
        phi_v1 = 1;
    }
    if (phi_v1 != 0) {
        temp_a0 = arg0 + 0x144;
        if ((s32) arg0[1].dropFlag >= 0) {
            arg0->unk_3E8 = arg2;
            arg0 = arg0;
            temp_a1 = func_8013BC6C(temp_a0, D_80951CC0, arg2);
            arg0[2].parent = arg0->unk_160;
            phi_a1 = temp_a1;
        }
    }
    return phi_a1;
}

s32 func_8094E0F8(EnGm *arg0, GlobalContext *arg1) {
    s32 sp1C;
    s8 temp_a0;
    s8 temp_v1;
    s32 phi_a3;
    s32 phi_a3_2;

    temp_v1 = arg1->roomCtx.currRoom.num;
    phi_a3 = 0;
    if ((temp_v1 != arg0->unk_260) && (arg1->roomCtx.unk31 == 0)) {
        arg0->unk_260 = temp_v1;
        sp1C = 0;
        arg0 = arg0;
        arg0->unk_262 = func_8013D924(0x248, arg1);
        arg0->actor.draw = NULL;
        arg0->unk_3FC = 1;
        phi_a3 = sp1C;
    }
    if (arg0->unk_3FC == 0) {
        return 0;
    }
    temp_a0 = arg0->unk_262;
    if (((s32) temp_a0 < 0) || (arg0 = arg0, sp1C = phi_a3, phi_a3_2 = phi_a3, (func_8013D8DC(temp_a0, arg1) == 0))) {
        phi_a3_2 = 1;
    } else {
        arg0->actor.draw = EnGm_Draw;
        if (arg0->unk_258 == 2) {
            arg0->unk_268 = NULL;
            arg0->unk_3B8 = 0;
        }
        arg0->unk_3FC = 0;
    }
    return phi_a3_2;
}

void func_8094E1DC(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x190;
    if (arg0[1].isTargeted == 7) {
        arg0->unk_22A = (s16) (s32) ((f32) arg0->unk_222 * arg0[1].shape.feetPos[1].z);
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x1DC);
        return;
    }
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
}

void func_8094E278(GlobalContext *arg0) {
    Actor_Spawn(arg0 + 0x1CA0, arg0, 0x199, 115.0f, 32.0f, -121.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
}

void func_8094E2D0(EnGm *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_a1;

    phi_a1 = 0;
    phi_a1 = 0;
    phi_a1 = 0;
    phi_a1 = 0;
    if ((arg0->unk_3A4 & 0x100) != 0) {
        temp_v1 = arg0->unk_3CC;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            arg0->unk_3CC = temp_v1 - 1;
            phi_v0 = arg0->unk_3CC;
        }
        if (phi_v0 == 0) {
            temp_v0 = arg0->unk_3CA;
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {
                        if (temp_v0 != 4) {

                        } else if (arg0->unk_3CE == 1) {
                            arg0->unk_3CE = 1;
                            phi_a1 = 1;
                        }
                    } else if (arg0->unk_3CE == 2) {
                        arg0->unk_3CE = 2;
                        phi_a1 = 1;
                    }
                } else {
                    temp_v0_2 = arg0->unk_3CE;
                    if ((temp_v0_2 == 4) || (temp_v0_2 == 2)) {
                        arg0->unk_3CE = 4;
                        phi_a1 = 1;
                    }
                }
            } else {
                temp_v0_3 = arg0->unk_3CE;
                if ((temp_v0_3 == 5) || (temp_v0_3 == 2)) {
                    arg0->unk_3CE = 5;
                    phi_a1 = 1;
                }
            }
            if ((phi_a1 == 0) && ((temp_v0_4 = arg0->unk_3CE, (temp_v0_4 == 4)) || (temp_v0_4 == 5))) {
                arg0->unk_3CE = 1;
            }
            if (phi_a1 == 0) {
                arg0->unk_3CE += 1;
                if ((s32) arg0->unk_3CE >= 4) {
                    if (arg0->unk_3CA == 0) {
                        arg0 = arg0;
                        arg0->unk_3CC = Rand_S16Offset(0x1E, 0x1E);
                    } else {
                        arg0->unk_3CC = 8;
                    }
                    arg0->unk_3CE = 0;
                }
            }
        }
    }
}

s32 func_8094E454(Actor *arg0, s16 arg1) {
    s32 sp1C;

    sp1C = 0;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(arg1);
    } else if (ActorCutscene_GetCanPlayNext(arg1) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg1, arg0);
        sp1C = 1;
    } else {
        ActorCutscene_SetIntentToPlay(arg1);
    }
    return sp1C;
}

s8 func_8094E4D0(Actor *arg0, s32 arg1) {
    s16 temp_v0;
    s32 temp_s0;
    s8 temp_s1;
    s16 phi_s1;
    s32 phi_s0;
    s8 phi_s1_2;

    temp_s1 = arg0->cutscene;
    phi_s1 = (s16) temp_s1;
    phi_s0 = 0;
    phi_s1_2 = temp_s1;
    if (arg1 > 0) {
        do {
            temp_v0 = ActorCutscene_GetAdditionalCutscene(phi_s1);
            temp_s0 = phi_s0 + 1;
            phi_s1 = temp_v0;
            phi_s0 = temp_s0;
            phi_s1_2 = (s8) temp_v0;
        } while (temp_s0 != arg1);
    }
    return phi_s1_2;
}

s32 func_8094E52C(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0_2;
    s16 temp_a0;
    s16 temp_v0;
    s32 phi_a2;

    temp_v0 = func_8094E4D0(arg0, 0);
    temp_a0 = arg0[3].home.rot.x;
    phi_a2 = 0;
    if (temp_a0 != 0) {
        if (temp_a0 != 1) {
            if (temp_a0 != 2) {
                if (temp_a0 != 3) {

                } else {
                    ActorCutscene_Stop(temp_v0);
                    arg0[3].home.rot.x += 1;
                    phi_a2 = 1;
                }
            } else {
                goto block_6;
            }
        } else {
            temp_v0_2 = arg0->child;
            if ((temp_v0_2 != 0) && (temp_v0_2->update != 0)) {
                func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_v0)), arg0->child);
            }
            arg0[3].home.rot.x += 1;
            phi_a2 = 1;
        }
    } else {
        sp2A = temp_v0;
        sp24 = 0;
        if (func_8094E454(arg0, temp_v0, 0) != 0) {
block_6:
            if (((gSaveContext.weekEventReg[86] & 0x40) == 0) && (arg0[3].home.rot.x == 2)) {
                ActorCutscene_Stop(temp_v0);
            } else {
                func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_v0)), arg0);
            }
            arg0[3].home.rot.x += 1;
            phi_a2 = 1;
        }
    }
    return phi_a2;
}

s32 func_8094E69C(Actor *arg0, GlobalContext *arg1) {
    s16 sp4A;
    s16 sp48;
    ? sp3C;
    ? sp30;
    s32 sp2C;
    Actor *temp_v0_2;
    Actor *temp_v0_4;
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_t2;
    s32 temp_v0_3;
    s8 temp_v0;

    temp_v0 = func_8094E4D0(arg0, 0);
    sp2C = 0;
    temp_v1 = arg0[3].home.rot.x;
    switch (temp_v1) {
    case 0:
        Audio_PlayActorSound2(arg0, 0x2892U);
        func_8094E054(arg0, arg1, 2);
        arg0[3].home.rot.y = 0;
        arg0[3].home.rot.x += 1;
        break;
    case 1:
        temp_v0_2 = arg0->child;
        if ((temp_v0_2 != 0) || (temp_v0_2->update != 0)) {
            Math_Vec3f_Copy((Vec3f *) &sp3C, (Vec3f *) &temp_v0_2->world);
            Math_Vec3f_Copy((Vec3f *) &sp30, (Vec3f *) &arg0->world);
            temp_v0_3 = Math_Vec3f_Yaw((Vec3f *) &sp30, (Vec3f *) &sp3C);
            temp_t2 = temp_v0_3 / 0x16C;
            temp_a1 = (s16) temp_v0_3;
            arg0[3].home.rot.y += 1;
            if ((temp_t2 != ((s32) arg0->shape.rot.y / 0x16C)) && ((s32) arg0[3].home.rot.y < 0x14)) {
                Math_ApproachS(&arg0->shape.rot.y, temp_a1, 3, 0x2AA8);
            } else {
                arg0->shape.rot.y = (s16) temp_v0_3;
                arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x20);
                arg0[3].home.rot.y = 0;
                arg0[3].home.rot.x += 1;
                sp2C = 1;
            }
        } else {
            arg0[3].home.rot.x = temp_v1 + 1;
            arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x20);
            arg0->shape.rot.y = arg0->world.rot.y;
            sp2C = 1;
        }
        break;
    case 2:
        sp4A = (s16) temp_v0;
        if (func_8094E454(arg0, (s16) temp_v0, (s32) (s16) temp_v0) != 0) {
        case 4:
        case 6:
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera((s16) temp_v0)), arg0);
            arg0[3].home.rot.x += 1;
            sp2C = 1;
        }
        break;
    case 3:
    case 5:
    case 7:
        temp_v0_4 = arg0->child;
        if ((temp_v0_4 != 0) && (temp_v0_4->update != 0)) {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera((s16) temp_v0)), arg0->child);
        }
        arg0[3].home.rot.x += 1;
        sp2C = 1;
        break;
    case 8:
        sp4A = (s16) temp_v0;
        Audio_PlayActorSound2(arg0, 0x2892U);
        ActorCutscene_Stop((s16) temp_v0);
        arg0[3].home.rot.y = 0;
        arg0[3].home.rot.x += 1;
        break;
    case 9:
        sp48 = arg0->world.rot.y;
        arg0[3].home.rot.y += 1;
        if ((((s32) sp48 / 0x16C) != ((s32) arg0->shape.rot.y / 0x16C)) && ((s32) arg0[3].home.rot.y < 0x14)) {
            Math_ApproachS(&arg0->shape.rot.y, sp48, 3, 0x2AA8);
            arg0->unk_3A4 = (u16) (arg0->unk_3A4 & 0xFFDF);
        } else {
            func_8094E054(arg0, arg1, 1);
            arg0[3].home.rot.y = 0;
            arg0[3].home.rot.x += 1;
            arg0->shape.rot.y = sp48;
            sp2C = 1;
        }
        break;
    }
    return sp2C;
}

s32 func_8094EA34(GlobalContext *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *temp_v0;
    s16 temp_v1;

    sp1C = func_8094DEE0(arg1, (GlobalContext *)4, 0x262U);
    temp_v0 = func_8094DEE0(arg0, arg1, 4U, 0x234);
    if ((sp1C == 0) || (sp1C->update == 0) || (temp_v0 == 0) || (temp_v0->update == 0)) {
        arg0->unk_3E0 = (s16) (arg0->unk_3E0 + 1);
        return 1;
    }
    temp_v1 = arg0->unk_3E0;
    switch (temp_v1) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 10:
    case 14:
    case 16:
        arg0->unk_3E0 = (s16) (temp_v1 + 1);
        break;
    case 7:
    case 9:
    case 12:
        arg0->view.projection.m[0][3] = (s32) temp_v0;
        arg0->unk_3E0 = (s16) (temp_v1 + 1);
        break;
    case 1:
    case 3:
    case 5:
    case 8:
    case 11:
    case 13:
    case 15:
    case 17:
        arg0->view.projection.m[0][3] = (s32) sp1C;
        arg0->unk_3E0 = (s16) (temp_v1 + 1);
        break;
    default:
        arg0->unk_3E0 = (s16) (temp_v1 + 1);
        break;
    }
    return 1;
}

s32 func_8094EB1C(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_v0;

    sp24 = 0;
    temp_v0 = arg0[3].home.rot.x;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else {
                    goto block_15;
                }
            } else {
                Audio_PlayActorSound2(arg0, 0x2892U);
                arg0[3].home.rot.y = 0;
                arg0[3].home.rot.x += 1;
block_15:
                temp_s1 = arg0->world.rot.y;
                arg0[3].home.rot.y += 1;
                if ((((s32) temp_s1 / 0x16C) != ((s32) arg0->shape.rot.y / 0x16C)) && ((s32) arg0[3].home.rot.y < 0x14)) {
                    Math_ApproachS(&arg0->shape.rot.y, temp_s1, 3, 0x2AA8);
                    arg0->unk_3A4 = (u16) (arg0->unk_3A4 & 0xFFDF);
                } else {
                    func_8094E054(arg0, arg1, 1);
                    arg0->shape.rot.y = temp_s1;
                    arg0[3].home.rot.y = 0;
                    arg0[3].home.rot.x += 1;
                    sp24 = 1;
                }
            }
        } else {
            goto block_10;
        }
    } else if (((gSaveContext.weekEventReg[50] & 1) != 0) || ((gSaveContext.weekEventReg[51] & 0x80) != 0) || ((gSaveContext.weekEventReg[75] & 2) != 0)) {
        sp24 = 1;
    } else {
        Audio_PlayActorSound2(arg0, 0x2892U);
        func_8094E054(arg0, arg1, 2);
        arg0[3].home.rot.y = 0;
        arg0[3].home.rot.x += 1;
block_10:
        temp_s1_2 = arg0->yawTowardsPlayer;
        arg0[3].home.rot.y += 1;
        if ((((s32) temp_s1_2 / 0x16C) != ((s32) arg0->shape.rot.y / 0x16C)) && ((s32) arg0[3].home.rot.y < 0x14)) {
            Math_ApproachS(&arg0->shape.rot.y, temp_s1_2, 3, 0x2AA8);
        } else {
            arg0->shape.rot.y = temp_s1_2;
            arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x20);
            arg0[3].home.rot.y = 0;
            arg0[3].home.rot.x += 1;
            sp24 = 1;
        }
    }
    return sp24;
}

Actor *func_8094EDBC(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t6;

    temp_t6 = arg0[1].isTargeted;
    switch (temp_t6) {
    case 1:
        arg0->unk_3E4 = func_8094E52C;
        return &D_80951A98;
    case 2:
        arg0->unk_3E4 = (s32 (*)(Actor *, GlobalContext *)) func_8094EA34;
        return &D_80951AD8;
    case 3:
        arg0->unk_3E4 = func_8094E69C;
        return &D_80951B98;
    case 5:
        arg0->unk_3E4 = func_8094EB1C;
        return &D_80951BE8;
    case 7:
        return &D_80951C2C;
    case 8:
        return &D_80951C34;
    case 6:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 30:
        return &D_80951A88;
    case 12:
    case 17:
    case 19:
    case 20:
    case 22:
    case 28:
    case 29:
        return &D_80951A90;
    default:
        return NULL;
    }
}

s32 func_8094EE84(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    u8 temp_v1;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk_3A4 & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            func_8013AED4((u16 *) &arg0[2].colorFilterTimer, 0U, 7U);
            arg0[3].home.rot.x = 0;
            arg0->unk_3E4 = 0;
            arg0->child = arg0[1].child;
            temp_v1 = arg0[1].isTargeted;
            arg0[1].parent = func_8094EDBC(arg0, arg1);
            if ((temp_v1 == 5) && ((gSaveContext.weekEventReg[50] & 1) == 0) && ((gSaveContext.weekEventReg[51] & 0x80) == 0) && ((gSaveContext.weekEventReg[75] & 2) == 0)) {
                arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x20);
            } else if ((temp_v1 != 1) && (temp_v1 != 5) && (temp_v1 != 7)) {
                arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x20);
            }
            if ((arg0[1].isTargeted == 3) && ((gSaveContext.weekEventReg[75] & 1) != 0)) {
                arg0->unk_3A4 = (u16) (arg0->unk_3A4 & 0xFFDF);
            }
            arg0[1].focus.pos.z = (bitwise f32) func_80950DB8;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_8094EFC4(EnGm *arg0, GlobalContext *arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1->csCtx.state != 0) {
        if (arg0->unk_3F8 == 0) {
            if ((arg1->sceneNum == 0x15) && (gSaveContext.sceneSetupIndex == 2)) {
                func_8094E054(NULL);
                arg0->unk_258 = 0xFF;
            }
            arg0->unk_259 = 0xFF;
            arg0->unk_3F8 = 1;
        }
        phi_v1 = 1;
    } else if (arg0->unk_3F8 != 0) {
        if (arg1->sceneNum == 0x15) {
            arg0->unk_400 = 0;
        }
        arg0->unk_3F8 = 0;
    }
    return phi_v1;
}

Actor *func_8094F074(EnGm *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    Actor *phi_v1;
    Actor *phi_v0;

    temp_v0 = arg0->unk_258;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                phi_v1 = arg1->actorCtx.actorList[2].first;
            } else {
                phi_v0 = func_8094DEE0((GlobalContext *)4, (GlobalContext *)0x263);
                goto block_7;
            }
        } else {
            phi_v1 = arg0->unk_268;
        }
    } else {
        phi_v0 = func_8094DEE0((GlobalContext *)4, (GlobalContext *)0x290);
block_7:
        phi_v1 = phi_v0;
    }
    return phi_v1;
}

void func_8094F0E0(void *arg0) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 sp32;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    void *temp_v0_2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk_268 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    temp_v0 = Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40);
    sp32 = temp_v0;
    Math_ApproachS(arg0 + 0x3BE, (s16) ((temp_v0 - arg0->unk_3C2) - arg0->unk_BE), 4, 0x2AA8);
    temp_v1 = arg0->unk_3BE;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk_3BE = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk_3BE = phi_v0;
    }
    Math_ApproachS(arg0 + 0x3C2, (s16) ((sp32 - arg0->unk_3BE) - arg0->unk_BE), 4, 0x2AA8);
    temp_v1_2 = arg0->unk_3C2;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk_3C2 = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk_3C2 = phi_v0_2;
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk_268;
    if (temp_v0_2->unk_0 == 0) {
        sp44 = temp_v0_2->unk_C44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x3BC, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_3C0), 4, 0x2AA8);
    temp_v1_3 = arg0->unk_3BC;
    if ((s32) temp_v1_3 < -0x1554) {
        arg0->unk_3BC = -0x1554;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1555) {
            phi_v0_3 = 0x1554;
        }
        arg0->unk_3BC = phi_v0_3;
    }
    Math_ApproachS(arg0 + 0x3C0, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_3BC), 4, 0x2AA8);
    temp_v1_4 = arg0->unk_3C0;
    if ((s32) temp_v1_4 < -0xE38) {
        arg0->unk_3C0 = -0xE38;
        return;
    }
    phi_v0_4 = temp_v1_4;
    if ((s32) temp_v1_4 >= 0xE39) {
        phi_v0_4 = 0xE38;
    }
    arg0->unk_3C0 = phi_v0_4;
}

void func_8094F2E8(EnGm *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    void *temp_v0;
    s16 phi_v1;
    s16 phi_v1_2;

    if (((arg0->unk_3A4 & 0x20) != 0) && (temp_v0 = arg0->unk_268, (temp_v0 != 0)) && (temp_v0->update != 0)) {
        temp_v0_2 = arg0->unk_3C6;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_3C6 = temp_v0_2 - 1;
            phi_v1 = arg0->unk_3C6;
        }
        if (phi_v1 == 0) {
            func_8094F0E0();
            temp_t2 = arg0->unk_3A4 & 0xFDFF;
            temp_t3 = temp_t2 | 0x80;
            arg0->unk_3A4 = temp_t2;
            arg0->unk_3A4 = temp_t3;
            return;
        }
        goto block_8;
    }
block_8:
    temp_v0_3 = arg0->unk_3A4;
    if ((temp_v0_3 & 0x80) != 0) {
        arg0->unk_3A4 = temp_v0_3 & 0xFF7F;
        arg0->unk_3BC = 0;
        arg0->unk_3BE = 0;
        arg0->unk_3C0 = 0;
        arg0->unk_3C2 = 0;
        arg0->unk_3C6 = 0x14;
        return;
    }
    temp_v0_4 = arg0->unk_3C6;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk_3C6 = temp_v0_4 - 1;
        phi_v1_2 = arg0->unk_3C6;
    }
    if (phi_v1_2 == 0) {
        arg0->unk_3A4 |= 0x200;
    }
}

void func_8094F3D0(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 sp28;
    s32 temp_v0;
    u16 temp_a0;

    sp2C = arg1->actorCtx.actorList[2].first;
    temp_v0 = func_80152498(arg1 + 0x4908);
    sp28 = temp_v0;
    temp_a0 = arg1->msgCtx.unk11F04;
    if ((arg0 == sp2C[8].velocity.y) && (((s32) temp_a0 < 0xFF) || ((s32) temp_a0 >= 0x201)) && (temp_v0 == 3) && (arg0[3].world.pos.x == 3)) {
        if (((u32) arg1->state.frames % 3U) == 0) {
            if (arg0[2].child == 120.0f) {
                arg0[2].child = 0.0f;
            } else {
                arg0[2].child = 120.0f;
            }
        }
    } else {
        arg0[2].child = 0.0f;
    }
    Math_SmoothStepToF(arg0 + 0x3B0, arg0[2].child, 0.8f, 40.0f, 10.0f);
    SysMatrix_InsertTranslation(arg0[2].prev, 0.0f, 0.0f, 1);
    arg0[3].world.pos.x = sp28;
}

? func_8094F4EC(GlobalContext *arg0) {
    if ((arg0->mainCamera.paramData[56] != 6) && (arg0->subCameras[0].at.x == 0xC)) {
        arg0->unk_3A4 = (u16) (arg0->unk_3A4 & 0xDFFF);
        func_8094E054((Actor *)8);
    }
    return 1;
}

? func_8094F53C(GlobalContext *arg0, GlobalContext *arg1) {
    void *sp34;
    u16 sp32;
    Actor *sp2C;
    Actor *sp28;
    s32 sp24;
    f32 temp_v0;
    s32 temp_v0_3;
    u16 temp_v0_2;

    sp34 = arg1->actorCtx.actorList[2].first;
    sp32 = arg1->msgCtx.unk11F04;
    sp2C = func_8094DEE0(arg0, (GlobalContext *)4, 0x262U);
    sp28 = func_8094DEE0(arg0, arg1, 4U, 0x234);
    if ((sp34->unk_A6C & 0x440) != 0) {
        arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x400);
        sp24 = (s32) sp32;
        if (sp32 != arg0->unk_3A6) {
            switch (sp32) {                         /* switch 1 */
            case 11027:                             /* switch 1 */
                func_8094E054((Actor *) arg0, arg1, 2);
                break;
            case 11028:                             /* switch 1 */
            case 11032:                             /* switch 1 */
                func_8094E054((Actor *) arg0, arg1, 0);
                break;
            case 11030:                             /* switch 1 */
                func_8094E054((Actor *) arg0, arg1, 1);
                break;
            case 11029:                             /* switch 1 */
                func_8094E054((Actor *) arg0, arg1, 5);
                break;
            case 11031:                             /* switch 1 */
                func_8094E054((Actor *) arg0, arg1, 6);
                break;
            default:                                /* switch 1 */
                temp_v0 = arg0->subCameras[0].at.x;
                if (((bitwise s32) temp_v0 == 7) || ((bitwise s32) temp_v0 == 8)) {
                    arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x2000);
                    func_8094E054((Actor *) arg0, arg1, 0xC);
                }
                break;
            }
            switch (sp24) {                         /* switch 2 */
            case 10918:                             /* switch 2 */
            case 10927:                             /* switch 2 */
            case 10932:                             /* switch 2 */
                if ((sp2C != 0) && (sp2C->update != 0)) {
                    arg0->unk_268 = sp2C;
                }
                break;
            case 10925:                             /* switch 2 */
            case 10928:                             /* switch 2 */
            case 10930:                             /* switch 2 */
                if ((sp28 != 0) && (sp28->update != 0)) {
                    arg0->unk_268 = sp28;
                }
                break;
            }
            if (sp24 == 0x2AA8) {
                arg0->unk_3C8 = 0;
                arg0->unk_3CA = 0;
                arg0->unk_3CC = 8;
            }
        }
        arg0->unk_3A6 = sp32;
    } else {
        temp_v0_2 = arg0->unk_3A4;
        if ((temp_v0_2 & 0x400) != 0) {
            arg0->view.viewing.m[3][1] = 0;
            arg0->unk_3A6 = 0U;
            arg0->unk_3A4 = (u16) (temp_v0_2 & 0xFBFF);
            arg0->unk_3CC = 4;
            arg0->unk_3CA = (s16) arg0->unk_3C8;
            func_8094F4EC(arg0, arg1);
        }
    }
    temp_v0_3 = arg0->view.viewing.m[3][1];
    if (temp_v0_3 != 0) {
        ((? (*)(GlobalContext *, GlobalContext *)) temp_v0_3)(arg0, arg1);
    }
    if (((bitwise s32) arg0->subCameras[0].at.x == 6) && ((arg1->actorCtx.unk5 & 0x20) == 0) && (func_801378B8((SkelAnime *) &arg0->view.projection.m[2][3], 20.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) arg0, 0x2993U);
    }
    return 0;
}

s32 func_8094F7D0(GlobalContext *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4) {
    u8 sp4F;
    void *sp48;
    ? sp3C;
    ? sp30;
    Actor *sp2C;
    s32 sp24;
    Actor *temp_v0;
    Path *temp_v0_2;
    s32 temp_a2;
    void *temp_v0_3;
    Actor *phi_v1;

    sp24 = 0;
    sp4F = (u8) arg0->unk_1C;
    arg0->unk_234 = NULL;
    temp_v0 = func_8094DEE0(arg0, arg1, arg3, arg4);
    temp_a2 = *(&D_80951A0C + (*arg2 * 4));
    phi_v1 = temp_v0;
    if (temp_a2 >= 0) {
        sp2C = temp_v0;
        arg0->unk_234 = func_8013BB34(arg1, sp4F, temp_a2);
        phi_v1 = sp2C;
    }
    if ((phi_v1 != 0) && (phi_v1->update != 0)) {
        temp_v0_2 = arg0->unk_234;
        if (temp_v0_2 != 0) {
            temp_v0_3 = Lib_SegmentedToVirtual((void *) temp_v0_2->points);
            sp48 = temp_v0_3;
            Math_Vec3s_ToVec3f((Vec3f *) &sp3C, ((arg0->unk_234->count * 6) + temp_v0_3) - 0xC);
            Math_Vec3s_ToVec3f((Vec3f *) &sp30, ((arg0->unk_234->count * 6) + sp48) - 6);
            arg0->view.viewport.leftX = 0;
            arg0->state.input[1].prev.button = Math_Vec3f_Yaw((Vec3f *) &sp3C, (Vec3f *) &sp30);
            Math_Vec3f_Copy((Vec3f *) &arg0->state.input[0].press.errno, (Vec3f *) &sp30);
            sp24 = 1;
        }
    }
    return sp24;
}

s32 func_8094F904(Actor *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp56;
    u8 sp55;
    void *sp50;
    void *sp4C;
    ? sp40;
    ? sp34;
    s32 sp2C;
    Path *temp_v0;
    s16 temp_v0_3;
    s32 temp_a2;
    u16 temp_t1;
    void *temp_v0_2;
    s32 phi_v1;

    sp56 = gSaveContext.time - 0x3FFC;
    sp2C = 0;
    sp55 = (u8) arg0->params;
    arg0[1].projectedPos.y = NULL;
    sp50 = func_8094DF90(arg1, arg2->unk_0);
    temp_a2 = *(&D_80951A0C + (arg2->unk_0 * 4));
    if (temp_a2 >= 0) {
        arg0[1].projectedPos.y = func_8013BB34(arg1, sp55, temp_a2);
    }
    if ((sp50 != 0) && (sp50->unk_138 != 0)) {
        temp_v0 = arg0[1].projectedPos.y;
        if (temp_v0 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
            sp4C = temp_v0_2;
            Math_Vec3s_ToVec3f((Vec3f *) &sp40, (Vec3s *) temp_v0_2);
            Math_Vec3s_ToVec3f((Vec3f *) &sp34, sp4C + 6);
            Math_Vec3f_Copy(arg0 + 0x278, (Vec3f *) &sp40);
            Math_Vec3f_Copy(arg0 + 0x284, (Vec3f *) &sp34);
            arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp40, (Vec3f *) &sp34);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
            temp_v0_3 = arg0->world.rot.y - sp50->unk_BE;
            phi_v1 = (s32) temp_v0_3;
            if ((s32) temp_v0_3 < 0) {
                phi_v1 = -(s32) temp_v0_3;
            }
            if (phi_v1 < 0x4001) {
                arg0[1].isDrawn = -0x4B;
            } else {
                arg0[1].isDrawn = 0x4B;
            }
            arg0->unk_3B8 = (s16) (arg2->unk_8 - arg2->unk_4);
            temp_t1 = arg0->unk_3A4 | 0x100;
            arg0->unk_3A4 = temp_t1;
            arg0->unk_3BA = (s16) (sp56 - arg2->unk_4);
            arg0->flags &= -2;
            arg0->unk_3A4 = (u16) (temp_t1 | 0x200);
            func_8094E054(arg0, arg1, 7);
            arg0->gravity = 0.0f;
            sp2C = 1;
        }
    }
    return sp2C;
}

s32 func_8094FAC4(Actor *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp2E;
    u8 sp2B;
    s32 sp20;
    Path *temp_v0;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_v0_3;
    u16 temp_t3;
    u16 temp_t8;
    u8 temp_v0_2;
    Path *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    sp2B = arg0->params & 0xFF;
    arg0[1].projectedPos.y = NULL;
    temp_t0 = gSaveContext.time - 0x3FFC;
    temp_a3 = *(&D_80951A0C + (arg2->unk_0 * 4));
    if (temp_a3 >= 0) {
        sp20 = 0;
        sp2E = temp_t0 & 0xFFFF;
        arg0[1].projectedPos.y = func_8013BB34(arg1, sp2B, temp_a3);
    }
    temp_v0 = arg0[1].projectedPos.y;
    phi_v0 = temp_v0;
    phi_v1_2 = 0;
    if ((temp_v0 != 0) && ((s32) temp_v0->count < 3)) {
        arg0[1].projectedPos.y = NULL;
        phi_v0 = NULL;
    }
    if (phi_v0 != 0) {
        temp_v0_2 = arg0[1].isTargeted;
        if (((s32) temp_v0_2 < 9) && (temp_v0_2 != 0) && ((s32) arg0->unk_3C4 >= 0)) {
            phi_v1 = temp_t0 & 0xFFFF & 0xFFFF;
        } else {
            phi_v1 = (s32) arg2->unk_6;
        }
        temp_v0_3 = arg2->unk_8;
        if (temp_v0_3 < phi_v1) {
            arg0[1].uncullZoneDownward = (phi_v1 - temp_v0_3) + 0xFFFF;
        } else {
            arg0[1].uncullZoneDownward = temp_v0_3 - phi_v1;
        }
        arg0[1].prevPos.z = (temp_t0 & 0xFFFF) - phi_v1;
        temp_lo = (s32) arg0[1].uncullZoneDownward / (s32) ((arg0[1].projectedPos.y->count - 2) & 0xFFFF);
        temp_t8 = arg0->unk_3A4 & 0xFFF7;
        arg0->unk_3A4 = temp_t8;
        arg0[1].prevPos.x = temp_lo;
        arg0[1].prevPos.y = ((s32) arg0[1].prevPos.z / temp_lo) + 2;
        arg0->unk_3A4 = (u16) (temp_t8 & 0xFFEF);
        func_8013AED4(arg0 + 0x3A4, 3U, 7U);
        temp_t3 = arg0->unk_3A4 | 0x100;
        arg0->unk_3A4 = temp_t3;
        arg0->unk_3A4 = (u16) (temp_t3 | 0x200);
        func_8094E054(arg0, arg1, 7);
        arg0->gravity = -1.0f;
        phi_v1_2 = 1;
    }
    return phi_v1_2;
}

s32 func_8094FCC4(GlobalContext *arg0, GlobalContext *arg1) {
    s32 sp2C;
    u16 temp_t1;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_8094F7D0(arg0, arg1, (u8 *)4, (u8) 0x263) != 0) {
        if ((u8) arg0->mainCamera.paramData[56] == 0) {
            Math_Vec3f_Copy((Vec3f *) &arg0->state.input[0].press.errno, &D_80951D90);
            func_8013AED4((u16 *) &arg0->subCameras[0].paramData[12], 3U, 7U);
            func_8094E054((Actor *) arg0, arg1, 0);
        } else {
            func_8094E054((Actor *) arg0, arg1, 9);
            arg0->unk_179 = 0x10;
        }
        temp_t1 = arg0->unk_3A4 | 0x100;
        arg0->unk_3A4 = temp_t1;
        arg0->unk_3A4 = (u16) (temp_t1 | 0x200);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_8094FD88(GlobalContext *arg0, GlobalContext *arg1) {
    s32 sp2C;
    u16 temp_t9;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_8094F7D0(arg0, arg1, (u8 *)4, (u8) 0x290) != 0) {
        func_8094E054((Actor *) arg0, arg1, 0xB);
        func_8013AED4((u16 *) &arg0->subCameras[0].paramData[12], 3U, 7U);
        temp_t9 = arg0->unk_3A4 | 0x100;
        arg0->unk_3A4 = temp_t9;
        arg0->unk_3A4 = (u16) (temp_t9 | 0x200);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_8094FE10(GlobalContext *arg0, GlobalContext *arg1, u8 *arg2) {
    s32 sp2C;
    Actor *sp28;
    u16 temp_t4;

    sp2C = 0;
    sp28 = func_8094DEE0(arg0, arg1, 4U, 0x262);
    if ((func_8094F7D0(arg0, arg1, arg2, 4U, (s16) 0x234) != 0) && (sp28 != 0) && (sp28->update != 0)) {
        func_8094E054((Actor *) arg0, arg1, 0xB);
        func_8013AED4((u16 *) &arg0->subCameras[0].paramData[12], 3U, 7U);
        arg0->unk_268 = sp28;
        if ((gSaveContext.weekEventReg[86] & 0x20) == 0) {
            arg0->unk_3C8 = 2;
            arg0->unk_3CA = 2;
            arg0->unk_3CC = 8;
        }
        temp_t4 = arg0->unk_3A4 | 0x120;
        arg0->unk_3A4 = temp_t4;
        arg0->unk_3A4 = (u16) (temp_t4 | 0x200);
        sp2C = 1;
    }
    return sp2C;
}

s32 func_8094FF04(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    u8 sp4F;
    void *sp48;
    ? sp3C;
    ? sp30;
    s32 sp28;
    Path *temp_v0;
    s32 temp_a3;
    u16 temp_t2;
    void *temp_v0_2;
    s32 phi_v1;

    sp4F = (u8) arg0->params;
    arg0[1].projectedPos.y = NULL;
    temp_a3 = *(&D_80951A0C + (*arg2 * 4));
    phi_v1 = 0;
    if (temp_a3 >= 0) {
        sp28 = 0;
        arg0[1].projectedPos.y = func_8013BB34(arg1, sp4F, temp_a3);
        phi_v1 = sp28;
    }
    temp_v0 = arg0[1].projectedPos.y;
    if (temp_v0 != 0) {
        temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
        sp48 = temp_v0_2;
        Math_Vec3s_ToVec3f((Vec3f *) &sp3C, ((arg0[1].projectedPos.y->count * 6) + temp_v0_2) - 0xC);
        Math_Vec3s_ToVec3f((Vec3f *) &sp30, ((arg0[1].projectedPos.y->count * 6) + sp48) - 6);
        arg0->shape.shadowDraw = NULL;
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp3C, (Vec3f *) &sp30);
        if (arg0[1].isTargeted == 0) {
            Math_Vec3f_Copy(arg0 + 0x24, &D_80951D9C);
            func_8013AED4(arg0 + 0x3A4, 3U, 7U);
            arg0->unk_3C8 = 4;
            arg0->unk_3CA = 4;
            arg0[3].id = 8;
            func_8094E054(arg0, arg1, 0);
            func_8094E278(arg1);
        } else {
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp30);
            func_8094E054(arg0, arg1, 9);
            arg0->unk_179 = 0x10;
        }
        arg0->unk_400 = 0;
        temp_t2 = arg0->unk_3A4 | 0x100;
        arg0->unk_3A4 = temp_t2;
        arg0->unk_3A4 = (u16) (temp_t2 | 0x200);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80950088(Actor *arg0, GlobalContext *arg1, ? arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;
    u16 temp_t8;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80951DA8);
    temp_a2 = arg0 + 0x30;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80951DB4);
    Math_Vec3s_Copy(arg0 + 0xBC, sp20);
    func_8013AED4(arg0 + 0x3A4, 3U, 7U);
    temp_t8 = arg0->unk_3A4 | 0x2100;
    arg0->unk_3A4 = temp_t8;
    arg0->unk_3A4 = (u16) (temp_t8 | 0x200);
    func_8094E054(arg0, arg1, 0xC);
    return 1;
}

s32 func_80950120(Actor *arg0, GlobalContext *arg1, ? arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;
    u16 temp_t8;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80951DBC);
    temp_a2 = arg0 + 0x30;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80951DC8);
    Math_Vec3s_Copy(arg0 + 0xBC, sp20);
    func_8013AED4(arg0 + 0x3A4, 3U, 7U);
    temp_t8 = arg0->unk_3A4 | 0x900;
    arg0->unk_3A4 = temp_t8;
    arg0->unk_3A4 = (u16) (temp_t8 | 0x200);
    func_8094E054(arg0, arg1, 4);
    return 1;
}

s32 func_809501B8(Actor *arg0, GlobalContext *arg1, ? arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;
    u16 temp_t9;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80951DD0);
    temp_a2 = arg0 + 0x30;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80951DDC);
    Math_Vec3s_Copy(arg0 + 0xBC, sp20);
    arg0->targetMode = 6;
    func_8013AED4(arg0 + 0x3A4, 3U, 7U);
    temp_t9 = arg0->unk_3A4 | 0x1100;
    arg0->unk_3A4 = temp_t9;
    arg0->unk_3A4 = (u16) (temp_t9 | 0x200);
    arg0->unk_3C8 = 3;
    arg0->unk_3CA = 3;
    arg0[3].id = 8;
    arg0->targetMode = 6;
    arg0[2].next = (Actor *)0x42700000;
    func_8094E054(arg0, arg1, 0xA);
    return 1;
}

s32 func_80950280(EnGm *arg0, u8 *arg2) {
    u8 temp_t9;
    s32 phi_v1;

    arg0->actor.flags |= 1;
    arg0->actor.targetMode = 0;
    arg0->unk_3A4 = 0;
    arg0->unk_3C8 = 0;
    arg0->unk_3CA = 0;
    arg0->unk_3CC = 8;
    arg0->unk_3B4 = 40.0f;
    temp_t9 = *arg2;
    switch (temp_t9) {
    case 1:
        phi_v1 = func_8094FD88();
        break;
    case 2:
        phi_v1 = func_8094FE10();
        break;
    case 3:
        phi_v1 = func_8094FCC4();
        break;
    case 5:
        phi_v1 = func_8094FF04();
        break;
    case 6:
        phi_v1 = func_80950088();
        break;
    case 7:
        phi_v1 = func_809501B8();
        break;
    case 8:
        phi_v1 = func_80950120();
        break;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        phi_v1 = func_8094F904();
        break;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
        phi_v1 = func_8094FAC4();
        break;
    default:
        phi_v1 = 0;
        break;
    }
    return phi_v1;
}

? func_80950388(Actor *arg0, ? arg1) {
    ? sp2C;
    ? sp20;
    void *temp_v0;

    temp_v0 = arg0[1].child;
    if ((temp_v0 != 0) && (temp_v0->update != 0)) {
        Math_Vec3f_Copy((Vec3f *) &sp2C, temp_v0 + 0x24);
        Math_Vec3f_Copy((Vec3f *) &sp20, arg0 + 0x24);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp20, (Vec3f *) &sp2C);
    }
    return 0;
}

? func_809503F8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a2;

    temp_a2 = arg0 + 0x144;
    if (arg0->unk_3E8 == 9) {
        sp20 = temp_a2;
        if (func_801378B8(temp_a2, arg0[1].home.pos.z) != 0) {
            arg0->shape.shadowDraw = func_800B3FC0;
            func_8013AED4(arg0 + 0x3A4, 3U, 7U);
            func_8094E054(arg0, arg1, 0);
        } else {
            SkelAnime_LoadAnimationType5(arg1, arg0, temp_a2, 1.0f);
        }
    }
    return 0;
}

? func_80950490(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a2;
    s16 temp_v1;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_v0;
    s16 phi_v0;
    s16 phi_v0_2;

    if (((gSaveContext.weekEventReg[50] & 1) != 0) || ((gSaveContext.weekEventReg[51] & 0x80) != 0)) {
        if (arg0->unk_400 == 0) {
            arg0->unk_3C8 = 1;
            arg0->unk_3CA = 1;
            arg0[3].id = 8;
            arg0->unk_400 = (s32) 1;
            func_8094E054(arg0, arg1, 3);
        }
    } else {
        temp_v0 = arg0->unk_3E8;
        arg0->unk_400 = 0;
        if ((temp_v0 != 5) && (temp_v0 != 6)) {
            temp_a2 = arg0 + 0x144;
            if (temp_v0 == 9) {
                sp24 = temp_a2;
                if (func_801378B8(temp_a2, arg0[1].home.pos.z) != 0) {
                    arg0->shape.shadowDraw = func_800B3FC0;
                    func_8013AED4(arg0 + 0x3A4, 3U, 7U);
                    arg0->unk_3C8 = 4;
                    arg0->unk_3CA = 4;
                    arg0[3].id = 8;
                    func_8094E054(arg0, arg1, 0);
                    func_8094E278(arg1);
                } else {
                    SkelAnime_LoadAnimationType5(arg1, arg0, temp_a2, 1.0f);
                }
            } else {
                temp_v1 = arg0->unk_3DE;
                if (temp_v1 == 0) {
                    phi_v0 = 0;
                } else {
                    arg0->unk_3DE = (s16) (temp_v1 - 1);
                    phi_v0 = arg0->unk_3DE;
                }
                if (phi_v0 == 0) {
                    func_8094E054(arg0, arg1, *(&D_80951DE4 + ((bitwise s32) arg0[3].world.pos.y * 4)));
                    temp_t4 = (bitwise s32) arg0[3].world.pos.y + 1;
                    temp_hi = temp_t4 % 0xC;
                    arg0[3].world.pos.y = (bitwise f32) temp_t4;
                    arg0[3].world.pos.y = (bitwise f32) temp_hi;
                    phi_v0_2 = Rand_S16Offset(0x1E, 0x1E);
                    goto block_18;
                }
            }
        } else if (func_801378B8(arg0 + 0x144, arg0[1].home.pos.z) != 0) {
            func_8094E054(arg0, arg1, *(&D_80951DE4 + ((bitwise s32) arg0[3].world.pos.y * 4)));
            temp_t7 = (bitwise s32) arg0[3].world.pos.y + 1;
            temp_hi_2 = temp_t7 % 0xC;
            arg0[3].world.pos.y = (bitwise f32) temp_t7;
            arg0[3].world.pos.y = (bitwise f32) temp_hi_2;
            phi_v0_2 = Rand_S16Offset(0x1E, 0x1E);
block_18:
            arg0->unk_3DE = phi_v0_2;
        }
    }
    return 0;
}

? func_80950690(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    Actor *sp20;
    Actor *temp_v0;
    s16 temp_a0;
    s16 temp_a0_2;
    u8 temp_v1;
    s16 phi_v1;
    s16 phi_v1_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0[1].isTargeted;
    if (temp_v1 != 2) {
        if (temp_v1 != 7) {
            if (temp_v1 != 8) {

            }
        } else {
            temp_a0 = arg0->unk_3B8;
            arg0->unk_3D0 = (s16) (arg0->unk_3D0 + 0x3E0);
            if (temp_a0 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk_3B8 = (s16) (temp_a0 - 1);
                phi_v1 = arg0->unk_3B8;
            }
            if (phi_v1 == 0) {
                Audio_PlayActorSound2(arg0, 0x684AU);
                arg0->unk_3B8 = 0x1E;
            }
        }
    } else {
        sp20 = func_8094DEE0((GlobalContext *) arg0, arg1, 4U, 0x262);
        temp_v0 = func_8094DEE0((GlobalContext *) arg0, arg1, 4U, 0x234);
        if ((sp20 != 0) && (sp20->update != 0) && (temp_v0 != 0) && (temp_v0->update != 0) && ((sp24->unk_A6C & 0x40) == 0)) {
            temp_a0_2 = arg0->unk_3B8;
            if (temp_a0_2 == 0) {
                phi_v1_2 = 0;
            } else {
                arg0->unk_3B8 = (s16) (temp_a0_2 - 1);
                phi_v1_2 = arg0->unk_3B8;
            }
            if (phi_v1_2 == 0) {
                if (sp20 == arg0[1].child) {
                    arg0[1].child = temp_v0;
                } else {
                    arg0[1].child = sp20;
                }
                arg0->unk_3B8 = Rand_S16Offset(0x3C, 0x3C);
            }
        }
    }
    func_8013D9C8(arg1, (s16 *) &arg0[3].home.pos.y, arg0 + 0x3D2, 3);
    return 0;
}

? func_80950804(Actor *arg0, GlobalContext *arg1) {
    void *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    Vec3f *sp28;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;
    s16 phi_a0;

    sp44 = func_8094DF90(arg1, arg0[1].isTargeted);
    if ((func_8013AD6C(arg1) == 0) && (arg0->unk_3C4 != 0)) {
        if ((sp44 != 0) && (sp44->unk_138 != 0)) {
            if (((f32) arg0->unk_3BA / (f32) arg0->unk_3B8) <= 0.9f) {
                sp44->unk_1A7 = (s8) arg0[1].isDrawn;
            } else {
                sp44->unk_1A7 = 0;
            }
        }
        temp_v0 = arg0->unk_3BA;
        if ((s32) temp_v0 < 0) {
            arg0->unk_3BA = 0;
        } else {
            temp_v1 = arg0->unk_3B8;
            phi_a0 = temp_v0;
            if ((s32) temp_v1 < (s32) temp_v0) {
                phi_a0 = temp_v1;
            }
            arg0->unk_3BA = phi_a0;
        }
        temp_a0 = arg0 + 0x278;
        sp28 = temp_a0;
        temp_f0 = Math_Vec3f_DistXZ(temp_a0, arg0 + 0x284);
        sp38 = 0.0f;
        sp3C = 0.0f;
        sp40 = (f32) arg0->unk_3BA * (temp_f0 / (f32) arg0->unk_3B8);
        Lib_Vec3f_TranslateAndRotateY(temp_a0, arg0->world.rot.y, (Vec3f *) &sp38, arg0 + 0x24);
        temp_a0_2 = arg0 + 0x144;
        arg0->unk_3BA = (s16) (arg0->unk_3BA + arg0->unk_3C4);
        sp28 = temp_a0_2;
        if ((func_801378B8((SkelAnime *) temp_a0_2, 3.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_2, 13.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x2971U);
        }
    }
    return 0;
}

? func_8095097C(Actor *arg0, GlobalContext *arg1) {
    ? sp7C;
    ? sp70;
    ? sp64;
    f32 sp58;
    s32 sp54;
    s32 sp50;
    void *sp48;
    s32 *sp44;
    s32 *sp40;
    Vec3f *sp3C;
    Vec3f *temp_v1;
    s32 *temp_a2;
    s32 *temp_v0;
    void *temp_a0;
    void *temp_a1;
    Vec3f *phi_v1;

    sp54 = 0;
    sp50 = 0;
    func_8013AF00((void *) &sp7C, 3, arg0[1].projectedPos.y->count + 3);
    temp_v1 = arg0 + 0x238;
    phi_v1 = temp_v1;
    if ((arg0->unk_3A4 & 8) == 0) {
        temp_v0 = arg0 + 0x250;
        sp58.unk_0 = D_801D15B0.x;
        temp_a1 = arg0 + 0x244;
        (&sp58)[1] = D_801D15B0.y;
        temp_a2 = arg0 + 0x254;
        (&sp58)[2] = D_801D15B0.z;
        sp44 = temp_a2;
        sp48 = temp_a1;
        sp40 = temp_v0;
        func_8013B6B0(arg0[1].projectedPos.y, temp_a1, temp_a2, arg0[1].prevPos.x, arg0[1].uncullZoneDownward, temp_v0, (void *) &sp7C, (Vec3f *) &sp58, (s16) (s32) arg0->unk_3C4);
        func_8013B878(arg1, arg0[1].projectedPos.y, arg0[1].prevPos.y, (Vec3f *) &sp58);
        arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 8);
        arg0->world.pos.y = sp5C;
        phi_v1 = arg0 + 0x238;
    } else {
        sp58.unk_0 = temp_v1->x;
        (&sp58)[1] = temp_v1->y;
        (&sp58)[2] = temp_v1->z;
        sp40 = arg0 + 0x250;
        sp44 = arg0 + 0x254;
        sp48 = arg0 + 0x244;
    }
    arg0->world.pos.x = sp58;
    arg0->world.pos.z = sp60;
    sp3C = phi_v1;
    if (func_8013AD6C(arg1) != 0) {
        sp54 = arg0[1].prevPos.z;
        sp50 = arg0[1].prevPos.y;
        sp58.unk_0 = arg0->world.pos.x;
        (&sp58)[1] = arg0->world.pos.y;
        (&sp58)[2] = arg0->world.pos.z;
    }
    phi_v1->x = D_801D15B0.x;
    phi_v1->y = D_801D15B0.y;
    phi_v1->z = D_801D15B0.z;
    sp3C = phi_v1;
    if (func_8013B6B0(arg0[1].projectedPos.y, sp48, sp44, arg0[1].prevPos.x, arg0[1].uncullZoneDownward, sp40, (void *) &sp7C, phi_v1, (s16) (s32) arg0->unk_3C4) != 0) {
        arg0->unk_3A4 = (u16) (arg0->unk_3A4 | 0x10);
    } else {
        sp70.unk_0 = (f32) arg0->world.pos.x;
        sp70.unk_4 = (f32) arg0->world.pos.y;
        sp70.unk_8 = (f32) arg0->world.pos.z;
        sp64.unk_0 = (f32) phi_v1->x;
        sp64.unk_4 = (f32) phi_v1->y;
        sp64.unk_8 = (f32) phi_v1->z;
        sp3C = phi_v1;
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp70, (Vec3f *) &sp64);
    }
    sp3C = phi_v1;
    if (func_8013AD6C(arg1) != 0) {
        arg0[1].prevPos.z = sp54;
        arg0[1].prevPos.y = sp50;
        phi_v1->x = sp58.unk_0;
        phi_v1->y = (&sp58)[1];
        phi_v1->z = (&sp58)[2];
    } else {
        temp_a0 = arg0 + 0x144;
        sp48 = temp_a0;
        if ((func_801378B8((SkelAnime *) temp_a0, 3.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 13.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x2971U);
        }
    }
    return 0;
}

void func_80950C24(Actor *arg0) {
    u8 temp_t7;

    temp_t7 = arg0[1].isTargeted;
    switch (temp_t7) {
    case 1:
        func_80950388(arg0);
        break;
    case 2:
    case 6:
    case 7:
    case 8:
        func_80950690(arg0);
        break;
    case 3:
        func_809503F8(arg0);
        break;
    case 5:
        func_80950490(arg0);
        break;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        func_80950804(arg0);
        break;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
        func_8095097C(arg0);
        break;
    }
    Math_ApproachS(&arg0->shape.rot.y, arg0->world.rot.y, 3, 0x2AA8);
}

void func_80950CDC(EnGm *this, GlobalContext *globalCtx) {
    u8 sp20;

    this->unk_3C4 = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80951820, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk_258) && (func_80950280(this, (u8 *) globalCtx, &sp20) == 0))) {
        this->actor.shape.shadowDraw = NULL;
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    }
    this->unk_258 = sp20;
    this->unk_268 = func_8094F074(this, globalCtx);
    func_80950C24((Actor *) this, globalCtx);
}

void func_80950DB8(EnGm *this, GlobalContext *globalCtx) {
    ? sp40;
    ? sp34;
    Actor *temp_v0;
    Actor *temp_v0_3;
    u8 temp_v0_2;

    if (func_8010BF58((Actor *) this, globalCtx, this->unk_264, this->unk_3E4, &this->unk_25C) != 0) {
        func_8013AED4(&this->unk_3A4, 3U, 7U);
        temp_v0 = func_8094DEE0((GlobalContext *) this, globalCtx, 4U, 0x262);
        if ((this->unk_258 == 2) && (temp_v0 != 0) && (temp_v0->update != 0)) {
            this->unk_268 = temp_v0;
            this->unk_3B8 = Rand_S16Offset(0x3C, 0x3C);
        } else {
            this->unk_3A4 &= 0xFFDF;
        }
        this->unk_3A4 |= 0x200;
        this->unk_3C6 = 0x14;
        this->unk_25C = 0;
        this->actionFunc = func_80950CDC;
    } else {
        temp_v0_2 = this->unk_258;
        if ((temp_v0_2 != 1) && (temp_v0_2 != 2) && (temp_v0_2 != 3) && (temp_v0_2 != 5) && (temp_v0_2 != 7)) {
            temp_v0_3 = this->unk_268;
            if ((temp_v0_3 != 0) && (temp_v0_3->update != 0)) {
                Math_Vec3f_Copy((Vec3f *) &sp40, (Vec3f *) &temp_v0_3->world);
                Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &this->actor.world);
                Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8);
            }
        }
    }
    func_8013D9C8(globalCtx, &this->unk_3D8, &this->unk_3D2, 3);
}

void func_80950F2C(Actor *arg0, GlobalContext *arg1) {
    ? sp50;
    s32 sp4C;
    ? sp3C;
    ? sp30;
    s32 sp2C;
    Actor *temp_v0;
    CsCmdActorAction *temp_t4;
    GlobalContext *temp_a0;
    s32 temp_t0;
    s32 temp_v0_2;
    u16 temp_v1;

    sp50.unk_0 = (s32) D_80951E14.unk_0;
    sp50.unk_4 = (s32) D_80951E14.unk_4;
    temp_a0 = arg1;
    sp50.unk_C = (s32) D_80951E14.unk_C;
    sp50.unk_8 = (s32) D_80951E14.unk_8;
    temp_t0 = arg1->actorCtx.actorList[2].first;
    arg1 = arg1;
    sp4C = temp_t0;
    if (func_800EE29C(temp_a0, 0x20EU) != 0) {
        temp_t4 = arg1->csCtx.npcActions[func_800EE200(arg1, 0x20EU)];
        temp_v1 = temp_t4->unk0;
        if ((temp_v1 & 0xFF) != arg0[1].targetPriority) {
            if (temp_v1 == 3) {
                sp2C = (s32) temp_v1;
                Audio_PlayActorSound2(arg0, 0x2892U);
            }
            arg0[1].targetPriority = (u8) temp_t4->unk0;
            func_8094E054(arg0, arg1, (sp + ((u8) temp_t4->unk0 * 4))->unk_50);
        }
        if ((arg0[1].targetPriority == 3) && (temp_v0 = arg0[1].child, (temp_v0 != 0)) && (temp_v0->update != 0)) {
            Math_Vec3f_Copy((Vec3f *) &sp3C, sp4C + 0x24);
            Math_Vec3f_Copy((Vec3f *) &sp30, (Vec3f *) &arg0->world);
            temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &sp30, (Vec3f *) &sp3C);
            if ((temp_v0_2 / 0x16C) != ((s32) arg0->shape.rot.y / 0x16C)) {
                Math_ApproachS(&arg0->shape.rot.y, (s16) temp_v0_2, 3, 0x2AA8);
                arg0->unk_3A4 = (u16) (arg0->unk_3A4 & 0xFFDF);
                return;
            }
            arg0->shape.rot.y = (s16) temp_v0_2;
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void EnGm_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGm *this = (EnGm *) thisx;
    if (func_8094DEE0((GlobalContext *) this, globalCtx, 4U, 0xA4) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 22.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_060078B0, NULL, &this->unk_2B4, &this->unk_32C, 0x14);
    this->unk_3E8 = -1;
    func_8094E054((Actor *) this, globalCtx, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_190, (Actor *) this, &D_80951C5C);
    Collider_InitAndSetSphere(globalCtx, &this->unk_1DC, (Actor *) this, &D_80951C88);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80951CB4);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.room = -1;
    this->unk_260 = -0x80;
    this->unk_3FC = 0;
    this->unk_258 = 0;
    this->actionFunc = func_80950CDC;
    func_80950CDC(this, globalCtx);
}

void EnGm_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGm *this = (EnGm *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_190);
    Collider_DestroySphere(globalCtx, &this->unk_1DC);
}

void EnGm_Update(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v1;
    EnGm *this = (EnGm *) thisx;

    if (func_8094E0F8(this, globalCtx) == 0) {
        if ((func_8094EE84((Actor *) this, globalCtx) == 0) && (func_8094EFC4(this, globalCtx) != 0)) {
            func_80950F2C((Actor *) this, globalCtx);
            func_8094DFF8(this, globalCtx);
            func_8094E2D0(this);
            return;
        }
        this->actionFunc(this, globalCtx);
        func_8094F53C((GlobalContext *) this, globalCtx);
        if (this->unk_258 != 0) {
            func_8094DFF8(this, globalCtx);
            func_8094E2D0(this);
            func_8094F2E8(this);
            func_8013C964((Actor *) this, globalCtx, this->unk_3B4, 30.0f, 0, (s16) (this->unk_3A4 & 7));
            temp_v1 = this->unk_258;
            if ((temp_v1 != 3) && (temp_v1 != 5) && (temp_v1 != 8)) {
                Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
                Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
            }
            func_8094E1DC((Actor *) this, globalCtx);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

s32 func_809513AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp18;
    s32 temp_a2;
    void *temp_v1;
    s32 phi_a2;
    s32 phi_v0;

    temp_a2 = arg1;
    phi_a2 = temp_a2;
    if (temp_a2 == 0x10) {
        arg1 = temp_a2;
        func_8094F3D0(arg5, arg0, temp_a2, arg0);
        phi_a2 = arg1;
    }
    if (phi_a2 != 9) {
        if (phi_a2 != 0xA) {
            phi_v0 = 2;
            if (phi_a2 != 0xD) {
                phi_v0 = 9;
            }
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (((arg5->unk_3A4 & 0x2000) != 0) && (phi_v0 < 9)) {
        temp_v1 = arg5 + (phi_v0 * 2);
        sp18 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk_3D8) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk_3D2) * 200.0f);
    }
    return 0;
}

void func_809514BC(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp30;
    void *temp_a0;
    void *temp_v1;

    if ((ActorCutscene_GetCurrentIndex() == -1) && (arg1 == 0x10)) {
        SysMatrix_MultiplyVector3fByState(&D_80951E24, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
    temp_a0 = *arg0;
    if ((arg1 == 0xF) && ((arg4->unk_3A4 & 0x800) != 0)) {
        temp_v1 = temp_a0->unk_2B0;
        temp_a0->unk_2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk_4 = &D_06007528;
        temp_v1->unk_0 = 0xDE000000;
    }
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, (Vec3f *) &sp30);
        Math_Vec3f_ToVec3s(arg4 + 0x224, (Vec3f *) &sp30);
    }
}

void func_80951594(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk_3A4;
    phi_v1 = 0;
    if ((temp_v0 & 0x200) == 0) {
        if ((temp_v0 & 0x80) != 0) {
            phi_v1 = 1;
            phi_v0 = 1;
        } else {
            phi_v1 = 1;
            phi_v0 = 0;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 0x10) {
        func_8013AD9C((s16) (arg2->unk_3BC + arg2->unk_3C0 + 0x4000), (s16) (arg2->unk_3BE + arg2->unk_3C2 + arg2->shape.rot.y + 0x4000), arg2 + 0x290, arg2 + 0x2A8, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2[2].home.pos.x, arg2[2].home.pos.y, arg2[2].home.pos.z, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2[2].unk_22, 1U);
        SysMatrix_InsertXRotation_s(arg2[2].unk20, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_2AC, 1);
        SysMatrix_StatePush();
        return;
    }
    if (arg1 == 9) {
        func_8013AD9C((s16) (arg2->unk_3C0 + 0x4000), (s16) (arg2->unk_3C2 + arg2->shape.rot.y + 0x4000), arg2 + 0x29C, arg2 + 0x2AE, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk_29C, arg2->unk_2A0, arg2->unk_2A4, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk_2B0, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_2AE, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_2B2, 1);
        SysMatrix_StatePush();
    }
}

void EnGm_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    EnGm *this = (EnGm *) thisx;

    if ((this->unk_258 != 0) && ((s32) this->unk_262 >= 0)) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp38 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp38->polyOpa.p;
        sp38->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060020;
        sp30 = temp_v0;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80951E30 + (this->unk_3CE * 4)));
        func_801343C0(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_809513AC, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_809514BC, func_80951594, (Actor *) this);
    }
}
