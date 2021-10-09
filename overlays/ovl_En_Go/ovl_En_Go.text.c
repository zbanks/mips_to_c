typedef struct EnGo {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnGo *, GlobalContext *);
    /* 0x18C */ void (*unk_18C)(EnGo *, GlobalContext *); /* inferred */
    /* 0x190 */ char pad_190[0x4];
    /* 0x194 */ ColliderCylinder unk_194;           /* inferred */
    /* 0x1E0 */ char pad_1E0[0x4C];
    /* 0x22C */ ColliderSphere unk_22C;             /* inferred */
    /* 0x284 */ u8 *unk_284;                        /* inferred */
    /* 0x288 */ s8 unk_288;                         /* inferred */
    /* 0x289 */ s8 unk_289;                         /* inferred */
    /* 0x28A */ char pad_28A[0x2];                  /* maybe part of unk_289[3]? */
    /* 0x28C */ s32 unk_28C;                        /* inferred */
    /* 0x290 */ char pad_290[0x24];                 /* maybe part of unk_28C[10]? */
    /* 0x2B4 */ Vec3s unk_2B4;                      /* inferred */
    /* 0x2BA */ char pad_2BA[0x66];                 /* maybe part of unk_2B4[18]? */
    /* 0x320 */ Vec3s unk_320;                      /* inferred */
    /* 0x326 */ char pad_326[0x66];                 /* maybe part of unk_320[18]? */
    /* 0x38C */ s32 unk_38C;                        /* inferred */
    /* 0x390 */ u16 unk_390;                        /* inferred */
    /* 0x392 */ char pad_392[0x2];
    /* 0x394 */ u8 unk_394;                         /* inferred */
    /* 0x395 */ char pad_395[0x7];                  /* maybe part of unk_394[8]? */
    /* 0x39C */ f32 unk_39C;                        /* inferred */
    /* 0x3A0 */ f32 unk_3A0;                        /* inferred */
    /* 0x3A4 */ f32 unk_3A4;                        /* inferred */
    /* 0x3A8 */ char pad_3A8[0x6];                  /* maybe part of unk_3A4[2]? */
    /* 0x3AE */ s16 unk_3AE;                        /* inferred */
    /* 0x3B0 */ char pad_3B0[0xC];                  /* maybe part of unk_3AE[7]? */
    /* 0x3BC */ s16 unk_3BC;                        /* inferred */
    /* 0x3BE */ s16 unk_3BE;                        /* inferred */
    /* 0x3C0 */ char pad_3C0[0x8];                  /* maybe part of unk_3BE[5]? */
    /* 0x3C8 */ s16 unk_3C8;                        /* inferred */
    /* 0x3CA */ char pad_3CA[0x4];                  /* maybe part of unk_3C8[3]? */
    /* 0x3CE */ s16 unk_3CE;                        /* inferred */
    /* 0x3D0 */ char pad_3D0[0x8];                  /* maybe part of unk_3CE[5]? */
    /* 0x3D8 */ void *unk_3D8;                      /* inferred */
    /* 0x3DC */ s32 unk_3DC;                        /* inferred */
    /* 0x3E0 */ char pad_3E0[0x4];
    /* 0x3E4 */ s32 unk_3E4;                        /* inferred */
    /* 0x3E8 */ s32 unk_3E8;                        /* inferred */
    /* 0x3EC */ s32 unk_3EC;                        /* inferred */
    /* 0x3F0 */ char pad_3F0[0x8];                  /* maybe part of unk_3EC[3]? */
    /* 0x3F8 */ ? unk_3F8;                          /* inferred */
    /* 0x3F8 */ char pad_3F8[0x780];
} EnGo;                                             /* size = 0xB78 */

struct _mips2c_stack_EnGo_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGo_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGo_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A10FD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A11144 {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80A1143C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A115B4 {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A118F8 {
    /* 0x00 */ char pad_0[0xA8];
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x8];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80A11BF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A11EC0 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A1203C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1213C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A121F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1222C {};              /* size 0x0 */

struct _mips2c_stack_func_80A122EC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A123A0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Collider *sp24;                      /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A124A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A124FC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A125BC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Collider *sp24;                      /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A12660 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A126BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A12774 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A12868 {};              /* size 0x0 */

struct _mips2c_stack_func_80A12954 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A12A64 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ s8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A12B78 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A12C48 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ s8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A12D6C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A12DF4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A12E80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A12FE8 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A131F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A132C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A133A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A13400 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A134B0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A134F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A13564 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x10];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A136B8 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A13728 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A137C0 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A139E4 {
    /* 0x00 */ char pad_0[0x46];
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x8];
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A13B1C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A13E80 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A14018 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A14104 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A141D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1428C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A14324 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A143A8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A14430 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1449C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A144F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A145AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A14668 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A146CC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A14798 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A149B0 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A14B30 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A14E14 {};              /* size 0x0 */

struct _mips2c_stack_func_80A14E74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A14EB0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A14FC8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x2];
    /* 0x36 */ u16 sp36;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x20];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A153FC {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0xC];
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A15684 {};              /* size 0x0 */

struct _mips2c_stack_func_80A157C4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A15B80 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A15D04 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0xC];                    /* maybe part of sp20[4]? */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A15E38 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A15FEC {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

? EffectSsBlast_SpawnWhiteShockwave(GlobalContext *, void *, Vec3f *, Vec3f *); /* extern */
? func_800AEF44(void *);                            /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
s32 func_8013BD40(EnGo *, u8 *, s32);               /* extern */
s32 func_8013BEDC(GlobalContext *, s32, ?, void *); /* extern */
? func_8013C8B8(s32, ?, ? *);                       /* extern */
u8 *func_80A10FD0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg7, ?32 argA, f32 argB, s32 argC, f32, f32, f32, s32); /* static */
void func_80A11144(void *arg0, GraphicsContext **arg1); /* static */
void func_80A1143C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg7, f32 argA, f32 argB, s32 argC, s32 argD, f32, f32, s32, s32); /* static */
void func_80A115B4(void *arg0, GraphicsContext **arg1); /* static */
void func_80A118F8(? *arg0, s32 arg1, f32 arg2, f32 arg3); /* static */
void func_80A11BF8(void *arg0, f32 arg1);           /* static */
void func_80A11EC0(void *arg0, GraphicsContext **arg1, u32 arg2, u32 arg3, u8 arg4); /* static */
void func_80A1203C(EnGo *arg0);                     /* static */
void func_80A1213C(Actor *arg0, GraphicsContext **arg1); /* static */
s32 func_80A121F4(GlobalContext *arg0);             /* static */
s32 func_80A1222C(EnGo *arg0, GlobalContext *arg1); /* static */
? func_80A122EC(EnGo *arg0);                        /* static */
void func_80A123A0(void *arg0, GlobalContext *arg1); /* static */
void func_80A124A0(void *arg0, GlobalContext *arg1); /* static */
void func_80A124FC(void *arg0, GlobalContext *arg1); /* static */
void func_80A125BC(void *arg0, GlobalContext *arg1); /* static */
void func_80A12660(void *arg0, GlobalContext *arg1); /* static */
void func_80A126BC(EnGo *arg0, GlobalContext *arg1); /* static */
s32 func_80A12774(Actor *arg0, GlobalContext *arg1); /* static */
? func_80A12868(EnGo *arg0, GlobalContext *arg1);   /* static */
? func_80A12954(EnGo *arg0, GlobalContext *arg1);   /* static */
s32 func_80A12A64(EnGo *arg0, GlobalContext *arg1); /* static */
? func_80A12B78(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80A12C48(Actor *arg0, GlobalContext *arg1, s32 arg2, GlobalContext *); /* static */
void func_80A12D6C(EnGo *arg0);                     /* static */
void func_80A12DF4(Actor *arg0, GlobalContext *arg1); /* static */
? func_80A12E80(void *arg0, void *arg1);            /* static */
? func_80A12FE8(EnGo *arg0, GlobalContext *arg1);   /* static */
? func_80A131F8(EnGo *arg0, GlobalContext *arg1);   /* static */
void func_80A132C8(EnGo *arg0, GlobalContext *arg1); /* static */
void func_80A133A8(EnGo *arg0, GlobalContext *arg1); /* static */
Actor *func_80A13400(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A134B0(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
s32 func_80A134F4(Actor *arg0, s16 arg1);           /* static */
s32 func_80A13564(Actor *arg0, f32 arg1, f32 arg2, s32 arg3); /* static */
void func_80A136B8(GlobalContext *arg0, s16 arg1, s16 arg2, s16 arg3); /* static */
void func_80A13728(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A137C0(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3); /* static */
void func_80A139E4(EnGo *arg0);                     /* static */
s32 func_80A13B1C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A13E80(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A14018(Actor *arg0);                    /* static */
void func_80A14104(Actor *arg0);                    /* static */
void func_80A141D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1428C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A14324(Actor *arg0);                    /* static */
void func_80A143A8(Actor *arg0, GlobalContext *, ?); /* static */
void func_80A14430(Actor *arg0, GlobalContext *);   /* static */
void func_80A1449C(Actor *arg0, GlobalContext *);   /* static */
void func_80A144F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A145AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A14668(Actor *arg0, GlobalContext *);   /* static */
void func_80A146CC(Actor *arg0, GlobalContext *arg1); /* static */
s32 *func_80A15684(EnGo *arg0, GlobalContext *arg1); /* static */
void func_80A15B80(Actor *arg0, GraphicsContext **arg1); /* static */
s32 func_80A15D04(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A15E38(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80A15FEC(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_060003D0;
extern ? D_06000458;
extern ? D_060008C0;
extern ? D_06000948;
extern ? D_06000D50;
extern ? D_06000DD8;
extern ? D_06001560;
extern ? D_060031A0;
extern ? D_06003258;
extern ? D_060091A8;
extern FlexSkeletonHeader D_06011AC8;
extern ? D_06014CF0;
extern ? D_06014D00;
static s32 D_80A16208[2] = {0xE0E520C, 0x10000000};
static s32 D_80A16210[17] = {
    0x160400,
    0x38010010,
    0xE0E430C,
    0xF0E440C,
    0xF0E450C,
    0x11188010,
    0x160800,
    0x1B0E0E46,
    0xC0F0E47,
    0xC0F0E48,
    0xC0F0E49,
    0xC0F0E4A,
    0xC111608,
    0x11188010,
    0xE0E4B0C,
    0x100E0E42,
    0xC100000,
};
static s32 D_80A16254[11] = {
    0x160400,
    0x22010009,
    0xE0E4D0C,
    0xF0E4E0C,
    0x10001701,
    0xC0E0E,
    0x4F0C0F0E,
    0x500C1117,
    0x1100E0E,
    0x510C100E,
    0xE4C0C10,
};
static s32 D_80A16280[52] = {
    0x1001200,
    0x12200008,
    0xE0C8E0C,
    0x11122010,
    0xE0C8F0C,
    0x10001240,
    0x1D0E0C,
    0x800C1112,
    0x40001280,
    0x742500,
    0xC006F00,
    0x13010045,
    0xF0C810C,
    0x19001300,
    0x1280005E,
    0x25000C00,
    0x59001301,
    0x2F0E0C,
    0x810C0F0C,
    0x820C0500,
    0x1A00,
    0x1A300E0C,
    0x830C1209,
    0x700,
    0xE0C84,
    0x160C1113,
    0x1100E0C,
    0x840C1031,
    0xE0C850C,
    0x1029FFF2,
    0x130200,
    0xF0E0C88,
    0xC0F0C89,
    0xC05000A,
    0xFFE3FFE3,
    0xE0C860C,
    0x11128019,
    0x213019,
    0xFFC02900,
    0x2C0E0C8C,
    0xC050000,
    0x50000,
    0x8006400,
    0x6320E0C,
    0x8D0C1030,
    0x14FF9C12,
    0x6003400,
    0x130034,
    0x700000E,
    0xC870C16,
    0x100E0C8B,
    0xC100000,
};
static s32 D_80A16350[27] = {
    0x584000,
    0x2903000E,
    0x2001301,
    0x180058,
    0x80005119,
    0x1E0059,
    0x1004919,
    0x160059,
    0x2004119,
    0xE0059,
    0x4003919,
    0x2F0E0D,
    0x4D0C1210,
    0xE0D480C,
    0xF0D490C,
    0xF0D4A0C,
    0x5000000,
    0xF000F30,
    0xE0D4B0C,
    0x15090000,
    0xE0D4D0C,
    0x1210310E,
    0xD4C0C12,
    0x100E0D4E,
    0xC19FFD8,
    0xE0D4F0C,
    0x19FFD500,
};
static s32 D_80A163BC[4] = {0x100060E, 0xDFE0C12, 0x100E0DFF, 0xC121000};
static s32 D_80A163CC[4] = {0x100060E, 0xE000C12, 0x100E0E01, 0xC121000};
static s32 D_80A163DC[4] = {0x100060E, 0xE020C12, 0x100E0E03, 0xC121000};
static s32 D_80A163EC[4] = {0x100060E, 0xE040C12, 0x100E0E05, 0xC121000};
static s32 D_80A163FC[4] = {0x100060E, 0xE060C12, 0x100E0E07, 0xC121000};
static s32 D_80A1640C[2] = {0xE023A0C, 0x12100000};
static ColliderSphereInit D_80A16434 = {
    {0xA, 0x11, 9, 0x39, 0x10, 4},
    {0, {0x20000000, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0}, 0x64},
};
static ColliderCylinderInit D_80A16460 = {
    {9, 0x11, 0x29, 0x39, 0x10, 1},
    {2, {0xF7CFFFFF, 2, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, 0, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_80A1648C = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0, 0, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80A164B8 = {0, 0, 0, 0, 0xFF};
static DamageTable D_80A164C4 = {
    {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        0xF1,
        1,
        0xF1,
        0x21,
        1,
        1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
    },
};
static ActorAnimationEntryS D_80A164E4[22] = {
    {(AnimationHeader *)0x6011D98, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6011D98, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6012DE0, 2.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6012DE0, 2.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6012DE0, -2.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6003E28, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003E28, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60039D8, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6003650, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60135E8, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6004DD4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60016C8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600283C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6007764, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005EE0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002C48, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60031D8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005790, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6001420, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001A4C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6002704, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6003378, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static ? D_80A16644;                                /* unable to generate initializer */
static ? D_80A16664;                                /* unable to generate initializer */
static ? D_80A16670;                                /* unable to generate initializer */
static ? D_80A1667C;                                /* unable to generate initializer */
static Vec3f D_80A1668C = {0.0f, 100.0f, 160.0f};
static ? D_80A16698;                                /* unable to generate initializer */
static Vec3f D_80A166A4 = {0.0f, 200.0f, 280.0f};
static Vec3f D_80A166B0 = {0.0f, 0.0f, 40.0f};
static ? D_80A166BC;                                /* unable to generate initializer */
static ? D_80A166D4;                                /* unable to generate initializer */
static ? D_80A166DC;                                /* unable to generate initializer */
static ? D_80A166E4;                                /* unable to generate initializer */
static ? D_80A16704;                                /* unable to generate initializer */
static ? D_80A1670C;                                /* unable to generate initializer */

u8 *func_80A10FD0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg7, ?32 argA, f32 argB, s32 argC) {
    f32 temp_f2;
    s32 temp_v0;
    u32 temp_t0;
    u32 temp_t1;
    u8 *temp_a0;
    u8 *phi_a0;
    s32 phi_v0;
    u8 *phi_a0_2;

    phi_a0 = arg0;
    phi_v0 = 0x10;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (*phi_a0 == 0) {
        *phi_a0 = 7;
        arg0 = phi_a0;
        temp_f2 = (f32) argC / 3.0f;
        temp_t0 = (u32) ((Rand_ZeroOne() * (2.0f * temp_f2)) + temp_f2);
        temp_t1 = temp_t0;
        arg0->unk_1 = (s8) temp_t0;
        arg0->unk_2 = (s8) temp_t1;
        arg0->unk_10 = (s32) arg1.unk_0;
        arg0->unk_14 = (s32) arg1.unk_4;
        arg0->unk_18 = (s32) arg1.unk_8;
        arg0->unk_1C = (s32) arg4.unk_0;
        arg0->unk_20 = (s32) arg4.unk_4;
        arg0->unk_24 = (s32) arg4.unk_8;
        arg0->unk_28 = (s32) arg7.unk_0;
        arg0->unk_2C = (s32) arg7.unk_4;
        arg0->unk_30 = (s32) arg7.unk_8;
        arg0->unk_34 = argA;
        arg0->unk_38 = argB;
        phi_a0_2 = arg0;
    } else {
        temp_a0 = phi_a0 + 0x3C;
        phi_a0 = temp_a0;
        phi_a0_2 = temp_a0;
        if (temp_v0 != 0x20) {
            goto loop_1;
        }
    }
    return phi_a0_2;
}

void func_80A11144(void *arg0, GraphicsContext **arg1) {
    s32 sp74;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    s32 temp_f4;
    s32 temp_s4;
    s32 temp_v1_2;
    u8 temp_t3;
    void *phi_s2;
    f32 phi_f16;
    s32 phi_t7;
    s32 phi_s4;

    sp74 = 0;
    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_s4 = 0;
    do {
        if (phi_s2->unk_0 == 7) {
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w1 = 0;
            temp_v0->words.w0 = 0xE7000000;
            if (sp74 == 0) {
                sp74 = 1;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_060031A0;
                temp_v0_2->words.w0 = 0xDE000000;
            }
            SysMatrix_StatePush();
            temp_t3 = phi_s2->unk_1;
            temp_f16 = (f32) temp_t3;
            phi_f16 = temp_f16;
            if ((s32) temp_t3 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_f0 = ((f32) phi_s2->unk_2 / phi_f16) * 255.0f;
            temp_v1 = temp_s0->polyXlu.p;
            temp_f4 = (s32) temp_f0;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t7 = (s32) (temp_f0 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_9;
                }
            } else {
                phi_t7 = temp_f4;
                if (temp_f4 < 0) {
block_9:
                    phi_t7 = -1;
                }
            }
            temp_v1->words.w1 = (phi_t7 & 0xFF) | 0xC3E1EB00;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060020;
            temp_v1_2 = phi_s2->unk_2 + (phi_s4 * 3);
            temp_v0_3->words.w1 = Gfx_TwoTexScroll(*arg1, 0, temp_v1_2 * 3, temp_v1_2 * 0xF, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s2->unk_10, phi_s2->unk_14, phi_s2->unk_18, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unk_34;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_06003258;
            temp_v0_5->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
        }
        temp_s4 = phi_s4 + 1;
        phi_s2 += 0x3C;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x20);
}

void func_80A1143C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg7, f32 argA, f32 argB, s32 argC, s32 argD) {
    f32 temp_f2;
    s32 temp_v0;
    u32 temp_t1;
    u32 temp_t2;
    u8 *phi_a0;
    s32 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0x10;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (*phi_a0 == 0) {
        *phi_a0 = argD + 4;
        arg0 = phi_a0;
        temp_f2 = (f32) argC / 3.0f;
        temp_t1 = (u32) ((Rand_ZeroOne() * (2.0f * temp_f2)) + temp_f2);
        temp_t2 = temp_t1;
        arg0->unk_1 = (s8) temp_t1;
        arg0->unk_2 = (s8) temp_t2;
        arg0->unk_10 = (s32) arg1.unk_0;
        arg0->unk_14 = (s32) arg1.unk_4;
        arg0->unk_18 = (s32) arg1.unk_8;
        arg0->unk_1C = (s32) arg4.unk_0;
        arg0->unk_20 = (s32) arg4.unk_4;
        arg0->unk_24 = (s32) arg4.unk_8;
        arg0->unk_28 = (s32) arg7.unk_0;
        arg0->unk_2C = (s32) arg7.unk_4;
        arg0->unk_30 = (s32) arg7.unk_8;
        arg0->unk_34 = argA;
        arg0->unk_38 = argB;
        return;
    }
    phi_a0 += 0x3C;
    if (temp_v0 == 0x20) {
        return;
    }
    goto loop_1;
}

void func_80A115B4(void *arg0, GraphicsContext **arg1) {
    Gfx *temp_a0_2;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_f8;
    s32 temp_s4;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_s2;
    s32 phi_fp;
    f32 phi_f6;
    f32 phi_f16;
    s32 phi_t7;
    s32 phi_s4;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_fp = 0;
    phi_s4 = 0;
    do {
        temp_v0 = phi_s2->unk_0;
        if (((s32) temp_v0 >= 4) && ((s32) temp_v0 < 7)) {
            if (phi_fp == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_06014CF0;
                temp_v0_2->words.w0 = 0xDE000000;
                phi_fp = 1;
            }
            SysMatrix_StatePush();
            temp_t7 = phi_s2->unk_2;
            temp_f6 = (f32) temp_t7;
            phi_f6 = temp_f6;
            if ((s32) temp_t7 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            temp_t8 = phi_s2->unk_1;
            temp_f16 = (f32) temp_t8;
            phi_f16 = temp_f16;
            if ((s32) temp_t8 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_f20 = phi_f6 / phi_f16;
            temp_a0_2 = temp_s0->polyXlu.p;
            temp_f4 = temp_f20 * 255.0f;
            temp_s0->polyXlu.p = temp_a0_2 + 8;
            temp_a0_2->words.w0 = 0xFA000000;
            temp_v1 = (phi_s2->unk_0 * 4) + &D_80A16664;
            temp_f8 = (s32) temp_f4;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t7 = (s32) (temp_f4 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_12;
                }
            } else {
                phi_t7 = temp_f8;
                if (temp_f8 < 0) {
block_12:
                    phi_t7 = -1;
                }
            }
            temp_a0_2->words.w1 = (temp_v1->unk_-E << 8) | (temp_v1->unk_-10 << 0x18) | (temp_v1->unk_-F << 0x10) | (phi_t7 & 0xFF);
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v1_2 = (phi_s2->unk_0 * 4) + &D_80A16670;
            temp_v0_3->words.w1 = (temp_v1_2->unk_-E << 8) | (temp_v1_2->unk_-10 << 0x18) | (temp_v1_2->unk_-F << 0x10);
            SysMatrix_InsertTranslation(phi_s2->unk_10, phi_s2->unk_14, phi_s2->unk_18, 0);
            temp_f12 = phi_s2->unk_34;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDB060020;
            temp_v0_5->words.w1 = Lib_SegmentedToVirtual(*(&D_80A16644 + ((s32) (temp_f20 * 7.0f) * 4)));
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_06014D00;
            temp_v0_6->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
        }
        temp_s4 = phi_s4 + 1;
        phi_s2 += 0x3C;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x20);
}

void func_80A118F8(? *arg0, s32 arg1, f32 arg2, f32 arg3) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spAC;
    ? spA8;
    f32 temp_f20;
    s16 temp_s3;
    s32 temp_s2;
    ? *phi_s0;
    s32 phi_s2;

    phi_s0 = arg0;
    phi_s2 = 0;
    do {
        if (phi_s0->unk_0 == 0) {
            phi_s0->unk_10 = (f32) arg1.unk_0;
            phi_s0->unk_14 = (f32) arg1.unk_4;
            temp_s3 = phi_s2 << 0xC;
            phi_s0->unk_18 = (f32) arg1.unk_8;
            phi_s0->unk_14 = (f32) (phi_s0->unk_14 + 56.0f);
            phi_s0->unk_4 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 5460.0f);
            phi_s0->unk_6 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 5460.0f);
            phi_s0->unk_8 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 5460.0f);
            temp_f20 = (Rand_ZeroOne() * 4.0f) + 6.0f;
            phi_s0->unk_28 = (f32) (Math_SinS(temp_s3) * temp_f20);
            phi_s0->unk_30 = (f32) (Math_CosS(temp_s3) * temp_f20);
            phi_s0->unk_2C = (f32) ((Rand_ZeroOne() * 3.0f) + 6.0f);
            phi_s0->unk_1C = (f32) D_801D15B0.x;
            phi_s0->unk_20 = (f32) D_801D15B0.y;
            phi_s0->unk_24 = (f32) D_801D15B0.z;
            phi_s0->unk_1 = 1;
            phi_s0->unk_2 = 1;
            phi_s0->unk_20 = -0.8f;
            phi_s0->unk_0 = (u8) *(phi_s2 + &D_80A1667C);
            spB4 = ((Rand_ZeroOne() - 0.5f) * 80.0f) + phi_s0->unk_10;
            spB8 = ((Rand_ZeroOne() - 0.5f) * 40.0f) + phi_s0->unk_14;
            spBC = ((Rand_ZeroOne() - 0.5f) * 80.0f) + phi_s0->unk_18;
            spA8.unk_0 = (f32) D_801D15B0.x;
            spA8.unk_4 = (f32) D_801D15B0.y;
            spA8.unk_8 = (f32) D_801D15B0.z;
            spAC = (Rand_ZeroOne() * 3.0f) + 1.0f;
            func_80A1143C(arg0 + 0x3C0, subroutine_arg1, spB4.unk_4, spB4.unk_8, D_801D15B0.x, D_801D15B0.y, D_801D15B0.z, spA8.unk_0, (bitwise s32) spA8.unk_4, (bitwise s32) spA8.unk_8, 0.6f, 0.2f, 0x10, 0);
        }
        temp_s2 = phi_s2 + 1;
        phi_s0 += 0x3C;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x10);
}

void func_80A11BF8(void *arg0, f32 arg1) {
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    f32 temp_f0;
    f32 temp_f14;
    u32 temp_t8;

    temp_f0 = arg0->unk_2C;
    temp_f14 = arg0->unk_28;
    arg0->unk_14 = (f32) (arg0->unk_14 + temp_f0);
    arg0->unk_10 = (f32) (arg0->unk_10 + temp_f14);
    arg0->unk_18 = (f32) (arg0->unk_18 + arg0->unk_30);
    arg0->unk_2C = (f32) (temp_f0 + arg0->unk_20);
    arg0->unk_34 = (f32) (arg0->unk_34 + arg0->unk_38);
    if (arg0->unk_14 < arg1) {
        arg0->unk_14 = arg1;
        arg0->unk_0 = 4;
        temp_t8 = (u32) ((Rand_ZeroOne() * 8.0f) + 4.0f);
        arg0->unk_1 = (s8) temp_t8;
        arg0->unk_2 = (s8) temp_t8;
        arg0->unk_28 = (f32) D_801D15B0.x;
        arg0->unk_2C = (f32) D_801D15B0.y;
        arg0->unk_30 = (f32) D_801D15B0.z;
        arg0->unk_2C = (f32) ((Rand_ZeroOne() * 3.0f) + 1.0f);
        arg0->unk_34 = 0.4f;
        arg0->unk_38 = 0.1f;
        return;
    }
    if (temp_f14 != 0.0f) {
        temp_v0 = gGameInfo;
        Math_StepToF(arg0 + 0x28, (temp_f14 / fabsf(temp_f14)) * ((f32) (temp_v0->data[1549] + 0x8C) * 0.01f), (f32) (temp_v0->data[1550] + 0x28) * 0.01f);
    }
    if (arg0->unk_30 != 0.0f) {
        temp_v0_2 = gGameInfo;
        Math_StepToF(arg0 + 0x30, (arg0->unk_30 / fabsf(arg0->unk_30)) * ((f32) (temp_v0_2->data[1549] + 0x8C) * 0.01f), (f32) (temp_v0_2->data[1550] + 0x28) * 0.01f);
    }
    arg0->unk_A = (s16) (arg0->unk_A + arg0->unk_4);
    arg0->unk_C = (s16) (arg0->unk_C + arg0->unk_6);
    arg0->unk_E = (s16) (arg0->unk_E + arg0->unk_8);
}

void func_80A11EC0(void *arg0, GraphicsContext **arg1, u32 arg2, u32 arg3, u8 arg4) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    s32 temp_s3;
    void *phi_s1;
    s32 phi_s5;
    s32 phi_s3;

    temp_a0 = *arg1;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s1 = arg0;
    phi_s5 = 0;
    phi_s3 = 0;
    do {
        if (arg4 == phi_s1->unk_0) {
            if (phi_s5 == 0) {
                temp_v0 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0 + 8;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0->words.w1 = arg2;
                phi_s5 = 1;
            }
            SysMatrix_StatePush();
            SysMatrix_InsertTranslation(phi_s1->unk_10, phi_s1->unk_14, phi_s1->unk_18, 0);
            Matrix_Scale(0.08f, 0.08f, 0.08f, 1);
            SysMatrix_InsertZRotation_s(phi_s1->unk_E, 1);
            SysMatrix_InsertXRotation_s(phi_s1->unk_A, 1);
            Matrix_RotateY(phi_s1->unk_C, 1U);
            temp_v0_2 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            temp_v0_2->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_3 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDE000000;
            temp_v0_3->words.w1 = arg3;
            SysMatrix_StatePop();
        }
        temp_s3 = phi_s3 + 1;
        phi_s1 += 0x3C;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x10);
}

void func_80A1203C(EnGo *arg0) {
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f18;
    s32 temp_s1;
    u8 temp_v0;
    void *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x3F8;
    phi_s1 = 0;
    do {
        temp_v0 = phi_s0->unk_0;
        if (temp_v0 != 0) {
            if (phi_s0->unk_2 == 0) {
                phi_s0->unk_0 = 0U;
            } else if (((s32) temp_v0 > 0) && ((s32) temp_v0 < 4)) {
                func_80A11BF8(phi_s0, arg0->actor.world.pos.y);
            } else {
                temp_f18 = phi_s0->unk_28;
                temp_f14 = phi_s0->unk_2C;
                temp_f10 = phi_s0->unk_30;
                phi_s0->unk_10 = (f32) (phi_s0->unk_10 + temp_f18);
                phi_s0->unk_14 = (f32) (phi_s0->unk_14 + temp_f14);
                phi_s0->unk_18 = (f32) (phi_s0->unk_18 + temp_f10);
                phi_s0->unk_28 = (f32) (temp_f18 + phi_s0->unk_1C);
                phi_s0->unk_2C = (f32) (temp_f14 + phi_s0->unk_20);
                phi_s0->unk_30 = (f32) (temp_f10 + phi_s0->unk_24);
                phi_s0->unk_34 = (f32) (phi_s0->unk_34 + phi_s0->unk_38);
                phi_s0->unk_2 = (u8) (phi_s0->unk_2 - 1);
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x3C;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x20);
}

void func_80A1213C(Actor *arg0, GraphicsContext **arg1) {
    void *temp_s0;

    temp_s0 = arg0 + 0x3F8;
    func_80A11EC0(temp_s0, arg1, (u32) &D_060003D0, (u32) &D_06000458, (u8) 1);
    func_80A11EC0(temp_s0, arg1, (u32) &D_060008C0, (u32) &D_06000948, (u8) 2);
    func_80A11EC0(temp_s0, arg1, (u32) &D_06000D50, (u32) &D_06000DD8, (u8) 3);
    func_80A11144(temp_s0, arg1);
    func_80A115B4(temp_s0, arg1);
}

s32 func_80A121F4(GlobalContext *arg0) {
    void *temp_v0;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    if ((temp_v0->unk_14B == 1) && (temp_v0->unk_A74 & 0x2000000)) {
        return 0;
    }
    return 1;
}

s32 func_80A1222C(EnGo *arg0, GlobalContext *arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (((arg1->actorCtx.actorList[2].first->unk_14B == 1) && (arg1->msgCtx.unk1202A == 3) && (arg1->msgCtx.unk1202E == 1) && (arg0->unk_3EC == 0) && (arg0->actor.xzDistToPlayer < 400.0f)) || (((gSaveContext.weekEventReg[22] & 4) == 0) && (arg1->sceneNum == 0x32) && (gSaveContext.sceneSetupIndex == 0) && (arg0->unk_3EC == 0) && (arg1->csCtx.unk_12 == 1))) {
        phi_v1 = 1;
    }
    return phi_v1;
}

? func_80A122EC(EnGo *arg0) {
    f32 sp20;
    u16 temp_v0;
    f32 phi_f0;

    phi_f0 = 58.0f;
    if ((arg0->actor.params & 0xF) == 8) {
        Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, arg0->actor.shape.rot.y, &D_80A1668C, arg0 + 0x3C);
    } else {
        temp_v0 = arg0->unk_390;
        if (((temp_v0 & 0x200) != 0) || ((temp_v0 & 0x100) != 0)) {
            phi_f0 = arg0->actor.shape.yOffset;
        }
        sp20 = phi_f0;
        Math_Vec3f_Copy(arg0 + 0x3C, arg0 + 0x24);
        arg0->actor.focus.pos.y += phi_f0;
    }
    arg0->actor.focus.rot.x = arg0->actor.world.rot.x;
    arg0->actor.focus.rot.y = arg0->actor.world.rot.y;
    arg0->actor.focus.rot.z = arg0->actor.world.rot.z;
    return 0;
}

void func_80A123A0(void *arg0, GlobalContext *arg1) {
    f32 sp2C;
    CollisionCheckContext *sp28;
    Collider *sp24;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    Math_Vec3f_Copy((Vec3f *) &sp2C, arg0 + 0x24);
    arg0->unk_274 = (s16) (s32) sp2C;
    arg0->unk_276 = (s16) (s32) sp30;
    arg0->unk_276 = (s16) (arg0->unk_276 + (s32) arg0->unk_C4);
    arg0->unk_272 = 0x30;
    arg0->unk_278 = (s16) (s32) sp34;
    arg0->unk_27A = (s16) (s32) ((f32) arg0->unk_272 * arg0->unk_27C);
    if (func_80A121F4(arg1) != 0) {
        CollisionCheck_SetAT(arg1, arg1 + 0x18884, arg0 + 0x22C);
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2 = arg0 + 0x22C;
    sp24 = temp_a2;
    sp28 = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

void func_80A124A0(void *arg0, GlobalContext *arg1) {
    arg0->unk_27A = (s16) (s32) ((f32) arg0->unk_272 * arg0->unk_27C);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x22C);
}

void func_80A124FC(void *arg0, GlobalContext *arg1) {
    f32 sp1C;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    Math_Vec3f_Copy((Vec3f *) &sp1C, temp_a1);
    arg0->unk_274 = (s16) (s32) sp1C;
    arg0->unk_276 = (s16) (s32) sp20;
    arg0->unk_276 = (s16) (arg0->unk_276 + (s32) arg0->unk_C4);
    arg0->unk_272 = 0x14;
    arg0->unk_278 = (s16) (s32) sp24;
    arg0->unk_27A = (s16) (s32) ((f32) arg0->unk_272 * arg0->unk_27C);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x22C);
}

void func_80A125BC(void *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp28;
    Collider *sp24;
    Collider *temp_a2;
    Collider *temp_a2_2;
    CollisionCheckContext *temp_a1_2;
    Vec3f *temp_a1;
    Vec3s *temp_a0;

    temp_a0 = arg0 + 0x1DA;
    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    Math_Vec3f_ToVec3s(temp_a0, temp_a1);
    arg0->unk_1D4 = 0x2E;
    arg0->unk_1D6 = 0x4E;
    if (arg0->unk_3C6 == 0) {
        temp_a2 = arg0 + 0x194;
        arg0 = arg0;
        CollisionCheck_SetAT(arg1, arg1 + 0x18884, temp_a2);
    }
    temp_a1_2 = &arg1->colChkCtx;
    temp_a2_2 = arg0 + 0x194;
    sp24 = temp_a2_2;
    sp28 = temp_a1_2;
    CollisionCheck_SetAC(arg1, temp_a1_2, temp_a2_2);
    CollisionCheck_SetOC(arg1, temp_a1_2, temp_a2_2);
}

void func_80A12660(void *arg0, GlobalContext *arg1) {
    Vec3f *temp_a1;
    Vec3s *temp_a0;

    temp_a0 = arg0 + 0x1DA;
    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    Math_Vec3f_ToVec3s(temp_a0, temp_a1);
    arg0->unk_1D4 = 0x18;
    arg0->unk_1D6 = 0x3E;
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x194);
}

void func_80A126BC(EnGo *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_v0_2;

    if ((arg1->actorCtx.actorList[2].first->unk_A70 & 0x4000) == 0) {
        temp_v0 = arg0->unk_3C6;
        if (temp_v0 != 0) {
            arg0->unk_3C6 = temp_v0 - 1;
        }
    }
    if ((arg0->actor.params & 0xF) == 8) {
        func_80A124A0();
        return;
    }
    temp_v0_2 = arg0->unk_390;
    if ((temp_v0_2 & 0x100) != 0) {
        func_80A123A0();
        return;
    }
    if ((temp_v0_2 & 0x200) != 0) {
        func_80A124FC();
        return;
    }
    if ((temp_v0_2 & 0x400) != 0) {
        func_80A125BC();
        return;
    }
    func_80A12660();
}

s32 func_80A12774(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s32 temp_v0;
    u16 *temp_a0_2;
    u16 temp_v1;
    void (*temp_t2)(EnGo *, GlobalContext *);
    s32 phi_v0;

    temp_a0 = arg0;
    if (((arg0->unk_390 & 7) == 0) || (arg0 = arg0, (func_800B84D0(temp_a0, arg1) == 0))) {
        return 0;
    }
    temp_a0_2 = arg0 + 0x390;
    temp_v0 = arg0->params & 0xF & 0xFF;
    phi_v0 = temp_v0;
    if ((temp_v0 != 8) && (temp_v0 != 1)) {
        temp_v1 = arg0->unk_390;
        if ((temp_v1 & 0x200) == 0) {
            arg0->unk_390 = (u16) (temp_v1 | 8);
            phi_v0 = arg0->params & 0xF & 0xFF;
        }
    }
    if ((phi_v0 == 5) || (phi_v0 == 6) || (phi_v0 == 7)) {
        arg0->unk_3BC = 0;
        arg0->unk_3BE = 0;
        arg0->unk_390 = (u16) (arg0->unk_390 | 0x20);
    }
    arg0 = arg0;
    func_8013AED4(temp_a0_2, 0U, 7U);
    temp_t2 = arg0->unk_188;
    arg0->unk_3C0 = 0;
    arg0->unk_3C4 = 0;
    arg0->unk_188 = func_80A157C4;
    arg0->unk_18C = temp_t2;
    return 1;
}

? func_80A12868(EnGo *arg0, GlobalContext *arg1) {
    u16 temp_t0;
    u16 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = arg0->unk_194.base.atFlags;
    temp_t8 = arg0->unk_390 & 0xF7FF;
    temp_t0 = temp_t8 & 0xEFFF;
    arg0->unk_390 = temp_t8;
    arg0->unk_390 = temp_t0;
    arg0->unk_390 = temp_t0 & 0xDFFF;
    if (((temp_v0 & 2) != 0) || ((arg0->unk_22C.base.atFlags & 2) != 0)) {
        arg0->unk_194.base.atFlags = temp_v0 & 0xFFFD;
        arg0->unk_22C.base.atFlags &= 0xFFFD;
        arg0->unk_390 |= 0x800;
        arg0->unk_3C6 = 0x28;
    }
    temp_v0_2 = arg0->unk_194.base.acFlags;
    if (((temp_v0_2 & 2) != 0) || ((arg0->unk_22C.base.acFlags & 2) != 0)) {
        arg0->unk_194.base.acFlags = temp_v0_2 & ~2;
        arg0->unk_22C.base.acFlags &= -3;
        arg0->unk_390 |= 0x1000;
    }
    temp_v0_3 = arg0->unk_194.base.ocFlags1;
    if (((temp_v0_3 & 2) != 0) || ((arg0->unk_22C.base.ocFlags1 & 2) != 0)) {
        arg0->unk_194.base.ocFlags1 = temp_v0_3 & ~2;
        arg0->unk_22C.base.ocFlags1 &= -3;
        arg0->unk_390 |= 0x2000;
    }
    return 0;
}

? func_80A12954(EnGo *arg0, GlobalContext *arg1) {
    u16 *temp_a0;
    u16 *temp_a0_2;

    if (((arg0->actor.params & 0xF) == 4) && (arg1->csCtx.state != 0) && (arg0->actor.draw != 0) && (arg1->sceneNum == 0x5A) && (gSaveContext.sceneSetupIndex == 1) && (temp_a0 = arg0 + 0x390, (arg1->csCtx.unk_12 == 0))) {
        if (arg0->unk_3F0 == 0) {
            arg0->unk_394 = 0xFF;
            arg0->actor.flags &= -2;
            arg0->unk_3F0 = 1;
            arg0->unk_18C = arg0->actionFunc;
        }
        arg0 = arg0;
        func_8013AED4(temp_a0, 0U, 7U);
        arg0->actionFunc = func_80A14FC8;
    } else {
        temp_a0_2 = arg0 + 0x390;
        if (arg0->unk_3F0 != 0) {
            arg0->unk_394 = 0xFF;
            arg0->unk_3F0 = 0;
            arg0->actor.flags |= 1;
            arg0 = arg0;
            func_8013AED4(temp_a0_2, 3U, 7U);
            arg0->actionFunc = arg0->unk_18C;
        }
    }
    return 0;
}

s32 func_80A12A64(EnGo *arg0, GlobalContext *arg1) {
    s8 sp1F;
    s32 temp_t0;
    s32 temp_v0;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a3;
    s32 phi_v1;
    s32 phi_t0;
    s32 phi_v1_2;

    temp_a3 = arg0->actor.objBankIndex;
    temp_v0 = arg0->unk_3DC;
    phi_v1 = -1;
    phi_t0 = 0;
    if ((temp_v0 >= 0x12) && (temp_a0 = arg0->unk_289, ((s32) temp_a0 >= 0))) {
        phi_v1_2 = temp_a0 << 0x18;
        goto block_8;
    }
    if ((temp_v0 >= 0xA) && (temp_a0_2 = arg0->unk_288, ((s32) temp_a0_2 >= 0))) {
        phi_v1_2 = temp_a0_2 << 0x18;
        goto block_8;
    }
    if (temp_v0 < 0xA) {
        phi_v1_2 = temp_a3 << 0x18;
block_8:
        phi_v1 = phi_v1_2 >> 0x18;
    }
    if (phi_v1 >= 0) {
        *(gSegments + 0x18) = (arg1 + (phi_v1 * 0x44))->unk_17D98 + 0x80000000;
        arg0->unk_144.animPlaybackSpeed = arg0->unk_398;
        sp1F = temp_a3;
        temp_t0 = SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        *(gSegments + 0x18) = (arg1 + (temp_a3 * 0x44))->unk_17D98 + 0x80000000;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

? func_80A12B78(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    Actor *temp_a0_2;
    SkelAnime *temp_a0;
    s32 temp_v0;

    if (arg1->csCtx.state == 0) {
        temp_v0 = arg0->unk_3DC;
        temp_a0 = arg0 + 0x144;
        if (temp_v0 == 4) {
            sp24 = temp_a0;
            if (func_801378B8(temp_a0, 2.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x39D0U);
            }
            if (func_801378B8(sp24, 22.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x38B1U);
            }
        } else {
            temp_a0_2 = arg0 + 0x144;
            if ((temp_v0 == 2) || (temp_v0 == 3)) {
                sp24 = (SkelAnime *) temp_a0_2;
                if (func_801378B8((SkelAnime *) temp_a0_2, 2.0f) != 0) {
                    Audio_PlayActorSound2(arg0, 0x39D1U);
                }
                if (func_801378B8(sp24, 24.0f) != 0) {
                    Audio_PlayActorSound2(arg0, 0x3867U);
                }
            }
        }
    }
    return 0;
}

s32 func_80A12C48(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    s8 sp1F;
    Actor *temp_a3;
    s32 temp_v0;
    s8 temp_t0;
    s8 temp_v1;
    s8 temp_v1_2;
    s32 phi_v0;
    s32 phi_t1;
    s32 phi_v0_2;

    temp_a3 = arg0;
    temp_t0 = temp_a3->objBankIndex;
    phi_v0 = -1;
    phi_t1 = 0;
    if ((arg2 >= 0x12) && (temp_v1 = temp_a3->unk_289, ((s32) temp_v1 >= 0))) {
        phi_v0_2 = temp_v1 << 0x18;
        goto block_8;
    }
    if ((arg2 >= 0xA) && (temp_v1_2 = temp_a3->unk_288, ((s32) temp_v1_2 >= 0))) {
        phi_v0_2 = temp_v1_2 << 0x18;
        goto block_8;
    }
    if (arg2 < 0xA) {
        phi_v0_2 = temp_t0 << 0x18;
block_8:
        phi_v0 = phi_v0_2 >> 0x18;
    }
    if (phi_v0 >= 0) {
        *(gSegments + 0x18) = (arg1 + (phi_v0 * 0x44))->unk_17D98 + 0x80000000;
        temp_a3->unk_3DC = arg2;
        sp1F = temp_t0;
        arg0 = temp_a3;
        temp_v0 = func_8013BC6C(temp_a3 + 0x144, D_80A164E4, arg2);
        arg0->unk_398 = (f32) arg0->unk_160;
        *(gSegments + 0x18) = (arg1 + (temp_t0 * 0x44))->unk_17D98 + 0x80000000;
        phi_t1 = temp_v0;
    }
    return phi_t1;
}

void func_80A12D6C(EnGo *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    if ((arg0->unk_390 & 0x20) != 0) {
        temp_v0 = arg0->unk_3BC;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_3BC = temp_v0 - 1;
            phi_v1 = arg0->unk_3BC;
        }
        if (phi_v1 == 0) {
            arg0->unk_3BE += 1;
            if ((s32) arg0->unk_3BE >= 4) {
                arg0 = arg0;
                arg0->unk_3BC = Rand_S16Offset(0x1E, 0x1E);
                arg0->unk_3BE = 0;
            }
        }
    }
}

void func_80A12DF4(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_3D4;
    if (temp_v0 == 0) {
        func_80A12C48(arg0, arg1, 9, arg1);
        arg0->unk_3D4 = (s16) (arg0->unk_3D4 + 1);
        return;
    }
    if (temp_v0 == 1) {
        arg1 = arg1;
        if (func_801378B8(arg0 + 0x144, arg0->unk_154) != 0) {
            func_80A12C48(arg0, arg1, 6, arg1);
            arg0->unk_3D4 = (s16) (arg0->unk_3D4 + 1);
        }
    }
}

? func_80A12E80(void *arg0, void *arg1) {
    ? (*temp_v0_2)(void *, void *);
    s16 temp_v0;
    u16 temp_a3;
    void *temp_a2;

    temp_v0 = arg0->unk_1C;
    temp_a2 = arg1->unk_1CCC;
    temp_a3 = arg1->unk_1680C;
    if ((temp_v0 & 0xF) != 4) {

    } else {
        if ((temp_a2->unk_A6C & 0x40) != 0) {
            if (temp_a3 != arg0->unk_392) {
                switch (temp_a3) {
                case 3610:
                    arg0->unk_390 = (u16) (arg0->unk_390 | 8);
                    arg0->unk_38C = (void *) arg0->unk_124;
                    break;
                case 3613:
                case 3621:
                    if ((((s32) (temp_v0 & 0x70) >> 4) & 0xFF) == 1) {
block_13:
                        arg0->unk_38C = temp_a2;
                    }
                    break;
                case 3623:
                    if ((((s32) (temp_v0 & 0x70) >> 4) & 0xFF) == 1) {
                        arg0->unk_38C = (void *) arg0->unk_124;
                    }
                    /* fallthrough */
                case 3606:
                case 3614:
                    arg0->unk_190 = func_80A12DF4;
                    break;
                case 3615:
                    if ((((s32) (temp_v0 & 0x70) >> 4) & 0xFF) == 0) {
                        goto block_13;
                    }
                    break;
                }
            }
            arg0->unk_3F4 = 1;
            arg0->unk_392 = temp_a3;
        } else if (arg0->unk_3F4 != 0) {
            arg0->unk_3F4 = 0;
            arg0->unk_190 = NULL;
            arg0->unk_392 = 0U;
            func_80A12C48((Actor *)5, (GlobalContext *) temp_a3);
            arg0->unk_390 = (u16) (arg0->unk_390 & 0xFFF7);
        }
        temp_v0_2 = arg0->unk_190;
        if (temp_v0_2 != 0) {
            temp_v0_2(arg0, arg1);
        }
    }
    return 0;
}

? func_80A12FE8(EnGo *arg0, GlobalContext *arg1) {
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

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk_38C + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    temp_v0 = Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40);
    sp32 = temp_v0;
    Math_ApproachS(arg0 + 0x3B2, (s16) ((temp_v0 - arg0->unk_3B6) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1 = arg0->unk_3B2;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk_3B2 = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk_3B2 = phi_v0;
    }
    Math_ApproachS(arg0 + 0x3B6, (s16) ((sp32 - arg0->unk_3B2) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1_2 = arg0->unk_3B6;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk_3B6 = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk_3B6 = phi_v0_2;
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk_38C;
    if (temp_v0_2->unk_0 == 0) {
        sp44 = temp_v0_2->unk_C44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x3B0, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_3B4), 4, 0x2AA8);
    temp_v1_3 = arg0->unk_3B0;
    if ((s32) temp_v1_3 < -0x1554) {
        arg0->unk_3B0 = -0x1554;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1555) {
            phi_v0_3 = 0x1554;
        }
        arg0->unk_3B0 = phi_v0_3;
    }
    Math_ApproachS(arg0 + 0x3B4, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_3B0), 4, 0x2AA8);
    temp_v1_4 = arg0->unk_3B4;
    if ((s32) temp_v1_4 < -0xE38) {
        arg0->unk_3B4 = -0xE38;
    } else {
        phi_v0_4 = temp_v1_4;
        if ((s32) temp_v1_4 >= 0xE39) {
            phi_v0_4 = 0xE38;
        }
        arg0->unk_3B4 = phi_v0_4;
    }
    return 0;
}

? func_80A131F8(EnGo *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    u16 temp_t0;
    u16 temp_v0;
    s16 phi_v1;

    if (arg0->unk_3F4 == 0) {
        arg0->unk_38C = arg1->actorCtx.actorList[2].first;
    }
    func_80A12E80();
    temp_v0 = arg0->unk_390;
    if ((temp_v0 & 8) != 0) {
        temp_t0 = temp_v0 & 0xFFBF;
        arg0->unk_390 = temp_t0;
        arg0->unk_390 = temp_t0 | 0x10;
        func_80A12FE8(arg0, arg1);
    } else if ((temp_v0 & 0x10) != 0) {
        arg0->unk_390 = temp_v0 & 0xFFEF;
        arg0->unk_3B0 = 0;
        arg0->unk_3B2 = 0;
        arg0->unk_3B4 = 0;
        arg0->unk_3B6 = 0;
        arg0->unk_3BA = 0x14;
    } else {
        temp_v0_2 = arg0->unk_3BA;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_3BA = temp_v0_2 - 1;
            phi_v1 = arg0->unk_3BA;
        }
        if (phi_v1 == 0) {
            arg0->unk_3BA = 0x14;
            arg0->unk_390 |= 0x40;
        }
    }
    return 1;
}

void func_80A132C8(EnGo *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    u8 temp_v0;
    s32 phi_v0;

    temp_v1 = arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y;
    if ((fabsf(arg0->actor.yDistToPlayer) > 20.0f) || (arg0->actor.xzDistToPlayer > 300.0f)) {
        func_8013AED4(arg0 + 0x390, 3U, 7U);
        return;
    }
    if (arg1->actorCtx.actorList[2].first->unk_14B == 1) {
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if ((phi_v0 >= 0x1C70) || (temp_v0 = gSaveContext.weekEventReg[21], ((temp_v0 & 4) != 0)) || ((temp_v0 & 8) != 0)) {
            goto block_9;
        }
        func_8013AED4(arg0 + 0x390, 4U, 7U);
        return;
    }
block_9:
    func_8013AED4(arg0 + 0x390, 3U, 7U);
}

void func_80A133A8(EnGo *arg0, GlobalContext *arg1) {
    if ((gSaveContext.weekEventReg[21] & 8) != 0) {
        func_8013AED4(arg0 + 0x390, 3U, 7U);
        return;
    }
    func_8013AED4(arg0 + 0x390, 4U, 7U);
}

Actor *func_80A13400(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *temp_v1_2;
    s16 temp_v1;
    Actor *phi_s0;

    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 4, 0x138);
    if ((temp_v0 != 0) && (temp_v0 != arg0) && (temp_v1 = temp_v0->params, ((temp_v1 & 0xF) == 4)) && ((((s32) (temp_v1 & 0x70) >> 4) & 0xFF) == 0)) {
        return temp_v0;
    }
    if ((temp_v0 != 0) && (temp_v1_2 = temp_v0->next, (temp_v1_2 != 0))) {
        phi_s0 = temp_v1_2;
        goto loop_1;
    }
    return NULL;
}

void func_80A134B0(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    if (((gSaveContext.weekEventReg[18] & 0x80) != 0) || ((arg1->actorCtx.unk5 & 1) != 0) || (arg2 != 0)) {
        arg0->unk_272 = 0x12C;
        return;
    }
    arg0->unk_272 = 0x17C;
}

s32 func_80A134F4(Actor *arg0, s16 arg1) {
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        goto block_4;
    }
    if (ActorCutscene_GetCanPlayNext(arg1) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg1, arg0);
        return 1;
    }
block_4:
    ActorCutscene_SetIntentToPlay(arg1);
    return 0;
}

s32 func_80A13564(Actor *arg0, f32 arg1, f32 arg2, s32 arg3) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    s16 temp_v0;
    f32 phi_f0;
    s32 phi_v1;

    temp_f16 = arg0->velocity.y;
    temp_f14 = temp_f16 + arg0->gravity;
    phi_f0 = 1.0f;
    phi_f0 = 1.0f;
    if ((arg0->bgCheckFlags & 2) != 0) {
        phi_v1 = 1;
    } else {
        phi_v1 = 0;
        if (temp_f14 > 0.0f) {
            temp_f0 = temp_f14 / arg1;
            arg0->unk_3AE = 0;
            arg0->shape.rot.x += (s32) (9100.0f * temp_f0);
            phi_f0 = temp_f0;
        } else if ((s32) temp_f16 == 0) {
            temp_v0 = arg0->unk_3AE;
            if (arg3 >= (s32) temp_v0) {
                phi_f0 = (f32) temp_v0 / (f32) arg3;
            } else {
                arg0->gravity = -6.0f;
            }
            arg0->unk_3AE = (s16) (arg0->unk_3AE + 1);
        } else if (arg0->unk_3AE == 0) {
            arg0->velocity.y = 0.0f;
            arg0->gravity = 0.0f;
            phi_f0 = temp_f14 / arg1;
        }
    }
    temp_f16_2 = arg0->unk_3A4;
    temp_f14_2 = (1.0f - phi_f0) * arg2;
    temp_f18 = temp_f16_2 - temp_f14_2;
    arg0->unk_3A8 = temp_f14_2;
    arg0->scale.x = temp_f18;
    sp4 = temp_f16_2 + temp_f14_2;
    arg0->scale.y = sp4;
    if (sp4 < temp_f18) {
        arg0->scale.z = arg0->scale.x;
        return phi_v1;
    }
    arg0->scale.z = arg0->scale.y;
    return phi_v1;
}

void func_80A136B8(GlobalContext *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 sp26;
    s16 temp_v0;
    s32 temp_a0;

    temp_v0 = Quake_Add(Play_GetCamera(arg0, 0), 3U);
    temp_a0 = temp_v0 << 0x10;
    sp26 = temp_v0;
    Quake_SetCountdown((s16) (temp_a0 >> 0x10), arg3);
    Quake_SetSpeed(sp26, arg1);
    Quake_SetQuakeValues(sp26, arg2, 0, 0, (s16) 0);
}

void func_80A13728(Actor *arg0, GlobalContext *arg1) {
    func_80A136B8(arg1, 0x6C77, 7, 0x14);
    arg1->actorCtx.unk2 = 4;
    Actor_Spawn(&arg1->actorCtx, arg1, 1, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    EffectSsBlast_SpawnWhiteShockwave(arg1, arg0 + 0x24, &D_801D15B0, &D_801D15B0);
}

void func_80A137C0(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3) {
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    u32 temp_v0_2;

    if ((arg0->unk_390 & 0x400) != 0) {
        SysMatrix_StatePush();
        temp_a0 = arg1->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        SysMatrix_InsertTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, 0);
        Matrix_Scale(arg2 * 0.7f, arg2 * 0.8f, arg2, 1);
        func_800B8118(arg0, arg1, 0);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_2 = arg1->gameplayFrames;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060020;
        temp_v0_3->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, 0U, temp_v0_2 & 0xFF, 0x20, 0x10, 1, 0U, (temp_v0_2 * 2) & 0xFF, 0x40, 0x20);
        temp_v1 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xFB000000;
        temp_v1->words.w1 = ((u32) arg3 & 0xFF) | 0x326400;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_04050D10;
        temp_v0_4->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
    }
}

void func_80A139E4(EnGo *arg0) {
    f32 sp5C;
    ? sp54;
    f32 sp4C;
    ? sp48;
    s16 sp46;
    f32 temp_f10;

    sp46 = (s16) (s32) (Rand_ZeroOne() * 360.0f * 182.0f);
    Math_Vec3f_Copy((Vec3f *) &sp54, &D_801D15B0);
    sp5C = 28.0f;
    Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, sp46, (Vec3f *) &sp54, (Vec3f *) &sp48);
    temp_f10 = (Rand_ZeroOne() * 10.0f) + 4.0f;
    sp4C = temp_f10;
    sp4C = temp_f10 + arg0->actor.floorHeight;
    func_80A10FD0(arg0 + 0x7B8, subroutine_arg1, sp48.unk_4, sp48.unk_8, D_80A16698.unk_0, D_80A16698.unk_4, D_80A16698.unk_8, D_801D15B0.x, (bitwise s32) D_801D15B0.y, D_801D15B0.z, 0.01f, 0.002f, 0x10);
}

s32 func_80A13B1C(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 sp24;
    s16 temp_a0;
    s16 temp_t4;
    s16 temp_v0;
    u16 temp_t2;
    u16 temp_t2_2;
    u16 temp_t4_2;
    u8 temp_v0_2;

    sp24 = 0;
    sp2C = arg1->actorCtx.actorList[2].first;
    temp_v0 = arg0->unk_3C0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else {
                    goto block_11;
                }
            } else {
                goto block_9;
            }
        } else {
            goto block_7;
        }
    } else {
        arg0->unk_3B8 = ActorCutscene_GetAdditionalCutscene((s16) arg0->cutscene);
        if (func_80A134F4(arg0, arg0->unk_3B8) != 0) {
            arg0->unk_3C4 = 1;
            arg0->unk_3C0 = 1;
block_7:
            temp_a0 = arg0->unk_3B8;
            if (ActorCutscene_GetCurrentIndex() != temp_a0) {
                arg0->unk_3B8 = ActorCutscene_GetAdditionalCutscene(temp_a0);
                arg0->unk_3C0 = 2;
block_9:
                if (func_80A134F4(arg0, arg0->unk_3B8) != 0) {
                    arg0->unk_3C0 = 3;
block_11:
                    if (ActorCutscene_GetCanPlayNext(0x7C) != 0) {
                        ActorCutscene_StartAndSetUnkLinkFields(0x7C, NULL);
                        arg0->unk_3C0 = 4;
                    } else if (ActorCutscene_GetCurrentIndex() == arg0->unk_3B8) {
                        ActorCutscene_SetIntentToPlay(0x7C);
                    }
                }
            }
        }
    }
    temp_t4 = arg0->unk_3C4;
    switch (temp_t4) {
    case 1:
        func_80A12C48(arg0, arg1, 4);
        arg0->unk_390 = (u16) (arg0->unk_390 | 0x4000);
        arg0->unk_3C4 = (s16) (arg0->unk_3C4 + 1);
        break;
    case 2:
        if (func_801378B8((SkelAnime *) (arg0 + 0x144), arg0->unk_154) != 0) {
            temp_t2 = arg0->unk_390 & 0xBFFF;
            temp_t4_2 = temp_t2 & 0xFF7F;
            arg0->unk_390 = temp_t2;
            arg0->unk_390 = temp_t4_2;
            arg0->unk_390 = (u16) (temp_t4_2 | 0x200);
            arg0->unk_3C4 = (s16) (arg0->unk_3C4 + 1);
            arg0->unk_3C2 = 0;
            arg0->shape.yOffset = 14.0f;
        }
        break;
    case 3:
        arg0->unk_3C2 = (s16) (arg0->unk_3C2 + 1);
        if ((s32) arg0->unk_3C2 >= 0xA) {
            Audio_PlayActorSound2(arg0, 0x38B5U);
            arg0->unk_3C4 = (s16) (arg0->unk_3C4 + 1);
            arg0->velocity.y = 10.0f;
            arg0->gravity = -1.0f;
        }
        break;
    case 4:
        if (func_80A13564(arg0, 10.0f, 0.004f, 6) != 0) {
            Audio_PlayActorSound2(arg0, 0x3879U);
            func_80A13728(arg0, arg1);
            arg0->unk_3C4 = (s16) (arg0->unk_3C4 + 1);
            arg0->unk_3C2 = 0;
            gSaveContext.weekEventReg[88] |= 0x40;
        }
        break;
    case 5:
        arg0->unk_3C2 = (s16) (arg0->unk_3C2 + 1);
        if ((s32) arg0->unk_3C2 >= 0xA) {
            func_80A12C48(arg0, arg1, 5);
            arg0->shape.rot.x = 0;
            temp_t2_2 = arg0->unk_390 & 0xFDFF;
            arg0->unk_390 = temp_t2_2;
            arg0->unk_390 = (u16) (temp_t2_2 | 0x80);
            arg0->unk_3C4 = (s16) (arg0->unk_3C4 + 1);
        }
        break;
    case 6:
        arg0->unk_3C0 = (s16) (arg0->unk_3C0 + 1);
        if ((s32) arg0->unk_3C0 >= 0x41) {
            temp_v0_2 = sp2C->unk_14B;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {
                        if (temp_v0_2 == 4) {
                            gSaveContext.weekEventReg[88] |= 0x80;
                        }
                    } else {
                        gSaveContext.weekEventReg[89] |= 1;
                    }
                } else {
                    gSaveContext.weekEventReg[89] |= 2;
                }
            } else {
                gSaveContext.weekEventReg[89] |= 4;
            }
            sp24 = 1;
        }
        break;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    return sp24;
}

s32 func_80A13E80(Actor *arg0, GlobalContext *arg1) {
    f32 sp48;
    s32 sp44;
    Actor *sp3C;
    Actor *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    sp44 = 0;
    temp_v0 = arg0->unk_3C0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else {
                    temp_v0_2 = arg0->unk_3C2;
                    if ((s32) temp_v0_2 >= 0x3C) {
                        ActorCutscene_Stop(arg0->unk_3B8);
                        arg0->unk_3C2 = 0;
                        arg0->unk_3C0 = 0;
                        sp44 = 1;
                    } else {
                        arg0->unk_3C2 = (s16) (temp_v0_2 + 1);
                    }
                }
            } else {
                goto block_8;
            }
        } else {
            func_80A12C48(arg0, arg1, 7);
            arg0->unk_3C0 = (s16) (arg0->unk_3C0 + 1);
block_8:
            temp_a0 = arg0 + 0x144;
            sp3C = temp_a0;
            if (func_801378B8((SkelAnime *) temp_a0, 16.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x298EU);
            }
            if (func_801378B8((SkelAnime *) sp3C, arg0->unk_154) != 0) {
                func_80A12C48(arg0, arg1, 1);
                Lib_Vec3f_TranslateAndRotateY((Vec3f *) &arg0->world, arg0->shape.rot.y, &D_80A166A4, (Vec3f *) &sp48);
                gSaveContext.powderKegTimer = 0x960;
                Actor_Spawn(&arg1->actorCtx, arg1, 9, sp48, sp4C, sp50, (s16) 1, (s16) 0, (s16) 0, (s16) 0);
                func_80A134B0(arg0, arg1, 1);
                arg0->unk_3C2 = 0;
                arg0->unk_3C0 = (s16) (arg0->unk_3C0 + 1);
            }
        }
    } else {
        arg0->unk_3B8 = (s16) arg0->cutscene;
        if (func_80A134F4(arg0, arg0->unk_3B8) != 0) {
            arg0->unk_3C0 = (s16) (arg0->unk_3C0 + 1);
        }
    }
    return sp44;
}

void func_80A14018(Actor *arg0) {
    ? sp2C;
    PosRot *sp24;
    PosRot *temp_a0;
    s32 temp_hi;
    s32 phi_v0;

    temp_hi = (s32) (((s32) (arg0->params & 0x70) >> 4) & 0xFF) % 6;
    phi_v0 = temp_hi;
    if (temp_hi < 4) {
        phi_v0 = (s32) ((gSaveContext.eventInf[2] & 0xF) + temp_hi) % 4;
    }
    func_80A12C48(arg0, *(&D_80A166BC + (phi_v0 * 4)));
    temp_a0 = &arg0->world;
    if (arg0->unk_3DC == 0xE) {
        sp24 = temp_a0;
        Lib_Vec3f_TranslateAndRotateY((Vec3f *) temp_a0, arg0->shape.rot.y, &D_80A166B0, (Vec3f *) &sp2C);
        Math_Vec3f_Copy((Vec3f *) temp_a0, (Vec3f *) &sp2C);
    }
    arg0->flags &= -2;
    Actor_SetScale(arg0, arg0->unk_3A4);
    arg0->unk_390 = 0;
    arg0->unk_3EC = 0;
    arg0->unk_390 = 0x60;
    arg0->gravity = 0.0f;
}

void func_80A14104(Actor *arg0) {
    f32 temp_f6;

    func_80A12C48(arg0, *(&D_80A166D4 + (((s32) (((s32) (arg0->params & 0x70) >> 4) & 0xFF) % 2) * 4)));
    temp_f6 = Rand_ZeroOne() * arg0->unk_154;
    arg0->flags &= -2;
    arg0->unk_15C = (f32) (s16) (s32) temp_f6;
    Actor_SetScale(arg0, arg0->unk_3A4);
    arg0->unk_390 = 0;
    arg0->unk_390 = 0x40;
    arg0->unk_3EC = 0;
    arg0->unk_390 = (s16) (0x40 | 0x20);
    arg0->gravity = 0.0f;
}

void func_80A141D4(Actor *arg0, GlobalContext *arg1) {
    Collider_InitAndSetCylinder(arg1, arg0 + 0x194, arg0, &D_80A16460);
    CollisionCheck_SetInfo2(&arg0->colChkInfo, &D_80A164C4, &D_80A164B8);
    arg0->unk_3DC = -1;
    func_80A12C48(arg0, arg1, 5);
    arg0->unk_3EC = 0;
    arg0->unk_390 = 0;
    arg0->unk_390 = 0x40;
    arg0->unk_3BE = 2;
    arg0->unk_390 = (s16) (0x40 | 0x400);
    arg0->unk_3A0 = 100.0f;
    arg0->unk_39C = (f32) ((arg0->unk_3A4 / 0.01f) * 0.9f);
}

void func_80A1428C(Actor *arg0, GlobalContext *arg1) {
    ? sp30;
    ? sp24;
    s16 temp_v0;
    s32 temp_a0;

    Math_Vec3f_Copy((Vec3f *) &sp30, arg0 + 0x24);
    temp_a0 = arg0->unk_284;
    if (temp_a0 != 0) {
        arg0->flags &= 0xFDFFFFFF;
        func_8013C8B8(temp_a0, 0, &sp24);
        temp_v0 = Math_Vec3f_Yaw((Vec3f *) &sp30, (Vec3f *) &sp24);
        arg0->shape.rot.y = temp_v0;
        arg0->world.rot.y = temp_v0;
    }
    arg0->unk_390 = 0;
    arg0->unk_390 = 0x100;
    arg0->shape.yOffset = 46.0f;
    arg0->gravity = -1.0f;
}

void func_80A14324(Actor *arg0) {
    func_80A12C48(arg0, (GlobalContext *)8);
    Actor_SetScale(arg0, arg0->unk_3A4);
    arg0->unk_390 = 0U;
    arg0->gravity = -1.0f;
    func_8013AED4(arg0 + 0x390, 3U, 7U);
    arg0->unk_3EC = 0;
    arg0->unk_390 = (u16) (arg0->unk_390 | 0x40);
    arg0->unk_3BC = 0;
    arg0->unk_3BE = 4;
    arg0->unk_39C = 0.0f;
    arg0->unk_3A0 = 0.0f;
}

void func_80A143A8(Actor *arg0) {
    u16 temp_t8;

    func_80A12C48(arg0, (GlobalContext *)5);
    Actor_SetScale(arg0, arg0->unk_3A4);
    arg0->unk_390 = 0U;
    arg0->gravity = -1.0f;
    func_8013AED4(arg0 + 0x390, 3U, 7U);
    arg0->unk_3EC = 0;
    temp_t8 = arg0->unk_390 | 0x40;
    arg0->unk_390 = temp_t8;
    arg0->unk_390 = (u16) (temp_t8 | 0x20);
    arg0->unk_3BC = 0;
    arg0->unk_3BE = 0;
    arg0->unk_39C = 0.0f;
    arg0->unk_3A0 = 0.0f;
}

void func_80A14430(Actor *arg0) {
    u32 temp_v0;

    temp_v0 = gSaveContext.entranceIndex;
    if (((temp_v0 == 0xD000) || (temp_v0 == 0xD020)) && ((gSaveContext.weekEventReg[33] & 0x80) != 0)) {
        func_80A14018();
        arg0->unk_188 = func_80A149B0;
        return;
    }
    Actor_MarkForDeath(arg0);
}

void func_80A1449C(Actor *arg0) {
    u32 temp_v0;

    temp_v0 = gSaveContext.entranceIndex;
    if ((temp_v0 == 0xD010) || (temp_v0 == 0x1C00)) {
        func_80A14104();
        arg0->unk_188 = func_80A149B0;
        return;
    }
    Actor_MarkForDeath(arg0);
}

void func_80A144F4(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    if (gSaveContext.day >= 2) {
        temp_v0 = func_8013BEDC(arg1, ((s32) (arg0->params & 0x7F80) >> 7) & 0xFF, 0xFF, arg0 + 0x3E4);
        arg0->unk_284 = temp_v0;
        if (temp_v0 != 0) {
            arg0->unk_3E4 = 1;
        }
        func_80A1428C(arg0, arg1);
        arg0->unk_188 = func_80A153FC;
        arg0->unk_3D8 = func_80A13B1C;
        return;
    }
    func_80A143A8(arg0, arg1, 0xFF);
    arg0->unk_188 = func_80A149B0;
    arg0->unk_3D8 = func_80A13B1C;
}

void func_80A145AC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    if (((((s32) (arg0->params & 0x70) >> 4) & 0xFF) == 1) && (((arg1->sceneNum == 0x5A) && (gSaveContext.sceneSetupIndex == 1) && (arg1->csCtx.unk_12 == 0)) || ((gSaveContext.weekEventReg[21] & 8) == 0))) {
        temp_v0 = func_80A13400(arg0);
        arg0->child = temp_v0;
        temp_v0->child = arg0;
        func_80A141D4(arg0, arg1);
        arg0->unk_188 = func_80A14E14;
        return;
    }
    func_80A143A8(arg0);
    arg0->unk_188 = func_80A149B0;
}

void func_80A14668(Actor *arg0) {
    if ((gSaveContext.weekEventReg[22] & 4) == 0) {
        func_80A14324(arg0);
        arg0->unk_188 = func_80A149B0;
        return;
    }
    func_80A143A8(arg0);
    arg0->unk_188 = func_80A149B0;
}

void func_80A146CC(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t1;

    func_80A134B0(arg0, arg1, 0);
    func_80A12C48(arg0, arg1, 0);
    arg0->unk_3A4 = (f32) (arg0->unk_3A4 * 5.0f);
    Actor_SetScale(arg0, arg0->unk_3A4);
    arg0->flags &= -2;
    arg0->targetMode = 3;
    arg0->unk_390 = 0U;
    arg0->gravity = -1.0f;
    func_8013AED4(arg0 + 0x390, 3U, 7U);
    temp_t1 = arg0->unk_390 | 0x40;
    arg0->unk_390 = temp_t1;
    arg0->unk_390 = (u16) (temp_t1 | 0x20);
    arg0->unk_3D8 = func_80A13E80;
    arg0->unk_188 = func_80A149B0;
}

void func_80A14798(EnGo *this, GlobalContext *globalCtx) {
    ? sp38;
    s32 temp_t9;
    s8 temp_a0;
    s8 temp_a2;

    sp38.unk_0 = (s32) D_80A166DC.unk_0;
    sp38.unk_4 = (s32) D_80A166DC.unk_4;
    temp_a2 = this->unk_288;
    if (((s32) temp_a2 < 0) || (func_8013D8DC(temp_a2, globalCtx) != 0) || (temp_a0 = this->unk_289, ((s32) temp_a0 < 0)) || (func_8013D8DC(temp_a0, globalCtx) != 0)) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
        SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06011AC8, NULL, &this->unk_2B4, &this->unk_320, 0x12);
        this->unk_3DC = -1;
        func_80A12C48((Actor *) this, globalCtx, 2);
        this->actor.draw = func_80A15FEC;
        Collider_InitAndSetSphere(globalCtx, &this->unk_22C, (Actor *) this, &D_80A16434);
        Collider_InitAndSetCylinder(globalCtx, &this->unk_194, (Actor *) this, &D_80A1648C);
        CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80A164C4, &D_80A164B8);
        Effect_Add(globalCtx, &this->unk_3E8, 4, 0U, (u8) 0, (void *) &sp38);
        this->actor.targetMode = 1;
        temp_t9 = this->actor.params & 0xF;
        this->unk_3D8 = NULL;
        this->unk_3A4 = 0.01f;
        switch (temp_t9) {
        case 1:
            func_80A14430((Actor *) this, globalCtx);
            return;
        case 2:
            func_80A1449C((Actor *) this, globalCtx);
            return;
        case 3:
            func_80A144F4((Actor *) this, globalCtx);
            return;
        case 4:
            func_80A145AC((Actor *) this, globalCtx);
            return;
        case 5:
        case 6:
        case 7:
            func_80A14668((Actor *) this, globalCtx);
            return;
        case 8:
            func_80A146CC((Actor *) this, globalCtx);
            return;
        default:
            Actor_MarkForDeath((Actor *) this);
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_80A149B0(EnGo *this, GlobalContext *globalCtx) {
    s16 sp26;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_v0;

    sp26 = this->actor.world.rot.y;
    temp_v0 = this->actor.params & 0xF & 0xFF;
    if ((temp_v0 == 2) && (gSaveContext.entranceIndex == 0xD010)) {
        Audio_PlayActorSound2((Actor *) this, 0x210FU);
    } else if (temp_v0 != 8) {
        if (func_80A1222C(this) != 0) {
            func_8013AED4(&this->unk_390, 0U, 7U);
            this->unk_3EC = 1;
            this->actionFunc = func_80A14B30;
        } else {
            temp_v1 = this->actor.params;
            temp_v0_2 = temp_v1 & 0xF;
            if (temp_v0_2 == 4) {
                temp_v0_3 = ((s32) (temp_v1 & 0x70) >> 4) & 0xFF;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {

                    } else {
                        func_80A133A8(this, globalCtx);
                    }
                } else {
                    func_80A132C8(this, globalCtx);
                }
            } else if (temp_v0_2 == 1) {
                temp_v1_2 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
                phi_v0 = (s32) temp_v1_2;
                if ((s32) temp_v1_2 < 0) {
                    phi_v0 = -(s32) temp_v1_2;
                }
                if (phi_v0 < 0x3FFC) {
                    func_8013AED4(&this->unk_390, 3U, 7U);
                } else {
                    func_8013AED4(&this->unk_390, 0U, 7U);
                }
            }
        }
    }
    Math_ApproachS(&this->actor.shape.rot.y, sp26, 4, 0x2AA8);
}

void func_80A14B30(EnGo *this, GlobalContext *globalCtx) {
    s16 sp26;
    s32 temp_t1_2;
    u16 temp_t1;
    u16 temp_t3;
    u16 temp_t5;
    u16 temp_t7;
    u16 temp_t7_2;
    u16 temp_t9;
    u16 temp_v0;
    u16 phi_a1;
    f32 phi_f4;

    sp26 = this->actor.world.rot.y;
    if (func_80A1222C(this, globalCtx) != 0) {
        this->unk_3EC = 1;
    }
    temp_v0 = this->unk_390;
    if ((temp_v0 & 0x4000) != 0) {
        if (func_801378B8(&this->unk_144, this->unk_144.animFrameCount) != 0) {
            temp_t1 = this->unk_390 & 0xBFFF;
            this->unk_390 = temp_t1;
            this->unk_390 = temp_t1 | 0x200;
            phi_f4 = 14.0f;
            if (this->unk_3EC != 0) {
                this->unk_3AE = 0;
            }
            goto block_26;
        }
    } else if ((temp_v0 & 0x8000) != 0) {
        if (func_801378B8(&this->unk_144, this->unk_144.animFrameCount) != 0) {
            temp_t7 = this->unk_390 | 0x80;
            this->unk_390 = temp_t7;
            this->unk_390 = temp_t7 & 0xFFFF7FFF;
        }
    } else if ((temp_v0 & 0x200) != 0) {
        if ((this->actor.xzDistToPlayer < 160.0f) && (this->actor.yDistToPlayer < 20.0f) && (this->unk_3EC == 0)) {
            func_80A12C48((Actor *) this, globalCtx, 3);
            temp_t3 = this->unk_390 & 0xFF7F;
            temp_t5 = temp_t3 & 0xFDFF;
            this->unk_390 = temp_t3;
            this->unk_390 = temp_t5;
            this->unk_390 = temp_t5 | 0x8000;
            this->actor.shape.yOffset = 0.0f;
        } else if ((this->unk_3EC != 0) && ((gSaveContext.weekEventReg[22] & 4) != 0)) {
            this->actor.scale.x = this->unk_3A4 - (Math_SinS(this->unk_3AE) * 0.001f);
            this->actor.scale.y = (Math_SinS(this->unk_3AE) * 0.001f) + this->unk_3A4;
            this->actor.scale.z = (Math_SinS(this->unk_3AE) * 0.001f) + this->unk_3A4;
            if (this->unk_3AE == 0) {
                temp_t1_2 = -(s32) this->unk_3EC;
                this->unk_3EC = temp_t1_2;
                phi_a1 = 0x3A1BU;
                if (temp_t1_2 > 0) {
                    phi_a1 = 0x3A1AU;
                }
                Audio_PlayActorSound2((Actor *) this, phi_a1);
            }
            this->unk_3AE += 0x400;
            this->actor.shape.yOffset = (this->actor.scale.y / this->unk_3A4) * 14.0f;
            func_8013AED4(&this->unk_390, 3U, 7U);
        }
    } else if ((this->actor.xzDistToPlayer >= 240.0f) || (this->actor.yDistToPlayer >= 20.0f) || (this->unk_3EC != 0)) {
        func_80A12C48((Actor *) this, globalCtx, 4);
        temp_t7_2 = this->unk_390 & 0xFF7F;
        temp_t9 = temp_t7_2 & 0xFDFF;
        this->unk_390 = temp_t7_2;
        this->unk_390 = temp_t9;
        this->unk_390 = temp_t9 | 0x4000;
        phi_f4 = 0.0f;
block_26:
        this->actor.shape.yOffset = phi_f4;
    }
    func_8013D9C8(globalCtx, &this->unk_3CE, &this->unk_3C8, 3);
    Math_ApproachS(&this->actor.shape.rot.y, sp26, 4, 0x2AA8);
}

void func_80A14E14(EnGo *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = this->unk_194.base.ac;
    if (((this->unk_390 & 0x1000) != 0) && (((temp_v0 != 0) && (temp_v0->id == 0x1AF) && ((temp_v0->params & 1) != 0)) || (this->actor.colChkInfo.damageEffect == 2))) {
        this->actionFunc = func_80A14E74;
    }
}

void func_80A14E74(EnGo *this, GlobalContext *globalCtx) {
    if (func_80A134F4((Actor *) this->actor.cutscene) != 0) {
        this->actionFunc = func_80A14EB0;
    }
}

void func_80A14EB0(EnGo *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 temp_v0;

    sp24 = this->actor.child;
    if ((s32) (this->unk_39C * 3.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x2144U);
        Math_ApproachF(&this->unk_39C, 0.0f, 0.02f, 1.0f);
        this->unk_3A0 = (this->unk_39C / 0.9f) * 100.0f;
        func_80A139E4(this);
        return;
    }
    ActorCutscene_Stop((s16) this->actor.cutscene);
    func_80A143A8((Actor *) this, globalCtx);
    temp_v0 = this->actor.params;
    if (((temp_v0 & 0xF) == 4) && ((((s32) (temp_v0 & 0x70) >> 4) & 0xFF) == 1)) {
        func_8013AED4(&this->unk_390, 4U, 7U);
        func_80A143A8(sp24, globalCtx);
        sp24->unk_188 = func_80A149B0;
    }
    this->actionFunc = func_80A149B0;
}

void func_80A14FC8(EnGo *this, GlobalContext *globalCtx) {
    ? sp38;
    u16 sp36;
    s32 sp30;
    u32 sp2C;
    s32 sp24;
    s32 temp_t1;
    s32 temp_v0;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v1;
    u32 temp_v0_2;
    s32 phi_a2;

    sp38.unk_0 = (s32) D_80A166E4.unk_0;
    sp38.unk_4 = (s32) D_80A166E4.unk_4;
    sp38.unk_C = (s32) D_80A166E4.unk_C;
    sp38.unk_8 = (s32) D_80A166E4.unk_8;
    sp38.unk_10 = (s32) D_80A166E4.unk_10;
    sp38.unk_14 = (s32) D_80A166E4.unk_14;
    sp38.unk_1C = (s32) D_80A166E4.unk_1C;
    sp38.unk_18 = (s32) D_80A166E4.unk_18;
    temp_v0 = ((s32) (this->actor.params & 0x70) >> 4) & 0xFF;
    phi_a2 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else {
            phi_a2 = 0x81;
        }
    } else {
        phi_a2 = 0x80;
    }
    if ((phi_a2 == 0x80) || (phi_a2 == 0x81)) {
        sp24 = phi_a2;
        sp36 = (u16) phi_a2;
        if (func_800EE29C(globalCtx, phi_a2 & 0xFFFF) != 0) {
            temp_v0_2 = func_800EE200(globalCtx, phi_a2 & 0xFFFF);
            temp_t1 = temp_v0_2 * 4;
            sp2C = temp_v0_2;
            temp_v1 = *(globalCtx + temp_t1)->unk_1F4C;
            if ((temp_v1 & 0xFF) != this->unk_394) {
                this->unk_394 = (u8) temp_v1;
                sp30 = (s32) temp_v1;
                func_80A12C48((Actor *) this, globalCtx, (sp + (temp_v1 * 4))->unk_38);
                this->unk_390 = 0;
                this->unk_390 = 0x20;
                this->unk_3BE = 0;
                this->unk_39C = 0.0f;
                this->unk_3A0 = 0.0f;
                if (temp_v1 != 1) {
                    if ((temp_v1 != 5) && (temp_v1 != 6)) {

                    } else {
                        func_80A141D4((Actor *) this, globalCtx);
                    }
                } else {
                    this->unk_390 |= 0x80;
                    this->unk_144.animCurrentFrame = this->unk_144.animFrameCount;
                }
            }
            if (this->unk_394 != 3) {
                if (this->unk_394 != 4) {
                    if (this->unk_394 != 6) {

                    } else if ((s32) (this->unk_39C * 3.0f) != 0) {
                        Audio_PlayActorSound2((Actor *) this, 0x2144U);
                        Math_ApproachF(&this->unk_39C, 0.0f, 0.02f, 1.0f);
                        this->unk_3A0 = (this->unk_39C / 0.9f) * 100.0f;
                        func_80A139E4(this);
                    } else if ((this->unk_390 & 0x400) != 0) {
                        func_80A143A8((Actor *) this, globalCtx);
                    }
                } else if ((func_801378B8(&this->unk_144, this->unk_144.animFrameCount) != 0) && (this->unk_3DC == 0x12)) {
                    func_80A12C48((Actor *) this, globalCtx, 0x13);
                }
            } else if ((func_801378B8(&this->unk_144, this->unk_144.animFrameCount) != 0) && (this->unk_3DC == 0x14)) {
                func_80A12C48((Actor *) this, globalCtx, 0x15);
            }
            if (sp24 == 0x80) {
                temp_v0_3 = globalCtx->csCtx.frames;
                if ((temp_v0_3 != 0x37) && (temp_v0_3 != 0x64) && (temp_v0_3 != 0x82)) {
                    if (temp_v0_3 != 0xB9) {
                        if (temp_v0_3 != 0xFA) {
                            if (temp_v0_3 != 0x1D1) {
                                if (temp_v0_3 != 0x1EA) {

                                } else {
                                    Audio_PlayActorSound2((Actor *) this, 0x3A04U);
                                }
                            } else {
                                Audio_PlayActorSound2((Actor *) this, 0x3ABDU);
                            }
                        } else {
                            Audio_PlayActorSound2((Actor *) this, 0x391CU);
                        }
                    } else {
                        Audio_PlayActorSound2((Actor *) this, 0x38FCU);
                    }
                } else {
                    Audio_PlayActorSound2((Actor *) this, 0x38B4U);
                }
            } else if (sp24 == 0x81) {
                temp_v0_4 = globalCtx->csCtx.frames;
                if ((temp_v0_4 != 0x168) && (temp_v0_4 != 0x186)) {
                    if (temp_v0_4 != 0x1AE) {
                        if (temp_v0_4 != 0x1C2) {
                            if (temp_v0_4 != 0x1E0) {

                            } else {
                                Audio_PlayActorSound2((Actor *) this, 0x3A04U);
                            }
                        } else {
                            Audio_PlayActorSound2((Actor *) this, 0x391CU);
                        }
                    } else {
                        Audio_PlayActorSound2((Actor *) this, 0x38FCU);
                    }
                } else {
                    Audio_PlayActorSound2((Actor *) this, 0x38B4U);
                }
            }
            func_8013D9C8(globalCtx, &this->unk_3CE, &this->unk_3C8, 3);
            func_800EDF24((Actor *) this, globalCtx, sp2C);
        }
    }
}

void func_80A153FC(EnGo *this, GlobalContext *globalCtx) {
    void *sp5C;
    ? sp50;
    ? sp44;
    PosRot *sp38;
    PosRot *temp_a1;
    s32 temp_v0;
    u16 temp_v1;
    u32 temp_t9;

    temp_v1 = this->unk_390;
    if (((temp_v1 & 0x1000) != 0) && (this->actor.colChkInfo.damageEffect == 0xF)) {
        Audio_PlayActorSound2((Actor *) this, 0x28F5U);
        temp_t9 = this->actor.flags & ~0x10;
        this->actor.flags = temp_t9;
        this->actor.flags = temp_t9 | 0x2000000;
        func_80A118F8(&this->unk_3F8, subroutine_arg1, this->actor.world.pos.y, this->actor.world.pos.z);
        this->actor.shape.rot.x = 0;
        this->actor.speedXZ = 0.0f;
        Audio_PlayActorSound2((Actor *) this, 0x38B4U);
        if (gSaveContext.day == 3) {
            func_80A141D4((Actor *) this, globalCtx);
            this->actionFunc = func_80A14E14;
            return;
        }
        func_80A143A8((Actor *) this, globalCtx);
        this->actionFunc = func_80A149B0;
        return;
    }
    if (this->unk_284 != 0) {
        if ((temp_v1 & 0x800) != 0) {
            func_800B8E58(globalCtx->actorCtx.actorList[2].first, 0x83EU);
            func_800B8D50(globalCtx, (Actor *) this, 2.0f, this->actor.yawTowardsPlayer, 0.0f, 0U);
        }
        sp5C = Lib_SegmentedToVirtual(this->unk_284->unk_4);
        if (func_8013BD40(this, this->unk_284, this->unk_3E4) != 0) {
            temp_v0 = this->unk_3E4;
            if (temp_v0 >= (*this->unk_284 - 1)) {
                this->unk_3E4 = 0;
            } else {
                this->unk_3E4 = temp_v0 + 1;
            }
        }
        Math_Vec3s_ToVec3f((Vec3f *) &sp44, (this->unk_3E4 * 6) + sp5C);
        temp_a1 = &this->actor.world;
        sp38 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &sp50, (Vec3f *) temp_a1);
        Math_ApproachS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp50, (Vec3f *) &sp44), 4, 0x38E);
        this->actor.shape.rot.y = this->actor.world.rot.y;
        if ((this->actor.bgCheckFlags & 1) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x20B8U);
            func_800AE930(&globalCtx->colCtx, Effect_GetParams(this->unk_3E8), (f32 *) sp38, 18.0f, (s16) (s32) this->actor.shape.rot.y, this->actor.floorPoly, (s32) this->actor.floorBgId);
        } else {
            func_800AEF44(Effect_GetParams(this->unk_3E8));
        }
        this->actor.speedXZ = 4.0f;
        this->actor.shape.rot.x += (s32) (4.0f * 546.0f);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
}

s32 *func_80A15684(EnGo *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_v0;
    u32 temp_hi;

    if (arg0->unk_3EC != 0) {
        return D_80A1640C;
    }
    temp_v1 = arg0->actor.params;
    temp_v0 = temp_v1 & 0xF;
    if (temp_v0 == 1) {
        temp_hi = (u32) (((s32) (temp_v1 & 0x70) >> 4) & 0xFF) % 6U;
        switch (temp_hi) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            return D_80A163BC;
        case 1:                                     /* switch 1 */
            return D_80A163CC;
        case 2:                                     /* switch 1 */
            return D_80A163DC;
        case 3:                                     /* switch 1 */
            return D_80A163EC;
        case 4:                                     /* switch 1 */
            return D_80A163FC;
        case 5:                                     /* switch 1 */
            return D_80A163FC;
        }
    } else {
    default:                                        /* switch 1 */
        switch (temp_v0) {                          /* switch 2 */
        case 3:                                     /* switch 2 */
            return D_80A16350;
        case 4:                                     /* switch 2 */
            return *(&D_80A16704 + ((((s32) (temp_v1 & 0x70) >> 4) & 0xFF) * 4));
        case 5:                                     /* switch 2 */
            return D_80A16208;
        case 6:                                     /* switch 2 */
            return D_80A16254;
        case 7:                                     /* switch 2 */
            return D_80A16210;
        case 8:                                     /* switch 2 */
            return D_80A16280;
        default:                                    /* switch 2 */
            return D_80A16208;
        }
    }
}

void func_80A157C4(EnGo *this, GlobalContext *globalCtx) {
    ? sp40;
    ? sp34;
    s32 temp_v0;

    if (func_8010BF58((Actor *) this, globalCtx, func_80A15684(this, globalCtx), this->unk_3D8, &this->unk_28C) == 0) {
        if (((this->actor.params & 0xF) != 1) && ((this->unk_390 & 0x200) == 0)) {
            Math_Vec3f_Copy((Vec3f *) &sp40, this->unk_38C + 0x24);
            Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &this->actor.world);
            Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8);
        }
        func_8013D9C8(globalCtx, &this->unk_3CE, &this->unk_3C8, 3);
        return;
    }
    temp_v0 = this->actor.params & 0xF & 0xFF;
    if ((temp_v0 == 5) || (temp_v0 == 6) || (temp_v0 == 7)) {
        this->unk_3BC = 0;
        this->unk_3BE = 4;
        this->unk_390 &= 0xFFDF;
    }
    this->unk_390 &= 0xFFF7;
    func_8013AED4(&this->unk_390, 3U, 7U);
    this->unk_28C = 0;
    this->unk_390 |= 0x40;
    this->actionFunc = this->unk_18C;
}

void EnGo_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGo *this = (EnGo *) thisx;
    this->unk_288 = func_8013D924(0x1D8, globalCtx);
    this->unk_289 = func_8013D924(0x1F7, globalCtx);
    this->actionFunc = func_80A14798;
}

void EnGo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGo *this = (EnGo *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_194);
    Collider_DestroySphere(globalCtx, &this->unk_22C);
    Effect_Destroy(globalCtx, this->unk_3E8);
}

void EnGo_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    f32 phi_f0;
    EnGo *this = (EnGo *) thisx;

    func_80A12868(this, globalCtx);
    if (func_80A12774((Actor *) this, globalCtx) == 0) {
        func_80A12954(this, globalCtx);
    }
    this->actionFunc(this, globalCtx);
    if ((this->unk_390 & 0x400) == 0) {
        func_80A12D6C(this);
        func_80A12A64(this, globalCtx);
        func_80A131F8(this, globalCtx);
        func_80A12B78((Actor *) this, globalCtx);
    }
    if (((this->unk_390 & 0x100) == 0) && ((this->unk_390 & 0x200) == 0) && ((this->unk_390 & 0x400) == 0)) {
        if ((this->actor.params & 0xF) == 8) {
            phi_f0 = (f32) (this->unk_22C.dim.worldSphere.radius + 0x3C);
        } else {
            phi_f0 = (f32) (this->unk_194.dim.radius + 0x28);
        }
        func_8013C964((Actor *) this, globalCtx, phi_f0, 20.0f, 0, (s16) (this->unk_390 & 7));
    } else if (((this->unk_390 & 0x200) != 0) && (this->unk_3EC != 0)) {
        func_8013C964((Actor *) this, globalCtx, (f32) (this->unk_194.dim.radius + 0x28), 20.0f, 0, (s16) (this->unk_390 & 7));
    }
    temp_v0 = this->actor.params & 0xF & 0xFF;
    if ((temp_v0 != 8) && (temp_v0 != 2) && (temp_v0 != 1)) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
    }
    func_80A122EC(this);
    func_80A126BC(this, globalCtx);
    func_80A1203C(this);
}

void func_80A15B80(Actor *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = *arg1;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(arg0->world.pos.x, arg0->world.pos.y + arg0->shape.yOffset, arg0->world.pos.z, 0);
    Matrix_RotateY(arg0->shape.rot.y, 1U);
    SysMatrix_InsertTranslation(0.0f, -arg0->shape.yOffset, 0.0f, 1);
    SysMatrix_InsertZRotation_s(arg0->shape.rot.z, 1);
    SysMatrix_InsertTranslation(0.0f, arg0->shape.yOffset, 0.0f, 1);
    if ((arg0->unk_390 & 0x100) != 0) {
        Matrix_Scale(arg0->scale.x * 8.0f, arg0->scale.y * 8.0f, arg0->scale.z * 8.0f, 1);
    } else {
        Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
    }
    SysMatrix_InsertXRotation_s(arg0->shape.rot.x, 1);
    temp_v0 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    if ((arg0->unk_390 & 0x100) != 0) {
        temp_v0_2->words.w1 = (u32) &D_06001560;
        return;
    }
    temp_v0_2->words.w1 = (u32) &D_060091A8;
}

s32 func_80A15D04(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    f32 sp34;
    ? sp30;
    void *sp20;
    void *temp_v1;
    s32 phi_v0;

    if (((arg5->params & 0xF) == 8) && (arg1 == 0xA)) {
        arg1 = arg1;
        SysMatrix_GetStateTranslation((Vec3f *) &sp30);
        sp34 = arg5->world.pos.y;
        Math_Vec3f_ToVec3s(arg5 + 0x274, (Vec3f *) &sp30);
    }
    if (arg1 != 0xA) {
        if (arg1 != 0xB) {
            phi_v0 = 2;
            if (arg1 != 0xE) {
                phi_v0 = 9;
            }
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (((arg5->unk_390 & 0x80) != 0) && (phi_v0 < 9)) {
        temp_v1 = arg5 + (phi_v0 * 2);
        sp20 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk_3CE) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk_3C8) * 200.0f);
    }
    return 0;
}

void func_80A15E38(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk_390;
    phi_v1 = 1;
    if ((temp_v0 & 0x40) != 0) {
        phi_v1 = 0;
    }
    phi_v0 = 0;
    phi_v0 = 0;
    if ((temp_v0 & 0x10) != 0) {
        phi_v0 = 1;
    }
    if (phi_v1 == 0) {

    }
    if (arg1 != 0xA) {
        if (arg1 == 0x11) {
            func_8013AD9C((s16) (arg2->unk_3B0 + arg2->unk_3B4 + 0x4000), (s16) (arg2->unk_3B2 + arg2->unk_3B6 + arg2->shape.rot.y + 0x4000), arg2 + 0x290, arg2 + 0x2A8, phi_v1, phi_v0);
            SysMatrix_StatePop();
            SysMatrix_InsertTranslation(arg2->unk_290, arg2->unk_294, arg2->unk_298, 0);
            Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
            Matrix_RotateY(arg2->unk_2AA, 1U);
            SysMatrix_InsertXRotation_s(arg2->unk_2A8, 1);
            SysMatrix_InsertZRotation_s(arg2->unk_2AC, 1);
            SysMatrix_StatePush();
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    func_8013AD9C((s16) (arg2->unk_3B4 + 0x4000), (s16) (arg2->unk_3B6 + arg2->shape.rot.y + 0x4000), arg2 + 0x29C, arg2 + 0x2AE, phi_v1, phi_v0);
    SysMatrix_StatePop();
    SysMatrix_InsertTranslation(arg2->unk_29C, arg2->unk_2A0, arg2->unk_2A4, 0);
    Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
    Matrix_RotateY(arg2->unk_2B0, 1U);
    SysMatrix_InsertXRotation_s(arg2->unk_2AE, 1);
    SysMatrix_InsertZRotation_s(arg2->unk_2B2, 1);
    SysMatrix_StatePush();
}

void func_80A15FEC(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    if ((this->unk_390 & 0x300) == 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp38 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp38->polyOpa.p;
        sp38->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp30 = temp_v0;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80A1670C + (this->unk_3BE * 4)));
        if (this->unk_3DC == 0xE) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, -4000.0f, 1);
        }
        func_801343C0(globalCtx, this->unk_148, this->unk_164, (s32) this->unk_146, func_80A15D04, NULL, func_80A15E38, this);
    } else {
        func_80A15B80(this, (GraphicsContext **) globalCtx);
    }
    func_80A137C0(this, globalCtx, this->unk_39C, this->unk_3A0);
    func_80A1213C(this, (GraphicsContext **) globalCtx);
}
