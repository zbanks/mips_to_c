typedef struct {
    /* 0x0 */ u32 validModes;
    /* 0x4 */ ? unk_4;                              /* inferred */
    /* 0x4 */ char pad_4[0x4];
    /* 0x8 */ CameraModeParams *modes;
} CameraStateParams;                                /* size = 0xC */

typedef struct {
    /* 0x000 */ u32 magic;
    /* 0x004 */ GraphicsContext *gfxCtx;
    /* 0x008 */ Viewport viewport;
    /* 0x018 */ f32 fovy;
    /* 0x01C */ f32 zNear;
    /* 0x020 */ f32 zFar;
    /* 0x024 */ f32 scale;
    /* 0x028 */ Vec3f eye;
    /* 0x034 */ Vec3f at;
    /* 0x040 */ Vec3f up;
    /* 0x04C */ char pad_4C[0x4];
    /* 0x050 */ Vp vp;
    /* 0x060 */ Mtx projection;
    /* 0x0A0 */ Mtx viewing;
    /* 0x0E0 */ Mtx unkE0;
    /* 0x120 */ Mtx *projectionPtr;
    /* 0x124 */ Mtx *viewingPtr;
    /* 0x128 */ Vec3f quakeRot;
    /* 0x134 */ Vec3f quakeScale;
    /* 0x140 */ f32 quakeSpeed;
    /* 0x144 */ Vec3f currQuakeRot;
    /* 0x150 */ Vec3f currQuakeScale;
    /* 0x15C */ u16 normal;
    /* 0x15E */ char pad_15E[0x2];
    /* 0x160 */ u32 flags;
    /* 0x164 */ s32 unk_164;                        /* inferred */
} View;                                             /* size = 0x168 */

struct _mips2c_stack_Camera_Alloc {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Camera_ClearFlags {};          /* size 0x0 */

struct _mips2c_stack_Camera_Free {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Camera_LengthVec3f {};         /* size 0x0 */

struct _mips2c_stack_Camera_LerpVec3f {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Camera_Lerpf {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Camera_Lerps {};               /* size 0x0 */

struct _mips2c_stack_Camera_ModeBATT0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeBATT1 {
    /* 0x000 */ char pad_0[0x40];
    /* 0x040 */ PosRot *sp40;                       /* inferred */
    /* 0x044 */ char pad_44[0x4];
    /* 0x048 */ Vec3f *sp48;                        /* inferred */
    /* 0x04C */ Vec3f *sp4C;                        /* inferred */
    /* 0x050 */ Vec3f *sp50;                        /* inferred */
    /* 0x054 */ char pad_54[0x8];                   /* maybe part of sp50[3]? */
    /* 0x05C */ s16 sp5C;                           /* inferred */
    /* 0x05E */ s16 sp5E;                           /* inferred */
    /* 0x060 */ char pad_60[0x8];                   /* maybe part of sp5E[5]? */
    /* 0x068 */ f32 sp68;                           /* inferred */
    /* 0x06C */ char pad_6C[0xC];                   /* maybe part of sp68[4]? */
    /* 0x078 */ f32 sp78;                           /* inferred */
    /* 0x07C */ f32 sp7C;                           /* inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ s16 sp84;                           /* inferred */
    /* 0x086 */ s16 sp86;                           /* inferred */
    /* 0x088 */ s16 sp88;                           /* inferred */
    /* 0x08A */ s16 sp8A;                           /* inferred */
    /* 0x08C */ PosRot *sp8C;                       /* inferred */
    /* 0x090 */ char pad_90[0x4];
    /* 0x094 */ f32 sp94;                           /* inferred */
    /* 0x098 */ s16 sp98;                           /* inferred */
    /* 0x09A */ s16 sp9A;                           /* inferred */
    /* 0x09C */ f32 sp9C;                           /* inferred */
    /* 0x0A0 */ s16 spA0;                           /* inferred */
    /* 0x0A2 */ s16 spA2;                           /* inferred */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ s16 spA8;                           /* inferred */
    /* 0x0AA */ s16 spAA;                           /* inferred */
    /* 0x0AC */ f32 spAC;                           /* inferred */
    /* 0x0B0 */ s16 spB0;                           /* inferred */
    /* 0x0B2 */ s16 spB2;                           /* inferred */
    /* 0x0B4 */ f32 spB4;                           /* inferred */
    /* 0x0B8 */ s16 spB8;                           /* inferred */
    /* 0x0BA */ s16 spBA;                           /* inferred */
    /* 0x0BC */ f32 spBC;                           /* inferred */
    /* 0x0C0 */ s16 spC0;                           /* inferred */
    /* 0x0C2 */ s16 spC2;                           /* inferred */
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ f32 spCC;                           /* inferred */
    /* 0x0D0 */ char pad_D0[0x1C];                  /* maybe part of spCC[8]? */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ s32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ char pad_100[0x4];
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ char pad_108[0xC];                  /* maybe part of sp104[4]? */
    /* 0x114 */ f32 sp114;                          /* inferred */
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ f32 sp11C;                          /* inferred */
    /* 0x120 */ ? sp120;                            /* inferred */
    /* 0x120 */ char pad_120[0x4];
    /* 0x124 */ f32 sp124;                          /* inferred */
    /* 0x128 */ char pad_128[0x10];
};                                                  /* size = 0x138 */

struct _mips2c_stack_Camera_ModeBATT2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeBATT3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeBATT4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDATA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDATA1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDATA2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDATA3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDATA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDEMO0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s8 *sp1C;                            /* inferred */
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x18];                   /* maybe part of sp24[7]? */
    /* 0x40 */ Camera *sp40;                        /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_Camera_ModeDEMO1 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x1C];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0x8];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x8];                    /* maybe part of sp7C[3]? */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x8];                    /* maybe part of sp88[3]? */
    /* 0x94 */ s16 sp94;                            /* inferred */
    /* 0x96 */ s16 sp96;                            /* inferred */
    /* 0x98 */ Actor *sp98;                         /* inferred */
    /* 0x9C */ char pad_9C[0x14];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_Camera_ModeDEMO2 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x10];                   /* maybe part of sp34[5]? */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ ? *sp4C;                             /* inferred */
    /* 0x50 */ char pad_50[0x2];
    /* 0x52 */ s16 sp52;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x3];
    /* 0x5B */ u8 sp5B;                             /* inferred */
    /* 0x5C */ char pad_5C[0x4];                    /* maybe part of sp5B[5]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ s16 sp8C;                            /* inferred */
    /* 0x8E */ s16 sp8E;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ s16 sp94;                            /* inferred */
    /* 0x96 */ s16 sp96;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ s16 sp9C;                            /* inferred */
    /* 0x9E */ s16 sp9E;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x10];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_Camera_ModeDEMO3 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s8 *sp2C;                            /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x18];                   /* maybe part of sp34[7]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x8];                    /* maybe part of sp58[3]? */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x10];
};                                                  /* size = 0x78 */

struct _mips2c_stack_Camera_ModeDEMO4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x1C];                   /* maybe part of sp38[8]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0xC];                    /* maybe part of sp64[4]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ s16 sp78;                            /* inferred */
    /* 0x7A */ char pad_7A[0xE];
};                                                  /* size = 0x88 */

struct _mips2c_stack_Camera_ModeDEMO5 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s8 *sp30;                            /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x1C];                   /* maybe part of sp38[8]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0xC];                    /* maybe part of sp64[4]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ s16 sp78;                            /* inferred */
    /* 0x7A */ char pad_7A[0xE];
};                                                  /* size = 0x88 */

struct _mips2c_stack_Camera_ModeDEMO6 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDEMO7 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDEMO8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeDEMO9 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeFIXD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeFIXD1 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x6];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ PosRot *sp4C;                        /* inferred */
    /* 0x50 */ PosRot *sp50;                        /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0xC];                    /* maybe part of sp58[4]? */
    /* 0x68 */ void *sp68;                          /* inferred */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0x4];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x8];                    /* maybe part of sp70[3]? */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0x8];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ s16 sp88;                            /* inferred */
    /* 0x8A */ s16 sp8A;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ s16 sp90;                            /* inferred */
    /* 0x92 */ s16 sp92;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_Camera_ModeFIXD2 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x1C];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];                    /* maybe part of sp60[4]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ s16 sp74;                            /* inferred */
    /* 0x76 */ s16 sp76;                            /* inferred */
    /* 0x78 */ PosRot *sp78;                        /* inferred */
    /* 0x7C */ PosRot *sp7C;                        /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ void *sp88;                          /* inferred */
    /* 0x8C */ char pad_8C[0xC];                    /* maybe part of sp88[4]? */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char pad_A4[0xC];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0xC];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_Camera_ModeFIXD3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeFIXD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeJUMP0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeJUMP1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeJUMP2 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s8 *sp28;                            /* inferred */
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0xC];                    /* maybe part of sp38[4]? */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x14];                   /* maybe part of sp48[6]? */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x28];
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x8];                    /* maybe part of sp90[3]? */
    /* 0x9C */ ? sp9C;                              /* inferred */
    /* 0x9C */ char pad_9C[0x8];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ s16 spA8;                            /* inferred */
    /* 0xAA */ s16 spAA;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ s16 spB0;                            /* inferred */
    /* 0xB2 */ s16 spB2;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ s16 spB8;                            /* inferred */
    /* 0xBA */ s16 spBA;                            /* inferred */
    /* 0xBC */ ? spBC;                              /* inferred */
    /* 0xBC */ char pad_BC[0xC];
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_Camera_ModeJUMP3 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s8 *sp38;                            /* inferred */
    /* 0x3C */ PosRot *sp3C;                        /* inferred */
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];                    /* maybe part of sp4C[3]? */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0xC];                    /* maybe part of sp68[4]? */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x18];                   /* maybe part of sp78[7]? */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ s16 sp98;                            /* inferred */
    /* 0x9A */ s16 sp9A;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ s16 spA0;                            /* inferred */
    /* 0xA2 */ s16 spA2;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x8];                    /* maybe part of spA2[5]? */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ s16 spB0;                            /* inferred */
    /* 0xB2 */ s16 spB2;                            /* inferred */
    /* 0xB4 */ ? spB4;                              /* inferred */
    /* 0xB4 */ char pad_B4[0xC];
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x8];                    /* maybe part of spC0[3]? */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_Camera_ModeJUMP4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeKEEP0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeKEEP1 {
    /* 0x000 */ char pad_0[0x30];
    /* 0x030 */ PosRot *sp30;                       /* inferred */
    /* 0x034 */ char pad_34[0x4];
    /* 0x038 */ s8 *sp38;                           /* inferred */
    /* 0x03C */ PosRot *sp3C;                       /* inferred */
    /* 0x040 */ Vec3f *sp40;                        /* inferred */
    /* 0x044 */ Vec3f *sp44;                        /* inferred */
    /* 0x048 */ Vec3f *sp48;                        /* inferred */
    /* 0x04C */ char pad_4C[0x8];                   /* maybe part of sp48[3]? */
    /* 0x054 */ s16 sp54;                           /* inferred */
    /* 0x056 */ s16 sp56;                           /* inferred */
    /* 0x058 */ char pad_58[0x8];                   /* maybe part of sp56[5]? */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ char pad_64[0xC];                   /* maybe part of sp60[4]? */
    /* 0x070 */ s16 sp70;                           /* inferred */
    /* 0x072 */ s16 sp72;                           /* inferred */
    /* 0x074 */ f32 sp74;                           /* inferred */
    /* 0x078 */ s32 sp78;                           /* inferred */
    /* 0x07C */ f32 sp7C;                           /* inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ f32 sp84;                           /* inferred */
    /* 0x088 */ char pad_88[0x1C];                  /* maybe part of sp84[8]? */
    /* 0x0A4 */ PosRot *spA4;                       /* inferred */
    /* 0x0A8 */ f32 spA8;                           /* inferred */
    /* 0x0AC */ f32 spAC;                           /* inferred */
    /* 0x0B0 */ char pad_B0[0x10];                  /* maybe part of spAC[5]? */
    /* 0x0C0 */ f32 spC0;                           /* inferred */
    /* 0x0C4 */ s16 spC4;                           /* inferred */
    /* 0x0C6 */ s16 spC6;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ s16 spCC;                           /* inferred */
    /* 0x0CE */ s16 spCE;                           /* inferred */
    /* 0x0D0 */ f32 spD0;                           /* inferred */
    /* 0x0D4 */ s16 spD4;                           /* inferred */
    /* 0x0D6 */ s16 spD6;                           /* inferred */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ s16 spDC;                           /* inferred */
    /* 0x0DE */ s16 spDE;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ s16 spE4;                           /* inferred */
    /* 0x0E6 */ s16 spE6;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ s16 spEC;                           /* inferred */
    /* 0x0EE */ s16 spEE;                           /* inferred */
    /* 0x0F0 */ s16 spF0;                           /* inferred */
    /* 0x0F2 */ s16 spF2;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ char pad_100[0x4];
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ char pad_108[0xC];                  /* maybe part of sp104[4]? */
    /* 0x114 */ f32 sp114;                          /* inferred */
    /* 0x118 */ ? sp118;                            /* inferred */
    /* 0x118 */ char pad_118[0xC];
    /* 0x124 */ ? sp124;                            /* inferred */
    /* 0x124 */ char pad_124[0x4];
    /* 0x128 */ f32 sp128;                          /* inferred */
    /* 0x12C */ char pad_12C[0x4];
    /* 0x130 */ f32 sp130;                          /* inferred */
    /* 0x134 */ f32 sp134;                          /* inferred */
    /* 0x138 */ f32 sp138;                          /* inferred */
    /* 0x13C */ char pad_13C[0xC];
};                                                  /* size = 0x148 */

struct _mips2c_stack_Camera_ModeKEEP2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeKEEP3 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s8 *sp38;                            /* inferred */
    /* 0x3C */ PosRot *sp3C;                        /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ char pad_4C[0xC];                    /* maybe part of sp48[4]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0xE];                    /* maybe part of sp58[4]? */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ PosRot *sp70;                        /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ s16 sp86;                            /* inferred */
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x8];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ s16 sp94;                            /* inferred */
    /* 0x96 */ s16 sp96;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ s16 sp9C;                            /* inferred */
    /* 0x9E */ s16 sp9E;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ s16 spA4;                            /* inferred */
    /* 0xA6 */ s16 spA6;                            /* inferred */
    /* 0xA8 */ Actor *spA8;                         /* inferred */
    /* 0xAC */ Player *spAC;                        /* inferred */
    /* 0xB0 */ char pad_B0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char pad_BC[0x4];
    /* 0xC0 */ ? spC0;                              /* inferred */
    /* 0xC0 */ char pad_C0[0xC];
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ char pad_E4[0xC];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_Camera_ModeKEEP4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s8 *sp34;                            /* inferred */
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ s16 *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x14];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ char pad_70[0xC];                    /* maybe part of sp6E[7]? */
    /* 0x7C */ Player *sp7C;                        /* inferred */
    /* 0x80 */ char pad_80[0x2];
    /* 0x82 */ s16 sp82;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x10];                   /* maybe part of sp88[5]? */
    /* 0x9C */ s16 sp9C;                            /* inferred */
    /* 0x9E */ char pad_9E[0x4];                    /* maybe part of sp9C[3]? */
    /* 0xA2 */ s16 spA2;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x4];                    /* maybe part of spA2[3]? */
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ s16 spAC;                            /* inferred */
    /* 0xAE */ s16 spAE;                            /* inferred */
    /* 0xB0 */ ? spB0;                              /* inferred */
    /* 0xB0 */ char pad_B0[0x8];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ s16 spBC;                            /* inferred */
    /* 0xBE */ s16 spBE;                            /* inferred */
    /* 0xC0 */ ? spC0;                              /* inferred */
    /* 0xC0 */ char pad_C0[0xC];
    /* 0xCC */ Player *spCC;                        /* inferred */
    /* 0xD0 */ Actor *spD0;                         /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_Camera_ModeNORM0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ char pad_44[0x18];                   /* maybe part of sp40[7]? */
    /* 0x5C */ void *sp5C;                          /* inferred */
    /* 0x60 */ char pad_60[0x18];                   /* maybe part of sp5C[7]? */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ s16 sp7C;                            /* inferred */
    /* 0x7E */ char pad_7E[0x2];
    /* 0x80 */ ? sp80;                              /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ s16 sp86;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ s16 sp8C;                            /* inferred */
    /* 0x8E */ s16 sp8E;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x2];
    /* 0x96 */ s16 sp96;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ s16 sp9C;                            /* inferred */
    /* 0x9E */ s16 sp9E;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x10];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_Camera_ModeNORM1 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s8 *sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ Vec3f *sp4C;                         /* inferred */
    /* 0x50 */ char pad_50[0x8];                    /* maybe part of sp4C[3]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x6];
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x2];
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ s16 sp78;                            /* inferred */
    /* 0x7A */ s16 sp7A;                            /* inferred */
    /* 0x7C */ char pad_7C[0xC];                    /* maybe part of sp7A[7]? */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x10];                   /* maybe part of sp88[5]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ s16 spA0;                            /* inferred */
    /* 0xA2 */ s16 spA2;                            /* inferred */
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char pad_A4[0x6];
    /* 0xAA */ s16 spAA;                            /* inferred */
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0x4];
    /* 0xB0 */ s16 spB0;                            /* inferred */
    /* 0xB2 */ s16 spB2;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ s16 spB8;                            /* inferred */
    /* 0xBA */ s16 spBA;                            /* inferred */
    /* 0xBC */ char pad_BC[0x4];                    /* maybe part of spBA[3]? */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ char pad_CC[0x4];
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ ? spD8;                              /* inferred */
    /* 0xD8 */ char pad_D8[0x4];
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ char pad_E0[0x10];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_Camera_ModeNORM2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeNORM3 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x1C];                   /* maybe part of sp3C[8]? */
    /* 0x5C */ Player *sp5C;                        /* inferred */
    /* 0x60 */ char pad_60[0x2];
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];                    /* maybe part of sp62[3]? */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0x6];
    /* 0x76 */ s16 sp76;                            /* inferred */
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0x6];
    /* 0x7E */ s16 sp7E;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ s16 sp86;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_Camera_ModeNORM4 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Camera_ModeNop {};             /* size 0x0 */

struct _mips2c_stack_Camera_ModePARA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModePARA1 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0xC];                    /* maybe part of sp50[4]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0xE];                    /* maybe part of sp60[4]? */
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];                    /* maybe part of sp72[3]? */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ s16 sp7C;                            /* inferred */
    /* 0x7E */ s16 sp7E;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ s16 sp86;                            /* inferred */
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x6];
    /* 0x8E */ s16 sp8E;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ s16 sp94;                            /* inferred */
    /* 0x96 */ s16 sp96;                            /* inferred */
    /* 0x98 */ char pad_98[0x4];                    /* maybe part of sp96[3]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char pad_A4[0xC];
    /* 0xB0 */ ? spB0;                              /* inferred */
    /* 0xB0 */ char pad_B0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char pad_B8[0x10];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_Camera_ModePARA2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModePARA3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModePARA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC5 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x20];                   /* maybe part of sp38[9]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0x8];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ s16 sp78;                            /* inferred */
    /* 0x7A */ s16 sp7A;                            /* inferred */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x1C];
    /* 0xA4 */ s16 spA4;                            /* inferred */
    /* 0xA6 */ char pad_A6[0x2];
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x20];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_Camera_ModeSPEC6 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC7 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSPEC8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s8 *sp2C;                            /* inferred */
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x18];                   /* maybe part of sp38[7]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0xC];
};                                                  /* size = 0x80 */

struct _mips2c_stack_Camera_ModeSPEC9 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s8 *sp38;                            /* inferred */
    /* 0x3C */ s8 *sp3C;                            /* inferred */
    /* 0x40 */ PosRot *sp40;                        /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ Vec3f *sp4C;                         /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x34];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ s16 sp90;                            /* inferred */
    /* 0x92 */ s16 sp92;                            /* inferred */
    /* 0x94 */ char pad_94[0x10];                   /* maybe part of sp92[9]? */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ s16 spAC;                            /* inferred */
    /* 0xAE */ s16 spAE;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ s16 spB4;                            /* inferred */
    /* 0xB6 */ s16 spB6;                            /* inferred */
    /* 0xB8 */ ? spB8;                              /* inferred */
    /* 0xB8 */ char pad_B8[0x4];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x10];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_Camera_ModeSUBJ0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSUBJ1 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s8 *sp28;                            /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x10];                   /* maybe part of sp38[5]? */
    /* 0x4C */ s16 sp4C;                            /* inferred */
    /* 0x4E */ s16 sp4E;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];                    /* maybe part of sp4E[3]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ s16 sp64;                            /* inferred */
    /* 0x66 */ s16 sp66;                            /* inferred */
    /* 0x68 */ char pad_68[0xC];                    /* maybe part of sp66[7]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ s16 sp78;                            /* inferred */
    /* 0x7A */ s16 sp7A;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ s16 sp80;                            /* inferred */
    /* 0x82 */ s16 sp82;                            /* inferred */
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0xC];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_Camera_ModeSUBJ2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSUBJ3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeSUBJ4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeUNIQ0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s8 *sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ s8 *sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ PosRot *sp40;                        /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x10];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x14];                   /* maybe part of sp5C[6]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ void *sp78;                          /* inferred */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0x4];
    /* 0x80 */ s16 sp80;                            /* inferred */
    /* 0x82 */ s16 sp82;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ s16 sp88;                            /* inferred */
    /* 0x8A */ s16 sp8A;                            /* inferred */
    /* 0x8C */ ? sp8C;                              /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ Player *sp98;                        /* inferred */
    /* 0x9C */ ? sp9C;                              /* inferred */
    /* 0x9C */ char pad_9C[0x18];
    /* 0xB4 */ f32 spB4;                            /* inferred */
};                                                  /* size = 0xB8 */

struct _mips2c_stack_Camera_ModeUNIQ1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeUNIQ2 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ char pad_40[0x8];                    /* maybe part of sp3C[3]? */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x14];                   /* maybe part of sp48[6]? */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x6];
    /* 0x66 */ s16 sp66;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_Camera_ModeUNIQ3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeUNIQ4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeUNIQ5 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeUNIQ6 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ PosRot *sp20;                        /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_Camera_ModeUNIQ7 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeUNIQ8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_ModeUNIQ9 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_SetFlags {};            /* size 0x0 */

struct _mips2c_stack_Camera_SetMode {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Camera_Update {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ Player *sp44;                        /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ s16 sp60;                            /* inferred */
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];                    /* maybe part of sp62[3]? */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0xC];                    /* maybe part of sp70[4]? */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ CollisionPoly *sp8C;                 /* inferred */
    /* 0x90 */ CollisionPoly *sp90;                 /* inferred */
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x4];
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0xC];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
};                                                  /* size = 0xD0 */

struct _mips2c_stack_Camera_fabsf {};               /* size 0x0 */

struct _mips2c_stack_func_800CB270 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CB42C {};              /* size 0x0 */

struct _mips2c_stack_func_800CB544 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB584 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB5DC {};              /* size 0x0 */

struct _mips2c_stack_func_800CB60C {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ f32 sp8;                             /* inferred */
    /* 0x0C */ f32 spC;                             /* inferred */
};                                                  /* size = 0x10 */

struct _mips2c_stack_func_800CB674 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB6C8 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB700 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800CB780 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CB7CC {};              /* size 0x0 */

struct _mips2c_stack_func_800CB7F8 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB828 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB854 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB880 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB8C8 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB8F4 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB924 {};              /* size 0x0 */

struct _mips2c_stack_func_800CB950 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CBA08 {};              /* size 0x0 */

struct _mips2c_stack_func_800CBA34 {};              /* size 0x0 */

struct _mips2c_stack_func_800CBA7C {};              /* size 0x0 */

struct _mips2c_stack_func_800CBAAC {};              /* size 0x0 */

struct _mips2c_stack_func_800CBAD4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x14];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800CBB58 {};              /* size 0x0 */

struct _mips2c_stack_func_800CBB88 {};              /* size 0x0 */

struct _mips2c_stack_func_800CBC00 {};              /* size 0x0 */

struct _mips2c_stack_func_800CBC30 {};              /* size 0x0 */

struct _mips2c_stack_func_800CBC84 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ CollisionContext *sp74;              /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_800CBFA4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x28];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_800CC000 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_800CC128 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_800CC1C4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x8];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_800CC260 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];                    /* maybe part of sp64[3]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x14];                   /* maybe part of sp70[6]? */
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ s16 sp94;                            /* inferred */
    /* 0x96 */ s16 sp96;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_800CC488 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800CC56C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800CC5C8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ CollisionContext *sp2C;              /* inferred */
    /* 0x30 */ GlobalContext *sp30;                 /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ CollisionContext *sp38;              /* inferred */
    /* 0x3C */ CollisionPoly *sp3C;                 /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800CC740 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CC7A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CC804 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800CC874 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_800CC938 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CC958 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CC9C0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_800CCCEC {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];                    /* maybe part of sp22[3]? */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x1C];                   /* maybe part of sp3C[8]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x2];
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];                    /* maybe part of sp6A[3]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_800CD04C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x40];                   /* maybe part of sp60[17]? */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x8];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_800CD288 {};              /* size 0x0 */

struct _mips2c_stack_func_800CD2E0 {};              /* size 0x0 */

struct _mips2c_stack_func_800CD2F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800CD3E4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800CD44C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ ? *sp28;                             /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x2C];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_800CD634 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ s16 sp20;                            /* inferred */
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800CD6CC {};              /* size 0x0 */

struct _mips2c_stack_func_800CD6F8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2C[3]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_800CD834 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];                    /* maybe part of sp3E[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_800CDA14 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_800CDB6C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0xC];                    /* maybe part of sp34[4]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ s16 sp48;                            /* inferred */
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x8];                    /* maybe part of sp58[3]? */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_800CDE6C {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x10];                   /* maybe part of sp3C[5]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x8];                    /* maybe part of sp50[3]? */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x8];                    /* maybe part of sp5C[3]? */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_800CE2B8 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x10];                   /* maybe part of sp38[5]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];                    /* maybe part of sp4C[3]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_800CE5E0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ Player *sp44;                        /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_800CE79C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800CE930 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800CEAD8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];                    /* maybe part of sp1C[3]? */
    /* 0x28 */ s16 sp28;                            /* inferred */
    /* 0x2A */ char pad_2A[0xE];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800CEC38 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x14];                   /* maybe part of sp1C[6]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800CED90 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 *sp2C;                           /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x14];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ s16 sp56;                            /* inferred */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x30];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ s32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0xC];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_800DDFE0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800DE0E0 {};              /* size 0x0 */

struct _mips2c_stack_func_800DE0EC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x14];                   /* maybe part of sp24[6]? */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ s16 sp50;                            /* inferred */
    /* 0x52 */ s16 sp52;                            /* inferred */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0xE];
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_800DE308 {};              /* size 0x0 */

struct _mips2c_stack_func_800DE324 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0xE];                    /* maybe part of sp2A[8]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800DE62C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x8];
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800DE840 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800DE890 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800DE954 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800DF498 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800DF840 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800DF86C {};              /* size 0x0 */

struct _mips2c_stack_func_800DF8EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800DFAC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800DFB14 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800DFC1C {};              /* size 0x0 */

struct _mips2c_stack_func_800DFC40 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s16 sp18;                            /* inferred */
    /* 0x1A */ char pad_1A[0x6];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800DFC68 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s16 sp18;                            /* inferred */
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800DFC90 {};              /* size 0x0 */

struct _mips2c_stack_func_800DFCB4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s16 sp18;                            /* inferred */
    /* 0x1A */ char pad_1A[0x6];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800DFCDC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s16 sp18;                            /* inferred */
    /* 0x1A */ s16 sp1A;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800DFD04 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800DFD78 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ ? sp4;                               /* inferred */
    /* 0x04 */ char pad_4[0x1C];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800DFEF0 {};              /* size 0x0 */

struct _mips2c_stack_func_800DFF18 {};              /* size 0x0 */

struct _mips2c_stack_func_800DFF34 {};              /* size 0x0 */

struct _mips2c_stack_func_800DFF44 {};              /* size 0x0 */

struct _mips2c_stack_func_800DFFAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800E007C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ PosRot *sp20;                        /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800E01AC {};              /* size 0x0 */

struct _mips2c_stack_func_800E01B8 {};              /* size 0x0 */

struct _mips2c_stack_func_800E01DC {};              /* size 0x0 */

struct _mips2c_stack_func_800E0228 {};              /* size 0x0 */

struct _mips2c_stack_func_800E0238 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800E02AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800E0308 {};              /* size 0x0 */

struct _mips2c_stack_func_800E031C {};              /* size 0x0 */

struct _mips2c_stack_func_800E0348 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

f32 func_80086760(f32, f32);                        /* extern */
f32 func_800B7090(s32, s32);                        /* extern */
? func_800B81E0(f32 *, Player *, Camera *);         /* extern */
f32 func_800C40B4(s32, void **, s32 *, f32 *);      /* extern */
f32 func_800C41E4(GlobalContext *, CollisionContext *, CollisionPoly **, f32 *, Player *, f32 *); /* extern */
f32 func_800C4488(CollisionContext *, Vec3f *, f32 *, f32 *); /* extern */
s32 func_800C54AC(CollisionContext *, Vec3f *, f32 *, f32 *, Vec3f *, s32, s32, s32, ? *, f32 *); /* extern */
s32 func_800C9728(s32, u32, s32, s32);              /* extern */
? func_800C98CC(s32, s32, ?, s16);                  /* extern */
s32 func_800C9EBC(s32, s32, s32, s32, f32 *, s32 *, s32 *); /* extern */
s16 func_800CA648(s32, s32, s32);                   /* extern */
? func_800CAA14(s32, s32, Vec3f *, Vec3f *, ? *);   /* extern */
s32 func_80169C64(s32, s32, s32);                   /* extern */
? func_80169C84(s32, s16, s16);                     /* extern */
? func_80179A44(s8 *, PosRot *, s8 *);              /* extern */
s32 func_8017D2FC(f32, f32, f32, f32, Vec3f *, f32 *, f32 *, s32); /* extern */
f32 func_800CB270(f32 arg0, f32 arg1, s16, s16);    /* static */
s16 func_800CB42C(s16 arg0, s16 arg1, f32 arg2, s16 arg3, ?, ?); /* static */
void func_800CB584(Camera *arg0);                   /* static */
void func_800CB5DC(Camera *arg0, s32);              /* static */
s8 *func_800CB60C(s8 *arg0, void *arg1);            /* static */
s16 func_800CB674(s16 arg0, s16 arg1, f32 arg2);    /* static */
void func_800CB6C8(Camera *arg0, PosRot *arg1, PosRot *); /* static */
f32 func_800CB780(Camera *arg0, f32, Camera *);     /* static */
s32 func_800CB7CC(? *arg0);                         /* static */
s32 func_800CB7F8(Camera *arg0);                    /* static */
s32 func_800CB828(Camera *arg0);                    /* static */
s32 func_800CB854(Camera *arg0);                    /* static */
s32 func_800CB880(Camera *arg0);                    /* static */
s32 func_800CB8C8(Camera *arg0);                    /* static */
s32 func_800CB8F4(Camera *arg0);                    /* static */
s32 func_800CB924(Camera *arg0, s16);               /* static */
s32 func_800CB950(Camera *arg0, s16);               /* static */
s32 func_800CBA08(Camera *arg0);                    /* static */
s32 func_800CBA34(Camera *arg0);                    /* static */
s32 func_800CBA7C(Camera *arg0);                    /* static */
s8 func_800CBAAC(Camera *arg0);                     /* static */
? *func_800CBAD4(? *arg0, Camera *arg1);            /* static */
s32 func_800CBB58(Camera *arg0);                    /* static */
s32 func_800CBB88(void *arg0);                      /* static */
s32 func_800CBC00(Camera *arg0);                    /* static */
s32 func_800CBC30(Camera *arg0, f32 arg1, f32 arg2); /* static */
s32 func_800CBC84(? *arg0, Vec3f *arg1, Vec3f *arg2, s32 arg3); /* static */
void func_800CBFA4(Camera *arg2, Vec3f *, Vec3f *, ?); /* static */
s32 func_800CC000(Camera *arg0, Vec3f *arg1, Vec3f *arg2, f32 *, Vec3f *); /* static */
s32 func_800CC128(Camera *arg0, Vec3f *arg2, f32 *); /* static */
s32 func_800CC1C4(Camera *arg0, Vec3f *arg1, f32 *); /* static */
s16 func_800CC260(Camera *arg0, Vec3f *arg1, Vec3f *arg2, f32 *arg3, Actor **arg4, s16 arg5); /* static */
f32 func_800CC488(? *arg0, ? *arg1, f32 *arg2, s32 *arg3); /* static */
void func_800CC56C(Camera *arg1, f32 *);            /* static */
f32 func_800CC5C8(Camera *arg0, ? *arg1, f32 *arg2, f32 *arg3); /* static */
s32 func_800CC740(void *arg0, s32 arg1);            /* static */
void func_800CC7A8(Camera *arg0, s16 arg1, s16);    /* static */
u32 func_800CC804(Camera *arg0, s32 *arg1, CollisionPoly *arg2); /* static */
s16 func_800CC874(Camera *arg0, f32 *arg1);         /* static */
void func_800CC938(Camera *);                       /* static */
s16 func_800CC958(? *arg0, PosRot *arg1);           /* static */
s16 func_800CC9C0(Camera *arg0, s16 arg1, s16 arg2); /* static */
f32 func_800CCCEC(Camera *arg0, s16 arg1);          /* static */
void func_800CD04C(? *arg0, s16 arg1, s16 arg2, s16 arg3); /* static */
f32 func_800CD288(Camera *arg0, f32 arg1);          /* static */
void func_800CD2E0(Camera *arg0, s16 arg1, s16, Camera *); /* static */
void func_800CD2F0(s32 arg0);                       /* static */
void func_800CD3E4(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 *arg4); /* static */
s32 func_800CD44C(Camera *arg0, f32 *arg1, Vec3f *arg2, void *arg3, s16 arg4); /* static */
f32 func_800CD634(Vec3f *arg0, s16 arg1, s16 arg2, f32 arg3); /* static */
f32 func_800CD6CC(Actor *arg0);                     /* static */
? func_800CD6F8(Camera *arg0, f32 *arg1, f32 arg2, s16 arg3, s16); /* static */
? func_800CD834(Camera *arg0, f32 *arg1, f32 arg2, f32 *arg3, f32 arg4, f32 *, f32); /* static */
? func_800CDA14(Camera *arg0, f32 *arg1, f32 arg2, f32 arg3); /* static */
? func_800CDB6C(Camera *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 *arg4, s16 arg5); /* static */
? func_800CDE6C(Camera *arg0, f32 *arg1, Vec3f *arg2, f32 arg3, f32 arg4, f32 *arg5, VecSph *arg6, s16 arg7); /* static */
? func_800CE2B8(Camera *arg0, f32 *arg1, PosRot *arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6, f32 *arg7, s16 arg8); /* static */
? func_800CE5E0(Camera *arg0, f32 *arg1, f32 arg2, f32 *arg3, s16 arg4); /* static */
void func_800CE79C(Camera *arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4); /* static */
void func_800CE930(Camera *arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4); /* static */
void func_800CEAD8(Camera *arg0, s16 arg1, s16 arg2, s16 arg3); /* static */
s16 func_800CEC38(Camera *arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4); /* static */
void func_800CED90(Camera *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, Vec3f *arg5, s16 *arg6); /* static */
void func_800DDFE0(Camera *arg0, s32);              /* static */
void func_800DE0E0(s32 arg0);                       /* static */
s16 func_800DE308(void *arg0, s16 arg1);            /* static */
? func_800DE324(Camera *arg0);                      /* static */
void func_800DE62C(Camera *arg0);                   /* static */
? func_800DE840(Camera *arg0);                      /* static */
? func_800DE890(Camera *);                          /* static */
s32 func_800DE954(Camera *arg0);                    /* static */
? func_800DF498(Camera *arg0, s16);                 /* static */
void func_800DF840(Camera *arg0, Camera *arg1, ?);  /* static */
s32 func_800DF86C(void *arg0, s16 arg1);            /* static */
s16 func_800DF8EC(Camera *arg0, s16 arg1, s16 arg2); /* static */
s16 *func_800DFC1C(s16 *arg0, Camera *arg1);        /* static */
s16 func_800DFC40(Camera *arg0);                    /* static */
s16 *func_800DFC90(s16 *arg0, Camera *arg1);        /* static */
? func_800DFD04(Camera *arg0, ? arg1, s16 arg2, s16 arg3); /* static */
? func_800DFD78(void *arg0, s32 arg1, void *arg2);  /* static */
? func_800DFEF0(void *arg0, s16 arg1);              /* static */
? func_800DFF18(void *arg0, s16 arg1);              /* static */
? func_800DFF34(void *arg0);                        /* static */
? func_800DFF44(s32 arg0, ? arg1, ? arg2, ? arg3);  /* static */
? func_800DFFAC(Camera *arg0, s32 arg1, s16 arg2, ? arg3, s16 arg4, s16 arg5, s16 arg6); /* static */
? func_800E007C(Camera *arg0, void *arg1);          /* static */
? func_800E01AC();                                  /* static */
void *func_800E01B8(void *arg0, void *arg1);        /* static */
void func_800E01DC(void *arg0, s16 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5); /* static */
s32 func_800E0228();                                /* static */
s16 func_800E0238(Camera *arg0);                    /* static */
void func_800E0308(void *arg0, s32 arg1);           /* static */
f32 func_800E031C(void *arg0);                      /* static */
static void D_801B9CE2;                             /* unable to generate initializer */
static s16 D_801B9E04 = 0;
static s32 D_801B9E08 = 1;
static s32 D_801B9E0C = 2;
static s32 D_801B9E10 = 0x20;
static s32 D_801B9E14 = 0xFFFFFFFF;
static ? D_801B9E18;                                /* unable to generate initializer */
static ? D_801B9E34;                                /* unable to generate initializer */
static s32 D_801B9E50 = 0;
static s32 D_801B9E54 = 0;
static s32 D_801B9E58 = 0;
static s32 D_801B9E5C = 0;
static f32 D_801B9E60 = 0.0f;
static ? D_801B9E64;                                /* unable to generate initializer */
static Vec3f D_801B9E84[4] = {
    {0.0f, 40.0f, 20.0f},
    {0.0f, 40.0f, 0.0f},
    {0.0f, 3.0f, -3.0f},
    {0.0f, 3.0f, -3.0f},
};
static ? D_801B9EB4;                                /* unable to generate initializer */
static Vec3f D_801B9ED4[4] = {
    {0.0f, 40.0f, 20.0f},
    {0.0f, 40.0f, 0.0f},
    {0.0f, 3.0f, -3.0f},
    {0.0f, 3.0f, -3.0f},
};
static ? D_801B9F04;                                /* unable to generate initializer */
static s16 D_801B9F0C = 0;
static s32 D_801ED920;
static f32 D_801EDBF4;
static f32 D_801EDBF8;
static Vec3f D_801EDC00;                            /* type too large by 8 */
static f32 D_801EDC04;
static f32 D_801EDC08;
static f32 D_801EDC0C;
static f32 D_801EDC10;
static f32 D_801EDC14[5];
static GlobalContext *D_801EDC28;
static ? D_801EDC30;
static ? D_801EDC8C;
static ? D_801EDC90;
static ? D_801EDC92;
static ? D_801EDC94;
static ? D_801EDC96;
static f32 D_801EDDD0;
static f32 D_801EDDD4;
static f32 D_801EDDD8;
static ? D_801EDDE0;
static Vec3f D_801EDDF0;
f32 D_801AECF0 = 4900.0f;
void *D_801B9CE4 = &D_801B9CE2;
s32 D_801B9F10 = 0;
s16 D_801EDBF0;
CameraStateParams cameraStates[91];                 /* unable to generate initializer */
s32 (*cameraUpdateFuncs[71])(Camera *) = {
    NULL,
    Camera_ModeNORM0,
    Camera_ModeNORM1,
    Camera_ModeNORM2,
    Camera_ModeNORM3,
    Camera_ModeNORM4,
    Camera_ModePARA0,
    Camera_ModePARA1,
    Camera_ModePARA2,
    Camera_ModePARA3,
    Camera_ModePARA4,
    Camera_ModeKEEP0,
    Camera_ModeKEEP1,
    Camera_ModeKEEP2,
    Camera_ModeKEEP3,
    Camera_ModeKEEP4,
    Camera_ModeSUBJ0,
    Camera_ModeSUBJ1,
    Camera_ModeSUBJ2,
    Camera_ModeSUBJ3,
    Camera_ModeSUBJ4,
    Camera_ModeJUMP0,
    Camera_ModeJUMP1,
    Camera_ModeJUMP2,
    Camera_ModeJUMP3,
    Camera_ModeJUMP4,
    Camera_ModeBATT0,
    Camera_ModeBATT1,
    Camera_ModeBATT2,
    Camera_ModeBATT3,
    Camera_ModeBATT4,
    Camera_ModeFIXD0,
    Camera_ModeFIXD1,
    Camera_ModeFIXD2,
    Camera_ModeFIXD3,
    Camera_ModeFIXD4,
    Camera_ModeDATA0,
    Camera_ModeDATA1,
    Camera_ModeDATA2,
    Camera_ModeDATA3,
    Camera_ModeDATA4,
    Camera_ModeUNIQ0,
    Camera_ModeUNIQ1,
    Camera_ModeUNIQ2,
    Camera_ModeUNIQ3,
    Camera_ModeUNIQ4,
    Camera_ModeUNIQ5,
    Camera_ModeUNIQ6,
    Camera_ModeUNIQ7,
    Camera_ModeUNIQ8,
    Camera_ModeUNIQ9,
    Camera_ModeDEMO0,
    Camera_ModeDEMO1,
    Camera_ModeDEMO2,
    Camera_ModeDEMO3,
    Camera_ModeDEMO4,
    Camera_ModeDEMO5,
    Camera_ModeDEMO6,
    Camera_ModeDEMO7,
    Camera_ModeDEMO8,
    Camera_ModeDEMO9,
    Camera_ModeSPEC0,
    Camera_ModeSPEC1,
    Camera_ModeSPEC2,
    Camera_ModeSPEC3,
    Camera_ModeSPEC4,
    Camera_ModeSPEC5,
    Camera_ModeSPEC6,
    Camera_ModeSPEC7,
    Camera_ModeSPEC8,
    Camera_ModeSPEC9,
};
GameInfo *gGameInfo;
SaveContext gSaveContext;

f32 Camera_fabsf(f32 f) {
    f32 phi_f2;

    if (f >= 0.0f) {
        phi_f2 = f;
    } else {
        phi_f2 = -f;
    }
    return phi_f2;
}

f32 Camera_LengthVec3f(Vec3f *v) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = v->x;
    temp_f12 = v->y;
    temp_f14 = v->z;
    return sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
}

f32 func_800CB270(f32 arg0, f32 arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 phi_f14;

    temp_f0 = Camera_fabsf(arg1);
    if (arg0 < temp_f0) {
        phi_f14 = 1.0f;
    } else {
        temp_f12 = 1.0f - 0.4f;
        temp_f2 = arg0 * temp_f12;
        if (temp_f0 < temp_f2) {
            phi_f14 = (arg1 * arg1 * temp_f12) / (temp_f2 * temp_f2);
        } else {
            temp_f12_2 = arg0 - temp_f0;
            temp_f2_2 = 0.4f * arg0;
            phi_f14 = 1.0f - ((temp_f12_2 * temp_f12_2 * 0.4f) / (temp_f2_2 * temp_f2_2));
        }
    }
    return phi_f14;
}

f32 Camera_Lerpf(f32 b, f32 a, f32 t, f32 minDist) {
    f32 sp18;
    f32 temp_f12;
    f32 phi_f2;

    temp_f12 = b - a;
    sp18 = temp_f12;
    phi_f2 = b;
    if (minDist <= Camera_fabsf(temp_f12)) {
        phi_f2 = a + (temp_f12 * t);
    }
    return phi_f2;
}

s16 Camera_Lerps(s16 b, s16 a, f32 t, s16 minDist) {
    s16 temp_v0;
    s32 phi_v1;
    s16 phi_v1_2;

    temp_v0 = b - a;
    phi_v1 = -(s32) temp_v0;
    if ((s32) temp_v0 >= 0) {
        phi_v1 = (s32) temp_v0;
    }
    phi_v1_2 = b;
    if (phi_v1 >= (s32) minDist) {
        phi_v1_2 = a + (s16) (s32) (((f32) temp_v0 * t) + 0.5f);
    }
    return phi_v1_2;
}

s16 func_800CB42C(s16 arg0, s16 arg1, f32 arg2, s16 arg3) {
    s16 temp_v0;
    s32 phi_v1;
    s16 phi_v1_2;

    temp_v0 = arg0 - arg1;
    phi_v1 = -(s32) temp_v0;
    if ((s32) temp_v0 >= 0) {
        phi_v1 = (s32) temp_v0;
    }
    phi_v1_2 = arg1;
    if (phi_v1 >= (s32) arg3) {
        phi_v1_2 = arg1 + (s16) (s32) (((f32) temp_v0 * arg2) + 0.5f);
    }
    return phi_v1_2;
}

void Camera_LerpVec3f(Vec3f *b, Vec3f *a, f32 tXZ, f32 tY, f32 minDist) {
    a->x = Camera_Lerpf(b->x, a->x, tXZ, minDist);
    a->y = Camera_Lerpf(b->y, a->y, tY, minDist);
    a->z = Camera_Lerpf(b->z, a->z, tXZ, minDist);
}

void func_800CB544(Camera *camera) {
    camera->yOffsetUpdateRate = 0.05f;
    camera->xzOffsetUpdateRate = 0.05f;
    camera->fovUpdateRate = 0.05f;
    camera->yawUpdateRateInv = 100.0f;
    camera->pitchUpdateRateInv = 16.0f;
    camera->rUpdateRateInv = 20.0f;
}

void func_800CB584(Camera *arg0) {
    arg0->rUpdateRateInv = 50.0f;
    arg0->yawUpdateRateInv = 50.0f;
    arg0->yOffsetUpdateRate = 0.01f;
    arg0->pitchUpdateRateInv = 100.0f;
    arg0->fovUpdateRate = 0.01f;
    arg0->xzOffsetUpdateRate = 0.1f;
    if (arg0->speedRatio > 1.0f) {
        arg0->speedRatio = 1.0f;
    }
}

void func_800CB5DC(Camera *arg0) {
    arg0->rUpdateRateInv = 1800.0f;
    arg0->yawUpdateRateInv = 1800.0f;
    arg0->pitchUpdateRateInv = 1800.0f;
    arg0->yOffsetUpdateRate = 0.01f;
    arg0->xzOffsetUpdateRate = 0.01f;
    arg0->fovUpdateRate = 0.01f;
}

s8 *func_800CB60C(s8 *arg0, void *arg1) {
    f32 spC;
    f32 sp8;
    f32 sp4;
    f32 *temp_t9;

    temp_t9 = &sp4;
    sp4 = (f32) arg1->unk_0;
    sp8 = (f32) arg1->unk_2;
    spC = (f32) arg1->unk_4;
    arg0->unk_0 = (f32) temp_t9->unk_0;
    arg0->unk_4 = (f32) temp_t9[1];
    arg0->unk_8 = (f32) temp_t9[2];
    return arg0;
}

s16 func_800CB674(s16 arg0, s16 arg1, f32 arg2) {
    return (s16) (s32) ((f32) (s16) (arg0 - arg1) * arg2);
}

void func_800CB6C8(Camera *arg0, PosRot *arg1) {
    arg0->posOffset.x = arg0->at.x - arg1->pos.x;
    arg0->posOffset.y = arg0->at.y - arg1->pos.y;
    arg0->posOffset.z = arg0->at.z - arg1->pos.z;
}

f32 func_800CB700(Camera *camera) {
    f32 sp24;
    Camera *temp_a2;
    Player *temp_a1;
    f32 temp_f2;
    f32 phi_f2;

    temp_a2 = camera;
    temp_a1 = temp_a2->player;
    if (temp_a1 == temp_a2->globalCtx->actorCtx.actorList[2].first) {
        phi_f2 = func_800B6FC8(temp_a1);
    } else {
        camera = temp_a2;
        func_800B81E0(&sp24, temp_a1, temp_a2);
        temp_f2 = sp28 - camera->playerPosRot.pos.y;
        phi_f2 = temp_f2;
        if (temp_f2 == 0.0f) {
            phi_f2 = 10.0f;
        }
    }
    return phi_f2;
}

f32 func_800CB780(Camera *arg0) {
    s32 temp_a1;
    f32 phi_f2;

    temp_a1 = arg0->player;
    if (temp_a1 == arg0->globalCtx->unk_1CCC) {
        phi_f2 = func_800B7090(temp_a1, temp_a1);
    } else {
        phi_f2 = 10.0f;
    }
    return phi_f2;
}

s32 func_800CB7CC(? *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk_90;
    if (temp_v0 == arg0->unk_8C->unk_1CCC) {
        return temp_v0->unk_A74 & 0x10;
    }
    return 0;
}

s32 func_800CB7F8(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_A6C & 0x800000;
    }
    return 0;
}

s32 func_800CB828(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_A74 & 0x2000;
    }
    return 0;
}

s32 func_800CB854(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_A6C & 0x20;
    }
    return 0;
}

s32 func_800CB880(Camera *arg0) {
    void *temp_v1;

    temp_v1 = arg0->player;
    if (temp_v1 == arg0->globalCtx->unk_1CCC) {
        if ((temp_v1->stateFlags3 & 0x8000) != 0) {
            return 0x3E7;
        }
        return temp_v1->unk_A6C & 0x8000000;
    }
    return 0;
}

s32 func_800CB8C8(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_A70 & 0x800;
    }
    return 0;
}

s32 func_800CB8F4(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_14B == 2;
    }
    return 0;
}

s32 func_800CB924(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_A74 & 0x1000;
    }
    return 0;
}

s32 func_800CB950(Camera *arg0) {
    void *temp_v0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;
    s32 phi_v1_2;

    phi_v0 = 1;
    phi_v0_2 = 1;
    if (arg0->player == arg0->globalCtx->unk_1CCC) {
        phi_v0 = 0;
        if (Camera_fabsf(arg0->playerPosRot.pos.y - arg0->playerGroundY) < 11.0f) {

        }
        phi_v1_2 = phi_v0;
        if (phi_v0 == 0) {
            temp_v0 = arg0->player;
            phi_v1 = 0;
            if (temp_v0->actor.gravity > -0.1f) {
                phi_v1 = 1;
            }
            phi_v1_2 = phi_v1;
            if (phi_v1 == 0) {
                phi_v1_2 = (temp_v0->stateFlags1 & 0x200000) != 0;
            }
        }
        phi_v0_2 = phi_v1_2;
    }
    return phi_v0_2;
}

s32 func_800CBA08(Camera *arg0) {
    void *temp_v1;

    temp_v1 = arg0->player;
    if (temp_v1 == arg0->globalCtx->unk_1CCC) {
        return temp_v1->unk_A6C & 4;
    }
    return 0;
}

s32 func_800CBA34(Camera *arg0) {
    s32 temp_v1;
    void *temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        temp_v1 = (temp_v0->stateFlags1 & 0x1000) != 0;
        phi_v1 = temp_v1;
        if (temp_v1 == 0) {
            phi_v1 = (temp_v0->stateFlags3 & 0x100) != 0;
        }
        return phi_v1;
    }
    return 0;
}

s32 func_800CBA7C(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_A70 & 0x800000;
    }
    return 0;
}

s8 func_800CBAAC(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_ADB;
    }
    return 0;
}

? *func_800CBAD4(? *arg0, Camera *arg1) {
    ? sp24;
    Player *temp_a2;

    temp_a2 = arg1->player;
    if (temp_a2 == arg1->globalCtx->unk_1CCC) {
        arg0->unk_0 = (s32) temp_a2->bodyPartsPos[0].x;
        arg0->unk_4 = (s32) temp_a2->bodyPartsPos[0].y;
        arg0->unk_8 = (s32) temp_a2->bodyPartsPos[0].z;
        return arg0;
    }
    arg0 = arg0;
    func_800B8248((PosRot *) &sp24, temp_a2);
    arg0->unk_0 = (f32) sp24.unk_0;
    arg0->unk_4 = (f32) sp24.unk_4;
    arg0->unk_8 = (f32) sp24.unk_8;
    return arg0;
}

s32 func_800CBB58(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_145 == 5;
    }
    return 0;
}

s32 func_800CBB88(void *arg0) {
    s8 temp_v1_2;
    void *temp_v1;

    temp_v1 = arg0->unk_90;
    if (temp_v1 == arg0->unk_8C->unk_1CCC) {
        temp_v1_2 = temp_v1->unk_ADB;
        if ((temp_v1_2 != 0) && (temp_v1->unk_ADA == 0x1A)) {
            return 3;
        }
        if (((temp_v1->unk_A70 << 0xE) < 0) || ((temp_v1_2 != 0) && (temp_v1->unk_ADA == 0x1D))) {
            return 1;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_800CBC00(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->player;
    if (temp_v0 == arg0->globalCtx->unk_1CCC) {
        return temp_v0->unk_A6C & 0x200000;
    }
    return 0;
}

s32 func_800CBC30(Camera *arg0, f32 arg1, f32 arg2) {
    f32 temp_f0;

    temp_f0 = arg0->waterYPos;
    if ((temp_f0 != arg0->playerGroundY) && (temp_f0 < arg1) && (arg2 < temp_f0)) {
        return 1;
    }
    return 0;
}

s32 func_800CBC84(? *arg0, Vec3f *arg1, Vec3f *arg2, s32 arg3) {
    CollisionContext *sp74;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp50;
    f32 sp44;
    Vec3f *sp38;
    Vec3f *temp_t0;
    f32 temp_v1;
    f32 temp_v1_2;
    s32 phi_v1;
    s32 phi_v0;
    f32 phi_f12;

    sp74 = arg0->unk_8C + 0x830;
    OLib_Vec3fDistNormalize((Vec3f *) &sp50, arg1, arg2);
    sp5C = arg2->x + sp50;
    temp_t0 = &arg2[2];
    sp60 = arg2->y + sp54;
    sp64 = arg2->z + sp58;
    phi_v1 = 1;
    if ((arg3 & 1) != 0) {
        phi_v1 = 0;
    }
    phi_v0 = 1;
    if ((arg3 & 2) != 0) {
        phi_v0 = 0;
    }
    sp38 = temp_t0;
    if (func_800C54AC(sp74, arg1, &sp5C, &sp68, temp_t0, phi_v1, 1, phi_v0, (? *)-1, &sp44) == 0) {
        sp68.unk_0 = arg2->x;
        (&sp68)[1] = arg2->y;
        (&sp68)[2] = arg2->z;
        sp6C += 5.0f;
        if ((arg3 != 0) && (func_800CB7CC(arg0) != 0)) {
            arg2[2].x = arg0->unk_90->unk_80;
            sp44 = (bitwise f32) arg0->unk_90->unk_85;
            temp_v1 = arg2[2].x;
            arg2[1].x = (f32) temp_v1->unk_8 * 0.00003051851f;
            arg2[1].y = (f32) temp_v1->unk_A * 0.00003051851f;
            arg2[1].z = (f32) temp_v1->unk_C * 0.00003051851f;
            if (func_8017D2FC(arg2[1].x, arg2[1].y, arg2[1].z, (f32) temp_v1->unk_E, arg1, &sp5C, &sp68, 1) == 0) {
                phi_f12 = arg2->y - 20.0f;
            } else {
                sp6C += 5.0f;
                phi_f12 = arg2->y;
            }
        } else {
            phi_f12 = func_800C4488(sp74, sp38, &sp44, &sp68);
        }
        if ((arg2->y - phi_f12) > 5.0f) {
            arg2[1].x = -sp50;
            arg2[1].y = -sp54;
            arg2[1].z = -sp58;
            return 0;
        }
        goto block_13;
    }
block_13:
    temp_v1_2 = arg2[2].x;
    arg2[3].x = sp44;
    arg2[1].x = (f32) temp_v1_2->unk_8 * 0.00003051851f;
    arg2[1].y = (f32) temp_v1_2->unk_A * 0.00003051851f;
    arg2[1].z = (f32) temp_v1_2->unk_C * 0.00003051851f;
    arg2->x = arg2[1].x + sp68;
    arg2->y = arg2[1].y + sp6C;
    arg2->z = arg2[1].z + sp70;
    return (bitwise s32) sp44 + 1;
}

void func_800CBFA4(Camera *arg2) {
    ? sp20;

    sp20.unk_0 = (s32) arg2->unk_0;
    sp20.unk_4 = (s32) arg2->unk_4;
    sp20.unk_8 = (s32) arg2->unk_8;
    func_800CBC84(&sp20);
    arg2->unk_0 = (s32) sp20.unk_0;
    arg2->unk_4 = (s32) sp20.unk_4;
    arg2->unk_8 = (s32) sp20.unk_8;
}

s32 func_800CC000(Camera *arg0, Vec3f *arg1, Vec3f *arg2) {
    f32 sp40;
    f32 sp34;
    Vec3f *temp_a2;
    void *temp_v1;

    temp_a2 = arg2;
    if (func_800C54AC(arg0->globalCtx + 0x830, arg1, &sp40, arg2 + 0x18, (Vec3f *)1, 1, 1, -1, arg2 + 0x24) != 0) {
        temp_v1 = temp_a2[2].x;
        temp_a2[1].x = (f32) temp_v1->unk_8 * 0.00003051851f;
        temp_a2[1].y = (f32) temp_v1->unk_A * 0.00003051851f;
        temp_a2[1].z = (f32) temp_v1->unk_C * 0.00003051851f;
        temp_a2->x = sp40.unk_0;
        temp_a2->y = (&sp40)[1];
        temp_a2->z = (&sp40)[2];
        return temp_a2[3].x + 1;
    }
    arg2 = temp_a2;
    OLib_Vec3fDistNormalize((Vec3f *) &sp34, arg1, temp_a2);
    arg2[1].x = -sp34;
    arg2[1].y = -sp38;
    arg2[1].z = -sp3C;
    return 0;
}

s32 func_800CC128(Camera *arg0, Vec3f *arg2) {
    f32 sp38;
    ? sp34;
    f32 sp30;
    f32 *temp_t7;

    temp_t7 = &sp30;
    sp30 = 0.0f;
    if (func_800C54AC(arg0->globalCtx + 0x830, arg2, &sp38, temp_t7, (Vec3f *)1, 1, 1, -1, &sp34) != 0) {
        arg2->x = sp38.unk_0;
        arg2->y = (&sp38)[1];
        arg2->z = (&sp38)[2];
        return 1;
    }
    return 0;
}

s32 func_800CC1C4(Camera *arg0, Vec3f *arg1) {
    f32 sp40;
    ? sp38;
    f32 sp34;
    f32 *temp_t7;

    temp_t7 = &sp34;
    sp34 = 0.0f;
    if ((func_800C54AC(arg0->globalCtx + 0x830, arg1, &sp40, temp_t7, (Vec3f *)1, 1, 1, 0, &sp38) != 0) && (func_800C01B8((bitwise CollisionPoly *) sp34, arg1) < 0.0f)) {
        return 1;
    }
    return 0;
}

s16 func_800CC260(Camera *arg0, Vec3f *arg1, Vec3f *arg2, f32 *arg3, Actor **arg4, s16 arg5) {
    s16 sp96;
    s16 sp94;
    f32 sp90;
    s32 sp88;
    f32 sp70;
    f32 sp64;
    GlobalContext *temp_a0;
    s32 temp_s3;
    s32 temp_v0;
    s32 phi_s3;
    s32 phi_s3_2;
    s16 phi_v1;

    sp64.unk_0 = arg2->x;
    (&sp64)[1] = arg2->y;
    (&sp64)[2] = arg2->z;
    func_800B81E0(&sp70, arg0->globalCtx->actorCtx.actorList[2].first);
    sp90.unk_0 = arg3->unk_0;
    (&sp90)[1] = arg3[1];
    sp88 = 0xE;
    phi_s3 = 0;
loop_1:
    OLib_VecSphAddToVec3f(arg1, arg2, (VecSph *) &sp90);
    phi_s3_2 = phi_s3;
    if ((func_800CC1C4(arg0, arg1, &sp64) != 0) || (func_800CBC30(arg0, arg2->y, arg1->y) != 0) || (temp_a0 = arg0->globalCtx, (CollisionCheck_LineOCCheck(temp_a0, temp_a0 + 0x18884, arg2, arg1, arg4, (s32) arg5) != 0))) {
        temp_v0 = phi_s3 * 2;
        sp96 = *(&D_801B9E18 + temp_v0) + arg3->unk_6;
        sp94 = *(temp_v0 + &D_801B9E34) + (s32) ((f32) (bitwise s16) arg3->unk_4 * Rand_ZeroOne());
        if ((s32) sp94 >= 0x36B1) {
            sp94 += -0x3E80;
        }
        if ((s32) sp94 < -0x36B0) {
            sp94 += 0x3A98;
        }
        temp_s3 = phi_s3 + 1;
        sp90 *= 0.9f;
        sp64.unk_0 = arg2->x;
        (&sp64)[1] = arg2->y;
        (&sp64)[2] = arg2->z;
        phi_s3 = temp_s3;
        phi_s3_2 = temp_s3;
        if (temp_s3 < sp88) {
            goto loop_1;
        }
    }
    arg3->unk_0 = sp90.unk_0;
    arg3[1] = (&sp90)[1];
    phi_v1 = (s16) phi_s3_2;
    if (phi_s3_2 == 0xE) {
        phi_v1 = -1;
    }
    return phi_v1;
}

f32 func_800CC488(? *arg0, ? *arg1, f32 *arg2, s32 *arg3) {
    void *sp28;
    f32 temp_f0;

    temp_f0 = func_800C40B4(arg0->unk_8C + 0x830, &sp28, arg3, arg2);
    if (temp_f0 == -32000.0f) {
        arg1->unk_0 = 0.0f;
        arg1->unk_8 = 0.0f;
        arg1->unk_4 = 1.0f;
    } else {
        arg1->unk_0 = (f32) ((f32) sp28->unk_8 * 0.00003051851f);
        arg1->unk_4 = (f32) ((f32) sp28->unk_A * 0.00003051851f);
        arg1->unk_8 = (f32) ((f32) sp28->unk_C * 0.00003051851f);
    }
    return temp_f0;
}

void func_800CC56C(Camera *arg1) {
    f32 sp30;
    ? sp2C;
    ? sp20;
    f32 sp1C;

    sp2C.unk_0 = (s32) arg1->unk_0;
    sp2C.unk_4 = (s32) arg1->unk_4;
    sp2C.unk_8 = (s32) arg1->unk_8;
    sp30 += 80.0f;
    func_800CC488(&sp20, &sp2C, &sp1C);
}

f32 func_800CC5C8(Camera *arg0, ? *arg1, f32 *arg2, f32 *arg3) {
    CollisionPoly *sp3C;
    CollisionContext *sp38;
    GlobalContext *sp30;
    CollisionContext *sp2C;
    CollisionContext *temp_t8;
    GlobalContext *temp_t7;
    Player *temp_v0;
    f32 phi_f0;
    f32 phi_f2;

    temp_t7 = arg0->globalCtx;
    temp_t8 = temp_t7 + 0x830;
    sp2C = temp_t8;
    sp38 = temp_t8;
    sp30 = temp_t7;
    temp_v0 = arg0->player;
    if (temp_v0 != 0) {
        phi_f0 = func_800C41E4(temp_t7, temp_t8, &sp3C, arg3, temp_v0, arg2);
    } else {
        phi_f0 = func_800C4488(sp38, (Vec3f *) &sp3C, arg3, arg2);
    }
    phi_f2 = phi_f0;
    if ((phi_f0 == -32000.0f) || ((arg0->playerGroundY < phi_f0) && !(((f32) sp3C->normal.y * 0.00003051851f) > 0.5f))) {
        arg1->unk_0 = 0.0f;
        arg1->unk_8 = 0.0f;
        arg1->unk_4 = 1.0f;
        phi_f2 = -32000.0f;
    } else {
        arg1->unk_0 = (f32) ((f32) sp3C->normal.x * 0.00003051851f);
        arg1->unk_4 = (f32) ((f32) sp3C->normal.y * 0.00003051851f);
        arg1->unk_8 = (f32) ((f32) sp3C->normal.z * 0.00003051851f);
    }
    return phi_f2;
}

s32 func_800CC740(void *arg0, s32 arg1) {
    s32 phi_v0;

    if ((arg1 & 0x1000) != 0) {
        phi_v0 = func_800C9728(arg0->unk_8C + 0x830, arg1 & ~0x1000, 0x32, arg1) << 0x10;
    } else {
        phi_v0 = func_80169C64(arg0->unk_8C, arg1, arg1) << 0x10;
    }
    return phi_v0 >> 0x10;
}

void func_800CC7A8(Camera *arg0, s16 arg1) {
    if ((arg1 & 0x1000) != 0) {
        func_800C98CC(arg0->globalCtx + 0x830, arg1 & ~0x1000, 0x32, arg1);
        return;
    }
    func_80169C84(arg0->globalCtx, arg1, arg1);
}

u32 func_800CC804(Camera *arg0, s32 *arg1, CollisionPoly *arg2) {
    u32 sp1C;
    u32 temp_v0;
    u32 phi_v1;

    temp_v0 = func_800C9704(arg0->globalCtx + 0x830, arg2, *arg1);
    sp1C = temp_v0;
    if (func_800C9728(arg0->globalCtx + 0x830, temp_v0, *arg1) == 0) {
        phi_v1 = -1U;
    } else {
        phi_v1 = sp1C;
    }
    return phi_v1;
}

s16 func_800CC874(Camera *arg0, f32 *arg1) {
    s32 sp3C;
    s32 sp38;
    s32 sp30;
    s16 temp_v0;
    s32 temp_a0;
    s16 phi_a0;

    func_800B8248((PosRot *) &sp3C, arg0->player);
    *arg1 = sp40;
    temp_a0 = arg0->globalCtx;
    if (func_800C9EBC(temp_a0, temp_a0 + 0x830, sp3C, sp44, arg1, &sp38, &sp30) == 0) {
        *arg1 = sp40;
        return -1;
    }
    if (func_800CB880(arg0) == 0) {
        return -1;
    }
    temp_v0 = func_800CA648(arg0->globalCtx + 0x830, sp38, sp30);
    if (temp_v0 == 0) {
        phi_a0 = -2;
    } else {
        phi_a0 = temp_v0;
    }
    return phi_a0;
}

void func_800CC938(void) {
    func_800DDFE0();
}

s16 func_800CC958(? *arg0, PosRot *arg1) {
    return (s16) (s32) ((func_80086B30(arg1->pos.x - arg0->unk_0, arg1->pos.z - arg0->unk_8) * 57.295776f * 182.04167f) + 0.5f);
}

s16 func_800CC9C0(Camera *arg0, s16 arg1, s16 arg2) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    ? sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    s16 temp_s0;
    f32 phi_f18;
    f32 phi_f0;
    f32 phi_f16;
    f32 phi_f18_2;
    f32 phi_f18_3;

    sp3C = Math_SinS(arg1);
    sp38 = Math_CosS(arg1);
    temp_f0 = func_800CB700(arg0);
    temp_f12 = temp_f0 * 2.5f;
    sp30 = temp_f0;
    sp64 = arg0->playerPosRot.pos.x;
    sp68 = arg0->playerGroundY + (temp_f0 * 1.2f);
    sp6C = arg0->playerPosRot.pos.z;
    sp58 = (temp_f0 * sp3C) + sp64;
    sp5C = sp68;
    sp60 = (temp_f0 * sp38) + sp6C;
    if ((arg2 != 0) || ((arg0->globalCtx->state.frames & 1) == 0)) {
        D_801EDC00.x = sp68;
        sp2C = temp_f12;
        D_801EDC00.x = (temp_f12 * sp3C) + sp64;
        D_801EDC08 = (temp_f12 * sp38) + sp6C;
        func_800CC000((bitwise Camera *) temp_f12, (bitwise Vec3f *) sp3C, (Vec3f *) arg0, &sp64, &D_801EDC00);
        if (arg2 != 0) {
            temp_f18 = arg0->playerGroundY;
            D_801EDBF8 = temp_f18;
            D_801EDBF4 = temp_f18;
        }
        phi_f16 = D_801EDBF8;
        phi_f18_2 = D_801EDBF4;
    } else {
        temp_f0_2 = OLib_Vec3fDistXZ((Vec3f *) &sp64, &D_801EDC00);
        sp2C = temp_f0_2;
        temp_f10 = D_801EDC00.x;
        D_801EDC00.x = D_801EDC00.x + (D_801EDC0C * 5.0f);
        D_801EDC04 = temp_f10 + (D_801EDC10 * 5.0f);
        D_801EDC08 = D_801EDC08 + (*D_801EDC14 * 5.0f);
        if (temp_f0_2 < sp30) {
            sp30 = sp2C;
            temp_f0_3 = func_800CC5C8(arg0, &sp4C, (f32 *) &D_801EDC00, &sp34);
            phi_f18 = temp_f0_3;
            phi_f0 = temp_f0_3;
            phi_f16 = temp_f0_3;
        } else {
            D_801EDBF4 = func_800CC5C8(arg0, &sp4C, &sp58, &sp34);
            temp_f0_4 = func_800CC5C8(arg0, &sp4C, (f32 *) &D_801EDC00, &sp34);
            phi_f18 = D_801EDBF4;
            phi_f0 = temp_f0_4;
            phi_f16 = temp_f0_4;
        }
        phi_f18_3 = phi_f18;
        if (phi_f18 == -32000.0f) {
            phi_f18_3 = arg0->playerGroundY;
        }
        phi_f18_2 = phi_f18_3;
        if (phi_f0 == -32000.0f) {
            phi_f16 = phi_f18_3;
        }
    }
    D_801EDBF8 = phi_f16;
    D_801EDBF4 = phi_f18_2;
    sp40 = (phi_f16 - arg0->playerGroundY) * 0.19999999f;
    temp_s0 = (s16) (s32) ((func_80086B30((phi_f18_2 - arg0->playerGroundY) * 0.8f, sp30) * 57.295776f * 182.04167f) + 0.5f);
    return (s16) (temp_s0 + (s32) ((func_80086B30(sp40, sp2C) * 57.295776f * 182.04167f) + 0.5f));
}

f32 func_800CCCEC(Camera *arg0, s16 arg1) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp5C;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    f32 sp28;
    s16 sp22;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    s16 temp_v0;
    s16 temp_v0_2;
    f32 phi_f2;

    sp2C = func_800CB700(arg0);
    if (arg1 != 0) {
        D_801B9E5C = 0;
        D_801B9E60 = 0.0f;
    }
    sp5C.unk_0 = arg0->playerPosRot.pos.x;
    (&sp5C)[1] = arg0->playerPosRot.pos.y;
    (&sp5C)[2] = arg0->playerPosRot.pos.z;
    (&sp5C)[3] = arg0->unk_A0;
    (&sp5C)[4] = arg0->unk_A4;
    sp28 = Math_SinS(sp6A);
    temp_f0 = Math_CosS(sp6A);
    temp_f4 = sp60 + sp2C;
    temp_f6 = 30.0f * temp_f0;
    sp80 = temp_f4;
    sp38 = temp_f4;
    sp7C = (30.0f * sp28) + sp5C;
    temp_v0 = sp6A - 0x4000;
    sp84 = temp_f6 + sp64;
    sp34 = (12.0f * sp28) + sp5C;
    sp3C = (12.0f * temp_f0) + sp64;
    if ((arg0->globalCtx->state.frames & 1) != 0) {
        temp_v0_2 = sp6A + 0x2EE0;
        sp22 = temp_v0_2;
        temp_f6_2 = Math_SinS(temp_v0_2) * 50.0f;
        sp74 = sp80;
        sp70 = temp_f6_2 + sp7C;
        sp78 = (Math_CosS(sp22) * 50.0f) + sp84;
        if ((func_800CC000(arg0, (Vec3f *) &sp70, (Vec3f *) &sp34) != 0) && (func_800CC1C4(arg0, (Vec3f *) &sp7C, &sp70) != 0) && ((temp_f0_2 = OLib_Vec3fDistXZ((Vec3f *) &sp7C, (Vec3f *) &sp34), (D_801B9E5C != 2)) || !((50.0f - temp_f0_2) <= -D_801B9E60))) {
            D_801B9E5C = 1;
            temp_f2_2 = 50.0f - temp_f0_2;
            D_801B9E60 = temp_f2_2;
            if (temp_f2_2 == -temp_f2_2) {
                return 0.0f;
            }
            return temp_f2_2;
        }
        goto block_17;
    }
    sp22 = temp_v0;
    temp_f18 = Math_SinS(temp_v0) * 50.0f;
    sp74 = sp80;
    sp70 = temp_f18 + sp7C;
    sp78 = (Math_CosS(sp22) * 50.0f) + sp84;
    if ((func_800CC000(arg0, (Vec3f *) &sp70, (Vec3f *) &sp34) != 0) && (func_800CC1C4(arg0, (Vec3f *) &sp7C, &sp70) != 0) && ((temp_f0_3 = OLib_Vec3fDistXZ((Vec3f *) &sp7C, (Vec3f *) &sp34), (D_801B9E5C != 1)) || !(-(temp_f0_3 - 50.0f) <= D_801B9E60))) {
        D_801B9E5C = 2;
        temp_f2 = temp_f0_3 - 50.0f;
        D_801B9E60 = temp_f2;
        if (temp_f2 == -temp_f2) {
            return 0.0f;
        }
        return temp_f2;
    }
block_17:
    if (D_801B9E5C != 0) {
        phi_f2 = D_801B9E60;
    } else {
        phi_f2 = 0.0f;
    }
    D_801B9E5C = 0;
    D_801B9E60 = 0.0f;
    return phi_f2;
}

void func_800CD04C(? *arg0, s16 arg1, s16 arg2, s16 arg3) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp60;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_t9;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f8_4;
    s16 temp_a0;

    temp_f22 = Math_SinS(arg1);
    temp_f20 = Math_CosS(arg1);
    spBC = Math_SinS(arg2);
    spB8 = Math_CosS(arg2);
    temp_a0 = (s32) arg3 * -1;
    sp60 = (bitwise f32) temp_a0;
    spB4 = Math_SinS(temp_a0);
    temp_f0 = Math_CosS(temp_a0);
    sp60 = -temp_f22;
    temp_f16 = sp60 * spBC;
    sp28 = sp60;
    temp_f14 = 1.0f - temp_f0;
    temp_f2 = temp_f20 * spBC;
    temp_t9 = &spA4;
    temp_f8 = temp_f2 * temp_f2;
    sp54 = temp_f8;
    temp_f8_2 = temp_f2 * temp_f22 * temp_f14;
    temp_f12 = temp_f20 * spB8;
    sp2C = spB4;
    sp4C = temp_f8_2;
    sp44 = temp_f12 * spB4;
    sp28 = temp_f8_2;
    temp_f18 = sp60 * spB8;
    temp_f4 = temp_f12 * temp_f2 * temp_f14;
    temp_f10 = temp_f22 * spB4;
    sp40 = temp_f4;
    sp3C = temp_f10;
    temp_f10_2 = sp28;
    sp28 = temp_f4;
    sp30 = sp44;
    temp_f6 = sp28;
    sp28 = temp_f10_2;
    spA4 = (temp_f16 * (((1.0f - temp_f8) * temp_f0) + temp_f8)) + (temp_f20 * (temp_f10_2 - sp44)) + (temp_f18 * (temp_f6 + temp_f10));
    sp54 = temp_f22 * temp_f22;
    temp_f4_2 = temp_f22 * temp_f12 * temp_f14;
    temp_f8_3 = sp2C;
    sp2C = temp_f6;
    temp_f6_2 = sp30;
    temp_f8_4 = temp_f2 * temp_f8_3;
    sp30 = temp_f10;
    sp50 = temp_f4_2;
    sp58 = temp_f8_4;
    spA8 = (temp_f16 * (sp28 + temp_f6_2)) + (temp_f20 * (((1.0f - sp54) * temp_f0) + sp54)) + (temp_f18 * (temp_f4_2 - sp58));
    sp54 = temp_f12 * temp_f12;
    spAC = (temp_f16 * (temp_f6 - sp30)) + (temp_f20 * (temp_f4_2 + temp_f8_4)) + (temp_f18 * (((1.0f - sp54) * temp_f0) + sp54));
    arg0->unk_0 = (f32) temp_t9->unk_0;
    arg0->unk_4 = (f32) temp_t9[1];
    arg0->unk_8 = (f32) temp_t9[2];
}

f32 func_800CD288(Camera *arg0, f32 arg1) {
    f32 temp_f0;
    f32 phi_f2;

    temp_f0 = arg0->atLERPStepScale;
    if (temp_f0 < 0.12f) {
        phi_f2 = 0.12f;
    } else if (arg1 <= temp_f0) {
        phi_f2 = arg1;
    } else {
        phi_f2 = temp_f0 * 1.1f;
    }
    return phi_f2;
}

void func_800CD2E0(Camera *arg0, s16 arg1) {
    arg0->animState = 0;
}

void func_800CD2F0(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    temp_v0 = arg0 & 0x7000;
    if ((arg0 & 0xF000) != 0xF000) {
        if (temp_v0 != 0x1000) {
            if (temp_v0 != 0x2000) {
                if (temp_v0 != 0x3000) {
                    D_801B9E10 = 0;
                } else {
                    D_801B9E10 = 0x20;
                }
            } else {
                D_801B9E10 = 0x1B;
            }
        } else {
            D_801B9E10 = 0x1A;
        }
        if ((arg0 & 0x8000) != 0) {
            arg0 = arg0;
            ShrinkWindow_SetLetterboxMagnitude((s8) D_801B9E10);
        } else {
            arg0 = arg0;
            ShrinkWindow_SetLetterboxTarget((s8) D_801B9E10);
        }
    }
    temp_a0 = arg0 & 0xF00;
    temp_v1 = temp_a0 >> 8;
    phi_v1 = temp_v1;
    if (temp_a0 != 0xF00) {
        if (temp_v1 == 0) {
            phi_v1 = 0x32;
        }
        if (phi_v1 != D_801B9E0C.unk_0) {
            D_801B9E0C.unk_0 = phi_v1;
            Interface_ChangeAlpha(D_801B9E0C.unk_2);
        }
    }
}

void func_800CD3E4(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 *arg4) {
    ? sp24;

    func_800CAA14(arg3[2].x, arg4[6], arg1, arg2, &sp24);
    arg0->x = sp24.unk_0;
    arg0->y = sp24.unk_4;
    arg0->z = sp24.unk_8;
}

s32 func_800CD44C(Camera *arg0, f32 *arg1, Vec3f *arg2, void *arg3, s16 arg4) {
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    ? sp2C;
    ? *sp28;
    Vec3f *sp24;
    ? *temp_a1;
    ? *temp_a1_3;
    Vec3f *temp_a1_2;
    f32 temp_f0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 phi_v1;

    temp_a1 = arg0 + 0x50;
    arg2->x = arg0->eyeNext.x;
    arg2->y = arg0->eyeNext.y;
    arg2->z = arg0->eyeNext.z;
    sp28 = temp_a1;
    sp58 = 0;
    temp_v0 = func_800CBC84(temp_a1, NULL);
    sp60 = temp_v0;
    phi_v1 = sp58;
    if (temp_v0 != 0) {
        temp_a1_2 = arg2 + 0xC;
        arg3->unk_0 = (s32) sp28->unk_0;
        arg3->unk_4 = (s32) sp28->unk_4;
        arg3->unk_8 = (s32) sp28->unk_8;
        sp24 = temp_a1_2;
        OLib_Vec3fToVecSphGeo(arg2 + 0x1C, temp_a1_2);
        if ((s32) arg2->unk_20 >= 0x2EE1) {
            arg2->unk_22 = (s16) arg1->unk_6;
        }
        temp_v1 = arg4 & 1;
        if (temp_v1 != 0) {
            sp28 = (? *) temp_v1;
            memcpy((void *) &sp2C, arg3, 0x28U);
        }
        sp28 = (? *) (arg4 & 1);
        temp_v0_2 = func_800CC000(arg0, arg0 + 0x5C, (Vec3f *) arg3);
        sp5C = temp_v0_2;
        if (temp_v0_2 == 0) {
            if ((? *) (arg4 & 1) != 0) {
                memcpy(arg3, (void *) &sp2C, 0x28U);
                goto block_9;
            }
            return 3;
        }
block_9:
        temp_a1_3 = arg3 + 0xC;
        if (arg3->unk_18 == arg2[2].x) {
            return 3;
        }
        sp28 = temp_a1_3;
        OLib_Vec3fToVecSphGeo(arg3 + 0x1C, (Vec3f *) temp_a1_3);
        if ((s32) arg3->unk_20 >= 0x2EE1) {
            arg3->unk_22 = (s16) (arg1->unk_6 + 0x8000);
        }
        if (sp60 != sp5C) {
            phi_v1 = 3;
        } else {
            temp_f0 = (bitwise f32) Math3D_Parallel(sp24, (Vec3f *) temp_a1_3);
            if (temp_f0 < -0.5f) {
                phi_v1 = 6;
            } else if ((temp_f0 > 0.5f) || (phi_v1 = 1, ((arg4 & 2) != 0))) {
                phi_v1 = 3;
            }
        }
        goto block_20;
    }
block_20:
    return phi_v1;
}

f32 func_800CD634(Vec3f *arg0, s16 arg1, s16 arg2, f32 arg3) {
    ? sp1C;
    f32 sp18;

    OLib_Vec3fToVecSphGeo((VecSph *) &sp1C, arg0);
    sp18 = Math_CosS(sp20);
    sp18 = Camera_fabsf(Math_CosS((s16) (arg1 - sp22)) * sp18);
    return Math_CosS((s16) (arg1 - arg2)) * (sp18 * arg3);
}

f32 func_800CD6CC(Actor *arg0) {
    void *temp_v0;

    temp_v0 = (arg0->targetMode * 8) + &D_801AECF0;
    return sqrtf(temp_v0->unk_0 / temp_v0->unk_4);
}

? func_800CD6F8(Camera *arg0, f32 *arg1, f32 arg2, s16 arg3) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp38;
    PosRot *sp2C;
    PosRot *temp_v0;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f6;

    temp_f0 = func_800CB700(arg0);
    temp_f6 = temp_f0 + arg2;
    temp_f14 = temp_f0;
    sp50 = 0.0f;
    sp58 = 0.0f;
    sp54 = temp_f6;
    if (arg3 != 0) {
        sp38 = temp_f14;
        sp54 -= OLib_ClampMaxDist(func_800CD634(&arg0->floorNorm, arg0->playerPosRot.rot.y, arg1->unk_6, 25.0f), temp_f14);
    }
    temp_v0 = &arg0->playerPosRot;
    sp2C = temp_v0;
    Camera_LerpVec3f((Vec3f *) &sp50, &arg0->posOffset, arg0->xzOffsetUpdateRate, arg0->yOffsetUpdateRate, 0.1f);
    temp_a0 = &sp44;
    sp44 = temp_v0->pos.x + arg0->posOffset.x;
    temp_f16 = temp_v0->pos.y + arg0->posOffset.y;
    sp48 = temp_f16;
    sp4C = temp_v0->pos.z + arg0->posOffset.z;
    temp_f0_2 = arg0->playerGroundY + 10.0f;
    if (temp_f16 < temp_f0_2) {
        sp48 = temp_f0_2;
    }
    temp_f0_3 = arg0->atLERPStepScale;
    Camera_LerpVec3f((Vec3f *) temp_a0, &arg0->at, temp_f0_3, temp_f0_3, 0.2f);
    return 1;
}

? func_800CD834(Camera *arg0, f32 *arg1, f32 arg2, f32 *arg3, f32 arg4) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp44;
    s16 sp3E;
    s16 sp3C;
    PosRot *sp30;
    PosRot *temp_v0_2;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v0;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_f6 = func_800CB700(arg0) + arg2;
    sp58 = 0.0f;
    sp60 = 0.0f;
    sp5C = temp_f6;
    func_800B8898(arg0->globalCtx, (Actor *) arg0->player, &sp3E, &sp3C);
    temp_v0 = sp3C - 0x78;
    if ((s32) temp_v0 >= 0) {
        phi_v1 = temp_v0;
    } else {
        phi_v1 = (s16) ((s32) temp_v0 * -1);
    }
    sp3C = temp_v0;
    sp3E = phi_v1;
    OLib_ClampMaxDist((f32) phi_v1 / 120.0f, 1.0f);
    temp_v0_2 = &arg0->playerPosRot;
    sp30 = temp_v0_2;
    temp_f2 = OLib_ClampMaxDist(temp_v0_2->pos.y - *arg3, arg4);
    phi_v1_2 = phi_v1;
    if ((s32) phi_v1 >= 0x3D) {
        phi_v1_2 = 0x3C;
    }
    sp30 = temp_v0_2;
    sp3E = phi_v1_2;
    sp44 = temp_f2;
    temp_f0 = OLib_ClampMaxDist((f32) phi_v1_2 / 60.0f, 1.0f);
    sp5C -= temp_f2 * temp_f0 * temp_f0;
    Camera_LerpVec3f((Vec3f *) &sp58, &arg0->posOffset, arg0->xzOffsetUpdateRate, arg0->yOffsetUpdateRate, 0.1f);
    temp_a0 = &sp4C;
    sp4C = temp_v0_2->pos.x + arg0->posOffset.x;
    temp_f8 = temp_v0_2->pos.y + arg0->posOffset.y;
    sp50 = temp_f8;
    sp54 = temp_v0_2->pos.z + arg0->posOffset.z;
    temp_f0_2 = arg0->playerGroundY + 10.0f;
    if (temp_f8 < temp_f0_2) {
        sp50 = temp_f0_2;
    }
    temp_f0_3 = arg0->atLERPStepScale;
    Camera_LerpVec3f((Vec3f *) temp_a0, &arg0->at, temp_f0_3, temp_f0_3, 0.1f);
    return 1;
}

? func_800CDA14(Camera *arg0, f32 *arg1, f32 arg2, f32 arg3) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    PosRot *temp_s1;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f10;

    sp30 = func_800CB700(arg0);
    temp_s1 = &arg0->playerPosRot;
    sp50 = Math_SinS(temp_s1->rot.y) * arg3;
    temp_f10 = Math_CosS(temp_s1->rot.y) * arg3;
    sp54 = sp30 + arg2;
    sp58 = temp_f10;
    Camera_LerpVec3f((Vec3f *) &sp50, &arg0->posOffset, arg0->xzOffsetUpdateRate, arg0->yOffsetUpdateRate, 0.1f);
    temp_a1 = &sp38;
    temp_a2 = &sp44;
    sp44 = temp_s1->pos.x + arg0->posOffset.x;
    sp48 = temp_s1->pos.y + arg0->posOffset.y;
    sp4C = temp_s1->pos.z + arg0->posOffset.z;
    sp3C = sp48;
    sp38 = temp_s1->pos.x;
    sp40 = temp_s1->pos.z;
    if (func_800CC128(arg0, (Vec3f *) temp_a1, temp_a2) != 0) {
        sp44 -= arg0->posOffset.x - (sp44 - sp38);
        sp4C -= arg0->posOffset.z - (sp4C - sp40);
    }
    temp_f0 = arg0->atLERPStepScale;
    Camera_LerpVec3f((Vec3f *) &sp44, &arg0->at, temp_f0, temp_f0, 0.2f);
    return 1;
}

? func_800CDB6C(Camera *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 *arg4, s16 arg5) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp58;
    f32 sp54;
    f32 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    Vec3f *sp34;
    PosRot *temp_s1;
    Vec3f *temp_a0;
    f32 *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    PosRot *phi_s1;
    f32 phi_f2;

    sp4C = func_800CB700(arg0);
    phi_s1 = &arg0->playerPosRot;
    if ((arg5 & 0x40) != 0) {
        sp44 = func_800CCCEC(arg0, (s16) (arg5 & 0x10));
        temp_s1 = &arg0->playerPosRot;
        sp48 = 0;
        sp4A = temp_s1->rot.y + 0x4000;
        OLib_VecSphGeoToVec3f((Vec3f *) &sp70, (VecSph *) &sp44);
        phi_s1 = temp_s1;
    } else {
        temp_f14 = arg0->posOffset.x;
        temp_f2 = temp_f14 + arg0->playerPosDelta.x;
        temp_f12 = arg0->posOffset.z + arg0->playerPosDelta.z;
        if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < arg3) {
            sp70 = temp_f2;
            sp78 = temp_f12;
        } else {
            sp70 = temp_f14;
            sp78 = arg0->posOffset.z;
        }
    }
    sp74 = sp4C + arg2;
    if ((gGameInfo->data[364] != 0) && (arg5 != 0)) {
        sp74 -= func_800CD634(&arg0->floorNorm, phi_s1->rot.y, arg1->unk_6, 25.0f);
    }
    if (func_800CB950(arg0) != 0) {
        temp_f0 = Camera_Lerpf(phi_s1->pos.y, *arg4, 0.4f, 0.1f);
        *arg4 = temp_f0;
        sp74 -= phi_s1->pos.y - temp_f0;
        Camera_LerpVec3f((Vec3f *) &sp70, &arg0->posOffset, arg0->xzOffsetUpdateRate, arg0->yOffsetUpdateRate, 0.1f);
        sp34 = &arg0->at;
    } else {
        temp_a0 = &arg0->at;
        sp34 = temp_a0;
        temp_f2_2 = phi_s1->pos.y - *arg4;
        sp58 = temp_f2_2;
        sp54 = OLib_Vec3fDistXZ(temp_a0, &arg0->eye);
        temp_f12_2 = func_80086760(arg0->fov * 0.4f * 0.017453292f) * sp54;
        phi_f2 = temp_f2_2;
        if (temp_f12_2 < temp_f2_2) {
            *arg4 += temp_f2_2 - temp_f12_2;
            phi_f2 = temp_f12_2;
        } else {
            temp_f0_2 = -temp_f12_2;
            if (temp_f2_2 < temp_f0_2) {
                *arg4 += temp_f2_2 + temp_f12_2;
                phi_f2 = temp_f0_2;
            }
        }
        sp74 -= phi_f2;
        Camera_LerpVec3f((Vec3f *) &sp70, &arg0->posOffset, 0.3f, 0.2f, 0.1f);
        arg0->xzOffsetUpdateRate = 0.3f;
        arg0->yOffsetUpdateRate = 0.2f;
    }
    temp_a0_2 = &sp64;
    sp64 = phi_s1->pos.x + arg0->posOffset.x;
    sp68 = phi_s1->pos.y + arg0->posOffset.y;
    sp6C = phi_s1->pos.z + arg0->posOffset.z;
    temp_f0_3 = arg0->atLERPStepScale;
    Camera_LerpVec3f((Vec3f *) temp_a0_2, sp34, temp_f0_3, temp_f0_3, 0.2f);
    return 1;
}

? func_800CDE6C(Camera *arg0, f32 *arg1, Vec3f *arg2, f32 arg3, f32 arg4, f32 *arg5, VecSph *arg6, s16 arg7) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp68;
    f32 sp5C;
    f32 sp50;
    s32 sp3C;
    PosRot *sp38;
    PosRot *temp_v0;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    f32 *temp_a0_3;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_v1;
    f32 phi_f0;
    f32 phi_f20;
    f32 phi_f16;

    temp_f0 = func_800CB700(arg0);
    temp_f6 = temp_f0 + arg3;
    sp80 = 0.0f;
    sp88 = 0.0f;
    sp84 = temp_f6;
    if ((gGameInfo->data[364] != 0) && ((arg7 & 1) != 0)) {
        sp84 -= func_800CD634(&arg0->floorNorm, arg0->playerPosRot.rot.y, arg1->unk_6, 25.0f);
    }
    temp_v0 = &arg0->playerPosRot;
    sp74.unk_0 = temp_v0->pos.x;
    (&sp74)[1] = temp_v0->pos.y;
    (&sp74)[2] = temp_v0->pos.z;
    sp38 = temp_v0;
    sp78 += temp_f0;
    OLib_Vec3fDiffToVecSphGeo(arg6, (Vec3f *) &sp74, arg2);
    temp_a1 = &sp5C;
    temp_a1->unk_0 = arg6->r;
    temp_a1[1] = arg6->unk_4;
    if (arg4 < sp5C) {
        phi_f0 = sp5C * 0.2f;
    } else {
        phi_f0 = (sp5C * 0.9f) - (sp5C * 0.7f * (sp5C / arg4));
    }
    sp5C = phi_f0;
    temp_v1 = arg7 & 0x80;
    if (temp_v1 != 0) {
        sp5C *= 0.2f;
        arg0->yOffsetUpdateRate = 0.01f;
        arg0->xzOffsetUpdateRate = 0.01f;
    }
    sp3C = temp_v1;
    OLib_VecSphGeoToVec3f((Vec3f *) &sp68, (VecSph *) temp_a1);
    sp80 += sp68;
    sp84 += sp6C;
    sp88 += sp70;
    if (func_800CB950(arg0) != 0) {
        temp_f0_2 = Camera_Lerpf(sp38->pos.y, *arg5, 0.4f, 0.1f);
        *arg5 = temp_f0_2;
        sp84 -= sp38->pos.y - temp_f0_2;
        Camera_LerpVec3f((Vec3f *) &sp80, &arg0->posOffset, arg0->xzOffsetUpdateRate, arg0->yOffsetUpdateRate, 0.1f);
        sp3C = (s32) &arg0->at;
    } else {
        if (temp_v1 == 0) {
            temp_a0 = &arg0->at;
            sp3C = (s32) temp_a0;
            temp_f20 = sp38->pos.y - *arg5;
            temp_f0_3 = OLib_Vec3fDistXZ(temp_a0, &arg0->eye);
            temp_f14 = temp_f0_3;
            sp50 = temp_f0_3;
            func_80086B30(temp_f20, temp_f14);
            temp_f2 = func_80086760(arg0->fov * 0.4f * 0.017453292f) * sp50;
            if (temp_f2 < temp_f20) {
                *arg5 += temp_f20 - temp_f2;
                phi_f20 = temp_f2;
            } else {
                temp_f0_4 = -temp_f2;
                phi_f20 = temp_f20;
                if (temp_f20 < temp_f0_4) {
                    *arg5 += temp_f20 + temp_f2;
                    phi_f20 = temp_f0_4;
                }
            }
            sp84 -= phi_f20;
        } else {
            temp_a0_2 = &arg0->at;
            sp3C = (s32) temp_a0_2;
            temp_f20_2 = sp38->pos.y - *arg5;
            temp_f0_5 = func_80086B30(temp_f20_2, OLib_Vec3fDistXZ(temp_a0_2, &arg0->eye));
            if (temp_f0_5 > 0.34906584f) {
                phi_f16 = 1.0f - sin_rad(temp_f0_5 - 0.34906584f);
            } else if (temp_f0_5 < -0.17453292f) {
                phi_f16 = 1.0f - sin_rad(-0.17453292f - temp_f0_5);
            } else {
                phi_f16 = 1.0f;
            }
            sp84 -= temp_f20_2 * phi_f16;
        }
        Camera_LerpVec3f((Vec3f *) &sp80, &arg0->posOffset, 0.5f, 0.5f, 0.1f);
        arg0->xzOffsetUpdateRate = 0.5f;
        arg0->yOffsetUpdateRate = 0.5f;
    }
    temp_a0_3 = &sp74;
    sp74 = sp38->pos.x + arg0->posOffset.x;
    sp78 = sp38->pos.y + arg0->posOffset.y;
    sp7C = sp38->pos.z + arg0->posOffset.z;
    temp_f0_6 = arg0->atLERPStepScale;
    Camera_LerpVec3f((Vec3f *) temp_a0_3, (Vec3f *) sp3C, temp_f0_6, temp_f0_6, 0.2f);
    return 1;
}

? func_800CE2B8(Camera *arg0, f32 *arg1, PosRot *arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6, f32 *arg7, s16 arg8) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp60;
    f32 sp58;
    f32 sp4C;
    s32 sp38;
    PosRot *temp_s1;
    PosRot *temp_s1_2;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_v1;
    f32 phi_f20;
    f32 phi_f14;
    PosRot *phi_s1;

    temp_a1 = &sp58;
    sp7C = func_800CB700(arg0) + arg3;
    sp78 = 0.0f;
    sp80 = 0.0f;
    temp_a1->unk_0 = arg7->unk_0;
    temp_a1[1] = arg7[1];
    temp_v1 = arg8 & 0x80;
    sp58 = arg7->unk_0 * (arg5 * arg4);
    if (temp_v1 != 0) {
        arg0->yOffsetUpdateRate = 0.01f;
        arg0->xzOffsetUpdateRate = 0.01f;
    }
    sp38 = temp_v1;
    OLib_VecSphGeoToVec3f((Vec3f *) &sp60, (VecSph *) temp_a1);
    sp78 += sp60;
    sp7C += sp64;
    sp80 += sp68;
    temp_s1 = &arg0->playerPosRot;
    phi_s1 = temp_s1;
    if (func_800CB950(arg0) != 0) {
        temp_s1_2 = &arg0->playerPosRot;
        temp_f0 = Camera_Lerpf(temp_s1_2->pos.y, *arg6, 0.4f, 0.1f);
        *arg6 = temp_f0;
        sp7C -= temp_s1_2->pos.y - temp_f0;
        Camera_LerpVec3f((Vec3f *) &sp78, &arg0->posOffset, arg0->xzOffsetUpdateRate, arg0->yOffsetUpdateRate, 0.1f);
        phi_s1 = temp_s1_2;
    } else {
        temp_f14 = *arg1;
        temp_f20 = temp_s1->pos.y - *arg6;
        sp4C = temp_f14;
        temp_f0_2 = func_80086B30(temp_f20, temp_f14);
        if (sp38 == 0) {
            sp4C = temp_f14;
            temp_f2 = func_80086760(arg0->fov * 0.4f * 0.017453292f, temp_f14) * temp_f14;
            if (temp_f2 < temp_f20) {
                *arg6 += temp_f20 - temp_f2;
                phi_f20 = temp_f2;
            } else {
                temp_f0_3 = -temp_f2;
                phi_f20 = temp_f20;
                if (temp_f20 < temp_f0_3) {
                    *arg6 += temp_f20 + temp_f2;
                    phi_f20 = temp_f0_3;
                }
            }
            sp7C -= phi_f20;
        } else {
            if (temp_f0_2 > 0.34906584f) {
                phi_f14 = 1.0f - sin_rad(temp_f0_2 - 0.34906584f);
            } else if (temp_f0_2 < -0.17453292f) {
                phi_f14 = 1.0f - sin_rad(-0.17453292f - temp_f0_2);
            } else {
                phi_f14 = 1.0f;
            }
            sp7C -= temp_f20 * phi_f14;
        }
        Camera_LerpVec3f((Vec3f *) &sp78, &arg0->posOffset, 0.5f, 0.5f, 0.1f);
        arg0->xzOffsetUpdateRate = 0.5f;
        arg0->yOffsetUpdateRate = 0.5f;
    }
    temp_a0 = &sp6C;
    sp6C = phi_s1->pos.x + arg0->posOffset.x;
    sp70 = phi_s1->pos.y + arg0->posOffset.y;
    sp74 = phi_s1->pos.z + arg0->posOffset.z;
    temp_f0_4 = arg0->atLERPStepScale;
    Camera_LerpVec3f((Vec3f *) temp_a0, &arg0->at, temp_f0_4, temp_f0_4, 0.2f);
    return 1;
}

? func_800CE5E0(Camera *arg0, f32 *arg1, f32 arg2, f32 *arg3, s16 arg4) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp48;
    Player *sp44;
    f32 sp34;
    f32 sp30;
    Player *temp_v0;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    s32 phi_v0;

    sp48 = func_800CB700(arg0);
    temp_v0 = arg0->player;
    sp44 = temp_v0;
    func_800B8214((PosRot *) &sp30, temp_v0->unk_390);
    phi_v0 = 0;
    if (((bitwise s32) temp_v0->unk_390[1].colChkInfo.displacement.x & 4) != 0) {
        phi_v0 = 1;
    }
    if (phi_v0 != 0) {
        temp_f12 = sp34 - 49.0f;
        sp34 = temp_f12;
        *arg3 = Camera_Lerpf(temp_f12, *arg3, 0.1f, 0.1f);
        arg0->atLERPStepScale = Camera_Lerpf(0.4f, arg0->atLERPStepScale, 0.2f, 0.02f);
    } else {
        *arg3 = Camera_Lerpf(sp34, *arg3, 0.5f, 0.1f);
    }
    sp60 = 0.0f;
    sp68 = 0.0f;
    sp64 = sp48 + arg2;
    if (arg4 != 0) {
        sp64 -= func_800CD634(&arg0->floorNorm, arg0->playerPosRot.rot.y, arg1->unk_6, 25.0f);
    }
    Camera_LerpVec3f((Vec3f *) &sp60, &arg0->posOffset, arg0->xzOffsetUpdateRate, arg0->yOffsetUpdateRate, 0.1f);
    temp_a0 = &sp54;
    sp54 = arg0->posOffset.x + sp30;
    sp58 = arg0->posOffset.y + sp34;
    sp5C = arg0->posOffset.z + sp38;
    temp_f0 = arg0->atLERPStepScale;
    Camera_LerpVec3f((Vec3f *) temp_a0, &arg0->at, temp_f0, temp_f0, 0.2f);
    return 1;
}

void func_800CE79C(Camera *arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    f32 sp24;
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f12;
    f32 phi_f12_2;
    f32 phi_f12_3;
    f32 phi_f0;

    temp_f2 = arg1 / arg3;
    if (temp_f2 > 1.2f) {
        sp24 = arg3;
        temp_f0 = 20.0f / temp_f2;
        arg0->rUpdateRateInv = temp_f0;
        if (temp_f0 < 10.0f) {
            arg0->rUpdateRateInv = 10.0f;
        }
    } else {
        if (arg1 < arg2) {
            sp24 = arg2;
            if (arg4 != 0) {
                phi_f12 = 10.0f;
            } else {
                phi_f12 = 20.0f;
            }
            phi_f0 = Camera_Lerpf(phi_f12, arg0->rUpdateRateInv, 0.5f, 0.1f);
        } else if (arg3 < arg1) {
            sp24 = arg3;
            if (arg4 != 0) {
                phi_f12_2 = 10.0f;
            } else {
                phi_f12_2 = 20.0f;
            }
            phi_f0 = Camera_Lerpf(phi_f12_2, arg0->rUpdateRateInv, 0.5f, 0.1f);
        } else {
            sp24 = arg1;
            if (arg4 != 0) {
                phi_f12_3 = 20.0f;
            } else {
                phi_f12_3 = 1.0f;
            }
            phi_f0 = Camera_Lerpf(phi_f12_3, arg0->rUpdateRateInv, 0.5f, 0.1f);
        }
        arg0->rUpdateRateInv = phi_f0;
    }
    Camera_Lerpf(sp24, arg0->dist, 1.0f / arg0->rUpdateRateInv, 0.1f);
}

void func_800CE930(Camera *arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 phi_f0;
    f32 phi_f20;

    if (arg4 == 0) {
        temp_f0 = arg3 * 0.25f;
        if (temp_f0 > 80.0f) {
            phi_f20 = temp_f0;
        } else {
            phi_f20 = 80.0f;
        }
        phi_f0 = Camera_Lerpf(1000.0f, arg0->rUpdateRateInv, 0.5f, 0.1f);
        goto block_13;
    }
    temp_f2 = arg1 / arg3;
    if (temp_f2 > 1.2f) {
        temp_f0_2 = 20.0f / temp_f2;
        arg0->rUpdateRateInv = temp_f0_2;
        phi_f20 = arg3;
        if (temp_f0_2 < 10.0f) {
            arg0->rUpdateRateInv = 10.0f;
        }
    } else {
        if (arg1 < arg2) {
            phi_f0 = Camera_Lerpf(20.0f, arg0->rUpdateRateInv, 0.5f, 0.1f);
            phi_f20 = arg2;
        } else {
            phi_f20 = arg1;
            if (arg3 < arg1) {
                phi_f0 = Camera_Lerpf(20.0f, arg0->rUpdateRateInv, 0.5f, 0.1f);
                phi_f20 = arg3;
            } else {
                phi_f0 = Camera_Lerpf(1.0f, arg0->rUpdateRateInv, 0.5f, 0.1f);
            }
        }
block_13:
        arg0->rUpdateRateInv = phi_f0;
    }
    Camera_Lerpf(phi_f20, arg0->dist, 1.0f / arg0->rUpdateRateInv, 0.1f);
}

void func_800CEAD8(Camera *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 sp28;
    s32 sp1C;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_v0_2;
    s16 phi_a1;
    s16 phi_a1_2;
    f32 phi_f2;

    phi_a1 = arg1;
    if ((s32) arg1 >= 0) {
        phi_v1 = arg1 << 0x10;
    } else {
        phi_v1 = (s32) arg1 * -0x10000;
    }
    phi_v0 = arg3 << 0x10;
    if ((s32) arg3 > 0) {
        temp_a0 = arg3;
        sp28 = (s16) (phi_v1 >> 0x10);
        arg1 = arg1;
        arg3 = arg3;
        phi_v0 = (s32) (Math_CosS(temp_a0) * (f32) arg3) << 0x10;
        phi_a1 = arg1;
    }
    temp_a0_2 = arg2 - (phi_v0 >> 0x10);
    phi_v0_2 = -(s32) temp_a0_2;
    phi_a1_2 = phi_a1;
    if ((s32) temp_a0_2 >= 0) {
        phi_v0_2 = (s32) temp_a0_2;
    }
    if (phi_v0_2 < (phi_v1 >> 0x10)) {
        phi_f2 = (1.0f / arg0->pitchUpdateRateInv) * 3.0f;
    } else {
        sp1C = (s32) temp_a0_2;
        arg1 = phi_a1;
        phi_a1_2 = arg1;
        phi_f2 = (1.0f / arg0->pitchUpdateRateInv) * func_800CB270(0.8f, 1.0f - ((f32) (phi_v1 >> 0x10) * 0.00006896552f), temp_a0_2, phi_a1);
    }
    Camera_Lerps(temp_a0_2, phi_a1_2, phi_f2, 5);
}

s16 func_800CEC38(Camera *arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4) {
    f32 sp34;
    s32 sp1C;
    f32 temp_f0;
    f32 temp_f16;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v1;
    s32 phi_v1;
    f32 phi_f14;
    f32 phi_f16;

    temp_a1_2 = arg1;
    temp_v1 = arg2 - (temp_a1_2 + 0x8000);
    phi_v1 = (s32) temp_v1;
    if (arg0->xzSpeed > 0.001f) {
        phi_f14 = (f32) (s16) (temp_v1 + 0x8000) / 32768.0f;
    } else {
        phi_v1 = (s32) (s16) (arg2 - (temp_a1_2 + 0x8000));
        phi_f14 = 0.3f;
    }
    sp1C = phi_v1;
    arg1 = temp_a1_2;
    temp_f0 = func_800CB270(arg3, phi_f14, temp_a1_2, arg2);
    temp_a1 = arg1;
    temp_f16 = ((1.0f - temp_f0) * arg4) + temp_f0;
    phi_f16 = temp_f16;
    if (temp_f16 < 0.0f) {
        phi_f16 = 0.0f;
    }
    sp34 = phi_f16;
    arg1 = temp_a1;
    sp1C = phi_v1;
    return (s16) (arg1 + (s32) ((f32) phi_v1 * phi_f16 * func_800CB270(0.5f, arg0->speedRatio, temp_a1) * (1.0f / arg0->yawUpdateRateInv)));
}

void func_800CED90(Camera *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, Vec3f *arg5, s16 *arg6) {
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s32 sp8C;
    f32 sp88;
    ? sp58;
    s16 sp56;
    s16 sp54;
    f32 sp50;
    ? sp3C;
    Vec3f *sp38;
    Vec3f *sp34;
    Vec3f *sp30;
    f32 *sp2C;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a0_3;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    f32 *temp_a2;
    f32 *temp_a2_2;
    f32 *temp_a2_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    s16 temp_v0;
    s32 temp_cond;
    s32 phi_v1;
    s16 phi_v0;
    s32 phi_v1_2;
    s32 phi_v1_3;

    temp_v0 = arg5->unk_64;
    phi_v1 = 0;
    phi_v1_2 = 0;
    if (temp_v0 == 1) {
        temp_a0 = arg0 + 0x50;
        sp34 = temp_a0;
        sp8C = 0;
        temp_f0 = OLib_Vec3fDist(temp_a0, arg5);
        sp88 = temp_f0;
        if (arg3 < temp_f0) {
            goto block_12;
        }
        sp8C = sp8C;
        temp_f0_2 = Math3D_SignedDistanceFromPlane(arg5[5].y, arg5[5].z, arg5[6].x, (f32) arg5[6].y->unk_E, sp34);
        temp_cond = temp_f0_2 > 0.0f;
        sp88 = temp_f0_2;
        temp_a0_2 = arg0 + 0x5C;
        if (temp_cond) {
            goto block_12;
        }
        sp8C = sp8C;
        sp38 = temp_a0_2;
        temp_f0_3 = OLib_Vec3fDist(temp_a0_2, (Vec3f *) &arg5[4].y);
        sp88 = temp_f0_3;
        if (temp_f0_3 < 10.0f) {
            goto block_12;
        }
        sp8C = sp8C;
        temp_f0_4 = Math3D_SignedDistanceFromPlane(arg5[2].x, arg5[2].y, arg5[2].z, (f32) arg5[3].x->unk_E, sp38);
        sp88 = temp_f0_4;
        if (temp_f0_4 > 0.0f) {
            goto block_12;
        }
        if (arg5[2].y > 0.5f) {
            goto block_12;
        }
        sp8C = sp8C;
        Math3D_AngleBetweenVectors(arg0 + 0xF0, (Vec3f *) &arg5[5].y, &sp88);
        phi_v1 = sp8C;
        if (sp88 > 0.0f) {
block_12:
            arg5->unk_64 = 0;
            phi_v1 = sp8C;
        }
        if (arg5->unk_64 == 1) {
            phi_v1 = 2;
        }
    } else if (temp_v0 == 2) {
        arg5->unk_64 = 0;
    }
    sp38 = arg0 + 0x5C;
    phi_v1_3 = phi_v1;
    if (phi_v1 == 0) {
        if ((*arg6 & 2) != 0) {
            phi_v1_2 = 2;
        }
        if (arg5->unk_64 != 1) {
            phi_v0 = 1;
        } else {
            phi_v0 = 0;
        }
        phi_v1_3 = func_800CD44C(arg0, arg1, &arg5[1], (void *) &arg5[4].y, (s16) (phi_v0 | phi_v1_2));
    }
    if (phi_v1_3 != 1) {
        if (phi_v1_3 != 2) {
            temp_a1 = &arg5[1];
            if ((phi_v1_3 != 3) && (phi_v1_3 != 6)) {
                *arg6 &= 0xEFFF;
                arg5[7].z = arg4;
                sp38->x = temp_a1->x;
                sp38->y = temp_a1->y;
                sp38->z = temp_a1->z;
                return;
            }
            sp30 = temp_a1;
            temp_a0_3 = &arg0->at;
            sp34 = temp_a0_3;
            temp_f0_5 = OLib_Vec3fDist(temp_a0_3, temp_a1);
            sp88 = temp_f0_5;
            if (temp_f0_5 < 60.0f) {
                sp56 = func_800CB674(arg1->unk_6, arg2->unk_6, arg0->speedRatio) + arg2->unk_6;
                if ((*arg6 & 0x1000) != 0) {
                    sp54 = arg2->unk_4;
                } else {
                    sp54 = (s16) (s32) (Math_CosS(arg5->unk_2C) * 16380.0f);
                }
                temp_a2 = &sp50;
                sp50 = 60.0f - sp88;
                OLib_VecSphAddToVec3f((Vec3f *) &sp58, sp30, (VecSph *) temp_a2);
            } else {
                sp56 = func_800CB674(arg1->unk_6, arg2->unk_6, arg0->speedRatio) + arg2->unk_6;
                temp_a2_2 = &sp50;
                sp54 = func_800CB674(arg1->unk_4, arg2->unk_4, arg0->speedRatio) + arg2->unk_4;
                sp50 = arg1->unk_0;
                OLib_VecSphAddToVec3f((Vec3f *) &sp58, sp34, (VecSph *) temp_a2_2);
            }
            func_800CBC84((? *) arg0, sp34, (Vec3f *) &sp58, 0);
            sp38->x = sp58.unk_0;
            sp38->y = sp58.unk_4;
            sp38->z = sp58.unk_8;
            return;
        }
        goto block_31;
    }
    func_800CD3E4(arg5, &arg0->at, &arg0->eyeNext, &arg5[1], &arg5[4].y);
block_31:
    temp_a1_2 = &arg0->at;
    temp_a2_3 = &sp90;
    sp90 = arg5->x + (arg5[2].x + arg5[5].y);
    sp94 = arg5->y + (arg5[2].y + arg5[5].z);
    sp34 = temp_a1_2;
    sp2C = &arg5[4].y;
    sp30 = &arg0->eyeNext;
    sp98 = arg5->z + (arg5[2].z + arg5[6].x);
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp50, temp_a1_2, (Vec3f *) temp_a2_3);
    sp50 = arg1->unk_0;
    arg5->unk_64 = 1;
    arg5[7].z = 1.5f;
    OLib_VecSphAddToVec3f((Vec3f *) &sp58, temp_a1_2, (VecSph *) &sp50);
    if (func_800CBC84((? *) arg0, (Vec3f *) sp2C, (Vec3f *) &sp58, 0) == 0) {
        sp56 = func_800CB674(arg1->unk_6, arg2->unk_6, (arg0->speedRatio * 0.5f) + 0.5f) + arg2->unk_6;
        sp54 = func_800CB674(arg1->unk_4, arg2->unk_4, (arg0->speedRatio * 0.5f) + 0.5f) + arg2->unk_4;
        if ((s32) arg5->unk_2C < 0x2AA8) {
            arg5->unk_62 = sp56;
            arg5->unk_60 = sp54;
        } else {
            arg5->unk_62 = (s16) arg1->unk_6;
            arg5->unk_60 = (s16) arg1->unk_4;
        }
    }
    sp3C.unk_0 = (f32) sp58.unk_0;
    sp3C.unk_4 = (f32) sp58.unk_4;
    sp3C.unk_8 = (f32) sp58.unk_8;
    sp30->x = sp3C.unk_0;
    sp30->y = sp3C.unk_4;
    sp30->z = sp3C.unk_8;
    sp38->x = sp3C.unk_0;
    sp38->y = sp3C.unk_4;
    sp38->z = sp3C.unk_8;
}

s32 Camera_ModeNop(Camera *camera) {
    return 1;
}

s32 Camera_ModeNORM1(Camera *camera) {
    f32 spDC;
    ? spD8;
    f32 spD4;
    f32 spD0;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s16 spBA;
    s16 spB8;
    f32 spB4;
    ? spAC;
    ? spA4;
    f32 sp9C;
    f32 sp88;
    s16 sp7A;
    ? sp74;
    s16 sp72;
    f32 sp6C;
    ? sp64;
    ? sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f *sp4C;
    Vec3f *sp48;
    Vec3f *sp44;
    f32 sp40;
    s8 *sp3C;
    Player *temp_v0_11;
    PosRot *temp_a1_3;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f6;
    f32 temp_ret;
    s16 *temp_v0;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_v0_10;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_4;
    s32 temp_v0_13;
    s32 temp_v1_3;
    s8 *temp_a1_2;
    s8 *temp_v0_4;
    u8 temp_t2;
    void *temp_v0_12;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    f32 phi_f0;
    f32 phi_f2;
    f32 phi_f0_2;
    f32 phi_f0_3;
    f32 phi_f16;
    f32 phi_f2_2;
    f32 phi_f16_2;
    f32 phi_f16_3;
    f32 phi_f16_4;
    f32 phi_f0_4;
    s32 phi_v1;
    f32 phi_f0_5;
    f32 phi_f0_6;
    s16 phi_v0;
    f32 phi_f14;
    f32 phi_f16_5;
    s32 phi_v1_2;
    f32 phi_f2_3;
    s16 phi_a0;
    s16 phi_v0_2;
    s32 phi_v1_3;

    temp_f0 = func_800CB700(camera);
    sp88 = temp_f0;
    temp_v0 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    temp_a0 = camera->animState;
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    temp_v0_2 = temp_v0 + 0xC;
    temp_f2 = temp_f0 * 0.01f * (0.8f - ((68.0f / temp_f0) * -0.2f));
    camera->unk_0 = (f32) ((f32) *temp_v0 * temp_f2);
    camera->unk_4 = (f32) ((f32) temp_v0_2->unk_-8 * temp_f2);
    camera->unk_8 = (f32) ((f32) temp_v0_2->unk_-4 * temp_f2);
    temp_f12 = camera->unk_8;
    camera->unk_4 = (f32) (temp_f12 - (temp_f12 - camera->unk_4));
    if ((temp_a0 == 0) || (temp_a0 == 0xA) || (temp_a0 == 0x14)) {
        temp_v0_3 = temp_v0_2 + 0x18;
        camera->unk_20 = (s16) (s32) (((f32) temp_v0_2->unk_0 * 182.04167f) + 0.5f);
        camera->unk_C = (f32) temp_v0_3->unk_-14;
        camera->unk_C = (f32) (40.0f - (40.0f - camera->unk_C));
        camera->unk_10 = (f32) temp_v0_3->unk_-10;
        camera->unk_14 = (f32) ((f32) temp_v0_3->unk_-C * 0.01f);
        camera->unk_14 = (f32) (1.0f - (1.0f - camera->unk_14));
        camera->unk_18 = (f32) temp_v0_3->unk_-8;
        camera->unk_1C = (f32) ((f32) temp_v0_3->unk_-4 * 0.01f);
        camera->unk_22 = (s16) temp_v0_3->unk_0;
    }
    sp4C = temp_a2;
    sp48 = temp_a1;
    D_801B9E08 = (s32) camera->unk_22;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spA4, temp_a1, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp44 = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp9C, temp_a1, temp_a2_2);
    temp_a0_2 = camera->animState;
    if (temp_a0_2 != 0) {
        if (temp_a0_2 != 0xA) {
            if (temp_a0_2 != 0x14) {

            } else {
                func_800CB584(camera);
                goto block_9;
            }
        } else {
            goto block_13;
        }
    } else {
block_9:
        temp_v0_4 = &camera->paramData[36];
        temp_v0_4->unk_C = 1;
        if (((camera->unk_22 & 8) == 0) && (camera->animState != 0x14)) {
            temp_v0_4->unk_C = (s16) (temp_v0_4->unk_C | 0x1000);
        }
block_13:
        temp_a1_2 = &camera->paramData[36];
        if (camera->animState == 0xA) {
            temp_a1_2->unk_C = 0;
        }
        temp_a1_2->unk_8 = 0;
        *(&D_801EDC94 + (camera->thisIdx * 0x68)) = 0;
        temp_v0_5 = (camera->thisIdx * 0x68) + &D_801EDC30;
        temp_v1 = temp_v0_5->unk_64;
        temp_v0_5->unk_60 = temp_v1;
        *(&D_801EDC92 + (camera->thisIdx * 0x68)) = temp_v1;
        temp_a1_2->unk_A = 0x514;
        *(&D_801EDC8C + (camera->thisIdx * 0x68)) = camera->unk_C;
        temp_a1_2->unk_0 = (f32) camera->playerPosRot.pos.y;
        temp_a1_2->unk_4 = (f32) camera->xzSpeed;
        *(&D_801EDC96 + (camera->thisIdx * 0x68)) = 0;
        D_801B9E50 = 0;
        temp_a1_2->unk_10 = 120.0f;
        sp3C = temp_a1_2;
    }
    camera->animState = 1;
    D_801B9E50 = (s32) 1;
    if ((camera->speedRatio < 0.01f) || ((s32) camera->paramData[36].unk_A >= 0x4B1)) {
        temp_v0_6 = camera->paramData[36].unk_A;
        if ((s32) temp_v0_6 >= -0x4AF) {
            camera->paramData[36].unk_A = (s16) (temp_v0_6 - 1);
        }
    } else {
        camera->paramData[36].unk_A = 0x4B0;
    }
    sp3C = &camera->paramData[36];
    if (func_800CB950(camera, 1) != 0) {
        sp3C->unk_0 = (f32) camera->playerPosRot.pos.y;
    }
    if ((sp3C->unk_C & 0x1000) != 0) {
        spC8 = camera->speedRatio;
    } else {
        spC8 = ((camera->speedRatio * 3.0f) + 1.0f) * 0.25f;
    }
    spD8.unk_0 = (f32) camera->posOffset.x;
    spD8.unk_4 = (f32) camera->posOffset.y;
    spD8.unk_8 = (f32) camera->posOffset.z;
    spDC -= sp88 + camera->unk_0;
    temp_f0_2 = Camera_LengthVec3f((Vec3f *) &spD8);
    temp_f2_2 = camera->unk_4 + camera->unk_8;
    if (temp_f2_2 < temp_f0_2) {
        spC4 = 1.0f;
    } else {
        spC4 = temp_f0_2 / temp_f2_2;
    }
    temp_f0_3 = (camera->xzSpeed - sp3C->unk_4) * 0.2f;
    phi_f0 = temp_f0_3;
    if (temp_f0_3 < 0.0f) {
        phi_f0 = 0.0f;
    }
    spD0 = 0.2f;
    spC0 = OLib_ClampMaxDist(phi_f0 * phi_f0, 1.0f);
    temp_f2_3 = (0.5f * spC8) + (0.5f * spC4);
    sp40 = temp_f2_3;
    camera->yOffsetUpdateRate = Camera_Lerpf(0.05f, camera->yOffsetUpdateRate, temp_f2_3, 0.0001f);
    camera->xzOffsetUpdateRate = Camera_Lerpf(0.05f, camera->xzOffsetUpdateRate, sp40, 0.0001f);
    camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, sp40, 0.0001f);
    phi_f2 = temp_f2_3;
    if ((&D_801EDC30 + (camera->thisIdx * 0x68))->unk_64 == 1) {
        phi_f2 = 0.5f;
    }
    sp3C->unk_4 = (f32) camera->xzSpeed;
    temp_v0_7 = &D_801EDC30 + (camera->thisIdx * 0x68);
    temp_v1_2 = temp_v0_7->unk_66;
    if (temp_v1_2 != 0) {
        spD0 = 0.2f;
        camera->yawUpdateRateInv = Camera_Lerpf((f32) (temp_v1_2 * 2) + temp_v0_7->unk_5C, camera->yawUpdateRateInv, phi_f2, 0.1f);
        if ((camera->unk_22 & 8) != 0) {
            spD0 = 0.2f;
            phi_f0_2 = Camera_Lerpf(100.0f, camera->pitchUpdateRateInv, 0.5f, 0.1f);
        } else {
            spD0 = 0.2f;
            phi_f0_2 = Camera_Lerpf((f32) (*(&D_801EDC96 + (camera->thisIdx * 0x68)) * 2) + 16.0f, camera->pitchUpdateRateInv, 0.2f, 0.1f);
        }
        camera->pitchUpdateRateInv = phi_f0_2;
        temp_v0_8 = (camera->thisIdx * 0x68) + &D_801EDC30;
        temp_v0_8->unk_66 = (s16) (temp_v0_8->unk_66 - 1);
        phi_f16_2 = 0.2f;
    } else {
        temp_f0_4 = temp_v0_7->unk_5C;
        spD0 = 0.2f;
        camera->yawUpdateRateInv = Camera_Lerpf(temp_f0_4 - (temp_f0_4 * 0.7f * spC0), camera->yawUpdateRateInv, phi_f2, 0.1f);
        if (((camera->unk_22 & 8) != 0) && (camera->speedRatio > 0.01f)) {
            spD0 = 0.2f;
            phi_f0_3 = Camera_Lerpf(100.0f, camera->pitchUpdateRateInv, 0.5f, 0.1f);
        } else if (D_801ED920 != 0) {
            spD0 = 0.2f;
            phi_f0_3 = Camera_Lerpf(32.0f, camera->pitchUpdateRateInv, 0.5f, 0.1f);
        } else {
            spD0 = 0.2f;
            phi_f0_3 = Camera_Lerpf(16.0f, camera->pitchUpdateRateInv, 0.2f, 0.1f);
        }
        camera->pitchUpdateRateInv = phi_f0_3;
        phi_f16_2 = 0.2f;
    }
    if ((camera->unk_22 & 1) != 0) {
        temp_f0_5 = 1.0f / camera->unk_10;
        temp_a0_3 = func_800CC9C0(camera, (s16) (spAA + 0x8000), (s16) (sp3C->unk_C & 1));
        temp_f16 = temp_f0_5 * 0.3f * (1.0f - camera->speedRatio);
        spD0 = temp_f16;
        sp3C->unk_8 = Camera_Lerps(temp_a0_3, sp3C->unk_8, (temp_f0_5 * 0.7f) + temp_f16, 5);
        phi_f16_2 = temp_f16;
    } else {
        sp3C->unk_8 = 0;
    }
    temp_v0_9 = (camera->thisIdx * 0x68) + &D_801EDC30;
    if ((temp_v0_9->unk_64 == 1) && (camera->unk_0 > -40.0f)) {
        temp_f0_6 = Math_SinS(temp_v0_9->unk_60);
        temp_f6 = 1.0f - temp_f0_6;
        temp_f16_2 = temp_f0_6;
        camera->yawUpdateRateInv = 80.0f;
        camera->pitchUpdateRateInv = 80.0f;
        phi_f2_2 = (-40.0f * temp_f0_6) + (camera->unk_0 * temp_f6);
        phi_f16_2 = temp_f16_2;
    } else {
        phi_f2_2 = camera->unk_0;
    }
    temp_t0 = camera->unk_22;
    if ((temp_t0 & 0x60) != 0) {
        temp_f14 = camera->dist;
        temp_f0_7 = camera->unk_4;
        if (temp_f14 < temp_f0_7) {
            phi_f16 = 0.0f;
        } else {
            temp_f12_2 = camera->unk_8;
            if (temp_f12_2 < temp_f14) {
                phi_f16 = 1.0f;
            } else if (temp_f0_7 == temp_f12_2) {
                phi_f16 = 1.0f;
            } else {
                phi_f16 = (temp_f14 - temp_f0_7) / (temp_f12_2 - temp_f0_7);
            }
        }
        spD0 = phi_f16;
        func_800CDA14(camera, &sp9C, phi_f2_2, 25.0f * phi_f16 * camera->speedRatio);
        sp3C->unk_10 = 120.0f;
        phi_f16_3 = phi_f16;
    } else if (((temp_t0 & 0x80) != 0) && (temp_v0_10 = sp3C->unk_A, ((s32) temp_v0_10 < 0))) {
        temp_f0_8 = (f32) temp_v0_10 / -1200.0f;
        spD0 = phi_f16_2;
        func_800CDA14(camera, &sp9C, phi_f2_2 - ((phi_f2_2 - ((0.8f - ((68.0f / sp88) * -0.2f)) * sp88 * -0.45f)) * temp_f0_8 * 0.75f), 10.0f * temp_f0_8);
        sp3C->unk_10 = 120.0f;
        phi_f16_3 = phi_f16_2;
    } else if ((temp_t0 & 8) != 0) {
        spD0 = phi_f16_2;
        func_800CD834(camera, &sp9C, camera->unk_0, (f32 *) sp3C, sp3C->unk_10);
        temp_f0_9 = sp3C->unk_10;
        phi_f16_3 = phi_f16_2;
        if (temp_f0_9 > 20.0f) {
            sp3C->unk_10 = (f32) (temp_f0_9 - 0.2f);
        }
    } else {
        spD0 = phi_f16_2;
        func_800CD6F8(camera, &sp9C, phi_f2_2, (s16) (temp_t0 & 1));
        sp3C->unk_10 = 120.0f;
        phi_f16_3 = phi_f16_2;
    }
    spD0 = phi_f16_3;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spB4, sp48, sp44);
    temp_v1_3 = camera->unk_22 & 0x80;
    phi_f16_4 = phi_f16_3;
    if ((temp_v1_3 != 0) && ((s32) sp3C->unk_A < 0)) {
        temp_v0_11 = camera->player;
        if (temp_v0_11 == camera->globalCtx->actorCtx.actorList[2].first) {
            temp_t2 = temp_v0_11->transformation;
            switch (temp_t2) {
            case 4:
                phi_f16_4 = 66.0f;
                break;
            case 3:
                phi_f16_4 = 66.0f;
                break;
            case 1:
                phi_f16_4 = 115.0f;
                break;
            case 2:
                phi_f16_4 = 115.0f;
                break;
            case 0:
                /* fallthrough */
            default:
                phi_f16_4 = camera->unk_4;
                break;
            }
        }
        phi_f0_4 = (bitwise f32) func_800CE930(camera, spB4, phi_f16_4, phi_f16_4, (s16) 0);
    } else if (temp_v1_3 != 0) {
        phi_f0_4 = (bitwise f32) func_800CE930(camera, spB4, camera->unk_4, camera->unk_8, (s16) 1);
    } else {
        phi_f0_4 = (bitwise f32) func_800CE79C(camera, spB4, camera->unk_4, camera->unk_8, (s16) ((s32) sp3C->unk_A > 0));
    }
    spB4 = phi_f0_4;
    camera->dist = phi_f0_4;
    temp_v0_12 = (camera->thisIdx * 0x68) + &D_801EDC30;
    if (temp_v0_12->unk_64 != 0) {
        spB8 = Camera_Lerps(temp_v0_12->unk_60, spA0, 1.0f / camera->yawUpdateRateInv, 5);
        spBA = Camera_Lerps(*(&D_801EDC92 + (camera->thisIdx * 0x68)), spA2, 1.0f / camera->yawUpdateRateInv, 5);
    } else {
        temp_t0_2 = camera->unk_22;
        if ((temp_t0_2 & 0x20) != 0) {
            spBA = spA2;
            spB8 = spA0;
            camera->animState = 0x14;
        } else {
            temp_v0_13 = D_801ED920;
            temp_a1_3 = &camera->playerPosRot;
            if (temp_v0_13 != 0) {
                sp40 = (bitwise f32) temp_a1_3;
                OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp74, (Vec3f *) temp_a1_3, temp_v0_13 + 0x24);
                temp_t1 = sp40->unk_E - sp7A;
                if ((camera->unk_22 & 0xFF00) == 0xFF00) {
                    phi_f0_5 = 1.0f;
                } else {
                    phi_v1_3 = -(s32) temp_t1;
                    if ((s32) temp_t1 >= 0) {
                        phi_v1_3 = (s32) temp_t1;
                    }
                    phi_f0_5 = 1.0f - ((f32) phi_v1_3 / 10922.0f);
                }
                temp_v0_14 = spA2 - sp7A;
                phi_v1 = -(s32) temp_v0_14;
                if ((s32) temp_v0_14 >= 0) {
                    phi_v1 = (s32) temp_v0_14;
                }
                if (phi_v1 < 0x4000) {
                    sp7A += 0x8000;
                }
                if (((camera->unk_22 & 8) == 0) || (sp72 = temp_t1, sp6C = phi_f0_5, phi_f0_6 = phi_f0_5, (func_800CB924(camera) == 0))) {
                    sp6C = phi_f0_5;
                    spBA = func_800CEC38(camera, spA2, (s16) (sp40->unk_E - (s32) ((f32) temp_t1 * phi_f0_5)), camera->unk_14, spC0);
                    phi_f0_6 = phi_f0_5;
                }
                if (((camera->unk_22 & 8) == 0) || (camera->speedRatio < 0.01f)) {
                    temp_v0_15 = camera->unk_20;
                    spB8 = func_800CEAD8(camera, spA0, (s16) (temp_v0_15 + (s32) ((f32) (temp_v0_15 - sp78) * phi_f0_6 * 0.75f)), sp3C->unk_8);
                }
            } else if ((temp_t0_2 & 2) != 0) {
                if ((camera->speedRatio > 0.1f) || ((s32) sp3C->unk_A >= 0x4B1)) {
                    OLib_Vec3fToVecSphGeo((VecSph *) &sp64, &camera->playerPosDelta);
                    if (((camera->unk_22 & 8) == 0) || (func_800CB924(camera) == 0)) {
                        spBA = func_800CEC38(camera, spA2, sp6A, camera->unk_14, spC0);
                    }
                    if ((camera->unk_22 & 8) == 0) {
                        phi_v0 = func_800CEAD8(camera, spA0, camera->unk_20, sp3C->unk_8);
                        goto block_118;
                    }
                    if ((camera->playerPosDelta.y > 0.0f) && (func_800CB924(camera, spA0) != 0)) {
                        phi_v0 = func_800CEAD8(camera, spA0, camera->unk_20, sp3C->unk_8);
                        goto block_118;
                    }
                } else {
                    spBA = spA2;
                    spB8 = spA0;
                }
            } else {
                spBA = func_800CEC38(camera, spA2, camera->playerPosRot.rot.y, camera->unk_14, spC0);
                if (((camera->unk_22 & 8) == 0) || (camera->speedRatio < 0.1f)) {
                    phi_v0 = func_800CEAD8(camera, spA0, camera->unk_20, sp3C->unk_8);
block_118:
                    spB8 = phi_v0;
                }
            }
        }
    }
    if ((s32) spB8 >= 0x36B1) {
        spB8 = 0x36B0;
    }
    if ((s32) spB8 < -0x36B0) {
        spB8 = -0x36B0;
    }
    OLib_VecSphAddToVec3f(sp44, sp48, (VecSph *) &spB4);
    if ((camera->status == 7) && ((camera->unk_22 & 0x10) == 0) && (spC4 <= 0.9f)) {
        if (func_800CBA7C(camera) == 0) {
            func_800CED90(camera, &spB4, &sp9C, camera->unk_4, camera->unk_C, (camera->thisIdx * 0x68) + &D_801EDC30, (s16 *) &sp3C[12]);
            temp_ret = func_800C4488(&camera->globalCtx->colCtx, (Vec3f *) &sp60, &sp5C, (f32 *) sp4C);
            temp_f0_10 = temp_ret;
            if (((camera->unk_22 & 8) != 0) && (sp58 = temp_f0_10, phi_f14 = temp_f0_10, (func_800CB924(camera) != 0))) {
                phi_f16_5 = 25.0f;
            } else {
                phi_f14 = temp_ret;
                phi_f16_5 = 5.0f;
            }
            temp_f12_3 = sp4C->y;
            if ((phi_f14 != -32000.0f) && ((temp_f12_3 - phi_f14) < phi_f16_5)) {
                sp4C->y = phi_f14 + phi_f16_5;
            } else {
                temp_f0_11 = camera->waterYPos;
                if (camera->playerGroundY != temp_f0_11) {
                    temp_f2_4 = temp_f12_3 - temp_f0_11;
                    if ((temp_f2_4 < 5.0f) && (temp_f2_4 > -5.0f)) {
                        sp4C->y = temp_f0_11 + 5.0f;
                    }
                }
            }
        }
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &spAC, sp4C, sp48);
        camera->inputDir.x = spB0;
        camera->inputDir.z = 0;
        camera->inputDir.y = spB2;
        temp_v1_4 = gSaveContext.health;
        phi_v1_2 = (s32) temp_v1_4;
        if ((s32) temp_v1_4 < 0x11) {
            camera->inputDir.y += (s16) (((s32) (camera->globalCtx->state.frames << 0x18) >> 0x15) & 0xFD68);
            goto block_141;
        }
    } else {
        *(&D_801EDC8C + (camera->thisIdx * 0x68)) = camera->unk_C;
        *(&D_801EDC94 + (camera->thisIdx * 0x68)) = 0;
        D_801B9E50 = 0;
        sp4C->x = sp44->x;
        sp4C->y = sp44->y;
        sp4C->z = sp44->z;
block_141:
        phi_v1_2 = (s32) gSaveContext.health;
    }
    if (phi_v1_2 < 0x11) {
        phi_f2_3 = 0.8f;
    } else {
        phi_f2_3 = 1.0f;
    }
    camera->fov = Camera_Lerpf(camera->unk_18 * phi_f2_3, camera->fov, camera->fovUpdateRate, 0.1f);
    if ((camera->unk_22 & 4) != 0) {
        spD4 = Math_SinS((s16) (spAA - spBA));
        phi_v0_2 = Camera_Lerps((s16) (s32) (((Rand_ZeroOne() - 0.5f) * 500.0f * camera->speedRatio) + (spD4 * spD4 * spD4 * 10000.0f)), camera->roll, 0.1f, 5);
    } else {
        phi_a0 = 0;
        if ((s32) gSaveContext.health < 0x11) {
            phi_a0 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 100.0f * camera->speedRatio);
        }
        phi_v0_2 = Camera_Lerps(phi_a0, camera->roll, 0.2f, 5);
    }
    camera->roll = phi_v0_2;
    camera->atLERPStepScale = func_800CD288(camera, camera->unk_1C);
    sp3C->unk_C = (s16) (sp3C->unk_C & 0xFFFE);
    return 1;
}

s32 Camera_ModeNORM2(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeNORM3(Camera *camera) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s16 sp86;
    s16 sp84;
    f32 sp80;
    ? sp78;
    ? sp70;
    f32 sp68;
    s16 sp62;
    Player *sp5C;
    Vec3f *sp3C;
    Vec3f *sp38;
    Vec3f *sp34;
    PosRot *sp30;
    PosRot *temp_a2_3;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s8 *temp_s1;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_7;
    ? *phi_t0;
    s32 phi_t1;
    s16 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    f32 phi_f2;
    s16 phi_v0_2;
    s32 phi_v1_3;

    sp5C = camera->player;
    temp_v1 = camera->setting;
    if ((temp_v1 == 4) && (sp5C->unk_390 == 0)) {
        func_800DF8EC(camera, camera->prevSetting, 2);
        return 1;
    }
    temp_v0 = camera->animState;
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    if ((temp_v0 == 0) || (temp_v0 == 0xA) || (temp_v0 == 0x14)) {
        temp_f2 = func_800CB700(camera) * 0.01f;
        temp_v0_2 = (*(&cameraStates->modes + (temp_v1 * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_3 = temp_v0_2 + 0x20;
        camera->unk_0 = (f32) ((f32) *temp_v0_2 * temp_f2);
        camera->unk_4 = (f32) ((f32) temp_v0_3->unk_-1C * temp_f2);
        camera->unk_8 = (f32) ((f32) temp_v0_3->unk_-18 * temp_f2);
        camera->unk_1C = (s16) (s32) (((f32) temp_v0_3->unk_-14 * 182.04167f) + 0.5f);
        camera->unk_C = (f32) temp_v0_3->unk_-10;
        camera->unk_10 = (f32) temp_v0_3->unk_-C;
        camera->unk_14 = (f32) temp_v0_3->unk_-8;
        camera->unk_18 = (f32) ((f32) temp_v0_3->unk_-4 * 0.01f);
        camera->unk_1E = (s16) temp_v0_3->unk_0;
    }
    sp38 = temp_a1;
    sp3C = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp70, temp_a1, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp34 = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp68, temp_a1, temp_a2_2);
    D_801B9E50 = 1;
    D_801B9E08 = (s32) camera->unk_1E;
    temp_v1_2 = camera->animState;
    if ((temp_v1_2 != 0) && (temp_v1_2 != 0xA) && (temp_v1_2 != 0x14)) {
        phi_t0 = &D_801EDC30;
        phi_t1 = 0x68;
    } else {
        temp_s1 = &camera->paramData[32];
        temp_s1->unk_8 = 0;
        temp_s1->unk_0 = 0.0f;
        temp_s1->unk_4 = (f32) camera->playerGroundY;
        (&D_801EDC30 + (camera->thisIdx * 0x68))->unk_64 = 0;
        temp_v0_4 = &D_801EDC30 + (camera->thisIdx * 0x68);
        temp_v1_3 = temp_v0_4->unk_64;
        temp_v0_4->unk_60 = temp_v1_3;
        (&D_801EDC30 + (camera->thisIdx * 0x68))->unk_62 = temp_v1_3;
        (&D_801EDC30 + (camera->thisIdx * 0x68))->unk_5C = (f32) camera->unk_C;
        temp_s1->unk_E = 0;
        temp_s1->unk_12 = 0x4B0;
        temp_s1->unk_A = (s16) (s32) ((f32) (s16) ((camera->playerPosRot.rot.y + 0x8000) - sp76) * 0.16666667f);
        if ((camera->unk_1E & 2) != 0) {
            temp_s1->unk_C = 6;
            Camera_SetFlags(camera, 0x20);
        } else {
            temp_s1->unk_C = 0;
        }
        camera->animState = 1;
        (&D_801EDC30 + (camera->thisIdx * 0x68))->unk_66 = 0;
        temp_s1->unk_10 = 1;
        phi_t0 = &D_801EDC30;
        phi_t1 = 0x68;
    }
    temp_v0_5 = camera->paramData[32].unk_E;
    if (temp_v0_5 != 0) {
        camera->paramData[32].unk_E = (s16) (temp_v0_5 - 1);
    }
    temp_f0 = camera->speedRatio;
    temp_v0_6 = (phi_t0 + (camera->thisIdx * phi_t1))->unk_66;
    temp_f16 = ((temp_f0 * 3.0f) + 1.0f) * 0.25f * 0.5f;
    temp_f2_2 = temp_f0 * 0.2f;
    if (temp_v0_6 != 0) {
        sp90 = temp_f16;
        sp8C = temp_f2_2;
        camera->yawUpdateRateInv = Camera_Lerpf((f32) (temp_v0_6 * 2) + camera->unk_C, camera->yawUpdateRateInv, temp_f16, 0.1f);
        camera->pitchUpdateRateInv = Camera_Lerpf((f32) ((&D_801EDC30 + (camera->thisIdx * 0x68))->unk_66 * 2) + 16.0f, camera->pitchUpdateRateInv, temp_f2_2, 0.1f);
        temp_v0_7 = &D_801EDC30 + (camera->thisIdx * 0x68);
        temp_v0_7->unk_66 = (s16) (temp_v0_7->unk_66 - 1);
    } else {
        sp90 = temp_f16;
        sp8C = temp_f2_2;
        camera->yawUpdateRateInv = Camera_Lerpf(camera->unk_C, camera->yawUpdateRateInv, temp_f16, 0.1f);
        camera->pitchUpdateRateInv = Camera_Lerpf(16.0f, camera->pitchUpdateRateInv, temp_f2_2, 0.1f);
    }
    sp8C = temp_f0 * 0.2f;
    camera->yOffsetUpdateRate = Camera_Lerpf(0.05f, camera->yOffsetUpdateRate, sp90, 0.001f);
    camera->xzOffsetUpdateRate = Camera_Lerpf(0.05f, camera->xzOffsetUpdateRate, temp_f0 * 0.2f, 0.0001f);
    camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, temp_f0 * 0.2f, 0.0001f);
    temp_f0_2 = (1.0f / camera->unk_10) * 0.5f;
    camera->paramData[32].unk_8 = Camera_Lerps(func_800CC9C0(camera, (s16) (sp76 + 0x8000), (s16) (camera->paramData[32].unk_10 & 1)), camera->paramData[32].unk_8, temp_f0_2 + (temp_f0_2 * (1.0f - camera->speedRatio)), 5);
    if (((camera->unk_1E & 0x40) != 0) || (sp5C->unk_390 == 0)) {
        func_800CD6F8(camera, &sp68, camera->unk_0, 1);
    } else {
        func_800CE5E0(camera, &sp68, camera->unk_0, &camera->paramData[32] + 4, (s16) 1);
    }
    sp88 = (camera->unk_8 + camera->unk_4) * 0.5f;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp80, sp38, sp34);
    temp_f0_3 = (bitwise f32) func_800CE79C(camera, sp80, camera->unk_4, camera->unk_8, (s16) (s32) camera->paramData[32].unk_E);
    sp80 = temp_f0_3 + ((sp88 - temp_f0_3) * 0.002f);
    camera->dist = sp80;
    if ((camera->unk_1E & 0x80) != 0) {
        temp_v0_8 = Camera_Lerps((s16) (camera->player->actor.focus.rot.x - camera->paramData[32].unk_8), sp6C, 0.25f, 5);
        phi_v0 = temp_v0_8;
        phi_v1_3 = temp_v0_8 << 0x10;
    } else {
        sp62 = camera->unk_1C - camera->paramData[32].unk_8;
        temp_v0_9 = Camera_Lerps(sp62, sp6C, 1.0f / camera->pitchUpdateRateInv, 5);
        phi_v0 = temp_v0_9;
        phi_v1_3 = temp_v0_9 << 0x10;
    }
    phi_v1 = phi_v1_3 >> 0x10;
    if ((s32) phi_v0 >= 0x38A5) {
        phi_v1 = 0x38A4;
    }
    sp84 = (s16) phi_v1;
    if (phi_v1 < -0x1554) {
        sp84 = -0x1554;
    }
    temp_a2_3 = &camera->playerPosRot;
    if ((camera->unk_1E & 0x80) != 0) {
        sp62 = camera->player->actor.focus.rot.y - (sp6E + 0x8000);
        phi_f2 = 1.0f;
    } else {
        sp30 = temp_a2_3;
        sp62 = temp_a2_3->rot.y - (sp6E + 0x8000);
        OLib_Vec3fToVecSphGeo((VecSph *) &sp78, &camera->playerPosDelta);
        temp_v1_4 = temp_a2_3->rot.y - sp7E;
        phi_v1_2 = (s32) temp_v1_4;
        if ((s32) temp_v1_4 < 0) {
            phi_v1_2 = (s32) (s16) ((s32) temp_v1_4 * -1);
        }
        if (phi_v1_2 < 0x555A) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = (32768.0f - (f32) phi_v1_2) / 10918.0f;
        }
    }
    temp_f0_4 = camera->speedRatio;
    temp_f12 = ((f32) sp62 * ((temp_f0_4 * temp_f0_4 * 0.8f) + 0.2f) * phi_f2) / camera->yawUpdateRateInv;
    sp90 = temp_f12;
    if ((Camera_fabsf(temp_f12) > 150.0f) && (camera->speedRatio > 0.05f)) {
        sp86 = (s16) (s32) ((f32) sp6E + sp90);
    }
    if ((s32) camera->paramData[32].unk_C > 0) {
        sp86 += camera->paramData[32].unk_A;
        camera->paramData[32].unk_C = (s16) (camera->paramData[32].unk_C - 1);
        if (camera->paramData[32].unk_C == 0) {
            Camera_ClearFlags(camera, 0x20);
        }
    }
    OLib_VecSphAddToVec3f(sp34, sp38, (VecSph *) &sp80);
    if (camera->status == 7) {
        sp3C->x = sp34->x;
        sp3C->y = sp34->y;
        sp3C->z = sp34->z;
        func_800CBFA4(camera, sp38, sp3C, 0);
    } else {
        sp3C->x = sp34->x;
        sp3C->y = sp34->y;
        sp3C->z = sp34->z;
    }
    camera->fov = Camera_Lerpf(camera->unk_14, camera->fov, camera->fovUpdateRate, 0.1f);
    if ((camera->unk_1E & 0x20) != 0) {
        phi_v0_2 = Camera_Lerps(0, camera->roll, 0.05f, 5);
    } else {
        phi_v0_2 = Camera_Lerps(0, camera->roll, 0.1f, 5);
    }
    camera->roll = phi_v0_2;
    camera->atLERPStepScale = func_800CD288(camera, camera->unk_18);
    camera->paramData[32].unk_10 = (s16) (camera->paramData[32].unk_10 & 0xFFFE);
    return 1;
}

s32 Camera_ModeNORM4(Camera *camera) {
    s16 sp22;
    s16 temp_v0;

    temp_v0 = camera->animState;
    if ((temp_v0 == 0) || (temp_v0 == 0xA) || (temp_v0 == 0x14)) {
        D_801EDBF0 = func_800CC7A8(camera, camera->camDataIdx)->unk_A;
    }
    sp22 = camera->roll;
    Camera_ModeNORM1(camera);
    camera->roll = Camera_Lerps(D_801EDBF0, sp22, 0.05f, 5);
    return 1;
}

s32 Camera_ModeNORM0(Camera *camera) {
    f32 spA4;
    f32 spA0;
    s16 sp9E;
    s16 sp9C;
    f32 sp98;
    f32 sp90;
    s16 sp8E;
    s16 sp8C;
    f32 sp88;
    ? sp80;
    f32 sp78;
    void *sp5C;
    Vec3f *sp40;
    Vec3f *sp3C;
    Vec3f *sp38;
    PosRot *sp34;
    PosRot *temp_t6;
    Vec3f *temp_a1_3;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 *temp_a1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    s16 *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_4;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s8 *temp_s1;
    void *temp_a1;
    void *temp_v0_3;
    void *temp_v0_5;
    f32 phi_f0;
    Vec3f *phi_s1;
    s32 phi_a1;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v1;
    s32 phi_a0;
    s32 phi_v1_2;

    temp_f0 = func_800B6FC8(camera->player);
    temp_v0 = camera->animState;
    temp_f2 = 0.8f - ((68.0f / temp_f0) * -0.2f);
    if ((temp_v0 != 0) && (temp_v0 != 0xA) && (temp_v0 != 0x14)) {

    } else {
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_3 = temp_v0_2 + 0x20;
        camera->unk_0 = (f32) ((f32) *temp_v0_2 * 0.01f * temp_f0 * temp_f2);
        camera->unk_4 = (f32) ((f32) temp_v0_3->unk_-1C * 0.01f * temp_f0 * temp_f2);
        camera->unk_8 = (f32) ((f32) temp_v0_3->unk_-18 * 0.01f * temp_f0 * temp_f2);
        camera->unk_1C = (s16) (s32) (((f32) temp_v0_3->unk_-14 * 182.04167f) + 0.5f);
        camera->unk_C = (f32) temp_v0_3->unk_-10;
        camera->unk_10 = (f32) ((f32) temp_v0_3->unk_-C * 0.01f);
        camera->unk_14 = (f32) temp_v0_3->unk_-8;
        camera->unk_18 = (f32) ((f32) temp_v0_3->unk_-4 * 0.01f);
        camera->unk_1E = (s16) temp_v0_3->unk_0;
    }
    D_801B9E08 = (s32) camera->unk_1E;
    temp_v0_4 = camera->animState;
    if ((temp_v0_4 == 0) || (temp_v0_4 == 0xA) || (temp_v0_4 == 0x14)) {
        temp_v0_5 = func_800CC7A8(camera, camera->camDataIdx);
        temp_s1 = &camera->paramData[32];
        temp_a1 = temp_v0_5;
        sp5C = temp_v0_5;
        func_800CB60C(temp_s1, temp_a1);
        temp_t6 = &camera->playerPosRot;
        temp_s1->unk_20 = (s16) sp5C->unk_6;
        temp_a1_2 = &sp88;
        temp_s1->unk_22 = (s16) sp5C->unk_8;
        sp34 = temp_t6;
        temp_s1->unk_24 = (f32) temp_t6->pos.y;
        temp_v1 = sp5C->unk_C;
        if (temp_v1 == -1) {
            temp_s1->unk_1C = (f32) camera->unk_14;
        } else {
            if ((s32) temp_v1 >= 0x169) {
                phi_f0 = (f32) temp_v1 * 0.01f;
            } else {
                phi_f0 = (f32) temp_v1;
            }
            temp_s1->unk_1C = phi_f0;
        }
        temp_v0_6 = sp5C->unk_E;
        if (temp_v0_6 == -1) {
            temp_s1->unk_2C = 0;
        } else {
            temp_s1->unk_2C = temp_v0_6;
        }
        temp_s1->unk_18 = 0.0f;
        temp_s1->unk_28 = 120.0f;
        if ((camera->unk_1E & 4) != 0) {
            sp8C = temp_s1->unk_20;
            sp88 = 100.0f;
            sp8E = temp_s1->unk_22;
            OLib_VecSphGeoToVec3f((Vec3f *) &temp_s1[12], (VecSph *) temp_a1_2);
        }
        camera->animState = 1;
        camera->yawUpdateRateInv = 50.0f;
        phi_s1 = (Vec3f *) temp_s1;
    } else {
        if (func_800CB950(camera) != 0) {
            camera->unk_44 = (f32) camera->playerPosRot.pos.y;
        }
        sp34 = &camera->playerPosRot;
        phi_s1 = (Vec3f *) &camera->paramData[32];
    }
    temp_a1_3 = &camera->at;
    temp_a2 = &camera->eye;
    sp40 = temp_a2;
    sp3C = temp_a1_3;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp80, temp_a1_3, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp38 = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp78, temp_a1_3, temp_a2_2);
    camera->speedRatio *= 0.5f;
    temp_f0_2 = camera->speedRatio;
    spA4 = temp_f0_2 * 0.5f;
    spA0 = temp_f0_2 * 0.2f;
    camera->yawUpdateRateInv = Camera_Lerpf(camera->unk_C, camera->yawUpdateRateInv * temp_f0_2, 0.5f, 0.1f);
    camera->pitchUpdateRateInv = Camera_Lerpf(16.0f, camera->pitchUpdateRateInv, spA0, 0.1f);
    camera->yOffsetUpdateRate = Camera_Lerpf(0.05f, camera->yOffsetUpdateRate, spA4, 0.0001f);
    camera->xzOffsetUpdateRate = Camera_Lerpf(0.05f, camera->xzOffsetUpdateRate, spA0, 0.0001f);
    temp_v0_7 = camera->unk_1E;
    camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, camera->speedRatio * 0.05f, 0.0001f);
    if ((temp_v0_7 & 0x80) == 0) {
        func_800CD6F8(camera, &sp78, camera->unk_0, (s16) (temp_v0_7 & 1));
        phi_s1[3].y = 120.0f;
    } else {
        func_800CD834(camera, &sp78, camera->unk_0, phi_s1 + 0x24, phi_s1[3].y);
        temp_f0_3 = phi_s1[3].y;
        if (temp_f0_3 > 20.0f) {
            phi_s1[3].y = temp_f0_3 - 0.2f;
        }
    }
    if ((camera->unk_1E & 4) != 0) {
        phi_s1->x = sp34->pos.x + phi_s1[1].x;
        phi_s1->z = sp34->pos.z + phi_s1[1].z;
    }
    phi_s1->y = sp34->pos.y;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp88, phi_s1, sp3C);
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp90, sp3C, sp38);
    if ((phi_s1->unk_2C & 2) != 0) {
        phi_a1 = (s32) phi_s1->unk_22;
    } else {
        phi_a1 = (s32) camera->unk_1C;
    }
    if (phi_a1 < 0x4001) {
        temp_v1_2 = sp96 - sp8E;
        phi_v0 = -(s32) temp_v1_2;
        phi_v1 = (s32) temp_v1_2;
        if ((s32) temp_v1_2 >= 0) {
            phi_v0 = (s32) temp_v1_2;
        }
        if (phi_a1 >= phi_v0) {
            goto block_36;
        }
        goto block_40;
    }
block_36:
    if (phi_a1 >= 0x4001) {
        temp_v1_3 = sp96 - sp8E;
        phi_v0_2 = -(s32) temp_v1_3;
        phi_v1 = (s32) temp_v1_3;
        if ((s32) temp_v1_3 >= 0) {
            phi_v0_2 = (s32) temp_v1_3;
        }
        if (phi_v0_2 < phi_a1) {
block_40:
            if (phi_v1 < 0) {
                phi_a0 = phi_a1 * -0x10000;
            } else {
                phi_a0 = phi_a1 << 0x10;
            }
            sp9E = Camera_Lerps((s16) ((phi_a0 >> 0x10) + sp8E), sp86, (1.0f / camera->yawUpdateRateInv) * 1.0f * camera->speedRatio, 5);
            if ((phi_s1->unk_2C & 1) != 0) {
                sp9C = func_800CEAD8(camera, sp7C, phi_s1->unk_20, 0);
            } else {
                sp9C = sp84;
            }
        } else {
            goto block_46;
        }
    } else {
block_46:
        sp98.unk_0 = sp90.unk_0;
        (&sp98)[1] = (&sp90)[1];
    }
    temp_f0_4 = (bitwise f32) func_800CE79C(camera, sp90, camera->unk_4, camera->unk_8, (s16) 0);
    sp98 = temp_f0_4;
    camera->dist = temp_f0_4;
    phi_v1_2 = (s32) sp9C;
    if ((phi_s1->unk_2C & 1) == 0) {
        if ((s32) sp9C >= 0xE39) {
            phi_v1_2 = (s32) (s16) (sp9C + ((s32) (s16) (0xE38 - sp9C) >> 2));
        }
        sp9C = (s16) phi_v1_2;
        if (phi_v1_2 < 0) {
            sp9C = phi_v1_2 + ((s32) (s16) (-0x38E - phi_v1_2) >> 2);
        }
    }
    OLib_VecSphAddToVec3f(sp38, sp3C, (VecSph *) &sp98);
    sp40->x = sp38->x;
    sp40->y = sp38->y;
    sp40->z = sp38->z;
    if (camera->status == 7) {
        if ((camera->globalCtx->envCtx.unk_15 == 0) || ((camera->unk_1E & 0x10) != 0)) {
            func_800CC128(camera, sp3C, (f32 *) sp40);
        } else {
            func_800CBFA4(camera, sp3C, sp40, 3);
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp98, sp40, sp3C);
            camera->inputDir.x = sp9C;
            camera->inputDir.z = 0;
            camera->inputDir.y = sp9E;
        }
    }
    camera->fov = Camera_Lerpf(phi_s1[2].y, camera->fov, camera->fovUpdateRate, 0.1f);
    camera->roll = Camera_Lerps(0, camera->roll, 0.5f, 5);
    camera->atLERPStepScale = func_800CD288(camera, camera->unk_18);
    return 1;
}

s32 Camera_ModePARA1(Camera *camera) {
    f32 spB4;
    ? spB0;
    ? spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp96;
    s16 sp94;
    f32 sp90;
    ? sp88;
    f32 sp80;
    f32 sp78;
    s16 sp72;
    f32 sp60;
    f32 sp50;
    Vec3f *sp44;
    Vec3f *sp40;
    Vec3f *sp3C;
    PosRot *sp38;
    Player *temp_v1_6;
    PosRot *temp_a3;
    PosRot *temp_v0_9;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 *temp_a2_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 *temp_v0_2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_13;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_7;
    s32 temp_t5;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_6;
    s32 temp_v0_8;
    u32 temp_v0_14;
    u32 temp_v0_7;
    void *temp_v0_3;
    void *temp_v0_4;
    f32 phi_f0;
    PosRot *phi_a3;
    s32 phi_v1;
    s16 phi_t8;
    f32 phi_f0_2;
    f32 phi_f0_3;
    u32 phi_v0;
    f32 phi_f18;
    s16 phi_a0;
    f32 phi_f2;
    s16 phi_a0_2;
    s16 phi_v0_2;
    s32 phi_v1_2;
    f32 phi_f0_4;

    temp_f0 = func_800CB700(camera);
    sp60 = temp_f0;
    temp_v0 = camera->animState;
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    if ((temp_v0 != 0) && (temp_v0 != 0xA) && (temp_v0 != 0x14)) {

    } else {
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_3 = temp_v0_2 + 0x2C;
        temp_f2 = 0.8f - ((68.0f / temp_f0) * -0.2f);
        camera->unk_0 = (f32) ((f32) *temp_v0_2 * 0.01f * temp_f0 * temp_f2);
        camera->unk_4 = (f32) ((f32) temp_v0_3->unk_-28 * 0.01f * temp_f0 * temp_f2);
        camera->unk_8 = (f32) ((f32) temp_v0_3->unk_-24 * 0.01f * temp_f0 * temp_f2);
        camera->unk_20 = (s16) (s32) (((f32) temp_v0_3->unk_-20 * 182.04167f) + 0.5f);
        camera->unk_22 = (s16) (s32) (((f32) temp_v0_3->unk_-1C * 182.04167f) + 0.5f);
        camera->unk_C = (f32) temp_v0_3->unk_-18;
        camera->unk_10 = (f32) temp_v0_3->unk_-14;
        camera->unk_14 = (f32) temp_v0_3->unk_-10;
        camera->unk_18 = (f32) ((f32) temp_v0_3->unk_-C * 0.01f);
        camera->unk_26 = (s16) temp_v0_3->unk_-8;
        camera->unk_1C = (f32) ((f32) temp_v0_3->unk_-4 * 0.01f);
        camera->unk_24 = (s16) temp_v0_3->unk_0;
        camera->paramData[40] = (f32) camera->unk_4;
    }
    sp40 = temp_a1;
    sp44 = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp80, temp_a1, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp3C = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp78, temp_a1, temp_a2_2);
    func_800CBAD4(&spA4, camera);
    temp_v1 = camera->animState;
    if ((temp_v1 != 0) && (temp_v1 != 0xA)) {
        if (temp_v1 == 0x14) {
            if ((camera->unk_26 & 0xE) == 0) {
                func_800CB584(camera);
            }
            goto block_10;
        }
    } else {
block_10:
        temp_a3 = &camera->playerPosRot;
        temp_a2_3 = &sp80;
        if ((camera->unk_26 & 0xE) == 6) {
            camera->paramData[40].unk_10 = (f32) temp_a3->pos.x;
            camera->paramData[40].unk_14 = (f32) temp_a3->pos.y;
            camera->paramData[40].unk_18 = (f32) temp_a3->pos.z;
        } else {
            camera->xzOffsetUpdateRate = 0.5f;
            camera->yOffsetUpdateRate = 0.5f;
        }
        if ((camera->unk_26 & 0xE) == 8) {
            camera->paramData[40].unk_10 = (f32) camera->playerPosRot.pos.x;
            camera->paramData[40].unk_14 = (f32) camera->playerPosRot.pos.y;
            camera->paramData[40].unk_18 = (f32) camera->playerPosRot.pos.z;
        }
        camera->paramData[40].unk_C = 200.0f;
        temp_f2_2 = 2.0f * camera->unk_4;
        if (temp_f2_2 < camera->dist) {
            camera->dist = temp_f2_2;
            sp38 = &camera->playerPosRot;
            sp78 = camera->dist;
            sp80 = sp78;
            OLib_VecSphAddToVec3f(sp44, sp40, (VecSph *) temp_a2_3);
            sp3C->x = sp44->x;
            sp3C->y = sp44->y;
            sp3C->z = sp44->z;
        }
        camera->paramData[40].unk_1C = 0;
        if ((camera->unk_26 & 4) != 0) {
            camera->paramData[40].unk_22 = 0x14;
        } else {
            camera->paramData[40].unk_22 = 6;
        }
        if ((camera->player == camera->globalCtx->actorCtx.actorList[2].first) && (camera->mode == 0x11)) {
            camera->paramData[40].unk_22 = 0x1E;
            if (camera->player->transformation == 3) {
                camera->unk_24 = -1;
            }
        }
        if ((camera->unk_26 & 0xE) == 0xA) {
            camera->paramData[40].unk_22 = 1;
            sp50 = 0.8f - ((68.0f / sp60) * -0.2f);
            sp38 = &camera->playerPosRot;
            temp_v0_4 = func_800CC7A8(camera, camera->camDataIdx);
            camera->paramData[40].unk_20 = (s16) temp_v0_4->unk_6;
            camera->paramData[40].unk_1E = (s16) temp_v0_4->unk_8;
            temp_v1_2 = temp_v0_4->unk_C;
            phi_a3 = &camera->playerPosRot;
            if (temp_v1_2 == -1) {
                camera->paramData[40].unk_8 = (f32) camera->unk_14;
            } else {
                if ((s32) temp_v1_2 >= 0x169) {
                    phi_f0 = (f32) temp_v1_2 * 0.01f;
                } else {
                    phi_f0 = (f32) temp_v1_2;
                }
                camera->paramData[40].unk_8 = phi_f0;
            }
            temp_v1_3 = temp_v0_4->unk_E;
            if (temp_v1_3 == -1) {
                goto block_35;
            }
            camera->paramData[40] = (f32) ((f32) temp_v1_3 * 0.01f * sp60 * sp50);
        } else {
            camera->paramData[40].unk_8 = (f32) camera->unk_14;
block_35:
            camera->paramData[40] = camera->unk_4;
            phi_a3 = &camera->playerPosRot;
        }
        camera->paramData[40].unk_24 = (s16) camera->unk_24;
        camera->paramData[40].unk_26 = 1;
        camera->paramData[40].unk_4 = (f32) (phi_a3->pos.y - camera->playerPosDelta.y);
        camera->animState = 1;
        D_801B9E08 = (s32) camera->unk_26;
    }
    if (camera->paramData[40].unk_22 != 0) {
        temp_t5 = camera->unk_26 & 0xE;
        switch (temp_t5) {
        case 2:
        case 14:
            camera->paramData[40].unk_1E = (s16) (camera->playerPosRot.rot.y + 0x8000 + camera->unk_22);
            camera->paramData[40].unk_20 = (s16) camera->unk_20;
            break;
        case 4:
            camera->paramData[40].unk_1E = (s16) camera->unk_22;
            camera->paramData[40].unk_20 = (s16) camera->unk_20;
            break;
        case 6:
            if (camera->paramData[40].unk_24 == 1) {
                OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp88, &camera->paramData[40] + 0x10, (Vec3f *) &spA4);
                temp_a0 = sp8E - sp86;
                phi_v1 = -(s32) temp_a0;
                if ((s32) temp_a0 >= 0) {
                    phi_v1 = (s32) temp_a0;
                }
                if ((phi_v1 < 0x3A98) || (func_800CBA08(camera) != 0)) {
                    phi_t8 = sp86;
                } else {
                    phi_t8 = sp86 + (((s32) (s16) (sp8E - sp86) >> 2) * 3);
                }
                camera->paramData[40].unk_1E = phi_t8;
            }
            camera->paramData[40].unk_20 = (s16) camera->unk_20;
            break;
        case 8:
            camera->paramData[40].unk_1E = sp86;
            camera->paramData[40].unk_20 = (s16) camera->unk_20;
            break;
        default:
            camera->paramData[40].unk_1E = (s16) (sp7E + camera->unk_22);
            camera->paramData[40].unk_20 = (s16) camera->unk_20;
            break;
        }
    } else if ((camera->unk_26 & 0x20) != 0) {
        camera->paramData[40].unk_1E = (s16) (camera->playerPosRot.rot.y + 0x8000 + camera->unk_22);
    }
    temp_v0_5 = camera->animState;
    if (temp_v0_5 == 0x15) {
        camera->animState = 1;
    } else if (temp_v0_5 == 0xB) {
        camera->animState = 1;
    }
    temp_f0_2 = camera->speedRatio;
    temp_f2_3 = temp_f0_2 * 0.5f;
    sp9C = temp_f0_2 * 0.2f;
    temp_v1_4 = camera->unk_26;
    temp_v0_6 = temp_v1_4 & 0xE;
    if ((temp_v0_6 == 6) || (temp_v0_6 == 8) || ((temp_v1_4 & 0x20) != 0)) {
        spA0 = temp_f2_3;
        camera->rUpdateRateInv = Camera_Lerpf(20.0f, camera->rUpdateRateInv, 0.5f, 0.1f);
        camera->yawUpdateRateInv = Camera_Lerpf(camera->unk_C, camera->yawUpdateRateInv, 0.5f, 0.1f);
        phi_f0_2 = Camera_Lerpf(20.0f, camera->pitchUpdateRateInv, 0.5f, 0.1f);
    } else {
        spA0 = temp_f2_3;
        camera->rUpdateRateInv = Camera_Lerpf(20.0f, camera->rUpdateRateInv, temp_f2_3, 0.1f);
        camera->yawUpdateRateInv = Camera_Lerpf(camera->unk_C, camera->yawUpdateRateInv, temp_f2_3, 0.1f);
        phi_f0_2 = Camera_Lerpf(2.0f, camera->pitchUpdateRateInv, sp9C, 0.1f);
    }
    camera->pitchUpdateRateInv = phi_f0_2;
    temp_v1_5 = camera->unk_26;
    if ((temp_v1_5 & 0xE) == 0xE) {
        camera->yOffsetUpdateRate = Camera_Lerpf(0.1f, camera->yOffsetUpdateRate, temp_f0_2 * 0.5f, 0.0001f);
        phi_f0_3 = Camera_Lerpf(0.1f, camera->xzOffsetUpdateRate, sp9C, 0.0001f);
    } else if ((temp_v1_5 & 0x80) != 0) {
        camera->yOffsetUpdateRate = Camera_Lerpf(0.5f, camera->yOffsetUpdateRate, temp_f0_2 * 0.5f, 0.0001f);
        phi_f0_3 = Camera_Lerpf(0.5f, camera->xzOffsetUpdateRate, sp9C, 0.0001f);
    } else {
        camera->yOffsetUpdateRate = Camera_Lerpf(0.05f, camera->yOffsetUpdateRate, temp_f0_2 * 0.5f, 0.0001f);
        phi_f0_3 = Camera_Lerpf(0.05f, camera->xzOffsetUpdateRate, sp9C, 0.0001f);
    }
    camera->xzOffsetUpdateRate = phi_f0_3;
    camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, camera->speedRatio * 0.05f, 0.0001f);
    if ((camera->unk_26 & 1) != 0) {
        camera->paramData[40].unk_26 = 1;
        temp_f0_3 = 1.0f / camera->unk_10;
        camera->paramData[40].unk_1C = Camera_Lerps(func_800CC9C0(camera, (s16) (sp86 + 0x8000), camera->paramData[40].unk_26), camera->paramData[40].unk_1C, (temp_f0_3 * 0.6f) + (temp_f0_3 * 0.4f * (1.0f - camera->speedRatio)), 5);
    } else {
        camera->paramData[40].unk_1C = 0;
    }
    if ((func_800CB950(camera) != 0) || (temp_v1_6 = camera->player, temp_v0_7 = temp_v1_6->stateFlags1, phi_v0 = temp_v0_7, ((temp_v0_7 & 0x1000) != 0)) || ((temp_v1_6->stateFlags3 & 0x100) != 0)) {
        camera->paramData[40].unk_4 = (f32) camera->playerPosRot.pos.y;
        sp72 = 0;
        phi_v0 = camera->player->stateFlags1;
    } else {
        sp72 = 1;
    }
    if (((phi_v0 & 0x4000) != 0) || ((phi_v0 & 4) != 0) || (temp_v1_7 = camera->unk_26, temp_v0_8 = temp_v1_7 & 0xE, (temp_v0_8 == 6))) {
        spB0.unk_0 = (f32) spA4.unk_0;
        spB0.unk_4 = (f32) spA4.unk_4;
        spB0.unk_8 = (f32) spA4.unk_8;
        spB4 += (sp60 * 0.6f) + camera->unk_0;
        sp38 = &camera->playerPosRot;
        Camera_LerpVec3f((Vec3f *) &spB0, sp40, camera->xzOffsetUpdateRate, camera->yOffsetUpdateRate, 0.0001f);
        func_800CB6C8(camera, sp38);
    } else {
        temp_v0_9 = &camera->playerPosRot;
        if (temp_v0_8 == 0xE) {
            spB0.unk_0 = (f32) temp_v0_9->pos.x;
            spB0.unk_4 = (f32) temp_v0_9->pos.y;
            spB0.unk_8 = (f32) temp_v0_9->pos.z;
            spB4 += sp60 + camera->unk_0;
            sp38 = temp_v0_9;
            Camera_LerpVec3f((Vec3f *) &spB0, sp40, camera->xzOffsetUpdateRate, camera->yOffsetUpdateRate, 0.0001f);
            func_800CB6C8(camera, sp38);
        } else {
            if (camera->paramData[40].unk_22 != 0) {
                func_800CD6F8(camera, &sp78, camera->unk_0, 0);
                phi_f18 = 200.0f;
                goto block_90;
            }
            if (((temp_v1_7 & 0x80) == 0) && (sp72 == 0)) {
                func_800CDB6C(camera, &sp78, camera->unk_0, camera->unk_8, &camera->paramData[40] + 4, (s16) (temp_v1_7 & 0x41));
                camera->paramData[40].unk_C = 200.0f;
            } else {
                func_800CD834(camera, &sp78, camera->unk_0, &camera->paramData[40] + 4, camera->paramData[40].unk_C);
                temp_f0_4 = camera->paramData[40].unk_C;
                if (temp_f0_4 > 10.0f) {
                    phi_f18 = temp_f0_4 - 1.0f;
block_90:
                    camera->paramData[40].unk_C = phi_f18;
                }
            }
        }
    }
    camera->dist = Camera_Lerpf(camera->paramData[40], camera->dist, 1.0f / camera->rUpdateRateInv, 0.1f);
    if (camera->paramData[40].unk_22 != 0) {
        temp_v0_10 = camera->paramData[40].unk_24;
        if ((s32) temp_v0_10 <= 0) {
            if (temp_v0_10 == 0) {
                Camera_SetFlags(camera, 0x20);
            }
            temp_v0_11 = (s32) ((camera->paramData[40].unk_22 + 1) * camera->paramData[40].unk_22) >> 1;
            sp96 = sp86 + (((s32) (s16) (camera->paramData[40].unk_1E - sp86) / (s32) (s16) temp_v0_11) * camera->paramData[40].unk_22);
            if ((camera->unk_26 & 1) != 0) {
                phi_a0 = (s16) (camera->paramData[40].unk_20 - camera->paramData[40].unk_1C);
            } else {
                phi_a0 = camera->paramData[40].unk_20;
            }
            sp94 = sp84 + (((s32) (s16) (phi_a0 - sp84) / (s32) (s16) temp_v0_11) * camera->paramData[40].unk_22);
            sp90 = camera->dist;
            camera->paramData[40].unk_22 = (s16) (camera->paramData[40].unk_22 - 1);
        } else {
            sp90.unk_0 = sp80.unk_0;
            (&sp90)[1] = (&sp80)[1];
            sp90 = camera->dist;
        }
    } else {
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp90, sp40, sp3C);
        sp90 = camera->dist;
        if ((camera->unk_26 & 2) != 0) {
            sp96 = Camera_Lerps(camera->paramData[40].unk_1E, sp7E, 1.0f / camera->yawUpdateRateInv, 0xC8);
        }
        temp_v0_12 = camera->unk_26 & 0xE;
        if ((camera->unk_26 & 1) != 0) {
            phi_a0_2 = (s16) (camera->paramData[40].unk_20 - camera->paramData[40].unk_1C);
        } else {
            phi_a0_2 = camera->paramData[40].unk_20;
        }
        if (temp_v0_12 == 0xE) {
            temp_f0_5 = camera->speedRatio;
            if (temp_f0_5 > 1.0f) {
                phi_f2 = 1.0f;
            } else {
                phi_f2 = temp_f0_5;
            }
            phi_v0_2 = Camera_Lerps((s16) (s32) (((f32) sp94 * phi_f2) + ((f32) phi_a0_2 * (1.0f - phi_f2))), sp7C, 1.0f / camera->pitchUpdateRateInv, 5);
            goto block_112;
        }
        if (temp_v0_12 != 8) {
            phi_v0_2 = Camera_Lerps(phi_a0_2, sp7C, 1.0f / camera->pitchUpdateRateInv, 5);
block_112:
            sp94 = phi_v0_2;
        }
        phi_v1_2 = (s32) sp94;
        if ((s32) sp94 >= 0x38A5) {
            phi_v1_2 = 0x38A4;
        }
        sp94 = (s16) phi_v1_2;
        if (phi_v1_2 < -0x1554) {
            sp94 = -0x1554;
        }
    }
    temp_v0_13 = camera->paramData[40].unk_24;
    if ((s32) temp_v0_13 > 0) {
        camera->paramData[40].unk_24 = (s16) (temp_v0_13 - 1);
    }
    OLib_VecSphAddToVec3f(sp3C, sp40, (VecSph *) &sp90);
    if (camera->status == 7) {
        if ((camera->globalCtx->envCtx.unk_15 == 0) || ((camera->unk_26 & 0x10) != 0)) {
            spB0.unk_0 = (f32) sp40->x;
            spB0.unk_4 = (f32) sp40->y;
            spB0.unk_8 = (f32) sp40->z;
            temp_v0_14 = camera->player->stateFlags1;
            if (((temp_v0_14 & 0x4000) != 0) || ((temp_v0_14 & 4) != 0) || ((camera->unk_26 & 0xE) == 6)) {
                spB4 += sp60;
            }
            sp44->x = sp3C->x;
            sp44->y = sp3C->y;
            sp44->z = sp3C->z;
            func_800CBFA4(camera, (Vec3f *) &spB0, sp44, 0);
        } else {
            sp44->x = sp3C->x;
            sp44->y = sp3C->y;
            sp44->z = sp3C->z;
            func_800CBFA4(camera, sp40, sp44, 3);
        }
        if (camera->paramData[40].unk_22 != 0) {
            D_801B9E50 = 1;
        } else {
            D_801B9E50 = 0;
        }
    }
    camera->fov = Camera_Lerpf(camera->paramData[40].unk_8, camera->fov, camera->fovUpdateRate, 0.1f);
    camera->roll = Camera_Lerps(0, camera->roll, 0.5f, 5);
    if (sp72 != 0) {
        phi_f0_4 = camera->unk_1C;
    } else {
        phi_f0_4 = camera->unk_18;
    }
    camera->atLERPStepScale = func_800CD288(camera, phi_f0_4);
    camera->paramData[40].unk_26 = (s16) (camera->paramData[40].unk_26 & 0xFFFE);
    return 1;
}

s32 Camera_ModePARA2(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModePARA3(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModePARA4(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModePARA0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeJUMP1(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeJUMP2(Camera *camera) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    ? spBC;
    s16 spBA;
    s16 spB8;
    f32 spB4;
    s16 spB2;
    s16 spB0;
    f32 spAC;
    f32 spA4;
    ? sp9C;
    f32 sp90;
    f32 sp8C;
    s32 sp88;
    ? sp60;
    f32 sp48;
    Vec3f *sp38;
    Vec3f *sp34;
    Vec3f *sp30;
    PosRot *sp2C;
    s8 *sp28;
    PosRot *temp_t0;
    PosRot *temp_t0_2;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 *temp_a2_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 *temp_v0;
    s16 temp_a0;
    s16 temp_t2;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_cond;
    s8 *temp_t1;
    s8 *temp_t1_2;
    void *temp_v0_2;
    f32 phi_f2;
    s32 phi_v1;
    s16 phi_v1_2;
    s16 phi_v0;

    temp_f0 = func_800CB700(camera);
    sp48 = temp_f0;
    temp_v1 = camera->animState;
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        temp_v0 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_f14 = 0.8f - ((68.0f / temp_f0) * -0.2f);
        if (camera->playerPosDelta.y > 0.0f) {
            phi_f2 = -10.0f;
        } else {
            phi_f2 = 10.0f;
        }
        temp_v0_2 = temp_v0 + 0x20;
        camera->unk_0 = (f32) (((f32) *temp_v0 + phi_f2) * 0.01f * temp_f0 * temp_f14);
        camera->unk_4 = (f32) ((f32) temp_v0_2->unk_-1C * 0.01f * temp_f0 * temp_f14);
        camera->unk_8 = (f32) ((f32) temp_v0_2->unk_-18 * 0.01f * temp_f0 * temp_f14);
        camera->unk_C = (f32) ((f32) temp_v0_2->unk_-14 * 0.01f);
        camera->unk_10 = (f32) temp_v0_2->unk_-10;
        camera->unk_14 = (f32) ((f32) temp_v0_2->unk_-C * 0.01f);
        camera->unk_18 = (f32) temp_v0_2->unk_-8;
        camera->unk_1C = (f32) ((f32) temp_v0_2->unk_-4 * 0.01f);
        camera->unk_20 = (s16) temp_v0_2->unk_0;
    }
    sp34 = temp_a1;
    sp38 = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp9C, temp_a1, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp30 = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spA4, temp_a1, temp_a2_2);
    D_801B9E08 = (s32) camera->unk_20;
    temp_v1_2 = camera->animState;
    if ((temp_v1_2 == 0) || (temp_v1_2 == 0xA) || (temp_v1_2 == 0x14)) {
        temp_t0 = &camera->playerPosRot;
        spC8.unk_0 = temp_t0->pos.x;
        (&spC8)[1] = temp_t0->pos.y;
        (&spC8)[2] = temp_t0->pos.z;
        sp2C = temp_t0;
        temp_f0_2 = (bitwise f32) func_800CC56C(camera, &spC8);
        temp_t1 = &camera->paramData[36];
        temp_cond = temp_f0_2 == -32000.0f;
        temp_t1->unk_0 = temp_f0_2;
        temp_t1->unk_6 = 0;
        temp_t1->unk_4 = spAA;
        if (temp_cond) {
            temp_t1->unk_A = -1;
            temp_t1->unk_0 = (f32) (temp_t0->pos.y - 1000.0f);
        } else if ((temp_t0->pos.y - temp_t1->unk_0) < sp48) {
            temp_t1->unk_A = 1;
        } else {
            temp_t1->unk_A = -1;
        }
        temp_t1->unk_6 = (s16) (((s32) ((s32) (s16) ((s16) (temp_t0->rot.y + 0x8000) - spAA) / 6) / 4) * 3);
        if ((camera->unk_20 & 2) != 0) {
            temp_t1->unk_8 = 0xA;
        } else {
            temp_t1->unk_8 = 0x2710;
        }
        temp_t0->pos.x -= camera->playerPosDelta.x;
        temp_t0->pos.y -= camera->playerPosDelta.y;
        temp_t0->pos.z -= camera->playerPosDelta.z;
        temp_t1->unk_C = (s16) 6;
        camera->animState += 1;
        camera->atLERPStepScale = camera->unk_1C;
    }
    temp_f0_3 = camera->speedRatio;
    temp_f2 = temp_f0_3 * 0.5f;
    temp_t0_2 = &camera->playerPosRot;
    temp_t1_2 = &camera->paramData[36];
    sp8C = temp_f0_3 * 0.2f;
    sp90 = temp_f2;
    sp28 = temp_t1_2;
    sp2C = temp_t0_2;
    camera->yawUpdateRateInv = Camera_Lerpf(camera->unk_10, camera->yawUpdateRateInv, temp_f2, 0.1f);
    camera->yOffsetUpdateRate = Camera_Lerpf(camera->unk_14, camera->yOffsetUpdateRate, temp_f2, 0.0001f);
    camera->xzOffsetUpdateRate = Camera_Lerpf(0.05f, camera->xzOffsetUpdateRate, sp8C, 0.0001f);
    camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, camera->speedRatio * 0.05f, 0.0001f);
    camera->rUpdateRateInv = 1800.0f;
    func_800CD6F8(camera, &spA4, camera->unk_0, 0);
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spB4, sp34, sp38);
    temp_f12 = camera->unk_8;
    temp_f14_2 = camera->unk_C;
    temp_f0_4 = camera->unk_4;
    temp_f2_2 = temp_f12 + (temp_f12 * temp_f14_2);
    temp_f16 = temp_f0_4 - (temp_f0_4 * temp_f14_2);
    if (temp_f2_2 < spB4) {
        spB4 = temp_f2_2;
    } else if (spB4 < temp_f16) {
        spB4 = temp_f16;
    }
    temp_v1_3 = temp_t1_2->unk_C;
    temp_t2 = temp_t0_2->rot.y + 0x8000;
    temp_v0_3 = temp_t2 - spBA;
    if (temp_v1_3 != 0) {
        temp_t1_2->unk_4 = temp_t2;
        temp_t1_2->unk_C = (s16) (temp_v1_3 - 1);
        sp28 = temp_t1_2;
        sp2C = temp_t0_2;
        phi_v0 = Camera_Lerps(temp_t1_2->unk_4, spAA, 0.5f, 5);
    } else {
        phi_v1 = -(s32) temp_v0_3;
        if ((s32) temp_v0_3 >= 0) {
            phi_v1 = (s32) temp_v0_3;
        }
        temp_a0 = temp_t1_2->unk_8;
        if ((s32) temp_a0 < phi_v1) {
            if ((s32) temp_v0_3 < 0) {
                phi_v1_2 = temp_t2 + temp_a0;
            } else {
                phi_v1_2 = temp_t2 - temp_a0;
            }
            sp2C = temp_t0_2;
            sp28 = temp_t1_2;
            phi_v0 = func_800CB42C((bitwise s16) temp_f12, (bitwise s16) temp_f14_2, (bitwise f32) phi_v1_2, spAA, 0x3DCCCCCD, 1);
        } else {
            sp2C = temp_t0_2;
            sp28 = temp_t1_2;
            phi_v0 = Camera_Lerps(spBA, spAA, 0.25f, 5);
        }
    }
    spBA = phi_v0;
    sp28 = &camera->paramData[36];
    sp2C = &camera->playerPosRot;
    spC8 = (Math_SinS(camera->playerPosRot.rot.y) * 25.0f) + camera->playerPosRot.pos.x;
    spCC = camera->playerPosRot.pos.y + (sp48 * 2.2f);
    spD0 = (Math_CosS(camera->playerPosRot.rot.y) * 25.0f) + camera->playerPosRot.pos.z;
    temp_f0_5 = func_800CC488((? *) camera, &spBC, &spC8, &sp88);
    if ((camera->player->actor.bgCheckFlags & 0x10) != 0) {
        camera->pitchUpdateRateInv = Camera_Lerpf(20.0f, camera->pitchUpdateRateInv, 0.2f, 0.1f);
        camera->rUpdateRateInv = Camera_Lerpf(20.0f, camera->rUpdateRateInv, 0.2f, 0.1f);
        spB8 = Camera_Lerps(-0x1388, spA8, 0.2f, 5);
    } else if ((temp_f0_5 != -32000.0f) && (camera->playerPosRot.pos.y < temp_f0_5)) {
        camera->pitchUpdateRateInv = Camera_Lerpf(20.0f, camera->pitchUpdateRateInv, 0.2f, 0.1f);
        camera->rUpdateRateInv = Camera_Lerpf(20.0f, camera->rUpdateRateInv, 0.2f, 0.1f);
        if (camera->playerPosDelta.y > 1.0f) {
            spB8 = Camera_Lerps(0x1F4, spA8, 1.0f / camera->pitchUpdateRateInv, 5);
        }
    } else if ((camera->playerPosRot.pos.y - camera->paramData[36].unk_0) < sp48) {
        camera->pitchUpdateRateInv = Camera_Lerpf(20.0f, camera->pitchUpdateRateInv, 0.2f, 0.1f);
        camera->rUpdateRateInv = Camera_Lerpf(20.0f, camera->rUpdateRateInv, 0.2f, 0.1f);
        if (camera->playerPosDelta.y > 1.0f) {
            spB8 = Camera_Lerps(0x1F4, spA8, 1.0f / camera->pitchUpdateRateInv, 5);
        }
    } else {
        camera->pitchUpdateRateInv = 100.0f;
        camera->rUpdateRateInv = 100.0f;
    }
    if ((s32) spB8 >= 0x2AF9) {
        spB8 = 0x2AF8;
    }
    if ((s32) spB8 < -0x2AF8) {
        spB8 = -0x2AF8;
    }
    OLib_VecSphAddToVec3f(sp30, sp34, (VecSph *) &spB4);
    sp60.unk_0 = (f32) sp30->x;
    sp60.unk_4 = (f32) sp30->y;
    sp60.unk_8 = (f32) sp30->z;
    if (func_800CBC84((? *) camera, sp34, (Vec3f *) &sp60, 0) != 0) {
        temp_a2_3 = &spAC;
        spC8.unk_0 = sp60.unk_0;
        (&spC8)[1] = sp60.unk_4;
        (&spC8)[2] = sp60.unk_8;
        spB0 = 0;
        spAC = spB4;
        spB2 = spBA;
        OLib_VecSphAddToVec3f((Vec3f *) &sp60, sp34, (VecSph *) temp_a2_3);
        if (func_800CBC84((? *) camera, sp34, (Vec3f *) &sp60, 0) != 0) {
            sp38->x = spC8.unk_0;
            sp38->y = (&spC8)[1];
            sp38->z = (&spC8)[2];
        } else {
            spB8 = Camera_Lerps(0, spB8, 0.2f, 5);
            OLib_VecSphAddToVec3f(sp38, sp34, (VecSph *) &spB4);
            func_800CBFA4(camera, sp34, sp38, 0);
        }
    } else {
        sp38->x = sp30->x;
        sp38->y = sp30->y;
        sp38->z = sp30->z;
    }
    camera->dist = spB4;
    camera->fov = Camera_Lerpf(camera->unk_18, camera->fov, camera->fovUpdateRate, 0.1f);
    camera->roll = Camera_Lerps(0, camera->roll, 0.5f, 5);
    return 1;
}

s32 Camera_ModeJUMP3(Camera *camera) {
    f32 spD0;
    f32 spCC;
    f32 spC0;
    ? spB4;
    s16 spB2;
    s16 spB0;
    f32 spAC;
    f32 sp9C;
    f32 sp94;
    f32 sp78;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s32 sp58;
    f32 sp4C;
    Vec3f *sp48;
    Vec3f *sp44;
    Vec3f *sp40;
    PosRot *sp3C;
    s8 *sp38;
    PosRot *temp_t0;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_t6;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_2;
    s32 temp_v0_9;
    s8 *temp_v0;
    s8 *temp_v1_2;
    void *temp_v0_10;
    void *temp_v0_3;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    s32 phi_a3;
    f32 phi_f0;
    f32 phi_f16;
    f32 phi_f14;
    f32 phi_f2;
    f32 phi_f2_2;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    sp78 = func_800CB700(camera);
    func_800B81E0(&sp64, camera->player);
    temp_t6 = &camera->eye;
    sp48 = temp_t6;
    sp60 = camera->waterYPos - temp_t6->y;
    temp_v1 = camera->animState;
    phi_a3 = 0;
    phi_a3 = 0;
    phi_a3 = 0;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        temp_v0 = &camera->paramData[36];
        temp_v0->unk_C = 0;
        temp_v0->unk_A = (s16) camera->mode;
    }
    temp_v1_2 = &camera->paramData[36];
    sp38 = temp_v1_2;
    if (camera->mode == 0) {
        if (((camera->player->actor.bgCheckFlags & 0x10) != 0) || (temp_v1_2->unk_C != 0)) {
            if (temp_v1_2->unk_A != 0xF) {
                temp_v1_2->unk_A = 0xF;
                temp_v1_2->unk_C = 0xA;
                phi_a3 = 1;
            }
            sp38 = temp_v1_2;
        } else if (sp60 < 50.0f) {
            if (temp_v1_2->unk_A != 0) {
                temp_v1_2->unk_A = 0;
                phi_a3 = 1;
            }
            sp38 = temp_v1_2;
        } else {
            sp58 = 0;
            sp38 = temp_v1_2;
            if (Camera_fabsf(camera->playerPosRot.pos.y - camera->playerGroundY) < 11.0f) {
                if (sp38->unk_A != 5) {
                    sp38->unk_A = 5;
                    goto block_20;
                }
            } else if ((sp60 > 250.0f) && (sp38->unk_A != 0x1A)) {
                sp38->unk_A = 0x1A;
block_20:
                phi_a3 = 1;
            }
        }
    }
    temp_a1 = &camera->at;
    temp_v0_2 = sp38->unk_C;
    if (temp_v0_2 != 0) {
        sp38->unk_C = (s32) (temp_v0_2 - 1);
    }
    sp38 = sp38;
    sp44 = temp_a1;
    sp58 = phi_a3;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp9C, temp_a1, sp48);
    temp_a2 = &camera->eyeNext;
    sp40 = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp94, temp_a1, temp_a2);
    temp_v1_3 = camera->animState;
    if ((temp_v1_3 != 0) && (temp_v1_3 != 0xA) && (temp_v1_3 != 0x14) && (phi_a3 == 0)) {

    } else {
        temp_v0_3 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (sp38->unk_A * 8))->unk_4 + 0x24;
        temp_f10 = 0.8f - ((68.0f / sp78) * -0.2f);
        sp5C = temp_f10;
        temp_f0 = sp78 * 0.01f * temp_f10;
        camera->unk_0 = (f32) ((f32) temp_v0_3->unk_-24 * temp_f0);
        camera->unk_4 = (f32) ((f32) temp_v0_3->unk_-20 * temp_f0);
        camera->unk_8 = (f32) ((f32) temp_v0_3->unk_-1C * temp_f0);
        camera->unk_20 = (s16) (s32) (((f32) temp_v0_3->unk_-18 * 182.04167f) + 0.5f);
        camera->unk_C = (f32) temp_v0_3->unk_-14;
        camera->unk_10 = (f32) temp_v0_3->unk_-10;
        camera->unk_14 = (f32) ((f32) temp_v0_3->unk_-C * 0.01f);
        camera->unk_18 = (f32) temp_v0_3->unk_-8;
        camera->unk_1C = (f32) ((f32) temp_v0_3->unk_-4 * 0.01f);
        camera->unk_22 = (s16) temp_v0_3->unk_0;
    }
    D_801B9E08 = (s32) camera->unk_22;
    temp_v0_4 = camera->animState;
    if (temp_v0_4 != 0) {
        if ((temp_v0_4 != 0xA) && (temp_v0_4 != 0x14)) {
            temp_v0_5 = sp38->unk_8;
            if (temp_v0_5 != 0) {
                sp38->unk_8 = (s16) (temp_v0_5 - 1);
            }
        } else {
            goto block_34;
        }
    } else {
        sp38->unk_10 = 0x1000;
block_34:
        sp38->unk_0 = (f32) camera->playerGroundY;
        *(&D_801EDC94 + (camera->thisIdx * 0x68)) = 0;
        temp_v0_6 = (camera->thisIdx * 0x68) + &D_801EDC30;
        temp_v1_4 = temp_v0_6->unk_64;
        temp_v0_6->unk_60 = temp_v1_4;
        *(&D_801EDC92 + (camera->thisIdx * 0x68)) = temp_v1_4;
        sp38->unk_8 = 0xA;
        *(&D_801EDC8C + (camera->thisIdx * 0x68)) = camera->unk_C;
        camera->animState += 1;
        *(&D_801EDC96 + (camera->thisIdx * 0x68)) = 0;
    }
    temp_t0 = &camera->playerPosRot;
    sp3C = temp_t0;
    spC0 = sp68 - temp_t0->pos.y;
    spB4.unk_0 = (f32) sp48->x;
    spB4.unk_4 = (f32) sp48->y;
    spB4.unk_8 = (f32) sp48->z;
    temp_f0_2 = camera->speedRatio;
    temp_f2 = temp_f0_2 * 0.5f;
    temp_v0_7 = (camera->thisIdx * 0x68) + &D_801EDC30;
    temp_f16 = temp_f0_2 * 0.2f;
    if (temp_v0_7->unk_64 == 1) {
        phi_f0 = 0.5f;
    } else {
        phi_f0 = temp_f2;
    }
    temp_v1_5 = temp_v0_7->unk_66;
    if (temp_v1_5 != 0) {
        spCC = temp_f16;
        spD0 = temp_f2;
        camera->yawUpdateRateInv = Camera_Lerpf((f32) (temp_v1_5 * 2) + temp_v0_7->unk_5C, camera->yawUpdateRateInv, temp_f2, 0.1f);
        camera->pitchUpdateRateInv = Camera_Lerpf((f32) (*(&D_801EDC96 + (camera->thisIdx * 0x68)) * 2) + 40.0f, camera->pitchUpdateRateInv, temp_f16, 0.1f);
        temp_v0_8 = (camera->thisIdx * 0x68) + &D_801EDC30;
        temp_v0_8->unk_66 = (s16) (temp_v0_8->unk_66 - 1);
    } else {
        spCC = temp_f16;
        spD0 = temp_f2;
        camera->yawUpdateRateInv = Camera_Lerpf(temp_v0_7->unk_5C, camera->yawUpdateRateInv, phi_f0, 0.1f);
        camera->pitchUpdateRateInv = Camera_Lerpf(40.0f, camera->pitchUpdateRateInv, temp_f16, 0.1f);
    }
    if ((camera->unk_22 & 0x80) != 0) {
        temp_f2_2 = camera->playerPosDelta.x;
        temp_f12 = camera->playerPosDelta.z;
        camera->yOffsetUpdateRate = Camera_Lerpf(0.01f, camera->yOffsetUpdateRate, temp_f0_2 * 0.5f, 0.0001f);
        temp_f14 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12 * temp_f12));
        sp4C = temp_f14;
        sp5C = temp_f14 / func_800CB780((bitwise Camera *) temp_f12, temp_f14, camera);
        temp_f0_3 = OLib_ClampMaxDist(sp5C / func_800CB780(camera), 1.8f);
        camera->speedRatio = temp_f0_3;
        phi_f16 = temp_f0_3 * 0.2f;
    } else {
        spCC = temp_f0_2 * 0.2f;
        camera->yOffsetUpdateRate = Camera_Lerpf(0.05f, camera->yOffsetUpdateRate, temp_f0_2 * 0.5f, 0.0001f);
        phi_f16 = temp_f0_2 * 0.2f;
    }
    camera->xzOffsetUpdateRate = Camera_Lerpf(0.05f, camera->xzOffsetUpdateRate, phi_f16, 0.0001f);
    camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, camera->speedRatio * 0.05f, 0.0001f);
    if (sp60 < 50.0f) {
        sp5C = camera->waterYPos - spC0;
        if (sp60 < 0.0f) {
            phi_f14 = 1.0f;
        } else {
            phi_f14 = 1.0f - (sp60 / 50.0f);
        }
        func_800CD834((bitwise Camera *) 50.0f, (bitwise f32 *) phi_f14, (bitwise f32) camera, &sp94, camera->unk_0, &sp5C, phi_f14 * 50.0f);
    } else {
        func_800CD6F8((bitwise Camera *) 50.0f, (f32 *) camera, (bitwise f32) &sp94, (bitwise s16) camera->unk_0, camera->unk_22);
    }
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spAC, sp44, sp40);
    temp_f0_4 = (bitwise f32) func_800CE79C(camera, spAC, camera->unk_4, camera->unk_8, (s16) (s32) sp38->unk_8);
    spAC = temp_f0_4;
    camera->dist = temp_f0_4;
    if (!(Camera_fabsf(sp3C->pos.y - camera->playerGroundY) < 10.0f) && !(Camera_fabsf(sp68 - camera->waterYPos) < 50.0f)) {
        camera->pitchUpdateRateInv = 100.0f;
    }
    temp_v1_6 = camera->unk_22;
    if ((temp_v1_6 & 0x20) != 0) {
        temp_f0_5 = camera->speedRatio * 1.3f;
        if (temp_f0_5 > 0.6f) {
            phi_f2 = 0.6f;
        } else {
            phi_f2 = temp_f0_5;
        }
        temp_f0_6 = camera->pitchUpdateRateInv;
        temp_v0_9 = Camera_Lerps((s16) (s32) (((f32) spB0 * phi_f2) + ((f32) camera->unk_20 * (1.0f - phi_f2))), sp98, 1.0f / ((temp_f0_6 + 1.0f) - (temp_f0_6 * phi_f2)), 5);
        phi_v0 = temp_v0_9;
        phi_v1_2 = temp_v0_9 << 0x10;
    } else {
        temp_v0_10 = (camera->thisIdx * 0x68) + &D_801EDC30;
        if (temp_v0_10->unk_64 == 1) {
            spB2 = Camera_Lerps(temp_v0_10->unk_62, sp9A, 1.0f / camera->yawUpdateRateInv, 5);
            temp_v0_11 = Camera_Lerps(*(&D_801EDC90 + (camera->thisIdx * 0x68)), sp98, 1.0f / camera->yawUpdateRateInv, 5);
            phi_v0 = temp_v0_11;
            phi_v1_2 = temp_v0_11 << 0x10;
        } else if ((temp_v1_6 & 0x88) != 0) {
            spB2 = func_800CEC38(camera, sp9A, sp3C->rot.y, camera->unk_14, 0.0f);
            temp_f0_7 = camera->speedRatio * 1.3f;
            if (temp_f0_7 > 1.0f) {
                phi_f2_2 = 1.0f;
            } else {
                phi_f2_2 = temp_f0_7;
            }
            temp_f0_8 = camera->pitchUpdateRateInv;
            temp_v0_12 = Camera_Lerps((s16) (s32) (((f32) spB0 * phi_f2_2) + ((f32) camera->unk_20 * (1.0f - phi_f2_2))), sp98, 1.0f / ((temp_f0_8 + 1.0f) - (temp_f0_8 * phi_f2_2)), 5);
            phi_v0 = temp_v0_12;
            phi_v1_2 = temp_v0_12 << 0x10;
        } else {
            spB2 = func_800CEC38(camera, sp9A, sp3C->rot.y, camera->unk_14, 0.0f);
            temp_v0_13 = func_800CEAD8(camera, sp98, camera->unk_20, 0);
            phi_v0 = temp_v0_13;
            phi_v1_2 = temp_v0_13 << 0x10;
        }
    }
    phi_v1 = phi_v1_2 >> 0x10;
    if (phi_v0 >= 0x38A5) {
        phi_v1 = 0x38A4;
    }
    spB0 = (s16) phi_v1;
    if (phi_v1 < -0x1554) {
        spB0 = -0x1554;
    }
    OLib_VecSphAddToVec3f(sp40, sp44, (VecSph *) &spAC);
    if ((camera->status == 7) && ((camera->unk_22 & 0x40) == 0)) {
        if (func_800CBA7C(camera) == 0) {
            func_800CED90(camera, &spAC, &sp9C, camera->unk_4, camera->unk_C, (camera->thisIdx * 0x68) + &D_801EDC30, (s16 *) &sp38[16]);
        }
        if ((camera->unk_22 & 4) != 0) {
            camera->inputDir.x = (s16) -(s32) spA0;
            camera->inputDir.z = 0;
            camera->inputDir.y = spA2 + 0x8000;
        } else {
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &spAC, sp48, sp44);
            camera->inputDir.x = spB0;
            camera->inputDir.z = 0;
            camera->inputDir.y = spB2;
        }
    } else {
        (&D_801EDC30 + (camera->thisIdx * 0x68))->unk_5C = (f32) camera->unk_C;
        (&D_801EDC30 + (camera->thisIdx * 0x68))->unk_64 = 0;
        D_801B9E50 = 0;
        sp48->x = sp40->x;
        sp48->y = sp40->y;
        sp48->z = sp40->z;
    }
    camera->fov = Camera_Lerpf(camera->unk_18, camera->fov, camera->fovUpdateRate, 0.1f);
    camera->roll = Camera_Lerps(0, camera->roll, 0.5f, 5);
    camera->atLERPStepScale = func_800CD288(camera, camera->unk_1C);
    return 1;
}

s32 Camera_ModeJUMP4(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeJUMP0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeBATT1(Camera *camera) {
    f32 sp124;
    ? sp120;
    f32 sp118;
    f32 sp114;
    f32 sp104;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    s32 spF0;
    f32 spEC;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    s16 spC2;
    s16 spC0;
    f32 spBC;
    s16 spBA;
    s16 spB8;
    f32 spB4;
    f32 spAC;
    f32 spA4;
    f32 sp9C;
    f32 sp94;
    PosRot *sp8C;
    s16 sp8A;
    s16 sp88;
    s16 sp86;
    s16 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp68;
    s16 sp5E;
    s16 sp5C;
    Vec3f *sp50;
    Vec3f *sp4C;
    Vec3f *sp48;
    PosRot *sp40;
    Actor *temp_v1_3;
    PosRot *temp_a0;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 *temp_a2_3;
    f32 *temp_t2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 *temp_v0;
    s16 temp_t0;
    s16 temp_t6;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s32 temp_f4;
    void *temp_v0_2;
    f32 phi_f0;
    f32 phi_f16;
    s32 phi_v0;
    f32 phi_f0_2;
    f32 phi_f18;
    s32 phi_v0_2;
    s16 phi_a0;
    f32 phi_f0_3;
    f32 phi_f12;
    f32 phi_f0_4;

    spF0 = 0;
    sp8C = &camera->player->actor.focus;
    temp_f0 = func_800CB700(camera);
    sp68 = temp_f0;
    temp_v1 = camera->animState;
    if ((temp_v1 != 0) && (temp_v1 != 0xA) && (temp_v1 != 0x14)) {

    } else {
        temp_v0 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v1_2 = camera->animState;
        temp_v0_2 = temp_v0 + 0x30;
        camera->unk_0 = (f32) ((f32) *temp_v0 * 0.01f * temp_f0 * (0.8f - ((68.0f / temp_f0) * -0.2f)));
        camera->unk_4 = (f32) temp_v0_2->unk_-2C;
        camera->unk_8 = (f32) temp_v0_2->unk_-28;
        camera->unk_C = (f32) temp_v0_2->unk_-24;
        camera->unk_C = (f32) (80.0f - (80.0f - camera->unk_C));
        camera->unk_10 = (f32) temp_v0_2->unk_-20;
        camera->unk_10 = (f32) (0.0f - (0.0f - camera->unk_10));
        camera->unk_14 = (f32) temp_v0_2->unk_-1C;
        camera->unk_14 = (f32) (40.0f - (40.0f - camera->unk_14));
        camera->unk_18 = (f32) temp_v0_2->unk_-18;
        camera->unk_18 = (f32) (20.0f - (20.0f - camera->unk_18));
        camera->unk_1C = (f32) ((f32) temp_v0_2->unk_-14 * 0.01f);
        camera->unk_1C = (f32) (1.0f - (1.0f - camera->unk_1C));
        camera->unk_20 = (f32) temp_v0_2->unk_-10;
        camera->unk_24 = (f32) ((f32) temp_v0_2->unk_-C * 0.01f);
        camera->unk_24 = (f32) (1.0f - (1.0f - camera->unk_24));
        camera->unk_30 = (s16) temp_v0_2->unk_-8;
        camera->unk_28 = (f32) ((f32) temp_v0_2->unk_-4 * 0.01f);
        camera->unk_28 = (f32) (0.2f - (0.2f - camera->unk_28));
        camera->unk_2C = (f32) ((f32) temp_v0_2->unk_0 * 0.01f);
        if ((temp_v1_2 != 0) && (temp_v1_2 != 0xA) && (temp_v1_2 != 0x14)) {

        } else {
            camera->paramData[52].unk_18 = 0x28;
            camera->pitchUpdateRateInv = 9.0f;
        }
    }
    sp80 = camera->unk_14;
    sp7C = camera->unk_18;
    sp78 = camera->unk_20;
    if (func_800CBA34(camera) != 0) {
        camera->pitchUpdateRateInv = Camera_Lerpf(18.0f, camera->pitchUpdateRateInv, 0.5f, 0.1f);
        camera->yOffsetUpdateRate = Camera_Lerpf(0.2f, camera->yOffsetUpdateRate, 0.5f, 0.0001f);
        camera->xzOffsetUpdateRate = Camera_Lerpf(0.2f, camera->xzOffsetUpdateRate, 0.5f, 0.0001f);
        temp_v0_3 = camera->paramData[52].unk_18;
        if ((s32) temp_v0_3 >= -0x13) {
            camera->paramData[52].unk_18 = (s16) (temp_v0_3 - 1);
        } else {
            sp80 = 50.0f;
            sp7C = 40.0f;
            sp78 = 60.0f;
        }
    } else {
        temp_v0_4 = camera->paramData[52].unk_18;
        if ((s32) temp_v0_4 < 0) {
            sp80 = 50.0f;
            sp7C = 40.0f;
            sp78 = 60.0f;
            camera->paramData[52].unk_18 = (s16) (temp_v0_4 + 1);
        } else {
            camera->paramData[52].unk_18 = 0x28;
            camera->pitchUpdateRateInv = Camera_Lerpf(9.0f, camera->pitchUpdateRateInv, 0.5f, 0.1f);
            camera->yOffsetUpdateRate = Camera_Lerpf(0.6f, camera->yOffsetUpdateRate, camera->speedRatio * 0.5f, 0.0001f);
            camera->xzOffsetUpdateRate = Camera_Lerpf(0.6f, camera->xzOffsetUpdateRate, camera->speedRatio * 0.2f, 0.0001f);
        }
    }
    camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, camera->speedRatio * 0.05f, 0.0001f);
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    sp50 = temp_a2;
    sp4C = temp_a1;
    sp68 += camera->unk_0;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp9C, temp_a1, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp48 = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp94, temp_a1, temp_a2_2);
    temp_v1_3 = camera->target;
    if ((temp_v1_3 == 0) || (temp_v1_3->update == 0)) {
        camera->target = NULL;
        func_800DF840(camera, (Camera *)0xA);
    } else {
        D_801B9E08 = (s32) camera->unk_30;
        temp_v1_4 = camera->animState;
        if ((temp_v1_4 == 0) || (temp_v1_4 == 0xA) || (temp_v1_4 == 0x14)) {
            camera->paramData[52].unk_10 = 0;
            camera->paramData[52].unk_1A = 0;
            camera->paramData[52].unk_8 = (Actor *) camera->target;
            camera->animState += 1;
            camera->paramData[52].unk_16 = 7;
            camera->paramData[52].unk_12 = spA2;
            camera->paramData[52].unk_14 = spA0;
            camera->paramData[52].unk_0 = sp9C;
            camera->paramData[52].unk_4 = (f32) (camera->playerPosRot.pos.y - camera->playerPosDelta.y);
            temp_f2 = 2.0f * camera->unk_4;
            if (temp_f2 < camera->dist) {
                camera->dist = temp_f2;
                sp94 = camera->dist;
                temp_a2_3 = &sp9C;
                sp9C = sp94;
                OLib_VecSphAddToVec3f(sp50, sp4C, (VecSph *) temp_a2_3);
                sp48->x = sp50->x;
                sp48->y = sp50->y;
                sp48->z = sp50->z;
            }
        }
        if (camera->status == 7) {
            D_801B9E50 = 1;
            camera->inputDir.x = (s16) -(s32) spA0;
            camera->inputDir.z = 0;
            camera->inputDir.y = spA2 + 0x8000;
        }
        if (func_800CB950(camera) != 0) {
            camera->paramData[52].unk_4 = (f32) camera->playerPosRot.pos.y;
            sp84 = 0;
        } else {
            sp84 = 1;
        }
        if (camera->paramData[52].unk_16 == 0) {
            if (sp84 != 0) {
                phi_f0 = camera->unk_28;
            } else {
                phi_f0 = camera->unk_24;
            }
            camera->atLERPStepScale = func_800CD288(camera, phi_f0);
        }
        temp_a0 = &camera->targetPosRot;
        sp40 = temp_a0;
        func_800B81E0((f32 *) temp_a0, (Player *) camera->target);
        if (camera->target != camera->paramData[52].unk_8) {
            camera->animState = 0;
        } else {
            sp120.unk_0 = (f32) camera->playerPosRot.pos.x;
            sp120.unk_4 = (f32) camera->playerPosRot.pos.y;
            sp120.unk_8 = (f32) camera->playerPosRot.pos.z;
            sp124 += sp68;
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &spA4, (Vec3f *) &sp120, (Vec3f *) sp40);
            temp_f0_2 = func_800CD6CC(camera->target);
            temp_f2_2 = (f32) gGameInfo->data[374] + 800.0f;
            phi_f16 = temp_f0_2;
            if (temp_f2_2 < temp_f0_2) {
                phi_f16 = temp_f2_2;
            }
            if ((phi_f16 < spA4) || (sp104 = phi_f16, (func_800CBA34(camera) != 0))) {
                spEC = 1.0f;
                spF8 = 10.0f;
            } else {
                spF8 = 2.0f;
                spEC = spA4 / phi_f16;
            }
            if (sp84 != 0) {
                phi_v0 = 0x81;
            } else {
                phi_v0 = 1;
            }
            func_800CE2B8(camera, &sp94, sp40, camera->unk_0, camera->unk_2C, 1.0f - spEC, &camera->paramData[52] + 4, &spA4, (s16) (phi_v0 | camera->unk_30));
            sp88 = spAA;
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &spBC, sp4C, sp48);
            temp_f0_3 = camera->unk_4;
            spF4 = temp_f0_3 + ((camera->unk_8 - temp_f0_3) * spEC);
            temp_f0_4 = Camera_Lerpf(spF8, camera->rUpdateRateInv, 0.5f, 0.1f);
            camera->rUpdateRateInv = temp_f0_4;
            temp_f0_5 = Camera_Lerpf(spF4, camera->dist, 1.0f / temp_f0_4, 0.1f);
            camera->dist = temp_f0_5;
            spBC = temp_f0_5;
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &spAC, sp4C, (Vec3f *) sp40);
            phi_f0_2 = temp_f0_5;
            if (spAC <= spBC) {
                phi_f0_2 = spAC;
            }
            spAC = spBC - (phi_f0_2 * 0.5f);
            if ((camera->paramData[52].unk_1A & 0x1000) != 0) {
                phi_f18 = 15.0f;
            } else {
                temp_f0_6 = camera->unk_C;
                phi_f18 = temp_f0_6 + ((camera->unk_10 - temp_f0_6) * (1.1f - spEC));
            }
            spC2 = sp9A;
            temp_v1_5 = camera->paramData[52].unk_16;
            temp_v0_5 = spB2 - (s16) (sp9A + 0x8000);
            if (temp_v1_5 != 0) {
                if ((s32) temp_v1_5 > 0) {
                    temp_t0 = temp_v1_5 - 1;
                    sp86 = temp_t0;
                    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spB4, sp4C, sp50);
                    temp_t6 = sp88 + 0x8000;
                    spBA = temp_t6;
                    sp8A = (s16) (s32) ((f32) (s16) (camera->paramData[52].unk_12 - temp_t6) * 0.16666667f);
                    sp88 = (s16) (s32) ((f32) (s16) (camera->paramData[52].unk_14 - spB8) * 0.16666667f);
                    spBC = Camera_Lerpf(((f32) sp86 * ((camera->paramData[52].unk_0 - spB4) * 0.16666667f)) + spB4, sp9C, 0.5f, 1.0f);
                    spC2 = Camera_Lerps((s16) (spBA + (sp8A * temp_t0)), spA2, 0.5f, 5);
                    spC0 = Camera_Lerps((s16) (spB8 + (sp88 * sp86)), spA0, 0.5f, 5);
                } else {
                    spF0 = 1;
                }
                camera->paramData[52].unk_16 = (s16) (camera->paramData[52].unk_16 - 1);
            } else {
                if ((s32) temp_v0_5 >= 0) {
                    phi_v0_2 = (s32) temp_v0_5;
                } else {
                    phi_v0_2 = -(s32) temp_v0_5;
                }
                temp_f4 = (s32) ((phi_f18 * 182.04167f) + 0.5f);
                if (((s32) (s16) temp_f4 < phi_v0_2) && (sp84 == 0)) {
                    sp8A = temp_v0_5;
                    spFC = phi_f18;
                    temp_f16 = (f32) temp_v0_5 * 0.00549325f;
                    sp104 = temp_f16;
                    temp_f2_3 = ((OLib_ClampMaxDist(spAC, spBC) / spBC) * ((phi_f18 + 10.0f) - phi_f18)) + phi_f18;
                    temp_f12 = ((temp_f2_3 * temp_f2_3) - 2.0f) / (temp_f2_3 - 360.0f);
                    temp_f14 = (temp_f16 * temp_f16) / ((temp_f12 * temp_f16) + (2.0f - (360.0f * temp_f12)));
                    if ((s32) sp8A >= 0) {
                        sp88 = (s16) (s32) ((temp_f14 * 182.04167f) + 0.5f);
                    } else {
                        sp88 = (s16) -(s32) ((temp_f14 * 182.04167f) + 0.5f);
                    }
                    spC2 = sp9A + 0x8000 + sp88 + 0x8000;
                } else {
                    if ((s32) temp_v0_5 >= 0) {
                        sp88 = (s16) temp_f4;
                    } else {
                        sp88 = (s16) -(s32) (s16) temp_f4;
                    }
                    spC2 = sp9A - (s32) ((f32) (sp88 - temp_v0_5) * ((1.0f - camera->speedRatio) * 0.05f));
                }
            }
            if (spF0 == 0) {
                temp_v0_6 = ((s32) (((((sp7C - sp80) * spEC) + sp80) * 182.04167f) + 0.5f) - (s32) (((f32) spA8 * (0.5f + (spEC * 0.5f))) + 0.5f)) + (s32) ((f32) spB0 * camera->unk_1C);
                phi_a0 = temp_v0_6;
                if ((s32) temp_v0_6 < -0x2AA8) {
                    phi_a0 = -0x2AA8;
                } else if ((s32) temp_v0_6 >= 0x2AA9) {
                    phi_a0 = 0x2AA8;
                }
                spC0 = Camera_Lerps(phi_a0, sp98, 1.0f / camera->pitchUpdateRateInv, 5);
                OLib_VecSphAddToVec3f(sp48, sp4C, (VecSph *) &spBC);
                spC4.unk_0 = sp48->x;
                (&spC4)[1] = sp48->y;
                (&spC4)[2] = sp48->z;
                if (camera->status == 7) {
                    temp_v0_7 = camera->unk_30;
                    if ((temp_v0_7 & 0x10) == 0) {
                        if ((camera->globalCtx->envCtx.unk_15 == 0) || ((temp_v0_7 & 1) != 0)) {
                            if (func_800CBC84((? *) camera, sp4C, (Vec3f *) &spC4, 0) != 0) {
                                camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A | 0x1000);
                            } else {
                                camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xEFFF);
                            }
                        } else if ((temp_v0_7 & 2) != 0) {
                            func_800CBC84((? *) camera, sp4C, (Vec3f *) &spC4, 3);
                        } else {
                            OLib_Vec3fDistNormalize((Vec3f *) &sp114, sp4C, (Vec3f *) &spC4);
                            spC4 -= sp114;
                            spC8 -= sp118;
                            spCC -= sp11C;
                        }
                        sp50->x = spC4.unk_0;
                        sp50->y = (&spC4)[1];
                        sp50->z = (&spC4)[2];
                        camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xFFEF);
                    } else if ((camera->globalCtx->envCtx.unk_15 == 0) || ((temp_v0_7 & 1) != 0)) {
                        if (func_800CBC84((? *) camera, sp4C, (Vec3f *) &spC4, 0) != 0) {
                            camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A | 0x1000);
                            spF8 = OLib_Vec3fDist(sp4C, (Vec3f *) sp8C);
                            spF4 = OLib_Vec3fDist(sp4C, (Vec3f *) &spC4);
                            if ((camera->paramData[52].unk_1A & 0x10) != 0) {
                                phi_f0_3 = 40.0f;
                            } else {
                                phi_f0_3 = 0.0f;
                            }
                            temp_f12_2 = spF8 + phi_f0_3;
                            spF8 = temp_f12_2;
                            func_800B8898(camera->globalCtx, (Actor *) camera->player, &sp5E, &sp5C);
                            if ((spF4 < temp_f12_2) || (((s32) sp5E >= 0) && ((s32) sp5E < 0x141) && ((s32) sp5C >= 0) && ((s32) sp5C < 0xF1))) {
                                camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A | 0x10);
                                spBA = spAA + 0x8000;
                                spB8 = (s16) -(s32) spA8;
                                spB4 = 40.0f;
                                sp114.unk_0 = sp8C->pos.x;
                                (&sp114)[1] = sp8C->pos.y;
                                (&sp114)[2] = sp8C->pos.z;
                                sp118 += 40.0f;
                                OLib_VecSphAddToVec3f((Vec3f *) &sp120, (Vec3f *) &sp114, (VecSph *) &spB4);
                                Camera_LerpVec3f((Vec3f *) &sp120, sp50, 0.15f, 0.15f, 0.2f);
                            } else {
                                temp_v0_8 = camera->paramData[52].unk_1A;
                                if ((temp_v0_8 & 0x10) != 0) {
                                    if (OLib_Vec3fDist((Vec3f *) &spC4, sp50) < 20.0f) {
                                        camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xFFEF);
                                        sp50->x = spC4.unk_0;
                                        sp50->y = (&spC4)[1];
                                        sp50->z = (&spC4)[2];
                                    } else {
                                        Camera_LerpVec3f((Vec3f *) &spC4, sp50, 0.15f, 0.15f, 0.2f);
                                    }
                                } else {
                                    camera->paramData[52].unk_1A = (s16) (temp_v0_8 & 0xFFEF);
                                    sp50->x = spC4.unk_0;
                                    sp50->y = (&spC4)[1];
                                    sp50->z = (&spC4)[2];
                                }
                            }
                        } else {
                            temp_v0_9 = camera->paramData[52].unk_1A;
                            if ((temp_v0_9 & 0x10) != 0) {
                                if (OLib_Vec3fDist((Vec3f *) &spC4, sp50) < 20.0f) {
                                    camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xFFEF);
                                    sp50->x = spC4.unk_0;
                                    sp50->y = (&spC4)[1];
                                    sp50->z = (&spC4)[2];
                                } else {
                                    Camera_LerpVec3f((Vec3f *) &spC4, sp50, 0.15f, 0.15f, 0.2f);
                                }
                            } else {
                                camera->paramData[52].unk_1A = (s16) (temp_v0_9 & 0xFFEF);
                                sp50->x = spC4.unk_0;
                                sp50->y = (&spC4)[1];
                                sp50->z = (&spC4)[2];
                            }
                            camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xEFFF);
                        }
                    } else if ((temp_v0_7 & 2) != 0) {
                        camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xFFEF);
                        if (func_800CBC84((? *) camera, sp4C, (Vec3f *) &spC4, 3) != 0) {
                            sp50->x = spC4.unk_0;
                            sp50->y = (&spC4)[1];
                            sp50->z = (&spC4)[2];
                        } else {
                            sp50->x = spC4.unk_0;
                            sp50->y = (&spC4)[1];
                            sp50->z = (&spC4)[2];
                        }
                    } else {
                        camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xFFEF);
                        OLib_Vec3fDistNormalize((Vec3f *) &sp114, sp4C, (Vec3f *) &spC4);
                        temp_t2 = &spC4;
                        spC4 -= sp114;
                        spC8 -= sp118;
                        spCC -= sp11C;
                        sp50->x = temp_t2->unk_0;
                        sp50->y = temp_t2[1];
                        sp50->z = temp_t2[2];
                    }
                } else {
                    camera->paramData[52].unk_1A = (s16) (camera->paramData[52].unk_1A & 0xFFEF);
                    sp50->x = sp48->x;
                    sp50->y = sp48->y;
                    sp50->z = sp48->z;
                }
            }
            if (camera->paramData[52].unk_16 != 0) {
                sp88 = 0;
            } else {
                sp88 = (s16) (s32) ((f32) (s16) (sp9A - spC2) * 0.5f);
            }
            camera->roll = Camera_Lerps(sp88, camera->roll, 0.06f, 5);
            if (func_800CBAAC(camera) != 0) {
                if ((camera->globalCtx->state.frames & 8) != 0) {
                    temp_f0_7 = camera->unk_20;
                    phi_f12 = temp_f0_7 - (temp_f0_7 * 0.5f);
                } else {
                    phi_f12 = camera->unk_20;
                }
            } else {
                if ((s32) gSaveContext.health < 0x11) {
                    phi_f0_4 = 0.8f;
                } else {
                    phi_f0_4 = 1.0f;
                }
                phi_f12 = phi_f0_4 * (sp78 - (sp78 * 0.05f * spEC));
            }
            camera->fov = Camera_Lerpf(phi_f12, camera->fov, camera->fovUpdateRate, 0.1f);
        }
    }
    return 1;
}

s32 Camera_ModeBATT2(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeBATT3(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeBATT4(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeBATT0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeKEEP1(Camera *camera) {
    f32 sp134;
    f32 sp130;
    f32 sp128;
    ? sp124;
    ? sp118;
    f32 sp114;
    f32 sp104;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    s16 spF2;
    s16 spF0;
    s16 spEE;
    s16 spEC;
    f32 spE8;
    s16 spE6;
    s16 spE4;
    f32 spE0;
    f32 spD8;
    s16 spD6;
    f32 spD0;
    f32 spC8;
    f32 spC0;
    f32 spA8;
    PosRot *spA4;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s32 sp78;
    f32 sp74;
    s16 sp72;
    s16 sp70;
    f32 sp60;
    s16 sp56;
    s16 sp54;
    Vec3f *sp48;
    Vec3f *sp44;
    Vec3f *sp40;
    PosRot *sp3C;
    s8 *sp38;
    PosRot *sp30;
    Actor *temp_a1;
    Actor *temp_a1_3;
    Actor *temp_a1_4;
    PosRot *temp_a0;
    PosRot *temp_a0_2;
    Vec3f *temp_a1_2;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 *temp_a2_3;
    f32 *temp_t5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 *temp_v0;
    s16 temp_a0_3;
    s16 temp_t3;
    s16 temp_t9;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_f4;
    s32 temp_f6;
    s8 *temp_t0;
    s8 *temp_t0_2;
    void *temp_v0_2;
    s32 phi_v0;
    f32 phi_f12;
    f32 phi_f0;
    s16 phi_v1;
    s32 phi_v0_2;
    s32 phi_v1_2;
    s16 phi_v1_3;
    s8 *phi_t0;
    s16 phi_a0;
    f32 phi_f0_2;
    f32 phi_f0_3;

    sp78 = 0;
    spA4 = &camera->player->actor.focus;
    temp_f0 = func_800CB700(camera);
    temp_a1 = camera->target;
    if ((temp_a1 == 0) || (temp_a1_2 = &camera->at, (temp_a1->update == 0))) {
        camera->target = NULL;
        func_800DF840((bitwise Camera *) temp_f0, camera, 0xA);
    } else {
        temp_v1 = camera->animState;
        if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
            temp_v0 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
            temp_v0_2 = temp_v0 + 0x2C;
            camera->unk_0 = (f32) ((f32) *temp_v0 * 0.01f * temp_f0 * (0.8f - ((68.0f / temp_f0) * -0.2f)));
            camera->unk_4 = (f32) temp_v0_2->unk_-28;
            camera->unk_8 = (f32) temp_v0_2->unk_-24;
            camera->unk_C = (f32) temp_v0_2->unk_-20;
            camera->unk_10 = (f32) temp_v0_2->unk_-1C;
            camera->unk_14 = (f32) temp_v0_2->unk_-18;
            camera->unk_14 = (f32) (40.0f - (40.0f - camera->unk_14));
            camera->unk_18 = (f32) temp_v0_2->unk_-14;
            camera->unk_18 = (f32) (20.0f - (20.0f - camera->unk_18));
            camera->unk_1C = (f32) ((f32) temp_v0_2->unk_-10 * 0.01f);
            camera->unk_1C = (f32) (1.0f - (1.0f - camera->unk_1C));
            camera->unk_20 = (f32) temp_v0_2->unk_-C;
            camera->unk_24 = (f32) ((f32) temp_v0_2->unk_-8 * 0.01f);
            camera->unk_24 = (f32) (1.0f - (1.0f - camera->unk_24));
            camera->unk_2C = (s16) temp_v0_2->unk_-4;
            camera->unk_28 = (f32) ((f32) temp_v0_2->unk_0 * 0.01f);
            camera->unk_28 = (f32) (0.2f - (0.2f - camera->unk_28));
        }
        temp_a2 = &camera->eye;
        sp48 = temp_a2;
        sp44 = temp_a1_2;
        sp60 = temp_f0 + camera->unk_0;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &spC8, temp_a1_2, temp_a2);
        temp_a2_2 = &camera->eyeNext;
        sp40 = temp_a2_2;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &spC0, temp_a1_2, temp_a2_2);
        D_801B9E08 = (s32) camera->unk_2C;
        temp_v1_2 = camera->animState;
        if ((temp_v1_2 == 0) || (temp_v1_2 == 0xA) || (temp_v1_2 == 0x14)) {
            camera->animState = temp_v1_2 + 1;
            temp_t0 = &camera->paramData[48];
            temp_t0->unk_18 = 0;
            temp_t0->unk_10 = 0;
            temp_t0->unk_4 = 0.0f;
            temp_t0->unk_16 = 7;
            temp_t0->unk_C = (Actor *) camera->target;
            temp_t0->unk_12 = spCE;
            temp_t0->unk_14 = spCC;
            temp_t0->unk_0 = spC8;
            temp_t0->unk_8 = (f32) (camera->playerPosRot.pos.y - camera->playerPosDelta.y);
            temp_f2 = 2.0f * camera->unk_4;
            if (temp_f2 < camera->dist) {
                camera->dist = temp_f2;
                spC0 = camera->dist;
                temp_a2_3 = &spC8;
                spC8 = spC0;
                OLib_VecSphAddToVec3f(sp48, sp44, (VecSph *) temp_a2_3);
                sp40->x = sp48->x;
                sp40->y = sp48->y;
                sp40->z = sp48->z;
            }
        }
        sp3C = &camera->playerPosRot;
        temp_t0_2 = &camera->paramData[48];
        if (camera->status == 7) {
            D_801B9E50 = 1;
            camera->inputDir.x = (s16) -(s32) spCC;
            camera->inputDir.z = 0;
            camera->inputDir.y = spCE + 0x8000;
        }
        sp38 = temp_t0_2;
        if (func_800CB950(camera) != 0) {
            temp_t0_2->unk_8 = (f32) sp3C->pos.y;
        }
        sp114 = camera->unk_4;
        temp_a1_3 = camera->target;
        temp_a0 = &camera->targetPosRot;
        if (temp_a1_3->id != 0x20) {
            sp30 = temp_a0;
            sp38 = temp_t0_2;
            func_800B8248(temp_a0, (Player *) temp_a1_3);
            func_800B81E0(&spA8, (Player *) camera->target);
            camera->targetPosRot.pos.y = spAC;
        } else {
            temp_a0_2 = &camera->targetPosRot;
            sp30 = temp_a0_2;
            sp38 = temp_t0_2;
            func_800B81E0((f32 *) temp_a0_2, (Player *) temp_a1_3);
        }
        temp_a1_4 = camera->target;
        phi_f12 = 1.0f;
        if (temp_a1_4 != camera->paramData[48].unk_C) {
            camera->paramData[48].unk_C = temp_a1_4;
            camera->atLERPStepScale = 0.0f;
        }
        sp38 = &camera->paramData[48];
        camera->yOffsetUpdateRate = Camera_Lerpf(1.0f, camera->yOffsetUpdateRate, camera->speedRatio * 0.5f, 0.0001f);
        camera->xzOffsetUpdateRate = Camera_Lerpf(1.0f, camera->xzOffsetUpdateRate, camera->speedRatio * 0.2f, 0.0001f);
        camera->fovUpdateRate = Camera_Lerpf(0.05f, camera->fovUpdateRate, camera->speedRatio * 0.05f, 0.0001f);
        if (func_800CB950(camera) != 0) {
            camera->paramData[48].unk_8 = (f32) sp3C->pos.y;
            sp70 = 0;
        } else {
            sp70 = 1;
        }
        if (sp70 != 0) {
            phi_v0 = 0x80;
        } else {
            phi_v0 = 0;
        }
        sp38 = &camera->paramData[48];
        func_800CDE6C(camera, &spC0, (Vec3f *) sp30, camera->unk_0, camera->unk_8, (f32 *) &(&camera->paramData[48])[8], (VecSph *) &spD0, (s16) (phi_v0 | camera->unk_2C));
        sp124.unk_0 = (f32) sp3C->pos.x;
        sp124.unk_4 = (f32) sp3C->pos.y;
        sp124.unk_8 = (f32) sp3C->pos.z;
        sp128 += sp60;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &spD0, (Vec3f *) &sp124, (Vec3f *) sp30);
        if (sp114 < spD0) {
            sp74 = 1.0f;
        } else {
            sp74 = spD0 / sp114;
        }
        sp38 = &camera->paramData[48];
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &spE8, sp44, sp40);
        temp_f0_2 = camera->unk_4;
        if (spE8 < temp_f0_2) {
            sp114 = temp_f0_2;
            spF8 = 20.0f;
        } else {
            temp_f0_3 = camera->unk_8;
            if (temp_f0_3 < spE8) {
                sp114 = temp_f0_3;
                phi_f12 = 20.0f;
            } else {
                sp114 = spE8;
            }
            spF8 = phi_f12;
        }
        sp38 = &camera->paramData[48];
        temp_f0_4 = Camera_Lerpf(spF8, camera->rUpdateRateInv, 0.5f, 0.1f);
        camera->rUpdateRateInv = temp_f0_4;
        temp_f0_5 = Camera_Lerpf(sp114, camera->dist, 1.0f / temp_f0_4, 0.1f);
        camera->dist = temp_f0_5;
        spE8 = temp_f0_5;
        spF8 = temp_f0_5;
        sp118.unk_0 = (f32) sp30->pos.x;
        sp118.unk_4 = (f32) sp30->pos.y;
        sp118.unk_8 = (f32) sp30->pos.z;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &spD8, sp44, (Vec3f *) &sp118);
        if (spD8 <= spF8) {
            phi_f0 = spD8;
        } else {
            phi_f0 = spF8;
        }
        spD8 = spF8 - (phi_f0 * 0.5f);
        sp38 = &camera->paramData[48];
        temp_f0_6 = Camera_Lerpf(spF8, camera->dist, 0.06f, 0.1f);
        camera->dist = temp_f0_6;
        spE8 = temp_f0_6;
        temp_f2_2 = camera->unk_C;
        spEE = spC6;
        temp_v1_3 = camera->paramData[48].unk_16;
        temp_v0_3 = spDE - (s16) (spC6 + 0x8000);
        temp_f18 = temp_f2_2 + ((camera->unk_10 - temp_f2_2) * (1.1f - sp74));
        phi_v1 = temp_v1_3;
        phi_t0 = &camera->paramData[48];
        if (temp_v1_3 != 0) {
            temp_t3 = temp_v1_3 - 1;
            if ((s32) temp_v1_3 > 0) {
                sp72 = temp_t3;
                sp38 = &camera->paramData[48];
                spF2 = spD6;
                OLib_Vec3fDiffToVecSphGeo((VecSph *) &spD0, sp44, sp48);
                temp_t9 = spF2 + 0x8000;
                spD6 = temp_t9;
                spF2 = (s16) (s32) ((f32) (s16) (camera->paramData[48].unk_12 - temp_t9) * 0.16666667f);
                temp_f4 = (s32) ((f32) (s16) (camera->paramData[48].unk_14 - spD4) * 0.16666667f);
                spF0 = (s16) temp_f4;
                spE8 = Camera_Lerpf(((f32) temp_t3 * ((camera->paramData[48].unk_0 - spD0) * 0.16666667f)) + spD0, spC8, 0.5f, 0.1f);
                spEE = Camera_Lerps((s16) (spD6 + (spF2 * sp72)), spCE, 0.5f, 5);
                spEC = Camera_Lerps((s16) (spD4 + ((s16) temp_f4 * sp72)), spCC, 0.5f, 5);
                phi_v1 = camera->paramData[48].unk_16;
            }
            sp78 = 1;
            camera->paramData[48].unk_16 = (s16) (phi_v1 - 1);
            phi_t0 = &camera->paramData[48];
        } else {
            if ((s32) temp_v0_3 >= 0) {
                phi_v0_2 = (s32) temp_v0_3;
            } else {
                phi_v0_2 = -(s32) temp_v0_3;
            }
            temp_f6 = (s32) ((temp_f18 * 182.04167f) + 0.5f);
            if ((s32) (s16) temp_f6 < phi_v0_2) {
                spF2 = temp_v0_3;
                sp38 = &camera->paramData[48];
                spFC = temp_f18;
                temp_f16 = (f32) temp_v0_3 * 0.00549325f;
                sp104 = temp_f16;
                temp_f2_3 = ((OLib_ClampMaxDist(spD8, spE8) / spE8) * ((temp_f18 + 10.0f) - temp_f18)) + temp_f18;
                temp_f12 = ((temp_f2_3 * temp_f2_3) - 2.0f) / (temp_f2_3 - 360.0f);
                temp_f14 = (temp_f16 * temp_f16) / ((temp_f12 * temp_f16) + (2.0f - (360.0f * temp_f12)));
                phi_t0 = &camera->paramData[48];
                if ((s32) spF2 >= 0) {
                    phi_v1_2 = (s32) ((temp_f14 * 182.04167f) + 0.5f) << 0x10;
                } else {
                    phi_v1_2 = (s32) (s16) (s32) ((temp_f14 * 182.04167f) + 0.5f) * -0x10000;
                }
                spEE = spC6 + 0x8000 + (phi_v1_2 >> 0x10) + 0x8000;
            } else {
                phi_v1_3 = (s16) ((s32) (s16) temp_f6 * -1);
                if ((s32) temp_v0_3 >= 0) {
                    phi_v1_3 = (s16) temp_f6;
                }
                spEE = spC6 - (s32) ((f32) (phi_v1_3 - temp_v0_3) * ((1.0f - camera->speedRatio) * 0.05f));
            }
        }
        if (sp78 == 0) {
            temp_f0_7 = camera->unk_14;
            temp_a0_3 = (s16) ((s16) (s32) (((temp_f0_7 + ((camera->unk_18 - temp_f0_7) * sp74)) * 182.04167f) + 0.5f) - (s32) (((f32) spD4 * (0.5f + (sp74 * 0.5f))) + 0.5f)) + (s32) ((f32) spDC * camera->unk_1C);
            phi_a0 = temp_a0_3;
            if ((s32) temp_a0_3 < -0x3200) {
                phi_a0 = -0x3200;
            } else if ((s32) temp_a0_3 >= 0x3201) {
                phi_a0 = 0x3200;
            }
            sp38 = phi_t0;
            spEC = Camera_Lerps(phi_a0, spC4, 0.11111111f, 5);
            OLib_VecSphAddToVec3f(sp40, sp44, (VecSph *) &spE8);
            sp7C.unk_0 = sp40->x;
            (&sp7C)[1] = sp40->y;
            (&sp7C)[2] = sp40->z;
            if (camera->status == 7) {
                temp_v0_4 = camera->unk_2C;
                if ((temp_v0_4 & 0x10) == 0) {
                    if ((camera->globalCtx->envCtx.unk_15 == 0) || ((temp_v0_4 & 1) != 0)) {
                        sp38 = phi_t0;
                        if (func_800CBC84((? *) camera, sp44, (Vec3f *) &sp7C, 0) != 0) {
                            phi_t0->unk_18 = (s16) (phi_t0->unk_18 | 0x1000);
                        } else {
                            phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xEFFF);
                        }
                    } else if ((temp_v0_4 & 2) != 0) {
                        sp38 = phi_t0;
                        func_800CBC84((? *) camera, sp44, (Vec3f *) &sp7C, 3);
                    } else {
                        sp38 = phi_t0;
                        OLib_Vec3fDistNormalize((Vec3f *) &sp130, sp44, (Vec3f *) &sp7C);
                        sp7C -= sp130;
                        sp80 -= sp134;
                        sp84 -= sp138;
                    }
                    sp48->x = sp7C.unk_0;
                    sp48->y = (&sp7C)[1];
                    sp48->z = (&sp7C)[2];
                    phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xFFEF);
                } else if ((camera->globalCtx->envCtx.unk_15 == 0) || ((temp_v0_4 & 1) != 0)) {
                    sp38 = phi_t0;
                    if (func_800CBC84((? *) camera, sp44, (Vec3f *) &sp7C, 0) != 0) {
                        phi_t0->unk_18 = (s16) (phi_t0->unk_18 | 0x1000);
                        sp38 = phi_t0;
                        spF8 = OLib_Vec3fDist(sp44, (Vec3f *) spA4);
                        temp_f0_8 = OLib_Vec3fDist(sp44, (Vec3f *) &sp7C);
                        if ((phi_t0->unk_18 & 0x10) != 0) {
                            phi_f0_2 = 40.0f;
                        } else {
                            phi_f0_2 = 0.0f;
                        }
                        temp_f12_2 = spF8 + phi_f0_2;
                        spF4 = temp_f0_8;
                        spF8 = temp_f12_2;
                        sp38 = phi_t0;
                        func_800B8898(camera->globalCtx, (Actor *) camera->player, &sp56, &sp54);
                        if ((temp_f0_8 < temp_f12_2) || (((s32) sp56 >= 0) && ((s32) sp56 < 0x141) && ((s32) sp54 >= 0) && ((s32) sp54 < 0xF1))) {
                            phi_t0->unk_18 = (s16) (phi_t0->unk_18 | 0x10);
                            spE6 = spD6 + 0x8000;
                            spE4 = (s16) -(s32) spD4;
                            spE0 = 40.0f;
                            sp130.unk_0 = spA4->pos.x;
                            (&sp130)[1] = spA4->pos.y;
                            (&sp130)[2] = spA4->pos.z;
                            sp134 += 40.0f;
                            OLib_VecSphAddToVec3f((Vec3f *) &sp124, (Vec3f *) &sp130, (VecSph *) &spE0);
                            Camera_LerpVec3f((Vec3f *) &sp124, sp48, 0.15f, 0.15f, 0.2f);
                        } else {
                            temp_v0_5 = phi_t0->unk_18;
                            if ((temp_v0_5 & 0x10) != 0) {
                                sp38 = phi_t0;
                                if (OLib_Vec3fDist((Vec3f *) &sp7C, sp48) < 20.0f) {
                                    phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xFFEF);
                                    sp48->x = sp7C.unk_0;
                                    sp48->y = (&sp7C)[1];
                                    sp48->z = (&sp7C)[2];
                                } else {
                                    Camera_LerpVec3f((Vec3f *) &sp7C, sp48, 0.15f, 0.15f, 0.2f);
                                }
                            } else {
                                phi_t0->unk_18 = (s16) (temp_v0_5 & 0xFFEF);
                                sp48->x = sp7C.unk_0;
                                sp48->y = (&sp7C)[1];
                                sp48->z = (&sp7C)[2];
                            }
                        }
                    } else {
                        temp_v0_6 = phi_t0->unk_18;
                        if ((temp_v0_6 & 0x10) != 0) {
                            sp38 = phi_t0;
                            if (OLib_Vec3fDist((Vec3f *) &sp7C, sp48) < 20.0f) {
                                phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xFFEF);
                                sp48->x = sp7C.unk_0;
                                sp48->y = (&sp7C)[1];
                                sp48->z = (&sp7C)[2];
                            } else {
                                sp38 = phi_t0;
                                Camera_LerpVec3f((Vec3f *) &sp7C, sp48, 0.15f, 0.15f, 0.2f);
                            }
                        } else {
                            phi_t0->unk_18 = (s16) (temp_v0_6 & 0xFFEF);
                            sp48->x = sp7C.unk_0;
                            sp48->y = (&sp7C)[1];
                            sp48->z = (&sp7C)[2];
                        }
                        phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xEFFF);
                    }
                } else if ((temp_v0_4 & 2) != 0) {
                    phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xFFEF);
                    if (func_800CBC84((? *) camera, sp44, (Vec3f *) &sp7C, 3) != 0) {
                        sp48->x = sp7C.unk_0;
                        sp48->y = (&sp7C)[1];
                        sp48->z = (&sp7C)[2];
                    } else {
                        sp48->x = sp7C.unk_0;
                        sp48->y = (&sp7C)[1];
                        sp48->z = (&sp7C)[2];
                    }
                } else {
                    phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xFFEF);
                    OLib_Vec3fDistNormalize((Vec3f *) &sp130, sp44, (Vec3f *) &sp7C);
                    temp_t5 = &sp7C;
                    sp7C -= sp130;
                    sp80 -= sp134;
                    sp84 -= sp138;
                    sp48->x = temp_t5->unk_0;
                    sp48->y = temp_t5[1];
                    sp48->z = temp_t5[2];
                }
            } else {
                phi_t0->unk_18 = (s16) (phi_t0->unk_18 & 0xFFEF);
                sp48->x = sp40->x;
                sp48->y = sp40->y;
                sp48->z = sp40->z;
            }
        }
        camera->fov = Camera_Lerpf(camera->unk_20, camera->fov, camera->fovUpdateRate, 0.1f);
        camera->roll = Camera_Lerps(0, camera->roll, 0.2f, 5);
        if (sp70 != 0) {
            phi_f0_3 = camera->unk_28;
        } else {
            phi_f0_3 = camera->unk_24;
        }
        camera->atLERPStepScale = func_800CD288(camera, phi_f0_3);
    }
    return 1;
}

s32 Camera_ModeKEEP2(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeKEEP3(Camera *camera) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    ? spC0;
    f32 spB8;
    f32 spB4;
    Player *spAC;
    Actor *spA8;
    s16 spA4;
    f32 spA0;
    s16 sp9E;
    s16 sp9C;
    f32 sp98;
    s16 sp96;
    s16 sp94;
    f32 sp90;
    ? sp88;
    f32 sp80;
    s32 sp78;
    PosRot *sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    f32 sp58;
    Vec3f *sp48;
    PosRot *sp3C;
    s8 *sp38;
    Actor *temp_v0;
    Actor *temp_v0_6;
    Actor *temp_v0_7;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    PosRot *temp_s1;
    PosRot *temp_v1_3;
    Vec3f *temp_a2;
    Vec3f *temp_s0;
    Vec3f *temp_s1_2;
    Vec3f *temp_s2;
    f32 *temp_a1;
    f32 *temp_a2_2;
    f32 *temp_a2_3;
    f32 *temp_a2_4;
    f32 *temp_s2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 *temp_v0_2;
    s16 temp_v0_10;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_f8;
    s32 temp_s0_2;
    s32 temp_v0_11;
    s8 *temp_t0;
    s8 *temp_v0_4;
    u16 temp_v0_5;
    void *temp_v0_3;
    f32 phi_f14;
    s32 phi_v1;
    s16 phi_a3;
    s16 phi_a3_2;
    s32 phi_v1_2;
    s32 phi_a3_3;
    s8 *phi_t0;
    Vec3f *phi_s2;
    s32 phi_s0;

    sp6A = 0;
    sp70 = &camera->player->actor.focus;
    sp58 = func_800CB700(camera);
    temp_v0 = camera->target;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        camera->target = NULL;
        func_800DF840(camera, (Camera *)0xA);
        goto block_71;
    }
    temp_v1 = camera->animState;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        if (camera->globalCtx->view.unk_164 == 0) {
            Camera_SetFlags(camera, 0x20);
            camera->globalCtx->view.unk_164 = camera->thisIdx | 0x50;
            return 1;
        }
        Camera_ClearFlags(camera, 0x20);
        goto block_9;
    }
block_9:
    Camera_ClearFlags(camera, 0x10);
    temp_v1_2 = camera->animState;
    temp_s0 = &camera->at;
    if ((temp_v1_2 == 0) || (temp_v1_2 == 0xA) || (temp_v1_2 == 0x14)) {
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_3 = temp_v0_2 + 0x30;
        camera->unk_0 = (f32) ((f32) *temp_v0_2 * 0.01f * sp58 * (0.8f - ((68.0f / sp58) * -0.2f)));
        camera->unk_4 = (f32) temp_v0_3->unk_-2C;
        camera->unk_8 = (f32) temp_v0_3->unk_-28;
        camera->unk_C = (f32) temp_v0_3->unk_-24;
        camera->unk_10 = (f32) temp_v0_3->unk_-20;
        camera->unk_14 = (f32) temp_v0_3->unk_-1C;
        camera->unk_18 = (f32) temp_v0_3->unk_-18;
        camera->unk_1C = (f32) ((f32) temp_v0_3->unk_-14 * 0.01f);
        camera->unk_20 = (f32) temp_v0_3->unk_-10;
        camera->unk_24 = (f32) ((f32) temp_v0_3->unk_-C * 0.01f);
        camera->unk_2C = (s16) temp_v0_3->unk_-8;
        camera->unk_2E = (s16) temp_v0_3->unk_-4;
        camera->unk_28 = (f32) ((f32) temp_v0_3->unk_0 * 0.01f);
    }
    temp_a2 = &camera->eye;
    if (camera->animState == 0xA) {
        camera->unk_2C = (s16) ((s32) camera->unk_2C >> 1);
        if ((s32) camera->unk_2C < 0x14) {
            camera->unk_2C = 0x14;
        }
    }
    sp48 = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp88, temp_s0, temp_a2);
    temp_s2 = &camera->eyeNext;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp80, temp_s0, temp_s2);
    temp_s1 = &camera->targetPosRot;
    func_800B81E0((f32 *) temp_s1, (Player *) camera->target);
    temp_v1_3 = &camera->playerPosRot;
    spD8.unk_0 = temp_v1_3->pos.x;
    (&spD8)[1] = temp_v1_3->pos.y;
    (&spD8)[2] = temp_v1_3->pos.z;
    sp3C = temp_v1_3;
    spDC += sp58;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spA0, (Vec3f *) &spD8, (Vec3f *) temp_s1);
    temp_v1_4 = camera->animState;
    if ((temp_v1_4 == 0) || (temp_v1_4 == 0xA) || (temp_v1_4 == 0x14)) {
        camera->animState = temp_v1_4 + 1;
        spA8 = camera->target;
        temp_t0 = &camera->paramData[48];
        spAC = camera->player;
        temp_t0->unk_C = (Actor *) camera->target;
        temp_f0_2 = camera->unk_8;
        phi_t0 = temp_t0;
        if (temp_f0_2 < spA0) {
            phi_f14 = 1.0f;
        } else {
            phi_f14 = spA0 / temp_f0_2;
        }
        temp_t0->unk_1C = (s16) camera->unk_2C;
        spB8 = ((1.0f - phi_f14) * spA0) / (f32) temp_t0->unk_1C;
        if ((camera->unk_2E & 0x40) != 0) {
            spA4 = 0;
        }
        temp_f2_2 = camera->unk_14;
        sp9C = (s32) (((temp_f2_2 + ((camera->unk_18 - temp_f2_2) * phi_f14)) * 182.04167f) + 0.5f) + (s32) -((f32) spA4 * camera->unk_1C);
        temp_f12_2 = camera->unk_C;
        sp78 = 1;
        temp_v0_7 = camera->target;
        temp_f8 = (s32) (((temp_f12_2 + ((camera->unk_10 - temp_f12_2) * phi_f14)) * 182.04167f) + 0.5f);
        phi_a3 = (s16) temp_f8;
        phi_a3_2 = (s16) temp_f8;
        phi_a3_3 = (s32) (s16) temp_f8;
        if ((temp_v0_7->category == 0xA) || (temp_v0_7->id == 0x261)) {
            phi_v1_2 = -(s32) spA4;
            if ((s32) (s16) (camera->targetPosRot.rot.y - sp86) > 0) {
                phi_a3_3 = (s32) (s16) (temp_f8 * -1);
            }
            if ((s32) spA4 >= 0) {
                phi_v1_2 = (s32) spA4;
            }
            phi_s2 = (Vec3f *) &spCC;
            if (phi_v1_2 < 0x157C) {
                temp_v0_10 = spA6 + 0x8000;
                sp9E = temp_v0_10 + phi_a3_3;
                sp6A = temp_v0_10 - phi_a3_3;
                sp38 = temp_t0;
            } else {
                sp78 = 0;
                sp96 = spA6 + 0x8000 + (phi_a3_3 >> 2);
                sp94 = (s16) -(s32) spA4;
                sp90 = 30.0f;
                temp_s2_2 = &spCC;
                temp_s2_2->unk_0 = sp70->pos.x;
                temp_s2_2[1] = sp70->pos.y;
                temp_s2_2[2] = sp70->pos.z;
                sp38 = temp_t0;
                spD0 += 30.0f;
                OLib_VecSphAddToVec3f((Vec3f *) &spC0, (Vec3f *) temp_s2_2, (VecSph *) &sp90);
                temp_a1 = temp_s2_2;
                spCC = (camera->targetPosRot.pos.x + spD8) * 0.5f;
                spD0 = (camera->targetPosRot.pos.y + spDC) * 0.5f;
                spD4 = (camera->targetPosRot.pos.z + spE0) * 0.5f;
                OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp98, (Vec3f *) temp_a1, (Vec3f *) &spC0);
                phi_s2 = (Vec3f *) temp_s2_2;
                if ((s32) sp9C < -0x2328) {
                    sp9C = -0x2328;
                    phi_s2 = (Vec3f *) temp_s2_2;
                }
            }
            phi_t0 = sp38;
        } else if ((camera->unk_2E & 0x20) == 0) {
            temp_v0_8 = spA6 - sp86;
            phi_v1 = -(s32) temp_v0_8;
            phi_s2 = (Vec3f *) &spCC;
            if ((s32) temp_v0_8 >= 0) {
                phi_v1 = (s32) temp_v0_8;
            }
            if (phi_v1 < 0x4000) {
                if ((s32) temp_v0_8 > 0) {
                    phi_a3 = (s16) (temp_f8 * -1);
                }
                sp9E = spA6 + phi_a3;
                sp6A = spA6 - phi_a3;
            } else {
                goto block_42;
            }
        } else {
block_42:
            temp_v0_9 = spA6 + 0x8000;
            phi_s2 = (Vec3f *) &spCC;
            if ((s32) (s16) (temp_v0_9 - sp86) < 0) {
                phi_a3_2 = (s16) (temp_f8 * -1);
            }
            sp9E = temp_v0_9 + phi_a3_2;
            sp6A = temp_v0_9 - phi_a3_2;
        }
        sp6C = sp9E;
        sp6E = sp9C;
        temp_f2_3 = camera->unk_28;
        temp_f0_3 = spA0;
        temp_s1_2 = phi_t0 + 0x10;
        temp_a2_3 = &spA0;
        spA0 = (spB8 * temp_f2_3) + (temp_f0_3 * (1.0f - temp_f2_3));
        spD8.unk_0 = sp3C->pos.x;
        (&spD8)[1] = sp3C->pos.y;
        (&spD8)[2] = sp3C->pos.z;
        sp38 = phi_t0;
        spB4 = temp_f0_3;
        spDC += sp58;
        OLib_VecSphAddToVec3f(temp_s1_2, (Vec3f *) &spD8, (VecSph *) temp_a2_3);
        sp38->unk_14 = (f32) (sp38->unk_14 + camera->unk_0);
        spA0 = temp_f0_3;
        if (sp78 != 0) {
            sp78 = 0xE;
            temp_a2_4 = &sp98;
            sp98 = ((camera->unk_4 + (temp_f0_3 * 0.5f)) - sp80) + sp80;
            OLib_VecSphAddToVec3f(phi_s2, temp_s1_2, (VecSph *) temp_a2_4);
            phi_s0 = 0;
            if ((camera->unk_2E & 0x80) == 0) {
                temp_a0 = camera->globalCtx;
                if ((CollisionCheck_LineOCCheck(temp_a0, &temp_a0->colChkCtx, temp_s1_2, phi_s2, &spA8, 2) != 0) || (func_800CC128(camera, temp_s1_2, (f32 *) phi_s2) != 0)) {
                    sp9E = sp6A;
                    OLib_VecSphAddToVec3f(phi_s2, temp_s1_2, (VecSph *) &sp98);
                }
loop_50:
                temp_a0_2 = camera->globalCtx;
                if ((CollisionCheck_LineOCCheck(temp_a0_2, &temp_a0_2->colChkCtx, temp_s1_2, phi_s2, &spA8, 2) != 0) || (func_800CC128(camera, temp_s1_2, (f32 *) phi_s2) != 0)) {
                    temp_v0_11 = phi_s0 * 2;
                    sp9E = *(&D_801B9E18 + temp_v0_11) + sp6C;
                    sp9C = *(&D_801B9E34 + temp_v0_11) + sp6E;
                    OLib_VecSphAddToVec3f(phi_s2, temp_s1_2, (VecSph *) &sp98);
                    temp_s0_2 = phi_s0 + 1;
                    phi_s0 = temp_s0_2;
                    if (temp_s0_2 < sp78) {
                        goto loop_50;
                    }
                }
            }
        }
        Camera_ClearFlags(camera, 0xC);
        temp_v1_6 = sp38->unk_1C;
        temp_f0_4 = (f32) ((s32) ((temp_v1_6 + 1) * temp_v1_6) >> 1);
        sp38->unk_4 = (f32) ((f32) (s16) (sp9E - sp86) / temp_f0_4);
        sp38->unk_8 = (f32) ((f32) (s16) (sp9C - sp84) / temp_f0_4);
        sp38->unk_0 = (f32) ((sp98 - sp80) / temp_f0_4);
        D_801B9E08 = 0xFF00;
        return 1;
    }
    temp_v0_4 = &camera->paramData[48];
    D_801B9E08 = (s32) camera->unk_2E;
    temp_v1_5 = temp_v0_4->unk_1C;
    if (temp_v1_5 != 0) {
        temp_f2 = temp_s0->x;
        temp_f0 = (f32) temp_v1_5;
        temp_f12 = temp_s0->y;
        temp_f14 = temp_s0->z;
        temp_a2_2 = &sp98;
        temp_s0->x = temp_f2 + ((temp_v0_4->unk_10 - temp_f2) / temp_f0);
        temp_s0->y = temp_f12 + ((temp_v0_4->unk_14 - temp_f12) / temp_f0);
        temp_s0->z = temp_f14 + ((temp_v0_4->unk_18 - temp_f14) / temp_f0);
        sp98 = (temp_v0_4->unk_0 * temp_f0) + sp80 + 1.0f;
        sp9E = sp86 + (s32) (temp_v0_4->unk_4 * temp_f0);
        sp38 = temp_v0_4;
        sp9C = sp84 + (s32) (temp_v0_4->unk_8 * temp_f0);
        OLib_VecSphAddToVec3f(temp_s2, temp_s0, (VecSph *) temp_a2_2);
        sp48->x = temp_s2->x;
        sp48->y = temp_s2->y;
        sp48->z = temp_s2->z;
        camera->fov = Camera_Lerpf(camera->unk_20, camera->fov, 0.5f, 0.1f);
        camera->roll = Camera_Lerps(0, camera->roll, 0.5f, 5);
        camera->atLERPStepScale = func_800CD288(camera, camera->unk_24);
        func_800CBFA4(camera, temp_s0, sp48, 3);
        sp38->unk_1C = (s16) (sp38->unk_1C - 1);
    } else {
        sp38 = temp_v0_4;
        Camera_SetFlags(camera, 0x410);
    }
    func_800CB6C8(camera, sp3C);
    camera->dist = OLib_Vec3fDist(temp_s0, sp48);
    if (((camera->flags2 & 8) != 0) && ((D_801B9E08 = 0, func_800CB5DC(camera), camera->atLERPStepScale = 0.0f, (camera->xzSpeed > 0.001f)) || (temp_v0_5 = camera->globalCtx->state.input[0].press.button, (~(temp_v0_5 | 0xFFFF7FFF) == 0)) || (~(temp_v0_5 | ~0x4000) == 0) || (~(temp_v0_5 | ~8) == 0) || (~(temp_v0_5 | ~4) == 0) || (~(temp_v0_5 | ~2) == 0) || (~(temp_v0_5 | ~1) == 0) || (~(temp_v0_5 | ~0x2000) == 0) || (~(temp_v0_5 | ~0x20) == 0) || (~(temp_v0_5 | ~0x10) == 0))) {
        Camera_SetFlags(camera, 4);
        Camera_ClearFlags(camera, 8);
    }
    temp_v0_6 = camera->target;
    if (temp_v0_6 != sp38->unk_C) {
        sp38->unk_C = temp_v0_6;
        camera->animState = 0xA;
    }
block_71:
    return 1;
}

s32 Camera_ModeKEEP4(Camera *camera) {
    Actor *spD0;
    Player *spCC;
    ? spC0;
    s16 spBE;
    s16 spBC;
    f32 spB8;
    ? spB0;
    ? spA8;
    s16 spA2;
    s16 sp9C;
    f32 sp88;
    f32 sp84;
    s16 sp82;
    Player *sp7C;
    ? sp60;
    ? sp4C;
    s16 *sp44;
    Vec3f *sp40;
    Vec3f *sp3C;
    PosRot *sp38;
    s8 *sp34;
    Actor *temp_a1_2;
    Actor *temp_a1_3;
    Player *temp_v1_2;
    PosRot *temp_v1_4;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 *temp_a2_3;
    f32 *temp_a3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 *temp_v0_2;
    s16 temp_a0;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_f8;
    s32 temp_t8;
    s8 *temp_t1;
    u8 temp_v0;
    void *temp_v0_3;
    s16 phi_a2;
    s16 phi_a2_2;
    f32 phi_f2;
    s16 phi_t0;
    s16 phi_v1;
    s8 *phi_t1;
    s8 *phi_t1_2;
    s32 phi_v1_2;
    s32 phi_v1_3;

    temp_v1 = camera->animState;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        if (camera->globalCtx->view.unk_164 == 0) {
            Camera_SetFlags(camera, 0x20);
            Camera_ClearFlags(camera, 6);
            camera->globalCtx->view.unk_164 = camera->thisIdx | 0x50;
            return 1;
        }
        camera->unk_38 = (s16) camera->data2;
        Camera_ClearFlags(camera, 0x20);
        goto block_6;
    }
block_6:
    temp_v1_2 = camera->player;
    sp44 = &camera->data2;
    temp_t1 = &camera->paramData[32];
    if (temp_v1_2 == camera->globalCtx->actorCtx.actorList[2].first) {
        temp_v0 = temp_v1_2->transformation;
        phi_a2 = 1;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {
                        phi_a2 = 0;
                    } else {
                        phi_a2 = 3;
                    }
                } else {
                    phi_a2 = 5;
                }
            } else {
                phi_a2 = 2;
            }
        }
        sp7C = temp_v1_2;
        sp82 = phi_a2;
        sp34 = temp_t1;
        phi_a2_2 = phi_a2;
        phi_f2 = func_800CB700(camera) - (temp_v1_2->unk_AB8 * camera->player->actor.scale.y);
    } else {
        sp82 = 0;
        sp34 = temp_t1;
        phi_a2_2 = sp82;
        phi_f2 = func_800CB700(camera);
    }
    if (camera->paramData[32].unk_18 != sp44->unk_0) {
        camera->animState = 0x14;
        Camera_SetFlags(camera, 0x20);
        Camera_ClearFlags(camera, 6);
        camera->globalCtx->view.unk_164 = camera->thisIdx | 0x50;
        return 1;
    }
    sp82 = phi_a2_2;
    sp34 = &camera->paramData[32];
    sp88 = phi_f2;
    Camera_ClearFlags(camera, 0x10);
    temp_v1_3 = camera->animState;
    if ((temp_v1_3 == 0) || (temp_v1_3 == 0xA) || (temp_v1_3 == 0x14)) {
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (phi_a2_2 * 8))->unk_4;
        temp_v0_3 = temp_v0_2 + 0x20;
        temp_f0 = (1.0f + -0.5f) - ((68.0f / phi_f2) * -0.5f);
        camera->unk_0 = (f32) ((f32) *temp_v0_2 * 0.01f * phi_f2 * temp_f0);
        camera->unk_4 = (f32) ((f32) temp_v0_3->unk_-1C * 0.01f * phi_f2 * temp_f0);
        camera->unk_8 = (f32) temp_v0_3->unk_-18;
        camera->unk_C = (f32) temp_v0_3->unk_-14;
        camera->unk_10 = (f32) temp_v0_3->unk_-10;
        camera->unk_18 = (f32) temp_v0_3->unk_-C;
        camera->unk_1C = (s16) temp_v0_3->unk_-8;
        camera->unk_14 = (f32) ((f32) temp_v0_3->unk_-4 * 0.01f);
        camera->unk_1E = (s16) temp_v0_3->unk_0;
    }
    D_801B9E50 = 1;
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    sp44 = (s16 *) temp_a2;
    sp40 = temp_a1;
    sp88 = phi_f2;
    sp34 = &camera->paramData[32];
    D_801B9E08 = (s32) camera->unk_1C;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spB0, temp_a1, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp3C = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spA8, temp_a1, temp_a2_2);
    temp_v1_4 = &camera->playerPosRot;
    D_801EDDD0.unk_0 = temp_v1_4->pos.x;
    (&D_801EDDD0)[1] = temp_v1_4->pos.y;
    (&D_801EDDD0)[2] = temp_v1_4->pos.z;
    D_801EDDD4 += phi_f2;
    sp38 = temp_v1_4;
    temp_f0_2 = func_800C4488(&camera->globalCtx->colCtx, (Vec3f *) &spC0, &sp84, &D_801EDDD0);
    temp_f2 = camera->unk_0 + D_801EDDD4;
    if (temp_f2 < temp_f0_2) {
        D_801EDDD4 = temp_f0_2 + 10.0f;
    } else {
        D_801EDDD4 = temp_f2;
    }
    if (camera->unk_10 != 0.0f) {
        D_801EDDE0.unk_0 = (f32) D_801EDDD0.unk_0;
        temp_a2_3 = &spB8;
        D_801EDDE0.unk_4 = (f32) (&D_801EDDD0)[1];
        D_801EDDE0.unk_8 = (f32) (&D_801EDDD0)[2];
        spBC = 0;
        spB8 = camera->unk_10;
        sp34 = &camera->paramData[32];
        spBE = sp38->rot.y;
        OLib_VecSphAddToVec3f((Vec3f *) &D_801EDDD0, (Vec3f *) &D_801EDDD0, (VecSph *) temp_a2_3);
    }
    temp_v0_4 = camera->animState;
    phi_t1 = &camera->paramData[32];
    if (temp_v0_4 != 0) {
        if (temp_v0_4 != 0xA) {
            if (temp_v0_4 == 0x14) {
                goto block_31;
            }
        } else {
            camera->paramData[32].unk_8 = (f32) (sp38->pos.y - camera->playerPosDelta.y);
        }
    } else {
block_31:
        sp9C = 1;
        sp34 = &camera->paramData[32];
        spCC = camera->player;
        func_800CB544(camera);
        Camera_ClearFlags(camera, 6);
        camera->paramData[32].unk_14 = (s16) camera->unk_1E;
        camera->paramData[32].unk_8 = (f32) (sp38->pos.y - camera->playerPosDelta.y);
        temp_t8 = camera->unk_1C & 0xE;
        switch (temp_t8) {
        case 2:
            temp_v0_5 = sp38->rot.y + 0x8000;
            phi_t0 = (s16) (s32) ((camera->unk_8 * 182.04167f) + 0.5f);
            if ((s32) (s16) (temp_v0_5 - spAE) < 0) {
                phi_v1 = (s16) (temp_v0_5 + (s32) ((camera->unk_C * 182.04167f) + 0.5f));
            } else {
                phi_v1 = (s16) (temp_v0_5 - (s32) ((camera->unk_C * 182.04167f) + 0.5f));
            }
            break;
        case 12:
            phi_t0 = (s16) (s32) ((camera->unk_8 * 182.04167f) + 0.5f);
            phi_v1 = (s16) ((s16) (sp38->rot.y + 0x8000) + (s32) ((camera->unk_C * 182.04167f) + 0.5f));
            break;
        case 4:
            phi_t0 = (s16) (s32) ((camera->unk_8 * 182.04167f) + 0.5f);
            phi_v1 = (s16) (s32) ((camera->unk_C * 182.04167f) + 0.5f);
            break;
        case 6:
            phi_t0 = (s16) (spAC + (s32) ((camera->unk_8 * 182.04167f) + 0.5f));
            phi_v1 = (s16) (spAE + (s32) ((camera->unk_C * 182.04167f) + 0.5f));
            break;
        case 8:
            temp_a1_2 = camera->target;
            if (temp_a1_2 != 0) {
                sp34 = &camera->paramData[32];
                func_800B8248((PosRot *) &sp60, (Player *) temp_a1_2);
                temp_a0 = sp6E + 0x8000;
                phi_t0 = (s16) ((s32) ((camera->unk_8 * 182.04167f) + 0.5f) - sp6C);
                if ((s32) (s16) (temp_a0 - spAE) > 0) {
                    phi_v1_2 = (temp_a0 + (s32) ((camera->unk_C * 182.04167f) + 0.5f)) << 0x10;
                } else {
                    phi_v1_2 = (temp_a0 - (s32) ((camera->unk_C * 182.04167f) + 0.5f)) << 0x10;
                }
                sp9C += 1;
                spD0 = camera->target;
                phi_v1 = (s16) (phi_v1_2 >> 0x10);
            } else {
            case 10:
                temp_a1_3 = camera->target;
                if (temp_a1_3 != 0) {
                    sp34 = &camera->paramData[32];
                    func_800B8214((PosRot *) &sp4C, temp_a1_3);
                    temp_f8 = (s32) ((camera->unk_8 * 182.04167f) + 0.5f);
                    spA2 = (s16) temp_f8;
                    temp_v0_6 = func_800CC958(&sp4C, sp38);
                    phi_t0 = (s16) temp_f8;
                    if ((s32) (s16) (temp_v0_6 - spAE) > 0) {
                        phi_v1_3 = (temp_v0_6 + (s32) ((camera->unk_C * 182.04167f) + 0.5f)) << 0x10;
                    } else {
                        phi_v1_3 = (temp_v0_6 - (s32) ((camera->unk_C * 182.04167f) + 0.5f)) << 0x10;
                    }
                    sp9C += 1;
                    spD0 = camera->target;
                    phi_v1 = (s16) (phi_v1_3 >> 0x10);
                } else {
                case 14:
                    phi_t0 = (s16) (s32) ((camera->unk_8 * 182.04167f) + 0.5f);
                    phi_v1 = spAE;
                }
            }
            break;
        default:
            phi_t0 = spAC;
            phi_v1 = spAE;
            break;
        }
        spBC = phi_t0;
        spBE = phi_v1;
        sp34 = &camera->paramData[32];
        temp_a3 = &spB8;
        spB8 = camera->unk_4;
        sp84 = (bitwise f32) func_800CC260(camera, &D_801EDDF0, (Vec3f *) &D_801EDDD0, temp_a3, (Actor **) &spCC, (s16) (s32) sp9C);
        temp_f0_3 = (f32) camera->paramData[32].unk_14;
        camera->paramData[32].unk_4 = (f32) ((f32) (s16) (spBC - spAC) / temp_f0_3);
        camera->paramData[32] = (f32) ((f32) (s16) (spBE - spAE) / temp_f0_3);
        camera->paramData[32].unk_10 = spAE;
        camera->paramData[32].unk_12 = spAC;
        camera->animState += 1;
        camera->paramData[32].unk_16 = 1;
        phi_t1 = &camera->paramData[32];
    }
    if ((camera->unk_1C & 0x40) != 0) {
        temp_v0_7 = phi_t1->unk_14;
        if (temp_v0_7 != 0) {
            temp_f0_4 = sp40->x;
            temp_f2_2 = sp40->y;
            temp_f12 = sp40->z;
            sp40->x = temp_f0_4 + ((D_801EDDD4 - temp_f0_4) / (f32) temp_v0_7);
            sp40->y = temp_f2_2 + ((D_801EDDD4 - temp_f2_2) / (f32) phi_t1->unk_14);
            sp40->z = temp_f12 + ((D_801EDDD8 - temp_f12) / (f32) phi_t1->unk_14);
            sp34 = phi_t1;
            func_800CB6C8((bitwise Camera *) temp_f12, (PosRot *) camera, sp38);
        }
        camera->yOffsetUpdateRate = 0.25f;
        camera->xzOffsetUpdateRate = 0.25f;
        camera->atLERPStepScale = 0.0f;
        phi_t1_2 = phi_t1;
    } else {
        camera->yOffsetUpdateRate = 0.25f;
        camera->xzOffsetUpdateRate = 0.25f;
        camera->atLERPStepScale = 0.75f;
        sp34 = phi_t1;
        Camera_LerpVec3f((Vec3f *) &D_801EDDD0, sp40, 0.2f, 0.2f, 0.2f);
        camera->atLERPStepScale = 0.0f;
        func_800CB6C8(camera, sp38);
        phi_t1_2 = phi_t1;
    }
    sp34 = phi_t1_2;
    temp_f0_5 = Camera_Lerpf(camera->unk_4, camera->dist, 0.25f, 1.0f);
    camera->dist = temp_f0_5;
    spB8 = temp_f0_5;
    if (phi_t1_2->unk_14 != 0) {
        sp34 = phi_t1_2;
        Camera_SetFlags(camera, 0x20);
        phi_t1_2->unk_10 = (s16) (phi_t1_2->unk_10 + (s32) phi_t1_2->unk_0);
        phi_t1_2->unk_12 = (s16) (phi_t1_2->unk_12 + (s32) phi_t1_2->unk_4);
        phi_t1_2->unk_14 = (s16) (phi_t1_2->unk_14 - 1);
    } else {
        sp34 = phi_t1_2;
        Camera_SetFlags(camera, 0x410);
    }
    sp34 = phi_t1_2;
    spBE = Camera_Lerps(phi_t1_2->unk_10, spAE, camera->unk_14, 5);
    spBC = Camera_Lerps(phi_t1_2->unk_12, spAC, camera->unk_14, 5);
    OLib_VecSphAddToVec3f(sp3C, sp40, (VecSph *) &spB8);
    sp44->unk_0 = (f32) sp3C->x;
    sp44->unk_4 = (f32) sp3C->y;
    sp44->unk_8 = (f32) sp3C->z;
    func_800CBFA4(camera, sp40, (Vec3f *) sp44, 3);
    camera->fov = Camera_Lerpf(camera->unk_18, camera->fov, camera->fovUpdateRate, 0.1f);
    camera->roll = Camera_Lerps(0, camera->roll, 0.5f, 5);
    return 1;
}

s32 Camera_ModeKEEP0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeFIXD1(Camera *camera) {
    s16 sp92;
    s16 sp90;
    f32 sp8C;
    ? sp84;
    ? sp7C;
    f32 sp70;
    ? sp6C;
    void *sp68;
    f32 sp58;
    s32 sp54;
    PosRot *sp50;
    PosRot *sp4C;
    s16 sp4A;
    ? sp44;
    Vec3f *sp38;
    Vec3f *sp34;
    PosRot *sp30;
    Actor *temp_v0_2;
    PosRot *temp_a1_2;
    PosRot *temp_v0_6;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 temp_v1_4;
    s32 temp_v1_2;
    s8 *temp_s1;
    void *temp_v0;
    void *temp_v1_3;
    Vec3f *phi_s1;

    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    sp58 = func_800CB700(camera);
    sp38 = temp_a2;
    sp34 = temp_a1;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp7C, temp_a1, temp_a2);
    temp_v1 = camera->animState;
    if ((temp_v1 != 0) && (temp_v1 != 0xA) && (temp_v1 != 0x14)) {
        phi_s1 = (Vec3f *) &camera->paramData[16];
        goto block_8;
    }
    temp_v1_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    sp54 = temp_v1_2;
    temp_v0 = func_800CC7A8(camera, camera->camDataIdx);
    temp_s1 = &camera->paramData[16];
    sp68 = temp_v0;
    func_800CB60C(temp_s1, temp_v0);
    temp_v1_3 = temp_v1_2 + 0xC;
    temp_s1[12] = (unaligned s32) sp68->unk_6;
    temp_s1->unk_10 = (u16) sp68->unk_A;
    temp_s1->unk_14 = (s16) sp68->unk_C;
    temp_s1->unk_18 = (Player *) camera->player;
    camera->unk_0 = (f32) ((f32) temp_v1_3->unk_-C * 0.01f * sp58);
    camera->unk_4 = (f32) ((f32) temp_v1_3->unk_-8 * 0.01f);
    camera->unk_8 = (f32) temp_v1_3->unk_-4;
    camera->unk_C = (s16) temp_v1_3->unk_0;
    phi_s1 = (Vec3f *) temp_s1;
    if ((camera->unk_C & 0x10) != 0) {
        temp_v0_2 = camera->target;
        temp_a1_2 = &temp_v0_2->home;
        if (temp_v0_2 == 0) {
            return 0;
        }
        sp4C = &temp_v0_2->world;
        sp50 = temp_a1_2;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp44, (Vec3f *) temp_a1_2, (Vec3f *) temp_s1);
        sp4A = sp4C->rot.y + (sp4A - sp50->rot.y);
        OLib_VecSphAddToVec3f((Vec3f *) temp_s1, (Vec3f *) sp4C, (VecSph *) &sp44);
        temp_s1->unk_E = (s16) (sp4C->rot.y + (s16) (temp_s1->unk_E - sp50->rot.y));
        phi_s1 = (Vec3f *) temp_s1;
        goto block_8;
    }
block_8:
    if (camera->player != phi_s1[2].x) {
        camera->animState = 0x14;
    }
    temp_v0_3 = phi_s1->unk_14;
    if (temp_v0_3 == -1) {
        phi_s1->unk_14 = (s16) (s32) (camera->unk_8 * 100.0f);
    } else if ((s32) temp_v0_3 < 0x169) {
        phi_s1->unk_14 = (s16) (temp_v0_3 * 0x64);
    }
    D_801B9E08 = (s32) camera->unk_C;
    temp_v1_4 = camera->animState;
    if (temp_v1_4 == 0) {
        camera->animState = temp_v1_4 + 1;
        func_800CB5DC(camera, -1);
        temp_v0_4 = phi_s1->unk_14;
        if (temp_v0_4 != -1) {
            camera->unk_8 = (f32) ((f32) temp_v0_4 * 0.01f);
        }
        temp_v0_5 = sp68->unk_E;
        if (temp_v0_5 != -1) {
            camera->unk_4 = (f32) ((f32) temp_v0_5 * 0.01f);
        }
    }
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp84, sp38, sp34);
    temp_f0 = camera->unk_4;
    Camera_LerpVec3f(phi_s1, sp38, temp_f0, temp_f0, 0.2f);
    temp_v0_6 = &camera->playerPosRot;
    sp6C.unk_0 = (f32) temp_v0_6->pos.x;
    sp6C.unk_4 = (f32) temp_v0_6->pos.y;
    sp6C.unk_8 = (f32) temp_v0_6->pos.z;
    sp30 = temp_v0_6;
    sp70 += sp58;
    temp_f0_2 = OLib_Vec3fDist((Vec3f *) &sp6C, sp38);
    camera->dist = temp_f0_2;
    sp8C = temp_f0_2;
    sp90 = Camera_Lerps((s16) ((s32) phi_s1->unk_C * -1), sp88, camera->unk_4, 5);
    sp92 = Camera_Lerps(phi_s1->unk_E, sp8A, camera->unk_4, 5);
    OLib_VecSphAddToVec3f(sp34, sp38, (VecSph *) &sp8C);
    camera->eyeNext.x = sp38->x;
    camera->eyeNext.y = sp38->y;
    camera->eyeNext.z = sp38->z;
    func_800CC128(camera, sp38, (f32 *) sp34);
    camera->fov = Camera_Lerpf(camera->unk_8, camera->fov, camera->unk_4, 0.1f);
    camera->roll = 0;
    camera->atLERPStepScale = 0.0f;
    func_800CB6C8(camera, sp30);
    camera->roll = Camera_Lerps(phi_s1->unk_10, camera->roll, camera->unk_4, 5);
    return 1;
}

s32 Camera_ModeFIXD2(Camera *camera) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    ? spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    void *sp88;
    f32 sp80;
    PosRot *sp7C;
    PosRot *sp78;
    s16 sp76;
    s16 sp74;
    f32 sp70;
    f32 sp60;
    ? sp44;
    Vec3f *sp40;
    Vec3f *sp3C;
    PosRot *sp38;
    PosRot *sp34;
    Actor *temp_v0_11;
    Actor *temp_v0_12;
    Actor *temp_v0_14;
    Actor *temp_v0_8;
    Actor *temp_v1;
    Player *temp_a0;
    Player *temp_a0_4;
    PosRot *temp_a0_2;
    PosRot *temp_a0_5;
    PosRot *temp_a1;
    PosRot *temp_a1_2;
    PosRot *temp_t0;
    PosRot *temp_v0_13;
    PosRot *temp_v0_15;
    PosRot *temp_v0_17;
    PosRot *temp_v1_2;
    PosRot *temp_v1_3;
    Vec3f *temp_a1_3;
    Vec3f *temp_a1_4;
    Vec3f *temp_a2;
    f32 *temp_a0_3;
    f32 *temp_a2_2;
    f32 *temp_a2_3;
    f32 *temp_a2_4;
    f32 *temp_a2_5;
    f32 *temp_a2_6;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f12;
    s16 *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_9;
    s8 *temp_s1;
    s8 *temp_s1_2;
    u32 temp_v0_16;
    void *temp_v0_3;
    void *temp_v0_4;
    void *phi_a3;
    f32 phi_f2;
    f32 phi_f6;
    Vec3f *phi_s1;

    temp_f0 = func_800CB700(camera);
    temp_v0 = camera->animState;
    phi_f2 = temp_f0;
    if ((temp_v0 != 0) && (temp_v0 != 0xA) && (temp_v0 != 0x14)) {
        goto block_37;
    }
    temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    temp_s1 = &camera->paramData[28];
    temp_v0_3 = temp_v0_2 + 0x18;
    camera->unk_0 = (f32) ((f32) *temp_v0_2 * 0.01f * temp_f0 * (0.8f - ((68.0f / temp_f0) * -0.2f)));
    camera->unk_4 = (f32) temp_v0_3->unk_-14;
    camera->unk_8 = (f32) temp_v0_3->unk_-10;
    camera->unk_C = (f32) ((f32) temp_v0_3->unk_-C * 0.01f);
    camera->unk_10 = (f32) ((f32) temp_v0_3->unk_-8 * 0.01f);
    camera->unk_14 = (f32) temp_v0_3->unk_-4;
    camera->unk_18 = (s16) temp_v0_3->unk_0;
    temp_s1->unk_1C = (s16) (s32) (camera->unk_14 * 100.0f);
    sp60 = temp_f0;
    temp_v0_4 = func_800CC7A8((bitwise Camera *) 0.01f, (s16) camera, camera->camDataIdx);
    phi_a3 = temp_v0_4;
    if (temp_v0_4 != 0) {
        if ((camera->unk_18 & 2) == 0) {
            sp88 = temp_v0_4;
            func_800CB60C(temp_s1, temp_v0_4);
            phi_a3 = sp88;
        } else {
            temp_v1 = camera->globalCtx->actorCtx.actorList[2].first;
            temp_a2 = &camera->eye;
            temp_a1 = &temp_v1->focus;
            if (camera->player != temp_v1) {
                sp40 = temp_a2;
                sp38 = temp_a1;
                sp88 = temp_v0_4;
                OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp70, (Vec3f *) temp_a1, temp_a2);
                temp_f0_2 = camera->unk_4;
                temp_a2_2 = &sp70;
                phi_a3 = temp_v0_4;
                if (sp70 < temp_f0_2) {
                    sp70 = temp_f0_2;
                    if ((s32) sp74 < 0xBB8) {
                        sp74 = 0xBB8;
                    }
                    sp88 = temp_v0_4;
                    OLib_VecSphAddToVec3f((Vec3f *) temp_s1, (Vec3f *) temp_a1, (VecSph *) temp_a2_2);
                    phi_a3 = temp_v0_4;
                } else {
                    temp_s1->unk_0 = (f32) sp40->x;
                    temp_s1->unk_4 = (f32) sp40->y;
                    temp_s1->unk_8 = (f32) sp40->z;
                }
            } else {
                temp_s1->unk_0 = (f32) camera->eye.x;
                temp_s1->unk_4 = (f32) camera->eye.y;
                temp_s1->unk_8 = (f32) camera->eye.z;
            }
        }
        temp_v0_5 = phi_a3->unk_C;
        if (temp_v0_5 != -1) {
            if ((camera->unk_18 & 0x80) != 0) {
                temp_s1->unk_1C = (s16) (((s32) temp_v0_5 >> 1) + ((s32) temp_v0_5 >> 2));
                if ((s32) temp_s1->unk_1C < 0x1E) {
                    temp_s1->unk_1C = 0x1E;
                }
            } else {
                temp_s1->unk_1C = temp_v0_5;
            }
        }
        temp_v0_6 = phi_a3->unk_E;
        if (temp_v0_6 != -1) {
            temp_s1->unk_C = (f32) temp_v0_6;
        } else {
            temp_s1->unk_C = (f32) camera->unk_8;
        }
        temp_v0_7 = phi_a3->unk_10;
        if (temp_v0_7 != -1) {
            if ((camera->unk_18 & 4) != 0) {
                temp_s1->unk_14 = (f32) ((f32) temp_v0_7 * 0.01f);
                temp_s1->unk_18 = (f32) camera->unk_C;
            } else {
                temp_f0_3 = (f32) temp_v0_7 * 0.01f;
                temp_s1->unk_18 = temp_f0_3;
                temp_s1->unk_14 = temp_f0_3;
            }
        } else {
            temp_s1->unk_14 = (f32) camera->unk_10;
            temp_s1->unk_18 = (f32) camera->unk_C;
        }
        if ((camera->unk_18 & 0x10) != 0) {
            temp_v0_8 = camera->target;
            temp_a1_2 = &temp_v0_8->home;
            if (temp_v0_8 == 0) {
                return 0;
            }
            sp78 = &temp_v0_8->world;
            sp7C = temp_a1_2;
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp70, (Vec3f *) temp_a1_2, (Vec3f *) temp_s1);
            sp76 = sp78->rot.y + (sp76 - sp7C->rot.y);
            OLib_VecSphAddToVec3f((Vec3f *) temp_s1, (Vec3f *) sp78, (VecSph *) &sp70);
            goto block_32;
        }
        goto block_32;
    }
    temp_s1->unk_0 = (f32) camera->eye.x;
    temp_s1->unk_4 = (f32) camera->eye.y;
    temp_s1->unk_8 = (f32) camera->eye.z;
    temp_s1->unk_C = (f32) camera->unk_8;
    temp_s1->unk_14 = (f32) camera->unk_10;
    temp_s1->unk_18 = (f32) camera->unk_C;
block_32:
    temp_v0_9 = temp_s1->unk_1C;
    if ((s32) temp_v0_9 < 0x169) {
        temp_s1->unk_1C = (s16) (temp_v0_9 * 0x64);
    }
    if (camera->animState == 0x14) {
        temp_s1->unk_14 = 0.2f;
    }
    phi_f2 = sp60;
block_37:
    D_801B9E08 = (s32) camera->unk_18;
    temp_v0_10 = camera->unk_18;
    temp_s1_2 = &camera->paramData[28];
    phi_s1 = (Vec3f *) temp_s1_2;
    if ((temp_v0_10 & 8) != 0) {
        temp_v0_11 = camera->target;
        if (temp_v0_11 == 0) {
            return 0;
        }
        temp_t0 = &camera->playerPosRot;
        spB0 = temp_v0_11->focus.pos.x;
        spB4 = camera->target->focus.pos.y;
        sp34 = temp_t0;
        spB8 = camera->target->focus.pos.z;
        camera->posOffset.x = spB0 - temp_t0->pos.x;
        camera->posOffset.y = spB4 - sp34->pos.y;
        camera->posOffset.z = spB8 - sp34->pos.z;
        sp40 = &camera->eye;
        phi_s1 = (Vec3f *) &camera->paramData[28];
        goto block_55;
    }
    sp40 = &camera->eye;
    if ((temp_v0_10 & 0x40) != 0) {
        sp98 = 0.0f;
        spA0 = 0.0f;
        sp9C = camera->unk_0 + phi_f2;
        temp_v0_12 = camera->target;
        if (temp_v0_12 != 0) {
            temp_a0 = camera->player;
            temp_v1_2 = &temp_v0_12->focus;
            temp_a0_2 = &temp_a0->actor.focus;
            sp98 = 0.0f + ((temp_v1_2->pos.x - temp_a0->actor.focus.pos.x) * 0.4f);
            sp9C += (temp_v1_2->pos.y - temp_a0_2->pos.y) * 0.4f;
            spA0 = 0.0f + ((temp_v1_2->pos.z - temp_a0_2->pos.z) * 0.4f);
        }
        Camera_LerpVec3f((Vec3f *) &sp98, &camera->posOffset, 0.25f, 0.25f, 0.1f);
        temp_v0_13 = &camera->playerPosRot;
        spB0 = temp_v0_13->pos.x + camera->posOffset.x;
        spB4 = temp_v0_13->pos.y + camera->posOffset.y;
        sp34 = temp_v0_13;
        phi_f6 = temp_v0_13->pos.z + camera->posOffset.z;
        goto block_54;
    }
    temp_a0_3 = &sp98;
    if ((temp_v0_10 & 0x80) != 0) {
        sp98 = 0.0f;
        spA0 = 0.0f;
        sp9C = camera->unk_0 + phi_f2;
        temp_v0_14 = camera->target;
        if (temp_v0_14 != 0) {
            temp_a0_4 = camera->player;
            temp_v1_3 = &temp_v0_14->focus;
            temp_a0_5 = &temp_a0_4->actor.focus;
            sp98 = 0.0f + ((temp_v1_3->pos.x - temp_a0_4->actor.focus.pos.x) * 0.7f);
            sp9C += (temp_v1_3->pos.y - temp_a0_5->pos.y) * 0.7f;
            spA0 = 0.0f + ((temp_v1_3->pos.z - temp_a0_5->pos.z) * 0.7f);
        }
        Camera_LerpVec3f((Vec3f *) &sp98, &camera->posOffset, 0.25f, 0.25f, 0.1f);
        temp_v0_15 = &camera->playerPosRot;
        spB0 = temp_v0_15->pos.x + camera->posOffset.x;
        spB4 = temp_v0_15->pos.y + camera->posOffset.y;
        sp34 = temp_v0_15;
        spB8 = temp_v0_15->pos.z + camera->posOffset.z;
    } else {
        sp98 = 0.0f;
        spA0 = 0.0f;
        temp_v0_16 = camera->player->stateFlags1;
        if (((temp_v0_16 & 0x4000) != 0) || ((temp_v0_16 & 4) != 0)) {
            sp9C = camera->unk_0;
        } else {
            sp9C = camera->unk_0 + phi_f2;
        }
        temp_f0_4 = temp_s1_2->unk_14;
        Camera_LerpVec3f((Vec3f *) temp_a0_3, &camera->posOffset, temp_f0_4, temp_f0_4, 0.1f);
        temp_v0_17 = &camera->playerPosRot;
        spB0 = temp_v0_17->pos.x + camera->posOffset.x;
        spB4 = temp_v0_17->pos.y + camera->posOffset.y;
        sp34 = temp_v0_17;
        phi_f6 = temp_v0_17->pos.z + camera->posOffset.z;
block_54:
        spB8 = phi_f6;
    }
block_55:
    if (camera->animState == 0) {
        func_800CB5DC(camera);
        if ((camera->unk_18 & 1) == 0) {
            temp_a1_3 = &camera->at;
            temp_a1_3->x = spB0.unk_0;
            temp_a1_3->y = (&spB0)[1];
            temp_a1_3->z = (&spB0)[2];
            sp3C = temp_a1_3;
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp80, temp_a1_3, phi_s1);
            temp_f0_5 = phi_s1[1].x;
            temp_a2_3 = &sp80;
            if ((temp_f0_5 < sp80) || ((camera->unk_18 & 0x20) != 0)) {
                sp80 = temp_f0_5;
                OLib_VecSphAddToVec3f((Vec3f *) &spA4, sp3C, (VecSph *) temp_a2_3);
            } else {
                temp_f0_6 = camera->unk_4;
                temp_a2_4 = &sp80;
                if (sp80 < temp_f0_6) {
                    sp80 = temp_f0_6;
                    OLib_VecSphAddToVec3f((Vec3f *) &spA4, sp3C, (VecSph *) temp_a2_4);
                } else {
                    spA4.unk_0 = (f32) phi_s1->x;
                    spA4.unk_4 = (f32) phi_s1->y;
                    spA4.unk_8 = (f32) phi_s1->z;
                }
            }
            sp44.unk_0 = (f32) spA4.unk_0;
            sp44.unk_4 = (f32) spA4.unk_4;
            sp44.unk_8 = (f32) spA4.unk_8;
            camera->eyeNext.x = sp44.unk_0;
            camera->eyeNext.y = sp44.unk_4;
            camera->eyeNext.z = sp44.unk_8;
            sp40->x = sp44.unk_0;
            sp40->y = sp44.unk_4;
            sp40->z = sp44.unk_8;
            camera->fov = (f32) phi_s1->unk_1C * 0.01f;
        }
    }
    temp_f0_7 = phi_s1[1].z;
    temp_a1_4 = &camera->at;
    sp38 = (PosRot *) &camera->eyeNext;
    sp3C = temp_a1_4;
    Camera_LerpVec3f((Vec3f *) &spB0, temp_a1_4, temp_f0_7, temp_f0_7, 1.0f);
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp80, temp_a1_4, phi_s1);
    temp_f0_8 = phi_s1[1].x;
    temp_a2_5 = &sp80;
    if ((temp_f0_8 < sp80) || ((camera->unk_18 & 0x20) != 0)) {
        sp80 = temp_f0_8;
        OLib_VecSphAddToVec3f((Vec3f *) &spA4, sp3C, (VecSph *) temp_a2_5);
    } else {
        temp_f0_9 = camera->unk_4;
        temp_a2_6 = &sp80;
        if (sp80 < temp_f0_9) {
            sp80 = temp_f0_9;
            OLib_VecSphAddToVec3f((Vec3f *) &spA4, sp3C, (VecSph *) temp_a2_6);
        } else {
            spA4.unk_0 = (f32) phi_s1->x;
            spA4.unk_4 = (f32) phi_s1->y;
            spA4.unk_8 = (f32) phi_s1->z;
        }
    }
    temp_f0_10 = phi_s1[2].x;
    Camera_LerpVec3f((Vec3f *) &spA4, (Vec3f *) sp38, temp_f0_10, temp_f0_10, 0.1f);
    sp40->x = sp38->pos.x;
    sp40->y = sp38->pos.y;
    sp40->z = sp38->pos.z;
    camera->dist = OLib_Vec3fDist(sp3C, sp40);
    camera->roll = 0;
    camera->xzSpeed = 0.0f;
    temp_f12 = (f32) phi_s1->unk_1C * 0.01f;
    phi_s1[1].y = temp_f12;
    camera->fov = Camera_Lerpf(temp_f12, camera->fov, phi_s1[1].z, 0.1f);
    camera->atLERPStepScale = func_800CD288(camera, 1.0f);
    func_800CB6C8(camera, sp34);
    camera->animState = 1;
    return 1;
}

s32 Camera_ModeFIXD3(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeFIXD4(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeFIXD0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSUBJ1(Camera *camera) {
    f32 sp98;
    f32 sp94;
    f32 sp90;
    ? sp84;
    s16 sp82;
    s16 sp80;
    f32 sp7C;
    s16 sp7A;
    s16 sp78;
    f32 sp74;
    f32 sp58;
    f32 sp54;
    s16 sp4E;
    s16 sp4C;
    f32 sp38;
    Vec3f *sp34;
    Vec3f *sp2C;
    s8 *sp28;
    GlobalContext *temp_v1;
    Vec3f *temp_a0;
    Vec3f *temp_a2_2;
    Vec3f *temp_s1;
    f32 *temp_a2;
    f32 *temp_a2_3;
    f32 *temp_a2_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6_2;
    s16 *temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_f6;
    s8 *temp_v1_2;
    s8 *temp_v1_3;
    void *temp_v0_2;

    func_800B81E0(&sp58, camera->player);
    sp38 = func_800CB700(camera);
    func_800CB544(camera);
    temp_v0 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    temp_a2 = &sp7C;
    temp_v0_2 = temp_v0 + 0x20;
    camera->unk_0 = (f32) ((f32) *temp_v0 * 0.01f * sp38);
    camera->unk_4 = (f32) temp_v0_2->unk_-1C;
    camera->unk_8 = (f32) temp_v0_2->unk_-18;
    camera->unk_C = (f32) temp_v0_2->unk_-14;
    camera->unk_10 = (f32) ((f32) temp_v0_2->unk_-10 * 0.1f);
    camera->unk_14 = (f32) ((f32) temp_v0_2->unk_-C * 0.1f);
    camera->unk_18 = (f32) ((f32) temp_v0_2->unk_-8 * 0.1f);
    camera->unk_1C = (f32) temp_v0_2->unk_-4;
    camera->unk_20 = (s16) temp_v0_2->unk_0;
    sp7C = camera->unk_8;
    sp82 = sp66 + 0x8000;
    sp80 = sp64;
    sp90.unk_0 = sp58.unk_0;
    (&sp90)[1] = (&sp58)[1];
    (&sp90)[2] = (&sp58)[2];
    sp94 += camera->unk_0;
    OLib_VecSphAddToVec3f((Vec3f *) &sp84, (Vec3f *) &sp90, (VecSph *) temp_a2);
    temp_s1 = &camera->at;
    temp_a2_2 = &camera->eye;
    sp34 = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp74, temp_s1, temp_a2_2);
    D_801B9E08 = (s32) camera->unk_20;
    temp_v1 = camera->globalCtx;
    if (temp_v1->view.unk_164 == 0) {
        temp_v1->view.unk_164 = camera->thisIdx | 0x50;
        return 1;
    }
    temp_v0_3 = camera->animState;
    if ((temp_v0_3 == 0) || (temp_v0_3 == 0xA) || (temp_v0_3 == 0x14)) {
        temp_v1_2 = &camera->paramData[36];
        temp_v1_2->unk_0 = sp74;
        temp_v1_2->unk_4 = sp7A;
        temp_v1_2->unk_6 = sp78;
        if ((camera->unk_20 & 0x10) != 0) {
            camera->fov = camera->unk_1C;
            temp_v1_2->unk_8 = 0;
        } else {
            temp_v1_2->unk_8 = 6;
        }
        camera->dist = camera->unk_8;
        camera->rUpdateRateInv = 1.0f;
        camera->animState += 1;
        camera->dist = camera->unk_8;
    }
    temp_v1_3 = &camera->paramData[36];
    temp_v0_4 = temp_v1_3->unk_8;
    if (temp_v0_4 != 0) {
        temp_f2 = temp_s1->x;
        temp_f12 = temp_s1->y;
        temp_f14 = temp_s1->z;
        temp_f0 = 1.0f / (f32) temp_v0_4;
        temp_s1->x = temp_f2 + ((sp90 - temp_f2) * temp_f0);
        temp_s1->y = temp_f12 + ((sp94 - temp_f12) * temp_f0);
        temp_s1->z = temp_f14 + ((sp98 - temp_f14) * temp_f0);
        temp_f6 = (s32) ((f32) (s16) (temp_v1_3->unk_4 - sp82) * 0.16666667f);
        sp4C = (s16) (s32) ((f32) (s16) (temp_v1_3->unk_6 - sp80) * 0.16666667f);
        sp4E = (s16) temp_f6;
        sp28 = temp_v1_3;
        sp74 = Camera_Lerpf(((f32) temp_v1_3->unk_8 * ((temp_v1_3->unk_0 - sp7C) * 0.16666667f)) + sp7C, sp74, 0.5f, 1.0f);
        sp7A = Camera_Lerps((s16) (sp82 + ((s16) temp_f6 * temp_v1_3->unk_8)), sp7A, 0.5f, 5);
        temp_a0 = &camera->eyeNext;
        sp78 = Camera_Lerps((s16) (sp80 + (sp4C * temp_v1_3->unk_8)), sp78, 0.5f, 5);
        sp2C = temp_a0;
        OLib_VecSphAddToVec3f(temp_a0, temp_s1, (VecSph *) &sp74);
        sp34->x = temp_a0->x;
        sp34->y = temp_a0->y;
        sp34->z = temp_a0->z;
        temp_v1_3->unk_8 = (s16) (temp_v1_3->unk_8 - 1);
    } else {
        sp54 = Math_SinS((s16) ((s32) sp64 * -1));
        temp_f0_2 = Math_CosS((s16) ((s32) sp64 * -1));
        temp_f6_2 = camera->unk_10;
        sp90 = temp_f6_2;
        temp_f4 = (camera->unk_14 * temp_f0_2) - (camera->unk_18 * sp54);
        sp94 = temp_f4;
        sp98 = (camera->unk_14 * sp54) + (camera->unk_18 * temp_f0_2);
        sp54 = Math_SinS((s16) (sp66 + 0x8000));
        temp_f0_3 = Math_CosS((s16) (sp66 + 0x8000));
        temp_a2_3 = &sp74;
        camera->unk_10 = (f32) ((sp98 * sp54) + (sp90 * temp_f0_3));
        camera->unk_14 = temp_f4;
        camera->unk_18 = (f32) ((sp98 * temp_f0_3) - (temp_f6_2 * sp54));
        temp_s1->x = camera->unk_10 + sp58;
        temp_s1->y = camera->unk_14 + sp5C;
        temp_s1->z = camera->unk_18 + sp60;
        sp7A = sp66 + 0x8000;
        sp74 = camera->unk_8;
        sp78 = sp64;
        OLib_VecSphAddToVec3f(&camera->eyeNext, temp_s1, (VecSph *) temp_a2_3);
        temp_a2_4 = &sp74;
        sp74 = camera->unk_4;
        OLib_VecSphAddToVec3f(sp34, temp_s1, (VecSph *) temp_a2_4);
    }
    if (camera->globalCtx->envCtx.unk_15 == 0) {
        func_800CC128(camera, temp_s1, (f32 *) sp34);
    } else {
        func_800CBFA4(camera, temp_s1, (Vec3f *) (f32 *) sp34, 3);
    }
    camera->fov = Camera_Lerpf(camera->unk_1C, camera->fov, 0.25f, 0.1f);
    camera->roll = 0;
    camera->atLERPStepScale = 0.0f;
    return 1;
}

s32 Camera_ModeSUBJ2(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSUBJ3(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSUBJ4(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSUBJ0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDATA0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDATA1(Camera *camera) {
    return Camera_ModeNORM1(camera);
}

s32 Camera_ModeDATA2(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDATA3(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDATA4(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeUNIQ1(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeUNIQ2(Camera *camera) {
    f32 sp70;
    s16 sp6E;
    s16 sp6C;
    f32 sp68;
    ? sp60;
    f32 sp48;
    Vec3f *sp3C;
    Vec3f *sp34;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_s1;
    f32 *temp_a2_2;
    f32 *temp_a2_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 *temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_v0_2;
    f32 phi_f16;

    temp_s1 = &camera->at;
    temp_a2 = &camera->eye;
    sp48 = func_800CB700(camera);
    sp3C = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp60, temp_s1, temp_a2);
    temp_v1 = camera->animState;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        temp_v0 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_2 = temp_v0 + 0xC;
        camera->unk_0 = (f32) ((f32) *temp_v0 * 0.01f * sp48 * (0.8f - ((68.0f / sp48) * -0.2f)));
        camera->unk_8 = 0.25f;
        camera->unk_4 = (f32) temp_v0_2->unk_-8;
        camera->unk_C = (f32) temp_v0_2->unk_-4;
        camera->unk_10 = (s16) temp_v0_2->unk_0;
    }
    D_801B9E08 = (s32) camera->unk_10;
    if ((camera->animState == 0) || (camera->unk_10 != camera->paramData[20].unk_4)) {
        camera->paramData[20].unk_4 = (s16) camera->unk_10;
    }
    if (camera->animState == 0) {
        camera->animState = 1;
        sp34 = (Vec3f *) &camera->paramData[20];
        func_800CB5DC(camera);
        (Vec3f *) &camera->paramData[20]->x = 200.0f;
    }
    if ((camera->unk_10 & 0x10) != 0) {
        camera->eyeNext.x = sp3C->x;
        camera->eyeNext.y = sp3C->y;
        camera->eyeNext.z = sp3C->z;
        sp34 = (Vec3f *) &camera->paramData[20];
        Camera_ClearFlags(camera, 4);
    }
    sp70.unk_0 = camera->playerPosRot.pos.x;
    (&sp70)[1] = camera->playerPosRot.pos.y;
    (&sp70)[2] = camera->playerPosRot.pos.z;
    if ((camera->unk_10 & 1) != 0) {
        phi_f16 = 1.0f;
    } else {
        phi_f16 = camera->speedRatio;
    }
    temp_f0 = temp_s1->x;
    temp_f2 = temp_s1->y;
    temp_f12 = temp_s1->z;
    temp_s1->x = temp_f0 + ((sp70 - temp_f0) * phi_f16 * 0.3f);
    temp_s1->y = temp_f2 + (((sp74 + sp48 + camera->unk_0) - temp_f2) * 0.2f);
    temp_s1->z = temp_f12 + ((sp78 - temp_f12) * phi_f16 * 0.3f);
    temp_f14 = (Vec3f *) &camera->paramData[20]->x;
    (Vec3f *) &camera->paramData[20]->x = temp_f14 + ((2.0f - temp_f14) * 0.05f);
    temp_v1_2 = camera->unk_10;
    if ((temp_v1_2 & 1) != 0) {
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp68, temp_s1, &camera->eyeNext);
        temp_a2_2 = &sp68;
        sp68 = camera->unk_4;
        OLib_VecSphAddToVec3f((Vec3f *) &sp70, temp_s1, (VecSph *) temp_a2_2);
        temp_f0_2 = camera->unk_8;
        Camera_LerpVec3f((Vec3f *) &sp70, sp3C, temp_f0_2, temp_f0_2, 0.2f);
        goto block_20;
    }
    if ((temp_v1_2 & 2) != 0) {
        temp_a1 = &camera->eyeNext;
        sp34 = temp_a1;
        if (OLib_Vec3fDistXZ(temp_s1, temp_a1) < camera->unk_4) {
            OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp68, temp_s1, sp34);
            sp6E = Camera_Lerps(sp6E, sp66, 0.1f, 5);
            sp6C = 0;
            temp_a2_3 = &sp68;
            sp68 = camera->unk_4;
            OLib_VecSphAddToVec3f(sp3C, temp_s1, (VecSph *) temp_a2_3);
            sp3C->y = sp34->y;
        } else {
            temp_f0_3 = camera->unk_8;
            Camera_LerpVec3f(sp34, sp3C, temp_f0_3, temp_f0_3, 0.2f);
        }
block_20:
    }
    if ((camera->unk_10 & 0x20) == 0) {
        func_800CC128(camera, temp_s1, (f32 *) sp3C);
    }
    camera->dist = OLib_Vec3fDist(temp_s1, sp3C);
    camera->roll = 0;
    camera->fov = Camera_Lerpf(camera->unk_C, camera->fov, 0.2f, 0.1f);
    camera->atLERPStepScale = func_800CD288(camera, 1.0f);
    return 1;
}

s32 Camera_ModeUNIQ3(Camera *camera) {
    if ((camera->globalCtx->sceneNum == 0x46) && (camera->eye.y < 5.0f)) {
        camera->eye.y = 5.0f;
    }
    return Camera_ModeNORM1(camera);
}

s32 Camera_ModeUNIQ4(Camera *camera) {
    if ((camera->globalCtx->sceneNum == 0x46) && (camera->eye.y < 5.0f)) {
        camera->eye.y = 5.0f;
    }
    return Camera_ModePARA1(camera);
}

s32 Camera_ModeUNIQ5(Camera *camera) {
    if ((camera->globalCtx->sceneNum == 0x46) && (camera->eye.y < 5.0f)) {
        camera->eye.y = 5.0f;
    }
    return Camera_ModeBATT1(camera);
}

s32 Camera_ModeUNIQ0(Camera *camera) {
    f32 spB4;
    ? sp9C;
    Player *sp98;
    f32 sp90;
    ? sp8C;
    s16 sp8A;
    s16 sp88;
    f32 sp84;
    ? sp7C;
    void *sp78;
    f32 sp74;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp44;
    PosRot *sp40;
    s8 *sp38;
    Vec3f *sp34;
    Vec3f *sp30;
    s8 *sp28;
    Actor *temp_a1_2;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_t0;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_12;
    s16 temp_v0_4;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1;
    s8 *temp_a0;
    s8 *temp_a2_2;
    s8 *temp_s1;
    s8 *temp_s1_2;
    s8 *temp_s1_3;
    u16 temp_v0_11;
    u16 temp_v0_9;
    void *temp_v0_3;
    void *temp_v0_5;
    s16 phi_t4;
    s8 *phi_s1;
    s8 *phi_s1_2;

    spB4 = func_800B6FC8(camera->player);
    sp98 = camera->player;
    temp_v0 = camera->animState;
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    if ((temp_v0 == 0) || (temp_v0 == 0xA) || (temp_v0 == 0x14)) {
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_3 = temp_v0_2 + 8;
        camera->unk_0 = (f32) *temp_v0_2;
        camera->unk_4 = (f32) temp_v0_3->unk_-4;
        camera->unk_8 = (s16) temp_v0_3->unk_0;
    }
    sp34 = temp_a1;
    sp30 = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp7C, temp_a1, temp_a2);
    temp_a1_2 = sp98->unk_390;
    if (temp_a1_2 != 0) {
        func_800B8214((PosRot *) &sp9C, temp_a1_2);
        sp8C.unk_0 = (f32) sp9C.unk_0;
        sp8C.unk_4 = (f32) sp9C.unk_4;
        sp8C.unk_8 = (f32) sp9C.unk_8;
        sp90 += spB4 + 20.0f;
    } else {
        sp8C.unk_0 = (f32) camera->playerPosRot.pos.x;
        sp8C.unk_4 = (f32) camera->playerPosRot.pos.y;
        sp8C.unk_8 = (f32) camera->playerPosRot.pos.z;
        sp90 += spB4;
    }
    D_801B9E08 = (s32) camera->unk_8;
    temp_v0_4 = camera->animState;
    if (temp_v0_4 != 0) {
        if (temp_v0_4 != 1) {
            temp_s1 = &camera->paramData[12];
            phi_s1 = temp_s1;
            phi_s1_2 = temp_s1;
            if (temp_v0_4 != 3) {
                phi_s1_2 = &camera->paramData[12];
            } else {
                temp_f2 = 1.0f / (f32) temp_s1->unk_3C;
                sp90 -= spB4 * 0.2f;
                sp74 = temp_f2;
                Camera_LerpVec3f((Vec3f *) &sp8C, sp34, temp_f2, temp_f2, 0.001f);
                temp_f0 = OLib_Vec3fDist(sp34, sp30);
                sp84 = temp_f0;
                sp88 = sp80;
                sp8A = sp82;
                sp84 = Camera_Lerpf(100.0f, temp_f0, temp_f2, 1.0f);
                OLib_VecSphAddToVec3f((Vec3f *) &sp8C, sp34, (VecSph *) &sp84);
                temp_f2_2 = ((f32) gGameInfo->data[448] * 0.01f) + 0.2f;
                Camera_LerpVec3f((Vec3f *) &sp8C, sp30, temp_f2_2, temp_f2_2, 0.001f);
                temp_s1->unk_3C = (s16) (temp_s1->unk_3C - 1);
                phi_t4 = 9;
                if (temp_s1->unk_3C == 0) {
                    goto block_64;
                }
            }
        } else {
            goto block_23;
        }
    } else {
        sp40 = &camera->playerPosRot;
        temp_v0_5 = func_800CC7A8(camera, camera->camDataIdx);
        temp_s1_2 = &camera->paramData[12];
        temp_a0 = &temp_s1_2[28];
        sp28 = temp_a0;
        sp78 = temp_v0_5;
        func_800CB60C(temp_a0, temp_v0_5);
        temp_t0 = &camera->eyeNext;
        sp44.unk_0 = (f32) sp28->unk_0;
        sp44.unk_4 = (f32) sp28->unk_4;
        sp44.unk_8 = (f32) sp28->unk_8;
        temp_t0->x = sp44.unk_0;
        temp_t0->y = sp44.unk_4;
        temp_t0->z = sp44.unk_8;
        sp30->x = sp44.unk_0;
        sp30->y = sp44.unk_4;
        sp30->z = sp44.unk_8;
        temp_s1_2[52] = (unaligned s32) sp78->unk_6;
        temp_s1_2->unk_38 = (u16) sp78->unk_A;
        temp_v1 = sp78->unk_C;
        if (temp_v1 != -1) {
            if ((s32) temp_v1 < 0x169) {
                camera->fov = (f32) temp_v1;
            } else {
                camera->fov = (f32) temp_v1 * 0.01f;
            }
        }
        temp_s1_2->unk_3C = (s16) sp78->unk_E;
        if (temp_s1_2->unk_3C == -1) {
            temp_s1_2->unk_3C = 0x3C;
        }
        temp_v0_6 = sp78->unk_10;
        if (temp_v0_6 != -1) {
            temp_s1_2->unk_18 = (f32) ((f32) temp_v0_6 * 0.01f);
        } else {
            temp_s1_2->unk_18 = (f32) (camera->unk_4 * 0.01f);
        }
        temp_s1_2->unk_0 = (f32) sp40->pos.x;
        temp_s1_2->unk_4 = (f32) sp40->pos.y;
        temp_s1_2->unk_8 = (f32) sp40->pos.z;
        if ((camera->unk_8 & 0x10) != 0) {
            temp_s1_2->unk_C = (f32) sp40->pos.x;
            temp_s1_2->unk_10 = (f32) (sp40->pos.y + spB4 + camera->unk_0);
            temp_s1_2->unk_14 = (f32) sp40->pos.z;
        }
        temp_s1_2->unk_3E = 0;
        temp_s1_2->unk_3A = (s16) camera->player->actor.world.rot.y;
        sp44.unk_0 = (f32) sp28->unk_0;
        sp44.unk_4 = (f32) sp28->unk_4;
        sp44.unk_8 = (f32) sp28->unk_8;
        temp_t0->x = sp44.unk_0;
        temp_t0->y = sp44.unk_4;
        temp_t0->z = sp44.unk_8;
        sp30->x = sp44.unk_0;
        sp30->y = sp44.unk_4;
        sp30->z = sp44.unk_8;
        Camera_ClearFlags(camera, 4);
        camera->animState += 1;
block_23:
        temp_s1_3 = &camera->paramData[12];
        sp40 = &camera->playerPosRot;
        sp28 = &temp_s1_3[28];
        sp84 = OLib_Vec3fDist((Vec3f *) &sp8C, sp30);
        sp8A = temp_s1_3->unk_36;
        sp88 = (s16) -(s32) temp_s1_3->unk_34;
        OLib_VecSphGeoToVec3f((Vec3f *) &temp_s1_3[40], (VecSph *) &sp84);
        temp_a2_2 = &temp_s1_3[12];
        sp38 = temp_a2_2;
        func_80179A44(sp28, sp40, temp_a2_2);
        sp34->x = temp_a2_2->unk_0;
        sp34->y = temp_a2_2->unk_4;
        sp34->z = temp_a2_2->unk_8;
        if ((sp98->stateFlags1 * 4) < 0) {
            temp_s1_3->unk_0 = (f32) sp40->pos.x;
            temp_s1_3->unk_4 = (f32) sp40->pos.y;
            temp_s1_3->unk_8 = (f32) sp40->pos.z;
        }
        if ((camera->unk_8 & 0x10) != 0) {
            sp54 = sp40->pos.x;
            sp58 = sp40->pos.y + spB4 + camera->unk_0;
            sp5C = sp40->pos.z;
            Camera_LerpVec3f((Vec3f *) &sp54, sp34, camera->xzOffsetUpdateRate, camera->yOffsetUpdateRate, 0.1f);
            camera->yOffsetUpdateRate = Camera_Lerpf(temp_s1_3->unk_18, camera->yOffsetUpdateRate, 0.1f, 0.0001f);
            camera->xzOffsetUpdateRate = Camera_Lerpf(temp_s1_3->unk_18, camera->xzOffsetUpdateRate, 0.1f, 0.0001f);
        }
        temp_v0_7 = camera->animState;
        if ((temp_v0_7 == 0x3E7) || (temp_v0_7 == 0x29A)) {
            temp_s1_3->unk_3E = 2;
        }
        if ((camera->unk_8 & 1) != 0) {
            temp_v0_8 = temp_s1_3->unk_3C;
            if ((s32) temp_v0_8 > 0) {
                temp_s1_3->unk_3C = (s16) (temp_v0_8 - 1);
                temp_s1_3->unk_0 = (f32) sp40->pos.x;
                temp_s1_3->unk_4 = (f32) sp40->pos.y;
                temp_s1_3->unk_8 = (f32) sp40->pos.z;
                phi_s1_2 = temp_s1_3;
            } else {
                phi_s1_2 = temp_s1_3;
                if (((sp98->stateFlags1 & 0x20000000) == 0) && ((OLib_Vec3fDistXZ((Vec3f *) sp40, (Vec3f *) temp_s1_3) >= 10.0f) || (temp_v0_9 = camera->globalCtx->state.input[0].press.button, (~(temp_v0_9 | 0xFFFF7FFF) == 0)) || (~(temp_v0_9 | ~0x4000) == 0) || (~(temp_v0_9 | ~8) == 0) || (~(temp_v0_9 | ~4) == 0) || (~(temp_v0_9 | ~2) == 0) || (~(temp_v0_9 | ~1) == 0) || (~(temp_v0_9 | ~0x2000) == 0) || (~(temp_v0_9 | ~0x20) == 0) || (~(temp_v0_9 | ~0x10) == 0) || (phi_s1_2 = temp_s1_3, ((camera->unk_8 & 2) != 0)))) {
                    temp_s1_3->unk_3E = 1;
                    phi_s1_2 = temp_s1_3;
                }
            }
        } else {
            temp_v0_10 = temp_s1_3->unk_3C;
            if ((s32) temp_v0_10 > 0) {
                temp_s1_3->unk_3C = (s16) (temp_v0_10 - 1);
                if (temp_s1_3->unk_3C == 0) {
                    D_801B9E08 = 0;
                }
            } else {
                temp_s1_3->unk_0 = (f32) sp40->pos.x;
                temp_s1_3->unk_4 = (f32) sp40->pos.y;
                temp_s1_3->unk_8 = (f32) sp40->pos.z;
            }
            phi_s1_2 = temp_s1_3;
            if (((sp98->stateFlags1 & 0x20000000) == 0) && ((camera->player->actor.world.rot.y != temp_s1_3->unk_3A) || (temp_v0_11 = camera->globalCtx->state.input[0].press.button, (~(temp_v0_11 | 0xFFFF7FFF) == 0)) || (~(temp_v0_11 | ~0x4000) == 0) || (~(temp_v0_11 | ~8) == 0) || (~(temp_v0_11 | ~4) == 0) || (~(temp_v0_11 | ~2) == 0) || (~(temp_v0_11 | ~1) == 0) || (~(temp_v0_11 | ~0x2000) == 0) || (~(temp_v0_11 | ~0x20) == 0) || (~(temp_v0_11 | ~0x10) == 0) || (phi_s1_2 = temp_s1_3, ((camera->unk_8 & 2) != 0)))) {
                phi_t4 = 1;
                phi_s1 = temp_s1_3;
block_64:
                phi_s1->unk_3E = phi_t4;
                phi_s1_2 = phi_s1;
            }
        }
    }
    temp_v0_12 = phi_s1_2->unk_3E;
    if ((temp_v0_12 == 1) || (temp_v0_12 == 2) || (temp_v0_12 == 9)) {
        sp40 = &camera->playerPosRot;
        camera->dist = OLib_Vec3fDist(sp34, sp30);
        camera->atLERPStepScale = func_800CD288(camera, 1.0f);
        func_800CB6C8(camera, sp40);
        camera->atLERPStepScale = 0.0f;
        func_800DF8EC(camera, camera->prevSetting, 2);
        Camera_SetFlags(camera, 4);
        camera->yawUpdateRateInv = 1200.0f;
        camera->pitchUpdateRateInv = 1200.0f;
        camera->yOffsetUpdateRate = 0.001f;
        camera->xzOffsetUpdateRate = 0.001f;
        camera->fovUpdateRate = 0.01f;
    }
    return 1;
}

s32 Camera_ModeUNIQ6(Camera *camera) {
    f32 sp30;
    ? sp2C;
    PosRot *sp20;
    PosRot *temp_a2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_v0 = camera->animState;
    if ((temp_v0 == 0) || (temp_v0 == 0xA) || (temp_v0 == 0x14)) {
        camera->unk_0 = (s16) *(*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    }
    D_801B9E08 = (s32) camera->unk_0;
    temp_v0_2 = camera->animState;
    if (temp_v0_2 == 0) {
        camera->animState = temp_v0_2 + 1;
        func_800CB544(camera);
    }
    if (camera->player != 0) {
        temp_f0 = func_800CB700(camera);
        temp_a2 = &camera->playerPosRot;
        sp2C.unk_0 = (f32) temp_a2->pos.x;
        sp2C.unk_4 = (f32) temp_a2->pos.y;
        sp2C.unk_8 = (f32) temp_a2->pos.z;
        sp20 = temp_a2;
        sp30 += temp_f0;
        camera->dist = OLib_Vec3fDist((Vec3f *) &sp2C, &camera->eye);
        func_800CB6C8(camera, sp20);
    } else {
        camera->dist = OLib_Vec3fDist(&camera->at, &camera->eye);
    }
    if ((camera->unk_0 & 1) != 0) {
        temp_v0_3 = camera->unk160;
        if ((s32) temp_v0_3 > 0) {
            camera->unk160 = temp_v0_3 - 1;
        }
    }
    return 1;
}

s32 Camera_ModeUNIQ7(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeUNIQ8(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeUNIQ9(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDEMO1(Camera *camera) {
    Actor *sp98;
    s16 sp96;
    s16 sp94;
    f32 sp88;
    f32 sp74;
    ? sp6C;
    f32 sp60;
    ? sp44;
    Vec3f *sp3C;
    Vec3f *sp38;
    Actor **temp_t2;
    Actor **temp_t6;
    Actor **temp_t8;
    Actor *temp_v1;
    PosRot *temp_t0;
    PosRot *temp_t4;
    Vec3f *temp_a0_2;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_a1_3;
    Vec3f *temp_a1_4;
    Vec3f *temp_a1_5;
    Vec3f *temp_s1;
    Vec3f *temp_s1_2;
    Vec3f *temp_s1_3;
    Vec3f *temp_s1_4;
    Vec3f *temp_s1_5;
    Vec3f *temp_s1_6;
    Vec3f *temp_s1_7;
    Vec3f *temp_s1_8;
    f32 *temp_a2;
    f32 temp_f0;
    s8 *temp_s2;
    s8 *temp_s2_2;
    u8 temp_a0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    temp_s2 = &camera->paramData[4];
    if (camera->animState == 0) {
        camera->unk_0 = (s16) *(*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    }
    if (camera->animState == 0) {
        temp_s1 = &camera->eye;
        temp_s2->unk_1C = 0;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &temp_s2[12], (Vec3f *) &camera->targetPosRot, temp_s1);
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &temp_s2[20], &camera->at, temp_s1);
        func_800B81E0(&sp60, (Player *) camera->target);
        func_800B8214((PosRot *) &sp74, camera->target);
        camera->targetPosRot.pos.x = (sp74 + sp60) * 0.5f;
        camera->targetPosRot.pos.y = (sp78 + sp64) * 0.5f;
        camera->targetPosRot.pos.z = (sp7C + sp68) * 0.5f;
        camera->unk_B8 = (unaligned s32) sp6C.unk_0;
        camera->animState += 1;
        camera->targetPosRot.rot.z = (s16) sp6C.unk_4;
    }
    temp_s2_2 = &camera->paramData[4];
    func_800B8898(camera->globalCtx, camera->target, &sp96, &sp94);
    temp_f0 = temp_s2_2->unk_C;
    if (((s32) sp96 >= 0x15) && ((s32) sp96 < 0x12C) && ((s32) sp94 >= 0x29) && ((s32) sp94 < 0xC8)) {
        if (temp_f0 < 700.0f) {
            phi_v0 = 0;
        } else {
            phi_v0 = 1;
        }
    } else if (temp_f0 < 50.0f) {
        phi_v0 = 2;
    } else if (temp_f0 < 300.0f) {
        phi_v0 = 3;
    } else {
        phi_v0 = 5;
        if (temp_f0 < 700.0f) {
            phi_v0 = 4;
        }
    }
    temp_v1 = camera->target;
    temp_a0 = temp_v1->category;
    phi_v0_2 = phi_v0;
    if (temp_a0 == 0xA) {
        if ((phi_v0 > 0) && (phi_v0 < 5)) {
            phi_v0_2 = 6;
        } else if (phi_v0 >= 5) {
            phi_v0_2 = 7;
        }
    }
    phi_v0_3 = phi_v0_2;
    if ((temp_a0 == 0xB) && (phi_v0_2 >= 2) && (phi_v0_2 < 5)) {
        phi_v0_3 = 8;
    }
    switch (phi_v0_3) {
    case 1:
        temp_a1 = &camera->at;
        sp3C = temp_a1;
        temp_s1_2 = &camera->eye;
        Camera_LerpVec3f((Vec3f *) &camera->targetPosRot, temp_a1, 0.1f, 0.1f, 0.1f);
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp88, temp_a1, temp_s1_2);
        temp_a0_2 = &camera->eyeNext;
        sp38 = temp_a0_2;
        temp_a2 = &sp88;
        sp88 = temp_s2_2->unk_C;
        OLib_VecSphAddToVec3f(temp_a0_2, temp_a1, (VecSph *) temp_a2);
        temp_s1_2->x = sp38->x;
        temp_s1_2->y = sp38->y;
        temp_s1_2->z = sp38->z;
        func_800CC128(camera, temp_a1, (f32 *) temp_s1_2);
        break;
    case 2:
        Camera_LerpVec3f((Vec3f *) &camera->targetPosRot, &camera->at, 0.1f, 0.1f, 0.1f);
        break;
    case 3:
        temp_t4 = &camera->targetPosRot;
        sp38 = (Vec3f *) temp_t4;
        sp3C = &camera->at;
        temp_s1_3 = &camera->eye;
        if (temp_s2_2->unk_1C == 0) {
            temp_t6 = &sp98;
            sp98 = temp_v1;
            func_800CC260(camera, (Vec3f *) temp_s2_2, (Vec3f *) temp_t4, (f32 *) &temp_s2_2[20], temp_t6, (s16) 1);
        }
        Camera_LerpVec3f(sp38, sp3C, 0.1f, 0.1f, 0.1f);
        temp_a1_2 = &camera->eyeNext;
        sp38 = temp_a1_2;
        Camera_LerpVec3f((Vec3f *) temp_s2_2, temp_a1_2, 0.1f, 0.1f, 0.1f);
        temp_s1_3->x = sp38->x;
        temp_s1_3->y = sp38->y;
        temp_s1_3->z = sp38->z;
        func_800CC128(camera, sp3C, (f32 *) temp_s1_3);
        break;
    case 4:
        sp38 = (Vec3f *) &camera->targetPosRot;
        sp3C = &camera->at;
        temp_s1_4 = &camera->eye;
        if (temp_s2_2->unk_1C == 0) {
            sp98 = temp_v1;
            temp_s2_2->unk_14 = (f32) temp_s2_2->unk_C;
            func_800CC260(camera, (Vec3f *) temp_s2_2, sp38, (f32 *) &temp_s2_2[20], &sp98, (s16) 1);
        }
        Camera_LerpVec3f(sp38, sp3C, 0.1f, 0.1f, 0.1f);
        temp_a1_3 = &camera->eyeNext;
        sp38 = temp_a1_3;
        Camera_LerpVec3f((Vec3f *) temp_s2_2, temp_a1_3, 0.1f, 0.1f, 0.1f);
        temp_s1_4->x = sp38->x;
        temp_s1_4->y = sp38->y;
        temp_s1_4->z = sp38->z;
        func_800CC128(camera, sp3C, (f32 *) temp_s1_4);
        break;
    case 5:
        temp_t0 = &camera->targetPosRot;
        sp38 = (Vec3f *) temp_t0;
        sp3C = &camera->at;
        temp_s1_5 = &camera->eye;
        if (temp_s2_2->unk_1C == 0) {
            temp_t2 = &sp98;
            sp98 = temp_v1;
            func_800CC260(camera, (Vec3f *) temp_s2_2, (Vec3f *) temp_t0, (f32 *) &temp_s2_2[12], temp_t2, (s16) 1);
        }
        sp3C->x = sp38->x;
        sp3C->y = sp38->y;
        sp3C->z = sp38->z;
        sp44.unk_0 = (f32) temp_s2_2->unk_0;
        sp44.unk_4 = (f32) temp_s2_2->unk_4;
        sp44.unk_8 = (f32) temp_s2_2->unk_8;
        camera->eyeNext.x = sp44.unk_0;
        camera->eyeNext.y = sp44.unk_4;
        camera->eyeNext.z = sp44.unk_8;
        temp_s1_5->x = sp44.unk_0;
        temp_s1_5->y = sp44.unk_4;
        temp_s1_5->z = sp44.unk_8;
        break;
    case 6:
        sp38 = (Vec3f *) &camera->targetPosRot;
        sp3C = &camera->at;
        temp_s1_6 = &camera->eye;
        if (temp_s2_2->unk_1C == 0) {
            temp_t8 = &sp98;
            temp_s2_2->unk_12 = (s16) temp_v1->shape.rot.y;
            sp98 = camera->target;
            temp_s2_2->unk_C = (f32) temp_s2_2->unk_14;
            func_800CC260(camera, (Vec3f *) temp_s2_2, sp38, (f32 *) &temp_s2_2[12], temp_t8, (s16) 1);
        }
        Camera_LerpVec3f(sp38, sp3C, 0.1f, 0.1f, 0.1f);
        temp_a1_4 = &camera->eyeNext;
        sp38 = temp_a1_4;
        Camera_LerpVec3f((Vec3f *) temp_s2_2, temp_a1_4, 0.1f, 0.1f, 0.1f);
        temp_s1_6->x = sp38->x;
        temp_s1_6->y = sp38->y;
        temp_s1_6->z = sp38->z;
        func_800CC128(camera, sp3C, (f32 *) temp_s1_6);
        break;
    case 7:
        sp38 = (Vec3f *) &camera->targetPosRot;
        sp3C = &camera->at;
        temp_s1_7 = &camera->eye;
        if (temp_s2_2->unk_1C == 0) {
            temp_s2_2->unk_12 = (s16) temp_v1->shape.rot.y;
            sp98 = camera->target;
            func_800CC260(camera, (Vec3f *) temp_s2_2, sp38, (f32 *) &temp_s2_2[12], &sp98, (s16) 1);
        }
        sp3C->x = sp38->x;
        sp3C->y = sp38->y;
        sp3C->z = sp38->z;
        sp44.unk_0 = (f32) temp_s2_2->unk_0;
        sp44.unk_4 = (f32) temp_s2_2->unk_4;
        sp44.unk_8 = (f32) temp_s2_2->unk_8;
        camera->eyeNext.x = sp44.unk_0;
        camera->eyeNext.y = sp44.unk_4;
        camera->eyeNext.z = sp44.unk_8;
        temp_s1_7->x = sp44.unk_0;
        temp_s1_7->y = sp44.unk_4;
        temp_s1_7->z = sp44.unk_8;
        break;
    case 8:
        sp38 = (Vec3f *) &camera->targetPosRot;
        sp3C = &camera->at;
        temp_s1_8 = &camera->eye;
        if (temp_s2_2->unk_1C == 0) {
            temp_s2_2->unk_12 = (s16) temp_v1->shape.rot.y;
            sp98 = camera->target;
            func_800CC260(camera, (Vec3f *) temp_s2_2, sp38, (f32 *) &temp_s2_2[12], &sp98, (s16) 1);
        }
        Camera_LerpVec3f(sp38, sp3C, 0.1f, 0.1f, 0.1f);
        temp_a1_5 = &camera->eyeNext;
        sp38 = temp_a1_5;
        Camera_LerpVec3f((Vec3f *) temp_s2_2, temp_a1_5, 0.1f, 0.1f, 0.1f);
        temp_s1_8->x = sp38->x;
        temp_s1_8->y = sp38->y;
        temp_s1_8->z = sp38->z;
        func_800CC128(camera, sp3C, (f32 *) temp_s1_8);
        break;
    }
    temp_s2_2->unk_1C = (s16) (temp_s2_2->unk_1C + 1);
    return 1;
}

s32 Camera_ModeDEMO2(Camera *camera) {
    f32 sp98;
    s16 sp96;
    s16 sp94;
    f32 sp90;
    s16 sp8E;
    s16 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    u8 sp5B;
    f32 sp54;
    s16 sp52;
    ? *sp4C;
    Vec3f *sp48;
    Vec3f *sp34;
    Vec3f *sp30;
    PosRot *sp28;
    Player *temp_v0;
    PosRot *temp_t7;
    PosRot *temp_v0_4;
    PosRot *temp_v1_3;
    PosRot *temp_v1_5;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_s0_8;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 *temp_a1_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    s16 *temp_v0_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t5;
    s16 temp_t8;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_4;
    s16 temp_v1_6;
    s8 *temp_s0;
    s8 *temp_s0_2;
    s8 *temp_s0_3;
    s8 *temp_s0_4;
    s8 *temp_s0_5;
    s8 *temp_s0_6;
    s8 *temp_s0_7;
    u16 temp_t1;
    u16 temp_v0_5;
    void *temp_v0_3;
    Vec3f *phi_a3;
    ? *phi_t0;
    s16 phi_a0;
    s16 phi_a1;
    s8 *phi_s0;

    sp5B = 0;
    temp_v0 = camera->player;
    temp_f16 = func_800B6FC8(camera->player);
    phi_a3 = D_801B9E84;
    phi_t0 = &D_801B9E64;
    if ((temp_v0 == camera->globalCtx->actorCtx.actorList[2].first) && (temp_v0->transformation == 1)) {
        phi_a3 = D_801B9ED4;
        phi_t0 = &D_801B9EB4;
    }
    sp48 = phi_a3;
    sp4C = phi_t0;
    sp54 = temp_f16;
    Camera_ClearFlags(camera, 0x10);
    temp_v1 = camera->animState;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_3 = temp_v0_2 + 8;
        camera->unk_0 = (f32) *temp_v0_2;
        camera->unk_4 = (f32) temp_v0_3->unk_-4;
        camera->unk_8 = (s16) temp_v0_3->unk_0;
    }
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    sp34 = temp_a2;
    sp30 = temp_a1;
    sp48 = phi_a3;
    sp4C = phi_t0;
    sp54 = temp_f16;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp98, temp_a1, temp_a2);
    D_801B9E08 = (s32) camera->unk_8;
    temp_t1 = (u16) camera->animState;
    switch (temp_t1) {
    case 0:
        sp48 = phi_a3;
        sp4C = phi_t0;
        Camera_ClearFlags(camera, 0xC);
        func_800CB5DC(camera);
        temp_s0 = &camera->paramData[12];
        camera->fov = camera->unk_0;
        temp_s0->unk_10 = 0;
        temp_v0_4 = &camera->playerPosRot;
        camera->roll = temp_s0->unk_10;
        temp_s0->unk_0 = (f32) temp_v0_4->pos.x;
        temp_s0->unk_4 = (f32) temp_v0_4->pos.y;
        temp_s0->unk_8 = (f32) temp_v0_4->pos.z;
        temp_f0 = camera->playerGroundY;
        phi_s0 = temp_s0;
        if (temp_f0 != -32000.0f) {
            temp_s0->unk_4 = temp_f0;
        }
        temp_a0 = temp_v0_4->rot.y;
        sp4C = phi_t0;
        sp48 = phi_a3;
        sp28 = temp_v0_4;
        sp52 = temp_a0;
        sp70 = (Math_SinS(temp_a0) * 40.0f) + temp_s0->unk_0;
        sp74 = temp_s0->unk_4 + 40.0f;
        sp78 = (Math_CosS(temp_a0) * 40.0f) + temp_s0->unk_8;
        if ((camera->globalCtx->state.frames & 2) != 0) {
            temp_s0->unk_12 = 1;
            phi_a0 = (s16) (temp_a0 - 0x4000);
        } else {
            temp_s0->unk_12 = -1;
            phi_a0 = (s16) (temp_a0 + 0x4000);
        }
        sp52 = phi_a0;
        sp48 = phi_a3;
        sp4C = phi_t0;
        sp7C = (Math_SinS(phi_a0) * phi_t0->unk_8) + sp70;
        sp80 = temp_s0->unk_4 + 5.0f;
        sp84 = (Math_CosS(phi_a0) * phi_t0->unk_8) + sp78;
        if (func_800CC128(camera, (Vec3f *) &sp70, &sp7C) != 0) {
            temp_s0->unk_12 = (s16) -(s32) temp_s0->unk_12;
        }
        sp4C = phi_t0;
        OLib_Vec3fToVecSphGeo((VecSph *) &sp88, phi_a3);
        sp8E += sp28->rot.y;
        OLib_VecSphAddToVec3f(sp30, (Vec3f *) temp_s0, (VecSph *) &sp88);
        sp90 = phi_t0->unk_0;
        sp94 = phi_t0->unk_4;
        sp96 = (phi_t0->unk_6 * temp_s0->unk_12) + sp28->rot.y;
        temp_s0->unk_C = 1.0f;
        phi_a1 = temp_s0->unk_10;
        break;
    case 1:
        temp_s0_2 = &camera->paramData[12];
        temp_f2 = phi_a3->x;
        temp_a1_2 = &sp64;
        temp_f0_2 = (f32) (temp_s0_2->unk_10 - 2) * 0.006849315f;
        sp64 = ((phi_a3[1].x - temp_f2) * temp_f0_2) + temp_f2;
        temp_f12 = phi_a3->y;
        sp68 = ((phi_a3[1].y - temp_f12) * temp_f0_2) + temp_f12;
        temp_f14 = phi_a3->z;
        sp60 = temp_f0_2;
        sp4C = phi_t0;
        sp6C = ((phi_a3[1].z - temp_f14) * temp_f0_2) + temp_f14;
        OLib_Vec3fToVecSphGeo((VecSph *) &sp88, (Vec3f *) temp_a1_2);
        temp_t7 = &camera->playerPosRot;
        sp28 = temp_t7;
        sp8E = (sp8E * temp_s0_2->unk_12) + temp_t7->rot.y;
        OLib_VecSphAddToVec3f(sp30, (Vec3f *) temp_s0_2, (VecSph *) &sp88);
        temp_f2_2 = phi_t0->unk_0;
        temp_f6 = ((phi_t0->unk_8 - temp_f2_2) * temp_f0_2) + temp_f2_2;
        sp88 = temp_f6;
        temp_v1_2 = phi_t0->unk_4;
        temp_t2 = (s32) ((f32) (s16) (phi_t0->unk_C - temp_v1_2) * temp_f0_2) + temp_v1_2;
        sp8C = temp_t2;
        temp_a0_2 = phi_t0->unk_6;
        sp90 = temp_f6;
        sp94 = temp_t2;
        temp_t5 = (s32) ((f32) (s16) (phi_t0->unk_E - temp_a0_2) * temp_f0_2) + temp_a0_2;
        sp8E = temp_t5;
        sp96 = (temp_t5 * temp_s0_2->unk_12) + sp28->rot.y;
        temp_s0_2->unk_C = (f32) (temp_s0_2->unk_C - 0.002739726f);
        phi_a1 = temp_s0_2->unk_10;
        phi_s0 = temp_s0_2;
        break;
    case 2:
        temp_s0_3 = &camera->paramData[12];
        temp_f2_3 = phi_a3[1].x;
        temp_a1_3 = &sp64;
        temp_f0_3 = (f32) (temp_s0_3->unk_10 - 0x94) * 0.1f;
        sp64 = ((phi_a3[2].x - temp_f2_3) * temp_f0_3) + temp_f2_3;
        temp_f14_2 = phi_a3[1].y - temp_f16;
        temp_f6_2 = ((phi_a3[2].y - temp_f14_2) * temp_f0_3) + temp_f14_2;
        sp68 = temp_f6_2;
        sp68 = temp_f6_2 + temp_f16;
        temp_f12_2 = phi_a3[1].z;
        sp60 = temp_f0_3;
        sp4C = phi_t0;
        sp6C = ((phi_a3[2].z - temp_f12_2) * temp_f0_3) + temp_f12_2;
        OLib_Vec3fToVecSphGeo((VecSph *) &sp88, (Vec3f *) temp_a1_3);
        temp_v1_3 = &camera->playerPosRot;
        sp28 = temp_v1_3;
        sp8E = (sp8E * temp_s0_3->unk_12) + temp_v1_3->rot.y;
        OLib_VecSphAddToVec3f(sp30, (Vec3f *) temp_s0_3, (VecSph *) &sp88);
        temp_f2_4 = phi_t0->unk_8;
        temp_f4 = ((phi_t0->unk_10 - temp_f2_4) * temp_f0_3) + temp_f2_4;
        sp88 = temp_f4;
        temp_v1_4 = phi_t0->unk_C;
        temp_t3 = (s32) ((f32) (s16) (phi_t0->unk_14 - temp_v1_4) * temp_f0_3) + temp_v1_4;
        sp8C = temp_t3;
        temp_a0_3 = phi_t0->unk_E;
        sp90 = temp_f4;
        sp94 = temp_t3;
        temp_t2_2 = (s32) ((f32) (s16) (phi_t0->unk_16 - temp_a0_3) * temp_f0_3) + temp_a0_3;
        sp8E = temp_t2_2;
        sp96 = (temp_t2_2 * temp_s0_3->unk_12) + sp28->rot.y;
        temp_s0_3->unk_C = (f32) (temp_s0_3->unk_C - 0.04f);
        phi_a1 = temp_s0_3->unk_10;
        phi_s0 = temp_s0_3;
        break;
    case 3:
        temp_s0_4 = &camera->paramData[12];
        temp_f2_5 = phi_a3[2].x;
        temp_a1_4 = &sp64;
        temp_f0_4 = (f32) (temp_s0_4->unk_10 - 0x9F) * 0.11111111f;
        sp64 = ((phi_a3[3].x - temp_f2_5) * temp_f0_4) + temp_f2_5;
        temp_f12_3 = phi_a3[2].y;
        temp_f18 = ((phi_a3[3].y - temp_f12_3) * temp_f0_4) + temp_f12_3;
        sp68 = temp_f18;
        sp68 = temp_f18 + temp_f16;
        temp_f14_3 = phi_a3[2].z;
        sp60 = temp_f0_4;
        sp4C = phi_t0;
        sp6C = ((phi_a3[3].z - temp_f14_3) * temp_f0_4) + temp_f14_3;
        OLib_Vec3fToVecSphGeo((VecSph *) &sp88, (Vec3f *) temp_a1_4);
        temp_v1_5 = &camera->playerPosRot;
        sp28 = temp_v1_5;
        sp8E = (sp8E * temp_s0_4->unk_12) + temp_v1_5->rot.y;
        OLib_VecSphAddToVec3f(sp30, (Vec3f *) temp_s0_4, (VecSph *) &sp88);
        temp_f2_6 = phi_t0->unk_10;
        temp_f10 = ((phi_t0->unk_18 - temp_f2_6) * temp_f0_4) + temp_f2_6;
        sp88 = temp_f10;
        temp_v1_6 = phi_t0->unk_14;
        temp_t8 = (s32) ((f32) (s16) (phi_t0->unk_1C - temp_v1_6) * temp_f0_4) + temp_v1_6;
        sp8C = temp_t8;
        temp_a0_4 = phi_t0->unk_16;
        sp90 = temp_f10;
        sp94 = temp_t8;
        temp_t3_2 = (s32) ((f32) (s16) (phi_t0->unk_1E - temp_a0_4) * temp_f0_4) + temp_a0_4;
        sp8E = temp_t3_2;
        sp96 = (temp_t3_2 * temp_s0_4->unk_12) + sp28->rot.y;
        temp_s0_4->unk_C = (f32) (temp_s0_4->unk_C + 0.08888889f);
        phi_a1 = temp_s0_4->unk_10;
        phi_s0 = temp_s0_4;
        break;
    case 30:
        Camera_SetFlags(camera, 0x400);
        if ((camera->flags2 & 8) != 0) {
            camera->animState = 4;
        }
        /* fallthrough */
    case 10:
    case 20:
        sp5B = 1;
        sp28 = &camera->playerPosRot;
        temp_s0_5 = &camera->paramData[12];
        phi_a1 = temp_s0_5->unk_10;
        phi_s0 = temp_s0_5;
        break;
    case 4:
        sp94 = 0;
        temp_s0_6 = &camera->paramData[12];
        sp90 = 80.0f;
        sp96 = sp9E;
        temp_s0_6->unk_C = 0.1f;
        D_801B9E08 = 0x3400;
        temp_a1_5 = temp_s0_6->unk_10;
        phi_a1 = temp_a1_5;
        phi_s0 = temp_s0_6;
        if ((((s32) temp_a1_5 < 0) || (camera->xzSpeed > 0.001f) || (temp_v0_5 = camera->globalCtx->state.input[0].press.button, (~(temp_v0_5 | 0xFFFF7FFF) == 0)) || (~(temp_v0_5 | ~0x4000) == 0) || (~(temp_v0_5 | ~8) == 0) || (~(temp_v0_5 | ~4) == 0) || (~(temp_v0_5 | ~2) == 0) || (~(temp_v0_5 | ~1) == 0) || (~(temp_v0_5 | ~0x2000) == 0) || (~(temp_v0_5 | ~0x20) == 0) || (~(temp_v0_5 | ~0x10) == 0)) && ((camera->flags2 & 8) != 0)) {
        default:
            temp_s0_7 = &camera->paramData[12];
            Camera_SetFlags(camera, 0x14);
            Camera_ClearFlags(camera, 8);
            func_800CC938(camera);
            D_801B9E08 = 0;
            phi_a1 = temp_s0_7->unk_10;
            phi_s0 = temp_s0_7;
        }
        sp5B = 1;
        sp28 = &camera->playerPosRot;
        break;
    }
    phi_s0->unk_10 = (s16) (phi_a1 + 1);
    temp_a1_6 = phi_s0->unk_10;
    if (temp_a1_6 == 1) {
        camera->animState = 0xA;
    } else if (temp_a1_6 == 2) {
        camera->animState = 1;
    } else if (temp_a1_6 == 0x94) {
        camera->animState = 2;
    } else if (temp_a1_6 == 0x9E) {
        camera->animState = 0x14;
    } else if (temp_a1_6 == 0x9F) {
        camera->animState = 3;
    } else if (temp_a1_6 == 0xA8) {
        camera->animState = 0x1E;
    } else if (temp_a1_6 == 0xE4) {
        camera->animState = 4;
    }
    if (sp5B == 0) {
        sp90 = Camera_Lerpf(sp90, sp98, phi_s0->unk_C, 1.0f);
        sp94 = Camera_Lerps(sp94, sp9C, phi_s0->unk_C, 5);
        temp_s0_8 = &camera->eyeNext;
        sp96 = Camera_Lerps(sp96, sp9E, phi_s0->unk_C, 5);
        OLib_VecSphAddToVec3f(temp_s0_8, sp30, (VecSph *) &sp90);
        sp34->x = temp_s0_8->x;
        sp34->y = temp_s0_8->y;
        sp34->z = temp_s0_8->z;
    }
    camera->dist = OLib_Vec3fDist(sp30, sp34);
    camera->atLERPStepScale = 0.1f;
    func_800CB6C8(camera, sp28);
    return 1;
}

s32 Camera_ModeDEMO3(Camera *camera) {
    f32 sp64;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Vec3f *sp34;
    Vec3f *sp30;
    s8 *sp2C;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s8 *temp_v0_3;
    s8 *temp_v0_4;
    s8 *temp_v0_5;

    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    sp34 = temp_a2;
    sp30 = temp_a1;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp64, temp_a1, temp_a2);
    func_800B81E0(&sp50, camera->player);
    sp50 = camera->playerPosRot.pos.x;
    sp58 = camera->playerPosRot.pos.z;
    sp54 -= (sp54 - camera->playerPosRot.pos.y) * 0.4f;
    Camera_LerpVec3f((Vec3f *) &sp50, temp_a1, 0.1f, 0.1f, 0.1f);
    temp_v0 = camera->animState;
    if ((temp_v0 == 0) || (temp_v0 == 0xA) || (temp_v0 == 0x14)) {
        camera->animState = 0;
        camera->unk_0 = (s16) *(*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    }
    D_801B9E08 = (s32) camera->unk_0;
    temp_v0_2 = camera->animState;
    if (temp_v0_2 != 0) {
        temp_v0_3 = &camera->paramData[4];
        if (temp_v0_2 != 1) {
            temp_v0_4 = &camera->paramData[4];
            if (temp_v0_2 != 2) {
                temp_v0_5 = &camera->paramData[4];
                if (temp_v0_2 != 3) {

                } else {
                    temp_v0_5->unk_6 = (s16) (temp_v0_5->unk_6 + 1);
                    camera->fov += temp_v0_5->unk_0 * (f32) temp_v0_5->unk_6;
                    if ((s32) temp_v0_5->unk_6 >= 0xF) {
                        Quake2_ClearType(0x400);
                        Quake2_ClearType(0x10);
                        Quake2_ClearType(8);
                        camera->animState += 1;
                    }
                }
            } else {
                temp_v0_4->unk_6 = (s16) (temp_v0_4->unk_6 - 1);
                if ((s32) temp_v0_4->unk_6 <= 0) {
                    temp_v0_4->unk_4 = 0x78;
                    temp_v0_4->unk_6 = 0;
                    temp_v0_4->unk_0 = (f32) ((175.0f - camera->fov) / (f32) temp_v0_4->unk_4);
                    camera->animState += 1;
                    Quake2_SetType(0x400);
                    Quake2_SetCountdown(0xF);
                }
            }
        } else {
            sp2C = temp_v0_3;
            sp64 = Camera_Lerpf(140.0f, sp64, 1.0f / (f32) temp_v0_3->unk_6, 0.1f);
            temp_v0_3->unk_6 = (s16) (temp_v0_3->unk_6 - 1);
            camera->fov = Camera_Lerpf(50.0f, camera->fov, 0.1f, 0.1f);
            if ((s32) temp_v0_3->unk_6 <= 0) {
                temp_v0_3->unk_6 = 0x14;
                camera->animState += 1;
                Quake2_SetType(0x10);
                Quake2_SetCountdown(0x50);
            }
        }
    } else {
        camera->animState = temp_v0_2 + 1;
        camera->unk_A = 0x7D;
        Quake2_SetType(8);
        Quake2_SetCountdown(0x3C);
    }
    temp_a0 = &camera->eyeNext;
    sp2C = (s8 *) temp_a0;
    OLib_VecSphAddToVec3f(temp_a0, sp30, (VecSph *) &sp64);
    sp34->x = temp_a0->x;
    sp34->y = temp_a0->y;
    sp34->z = temp_a0->z;
    return 1;
}

s32 Camera_ModeDEMO4(Camera *camera) {
    s16 sp78;
    f32 sp74;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f *sp38;
    Vec3f *sp34;
    PosRot *sp30;
    PosRot *temp_v0;
    PosRot *temp_v0_2;
    PosRot *temp_v0_3;
    PosRot *temp_v0_4;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_s0_7;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_f16;
    s8 *temp_s0;
    s8 *temp_s0_2;
    s8 *temp_s0_3;
    s8 *temp_s0_4;
    s8 *temp_s0_5;
    s8 *temp_s0_6;
    f32 phi_f2;

    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    sp38 = temp_a2;
    sp34 = temp_a1;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp74, temp_a1, temp_a2);
    temp_v1 = camera->animState;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        temp_s0 = &camera->paramData[4];
        camera->animState = 0;
        camera->unk_0 = (s16) *(*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_s0->unk_0 = (f32) sp34->x;
        temp_s0->unk_4 = (f32) sp34->y;
        temp_s0->unk_8 = (f32) sp34->z;
        temp_s0->unk_18 = (f32) sp74.unk_0;
        temp_s0->unk_1C = (f32) (&sp74)[1];
        temp_s0->unk_14 = (f32) camera->fov;
    }
    func_800B81E0(&sp5C, camera->player);
    D_801B9E08 = (s32) camera->unk_0;
    temp_v1_2 = camera->animState;
    if ((s32) temp_v1_2 >= 5) {
        if (temp_v1_2 != 0x3E7) {

        } else {
            func_800B81E0(&sp5C, camera->player);
            Quake2_ClearType(0x200);
            Quake2_ClearType(0x800);
            camera->animState = 4;
        }
    } else {
        switch (temp_v1_2) {
        case 0:
            camera->animState = temp_v1_2 + 1;
            temp_s0_2 = &camera->paramData[4];
            temp_s0_2->unk_22 = 0;
            if (!(sp74 < 40.0f)) {
                sp74 = 40.0f;
            }
            camera->fov = 80.0f;
            temp_s0_2->unk_10 = (f32) ((Rand_ZeroOne() - 0.5f) * 40.0f);
            /* fallthrough */
        case 1:
            temp_s0_3 = &camera->paramData[4];
            temp_v1_3 = temp_s0_3->unk_22;
            if ((s32) temp_v1_3 >= 0xC) {
                temp_f0 = (f32) (temp_v1_3 - 0xC) * 10.384615f;
                temp_s0_3->unk_C = temp_f0;
                if (temp_s0_3->unk_10 < 0.0f) {
                    phi_f2 = -1.0f;
                } else {
                    phi_f2 = 1.0f;
                }
                temp_s0_3->unk_C = (f32) (phi_f2 * sin_rad(temp_f0 * 0.017453292f));
                if (temp_s0_3->unk_22 == 0xC) {
                    Quake2_SetType(0x200);
                    Quake2_SetCountdown(0x1A);
                }
            } else {
                temp_s0_3->unk_C = 0.0f;
            }
            temp_v0 = &camera->playerPosRot;
            temp_f2 = (f32) temp_s0_3->unk_22 * 0.31578946f;
            temp_s0_3->unk_20 = (s16) (temp_v0->rot.y + 0x4000);
            sp30 = temp_v0;
            sp58 = temp_f2;
            sp5C = (Math_SinS(temp_s0_3->unk_20) * temp_f2 * temp_s0_3->unk_C) + temp_v0->pos.x;
            sp64 = (Math_CosS(temp_s0_3->unk_20) * temp_f2 * temp_s0_3->unk_C) + temp_v0->pos.z;
            sp60 -= (sp60 - temp_v0->pos.y) * 0.099999994f;
            Camera_LerpVec3f((Vec3f *) &sp5C, sp34, 0.2f, 0.2f, 0.1f);
            camera->roll = (s16) (s32) ((temp_s0_3->unk_C * ((f32) temp_s0_3->unk_22 * 1.5789474f) * 182.04167f) + 0.5f);
            temp_v1_4 = temp_s0_3->unk_22;
            temp_f16 = 0x26 - temp_v1_4;
            temp_s0_3->unk_22 = (s16) (temp_v1_4 + 1);
            sp74 = Camera_Lerpf(30.0f, sp74, 1.0f / (f32) temp_f16, 0.1f);
            sp78 = 0;
            if ((s32) temp_s0_3->unk_22 >= 0x26) {
                temp_s0_3->unk_22 = 0x18;
                camera->animState += 1;
                temp_s0_3->unk_C = (f32) ((32.0f - camera->fov) / 24.0f);
                Quake2_SetType(0x800);
            }
            break;
        case 2:
            temp_s0_4 = &camera->paramData[4];
            temp_v0_2 = &camera->playerPosRot;
            if (temp_s0_4->unk_22 == 0x18) {
                temp_v0_3 = &camera->playerPosRot;
                sp30 = temp_v0_3;
                sp34->x = (Math_SinS(temp_v0_3->rot.y) * -7.0f) + temp_v0_3->pos.x;
                sp34->y = sp60 - ((sp60 - temp_v0_3->pos.y) * 0.1f);
                sp34->z = (Math_CosS(temp_v0_3->rot.y) * -7.0f) + temp_v0_3->pos.z;
            } else {
                sp30 = temp_v0_2;
                sp5C = (Math_SinS(temp_v0_2->rot.y) * -7.0f) + temp_v0_2->pos.x;
                sp60 -= (sp60 - camera->playerPosRot.pos.y) * 0.1f;
                sp64 = (Math_CosS(temp_v0_2->rot.y) * -7.0f) + temp_v0_2->pos.z;
                Camera_LerpVec3f((Vec3f *) &sp5C, sp34, 0.25f, 0.25f, 0.1f);
            }
            if ((s32) temp_s0_4->unk_22 > 0) {
                camera->fov += temp_s0_4->unk_C;
            }
            temp_s0_4->unk_22 = (s16) (temp_s0_4->unk_22 - 1);
            sp74 = 35.0f;
            sp78 = 0x2000;
            camera->roll = Camera_Lerps(0, camera->roll, 0.1f, 5);
            if ((s32) temp_s0_4->unk_22 <= 0) {
                temp_s0_4->unk_20 = 0x276;
                temp_s0_4->unk_22 = 0;
                temp_s0_4->unk_C = (f32) ((60.0f - camera->fov) / (f32) temp_s0_4->unk_20);
                camera->animState = 3;
            }
            break;
        case 3:
            temp_v0_4 = &camera->playerPosRot;
            sp5C = temp_v0_4->pos.x;
            temp_s0_5 = &camera->paramData[4];
            sp60 -= (sp60 - camera->playerPosRot.pos.y) * 0.1f;
            sp64 = temp_v0_4->pos.z;
            Camera_LerpVec3f((Vec3f *) &sp5C, sp34, 0.25f, 0.25f, 0.1f);
            camera->roll = Camera_Lerps(0, camera->roll, 0.1f, 5);
            temp_s0_5->unk_22 = (s16) (temp_s0_5->unk_22 + 1);
            camera->fov += temp_s0_5->unk_C * (f32) temp_s0_5->unk_22;
            sp78 = 0x2000;
            sp74 = 35.0f;
            if ((s32) temp_s0_5->unk_22 >= 0x23) {
                Quake2_ClearType(0x200);
                Quake2_ClearType(0x800);
                camera->animState = 4;
            }
            break;
        case 4:
            temp_s0_6 = &camera->paramData[4];
            sp30 = (PosRot *) &temp_s0_6[24];
            sp60 -= (sp60 - camera->playerPosRot.pos.y) * 0.1f;
            Camera_LerpVec3f((Vec3f *) &sp5C, sp34, 0.1f, 0.1f, 0.1f);
            sp74.unk_0 = sp30->pos.x;
            (&sp74)[1] = sp30->pos.y;
            camera->roll = 0;
            camera->fov = temp_s0_6->unk_14;
            break;
        }
    }
    temp_s0_7 = &camera->eyeNext;
    OLib_VecSphAddToVec3f(temp_s0_7, sp34, (VecSph *) &sp74);
    sp38->x = temp_s0_7->x;
    sp38->y = temp_s0_7->y;
    sp38->z = temp_s0_7->z;
    return 1;
}

s32 Camera_ModeDEMO5(Camera *camera) {
    s16 sp78;
    f32 sp74;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f *sp38;
    Vec3f *sp34;
    s8 *sp30;
    PosRot *temp_v0_3;
    PosRot *temp_v0_4;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_s0_6;
    f32 *temp_t3;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s8 *temp_s0;
    s8 *temp_s0_2;
    s8 *temp_s0_3;
    s8 *temp_s0_4;
    s8 *temp_s0_5;
    f32 phi_f0;

    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    sp38 = temp_a2;
    sp34 = temp_a1;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp74, temp_a1, temp_a2);
    temp_v0 = camera->animState;
    if ((temp_v0 == 0) || (temp_v0 == 0xA) || (temp_v0 == 0x14)) {
        temp_s0 = &camera->paramData[4];
        camera->animState = 0;
        camera->unk_0 = (s16) *(*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_s0->unk_0 = (f32) sp34->x;
        temp_s0->unk_4 = (f32) sp34->y;
        temp_s0->unk_8 = (f32) sp34->z;
        temp_s0->unk_1C = (s32) sp74.unk_0;
        temp_s0->unk_20 = (s32) (&sp74)[1];
        temp_s0->unk_18 = (f32) camera->fov;
    }
    func_800B81E0(&sp5C, camera->player);
    temp_s0_2 = &camera->paramData[4];
    D_801B9E08 = (s32) camera->unk_0;
    temp_v0_2 = camera->animState;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            temp_s0_3 = &camera->paramData[4];
            if (temp_v0_2 != 2) {
                if (temp_v0_2 != 3) {
                    if (temp_v0_2 != 0x3E7) {

                    } else {
                        func_800B81E0(&sp5C, camera->player);
                        camera->animState = 3;
                        Quake2_ClearType(0x200);
                    }
                } else {
                    temp_s0_4 = &camera->paramData[4];
                    sp30 = &temp_s0_4[28];
                    sp60 -= (sp60 - camera->playerPosRot.pos.y) * 0.1f;
                    Camera_LerpVec3f((Vec3f *) &sp5C, sp34, 0.1f, 0.1f, 0.1f);
                    camera->roll = 0;
                    sp74.unk_0 = sp30->unk_0;
                    (&sp74)[1] = sp30->unk_4;
                    camera->fov = temp_s0_4->unk_18;
                }
            } else {
                temp_f0 = (f32) temp_s0_3->unk_26 * 7.826087f;
                temp_s0_3->unk_C = temp_f0;
                if (temp_s0_3->unk_10 < 0.0f) {
                    phi_f0 = -1.0f;
                } else {
                    phi_f0 = 1.0f;
                }
                temp_s0_3->unk_C = (f32) (phi_f0 * sin_rad(temp_f0 * 0.017453292f));
                temp_f2 = (f32) (0x2E - temp_s0_3->unk_26) * 0.10869565f;
                sp58 = temp_f2;
                temp_v0_3 = &camera->playerPosRot;
                sp5C = (Math_SinS(temp_s0_3->unk_24) * temp_f2 * temp_s0_3->unk_C) + temp_v0_3->pos.x;
                sp30 = (s8 *) temp_v0_3;
                sp64 = (Math_CosS(temp_s0_3->unk_24) * temp_f2 * temp_s0_3->unk_C) + temp_v0_3->pos.z;
                sp60 -= (sp60 - camera->playerPosRot.pos.y) * 0.2f;
                Camera_LerpVec3f((Vec3f *) &sp5C, sp34, 0.1f, 0.1f, 0.1f);
                camera->roll = (s16) (s32) ((temp_s0_3->unk_C * ((f32) temp_s0_3->unk_26 * 0.4347826f) * 182.04167f) + 0.5f);
                sp74 = Camera_Lerpf(temp_s0_3->unk_14, sp74, 1.0f / (f32) temp_s0_3->unk_26, 0.1f);
                temp_s0_3->unk_26 = (s16) (temp_s0_3->unk_26 - 1);
                sp78 = 0;
                if ((s32) temp_s0_3->unk_26 <= 0) {
                    camera->animState = 3;
                    Quake2_ClearType(0x200);
                }
            }
        } else {
            goto block_11;
        }
    } else {
        camera->animState = temp_v0_2 + 1;
        sp78 = 0;
        temp_s0_2->unk_26 = 0x12;
        temp_s0_2->unk_14 = 80.0f;
        sp74 = 30.0f;
        camera->fov = 80.0f;
        temp_v0_4 = &camera->playerPosRot;
        temp_t3 = &sp5C;
        temp_s0_2->unk_10 = (f32) ((Rand_ZeroOne() - 0.5f) * 40.0f);
        camera->roll = 0;
        sp5C = temp_v0_4->pos.x;
        sp64 = temp_v0_4->pos.z;
        sp34->x = temp_t3->unk_0;
        sp34->y = temp_t3[1];
        sp34->z = temp_t3[2];
block_11:
        temp_s0_5 = &camera->paramData[4];
        temp_s0_5->unk_26 = (s16) (temp_s0_5->unk_26 - 1);
        if ((s32) temp_s0_5->unk_26 <= 0) {
            temp_s0_5->unk_26 = 0;
            camera->animState = 2;
            temp_s0_5->unk_26 = 0x2E;
            temp_s0_5->unk_24 = (s16) (camera->playerPosRot.rot.y + 0x4000);
            Quake2_SetType(0x200);
            Quake2_SetCountdown(0x2E);
        }
    }
    temp_s0_6 = &camera->eyeNext;
    OLib_VecSphAddToVec3f(temp_s0_6, sp34, (VecSph *) &sp74);
    sp38->x = temp_s0_6->x;
    sp38->y = temp_s0_6->y;
    sp38->z = temp_s0_6->z;
    return 1;
}

s32 Camera_ModeDEMO6(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDEMO7(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDEMO8(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDEMO9(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeDEMO0(Camera *camera) {
    Camera *sp40;
    Vec3f *sp24;
    Vec3f *sp20;
    s8 *sp1C;
    Camera *temp_t0;
    Vec3f *temp_a0_5;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s32 temp_cond;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s8 *temp_a0;
    s8 *temp_v0;
    s8 *temp_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s16 phi_v1_4;

    temp_t0 = &camera->globalCtx->subCameras[2];
    if (camera->animState == 0) {
        camera->unk_0 = (s16) *(*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
    }
    temp_a1 = &temp_t0->at;
    if (camera->animState == 0) {
        temp_v0 = &camera->paramData[4];
        temp_a2 = &temp_t0->eye;
        sp20 = temp_a2;
        temp_a0 = &temp_v0[4];
        sp1C = temp_v0;
        camera = camera;
        sp40 = temp_t0;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) temp_a0, temp_a1, temp_a2);
        temp_a2_2 = &camera->eye;
        sp24 = temp_a2_2;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &temp_v0[12], &camera->at, temp_a2_2);
        if (temp_v0->unk_4 < 50.0f) {
            temp_v0->unk_4 = 50.0f;
            if ((s32) temp_v0->unk_8 < 0x7D0) {
                temp_v0->unk_8 = 0x7D0;
            }
        }
        sp1C = temp_v0;
        camera = camera;
        sp40 = temp_t0;
        temp_f0 = OLib_Vec3fDist(sp24, sp20);
        temp_cond = temp_f0 < 300.0f;
        temp_v0->unk_0 = temp_f0;
        if (temp_cond) {
            temp_v0->unk_1A = 0;
        } else {
            temp_v0->unk_1A = (s16) (s32) sqrtf(temp_v0->unk_0 - 200.0f);
        }
        temp_v0->unk_14 = (s16) (temp_t0->inputDir.x - camera->inputDir.x);
        temp_a0_2 = temp_v0->unk_14;
        if ((s32) temp_a0_2 >= 0) {
            phi_v1 = temp_a0_2 << 0x10;
        } else {
            phi_v1 = (s32) temp_a0_2 * -0x10000;
        }
        temp_v1 = phi_v1 >> 0x10;
        if (temp_v1 >= 0x2711) {
            temp_lo = temp_v1 / 0x3E8;
            if ((s32) temp_v0->unk_1A < (s32) (s16) temp_lo) {
                temp_v0->unk_1A = (s16) temp_lo;
            }
        }
        temp_v0->unk_16 = (s16) (temp_t0->inputDir.y - camera->inputDir.y);
        temp_a0_3 = temp_v0->unk_16;
        if ((s32) temp_a0_3 >= 0) {
            phi_v1_2 = temp_a0_3 << 0x10;
        } else {
            phi_v1_2 = (s32) temp_a0_3 * -0x10000;
        }
        temp_v1_2 = phi_v1_2 >> 0x10;
        if (temp_v1_2 >= 0x2711) {
            temp_lo_2 = temp_v1_2 / 0x3E8;
            if ((s32) temp_v0->unk_1A < (s32) (s16) temp_lo_2) {
                temp_v0->unk_1A = (s16) temp_lo_2;
            }
        }
        temp_v0->unk_18 = (s16) (temp_t0->inputDir.z - camera->inputDir.z);
        temp_a0_4 = temp_v0->unk_18;
        if ((s32) temp_a0_4 >= 0) {
            phi_v1_3 = temp_a0_4 << 0x10;
        } else {
            phi_v1_3 = (s32) temp_a0_4 * -0x10000;
        }
        temp_v1_3 = phi_v1_3 >> 0x10;
        if (temp_v1_3 >= 0x2711) {
            temp_lo_3 = temp_v1_3 / 0x3E8;
            if ((s32) temp_v0->unk_1A < (s32) (s16) temp_lo_3) {
                temp_v0->unk_1A = (s16) temp_lo_3;
            }
        }
        temp_v1_4 = temp_v0->unk_1A;
        if (temp_v1_4 != 0) {
            temp_v0->unk_14 = (s16) ((s32) (s16) (temp_v0->unk_8 - temp_v0->unk_10) / (s32) temp_v1_4);
            temp_v0->unk_16 = (s16) ((s32) (s16) (temp_v0->unk_A - temp_v0->unk_12) / (s32) temp_v1_4);
            temp_v0->unk_0 = (f32) ((temp_v0->unk_4 - temp_v0->unk_C) / (f32) temp_v1_4);
            temp_v0->unk_18 = (s16) ((s32) (s16) (temp_t0->roll - camera->roll) / (s32) temp_v1_4);
        }
        camera->animState += 1;
    }
    temp_v0_2 = camera + 4;
    temp_v1_5 = temp_v0_2->unk_1A;
    phi_v1_4 = temp_v1_5;
    if (temp_v1_5 != 0) {
        temp_f0_2 = (f32) temp_v1_5;
        temp_a1_2 = camera + 0x50;
        temp_a0_5 = camera + 0x5C;
        temp_a1_2->x += (temp_t0->at.x - camera->at.x) / temp_f0_2;
        temp_a1_2->y += (temp_t0->at.y - camera->at.y) / temp_f0_2;
        temp_a1_2->z += (temp_t0->at.z - camera->at.z) / temp_f0_2;
        temp_v0_2->unk_C = (f32) (temp_v0_2->unk_C + temp_v0_2->unk_0);
        temp_v0_2->unk_10 = (s16) (temp_v0_2->unk_10 + temp_v0_2->unk_14);
        temp_v0_2->unk_12 = (s16) (temp_v0_2->unk_12 + temp_v0_2->unk_16);
        camera->roll += temp_v0_2->unk_18;
        camera = camera;
        sp24 = temp_a0_5;
        sp1C = temp_v0_2;
        OLib_VecSphAddToVec3f(temp_a0_5, temp_a1_2, temp_v0_2 + 0xC);
        camera->eyeNext.x = camera->paramData[0x5C];
        camera->eyeNext.y = temp_a0_5->y;
        camera->eyeNext.z = temp_a0_5->z;
        temp_v0_2->unk_1A = (s16) (temp_v0_2->unk_1A - 1);
        phi_v1_4 = temp_v0_2->unk_1A;
    }
    if (phi_v1_4 == 0) {
        ActorCutscene_Stop(0x7E);
    }
    return 1;
}

s32 Camera_ModeSPEC0(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSPEC1(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSPEC2(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSPEC3(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSPEC4(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSPEC5(Camera *camera) {
    ? spA8;
    s16 spA4;
    ? sp88;
    ? sp7C;
    s16 sp7A;
    s16 sp78;
    f32 sp74;
    s16 sp72;
    s16 sp70;
    f32 sp6C;
    ? sp64;
    f32 sp5C;
    Vec3f *sp38;
    Vec3f *sp34;
    Vec3f *sp30;
    PosRot *sp2C;
    Actor *temp_v1_3;
    PosRot *temp_a1_2;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    Vec3f *temp_a2_2;
    f32 *temp_a2_4;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 *temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s8 *temp_a2_3;
    void *temp_v0_2;
    s32 phi_v0;

    temp_f0 = func_800CB700(camera);
    temp_v1 = camera->animState;
    temp_a1 = &camera->at;
    temp_a2 = &camera->eye;
    if ((temp_v1 == 0) || (temp_v1 == 0xA) || (temp_v1 == 0x14)) {
        temp_v0 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v0_2 = temp_v0 + 0x1C;
        camera->unk_0 = (f32) ((f32) *temp_v0 * 0.01f * temp_f0 * (0.8f - ((68.0f / temp_f0) * -0.2f)));
        camera->unk_4 = (f32) temp_v0_2->unk_-18;
        camera->unk_8 = (f32) temp_v0_2->unk_-14;
        camera->unk_16 = (s16) (s32) (((f32) temp_v0_2->unk_-10 * 182.04167f) + 0.5f);
        camera->unk_C = (f32) temp_v0_2->unk_-C;
        camera->unk_10 = (f32) ((f32) temp_v0_2->unk_-8 * 0.01f);
        camera->unk_14 = (s16) temp_v0_2->unk_-4;
        camera->unk_18 = (s16) temp_v0_2->unk_0;
    }
    sp34 = temp_a1;
    sp38 = temp_a2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp64, temp_a1, temp_a2);
    temp_a2_2 = &camera->eyeNext;
    sp30 = temp_a2_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp5C, temp_a1, temp_a2_2);
    func_800B8214((PosRot *) &spA8, camera->target);
    temp_a2_3 = &camera->paramData[28];
    D_801B9E08 = (s32) camera->unk_18;
    temp_v1_2 = camera->animState;
    if (temp_v1_2 == 0) {
        camera->animState = temp_v1_2 + 1;
        camera->unk_1C = (s16) camera->unk_14;
    }
    temp_v0_3 = *temp_a2_3;
    if ((s32) temp_v0_3 > 0) {
        *temp_a2_3 = (s16) (temp_v0_3 - 1);
        goto block_17;
    }
    if (temp_v0_3 == 0) {
        temp_v1_3 = camera->target;
        if ((temp_v1_3 == 0) || (temp_a1_2 = &camera->playerPosRot, (temp_v1_3->update == 0))) {
            camera->target = NULL;
        } else {
            *temp_a2_3 = (s16) (temp_v0_3 - 1);
            sp2C = temp_a1_2;
            if (camera->unk_8 < OLib_Vec3fDist((Vec3f *) &spA8, (Vec3f *) temp_a1_2)) {
                sp72 = sp2C->rot.y;
                temp_a2_4 = &sp6C;
                sp6C = 20.0f;
                sp70 = (s16) -(s32) sp2C->rot.x;
                OLib_VecSphAddToVec3f((Vec3f *) &sp7C, (Vec3f *) &spA8, (VecSph *) temp_a2_4);
                func_800CBC84((? *) camera, sp34, (Vec3f *) &sp7C, 0);
                OLib_Vec3fToVecSphGeo((VecSph *) &sp6C, (Vec3f *) &sp88);
                spA4 = sp2C->rot.y - sp72;
                sp74 = camera->unk_4;
                temp_f0_2 = Rand_ZeroOne();
                if ((s32) spA4 < 0) {
                    phi_v0 = -(s32) (s16) ((s16) (s32) (temp_f0_2 * 2730.0f) + 0x1553);
                } else {
                    phi_v0 = (s32) (s16) ((s16) (s32) (temp_f0_2 * 2730.0f) + 0x1553);
                }
                sp7A = phi_v0 + (sp2C->rot.y + 0x8000);
                sp78 = camera->unk_16;
                OLib_VecSphAddToVec3f(sp30, (Vec3f *) &spA8, (VecSph *) &sp74);
                sp38->x = sp30->x;
                sp38->y = sp30->y;
                sp38->z = sp30->z;
                func_800CC128(camera, (Vec3f *) &spA8, (f32 *) sp38);
            }
            goto block_17;
        }
    } else {
block_17:
        func_800CD6F8(camera, &sp5C, camera->unk_0, 0);
        camera->fov = Camera_Lerpf(camera->unk_C, camera->fov, camera->atLERPStepScale * 0.05f, 0.1f);
        camera->roll = Camera_Lerps(0, camera->roll, 0.5f, 5);
        camera->atLERPStepScale = func_800CD288(camera, camera->unk_10);
    }
    return 1;
}

s32 Camera_ModeSPEC6(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSPEC7(Camera *camera) {
    return Camera_ModeNop(camera);
}

s32 Camera_ModeSPEC8(Camera *camera) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    Vec3f *sp38;
    Vec3f *sp34;
    PosRot *sp30;
    s8 *sp2C;
    PosRot *temp_t0;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s8 *temp_s1;
    s8 *temp_v1;
    u16 temp_v0_6;
    void *temp_v0_3;

    sp54 = func_800CB700(camera);
    Camera_ClearFlags(camera, 0x10);
    temp_v0 = camera->animState;
    if ((temp_v0 != 0) && (temp_v0 != 0xA) && (temp_v0 != 0x14)) {

    } else {
        temp_v1 = &camera->paramData[12];
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_s1 = &camera->paramData[32];
        temp_v0_3 = temp_v0_2 + 0x14;
        temp_v1->unk_0 = (f32) ((f32) *temp_v0_2 * 0.01f * sp54 * (0.8f - ((68.0f / sp54) * -0.2f)));
        temp_v1->unk_4 = (f32) ((f32) temp_v0_3->unk_-10 * 0.01f);
        temp_v1->unk_8 = (f32) ((f32) temp_v0_3->unk_-C * 0.01f);
        temp_v1->unk_C = (f32) temp_v0_3->unk_-8;
        temp_v1->unk_10 = (s16) (temp_v0_3->unk_-4 * 5);
        temp_v1->unk_12 = (s16) temp_v0_3->unk_0;
        temp_s1->unk_C = 0;
        temp_s1->unk_E = (s16) (s32) (temp_v1->unk_C * 100.0f);
        sp54 = sp54;
        sp2C = temp_v1;
        Camera_ClearFlags(camera, 6);
        temp_s1->unk_0 = (f32) camera->unk_6;
        temp_s1->unk_4 = (f32) camera->unk_8;
        temp_s1->unk_8 = (f32) camera->unk_A;
    }
    temp_v0_4 = (Vec3f *) &camera->paramData[32]->unk_C;
    if ((s32) temp_v0_4 < (s32) camera->paramData[12].unk_10) {
        (Vec3f *) &camera->paramData[32]->unk_C = (s16) (temp_v0_4 + 1);
        sp5C = 0.0f;
        D_801B9E08 = (s32) camera->paramData[12].unk_12;
        sp64 = 0.0f;
        sp60 = camera->paramData[12].unk_0 + sp54;
        temp_f0 = camera->paramData[12].unk_8;
        sp2C = &camera->paramData[12];
        Camera_LerpVec3f((Vec3f *) &sp5C, &camera->posOffset, temp_f0, temp_f0, 0.1f);
        temp_t0 = &camera->playerPosRot;
        temp_a0 = &sp68;
        temp_a1 = &camera->at;
        sp68 = temp_t0->pos.x + camera->posOffset.x;
        sp6C = temp_t0->pos.y + camera->posOffset.y;
        sp70 = temp_t0->pos.z + camera->posOffset.z;
        temp_v0_5 = camera->animState;
        if (temp_v0_5 == 0) {
            camera->animState = temp_v0_5 + 1;
            if ((camera->paramData[12].unk_12 & 1) == 0) {
                camera->eyeNext.x = (Vec3f *) &camera->paramData[32]->x;
                camera->eyeNext.y = (Vec3f *) &camera->paramData[32]->y;
                camera->eyeNext.z = (Vec3f *) &camera->paramData[32]->z;
                camera->at.x = sp68.unk_0;
                camera->at.y = (&sp68)[1];
                camera->at.z = (&sp68)[2];
            }
        }
        temp_f0_2 = camera->paramData[12].unk_8;
        sp30 = temp_t0;
        sp38 = temp_a1;
        sp2C = &camera->paramData[12];
        sp34 = &camera->eyeNext;
        Camera_LerpVec3f((Vec3f *) temp_a0, temp_a1, temp_f0_2, temp_f0_2, 10.0f);
        temp_f0_3 = camera->paramData[12].unk_4;
        Camera_LerpVec3f((Vec3f *) &camera->paramData[32], sp34, temp_f0_3, temp_f0_3, 0.1f);
        temp_a1_2 = &camera->eye;
        temp_a1_2->x = sp34->x;
        temp_a1_2->y = sp34->y;
        temp_a1_2->z = sp34->z;
        camera->dist = OLib_Vec3fDist(sp38, temp_a1_2);
        camera->roll = 0;
        camera->xzSpeed = 0.0f;
        camera->fov = (f32) (Vec3f *) &camera->paramData[32]->unk_E * 0.01f;
        camera->atLERPStepScale = func_800CD288(camera, 1.0f);
        func_800CB6C8(camera, sp30);
    } else {
        sp2C = &camera->paramData[12];
        Camera_SetFlags(camera, 0x410);
        D_801B9E08 = 0;
        if ((camera->xzSpeed > 0.001f) || (temp_v0_6 = camera->globalCtx->state.input[0].press.button, (~(temp_v0_6 | 0xFFFF7FFF) == 0)) || (~(temp_v0_6 | ~0x4000) == 0) || (~(temp_v0_6 | ~8) == 0) || (~(temp_v0_6 | ~4) == 0) || (~(temp_v0_6 | ~2) == 0) || (~(temp_v0_6 | ~1) == 0) || (~(temp_v0_6 | ~0x2000) == 0) || (~(temp_v0_6 | ~0x20) == 0) || (~(temp_v0_6 | ~0x10) == 0) || ((camera->paramData[12].unk_12 & 8) != 0)) {
            func_800CC938(camera);
            Camera_SetFlags(camera, 6);
            Camera_ClearFlags(camera, 0x400);
        }
    }
    return 1;
}

s32 Camera_ModeSPEC9(Camera *camera) {
    f32 spBC;
    ? spB8;
    s16 spB6;
    s16 spB4;
    f32 spB0;
    f32 spA8;
    f32 spA4;
    s16 sp90;
    f32 sp88;
    ? sp84;
    ? sp50;
    Vec3f *sp4C;
    Vec3f *sp48;
    Vec3f *sp44;
    PosRot *sp40;
    s8 *sp3C;
    s8 *sp38;
    f32 sp34;
    s32 sp30;
    Player *temp_a1;
    PosRot *temp_v0_4;
    Vec3f *temp_a0_4;
    Vec3f *temp_a0_5;
    Vec3f *temp_a1_2;
    Vec3f *temp_a2;
    f32 *temp_a2_2;
    f32 temp_f0;
    s16 *temp_v0_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_lo;
    s16 temp_v0;
    s8 *temp_v0_6;
    s8 *temp_v1;
    u16 temp_v0_7;
    void *temp_v0_3;
    void *temp_v0_5;
    s32 phi_v1;
    s32 phi_v1_2;

    spA4 = func_800CB700(camera);
    temp_v0 = ActorCutscene_GetCurrentIndex();
    if ((temp_v0 != -1) && (temp_v0 != 0x7D)) {
        func_800E0348(camera);
    }
    Camera_ClearFlags(camera, 0x10);
    temp_f0 = 0.8f - ((68.0f / spA4) * -0.2f);
    sp34 = temp_f0;
    temp_a0 = camera->animState;
    if ((temp_a0 != 0) && (temp_a0 != 0xA) && (temp_a0 != 0x14)) {
        sp3C = &camera->paramData[12];
    } else {
        temp_v0_2 = (*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))->unk_4;
        temp_v1 = &camera->paramData[12];
        temp_v0_3 = temp_v0_2 + 8;
        temp_v1->unk_0 = (f32) ((f32) *temp_v0_2 * 0.01f * spA4 * temp_f0);
        temp_v1->unk_4 = (f32) temp_v0_3->unk_-4;
        temp_v1->unk_8 = (s16) temp_v0_3->unk_0;
        sp3C = temp_v1;
    }
    temp_a1 = camera->unk_0;
    temp_v0_4 = &camera->playerPosRot;
    if (temp_a1 != 0) {
        func_800B8248((PosRot *) &sp84, temp_a1);
        sp40 = &camera->playerPosRot;
    } else {
        sp84.unk_0 = (f32) temp_v0_4->pos.x;
        sp84.unk_4 = (f32) temp_v0_4->pos.y;
        sp84.unk_8 = (f32) temp_v0_4->pos.z;
        sp84.unk_C = (s32) temp_v0_4->unk_C;
        sp84.unk_10 = (s32) temp_v0_4->unk_10;
        sp40 = temp_v0_4;
        sp90 = 0;
        sp88 += spA4 + sp3C->unk_0;
    }
    temp_a1_2 = &camera->at;
    temp_a2 = &camera->eye;
    sp4C = temp_a2;
    sp48 = temp_a1_2;
    OLib_Vec3fDiffToVecSphGeo((VecSph *) &spA8, temp_a1_2, temp_a2);
    D_801B9E08 = (s32) sp3C->unk_8;
    temp_a0_2 = camera->animState;
    if ((s32) temp_a0_2 >= 5) {
        if (temp_a0_2 != 0x3E7) {

        }
        goto block_34;
    }
    switch (temp_a0_2) {
    case 0:
        Camera_ClearFlags(camera, 6);
        camera->animState += 1;
        temp_a0_3 = sp40->rot.y - sp92;
        phi_v1 = -(s32) temp_a0_3;
        if ((s32) temp_a0_3 >= 0) {
            phi_v1 = (s32) temp_a0_3;
        }
        if (phi_v1 >= 0x4001) {
            camera->unk_18 = (s16) (sp92 + 0x8000);
        } else {
            camera->unk_18 = sp92;
        }
        /* fallthrough */
    case 1:
        camera->unk_6 = (s16) (camera->unk_6 - 1);
        if ((s32) camera->unk_6 <= 0) {
            camera->animState += 1;
            if ((sp3C->unk_8 & 1) != 0) {
                temp_v0_5 = func_800CC7A8(camera, camera->camDataIdx);
                temp_a0_4 = &camera->eyeNext;
                sp44 = temp_a0_4;
                func_800CB60C((s8 *) temp_a0_4, temp_v0_5);
                sp50.unk_0 = (f32) sp44->x;
                sp50.unk_4 = (f32) sp44->y;
                sp50.unk_8 = (f32) sp44->z;
                sp4C->x = sp50.unk_0;
                sp4C->y = sp50.unk_4;
                sp4C->z = sp50.unk_8;
                spB8.unk_0 = (f32) sp50.unk_0;
                spB8.unk_4 = (f32) sp50.unk_4;
                spB8.unk_8 = (f32) sp50.unk_8;
            } else {
                sp38 = &camera->paramData[24];
                spB4 = (s32) (Rand_ZeroOne() * 640.0f) + 0xBB8;
                if ((camera->globalCtx->state.frames & 1) != 0) {
                    phi_v1_2 = 1;
                } else {
                    phi_v1_2 = -1;
                }
                temp_lo = phi_v1_2 * (s16) ((s16) (s32) (Rand_ZeroOne() * 1230.0f) + 0x5DC);
                temp_a0_5 = &camera->eyeNext;
                sp44 = temp_a0_5;
                temp_a2_2 = &spB0;
                spB6 = *sp38 + temp_lo;
                spB0 = 200.0f * sp34;
                sp30 = (s32) temp_lo;
                OLib_VecSphAddToVec3f(temp_a0_5, sp48, (VecSph *) temp_a2_2);
                sp50.unk_0 = (f32) sp44->x;
                sp50.unk_4 = (f32) sp44->y;
                sp50.unk_8 = (f32) sp44->z;
                sp4C->x = sp50.unk_0;
                sp4C->y = sp50.unk_4;
                sp4C->z = sp50.unk_8;
                spB8.unk_0 = (f32) sp50.unk_0;
                spB8.unk_4 = (f32) sp50.unk_4;
                spB8.unk_8 = (f32) sp50.unk_8;
                if (func_800CC1C4(camera, (Vec3f *) &spB8, (f32 *) sp40) != 0) {
                    spB6 = *sp38 + (s16) (sp30 * -1);
                    OLib_VecSphAddToVec3f(sp44, sp48, (VecSph *) &spB0);
                    sp4C->x = sp44->x;
                    sp4C->y = sp44->y;
                    sp4C->z = sp44->z;
                }
            }
        case 2:
            spB8.unk_0 = (f32) sp40->pos.x;
            spB8.unk_4 = (f32) sp40->pos.y;
            spB8.unk_8 = (f32) sp40->pos.z;
            spBC += spA4 + sp3C->unk_0;
            Camera_LerpVec3f((Vec3f *) &spB8, sp48, 0.25f, 0.25f, 0.1f);
            camera->unk_8 = (s16) (camera->unk_8 - 1);
            if ((s32) camera->unk_8 <= 0) {
                temp_v0_6 = &camera->paramData[24];
                camera->animState += 1;
                *temp_v0_6 = (s16) (*temp_v0_6 + 0x8000);
            case 3:
                spB8.unk_0 = (f32) sp40->pos.x;
                spB8.unk_4 = (f32) sp40->pos.y;
                spB8.unk_8 = (f32) sp40->pos.z;
                sp38 = &camera->paramData[24];
                sp44 = &camera->eyeNext;
                spBC += spA4 + sp3C->unk_0;
                Camera_LerpVec3f((Vec3f *) &spB8, sp48, 0.5f, 0.5f, 0.1f);
                spB4 = Camera_Lerps(0xAAA, spAC, 0.3f, 5);
                spB6 = Camera_Lerps(*sp38, spAE, 0.3f, 5);
                spB0 = Camera_Lerpf(60.0f, spA8, 0.3f, 1.0f);
                OLib_VecSphAddToVec3f(sp44, sp48, (VecSph *) &spB0);
                sp4C->x = sp44->x;
                sp4C->y = sp44->y;
                sp4C->z = sp44->z;
                camera->unk_A = (s16) (camera->unk_A - 1);
                if ((s32) camera->unk_A <= 0) {
                    camera->animState += 1;
                case 4:
                    camera->animState += 1;
                default:
block_34:
                    Camera_SetFlags(camera, 0x410);
                    D_801B9E08 = 0;
                    if ((camera->xzSpeed > 0.001f) || (temp_v0_7 = camera->globalCtx->state.input[0].press.button, (~(temp_v0_7 | 0xFFFF7FFF) == 0)) || (~(temp_v0_7 | ~0x4000) == 0) || (~(temp_v0_7 | ~8) == 0) || (~(temp_v0_7 | ~4) == 0) || (~(temp_v0_7 | ~2) == 0) || (~(temp_v0_7 | ~1) == 0) || (~(temp_v0_7 | ~0x2000) == 0) || (~(temp_v0_7 | ~0x20) == 0) || (~(temp_v0_7 | ~0x10) == 0) || ((sp3C->unk_8 & 8) != 0)) {
                        func_800CC938(camera);
                        Camera_SetFlags(camera, 6);
                        Camera_ClearFlags(camera, 0x400);
                    }
                }
            }
        }
        break;
    }
    spB8.unk_0 = (f32) sp40->pos.x;
    spB8.unk_4 = (f32) sp40->pos.y;
    spB8.unk_8 = (f32) sp40->pos.z;
    spBC += spA4;
    camera->dist = OLib_Vec3fDist((Vec3f *) &spB8, sp4C);
    func_800CB6C8(camera, sp40);
    return 1;
}

Camera *Camera_Alloc(View *view, CollisionContext *bg, GlobalContext *globalCtx) {
    void *sp1C;
    void *temp_v0;
    Camera *phi_a0;

    temp_v0 = zelda_malloc(0x178U);
    phi_a0 = (Camera *) temp_v0;
    if (temp_v0 != 0) {
        sp1C = temp_v0;
        Camera_Init((Camera *) temp_v0, view, bg, globalCtx);
        phi_a0 = (Camera *) sp1C;
    }
    return phi_a0;
}

void Camera_Free(Camera *camera) {
    if (camera != 0) {
        zelda_free((void *) camera);
    }
}

void Camera_Init(Camera *camera, View *view, CollisionContext *bg, GlobalContext *globalCtx) {
    Camera *temp_v0_2;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 phi_a1;
    s16 phi_v1;
    s16 phi_v1_2;
    s16 phi_a1_2;

    __osMemset((void *) camera, 0, 0x178U);
    D_801EDC28 = globalCtx;
    camera->globalCtx = globalCtx;
    temp_v0 = D_801B9E04;
    temp_a1 = temp_v0;
    D_801B9E04 = temp_v0 + 1;
    phi_a1_2 = temp_a1;
    if (temp_a1 != 0) {
        phi_a1 = temp_a1;
loop_2:
        phi_v1 = 0;
        phi_a1_2 = phi_a1;
        if (phi_a1 == 0) {
            D_801B9E04 += 1;
        }
loop_5:
        temp_v0_2 = camera->globalCtx->cameraPtrs[phi_v1];
        phi_v1_2 = phi_v1;
        if ((temp_v0_2 == 0) || (phi_a1 != temp_v0_2->uid)) {
            temp_v1 = phi_v1 + 1;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if ((s32) temp_v1 < 4) {
                goto loop_5;
            }
        }
        if (phi_v1_2 != 4) {
            temp_v0_3 = D_801B9E04;
            temp_a1_2 = temp_v0_3;
            D_801B9E04 = temp_v0_3 + 1;
            phi_a1 = temp_a1_2;
            phi_a1_2 = temp_a1_2;
            if (temp_a1_2 != 0) {
                goto loop_2;
            }
        }
    }
    camera->inputDir.y = 0x4000;
    camera->unk_13A = (unaligned s32) camera->unk_134;
    camera->uid = phi_a1_2;
    camera->nextCamDataIdx = -1;
    camera->up.z = 0.0f;
    camera->up.x = 0.0f;
    camera->yOffsetUpdateRate = 0.05f;
    camera->xzOffsetUpdateRate = 0.05f;
    camera->fovUpdateRate = 0.05f;
    camera->rUpdateRateInv = 10.0f;
    camera->yawUpdateRateInv = 10.0f;
    camera->up.y = 1.0f;
    camera->fov = 60.0f;
    camera->camDir.z = (s16) (u16) camera->inputDir.z;
    camera->pitchUpdateRateInv = 16.0f;
    D_801B9E10 = 0x20;
    D_801B9E0C = 0;
    camera->prevSetting = 0xA;
    camera->prevCamDataIdx = -1;
    camera->flags2 = 0;
    camera->mode = 0;
    camera->bgCheckId = 0x32;
    camera->unk168 = 0xF;
    camera->unk160 = -1;
    camera->player = NULL;
    camera->target = NULL;
    camera->setting = camera->prevSetting;
    camera->camDataIdx = camera->prevCamDataIdx;
    Camera_SetFlags(camera, 0x4000);
    camera->skyboxOffset.x = 0.0f;
    camera->skyboxOffset.y = 0.0f;
    camera->skyboxOffset.z = 0.0f;
    camera->up.x = 0.0f;
    camera->up.z = 0.0f;
    camera->atLERPStepScale = 1.0f;
    camera->up.y = 1.0f;
    D_801B9E08 = 0xFF00;
    D_801B9E58 = 3;
}

void func_800DDFE0(Camera *arg0) {
    u8 temp_v0;
    void *temp_v1;

    temp_v1 = arg0->globalCtx;
    if (arg0 != (temp_v1 + 0x220)) {
        arg0->setting = 0xA;
        arg0->prevSetting = arg0->setting;
        Camera_ClearFlags(arg0, 4);
        return;
    }
    temp_v0 = temp_v1->roomCtx.currRoom.unk3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                arg0->prevSetting = 1;
                func_800DF8EC(arg0, 1, 2);
            } else {
                arg0->prevSetting = 0x3F;
                func_800DF8EC(arg0, 0x3F, 2);
            }
        } else {
            arg0->prevSetting = 0x11;
            func_800DF8EC(arg0, 0x11, 2);
        }
    } else {
        arg0->prevSetting = 1;
        func_800DF8EC(arg0, 1, 2);
    }
    Camera_SetFlags(arg0, 4);
}

void func_800DE0E0(s32 arg0) {

}

void func_800DE0EC(Camera *camera, Actor *actor) {
    ? sp54;
    s16 sp52;
    s16 sp50;
    f32 sp4C;
    s32 sp48;
    ? sp3C;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 *temp_a2;
    f32 temp_f0;

    func_800B8248((PosRot *) &sp54, (Player *) actor);
    camera->player = (Player *) actor;
    temp_f0 = func_800CB700(camera);
    camera->playerPosRot.pos.x = sp54.unk_0;
    camera->playerPosRot.pos.y = sp54.unk_4;
    camera->playerPosRot.pos.z = sp54.unk_8;
    temp_a1 = &camera->at;
    camera->unk_A0 = (s32) sp54.unk_C;
    temp_a0 = &camera->eyeNext;
    temp_a2 = &sp4C;
    camera->unk_A4 = (s32) sp54.unk_10;
    sp4C = 180.0f;
    camera->dist = 180.0f;
    camera->inputDir.y = sp62;
    sp50 = 0x71C;
    sp52 = camera->inputDir.y + 0x8000;
    camera->inputDir.x = 0x71C;
    camera->inputDir.z = 0;
    camera->camDir.z = 0;
    camera->unk_13A = (unaligned s32) camera->unk_134;
    camera->xzSpeed = 0.0f;
    camera->playerPosDelta.y = 0.0f;
    temp_a1->x = sp54.unk_0;
    temp_a1->y = sp54.unk_4;
    temp_a1->z = sp54.unk_8;
    camera->posOffset.y = temp_f0;
    camera->posOffset.x = 0.0f;
    camera->posOffset.z = 0.0f;
    camera->at.y += temp_f0;
    sp24 = temp_a1;
    sp20 = temp_a0;
    OLib_VecSphAddToVec3f(temp_a0, temp_a1, (VecSph *) temp_a2);
    camera->eye.x = sp20->x;
    camera->eye.y = sp20->y;
    camera->roll = 0;
    camera->up.z = 0.0f;
    camera->up.x = 0.0f;
    camera->up.y = 1.0f;
    camera->eye.z = sp20->z;
    if (func_800CC488((? *) camera, &sp3C, (f32 *) sp24, &sp48) != -32000.0f) {
        camera->bgCheckId = (s16) sp48;
    }
    camera->waterPrevCamIdx = -1;
    camera->waterPrevCamSetting = -1;
    camera->waterQuakeId = (s16) -1;
    func_800DDFE0(camera);
    Camera_SetFlags(camera, 4);
    camera->paramFlags = 0;
    camera->nextCamDataIdx = -1;
    camera->yOffsetUpdateRate = 0.01f;
    camera->xzOffsetUpdateRate = 0.01f;
    camera->fovUpdateRate = 0.01f;
    camera->atLERPStepScale = 1.0f;
    func_800CD2E0(camera, camera->mode);
    if (camera == &camera->globalCtx->mainCamera) {
        D_801B9E08 = 0xB200;
        func_800F15D8(camera);
    } else {
        D_801B9E08 = 0x3200;
    }
    func_800DE324(camera);
}

s16 func_800DE308(void *arg0, s16 arg1) {
    arg0->unk_140 = arg1;
    return arg0->unk_140;
}

? func_800DE324(Camera *arg0) {
    f32 sp3C;
    s16 sp3A;
    s16 sp2A;
    s32 *sp24;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1;

    temp_v1 = arg0->flags2;
    if (((temp_v1 & 2) == 0) || ((*(&cameraStates->unk_4 + (arg0->setting * 0xC)) * 2) < 0)) {
        return 0;
    }
    if ((temp_v1 & 0x200) != 0) {
        if (func_800CB8C8(arg0) != 0) {
            if (func_800CB8F4(arg0) == 0) {
                func_800DF8EC(arg0, 3, 6);
            } else {
                func_800DF8EC(arg0, 5, 6);
            }
            Camera_SetFlags(arg0, -0x8000);
            goto block_11;
        }
        if ((s32) arg0->flags2 < 0) {
            func_800DF8EC(arg0, arg0->unk_11E, 6);
            Camera_ClearFlags(arg0, -0x8000);
block_11:
        }
    }
    if (((u32) arg0->flags2 >> 0xF) == 0) {
        temp_v0 = func_800CC874(arg0, &sp3C);
        temp_v1_2 = temp_v0;
        sp3A = temp_v0;
        if (temp_v1_2 == -2) {
            if ((arg0->flags2 & 0x200) == 0) {
                Camera_SetFlags(arg0, 0x200);
                arg0->waterQuakeId = -1;
                arg0->waterPrevCamIdx = (s32) arg0->camDataIdx;
            }
            if (!(Camera_fabsf(arg0->playerPosRot.pos.y - arg0->playerGroundY) < 11.0f) || ((func_800CB880(arg0) != 0) && (func_800CBB58(arg0) == 0))) {
                sp2A = arg0->bgCheckId;
                arg0->bgCheckId = 0x32;
                sp24 = &arg0->waterPrevCamSetting;
                func_800DF8EC(arg0, 2, 2);
                *sp24 = (s32) arg0->setting;
                arg0->camDataIdx = -2;
                arg0->bgCheckId = sp2A;
            }
        } else if (temp_v1_2 != -1) {
            if ((arg0->flags2 & 0x200) == 0) {
                Camera_SetFlags(arg0, 0x200);
                arg0->waterQuakeId = -1;
                arg0->waterPrevCamIdx = (s32) arg0->camDataIdx;
            }
            if (!(Camera_fabsf(arg0->playerPosRot.pos.y - arg0->playerGroundY) < 11.0f) || ((func_800CB880(arg0) != 0) && (func_800CBB58(arg0) == 0))) {
                sp2A = arg0->bgCheckId;
                arg0->bgCheckId = 0x32;
                sp24 = &arg0->waterPrevCamSetting;
                func_800DF8EC(arg0, sp3A, 2);
                *sp24 = (s32) arg0->setting;
                arg0->bgCheckId = sp2A;
            }
        } else if ((arg0->flags2 & 0x200) != 0) {
            Camera_ClearFlags(arg0, 0x200);
            sp2A = arg0->bgCheckId;
            temp_a1 = arg0->waterPrevCamIdx;
            arg0->bgCheckId = 0x32;
            if (temp_a1 < 0) {
                func_800DDFE0(arg0, temp_a1);
                arg0->camDataIdx = -1;
            } else {
                func_800DFB14(arg0, (u32) temp_a1);
            }
            arg0->bgCheckId = sp2A;
        }
        arg0->waterYPos = sp3C;
    }
    return 1;
}

void func_800DE62C(Camera *arg0) {
    u32 sp38;
    ? sp30;
    s32 sp28;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v0_2;
    u16 temp_v0;

    sp30.unk_0 = (s32) D_801B9F04.unk_0;
    sp30.unk_4 = (s32) D_801B9F04.unk_4;
    if ((((s32) gSaveContext.day % 5) == 3) && (ActorCutscene_GetCurrentIndex() == -1)) {
        temp_v0 = gSaveContext.time;
        sp38 = gSaveContext.unk_14;
        if ((s32) temp_v0 > 0) {
            temp_v0_2 = (s32) temp_v0 >> 0xC;
            if (((s32) temp_v0 < 0x4000) && (((sp + (temp_v0_2 * 2))->unk_30 & temp_v0) == 0)) {
                sp28 = temp_v0_2;
                if (Quake_NumActiveQuakes() < 2) {
                    temp_v0_3 = Quake_Add(arg0, 4U);
                    if (temp_v0_3 != 0) {
                        Quake_SetSpeed(temp_v0_3, 0x7530);
                        Quake_SetQuakeValues(temp_v0_3, (s16) (sp28 + 2), 1, 5, (s16) 0x3C);
                        temp_a1 = (((s32) temp_v0 >> 0xA) - sp38) + 0x50;
                        D_801B9F0C = temp_a1;
                        Quake_SetCountdown(temp_v0_3, temp_a1);
                    }
                }
            }
        }
        if (((((temp_v0 + 0x4D2) & 0xDFFC) == 0xC000) || ((arg0->globalCtx->state.frames & 0x3FF) == 0)) && (Quake_NumActiveQuakes() < 2)) {
            temp_v0_4 = Quake_Add(arg0, 3U);
            if (temp_v0_4 != 0) {
                Quake_SetSpeed(temp_v0_4, 0x3E80);
                Quake_SetQuakeValues(temp_v0_4, 1, 0, 0, (s16) (temp_v0 & 0x3F));
                temp_a1_2 = 0x78 - sp38;
                D_801B9F0C = temp_a1_2;
                Quake_SetCountdown(temp_v0_4, temp_a1_2);
            }
        }
        temp_a1_3 = D_801B9F0C;
        if (temp_a1_3 != 0) {
            D_801B9F0C = temp_a1_3 - 1;
            func_8019F128(0x4058U);
        }
    }
}

? func_800DE840(Camera *arg0) {
    Quake2_ClearType(1);
    if (arg0->globalCtx->unk_186E2 == 3) {
        Quake2_SetType(1);
    }
    return 1;
}

? func_800DE890(void) {
    s32 temp_v0;

    temp_v0 = func_800CBB88();
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {

            } else if (Quake2_GetType() != 0x100) {
                Quake2_SetType(0x100);
                Quake2_SetCountdown(0xF);
            }
        } else if (Quake2_GetType() != 0x80) {
            Quake2_SetType(0x80);
            Quake2_SetCountdown(5);
        }
    } else if (Quake2_GetType() != 0x40) {
        Quake2_SetType(0x40);
        Quake2_SetCountdown(0xC);
    }
    return 1;
}

s32 func_800DE954(Camera *arg0) {
    void *temp_v0;

    temp_v0 = arg0->globalCtx->unk_1CCC;
    if ((arg0->thisIdx == 0) && (arg0->player == temp_v0) && (temp_v0->unk_153 == 0x14)) {
        func_800DF8EC((Camera *)0x4F, 2);
        return 1;
    }
    return 0;
}

Vec3s *Camera_Update(Vec3s *param_1, Camera *camera) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    ? spAC;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s32 sp98;
    s32 sp94;
    CollisionPoly *sp90;
    CollisionPoly *sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp68;
    f32 sp54;
    f32 sp48;
    Player *sp44;
    ? sp3C;
    s16 sp3A;
    CollisionPoly *temp_v0;
    CollisionPoly *temp_v0_2;
    DynaPolyActor *temp_v0_3;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    Player *temp_a1;
    Player *temp_a1_2;
    Player *temp_v1;
    Vec3f *temp_v1_4;
    f32 *temp_a1_3;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_2;
    s32 temp_v1_3;
    f32 phi_f0;

    temp_v1 = camera->player;
    if (camera->status == 0) {
        param_1->unk_0 = (unaligned s32) camera->unk_134;
        param_1->z = (s16) (u16) camera->inputDir.z;
    } else {
        D_801B9E50 = 0;
        D_801B9E54 = 0;
        temp_a0 = camera->globalCtx;
        if (temp_a0->view.unk_164 == 0) {
            temp_a1 = camera->player;
            if (temp_a1 != 0) {
                if (temp_a1 == temp_a0->actorCtx.actorList[2].first) {
                    sp44 = temp_v1;
                    func_800B8248((PosRot *) &sp68, temp_a1);
                } else {
                    sp44 = temp_v1;
                    func_800B8214((PosRot *) &sp68, (Actor *) temp_a1);
                }
                camera->playerPosDelta.x = sp68 - camera->playerPosRot.pos.x;
                camera->playerPosDelta.y = sp6C - camera->playerPosRot.pos.y;
                camera->playerPosDelta.z = sp70 - camera->playerPosRot.pos.z;
                sp98 = 0;
                sp44 = sp44;
                if (func_800CB7F8(camera) != 0) {
                    temp_v0 = sp44->unk_390->floorPoly;
                    if (temp_v0 != 0) {
                        sp90 = temp_v0;
                        camera->bgCheckId = (s16) sp44->unk_390->floorBgId;
                        camera->playerGroundY = sp44->unk_390->floorHeight;
                        sp98 = 3;
                    }
                } else if (func_800CB7CC((? *) camera) != 0) {
                    temp_v0_2 = camera->player->actor.floorPoly;
                    if (temp_v0_2 != 0) {
                        sp90 = temp_v0_2;
                        temp_a1_2 = camera->player;
                        camera->bgCheckId = (s16) temp_a1_2->actor.floorBgId;
                        camera->playerGroundY = temp_a1_2->actor.floorHeight;
                        sp98 = 1;
                    }
                } else {
                    spA0.unk_0 = sp68.unk_0;
                    (&spA0)[1] = (&sp68)[1];
                    (&spA0)[2] = (&sp68)[2];
                    spA4 += func_800CB700(camera);
                    temp_a0_2 = camera->globalCtx;
                    temp_f0 = func_800C41E4(temp_a0_2, &temp_a0_2->colCtx, &sp90, &sp9C, camera->player, &spA0);
                    if (temp_f0 != -32000.0f) {
                        camera->bgCheckId = (bitwise s16) sp9C;
                        camera->playerGroundY = temp_f0;
                        sp98 = 2;
                    }
                }
                if ((sp98 != 0) && (Camera_fabsf(camera->playerPosRot.pos.y - camera->playerGroundY) < 11.0f)) {
                    temp_v0_3 = BgCheck_GetActorOfMesh(&camera->globalCtx->colCtx, (s32) camera->bgCheckId);
                    if (temp_v0_3 != 0) {
                        camera->floorNorm.x = (f32) sp90->normal.x * 0.00003051851f;
                        camera->floorNorm.y = (f32) sp90->normal.y * 0.00003051851f;
                        camera->floorNorm.z = (f32) sp90->normal.z * 0.00003051851f;
                        camera->playerPosDelta.x -= temp_v0_3->actor.world.pos.x - camera->meshActorPos.x;
                        camera->playerPosDelta.y -= temp_v0_3->actor.world.pos.y - camera->meshActorPos.y;
                        camera->playerPosDelta.z -= temp_v0_3->actor.world.pos.z - camera->meshActorPos.z;
                        camera->meshActorPos.x = temp_v0_3->actor.world.pos.x;
                        camera->meshActorPos.y = temp_v0_3->actor.world.pos.y;
                        camera->meshActorPos.z = temp_v0_3->actor.world.pos.z;
                    }
                }
                sp88 = func_800CB780(camera) * 1.5f;
                temp_f0_2 = Camera_LengthVec3f(&camera->playerPosDelta);
                sp84 = temp_f0_2;
                camera->xzSpeed = OLib_ClampMaxDist(temp_f0_2, sp88);
                camera->speedRatio = OLib_ClampMaxDist(sp84 / sp88, 1.8f);
                camera->playerPosRot.pos.x = sp68.unk_0;
                camera->playerPosRot.pos.y = (&sp68)[1];
                camera->playerPosRot.pos.z = (&sp68)[2];
                camera->unk_A0 = (f32) (&sp68)[3];
                camera->unk_A4 = (f32) (&sp68)[4];
                if (camera->thisIdx == 0) {
                    func_800DE324(camera);
                    func_800DE840(camera);
                    func_800DE62C(camera);
                    func_800DE890(camera);
                }
                if (camera->unk150 != 0) {
                    Camera_SetFlags(camera, 0x400);
                } else if ((camera->flags2 & 4) == 0) {
                    camera->nextCamDataIdx = -1;
                }
                sp94 = 0;
                sp9C = (bitwise f32) camera->bgCheckId;
                temp_v0_4 = camera->flags2;
                if (((temp_v0_4 & 1) != 0) && ((temp_v0_4 & 4) != 0) && ((temp_v0_4 & 0x400) == 0)) {
                    if ((temp_v0_4 & 0x200) != 0) {
                        if (func_800CBB58(camera) != 0) {
                            goto block_31;
                        }
                    } else {
block_31:
                        if ((((u32) camera->flags2 >> 0xF) == 0) && (func_800CB7F8(camera) == 0) && (func_800DE954(camera) == 0) && (func_800CB828(camera) == 0) && (sp98 != 0)) {
                            temp_v0_5 = func_800CC804(camera, (s32 *) &sp9C, sp90);
                            if ((temp_v0_5 != -1) && (camera->bgCheckId == 0x32)) {
                                sp3A = temp_v0_5;
                                if (func_800CBC00(camera) == 0) {
                                    camera->nextCamDataIdx = temp_v0_5 | 0x1000;
                                }
                            }
                            spA0.unk_0 = sp68.unk_0;
                            (&spA0)[1] = (&sp68)[1];
                            (&spA0)[2] = (&sp68)[2];
                            spA4 += func_800CB700(camera);
                            temp_f0_3 = func_800C4488(&camera->globalCtx->colCtx, (Vec3f *) &sp8C, &sp9C, &spA0);
                            if ((temp_f0_3 != -32000.0f) && (sp8C != sp90) && ((bitwise s32) sp9C == 0x32) && ((camera->playerGroundY - 2.0f) < temp_f0_3)) {
                                temp_v0_6 = func_800CC804(camera, (s32 *) &sp9C, sp8C);
                                if ((temp_v0_6 != -1) && ((bitwise s32) sp9C == 0x32)) {
                                    camera->nextCamDataIdx = temp_v0_6 | 0x1000;
                                    sp94 = 1;
                                }
                            }
                        }
                    }
                }
                temp_v0_7 = camera->unk150;
                if (temp_v0_7 != 0) {
                    camera->unk150 = temp_v0_7 - 1;
                    if (camera->unk150 == 0) {
                        Camera_ClearFlags(camera, 0x400);
                        sp94 = 5;
                    }
                }
                if (((camera->thisIdx == 0) || ((camera->flags2 & 0x40) != 0)) && ((camera->bgCheckId == 0x32) || (((bitwise s32) sp9C == 0x32) && (sp94 != 0))) && (camera->nextCamDataIdx != -1) && (camera->unk150 == 0) && ((Camera_fabsf(camera->playerPosRot.pos.y - camera->playerGroundY) < 11.0f) || (sp94 != 0)) && (((camera->flags2 & 0x200) == 0) || (func_800CBB58(camera) != 0))) {
                    func_800DFB14(camera, (u32) camera->nextCamDataIdx);
                    temp_v1_2 = camera->timer;
                    camera->nextCamDataIdx = -1;
                    if (temp_v1_2 != 0) {
                        camera->unk150 = temp_v1_2;
                        camera->timer = 0;
                    }
                }
            }
            if (camera->status == 1) {
                param_1->unk_0 = (unaligned s32) camera->unk_134;
                param_1->z = (s16) (u16) camera->inputDir.z;
            } else {
                camera->flags1 = 0;
                Camera_ClearFlags(camera, 0x420);
                Camera_SetFlags(camera, 0x10);
                goto block_66;
            }
        } else {
block_66:
            cameraUpdateFuncs[*(*(&cameraStates->modes + (camera->setting * 0xC)) + (camera->mode * 8))](camera);
            temp_v1_3 = D_801B9E58;
            if (temp_v1_3 != 0) {
                D_801B9E58 = temp_v1_3 - 1;
            }
            if (camera->status == 7) {
                if (((D_801B9E58 != 0) || (func_800CB854(camera) != 0)) && (camera->thisIdx == 0)) {
                    D_801B9E08 = 0x3200;
                    func_800CD2F0(0x3200);
                } else if ((camera->globalCtx->unk_18B4A != 0) && (camera->thisIdx != 0)) {
                    D_801B9E08 = 0xFF00;
                    func_800CD2F0(0xFF00);
                } else {
                    func_800CD2F0(D_801B9E08);
                }
            }
            if (camera->status == 3) {
                param_1->unk_0 = (unaligned s32) camera->unk_134;
                param_1->z = (s16) (u16) camera->inputDir.z;
            } else {
                temp_v0_8 = Quake_Calc(camera, (QuakeCamCalc *) &sp48);
                sp9C = (bitwise f32) temp_v0_8;
                if (temp_v0_8 != 0) {
                    temp_a1_3 = &spB8;
                    temp_a2 = &spC4;
                    spC4 = camera->at.x + sp48;
                    spC8 = camera->at.y + sp4C;
                    spCC = camera->at.z + sp50;
                    spB8 = camera->eye.x + sp54;
                    spBC = camera->eye.y + sp58;
                    spC0 = camera->eye.z + sp5C;
                    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp3C, (Vec3f *) temp_a1_3, (Vec3f *) temp_a2);
                    func_800CD04C(&spAC, sp40, sp42, (s16) (camera->roll + sp60));
                    phi_f0 = camera->fov + ((f32) sp62 * 0.00549325f);
                } else if (D_801B9E54 != 0) {
                    spC4.unk_0 = camera->at.x;
                    (&spC4)[1] = camera->at.y;
                    (&spC4)[2] = camera->at.z;
                    spB8.unk_0 = camera->eye.x;
                    (&spB8)[1] = camera->eye.y;
                    (&spB8)[2] = camera->eye.z;
                    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp3C, (Vec3f *) &spB8, (Vec3f *) &spC4);
                    temp_v1_4 = &camera->up;
                    spAC.unk_0 = (f32) temp_v1_4->x;
                    spAC.unk_4 = (f32) temp_v1_4->y;
                    spAC.unk_8 = (f32) temp_v1_4->z;
                    phi_f0 = camera->fov;
                } else {
                    spC4.unk_0 = camera->at.x;
                    (&spC4)[1] = camera->at.y;
                    (&spC4)[2] = camera->at.z;
                    spB8.unk_0 = camera->eye.x;
                    (&spB8)[1] = camera->eye.y;
                    (&spB8)[2] = camera->eye.z;
                    OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp3C, (Vec3f *) &spB8, (Vec3f *) &spC4);
                    func_800CD04C(&spAC, sp40, sp42, camera->roll);
                    phi_f0 = camera->fov;
                }
                temp_v0_9 = camera->paramFlags;
                if ((temp_v0_9 & 4) != 0) {
                    camera->paramFlags = temp_v0_9 & 0xFFFB;
                    spAC.unk_0 = (f32) camera->up.x;
                    spAC.unk_4 = (f32) camera->up.y;
                    spAC.unk_8 = (f32) camera->up.z;
                } else {
                    camera->up.x = spAC.unk_0;
                    camera->up.y = spAC.unk_4;
                    camera->up.z = spAC.unk_8;
                }
                camera->skyboxOffset.x = sp54.unk_0;
                camera->skyboxOffset.y = (&sp54)[1];
                camera->skyboxOffset.z = (&sp54)[2];
                sp80 = phi_f0;
                View_SetScale(&camera->globalCtx->view, ((f32) gGameInfo->data[259] * 0.01f) + 1.0f);
                camera->globalCtx->view.fovy = phi_f0;
                View_SetViewOrientation(&camera->globalCtx->view, (Vec3f *) &spB8, (Vec3f *) &spC4, (Vec3f *) &spAC);
                camera->camDir.x = sp40;
                camera->camDir.z = 0;
                camera->camDir.y = sp42;
                if (D_801B9E50 == 0) {
                    camera->inputDir.x = sp40;
                    camera->inputDir.z = 0;
                    camera->inputDir.y = sp42;
                }
                param_1->unk_0 = (unaligned s32) camera->unk_134;
                param_1->z = (s16) (u16) camera->inputDir.z;
            }
        }
    }
    return param_1;
}

? func_800DF498(Camera *arg0) {
    Camera_SetFlags(arg0, 0xC);
    Camera_ClearFlags(arg0, 0x1008);
    return 1;
}

u32 Camera_SetMode(Camera *camera, s16 mode, s8 param_3) {
    Actor *temp_v1;
    Camera *temp_a0;
    Camera *temp_a3;
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_v0_2;
    u16 temp_t4;
    s16 phi_a2;
    s32 phi_v0;
    s16 phi_t2;
    s32 phi_v0_2;
    s32 phi_at;

    temp_a3 = camera;
    temp_v0 = temp_a3->setting;
    phi_a2 = param_3 & 0xFF;
    if ((temp_v0 == 0x3E) && ((mode == 6) || (mode == 0xF))) {
        phi_a2 = 1;
    }
    if (((temp_a3->flags2 & 0x20) != 0) && (phi_a2 == 0)) {
        temp_a3->flags1 |= 0x20;
        return -1U;
    }
    if ((cameraStates[temp_v0].validModes & (1 << mode)) == 0) {
        temp_a0 = temp_a3;
        if (temp_a3->mode != 0) {
            temp_a3->mode = 0;
            temp_a1 = temp_a3->mode;
            camera = temp_a3;
            func_800CD2E0(temp_a0, temp_a1, phi_a2, temp_a3);
            func_800DF498(camera);
            phi_at = 0xC0000000;
            goto block_56;
        }
        temp_a3->flags1 |= 0x20;
        temp_a3->flags1 |= 2;
        return 0U;
    }
    if ((mode == temp_a3->mode) && (phi_a2 == 0)) {
        temp_a3->flags1 |= 0x20;
        return -1U;
    }
    temp_a3->flags1 |= 0x20;
    temp_a3->flags1 |= 2;
    camera = temp_a3;
    func_800CD2E0(temp_a3, mode, phi_a2, temp_a3);
    phi_v0 = 0;
    switch ((u16) mode) {                           /* switch 1 */
    case 6:                                         /* switch 1 */
        phi_v0 = 0x20;
        break;
    case 14:                                        /* switch 1 */
        phi_v0 = 4;
        break;
    case 9:                                         /* switch 1 */
        temp_v1 = camera->target;
        if ((temp_v1 != 0) && (temp_v1->id != 0x20)) {
            phi_v0 = 8;
        }
        break;
    case 4:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
    case 11:                                        /* switch 1 */
    case 23:                                        /* switch 1 */
    case 24:                                        /* switch 1 */
        phi_v0 = 2;
        break;
    case 0:                                         /* switch 1 */
    case 22:                                        /* switch 1 */
        phi_v0 = 0x10;
        break;
    }
    temp_t4 = (u16) camera->mode;
    phi_v0_2 = phi_v0;
    switch (temp_t4) {                              /* switch 2 */
    case 6:                                         /* switch 2 */
        phi_t2 = 0xA;
        if ((phi_v0 & 0x20) != 0) {
block_41:
            camera->animState = phi_t2;
        }
        break;
    case 1:                                         /* switch 2 */
    case 22:                                        /* switch 2 */
        if ((phi_v0 & 0x10) != 0) {
            camera->animState = 0x14;
        }
        phi_v0_2 = phi_v0 | 1;
        break;
    case 17:                                        /* switch 2 */
        if ((phi_v0 & 0x10) != 0) {
            camera->animState = 0x14;
        }
        phi_v0_2 = phi_v0 | 1;
        break;
    case 9:                                         /* switch 2 */
        if ((phi_v0 & 8) != 0) {
            camera->animState = 0xA;
        }
        phi_v0_2 = phi_v0 | 1;
        break;
    case 14:                                        /* switch 2 */
        if ((phi_v0 & 4) != 0) {
            camera->animState = 0xA;
        }
        phi_v0_2 = phi_v0 | 1;
        break;
    case 4:                                         /* switch 2 */
    case 23:                                        /* switch 2 */
    case 24:                                        /* switch 2 */
        phi_v0_2 = phi_v0 | 1;
        break;
    case 0:                                         /* switch 2 */
        phi_t2 = 0x14;
        if ((phi_v0 & 0x10) != 0) {
            goto block_41;
        }
        break;
    }
    temp_v0_2 = phi_v0_2 & ~0x10;
    D_801B9F10 = temp_v0_2;
    if (camera->status == 7) {
        if (temp_v0_2 != 1) {
            if (temp_v0_2 != 2) {
                if (temp_v0_2 != 4) {
                    D_801B9F10 = temp_v0_2;
                    if (temp_v0_2 != 8) {

                    } else {
                        camera = camera;
                        play_sound(0x480CU);
                        goto block_54;
                    }
                } else {
                    D_801B9F10 = temp_v0_2;
                    camera = camera;
                    play_sound(0x4837U);
                    goto block_54;
                }
            } else {
                D_801B9F10 = temp_v0_2;
                if (camera->globalCtx->roomCtx.currRoom.unk3 == 1) {
                    camera = camera;
                    play_sound(0x4837U);
                } else {
                    camera = camera;
                    play_sound(0x480CU);
                }
                goto block_54;
            }
        } else {
            D_801B9F10 = temp_v0_2;
            camera = camera;
            play_sound(0U);
block_54:
        }
    }
    camera = camera;
    func_800DF498(camera);
    camera->mode = mode;
    phi_at = 0x80000000;
block_56:
    return mode | phi_at;
}

void func_800DF840(Camera *arg0, s16 arg1) {
    Camera_SetMode(arg0, arg1, 0);
}

s32 func_800DF86C(void *arg0, s16 arg1) {
    if ((arg0->unk_14C & 0x20) != 0) {
        return 0;
    }
    if ((cameraStates[arg0->unk_142].validModes & (1 << arg1)) == 0) {
        return 0;
    }
    if (arg1 == arg0->unk_144) {
        return -1;
    }
    return arg1 | 0x80000000;
}

s16 func_800DF8EC(Camera *arg0, s16 arg1, s16 arg2) {
    Camera *temp_a0;
    CameraStateParams *temp_a1;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v1;

    temp_a3 = arg1;
    temp_a2 = arg2;
    temp_v0 = arg0->flags1;
    if (((temp_v0 & 1) != 0) && ((u32) (cameraStates[arg0->setting].unk_4 & 0xF) >= (u32) (cameraStates[temp_a3].unk_4 & 0xF))) {
        arg0->flags1 = temp_v0 | 0x10;
        if ((temp_a2 & 2) == 0) {
            arg0->flags1 |= 1;
        }
        return -2;
    }
    if (temp_a3 == 0) {
        return 0;
    }
    if ((s32) temp_a3 >= 0x5B) {
        return -0x63;
    }
    if ((temp_a3 == arg0->setting) && ((temp_a2 & 1) == 0)) {
        arg0->flags1 = temp_v0 | 0x10;
        if ((temp_a2 & 2) == 0) {
            arg0->flags1 |= 1;
        }
        return -1;
    }
    arg0->flags1 = temp_v0 | 0x10;
    if ((temp_a2 & 2) == 0) {
        arg0->flags1 |= 1;
    }
    arg2 = temp_a2;
    arg1 = temp_a3;
    func_800DF498((Camera *) temp_a2, temp_a3);
    temp_a0 = arg0;
    temp_v1 = temp_a0->setting;
    temp_a1 = &cameraStates[temp_v1];
    if ((temp_a1->unk_4 * 2) >= 0) {
        temp_a0->prevSetting = temp_v1;
    }
    if ((arg2 & 8) != 0) {
        temp_t1 = temp_a0->prevCamDataIdx;
        temp_a0->prevCamDataIdx = -1;
        temp_a0->camDataIdx = temp_t1;
    } else if ((arg2 & 4) == 0) {
        if ((temp_a1->unk_4 & 0x40000000) == 0) {
            temp_a0->prevCamDataIdx = temp_a0->camDataIdx;
        }
        temp_a0->camDataIdx = -1;
    }
    temp_a0->setting = arg1;
    temp_a1_2 = temp_a0->mode;
    arg1 = arg1;
    arg0 = temp_a0;
    if (Camera_SetMode(temp_a0, temp_a1_2, 1) >= 0) {
        arg1 = arg1;
        func_800CD2E0(arg0, arg0->mode);
    }
    return arg1;
}

s32 func_800DFAC8(Camera *camera, s16 param_2) {
    s32 temp_v0;

    temp_v0 = func_800DF8EC(camera, param_2, 0);
    if (temp_v0 >= 0) {
        camera->camDataIdx = -1;
    }
    return temp_v0;
}

u32 func_800DFB14(Camera *camera, u32 param_2) {
    s16 phi_a1;

    if ((param_2 == -1) || (param_2 == camera->camDataIdx)) {
        camera->flags1 |= 0x40;
        return -1U;
    }
    if ((s32) param_2 < 0) {
        phi_a1 = *(D_801B9CE4 + (param_2 * 2));
        goto block_8;
    }
    if ((camera->flags1 & 0x40) == 0) {
        phi_a1 = func_800CC740((void *) param_2);
block_8:
        camera->flags1 |= 0x40;
        camera = camera;
        if ((func_800DF8EC(camera, phi_a1, 5) >= 0) || (*(&cameraStates->unk_4 + (camera->setting * 0xC)) & 0x80000000)) {
            camera->camDataIdx = (s16) param_2;
            camera->flags1 |= 4;
            func_800CD2E0(camera, camera->mode);
        }
        return param_2 | 0x80000000;
    }
    return -1U;
}

s16 *func_800DFC1C(s16 *arg0, Camera *arg1) {
    arg0->unk_0 = (unaligned s32) arg1->unk_134;
    arg0[2] = arg1->inputDir.z;
    return arg0;
}

s16 func_800DFC40(Camera *arg0) {
    s16 sp18;

    func_800DFC1C(&sp18, arg0);
    return sp18;
}

s32 func_800DFC68(Camera *camera) {
    s16 sp18;

    func_800DFC1C(&sp18, camera);
    return (s32) sp1A;
}

s16 *func_800DFC90(s16 *arg0, Camera *arg1) {
    arg0->unk_0 = (unaligned s32) arg1->unk_13A;
    arg0[2] = arg1->camDir.z;
    return arg0;
}

s16 func_800DFCB4(Camera *camera) {
    s16 sp18;

    func_800DFC90(&sp18, camera);
    return sp18;
}

s16 func_800DFCDC(Camera *camera) {
    s16 sp18;

    func_800DFC90(&sp18, camera);
    return sp1A;
}

? func_800DFD04(Camera *arg0, ? arg1, s16 arg2, s16 arg3) {
    s16 sp26;
    s16 temp_v0;

    temp_v0 = Quake_Add(arg0, 3U);
    if (temp_v0 == 0) {
        return 0;
    }
    sp26 = temp_v0;
    Quake_SetSpeed(temp_v0, 0x61A8);
    Quake_SetQuakeValues(temp_v0, arg2, 0, 0, (s16) 0);
    Quake_SetCountdown(temp_v0, arg3);
    return 1;
}

? func_800DFD78(void *arg0, s32 arg1, void *arg2) {
    ? sp4;

    if (arg2 != 0) {
        if (arg1 >= 0x21) {
            if (arg1 != 0x40) {
                return 0;
            }
            arg0->unk_15A = (s16) (s32) ((arg2->unk_0 * 182.04167f) + 0.5f);
            goto block_7;
        }
        switch (arg1) {
        case 1:
            arg0->unk_15C = (s16) (arg0->unk_15C & 0xFFE6);
            arg0->unk_50 = (f32) arg2->unk_0;
            arg0->unk_54 = (s32) arg2->unk_4;
            arg0->unk_58 = (s32) arg2->unk_8;
block_7:
            arg0->unk_15C = (s16) (arg0->unk_15C | arg1);
            return 1;
        case 16:
            arg0->unk_15C = (s16) (arg0->unk_15C & 0xFFE6);
            arg0->unk_AC = (f32) arg2->unk_0;
            arg0->unk_B0 = (s32) arg2->unk_4;
            arg0->unk_B4 = (s32) arg2->unk_8;
            goto block_7;
        case 8:
            arg0->unk_A8 = arg2;
            arg0->unk_15C = (s16) (arg0->unk_15C & 0xFFE6);
            goto block_7;
        case 2:
            sp4.unk_0 = (f32) arg2->unk_0;
            sp4.unk_4 = (s32) arg2->unk_4;
            sp4.unk_8 = (s32) arg2->unk_8;
            arg0->unk_74 = (f32) sp4.unk_0;
            arg0->unk_78 = (s32) sp4.unk_4;
            arg0->unk_7C = (s32) sp4.unk_8;
            arg0->unk_5C = (f32) sp4.unk_0;
            arg0->unk_60 = (s32) sp4.unk_4;
            arg0->unk_64 = (s32) sp4.unk_8;
            goto block_7;
        case 4:
            arg0->unk_68 = (f32) arg2->unk_0;
            arg0->unk_6C = (s32) arg2->unk_4;
            arg0->unk_70 = (s32) arg2->unk_8;
            goto block_7;
        case 32:
            arg0->unk_FC = (f32) arg2->unk_0;
            goto block_7;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}

? func_800DFEF0(void *arg0, s16 arg1) {
    arg0->unk_15C = (s16) (arg0->unk_15C & ~arg1);
    return 1;
}

? func_800DFF18(void *arg0, s16 arg1) {
    arg0->unk_14C = arg1;
    return 1;
}

? func_800DFF34(void *arg0) {
    arg0->unk_15E = 0;
    return 1;
}

? func_800DFF44(s32 arg0, ? arg1, ? arg2, ? arg3) {
    return 1;
}

s16 Camera_SetFlags(Camera *iParm1, s16 flags) {
    iParm1->flags2 |= flags;
    return iParm1->flags2;
}

s16 Camera_ClearFlags(Camera *camera, s16 flags) {
    camera->flags2 &= ~flags;
    return camera->flags2;
}

? func_800DFFAC(Camera *arg0, s32 arg1, s16 arg2, ? arg3, s16 arg4, s16 arg5, s16 arg6) {
    if (arg0->setting == 8) {
        return 0;
    }
    arg0->unk_0 = arg1;
    arg0->unk_6 = arg4;
    arg0->unk_8 = arg5;
    arg0->unk_4 = arg2;
    arg0->unk_A = arg6;
    if (arg2 == -0x63) {
        func_800CD2E0((Camera *) arg0->mode, arg2, arg6);
        return -0x63;
    }
    if (arg2 == -1) {
        func_800DF8EC((Camera *)8, 0, arg6);
    } else if (arg2 == -2) {
        func_800DF8EC((Camera *)0x10, 0, arg6);
    } else {
        arg0->nextCamDataIdx = arg2;
        arg0->unk150 = arg4;
        arg0->timer = arg5 + arg6;
    }
    func_800CD2E0(arg0, arg0->mode);
    return -1;
}

? func_800E007C(Camera *arg0, void *arg1) {
    ? sp28;
    PosRot *sp20;
    Player *temp_a1_2;
    PosRot *temp_a2;
    PosRot *temp_a2_2;
    Vec3f *temp_a0;
    Vec3f *temp_a1;

    arg0->posOffset.z = 0.0f;
    arg0->posOffset.y = 0.0f;
    arg0->posOffset.x = 0.0f;
    temp_a0 = arg0 + 0x50;
    temp_a1 = arg0 + 0x5C;
    arg0->atLERPStepScale = 0.1f;
    temp_a0->x = arg1->unk_50;
    temp_a0->y = arg1->unk_54;
    temp_a0->z = arg1->unk_58;
    sp28.unk_0 = (s32) arg1->unk_5C;
    sp28.unk_4 = (s32) arg1->unk_60;
    sp28.unk_8 = (s32) arg1->unk_64;
    arg0->eyeNext.x = sp28.unk_0;
    arg0->eyeNext.y = sp28.unk_4;
    arg0->eyeNext.z = sp28.unk_8;
    temp_a1->x = sp28.unk_0;
    temp_a1->y = sp28.unk_4;
    temp_a1->z = sp28.unk_8;
    arg1 = arg1;
    arg0->dist = OLib_Vec3fDist(temp_a0, temp_a1);
    arg0->fov = arg1->unk_FC;
    arg0->roll = arg1->unk_15A;
    func_800CB5DC(arg0);
    temp_a1_2 = arg0->player;
    if (temp_a1_2 != 0) {
        temp_a2 = &arg0->playerPosRot;
        if (temp_a1_2 == arg0->globalCtx->actorCtx.actorList[2].first) {
            temp_a2_2 = &arg0->playerPosRot;
            sp20 = temp_a2_2;
            func_800B8248(temp_a2_2, temp_a1_2);
        } else {
            sp20 = temp_a2;
            func_800B8214(temp_a2, (Actor *) temp_a1_2);
        }
        func_800CB6C8(arg0, sp20, sp20);
    }
    return 1;
}

? func_800E01AC(void) {
    return 0;
}

void *func_800E01B8(void *arg0, void *arg1) {
    arg0->unk_0 = (s32) arg1->unk_80;
    arg0->unk_4 = (s32) arg1->unk_84;
    arg0->unk_8 = (s32) arg1->unk_88;
    return arg0;
}

void func_800E01DC(void *arg0, s16 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5) {
    if ((arg1 & 1) != 0) {
        arg0->unk_124 = arg2;
    }
    if ((arg1 & 2) != 0) {
        arg0->unk_128 = arg3;
    }
    if ((arg1 & 4) != 0) {
        arg0->unk_12C = arg4;
    }
    if ((arg1 & 8) != 0) {
        arg0->unk_12E = arg5;
    }
}

s32 func_800E0228(void) {
    return D_801B9E14;
}

s16 func_800E0238(Camera *arg0) {
    Camera *temp_a0;
    Camera *temp_a0_2;
    GlobalContext *temp_v0;
    s16 temp_a3;
    s16 temp_v1;

    temp_a0 = arg0;
    arg0 = arg0;
    Camera_SetFlags(temp_a0, 8);
    temp_v1 = arg0->thisIdx;
    if ((temp_v1 == 0) && (temp_v0 = arg0->globalCtx, temp_a3 = temp_v0->activeCamera, (temp_a3 != 0))) {
        temp_a0_2 = temp_v0->cameraPtrs[temp_a3];
        arg0 = arg0;
        Camera_SetFlags(temp_a0_2, 8);
        return arg0->globalCtx->activeCamera;
    }
    return temp_v1;
}

void func_800E02AC(Camera *camera, Actor *actor) {
    Player *temp_a1;
    PosRot *temp_a0;
    PosRot *temp_a0_2;

    camera->player = (Player *) actor;
    temp_a0 = &camera->playerPosRot;
    if (actor == camera->globalCtx->actorCtx.actorList[2].first) {
        temp_a0_2 = &camera->playerPosRot;
        camera = camera;
        func_800B8248(temp_a0_2, (Player *) actor);
    } else {
        temp_a1 = camera->player;
        camera = camera;
        func_800B8214(temp_a0, (Actor *) temp_a1);
    }
    camera->animState = 0;
}

void func_800E0308(void *arg0, s32 arg1) {
    arg0->unk_A8 = arg1;
    arg0->unk_15E = 0x14;
}

f32 func_800E031C(void *arg0) {
    if ((arg0->unk_14C & 0x100) != 0) {
        return arg0->unk_114;
    }
    return -32000.0f;
}

void func_800E0348(Camera *camera) {
    s16 temp_v0;

    temp_v0 = camera->animState;
    if ((temp_v0 != 0) && (temp_v0 != 0xA) && (temp_v0 != 0x14)) {
        camera->animState = 0x3E7;
        Camera_SetFlags(camera, 0x416);
        return;
    }
    camera->animState = 0x29A;
}
