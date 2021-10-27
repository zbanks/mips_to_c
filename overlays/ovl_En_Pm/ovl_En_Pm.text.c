typedef struct EnPm {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnPm *, GlobalContext *);
    /* 0x18C */ char pad_18C[0x4];
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ ColliderSphere unk_1DC;             /* inferred */
    /* 0x234 */ char pad_234[0x24];
    /* 0x258 */ u8 unk_258;                         /* inferred */
    /* 0x259 */ char pad_259[0x3];                  /* maybe part of unk_258[4]? */
    /* 0x25C */ s32 *unk_25C;                       /* inferred */
    /* 0x260 */ char pad_260[0x4];
    /* 0x264 */ s32 unk_264;                        /* inferred */
    /* 0x268 */ Actor *unk_268;                     /* inferred */
    /* 0x26C */ char pad_26C[0x2A];                 /* maybe part of unk_268[11]? */
    /* 0x296 */ Vec3s unk_296;                      /* inferred */
    /* 0x29C */ char pad_29C[0x5A];                 /* maybe part of unk_296[16]? */
    /* 0x2F6 */ Vec3s unk_2F6;                      /* inferred */
    /* 0x2FC */ char pad_2FC[0x5A];                 /* maybe part of unk_2F6[16]? */
    /* 0x356 */ u16 unk_356;                        /* inferred */
    /* 0x358 */ char pad_358[0x10];                 /* maybe part of unk_356[9]? */
    /* 0x368 */ f32 unk_368;                        /* inferred */
    /* 0x36C */ char pad_36C[0x8];                  /* maybe part of unk_368[3]? */
    /* 0x374 */ s16 unk_374;                        /* inferred */
    /* 0x376 */ s16 unk_376;                        /* inferred */
    /* 0x378 */ char pad_378[0x4];                  /* maybe part of unk_376[3]? */
    /* 0x37C */ void *unk_37C;                      /* inferred */
    /* 0x380 */ char pad_380[0x4];
    /* 0x384 */ s32 unk_384;                        /* inferred */
    /* 0x388 */ char pad_388[0x4];
    /* 0x38C */ s32 unk_38C;                        /* inferred */
    /* 0x390 */ char pad_390[0x4];
    /* 0x394 */ s32 unk_394;                        /* inferred */
    /* 0x398 */ char pad_398[0x8];                  /* maybe part of unk_394[3]? */
} EnPm;                                             /* size = 0x3A0 */

struct _mips2c_stack_EnPm_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPm_Draw {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnPm_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnPm_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF7B40 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF7BAC {};              /* size 0x0 */

struct _mips2c_stack_func_80AF7CB0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF7D60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF7DC4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF7E6C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF7E98 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF7F68 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF8040 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF80F4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AF8170 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF81E8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF8348 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF8478 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF8540 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF86F0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF87C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF8890 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF898C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80AF8AC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF8BA8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF8C68 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF8D84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF8DD4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x6];                    /* maybe part of sp20[2]? */
    /* 0x2A */ u16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF8ED4 {
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

struct _mips2c_stack_func_80AF9008 {
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

struct _mips2c_stack_func_80AF91E8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x7];                    /* maybe part of sp20[2]? */
    /* 0x2B */ u8 sp2B;                             /* inferred */
    /* 0x2C */ char pad_2C[0x2];                    /* maybe part of sp2B[3]? */
    /* 0x2E */ u16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF94AC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xF];
    /* 0x4F */ u8 sp4F;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80AF95E8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xF];
    /* 0x4F */ u8 sp4F;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80AF98A0 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AF992C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3s *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF9A0C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF9AB0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF9B54 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF9BF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF9D04 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0xC];                    /* maybe part of sp28[4]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80AF9E7C {
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

struct _mips2c_stack_func_80AFA170 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AFA334 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFA438 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFA4D0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u8 sp2C;                             /* inferred */
    /* 0x2D */ char pad_2D[0xF];                    /* maybe part of sp2C[16]? */
    /* 0x3C */ u16 sp3C;                            /* inferred */
    /* 0x3E */ char pad_3E[0x2];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AFA5FC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80AFA724 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AFAA04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFAA44 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AFABAC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_800E0308(Camera *, Actor *);                 /* extern */
void *func_8013A7C0(?);                             /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
s32 func_80AF7B40();                                /* static */
? func_80AF7BAC(EnPm *arg0);                        /* static */
Actor *func_80AF7CB0(Actor *arg0, GlobalContext *arg1, u8 arg2, s16 arg3); /* static */
void *func_80AF7D60(GlobalContext *arg1, u8);       /* static */
Actor *func_80AF7DC4(Actor *arg0, GlobalContext *arg1, s16 arg2, s32); /* static */
void func_80AF7E6C(EnPm *arg0);                     /* static */
s32 func_80AF7E98(Actor *arg0, s32 arg1, u16);      /* static */
void func_80AF7F68(Actor *arg0, GlobalContext *arg1); /* static */
Actor *func_80AF8040(EnPm *arg0, GlobalContext *arg1); /* static */
s32 func_80AF80F4(Actor *arg0, s16 arg1);           /* static */
s8 func_80AF8170(Actor *arg0, s32 arg1);            /* static */
s32 func_80AF81E8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AF8348(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AF8478(Actor *arg0, GlobalContext *arg1); /* static */
? *func_80AF8540(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AF86F0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AF87C4(EnPm *arg0, GlobalContext *arg1); /* static */
void func_80AF8890(void *arg0, void **arg1, s32 arg2); /* static */
void func_80AF898C(void *arg0);                     /* static */
void func_80AF8AC8(EnPm *arg0);                     /* static */
void func_80AF8BA8(s32 arg0);                       /* static */
void func_80AF8C68(void *arg0, void *arg1, void *); /* static */
? func_80AF8D84(Actor *arg0, GlobalContext *arg1, u16); /* static */
? func_80AF8DD4(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80AF8ED4(Actor *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4); /* static */
s32 func_80AF9008(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80AF91E8(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80AF94AC(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80AF95E8(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80AF98A0(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
s32 func_80AF992C(Actor *arg0, ? arg1, u8 *arg2);   /* static */
s32 func_80AF9A0C(Actor *arg0);                     /* static */
s32 func_80AF9AB0(Actor *arg0);                     /* static */
s32 func_80AF9B54(Actor *arg0);                     /* static */
s32 func_80AF9BF8(EnPm *arg0, u8 *arg2, u8 *);      /* static */
? func_80AF9D04(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80AF9E7C(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80AFA170(Actor *arg0, ? arg1);               /* static */
? func_80AFA334(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80AFA438(Actor *arg0, GlobalContext *);   /* static */
void func_80AFA724(Actor *arg0, GlobalContext *arg1); /* static */
? func_80AFAA04(void *arg0, s32 arg1, ? arg2, ? arg3, void *arg5); /* static */
void func_80AFAA44(s32 arg0, s32 arg1, ? arg2, ? arg3, void *arg4, void **arg5); /* static */
void func_80AFABAC(s32 arg0, s32 arg1, void *arg2, ? arg3); /* static */
extern ? D_06008348;
extern ? D_060083E0;
extern ? D_060085C8;
extern FlexSkeletonHeader D_060096E8;
extern u16 D_801F4E78;
static ? D_80AFB430;                                /* unable to generate initializer */
static ? D_80AFB5A0;                                /* unable to generate initializer */
static ? D_80AFB60C;                                /* unable to generate initializer */
static ? D_80AFB614;                                /* unable to generate initializer */
static ? D_80AFB61C;                                /* unable to generate initializer */
static ? D_80AFB624;                                /* unable to generate initializer */
static ? D_80AFB62C;                                /* unable to generate initializer */
static ? D_80AFB634;                                /* unable to generate initializer */
static ? D_80AFB63C;                                /* unable to generate initializer */
static ? D_80AFB644;                                /* unable to generate initializer */
static ? D_80AFB650;                                /* unable to generate initializer */
static ? D_80AFB658;                                /* unable to generate initializer */
static ? D_80AFB6BC;                                /* unable to generate initializer */
static ? D_80AFB710;                                /* unable to generate initializer */
static ? D_80AFB744;                                /* unable to generate initializer */
static ? D_80AFB74C;                                /* unable to generate initializer */
static ? D_80AFB764;                                /* unable to generate initializer */
static ColliderCylinderInit D_80AFB790 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xE, 0x3E, 0, {0, 0, 0}},
};
static ColliderSphereInit D_80AFB7BC = {
    {0xA, 0, 0, 0x39, 0x10, 4},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0, {{0, 0, 0}, 0x1A}, 0x64},
};
static CollisionCheckInfoInit2 D_80AFB7E8 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80AFB7F4[14] = {
    {(AnimationHeader *)0x6002238, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002238, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600A4E0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600B09C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600B09C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600BA78, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600C32C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60099B4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6000FC4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600A8D8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600099C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6001F84, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000468, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600C640, 1.0f, 0, 0xFFFF, 0, 0},
};
static ? D_80AFB8D4;                                /* unable to generate initializer */
static ? D_80AFB8E0;                                /* unable to generate initializer */
static Vec3f D_80AFB8EC = {116.0f, 26.0f, -219.0f};
static Vec3s D_80AFB8F8 = {0, 0xC0BA, 0};
static ? D_80AFB900;                                /* unable to generate initializer */
static void *D_80AFB914[3] = {(void *)0x6002950, (void *)0x6002750, NULL};

s32 func_80AF7B40(void) {
    u8 temp_v0;

    if ((gSaveContext.weekEventReg[90] & 1) != 0) {
        return 4;
    }
    temp_v0 = gSaveContext.weekEventReg[89];
    if ((temp_v0 & 0x40) != 0) {
        return 3;
    }
    if ((temp_v0 & 8) != 0) {
        return 2;
    }
    if ((gSaveContext.weekEventReg[86] & 1) != 0) {
        return 1;
    }
    return 0;
}

? func_80AF7BAC(EnPm *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk_38C;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else if ((gSaveContext.weekEventReg[90] & 1) != 0) {
                    D_801F4E78 = gSaveContext.time;
                    arg0->unk_38C += 1;
                }
            } else if ((gSaveContext.weekEventReg[89] & 0x40) != 0) {
                D_801F4E78 = 0;
                arg0->unk_38C += 1;
            }
        } else if ((gSaveContext.weekEventReg[89] & 8) != 0) {
            D_801F4E78 = gSaveContext.time;
            arg0->unk_38C += 1;
        }
    } else if ((gSaveContext.weekEventReg[86] & 1) != 0) {
        D_801F4E78 = gSaveContext.time;
        arg0->unk_38C += 1;
    }
    return 1;
}

Actor *func_80AF7CB0(Actor *arg0, GlobalContext *arg1, u8 arg2, s16 arg3) {
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

void *func_80AF7D60(GlobalContext *arg1) {
    ? phi_a1;

    switch (arg1) {
    case 1:
    case 2:
    case 32:
    case 33:
        phi_a1 = 1;
block_6:
        return func_8013A7C0(phi_a1);
    case 34:
    case 35:
    case 36:
    case 37:
        phi_a1 = 0xA;
        goto block_6;
    case 10:
    case 11:
    case 12:
    case 13:
        phi_a1 = 0xB;
        goto block_6;
    default:
        return NULL;
    }
}

Actor *func_80AF7DC4(Actor *arg0, GlobalContext *arg1, s16 arg2) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 6, 0x1F2);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0 == arg0) || (temp_v0->update == 0) || (arg2 != temp_v0->params))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {

        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void func_80AF7E6C(EnPm *arg0) {
    arg0->unk_144.animPlaybackSpeed = arg0->unk_35C;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80AF7E98(Actor *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 != 0) && (arg1 != 1)) {
        if ((arg1 != 3) && (arg1 != 4)) {
            if (arg1 != arg0[2].uncullZoneForward) {
                goto block_12;
            }
        } else {
            temp_v0 = arg0[2].uncullZoneForward;
            if ((temp_v0 != 3) && (temp_v0 != 4)) {
                goto block_12;
            }
        }
    } else {
        temp_v0_2 = arg0[2].uncullZoneForward;
        if ((temp_v0_2 != 0) && (temp_v0_2 != 1)) {
block_12:
            phi_v1 = 1;
        }
    }
    temp_a0 = arg0 + 0x144;
    if (phi_v1 != 0) {
        arg0[2].uncullZoneForward = arg1;
        arg0 = arg0;
        temp_t0 = func_8013BC6C(temp_a0, D_80AFB7F4, arg1);
        arg0[2].shape.feetPos[0].x = arg0->unk_160;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

void func_80AF7F68(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    Actor *temp_a0;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;
    u8 temp_t6;

    temp_t6 = arg0[1].isTargeted;
    switch (temp_t6) {
    case 9:
    case 20:
    case 21:
    case 22:
    case 24:
        arg0->unk_22A = (s16) (s32) ((f32) arg0->unk_222 * arg0[1].shape.feetPos[1].z);
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x1DC);
        return;
    default:
        temp_a2 = arg0 + 0x190;
        temp_a1 = temp_a2;
        sp1C = temp_a2;
        temp_a0 = arg0;
        arg0 = arg0;
        Collider_UpdateCylinder(temp_a0, temp_a1);
        arg0->unk_1D2 = (s16) (s32) (arg0->focus.pos.y - arg0->world.pos.y);
        CollisionCheck_SetOC(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
        return;
    }
}

Actor *func_80AF8040(EnPm *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    Actor *phi_v1;

    temp_v0 = arg0->unk_258;
    switch (temp_v0) {
    case 16:
        phi_v1 = func_80AF7CB0((Actor *)4, (GlobalContext *)0x202);
        break;
    case 17:
        phi_v1 = func_80AF7CB0((Actor *)4, (GlobalContext *)0x159);
        break;
    case 28:
        phi_v1 = func_80AF7CB0((Actor *)4, (GlobalContext *)0x262);
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        phi_v1 = func_80AF7DC4(temp_v0 - 3);
        break;
    case 19:
        phi_v1 = func_80AF7DC4((Actor *)4);
        break;
    case 18:
        phi_v1 = func_80AF7DC4((Actor *)4);
        break;
    default:
        phi_v1 = arg1->actorCtx.actorList[2].first;
        break;
    }
    return phi_v1;
}

s32 func_80AF80F4(Actor *arg0, s16 arg1) {
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

s8 func_80AF8170(Actor *arg0, s32 arg1) {
    s16 temp_v0_2;
    s32 temp_s0;
    s8 temp_s1;
    void *temp_v0;
    s16 phi_s1;
    s32 phi_s0;
    s8 phi_s1_2;

    temp_v0 = arg0->child;
    phi_s1_2 = -1;
    if (temp_v0 != 0) {
        phi_s0 = 0;
        if (temp_v0->update != 0) {
            temp_s1 = temp_v0->cutscene;
            phi_s1 = (s16) temp_s1;
            phi_s1_2 = temp_s1;
            if (arg1 > 0) {
                do {
                    temp_v0_2 = ActorCutscene_GetAdditionalCutscene(phi_s1);
                    temp_s0 = phi_s0 + 1;
                    phi_s1 = temp_v0_2;
                    phi_s0 = temp_s0;
                    phi_s1_2 = (s8) temp_v0_2;
                } while (temp_s0 != arg1);
            }
        }
    }
    return phi_s1_2;
}

s32 func_80AF81E8(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0;
    s16 temp_a0;
    s16 temp_a1;
    s32 phi_v1;

    temp_a0 = arg0->unk_378;
    temp_a1 = func_80AF8170(arg0, 0);
    phi_v1 = 0;
    switch (temp_a0) {
    case 0:
        sp24 = 0;
        sp2A = temp_a1;
        if (func_80AF80F4(arg0, temp_a1) != 0) {
        case 2:
        case 4:
        case 6:
            temp_v0 = arg0->child;
            if ((temp_v0 != 0) && (temp_v0->update != 0)) {
                func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
            }
            arg0->unk_378 = (s16) (arg0->unk_378 + 1);
            phi_v1 = 1;
        }
        break;
    case 1:
    case 3:
    case 5:
        if (((gSaveContext.weekEventReg[86] & 8) != 0) && (temp_a0 == 3)) {
            ActorCutscene_Stop(temp_a1);
        } else {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
        }
        arg0->unk_378 = (s16) (arg0->unk_378 + 1);
        phi_v1 = 1;
        break;
    case 7:
        ActorCutscene_Stop(temp_a1);
        arg0->unk_378 = (s16) (arg0->unk_378 + 1);
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

s32 func_80AF8348(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0;
    s16 temp_a0;
    s16 temp_a1;
    s32 phi_v1;

    temp_a0 = arg0->unk_378;
    temp_a1 = func_80AF8170(arg0, 0);
    phi_v1 = 0;
    switch (temp_a0) {
    case 0:
        sp24 = 0;
        sp2A = temp_a1;
        if (func_80AF80F4(arg0, temp_a1) != 0) {
        case 2:
        case 4:
        case 6:
        case 8:
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
            arg0->unk_378 = (s16) (arg0->unk_378 + 1);
            phi_v1 = 1;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
        temp_v0 = arg0->child;
        if ((temp_v0 != 0) && (temp_v0->update != 0)) {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
        }
        arg0->unk_378 = (s16) (arg0->unk_378 + 1);
        phi_v1 = 1;
        break;
    case 9:
        ActorCutscene_Stop(temp_a1);
        arg0->unk_378 = (s16) (arg0->unk_378 + 1);
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

s32 func_80AF8478(Actor *arg0, GlobalContext *arg1) {
    s32 sp20;
    s16 temp_v0;
    u16 temp_t4;
    u16 temp_t8;
    s32 phi_v1;

    temp_v0 = arg0->unk_378;
    phi_v1 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else {
            sp20 = 0;
            if (func_801378B8(arg0 + 0x144, arg0[1].home.pos.z) != 0) {
                func_80AF7E98(arg0, 4);
                temp_t4 = arg0->unk_356 & 0xFDFF;
                arg0->unk_356 = temp_t4;
                arg0->unk_356 = (u16) (temp_t4 | 0x20);
                arg0->unk_378 = (s16) (arg0->unk_378 + 1);
                phi_v1 = 1;
            }
        }
    } else {
        sp20 = 0;
        func_80AF7E98(arg0, 2);
        temp_t8 = arg0->unk_356 & 0xFFDF;
        arg0->unk_356 = temp_t8;
        arg0->unk_356 = (u16) (temp_t8 | 0x200);
        arg0->unk_378 = (s16) (arg0->unk_378 + 1);
    }
    return phi_v1;
}

? *func_80AF8540(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u8 temp_t6;
    u8 temp_v0_2;

    temp_t6 = arg0[1].isTargeted;
    switch (temp_t6) {                              /* switch 1 */
    case 28:                                        /* switch 1 */
        arg0[2].projectedPos.z = func_80AF8348;
        return &D_80AFB6BC;
    case 29:                                        /* switch 1 */
        return &D_80AFB710;
    case 16:                                        /* switch 1 */
        arg0[2].projectedPos.z = func_80AF81E8;
        return &D_80AFB5A0;
    case 17:                                        /* switch 1 */
        return &D_80AFB644;
    case 24:                                        /* switch 1 */
        temp_v0 = arg0->unk_356;
        if ((temp_v0 & 0x2000) != 0) {
            arg0[2].projectedPos.z = func_80AF8478;
            return &D_80AFB74C;
        }
        if ((temp_v0 & 0x4000) != 0) {
            return &D_80AFB764;
        }
        arg0[2].projectedPos.z = func_80AF8478;
        return &D_80AFB658;
    case 25:                                        /* switch 1 */
        return &D_80AFB650;
    default:                                        /* switch 1 */
        arg0 = arg0;
        if (Player_GetMask(arg1) == 2) {
            return &D_80AFB744;
        }
        temp_v0_2 = arg0[1].isTargeted;
        if ((s32) temp_v0_2 >= 0x17) {
            switch (temp_v0_2);                     /* switch 2; jump table: jtbl_80AFBADC */
        } else {
            switch (temp_v0_2) {                    /* switch 3 */
            case 9:                                 /* switch 3 */
                return &D_80AFB614;
            case 14:                                /* switch 3 */
                return &D_80AFB624;
            case 20:                                /* switch 3 */
                return &D_80AFB61C;
            case 21:                                /* switch 3 */
                return &D_80AFB634;
            case 22:                                /* switch 3 */
                return &D_80AFB63C;
            case 18:                                /* switch 3 */
                return &D_80AFB62C;
            default:                                /* switch 3 */
            default:                                /* switch 2 */
                return &D_80AFB60C;
            }
        }
        break;
    }
}

s32 func_80AF86F0(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    u8 temp_v1;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk_356 & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            func_8013AED4(arg0 + 0x356, 0U, 7U);
            arg0[2].prevPos.z = 0.0f;
            arg0->unk_378 = 0;
            arg0[2].projectedPos.z = 0.0f;
            arg0->child = arg0[1].child;
            temp_v1 = arg0[1].isTargeted;
            arg0->unk_25C = func_80AF8540(arg0, arg1);
            if ((temp_v1 != 0x18) && (temp_v1 != 9) && (temp_v1 != 0x14) && (temp_v1 != 0x15) && (temp_v1 != 0x16)) {
                arg0->unk_356 = (u16) (arg0->unk_356 | 0x20);
            }
            arg0[1].focus.pos.z = (bitwise f32) func_80AFA5FC;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_80AF87C4(EnPm *arg0, GlobalContext *arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg1->csCtx.state != 0) && (arg1->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 9) && (arg1->curSpawn == 1)) {
        if (arg0->unk_380 == 0) {
            func_80AF7E98(NULL);
            arg0->unk_258 = 0xFF;
            arg0->unk_380 = 1;
            arg0->actor.speedXZ = 4.0f;
            arg0->actor.gravity = -1.0f;
        }
        phi_v1 = 1;
    } else if (arg0->unk_380 != 0) {
        arg0->unk_258 = 0;
        arg0->unk_380 = 0;
        arg0->actor.speedXZ = 0.0f;
    }
    return phi_v1;
}

void func_80AF8890(void *arg0, void **arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    SysMatrix_StatePush();
    if (arg2 != 0) {
        if (arg2 != 1) {
            if (arg2 != 2) {

            } else if ((arg0->unk_356 & 0x1000) != 0) {
                temp_v0 = *arg1;
                *arg1 = temp_v0 + 8;
                temp_v0->unk_4 = &D_060083E0;
                temp_v0->unk_0 = 0xDE000000;
            }
        } else if ((arg0->unk_356 & 0x1000) != 0) {
            temp_v0_2 = *arg1;
            *arg1 = temp_v0_2 + 8;
            temp_v0_2->unk_4 = &D_060085C8;
            temp_v0_2->unk_0 = 0xDE000000;
        }
    } else if ((arg0->unk_356 & 0x800) != 0) {
        temp_v0_3 = *arg1;
        *arg1 = temp_v0_3 + 8;
        temp_v0_3->unk_4 = &D_06008348;
        temp_v0_3->unk_0 = 0xDE000000;
    }
    SysMatrix_StatePop();
}

void func_80AF898C(void *arg0) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 temp_v0;
    s16 temp_v0_3;
    void *temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk_268 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    Math_ApproachS(arg0 + 0x372, (s16) (Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_BE), 4, 0x2AA8);
    temp_v0 = arg0->unk_372;
    if ((s32) temp_v0 < -0x1FFE) {
        arg0->unk_372 = -0x1FFE;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1FFF) {
            phi_v1 = 0x1FFE;
        }
        arg0->unk_372 = phi_v1;
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk_268;
    if (temp_v0_2->unk_0 == 0) {
        sp44 = temp_v0_2->unk_C44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x370, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8);
    temp_v0_3 = arg0->unk_370;
    if ((s32) temp_v0_3 < -0x1554) {
        arg0->unk_370 = -0x1554;
        return;
    }
    phi_v1_2 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x1555) {
        phi_v1_2 = 0x1554;
    }
    arg0->unk_370 = phi_v1_2;
}

void func_80AF8AC8(EnPm *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    void *temp_v0;
    s16 phi_v1;
    s16 phi_v1_2;

    if (((arg0->unk_356 & 0x20) != 0) && (temp_v0 = arg0->unk_268, (temp_v0 != 0)) && (temp_v0->update != 0)) {
        temp_v0_2 = arg0->unk_376;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_376 = temp_v0_2 - 1;
            phi_v1 = arg0->unk_376;
        }
        if (phi_v1 == 0) {
            func_80AF898C();
            temp_t2 = arg0->unk_356 & 0xFDFF;
            temp_t3 = temp_t2 | 0x80;
            arg0->unk_356 = temp_t2;
            arg0->unk_356 = temp_t3;
            return;
        }
        goto block_8;
    }
block_8:
    temp_v0_3 = arg0->unk_356;
    if ((temp_v0_3 & 0x80) != 0) {
        arg0->unk_356 = temp_v0_3 & 0xFF7F;
        arg0->unk_370 = 0;
        arg0->unk_372 = 0;
        arg0->unk_376 = 0x14;
        return;
    }
    temp_v0_4 = arg0->unk_376;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk_376 = temp_v0_4 - 1;
        phi_v1_2 = arg0->unk_376;
    }
    if (phi_v1_2 == 0) {
        arg0->unk_356 |= 0x200;
    }
}

void func_80AF8BA8(s32 arg0) {
    s32 temp_t3;
    s32 temp_v0_2;
    u16 temp_t4;
    u16 temp_v0;

    if ((gSaveContext.weekEventReg[88] & 2) == 0) {
        temp_v0 = *(&D_80AFB8D4 + (arg0 * 2));
        if ((temp_v0 & 0xFF & gSaveContext.weekEventReg[(s32) temp_v0 >> 8]) != 0) {
            temp_v0_2 = gSaveContext.day;
            if (temp_v0_2 != 2) {
                if (temp_v0_2 != 3) {

                } else {
                    gSaveContext.weekEventReg[28] |= 0x10;
                }
            } else {
                gSaveContext.weekEventReg[28] |= 8;
            }
            gSaveContext.weekEventReg[51] |= 2;
            gSaveContext.weekEventReg[90] |= 8;
        }
    }
    temp_t4 = *(&D_80AFB8E0 + (arg0 * 2));
    temp_t3 = (s32) temp_t4 >> 8;
    gSaveContext.weekEventReg[temp_t3] |= temp_t4;
}

void func_80AF8C68(void *arg0, void *arg1) {
    void *sp2C;
    s32 sp28;
    s32 temp_v0;
    u16 temp_a0;

    sp2C = arg1->unk_1CCC;
    temp_v0 = func_80152498(arg1 + 0x4908);
    sp28 = temp_v0;
    temp_a0 = arg1->unk_1680C;
    if ((arg0 == sp2C->unk_A88) && (((s32) temp_a0 < 0xFF) || ((s32) temp_a0 >= 0x201)) && (temp_v0 == 3) && (arg0->unk_388 == 3)) {
        if (((u32) arg1->unk_9C % 3U) == 0) {
            if (arg0->unk_360 == 120.0f) {
                arg0->unk_360 = 0.0f;
            } else {
                arg0->unk_360 = 120.0f;
            }
        }
    } else {
        arg0->unk_360 = 0.0f;
    }
    Math_SmoothStepToF(arg0 + 0x364, arg0->unk_360, 0.8f, 40.0f, 10.0f);
    SysMatrix_InsertTranslation(arg0->unk_364, 0.0f, 0.0f, 1);
    arg0->unk_388 = sp28;
}

? func_80AF8D84(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = arg0[2].uncullZoneForward;
    if (temp_v0 != 7) {
        if (temp_v0 == 0xA) {
            func_80AF7E98((Actor *)9);
        }
    } else {
        func_80AF7E98(NULL);
    }
    return 1;
}

? func_80AF8DD4(Actor *arg0, GlobalContext *arg1) {
    u16 sp2A;
    s32 sp20;
    ? (*temp_v0_3)(Actor *, GlobalContext *);
    s32 temp_v0;
    u16 temp_a2;
    u16 temp_v0_2;
    u16 phi_a2;

    temp_a2 = arg1->msgCtx.unk11F04;
    phi_a2 = temp_a2;
    if ((arg1->actorCtx.actorList[2].first->unk_A6C & 0x440) != 0) {
        arg0->unk_356 = (u16) (arg0->unk_356 | 0x400);
        if (temp_a2 != arg0->unk_358) {
            temp_v0 = arg0[2].uncullZoneForward;
            if ((temp_v0 == 0) || (temp_v0 == 1)) {
                sp20 = (s32) temp_a2;
                sp2A = temp_a2;
                func_80AF7E98(arg0, 7, temp_a2);
            }
            phi_a2 = arg1->msgCtx.unk11F04;
            if ((arg1->msgCtx.unk11F04 == 0x277C) || (arg1->msgCtx.unk11F04 == 0x277D)) {
                sp2A = arg1->msgCtx.unk11F04;
                func_80AF7E98(arg0, 0xA, arg1->msgCtx.unk11F04);
                phi_a2 = arg1->msgCtx.unk11F04;
            }
        }
        arg0->unk_358 = phi_a2;
    } else {
        temp_v0_2 = arg0->unk_356;
        if ((temp_v0_2 & 0x400) != 0) {
            arg0->unk_358 = 0U;
            arg0->unk_356 = (u16) (temp_v0_2 & 0xFBFF);
            func_80AF8D84(arg0, arg1, temp_a2);
        }
    }
    temp_v0_3 = arg0->unk_18C;
    if (temp_v0_3 != 0) {
        temp_v0_3(arg0, arg1);
    }
    return 0;
}

s32 func_80AF8ED4(Actor *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4) {
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
    sp4F = (u8) arg0->params;
    arg0[1].projectedPos.y = NULL;
    temp_v0 = func_80AF7CB0(arg0, arg1, arg3, arg4);
    temp_a2 = *(&D_80AFB430 + (*arg2 * 4));
    phi_v1 = temp_v0;
    if (temp_a2 >= 0) {
        sp2C = temp_v0;
        arg0[1].projectedPos.y = func_8013BB34(arg1, sp4F, temp_a2);
        phi_v1 = sp2C;
    }
    if ((phi_v1 != 0) && (phi_v1->update != 0)) {
        temp_v0_2 = arg0[1].projectedPos.y;
        if (temp_v0_2 != 0) {
            temp_v0_3 = Lib_SegmentedToVirtual((void *) temp_v0_2->points);
            sp48 = temp_v0_3;
            Math_Vec3s_ToVec3f((Vec3f *) &sp3C, ((arg0[1].projectedPos.y->count * 6) + temp_v0_3) - 0xC);
            Math_Vec3s_ToVec3f((Vec3f *) &sp30, ((arg0[1].projectedPos.y->count * 6) + sp48) - 6);
            arg0->shape.shadowDraw = NULL;
            arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp3C, (Vec3f *) &sp30);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp30);
            sp24 = 1;
        }
    }
    return sp24;
}

s32 func_80AF9008(Actor *arg0, GlobalContext *arg1, void *arg2) {
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
    u16 temp_t5;
    void *temp_v0_2;
    s32 phi_v1;

    sp56 = gSaveContext.time - 0x3FFC;
    sp2C = 0;
    sp55 = (u8) arg0->params;
    arg0[1].projectedPos.y = NULL;
    sp50 = func_80AF7D60(arg1, arg2->unk_0);
    temp_a2 = *(&D_80AFB430 + (arg2->unk_0 * 4));
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
            Math_Vec3f_Copy(arg0 + 0x26C, (Vec3f *) &sp40);
            Math_Vec3f_Copy(arg0 + 0x278, (Vec3f *) &sp34);
            arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp40, (Vec3f *) &sp34);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
            temp_v0_3 = arg0->world.rot.y - sp50->unk_BE;
            phi_v1 = (s32) temp_v0_3;
            if ((s32) temp_v0_3 < 0) {
                phi_v1 = -(s32) temp_v0_3;
            }
            if (phi_v1 < 0x4001) {
                arg0[1].colorFilterTimer = -0x4B;
            } else {
                arg0[1].colorFilterTimer = 0x4B;
            }
            arg0->unk_36C = (s16) (arg2->unk_8 - arg2->unk_4);
            arg0->flags &= -2;
            arg0->unk_36E = (s16) (sp56 - arg2->unk_4);
            if ((gSaveContext.weekEventReg[90] & 8) != 0) {
                arg0->unk_356 = (u16) (arg0->unk_356 | 0x800);
            }
            temp_t5 = arg0->unk_356 | 0x9000;
            arg0->unk_356 = temp_t5;
            arg0->unk_356 = (u16) (temp_t5 | 0x200);
            func_80AF7E98(arg0, 0);
            arg0->gravity = 0.0f;
            sp2C = 1;
        }
    }
    return sp2C;
}

s32 func_80AF91E8(Actor *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp2E;
    u8 sp2B;
    s32 sp20;
    Path *temp_v0;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_v0_3;
    u16 temp_t7;
    u16 temp_t7_2;
    u16 temp_t8;
    u16 temp_t9;
    u8 temp_t3;
    u8 temp_v0_2;
    Path *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    sp2B = arg0->params & 0xFF;
    arg0[1].projectedPos.y = NULL;
    temp_t0 = gSaveContext.time - 0x3FFC;
    temp_a3 = *(&D_80AFB430 + (arg2->unk_0 * 4));
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
        if (((s32) temp_v0_2 < 0x26) && (temp_v0_2 != 0) && ((s32) arg0->unk_374 >= 0)) {
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
        arg0[1].prevPos.x = temp_lo;
        temp_t7 = arg0->unk_356 & ~8;
        temp_t9 = temp_t7 & 0xFFFF & ~0x10;
        arg0->unk_356 = temp_t7;
        arg0[1].prevPos.y = ((s32) arg0[1].prevPos.z / temp_lo) + 2;
        arg0->unk_356 = temp_t9;
        if (arg0[1].isTargeted == 0x1B) {
            Audio_PlayActorSound2(arg0, 0x29ADU);
            Actor_UnsetSwitchFlag(arg1, 0);
        }
        temp_t3 = arg2->unk_0;
        switch (temp_t3) {
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
            temp_t7_2 = arg0->unk_356 | 0x9000;
            arg0->unk_356 = temp_t7_2;
            arg0->unk_356 = (u16) (temp_t7_2 | 0x200);
            /* fallthrough */
        case 82:
            func_80AF7E98(arg0, 0);
            break;
        case 91:
            arg0->unk_356 = (u16) (arg0->unk_356 | 0x9000);
            func_80AF7E98(arg0, 0xC);
            break;
        default:
            func_8013AED4(arg0 + 0x356, 3U, 7U);
            func_80AF7E98(arg0, 0);
            if ((gSaveContext.weekEventReg[90] & 8) != 0) {
                arg0->unk_356 = (u16) (arg0->unk_356 | 0x800);
            }
            temp_t8 = arg0->unk_356 | 0x9000;
            arg0->unk_356 = temp_t8;
            arg0->unk_356 = (u16) (temp_t8 | 0x200);
            break;
        }
        arg0->gravity = -1.0f;
        phi_v1_2 = 1;
    }
    return phi_v1_2;
}

s32 func_80AF94AC(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    u8 sp4F;
    ? sp40;
    ? sp34;
    void *sp30;
    s32 sp28;
    Path *temp_v0;
    s32 temp_a3;
    void *temp_v0_2;
    s32 phi_v1;

    sp4F = (u8) arg0->params;
    arg0[1].projectedPos.y = NULL;
    temp_a3 = *(&D_80AFB430 + (*arg2 * 4));
    phi_v1 = 0;
    if (temp_a3 >= 0) {
        sp28 = 0;
        arg0[1].projectedPos.y = func_8013BB34(arg1, sp4F, temp_a3);
        phi_v1 = sp28;
    }
    temp_v0 = arg0[1].projectedPos.y;
    if ((temp_v0 != 0) && ((s32) temp_v0->count >= 2)) {
        temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
        sp30 = temp_v0_2;
        Math_Vec3s_ToVec3f((Vec3f *) &sp40, (Vec3s *) temp_v0_2);
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, sp30 + 6);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp40, (Vec3f *) &sp34);
        Math_Vec3s_Copy(arg0 + 0xBC, arg0 + 0x30);
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
        Math_Vec3f_Copy(arg0 + 0x108, (Vec3f *) &sp40);
        if (*arg2 == 0x18) {
            Actor_UnsetSwitchFlag(arg1, 0);
            Actor_UnsetSwitchFlag(arg1, 1);
            arg0[2].prevPos.y = 0.0f;
            arg0[2].shape.feetPos[1].x = 60.0f;
            func_80AF7E98(arg0, 9);
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80AF95E8(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    u8 sp4F;
    ? sp40;
    ? sp34;
    void *sp30;
    s32 sp28;
    Path *temp_v0_2;
    s32 temp_a3;
    u16 temp_t8;
    u8 temp_v0;
    u8 temp_v0_4;
    void *temp_v0_3;
    s32 phi_a3;
    u8 phi_v0;
    s32 phi_v1;

    sp4F = (u8) arg0->params;
    temp_v0 = *arg2;
    phi_a3 = -1;
    switch (temp_v0) {                              /* switch 1 */
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
        phi_a3 = temp_v0 - 3;
        break;
    case 19:                                        /* switch 1 */
        phi_a3 = 4;
        break;
    }
    if ((phi_a3 >= 0) && (sp28 = 0, (func_80AF7DC4(arg0, arg1, (s16) phi_a3, phi_a3) == 0))) {
        return 0;
    }
    arg0[1].projectedPos.y = NULL;
    temp_a3 = *(&D_80AFB430 + (*arg2 * 4));
    if (temp_a3 >= 0) {
        sp28 = 0;
        arg0[1].projectedPos.y = func_8013BB34(arg1, sp4F, temp_a3);
    }
    temp_v0_2 = arg0[1].projectedPos.y;
    phi_v1 = 0;
    if ((temp_v0_2 != 0) && ((s32) temp_v0_2->count >= 2)) {
        temp_v0_3 = Lib_SegmentedToVirtual((void *) temp_v0_2->points);
        sp30 = temp_v0_3;
        Math_Vec3s_ToVec3f((Vec3f *) &sp40, ((arg0[1].projectedPos.y->count * 6) + temp_v0_3) - 6);
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, ((arg0[1].projectedPos.y->count * 6) + sp30) - 0xC);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40);
        Math_Vec3s_Copy(arg0 + 0xBC, arg0 + 0x30);
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
        Math_Vec3f_Copy(arg0 + 0x108, (Vec3f *) &sp40);
        temp_v0_4 = *arg2;
        phi_v0 = temp_v0_4;
        switch (temp_v0_4) {                        /* switch 2 */
        case 27:                                    /* switch 2 */
            Audio_PlayActorSound2(arg0, 0x29ADU);
            Actor_SetSwitchFlag(arg1, 0);
            arg0->unk_36C = 0x14;
            func_8013AED4(arg0 + 0x356, 3U, 7U);
            func_80AF7E98(arg0, 3);
            break;
        case 3:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
        case 7:                                     /* switch 2 */
        case 19:                                    /* switch 2 */
            arg0->unk_356 = (u16) (arg0->unk_356 | 0x9000);
            func_80AF7E98(arg0, 0xB);
            break;
        case 18:                                    /* switch 2 */
            temp_t8 = arg0->unk_356 | 0x9000;
            arg0->unk_356 = temp_t8;
            arg0->unk_356 = (u16) (temp_t8 | 0x800);
            func_80AF7E98(arg0, 5);
            break;
        case 23:                                    /* switch 2 */
            if ((gSaveContext.weekEventReg[90] & 8) != 0) {
                arg0->unk_356 = (u16) (arg0->unk_356 | 0x800);
            }
            gSaveContext.weekEventReg[60] |= 4;
            phi_v0 = *arg2;
            /* fallthrough */
        default:                                    /* switch 2 */
            if (phi_v0 == 0x1D) {
                arg0->world.rot.y += 0x8000;
            }
            func_8013AED4(arg0 + 0x356, 3U, 7U);
            arg0->unk_356 = (u16) (arg0->unk_356 | 0x9000);
            func_80AF7E98(arg0, 3);
            break;
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80AF98A0(Actor *arg0, GlobalContext *arg1, ? arg2) {
    s32 sp3C;
    s32 phi_v1;

    sp3C = 0;
    phi_v1 = sp3C;
    if (Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x17D, 116.0f, 26.0f, -219.0f, (s16) 0, (s16) -0x3F46, (s16) 0, 0) != 0) {
        Actor_MarkForDeath(arg0);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80AF992C(Actor *arg0, ? arg1, u8 *arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80AFB8EC);
    temp_a2 = arg0 + 0x30;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80AFB8F8);
    Math_Vec3s_Copy(arg0 + 0xBC, sp20);
    func_8013AED4(arg0 + 0x356, 3U, 7U);
    arg0->targetMode = 6;
    arg0->gravity = -1.0f;
    arg0[2].shape.feetPos[1].x = 80.0f;
    if (*arg2 == 0xE) {
        arg0->unk_356 = (u16) (arg0->unk_356 & 0xFDFF);
        func_80AF7E98(arg0, 0xD);
    } else {
        arg0->unk_356 = (u16) (arg0->unk_356 & 0xFDFF);
        func_80AF7E98(arg0, 8);
    }
    return 1;
}

s32 func_80AF9A0C(Actor *arg0) {
    s32 sp2C;
    s32 temp_t9;
    u16 temp_t0;
    u16 temp_t8;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_80AF8ED4(arg0, (GlobalContext *)4, (u8 *)0x202) != 0) {
        func_8013AED4(arg0 + 0x356, 3U, 7U);
        temp_t8 = arg0->unk_356 | 0x20;
        temp_t9 = temp_t8 & 0xFFFF;
        arg0->unk_356 = temp_t8;
        temp_t0 = temp_t9 | 0x9000;
        arg0->unk_356 = temp_t0;
        if (arg0[1].isTargeted != 0) {
            arg0->unk_356 = (u16) (temp_t0 | 0x800);
            func_80AF7E98(arg0, 5);
        } else {
            func_80AF7E98(arg0, 3);
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80AF9AB0(Actor *arg0) {
    s32 sp2C;
    s32 temp_t9;
    u16 temp_t0;
    u16 temp_t8;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_80AF8ED4(arg0, (GlobalContext *)4, (u8 *)0x159) != 0) {
        func_8013AED4(arg0 + 0x356, 3U, 7U);
        temp_t8 = arg0->unk_356 | 0x20;
        temp_t9 = temp_t8 & 0xFFFF;
        arg0->unk_356 = temp_t8;
        temp_t0 = temp_t9 | 0x9000;
        arg0->unk_356 = temp_t0;
        if (arg0[1].isTargeted != 0) {
            arg0->unk_356 = (u16) (temp_t0 | 0x800);
            func_80AF7E98(arg0, 5);
        } else {
            func_80AF7E98(arg0, 3);
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80AF9B54(Actor *arg0) {
    s32 sp2C;
    s32 temp_t9;
    u16 temp_t0;
    u16 temp_t8;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_80AF8ED4(arg0, (GlobalContext *)4, (u8 *)0x262) != 0) {
        func_8013AED4(arg0 + 0x356, 3U, 7U);
        temp_t8 = arg0->unk_356 | 0x9000;
        temp_t9 = temp_t8 & 0xFFFF;
        arg0->unk_356 = temp_t8;
        temp_t0 = temp_t9 | 0x20;
        arg0->unk_356 = temp_t0;
        if (arg0[1].isTargeted != 0) {
            arg0->unk_356 = (u16) (temp_t0 | 0x800);
            func_80AF7E98(arg0, 5);
        } else {
            func_80AF7E98(arg0, 3);
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80AF9BF8(EnPm *arg0, u8 *arg2) {
    u8 temp_t8;
    s32 phi_v1;

    arg0->actor.flags |= 1;
    arg0->actor.targetMode = 0;
    arg0->unk_394 = 0;
    arg0->unk_356 = 0;
    arg0->unk_368 = 40.0f;
    temp_t8 = *arg2;
    switch (temp_t8) {
    case 16:
        phi_v1 = func_80AF9A0C();
        break;
    case 17:
        phi_v1 = func_80AF9AB0();
        break;
    case 28:
        phi_v1 = func_80AF9B54();
        break;
    case 24:
        phi_v1 = func_80AF94AC();
        break;
    case 29:
        phi_v1 = func_80AF95E8();
        break;
    case 1:
    case 2:
    case 10:
    case 11:
    case 12:
    case 13:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
        phi_v1 = func_80AF9008();
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 18:
    case 19:
    case 23:
    case 25:
    case 27:
        phi_v1 = func_80AF95E8();
        break;
    case 8:
        phi_v1 = func_80AF98A0();
        break;
    case 9:
    case 14:
    case 20:
    case 21:
    case 22:
        phi_v1 = func_80AF992C();
        break;
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
        phi_v1 = func_80AF91E8();
        break;
    default:
        phi_v1 = 0;
        break;
    }
    return phi_v1;
}

? func_80AF9D04(Actor *arg0, GlobalContext *arg1) {
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

    sp44 = func_80AF7D60(arg1, arg0[1].isTargeted);
    if ((func_8013AD6C(arg1) == 0) && (arg0->unk_374 != 0)) {
        if ((sp44 != 0) && (sp44->unk_138 != 0)) {
            if (((f32) arg0->unk_36E / (f32) arg0->unk_36C) <= 0.9f) {
                sp44->unk_1A7 = (s8) arg0[1].colorFilterTimer;
            } else {
                sp44->unk_1A7 = 0;
            }
        }
        temp_v0 = arg0->unk_36E;
        if ((s32) temp_v0 < 0) {
            arg0->unk_36E = 0;
        } else {
            temp_v1 = arg0->unk_36C;
            phi_a0 = temp_v0;
            if ((s32) temp_v1 < (s32) temp_v0) {
                phi_a0 = temp_v1;
            }
            arg0->unk_36E = phi_a0;
        }
        temp_a0 = arg0 + 0x26C;
        sp28 = temp_a0;
        temp_f0 = Math_Vec3f_DistXZ(temp_a0, arg0 + 0x278);
        sp38 = 0.0f;
        sp3C = 0.0f;
        sp40 = (f32) arg0->unk_36E * (temp_f0 / (f32) arg0->unk_36C);
        Lib_Vec3f_TranslateAndRotateY(temp_a0, arg0->world.rot.y, (Vec3f *) &sp38, arg0 + 0x24);
        temp_a0_2 = arg0 + 0x144;
        arg0->unk_36E = (s16) (arg0->unk_36E + arg0->unk_374);
        sp28 = temp_a0_2;
        if ((func_801378B8((SkelAnime *) temp_a0_2, 3.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_2, 8.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x284AU);
        }
    }
    return 0;
}

? func_80AF9E7C(Actor *arg0, GlobalContext *arg1) {
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
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a1;
    Vec3f *phi_v1;

    sp50 = 0;
    sp54 = 0;
    func_8013AF00((void *) &sp7C, 3, arg0[1].projectedPos.y->count + 3);
    temp_v1 = arg0 + 0x238;
    phi_v1 = temp_v1;
    if ((arg0->unk_356 & 8) == 0) {
        temp_v0 = arg0 + 0x250;
        sp58.unk_0 = D_801D15B0.x;
        temp_a1 = arg0 + 0x244;
        (&sp58)[1] = D_801D15B0.y;
        temp_a2 = arg0 + 0x254;
        (&sp58)[2] = D_801D15B0.z;
        sp44 = temp_a2;
        sp48 = temp_a1;
        sp40 = temp_v0;
        func_8013B6B0(arg0[1].projectedPos.y, temp_a1, temp_a2, arg0[1].prevPos.x, arg0[1].uncullZoneDownward, temp_v0, (void *) &sp7C, (Vec3f *) &sp58, (s16) (s32) arg0->unk_374);
        func_8013B878(arg1, arg0[1].projectedPos.y, arg0[1].prevPos.y, (Vec3f *) &sp58);
        arg0->unk_356 = (u16) (arg0->unk_356 | 8);
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
    if (func_8013B6B0(arg0[1].projectedPos.y, sp48, sp44, arg0[1].prevPos.x, arg0[1].uncullZoneDownward, sp40, (void *) &sp7C, phi_v1, (s16) (s32) arg0->unk_374) != 0) {
        arg0->unk_356 = (u16) (arg0->unk_356 | 0x10);
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
        if ((arg0[1].isTargeted != 0x5B) && ((sp48 = temp_a0, (func_801378B8((SkelAnime *) temp_a0, 3.0f) != 0)) || (func_801378B8((SkelAnime *) temp_a0, 8.0f) != 0))) {
            Audio_PlayActorSound2(arg0, 0x284AU);
        }
    }
    if (((arg0->unk_356 & 0x10) != 0) && (arg0[1].isTargeted == 0x5A)) {
        temp_v0_2 = (gSaveContext.weekEventReg[89] | 0x40) & 0xFF;
        gSaveContext.weekEventReg[89] = temp_v0_2;
        if (temp_v0_2 == 0) {
            gSaveContext.weekEventReg[89] = temp_v0_2 | 0x40;
        }
    }
    return 0;
}

? func_80AFA170(Actor *arg0, ? arg1) {
    ? sp34;
    ? sp28;
    Actor *temp_v0_3;
    s16 temp_v0;
    u8 temp_t6;
    u8 temp_v0_2;
    s16 phi_v1;

    temp_t6 = arg0[1].isTargeted;
    switch (temp_t6) {
    case 28:
        if ((s32) gSaveContext.time >= 0x1199) {
            gSaveContext.weekEventReg[89] |= 8;
        }
        /* fallthrough */
    case 16:
    case 17:
    case 18:
        if ((arg0[2].uncullZoneForward == 5) && (func_801378B8(arg0 + 0x144, arg0[1].home.pos.z) != 0)) {
            func_80AF7E98(arg0, 6);
            arg0->unk_36C = 0x28;
        } else if ((bitwise s32) arg0[2].uncullZoneForward == 6) {
            temp_v0 = arg0->unk_36C;
            if (temp_v0 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk_36C = (s16) (temp_v0 - 1);
                phi_v1 = arg0->unk_36C;
            }
            if (phi_v1 == 0) {
                arg0->unk_356 = (u16) (arg0->unk_356 & 0xF7FF);
                func_80AF7E98(arg0, 4);
            }
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 19:
        if (((bitwise s32) arg0[2].uncullZoneForward == 0xB) && (func_801378B8((SkelAnime *) &arg0[1], arg0[1].home.pos.z) != 0)) {
            func_80AF7E98(arg0, 4);
        }
        if (((bitwise s32) arg0[2].uncullZoneForward == 0xB) && (func_801378B8((SkelAnime *) &arg0[1], 8.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x284BU);
        }
        temp_v0_2 = arg0[1].isTargeted;
        if (temp_v0_2 == 0x13) {
            func_80AF8BA8(4);
        } else {
            func_80AF8BA8(temp_v0_2 - 3);
        }
        break;
    }
    temp_v0_3 = arg0[1].child;
    if ((temp_v0_3 != 0) && (temp_v0_3->update != 0)) {
        Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &temp_v0_3->world);
        Math_Vec3f_Copy((Vec3f *) &sp28, (Vec3f *) &arg0->world);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp28, (Vec3f *) &sp34);
    }
    return 1;
}

? func_80AFA334(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_t6;
    s32 phi_v1;
    s16 phi_v1_2;

    temp_t6 = arg0[1].isTargeted;
    switch (temp_t6) {
    case 14:
    case 24:
        temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 < 0x4000) {
            func_8013AED4(arg0 + 0x356, 3U, 7U);
        } else {
            func_8013AED4(arg0 + 0x356, 0U, 7U);
        }
        break;
    case 27:
        temp_v0_2 = arg0->unk_36C;
        if (temp_v0_2 == 0) {
            phi_v1_2 = 0;
        } else {
            arg0->unk_36C = (s16) (temp_v0_2 - 1);
            phi_v1_2 = arg0->unk_36C;
        }
        if (phi_v1_2 == 0) {
            Actor_SetSwitchFlag(arg1, 1);
        }
        break;
    case 9:
    case 20:
    case 21:
    case 22:
        temp_a0 = arg0 + 0x144;
        arg0 = arg0;
        if (func_801378B8(temp_a0, 0.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x684BU);
        }
        break;
    }
    return 0;
}

void func_80AFA438(Actor *arg0) {
    u8 temp_t7;

    temp_t7 = arg0[1].isTargeted;
    switch (temp_t7) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 16:
    case 17:
    case 18:
    case 28:
        func_80AFA170(arg0);
        break;
    case 1:
    case 2:
    case 10:
    case 11:
    case 12:
    case 13:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
        func_80AF9D04(arg0);
        break;
    case 9:
    case 14:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 27:
    case 29:
        func_80AFA334(arg0);
        break;
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
        func_80AF9E7C(arg0);
        break;
    }
    Math_ApproachS(&arg0->shape.rot.y, arg0->world.rot.y, 3, 0x2AA8);
}

void func_80AFA4D0(EnPm *this, GlobalContext *globalCtx) {
    u16 sp3C;
    u8 sp2C;
    u16 temp_v0;
    u16 phi_t1;

    this->unk_374 = gSaveContext.unk_14 + gGameInfo->data[15];
    phi_t1 = 0U;
    if (this->unk_38C != 0) {
        temp_v0 = gSaveContext.time;
        gSaveContext.time = temp_v0 - D_801F4E78;
        phi_t1 = temp_v0 & 0xFFFF;
    }
    sp3C = phi_t1;
    if ((func_80133038(globalCtx, *(&D_80AFB900 + (this->unk_38C * 4)), (struct_80133038_arg2 *) &sp2C) == 0) || ((sp2C != this->unk_258) && (func_80AF9BF8(this, (u8 *) globalCtx, &sp2C) == 0))) {
        this->actor.shape.shadowDraw = NULL;
        this->actor.flags &= -2;
        sp2C = 0;
    } else {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    }
    this->unk_258 = sp2C;
    this->unk_268 = func_80AF8040(this, globalCtx);
    func_80AFA438((Actor *) this, globalCtx);
    if (this->unk_38C != 0) {
        gSaveContext.time = sp3C;
    }
}

void func_80AFA5FC(EnPm *this, GlobalContext *globalCtx) {
    ? sp38;
    ? sp2C;
    Actor *temp_v0_2;
    u16 temp_t9;
    u8 temp_v0;

    if (func_8010BF58((Actor *) this, globalCtx, this->unk_25C, this->unk_37C, &this->unk_264) != 0) {
        func_8013AED4(&this->unk_356, 3U, 7U);
        temp_t9 = this->unk_356 & 0xFFDF;
        this->unk_356 = temp_t9;
        this->unk_356 = temp_t9 | 0x200;
        this->actor.child = NULL;
        this->unk_376 = 0x14;
        this->unk_264 = 0;
        this->actionFunc = func_80AFA4D0;
        return;
    }
    temp_v0 = this->unk_258;
    if ((temp_v0 != 9) && (temp_v0 != 0xE) && (temp_v0 != 0x10) && (temp_v0 != 0x11) && (temp_v0 != 0x14) && (temp_v0 != 0x15) && (temp_v0 != 0x16) && (temp_v0 != 0x18) && (temp_v0 != 0x19)) {
        temp_v0_2 = this->unk_268;
        if ((temp_v0_2 != 0) && (temp_v0_2->update != 0)) {
            Math_Vec3f_Copy((Vec3f *) &sp38, (Vec3f *) &temp_v0_2->world);
            Math_Vec3f_Copy((Vec3f *) &sp2C, (Vec3f *) &this->actor.world);
            Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp2C, (Vec3f *) &sp38), 4, 0x2AA8);
        }
    }
}

void func_80AFA724(Actor *arg0, GlobalContext *arg1) {
    Actor *sp24;
    Actor *temp_a0;

    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Actor_UpdateBgCheckInfo(arg1, arg0, 30.0f, 12.0f, 0.0f, 4U);
    temp_a0 = &arg0[1];
    sp24 = temp_a0;
    if ((func_801378B8((SkelAnime *) temp_a0, 3.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 8.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x284AU);
    }
}

void EnPm_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPm *this = (EnPm *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 14.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_060096E8, NULL, &this->unk_296, &this->unk_2F6, 0x10);
    this->unk_384 = -1;
    func_80AF7E98((Actor *) this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_190, (Actor *) this, &D_80AFB790);
    Collider_InitAndSetSphere(globalCtx, &this->unk_1DC, (Actor *) this, &D_80AFB7BC);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80AFB7E8);
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_38C = func_80AF7B40();
    this->unk_258 = 0;
    this->unk_356 = 0;
    this->actionFunc = func_80AFA4D0;
    func_80AFA4D0(this, globalCtx);
}

void EnPm_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPm *this = (EnPm *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_190);
    Collider_DestroySphere(globalCtx, &this->unk_1DC);
}

void EnPm_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPm *this = (EnPm *) thisx;
    if ((func_80AF86F0((Actor *) this, globalCtx) == 0) && (func_80AF87C4(this, globalCtx) != 0)) {
        func_80AFA724((Actor *) this, globalCtx);
        func_80AF7E6C(this);
        func_80AF8AC8(this);
        return;
    }
    this->actionFunc(this, globalCtx);
    func_80AF7BAC(this);
    if (this->unk_258 != 0) {
        func_80AF8DD4((Actor *) this, globalCtx);
        func_80AF7E6C(this);
        func_80AF8AC8(this);
        func_8013C964((Actor *) this, globalCtx, this->unk_368, 30.0f, this->unk_394, (s16) (this->unk_356 & 7));
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
        func_80AF7F68((Actor *) this, globalCtx);
    }
}

? func_80AFAA04(void *arg0, s32 arg1, ? arg2, ? arg3, void *arg5) {
    if (arg1 == 0xF) {
        func_80AF8C68(arg5, arg0, arg0);
    }
    return 0;
}

void func_80AFAA44(s32 arg0, s32 arg1, ? arg2, ? arg3, void *arg4, void **arg5) {
    ? sp2C;
    u8 temp_v0;

    if (arg1 != 8) {
        if (arg1 != 0xB) {
            if (arg1 == 0xF) {
                if (ActorCutscene_GetCurrentIndex() == -1) {
                    SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x3C);
                    Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
                }
                if (((arg4->unk_356 & 0x8000) != 0) && ((gSaveContext.weekEventReg[90] & 4) == 0)) {
                    func_80AF8890(arg4, arg5, 1);
                    return;
                }
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        if ((arg4->unk_356 & 0x800) != 0) {
            func_80AF8890(arg4, arg5, 0);
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = arg4->unk_258;
    if ((temp_v0 == 9) || (temp_v0 == 0x14) || (temp_v0 == 0x15) || (temp_v0 == 0x16)) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, (Vec3f *) &sp2C);
        Math_Vec3f_ToVec3s(arg4 + 0x224, (Vec3f *) &sp2C);
    } else if (temp_v0 == 0x18) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, (Vec3f *) &sp2C);
        Math_Vec3f_ToVec3s(arg4 + 0x224, (Vec3f *) &sp2C);
    }
    func_80AF8890(arg4, arg5, 2);
}

void func_80AFABAC(s32 arg0, s32 arg1, void *arg2, ? arg3) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk_356;
    phi_v1 = 0;
    if ((temp_v0 & 0x200) == 0) {
        if ((temp_v0 & 0x80) != 0) {
            phi_v0 = 1;
            phi_v1 = 1;
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 0xF) {
        func_8013AD9C((s16) (arg2->unk_370 + 0x4000), (s16) (arg2->unk_372 + arg2->unk_BE + 0x4000), arg2 + 0x284, arg2 + 0x290, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk_284, arg2->unk_288, arg2->unk_28C, 0);
        Matrix_Scale(arg2->unk_58, arg2->unk_5C, arg2->unk_60, 1);
        Matrix_RotateY(arg2->unk_292, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_290, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_294, 1);
        SysMatrix_StatePush();
    }
}

void EnPm_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp3C;
    Gfx *temp_v0;
    GraphicsContext *temp_s1;
    EnPm *this = (EnPm *) thisx;

    if (this->unk_258 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_s1 = globalCtx->state.gfxCtx;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060020;
        sp3C = temp_v0;
        sp3C->words.w1 = Lib_SegmentedToVirtual(*D_80AFB914);
        temp_s1->polyOpa.p = func_8013AB00(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, (void *) func_80AFAA04, (void *) func_80AFAA44, (void *) func_80AFABAC, (Actor *) this, temp_s1->polyOpa.p);
    }
}
