typedef struct EnAn {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnAn *, GlobalContext *);
    /* 0x18C */ char pad_18C[0x4];
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ char pad_1DC[0x24];
    /* 0x200 */ u8 unk_200;                         /* inferred */
    /* 0x201 */ char pad_201[0x3];                  /* maybe part of unk_200[4]? */
    /* 0x204 */ s32 *unk_204;                       /* inferred */
    /* 0x208 */ char pad_208[0x8];                  /* maybe part of unk_204[3]? */
    /* 0x210 */ s32 unk_210;                        /* inferred */
    /* 0x214 */ char pad_214[0x4];
    /* 0x218 */ Actor *unk_218;                     /* inferred */
    /* 0x21C */ char pad_21C[0x48];                 /* maybe part of unk_218[19]? */
    /* 0x264 */ Vec3s unk_264;                      /* inferred */
    /* 0x26A */ char pad_26A[0x78];                 /* maybe part of unk_264[21]? */
    /* 0x2E2 */ Vec3s unk_2E2;                      /* inferred */
    /* 0x2E8 */ char pad_2E8[0x78];                 /* maybe part of unk_2E2[21]? */
    /* 0x360 */ u16 unk_360;                        /* inferred */
    /* 0x362 */ char pad_362[0x12];                 /* maybe part of unk_360[10]? */
    /* 0x374 */ f32 unk_374;                        /* inferred */
    /* 0x378 */ char pad_378[0xC];                  /* maybe part of unk_374[4]? */
    /* 0x384 */ s16 unk_384;                        /* inferred */
    /* 0x386 */ char pad_386[0x2];
    /* 0x388 */ s16 unk_388;                        /* inferred */
    /* 0x38A */ char pad_38A[0xE];                  /* maybe part of unk_388[8]? */
    /* 0x398 */ void *unk_398;                      /* inferred */
    /* 0x39C */ s32 unk_39C;                        /* inferred */
    /* 0x3A0 */ char pad_3A0[0x20];                 /* maybe part of unk_39C[9]? */
    /* 0x3C0 */ s32 unk_3C0;                        /* inferred */
    /* 0x3C4 */ char pad_3C4[0x4];
} EnAn;                                             /* size = 0x3C8 */

struct _mips2c_stack_EnAn_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAn_Init {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnAn_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B53840 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B539CC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B53A7C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B53B3C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B53BA8 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ s8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B53CE8 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ s8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B53ED4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x14];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B53F84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B54124 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ GraphicsContext *sp4C;               /* inferred */
    /* 0x50 */ char pad_50[0x2];
    /* 0x52 */ s8 sp52;                             /* inferred */
    /* 0x53 */ s8 sp53;                             /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B54678 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B546F4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B54750 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B547C8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B5492C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B54A94 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B54BC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B54C5C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B54D18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B54DF4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B55180 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B552E4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B553AC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B554E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B555C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B556F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B557AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B55860 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B55914 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x6];                    /* maybe part of sp18[2]? */
    /* 0x22 */ u16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B55D20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B55D98 {
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

struct _mips2c_stack_func_80B55ECC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B55F8C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B5600C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B56094 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B5611C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B561A4 {
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

struct _mips2c_stack_func_80B56418 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x7];                    /* maybe part of sp20[2]? */
    /* 0x2B */ u8 sp2B;                             /* inferred */
    /* 0x2C */ char pad_2C[0x2];                    /* maybe part of sp2B[3]? */
    /* 0x2E */ u16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B56744 {
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

struct _mips2c_stack_func_80B56880 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3s *sp24;                         /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xF];
    /* 0x4F */ u8 sp4F;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B56B00 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3s *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B56BC0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3s *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B56CAC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3s *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B56D28 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B56E44 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B56EB4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0xC];                    /* maybe part of sp28[4]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B5702C {
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

struct _mips2c_stack_func_80B572D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B573F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B575BC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B57674 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B57718 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B577F0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B578F8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad_21[0xF];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B57A44 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B57B48 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ u32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x28];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B57EE8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B57FC4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B580C0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

? func_800E0308(Camera *, Actor *);                 /* extern */
void *func_8013A7C0(?);                             /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
s32 func_80B53840(EnAn *arg0, GlobalContext *arg1); /* static */
Actor *func_80B539CC(Actor *arg0, GlobalContext *arg1, u8 arg2, s16 arg3); /* static */
Actor *func_80B53A7C(s32 arg0, GlobalContext *arg1, s32 arg2, s16 arg3); /* static */
void *func_80B53B3C(GlobalContext *arg1, u8);       /* static */
s32 func_80B53BA8(EnAn *arg0, GlobalContext *arg1); /* static */
s32 func_80B53CE8(Actor *arg0, GlobalContext *arg1, s32 arg2, Actor *); /* static */
void func_80B53ED4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B53F84(EnAn *arg0);                     /* static */
void func_80B54124(Actor *arg0, GraphicsContext **arg1, u32 arg2); /* static */
s32 func_80B54678(Actor *arg0, s16 arg1, s32);      /* static */
s8 func_80B546F4(Actor *arg0, s32 arg1);            /* static */
s8 func_80B54750(Actor *arg0, s32 arg1);            /* static */
s32 func_80B547C8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B5492C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B54A94(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B54BC4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B54C5C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B54D18(Actor *arg0, GlobalContext *arg1); /* static */
? *func_80B54DF4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B55180(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B552E4(EnAn *arg0, GlobalContext *arg1); /* static */
void func_80B553AC(void *arg0);                     /* static */
void func_80B554E8(EnAn *arg0);                     /* static */
? func_80B555C8(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80B556F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B557AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B55860(Actor *arg0, GlobalContext *arg1); /* static */
? func_80B55914(Actor *arg0, Actor *arg1);          /* static */
Actor *func_80B55D20(EnAn *arg0, GlobalContext *arg1); /* static */
s32 func_80B55D98(Actor *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4); /* static */
s32 func_80B55ECC(Actor *arg0);                     /* static */
s32 func_80B55F8C(GlobalContext *arg0);             /* static */
s32 func_80B5600C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B56094(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B5611C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B561A4(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80B56418(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80B56744(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80B56880(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80B56B00(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80B56BC0(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80B56CAC(Actor *arg0, GlobalContext *arg1, ? arg2); /* static */
s32 func_80B56D28(EnAn *arg0, u8 *arg2, u8 *);      /* static */
? func_80B56E44(Actor *arg0, ? arg1);               /* static */
? func_80B56EB4(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80B5702C(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80B572D4(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80B573F4(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80B575BC(Actor *arg0, ? arg1);               /* static */
? func_80B57674(Actor *arg0, ? arg1);               /* static */
void func_80B57718(Actor *arg0, GlobalContext *);   /* static */
void func_80B57B48(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B57EE8(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B57FC4(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80B580C0(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000308;
extern ? D_06000378;
extern ? D_06000E70;
extern ? D_060111E8;
extern ? D_06012478;
extern FlexSkeletonHeader D_06012618;
extern ? D_0A000D40;
static void D_80B581D0;                             /* unable to generate initializer */
static ? D_80B58618;                                /* unable to generate initializer */
static ? D_80B58718;                                /* unable to generate initializer */
static ? D_80B58784;                                /* unable to generate initializer */
static ? D_80B58808;                                /* unable to generate initializer */
static ? D_80B5885C;                                /* unable to generate initializer */
static ? D_80B58938;                                /* unable to generate initializer */
static ? D_80B58944;                                /* unable to generate initializer */
static ? D_80B5894C;                                /* unable to generate initializer */
static ? D_80B58954;                                /* unable to generate initializer */
static ? D_80B58980;                                /* unable to generate initializer */
static ? D_80B58988;                                /* unable to generate initializer */
static ? D_80B58994;                                /* unable to generate initializer */
static ? D_80B5899C;                                /* unable to generate initializer */
static ? D_80B589AC;                                /* unable to generate initializer */
static ? D_80B589FC;                                /* unable to generate initializer */
static ? D_80B58A04;                                /* unable to generate initializer */
static ? D_80B58A24;                                /* unable to generate initializer */
static ? D_80B58A3C;                                /* unable to generate initializer */
static ? D_80B58A44;                                /* unable to generate initializer */
static ? D_80B58ABC;                                /* unable to generate initializer */
static ? D_80B58AC4;                                /* unable to generate initializer */
static ? D_80B58AE8;                                /* unable to generate initializer */
static ? D_80B58AF4;                                /* unable to generate initializer */
static ? D_80B58B3C;                                /* unable to generate initializer */
static ? D_80B58B7C;                                /* unable to generate initializer */
static ? D_80B58B88;                                /* unable to generate initializer */
static ? D_80B58B90;                                /* unable to generate initializer */
static ColliderCylinderInit D_80B58BBC = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xE, 0x3E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B58BE8 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80B58BF4[36] = {
    {(AnimationHeader *)0x6013E1C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6008B6C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6008B6C, 1.0f, 0, 0xFFFF, 0, 0xFFFA},
    {(AnimationHeader *)0x600544C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600544C, 1.0f, 0, 0xFFFF, 2, 0xFFFA},
    {(AnimationHeader *)0x60026B4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001E74, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6013048, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6013048, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60071E8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60071E8, 1.0f, 0, 0xFFFF, 0, 0xFFFA},
    {(AnimationHeader *)0x6007E08, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60065C8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6001090, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600144C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600341C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003EA8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60028DC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60042CC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60038A0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001B80, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600201C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002A4C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60012C0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60038A0, -1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6006CC0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6007E3C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60088C0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60013C8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6002550, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600353C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004498, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60060B4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600041C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004A78, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600506C, 1.0f, 0, 0xFFFF, 0, 0},
};
static Vec3f D_80B58E34 = {0.0f, 0.0f, 8.0f};
static ? D_80B58E40;                                /* unable to generate initializer */
static Vec3f D_80B58E54 = {190.0f, -130.0f, 0.0f};
static Vec3s D_80B58E60 = {0, 0, 0x4168};
static Vec3f D_80B58E68 = {450.0f, 700.0f, -760.0f};
static Vec3s D_80B58E74 = {0x238C, 0, 0xC004};
static Vec3f D_80B58E7C = {905.0f, 260.0f, -64.0f};
static Vec3s D_80B58E88 = {0, 0, 0};
static Vec3f D_80B58E90 = {-508.0f, 210.0f, -162.0f};
static Vec3s D_80B58E9C = {0, 0x3FFC, 0};
static Vec3s D_80B58EA4 = {0, 0xD553, 0};
static s32 D_80B58EAC[10] = {0, 0xB, 0x22, 0x19, 0x1A, 0x1C, 0x1E, 0x20, 0x21, 0};
static Vec3f D_80B58ED4 = {1000.0f, 0.0f, 0.0f};
static ? D_80B58EE0;                                /* unable to generate initializer */
static ? D_80B58EEC;                                /* unable to generate initializer */

s32 func_80B53840(EnAn *arg0, GlobalContext *arg1) {
    s32 sp24;
    void *sp20;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a0_3;
    s8 temp_a0_4;
    s8 temp_a0_5;

    sp24 = 0;
    if ((arg1->roomCtx.currRoom.num != arg0->unk_214) && (arg1->roomCtx.unk31 == 0) && (arg0->unk_3B8 == 0)) {
        sp20 = arg1 + 0x18000;
        arg0->unk_20C = func_8013D924(0x16, arg1);
        arg0->unk_20B = func_8013D924(0x1A, arg1);
        arg0->unk_20A = func_8013D924(0x1FF, arg1);
        arg0->unk_209 = func_8013D924(0xDD, arg1);
        arg0->unk_208 = func_8013D924(0xE0, arg1);
        arg0->actor.draw = NULL;
        arg0->unk_3B8 = 1;
        arg0->unk_214 = sp20->unk_6E0;
    }
    if (arg0->unk_3B8 == 0) {
        return 0;
    }
    temp_a0 = arg0->unk_208;
    if ((((s32) temp_a0 >= 0) && (func_8013D8DC(temp_a0, arg1) == 0)) || ((temp_a0_2 = arg0->unk_209, ((s32) temp_a0_2 >= 0)) && (func_8013D8DC(temp_a0_2, arg1) == 0)) || ((temp_a0_3 = arg0->unk_20A, ((s32) temp_a0_3 >= 0)) && (func_8013D8DC(temp_a0_3, arg1) == 0)) || ((temp_a0_4 = arg0->unk_20B, ((s32) temp_a0_4 >= 0)) && (func_8013D8DC(temp_a0_4, arg1) == 0)) || ((temp_a0_5 = arg0->unk_20C, ((s32) temp_a0_5 >= 0)) && (func_8013D8DC(temp_a0_5, arg1) == 0))) {
        sp24 = 1;
    } else {
        arg0->actor.draw = func_80B580C0;
        arg0->unk_3B8 = 0;
    }
    return sp24;
}

Actor *func_80B539CC(Actor *arg0, GlobalContext *arg1, u8 arg2, s16 arg3) {
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

Actor *func_80B53A7C(s32 arg0, GlobalContext *arg1, s32 arg2, s16 arg3) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, arg2 & 0xFF & 0xFF, (s32) arg3);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0 == arg0) || (temp_v0->update == 0) || ((temp_v0->params & 0x8000) != 0))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {

        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void *func_80B53B3C(GlobalContext *arg1) {
    ? phi_a1;

    switch (arg1) {
    case 26:
    case 27:
        phi_a1 = 0xD;
block_7:
        return func_8013A7C0(phi_a1);
    case 33:
    case 34:
    case 37:
    case 38:
        phi_a1 = 0xB;
        goto block_7;
    case 36:
        phi_a1 = 0x10;
        goto block_7;
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 35:
    case 39:
        phi_a1 = 0xE;
        goto block_7;
    default:
        return NULL;
    }
}

s32 func_80B53BA8(EnAn *arg0, GlobalContext *arg1) {
    s8 sp1F;
    s32 temp_t0;
    s32 temp_v0;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a0_3;
    s8 temp_a3;
    s32 phi_v1;
    s32 phi_t0;
    s32 phi_v1_2;

    temp_v0 = arg0->unk_39C;
    temp_a3 = arg0->actor.objBankIndex;
    phi_v1 = -1;
    phi_t0 = 0;
    if ((temp_v0 >= 0x19) && (temp_a0 = arg0->unk_20B, ((s32) temp_a0 >= 0))) {
        phi_v1_2 = temp_a0 << 0x18;
        goto block_11;
    }
    if ((temp_v0 >= 0x15) && (temp_a0_2 = arg0->unk_209, ((s32) temp_a0_2 >= 0))) {
        phi_v1_2 = temp_a0_2 << 0x18;
        goto block_11;
    }
    if ((temp_v0 >= 0x11) && (temp_a0_3 = arg0->unk_208, ((s32) temp_a0_3 >= 0))) {
        phi_v1_2 = temp_a0_3 << 0x18;
        goto block_11;
    }
    if (temp_v0 < 0x11) {
        phi_v1_2 = temp_a3 << 0x18;
block_11:
        phi_v1 = phi_v1_2 >> 0x18;
    }
    if (phi_v1 < 0) {
        return 0;
    }
    if (phi_v1 >= 0) {
        gSegments[6] = (arg1 + (phi_v1 * 0x44))->unk_17D98 + 0x80000000;
        arg0->unk_144.animPlaybackSpeed = arg0->unk_368;
        sp1F = temp_a3;
        temp_t0 = SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        gSegments[6] = (arg1 + (temp_a3 * 0x44))->unk_17D98 + 0x80000000;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

s32 func_80B53CE8(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    s8 sp1F;
    Actor *temp_a3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s8 temp_t1;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s32 phi_v1;
    s32 phi_t0;
    s32 phi_t2;
    s32 phi_v1_2;

    temp_a3 = arg0;
    temp_t1 = temp_a3->objBankIndex;
    phi_v1 = -1;
    phi_t0 = 0;
    phi_t2 = 0;
    if ((arg2 >= 0x19) && (temp_v0 = temp_a3->unk_20B, ((s32) temp_v0 >= 0))) {
        phi_v1_2 = temp_v0 << 0x18;
        goto block_11;
    }
    if ((arg2 >= 0x15) && (temp_v0_2 = temp_a3->unk_209, ((s32) temp_v0_2 >= 0))) {
        phi_v1_2 = temp_v0_2 << 0x18;
        goto block_11;
    }
    if ((arg2 >= 0x11) && (temp_v0_3 = temp_a3->unk_208, ((s32) temp_v0_3 >= 0))) {
        phi_v1_2 = temp_v0_3 << 0x18;
        goto block_11;
    }
    if (arg2 < 0x11) {
        phi_v1_2 = temp_t1 << 0x18;
block_11:
        phi_v1 = phi_v1_2 >> 0x18;
    }
    if (phi_v1 < 0) {
        return 0;
    }
    switch (arg2) {
    case 1:
    case 2:
        temp_v0_4 = temp_a3->unk_39C;
        if ((temp_v0_4 != 1) && (temp_v0_4 != 2)) {
block_26:
            phi_t0 = 1;
        }
        break;
    case 7:
    case 8:
        temp_v0_5 = temp_a3->unk_39C;
        if ((temp_v0_5 != 7) && (temp_v0_5 != 8)) {
            goto block_26;
        }
        break;
    case 9:
    case 10:
        temp_v0_6 = temp_a3->unk_39C;
        if ((temp_v0_6 != 9) && (temp_v0_6 != 0xA)) {
            goto block_26;
        }
        break;
    default:
        if (arg2 != temp_a3->unk_39C) {
            goto block_26;
        }
        break;
    }
    if ((phi_t0 != 0) && (phi_v1 >= 0)) {
        gSegments[6] = (arg1 + (phi_v1 * 0x44))->unk_17D98 + 0x80000000;
        temp_a3->unk_39C = arg2;
        sp1F = temp_t1;
        arg0 = temp_a3;
        temp_v0_7 = func_8013BC6C(temp_a3 + 0x144, D_80B58BF4, arg2);
        arg0[2].shape.feetPos[1].x = arg0->unk_160;
        gSegments[6] = (arg1 + (temp_t1 * 0x44))->unk_17D98 + 0x80000000;
        phi_t2 = temp_v0_7;
    }
    return phi_t2;
}

void func_80B53ED4(Actor *arg0, GlobalContext *arg1) {
    ? sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a2;
    Collider *phi_a2;

    temp_a2 = arg0 + 0x190;
    if (arg0->unk_200 == 0x19) {
        Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, arg0->shape.rot.y, &D_80B58E34, (Vec3f *) &sp24);
        arg0->unk_1D0 = 0x14;
        Math_Vec3f_ToVec3s(arg0 + 0x1D6, (Vec3f *) &sp24);
        phi_a2 = arg0 + 0x190;
    } else {
        sp20 = temp_a2;
        Collider_UpdateCylinder(arg0, temp_a2);
        phi_a2 = (Collider *) temp_a2;
    }
    arg0->unk_1D2 = (s16) (s32) (arg0->focus.pos.y - arg0->world.pos.y);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, phi_a2);
}

void func_80B53F84(EnAn *arg0) {
    s16 temp_t9;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 phi_v1;
    s32 phi_a1;
    EnAn *phi_a2;

    phi_a1 = 0;
    phi_a2 = arg0;
    if ((arg0->unk_360 & 0x100) != 0) {
        temp_v0 = arg0->unk_38E;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_38E = temp_v0 - 1;
            phi_v1 = arg0->unk_38E;
        }
        if (phi_v1 == 0) {
            temp_t9 = arg0->unk_38C;
            switch (temp_t9) {
            case 2:
            case 4:
            case 6:
                temp_v0_2 = arg0->unk_390;
                if ((temp_v0_2 == 5) || (temp_v0_2 == 2)) {
                    arg0->unk_390 = 5;
                    phi_a1 = 1;
                }
                break;
            case 5:
            case 7:
                temp_v0_3 = arg0->unk_390;
                if ((temp_v0_3 == 6) || (temp_v0_3 == 1)) {
                    arg0->unk_390 = 6;
                    phi_a1 = 1;
                }
                break;
            case 8:
                temp_v0_4 = arg0->unk_390;
                if ((temp_v0_4 == 4) || (temp_v0_4 == 2)) {
                    arg0->unk_390 = 4;
                    phi_a1 = 1;
                }
                break;
            }
            if (phi_a1 == 0) {
                temp_v0_5 = arg0->unk_390;
                if ((temp_v0_5 == 4) || (temp_v0_5 == 5)) {
                    arg0->unk_390 = 0;
                } else if (temp_v0_5 == 6) {
                    arg0->unk_390 = 1;
                }
            }
            if (phi_a1 == 0) {
                arg0->unk_390 += 1;
                if ((s32) arg0->unk_390 >= 4) {
                    temp_v0_6 = arg0->unk_38C;
                    if ((temp_v0_6 == 0) || (temp_v0_6 == 1) || (temp_v0_6 == 3)) {
                        arg0 = arg0;
                        arg0->unk_38E = Rand_S16Offset(0x1E, 0x1E);
                    } else {
                        arg0->unk_38E = 8;
                    }
                    arg0->unk_390 = 0;
                    phi_a2 = arg0;
                }
            }
        }
    }
    phi_a2->unk_392 = *(&D_80B58E40 + (phi_a2->unk_38C * 2));
}

void func_80B54124(Actor *arg0, GraphicsContext **arg1, u32 arg2) {
    s8 sp53;
    s8 sp52;
    GraphicsContext *sp4C;
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_t0;
    s8 temp_a2;
    s8 temp_a2_2;
    s8 temp_a2_3;
    s8 temp_a2_4;

    sp53 = arg0->objBankIndex;
    temp_t0 = *arg1;
    sp4C = temp_t0;
    SysMatrix_StatePush();
    switch (arg2) {
    case 0:
        if (((arg0->unk_360 & 0x800) != 0) && (arg0[2].prev == 0)) {
            arg0[2].parent += 1;
            arg0[2].child += -2;
            sp4C = temp_t0;
            func_8012C2DC(*arg1);
            temp_v0 = temp_t0->polyXlu.p;
            temp_t0->polyXlu.p = &temp_v0[1];
            temp_v0->words.w0 = 0xDA380003;
            sp4C = temp_t0;
            sp44 = temp_v0;
            sp44->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_2 = temp_t0->polyXlu.p;
            temp_t0->polyXlu.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xDB060020;
            sp4C = temp_t0;
            sp40 = temp_v0_2;
            sp40->words.w1 = Gfx_TwoTexScroll(*arg1, 0, arg0[2].parent, 0U, 0x10, 0x10, 1, 0U, arg0[2].child, 0x10, 0x10);
            temp_v0_3 = temp_t0->polyXlu.p;
            temp_t0->polyXlu.p = &temp_v0_3[1];
            temp_v0_3->words.w0 = 0xDE000000;
            temp_v0_3->words.w1 = (u32) &D_060111E8;
            func_8012C28C(*arg1);
        }
        break;
    case 1:
        temp_a2 = arg0->unk_20A;
        if (((arg0->unk_360 & 0x4000) != 0) && (arg0[2].prev == 0) && ((s32) temp_a2 >= 0)) {
            temp_v0_4 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xDB060028;
            temp_v0_4->words.w1 = (arg1 + (temp_a2 * 0x44))->unk_17D98;
            sp4C = temp_t0;
            SysMatrix_RotateAndTranslateState(&D_80B58E54, &D_80B58E60);
            temp_v0_5 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_5[1];
            temp_v0_5->words.w0 = 0xDA380003;
            sp4C = temp_t0;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_6[1];
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = (u32) &D_0A000D40;
            temp_v0_7 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_7[1];
            temp_v0_7->words.w0 = 0xDB060018;
            temp_v0_7->words.w1 = (arg1 + (sp53 * 0x44))->unk_17D98;
        }
        break;
    case 2:
        temp_a2_2 = arg0->unk_208;
        if (((arg0->unk_360 & 0x1000) != 0) && (arg0[2].prev == 0) && ((s32) temp_a2_2 >= 0)) {
            temp_v0_8 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_8[1];
            temp_v0_8->words.w0 = 0xDB060018;
            temp_v0_8->words.w1 = (arg1 + (temp_a2_2 * 0x44))->unk_17D98;
            temp_v0_9 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_9[1];
            temp_v0_9->words.w1 = (u32) &D_06000378;
            temp_v0_9->words.w0 = 0xDE000000;
            temp_v0_10 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_10[1];
            temp_v0_10->words.w0 = 0xDB060018;
            temp_v0_10->words.w1 = (arg1 + (sp53 * 0x44))->unk_17D98;
        }
        break;
    case 3:
        temp_a2_3 = arg0->unk_209;
        if (((arg0->unk_360 & 0x2000) != 0) && (arg0[2].prev == 0) && ((s32) temp_a2_3 >= 0)) {
            temp_v0_11 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_11[1];
            temp_v0_11->words.w0 = 0xDB060018;
            temp_v0_11->words.w1 = (arg1 + (temp_a2_3 * 0x44))->unk_17D98;
            temp_v0_12 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_12[1];
            temp_v0_12->words.w1 = (u32) &D_06000308;
            temp_v0_12->words.w0 = 0xDE000000;
            temp_v0_13 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_13[1];
            temp_v0_13->words.w0 = 0xDB060018;
            temp_v0_13->words.w1 = (arg1 + (sp53 * 0x44))->unk_17D98;
        }
        break;
    case 4:
        if (((arg0->unk_360 & 0x8000) != 0) && (arg0[2].prev == 0)) {
            temp_v0_14 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_14[1];
            temp_v0_14->words.w1 = (u32) &D_06012478;
            temp_v0_14->words.w0 = 0xDE000000;
        }
        break;
    case 5:
        temp_a2_4 = arg0->unk_20C;
        if ((arg0[2].next != 0) && ((s32) temp_a2_4 >= 0)) {
            sp52 = temp_a2_4;
            sp4C = temp_t0;
            SysMatrix_RotateAndTranslateState(&D_80B58E68, &D_80B58E74);
            temp_v0_15 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_15[1];
            temp_v0_15->words.w0 = 0xDA380003;
            sp4C = temp_t0;
            sp52 = temp_a2_4;
            temp_v0_15->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_16 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_16[1];
            temp_v0_16->words.w0 = 0xDB060018;
            temp_v0_16->words.w1 = (arg1 + (temp_a2_4 * 0x44))->unk_17D98;
            temp_v0_17 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_17[1];
            temp_v0_17->words.w1 = (u32) &D_06000E70;
            temp_v0_17->words.w0 = 0xDE000000;
            temp_v0_18 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_18[1];
            temp_v0_18->words.w0 = 0xDB060018;
            temp_v0_18->words.w1 = (arg1 + (sp53 * 0x44))->unk_17D98;
        }
        break;
    }
    SysMatrix_StatePop();
}

s32 func_80B54678(Actor *arg0, s16 arg1) {
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

s8 func_80B546F4(Actor *arg0, s32 arg1) {
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

s8 func_80B54750(Actor *arg0, s32 arg1) {
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

s32 func_80B547C8(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0;
    s16 temp_a0;
    s16 temp_a1;
    s32 phi_v1;

    temp_a0 = arg0->unk_394;
    temp_a1 = func_80B546F4(arg0, 0);
    phi_v1 = 0;
    switch (temp_a0) {
    case 0:
        sp24 = 0;
        sp2A = temp_a1;
        if (func_80B54678(arg0, temp_a1) != 0) {
        case 2:
        case 4:
        case 6:
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
            arg0->unk_394 = (s16) (arg0->unk_394 + 1);
            phi_v1 = 1;
        }
        break;
    case 1:
    case 3:
    case 5:
        if (((gSaveContext.weekEventReg[86] & 8) != 0) && (temp_a0 == 3)) {
            ActorCutscene_Stop(temp_a1);
            goto block_10;
        }
        temp_v0 = arg0->child;
        if ((temp_v0 != 0) && (temp_v0->update != 0)) {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
block_10:
        }
        arg0->unk_394 = (s16) (arg0->unk_394 + 1);
        phi_v1 = 1;
        break;
    case 7:
        ActorCutscene_Stop(temp_a1);
        arg0->unk_394 = (s16) (arg0->unk_394 + 1);
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

s32 func_80B5492C(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0;
    s16 temp_a1;
    s16 temp_v1;
    s32 phi_a2;

    temp_v1 = arg0->unk_394;
    temp_a1 = func_80B546F4(arg0, 0);
    phi_a2 = 0;
    switch (temp_v1) {
    case 0:
        sp2A = temp_a1;
        sp24 = 0;
        if (func_80B54678(arg0, temp_a1, 0) != 0) {
        case 2:
        case 4:
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
            arg0->unk_394 = (s16) (arg0->unk_394 + 1);
            phi_a2 = 1;
        }
        break;
    case 1:
    case 3:
        if (((gSaveContext.weekEventReg[75] & 0x10) == 0) && (temp_v1 == 3)) {
            ActorCutscene_Stop(temp_a1);
            arg0->unk_394 = 5;
            goto block_10;
        }
        temp_v0 = arg0->child;
        if ((temp_v0 != 0) && (temp_v0->update != 0)) {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
block_10:
        }
        arg0->unk_394 = (s16) (arg0->unk_394 + 1);
        phi_a2 = 1;
        break;
    case 5:
        ActorCutscene_Stop(temp_a1);
        arg0->unk_394 = (s16) (arg0->unk_394 + 1);
        phi_a2 = 1;
        break;
    }
    return phi_a2;
}

s32 func_80B54A94(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0;
    s16 temp_a1;
    u16 temp_t6;
    s32 phi_v1;

    temp_t6 = arg0->unk_394;
    temp_a1 = func_80B54750(arg0, 0);
    phi_v1 = 0;
    switch (temp_t6) {
    case 0:
        sp24 = 0;
        sp2A = temp_a1;
        if (func_80B54678(arg0, temp_a1) != 0) {
        case 2:
        case 4:
        case 6:
        case 8:
            temp_v0 = arg0->child;
            if ((temp_v0 != 0) && (temp_v0->update != 0)) {
                func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
            }
            arg0->unk_394 = (u16) ((s16) arg0->unk_394 + 1);
            phi_v1 = 1;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
        func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
        arg0->unk_394 = (u16) ((s16) arg0->unk_394 + 1);
        phi_v1 = 1;
        break;
    case 9:
        ActorCutscene_Stop(temp_a1);
        arg0->unk_394 = (u16) ((s16) arg0->unk_394 + 1);
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

s32 func_80B54BC4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;

    temp_a1 = arg0;
    if (arg0->unk_394 == 0) {
        arg0 = arg0;
        func_800B7298(arg1, temp_a1, 7U);
        arg1->nextEntranceIndex = 0xBC30;
        gSaveContext.nextCutsceneIndex = 0;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 2;
        gSaveContext.nextTransition = 6;
        arg0->unk_394 = (s16) (arg0->unk_394 + 1);
    }
    return 0;
}

s32 func_80B54C5C(Actor *arg0) {
    s32 sp20;
    s16 temp_v0;

    sp20 = 0;
    temp_v0 = arg0->unk_394;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else {
                    goto block_6;
                }
            } else {
                func_80B53CE8(arg0, (GlobalContext *)0xE);
                arg0->unk_394 = (s16) (arg0->unk_394 + 1);
            }
        } else {
block_6:
            if (func_801378B8(arg0 + 0x144, arg0[1].home.pos.z) != 0) {
                arg0->unk_394 = (s16) (arg0->unk_394 + 1);
                sp20 = 1;
            }
        }
    } else {
        func_80B53CE8(arg0, (GlobalContext *)0xD);
        arg0->unk_394 = (s16) (arg0->unk_394 + 1);
    }
    return sp20;
}

s32 func_80B54D18(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_t6;
    s32 phi_v1;

    temp_v0 = arg0->unk_394;
    phi_v1 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else {
            goto block_7;
        }
    } else {
        arg0 = arg0;
        if ((Player_GetMask(arg1) == 2) || ((gSaveContext.weekEventReg[55] & 0x20) != 0)) {
            arg0->unk_394 = (s16) (arg0->unk_394 + 1);
block_7:
            temp_t6 = arg0->unk_360 & 0xBFDF;
            arg0->unk_360 = temp_t6;
            arg0->unk_360 = (u16) (temp_t6 | 0x200);
            arg0 = arg0;
            func_80B53CE8(arg0, arg1, 0x14, arg0);
            arg0->unk_394 = (s16) (arg0->unk_394 + 1);
            phi_v1 = 1;
        } else {
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x4000);
            arg0->unk_394 = (s16) (arg0->unk_394 + 1);
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

? *func_80B54DF4(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    u8 temp_a0;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_v1;

    temp_v0 = arg0->unk_200;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    switch (temp_v0) {                              /* switch 1 */
    case 21:                                        /* switch 1 */
        arg0[2].prevPos.z = func_80B54A94;
        return &D_80B58808;
    case 16:                                        /* switch 1 */
        arg0[2].prevPos.z = func_80B547C8;
        return &D_80B58718;
    case 17:                                        /* switch 1 */
        arg0[2].prevPos.z = func_80B5492C;
        return &D_80B58784;
    case 14:                                        /* switch 1 */
        arg0[2].prevPos.z = func_80B54C5C;
        return &D_80B58954;
    case 12:                                        /* switch 1 */
        return &D_80B5899C;
    case 25:                                        /* switch 1 */
        return &D_80B58B90;
    default:                                        /* switch 1 */
        if (temp_v1->unk_14B == 3) {
            if ((s32) temp_v0 >= 4) {
                switch (temp_v0) {                  /* switch 2 */
                case 40:                            /* switch 2 */
                case 42:                            /* switch 2 */
                case 43:                            /* switch 2 */
                case 44:                            /* switch 2 */
                case 45:                            /* switch 2 */
                case 47:                            /* switch 2 */
                    return &D_80B58B7C;
                case 49:                            /* switch 2 */
                    return &D_80B589FC;
                default:                            /* switch 2 */
                    return &D_80B58A04;
                }
            } else {
                if (temp_v0 != 1) {
                    if (temp_v0 != 3) {
                        return &D_80B58A04;
                    }
                    return &D_80B58A24;
                }
                return &D_80B58AE8;
            }
        } else {
            sp1C = temp_v1;
            arg0 = arg0;
            if (Player_GetMask(arg1) == 2) {
                temp_v0_2 = arg0->unk_200;
                if (temp_v0_2 == 0x31) {
                    return &D_80B58B88;
                }
                if (temp_v0_2 == 0x17) {
                    arg0[2].prevPos.z = func_80B54BC4;
                    return &D_80B589AC;
                }
                if (temp_v0_2 == 3) {
                    arg0[2].prevPos.z = func_80B54D18;
                    return &D_80B58B3C;
                }
                if (gSaveContext.day >= 2) {
                    return &D_80B58A44;
                }
                if ((gSaveContext.time - 0x3FFC) < 0x5883) {
                    return &D_80B58ABC;
                }
                return &D_80B58AC4;
            }
            temp_a0 = temp_v1->unk_14B;
            if ((temp_a0 == 4) && ((gSaveContext.weekEventReg[50] & 8) != 0)) {
                temp_v0_3 = arg0->unk_200;
                if (temp_v0_3 == 0x17) {
                    arg0[2].prevPos.z = func_80B54BC4;
                    return &D_80B589AC;
                }
                if (temp_v0_3 == 3) {
                    arg0[2].prevPos.z = func_80B54D18;
                    return &D_80B58AF4;
                }
                if (gSaveContext.day >= 2) {
                    return &D_80B58A44;
                }
                goto block_40;
            }
block_40:
            temp_t3 = arg0->unk_200;
            switch (temp_t3) {                      /* switch 3 */
            case 1:                                 /* switch 3 */
                return &D_80B58AE8;
            case 40:                                /* switch 3 */
                return &D_80B5894C;
            case 42:                                /* switch 3 */
            case 43:                                /* switch 3 */
            case 44:                                /* switch 3 */
            case 45:                                /* switch 3 */
                return &D_80B58980;
            case 3:                                 /* switch 3 */
                arg0[2].prevPos.z = func_80B54D18;
                return &D_80B58AF4;
            case 18:                                /* switch 3 */
                if (gSaveContext.day >= 2) {
                    return &D_80B58A3C;
                }
                return &D_80B5885C;
            case 19:                                /* switch 3 */
            case 47:                                /* switch 3 */
                return &D_80B58938;
            case 22:                                /* switch 3 */
                return &D_80B58988;
            case 23:                                /* switch 3 */
                return &D_80B589FC;
            case 48:                                /* switch 3 */
                return &D_80B58944;
            case 49:                                /* switch 3 */
                if (temp_a0 == 4) {
                    return &D_80B58B88;
                }
                return &D_80B589FC;
            case 52:                                /* switch 3 */
            case 53:                                /* switch 3 */
                return &D_80B58994;
            default:                                /* switch 3 */
                return NULL;
            }
        }
        break;
    }
}

s32 func_80B55180(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Actor *temp_a0;
    f32 *temp_a0_2;
    u8 temp_v1;
    s32 phi_v1;

    temp_a0 = arg0;
    phi_v1 = 0;
    if ((arg0->unk_360 & 7) != 0) {
        sp1C = 0;
        arg0 = arg0;
        phi_v1 = sp1C;
        if (func_800B84D0(temp_a0, arg1) != 0) {
            temp_a0_2 = &arg0[2].shape.feetPos[0].y;
            arg0 = arg0;
            func_8013AED4((u16 *) temp_a0_2, 0U, 7U);
            arg0[2].draw = NULL;
            arg0->unk_394 = 0;
            arg0[2].prevPos.z = 0.0f;
            arg0->child = (bitwise Actor *) arg0[1].shape.feetPos[0].x;
            temp_v1 = arg0->unk_200;
            arg0->unk_204 = func_80B54DF4(arg0, arg1);
            if ((temp_v1 == 1) || (temp_v1 == 3) || (temp_v1 == 0x12) || (temp_v1 == 0x13) || (temp_v1 == 0x17) || (temp_v1 == 0x16) || (temp_v1 == 0x28) || (temp_v1 == 0x2A) || (temp_v1 == 0x2B) || (temp_v1 == 0x2C) || (temp_v1 == 0x2D) || (temp_v1 == 0x2F) || (temp_v1 == 0x30) || (temp_v1 == 0x31) || (temp_v1 == 0x34) || (temp_v1 == 0x35)) {
                arg0->unk_360 = (u16) (arg0->unk_360 | 0x20);
            }
            if ((arg0->unk_200 == 3) && ((gSaveContext.weekEventReg[55] & 0x20) != 0)) {
                arg0->unk_360 = (u16) (arg0->unk_360 & 0xFFDF);
            }
            arg0[1].focus.pos.z = (bitwise f32) func_80B57A44;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_80B552E4(EnAn *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg1->csCtx.unk_12;
    phi_v1 = 0;
    if ((arg1->csCtx.state != 0) && (arg1->sceneNum == 0x61) && (gSaveContext.sceneSetupIndex == 0) && ((temp_v0 == 0) || (temp_v0 == 1))) {
        if (arg0->unk_3B0 == 0) {
            arg0->unk_38A = 0;
            arg0->unk_38C = 0;
            arg0->unk_360 |= 0x300;
            arg0->unk_38E = 8;
            arg0->unk_364 = 0xFF;
            arg0->unk_3B0 = 1;
            arg0->unk_3B4 = 0;
        }
        phi_v1 = 1;
    } else if (arg0->unk_3B0 != 0) {
        arg0->unk_3B0 = 0;
        arg0->unk_3B4 = 0;
        arg0->unk_3C0 = 1;
        arg0->actionFunc = func_80B578F8;
        arg0->actor.room = arg1->roomCtx.currRoom.num;
    }
    return phi_v1;
}

void func_80B553AC(void *arg0) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 temp_v0;
    s16 temp_v0_3;
    void *temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk_218 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    Math_ApproachS(arg0 + 0x37E, (s16) (Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_BE), 4, 0x2AA8);
    temp_v0 = arg0->unk_37E;
    if ((s32) temp_v0 < -0x1FFE) {
        arg0->unk_37E = -0x1FFE;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1FFF) {
            phi_v1 = 0x1FFE;
        }
        arg0->unk_37E = phi_v1;
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk_218;
    if (temp_v0_2->unk_0 == 0) {
        sp44 = temp_v0_2->unk_C44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x37C, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8);
    temp_v0_3 = arg0->unk_37C;
    if ((s32) temp_v0_3 < -0x1554) {
        arg0->unk_37C = -0x1554;
        return;
    }
    phi_v1_2 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x1555) {
        phi_v1_2 = 0x1554;
    }
    arg0->unk_37C = phi_v1_2;
}

void func_80B554E8(EnAn *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    void *temp_v0;
    s16 phi_v1;
    s16 phi_v1_2;

    if (((arg0->unk_360 & 0x20) != 0) && (temp_v0 = arg0->unk_218, (temp_v0 != 0)) && (temp_v0->update != 0)) {
        temp_v0_2 = arg0->unk_388;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_388 = temp_v0_2 - 1;
            phi_v1 = arg0->unk_388;
        }
        if (phi_v1 == 0) {
            func_80B553AC();
            temp_t2 = arg0->unk_360 & 0xFDFF;
            temp_t3 = temp_t2 | 0x80;
            arg0->unk_360 = temp_t2;
            arg0->unk_360 = temp_t3;
            return;
        }
        goto block_8;
    }
block_8:
    temp_v0_3 = arg0->unk_360;
    if ((temp_v0_3 & 0x80) != 0) {
        arg0->unk_360 = temp_v0_3 & 0xFF7F;
        arg0->unk_37C = 0;
        arg0->unk_37E = 0;
        arg0->unk_388 = 0x14;
        return;
    }
    temp_v0_4 = arg0->unk_388;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk_388 = temp_v0_4 - 1;
        phi_v1_2 = arg0->unk_388;
    }
    if (phi_v1_2 == 0) {
        arg0->unk_360 |= 0x200;
    }
}

? func_80B555C8(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u8 temp_t6;
    s32 phi_v0;
    s32 phi_v0_2;
    Actor *phi_a0;
    GlobalContext *phi_a1;

    temp_t6 = arg0->unk_200;
    switch (temp_t6) {
    case 16:
    case 17:
    case 18:
    case 19:
    case 23:
        func_80B53CE8((Actor *)1);
        break;
    case 22:
        func_80B53CE8((Actor *)0x17);
        arg0->unk_360 = (u16) (arg0->unk_360 | 0x2000);
        break;
    case 14:
        func_80B53CE8((Actor *)0xC);
        break;
    case 21:
        func_80B53CE8((Actor *)0xF);
        break;
    case 47:
    case 49:
        func_80B53CE8((Actor *)7);
        break;
    case 52:
    case 53:
        func_80B53CE8((Actor *)0x16);
        arg0->unk_360 = (u16) (arg0->unk_360 | 0x2000);
        break;
    default:
        temp_v0 = arg0->unk_39C;
        phi_v0 = temp_v0;
        if (temp_v0 == 0xF) {
            func_80B53CE8((Actor *)0x10);
            phi_v0 = arg0->unk_39C;
        }
        phi_v0_2 = phi_v0;
        phi_a0 = arg0;
        phi_a1 = arg1;
        if (phi_v0 == 0x11) {
            arg0 = arg0;
            arg1 = arg1;
            func_80B53CE8(arg0, arg1, 0x12);
            phi_v0_2 = arg0->unk_39C;
            phi_a0 = arg0;
            phi_a1 = arg1;
        }
        if ((phi_v0_2 == 1) || (phi_v0_2 == 2)) {
            func_80B53CE8(phi_a0, phi_a1, 8);
        }
        break;
    }
    return 0;
}

void func_80B556F8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_t4;
    u16 temp_t8;

    temp_v0 = arg0->unk_396;
    if (temp_v0 == 0) {
        func_80B53CE8(arg0, arg1, 6, (Actor *) arg1);
        temp_t8 = arg0->unk_360 & 0xFFDF;
        arg0->unk_360 = temp_t8;
        arg0->unk_360 = (u16) (temp_t8 | 0x200);
        arg0->unk_396 = (s16) (arg0->unk_396 + 1);
        return;
    }
    if (temp_v0 == 1) {
        arg1 = arg1;
        if (func_801378B8((SkelAnime *) &arg0[1], arg0[1].home.pos.z) != 0) {
            func_80B53CE8(arg0, arg1, 2, (Actor *) arg1);
            temp_t4 = arg0->unk_360 & 0xFDFF;
            arg0->unk_360 = temp_t4;
            arg0->unk_360 = (u16) (temp_t4 | 0x20);
            arg0->unk_396 = (s16) (arg0->unk_396 + 1);
        }
    }
}

void func_80B557AC(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_t4;
    u16 temp_t8;

    temp_v0 = arg0->unk_396;
    if (temp_v0 == 0) {
        func_80B53CE8(arg0, arg1, 3, (Actor *) arg1);
        temp_t8 = arg0->unk_360 & 0xFFDF;
        arg0->unk_360 = temp_t8;
        arg0->unk_360 = (u16) (temp_t8 | 0x200);
        arg0->unk_396 = (s16) (arg0->unk_396 + 1);
        return;
    }
    if (temp_v0 == 1) {
        arg1 = arg1;
        if (func_801378B8((SkelAnime *) &arg0[1], arg0[1].home.pos.z) != 0) {
            func_80B53CE8(arg0, arg1, 2, (Actor *) arg1);
            temp_t4 = arg0->unk_360 & 0xFDFF;
            arg0->unk_360 = temp_t4;
            arg0->unk_360 = (u16) (temp_t4 | 0x20);
            arg0->unk_396 = (s16) (arg0->unk_396 + 1);
        }
    }
}

void func_80B55860(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_t4;
    u16 temp_t8;

    temp_v0 = arg0->unk_396;
    if (temp_v0 == 0) {
        func_80B53CE8(arg0, arg1, 4, (Actor *) arg1);
        temp_t8 = arg0->unk_360 | 0x200;
        arg0->unk_360 = temp_t8;
        arg0->unk_360 = (u16) (temp_t8 & 0xFFDF);
        arg0->unk_396 = (s16) (arg0->unk_396 + 1);
        return;
    }
    if (temp_v0 == 1) {
        arg1 = arg1;
        if (func_801378B8((SkelAnime *) &arg0[1], arg0[1].home.pos.z) != 0) {
            func_80B53CE8(arg0, arg1, 2, (Actor *) arg1);
            temp_t4 = arg0->unk_360 & 0xFDFF;
            arg0->unk_360 = temp_t4;
            arg0->unk_360 = (u16) (temp_t4 | 0x20);
            arg0->unk_396 = (s16) (arg0->unk_396 + 1);
        }
    }
}

? func_80B55914(Actor *arg0, Actor *arg1) {
    u16 sp22;
    s32 sp18;
    ? (*temp_v0_3)(Actor *, Actor *);
    s32 temp_v0;
    u16 temp_t3;
    u16 temp_v0_2;
    s32 phi_v0;
    s32 phi_v0_2;
    Actor *phi_a0;
    s32 phi_v0_3;
    Actor *phi_a0_2;
    Actor *phi_a0_3;
    Actor *phi_a0_4;
    Actor *phi_a0_5;

    sp22 = arg1->unk_1680C;
    phi_a0_3 = arg0;
    phi_a0_4 = arg0;
    phi_a0_5 = arg0;
    if ((arg1[22].projectedPos.z->unk_A6C & 0x40) != 0) {
        arg0->unk_360 = (u16) (arg0->unk_360 | 0x400);
        sp18 = (s32) sp22;
        if (sp22 != arg0->unk_362) {
            if ((s32) sp22 >= 0x28F9) {
                if (sp22 != 0x295E) {
                    goto block_23;
                }
                goto block_20;
            }
            if (sp18 >= 0x1886) {
                switch (sp18) {                     /* switch 1 */
                case 10469:                         /* switch 1 */
                    func_80B53CE8(arg1, (GlobalContext *)5);
                    arg0->unk_360 = (u16) (arg0->unk_360 & 0xDFFF);
                    phi_a0_3 = arg0;
                    break;
                case 10426:                         /* switch 1 */
                case 10449:                         /* switch 1 */
                    func_80B53CE8(arg1, (GlobalContext *)5);
                    phi_a0_3 = arg0;
                    break;
                case 10415:                         /* switch 1 */
                case 10433:                         /* switch 1 */
                    func_80B53CE8(arg1, (GlobalContext *)1);
                    phi_a0_3 = arg0;
                    break;
                case 10428:                         /* switch 1 */
                    func_80B53CE8(arg1, (GlobalContext *)2);
                    phi_a0_3 = arg0;
                    break;
                case 10438:                         /* switch 1 */
                    func_80B53CE8(arg1, (GlobalContext *)0xF);
                    phi_a0_3 = arg0;
                    break;
                case 10485:                         /* switch 1 */
                    func_80B53CE8(arg1, (GlobalContext *)0xA);
                    phi_a0_3 = arg0;
                    break;
                case 10487:                         /* switch 1 */
                case 10488:                         /* switch 1 */
                    func_80B53CE8(arg1, (GlobalContext *)0x15);
                    phi_a0_3 = arg0;
                    break;
                case 10475:                         /* switch 1 */
                    if (arg0->unk_39C != 0x14) {
                        temp_t3 = arg0->unk_360 & 0xBFDF;
                        arg0->unk_360 = temp_t3;
                        arg0->unk_360 = (u16) (temp_t3 | 0x200);
                        func_80B53CE8(arg1, (GlobalContext *)0x14);
                    }
                    phi_a0_3 = arg0;
                    break;
                case 10404:                         /* switch 1 */
                case 10409:                         /* switch 1 */
                case 10430:                         /* switch 1 */
                case 10432:                         /* switch 1 */
block_20:
                    arg0->unk_18C = func_80B556F8;
                    arg0->unk_396 = 0;
                    break;
                case 10470:                         /* switch 1 */
                    arg0->unk_360 = (u16) (arg0->unk_360 & 0xDFFF);
                    arg0->unk_18C = func_80B55860;
                    arg0->unk_396 = 0;
                    break;
                }
            } else if (sp18 != 0x1885) {
            default:                                /* switch 1 */
block_23:
                temp_v0 = arg0->unk_39C;
                phi_v0 = temp_v0;
                if (temp_v0 == 0x10) {
                    func_80B53CE8(arg1, (GlobalContext *)0xF);
                    phi_v0 = arg0->unk_39C;
                }
                phi_v0_2 = phi_v0;
                phi_a0 = arg0;
                if (phi_v0 == 0x12) {
                    arg0 = arg0;
                    func_80B53CE8(arg0, (GlobalContext *) arg1, 0x11);
                    phi_v0_2 = arg0->unk_39C;
                    phi_a0 = arg0;
                }
                phi_v0_3 = phi_v0_2;
                phi_a0_2 = phi_a0;
                if ((phi_v0_2 == 0x16) || (phi_v0_2 == 0x17)) {
                    arg0 = phi_a0;
                    func_80B53CE8(phi_a0, (GlobalContext *) arg1, 0x15);
                    phi_v0_3 = arg0->unk_39C;
                    phi_a0_2 = arg0;
                }
                phi_a0_3 = phi_a0_2;
                if ((phi_v0_3 == 7) || (phi_v0_3 == 8)) {
                    arg0 = phi_a0_2;
                    func_80B53CE8(phi_a0_2, (GlobalContext *) arg1, 2);
                    phi_a0_3 = arg0;
                }
            } else {
            case 10400:                             /* switch 1 */
            case 10403:                             /* switch 1 */
            case 10405:                             /* switch 1 */
            case 10417:                             /* switch 1 */
            case 10450:                             /* switch 1 */
            case 10457:                             /* switch 1 */
            case 10460:                             /* switch 1 */
            case 10462:                             /* switch 1 */
                arg0->unk_18C = func_80B557AC;
                arg0->unk_396 = 0;
            }
            phi_a0_4 = phi_a0_3;
            if (sp18 >= 0x1886) {
                switch (sp18) {                     /* switch 2 */
                case 10485:                         /* switch 2 */
                    phi_a0_3->unk_38A = 0;
                    /* fallthrough */
                case 10405:                         /* switch 2 */
                case 10410:                         /* switch 2 */
                case 10488:                         /* switch 2 */
                    phi_a0_3->unk_38C = 0;
                    goto block_50;
                case 10402:                         /* switch 2 */
                case 10419:                         /* switch 2 */
                case 10422:                         /* switch 2 */
                case 10426:                         /* switch 2 */
                case 10430:                         /* switch 2 */
                case 10446:                         /* switch 2 */
                case 10448:                         /* switch 2 */
                case 10454:                         /* switch 2 */
                case 10469:                         /* switch 2 */
                case 10471:                         /* switch 2 */
                case 10477:                         /* switch 2 */
                    phi_a0_3->unk_38C = 1;
                    goto block_50;
                case 10413:                         /* switch 2 */
                    phi_a0_3->unk_38C = 8;
                    goto block_50;
                case 10432:                         /* switch 2 */
                case 10455:                         /* switch 2 */
                case 10462:                         /* switch 2 */
                    phi_a0_3->unk_38C = 2;
                    goto block_50;
                case 10470:                         /* switch 2 */
                case 10487:                         /* switch 2 */
                    phi_a0_3->unk_38C = 6;
                    goto block_50;
                case 10403:                         /* switch 2 */
                case 10417:                         /* switch 2 */
                case 10424:                         /* switch 2 */
                case 10438:                         /* switch 2 */
                case 10442:                         /* switch 2 */
                case 10444:                         /* switch 2 */
                case 10453:                         /* switch 2 */
                case 10466:                         /* switch 2 */
                case 10467:                         /* switch 2 */
                case 10468:                         /* switch 2 */
                    phi_a0_3->unk_38C = 4;
                    goto block_50;
                case 10476:                         /* switch 2 */
                    phi_a0_3->unk_38A = 5;
                    /* fallthrough */
                case 10460:                         /* switch 2 */
                case 10475:                         /* switch 2 */
                case 10482:                         /* switch 2 */
                case 10489:                         /* switch 2 */
                    phi_a0_3->unk_38C = 5;
                    goto block_50;
                case 10486:                         /* switch 2 */
                    phi_a0_3->unk_38C = 9;
                    goto block_50;
                case 10404:                         /* switch 2 */
                case 10409:                         /* switch 2 */
                    phi_a0_3->unk_38C = 7;
                    goto block_50;
                }
            } else if (sp18 != 0x1885) {

            } else {
            case 10400:                             /* switch 2 */
            case 10406:                             /* switch 2 */
            case 10415:                             /* switch 2 */
            case 10433:                             /* switch 2 */
                phi_a0_3->unk_38C = 3;
block_50:
                phi_a0_3->unk_38E = 8;
            }
        }
        phi_a0_4->unk_362 = sp22;
        phi_a0_5 = phi_a0_4;
    } else {
        temp_v0_2 = arg0->unk_360;
        if ((temp_v0_2 & 0x400) != 0) {
            arg0->unk_18C = NULL;
            arg0->unk_362 = 0U;
            arg0->unk_360 = (u16) (temp_v0_2 & 0xFBFF);
            arg0->unk_38E = 4;
            arg0->unk_38C = (s16) arg0->unk_38A;
            func_80B555C8(arg1);
            phi_a0_5 = arg0;
        }
    }
    temp_v0_3 = phi_a0_5->unk_18C;
    if (temp_v0_3 != 0) {
        temp_v0_3(phi_a0_5, arg1);
    }
    return 0;
}

Actor *func_80B55D20(EnAn *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    Actor *phi_v1;
    Actor *phi_v0;

    temp_v0 = arg0->unk_200;
    if (temp_v0 != 0x10) {
        if (temp_v0 != 0x11) {
            if (temp_v0 != 0x15) {
                phi_v1 = arg1->actorCtx.actorList[2].first;
            } else {
                phi_v0 = func_80B539CC((Actor *)4, (GlobalContext *)0x243);
                goto block_7;
            }
        } else {
            phi_v0 = func_80B539CC((Actor *)4, (GlobalContext *)0x276);
            goto block_7;
        }
    } else {
        phi_v0 = func_80B539CC((Actor *)4, (GlobalContext *)0x1D5);
block_7:
        phi_v1 = phi_v0;
    }
    return phi_v1;
}

s32 func_80B55D98(Actor *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4) {
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
    temp_v0 = func_80B539CC(arg0, arg1, arg3, arg4);
    arg0[1].xzDistToPlayer = NULL;
    temp_a2 = *(&D_80B58618 + (*arg2 * 4));
    phi_v1 = temp_v0;
    if (temp_a2 >= 0) {
        sp2C = temp_v0;
        arg0[1].xzDistToPlayer = func_8013BB34(arg1, sp4F, temp_a2);
        phi_v1 = sp2C;
    }
    if ((phi_v1 != 0) && (phi_v1->update != 0)) {
        temp_v0_2 = arg0[1].xzDistToPlayer;
        if (temp_v0_2 != 0) {
            temp_v0_3 = Lib_SegmentedToVirtual((void *) temp_v0_2->points);
            sp48 = temp_v0_3;
            Math_Vec3s_ToVec3f((Vec3f *) &sp3C, ((arg0[1].xzDistToPlayer->count * 6) + temp_v0_3) - 0xC);
            Math_Vec3s_ToVec3f((Vec3f *) &sp30, ((arg0[1].xzDistToPlayer->count * 6) + sp48) - 6);
            arg0->shape.shadowDraw = NULL;
            arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp3C, (Vec3f *) &sp30);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp30);
            sp24 = 1;
        }
    }
    return sp24;
}

s32 func_80B55ECC(Actor *arg0) {
    s32 sp1C;
    Actor *temp_a0;
    s16 temp_v0;
    f32 phi_f0;
    s16 phi_v1;
    s32 phi_t0;

    temp_a0 = arg0;
    phi_t0 = 0;
    if (arg0[2].destroy != 0) {
        phi_f0 = 150.0f;
    } else {
        phi_f0 = 100.0f;
    }
    arg0 = arg0;
    sp1C = 0;
    if (Actor_IsActorFacingLinkAndWithinRange(temp_a0, phi_f0, 0x2800) != 0) {
        phi_t0 = 1;
    }
    temp_v0 = arg0->unk_386;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_386 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_386;
    }
    if (phi_v1 == 0) {
        arg0[2].destroy = (void (*)(Actor *, GlobalContext *)) ((s32) arg0[2].destroy ^ 1);
        sp1C = phi_t0;
        arg0 = arg0;
        arg0->unk_386 = Rand_S16Offset(0x3C, 0x3C);
    }
    return phi_t0;
}

s32 func_80B55F8C(GlobalContext *arg0) {
    void *sp1C;
    s32 sp18;
    s32 phi_v1;

    sp18 = 0;
    sp1C = arg0->actorCtx.actorList[2].first;
    phi_v1 = sp18;
    if ((Player_GetMask(arg0) == 2) && ((gSaveContext.weekEventReg[50] & 8) != 0)) {
        goto block_5;
    }
    if ((sp1C->unk_14B == 4) && ((gSaveContext.weekEventReg[50] & 8) != 0)) {
block_5:
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80B5600C(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    u16 temp_t9;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_80B55D98(arg0, arg1, (u8 *)4, (u8) 0x1D5) != 0) {
        func_80B53CE8(arg0, arg1, 1);
        func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
        temp_t9 = arg0->unk_360 | 0x120;
        arg0->unk_360 = temp_t9;
        arg0->unk_360 = (u16) (temp_t9 | 0x200);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80B56094(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    u16 temp_t9;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_80B55D98(arg0, arg1, (u8 *)4, (u8) 0x276) != 0) {
        func_80B53CE8(arg0, arg1, 1);
        func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
        temp_t9 = arg0->unk_360 | 0x120;
        arg0->unk_360 = temp_t9;
        arg0->unk_360 = (u16) (temp_t9 | 0x200);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80B5611C(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    u16 temp_t9;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_80B55D98(arg0, arg1, (u8 *)4, (u8) 0x243) != 0) {
        func_80B53CE8(arg0, arg1, 0xF);
        func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
        temp_t9 = arg0->unk_360 | 0x120;
        arg0->unk_360 = temp_t9;
        arg0->unk_360 = (u16) (temp_t9 | 0xA00);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80B561A4(Actor *arg0, GlobalContext *arg1, void *arg2) {
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
    u8 temp_v0_4;
    void *temp_v0_2;
    s32 phi_v1;

    sp56 = gSaveContext.time - 0x3FFC;
    sp2C = 0;
    sp55 = (u8) arg0->params;
    arg0[1].xzDistToPlayer = NULL;
    sp50 = func_80B53B3C(arg1, arg2->unk_0);
    temp_a2 = *(&D_80B58618 + (arg2->unk_0 * 4));
    if (temp_a2 >= 0) {
        arg0[1].xzDistToPlayer = func_8013BB34(arg1, sp55, temp_a2);
    }
    if ((sp50 != 0) && (sp50->unk_138 != 0)) {
        temp_v0 = arg0[1].xzDistToPlayer;
        if (temp_v0 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
            sp4C = temp_v0_2;
            Math_Vec3s_ToVec3f((Vec3f *) &sp40, (Vec3s *) temp_v0_2);
            Math_Vec3s_ToVec3f((Vec3f *) &sp34, sp4C + 6);
            Math_Vec3f_Copy(arg0 + 0x228, (Vec3f *) &sp40);
            Math_Vec3f_Copy(arg0 + 0x234, (Vec3f *) &sp34);
            arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp40, (Vec3f *) &sp34);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
            temp_v0_3 = arg0->world.rot.y - sp50->unk_BE;
            phi_v1 = (s32) temp_v0_3;
            if ((s32) temp_v0_3 < 0) {
                phi_v1 = -(s32) temp_v0_3;
            }
            if (phi_v1 < 0x4001) {
                arg0[1].shape.feetFloorFlags = -0x4B;
            } else {
                arg0[1].shape.feetFloorFlags = 0x4B;
            }
            arg0->unk_378 = (s16) (arg2->unk_8 - arg2->unk_4);
            arg0->unk_37A = (s16) (sp56 - arg2->unk_4);
            temp_v0_4 = arg2->unk_0;
            switch (temp_v0_4) {                    /* switch 1 */
            case 27:                                /* switch 1 */
            case 28:                                /* switch 1 */
            case 32:                                /* switch 1 */
            case 33:                                /* switch 1 */
            case 34:                                /* switch 1 */
            case 35:                                /* switch 1 */
            case 37:                                /* switch 1 */
            case 38:                                /* switch 1 */
                arg0->unk_38A = 2;
                arg0->unk_38C = 2;
                arg0->unk_38E = 8;
                break;
            }
            switch (arg2->unk_0) {                  /* switch 2 */
            case 26:                                /* switch 2 */
            case 27:                                /* switch 2 */
            case 28:                                /* switch 2 */
                arg0->unk_360 = (u16) (arg0->unk_360 | 0x900);
                func_80B53CE8(arg0, arg1, 0x10);
                break;
            case 36:                                /* switch 2 */
            case 39:                                /* switch 2 */
                arg0->unk_360 = (u16) (arg0->unk_360 | 0x2100);
                func_80B53CE8(arg0, arg1, 0x16);
                break;
            default:                                /* switch 2 */
                arg0->unk_360 = (u16) (arg0->unk_360 | 0x100);
                func_80B53CE8(arg0, arg1, 7);
                break;
            }
            arg0->flags &= -2;
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x200);
            arg0->gravity = 0.0f;
            sp2C = 1;
        }
    }
    return sp2C;
}

s32 func_80B56418(Actor *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp2E;
    u8 sp2B;
    s32 sp20;
    Path *temp_v0;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_t8;
    s32 temp_v0_3;
    u16 temp_t3;
    u16 temp_t7;
    u16 temp_t8_2;
    u16 temp_t9;
    u8 temp_a1;
    u8 temp_v0_2;
    Path *phi_v0;
    s32 phi_v1;
    u8 phi_a1;
    s32 phi_v1_2;

    sp2B = arg0->params & 0xFF;
    arg0[1].xzDistToPlayer = NULL;
    temp_t0 = gSaveContext.time - 0x3FFC;
    temp_a3 = *(&D_80B58618 + (arg2->unk_0 * 4));
    if (temp_a3 >= 0) {
        sp20 = 0;
        sp2E = temp_t0 & 0xFFFF;
        arg0[1].xzDistToPlayer = func_8013BB34(arg1, sp2B, temp_a3);
    }
    temp_v0 = arg0[1].xzDistToPlayer;
    phi_v0 = temp_v0;
    phi_v1_2 = 0;
    if ((temp_v0 != 0) && ((s32) temp_v0->count < 3)) {
        arg0[1].xzDistToPlayer = NULL;
        phi_v0 = NULL;
    }
    if (phi_v0 != 0) {
        temp_v0_2 = arg0->unk_200;
        if (((s32) temp_v0_2 < 0x28) && (temp_v0_2 != 0) && ((s32) arg0->unk_384 >= 0)) {
            phi_v1 = temp_t0 & 0xFFFF & 0xFFFF;
        } else {
            phi_v1 = (s32) arg2->unk_6;
        }
        temp_v0_3 = arg2->unk_8;
        if (temp_v0_3 < phi_v1) {
            arg0[1].colChkInfo.displacement.z = (phi_v1 - temp_v0_3) + 0xFFFF;
        } else {
            arg0[1].colChkInfo.displacement.z = temp_v0_3 - phi_v1;
        }
        arg0->unk_1FC = (s32) ((temp_t0 & 0xFFFF) - phi_v1);
        temp_lo = (s32) arg0[1].colChkInfo.displacement.z / (s32) ((arg0[1].xzDistToPlayer->count - 2) & 0xFFFF);
        arg0->unk_1F4 = temp_lo;
        temp_t7 = arg0->unk_360 & ~8;
        temp_t8 = temp_t7 & 0xFFFF;
        arg0->unk_360 = temp_t7;
        arg0->unk_1F8 = (s32) (((s32) arg0->unk_1FC / temp_lo) + 2);
        arg0->unk_360 = (u16) (temp_t8 & ~0x10);
        temp_a1 = arg2->unk_0;
        phi_a1 = temp_a1;
        switch (temp_a1) {                          /* switch 1 */
        case 44:                                    /* switch 1 */
        case 45:                                    /* switch 1 */
        case 50:                                    /* switch 1 */
        case 51:                                    /* switch 1 */
        case 54:                                    /* switch 1 */
        case 55:                                    /* switch 1 */
        case 56:                                    /* switch 1 */
        case 57:                                    /* switch 1 */
        case 58:                                    /* switch 1 */
        case 59:                                    /* switch 1 */
        case 60:                                    /* switch 1 */
        case 61:                                    /* switch 1 */
        case 62:                                    /* switch 1 */
        case 63:                                    /* switch 1 */
            arg0->unk_38A = 2;
            arg0->unk_38C = 2;
            arg0->unk_38E = 8;
            phi_a1 = arg2->unk_0;
            break;
        }
        switch (phi_a1) {                           /* switch 2 */
        case 42:                                    /* switch 2 */
        case 43:                                    /* switch 2 */
            func_8013AED4(arg0 + 0x360, 3U, 7U);
            /* fallthrough */
        case 44:                                    /* switch 2 */
        case 45:                                    /* switch 2 */
            func_80B53CE8(arg0, arg1, 0x10);
            temp_t8_2 = arg0->unk_360 | 0x300;
            arg0->unk_360 = temp_t8_2;
            arg0->unk_360 = (u16) (temp_t8_2 | 0x800);
            break;
        case 52:                                    /* switch 2 */
        case 53:                                    /* switch 2 */
            func_80B53CE8(arg0, arg1, 0x16);
            func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
            temp_t3 = arg0->unk_360 | 0x300;
            arg0->unk_360 = temp_t3;
            arg0->unk_360 = (u16) (temp_t3 | 0x2000);
            break;
        case 50:                                    /* switch 2 */
        case 51:                                    /* switch 2 */
            func_80B53CE8(arg0, arg1, 7);
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x300);
            break;
        case 54:                                    /* switch 2 */
        case 55:                                    /* switch 2 */
        case 56:                                    /* switch 2 */
        case 57:                                    /* switch 2 */
        case 58:                                    /* switch 2 */
        case 59:                                    /* switch 2 */
        case 60:                                    /* switch 2 */
        case 61:                                    /* switch 2 */
        case 62:                                    /* switch 2 */
        case 63:                                    /* switch 2 */
            func_80B53CE8(arg0, arg1, 0x12);
            temp_t9 = arg0->unk_360 | 0x300;
            arg0->unk_360 = temp_t9;
            arg0->unk_360 = (u16) (temp_t9 | 0x1000);
            break;
        case 40:                                    /* switch 2 */
        case 47:                                    /* switch 2 */
        case 48:                                    /* switch 2 */
        case 49:                                    /* switch 2 */
            func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x300);
            /* fallthrough */
        default:                                    /* switch 2 */
            func_80B53CE8(arg0, arg1, 7);
            break;
        }
        arg0->gravity = -1.0f;
        phi_v1_2 = 1;
    }
    return phi_v1_2;
}

s32 func_80B56744(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    u8 sp4F;
    ? sp40;
    ? sp34;
    void *sp30;
    s32 sp28;
    Path *temp_v0;
    s32 temp_a3;
    u16 temp_t6;
    void *temp_v0_2;
    s32 phi_v1;

    sp4F = (u8) arg0->params;
    arg0[1].xzDistToPlayer = NULL;
    temp_a3 = *(&D_80B58618 + (*arg2 * 4));
    phi_v1 = 0;
    if (temp_a3 >= 0) {
        sp28 = 0;
        arg0[1].xzDistToPlayer = func_8013BB34(arg1, sp4F, temp_a3);
        phi_v1 = sp28;
    }
    temp_v0 = arg0[1].xzDistToPlayer;
    if ((temp_v0 != 0) && ((s32) temp_v0->count >= 2)) {
        temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
        sp30 = temp_v0_2;
        Math_Vec3s_ToVec3f((Vec3f *) &sp40, (Vec3s *) temp_v0_2);
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, sp30 + 6);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp40, (Vec3f *) &sp34);
        Math_Vec3s_Copy(arg0 + 0xBC, arg0 + 0x30);
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
        Math_Vec3f_Copy(arg0 + 0x108, (Vec3f *) &sp40);
        if (*arg2 == 0x16) {
            func_80B53CE8(arg0, arg1, 0x17);
            func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
            temp_t6 = arg0->unk_360 | 0x300;
            arg0->unk_360 = temp_t6;
            arg0->unk_360 = (u16) (temp_t6 | 0x2000);
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80B56880(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    u8 sp4F;
    ? sp40;
    ? sp34;
    void *sp30;
    s32 sp28;
    Vec3s *sp24;
    Path *temp_v0;
    Vec3s *temp_a1;
    s32 temp_a3;
    u16 temp_t0_2;
    u16 temp_t3;
    u8 temp_t0;
    void *temp_v0_2;
    s32 phi_v1;

    sp4F = (u8) arg0->params;
    arg0[1].xzDistToPlayer = NULL;
    temp_a3 = *(&D_80B58618 + (*arg2 * 4));
    phi_v1 = 0;
    if (temp_a3 >= 0) {
        sp28 = 0;
        arg0[1].xzDistToPlayer = func_8013BB34(arg1, sp4F, temp_a3);
        phi_v1 = sp28;
    }
    temp_v0 = arg0[1].xzDistToPlayer;
    if ((temp_v0 != 0) && ((s32) temp_v0->count >= 2)) {
        temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
        sp30 = temp_v0_2;
        Math_Vec3s_ToVec3f((Vec3f *) &sp40, ((arg0[1].xzDistToPlayer->count * 6) + temp_v0_2) - 6);
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, ((arg0[1].xzDistToPlayer->count * 6) + sp30) - 0xC);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40);
        temp_a1 = arg0 + 0x30;
        sp24 = temp_a1;
        Math_Vec3s_Copy(arg0 + 0xBC, temp_a1);
        Math_Vec3s_Copy(arg0 + 0x14, temp_a1);
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
        Math_Vec3f_Copy(arg0 + 0x108, (Vec3f *) &sp40);
        temp_t0 = *arg2;
        switch (temp_t0) {
        case 19:
            arg0->world.rot.y += 0x7FF8;
            /* fallthrough */
        case 18:
        case 23:
            func_80B53CE8(arg0, arg1, 1);
            func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
            arg0->unk_37A = 0;
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x300);
            if (*arg2 == 0x12) {
                arg0[2].projectedPos.x = 70.0f;
            }
            break;
        case 3:
            temp_t0_2 = arg0->unk_360 | 0x300;
            arg0->unk_360 = temp_t0_2;
            arg0->unk_360 = (u16) (temp_t0_2 | 0x1000);
            if ((gSaveContext.weekEventReg[55] & 0x20) != 0) {
                func_80B53CE8(arg0, arg1, 0x14);
                arg0->world.rot.y += 0x7FF8;
                arg0->unk_360 = (u16) (arg0->unk_360 | 0x40);
                arg0->unk_37A = 4;
                arg0->shape.rot.y = arg0->world.rot.y;
            } else {
                func_80B53CE8(arg0, arg1, 0x12);
                arg0->unk_37A = 0;
            }
            arg0->unk_38A = 2;
            arg0->unk_38C = 2;
            arg0->unk_38E = 8;
            break;
        case 14:
            func_80B53CE8(arg0, arg1, 0xC);
            func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
            temp_t3 = arg0->unk_360 | 0x300;
            arg0->unk_360 = temp_t3;
            arg0->unk_360 = (u16) (temp_t3 | 0x8000);
            break;
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80B56B00(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;
    u16 temp_t0;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80B58E7C);
    temp_a2 = arg0 + 0xBC;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80B58E88);
    Math_Vec3s_Copy(arg0 + 0x30, sp20);
    if (*arg2 == 0xC) {
        func_80B53CE8(arg0, arg1, 0xB);
        func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
        temp_t0 = arg0->unk_360 | 0x300;
        arg0->unk_360 = temp_t0;
        arg0->unk_360 = (u16) (temp_t0 | 0x40);
        arg0->unk_38A = 5;
        arg0->unk_38C = 5;
        arg0->unk_38E = 8;
    }
    return 1;
}

s32 func_80B56BC0(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    Vec3s *sp24;
    Vec3s *temp_a2;
    u16 temp_t0;
    u8 temp_v0;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80B58E90);
    temp_a2 = arg0 + 0xBC;
    sp24 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80B58E9C);
    Math_Vec3s_Copy(arg0 + 0x30, sp24);
    temp_v0 = *arg2;
    if (temp_v0 != 1) {
        if (temp_v0 != 0x18) {

        } else {
            func_80B53CE8(arg0, arg1, 0xB);
            arg0->unk_38A = 5;
            arg0->unk_38C = 5;
            arg0->unk_38E = 8;
        }
    } else {
        func_8013AED4(arg0 + 0x360, 3U, 7U);
        func_80B53CE8(arg0, arg1, 9);
    }
    temp_t0 = arg0->unk_360 | 0x300;
    arg0->unk_360 = temp_t0;
    arg0->unk_360 = (u16) (temp_t0 | 0x40);
    arg0->gravity = 0.0f;
    return 1;
}

s32 func_80B56CAC(Actor *arg0, GlobalContext *arg1, ? arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;

    temp_a2 = arg0 + 0xBC;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80B58EA4);
    Math_Vec3s_Copy(arg0 + 0x30, sp20);
    func_80B53CE8(arg0, arg1, 0);
    func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
    arg0->unk_360 = (u16) (arg0->unk_360 | 0x300);
    return 1;
}

s32 func_80B56D28(EnAn *arg0, u8 *arg2) {
    u8 temp_t0;
    s32 phi_v1;

    arg0->actor.flags |= 1;
    arg0->actor.targetMode = 6;
    arg0->unk_360 = 0;
    arg0->unk_38A = 0;
    arg0->unk_38C = 0;
    arg0->unk_38E = 8;
    arg0->unk_374 = 40.0f;
    temp_t0 = *arg2;
    switch (temp_t0) {
    case 16:
        phi_v1 = func_80B5600C();
        break;
    case 17:
        phi_v1 = func_80B56094();
        break;
    case 21:
        phi_v1 = func_80B5611C();
        break;
    case 12:
        phi_v1 = func_80B56B00();
        break;
    case 1:
    case 24:
        phi_v1 = func_80B56BC0();
        break;
    case 3:
    case 14:
    case 18:
    case 19:
    case 23:
        phi_v1 = func_80B56880();
        break;
    case 22:
        phi_v1 = func_80B56744();
        break;
    case 25:
        phi_v1 = func_80B56CAC();
        break;
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
        phi_v1 = func_80B561A4();
        break;
    case 40:
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
        phi_v1 = func_80B56418();
        break;
    default:
        phi_v1 = 0;
        break;
    }
    return phi_v1;
}

? func_80B56E44(Actor *arg0, ? arg1) {
    ? sp2C;
    ? sp20;
    void *temp_v0;

    temp_v0 = arg0[1].shape.feetPos[0].x;
    if ((temp_v0 != 0) && (temp_v0->unk_138 != 0)) {
        Math_Vec3f_Copy((Vec3f *) &sp2C, temp_v0 + 0x24);
        Math_Vec3f_Copy((Vec3f *) &sp20, arg0 + 0x24);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp20, (Vec3f *) &sp2C);
    }
    return 1;
}

? func_80B56EB4(Actor *arg0, GlobalContext *arg1) {
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

    sp44 = func_80B53B3C(arg1, arg0->unk_200);
    if ((func_8013AD6C(arg1) == 0) && (arg0->unk_384 != 0)) {
        if ((sp44 != 0) && (sp44->unk_138 != 0)) {
            if (((f32) arg0->unk_37A / (f32) arg0->unk_378) <= 0.9f) {
                sp44->unk_1A7 = (s8) arg0[1].shape.feetFloorFlags;
            } else {
                sp44->unk_1A7 = 0;
            }
        }
        temp_v0 = arg0->unk_37A;
        if ((s32) temp_v0 < 0) {
            arg0->unk_37A = 0;
        } else {
            temp_v1 = arg0->unk_378;
            phi_a0 = temp_v0;
            if ((s32) temp_v1 < (s32) temp_v0) {
                phi_a0 = temp_v1;
            }
            arg0->unk_37A = phi_a0;
        }
        temp_a0 = arg0 + 0x228;
        sp28 = temp_a0;
        temp_f0 = Math_Vec3f_DistXZ(temp_a0, arg0 + 0x234);
        sp38 = 0.0f;
        sp3C = 0.0f;
        sp40 = (f32) arg0->unk_37A * (temp_f0 / (f32) arg0->unk_378);
        Lib_Vec3f_TranslateAndRotateY(temp_a0, arg0->world.rot.y, (Vec3f *) &sp38, arg0 + 0x24);
        temp_a0_2 = arg0 + 0x144;
        arg0->unk_37A = (s16) (arg0->unk_37A + arg0->unk_384);
        sp28 = temp_a0_2;
        if ((func_801378B8((SkelAnime *) temp_a0_2, 3.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_2, 15.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x2971U);
        }
    }
    return 0;
}

? func_80B5702C(Actor *arg0, GlobalContext *arg1) {
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

    sp50 = 0;
    sp54 = 0;
    func_8013AF00((void *) &sp7C, 3, arg0[1].xzDistToPlayer->count + 3);
    temp_v1 = arg0 + 0x1E0;
    phi_v1 = temp_v1;
    if ((arg0->unk_360 & 8) == 0) {
        temp_v0 = arg0 + 0x1F8;
        sp58.unk_0 = D_801D15B0.x;
        temp_a1 = arg0 + 0x1EC;
        (&sp58)[1] = D_801D15B0.y;
        temp_a2 = arg0 + 0x1FC;
        (&sp58)[2] = D_801D15B0.z;
        sp44 = temp_a2;
        sp48 = temp_a1;
        sp40 = temp_v0;
        func_8013B6B0(arg0[1].xzDistToPlayer, temp_a1, temp_a2, arg0->unk_1F4, arg0[1].colChkInfo.displacement.z, temp_v0, (void *) &sp7C, (Vec3f *) &sp58, (s16) (s32) arg0->unk_384);
        func_8013B878(arg1, arg0[1].xzDistToPlayer, arg0->unk_1F8, (Vec3f *) &sp58);
        arg0->unk_360 = (u16) (arg0->unk_360 | 8);
        arg0->world.pos.y = sp5C;
        phi_v1 = arg0 + 0x1E0;
    } else {
        sp58.unk_0 = temp_v1->x;
        (&sp58)[1] = temp_v1->y;
        (&sp58)[2] = temp_v1->z;
        sp40 = arg0 + 0x1F8;
        sp44 = arg0 + 0x1FC;
        sp48 = arg0 + 0x1EC;
    }
    arg0->world.pos.x = sp58;
    arg0->world.pos.z = sp60;
    sp3C = phi_v1;
    if (func_8013AD6C(arg1) != 0) {
        sp54 = arg0->unk_1FC;
        sp50 = arg0->unk_1F8;
        sp58.unk_0 = arg0->world.pos.x;
        (&sp58)[1] = arg0->world.pos.y;
        (&sp58)[2] = arg0->world.pos.z;
    }
    phi_v1->x = D_801D15B0.x;
    phi_v1->y = D_801D15B0.y;
    phi_v1->z = D_801D15B0.z;
    sp3C = phi_v1;
    if (func_8013B6B0(arg0[1].xzDistToPlayer, sp48, sp44, arg0->unk_1F4, arg0[1].colChkInfo.displacement.z, sp40, (void *) &sp7C, phi_v1, (s16) (s32) arg0->unk_384) != 0) {
        arg0->unk_360 = (u16) (arg0->unk_360 | 0x10);
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
        arg0->unk_1FC = sp54;
        arg0->unk_1F8 = sp50;
        phi_v1->x = sp58.unk_0;
        phi_v1->y = (&sp58)[1];
        phi_v1->z = (&sp58)[2];
    } else {
        temp_a0 = arg0 + 0x144;
        sp48 = temp_a0;
        if ((func_801378B8((SkelAnime *) temp_a0, 3.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 15.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x2971U);
        }
    }
    return 0;
}

? func_80B572D4(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t6;

    temp_t6 = arg0->unk_200;
    switch (temp_t6) {
    case 23:
        if ((func_80B55F8C(arg1) != 0) && (func_80B55ECC(arg0) != 0)) {
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x20);
        } else {
            arg0->unk_360 = (u16) (arg0->unk_360 & 0xFFDF);
        }
        break;
    case 1:
        if (func_80B55ECC(arg0) != 0) {
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x20);
        } else {
            arg0->unk_360 = (u16) (arg0->unk_360 & 0xFFDF);
        }
        break;
    case 18:
    case 19:
        if (func_80B55ECC(arg0) != 0) {
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x20);
        } else {
            arg0->unk_360 = (u16) (arg0->unk_360 & 0xFFDF);
        }
        break;
    case 22:
        if ((func_801378B8((SkelAnime *) &arg0[1], 6.0f) != 0) && (arg0->unk_39C == 0x17)) {
            Audio_PlayActorSound2(arg0, 0x2899U);
        }
        break;
    }
    return 0;
}

? func_80B573F4(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0->unk_37A;
    switch (temp_v0) {
    case 0:
        arg0->unk_37A = (s16) (temp_v0 + 1);
        arg0->world.rot.y += 0x7FF8;
        break;
    case 1:
        if ((s16) (((s32) arg0->world.rot.y / 0xB6) * 0xB6) == (s16) (((s32) arg0->shape.rot.y / 0xB6) * 0xB6)) {
            Math_Vec3s_Copy(arg0 + 0xBC, arg0 + 0x30);
            func_80B53CE8(arg0, arg1, 0x13);
            arg0->unk_360 = (u16) (arg0->unk_360 | 0x40);
            arg0->unk_37A = (s16) (arg0->unk_37A + 1);
        }
        break;
    case 2:
        if (func_801378B8((SkelAnime *) &arg0[1], arg0[1].home.pos.z) != 0) {
            arg0->unk_37A = (s16) (arg0->unk_37A + 1);
        }
        break;
    case 3:
        temp_v0_2 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
        phi_v1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        }
        if (phi_v1 < 0x3000) {
            func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
        } else {
            func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 0U, 7U);
        }
        break;
    case 4:
        func_8013AED4((u16 *) &arg0[2].shape.feetPos[0].y, 3U, 7U);
        arg0->unk_37A = (s16) (arg0->unk_37A + 1);
        break;
    }
    return 0;
}

? func_80B575BC(Actor *arg0, ? arg1) {
    s16 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    phi_v0 = temp_v1 << 0x10;
    if ((s32) temp_v1 < 0) {
        phi_v0 = (s32) temp_v1 * -0x10000;
    }
    if ((phi_v0 >> 0x10) < 0x4000) {
        func_8013AED4(arg0 + 0x360, 3U, 7U);
    } else {
        func_8013AED4(arg0 + 0x360, 0U, 7U);
    }
    if (func_80B55ECC(arg0) != 0) {
        arg0->unk_360 = (u16) (arg0->unk_360 | 0x20);
    } else {
        arg0->unk_360 = (u16) (arg0->unk_360 & 0xFFDF);
    }
    return 1;
}

? func_80B57674(Actor *arg0, ? arg1) {
    s16 temp_v1;
    u16 *temp_a0;
    u16 *temp_a0_2;
    s32 phi_v0;

    temp_a0 = arg0 + 0x360;
    temp_v1 = arg0->yawTowardsPlayer - (s16) (arg0->shape.rot.y + 0x3000);
    phi_v0 = temp_v1 << 0x10;
    if ((s32) temp_v1 < 0) {
        phi_v0 = (s32) temp_v1 * -0x10000;
    }
    if ((phi_v0 >> 0x10) < 0x3000) {
        temp_a0_2 = arg0 + 0x360;
        arg0 = arg0;
        func_8013AED4(temp_a0_2, 3U, 7U);
    } else {
        arg0 = arg0;
        func_8013AED4(temp_a0, 0U, 7U);
    }
    arg0->unk_360 = (u16) (arg0->unk_360 & 0xFFDF);
    return 1;
}

void func_80B57718(Actor *arg0) {
    u8 temp_t7;

    temp_t7 = arg0->unk_200;
    switch (temp_t7) {
    case 16:
    case 17:
    case 21:
        func_80B56E44(arg0);
        break;
    case 3:
        func_80B573F4(arg0);
        break;
    case 1:
        func_80B575BC(arg0);
        break;
    case 25:
        func_80B57674(arg0);
        break;
    case 12:
    case 14:
    case 18:
    case 19:
    case 22:
    case 24:
        func_80B572D4(arg0);
        break;
    case 23:
        func_80B572D4(arg0);
        break;
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
        func_80B56EB4(arg0);
        break;
    case 40:
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
        func_80B5702C(arg0);
        break;
    }
    Math_ApproachS(&arg0->shape.rot.y, arg0->world.rot.y, 3, 0x2AA8);
}

void func_80B577F0(EnAn *this, GlobalContext *globalCtx) {
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 14.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06012618, NULL, &this->unk_264, &this->unk_2E2, 0x15);
    this->unk_39C = -1;
    func_80B53CE8((Actor *) this, globalCtx, 1);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_190, (Actor *) this, &D_80B58BBC);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80B58BE8);
    if ((this->actor.params & 0x8000) != 0) {
        this->unk_3C0 = 1;
    }
    this->actor.draw = func_80B580C0;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_360 = 0;
    this->unk_200 = 0;
    this->actionFunc = func_80B578F8;
    func_80B578F8(this, globalCtx);
}

void func_80B578F8(EnAn *this, GlobalContext *globalCtx) {
    u8 sp20;

    this->unk_384 = gSaveContext.unk_14 + gGameInfo->data[15];
    if (((this->actor.params & 0x8000) == 0) && (this->unk_3C0 == 0) && ((gSaveContext.weekEventReg[51] & 0x40) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (this->unk_3C0 != 0) {
        sp20 = 0x19;
        if (this->unk_200 != 0x19) {
            func_80B56D28(this, (u8 *) globalCtx, &sp20);
        }
    } else if ((func_80133038(globalCtx, &D_80B581D0, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk_200) && (func_80B56D28(this, (u8 *) globalCtx, &sp20) == 0))) {
        this->actor.shape.shadowDraw = NULL;
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    }
    this->unk_200 = sp20;
    this->unk_218 = func_80B55D20(this, globalCtx);
    func_80B57718((Actor *) this, globalCtx);
}

void func_80B57A44(EnAn *this, GlobalContext *globalCtx) {
    ? sp38;
    ? sp2C;
    Actor *temp_v0_2;
    u16 temp_t9;
    u8 temp_v0;

    if (func_8010BF58((Actor *) this, globalCtx, this->unk_204, this->unk_398, &this->unk_210) != 0) {
        func_8013AED4(&this->unk_360, 3U, 7U);
        temp_t9 = this->unk_360 & 0xFFDF;
        this->unk_360 = temp_t9;
        this->unk_360 = temp_t9 | 0x200;
        this->unk_388 = 0x14;
        this->unk_210 = 0;
        this->actionFunc = func_80B578F8;
        return;
    }
    temp_v0 = this->unk_200;
    if ((temp_v0 != 1) && (temp_v0 != 3) && (temp_v0 != 0xC) && (temp_v0 != 0xE) && (temp_v0 != 0x19)) {
        temp_v0_2 = this->unk_218;
        if ((temp_v0_2 != 0) && (temp_v0_2->update != 0)) {
            Math_Vec3f_Copy((Vec3f *) &sp38, (Vec3f *) &temp_v0_2->world);
            Math_Vec3f_Copy((Vec3f *) &sp2C, (Vec3f *) &this->actor.world);
            Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp2C, (Vec3f *) &sp38), 4, 0x2AA8);
        }
    }
}

void func_80B57B48(Actor *arg0, GlobalContext *arg1) {
    ? sp30;
    u32 sp28;
    ? *temp_t6;
    s32 *temp_t7;
    s32 temp_t2;
    s32 temp_v0_3;
    u16 temp_v1;
    u32 temp_v0;
    u8 temp_v0_2;
    s32 *phi_t7;
    ? *phi_t6;
    u8 phi_v0;

    phi_t7 = D_80B58EAC;
    phi_t6 = &sp30;
    do {
        temp_t7 = phi_t7 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk_-C = (s32) *phi_t7;
        temp_t6->unk_-8 = (s32) temp_t7->unk_-8;
        temp_t6->unk_-4 = (s32) temp_t7->unk_-4;
        phi_t7 = temp_t7;
        phi_t6 = temp_t6;
    } while (temp_t7 != (D_80B58EAC + 0x24));
    temp_t6->unk_0 = (s32) temp_t7->unk_0;
    if (func_800EE29C(arg1, 0x22DU) != 0) {
        temp_v0 = func_800EE200(arg1, 0x22DU);
        temp_t2 = temp_v0 * 4;
        sp28 = temp_v0;
        temp_v1 = *(arg1 + temp_t2)->unk_1F4C;
        temp_v0_2 = temp_v1 & 0xFF;
        phi_v0 = temp_v0_2;
        if ((temp_v1 & 0xFF) != arg0->unk_364) {
            arg0->unk_364 = (u8) temp_v1;
            if (temp_v0_2 == 3) {
                gSaveContext.weekEventReg[87] |= 2;
                arg0[2].next = (Actor *)1;
                phi_v0 = arg0->unk_364;
            }
            if (phi_v0 == 9) {
                arg0[2].next = NULL;
            }
            func_80B53CE8(arg0, arg1, (sp + (temp_v1 * 4))->unk_30);
        }
        temp_v0_3 = arg0->unk_39C;
        if (((temp_v0_3 == 0x1A) || (temp_v0_3 == 0x1C) || (temp_v0_3 == 0x1E) || (temp_v0_3 == 0x22)) && (func_801378B8((SkelAnime *) &arg0[1], arg0[1].home.pos.z) != 0)) {
            func_80B53CE8(arg0, arg1, arg0->unk_39C + 1);
        }
        func_800EDF24(arg0, arg1, sp28);
    }
}

void EnAn_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp1C;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    EnAn *this = (EnAn *) thisx;

    if (globalCtx->sceneNum != 0x61) {
        this->actor.params &= 0x7FFF;
    }
    temp_v1 = this->actor.params & 0x8000;
    temp_v0 = gSaveContext.weekEventReg[51] & 0x40;
    temp_v1_2 = temp_v1 >> 0xF;
    if (((temp_v0 == 0) && (temp_v1_2 == 1)) || ((temp_v0 != 0) && (temp_v1_2 == 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((temp_v1_2 == 0) && (sp1C = temp_v1_2, (func_80B53A7C(4, (GlobalContext *)0x202) != 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_214 = -0x80;
    this->unk_3B8 = 0;
    if ((temp_v1 >> 0xF) == 0) {
        this->actor.room = -1;
    }
    this->actionFunc = func_80B577F0;
}

void EnAn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnAn *this = (EnAn *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_190);
}

void EnAn_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnAn *this = (EnAn *) thisx;
    if (func_80B53840(this, globalCtx) == 0) {
        if ((func_80B577F0 != this->actionFunc) && (func_80B55180((Actor *) this, globalCtx) == 0) && (func_80B552E4(this, globalCtx) != 0)) {
            func_80B57B48((Actor *) this, globalCtx);
            func_80B53BA8(this, globalCtx);
            func_80B53F84(this);
            return;
        }
        this->actionFunc(this, globalCtx);
        if (this->unk_200 != 0) {
            func_80B55914((Actor *) this, (Actor *) globalCtx);
            func_80B53BA8(this, globalCtx);
            func_80B53F84(this);
            func_80B554E8(this);
            func_8013C964((Actor *) this, globalCtx, this->unk_374, 30.0f, 0, (s16) (this->unk_360 & 7));
            if ((this->unk_360 & 0x40) == 0) {
                Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
                Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
            }
            func_80B53ED4((Actor *) this, globalCtx);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80B57EE8(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80B58ED4, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
        func_80B54124(arg4, arg0, 1U);
        return;
    }
    if (arg1 == 8) {
        func_80B54124(arg4, arg0, 0U);
        func_80B54124(arg4, arg0, 4U);
        func_80B54124(arg4, arg0, 2U);
        func_80B54124(arg4, arg0, 3U);
        return;
    }
    if (arg1 == 5) {
        func_80B54124(arg4, arg0, 5U);
    }
}

void func_80B57FC4(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk_360;
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
    if (arg1 == 9) {
        func_8013AD9C((s16) (arg2->unk_37C + 0x4000), (s16) (arg2->unk_37E + arg2->shape.rot.y + 0x4000), arg2 + 0x240, arg2 + 0x258, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2[1].uncullZoneForward, arg2[1].uncullZoneScale, arg2[1].uncullZoneDownward, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2[1].textId, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_258, 1);
        SysMatrix_InsertZRotation_s(arg2[1].freezeTimer, 1);
        SysMatrix_StatePush();
    }
}

void func_80B580C0(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    if ((this->unk_200 != 0) || (this[2].prev != 0)) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp40 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp40->polyOpa.p;
        sp40->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060020;
        sp40 = sp40;
        sp38 = temp_v0;
        sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80B58EEC + (this->unk_390 * 4)));
        temp_v0_2 = sp40->polyOpa.p;
        sp40->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDB060024;
        sp34 = temp_v0_2;
        sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80B58EE0 + (this->unk_392 * 4)));
        func_801343C0(globalCtx, (void **) this[1].flags, this->unk_164, (s32) this[1].category, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B57EE8, func_80B57FC4, this);
    }
}
