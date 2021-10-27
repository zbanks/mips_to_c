typedef struct EnDno_ActorUnkStruct {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ s32 unk_C;                           /* inferred */
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ char pad_12[0x2];
    /* 0x14 */ s32 unk_14;                          /* inferred */
    /* 0x18 */ s32 unk_18;                          /* inferred */
    /* 0x1C */ u8 unk_1C;
    /* 0x1D */ u8 unk_1D;
    /* 0x1E */ char pad_1E[0x2];                    /* maybe part of unk_1D[3]? */
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ Vec3f unk_2C;
    /* 0x38 */ Vec3f unk_38;                        /* inferred */
    /* 0x44 */ Vec3f *unk_44;                       /* inferred */
    /* 0x48 */ Actor *unk_48;
    /* 0x4C */ f32 unk_4C;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ s16 unk_54;
    /* 0x56 */ s16 unk_56;
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ s32 (*unk_5C)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x60 */ s32 (*unk_60)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x64 */ s32 (*unk_64)(GlobalContext *, EnDno_ActorUnkStruct *);
    /* 0x68 */ s32 (*unk_68)(GlobalContext *, EnDno_ActorUnkStruct *);
} EnDno_ActorUnkStruct;                             /* size = 0x6C */

struct _mips2c_stack_func_8013A7C0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8013A860 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x8];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8013AB00 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x8];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ u32 sp60;                            /* inferred */
    /* 0x64 */ u32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ void *sp6C;                          /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_8013AD6C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8013AD9C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x40];
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ char pad_6E[0x2];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_8013AED4 {};              /* size 0x0 */

struct _mips2c_stack_func_8013AF00 {};              /* size 0x0 */

struct _mips2c_stack_func_8013B010 {};              /* size 0x0 */

struct _mips2c_stack_func_8013B0C8 {
    /* 0x000 */ char pad_0[0x8];
    /* 0x008 */ s32 sp8;                            /* inferred */
    /* 0x00C */ s32 spC;                            /* inferred */
    /* 0x010 */ char pad_10[0x38];                  /* maybe part of spC[15]? */
    /* 0x048 */ ? sp48;                             /* inferred */
    /* 0x048 */ char pad_48[0x1B8];
};                                                  /* size = 0x200 */

struct _mips2c_stack_func_8013B350 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x34];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_8013B6B0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0xC];                    /* maybe part of sp34[4]? */
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8013B878 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ u32 sp3C;                            /* inferred */
    /* 0x40 */ CollisionPoly *sp40;                 /* inferred */
    /* 0x44 */ char pad_44[0xC];                    /* maybe part of sp40[4]? */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x8];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_8013BB34 {};              /* size 0x0 */

struct _mips2c_stack_func_8013BB7C {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8013BC6C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8013BD40 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8013BEDC {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_8013C068 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x14];                   /* maybe part of sp40[6]? */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x10];                   /* maybe part of sp58[5]? */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x10];                   /* maybe part of sp88[5]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x10];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_8013C624 {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad_90[0xC];
    /* 0x9C */ ? sp9C;                              /* inferred */
    /* 0x9C */ char pad_9C[0xC];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_8013C8B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013C964 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8013CC2C {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_8013CD64 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_8013CF04 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x10];                   /* maybe part of sp1C[5]? */
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8013D0E0 {};              /* size 0x0 */

struct _mips2c_stack_func_8013D2E0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ char pad_3A[0x2];
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad_3E[0x2];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8013D5E8 {};              /* size 0x0 */

struct _mips2c_stack_func_8013D648 {};              /* size 0x0 */

struct _mips2c_stack_func_8013D68C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013D720 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013D768 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2C[3]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x8];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x8];
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_8013D83C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013D8DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013D924 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013D9C8 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013DB90 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ u32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ CollisionPoly *sp64;                 /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_8013DC40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013DCCC {};              /* size 0x0 */

struct _mips2c_stack_func_8013DCE0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Path *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8013DE04 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8013DF3C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8013E054 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013E07C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013E0A4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8013E1C8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ struct_80B8E1A8 *sp34;               /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8013E2D4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8013E3B8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8013E4B0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8013E5CC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8013E640 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8013E748 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8013E7C0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8013E8F8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s16 sp28;                            /* inferred */
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8013E950 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ s16 sp28;                            /* inferred */
    /* 0x2A */ char pad_2A[0x4];                    /* maybe part of sp28[3]? */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_ActorCategoryIterateById {}; /* size 0x0 */

s32 func_8017D2FC(f32, f32, s32, s32, Vec3f *, Vec3f *, Vec3f *, s32); /* extern */
Actor *func_8013A7C0(GlobalContext *arg0, s32 arg1); /* static */
Gfx *func_8013A860(GlobalContext *arg0, u8 arg1, void **arg2, Vec3s *arg3, s32 (*arg4)(GlobalContext *, s32, s32 *, f32 *, ? *, Actor *, Gfx **), ? (*arg5)(GlobalContext *, s32, s32 *, ? *, Actor *, Gfx **), ? (*arg6)(GlobalContext *, s32, Actor *, Gfx **), Actor *arg7, RSPMatrix **arg8, Gfx *arg9); /* static */
? func_8013AD9C(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5); /* static */
s32 func_8013B010(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6); /* static */
void func_8013B0C8(s32 arg0, f32 arg1, s32 arg2, s32 arg3, void *arg4, ? *); /* static */
void *func_8013B350(f32 *arg0, f32 *arg1, s32 arg2, f32 arg3, s32 arg4, void *arg5, void *arg6); /* static */
s32 func_8013BD40(void *arg0, void *arg1, s32 arg2); /* static */
u8 *func_8013BEDC(void *arg0, s32 arg1, s32 arg2, s32 *arg3); /* static */
s32 func_8013C068(u8 *arg0, s32 arg1, ? *arg2, f32 arg3, s32 arg4); /* static */
? func_8013C624(Actor *arg0, u8 *arg1, s32 *arg2, f32 *arg3, s32 arg4, s32 arg5); /* static */
? func_8013C8B8(void *arg0, s32 arg1, void *arg2);  /* static */
void func_8013CC2C(s32 arg0, s32 arg1, s32 arg2, u8 arg3); /* static */
void func_8013CD64(void *arg0, void *arg1, s32 arg2, f32 arg3, u8 arg4, u8 *arg5, s8 *arg6); /* static */
void func_8013CF04(void *arg0, GraphicsContext **arg1, u32 arg2); /* static */
s16 func_8013D0E0(s16 *arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4, f32 arg5); /* static */
void func_8013D720(void *arg0, PosRot *arg1, f32 *arg2); /* static */
void func_8013D83C(void *arg0, s32 arg1, void *arg2, f32 *arg3); /* static */
? func_8013DC40(s32 arg0, s32 arg1, s32 arg2, void *arg3); /* static */
u8 func_8013DCCC(s32 arg0, s32 arg1);               /* static */
? func_8013E054(s32 arg0, void *arg1);              /* static */
? func_8013E07C(s32 arg0, void *arg1);              /* static */
void func_8013E4B0(Vec3f *arg0, Vec3s *arg1, f32 *arg2, void *arg3); /* static */
s16 *func_8013E640(s32 arg0, ? arg1, s16 *arg2, s32 arg3, s16 arg4, s32 arg5, s32 (*arg6)(s32, ?, s16 *, s32)); /* static */
s32 func_8013E748(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, s32 arg4, s16 *arg5, s32 (*arg6)(GlobalContext *, Actor *, s16 *, ?)); /* static */
s32 func_8013E7C0(GlobalContext *arg0, Actor *arg1, s16 *arg2, ? *); /* static */
void func_8013E8F8(Actor *arg2, GlobalContext *arg3, s32 arg4, s16 arg5, s16 arg6); /* static */
static ? D_801C5D10;                                /* unable to generate initializer */
static ? D_801C5D60;                                /* unable to generate initializer */
static ? D_801C5D80;                                /* unable to generate initializer */
static ? D_801DE5E0;                                /* unable to generate initializer; const */
Vec3f D_801D15B0 = {0.0f, 0.0f, 0.0f};
f32 gFramerateDivisorHalf = 0.5f;
SaveContext gSaveContext;

Actor *func_8013A7C0(GlobalContext *arg0, s32 arg1) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_v1;

    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg0, phi_s0, 0xA, (s32) 5);
    phi_v1 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0->unk_1A4 != 5) || ((arg1 & 0xFF) != temp_v0->unk_1A5))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {
            phi_v1 = NULL;
        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_v1;
}

Gfx *func_8013A860(GlobalContext *arg0, s32 arg1, void **arg2, Vec3s *arg3, s32 (*arg4)(GlobalContext *, s32, s32 *, f32 *, ? *, Actor *, Gfx **), ? (*arg5)(GlobalContext *, s32, s32 *, ? *, Actor *, Gfx **), ? (*arg6)(GlobalContext *, s32, Actor *, Gfx **), Actor *arg7, RSPMatrix **arg8, Gfx *arg9) {
    void *sp5C;
    s32 sp58;
    s32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ? sp40;
    Gfx *temp_t0;
    Gfx *temp_t5_2;
    f32 *temp_a3;
    s32 *temp_a2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t4;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t5;
    void *temp_v0;

    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(*(arg2 + (arg1 * 4)));
    sp5C = temp_v0;
    temp_t1 = arg1 + 1;
    temp_t4 = temp_t1 * 6;
    arg1 = temp_t1;
    temp_t5 = arg3 + temp_t4;
    temp_a2 = &sp58;
    sp40.unk_0 = (s32) (unaligned s32) temp_t5->unk_0;
    temp_a3 = &sp48;
    sp40.unk_4 = (u16) temp_t5->unk_4;
    sp48 = (f32) temp_v0->unk_0;
    sp4C = (f32) temp_v0->unk_2;
    sp50 = (f32) temp_v0->unk_4;
    temp_t1_2 = temp_v0->unk_8;
    sp54 = temp_t1_2;
    sp58 = temp_t1_2;
    if ((arg4 == 0) || (arg4(arg0, arg1, temp_a2, temp_a3, &sp40, arg7, &arg9) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp48, (Vec3s *) &sp40);
        SysMatrix_StatePush();
        arg6(arg0, arg1, arg7, &arg9);
        if (sp58 != 0) {
            SysMatrix_GetStateAsRSPMatrix(*arg8);
            temp_t0 = arg9;
            arg9 = temp_t0 + 8;
            temp_t0->words.w0 = 0xDA380003;
            temp_t0->words.w1 = *arg8;
            temp_t5_2 = arg9;
            arg9 = temp_t5_2 + 8;
            temp_t5_2->words.w0 = 0xDE000000;
            temp_t5_2->words.w1 = sp58;
            *arg8 = &(*arg8)[1];
        } else if (sp54 != 0) {
            SysMatrix_GetStateAsRSPMatrix(*arg8);
            *arg8 = &(*arg8)[1];
        }
        SysMatrix_StatePop();
    }
    if (arg5 != 0) {
        arg5(arg0, arg1, &sp54, &sp40, arg7, &arg9);
    }
    temp_a1 = sp5C->unk_6;
    if (temp_a1 != 0xFF) {
        arg9 = func_8013A860(arg0, temp_a1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp5C->unk_7;
    if (temp_a1_2 != 0xFF) {
        arg9 = func_8013A860(arg0, temp_a1_2, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    return arg9;
}

Gfx *func_8013AB00(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 dListCount, void *func1, void *func2, void *func3, Actor *actor, Gfx *gfx) {
    void *sp6C;
    u32 sp64;
    u32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp4C;
    Gfx *sp48;
    Gfx *temp_t0;
    Gfx *temp_t2;
    Gfx *temp_t4;
    Gfx *temp_v0;
    GraphicsContext *temp_v1;
    f32 *temp_a3;
    u32 *temp_a2;
    u8 temp_a1;
    void *temp_v0_2;

    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyOpa.d - (((dListCount << 6) + 0xF) & ~0xF);
    temp_v1->polyOpa.d = temp_v0;
    temp_t2 = gfx;
    sp48 = temp_v0;
    if (skeleton == 0) {
        return NULL;
    }
    gfx = &temp_t2[1];
    temp_t2->words.w0 = 0xDB060034;
    temp_t2->words.w1 = (u32) sp48;
    SysMatrix_StatePush();
    temp_v0_2 = Lib_SegmentedToVirtual(*skeleton);
    sp6C = temp_v0_2;
    temp_a2 = &sp64;
    temp_a3 = &sp54;
    sp54 = (f32) limbDrawTable->x;
    sp58 = (f32) limbDrawTable->y;
    sp5C = (f32) limbDrawTable->z;
    sp4C.unk_0 = (s32) (unaligned s32) limbDrawTable->unk_6;
    sp4C.unk_4 = (u16) limbDrawTable[1].z;
    sp64 = temp_v0_2->unk_8;
    sp60 = temp_v0_2->unk_8;
    if ((func1 == 0) || (((s32 (*)(GlobalContext *, ?, u32 *, f32 *, ? *, Actor *, Gfx **)) func1)(globalCtx, 1, temp_a2, temp_a3, &sp4C, actor, &gfx) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp54, (Vec3s *) &sp4C);
        SysMatrix_StatePush();
        ((? (*)(GlobalContext *, ?, Actor *, Gfx **)) func3)(globalCtx, 1, actor, &gfx);
        if (sp64 != 0) {
            SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp48);
            temp_t0 = gfx;
            gfx = &temp_t0[1];
            temp_t0->words.w0 = 0xDA380003;
            temp_t0->words.w1 = (u32) sp48;
            temp_t4 = gfx;
            gfx = &temp_t4[1];
            temp_t4->words.w0 = 0xDE000000;
            temp_t4->words.w1 = sp64;
            sp48 = &sp48[8];
        } else if (sp60 != 0) {
            SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp48);
            sp48 = &sp48[8];
        }
        SysMatrix_StatePop();
    }
    if (func2 != 0) {
        ((? (*)(GlobalContext *, ?, u32 *, ? *, Actor *, Gfx **)) func2)(globalCtx, 1, &sp60, &sp4C, actor, &gfx);
    }
    temp_a1 = sp6C->unk_6;
    if (temp_a1 != 0xFF) {
        gfx = func_8013A860(globalCtx, temp_a1, skeleton, limbDrawTable, (s32 (*)(GlobalContext *, s32, u32 *, f32 *, ? *, Actor *, Gfx **)) func1, (? (*)(GlobalContext *, s32, u32 *, ? *, Actor *, Gfx **)) func2, (? (*)(GlobalContext *, s32, Actor *, Gfx **)) func3, actor, (RSPMatrix **) &sp48, gfx);
    }
    SysMatrix_StatePop();
    return gfx;
}

s32 func_8013AD6C(GlobalContext *globalCtx) {
    s32 sp1C;
    s32 phi_v1;

    sp1C = 0;
    phi_v1 = sp1C;
    if (func_801690CC(globalCtx) != 0) {
        phi_v1 = 1;
    }
    return phi_v1;
}

? func_8013AD9C(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5) {
    ? sp7C;
    ? sp70;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    ? sp28;

    sp70.unk_0 = (f32) D_801D15B0.x;
    sp70.unk_4 = (f32) D_801D15B0.y;
    sp70.unk_8 = (f32) D_801D15B0.z;
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp70, (Vec3f *) &sp7C);
    SysMatrix_CopyCurrentState((MtxF *) &sp28);
    func_8018219C((MtxF *) &sp28, (Vec3s *) &sp68, 0);
    arg2->unk_0 = (s32) sp7C.unk_0;
    arg2->unk_4 = (s32) sp7C.unk_4;
    arg2->unk_8 = (s32) sp7C.unk_8;
    if ((arg4 == 0) && (arg5 == 0)) {
        arg3->unk_0 = sp68;
        arg3[1] = sp6A;
        arg3[2] = sp6C;
        return 1;
    }
    if (arg5 != 0) {
        sp6C = arg0;
        sp6A = arg1;
    }
    Math_SmoothStepToS(arg3, sp68, 3, 0x2AA8, (s16) 0xB6);
    Math_SmoothStepToS(&arg3[1], sp6A, 3, 0x2AA8, (s16) 0xB6);
    Math_SmoothStepToS(&arg3[2], sp6C, 3, 0x2AA8, (s16) 0xB6);
    return 1;
}

void func_8013AED4(u16 *param_1, u16 param_2, u16 param_3) {
    *param_1 = (*param_1 & ~(param_3 & 0xFFFF)) | (param_2 & 0xFFFF);
}

void func_8013AF00(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;
    f32 phi_f0;
    f32 *phi_v1;
    s32 phi_v0_2;
    f32 phi_f0_2;
    void *phi_v1_2;
    f32 phi_f0_3;
    f32 phi_f0_4;
    f32 phi_f0_5;
    f32 phi_f0_6;
    s32 phi_v0_3;
    f32 phi_f0_7;

    phi_v0 = 0;
    phi_f0_6 = 0.0f;
    phi_v0_3 = 0;
    phi_f0_7 = 0.0f;
    if (arg2 > 0) {
        temp_t0 = arg2 & 3;
        if (temp_t0 != 0) {
            phi_v1 = arg0 + (0 * 4);
            do {
                phi_f0 = phi_f0_6;
                if ((phi_v0 >= arg1) && ((arg2 - arg1) >= phi_v0)) {
                    phi_f0 = phi_f0_6 + 1.0f;
                }
                temp_v0 = phi_v0 + 1;
                *phi_v1 = phi_f0;
                phi_v0 = temp_v0;
                phi_v1 += 4;
                phi_f0_6 = phi_f0;
                phi_v0_3 = temp_v0;
                phi_f0_7 = phi_f0;
            } while (temp_t0 != temp_v0);
            if (temp_v0 != arg2) {
                goto block_8;
            }
        } else {
block_8:
            phi_v0_2 = phi_v0_3;
            phi_v1_2 = arg0 + (phi_v0_3 * 4);
            do {
                phi_f0_2 = phi_f0_7;
                if ((phi_v0_2 >= arg1) && ((arg2 - arg1) >= phi_v0_2)) {
                    phi_f0_2 = phi_f0_7 + 1.0f;
                }
                phi_v1_2->unk_0 = phi_f0_2;
                phi_f0_3 = phi_f0_2;
                if ((phi_v0_2 >= (arg1 - 1)) && (phi_v0_2 < (arg2 - arg1))) {
                    phi_f0_3 = phi_f0_2 + 1.0f;
                }
                phi_v1_2->unk_4 = phi_f0_3;
                phi_f0_4 = phi_f0_3;
                if ((phi_v0_2 >= (arg1 - 2)) && (phi_v0_2 < ((arg2 - arg1) - 1))) {
                    phi_f0_4 = phi_f0_3 + 1.0f;
                }
                phi_v1_2->unk_8 = phi_f0_4;
                phi_f0_5 = phi_f0_4;
                if ((phi_v0_2 >= (arg1 - 3)) && (phi_v0_2 < ((arg2 - arg1) - 2))) {
                    phi_f0_5 = phi_f0_4 + 1.0f;
                }
                temp_v0_2 = phi_v0_2 + 4;
                phi_v1_2->unk_C = phi_f0_5;
                phi_v0_2 = temp_v0_2;
                phi_v1_2 += 0x10;
                phi_f0_7 = phi_f0_5;
            } while (temp_v0_2 != arg2);
        }
    }
}

s32 func_8013B010(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t2;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_a3;
    s32 phi_v1_2;
    s32 phi_v0_2;

    *arg0 = 0.0f;
    if ((arg2 <= 0) || (arg1 < 0)) {
        return 0;
    }
    temp_v1 = arg5 - 1;
    phi_v1 = temp_v1;
    phi_v0_2 = 0;
    if (temp_v1 < arg4) {
        do {
            phi_v0 = phi_v0_2;
            phi_a3 = 0;
            if (arg2 > 0) {
loop_6:
                phi_v0_2 = phi_v0;
                if (phi_v0 != arg1) {
                    temp_t2 = arg6 + (phi_v1 * 4);
                    temp_a3 = phi_a3 + 1;
                    temp_v0 = phi_v0 + 1;
                    *arg0 += (temp_t2->unk_4 - temp_t2->unk_0) * (1.0f / (f32) arg2);
                    phi_v0 = temp_v0;
                    phi_a3 = temp_a3;
                    phi_v0_2 = temp_v0;
                    if (temp_a3 != arg2) {
                        goto loop_6;
                    }
                }
            }
            temp_v1_2 = phi_v1 + 1;
            phi_v1 = temp_v1_2;
        } while (temp_v1_2 != arg4);
    }
    phi_v1_2 = 1;
    if (arg1 == arg3) {
        phi_v1_2 = 2;
    }
    return phi_v1_2;
}

void func_8013B0C8(s32 arg0, f32 arg1, s32 arg2, s32 arg3, void *arg4) {
    ? sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a1;
    s32 temp_t1;
    s32 temp_t1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_t1_2;
    f32 *phi_a3;
    s32 phi_v0;
    void *phi_a3_2;
    s32 phi_v0_2;
    s32 phi_v1;
    s32 phi_a1;
    void *phi_t0;
    void *phi_t1;
    void *phi_t2;
    s32 phi_v1_2;
    void *phi_a3_3;
    void *phi_a2;
    s32 phi_v0_3;
    void *phi_a3_4;
    void *phi_a2_2;
    s32 phi_v0_4;
    s32 phi_a3_5;
    s32 phi_v0_5;

    phi_v1 = 0;
    if (arg0 > 0) {
        temp_a1 = arg0 + 1;
        do {
            phi_v0 = 0;
            phi_v0_4 = 0;
            if (temp_a1 > 0) {
                temp_t1 = (arg0 + 1) & 3;
                temp_a2 = (phi_v1 * 0x2C) + &sp48;
                if (temp_t1 != 0) {
                    phi_a3 = temp_a2 + (0 * 4);
                    do {
                        temp_v0 = phi_v0 + 1;
                        *phi_a3 = 0.0f;
                        phi_a3 += 4;
                        phi_v0 = temp_v0;
                        phi_v0_4 = temp_v0;
                    } while (temp_t1 != temp_v0);
                    if (temp_v0 != temp_a1) {
                        goto block_7;
                    }
                } else {
block_7:
                    phi_a3_2 = temp_a2 + (phi_v0_4 * 4);
                    phi_v0_2 = phi_v0_4;
                    do {
                        temp_v0_2 = phi_v0_2 + 4;
                        phi_a3_2->unk_4 = 0.0f;
                        phi_a3_2->unk_8 = 0.0f;
                        phi_a3_2->unk_C = 0.0f;
                        temp_a3 = phi_a3_2 + 0x10;
                        temp_a3->unk_-10 = 0.0f;
                        phi_a3_2 = temp_a3;
                        phi_v0_2 = temp_v0_2;
                    } while (temp_v0_2 != temp_a1);
                }
            }
            temp_v1 = phi_v1 + 1;
            phi_v1 = temp_v1;
        } while (temp_v1 != arg0);
    }
    (sp + (arg0 * 4))->unk_44 = 1.0f;
    phi_v1_2 = 1;
    if (arg0 >= 2) {
        phi_a1 = arg2 - 1;
        phi_a3_5 = arg0 - 2;
        do {
            if (arg2 >= phi_a1) {
                phi_t0 = arg3 + (phi_a1 * 4) + (phi_v1_2 * 4);
                phi_t1 = arg3 + (phi_a1 * 4);
                phi_t2 = (phi_v1_2 * 0x2C) + (phi_a3_5 * 4) + &sp48;
                do {
                    temp_f0 = phi_t0->unk_0;
                    temp_f2 = phi_t1->unk_0;
                    if (temp_f0 != temp_f2) {
                        phi_t2->unk_0 = (f32) (phi_t2->unk_-2C * ((arg1 - temp_f2) / (temp_f0 - temp_f2)));
                    } else {
                        phi_t2->unk_0 = 0.0f;
                    }
                    temp_f0_2 = phi_t0->unk_4;
                    temp_f2_2 = phi_t1->unk_4;
                    temp_t1_2 = phi_t1 + 4;
                    phi_t0 += 4;
                    phi_t1 = temp_t1_2;
                    if (temp_f0_2 != temp_f2_2) {
                        phi_t2->unk_0 = (f32) (phi_t2->unk_0 + (((temp_f0_2 - arg1) / (temp_f0_2 - temp_f2_2)) * phi_t2->unk_-28));
                    }
                    phi_t2 += 4;
                } while (((arg2 * 4) + arg3 + 4) != temp_t1_2);
            }
            temp_v1_2 = phi_v1_2 + 1;
            phi_a1 += -1;
            phi_v1_2 = temp_v1_2;
            phi_a3_5 += -1;
        } while (temp_v1_2 != arg0);
    }
    phi_v0_3 = 0;
    phi_v0_5 = 0;
    if (arg0 > 0) {
        temp_t1_3 = arg0 & 3;
        if (temp_t1_3 != 0) {
            temp_v1_3 = 0 * 4;
            phi_a3_3 = (arg0 * 0x2C) + temp_v1_3 + &sp48;
            phi_a2 = arg4 + temp_v1_3;
            do {
                temp_v0_3 = phi_v0_3 + 1;
                temp_a2_2 = phi_a2 + 4;
                temp_a2_2->unk_-4 = (f32) phi_a3_3->unk_-2C;
                phi_a3_3 += 4;
                phi_a2 = temp_a2_2;
                phi_v0_3 = temp_v0_3;
                phi_v0_5 = temp_v0_3;
            } while (temp_t1_3 != temp_v0_3);
            if (temp_v0_3 != arg0) {
                goto block_26;
            }
        } else {
block_26:
            temp_v1_4 = phi_v0_5 * 4;
            phi_a3_4 = (arg0 * 0x2C) + temp_v1_4 + &sp48;
            phi_a2_2 = arg4 + temp_v1_4;
            do {
                temp_a2_3 = phi_a2_2 + 0x10;
                temp_a3_2 = phi_a3_4 + 0x10;
                temp_a2_3->unk_-10 = (f32) phi_a3_4->unk_-2C;
                temp_a2_3->unk_-C = (f32) temp_a3_2->unk_-38;
                temp_a2_3->unk_-8 = (f32) temp_a3_2->unk_-34;
                temp_a2_3->unk_-4 = (f32) temp_a3_2->unk_-30;
                phi_a3_4 = temp_a3_2;
                phi_a2_2 = temp_a2_3;
            } while (temp_a2_3 != ((arg0 * 4) + arg4));
        }
    }
}

void *func_8013B350(f32 *arg0, f32 *arg1, s32 arg2, f32 arg3, s32 arg4, void *arg5, void *arg6) {
    ? sp64;
    f32 *temp_v1;
    f32 *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f8;
    f32 temp_f8_2;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t6;
    s16 temp_t6_2;
    s16 temp_t6_3;
    s16 temp_t6_4;
    s16 temp_t7;
    s16 temp_t7_2;
    s32 temp_a0;
    s32 temp_a2;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_3;
    void *temp_v1_4;
    s32 phi_a0;
    s32 phi_a0_2;
    s32 phi_a0_3;
    void *phi_v1;
    f32 phi_f24;
    f32 phi_f20;
    f32 phi_f22;
    void *phi_v0;
    f32 phi_f24_2;
    f32 *phi_v1_2;
    s16 phi_f18;
    f32 phi_f24_3;
    void *phi_v1_3;
    s16 phi_t6;
    void *phi_v0_2;
    f32 phi_f20_2;
    f32 phi_f20_3;
    f32 phi_f22_2;
    s16 phi_t6_2;
    f32 phi_f22_3;
    s16 phi_t7;
    void *phi_v0_3;
    f32 phi_f24_4;
    f32 *phi_v1_4;
    s16 phi_f18_2;
    void *phi_v0_4;
    f32 phi_f24_5;
    f32 phi_f24_6;
    s16 phi_t6_3;
    void *phi_v0_5;
    f32 phi_f20_4;
    f32 phi_f20_5;
    f32 phi_f20_6;
    f32 phi_f22_4;
    s16 phi_t6_4;
    f32 phi_f22_5;
    f32 phi_f22_6;
    s16 phi_t7_2;

    phi_a0_3 = 0;
    phi_f24 = 0.0f;
    phi_f20 = 0.0f;
    phi_f22 = 0.0f;
    phi_v0 = func_8013B0C8(arg2, arg3, arg2, arg4, arg6, &sp64);
    phi_f24_2 = 0.0f;
    phi_f20_2 = 0.0f;
    phi_f22_2 = 0.0f;
    phi_f24_4 = 0.0f;
    phi_f24_5 = 0.0f;
    phi_f20_4 = 0.0f;
    phi_f20_5 = 0.0f;
    phi_f22_4 = 0.0f;
    phi_f22_5 = 0.0f;
    if ((bitwise s32) arg3 > 0) {
        temp_a2 = (bitwise s32) arg3 & 3;
        if (temp_a2 != 0) {
            temp_v1 = (0 * 4) + &sp64;
            temp_v0 = arg5 + (arg4 * 6) + (-(bitwise s32) arg3 * 6) + (0 * 6);
            temp_t5 = temp_v0->unk_6;
            temp_t6 = temp_v0->unk_A;
            phi_a0 = 1;
            phi_a0_2 = 1;
            phi_v1_2 = temp_v1;
            phi_f18 = temp_t5;
            phi_t6_2 = temp_t6;
            phi_v0_3 = temp_v0;
            phi_v1_4 = temp_v1;
            phi_f18_2 = temp_t5;
            phi_v0_4 = temp_v0;
            phi_t6_4 = temp_t6;
            if (temp_a2 != 1) {
                do {
                    temp_f12 = *phi_v1_4;
                    temp_t5_2 = phi_v0_4->unk_C;
                    temp_a0 = phi_a0 + 1;
                    temp_v0_2 = phi_v0_4 + 6;
                    temp_v1_2 = phi_v1_4 + 4;
                    temp_t6_2 = temp_v0_2->unk_A;
                    temp_f20 = phi_f20_4 + temp_f12;
                    temp_f24 = phi_f24_4 + (temp_f12 * (f32) phi_f18_2);
                    temp_f22 = phi_f22_4 + (temp_f12 * (f32) phi_t6_4);
                    phi_a0 = temp_a0;
                    phi_a0_2 = temp_a0;
                    phi_f24_2 = temp_f24;
                    phi_v1_2 = temp_v1_2;
                    phi_f18 = temp_t5_2;
                    phi_f20_2 = temp_f20;
                    phi_f22_2 = temp_f22;
                    phi_t6_2 = temp_t6_2;
                    phi_v0_3 = temp_v0_2;
                    phi_f24_4 = temp_f24;
                    phi_v1_4 = temp_v1_2;
                    phi_f18_2 = temp_t5_2;
                    phi_v0_4 = temp_v0_2;
                    phi_f20_4 = temp_f20;
                    phi_f22_4 = temp_f22;
                    phi_t6_4 = temp_t6_2;
                } while (temp_a2 != temp_a0);
            }
            temp_f12_2 = *phi_v1_2;
            temp_f20_2 = phi_f20_2 + temp_f12_2;
            temp_f24_2 = phi_f24_2 + (temp_f12_2 * (f32) phi_f18);
            temp_f22_2 = phi_f22_2 + (temp_f12_2 * (f32) phi_t6_2);
            phi_a0_3 = phi_a0_2;
            phi_f24 = temp_f24_2;
            phi_f20 = temp_f20_2;
            phi_f22 = temp_f22_2;
            phi_v0 = phi_v0_3 + 6;
            phi_f24_5 = temp_f24_2;
            phi_f20_5 = temp_f20_2;
            phi_f22_5 = temp_f22_2;
            if (phi_a0_2 != (bitwise s32) arg3) {
                goto block_5;
            }
        } else {
block_5:
            temp_a1 = ((bitwise s32) arg3 * 4) + &sp64;
            temp_v0_3 = arg5 + (arg4 * 6) + (-(bitwise s32) arg3 * 6) + (phi_a0_3 * 6);
            temp_v1_3 = (phi_a0_3 * 4) + &sp64 + 0x10;
            temp_t6_3 = temp_v0_3->unk_6;
            temp_t7 = temp_v0_3->unk_A;
            phi_v1 = temp_v1_3;
            phi_f24_3 = phi_f24_5;
            phi_v1_3 = temp_v1_3;
            phi_t6 = temp_t6_3;
            phi_v0_2 = temp_v0_3;
            phi_f20_3 = phi_f20_5;
            phi_f22_3 = phi_f22_5;
            phi_t7 = temp_t7;
            phi_f24_6 = phi_f24_5;
            phi_t6_3 = temp_t6_3;
            phi_v0_5 = temp_v0_3;
            phi_f20_6 = phi_f20_5;
            phi_f22_6 = phi_f22_5;
            phi_t7_2 = temp_t7;
            if (temp_v1_3 != temp_a1) {
                do {
                    temp_f14 = phi_v1->unk_-10;
                    temp_f8 = phi_v1->unk_-C;
                    temp_f18 = phi_v1->unk_-8;
                    temp_f0 = phi_v1->unk_-4;
                    temp_v1_4 = phi_v1 + 0x10;
                    temp_v0_4 = phi_v0_5 + 0x18;
                    temp_t6_4 = temp_v0_4->unk_6;
                    temp_t7_2 = temp_v0_4->unk_A;
                    temp_f24_3 = phi_f24_6 + (temp_f14 * (f32) phi_t6_3) + (temp_f8 * (f32) phi_v0_5->unk_C) + (temp_f18 * (f32) phi_v0_5->unk_12) + (temp_f0 * (f32) phi_v0_5->unk_18);
                    temp_f22_3 = phi_f22_6 + (temp_f14 * (f32) phi_t7_2) + (temp_f8 * (f32) phi_v0_5->unk_10) + (temp_f18 * (f32) phi_v0_5->unk_16) + (temp_f0 * (f32) phi_v0_5->unk_1C);
                    temp_f20_3 = phi_f20_6 + temp_f14 + temp_f8 + temp_f18 + temp_f0;
                    phi_v1 = temp_v1_4;
                    phi_f24_3 = temp_f24_3;
                    phi_v1_3 = temp_v1_4;
                    phi_t6 = temp_t6_4;
                    phi_v0_2 = temp_v0_4;
                    phi_f20_3 = temp_f20_3;
                    phi_f22_3 = temp_f22_3;
                    phi_t7 = temp_t7_2;
                    phi_f24_6 = temp_f24_3;
                    phi_t6_3 = temp_t6_4;
                    phi_v0_5 = temp_v0_4;
                    phi_f20_6 = temp_f20_3;
                    phi_f22_6 = temp_f22_3;
                    phi_t7_2 = temp_t7_2;
                } while (temp_v1_4 != temp_a1);
            }
            temp_f14_2 = phi_v1_3->unk_-10;
            temp_f8_2 = phi_v1_3->unk_-C;
            temp_f18_2 = phi_v1_3->unk_-8;
            temp_f0_2 = phi_v1_3->unk_-4;
            phi_f24 = phi_f24_3 + (temp_f14_2 * (f32) phi_t6) + (temp_f8_2 * (f32) phi_v0_2->unk_C) + (temp_f18_2 * (f32) phi_v0_2->unk_12) + (temp_f0_2 * (f32) phi_v0_2->unk_18);
            phi_f20 = phi_f20_3 + temp_f14_2 + temp_f8_2 + temp_f18_2 + temp_f0_2;
            phi_f22 = phi_f22_3 + (temp_f14_2 * (f32) phi_t7) + (temp_f8_2 * (f32) phi_v0_2->unk_10) + (temp_f18_2 * (f32) phi_v0_2->unk_16) + (temp_f0_2 * (f32) phi_v0_2->unk_1C);
            phi_v0 = phi_v0_2 + 0x18;
        }
    }
    *arg0 = phi_f24 / phi_f20;
    *arg1 = phi_f22 / phi_f20;
    return phi_v0;
}

s32 func_8013B6B0(Path *path, void *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 *arg5, void *arg6, Vec3f *arg7, s16 arg8) {
    void *sp44;
    s32 sp34;
    s32 temp_at;
    s32 temp_t7;
    u8 temp_v1;
    void *temp_t0;
    void *temp_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_t1;

    temp_t0 = Lib_SegmentedToVirtual((void *) path->points);
    temp_v1 = path->count;
    if (*arg5 >= (s32) temp_v1) {
        phi_v1 = 2;
    } else {
        sp34 = 0;
        sp44 = temp_t0;
        phi_v1 = func_8013B010((f32 *) arg1, *arg2, arg3, arg4, (s32) temp_v1, 3, arg6);
    }
    phi_t1 = 0;
    if (phi_v1 != 1) {
        if (phi_v1 != 2) {

        } else {
            temp_v0 = temp_t0 + (path->count * 6);
            arg7->x = (f32) temp_v0->unk_-6 * 1.0f;
            arg7->z = (f32) temp_v0->unk_-2 * 1.0f;
            phi_t1 = 1;
        }
    } else {
        sp34 = 0;
        func_8013B350((f32 *) arg7, &arg7->z, *arg1, 4e-45.0f, *arg5, temp_t0, arg6);
        phi_t1 = 0;
    }
    temp_t7 = *arg2 + (s32) arg8;
    temp_at = temp_t7 < arg4;
    *arg2 = temp_t7;
    phi_v1_2 = temp_t7;
    if (temp_at == 0) {
        *arg2 = arg4;
        phi_v1_2 = arg4;
    } else if (temp_t7 < 0) {
        *arg2 = 0;
        phi_v1_2 = 0;
    }
    *arg5 = (phi_v1_2 / arg3) + 2;
    return phi_t1;
}

void func_8013B878(GlobalContext *globalCtx, Path *path, s32 arg2, Vec3f *arg3) {
    f32 sp6C;
    ? sp68;
    f32 sp60;
    ? sp5C;
    ? sp50;
    CollisionPoly *sp40;
    u32 sp3C;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t0_3;
    s16 temp_t0_4;
    s16 temp_t0_5;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_v0;
    s32 phi_a1;
    s32 phi_t1;
    void *phi_a0;
    s32 phi_t0;
    s32 phi_a2;
    s32 phi_a1_2;
    s32 phi_t1_2;
    void *phi_a0_2;
    s32 phi_t0_2;
    s32 phi_t1_3;
    s32 phi_t0_3;
    s32 phi_t1_4;
    s32 phi_t0_4;
    s32 phi_t1_5;
    s32 phi_t0_5;
    s32 phi_a2_2;
    s32 phi_t1_6;
    s32 phi_t0_6;
    s32 phi_t1_7;
    s32 phi_t0_7;
    s32 phi_t1_8;
    s32 phi_a2_3;
    s32 phi_t0_8;

    temp_v0 = Lib_SegmentedToVirtual((void *) path->points);
    sp40 = NULL;
    sp3C = 0;
    temp_v1 = arg2 - 2;
    phi_a1 = 0;
    phi_t1 = 0;
    phi_t0 = 0;
    phi_a2 = temp_v1;
    phi_t1_6 = 0;
    phi_t0_6 = 0;
    phi_a1_2 = 0;
    phi_t1_2 = 0;
    phi_a2_3 = temp_v1;
    phi_t0_2 = 0;
    if (arg2 >= temp_v1) {
        temp_v1_2 = ((arg2 - temp_v1) + 1) & 3;
        if (temp_v1_2 != 0) {
            phi_a0 = temp_v0 + (temp_v1 * 6);
            do {
                phi_a1 = 1;
                phi_t0_7 = phi_t0;
                phi_a1_2 = 1;
                phi_t1_7 = phi_t1;
                if (phi_a1 != 0) {
                    temp_v1_3 = phi_a0->unk_2;
                    if (phi_t1 < (s32) temp_v1_3) {
                        phi_t1_7 = (s32) temp_v1_3;
                    }
                    if ((s32) temp_v1_3 < phi_t0) {
                        phi_t0_7 = (s32) temp_v1_3;
                    }
                } else {
                    temp_t0 = phi_a0->unk_2;
                    phi_t1_7 = (s32) temp_t0;
                    phi_t0_7 = (s32) temp_t0;
                }
                temp_a2 = phi_a2 + 1;
                phi_t1 = phi_t1_7;
                phi_a0 += 6;
                phi_t0 = phi_t0_7;
                phi_a2 = temp_a2;
                phi_t1_6 = phi_t1_7;
                phi_t0_6 = phi_t0_7;
                phi_t1_2 = phi_t1_7;
                phi_a2_3 = temp_a2;
                phi_t0_2 = phi_t0_7;
            } while ((temp_v1_2 + temp_v1) != temp_a2);
            if ((arg2 + 1) != temp_a2) {
                goto block_11;
            }
        } else {
block_11:
            phi_a0_2 = temp_v0 + (phi_a2_3 * 6);
            phi_a2_2 = phi_a2_3;
            do {
                phi_a1_2 = 1;
                phi_t0_3 = phi_t0_2;
                phi_t1_3 = phi_t1_2;
                if (phi_a1_2 != 0) {
                    temp_v1_4 = phi_a0_2->unk_2;
                    if (phi_t1_2 < (s32) temp_v1_4) {
                        phi_t1_3 = (s32) temp_v1_4;
                    }
                    if ((s32) temp_v1_4 < phi_t0_2) {
                        phi_t0_3 = (s32) temp_v1_4;
                    }
                } else {
                    temp_t0_2 = phi_a0_2->unk_2;
                    phi_t1_3 = (s32) temp_t0_2;
                    phi_t0_3 = (s32) temp_t0_2;
                }
                temp_a2_2 = phi_a2_2 + 4;
                phi_t0_4 = phi_t0_3;
                phi_a2_2 = temp_a2_2;
                phi_t1_4 = phi_t1_3;
                if (1 != 0) {
                    temp_v1_5 = phi_a0_2->unk_8;
                    if (phi_t1_3 < (s32) temp_v1_5) {
                        phi_t1_4 = (s32) temp_v1_5;
                    }
                    if ((s32) temp_v1_5 < phi_t0_3) {
                        phi_t0_4 = (s32) temp_v1_5;
                    }
                } else {
                    temp_t0_3 = phi_a0_2->unk_8;
                    phi_t1_4 = (s32) temp_t0_3;
                    phi_t0_4 = (s32) temp_t0_3;
                }
                phi_t0_5 = phi_t0_4;
                phi_t1_5 = phi_t1_4;
                if (1 != 0) {
                    temp_v1_6 = phi_a0_2->unk_E;
                    if (phi_t1_4 < (s32) temp_v1_6) {
                        phi_t1_5 = (s32) temp_v1_6;
                    }
                    if ((s32) temp_v1_6 < phi_t0_4) {
                        phi_t0_5 = (s32) temp_v1_6;
                    }
                } else {
                    temp_t0_4 = phi_a0_2->unk_E;
                    phi_t1_5 = (s32) temp_t0_4;
                    phi_t0_5 = (s32) temp_t0_4;
                }
                phi_t0_8 = phi_t0_5;
                phi_t1_8 = phi_t1_5;
                if (1 != 0) {
                    temp_v1_7 = phi_a0_2->unk_14;
                    if (phi_t1_5 < (s32) temp_v1_7) {
                        phi_t1_8 = (s32) temp_v1_7;
                    }
                    if ((s32) temp_v1_7 < phi_t0_5) {
                        phi_t0_8 = (s32) temp_v1_7;
                    }
                } else {
                    temp_t0_5 = phi_a0_2->unk_14;
                    phi_t1_8 = (s32) temp_t0_5;
                    phi_t0_8 = (s32) temp_t0_5;
                }
                phi_t1_2 = phi_t1_8;
                phi_a0_2 += 0x18;
                phi_t0_2 = phi_t0_8;
                phi_t1_6 = phi_t1_8;
                phi_t0_6 = phi_t0_8;
            } while ((arg2 + 1) != temp_a2_2);
        }
    }
    sp68.unk_0 = (f32) arg3->x;
    sp68.unk_4 = (f32) arg3->y;
    sp68.unk_8 = (f32) arg3->z;
    sp5C.unk_0 = (f32) arg3->x;
    sp5C.unk_4 = (f32) arg3->y;
    sp5C.unk_8 = (f32) arg3->z;
    sp6C = (f32) (s16) (phi_t1_6 + 0x1E);
    sp60 = (f32) (s16) (phi_t0_6 - 0x1E);
    if (func_800C55C4(&globalCtx->colCtx, (Vec3f *) &sp68, (Vec3f *) &sp5C, (Vec3f *) &sp50, &sp40, 1U, 1U, 1U, 1U, &sp3C) != 0) {
        arg3->y = sp54;
    }
}

Path *func_8013BB34(GlobalContext *globalCtx, u8 arg1, s32 arg2) {
    Path *temp_v1;
    u8 temp_a1;
    s32 phi_v0;
    u8 phi_a1;

    phi_v0 = 0;
    phi_a1 = arg1 & 0xFF;
loop_1:
    temp_v1 = &globalCtx->setupPathList[phi_a1];
    if (phi_v0 < arg2) {
        temp_a1 = temp_v1->unk1;
        phi_v0 += 1;
        phi_a1 = temp_a1;
        if (temp_a1 != 0xFF) {
            goto loop_1;
        }
    }
    return temp_v1;
}

Actor *func_8013BB7C(Actor *actor, GlobalContext *globalCtx, s32 actorCategory, s32 actorId) {
    Actor *temp_s0;
    Actor *temp_v0;
    f32 temp_f0;
    Actor *phi_s0;
    s32 phi_s2;
    f32 phi_f20;
    Actor *phi_s4;
    Actor *phi_s4_2;
    Actor *phi_s4_3;

    phi_s0 = NULL;
    phi_s2 = 0;
    phi_f20 = 99999.0f;
    phi_s4_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(globalCtx, phi_s0, actorCategory & 0xFF & 0xFF, (s32) (s16) actorId);
    phi_s4 = phi_s4_2;
    phi_s4_3 = phi_s4_2;
    if (temp_v0 != 0) {
        if ((temp_v0 != actor) && ((temp_f0 = Actor_DistanceBetweenActors(actor, temp_v0), (phi_s2 == 0)) || (temp_f0 < phi_f20))) {
            phi_s2 = 1;
            phi_f20 = temp_f0;
            phi_s4_3 = temp_v0;
        }
        temp_s0 = temp_v0->next;
        phi_s0 = temp_s0;
        phi_s4 = phi_s4_3;
        phi_s4_2 = phi_s4_3;
        if (temp_s0 != 0) {
            goto loop_1;
        }
    }
    return phi_s4;
}

s32 func_8013BC6C(SkelAnime *skelAnime, ActorAnimationEntryS *arg1, s32 arg2) {
    ActorAnimationEntryS *temp_s0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_v1;
    s16 phi_v0;
    s32 phi_v1_2;

    temp_s0 = &arg1[arg2];
    temp_v1 = temp_s0->frameCount;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v1 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) temp_s0->animationSeg);
    }
    temp_v0 = temp_s0->frame;
    phi_v0 = temp_v0;
    phi_v1_2 = phi_v1;
    if (((s32) temp_v0 >= phi_v1) || ((s32) temp_v0 < 0)) {
        return 0;
    }
    temp_f0 = temp_s0->playbackSpeed;
    if (temp_f0 < 0.0f) {
        phi_v0 = (s16) phi_v1;
        phi_v1_2 = (s32) temp_v0;
    }
    SkelAnime_ChangeAnim(skelAnime, temp_s0->animationSeg, temp_f0, (f32) phi_v0, (f32) phi_v1_2, (u8) (s32) temp_s0->mode, (f32) temp_s0->transitionRate);
    return 1;
}

s32 func_8013BD40(void *arg0, void *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk_4);
    temp_a2 = arg1->unk_0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk_6 - sp5C->unk_0);
        phi_f14 = (f32) (sp5C->unk_A - sp5C->unk_4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk_-6 - temp_v0_3->unk_-C);
            phi_f14 = (f32) (temp_v0_3->unk_-2 - temp_v0_3->unk_-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk_6 - temp_v0_2->unk_-6);
            phi_f14 = (f32) (temp_v0_2->unk_A - temp_v0_2->unk_-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->unk_24 * sp44) + (sp40 * arg0->unk_2C) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

u8 *func_8013BEDC(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    f32 temp_f6;
    s32 temp_a0;
    s32 temp_f18;
    s32 temp_lo;
    s32 temp_v0;
    u16 temp_t6;
    u8 *temp_v1;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 phi_a1;
    s32 phi_v0;
    f32 phi_f6;
    u8 *phi_v1;
    s32 phi_a1_2;

    temp_a1 = arg1 & 0xFF;
    temp_t6 = gSaveContext.time;
    temp_f6 = (f32) temp_t6;
    phi_a1 = temp_a1;
    phi_v0 = 0;
    phi_f6 = temp_f6;
    phi_v1 = NULL;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f18 = (s32) (phi_f6 * 0.021972656f);
    temp_lo = (s32) (((s32) (s16) temp_f18 % 0x3C) + (((s32) (s16) temp_f18 / 0x3C) * 0x3C)) / 0x1E;
    if ((arg2 & 0xFF) == temp_a1) {
        return NULL;
    }
    if (temp_a1 != 0xFF) {
loop_6:
        temp_v1 = arg0->unk_18864 + (phi_a1 * 8);
        phi_v1 = temp_v1;
        if ((*(&D_801C5D10 + (((s32) gSaveContext.day % 5) * 2)) & temp_v1->unk_2) != 0) {
            phi_v0 = 1;
        } else {
            temp_a1_2 = temp_v1[1];
            phi_a1 = temp_a1_2;
            if (temp_a1_2 != 0xFF) {
                goto loop_6;
            }
        }
    }
    if (phi_v0 == 1) {
        *arg3 = temp_lo;
        if (temp_lo < 0) {
            goto block_15;
        }
        temp_a0 = *arg3;
        temp_v0 = *phi_v1 - 1;
        phi_a1_2 = temp_a0;
        if (temp_v0 < temp_a0) {
            phi_a1_2 = temp_v0;
        }
        *arg3 = phi_a1_2;
    } else {
block_15:
        *arg3 = 0;
    }
    return phi_v1;
}

s32 func_8013C068(u8 *arg0, s32 arg1, ? *arg2, f32 arg3, s32 arg4) {
    f32 sp9C;
    f32 sp7C;
    f32 sp6C;
    s32 sp58;
    s32 sp40;
    s32 sp3C;
    f32 *temp_s2;
    f32 *temp_s2_2;
    f32 *temp_s3;
    f32 *temp_s3_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    s16 *temp_v1;
    s16 *temp_v1_2;
    s32 temp_s1;
    s32 temp_t3;
    u8 temp_v0;
    s32 phi_s1;
    s32 phi_s1_2;
    f32 *phi_s3;
    f32 *phi_s2;
    s32 phi_s1_3;
    s32 phi_s1_4;
    f32 *phi_s3_2;
    f32 *phi_s2_2;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_a0;
    s32 phi_a1;
    f32 phi_f14;
    f32 phi_f16;
    f32 phi_f18;

    sp58 = (s32) arg0->unk_0;
    if (arg0 == 0) {
        return 0;
    }
    if (arg4 == 1) {
        phi_s3 = &sp7C;
        if (arg1 < 3) {
            phi_s1 = 2;
        } else {
            phi_s1 = arg1;
            if (arg1 == 3) {
                phi_s1 = 3;
            }
        }
        phi_s2 = &sp6C;
        do {
            phi_s1_2 = phi_s1;
            if (phi_s1 <= 0) {
                phi_s1_2 = 0;
            }
            temp_v1 = (phi_s1_2 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
            temp_s2 = phi_s2 + 4;
            temp_s3 = phi_s3 + 4;
            temp_s3->unk_-4 = (f32) temp_v1->unk_0;
            temp_s2->unk_-4 = (f32) temp_v1[2];
            phi_s1 = phi_s1_2 - 1;
            phi_s3 = temp_s3;
            phi_s2 = temp_s2;
        } while (temp_s2 != &sp7C);
        phi_v0 = sp58 - 1;
        phi_v1 = sp58 - 2;
        phi_a0 = 3;
        phi_a1 = 2;
    } else {
        temp_t3 = sp58 - 3;
        sp40 = temp_t3;
        if (arg1 >= temp_t3) {
            sp3C = sp58 - 4;
            phi_s1_3 = temp_t3;
        } else if (sp58 == (arg1 + 4)) {
            temp_s1 = sp58 - 4;
            sp3C = temp_s1;
            phi_s1_3 = temp_s1;
        } else {
            sp3C = sp58 - 4;
            phi_s1_3 = arg1;
        }
        phi_s3_2 = &sp7C;
        phi_s2_2 = &sp6C;
        do {
            temp_v0 = arg0->unk_0;
            phi_s1_4 = phi_s1_3;
            if (phi_s1_3 >= (s32) temp_v0) {
                phi_s1_4 = temp_v0 - 1;
            }
            temp_v1_2 = (phi_s1_4 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
            temp_s2_2 = phi_s2_2 + 4;
            temp_s3_2 = phi_s3_2 + 4;
            temp_s3_2->unk_-4 = (f32) temp_v1_2->unk_0;
            temp_s2_2->unk_-4 = (f32) temp_v1_2[2];
            phi_s1_3 = phi_s1_4 + 1;
            phi_s3_2 = temp_s3_2;
            phi_s2_2 = temp_s2_2;
        } while (temp_s2_2 != &sp7C);
        phi_v0 = 0;
        phi_v1 = 1;
        phi_a0 = sp3C;
        phi_a1 = sp40;
    }
    if (arg1 == phi_v0) {
        temp_f0 = 1.0f - arg3;
        temp_f2 = arg3 * arg3;
        temp_f12 = arg3 * temp_f2;
        sp9C = 0.16666667f * temp_f12;
        phi_f14 = temp_f0 * temp_f0 * temp_f0;
        phi_f16 = ((1.75f * temp_f12) - (4.5f * temp_f2)) + (3.0f * arg3);
        phi_f18 = (-0.9166667f * temp_f12) + (1.5f * temp_f2);
    } else if (arg1 == phi_v1) {
        temp_f0_2 = 1.0f - arg3;
        temp_f2_2 = arg3 * arg3;
        temp_f12_2 = arg3 * temp_f2_2;
        sp9C = temp_f12_2 * 0.16666667f;
        phi_f14 = 0.25f * (temp_f0_2 * temp_f0_2 * temp_f0_2);
        phi_f16 = ((0.5833333f * temp_f12_2) - (1.25f * temp_f2_2)) + (0.25f * arg3) + 0.5833333f;
        phi_f18 = (-0.5f * temp_f12_2) + (0.5f * temp_f2_2) + (arg3 * 0.5f) + 0.16666667f;
    } else if (arg1 == phi_a0) {
        temp_f0_3 = 1.0f - arg3;
        temp_f2_3 = temp_f0_3 * temp_f0_3;
        temp_f12_3 = temp_f0_3 * temp_f2_3;
        sp9C = arg3 * arg3 * arg3 * 0.25f;
        phi_f14 = 0.16666667f * temp_f12_3;
        phi_f16 = (-0.5f * temp_f12_3) + (0.5f * temp_f2_3) + (0.5f * temp_f0_3) + 0.16666667f;
        phi_f18 = ((0.5833333f * temp_f12_3) - (1.25f * temp_f2_3)) + (0.25f * temp_f0_3) + 0.5833333f;
    } else if (((arg4 == 1) && (phi_a1 >= arg1)) || ((arg4 != 1) && (arg1 >= phi_a1))) {
        temp_f0_5 = 1.0f - arg3;
        temp_f2_5 = temp_f0_5 * temp_f0_5;
        temp_f12_5 = temp_f0_5 * temp_f2_5;
        sp9C = arg3 * arg3 * arg3;
        phi_f14 = 0.16666667f * temp_f12_5;
        phi_f16 = (-0.9166667f * temp_f12_5) + (1.5f * temp_f2_5);
        phi_f18 = ((1.75f * temp_f12_5) - (4.5f * temp_f2_5)) + (3.0f * temp_f0_5);
    } else {
        temp_f0_4 = 1.0f - arg3;
        temp_f2_4 = arg3 * arg3;
        temp_f12_4 = temp_f2_4 * arg3;
        sp9C = temp_f12_4 / 6.0f;
        phi_f14 = (temp_f0_4 * (temp_f0_4 * temp_f0_4)) / 6.0f;
        phi_f16 = ((temp_f12_4 * 0.5f) - temp_f2_4) + 0.6666667f;
        phi_f18 = (temp_f12_4 / -2.0f) + (temp_f2_4 * 0.5f) + (arg3 * 0.5f) + 0.16666667f;
    }
    arg2->unk_0 = (f32) ((sp88 * sp9C) + ((phi_f14 * sp7C) + (phi_f16 * sp80) + (phi_f18 * sp84)));
    arg2->unk_8 = (f32) ((sp78 * sp9C) + ((phi_f14 * sp6C) + (phi_f16 * sp70) + (phi_f18 * sp74)));
    return 1;
}

? func_8013C624(Actor *arg0, u8 *arg1, s32 *arg2, f32 *arg3, s32 arg4, s32 arg5) {
    ? sp9C;
    ? sp90;
    ? sp84;
    Vec3f *temp_s3;
    f32 temp_f20;
    s32 temp_t2;
    s32 temp_t8;
    void *temp_fp;

    temp_s3 = arg0 + 0x24;
    temp_fp = arg0 + 0x64;
    sp9C.unk_0 = (f32) temp_s3->x;
    sp9C.unk_4 = (f32) temp_s3->y;
    sp9C.unk_8 = (f32) temp_s3->z;
    sp90.unk_0 = (s32) temp_fp->unk_0;
    sp90.unk_4 = (s32) temp_fp->unk_4;
    sp90.unk_8 = (s32) temp_fp->unk_8;
    if (((arg4 != 1) && (*arg2 >= (*arg1 - 2))) || ((arg4 == 1) && (*arg2 < 2))) {
        goto block_22;
    }
loop_6:
    if ((func_8013C068(arg1, *arg2, &sp84, *arg3, arg4) == 0) || ((s32) (arg0->speedXZ * 10000.0f) == 0)) {
        goto block_22;
    }
    temp_f20 = Math_Vec3f_DistXZ(temp_s3, (Vec3f *) &sp84);
    arg0->world.rot.y = Math_Vec3f_Yaw(temp_s3, (Vec3f *) &sp84);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    if (!(Math_Vec3f_DistXZ(temp_s3, (Vec3f *) &sp84) < temp_f20)) {
        *arg3 += 0.1f;
        if (*arg3 >= 1.1f) {
            if (arg4 != 1) {
                temp_t8 = *arg2 + 1;
                *arg2 = temp_t8;
                if (temp_t8 >= (*arg1 - 2)) {
                    if (arg5 != 0) {
                        *arg2 = 0;
                        goto block_20;
                    }
                    return 1;
                }
                goto block_20;
            }
            temp_t2 = *arg2 - 1;
            *arg2 = temp_t2;
            if (temp_t2 < 2) {
                if (arg5 != 0) {
                    *arg2 = *arg1 - 2;
                    goto block_20;
                }
                return 1;
            }
block_20:
            *arg3 = 0.0f;
            goto block_21;
        }
block_21:
        temp_s3->x = sp9C.unk_0;
        temp_s3->y = sp9C.unk_4;
        temp_s3->z = sp9C.unk_8;
        temp_fp->unk_0 = (s32) sp90.unk_0;
        temp_fp->unk_4 = (s32) sp90.unk_4;
        temp_fp->unk_8 = (s32) sp90.unk_8;
        goto loop_6;
    }
block_22:
    return 0;
}

? func_8013C8B8(void *arg0, s32 arg1, void *arg2) {
    s16 *temp_v1;

    if ((arg0 == 0) || (arg1 >= (s32) arg0->unk_0) || (arg1 < 0)) {
        return 0;
    }
    temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
    arg2->unk_0 = (f32) temp_v1->unk_0;
    arg2->unk_4 = (f32) temp_v1[1];
    arg2->unk_8 = (f32) temp_v1[2];
    return 1;
}

void func_8013C964(Actor *actor, GlobalContext *globalCtx, f32 param_3, f32 param_4, s32 param_5, s16 param_6) {
    s32 sp34;
    s16 sp32;
    s16 sp30;
    f32 sp2C;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;

    sp34 = 0;
    param_3 = param_3;
    param_4 = param_4;
    func_800B8898(globalCtx, actor, &sp32, &sp30);
    switch ((s32) param_6) {
    case 1:
        func_800B8A1C(actor, globalCtx, param_5, actor->xzDistToPlayer + 1.0f, fabsf(actor->yDistToPlayer) + 1.0f);
block_27:
        break;
    case 2:
        if ((fabsf(actor->yDistToPlayer) <= param_4) && (actor->xzDistToPlayer <= param_3)) {
            func_800B8500(actor, globalCtx, param_3, param_4, param_5);
            goto block_27;
        }
        break;
    case 3:
        if ((((s32) sp32 >= 0) || ((s32) sp32 < 0x140)) && (((s32) sp30 >= 0) || ((s32) sp30 < 0xF0))) {
            func_800B8500(actor, globalCtx, param_3, param_4, param_5);
            goto block_27;
        }
        break;
    case 4:
        temp_f2 = actor->xzDistToPlayer;
        sp2C = temp_f2;
        temp_f12 = temp_f2 + 1.0f;
        temp_f16 = fabsf(actor->yDistToPlayer) + 1.0f;
        actor->flags |= 0x10000;
        actor->xzDistToPlayer = 0.0f;
        func_800B8500(actor, globalCtx, temp_f12, temp_f16, param_5);
        actor->xzDistToPlayer = sp2C;
        break;
    case 5:
        if ((((s32) sp32 >= 0) || ((s32) sp32 < 0x140)) && (((s32) sp30 >= 0) || ((s32) sp30 < 0xF0)) && (fabsf(actor->yDistToPlayer) <= param_4) && (actor->xzDistToPlayer <= param_3) && (actor->isTargeted != 0)) {
            actor->flags |= 0x10000;
            func_800B8500(actor, globalCtx, param_3, param_4, param_5);
            goto block_27;
        }
        break;
    case 6:
        if ((((s32) sp32 >= 0) || ((s32) sp32 < 0x140)) && (((s32) sp30 >= 0) || ((s32) sp30 < 0xF0)) && (fabsf(actor->yDistToPlayer) <= param_4) && (actor->xzDistToPlayer <= param_3)) {
            actor->flags |= 0x10000;
            func_800B8500(actor, globalCtx, param_3, param_4, param_5);
            goto block_27;
        }
        break;
    }
}

void func_8013CC2C(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    void *phi_a3;
    s32 phi_v0;
    s32 phi_a2;
    void *phi_t0;

    phi_v0 = 0;
    phi_t0 = (arg3 * 0x90) + &D_801DE5E0;
    do {
        phi_a3 = phi_t0;
        phi_a2 = 0;
loop_2:
        if (phi_a3->unk_0 != 0) {
            temp_v1 = (((arg1 + phi_v0) << 6) + arg0) - 0x186;
            temp_t1 = temp_v1 + phi_a2;
            if ((temp_t1 >= 0) && (temp_t1 < 0x1000)) {
                *(arg2 + temp_v1 + phi_a2) = 0xFF;
            }
        }
        if (phi_a3->unk_1 != 0) {
            temp_v1_2 = (((arg1 + phi_v0) << 6) + arg0) - 0x186;
            temp_t1_2 = temp_v1_2 + phi_a2;
            if ((temp_t1_2 >= -1) && (temp_t1_2 < 0xFFF)) {
                (arg2 + temp_v1_2 + phi_a2)->unk_1 = 0xFF;
            }
        }
        if (phi_a3->unk_2 != 0) {
            temp_v1_3 = (((arg1 + phi_v0) << 6) + arg0) - 0x186;
            temp_t1_3 = temp_v1_3 + phi_a2;
            if ((temp_t1_3 >= -2) && (temp_t1_3 < 0xFFE)) {
                (arg2 + temp_v1_3 + phi_a2)->unk_2 = 0xFF;
            }
        }
        if (phi_a3->unk_3 != 0) {
            temp_v1_4 = (((arg1 + phi_v0) << 6) + arg0) - 0x186;
            temp_t1_4 = temp_v1_4 + phi_a2;
            if ((temp_t1_4 >= -3) && (temp_t1_4 < 0xFFD)) {
                (arg2 + temp_v1_4 + phi_a2)->unk_3 = 0xFF;
            }
        }
        temp_a2 = phi_a2 + 4;
        phi_a3 += 4;
        phi_a2 = temp_a2;
        if (temp_a2 != 0xC) {
            goto loop_2;
        }
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        phi_t0 += 0xC;
    } while (temp_v0 != 0xC);
}

void func_8013CD64(void *arg0, void *arg1, s32 arg2, f32 arg3, u8 arg4, u8 *arg5, s8 *arg6) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp80;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_s2;
    s8 temp_a0;
    void *temp_v0;
    s8 *phi_s3;
    void *phi_s0;
    u8 *phi_s4;
    s32 phi_s2;

    phi_s3 = arg6;
    phi_s0 = arg0;
    phi_s2 = 0;
    if ((s32) arg4 > 0) {
        phi_s4 = arg5;
        do {
            temp_a0 = *phi_s3;
            if ((s32) temp_a0 >= 0) {
                temp_f0 = phi_s0->unk_0;
                temp_v0 = arg0 + (temp_a0 * 0xC);
                sp8C = ((temp_v0->unk_0 - temp_f0) * arg3) + (temp_f0 - arg1->unk_0);
                temp_f2 = phi_s0->unk_4;
                sp90 = ((temp_v0->unk_4 - temp_f2) * arg3) + (temp_f2 - arg1->unk_4);
                temp_f12 = phi_s0->unk_8;
                sp94 = ((temp_v0->unk_8 - temp_f12) * arg3) + (temp_f12 - arg1->unk_8);
            } else {
                sp8C = phi_s0->unk_0 - arg1->unk_0;
                sp90 = phi_s0->unk_4 - arg1->unk_4;
                sp94 = phi_s0->unk_8 - arg1->unk_8;
            }
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp8C, (Vec3f *) &sp80);
            func_8013CC2C((s32) (64.0f + sp80) >> 1, (s32) (64.0f - sp88) >> 1, arg2, *phi_s4);
            temp_s2 = phi_s2 + 1;
            phi_s3 += 1;
            phi_s0 += 0xC;
            phi_s4 += 1;
            phi_s2 = temp_s2;
        } while (temp_s2 != arg4);
    }
}

void func_8013CF04(void *arg0, GraphicsContext **arg1, u32 arg2) {
    GraphicsContext *sp30;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;

    temp_a0 = *arg1;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w1 = 0x64;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0_2 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xFB000000;
    sp30 = temp_a0;
    SysMatrix_InsertTranslation(arg0->unk_24, 0.0f, arg0->unk_2C, 0);
    Matrix_Scale(0.6f, 1.0f, 0.6f, 1);
    temp_v0_3 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp30 = temp_a0;
    sp1C = temp_v0_3;
    sp1C->words.w1 = Matrix_NewMtx(temp_a0);
    temp_v0_4 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_801C5D60;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xFD900000;
    temp_v0_5->words.w1 = arg2;
    temp_v0_6 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = 0x7098260;
    temp_v0_6->words.w0 = 0xF5900000;
    temp_v0_7 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE6000000;
    temp_v0_8 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_8[1];
    temp_v0_8->words.w1 = 0x77FF100;
    temp_v0_8->words.w0 = 0xF3000000;
    temp_v0_9 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_9[1];
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE7000000;
    temp_v0_10 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_10[1];
    temp_v0_10->words.w1 = 0x98260;
    temp_v0_10->words.w0 = 0xF5881000;
    temp_v0_11 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_11[1];
    temp_v0_11->words.w0 = 0xF2000000;
    temp_v0_11->words.w1 = 0xFC0FC;
    temp_v0_12 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_12[1];
    temp_v0_12->words.w1 = (u32) &D_801C5D80;
    temp_v0_12->words.w0 = 0xDE000000;
}

s16 func_8013D0E0(s16 *arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a2;
    s32 temp_a2_2;
    f32 phi_f0;
    f32 phi_f0_2;
    s16 phi_a2;
    f32 phi_f16;
    f32 phi_f16_2;

    temp_v0 = *arg0;
    temp_f0 = (f32) (arg2 - temp_v0) * 0.005493164f * gFramerateDivisorHalf;
    if (temp_f0 >= 0.0f) {
        temp_f0_2 = temp_f0 / arg3;
        if (temp_f0_2 < arg4) {
            phi_f0 = arg4;
        } else {
            if (arg5 < temp_f0_2) {
                phi_f16 = arg5;
            } else {
                phi_f16 = temp_f0_2;
            }
            phi_f0 = phi_f16;
        }
        *arg0 = temp_v0 + (s32) ((phi_f0 * 65536.0f) / 360.0f);
        if (temp_f0 < arg4) {
            *arg0 = arg2;
        }
        if (arg1 != 0) {
            temp_v0_2 = *arg0;
            temp_a2 = -(s32) arg1;
            phi_a2 = (s16) temp_a2;
            if ((s32) temp_v0_2 < temp_a2) {

            } else {
                phi_a2 = temp_v0_2;
                if ((s32) arg1 < (s32) temp_v0_2) {
                    phi_a2 = arg1;
                }
            }
            goto block_28;
        }
    } else {
        temp_f0_3 = (temp_f0 / arg3) * -1.0f;
        if (temp_f0_3 < arg4) {
            phi_f0_2 = arg4;
        } else {
            if (arg5 < temp_f0_3) {
                phi_f16_2 = arg5;
            } else {
                phi_f16_2 = temp_f0_3;
            }
            phi_f0_2 = phi_f16_2;
        }
        *arg0 = temp_v0 - (s32) ((phi_f0_2 * 65536.0f) / 360.0f);
        if (-arg4 < temp_f0) {
            *arg0 = arg2;
        }
        if (arg1 != 0) {
            temp_v0_3 = *arg0;
            temp_a2_2 = -(s32) arg1;
            phi_a2 = (s16) temp_a2_2;
            if ((s32) temp_v0_3 < temp_a2_2) {

            } else {
                phi_a2 = temp_v0_3;
                if ((s32) arg1 < (s32) temp_v0_3) {
                    phi_a2 = arg1;
                }
            }
block_28:
            *arg0 = phi_a2;
        }
    }
    return (s16) (temp_v0 - *arg0);
}

void func_8013D2E0(Vec3f *arg0, PosRot *arg1, ActorShape *arg2, s16 *arg3, s16 *arg4, s16 *arg5, s16 *arg6) {
    s16 sp3C;
    s16 sp38;
    f32 sp34;
    f32 sp2C;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f4;
    s16 temp_v1;
    u16 temp_t1;
    u16 temp_t6;
    f32 phi_f4;
    f32 phi_f10;

    temp_f14 = arg0->x - arg1->pos.x;
    temp_f12 = arg0->z - arg1->pos.z;
    sp34 = temp_f14;
    sp2C = temp_f12;
    sp3C = Math_FAtan2F(temp_f12, temp_f14);
    Math_SmoothStepToS(arg3, Math_FAtan2F(sqrtf((sp34 * sp34) + (sp2C * sp2C)), arg0->y - arg1->pos.y), 4, 0x2710, (s16) 0);
    Math_SmoothStepToS(&arg3[1], sp3C, 4, 0x2710, (s16) 0);
    func_8013D0E0(arg5, arg6[8], func_8013D0E0(arg4, arg6->unk_0, arg3->unk_0, (f32) (u16) arg6[1], (f32) (u16) arg6[2], (f32) (u16) arg6[3]), (f32) (u16) arg6[1], (f32) (u16) arg6[10], (f32) (u16) arg6[11]);
    temp_v1 = arg3[1] - arg2->rot.y;
    if ((s32) (u16) arg6[6] < 0) {

    }
    temp_t1 = (u16) arg6[7];
    temp_f4 = (f32) temp_t1;
    phi_f4 = temp_f4;
    if ((s32) temp_t1 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    sp38 = temp_v1;
    func_8013D0E0(&arg4[1], arg6[4], (s16) (temp_v1 - arg5[1]), (f32) (u16) arg6[5], phi_f4);
    if ((s32) (u16) arg6[14] < 0) {

    }
    temp_t6 = (u16) arg6[15];
    temp_f10 = (f32) temp_t6;
    phi_f10 = temp_f10;
    if ((s32) temp_t6 < 0) {
        phi_f10 = temp_f10 + 4294967296.0f;
    }
    func_8013D0E0(&arg5[1], arg6[12], (s16) (temp_v1 - arg4[1]), (f32) (u16) arg6[13], phi_f10);
}

s32 func_8013D5E8(s16 arg0, s32 arg1, s16 arg2) {
    s16 temp_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_v0 = arg2 - arg0;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    phi_v1_2 = 0;
    if ((s32) (s16) arg1 >= phi_v1) {
        phi_v1_2 = 1;
    }
    return phi_v1_2;
}

Path *func_8013D648(GlobalContext *globalCtx, s16 arg1, s32 arg2) {
    Path *phi_v1;

    phi_v1 = NULL;
    if (arg1 != (s16) arg2) {
        phi_v1 = &globalCtx->setupPathList[arg1];
    }
    return phi_v1;
}

s32 func_8013D68C(Path *path, s16 arg1, void *arg2) {
    s16 *temp_v1;

    if (path == 0) {
        return 0;
    }
    temp_v1 = ((s32) arg1 * 6) + Lib_SegmentedToVirtual((void *) path->points);
    arg2->unk_0 = (f32) temp_v1->unk_0;
    arg2->unk_4 = (f32) temp_v1[1];
    arg2->unk_8 = (f32) temp_v1[2];
    return 1;
}

void func_8013D720(void *arg0, PosRot *arg1, f32 *arg2) {
    f32 temp_f12;
    f32 temp_f14;

    temp_f12 = arg0->unk_0 - arg1->pos.x;
    temp_f14 = arg0->unk_8 - arg1->pos.z;
    *arg2 = (temp_f12 * temp_f12) + (temp_f14 * temp_f14);
    Math_Atan2S(temp_f12, temp_f14);
}

s32 func_8013D768(Actor *actor, void *arg1, s16 arg2) {
    ? sp4C;
    ? sp40;
    f32 sp3C;
    f32 sp38;
    PosRot *sp2C;
    PosRot *temp_a1;
    s32 phi_v1;

    Actor_CalcOffsetOrientedToDrawRotation(actor, (Vec3f *) &sp4C, (Vec3f *) arg1);
    temp_a1 = &actor->world;
    sp2C = temp_a1;
    Math_SmoothStepToS(&actor->world.rot.y, func_8013D720(arg1, temp_a1, &sp3C), 4, arg2, (s16) 1);
    actor->shape.rot.y = actor->world.rot.y;
    Actor_SetVelocityAndMoveYRotationAndGravity(actor);
    Actor_CalcOffsetOrientedToDrawRotation(actor, (Vec3f *) &sp40, (Vec3f *) arg1);
    func_8013D720(arg1, temp_a1, &sp38);
    phi_v1 = 0;
    if ((sp54 > 0.0f) && (sp48 <= 0.0f)) {
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_8013D83C(void *arg0, s32 arg1, void *arg2, f32 *arg3) {
    void *temp_v1;
    f32 phi_f12;
    f32 phi_f14;

    phi_f12 = 0.0f;
    phi_f14 = 0.0f;
    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
        phi_f12 = (f32) temp_v1->unk_0 - arg2->unk_0;
        phi_f14 = (f32) temp_v1->unk_4 - arg2->unk_8;
    }
    *arg3 = (phi_f12 * phi_f12) + (phi_f14 * phi_f14);
    Math_Atan2S(phi_f12, phi_f14);
}

s32 func_8013D8DC(s8 arg0, GlobalContext *globalCtx) {
    s8 phi_v1;

    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) arg0) == 0) {
        phi_v1 = 0;
    } else {
        phi_v1 = 1;
    }
    return (s32) phi_v1;
}

s8 func_8013D924(s32 arg0, GlobalContext *globalCtx) {
    return Object_GetIndex(&globalCtx->objectCtx, (s16) arg0);
}

Actor *func_ActorCategoryIterateById(GlobalContext *globalCtx, Actor *actorListStart, s32 actorCategory, s32 actorId) {
    Actor *temp_v1;
    Actor *phi_v1;
    Actor *phi_v1_2;
    Actor *phi_v1_3;

    phi_v1 = actorListStart;
    if (actorListStart == 0) {
        phi_v1 = globalCtx->actorCtx.actorList[actorCategory & 0xFF].first;
    }
    phi_v1_2 = phi_v1;
    phi_v1_3 = phi_v1;
    if ((phi_v1 != 0) && ((s16) actorId != phi_v1->id)) {
loop_4:
        temp_v1 = phi_v1_2->next;
        phi_v1_2 = temp_v1;
        phi_v1_3 = temp_v1;
        if (temp_v1 != 0) {
            if ((s16) actorId != temp_v1->id) {
                goto loop_4;
            }
        }
    }
    return phi_v1_3;
}

void func_8013D9C8(GlobalContext *globalCtx, s16 *arg1, s16 *arg2, s32 arg3) {
    s16 *temp_a2;
    s16 *temp_a2_2;
    s16 *temp_t2;
    s16 *temp_t2_2;
    s32 temp_s3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t5;
    s32 temp_v1;
    u32 temp_v0;
    s32 phi_t1;
    s16 *phi_a2;
    s32 phi_t3;
    s16 *phi_t2;
    s32 phi_v1;
    s32 phi_t1_2;
    s16 *phi_a2_2;
    s32 phi_t3_2;
    s16 *phi_t2_2;
    s32 phi_t4;
    s32 phi_t5;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s2;
    s32 phi_s3;
    s32 phi_v1_2;

    temp_v0 = globalCtx->gameplayFrames;
    phi_v1 = 0;
    phi_v1_2 = 0;
    if (arg3 > 0) {
        temp_t5 = arg3 & 3;
        if (temp_t5 != 0) {
            temp_t0 = 0 * 0x18 * 2;
            phi_t1 = temp_t0 + 0x814;
            phi_a2 = &arg1[0];
            phi_t3 = temp_t0 + 0x940;
            phi_t2 = &arg2[0];
            do {
                temp_v1 = phi_v1 + 1;
                temp_a2 = phi_a2 + 2;
                temp_t2 = phi_t2 + 2;
                temp_a2->unk_-2 = (s16) (phi_t1 * temp_v0);
                temp_t2->unk_-2 = (s16) (phi_t3 * temp_v0);
                phi_t1 += 0x32;
                phi_a2 = temp_a2;
                phi_t3 += 0x32;
                phi_t2 = temp_t2;
                phi_v1 = temp_v1;
                phi_v1_2 = temp_v1;
            } while (temp_t5 != temp_v1);
            if (temp_v1 != arg3) {
                goto block_5;
            }
        } else {
block_5:
            temp_t0_2 = phi_v1_2 * 0x32;
            phi_t1_2 = temp_t0_2 + 0x814;
            phi_a2_2 = &arg1[phi_v1_2];
            phi_t3_2 = temp_t0_2 + 0x940;
            phi_t2_2 = &arg2[phi_v1_2];
            phi_t4 = temp_t0_2 + 0x846;
            phi_t5 = temp_t0_2 + 0x972;
            phi_s0 = temp_t0_2 + 0x878;
            phi_s1 = temp_t0_2 + 0x9A4;
            phi_s2 = temp_t0_2 + 0x8AA;
            phi_s3 = temp_t0_2 + 0x9D6;
            do {
                temp_a2_2 = phi_a2_2 + 8;
                temp_t2_2 = phi_t2_2 + 8;
                temp_a2_2->unk_-8 = (s16) (phi_t1_2 * temp_v0);
                temp_t2_2->unk_-8 = (s16) (phi_t3_2 * temp_v0);
                temp_a2_2->unk_-6 = (s16) (phi_t4 * temp_v0);
                temp_t2_2->unk_-6 = (s16) (phi_t5 * temp_v0);
                temp_a2_2->unk_-4 = (s16) (phi_s0 * temp_v0);
                temp_t2_2->unk_-4 = (s16) (phi_s1 * temp_v0);
                temp_a2_2->unk_-2 = (s16) (phi_s2 * temp_v0);
                temp_s3 = phi_s3 + 0xC8;
                temp_t2_2->unk_-2 = (s16) (phi_s3 * temp_v0);
                phi_t1_2 += 0xC8;
                phi_a2_2 = temp_a2_2;
                phi_t3_2 += 0xC8;
                phi_t2_2 = temp_t2_2;
                phi_t4 += 0xC8;
                phi_t5 += 0xC8;
                phi_s0 += 0xC8;
                phi_s1 += 0xC8;
                phi_s2 += 0xC8;
                phi_s3 = temp_s3;
            } while (temp_s3 != ((arg3 * 0x32) + 0x9D6));
        }
    }
}

u8 func_8013DB90(GlobalContext *globalCtx, void *arg1, f32 arg2) {
    CollisionPoly *sp64;
    ? sp58;
    f32 sp50;
    ? sp4C;
    ? sp40;
    u32 sp3C;
    ? sp30;
    s32 temp_t7;
    s32 temp_t8;

    sp30.unk_0 = (s32) arg1->unk_0;
    temp_t7 = arg1->unk_4;
    sp30.unk_4 = temp_t7;
    temp_t8 = arg1->unk_8;
    sp58.unk_4 = temp_t7;
    sp4C.unk_4 = temp_t7;
    sp4C.unk_0 = (s32) sp30.unk_0;
    sp58.unk_0 = (s32) sp30.unk_0;
    sp30.unk_8 = temp_t8;
    sp4C.unk_8 = temp_t8;
    sp58.unk_8 = temp_t8;
    sp50 += arg2;
    return func_800C55C4(&globalCtx->colCtx, (Vec3f *) &sp58, (Vec3f *) &sp4C, (Vec3f *) &sp40, &sp64, 0U, 1U, 0U, 1U, &sp3C);
}

? func_8013DC40(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 *temp_v1;

    temp_v1 = Lib_SegmentedToVirtual(((arg1 * 8) + arg0)->unk_4) + (arg2 * 6);
    arg3->unk_0 = (f32) temp_v1->unk_0;
    arg3->unk_4 = (f32) temp_v1[1];
    arg3->unk_8 = (f32) temp_v1[2];
    return 0;
}

u8 func_8013DCCC(s32 arg0, s32 arg1) {
    return *((arg1 * 8) + arg0);
}

void func_8013DCE0(GlobalContext *globalCtx, Vec3f *param_2, Actor *actor, EnDno_ActorUnkStruct *param_4, Path *param_5, s32 param_6, s32 param_7, s32 param_8, s32 param_9, s32 param_10) {
    Path *sp18;
    Path *temp_v1;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_v0;
    u8 temp_t2;

    param_4->unk_00.x = (bitwise f32) globalCtx->setupPathList;
    param_4->unk_00.y = (bitwise f32) param_6;
    temp_v1 = &param_5[param_6];
    sp18 = temp_v1;
    param_4->unk_00.z = (bitwise f32) Lib_SegmentedToVirtual((void *) temp_v1->points);
    temp_t2 = temp_v1->count;
    param_4->unk_C = (s32) temp_t2;
    param_4->unk_14 = param_7;
    if (param_8 == 0) {
        param_4->unk_18 = temp_t2 - 1;
    } else if (param_8 > 0) {
        param_4->unk_18 = param_8;
    } else {
        param_4->unk_18 = (param_4->unk_C - param_8) - 1;
    }
    temp_v0 = param_4->unk_00.z;
    temp_a0 = &param_4->unk_38;
    param_4->unk_10 = param_9;
    temp_a1 = &param_4->unk_20;
    param_4->unk_20.x = (f32) temp_v0->unk_0;
    param_4->unk_20.y = (f32) temp_v0->unk_2;
    param_4->unk_20.z = (f32) temp_v0->unk_4;
    param_4 = param_4;
    Math_Vec3f_Copy(temp_a0, temp_a1);
    param_4->unk_44 = param_2;
    param_4->unk_1C = (u8) param_10;
    param_4->unk_1D = (u8) param_10;
    param_4->unk_48 = actor;
}

void func_8013DE04(GlobalContext *globalCtx, EnDno_ActorUnkStruct *arg1, s32 (*arg2)(GlobalContext *, EnDno_ActorUnkStruct *), s32 (*arg3)(GlobalContext *, EnDno_ActorUnkStruct *), s32 (*arg4)(GlobalContext *, EnDno_ActorUnkStruct *), s32 (*arg5)(GlobalContext *, EnDno_ActorUnkStruct *)) {
    s32 (*temp_v0)(GlobalContext *, EnDno_ActorUnkStruct *);
    s32 (*temp_v0_2)(GlobalContext *, EnDno_ActorUnkStruct *);
    s32 (*temp_v0_3)(GlobalContext *, EnDno_ActorUnkStruct *);
    s32 (*temp_v0_4)(GlobalContext *, EnDno_ActorUnkStruct *);
    s32 temp_t1;
    u8 temp_t0;
    s32 phi_s1;
    s32 phi_s3;
    s32 phi_v0;

    arg1->unk_5C = arg2;
    arg1->unk_60 = arg3;
    arg1->unk_64 = arg4;
    temp_t0 = arg1->unk_1C & 0xFF3F;
    temp_t1 = temp_t0 & 8;
    arg1->unk_1C = temp_t0;
    arg1->unk_68 = arg5;
    phi_s3 = 0;
    if (temp_t1 != 0) {
        if ((arg1->unk_1D & 8) == 0) {
            arg1->unk_10 = (s32) (arg1->unk_10 - 1);
        }
    } else if ((arg1->unk_1D & 8) != 0) {
        arg1->unk_10 = (s32) (arg1->unk_10 + 1);
    }
    do {
        temp_v0 = arg1->unk_5C;
        phi_s1 = 0;
        if (temp_v0 != 0) {
            temp_v0(globalCtx, arg1);
        }
        temp_v0_2 = arg1->unk_60;
        if (temp_v0_2 != 0) {
            phi_s1 = temp_v0_2(globalCtx, arg1);
        }
        if (phi_s1 != 0) {
            temp_v0_3 = arg1->unk_68;
            if (temp_v0_3 != 0) {
                phi_v0 = temp_v0_3(globalCtx, arg1);
                goto block_14;
            }
        } else {
            temp_v0_4 = arg1->unk_64;
            if (temp_v0_4 != 0) {
                phi_v0 = temp_v0_4(globalCtx, arg1);
block_14:
                phi_s3 = phi_v0;
            }
        }
    } while (phi_s3 != 0);
    arg1->unk_1D = arg1->unk_1C;
}

s32 func_8013DF3C(GlobalContext *globalCtx, EnDno_ActorUnkStruct *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s16 temp_v0;
    void *temp_v0_2;

    temp_v0_2 = (bitwise s32) arg1->unk_00.z + (arg1->unk_10 * 6);
    arg1->unk_20.x = (f32) temp_v0_2->unk_0 + arg1->unk_2C.x;
    arg1->unk_20.y = (f32) temp_v0_2->unk_2 + arg1->unk_2C.y;
    arg1->unk_20.z = (f32) temp_v0_2->unk_4 + arg1->unk_2C.z;
    sp2C = arg1->unk_20.x - arg1->unk_44->x;
    sp30 = arg1->unk_20.y - arg1->unk_44->y;
    sp34 = arg1->unk_20.z - arg1->unk_44->z;
    arg1->unk_4C = Math3D_XZLengthSquared(sp2C, sp34);
    arg1->unk_50 = Math3D_LengthSquared((Vec3f *) &sp2C);
    arg1->unk_56 = Math_FAtan2F(sp34, sp2C);
    temp_v0 = Math_FAtan2F(sqrtf(arg1->unk_4C), -sp30);
    arg1->unk_54 = temp_v0;
    arg1->unk_58 = 0;
    return (s32) temp_v0;
}

? func_8013E054(s32 arg0, void *arg1) {
    Actor_SetVelocityAndMoveYRotationAndGravity(arg1->unk_48);
    return 0;
}

? func_8013E07C(s32 arg0, void *arg1) {
    Actor_SetVelocityAndMoveXYRotationReverse(arg1->unk_48);
    return 0;
}

s32 func_8013E0A4(GlobalContext *globalCtx, EnDno_ActorUnkStruct *arg1) {
    s32 sp1C;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_v1;
    u8 phi_v1;
    u8 phi_v1_2;
    s32 phi_a3;

    sp1C = 1;
    temp_a0 = &arg1->unk_38;
    temp_a1 = &arg1->unk_20;
    arg1 = arg1;
    Math_Vec3f_Copy(temp_a0, temp_a1);
    temp_v1 = arg1->unk_1C;
    phi_v1 = temp_v1;
    phi_v1_2 = temp_v1;
    phi_a3 = 1;
    phi_a3 = 1;
    phi_a3 = 1;
    phi_a3 = 1;
    if ((temp_v1 & 8) == 0) {
        temp_v0 = arg1->unk_10;
        if (temp_v0 >= arg1->unk_18) {
            if ((temp_v1 & 1) != 0) {
                arg1->unk_10 = (s32) arg1->unk_14;
                phi_v1 = arg1->unk_1C;
            } else {
                temp_t1 = temp_v1 | 8;
                if ((temp_v1 & 2) != 0) {
                    arg1->unk_1C = temp_t1;
                    phi_v1 = temp_t1 & 0xFF;
                } else {
                    phi_a3 = 0;
                }
            }
            arg1->unk_1C = phi_v1 | 0xA0;
        } else {
            arg1->unk_10 = (s32) (temp_v0 + 1);
        }
        arg1->unk_1C |= 0x50;
    } else {
        temp_v0_2 = arg1->unk_10;
        if (arg1->unk_14 >= temp_v0_2) {
            if ((temp_v1 & 1) != 0) {
                arg1->unk_10 = (s32) arg1->unk_18;
                phi_v1_2 = arg1->unk_1C;
            } else {
                temp_t0 = temp_v1 & 0xFFF7;
                if ((temp_v1 & 2) != 0) {
                    arg1->unk_1C = temp_t0;
                    phi_v1_2 = temp_t0 & 0xFF;
                } else {
                    phi_a3 = 0;
                }
            }
            arg1->unk_1C = phi_v1_2 | 0xA0;
        } else {
            arg1->unk_10 = (s32) (temp_v0_2 - 1);
        }
    }
    arg1->unk_1C |= 0x50;
    return phi_a3;
}

void func_8013E1C8(SkelAnime *skelAnime, struct_80B8E1A8 *animations, s32 animationIndex, s32 *actorAnimationIndex) {
    f32 sp40;
    f32 sp38;
    struct_80B8E1A8 *sp34;
    f32 temp_f2;
    s32 temp_v0;
    f32 phi_f12;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f0;

    temp_v0 = *actorAnimationIndex;
    temp_f2 = skelAnime->animCurrentFrame;
    phi_f2 = temp_f2;
    phi_f2 = temp_f2;
    if ((temp_v0 < 0) || (animationIndex == temp_v0)) {
        phi_f12 = 0.0f;
        if (temp_v0 < 0) {
            phi_f2 = 0.0f;
        }
    } else {
        phi_f12 = animations[animationIndex].transitionRate;
        if (animationIndex != temp_v0) {
            phi_f2 = 0.0f;
        }
    }
    if (animations[animationIndex].playbackSpeed >= 0.0f) {
        sp38 = phi_f12;
        sp40 = phi_f2;
        sp34 = &animations[animationIndex];
        phi_f2_2 = phi_f2;
        phi_f0 = (f32) SkelAnime_GetFrameCount(animations[animationIndex].animationSeg);
    } else {
        sp38 = phi_f12;
        sp34 = &animations[animationIndex];
        phi_f2_2 = (f32) SkelAnime_GetFrameCount(animations[animationIndex].animationSeg);
        phi_f0 = 0.0f;
    }
    SkelAnime_ChangeAnim(skelAnime, animations[animationIndex].animationSeg, animations[animationIndex].playbackSpeed, phi_f2_2, phi_f0, (u8) (s32) animations[animationIndex].mode, phi_f12);
    *actorAnimationIndex = animationIndex;
}

s32 func_8013E2D4(Actor *actor, s16 arg1, s32 arg2, s32 arg3) {
    s32 sp1C;

    sp1C = 0;
    if (((s16) arg2 != -1) && ((s16) arg2 = (s16) arg2, (ActorCutscene_GetCurrentIndex() == (s16) arg2))) {
        ActorCutscene_Stop((s16) arg2);
        ActorCutscene_SetIntentToPlay(arg1);
    } else {
        arg3 = arg3;
        if (ActorCutscene_GetCanPlayNext(arg1) != 0) {
            if (arg3 != 0) {
                if (arg3 != 1) {
                    if (arg3 != 2) {

                    } else {
                        ActorCutscene_StartAndSetFlag(arg1, actor);
                    }
                } else {
                    ActorCutscene_Start(arg1, actor);
                }
            } else {
                ActorCutscene_StartAndSetUnkLinkFields(arg1, actor);
            }
            sp1C = 1;
        } else {
            ActorCutscene_SetIntentToPlay(arg1);
        }
    }
    return sp1C;
}

s32 func_8013E3B8(Actor *actor, s16 *cutscenes, s32 cutsceneArrayLen) {
    s16 *temp_v0;
    s32 temp_a0;
    s32 temp_s0;
    s8 temp_s2;
    s16 *phi_v0;
    s32 phi_s0;
    s16 *phi_v0_2;
    s32 phi_s0_2;
    s16 phi_s2;
    s16 phi_s2_2;
    s32 phi_s0_3;
    s32 phi_s0_4;
    s32 phi_s0_5;

    phi_s0 = 0;
    phi_s0_4 = 0;
    if ((s32) (s16) cutsceneArrayLen > 0) {
        temp_a0 = (s16) cutsceneArrayLen & 3;
        if (temp_a0 != 0) {
            phi_v0 = &cutscenes[0];
            do {
                temp_s0 = phi_s0 + 1;
                *phi_v0 = -1;
                phi_v0 += 2;
                phi_s0 = temp_s0;
                phi_s0_4 = temp_s0;
            } while (temp_a0 != temp_s0);
            if (temp_s0 != (s16) cutsceneArrayLen) {
                goto block_5;
            }
        } else {
block_5:
            phi_v0_2 = &cutscenes[phi_s0_4];
            do {
                temp_v0 = phi_v0_2 + 8;
                temp_v0->unk_-6 = -1;
                temp_v0->unk_-4 = -1;
                temp_v0->unk_-2 = -1;
                temp_v0->unk_-8 = -1;
                phi_v0_2 = temp_v0;
            } while (temp_v0 != &cutscenes[(s16) cutsceneArrayLen]);
        }
    }
    temp_s2 = actor->cutscene;
    phi_s0_2 = 0;
    phi_s2 = (s16) temp_s2;
    phi_s0_3 = 0;
    if (temp_s2 != -1) {
        do {
            phi_s2_2 = phi_s2;
            phi_s0_5 = phi_s0_2;
            if (phi_s0_2 < (s32) (s16) cutsceneArrayLen) {
                cutscenes[phi_s0_2] = phi_s2;
                phi_s2_2 = ActorCutscene_GetAdditionalCutscene(phi_s2);
                phi_s0_5 = phi_s0_2 + 1;
            }
            phi_s0_2 = phi_s0_5;
            phi_s2 = phi_s2_2;
            phi_s0_3 = phi_s0_5;
        } while (phi_s2_2 != -1);
    }
    return phi_s0_3;
}

void func_8013E4B0(Vec3f *arg0, Vec3s *arg1, f32 *arg2, void *arg3) {
    f32 sp2C;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f8;

    temp_f20 = Math_SinS((s16) ((s32) arg2->unk_0 * -1));
    temp_f0 = Math_CosS((s16) ((s32) arg2->unk_0 * -1));
    temp_f2 = arg1->unk_8;
    temp_f12 = arg1->unk_4;
    temp_f4 = temp_f12 * temp_f0;
    sp2C = (temp_f2 * temp_f0) - (temp_f12 * temp_f20);
    sp24 = (temp_f2 * temp_f20) + temp_f4;
    temp_f20_2 = Math_SinS(arg2->unk_2);
    temp_f0_2 = Math_CosS(arg2->unk_2);
    temp_f8 = sp2C * temp_f0_2;
    temp_f12_2 = arg1->unk_0;
    arg3->unk_4 = sp24;
    temp_f2_2 = temp_f8 - (temp_f12_2 * temp_f20_2);
    arg3->unk_8 = temp_f2_2;
    temp_f14 = (sp2C * temp_f20_2) + (temp_f12_2 * temp_f0_2);
    arg3->unk_0 = temp_f14;
    arg3->unk_C = (f32) -((arg0->x * temp_f14) + (sp24 * arg0->y) + (temp_f2_2 * arg0->z));
}

s32 func_8013E5CC(Vec3f *param_1, Vec3s *param_2, Vec3f *param_3, Vec3f *param_4, Vec3f *param_5, Vec3f *param_6) {
    f32 sp2C;
    s32 phi_v1;

    func_8013E4B0(param_3, param_2, &sp2C);
    if (func_8017D2FC(sp2C, sp30, sp34, sp38, param_4, param_5, param_6, 0) != 0) {
        phi_v1 = 1;
    } else {
        phi_v1 = 0;
    }
    return phi_v1;
}

s16 *func_8013E640(s32 arg0, ? arg1, s16 *arg2, s32 arg3, s16 arg4, s32 arg5, s32 (*arg6)(s32, ?, s16 *, s32)) {
    s16 *temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 *phi_s0;
    s16 *phi_s0_2;
    s16 *phi_s0_3;

    phi_s0 = arg2;
    if (arg2 == 0) {
        phi_s0 = (arg0 + ((arg3 & 0xFF) * 0xC))->unk_1CB4;
    }
    phi_s0_2 = phi_s0;
    phi_s0_3 = phi_s0;
    if ((phi_s0 != 0) && ((temp_v0 = *phi_s0, (arg4 != temp_v0)) || ((arg4 == temp_v0) && ((arg6 == 0) || ((arg6 != 0) && (arg6(arg0, arg1, phi_s0, arg5) == 0)))))) {
loop_8:
        temp_s0 = phi_s0_2->unk_12C;
        phi_s0_2 = temp_s0;
        phi_s0_3 = temp_s0;
        if (temp_s0 != 0) {
            temp_v0_2 = *temp_s0;
            if ((arg4 != temp_v0_2) || ((arg4 == temp_v0_2) && ((arg6 == 0) || ((arg6 != 0) && (arg6(arg0, arg1, temp_s0, arg5) == 0))))) {
                goto loop_8;
            }
        }
    }
    return phi_s0_3;
}

s32 func_8013E748(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, s32 arg4, s16 *arg5, s32 (*arg6)(GlobalContext *, Actor *, s16 *, ?)) {
    s32 sp24;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg6 == 0) || ((arg6 != 0) && (sp24 = 0, phi_v1 = sp24, (arg6(arg1, arg0, arg5, arg6) != 0)))) {
        phi_v1 = func_800B8500(arg0, arg1, arg2, arg3, arg4);
    }
    return phi_v1;
}

s32 func_8013E7C0(GlobalContext *arg0, Actor *arg1, s16 *arg2) {
    Actor *temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 phi_a0;
    s16 phi_v1;
    s32 phi_a1;
    s16 phi_v1_2;
    s32 phi_a3;

    temp_s0 = arg0->actorCtx.actorList[2].first;
    if ((s32) (s16) (Actor_YawBetweenActors(temp_s0, arg1) - temp_s0->shape.rot.y) >= 0) {
        arg2 = arg2;
        phi_a1 = (Actor_YawBetweenActors(temp_s0, arg1) - temp_s0->shape.rot.y) << 0x10;
    } else {
        arg2 = arg2;
        phi_a1 = (s32) (s16) (Actor_YawBetweenActors(temp_s0, arg1) - temp_s0->shape.rot.y) * -0x10000;
    }
    temp_v0 = arg1->yawTowardsPlayer - arg1->shape.rot.y;
    if ((s32) temp_v0 >= 0) {
        phi_a0 = temp_v0 << 0x10;
    } else {
        phi_a0 = (s32) temp_v0 * -0x10000;
    }
    temp_v0_2 = arg2[1];
    phi_v1 = (s16) -(s32) temp_v0_2;
    phi_a3 = 0;
    if ((s32) temp_v0_2 >= 0) {
        phi_v1 = temp_v0_2;
    }
    if ((phi_a0 >> 0x10) < (s32) phi_v1) {
        temp_v0_3 = *arg2;
        phi_v1_2 = (s16) -(s32) temp_v0_3;
        if ((s32) temp_v0_3 >= 0) {
            phi_v1_2 = temp_v0_3;
        }
        if ((phi_a1 >> 0x10) < (s32) phi_v1_2) {
            phi_a3 = 1;
        }
    }
    return phi_a3;
}

void func_8013E8F8(Actor *arg2, GlobalContext *arg3, s32 arg4, s16 arg5, s16 arg6) {
    s16 sp2A;
    s16 sp28;

    sp28 = arg5;
    sp2A = arg6;
    func_8013E748(arg2, arg3, (bitwise f32) arg2, (bitwise f32) arg3, arg4, &sp28, func_8013E7C0);
}

s32 func_8013E950(Vec3f *param_1, Vec3f *param_2, s16 param_3, Vec3f *param_4, Vec3f *param_5, s16 *param_6, s16 *param_7, s16 *param_8, s16 *param_9, u16 param_10, u16 param_11, u16 param_12, u16 param_13) {
    s16 sp2E;
    s16 sp28;
    s32 sp20;
    s32 sp1C;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;
    s16 phi_v0_5;
    s16 phi_v0_6;

    temp_t0 = Math_Vec3f_Yaw(param_1, param_4) - param_3;
    sp2E = temp_t0;
    temp_t0_2 = temp_t0;
    sp28 = Math_Vec3f_Pitch(param_2, param_5);
    if ((s32) temp_t0_2 >= 0) {
        phi_v0 = temp_t0_2;
    } else {
        phi_v0 = (s16) -(s32) temp_t0_2;
    }
    if ((s32) (s16) (param_11 + param_13) >= (s32) phi_v0) {
        sp1C = (s32) param_13;
        sp2E = temp_t0_2;
        sp20 = (s32) param_11;
        Math_ApproachS(param_7, (s16) (temp_t0_2 - *param_9), 4, 0x2AA8);
        temp_a0 = *param_7;
        temp_v0 = -(s32) param_11;
        phi_v0_2 = (s16) temp_v0;
        if ((s32) temp_a0 < temp_v0) {

        } else {
            phi_v0_2 = temp_a0;
            if ((s32) param_11 < (s32) temp_a0) {
                phi_v0_2 = (s16) param_11;
            }
        }
        *param_7 = phi_v0_2;
        sp1C = (s32) param_13;
        Math_ApproachS(param_9, (s16) (temp_t0_2 - *param_7), 4, 0x2AA8);
        temp_v1 = *param_9;
        temp_v0_2 = -(s32) param_13;
        if ((s32) temp_v1 < temp_v0_2) {
            *param_9 = (s16) temp_v0_2;
        } else {
            phi_v0_3 = temp_v1;
            if ((s32) param_13 < (s32) temp_v1) {
                phi_v0_3 = (s16) param_13;
            }
            *param_9 = phi_v0_3;
        }
    } else {
        Math_ApproachS(param_7, 0, 4, 0x2AA8);
        Math_ApproachS(param_9, 0, 4, 0x2AA8);
    }
    phi_v0_4 = (s16) -(s32) sp28;
    if ((s32) sp28 >= 0) {
        phi_v0_4 = sp28;
    }
    if ((s32) (s16) (param_10 + param_12) >= (s32) phi_v0_4) {
        sp1C = (s32) param_12;
        sp20 = (s32) param_10;
        Math_ApproachS(param_6, (s16) (sp28 - *param_8), 4, 0x2AA8);
        temp_a0_2 = *param_6;
        temp_v0_3 = -(s32) param_10;
        phi_v0_5 = (s16) temp_v0_3;
        if ((s32) temp_a0_2 < temp_v0_3) {

        } else {
            phi_v0_5 = temp_a0_2;
            if ((s32) param_10 < (s32) temp_a0_2) {
                phi_v0_5 = (s16) param_10;
            }
        }
        *param_6 = phi_v0_5;
        sp1C = (s32) param_12;
        Math_ApproachS(param_8, (s16) (sp28 - *param_6), 4, 0x2AA8);
        temp_v1_2 = *param_8;
        temp_v0_4 = -(s32) param_12;
        if ((s32) temp_v1_2 < temp_v0_4) {
            *param_8 = (s16) temp_v0_4;
        } else {
            phi_v0_6 = temp_v1_2;
            if ((s32) param_12 < (s32) temp_v1_2) {
                phi_v0_6 = (s16) param_12;
            }
            *param_8 = phi_v0_6;
        }
    } else {
        Math_ApproachS(param_6, 0, 4, 0x2AA8);
        Math_ApproachS(param_8, 0, 4, 0x2AA8);
    }
    return 1;
}
