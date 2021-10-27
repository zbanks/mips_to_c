typedef struct GameState {
    /* 0x00 */ GraphicsContext *gfxCtx;
    /* 0x04 */ void (*main)(GameState *);
    /* 0x08 */ void (*destroy)(GameState *);
    /* 0x0C */ void (*nextGameStateInit)(GameState *);
    /* 0x10 */ u32 nextGameStateSize;
    /* 0x14 */ Input input[4];
    /* 0x74 */ TwoHeadArena heap;
    /* 0x84 */ GameAlloc alloc;
    /* 0x98 */ f32 unk_98;                          /* inferred */
    /* 0x9B */ u8 running;                          /* overlap */
    /* 0x9C */ u32 frames;
    /* 0xA0 */ char pad_A0[0x2];
    /* 0xA2 */ u8 framerateDivisor;
    /* 0xA3 */ char pad_A3[0x1];
} GameState;                                        /* size = 0xA4 */

typedef struct ObjIceblock {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderCylinder unk_15C;           /* inferred */
    /* 0x1A8 */ void (*actionFunc)(ObjIceblock *, GlobalContext *);
    /* 0x1AC */ void (*unk_1AC)(ObjIceblock *, GlobalContext *); /* inferred */
    /* 0x1B0 */ s32 unk_1B0;                        /* inferred */
    /* 0x1B4 */ char pad_1B4[0x94];                 /* maybe part of unk_1B0[38]? */
    /* 0x248 */ Vec3f unk_248;                      /* inferred */
    /* 0x254 */ s16 unk_254;                        /* inferred */
    /* 0x256 */ s16 unk_256;                        /* inferred */
    /* 0x258 */ s16 unk_258;                        /* inferred */
    /* 0x25A */ char pad_25A[0x54];                 /* maybe part of unk_258[43]? */
    /* 0x2AE */ s16 unk_2AE;                        /* inferred */
    /* 0x2B0 */ s8 unk_2B0;                         /* inferred */
    /* 0x2B1 */ s8 unk_2B1;                         /* inferred */
    /* 0x2B2 */ char pad_2B2[0x2];                  /* maybe part of unk_2B1[3]? */
    /* 0x2B4 */ f32 unk_2B4;                        /* inferred */
} ObjIceblock;                                      /* size = 0x2B8 */

struct _mips2c_stack_ObjIceblock_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjIceblock_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjIceblock_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjIceblock_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A23090 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2311C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2319C {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A232C4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A23370 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2339C {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x1C];                   /* maybe part of sp84[8]? */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80A23690 {};              /* size 0x0 */

struct _mips2c_stack_func_80A236D4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Vec3f *sp18;                         /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x2];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A237A4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A23938 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A23B88 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x18];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A23D08 {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x8];                    /* maybe part of spAC[3]? */
    /* 0xB8 */ s32 spB8;                            /* inferred */
    /* 0xBC */ s32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x4];
    /* 0xC4 */ WaterBox *spC4;                      /* inferred */
    /* 0xC8 */ char pad_C8[0x8];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_80A23F90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A24118 {
    /* 0x00 */ char pad_0[0x9E];
    /* 0x9E */ s16 sp9E;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];                    /* maybe part of sp9E[3]? */
    /* 0xA4 */ s32 spA4;                            /* inferred */
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ s32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x8];                    /* maybe part of spAC[3]? */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0x8];                    /* maybe part of spB8[3]? */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
    /* 0xE8 */ char pad_E8[0x4];
    /* 0xEC */ f32 spEC;                            /* inferred */
    /* 0xF0 */ f32 spF0;                            /* inferred */
    /* 0xF4 */ char pad_F4[0x4];
};                                                  /* size = 0xF8 */

struct _mips2c_stack_func_80A24384 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A243E0 {
    /* 0x000 */ char pad_0[0xB4];
    /* 0x0B4 */ s32 spB4;                           /* inferred */
    /* 0x0B8 */ ? spB8;                             /* inferred */
    /* 0x0B8 */ char pad_B8[0x4];
    /* 0x0BC */ s32 spBC;                           /* inferred */
    /* 0x0C0 */ char pad_C0[0x8];                   /* maybe part of spBC[3]? */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ char pad_CC[0x4];
    /* 0x0D0 */ f32 spD0;                           /* inferred */
    /* 0x0D4 */ f32 spD4;                           /* inferred */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ char pad_F8[0x8];                   /* maybe part of spF4[3]? */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ char pad_104[0x4];
};                                                  /* size = 0x108 */

struct _mips2c_stack_func_80A24680 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A246D8 {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x8];                    /* maybe part of sp9C[3]? */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ char pad_CC[0x4];
    /* 0xD0 */ s32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0x4];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80A2491C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A24954 {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ s8 sp27;                             /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A24A48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A24AA8 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A24B74 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A24BDC {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x4];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80A24DC4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A24DD0 {
    /* 0x00 */ char pad_0[0x8A];
    /* 0x8A */ s16 sp8A;                            /* inferred */
    /* 0x8C */ char pad_8C[0x10];                   /* maybe part of sp8A[9]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x4];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A2508C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A25238 {};              /* size 0x0 */

struct _mips2c_stack_func_80A252DC {};              /* size 0x0 */

struct _mips2c_stack_func_80A25404 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2541C {};              /* size 0x0 */

struct _mips2c_stack_func_80A25440 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x48];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80A257A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A257B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A25824 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2586C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A25978 {};              /* size 0x0 */

struct _mips2c_stack_func_80A25994 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A25A8C {};              /* size 0x0 */

struct _mips2c_stack_func_80A25AA8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A25BA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A25BBC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A25C5C {};              /* size 0x0 */

struct _mips2c_stack_func_80A25C70 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A25CF4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A25D28 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A25E3C {};              /* size 0x0 */

struct _mips2c_stack_func_80A25E50 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x10];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A25FA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A25FD4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A260E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A26144 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A262BC {};              /* size 0x0 */

struct _mips2c_stack_func_80A262EC {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A26574 {};              /* size 0x0 */

struct _mips2c_stack_func_80A265C0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A266C4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A266E0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A26B64 {};              /* size 0x0 */

struct _mips2c_stack_func_80A26B74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A26BF8 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ s16 sp74;                            /* inferred */
    /* 0x76 */ char pad_76[0x12];
};                                                  /* size = 0x88 */

? EffectSsIceBlock_Spawn(s32, f32 *, f32 *, f32 *, s32); /* extern */
f32 func_800C4240(CollisionContext *, void *, void *, GlobalContext *, f32 *, f32); /* extern */
s32 func_800C56E0(CollisionContext *, f32 *, f32 *, f32 *, ? *, s32, s32, s32, s32, s32 *, f32 *, f32); /* extern */
s16 func_80A23090(s16 arg0, s16 arg1, s16 arg2);    /* static */
void func_80A2311C(f32 *arg0, f32 *arg1, s16 arg2); /* static */
void func_80A2319C(Actor *arg0, f32 arg1);          /* static */
void func_80A232C4(GlobalContext *arg0, s16 arg1);  /* static */
void func_80A23370(GlobalContext *arg0, s16 arg1);  /* static */
void func_80A2339C(s32 arg0, PosRot *arg1, f32 arg2, f32 arg3, s32 arg4); /* static */
void func_80A23690(GlobalContext *arg0);            /* static */
s32 func_80A236D4(Actor *arg0, Vec3f *arg1);        /* static */
void func_80A237A4(GlobalContext *arg0);            /* static */
void func_80A23938(GlobalContext *arg0);            /* static */
void func_80A23B88(GlobalContext *arg0);            /* static */
s32 func_80A23D08(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_80A23F90(GlobalContext *arg0, f32 *);      /* static */
s32 func_80A24118(f32 *arg0, f32 *arg1, f32 arg2, Vec3f *arg3); /* static */
s32 func_80A24384(GlobalContext *arg0, f32 *);      /* static */
s32 func_80A243E0(f32 *arg0, s32 arg1, void *arg2); /* static */
? func_80A24680(GlobalContext *arg0, f32 *);        /* static */
s32 func_80A246D8(f32 *arg0, f32 *arg1, f32 *arg2); /* static */
void func_80A2491C(GlobalContext *arg0);            /* static */
s32 func_80A24954(GlobalContext *arg0, f32 *arg1);  /* static */
void func_80A24A48(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80A24AA8(ObjIceblock *arg0, GlobalContext *arg1); /* static */
void func_80A24B74(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80A24BDC(GlobalContext *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, s32 arg4); /* static */
void func_80A24DC4(void *arg0);                     /* static */
void func_80A24DD0(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80A2508C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A25238(GlobalContext *arg0);             /* static */
void func_80A252DC(GlobalContext *arg0, s32 arg1);  /* static */
void func_80A25404(GlobalContext *arg0);            /* static */
void func_80A2541C(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A25440(ObjIceblock *arg0);              /* static */
void func_80A257A0(ObjIceblock *arg0);              /* static */
void func_80A257B4(Actor *arg0, ? arg1);            /* static */
void func_80A25824(Actor *arg0);                    /* static */
void func_80A2586C(Actor *arg0, s32 arg1);          /* static */
void func_80A25978(Actor *arg0);                    /* static */
void func_80A25994(Actor *arg0, s32 arg1);          /* static */
void func_80A25A8C(Actor *arg0);                    /* static */
void func_80A25AA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A25BA0(Actor *arg0);                    /* static */
void func_80A25BBC(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A25C5C(Actor *arg0);                    /* static */
void func_80A25C70(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A25CF4(GlobalContext *arg0);            /* static */
void func_80A25D28(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A25E3C(GlobalContext *arg0);            /* static */
void func_80A25E50(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A25FA0(GlobalContext *arg0);            /* static */
void func_80A25FD4(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A260E8(GlobalContext *arg0);            /* static */
void func_80A26144(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A262BC(GlobalContext *arg0, f32 *);     /* static */
void func_80A262EC(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A26574(GlobalContext *arg0);            /* static */
void func_80A265C0(GlobalContext *arg0, f32 *arg1); /* static */
void func_80A266C4(ObjIceblock *arg0);              /* static */
void func_80A266E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A26B64(ObjIceblock *arg0, GlobalContext *arg1); /* static */
void func_80A26B74(void *arg0, GlobalContext *arg1); /* static */
void func_80A26BF8(void *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060001A0;
extern void D_06000328;
extern CollisionHeader D_06000438;
extern Gfx D_060007F0;
extern void D_060009D0;
static ColliderCylinderInit D_80A26E50 = {
    {0xA, 0, 9, 0xD, 0x20, 1},
    {0, {0, 0, 0}, {0x800, 0, 0}, 0, 1, 1},
    {0x2C, 0x3E, 0xFFE1, {0, 0, 0}},
};
static void *D_80A26E7C = NULL;
static ? D_80A26E80;                                /* unable to generate initializer */
static ? D_80A26E88;                                /* unable to generate initializer */
static ? D_80A26E90;                                /* unable to generate initializer */
static ? D_80A26EB8;                                /* unable to generate initializer */
static ? D_80A26EE0;                                /* unable to generate initializer */
static ? D_80A26F08;                                /* unable to generate initializer */
static f32 D_80A26F30[2] = {-300.0f, 300.0f};
static f32 D_80A26F38[2] = {1.0f, -1.0f};
static ? D_80A26F40;                                /* unable to generate initializer */
static ? D_80A26F68;                                /* unable to generate initializer */
static Vec3f D_80A26F90 = {0.0f, 0.3f, 0.0f};
static Color_RGBA8 D_80A26F9C = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80A26FA0 = {0xB4, 0xB4, 0xB4, 0xFF};
static InitChainEntry D_80A26FA4[7];                /* unable to generate initializer */
static ? D_80A26FC0;                                /* unable to generate initializer */

s16 func_80A23090(s16 arg0, s16 arg1, s16 arg2) {
    if ((s32) arg0 >= 0) {
        if ((s32) arg2 < (s32) arg0) {
            return arg2;
        }
        if ((s32) arg0 < (s32) arg1) {
            return arg1;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return arg0;
    }
    if ((s32) arg0 < -(s32) arg2) {
        return (s16) ((s32) arg2 * -1);
    }
    if (-(s32) arg1 < (s32) arg0) {
        return (s16) ((s32) arg1 * -1);
    }
    return arg0;
}

void func_80A2311C(f32 *arg0, f32 *arg1, s16 arg2) {
    f32 sp1C;
    f32 temp_f0;

    sp1C = Math_SinS(arg2);
    temp_f0 = Math_CosS(arg2);
    arg0->unk_0 = (arg1[2] * sp1C) + (arg1->unk_0 * temp_f0);
    arg0[1] = arg1[1];
    arg0[2] = (arg1[2] * temp_f0) - (arg1->unk_0 * sp1C);
}

void func_80A2319C(Actor *arg0, f32 arg1) {
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s2;
    s32 temp_s3;
    s16 phi_s1;
    void *phi_s0;
    s16 phi_s2;
    s32 phi_s3;

    temp_s1 = (s16) (Rand_Next() >> 0x10);
    phi_s1 = temp_s1;
    phi_s0 = arg0 + 0x1B4;
    phi_s2 = (s16) (Rand_Next() >> 0x10);
    phi_s3 = 0;
    do {
        temp_s1_2 = phi_s1 + Rand_S16Offset(0xA8C, 0x2710);
        temp_s2 = phi_s2 + Rand_S16Offset(0xA8C, 0x2710);
        phi_s0->unk_0 = temp_s1_2;
        phi_s0->unk_2 = temp_s2;
        phi_s0->unk_4 = (f32) (((Rand_ZeroOne() * 0.2f) + 0.9f) * arg1);
        phi_s0->unk_8 = (f32) (((Rand_ZeroOne() * 0.2f) + 0.9f) * arg1);
        temp_s3 = phi_s3 + 0x10;
        phi_s0->unk_C = (f32) (((Rand_ZeroOne() * 0.2f) + 0.9f) * arg1);
        phi_s1 = temp_s1_2;
        phi_s0 += 0x10;
        phi_s2 = temp_s2;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x40);
}

void func_80A232C4(GlobalContext *arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = arg1 * 2;
    arg0->unk_276 = (s16) (arg0->unk_276 + *(&D_80A26E80 + temp_v0));
    arg0->unk_278 = (s16) (arg0->unk_278 + *(&D_80A26E88 + temp_v0));
    if ((arg1 == 0) || (arg1 == 1)) {
        arg0->unk_264 = (void *) (arg0 + 0x24);
        arg0->unk_268 = (f32) (arg0->state.destroy + (f32) (arg0->unk_276 * 0x3C));
    } else {
        arg0->unk_264 = (void *) (arg0 + 0x2C);
        arg0->unk_268 = (f32) (arg0->state.nextGameStateSize + (f32) (arg0->unk_278 * 0x3C));
    }
    arg0->unk_26C = arg1;
}

void func_80A23370(GlobalContext *arg0, s16 arg1) {
    if ((arg1 == 0) || (arg1 == 1)) {
        arg0->unk_264 = (void *) (arg0 + 0x24);
    } else {
        arg0->unk_264 = (void *) (arg0 + 0x2C);
    }
    arg0->unk_26C = arg1;
}

void func_80A2339C(s32 arg0, PosRot *arg1, f32 arg2, f32 arg3, s32 arg4) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp84;
    f32 sp80;
    f32 *temp_fp;
    f32 *temp_s7;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_s4;
    s32 temp_lo;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    spAC = 0.0f;
    spA4 = 0.0f;
    temp_f24 = ((Rand_ZeroOne() * 0.1656f) + 0.3312f) * arg3;
    phi_s0 = 0;
    phi_s1 = 0;
    if (arg4 > 0) {
        temp_lo = 0x10000 / arg4;
        temp_fp = &spB0;
        temp_s7 = &spBC;
        sp84 = arg2 * 3.5f;
        sp80 = 600.0f * arg2;
        do {
            temp_f20 = ((Rand_ZeroOne() * 0.4f) + 0.6f) * sp84;
            temp_s4 = (s16) (s32) (temp_f20 * 100.0f);
            temp_f22 = ((Rand_ZeroOne() * 0.7f) + 0.3f) * arg2 * 300.0f;
            temp_f16 = Math_SinS(Rand_S16Offset(phi_s0, (s16) temp_lo)) * temp_f22;
            spBC = temp_f16;
            spC0 = (Rand_ZeroOne() - 0.5f) * sp80;
            temp_f18 = temp_f16 * temp_f24;
            spC4 = Math_CosS(Rand_S16Offset(phi_s0, (s16) temp_lo)) * temp_f22;
            spB0 = temp_f18;
            spB4 = ((Rand_ZeroOne() * 1.2f) + 0.3f + (temp_f20 * 4.0f)) * (10.0f * arg3);
            spB8 = spC4 * temp_f24;
            spBC += arg1->pos.x;
            spC0 += arg1->pos.y;
            spC4 += arg1->pos.z;
            spA8 = -0.8f - (temp_f20 * 18.0f);
            EffectSsIceBlock_Spawn(arg0, temp_s7, temp_fp, &spA4, (s32) temp_s4);
            temp_s1 = phi_s1 + 1;
            phi_s0 = (s16) (phi_s0 + (s16) temp_lo);
            phi_s1 = temp_s1;
        } while (temp_s1 != arg4);
    }
}

void func_80A23690(GlobalContext *arg0) {
    f32 temp_f2;

    temp_f2 = arg0->state.heap.bufp;
    arg0->unk_68 = (f32) (arg0->unk_68 + arg0->state.heap.size);
    if (arg0->unk_68 < temp_f2) {
        arg0->unk_68 = temp_f2;
    }
    arg0->unk_28 = (f32) (arg0->unk_28 + arg0->unk_68);
}

s32 func_80A236D4(Actor *arg0, Vec3f *arg1) {
    f32 sp2C;
    f32 sp28;
    s16 sp26;
    s32 sp20;
    Vec3f *sp18;
    Vec3f *temp_a0;
    f32 temp_a2;
    f32 temp_a2_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_a0_2;
    s32 temp_v1;

    temp_a0 = arg0 + 0x24;
    sp18 = temp_a0;
    temp_v0 = Math_Vec3f_Yaw(temp_a0, arg1);
    temp_a0_2 = temp_v0 << 0x10;
    sp26 = temp_v0;
    temp_f2 = fabsf(Math_SinS((s16) (temp_a0_2 >> 0x10)) * arg0->speedXZ) + 0.01f;
    sp2C = temp_f2;
    temp_a2_2 = temp_f2;
    temp_f12 = fabsf(Math_CosS(sp26) * arg0->speedXZ) + 0.01f;
    sp28 = temp_f12;
    temp_v1 = Math_StepToF((f32 *) temp_a0, arg1->x, temp_a2_2) & 1;
    temp_a2 = temp_f12;
    sp20 = temp_v1;
    return temp_v1 & Math_StepToF(arg0 + 0x2C, arg1->z, temp_a2);
}

void func_80A237A4(GlobalContext *arg0) {
    f32 sp20;
    f32 *temp_s1;
    f32 *temp_s1_2;
    f32 temp_f2;
    f32 *phi_s1;

    arg0->unk_28C = (s16) (arg0->unk_28C + arg0->unk_288);
    arg0->unk_28E = (s16) (arg0->unk_28E + arg0->unk_28A);
    Math_StepToF(arg0 + 0x284, arg0->mainCamera.eye.y, 0.08f);
    temp_s1 = arg0 + 0x27C;
    phi_s1 = temp_s1;
    if ((arg0->view.unkE0.m[1][2] & 0x20) != 0) {
        temp_s1_2 = arg0 + 0x27C;
        Math_StepToF(temp_s1_2, -5.0f, (Math_CosS((s16) (s32) (fabsf(*temp_s1_2) * 3276.8f)) * 0.3f) + 0.02f);
        phi_s1 = temp_s1_2;
    } else {
        Math_StepToF(temp_s1, 0.0f, (Math_SinS((s16) (s32) (fabsf(*temp_s1) * 3276.8f)) * 0.3f) + 0.02f);
    }
    sp20 = Math_SinS(phi_s1->unk_10);
    temp_f2 = phi_s1[2];
    arg0->unk_28 = (f32) ((Math_SinS(phi_s1->unk_12) * temp_f2 * 0.5f) + ((arg0->unk_244 - ((600.0f * arg0->unk_5C) - 90.0f)) + (sp20 * temp_f2)) + phi_s1->unk_0);
}

void func_80A23938(GlobalContext *arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0;
    void *temp_s0;
    void *phi_s0;
    f32 phi_f0;
    s16 phi_v0;
    s16 phi_v0_2;

    temp_v0 = arg0->view.unkE0.m[1][2];
    if ((temp_v0 & 0x80) != 0) {
        Math_ScaledStepToS(arg0 + 0xBC, 0, 0x190);
        Math_ScaledStepToS(arg0 + 0xC0, 0, 0x190);
        return;
    }
    if ((temp_v0 & 0x20) != 0) {
        temp_s0 = arg0 + 0x27C;
        temp_s0->unk_14 = (s16) arg0->state.alloc.base.unk_E;
        phi_s0 = temp_s0;
        phi_f0 = 0.3f;
    } else {
        phi_s0 = arg0 + 0x27C;
        phi_f0 = 0.08f;
    }
    Math_StepToF(phi_s0 + 0x1C, phi_f0, 0.04f);
    phi_s0->unk_22 = (s16) (phi_s0->unk_22 + (s32) ((f32) phi_s0->unk_20 * -0.02f));
    phi_s0->unk_22 = func_80A23090(phi_s0->unk_22, 0x32, 0x320);
    phi_s0->unk_20 = (s16) (phi_s0->unk_20 + phi_s0->unk_22);
    phi_s0->unk_18 = (s16) (phi_s0->unk_18 + (s32) ((f32) (s16) (phi_s0->unk_16 - phi_s0->unk_14) * -0.04f * arg0->state.unk_98 * arg0->unk_58 * 0.0016666667f));
    phi_s0->unk_18 = func_80A23090(phi_s0->unk_18, 0x32, 0x320);
    phi_s0->unk_16 = (s16) (phi_s0->unk_16 + phi_s0->unk_18);
    arg0->unk_BC = (s16) (s32) (Math_CosS(phi_s0->unk_16) * (f32) phi_s0->unk_20 * phi_s0->unk_1C);
    temp_v1 = arg0->unk_BC;
    if ((s32) temp_v1 < -0x7D0) {
        arg0->unk_BC = -0x7D0;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x7D1) {
            phi_v0 = 0x7D0;
        }
        arg0->unk_BC = phi_v0;
    }
    arg0->unk_C0 = (s16) (s32) (-Math_SinS(phi_s0->unk_16) * (f32) phi_s0->unk_20 * phi_s0->unk_1C);
    temp_v1_2 = arg0->unk_C0;
    if ((s32) temp_v1_2 < -0x7D0) {
        arg0->unk_C0 = -0x7D0;
        return;
    }
    phi_v0_2 = temp_v1_2;
    if ((s32) temp_v1_2 >= 0x7D1) {
        phi_v0_2 = 0x7D0;
    }
    arg0->unk_C0 = phi_v0_2;
}

void func_80A23B88(GlobalContext *arg0) {
    f32 sp4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_f16 = arg0->state.destroy;
    temp_f14 = arg0->unk_24 - temp_f16;
    if (temp_f14 >= 0.0f) {
        phi_f2 = 0.5f;
    } else {
        phi_f2 = -0.5f;
    }
    temp_f6 = (f32) (((s32) (phi_f2 + temp_f14) / 0x1E) * 0x1E);
    sp4 = temp_f6;
    if (fabsf(temp_f14 - temp_f6) < 3.0f) {
        arg0->unk_24 = (f32) (temp_f16 + temp_f6);
    }
    temp_f16_2 = arg0->state.nextGameStateSize;
    temp_f14_2 = arg0->unk_2C - temp_f16_2;
    if (temp_f14_2 >= 0.0f) {
        phi_f2_2 = 0.5f;
    } else {
        phi_f2_2 = -0.5f;
    }
    temp_f4 = (f32) (((s32) (phi_f2_2 + temp_f14_2) / 0x1E) * 0x1E);
    sp4 = temp_f4;
    if (fabsf(temp_f14_2 - temp_f4) < 3.0f) {
        arg0->unk_2C = (f32) (temp_f16_2 + temp_f4);
    }
}

s32 func_80A23D08(GlobalContext *arg0, GlobalContext *arg1) {
    WaterBox *spC4;
    s32 spBC;
    s32 spB8;
    f32 spAC;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    s32 sp94;
    CollisionContext *temp_fp;
    f32 *temp_a1;
    f32 *temp_t9;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s32 temp_cond;
    s32 temp_s2;
    void *temp_s0;
    void *temp_v0;
    GlobalContext *phi_s1;
    ? *phi_s4;
    ? *phi_s5;
    void *phi_s0;
    void *phi_s7;
    f32 phi_f22;
    s32 phi_s2;
    f32 *phi_s6;
    f32 phi_f20;

    sp94 = 0;
    temp_s0 = arg0 + 0x1F4;
    sp9C = arg0->unk_28 + 40.0f;
    spBC = -1;
    spB8 = -1;
    temp_fp = arg1 + 0x830;
    phi_s1 = arg0;
    phi_s4 = &D_80A26EB8;
    phi_s5 = &D_80A26E90;
    phi_s0 = temp_s0;
    phi_s7 = temp_s0 + 8;
    phi_f22 = -32000.0f;
    phi_s2 = 0;
    phi_s6 = temp_s0 + 0xC;
    phi_f20 = -32000.0f;
    do {
        phi_s1->view.quakeScale.z = 0.0f;
        phi_s1->view.quakeSpeed = -32000.0f;
        phi_s1->view.currQuakeRot.x = 7e-44.0f;
        temp_a1 = &sp98;
        sp98 = phi_s4->unk_0 + (phi_s5->unk_0 * arg0->unk_58);
        spA0 = phi_s4->unk_4 + (phi_s5->unk_4 * arg0->unk_60);
        func_80A2311C(&spA4, temp_a1, arg0->unk_BE);
        temp_t9 = &spA4;
        spA4 += arg0->unk_24;
        spAC += arg0->unk_2C;
        temp_f0 = func_800C4240(temp_fp, phi_s0, phi_s7, arg0, temp_t9, 0.0f);
        temp_cond = temp_f0 > -31999.0f;
        phi_s0->unk_4 = temp_f0;
        if (temp_cond) {
            sp94 = 1;
            temp_f0_2 = phi_s0->unk_4;
            if (phi_f22 < temp_f0_2) {
                spBC = phi_s2;
                phi_f22 = temp_f0_2;
            }
        }
        phi_s1 += 0x10;
        if (func_800CA1E8(arg1, temp_fp, spA4, spAC, phi_s6, &spC4) != 0) {
            temp_f0_3 = phi_s0->unk_C;
            if (phi_f20 < temp_f0_3) {
                spB8 = phi_s2;
                phi_f20 = temp_f0_3;
            }
        } else {
            phi_s0->unk_C = -32000.0f;
        }
        temp_s2 = phi_s2 + 1;
        phi_s4 += 8;
        phi_s5 += 8;
        phi_s0 += 0x10;
        phi_s7 += 0x10;
        phi_s2 = temp_s2;
        phi_s6 = &phi_s6[4];
    } while (temp_s2 != 5);
    if (spBC >= 0) {
        temp_v0 = arg0 + (spBC * 0x10);
        arg0->state.heap.tail = temp_v0->unk_1F4;
        arg0->state.alloc.base.prev = temp_v0->unk_1F8;
        arg0->unk_85 = (s8) temp_v0->unk_1FC;
    } else {
        arg0->state.heap.tail = NULL;
        arg0->state.alloc.base.prev = -32000.0f;
        arg0->unk_85 = 0x32;
    }
    if (spB8 >= 0) {
        arg0->unk_244 = (f32) (arg0 + (spB8 * 0x10))->unk_200;
    } else {
        arg0->unk_244 = -32000.0f;
    }
    return sp94;
}

s32 func_80A23F90(GlobalContext *arg0) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    void *temp_v0;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;
    f32 phi_f2_4;
    s32 phi_v1;
    f32 phi_f2_5;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    temp_a2->view.unkE0.m[1][2] &= -5;
    arg0 = temp_a2;
    if (func_80A23D08(temp_a0, temp_a2) != 0) {
        temp_f12 = arg0->unk_28 - 10.0f;
        phi_f2 = -32000.0f;
        phi_v1 = 0;
        if (temp_f12 < arg0->view.quakeSpeed) {
            temp_f0 = arg0->view.quakeSpeed;
            if (temp_f0 > -32000.0f) {
                phi_f2 = temp_f0;
                phi_v1 = 1;
            }
        }
        temp_v0 = arg0 + (1 * 0x10);
        phi_f2_2 = phi_f2;
        if (temp_f12 < temp_v0->unk_1F8) {
            temp_f0_2 = temp_v0->unk_1F8;
            if (phi_f2 < temp_f0_2) {
                phi_f2_2 = temp_f0_2;
                phi_v1 = 1;
            }
        }
        phi_f2_3 = phi_f2_2;
        if (temp_f12 < temp_v0->unk_208) {
            temp_f0_3 = temp_v0->unk_208;
            if (phi_f2_2 < temp_f0_3) {
                phi_f2_3 = temp_f0_3;
                phi_v1 = 1;
            }
        }
        phi_f2_4 = phi_f2_3;
        if (temp_f12 < temp_v0->unk_218) {
            temp_f0_4 = temp_v0->unk_218;
            if (phi_f2_3 < temp_f0_4) {
                phi_f2_4 = temp_f0_4;
                phi_v1 = 1;
            }
        }
        phi_f2_5 = phi_f2_4;
        if (temp_f12 < temp_v0->unk_228) {
            temp_f0_5 = temp_v0->unk_228;
            if (phi_f2_4 < temp_f0_5) {
                phi_v1 = 1;
                phi_f2_5 = temp_f0_5;
            }
        }
        if (phi_v1 != 0) {
            arg0->unk_28 = phi_f2_5;
            arg0->view.unkE0.m[1][2] |= 4;
            arg0->unk_68 = 0.0f;
        }
        return phi_v1;
    }
    return 0;
}

s32 func_80A24118(f32 *arg0, f32 *arg1, f32 arg2, Vec3f *arg3) {
    f32 spF0;
    f32 spEC;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spB8;
    s32 spAC;
    ? spA8;
    s32 spA4;
    s16 sp9E;
    ? *temp_s0;
    f32 *temp_a1;
    f32 *temp_a2_2;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_a2;
    s16 phi_a2;
    ? *phi_s2;
    ? *phi_s0;
    f32 phi_f20;

    temp_a2 = arg0->unk_150;
    phi_a2 = temp_a2;
    if (arg0[82] < 0.0f) {
        phi_a2 = (s16) (temp_a2 - 0x8000);
    }
    sp9E = phi_a2;
    spF0 = Math_SinS(phi_a2);
    spEC = Math_CosS(sp9E);
    temp_f0 = Math3D_Distance(arg0 + 0x24, arg0 + 0x108);
    spA4 = 0;
    temp_s3 = &spDC;
    temp_f2 = temp_f0 + (300.0f * arg0[24]) + arg2;
    temp_f24 = temp_f2 * spF0;
    temp_s5 = &spD0;
    temp_f26 = temp_f2 * spEC;
    phi_s2 = &D_80A26F08;
    phi_s0 = &D_80A26EE0;
    phi_f20 = 3.4028235e38f;
    do {
        temp_a1 = &spC4;
        spC4 = phi_s2->unk_0 + (phi_s0->unk_0 * arg0[22]);
        temp_f0_2 = arg0[23];
        spCC = 0.0f;
        spC8 = phi_s2->unk_4 + (phi_s0->unk_4 * temp_f0_2) + (arg0[49] * temp_f0_2);
        func_80A2311C(temp_s3, temp_a1, sp9E);
        temp_f16 = spDC + arg0[66];
        spDC = temp_f16;
        temp_f8 = spE0 + arg0[67];
        temp_a2_2 = temp_s5;
        spE0 = temp_f8;
        spD4 = temp_f8;
        spD0 = temp_f24 + temp_f16;
        temp_f18 = spE4 + arg0[68];
        temp_f6 = temp_f26 + temp_f18;
        spE4 = temp_f18;
        spD8 = temp_f6;
        if (func_800C56E0(arg1 + 0x830, temp_s3, temp_a2_2, &spB8, &spA8, 1, 0, 0, 1, &spAC, arg0, 0.0f) != 0) {
            temp_f0_3 = Math3D_DistanceSquared((Vec3f *) temp_s3, (Vec3f *) &spB8);
            if (temp_f0_3 < phi_f20) {
                temp_f20 = temp_f0_3;
                spA4 = 1;
                Math_Vec3f_Diff((Vec3f *) &spB8, (Vec3f *) temp_s5, arg3);
                phi_f20 = temp_f20;
            }
        }
        temp_s0 = phi_s0 + 8;
        phi_s2 += 8;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_80A26F08);
    return spA4;
}

s32 func_80A24384(GlobalContext *arg0) {
    f32 sp1C;

    if (func_80A24118(NULL, &sp1C) != 0) {
        arg0->unk_24 = (f32) (arg0->unk_24 + sp1C);
        arg0->unk_2C = (f32) (arg0->unk_2C + sp24);
        return 1;
    }
    return 0;
}

s32 func_80A243E0(f32 *arg0, s32 arg1, void *arg2) {
    f32 sp100;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spC8;
    s32 spBC;
    ? spB8;
    s32 spB4;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_s1;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_s6;
    s16 phi_s6;
    f32 *phi_s2;
    f32 *phi_s1;
    f32 phi_f22;

    temp_s6 = arg0->unk_150;
    phi_s6 = temp_s6;
    if (arg0[82] < 0.0f) {
        phi_s6 = (s16) (temp_s6 - 0x8000);
    }
    sp100 = Math_SinS(phi_s6);
    temp_f26 = Math_CosS(phi_s6);
    temp_f0 = Math3D_Distance(arg0 + 0x24, arg0 + 0x108);
    spB4 = 0;
    temp_s3 = &spEC;
    temp_f12 = -(temp_f0 + (300.0f * arg0[24]) + 2.0f);
    temp_f28 = temp_f12 * sp100;
    temp_f30 = temp_f12 * temp_f26;
    phi_s2 = D_80A26F38;
    phi_s1 = D_80A26F30;
    phi_f22 = 3.4028235e38f;
    do {
        spDC = 0.0f;
        temp_a1 = &spD4;
        spD8 = -10.0f;
        spD4 = *phi_s2 + (*phi_s1 * arg0[22]);
        func_80A2311C(temp_s3, temp_a1, phi_s6);
        temp_f10 = spEC + arg0[9];
        spEC = temp_f10;
        temp_f18 = spF0 + arg0[10];
        temp_a2 = &spE0;
        spF0 = temp_f18;
        spE4 = temp_f18;
        spE0 = temp_f28 + temp_f10;
        temp_f8 = spF4 + arg0[11];
        temp_f4 = temp_f30 + temp_f8;
        spF4 = temp_f8;
        spE8 = temp_f4;
        if (func_800C56E0(arg1 + 0x830, temp_s3, temp_a2, &spC8, &spB8, 1, 0, 0, 1, &spBC, arg0, 0.0f) != 0) {
            temp_f0_2 = Math3D_DistanceSquared((Vec3f *) temp_s3, (Vec3f *) &spC8);
            if (temp_f0_2 < phi_f22) {
                spB4 = 1;
                arg2->unk_4 = 0.0f;
                arg2->unk_0 = (f32) ((spC8 - spEC) + (300.0f * arg0[24] * sp100));
                arg2->unk_8 = (f32) ((spD0 - spF4) + (300.0f * arg0[24] * temp_f26));
                phi_f22 = temp_f0_2;
            }
        }
        temp_s1 = phi_s1 + 4;
        phi_s2 += 4;
        phi_s1 = temp_s1;
    } while (temp_s1 != D_80A26F38);
    return spB4;
}

? func_80A24680(GlobalContext *arg0) {
    f32 sp1C;

    if (func_80A243E0(&sp1C) != 0) {
        arg0->unk_24 = (f32) (arg0->unk_24 + sp1C);
        arg0->unk_2C = (f32) (arg0->unk_2C + sp24);
        return 1;
    }
    return 0;
}

s32 func_80A246D8(f32 *arg0, f32 *arg1, f32 *arg2) {
    s32 spD0;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 sp9C;
    s32 sp98;
    ? sp94;
    ? *temp_s0;
    CollisionContext *temp_s5;
    DynaPolyActor *temp_v0;
    f32 *temp_a1;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_t6;
    ? *phi_s1;
    ? *phi_s0;
    s16 phi_s3;
    s32 phi_s7;

    spD0 = 0;
    temp_s5 = arg1 + 0x830;
    temp_s6 = &spC0;
    temp_f20 = (arg0[24] * 300.0f) + 2.0f;
    phi_s3 = 0;
    phi_s7 = 0;
    do {
        phi_s1 = &D_80A26F68;
        phi_s0 = &D_80A26F40;
loop_2:
        temp_a1 = &spA8;
        spA8 = phi_s1->unk_0 + (phi_s0->unk_0 * arg0[22]);
        temp_f0 = arg0[23];
        spB0 = 0.0f;
        spAC = phi_s1->unk_4 + (phi_s0->unk_4 * temp_f0) + (arg0[49] * temp_f0);
        func_80A2311C(temp_s6, temp_a1, phi_s3);
        spC0 += arg2->unk_0;
        spC4 += arg2[1];
        temp_f4 = spC8 + arg2[2];
        spC8 = temp_f4;
        temp_f6 = Math_SinS(phi_s3) * temp_f20;
        spB8 = spC4;
        spB4 = temp_f6 + spC0;
        spBC = (Math_CosS(phi_s3) * temp_f20) + temp_f4;
        if (func_800C56E0(temp_s5, temp_s6, &spB4, &sp9C, &sp94, 1, 0, 0, 1, &sp98, arg0, 0.0f) != 0) {
            temp_v0 = BgCheck_GetActorOfMesh(temp_s5, sp98);
            phi_s7 = 1;
            if ((temp_v0 != 0) && (temp_v0->actor.id == 0x143) && (temp_v0->unk_2B0 == 3)) {
                temp_v0[1].actor.targetArrowOffset = (bitwise f32) ((bitwise s32) temp_v0[1].actor.targetArrowOffset | 0x80);
            }
        }
        temp_s0 = phi_s0 + 8;
        phi_s1 += 8;
        phi_s0 = temp_s0;
        if (temp_s0 != &D_80A26F68) {
            goto loop_2;
        }
        temp_t6 = spD0 + 1;
        spD0 = temp_t6;
        phi_s3 = (s16) (phi_s3 + 0x4000);
    } while (temp_t6 != 4);
    return phi_s7;
}

void func_80A2491C(GlobalContext *arg0) {
    Vec3f *temp_a0;
    Vec3f *temp_a1;

    temp_a0 = arg0 + 8;
    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    Math_Vec3f_Copy(temp_a0, temp_a1);
    arg0->unk_278 = 0;
    arg0->unk_276 = (s16) arg0->unk_278;
}

s32 func_80A24954(GlobalContext *arg0, f32 *arg1) {
    s8 sp27;
    f32 temp_f0;

    sp27 = arg0->unk_2B0;
    temp_f0 = arg0->unk_244;
    if ((temp_f0 > -31999.0f) && (((arg0->unk_5C * 600.0f) - 90.0f) < (temp_f0 - arg0->unk_28))) {
        func_80A262BC(arg0, arg1);
        arg0->unk_2B0 = 3;
        goto block_7;
    }
    if ((arg0->view.unkE0.m[1][2] & 4) != 0) {
        if (func_800C99D4(arg1 + 0x830, arg0->state.heap.tail, (s32) arg0->unk_85) == 5) {
            func_80A25FA0(arg0);
            arg0->unk_2B0 = 2;
        } else {
            func_80A25CF4(arg0);
            arg0->unk_2B0 = 1;
        }
block_7:
    }
    return sp27 != arg0->unk_2B0;
}

void func_80A24A48(GlobalContext *arg0, GlobalContext *arg1) {
    s32 temp_a2;

    if (((arg0->view.unkE0.m[1][2] & 0x10) == 0) && ((arg0->unk_16E & 2) == 0)) {
        temp_a2 = arg0->view.projection.m[2][3];
        arg0 = arg0;
        func_800C6314(arg1, arg1 + 0x880, temp_a2);
        arg0->view.unkE0.m[1][2] |= 0x10;
    }
}

void func_80A24AA8(ObjIceblock *arg0, GlobalContext *arg1) {
    DynaPolyActor *temp_v0;
    s32 temp_s1;
    ObjIceblock *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0;
    phi_s1 = 0;
    if ((arg0->unk_1B0 & 4) != 0) {
        do {
            temp_v0 = BgCheck_GetActorOfMesh(arg1 + 0x830, phi_s0->unk_1FC);
            temp_s1 = phi_s1 + 0x10;
            phi_s1 = temp_s1;
            if ((temp_v0 != 0) && (temp_v0->actor.id == 0x143) && (fabsf(arg0->actor.world.pos.y - phi_s0->unk_1F8) < 0.1f)) {
                temp_v0[1].actor.targetArrowOffset = (bitwise f32) ((bitwise s32) temp_v0[1].actor.targetArrowOffset | 2);
            }
            phi_s0 += 0x10;
        } while (temp_s1 != 0x50);
    }
}

void func_80A24B74(GlobalContext *arg0, GlobalContext *arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 *temp_a1;

    if ((arg0->state.main & 0x40) != 0) {
        temp_a1 = &sp20;
        sp20 = arg0->unk_24;
        sp24 = arg0->unk_244;
        sp28 = arg0->unk_2C;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x1E0, 0x370, (s16) 0);
    }
}

void func_80A24BDC(GlobalContext *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, s32 arg4) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *temp_s4;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_lo;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    phi_s1 = 0;
    if ((arg0->state.main & 0x40) != 0) {
        sp8C = arg0->unk_244;
        phi_s0 = 0;
        if (arg4 > 0) {
            temp_lo = 0x10000 / arg4;
            temp_s4 = &sp88;
            temp_f22 = (f32) (s16) temp_lo;
            do {
                temp_f20 = ((Rand_ZeroOne() * 5.0f) + 40.0f) * arg2;
                sp88 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * temp_f22) + phi_s0)) * temp_f20) + arg0->unk_24;
                sp90 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * temp_f22) + phi_s0)) * temp_f20) + arg0->unk_2C;
                EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s4, NULL, NULL, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 60.0f) + 320.0f) * arg3));
                temp_s1 = phi_s1 + 1;
                phi_s0 = (s16) (phi_s0 + (s16) temp_lo);
                phi_s1 = temp_s1;
            } while (temp_s1 != arg4);
        }
    }
}

void func_80A24DC4(void *arg0) {
    arg0->unk_2A2 = 0;
}

void func_80A24DD0(GlobalContext *arg0, GlobalContext *arg1) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp8A;
    f32 *temp_a1;
    f32 *temp_s2;
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s1;
    s16 phi_v1;
    f32 phi_f22;
    s32 phi_s1;

    temp_v1 = arg0->unk_150;
    phi_v1 = temp_v1;
    phi_s1 = 0;
    if (arg0->view.projection.m[3][0] < 0.0f) {
        phi_v1 = (s16) (temp_v1 - 0x8000);
    }
    arg0->unk_2A2 = (s16) (arg0->unk_2A2 + 1);
    if ((arg0->state.main & 0x40) != 0) {
        temp_v0 = arg0->unk_2A2;
        if ((s32) temp_v0 >= 0x2E) {
            phi_f22 = 1.0f;
        } else {
            phi_f22 = ((f32) temp_v0 * 0.017777778f) + 0.2f;
        }
        sp8A = phi_v1;
        temp_s2 = &spA8;
        spA0 = 12.0f;
        do {
            if (!(phi_f22 < (Rand_ZeroOne() * 1.2f))) {
                arg0->mainCamera.skyboxOffset.y += Rand_ZeroOne();
                temp_f2 = arg0->mainCamera.skyboxOffset.y;
                if (temp_f2 > 1.0f) {
                    arg0->mainCamera.skyboxOffset.y = temp_f2 - 1.0f;
                }
                temp_a1 = &sp9C;
                sp9C = (arg0->mainCamera.skyboxOffset.y - 0.5f) * 600.0f * arg0->unk_58;
                spA4 = (arg0->unk_60 * -300.0f) + 4.0f;
                func_80A2311C(temp_s2, temp_a1, sp8A);
                spA8 += arg0->unk_24;
                spAC += arg0->unk_28;
                spB0 += arg0->unk_2C;
                temp_f20 = ((Rand_ZeroOne() * 800.0f) + (1600.0f * arg0->unk_58)) * phi_f22;
                func_800B0E48(arg1, (Vec3f *) temp_s2, &D_801D15B0, &D_80A26F90, &D_80A26F9C, &D_80A26FA0, (s16) (s32) temp_f20, (s16) (s32) ((Rand_ZeroOne() * 20.0f) + 30.0f));
            }
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 2);
    }
}

void func_80A2508C(Actor *arg0, GlobalContext *arg1) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f8;
    s32 temp_v0;

    if ((arg0->flags & 0x40) != 0) {
        temp_v0 = (s32) (arg0->scale.y * 130.0f) - 3;
        if (temp_v0 > 0) {
            arg0->unk_2AC = (s16) (arg0->unk_2AC + temp_v0);
        }
        if ((s32) arg0->unk_2AC >= 0xA) {
            arg0->unk_2AC = 0;
            temp_f16 = Rand_ZeroOne() * 600.0f;
            sp38 = 600.0f;
            sp34 = temp_f16 - 300.0f;
            temp_f16_2 = (Rand_ZeroOne() * 600.0f) - 300.0f;
            sp3C = temp_f16_2;
            temp_f0 = sqrtf(arg0->scale.y + 0.01f);
            sp44 = 2.0f;
            sp40 = sp34 * 0.006935f * temp_f0;
            sp48 = temp_f16_2 * 0.006935f * temp_f0;
            sp34 = (arg0->scale.x * sp34) + arg0->world.pos.x;
            temp_f8 = (arg0->scale.y * sp38) + arg0->world.pos.y;
            sp38 = temp_f8;
            sp3C = (arg0->scale.z * temp_f16_2) + arg0->world.pos.z;
            if ((arg0[1].uncullZoneScale - 3.0f) < temp_f8) {
                EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp34, (Vec3f *) &sp40, &D_801D15B0, (s16) ((s32) (arg0->scale.y * 1300.0f) + 0x3C));
            }
        }
    }
}

s32 func_80A25238(GlobalContext *arg0) {
    f32 temp_f2;
    s32 temp_v0;
    s32 phi_v0;

    temp_f2 = arg0->view.projection.m[3][0];
    if (fabsf(temp_f2) > 0.1f) {
        if (temp_f2 > 0.0f) {
            phi_v0 = (arg0->unk_150 + 0x2000) << 0x10;
        } else {
            phi_v0 = (arg0->unk_150 - 0x6000) << 0x10;
        }
        temp_v0 = phi_v0 >> 0x10;
        if (temp_v0 < -0x4000) {
            return 3;
        }
        if (temp_v0 < 0) {
            return 1;
        }
        if (temp_v0 < 0x4000) {
            return 2;
        }
        return 0;
    }
    return -1;
}

void func_80A252DC(GlobalContext *arg0, s32 arg1) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a2;
    s16 temp_v0_2;
    s8 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk_2B0;
    if (temp_v0 == 1) {
        phi_v0 = 1;
    } else if (temp_v0 == 2) {
        phi_v0 = 0;
        if (arg0->view.projection.m[3][0] > 0.0f) {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if ((arg1 == 0) && (phi_v0 != 0)) {
        arg0->unk_26E = (s16) (arg0->unk_26E + 1);
    } else {
        temp_a2 = arg0->unk_26E;
        if ((s32) temp_a2 > 0) {
            arg0->unk_26E = (s16) (temp_a2 - 1);
        }
    }
    if ((arg1 == 1) && (phi_v0 != 0)) {
        arg0->unk_270 = (s16) (arg0->unk_270 + 1);
    } else {
        temp_a0 = arg0->unk_270;
        if ((s32) temp_a0 > 0) {
            arg0->unk_270 = (s16) (temp_a0 - 1);
        }
    }
    if ((arg1 == 2) && (phi_v0 != 0)) {
        arg0->unk_272 = (s16) (arg0->unk_272 + 1);
    } else {
        temp_a0_2 = arg0->unk_272;
        if ((s32) temp_a0_2 > 0) {
            arg0->unk_272 = (s16) (temp_a0_2 - 1);
        }
    }
    if ((arg1 == 3) && (phi_v0 != 0)) {
        arg0->unk_274 = (s16) (arg0->unk_274 + 1);
        return;
    }
    temp_v0_2 = arg0->unk_274;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk_274 = (s16) (temp_v0_2 - 1);
    }
}

void func_80A25404(GlobalContext *arg0) {
    arg0->unk_270 = 0;
    arg0->unk_272 = 0;
    arg0->unk_274 = 0;
    arg0->unk_26E = 0;
}

void func_80A2541C(GlobalContext *arg0, f32 *arg1) {
    void *temp_v0;

    temp_v0 = arg1[1843];
    temp_v0->unk_A70 = (s32) (temp_v0->unk_A70 & ~0x10);
    arg0->view.projection.m[3][0] = 0;
}

void func_80A25440(ObjIceblock *arg0) {
    ? sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    ? sp28;
    f32 sp24;
    f32 *temp_a0;
    f32 *temp_a0_2;
    s32 temp_s1;

    temp_s1 = arg0->actor.parent;
    if (temp_s1 != 0) {
        if (arg0->unk_2B0 == 3) {
            sp24 = arg0->actor.shape.yOffset * arg0->actor.scale.y;
            Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
            SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
            SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
            temp_a0 = &sp34;
            sp34 = arg0->unk_248.x;
            sp38 = arg0->unk_248.y - sp24;
            sp3C = arg0->unk_248.z;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp28);
            temp_a0_2 = &sp34;
            sp34 = arg0->actor.world.pos.x;
            sp38 = arg0->actor.world.pos.y + sp24;
            sp3C = arg0->actor.world.pos.z;
            Math_Vec3f_Sum((Vec3f *) temp_a0_2, (Vec3f *) &sp28, temp_s1 + 0x24);
            Matrix_RotateY((s16) (arg0->unk_256 + arg0->actor.home.rot.y), 1U);
            SysMatrix_InsertXRotation_s((s16) (arg0->unk_254 + arg0->actor.home.rot.x), 1);
            SysMatrix_InsertZRotation_s((s16) (arg0->unk_258 + arg0->actor.home.rot.z), 1);
            SysMatrix_CopyCurrentState((MtxF *) &sp40);
            func_8018219C((MtxF *) &sp40, temp_s1 + 0xBC, 1);
            return;
        }
        Math_Vec3f_Sum(arg0 + 0x24, arg0 + 0x248, temp_s1 + 0x24);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void ObjIceblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp2C;
    ColliderCylinder *sp24;
    Actor *temp_v0_2;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    s32 temp_v1;
    ObjIceblock *this = (ObjIceblock *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80A26FA4);
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.x = 0;
    this->actor.world.rot.z = 0;
    this->actor.home.rot.x = 0;
    this->actor.home.rot.z = 0;
    if ((((s32) this->actor.params >> 1) & 1) == 0) {
        this->actor.shape.rot.y = (this->actor.shape.rot.y + 0x2000) & 0xC000;
        temp_v0 = this->actor.shape.rot.y;
        this->actor.home.rot.y = temp_v0;
        this->actor.world.rot.y = temp_v0;
    }
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000438);
    func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
    temp_a1 = &this->unk_15C;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80A26E50);
    if ((this->actor.params & 1) != 0) {
        this->unk_15C.dim.yShift = -0x64;
        this->unk_15C.dim.height = 0x7E;
        this->unk_15C.dim.radius = 0x1D;
    }
    if (D_80A26E7C == 0) {
        D_80A26E7C = Lib_SegmentedToVirtual(&D_06000328);
    }
    temp_v1 = this->unk_1B0;
    if ((temp_v1 & 8) == 0) {
        temp_v0_2 = this->actor.parent;
        if (temp_v0_2 != 0) {
            this->unk_1B0 = temp_v1 | 8;
            sp2C = temp_v0_2;
            Math_Vec3f_Diff((Vec3f *) &temp_v0_2->world, (Vec3f *) &this->actor.world, &this->unk_248);
            this->unk_254 = temp_v0_2->shape.rot.x - this->actor.home.rot.x;
            this->unk_256 = temp_v0_2->shape.rot.y - this->actor.home.rot.y;
            this->unk_258 = temp_v0_2->shape.rot.z - this->actor.home.rot.z;
        }
    }
    if ((this->actor.params & 1) != 0) {
        this->unk_2B4 = -1.0f;
    }
    this->unk_2B0 = 0;
    this->unk_1AC = func_80A26B64;
    func_80A257A0(this);
    this->unk_2AE = 0x1C2;
}

void ObjIceblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    ObjIceblock *this = (ObjIceblock *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_15C);
}

void func_80A257A0(ObjIceblock *arg0) {
    arg0->actionFunc = func_80A257B4;
}

void func_80A257B4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = arg0->cutscene;
    arg0 = arg0;
    temp_a1 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->cutscene;
        arg0 = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, temp_a1);
        arg0[1].velocity.y = (bitwise f32) func_80A26BF8;
        arg0->unk_2B1 = 0x50;
        func_80A25824(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->cutscene);
}

void func_80A25824(Actor *arg0) {
    arg0[1].velocity.x = func_80A2586C;
    arg0[2].home.rot.z = 2;
    Actor_SetScale(arg0, 0.01f);
    func_80A2319C(arg0, arg0->scale.x);
}

void func_80A2586C(Actor *arg0, s32 arg1) {
    s16 temp_v1;

    func_80A236D4(arg0, arg0 + 8);
    temp_v1 = arg0[2].home.rot.z;
    if ((s32) temp_v1 > 0) {
        arg0[2].home.rot.z = temp_v1 - 1;
        return;
    }
    if (Math_StepToF(arg0 + 0x58, 0.1f, 0.02f) != 0) {
        Actor_SetScale(arg0, 0.1f);
        if ((arg0->params & 1) != 0) {
            arg0[2].world.pos.z = 0.05f;
        }
        func_80A25978(arg0);
    } else {
        Actor_SetScale(arg0, arg0->scale.x);
        arg0[2].home.rot.z = 2;
    }
    func_80A2319C(arg0, arg0->scale.x);
    if ((arg0->flags & 0x40) != 0) {
        func_80A2339C(arg1, &arg0->world, (arg0->scale.x + 0.05f) * 0.6666666f, 1.0f, 3);
    }
}

void func_80A25978(Actor *arg0) {
    arg0[1].velocity.x = func_80A25994;
    arg0[2].home.rot.z = 4;
}

void func_80A25994(Actor *arg0, s32 arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 temp_v0;

    func_80A236D4(arg0, arg0 + 8);
    temp_v0 = arg0[2].home.rot.z;
    if ((s32) temp_v0 > 0) {
        arg0[2].home.rot.z = temp_v0 - 1;
        return;
    }
    if ((arg0->flags & 0x40) != 0) {
        func_80A2339C(arg1, &arg0->world, arg0->scale.x, 1.2f, 0xF);
        if ((arg0->params & 1) != 0) {
            sp30 = arg0->world.pos.x;
            sp34 = arg0->world.pos.y - 30.0f;
            sp38 = arg0->world.pos.z;
            func_80A2339C(arg1, (PosRot *) &sp30, arg0->scale.x, 1.2f, 0xA);
        }
    }
    if ((arg0->params & 1) != 0) {
        arg0[2].world.pos.z = 0.1f;
    }
    func_80A25A8C(arg0);
    arg0[1].velocity.y = (bitwise f32) func_80A26B74;
}

void func_80A25A8C(Actor *arg0) {
    arg0[1].velocity.x = func_80A25AA8;
    arg0[2].home.rot.z = 2;
}

void func_80A25AA8(Actor *arg0, GlobalContext *arg1) {
    f32 sp24;
    s16 temp_v1;

    temp_v1 = arg0[2].home.rot.z;
    if ((s32) temp_v1 > 0) {
        arg0[2].home.rot.z = temp_v1 - 1;
        return;
    }
    if (func_80A236D4(arg0, arg0 + 8) != 0) {
        sp24 = arg0->scale.y * 300.0f;
        func_80A23D08((GlobalContext *) arg0, arg1);
        if (sp24 < (arg0->world.pos.y - arg0->floorHeight)) {
            func_80A25BA0(arg0);
        } else {
            func_80A25C5C(arg0);
        }
        arg0->shape.yOffset = 300.0f;
        arg0->world.pos.y -= sp24;
        arg0[1].prevPos.x += sp24;
        if ((arg0->params & 1) != 0) {
            arg0->unk_1A0 = -0x45;
        } else {
            arg0->unk_1A0 = 0;
        }
        arg0[1].velocity.z = (bitwise f32) ((bitwise s32) arg0[1].velocity.z | 0x100);
    }
}

void func_80A25BA0(Actor *arg0) {
    arg0[1].velocity.x = func_80A25BBC;
    arg0->velocity.y = 0.0f;
}

void func_80A25BBC(GlobalContext *arg0, f32 *arg1) {
    if (func_80A25238(arg0) != -1) {
        func_80A2541C(arg0, arg1);
    }
    func_80A23690(arg0);
    if (func_80A23F90(arg0, arg1) != 0) {
        Audio_PlayActorSound2((Actor *) arg0, 0x2835U);
    }
    if (func_80A24954(arg0, arg1) != 0) {
        func_80A2491C(arg0);
        if (arg0->unk_2B0 == 3) {
            Audio_PlayActorSound2((Actor *) arg0, 0x28C5U);
        }
    }
}

void func_80A25C5C(Actor *arg0) {
    arg0[1].velocity.x = func_80A25C70;
}

void func_80A25C70(GlobalContext *arg0, f32 *arg1) {
    if (func_80A25238(arg0) != -1) {
        func_80A2541C(arg0, arg1);
    }
    if (Math_StepToF((f32 *) &arg0->state.input[0].rel.stick_x, (bitwise f32) arg0->state.alloc.base.prev - 0.1f, 14.0f) != 0) {
        func_80A23F90(arg0, arg1);
        func_80A24954(arg0, arg1);
    }
}

void func_80A25CF4(GlobalContext *arg0) {
    func_80A25404(arg0);
    arg0->view.unkE0.m[1][0] = func_80A25D28;
}

void func_80A25D28(GlobalContext *arg0, f32 *arg1) {
    s32 sp34;
    s32 sp30;
    ? sp24;
    s32 temp_v0;
    f32 phi_f0;
    s32 phi_v1;

    func_80A23690(arg0);
    func_80A23F90(arg0, arg1);
    temp_v0 = func_80A25238(arg0);
    sp30 = temp_v0;
    func_80A252DC(arg0, temp_v0);
    phi_v1 = 1;
    if (temp_v0 == -1) {
        goto block_9;
    }
    if (((arg0->view.unkE0.m[1][2] & 2) == 0) && ((s32) (arg0 + (temp_v0 * 2))->unk_26E >= 0xB)) {
        if ((bitwise f32) arg0->view.projection.m[3][0] > 0.0f) {
            phi_f0 = 59.9f;
        } else {
            phi_f0 = 89.9f;
        }
        sp34 = 1;
        if (func_80A24118((f32 *) arg0, arg1, phi_f0, (Vec3f *) &sp24) == 0) {
            func_80A232C4(arg0, (s16) sp30);
            func_80A25E3C(arg0);
block_9:
            phi_v1 = 0;
        }
    }
    if (phi_v1 != 0) {
        func_80A2541C(arg0, arg1);
    }
    func_80A24A48(arg0, (GlobalContext *) arg1);
}

void func_80A25E3C(GlobalContext *arg0) {
    arg0->view.unkE0.m[1][0] = func_80A25E50;
}

void func_80A25E50(GlobalContext *arg0, f32 *arg1) {
    s32 sp38;
    ? sp28;
    f32 temp_f2;
    f32 phi_f0;

    temp_f2 = (Math_SinS((s16) (s32) (fabsf(arg0->unk_268 - *arg0->unk_264) * 546.13336f)) * 2.8f) + 1.2f;
    if (temp_f2 > 3.5f) {
        phi_f0 = 3.5f;
    } else {
        phi_f0 = temp_f2;
    }
    sp38 = Math_StepToF(arg0->unk_264, arg0->unk_268, phi_f0);
    func_80A23690(arg0);
    if (func_80A23F90(arg0, arg1) == 0) {
        func_80A24680(arg0, arg1);
        func_80A23B88(arg0);
        func_80A2541C(arg0, arg1);
        func_80A25BA0((Actor *) arg0);
        return;
    }
    if (sp38 != 0) {
        if (func_80A24118((f32 *) arg0, arg1, 59.9f, (Vec3f *) &sp28) != 0) {
            Audio_PlayActorSound2((Actor *) arg0, 0x2835U);
        }
        func_80A2541C(arg0, arg1);
        func_80A25CF4(arg0);
        return;
    }
    func_800B9010((Actor *) arg0, 0xDFU);
}

void func_80A25FA0(GlobalContext *arg0) {
    func_80A25404(arg0);
    arg0->view.unkE0.m[1][0] = (s32) func_80A25FD4;
}

void func_80A25FD4(GlobalContext *arg0, f32 *arg1) {
    s32 sp30;
    s32 sp2C;
    ? sp20;
    s32 temp_v0;

    func_80A23690(arg0);
    func_80A23F90(arg0, arg1);
    temp_v0 = func_80A25238(arg0);
    sp2C = temp_v0;
    func_80A252DC(arg0, temp_v0);
    sp30 = 1;
    if (temp_v0 == -1) {
        sp30 = 0;
    } else if (((arg0->view.unkE0.m[1][2] & 2) == 0) && ((s32) (arg0 + (temp_v0 * 2))->unk_26E >= 0xB) && (func_80A24118((f32 *) arg0, arg1, 2.0f, (Vec3f *) &sp20) == 0) && (func_801233E4((GlobalContext *) arg1) == 0)) {
        func_80A23370(arg0, (s16) sp2C);
        func_80A260E8(arg0);
        sp30 = 0;
        func_800B7298((GlobalContext *) arg1, (Actor *) arg0, 7U);
        arg0->view.unkE0.m[1][2] |= 1;
    }
    if (sp30 != 0) {
        func_80A2541C(arg0, arg1);
    }
    func_80A24A48(arg0, (GlobalContext *) arg1);
}

void func_80A260E8(GlobalContext *arg0) {
    arg0->unk_25C = 0.0f;
    arg0->unk_68 = 0.0f;
    arg0->unk_2A0 = 0xF;
    arg0->unk_260 = (f32) *(&D_80A26FC0 + (arg0->unk_26C * 4));
    func_80A24DC4();
    arg0->view.unkE0.m[1][0] = func_80A26144;
}

void func_80A26144(GlobalContext *arg0, f32 *arg1) {
    s32 sp28;
    s32 sp24;
    f32 *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = arg0->unk_2A0;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2A0 = (s16) (temp_v0 - 1);
    }
    Math_StepToF(arg0 + 0x25C, arg0->unk_260, 0.75f);
    temp_v1 = arg0->unk_264;
    *temp_v1 += arg0->unk_25C;
    sp28 = func_80A24384(arg0, arg1);
    func_80A23690(arg0);
    temp_v0_2 = func_80A23F90(arg0, arg1);
    temp_a3 = temp_v0_2 == 0;
    if ((temp_a3 != 0) || (sp28 != 0) || (arg0->unk_2A0 == 1)) {
        sp24 = temp_a3;
        func_80A2541C(arg0, arg1);
    }
    temp_v0_3 = arg0->view.unkE0.m[1][2];
    if (((temp_v0_3 & 1) != 0) && (((temp_v0_2 == 0) != 0) || (sp28 != 0) || (arg0->state.unk_98 > 400.0f))) {
        arg0->view.unkE0.m[1][2] = temp_v0_3 & ~1;
        sp24 = temp_v0_2 == 0;
        func_800B7298((GlobalContext *) arg1, (Actor *) arg0, 6U);
    }
    if ((temp_v0_2 == 0) != 0) {
        func_80A24680(arg0, arg1);
        func_80A23B88(arg0);
        func_80A25BA0((Actor *) arg0);
    } else if (sp28 != 0) {
        Audio_PlayActorSound2((Actor *) arg0, 0x2835U);
        func_80A23B88(arg0);
        func_80A25FA0(arg0);
    } else {
        func_800B9010((Actor *) arg0, 0xDFU);
    }
    func_80A24DD0(arg0, (GlobalContext *) arg1);
}

void func_80A262BC(GlobalContext *arg0) {
    arg0->view.unkE0.m[1][0] = func_80A262EC;
    arg0->unk_2A0 = -1;
    arg0->unk_68 = (f32) (arg0->unk_68 * 0.7f);
}

void func_80A262EC(GlobalContext *arg0, f32 *arg1) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;

    if (func_80A25238(arg0) != -1) {
        func_80A2541C(arg0, arg1);
    }
    temp_v0 = arg0->unk_2A0;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2A0 = (s16) (temp_v0 - 1);
    }
    if (arg0->unk_2A0 == -1) {
        if ((arg0->unk_68 < 0.0f) && (temp_f0 = arg0->unk_28, temp_f2 = arg0->unk_244, (temp_f0 < temp_f2)) && ((temp_f2 - (600.0f * arg0->unk_5C)) <= temp_f0)) {
            func_80A24BDC(arg0, (GlobalContext *) arg1, 1.0f, 0.9f, 0xB);
            func_80A24B74(arg0, (GlobalContext *) arg1);
            arg0->unk_2A0 = 3;
        } else {
            arg0->unk_2A0 = 0;
        }
    } else if (arg0->unk_2A0 == 1) {
        func_80A24BDC(arg0, (GlobalContext *) arg1, 0.7f, 1.3f, 6);
        func_80A24B74(arg0, (GlobalContext *) arg1);
    }
    arg0->unk_68 = (f32) (arg0->unk_68 + 5.0f);
    if (arg0->unk_68 > 3.0f) {
        arg0->unk_68 = 3.0f;
    }
    temp_f2_2 = arg0->unk_244;
    arg0->unk_28 = (f32) (arg0->unk_28 + arg0->unk_68);
    temp_f14 = arg0->unk_28 + (600.0f * arg0->unk_5C);
    if (temp_f2_2 < (temp_f14 - 90.0f)) {
        func_80A24B74(arg0, (GlobalContext *) arg1);
        func_80A26574(arg0);
        return;
    }
    if ((arg0->unk_68 > 0.0f) && (temp_f14 < (temp_f2_2 + 3.0f)) && (temp_f2_2 <= temp_f14)) {
        func_80A24BDC(arg0, (GlobalContext *) arg1, 0.8f, 1.0f, 0xB);
        func_80A24B74(arg0, (GlobalContext *) arg1);
    }
    sp38 = arg0->unk_24;
    sp3C = (arg0->unk_244 - (600.0f * arg0->unk_5C)) + 90.0f;
    sp40 = arg0->unk_2C;
    if (func_80A246D8((f32 *) arg0, arg1, &sp38) != 0) {
        arg0->view.unkE0.m[1][2] |= 0x80;
    }
}

void func_80A26574(GlobalContext *arg0) {
    arg0->view.unkE0.m[1][0] = func_80A265C0;
    arg0->unk_28C = 0;
    arg0->unk_28E = 0;
    arg0->unk_288 = 0x83F;
    arg0->unk_28A = 0xBB8;
    arg0->unk_294 = 0x1F4;
    arg0->unk_29E = 0x1F4;
    arg0->unk_2A0 = 0x28;
    arg0->mainCamera.eye.z = 7.0f;
}

void func_80A265C0(GlobalContext *arg0, f32 *arg1) {
    Vec3f *sp24;
    Vec3f *temp_v1;
    s16 temp_v0;

    if (func_80A25238(arg0) != -1) {
        func_80A2541C(arg0, arg1);
    }
    temp_v0 = arg0->unk_2A0;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2A0 = (s16) (temp_v0 - 1);
    } else {
        arg0->unk_2A0 = Rand_S16Offset(0x1E, 0x3C);
        temp_v1 = &arg0->mainCamera.eye;
        temp_v1->unk_C = Rand_S16Offset(0x12C, 0x12C);
        sp24 = temp_v1;
        sp24->unk_E = Rand_S16Offset(0x384, 0x258);
        sp24->y = (2.0f * Rand_ZeroOne()) + 1.0f;
        sp24->unk_14 = (s16) (Rand_Next() >> 0x10);
        func_80A24B74(arg0, (GlobalContext *) arg1);
    }
    func_80A237A4(arg0);
    func_80A23938(arg0);
    if ((arg0->view.unkE0.m[1][2] & 0x40) != 0) {
        func_80A24B74(arg0, (GlobalContext *) arg1);
    }
    func_80A24A48(arg0, (GlobalContext *) arg1);
}

void func_80A266C4(ObjIceblock *arg0) {
    arg0->actionFunc = func_80A266E0;
    arg0->unk_2A8 = 0.0f;
}

void func_80A266E0(Actor *arg0, GlobalContext *arg1) {
    s32 sp20;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_cond;

    Math_StepToF(arg0 + 0x2A8, 0.0016666667f, 0.00016666666f);
    sp20 = Math_StepToF(arg0 + 0x5C, 0.0f, arg0->unk_2A8);
    temp_f2 = arg0->scale.y;
    arg0->shape.yOffset = temp_f2 * 10.0f * 300.0f;
    if (temp_f2 < 0.075f) {
        temp_f2_2 = Math_SinS((s16) (s32) (temp_f2 * 218453.33f)) * 0.1f;
        temp_cond = temp_f2_2 < 0.0f;
        arg0->scale.x = temp_f2_2;
        if (temp_cond) {
            arg0->scale.x = 0.0f;
        }
        arg0->scale.z = arg0->scale.x;
    }
    if ((arg0->params & 1) != 0) {
        arg0[2].world.pos.z = arg0->scale.y;
        arg0->unk_19E = (s16) ((s32) (arg0->scale.y * 1230.0f) + 1);
        arg0->unk_1A0 = (s16) (s32) (arg0->scale.y * -1000.0f);
        arg0->unk_19C = (s16) (s32) (arg0->scale.x * 290.0f);
    }
    func_80A2508C(arg0, arg1);
    if (sp20 != 0) {
        Actor_MarkForDeath(arg0);
    }
}

void ObjIceblock_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp2C;
    ColliderCylinder *sp24;
    Actor *temp_v0;
    ColliderCylinder *temp_a1;
    s16 temp_v0_3;
    s32 temp_t0;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v1;
    s32 temp_v1_2;
    s8 temp_v0_2;
    s8 temp_v0_4;
    u8 temp_t9;
    Actor *phi_v0;
    ObjIceblock *this = (ObjIceblock *) thisx;

    temp_v0 = this->actor.parent;
    phi_v0 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0->update == 0) || (this != temp_v0->child))) {
        this->actor.parent = NULL;
        phi_v0 = NULL;
    }
    sp2C = phi_v0;
    if (func_800CAF70((DynaPolyActor *) this) != 0) {
        temp_v1 = this->unk_1B0;
        temp_t0 = temp_v1 | 0x40;
        if ((temp_v1 & 0x20) != 0) {
            this->unk_1B0 = temp_v1 & ~0x40;
        } else {
            this->unk_1B0 = temp_t0;
            this->unk_1B0 = temp_t0 | 0x20;
        }
    } else {
        temp_v1_2 = this->unk_1B0;
        if ((temp_v1_2 & 0x20) != 0) {
            temp_t4 = temp_v1_2 | 0x40;
            this->unk_1B0 = temp_t4;
            this->unk_1B0 = temp_t4 & ~0x20;
        } else {
            this->unk_1B0 = temp_v1_2 & ~0x40;
        }
    }
    temp_v0_2 = this->unk_2B0;
    if ((temp_v0_2 == 1) || (temp_v0_2 == 2) || (temp_v0_2 == 3)) {
        temp_v0_3 = this->unk_2AE;
        if ((s32) temp_v0_3 > 0) {
            this->unk_2AE = temp_v0_3 - 1;
        }
    }
    if ((((this->unk_15C.base.acFlags & 2) != 0) && ((this->unk_15C.info.acHitInfo->toucher.dmgFlags & 0x800) != 0)) || (this->unk_2AE == 0)) {
        temp_t8 = this->unk_1B0 & ~0x100;
        this->unk_2AE = -1;
        this->unk_2B0 = 4;
        this->unk_1B0 = temp_t8;
        if ((temp_t8 & 1) != 0) {
            this->unk_1B0 = temp_t8 & ~1;
            func_800B7298(globalCtx, (Actor *) this, 6U);
        }
        func_80A266C4(this);
    }
    temp_v0_4 = this->unk_2B1;
    if ((s32) temp_v0_4 > 0) {
        this->unk_2B1 = temp_v0_4 - 1;
        if (this->unk_2B1 == 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
        }
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update == 0) {
        if (sp2C != 0) {
            sp2C->child = NULL;
            sp2C->shape.rot.x = this->unk_254 + this->actor.home.rot.x;
            sp2C->shape.rot.y = this->unk_256 + this->actor.home.rot.y;
            sp2C->shape.rot.z = this->unk_258 + this->actor.home.rot.z;
            this->actor.parent = NULL;
            return;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return;
    }
    temp_a1 = &this->unk_15C;
    this->unk_15C.base.ocFlags1 &= 0xFFFD;
    this->unk_15C.base.acFlags &= 0xFFFD;
    sp24 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    if ((this->unk_1B0 & 0x10) != 0) {
        if (((this->actor.params & 1) != 0) && (this->unk_2B4 > 0.0f)) {
            temp_t9 = this->unk_15C.base.ocFlags1 & 0xFFFB;
            this->unk_15C.base.ocFlags1 = temp_t9;
            this->unk_15C.base.ocFlags1 = temp_t9 | 0x38;
            this->unk_15C.info.bumper.dmgFlags |= 0xC13BB2;
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp24);
            goto block_33;
        }
    } else {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp24);
block_33:
    }
    if ((this->unk_1B0 & 0x100) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp24);
    }
    func_80A25440(this);
    Actor_SetHeight((Actor *) this, this->actor.shape.yOffset * this->actor.scale.y);
    this->unk_1B0 &= -3;
}

void func_80A26B64(ObjIceblock *arg0, GlobalContext *arg1) {

}

void func_80A26B74(void *arg0, GlobalContext *arg1) {
    func_800BE03C(arg1, &D_060001A0);
    if (((arg0->unk_1C & 1) != 0) && (arg0->unk_2B4 > 0.0f)) {
        AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_060009D0));
        func_800BE03C(arg1, &D_060007F0);
    }
}

void func_80A26BF8(void *arg0, GlobalContext *arg1) {
    s16 sp74;
    s16 sp72;
    s16 sp70;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s5;
    f32 temp_f12;
    s16 *temp_a3;
    s32 temp_s3;
    void *phi_s2;
    void *phi_s0;
    s32 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s5 = temp_a0;
    func_8012C2DC(temp_a0);
    sp74 = 0;
    phi_s2 = arg0;
    phi_s0 = arg0 + 0x1B4;
    phi_s3 = 0;
    do {
        temp_a3 = &sp70;
        sp70 = phi_s2->unk_1B4;
        sp72 = phi_s2->unk_1B6;
        SysMatrix_SetStateRotationAndTranslation(arg0->unk_24, arg0->unk_28, arg0->unk_2C, (Vec3s *) temp_a3);
        Matrix_Scale(phi_s0->unk_4, phi_s0->unk_8, phi_s0->unk_C, 1);
        temp_v0 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_2 = temp_s5->polyXlu.p;
        temp_s3 = phi_s3 + 0x10;
        temp_s5->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) &D_060001A0;
        temp_v0_2->words.w0 = 0xDE000000;
        phi_s2 += 0x10;
        phi_s0 += 0x10;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x40);
    if (((arg0->unk_1C & 1) != 0) && (arg0->unk_2B4 > 0.0f)) {
        AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_060009D0));
        SysMatrix_SetStateRotationAndTranslation(arg0->unk_24, arg0->unk_28 - 20.0f, arg0->unk_2C, arg0 + 0xBC);
        temp_f12 = arg0->unk_2B4;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0_3 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_3->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_4 = temp_s5->polyXlu.p;
        temp_s5->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) &D_060007F0;
    }
}

void ObjIceblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjIceblock *this = (ObjIceblock *) thisx;
    AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80A26E7C);
    this->unk_1AC(this, globalCtx);
    func_80A24AA8(this, globalCtx);
}
