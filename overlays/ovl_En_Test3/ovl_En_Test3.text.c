typedef struct EnTest3 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x3];
    /* 0x147 */ s8 unk_147;                         /* inferred */
    /* 0x148 */ s8 unk_148;                         /* inferred */
    /* 0x149 */ char pad_149[0x2];                  /* maybe part of unk_148[3]? */
    /* 0x14B */ s8 unk_14B;                         /* inferred */
    /* 0x14C */ char pad_14C[0x7];                  /* maybe part of unk_14B[8]? */
    /* 0x153 */ u8 unk_153;                         /* inferred */
    /* 0x154 */ char pad_154[0x1];
    /* 0x155 */ u8 unk_155;                         /* inferred */
    /* 0x156 */ char pad_156[0xA2];                 /* maybe part of unk_155[163]? */
    /* 0x1F8 */ s32 unk_1F8;                        /* inferred */
    /* 0x1FC */ char pad_1FC[0x40];                 /* maybe part of unk_1F8[17]? */
    /* 0x23C */ void *unk_23C;                      /* inferred */
    /* 0x240 */ char pad_240[0x154];                /* maybe part of unk_23C[86]? */
    /* 0x394 */ u8 unk_394;                         /* inferred */
    /* 0x395 */ char pad_395[0x183];                /* maybe part of unk_394[388]? */
    /* 0x518 */ ColliderCylinder unk_518;           /* inferred */
    /* 0x564 */ ColliderQuad unk_564;               /* inferred */
    /* 0x5E4 */ ColliderQuad unk_5E4;               /* inferred */
    /* 0x664 */ ColliderQuad unk_664;               /* inferred */
    /* 0x6E4 */ ColliderCylinder unk_6E4;           /* inferred */
    /* 0x730 */ char pad_730[0xC];
    /* 0x73C */ s32 unk_73C;                        /* inferred */
    /* 0x740 */ s32 unk_740;                        /* inferred */
    /* 0x744 */ s32 unk_744;                        /* inferred */
    /* 0x748 */ char pad_748[0x24];                 /* maybe part of unk_744[10]? */
    /* 0x76C */ void (*actionFunc)(EnTest3 *, GlobalContext *);
    /* 0x770 */ char pad_770[0x2F8];                /* maybe part of actionFunc[191]? */
    /* 0xA68 */ ? *unk_A68;                         /* inferred */
    /* 0xA6C */ char pad_A6C[0x14];                 /* maybe part of unk_A68[6]? */
    /* 0xA80 */ s32 unk_A80;                        /* inferred */
    /* 0xA84 */ char pad_A84[0x2];
    /* 0xA86 */ s8 unk_A86;                         /* inferred */
    /* 0xA87 */ char pad_A87[0x49];                 /* maybe part of unk_A86[74]? */
    /* 0xAD0 */ f32 unk_AD0;                        /* inferred */
    /* 0xAD4 */ char pad_AD4[0x2AC];                /* maybe part of unk_AD0[172]? */
    /* 0xD80 */ s32 unk_D80;                        /* inferred */
    /* 0xD84 */ f32 unk_D84;                        /* inferred */
    /* 0xD88 */ s8 unk_D88;                         /* inferred */
    /* 0xD89 */ char pad_D89[0x5];                  /* maybe part of unk_D88[6]? */
    /* 0xD8E */ s16 unk_D8E;                        /* inferred */
    /* 0xD90 */ Actor *unk_D90;                     /* inferred */
    /* 0xD94 */ ? (*unk_D94)(EnTest3 *, GlobalContext *); /* inferred */
    /* 0xD98 */ char pad_D98[0x20];                 /* maybe part of unk_D94[9]? */
} EnTest3;                                          /* size = 0xDB8 */

struct _mips2c_stack_EnTest3_Destroy {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTest3_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ Camera *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTest3_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A3E7E0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A3E80C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3E870 {};              /* size 0x0 */

struct _mips2c_stack_func_80A3E884 {};              /* size 0x0 */

struct _mips2c_stack_func_80A3E898 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x2];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3E960 {};              /* size 0x0 */

struct _mips2c_stack_func_80A3E97C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3E9DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3EA30 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3EAC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3EAF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3EB8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3EBFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3EC30 {};              /* size 0x0 */

struct _mips2c_stack_func_80A3EC44 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3ECEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3ED24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3F080 {};              /* size 0x0 */

struct _mips2c_stack_func_80A3F09C {};              /* size 0x0 */

struct _mips2c_stack_func_80A3F0B0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ActorContext *sp1C;                  /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3F114 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3F15C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ Vec3s *sp40;                         /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ Path *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A3F2BC {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A3F384 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x8];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ Actor *sp38;                         /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A3F4A4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3F534 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3F5A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3F62C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3F73C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ActorContext *sp20;                  /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A3F8D4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A3F9A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3F9E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3FA58 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x1];
    /* 0x41 */ s8 sp41;                             /* inferred */
    /* 0x42 */ char pad_42[0xE];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A3FBCC {};              /* size 0x0 */

struct _mips2c_stack_func_80A3FBE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3FDE4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A3FE20 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x1];
    /* 0x2D */ s8 sp2D;                             /* inferred */
    /* 0x2E */ char pad_2E[0x2];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A3FF10 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A3FFD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A40098 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A40230 {
    /* 0x000 */ char pad_0[0x38];
    /* 0x038 */ Vec3f *sp38;                        /* inferred */
    /* 0x03C */ void *sp3C;                         /* inferred */
    /* 0x040 */ Vec3f *sp40;                        /* inferred */
    /* 0x044 */ s32 *sp44;                          /* inferred */
    /* 0x048 */ s32 *sp48;                          /* inferred */
    /* 0x04C */ void *sp4C;                         /* inferred */
    /* 0x050 */ char pad_50[0x8];                   /* maybe part of sp4C[3]? */
    /* 0x058 */ s32 sp58;                           /* inferred */
    /* 0x05C */ f32 sp5C;                           /* inferred */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ char pad_64[0x4];
    /* 0x068 */ s32 sp68;                           /* inferred */
    /* 0x06C */ s32 sp6C;                           /* inferred */
    /* 0x070 */ f32 sp70;                           /* inferred */
    /* 0x074 */ f32 sp74;                           /* inferred */
    /* 0x078 */ f32 sp78;                           /* inferred */
    /* 0x07C */ ? sp7C;                             /* inferred */
    /* 0x07C */ char pad_7C[0xC];
    /* 0x088 */ ? sp88;                             /* inferred */
    /* 0x088 */ char pad_88[0xC];
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad_94[0x424];
};                                                  /* size = 0x4B8 */

struct _mips2c_stack_func_80A40678 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u8 sp2C;                             /* inferred */
    /* 0x2D */ char pad_2D[0xF];                    /* maybe part of sp2C[16]? */
    /* 0x3C */ s8 *sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A40824 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A4084C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A40908 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A409D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A40A6C {};              /* size 0x0 */

struct _mips2c_stack_func_80A40CF0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A40F34 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ MtxF *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x18];                   /* maybe part of sp1C[7]? */
    /* 0x38 */ s16 *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x14];
    /* 0x54 */ void *sp54;                          /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x48];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80A4129C {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x8];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x8];                    /* maybe part of sp54[3]? */
    /* 0x60 */ GraphicsContext *sp60;               /* inferred */
    /* 0x64 */ Gfx *sp64;                           /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

? func_80123BD4(EnTest3 *, ?);                      /* extern */
? func_80125318(Gfx **, Vec3f *);                   /* extern */
? func_80125500(Vec3s *, GlobalContext *, Gfx **, Vec3f *); /* extern */
? func_80126B8C(void **, Vec3s *);                  /* extern */
s32 func_80127438(void **, Vec3s *, u8, Vec3s *);   /* extern */
? func_80128640(void **, Vec3s *, Gfx *, Vec3s *);  /* extern */
? func_80128B74(void **, Vec3s *, s32, Vec3s *);    /* extern */
? func_80A3E7E0(EnTest3 *arg0, void (*arg1)(Actor *, GlobalContext *)); /* static */
s32 func_80A3E80C(EnTest3 *arg0, s32 arg2, s32);    /* static */
? func_80A3E870(s32 arg0, ? arg1);                  /* static */
? func_80A3E884(s32 arg0, ? arg1);                  /* static */
? func_80A3E898(void *arg0, GlobalContext *arg1);   /* static */
? func_80A3E960(void *arg0, ? arg1);                /* static */
? func_80A3E97C(void *arg0, GlobalContext *arg1);   /* static */
s32 func_80A3E9DC(Actor *arg0, Actor *arg1, GlobalContext *); /* static */
? func_80A3EA30(void *arg0, GlobalContext *arg1);   /* static */
? func_80A3EAC4(s32 arg0, s32 arg1);                /* static */
s32 func_80A3EAF8(void *arg0, GlobalContext *arg1); /* static */
? func_80A3EB8C(void *arg0, GlobalContext *arg1);   /* static */
? func_80A3EBFC(s32 arg0, s32 arg1);                /* static */
? func_80A3EC30(s32 arg0, ? arg1);                  /* static */
s32 func_80A3EC44(void *arg0, GlobalContext *arg1); /* static */
void func_80A3ECEC(Actor *arg0, GlobalContext *);   /* static */
s32 func_80A3ED24(Actor *arg0, GlobalContext *arg1); /* static */
? func_80A3F080(s32 arg0, ? arg1, ? arg2, ? arg3);  /* static */
? func_80A3F09C(void *arg0, ? arg1);                /* static */
void func_80A3F0B0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3F114(Actor *arg0, GlobalContext *arg1, s8 *); /* static */
s32 func_80A3F15C(Player *arg0, GlobalContext *arg1, ? *arg2, Player *); /* static */
Actor *func_80A3F2BC(GlobalContext *arg0, Actor *arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5); /* static */
s32 func_80A3F384(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
s32 func_80A3F4A4(GlobalContext *arg0, Actor *);    /* static */
void func_80A3F534(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3F5A4(Actor *arg0, GlobalContext *arg1); /* static */
? func_80A3F62C(Player *arg0, GlobalContext *arg1, ? *arg2, ? arg3); /* static */
? func_80A3F73C(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80A3F8D4(Player *arg0, GlobalContext *arg1, ? arg3); /* static */
? func_80A3F9A4(void *arg0, ? arg1);                /* static */
? func_80A3F9E4(void *arg0, void *arg3);            /* static */
? func_80A3FA58(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80A3FBCC(s32 arg0, ? arg1, ? arg2, ? arg3);  /* static */
? func_80A3FBE8(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80A3FDE4(void *arg0, ? arg1, ? arg2, ? arg3); /* static */
? func_80A3FE20(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80A3FF10(Player *arg0, GlobalContext *arg1, ? arg3); /* static */
? func_80A3FFD0(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80A40098(Actor *arg0, GlobalContext *arg1, ? *arg2, ? *arg3); /* static */
s32 func_80A40230(Actor *arg0, Actor *arg1);        /* static */
void func_80A40678(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A40824(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A4084C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A40908(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A409D4(EnTest3 *arg1, GlobalContext *); /* static */
void func_80A40A6C(s32 arg0, ? arg1);               /* static */
s32 func_80A40CF0(GlobalContext *arg1, s32 *arg2, Gfx **arg3, Vec3f *arg4, Vec3s *arg5); /* static */
void func_80A40F34(void **arg0, s32 arg1, Gfx **arg2, Gfx **arg3, Vec3s *arg5); /* static */
void func_80A4129C(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_0600CB60;
extern ? D_0600EDD0;
extern FlexSkeletonHeader D_0600F7EC;
extern ? D_0A0004A0;
static void D_80A41530;                             /* unable to generate initializer */
static ? D_80A4168C;                                /* unable to generate initializer */
static ? D_80A4169C;                                /* unable to generate initializer */
static ? D_80A416C0;                                /* unable to generate initializer */
static ? D_80A416E0;                                /* unable to generate initializer */
static void D_80A417BC;                             /* unable to generate initializer */
static void D_80A417E0;                             /* unable to generate initializer */
static ? D_80A417E8;                                /* unable to generate initializer */
static ? D_80A417EC;                                /* unable to generate initializer */
static ? D_80A41828;                                /* unable to generate initializer */
static ? D_80A41854;                                /* unable to generate initializer */
static ? D_80A41858;                                /* unable to generate initializer */
static ? D_80A4186C;                                /* unable to generate initializer */
static ? D_80A41870;                                /* unable to generate initializer */
static ? D_80A4187C;                                /* unable to generate initializer */
static ? D_80A41884;                                /* unable to generate initializer */
static ? D_80A41898;                                /* unable to generate initializer */
static ? D_80A4189C;                                /* unable to generate initializer */
static ? D_80A418A4;                                /* unable to generate initializer */
static ? D_80A418A8;                                /* unable to generate initializer */
static Vec3f D_80A418BC = {-420.0f, 210.0f, -162.0f};
static s32 D_80A418C8 = 0;
static Vec3f D_80A418CC = {1100.0f, -700.0f, 0.0f};
static ? D_80A418D8;                                /* unable to generate initializer */
static ? D_80A418F8;                                /* unable to generate initializer */
static ? D_80A41908;                                /* unable to generate initializer */
static ? D_80A41909;                                /* unable to generate initializer */
static s32 D_80A41D20;
static s32 D_80A41D24;
static ? D_80A41D28;
static f32 D_80A41D40;
static s16 D_80A41D44;
static s32 D_80A41D48;
static Vec3f D_80A41D50;
static s32 D_80A41D5C;
static s32 D_80A41D60;
static s32 D_80A41D64;
static s32 D_80A41D68;
static Vec3f *D_80A41D6C;

? func_80A3E7E0(EnTest3 *arg0, void (*arg1)(Actor *, GlobalContext *)) {
    if (arg1 == arg0->unk_D94) {
        return 0;
    }
    arg0->unk_D94 = arg1;
    arg0->unk_D8A = 0;
    arg0->unk_D88 = 0;
    return 1;
}

s32 func_80A3E80C(EnTest3 *arg0, s32 arg2) {
    void *sp18;
    void (*temp_a1)(Actor *, GlobalContext *);
    void *temp_v0;

    temp_v0 = (arg2 * 8) + &D_80A4168C;
    sp18 = temp_v0;
    temp_v0->unk_0(arg0);
    temp_a1 = temp_v0->unk_4;
    if (temp_a1 == 0) {
        return 0;
    }
    func_80A3E7E0(arg0, temp_a1);
    return 1;
}

? func_80A3E870(s32 arg0, ? arg1) {
    return 1;
}

? func_80A3E884(s32 arg0, ? arg1) {
    return 0;
}

? func_80A3E898(void *arg0, GlobalContext *arg1) {
    u16 sp1E;
    s32 sp18;
    void *temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk_D78;
    if ((temp_v0->unk_0 == 4) && ((gSaveContext.weekEventReg[51] & 8) != 0)) {
        sp1E = temp_v0->unk_2;
        func_80151BB4(arg1, 2U);
    }
    phi_v0 = (s32) temp_v0->unk_2;
    if ((s32) temp_v0->unk_2 == 0xFFFF) {
        sp18 = (s32) temp_v0->unk_2;
        func_801477B4(arg1);
        goto block_7;
    }
    if ((s32) temp_v0->unk_2 != 0) {
        sp18 = (s32) temp_v0->unk_2;
        func_80151938(arg1, (s32) temp_v0->unk_2 & 0xFFFF);
block_7:
        phi_v0 = sp18;
    }
    if (phi_v0 == 0x296B) {
        SkelAnime_ChangeLinkAnimPlaybackStop(arg1, arg0 + 0x240, (LinkAnimationHeader *) &D_0400CF88, 0.6666667f);
    }
    return 0;
}

? func_80A3E960(void *arg0, ? arg1) {
    arg0->unk_D8C = (u8) arg0->unk_D78->unk_1;
    return 0;
}

? func_80A3E97C(void *arg0, GlobalContext *arg1) {
    u8 temp_t6;
    u8 temp_v0;
    s32 phi_v1;
    ? phi_v0;

    temp_v0 = arg0->unk_D8C;
    temp_t6 = temp_v0 - 1;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_D8C = temp_t6;
        phi_v1 = temp_t6 & 0xFF;
    }
    phi_v0 = 0;
    if (phi_v1 == 0) {
        func_801518B0(arg1, arg0->unk_D78->unk_2, NULL);
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80A3E9DC(Actor *arg0, Actor *arg1) {
    s8 temp_a0;

    temp_a0 = arg0->unk_D8D;
    arg0 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->unk_D8D, arg0);
        return 1;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->unk_D8D);
    return 0;
}

? func_80A3EA30(void *arg0, GlobalContext *arg1) {
    Actor *temp_v0_2;
    void *temp_v0;
    void *phi_v0;

    temp_v0 = arg0->unk_D78;
    phi_v0 = temp_v0;
    if (temp_v0->unk_2 == 0x145F) {
        temp_v0_2 = func_ActorCategoryIterateById(arg1, NULL, 1, 0x25C);
        if (temp_v0_2 != 0) {
            arg0->unk_730 = temp_v0_2;
        }
        phi_v0 = arg0->unk_D78;
    }
    if (phi_v0->unk_1 != 0) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay((s16) arg0->unk_D8D);
        arg1->msgCtx.unk11F22 = 0x44;
    }
    return 0;
}

? func_80A3EAC4(s32 arg0, s32 arg1) {
    if (func_80152498(arg1 + 0x4908) == 6) {
        return 1;
    }
    return 0;
}

s32 func_80A3EAF8(void *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (arg0->unk_D78->unk_2 == 0x145F) {
            ActorCutscene_Stop((s16) arg0->unk_D8D);
            arg0->unk_D8D = 0x7C;
            ActorCutscene_SetIntentToPlay((s16) arg0->unk_D8D);
            arg0->unk_730 = (Actor *) arg1->actorCtx.actorList[2].first;
        }
        return 1;
    }
    return 0;
}

? func_80A3EB8C(void *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    if (func_80A3EAF8(arg0, arg1) != 0) {
        temp_v0 = func_ActorCategoryIterateById(arg1, NULL, 7, 0x233);
        if (temp_v0 != 0) {
            arg0->unk_730 = temp_v0;
        }
        arg1->msgCtx.unk11F22 = 0x44;
        return 1;
    }
    return 0;
}

? func_80A3EBFC(s32 arg0, s32 arg1) {
    if (func_80152498(arg1 + 0x4908) == 2) {
        return 1;
    }
    return 0;
}

? func_80A3EC30(s32 arg0, ? arg1) {
    return 0;
}

s32 func_80A3EC44(void *arg0, GlobalContext *arg1) {
    void *sp18;
    void *temp_v0;

    if ((func_80152498(arg1 + 0x4908) == 4) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg1 + 0x10000;
        if (arg1->msgCtx.choiceIndex != 0) {
            sp18 = temp_v0;
            func_8019F230();
        } else {
            sp18 = temp_v0;
            func_8019F208();
        }
        if (sp18->unk_6929 != 0) {
            return 1;
        }
        return arg0->unk_D78->unk_1 + 1;
    }
    return 0;
}

void func_80A3ECEC(Actor *arg0) {
    *(&D_80A4169C + (*arg0->unk_D78 * 4))();
}

s32 func_80A3ED24(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = *(&D_80A416C0 + (*arg0->unk_D78 * 4))(arg1);
    if (temp_v0 != 0) {
        arg0->unk_D78 = (u8 *) (arg0->unk_D78 + (temp_v0 * 4));
        return func_80A3ECEC(arg0, arg1);
    }
    return 0;
}

void EnTest3_Init(Actor *thisx, GlobalContext *globalCtx) {
    Camera *sp2C;
    void *sp28;
    Actor *temp_t4;
    Camera *temp_v0;
    EnTest3 *this = (EnTest3 *) thisx;

    if (D_80A41D24 != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    D_80A41D24 = 1;
    this->actor.room = -1;
    this->unk_A86 = -1;
    this->unk_14B = 4;
    this->unk_A68 = &D_80A416E0;
    this->unk_147 = 0;
    this->unk_148 = 0;
    func_80123BD4(this, 3);
    sp28 = globalCtx + 0x18000;
    globalCtx->playerInit((Player *) this, globalCtx, &D_0600F7EC);
    Effect_Add(globalCtx, &this->unk_73C, 2, 0U, (u8) 0, &D_80A417BC);
    Effect_Add(globalCtx, &this->unk_740, 2, 0U, (u8) 0, &D_80A417BC);
    Effect_Add(globalCtx, &this->unk_744, 4, 0U, (u8) 0, &D_80A417E0);
    this->unk_23C = zelda_malloc(0x3800U);
    sp28->unk_780(this, globalCtx);
    temp_t4 = globalCtx->actorCtx.actorList[2].first;
    this->unk_D90 = temp_t4;
    this->unk_1F8 = temp_t4->unk_1F8;
    this->unk_A80 = temp_t4->unk_A80;
    if ((((s32) gSaveContext.day % 5) != 3) || ((gSaveContext.weekEventReg[33] & 8) != 0) || ((gSaveContext.weekEventReg[51] & 8) == 0)) {
        this->unk_153 = 5;
    }
    this->unk_155 = this->unk_153;
    if (globalCtx->sceneNum == 0x4F) {
        this->unk_D8E = func_801694DC(globalCtx);
        temp_v0 = Play_GetCamera(globalCtx, this->unk_D8E);
        sp2C = temp_v0;
        func_800DE0EC(temp_v0, (Actor *) this);
        Camera_SetFlags(sp2C, 0x41);
        func_80169590(globalCtx, this->unk_D8E, 1);
    }
    this->actor.colChkInfo.cylRadius = 0x14;
    this->actor.colChkInfo.cylHeight = 0x3C;
    this->actor.colChkInfo.health = 0xFF;
    if ((((s32) this->actor.params >> 5) & 0xF) == 0) {
        func_80A3E7E0(this, func_80A40824);
        return;
    }
    func_80A3E7E0(this, func_80A40678);
}

void EnTest3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTest3 *this = (EnTest3 *) thisx;
    Effect_Destroy(globalCtx, this->unk_73C);
    Effect_Destroy(globalCtx, this->unk_740);
    Effect_Destroy(globalCtx, this->unk_744);
    Collider_DestroyCylinder(globalCtx, &this->unk_518);
    Collider_DestroyCylinder(globalCtx, &this->unk_6E4);
    Collider_DestroyQuad(globalCtx, &this->unk_564);
    Collider_DestroyQuad(globalCtx, &this->unk_5E4);
    Collider_DestroyQuad(globalCtx, &this->unk_664);
    zelda_free(this->unk_23C);
    func_800FE498();
}

? func_80A3F080(s32 arg0, ? arg1, ? arg2, ? arg3) {
    return 1;
}

? func_80A3F09C(void *arg0, ? arg1) {
    arg0->unk_13C = 0;
    return 1;
}

void func_80A3F0B0(Actor *arg0, GlobalContext *arg1) {
    ActorContext *sp1C;
    Actor *temp_v0;
    ActorContext *temp_a1;

    temp_a1 = arg1 + 0x1CA0;
    sp1C = temp_a1;
    func_800BC154(arg1, temp_a1, arg0->unk_D90, 2U);
    func_800BC154(arg1, temp_a1, arg0, 4U);
    temp_v0 = arg0->unk_D90;
    temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C & ~0x20);
}

void func_80A3F114(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_394 != 0) {
        arg1->startPlayerCutscene(arg1, arg0, 6, arg0);
    }
}

s32 func_80A3F15C(Player *arg0, GlobalContext *arg1, ? *arg2) {
    Path *sp48;
    Vec3s *sp40;
    ? sp34;
    ? sp28;
    Vec3f *sp20;
    Path *temp_v0_2;
    Vec3f *temp_a0;
    Vec3s *temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    void *temp_v0_3;
    s32 phi_v1;
    Vec3s *phi_a2;
    Vec3s *phi_a1;

    temp_v0 = (s32) arg2->unk_1 >> 4;
    phi_v1 = temp_v0;
    if (temp_v0 < 0) {
        phi_v1 = -temp_v0;
    }
    temp_a2 = phi_v1 - 1;
    if (temp_a2 >= 0) {
        temp_v0_2 = func_8013BB34(arg1, arg0->actor.params & 0x1F & 0xFF, temp_a2);
        sp48 = temp_v0_2;
        temp_v0_3 = Lib_SegmentedToVirtual((void *) temp_v0_2->points);
        phi_a1 = (Vec3s *) temp_v0_3;
        if (((s32) arg2->unk_1 >> 4) > 0) {
            phi_a2 = temp_v0_3 + 6;
        } else {
            temp_a1 = (temp_v0_3 + (sp48->count * 6)) - 6;
            phi_a2 = temp_a1 - 6;
            phi_a1 = temp_a1;
        }
        sp40 = phi_a2;
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, phi_a1);
        Math_Vec3s_ToVec3f((Vec3f *) &sp28, sp40);
        temp_a0 = arg0 + 0x24;
        sp20 = temp_a0;
        if (Math_Vec3f_DistXZ(temp_a0, (Vec3f *) &sp34) > 10.0f) {
            Math_Vec3f_Copy(temp_a0, (Vec3f *) &sp34);
            Math_Vec3f_Copy(arg0 + 8, (Vec3f *) &sp34);
            Math_Vec3f_Copy(arg0 + 0x108, (Vec3f *) &sp34);
            arg0->currentYaw = Math_Vec3f_Yaw(sp20, (Vec3f *) &sp28);
            if (((s32) arg2->unk_1 >> 4) < 0) {
                arg0->currentYaw += 0x8000;
            }
            arg0->actor.shape.rot.y = arg0->currentYaw;
            return 1;
        }
        goto block_10;
    }
block_10:
    return 0;
}

Actor *func_80A3F2BC(GlobalContext *arg0, Actor *arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = (arg0 + (arg3 * 0xC))->unk_1CB4;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_1:
        if ((arg2 == phi_s0->id) && (fabsf(arg1->world.pos.y - phi_s0->world.pos.y) < arg5) && (Actor_XZDistanceBetweenActors(arg1, phi_s0) < arg4)) {
            return phi_s0;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_6;
        }
        goto loop_1;
    }
block_6:
    return NULL;
}

s32 func_80A3F384(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    Actor *sp38;
    ? sp2C;
    Actor *temp_v0;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v1;
    temp_v0 = func_80A3F2BC(arg1, arg0, 5, 0xA, 55.0f, 20.0f);
    if ((temp_v0 != 0) && (temp_v0->unk_1A1 == 0) && ((temp_v1->unk_37C == 0) || (temp_v0 != temp_v1->unk_380)) && (sp38 = temp_v0, (Actor_IsActorFacingActor(arg0, temp_v0, 0x3000) != 0))) {
        Actor_CalcOffsetOrientedToDrawRotation(sp38, (Vec3f *) &sp2C, (Vec3f *) &arg0->world);
        arg0->unk_37C = 1;
        if (sp34 >= 0.0f) {
            arg0->unk_37D = (s8) (s32) 1.0f;
        } else {
            arg0->unk_37D = (s8) (s32) -1.0f;
        }
        arg0->unk_A86 = -1;
        arg0->unk_380 = sp38;
        return 1;
    }
    return 0;
}

s32 func_80A3F4A4(GlobalContext *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 phi_v0;

    temp_v0 = Player_GetMask(arg0) == 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        temp_v0_2 = Player_GetMask(arg0) == 4;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            temp_v0_3 = Player_GetMask(arg0) == 9;
            phi_v0 = temp_v0_3;
            if (temp_v0_3 == 0) {
                temp_v0_4 = Player_GetMask(arg0) == 5;
                phi_v0 = temp_v0_4;
                if (temp_v0_4 == 0) {
                    phi_v0 = Player_GetMask(arg0) == 2;
                }
            }
        }
    }
    return phi_v0;
}

void func_80A3F534(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;

    temp_a2 = arg0;
    arg0 = temp_a2;
    if (func_80A3F4A4(arg1, temp_a2) == 0) {
        arg0->unk_D78 = &D_80A4187C;
    } else if ((gSaveContext.weekEventReg[51] & 8) != 0) {
        arg0->unk_D78 = &D_80A41870;
    } else {
        arg0->unk_D78 = &D_80A41858;
    }
    arg0->unk_D8D = (s8) arg0->cutscene;
}

void func_80A3F5A4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    phi_a2 = temp_a2;
    if (((gSaveContext.weekEventReg[51] & 8) == 0) || (arg0 = temp_a2, phi_a2 = arg0, phi_a2_2 = arg0, (func_80A3F4A4(arg1, temp_a2) == 0))) {
        phi_a2->unk_D78 = &D_80A4189C;
        D_80A41D5C = 0;
        phi_a2_2 = phi_a2;
    } else if (D_80A41D5C != 0) {
        arg0->unk_D78 = &D_80A41898;
    } else {
        arg0->unk_D78 = &D_80A41884;
    }
    phi_a2_2->unk_D8D = (s8) phi_a2_2->cutscene;
}

? func_80A3F62C(Player *arg0, GlobalContext *arg1, ? *arg2, ? arg3) {
    Player *temp_a0;
    Player *temp_a3;
    Player *temp_a3_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 phi_v1;
    s32 phi_v1_2;
    Player *phi_a3;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    temp_a3_2 = arg0;
    phi_a3 = temp_a3_2;
    if ((((func_80A3F15C(temp_a0, arg1, arg2, temp_a3) != 0) || ((s32) temp_a3_2->unk_D88 >= 8)) && ((temp_v1 = (s32) (arg2->unk_1 << 0x1C) >> 0x1C, phi_v1 = temp_v1, (temp_v1 == 1)) || (temp_v1 == 2))) || (temp_v1_2 = (s32) (arg2->unk_1 << 0x1C) >> 0x1C, phi_v1 = temp_v1_2, phi_v1_2 = temp_v1_2, (temp_v1_2 == 4))) {
        if (phi_v1 == 4) {
            temp_a3_2->actor.home.rot.y = 0x7FFF;
        } else {
            temp_a3_2->actor.home.rot.y = temp_a3_2->actor.shape.rot.y + 0x8000;
        }
        temp_a3_2->stateFlags2 |= 0x40000;
        arg0 = temp_a3_2;
        arg1->startPlayerCutscene(arg1, temp_a3_2, -1);
        phi_v1_2 = (s32) (arg2->unk_1 << 0x1C) >> 0x1C;
        phi_a3 = arg0;
    }
    phi_a3->unk_D78 = (s32) *(&D_80A418A8 + (phi_v1_2 * 4));
    return 1;
}

? func_80A3F73C(Actor *arg0, GlobalContext *arg1) {
    ActorContext *sp20;
    Actor *temp_v0;
    ActorContext *temp_a1;
    s8 temp_v1_2;
    u8 temp_v1;

    if (func_800B84D0(arg0, arg1) != 0) {
        func_80A3E7E0((EnTest3 *) arg0, func_80A4084C);
        arg0->unk_A70 = (s32) (arg0->unk_A70 & 0xFFFBFFFF);
        arg0->unk_730 = (Actor *) arg1->actorCtx.actorList[2].first;
        D_80A41D5C = 1;
        if ((arg0->unk_D78->unk_0 == 4) && ((gSaveContext.weekEventReg[51] & 8) != 0)) {
            func_80151BB4(arg1, 2U);
        }
    } else {
        temp_v1 = arg1->actorCtx.unk5;
        if ((temp_v1 & 0x10) != 0) {
            arg1->actorCtx.unk5 = temp_v1 & 0xFFEF;
            temp_v0 = arg0->unk_D90;
            temp_a1 = &arg1->actorCtx;
            arg0->unk_A70 = (s32) (arg0->unk_A70 & 0xFFFBFFFF);
            temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C | 0x20);
            sp20 = temp_a1;
            func_800BC154(arg1, temp_a1, arg0->unk_D90, 4U);
            func_800BC154(arg1, temp_a1, arg0, 2U);
            ActorCutscene_SetReturnCamera(arg0->unk_D8E);
            arg1->startPlayerCutscene(arg1, (Player *) arg0, 7);
        }
        func_800B863C(arg0, arg1);
        temp_v1_2 = arg0->unk_D88;
        if (temp_v1_2 == 3) {
            func_80A3F534(arg0, arg1);
        } else if (temp_v1_2 == 5) {
            func_80A3F5A4(arg0, arg1);
        }
        arg0->flags |= 9;
        arg0->textId = arg0->unk_D78->unk_2;
    }
    return 0;
}

? func_80A3F8D4(Player *arg0, GlobalContext *arg1, ? arg3) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *phi_a1;

    func_80A3F15C(arg0, arg1);
    temp_v0 = func_80A3F2BC(arg1, (Actor *) arg0, 0x1F2, 6, 100.0f, 20.0f);
    phi_a1 = temp_v0;
    if ((temp_v0 != 0) || (temp_v0_2 = func_80A3F2BC(arg1, (Actor *) arg0, 0x1D5, 4, 100.0f, 20.0f), phi_a1 = temp_v0_2, (temp_v0_2 != 0))) {
        arg0->actor.home.rot.y = Actor_YawBetweenActors((Actor *) arg0, phi_a1);
    }
    arg1->startPlayerCutscene(arg1, arg0, 0x61);
    return 1;
}

? func_80A3F9A4(void *arg0, ? arg1) {
    s16 temp_a1;
    void *temp_a3;

    temp_a3 = arg0;
    temp_a1 = temp_a3->unk_16;
    arg0 = temp_a3;
    Math_ScaledStepToS(temp_a3 + 0xBE, temp_a1, 0x320);
    arg0->unk_AD4 = (s16) arg0->unk_BE;
    return 0;
}

? func_80A3F9E4(void *arg0, void *arg3) {
    s32 temp_t8;

    temp_t8 = (gSaveContext.time - 0x3FFC) & 0xFFFF;
    arg3->unk_4 = temp_t8;
    arg3->unk_8 = (s32) ((temp_t8 + 0x46) & 0xFFFF);
    func_80A40098();
    if (arg0->unk_98 < 300.0f) {
        arg0->unk_D8A = -1;
        return 1;
    }
    arg0->unk_D8A = 0x78;
    return 1;
}

? func_80A3FA58(Actor *arg0, GlobalContext *arg1) {
    s8 sp41;
    ? sp40;
    s32 sp38;
    s32 sp34;
    ? sp30;
    s32 sp2C;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_t0;
    s32 temp_v0;
    s32 phi_t0;
    s32 phi_t0_2;

    if ((arg1->actorCtx.actorList[2].first->unk_A6C & 0x40) != 0) {

    } else {
        temp_v1 = arg0->unk_D8A;
        temp_t0 = func_80A40230(arg0) != 0;
        phi_t0 = temp_t0;
        if ((s32) temp_v1 > 0) {
            arg0->unk_D8A = (s16) (temp_v1 - 1);
            if (temp_t0 != 0) {
                phi_t0 = 0;
                if (arg0->xzDistToPlayer < 200.0f) {
                    phi_t0 = 1;
                }
            }
            if ((phi_t0 != 0) || (temp_v1_2 = arg0->unk_D8A, ((s32) temp_v1_2 <= 0))) {
                sp2C = phi_t0;
                func_80A3F114(arg0, arg1);
                sp41 = (sp41 & 0xFF0F) | 0x50;
                temp_v0 = (gSaveContext.time - 0x3FFC) & 0xFFFF;
                if (phi_t0 != 0) {
                    phi_t0_2 = 0x50;
                } else {
                    phi_t0_2 = 0x8C;
                }
                sp38 = (phi_t0_2 + temp_v0) & 0xFFFF;
                sp34 = temp_v0;
                func_80A40098(arg0, arg1, &sp40, &sp30);
                arg0->unk_D8A = -0x28;
            } else if (temp_v1_2 == 0x5A) {
                arg1->startPlayerCutscene(arg1, arg0, 0x15);
            }
        } else {
            arg0->unk_D8A = (s16) (temp_v1 + 1);
            if (arg0->unk_D8A == 0) {
                gSaveContext.weekEventReg[51] &= 0xFB;
                arg0->unk_D88 = 0;
            }
        }
    }
    return 0;
}

? func_80A3FBCC(s32 arg0, ? arg1, ? arg2, ? arg3) {
    return 1;
}

? func_80A3FBE8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0;
    s8 temp_a0_2;
    u16 temp_a0_3;
    u8 temp_v0_2;
    s32 phi_t7;

    temp_a2 = arg0;
    temp_v0 = D_80A41D20;
    if (temp_v0 == 0) {
        arg0 = temp_a2;
        if (func_801690CC(arg1) == 0) {
            D_80A41D20 = 1;
            arg0->unk_D78 = &D_80A418A4;
            arg0->unk_D8D = (s8) arg0->cutscene;
            arg0->textId = D_80A418A4.unk_2;
        }
    } else if (temp_v0 == 1) {
        temp_a0 = temp_a2;
        if ((s32) temp_a2->unk_D8D >= 0) {
            arg0 = temp_a2;
            if (func_80A3E9DC(temp_a0, temp_a2) != 0) {
                arg0->unk_D8D = -1;
                func_800FE484();
            }
        } else {
            temp_v0_2 = arg1->actorCtx.unk5;
            if (((temp_v0_2 & 0x40) != 0) || ((temp_v0_2 & 0x20) != 0)) {
                arg0 = temp_a2;
                arg0->unk_D8D = ActorCutscene_GetAdditionalCutscene((s16) temp_a2->cutscene);
                gSaveContext.weekEventReg[90] |= 2;
                if ((arg1->actorCtx.unk5 & 0x20) != 0) {
                    temp_a0_2 = arg0->unk_D8D;
                    arg0 = arg0;
                    arg0->unk_D8D = ActorCutscene_GetAdditionalCutscene((s16) temp_a0_2);
                }
                func_801A89A8(0x100100FF);
                phi_t7 = 2;
                goto block_19;
            }
            func_80A3F73C(temp_a2, (GlobalContext *) temp_a2);
        }
    } else if ((temp_v0 == 2) && (func_80A3E9DC(temp_a2, temp_a2) != 0)) {
        arg1 = arg1;
        ActorCutscene_SetReturnCamera(0);
        func_800FE498();
        temp_a0_3 = gSaveContext.time;
        if ((s32) temp_a0_3 >= 0x4001) {
            arg1 = arg1;
            func_800FE658(fabsf((f32) (s16) ((s32) temp_a0_3 * -1)) / 45.511112f);
        }
        phi_t7 = 3;
        if ((arg1->actorCtx.unk5 & 0x40) != 0) {
            gSaveContext.weekEventReg[51] |= 0x20;
            gSaveContext.weekEventReg[90] &= 0xFD;
        }
block_19:
        D_80A41D20 = phi_t7;
    }
    return 0;
}

? func_80A3FDE4(void *arg0, ? arg1, ? arg2, ? arg3) {
    arg0->unk_D8D = ActorCutscene_GetAdditionalCutscene((s16) arg0->unk_38);
    return 1;
}

? func_80A3FE20(Actor *arg0, GlobalContext *arg1) {
    s8 sp2D;
    ? sp2C;
    s32 sp24;
    s32 sp20;
    ? sp1C;
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_a2 = arg0;
    temp_v0 = D_80A41D64;
    temp_a0 = temp_a2;
    if (temp_v0 == 0) {
        arg0 = temp_a2;
        if (func_80A3E9DC(temp_a0, temp_a2) != 0) {
            temp_v0_2 = (gSaveContext.time - 0x3FFC) & 0xFFFF;
            sp2D = (sp2D & 0xFF0F) | 0x20;
            sp24 = (temp_v0_2 + 0x3E8) & 0xFFFF;
            sp20 = temp_v0_2;
            func_80A40098(arg0, arg1, &sp2C, &sp1C);
            D_80A41D64 = 1;
        }
    } else if (temp_v0 == 1) {
        func_80A40230(temp_a2, temp_a2);
    } else if (temp_v0 == 2) {
        ActorCutscene_Stop((s16) temp_a2->unk_D8D);
        gSaveContext.weekEventReg[90] |= 2;
        D_80A41D64 = 3;
    }
    return 0;
}

? func_80A3FF10(Player *arg0, GlobalContext *arg1, ? arg3) {
    if ((gSaveContext.weekEventReg[51] & 0x40) != 0) {
        D_80A41D68 = 2;
        Math_Vec3f_Copy(arg0 + 0x24, &D_80A418BC);
        Math_Vec3f_Copy(arg0 + 8, &D_80A418BC);
        arg0->actor.home.rot.y = -0x2AAB;
        arg0->actor.shape.rot.y = -0x2AAB;
        arg0->currentYaw = -0x2AAB;
    } else {
        func_80A3F15C(arg0, arg1);
        arg0->unk_D8D = (s8) arg0->actor.cutscene;
        if (arg1->roomCtx.currRoom.num == 2) {
            arg0->unk_D8D = ActorCutscene_GetAdditionalCutscene((s16) arg0->unk_D8D);
        }
    }
    return 1;
}

? func_80A3FFD0(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s32 temp_v0;

    temp_v0 = D_80A41D68;
    temp_a0 = arg1;
    if (temp_v0 == 0) {
        arg1 = arg1;
        if ((func_801690CC(temp_a0) == 0) && (arg1->roomCtx.currRoom.num == 2)) {
            D_80A41D68 = 1;
        }
    } else if (temp_v0 == 1) {
        if (func_80A3E9DC(arg0, (Actor *) arg1, arg1) != 0) {
            D_80A41D68 = 2;
        }
    } else {
        gSaveContext.weekEventReg[51] |= 0x40;
        arg1->startPlayerCutscene(arg1, (Player *) arg0, 0x6E);
    }
    return 0;
}

? func_80A40098(Player *arg0, GlobalContext *arg1, ? *arg2, ? *arg3) {
    u16 sp26;
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v1;
    s8 temp_v1_2;
    s32 phi_v0;
    s32 phi_a0;

    sp26 = gSaveContext.time - 0x3FFC;
    func_80A3F15C(arg0, arg1, arg2);
    temp_v1 = (s32) arg2->unk_1 >> 4;
    phi_v0 = temp_v1;
    if (temp_v1 < 0) {
        phi_v0 = -temp_v1;
    }
    temp_v1_2 = arg0->unk_D88;
    arg0->unk_D7C = func_8013BB34(arg1, arg0->actor.params & 0x1F & 0xFF, phi_v0 - 1);
    if (((s32) temp_v1_2 < 7) && (temp_v1_2 != 0) && (arg0->unk_D80 >= 0)) {
        phi_a0 = (s32) sp26;
    } else {
        phi_a0 = (s32) arg3->unk_6;
    }
    temp_v0 = arg3->unk_8;
    if (temp_v0 < phi_a0) {
        arg0->unk_DA8 = (s32) ((phi_a0 - temp_v0) + 0xFFFF);
    } else {
        arg0->unk_DA8 = (s32) (temp_v0 - phi_a0);
    }
    arg0->unk_DB4 = (s32) (sp26 - phi_a0);
    temp_lo = (s32) arg0->unk_DA8 / (s32) ((arg0->unk_D7C->count - 2) & 0xFFFF);
    arg0->unk_DAC = temp_lo;
    arg0->unk_DB0 = (s32) (((s32) arg0->unk_DB4 / temp_lo) + 2);
    arg0->unk_D89 = (u8) (arg0->unk_D89 & ~1);
    arg0->unk_D84 = 1.0f;
    return 1;
}

s32 func_80A40230(GlobalContext *arg0, GlobalContext *arg1) {
    ? sp94;
    ? sp88;
    ? sp7C;
    f32 sp70;
    s32 sp6C;
    s32 sp68;
    f32 sp60;
    f32 sp5C;
    s32 sp58;
    void *sp4C;
    s32 *sp48;
    s32 *sp44;
    Vec3f *sp40;
    void *sp3C;
    Vec3f *sp38;
    Vec3f *temp_v1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 *temp_a2;
    s32 *temp_v0;
    s8 temp_v0_2;
    void *temp_a1;
    void *temp_t0;
    Vec3f *phi_v1;

    sp6C = 0;
    sp68 = 0;
    sp58 = 0;
    func_8013AF00((void *) &sp94, 3, arg0->colCtx.dyna.bgActors[12].curTransform.pos.x->count + 3);
    temp_v1 = arg0 + 0xD98;
    phi_v1 = temp_v1;
    if ((arg0->unk_D89 & 1) == 0) {
        temp_v0 = arg0 + 0xDB0;
        sp70.unk_0 = D_801D15B0.x;
        temp_a1 = arg0 + 0xDA4;
        sp70.unk_4 = (f32) D_801D15B0.y;
        temp_a2 = arg0 + 0xDB4;
        sp70.unk_8 = (f32) D_801D15B0.z;
        sp48 = temp_a2;
        sp4C = temp_a1;
        sp44 = temp_v0;
        func_8013B6B0(arg0->colCtx.dyna.bgActors[12].curTransform.pos.x, temp_a1, temp_a2, arg0->colCtx.dyna.bgActors[13].prevTransform.scale.x, arg0->unk_DA8, temp_v0, (void *) &sp94, (Vec3f *) &sp70, (s16) arg0->colCtx.dyna.bgActors[12].curTransform.pos.y);
        func_8013B878(arg1, arg0->colCtx.dyna.bgActors[12].curTransform.pos.x, arg0->colCtx.dyna.bgActors[13].prevTransform.scale.y, (Vec3f *) &sp70);
        Math_Vec3f_Copy(arg0 + 8, (Vec3f *) &sp70);
        Math_Vec3f_Copy(arg0 + 0x108, (Vec3f *) &sp70);
        arg0->unk_D89 = (u8) (arg0->unk_D89 | 1);
        arg0->unk_28 = sp74;
        phi_v1 = arg0 + 0xD98;
    } else {
        sp70.unk_0 = temp_v1->x;
        sp70.unk_4 = (f32) temp_v1->y;
        sp70.unk_8 = (f32) temp_v1->z;
        sp44 = arg0 + 0xDB0;
        sp48 = arg0 + 0xDB4;
        sp4C = arg0 + 0xDA4;
    }
    arg0->unk_24 = sp70;
    arg0->unk_2C = sp78;
    temp_t0 = arg1 + 0x18000;
    if (arg1->unk_18B4A != 0) {
        sp6C = arg0->colCtx.dyna.bgActors[13].prevTransform.scale.z;
        sp68 = arg0->colCtx.dyna.bgActors[13].prevTransform.scale.y;
        sp70.unk_0 = arg0->unk_24;
        sp70.unk_4 = (f32) arg0->unk_28;
        sp70.unk_8 = (f32) arg0->unk_2C;
    }
    phi_v1->x = D_801D15B0.x;
    phi_v1->y = D_801D15B0.y;
    phi_v1->z = D_801D15B0.z;
    sp3C = temp_t0;
    sp40 = phi_v1;
    sp38 = arg0 + 0x24;
    if (func_8013B6B0(arg0->colCtx.dyna.bgActors[12].curTransform.pos.x, sp4C, sp48, arg0->colCtx.dyna.bgActors[13].prevTransform.scale.x, arg0->unk_DA8, sp44, (void *) &sp94, phi_v1, (bitwise s16) arg0->colCtx.dyna.bgActors[12].curTransform.pos.y) != 0) {
        temp_v0_2 = arg0->unk_D88;
        if (temp_v0_2 == 0x14) {
            gSaveContext.weekEventReg[58] &= 0x7F;
            arg0->view.projection.m[2][1] = 0;
        } else if (temp_v0_2 == 9) {
            D_80A41D64 = 2;
        }
        sp58 = 1;
    } else {
        sp88.unk_0 = (s32) sp38->x;
        sp88.unk_4 = (s32) sp38->y;
        sp88.unk_8 = (s32) sp38->z;
        sp7C.unk_0 = (f32) phi_v1->x;
        sp7C.unk_4 = (f32) phi_v1->y;
        sp7C.unk_8 = (f32) phi_v1->z;
        sp3C = temp_t0;
        sp40 = phi_v1;
        arg0->state.input[1].prev.button = Math_Vec3f_Yaw((Vec3f *) &sp88, (Vec3f *) &sp7C);
    }
    if ((arg1 + 0x18000)->unk_B4A != 0) {
        arg0->colCtx.dyna.bgActors[13].prevTransform.scale.z = sp6C;
        arg0->colCtx.dyna.bgActors[13].prevTransform.scale.y = sp68;
        phi_v1->x = sp70.unk_0;
        phi_v1->y = sp70.unk_4;
        phi_v1->z = sp70.unk_8;
    }
    temp_f2 = arg0->unk_24 - arg0->unk_108;
    temp_f12 = arg0->unk_2C - arg0->unk_110;
    sp60 = temp_f2;
    sp5C = temp_f12;
    if (Math_StepToF(arg0 + 0xD84, 1.0f, 0.1f) == 0) {
        temp_f0 = arg0->colCtx.dyna.bgActors[12].curTransform.pos.z;
        arg0->unk_24 = (f32) (arg0->unk_108 + (temp_f2 * temp_f0));
        arg0->unk_2C = (f32) (arg0->unk_110 + (temp_f12 * temp_f0));
    }
    Math_Vec3f_Copy(&D_80A41D50, sp38);
    temp_f2_2 = arg0->unk_24 - arg0->unk_108;
    temp_f12_2 = arg0->unk_2C - arg0->unk_110;
    arg0->unk_AD0 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2));
    arg0->unk_AD0 = (f32) (arg0->unk_AD0 * (1.0f + (1.05f * fabsf(Math_SinS(arg0->unk_B6C)))));
    D_80A41D40 = (arg0->unk_AD0 * 10.0f) + 20.0f;
    temp_f2_3 = D_80A41D40;
    if (temp_f2_3 > 60.0f) {
        D_80A41D40 = 60.0f;
    } else {
        D_80A41D40 = temp_f2_3;
    }
    D_80A41D44 = arg0->state.input[1].prev.button;
    arg0->unk_24 = (f32) arg0->unk_108;
    arg0->unk_2C = (f32) arg0->unk_110;
    if (func_80A3F384((bitwise Actor *) 60.0f, arg0, arg1) == 0) {
        D_80A41D48 = 1;
    }
    return sp58;
}

void func_80A40678(Actor *arg0, GlobalContext *arg1) {
    s8 *sp3C;
    u8 sp2C;
    s8 *temp_a2;
    s8 *temp_a2_2;
    s8 temp_v0;
    s32 phi_v0;
    s8 phi_v1;

    temp_v0 = arg0->unk_D88;
    if ((temp_v0 == 0x14) || (temp_v0 == 0xA) || (temp_v0 == 9)) {
        arg0->unk_D80 = 3;
    } else {
        if (func_801690CC(arg1) != 0) {
            phi_v0 = 0;
        } else {
            phi_v0 = gSaveContext.unk_14 + gGameInfo->data[15];
        }
        arg0->unk_D80 = phi_v0;
    }
    phi_v1 = 0;
    if (func_80133038(arg1, &D_80A41530, (struct_80133038_arg2 *) &sp2C) != 0) {
        phi_v1 = (s8) sp2C;
        if (sp2C != arg0->unk_D88) {
            temp_a2 = (sp2C * 2) + &D_80A41828;
            sp3C = temp_a2;
            func_80A3F114(arg0, arg1, temp_a2);
            if (*temp_a2 != 4) {
                gSaveContext.weekEventReg[51] = gSaveContext.weekEventReg[51] & 0xFB;
            }
            phi_v1 = (s8) sp2C;
            if (*(&D_80A417E8 + (*temp_a2 * 8))(arg0, arg1, temp_a2, &sp2C) != 0) {
                if (sp2C == 6) {
                    arg0->home.rot.y = 0x7FFF;
                    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40000);
                    arg1->startPlayerCutscene(arg1, (Player *) arg0, -1);
                    phi_v1 = (s8) sp2C;
                }
                goto block_16;
            }
        } else {
            goto block_16;
        }
    } else {
        sp2C = 0;
block_16:
        arg0->unk_D88 = phi_v1;
        temp_a2_2 = (arg0->unk_D88 * 2) + &D_80A41828;
        *(&D_80A417EC + (*temp_a2_2 * 8))(arg0, arg1, temp_a2_2);
    }
}

void func_80A40824(Actor *arg0) {
    arg0->unk_D78 = &D_80A41854;
    func_80A3F73C();
}

void func_80A4084C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    if (func_800B867C(arg0, arg1) != 0) {
        temp_v0 = arg0->unk_D78->unk_1;
        if ((temp_v0 == 0) || (func_80A3E80C((EnTest3 *) arg0, (s32) arg1, temp_v0 - 1) == 0)) {
            if ((((s32) arg0->params >> 5) & 0xF) == 0) {
                func_80A3E7E0((EnTest3 *) arg0, func_80A40824);
            } else {
                func_80A3E7E0((EnTest3 *) arg0, func_80A40678);
            }
            arg0->unk_730 = 0;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (func_80A3ED24(arg0, arg1) != 0) {
        func_80A3E7E0((EnTest3 *) arg0, func_80A40908);
    }
}

void func_80A40908(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80A3E7E0((EnTest3 *) arg0, func_80A4084C);
        arg0->unk_730 = (Actor *) arg1->actorCtx.actorList[2].first;
        gSaveContext.weekEventReg[51] |= 8;
        func_80151BB4(arg1, 0x19U);
        func_80151BB4(arg1, 2U);
        return;
    }
    func_800B8500(arg0, arg1, 9999.9f, 9999.9f, -1);
    arg0->unk_D78 = &D_80A4186C;
    arg0->flags |= 9;
    arg0->textId = D_80A4186C.unk_2;
}

void func_80A409D4(EnTest3 *arg1) {
    u8 temp_v0;

    temp_v0 = arg1->unk_1CA5;
    if (((temp_v0 & 0x20) != 0) || ((temp_v0 & 0x10) != 0)) {
        arg1->unk_1CA5 = (u8) (temp_v0 & 0xFFEF);
        func_80A3F0B0();
        ActorCutscene_SetReturnCamera(0);
        return;
    }
    D_80A41D28.unk_0 = (s32) (unaligned s32) arg1->unk_14;
    D_80A41D28.unk_4 = (s32) (unaligned s32) arg1->unk_18;
    D_80A41D28.unk_8 = (s32) (unaligned s32) arg1->unk_1C;
    D_80A41D28.unk_C = (s32) (unaligned s32) arg1->unk_20;
    D_80A41D28.unk_10 = (s32) (unaligned s32) arg1->unk_24;
    D_80A41D28.unk_14 = (s32) (unaligned s32) arg1->unk_28;
}

void func_80A40A6C(s32 arg0, ? arg1) {
    gSaveContext.weekEventReg[64] |= 0x20;
}

void EnTest3_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? sp34;
    PosRot *sp30;
    void *sp2C;
    PosRot *temp_a1;
    u16 temp_t6;
    u16 temp_v0_2;
    u8 temp_v0;
    EnTest3 *this = (EnTest3 *) thisx;

    temp_t6 = D_80A41D28.unk_0;
    D_80A41D28.unk_0 = 0U;
    D_80A41D28.unk_14 = 0;
    D_80A41D28.unk_15 = 0;
    D_80A41D28.unk_12 = temp_t6;
    globalCtx->actorCtx.unk5 &= 0xFF7F;
    this->actor.draw = func_80A4129C;
    D_80A41D48 = 0;
    this->actor.flags &= -0xA;
    if ((func_800EE29C(globalCtx, 0x1FAU) != 0) && ((this->actor.category != 2) || ((temp_v0 = globalCtx->actorCtx.unk5, ((temp_v0 & 0x20) == 0)) && ((temp_v0 & 0x10) == 0)))) {
        if (this->unk_394 != 5) {
            globalCtx->startPlayerCutscene(globalCtx, (Player *) this, 5);
        }
        globalCtx->actorCtx.unk5 &= 0xFFEF;
        sp2C = globalCtx + 0x18000;
    } else if (this->actor.category == 2) {
        func_80A409D4(this, globalCtx);
        sp2C = globalCtx + 0x18000;
    } else {
        sp2C = globalCtx + 0x18000;
        if (globalCtx->startPlayerCutscene(globalCtx, (Player *) this, 0) != 0) {
            temp_a1 = &this->actor.world;
            if ((s32) this->unk_D88 >= 7) {
                sp30 = temp_a1;
                Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) temp_a1);
                this->unk_D80 = 4;
                func_80A40230((Actor *) this, (Actor *) globalCtx);
                Math_Vec3f_Copy((Vec3f *) sp30, (Vec3f *) &sp34);
                D_80A41D48 = 0;
                this->unk_D84 = 0.0f;
            }
        } else {
            D_80A41D40 = 0.0f;
            D_80A41D44 = this->actor.shape.rot.y;
            this->unk_D94(this, globalCtx);
            temp_v0_2 = D_80A41D28.unk_0;
            D_80A41D28.unk_C = (s16) ((D_80A41D28.unk_12 ^ temp_v0_2) & temp_v0_2);
            func_800B6F20(globalCtx, (s32) &D_80A41D28, D_80A41D40, D_80A41D44);
        }
    }
    sp2C->unk_76C(this, globalCtx, &D_80A41D28);
    if (D_80A41D48 != 0) {
        this->actor.world.pos.x = D_80A41D50.x;
        this->unk_AD0 = 0.0f;
        this->actor.world.pos.z = D_80A41D50.z;
    }
}

s32 func_80A40CF0(GlobalContext *arg1, s32 *arg2, Gfx **arg3, Vec3f *arg4, Vec3s *arg5) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s32 temp_v1;
    u8 temp_v0;
    s32 phi_v1;

    if (arg1 == 1) {
        D_80A41D6C = arg5 + 0xBE0;
        temp_v0 = arg5->unk_275;
        temp_v1 = temp_v0 & 4;
        phi_v1 = temp_v1;
        if ((temp_v1 == 0) || ((temp_v0 & 1) != 0)) {
            arg3->unk_0 *= arg5->unk_A68->unk_8;
            arg3->unk_8 = (f32) (arg3->unk_8 * arg5->unk_A68->unk_8);
            phi_v1 = arg5->unk_275 & 4;
        }
        if ((phi_v1 == 0) || ((arg5->unk_275 & 2) != 0)) {
            arg3->unk_4 = (f32) (arg3->unk_4 * arg5->unk_A68->unk_8);
        }
        arg3->unk_4 = (f32) (arg3->unk_4 - arg5->unk_AB8);
        temp_a0 = arg5->unk_AAA;
        if (temp_a0 != 0) {
            SysMatrix_InsertTranslation(arg3->unk_0, ((Math_CosS(temp_a0) - 1.0f) * 200.0f) + arg3->unk_4, arg3->unk_8, 1);
            SysMatrix_InsertXRotation_s(arg5->unk_AAA, 1);
            SysMatrix_InsertRotation(arg4->unk_0, arg4->unk_2, arg4->unk_4, 1);
            func_80125318(arg3, arg4);
        }
    } else {
        if (*arg2 != 0) {
            D_80A41D6C += 0xC;
        }
        if (D_80A418C8 != 0) {
            *arg2 = 0;
        }
        if (arg1 == 0xB) {
            arg4->unk_0 = (s16) (arg4->unk_0 + arg5->unk_AB0);
            arg4->unk_2 = (s16) (arg4->unk_2 - arg5->unk_AAE);
            arg4->unk_4 = (s16) (arg4->unk_4 + arg5->unk_AAC);
        } else if (arg1 == 0xA) {
            if (arg5->unk_AA8 != 0) {
                SysMatrix_InsertZRotation_s(0x44C, 1);
                Matrix_RotateY(arg5->unk_AA8, 1U);
            }
            temp_a0_2 = arg5->unk_AB4;
            if (temp_a0_2 != 0) {
                Matrix_RotateY(temp_a0_2, 1U);
            }
            SysMatrix_InsertXRotation_s(arg5->unk_AB2, 1);
            temp_a0_3 = arg5->unk_AB6;
            if (temp_a0_3 != 0) {
                SysMatrix_InsertZRotation_s(temp_a0_3, 1);
            }
        } else {
            func_80125500(arg5, arg1, arg3, arg4);
        }
    }
    return 0;
}

void func_80A40F34(void **arg0, s32 arg1, Gfx **arg2, Gfx **arg3, Vec3s *arg5) {
    ? sp58;
    void *sp54;
    ? sp40;
    s16 *sp38;
    MtxF *sp1C;
    Gfx *temp_a2;
    MtxF *temp_a0_2;
    s32 temp_v0_3;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;

    if (*arg3 != 0) {
        SysMatrix_GetStateTranslation(D_80A41D6C);
    }
    if (arg1 == 0x10) {
        Math_Vec3f_Copy(arg5 + 0x350, D_80A41D6C);
        temp_a2 = *arg2;
        if (temp_a2 != 0) {
            func_80128640(arg0, arg5, temp_a2, arg5);
            if ((arg5->unk_A74 * 4) < 0) {
                temp_a0 = *arg0;
                temp_v1 = temp_a0->unk_2B0;
                temp_a0->unk_2B0 = (void *) (temp_v1 + 8);
                temp_v1->unk_4 = &D_0600EDD0;
                temp_v1->unk_0 = 0xDE000000;
            }
        }
        temp_v0 = arg5->unk_34C;
        temp_a0_2 = arg5 + 0xCC4;
        if ((temp_v0 != 0) && ((arg5->unk_A6C & 0x800) != 0)) {
            sp54 = temp_v0;
            SysMatrix_CopyCurrentState((MtxF *) &sp58);
            func_8018219C((MtxF *) &sp58, (Vec3s *) &sp40, 0);
            temp_v0->unk_32 = (s16) (arg5->unk_BE + arg5->unk_35E);
            temp_v0->unk_BE = (s16) temp_v0->unk_32;
            return;
        }
        sp1C = temp_a0_2;
        SysMatrix_CopyCurrentState(temp_a0_2);
        func_8018219C(temp_a0_2, arg5 + 0x35C, 0);
        func_80126B8C(arg0, arg5);
        return;
    }
    if (arg1 == 0x13) {
        temp_v0_2 = arg5->unk_34C;
        if (temp_v0_2 != 0) {
            temp_v0_2->unk_24 = (f32) ((arg5->unk_CA0 + arg5->unk_350) * 0.5f);
            temp_v0_2->unk_28 = (f32) ((arg5->unk_CA4 + arg5->unk_354) * 0.5f);
            temp_v0_2->unk_2C = (f32) ((arg5->unk_CA8 + arg5->unk_358) * 0.5f);
            return;
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
        return;
    }
    if (arg1 == 0xB) {
        if (*arg2 != 0) {
            temp_v1_2 = arg5->unk_153;
            if ((temp_v1_2 != 0) && ((arg5->unk_A70 << 7) >= 0)) {
                temp_v0_3 = arg5->unk_248;
                if ((&D_0400D0A8 != temp_v0_3) && ((&D_0400D0C8 != temp_v0_3) || (arg5->unk_258 >= 12.0f))) {
                    sp38 = arg5->unk_730;
                    if (func_80127438(arg0, arg5, temp_v1_2, arg5) != 0) {
                        temp_a0_3 = *arg0;
                        temp_v1_3 = temp_a0_3->unk_2B0;
                        temp_a0_3->unk_2B0 = (void *) (temp_v1_3 + 8);
                        temp_v1_3->unk_4 = &D_0A0004A0;
                        temp_v1_3->unk_0 = 0xDE000000;
                    }
                }
            }
        }
        if ((arg5->unk_730 != 0) && (*arg5->unk_730 == 0x25C)) {
            Math_Vec3f_Copy(arg5 + 0x3C, arg5->unk_730 + 0x3C);
            return;
        }
        SysMatrix_MultiplyVector3fByState(&D_80A418CC, arg5 + 0x3C);
        return;
    }
    if (arg1 == 0x15) {
        if ((D_80A41D60 != 0) || ((gSaveContext.weekEventReg[50] & 0x80) != 0) || (gSaveContext.inventory.items[gItemSlots[0x30]] == 0x30) || (arg5->unk_B2A == 0x6F)) {
            D_80A41D60 = 1;
            return;
        }
        temp_a0_4 = *arg0;
        temp_v1_4 = temp_a0_4->unk_2B0;
        temp_a0_4->unk_2B0 = (void *) (temp_v1_4 + 8);
        temp_v1_4->unk_4 = &D_0600CB60;
        temp_v1_4->unk_0 = 0xDE000000;
        return;
    }
    func_80128B74(arg0, arg5, arg1, arg5);
}

void func_80A4129C(Actor *this, GlobalContext *globalCtx) {
    s32 sp6C;
    s32 sp68;
    Gfx *sp64;
    GraphicsContext *sp60;
    ? sp4C;
    Gfx *temp_v1_2;
    s16 temp_v0;
    s32 temp_v0_2;
    s8 temp_v1;
    u8 temp_a0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = this->unk_260->unk_84;
    sp6C = (temp_v0 & 0xF) - 1;
    sp68 = (((s32) temp_v0 >> 4) & 0xF) - 1;
    sp60 = globalCtx->state.gfxCtx;
    func_8012C268(globalCtx);
    temp_v1 = this->unk_D5C;
    if ((s32) temp_v1 > 0) {
        temp_v0_2 = 0x32 - temp_v1;
        if (temp_v0_2 < 8) {
            phi_v0 = 8;
        } else {
            phi_v1 = temp_v0_2;
            if (temp_v0_2 >= 0x29) {
                phi_v1 = 0x28;
            }
            phi_v0 = phi_v1;
        }
        temp_a0 = this->unk_B5F + phi_v0;
        this->unk_B5F = temp_a0;
        sp60->polyOpa.p = Gfx_SetFog(sp60->polyOpa.p, 0xFF, 0, 0, 0, 0, 0xFA0 - (s32) (Math_CosS((s16) (temp_a0 << 8)) * 2000.0f));
    }
    func_800B8050(this, globalCtx, 0);
    D_80A418C8 = 0;
    if (this->unk_A6C & 0x100000) {
        SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, (Vec3f *) &this->focus, (Vec3f *) &sp4C);
        if (sp54 < -4.0f) {
            D_80A418C8 = 1;
        }
    }
    temp_v1_2 = sp60->polyOpa.p;
    if (sp6C < 0) {
        sp6C = (s32) *(&D_80A41908 + (this->shape.face * 2));
    }
    temp_v1_2->words.w0 = 0xDB060020;
    sp64 = temp_v1_2;
    temp_v1_2->words.w1 = Lib_SegmentedToVirtual(*(&D_80A418D8 + (sp6C * 4)));
    if (sp68 < 0) {
        sp68 = (s32) *(&D_80A41909 + (this->shape.face * 2));
    }
    temp_v1_2->unk_8 = 0xDB060024;
    sp64 = temp_v1_2;
    temp_v1_2->unk_C = Lib_SegmentedToVirtual(*(&D_80A418F8 + (sp68 * 4)));
    sp60->polyOpa.p = temp_v1_2 + 0x10;
    SkelAnime_LodDrawSV(globalCtx, this->unk_244, this->unk_260, (s32) this->unk_242, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_80A40CF0, (void (*)(GlobalContext *, s32, Gfx **, Gfx **, Vec3s *, Actor *)) func_80A40F34, this, 0);
    if ((s32) this->unk_D5C > 0) {
        sp60->polyOpa.p = func_801660B8(globalCtx, sp60->polyOpa.p);
    }
    if (this->unk_B2A != 0) {
        func_8012697C(globalCtx, (Player *) this);
    }
}
