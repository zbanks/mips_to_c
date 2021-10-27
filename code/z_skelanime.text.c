struct _mips2c_stack_SkelAnime_AnimReverse {};      /* size 0x0 */

struct _mips2c_stack_SkelAnime_AnimSetStop {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_AnimateFrame {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_AnimationCtxReset {}; /* size 0x0 */

struct _mips2c_stack_SkelAnime_AnimationType1Loaded {}; /* size 0x0 */

struct _mips2c_stack_SkelAnime_AnimationType2Loaded {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_AnimationType3Loaded {}; /* size 0x0 */

struct _mips2c_stack_SkelAnime_AnimationType4Loaded {}; /* size 0x0 */

struct _mips2c_stack_SkelAnime_AnimationType5Loaded {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_SkelAnime_ChangeAnim {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeAnimDefaultRepeat {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeAnimDefaultStop {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeAnimImpl {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_SkelAnime_ChangeAnimPlaybackRepeat {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeAnimPlaybackStop {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeAnimTransitionRepeat {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeAnimTransitionStop {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeLinkAnim {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeLinkAnimDefaultRepeat {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeLinkAnimDefaultStop {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeLinkAnimPlaybackRepeat {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_ChangeLinkAnimPlaybackStop {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SkelAnime_CopyVec3s {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x8];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_SkelAnime_Draw2 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x8];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ void *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_SkelAnime_Draw2Limb {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x8];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_SkelAnime_DrawLimb {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x8];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_SkelAnime_DrawLimbSV {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x8];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_SkelAnime_DrawLimbSV2 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x8];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_SkelAnime_DrawSV {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x8];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ Gfx *sp64;                           /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ void *sp6C;                          /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_SkelAnime_DrawSV2 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0x8];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ Gfx *sp64;                           /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ void *sp6C;                          /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_SkelAnime_FrameUpdateMatrix {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_Free {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_GetFrameCount {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_GetFrameCount2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_GetTotalFrames {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_GetTotalFrames2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_SkelAnime_InitLinkAnimetion {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_SkelAnime_InitSV {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_SkelAnime_InitSkin {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_SkelAnime_InterpolateVec3s {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_SkelAnime_LinkAnimetionLoaded {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_LoadAnimationType1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_LoadAnimationType2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_LoadAnimationType3 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_LoadAnimationType4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_LoadAnimationType5 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_LoadLinkAnimetion {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ u8 *sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ AnimationEntry *sp34;                /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_SkelAnime_LodDraw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x8];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_SkelAnime_LodDrawLimb {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x8];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_SkelAnime_LodDrawLimbSV {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x8];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ void *sp64;                          /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_SkelAnime_LodDrawSV {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ GraphicsContext *sp4C;               /* inferred */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x8];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ Gfx *sp6C;                           /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ void *sp74;                          /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_SkelAnime_NextEntry {};        /* size 0x0 */

struct _mips2c_stack_SkelAnime_SetModeStop {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SkelAnime_SetTransition {};    /* size 0x0 */

struct _mips2c_stack_func_80134148 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x8];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ void *sp64;                          /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_801343C0 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ GraphicsContext *sp4C;               /* inferred */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x8];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ Gfx *sp6C;                           /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ void *sp74;                          /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80134FFC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x2];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801353D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801358D4 {};              /* size 0x0 */

struct _mips2c_stack_func_801358F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80135EE8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801360A8 {};              /* size 0x0 */

struct _mips2c_stack_func_801360E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80136104 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_801361BC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80136288 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013631C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013670C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013673C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013676C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_801367B0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_801367F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8013682C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_801368CC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80136990 {};              /* size 0x0 */

struct _mips2c_stack_func_80136A48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80136C84 {};              /* size 0x0 */

struct _mips2c_stack_func_80136CF4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80136D98 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80136F04 {
    /* 0x000 */ char pad_0[0x30];
    /* 0x030 */ f32 sp30;                           /* inferred */
    /* 0x034 */ char pad_34[0x4];
    /* 0x038 */ ? sp38;                             /* inferred */
    /* 0x038 */ char pad_38[0x258];
};                                                  /* size = 0x290 */

struct _mips2c_stack_func_8013702C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801370B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8013713C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80137674 {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_801376DC {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_80137748 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801378B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void *D_801C5CB0 = (void *) SkelAnime_LinkAnimetionLoaded;
s32 D_801F5AB0;
s32 D_801F5AB4;
f32 gFramerateDivisorHalf = 0.5f;
f32 gFramerateDivisorThird = 0.33333334f;

void SkelAnime_LodDrawLimb(GlobalContext *globalCtx, s32 limbIndex, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), Actor *actor, s32 dListIndex) {
    void *sp5C;
    Gfx *sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    ? sp44;
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx **temp_a2;
    Gfx *temp_v1;
    f32 *temp_a3;
    s32 temp_t3;
    s32 temp_t6;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t7;
    void *temp_v0;

    sp40 = globalCtx->state.gfxCtx;
    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(skeleton[limbIndex]);
    sp5C = temp_v0;
    temp_t3 = limbIndex + 1;
    temp_t6 = temp_t3 * 6;
    limbIndex = temp_t3;
    temp_t7 = limbDrawTable + temp_t6;
    temp_a2 = &sp58;
    sp44.unk_0 = (s32) (unaligned s32) temp_t7->unk_0;
    temp_a3 = &sp4C;
    sp44.unk_4 = (u16) temp_t7->unk_4;
    sp4C = (f32) temp_v0->unk_0;
    sp50 = (f32) temp_v0->unk_2;
    sp54 = (f32) temp_v0->unk_4;
    sp58 = (temp_v0 + (dListIndex * 4))->unk_8;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, limbIndex, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp44, actor) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp4C, (Vec3s *) &sp44);
        if (sp58 != 0) {
            temp_v1 = sp40->polyOpa.p;
            temp_v1->words.w0 = 0xDA380003;
            sp38 = temp_v1;
            temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1[1].words.w0 = 0xDE000000;
            temp_v1[1].words.w1 = (u32) sp58;
            sp40->polyOpa.p = &temp_v1[2];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, limbIndex, &sp58, (Vec3s *) &sp44, actor);
    }
    temp_a1 = sp5C->unk_6;
    if (temp_a1 != 0xFF) {
        SkelAnime_LodDrawLimb(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, dListIndex);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp5C->unk_7;
    if (temp_a1_2 != 0xFF) {
        SkelAnime_LodDrawLimb(globalCtx, (s32) temp_a1_2, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, dListIndex);
    }
}

void SkelAnime_LodDraw(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), Actor *actor, s32 dListIndex) {
    void *sp5C;
    Gfx *sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ? sp40;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx **temp_a2;
    Gfx *temp_v1;
    f32 *temp_a3;
    u8 temp_a1;
    void *temp_v0;

    if (skeleton != 0) {
        sp3C = globalCtx->state.gfxCtx;
        SysMatrix_StatePush();
        temp_v0 = Lib_SegmentedToVirtual(*skeleton);
        sp5C = temp_v0;
        temp_a2 = &sp54;
        temp_a3 = &sp48;
        sp48 = (f32) limbDrawTable->x;
        sp4C = (f32) limbDrawTable->y;
        sp50 = (f32) limbDrawTable->z;
        sp40.unk_0 = (s32) (unaligned s32) limbDrawTable->unk_6;
        sp40.unk_4 = (u16) limbDrawTable[1].z;
        sp54 = (temp_v0 + (dListIndex * 4))->unk_8;
        if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, 1, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp40, actor) == 0)) {
            SysMatrix_RotateAndTranslateState((Vec3f *) &sp48, (Vec3s *) &sp40);
            if (sp54 != 0) {
                temp_v1 = sp3C->polyOpa.p;
                temp_v1->words.w0 = 0xDA380003;
                sp34 = temp_v1;
                temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v1[1].words.w0 = 0xDE000000;
                temp_v1[1].words.w1 = (u32) sp54;
                sp3C->polyOpa.p = &temp_v1[2];
            }
        }
        if (postLimbDraw != 0) {
            postLimbDraw(globalCtx, 1, &sp54, (Vec3s *) &sp40, actor);
        }
        temp_a1 = sp5C->unk_6;
        if (temp_a1 != 0xFF) {
            SkelAnime_LodDrawLimb(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, dListIndex);
        }
        SysMatrix_StatePop();
    }
}

void SkelAnime_LodDrawLimbSV(GlobalContext *globalCtx, s32 limbIndex, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Gfx **, Vec3s *, Actor *), Actor *actor, s32 dListIndex, RSPMatrix **mtx) {
    void *sp64;
    Gfx *sp60;
    Gfx *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    ? sp48;
    GraphicsContext *sp44;
    Gfx **temp_a2;
    Gfx *temp_t4;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    f32 *temp_a3;
    s32 temp_t3;
    s32 temp_t6;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t7;
    void *temp_v0;

    sp44 = globalCtx->state.gfxCtx;
    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(skeleton[limbIndex]);
    sp64 = temp_v0;
    temp_t3 = limbIndex + 1;
    temp_t6 = temp_t3 * 6;
    limbIndex = temp_t3;
    temp_t7 = limbDrawTable + temp_t6;
    temp_a2 = &sp60;
    sp48.unk_0 = (s32) (unaligned s32) temp_t7->unk_0;
    temp_a3 = &sp50;
    sp48.unk_4 = (u16) temp_t7->unk_4;
    sp50 = (f32) temp_v0->unk_0;
    sp54 = (f32) temp_v0->unk_2;
    sp58 = (f32) temp_v0->unk_4;
    temp_t4 = (temp_v0 + (dListIndex * 4))->unk_8;
    sp5C = temp_t4;
    sp60 = temp_t4;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, limbIndex, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp48, actor) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp50, (Vec3s *) &sp48);
        if (sp60 != 0) {
            SysMatrix_GetStateAsRSPMatrix(*mtx);
            temp_v1 = sp44->polyOpa.p;
            sp44->polyOpa.p = &temp_v1[1];
            temp_v1->words.w0 = 0xDA380003;
            temp_v1->words.w1 = (u32) *mtx;
            temp_v1_2 = sp44->polyOpa.p;
            sp44->polyOpa.p = &temp_v1_2[1];
            temp_v1_2->words.w0 = 0xDE000000;
            temp_v1_2->words.w1 = (u32) sp60;
            *mtx = &(*mtx)[1];
        } else if (sp5C != 0) {
            SysMatrix_GetStateAsRSPMatrix(*mtx);
            *mtx = &(*mtx)[1];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, limbIndex, &sp60, &sp5C, (Vec3s *) &sp48, actor);
    }
    temp_a1 = sp64->unk_6;
    if (temp_a1 != 0xFF) {
        SkelAnime_LodDrawLimbSV(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, dListIndex, mtx);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp64->unk_7;
    if (temp_a1_2 != 0xFF) {
        SkelAnime_LodDrawLimbSV(globalCtx, (s32) temp_a1_2, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, dListIndex, mtx);
    }
}

void SkelAnime_LodDrawSV(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 dListCount, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Gfx **, Vec3s *, Actor *), Actor *actor, s32 dListIndex) {
    void *sp74;
    Gfx *sp6C;
    Gfx *sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    ? sp54;
    Gfx *sp50;
    GraphicsContext *sp4C;
    Gfx *sp40;
    Gfx **temp_a2;
    Gfx *temp_t6;
    Gfx *temp_v0;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_v1;
    f32 *temp_a3;
    u8 temp_a1;
    void *temp_v0_2;

    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyOpa.d - (((dListCount << 6) + 0xF) & ~0xF);
    temp_v1->polyOpa.d = temp_v0;
    sp50 = temp_v0;
    if (skeleton != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_v1_2 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xDB060034;
        temp_v1_2->words.w1 = (u32) sp50;
        sp4C = temp_a0;
        SysMatrix_StatePush();
        temp_v0_2 = Lib_SegmentedToVirtual(*skeleton);
        sp74 = temp_v0_2;
        temp_a2 = &sp6C;
        temp_a3 = &sp5C;
        sp5C = (f32) limbDrawTable->x;
        sp60 = (f32) limbDrawTable->y;
        sp64 = (f32) limbDrawTable->z;
        sp54.unk_0 = (s32) (unaligned s32) limbDrawTable->unk_6;
        sp54.unk_4 = (u16) limbDrawTable[1].z;
        temp_t6 = (temp_v0_2 + (dListIndex * 4))->unk_8;
        sp68 = temp_t6;
        sp6C = temp_t6;
        if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, 1, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp54, actor) == 0)) {
            SysMatrix_RotateAndTranslateState((Vec3f *) &sp5C, (Vec3s *) &sp54);
            if (sp6C != 0) {
                temp_v1_3 = sp4C->polyOpa.p;
                temp_v1_3->words.w0 = 0xDA380003;
                sp40 = temp_v1_3;
                temp_v1_3->words.w1 = SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp50);
                temp_v1_3[1].words.w0 = 0xDE000000;
                temp_v1_3[1].words.w1 = (u32) sp6C;
                sp4C->polyOpa.p = &temp_v1_3[2];
                sp50 = &sp50[8];
            } else if (sp68 != 0) {
                SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp50);
                sp50 = &sp50[8];
            }
        }
        if (postLimbDraw != 0) {
            postLimbDraw(globalCtx, 1, &sp6C, &sp68, (Vec3s *) &sp54, actor);
        }
        temp_a1 = sp74->unk_6;
        if (temp_a1 != 0xFF) {
            SkelAnime_LodDrawLimbSV(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, dListIndex, (RSPMatrix **) &sp50);
        }
        SysMatrix_StatePop();
    }
}

void SkelAnime_DrawLimb(GlobalContext *globalCtx, s32 limbIndex, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), Actor *actor) {
    void *sp5C;
    Gfx *sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    ? sp44;
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx **temp_a2;
    Gfx *temp_v1;
    f32 *temp_a3;
    s32 temp_t3;
    s32 temp_t6;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t7;
    void *temp_v0;

    sp40 = globalCtx->state.gfxCtx;
    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(skeleton[limbIndex]);
    sp5C = temp_v0;
    temp_t3 = limbIndex + 1;
    temp_t6 = temp_t3 * 6;
    limbIndex = temp_t3;
    temp_t7 = limbDrawTable + temp_t6;
    sp44.unk_0 = (s32) (unaligned s32) temp_t7->unk_0;
    temp_a2 = &sp58;
    temp_a3 = &sp4C;
    sp44.unk_4 = (u16) temp_t7->unk_4;
    sp4C = (f32) temp_v0->unk_0;
    sp50 = (f32) temp_v0->unk_2;
    sp54 = (f32) temp_v0->unk_4;
    sp58 = temp_v0->unk_8;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, limbIndex, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp44, actor) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp4C, (Vec3s *) &sp44);
        if (sp58 != 0) {
            temp_v1 = sp40->polyOpa.p;
            temp_v1->words.w0 = 0xDA380003;
            sp38 = temp_v1;
            temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v1[1].words.w0 = 0xDE000000;
            temp_v1[1].words.w1 = (u32) sp58;
            sp40->polyOpa.p = &temp_v1[2];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, limbIndex, &sp58, (Vec3s *) &sp44, actor);
    }
    temp_a1 = sp5C->unk_6;
    if (temp_a1 != 0xFF) {
        SkelAnime_DrawLimb(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp5C->unk_7;
    if (temp_a1_2 != 0xFF) {
        SkelAnime_DrawLimb(globalCtx, (s32) temp_a1_2, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor);
    }
}

void SkelAnime_Draw(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), Actor *actor) {
    void *sp5C;
    Gfx *sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ? sp40;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx **temp_a2;
    Gfx *temp_v1;
    f32 *temp_a3;
    u8 temp_a1;
    void *temp_v0;

    if (skeleton != 0) {
        sp3C = globalCtx->state.gfxCtx;
        SysMatrix_StatePush();
        temp_v0 = Lib_SegmentedToVirtual(*skeleton);
        sp5C = temp_v0;
        temp_a2 = &sp54;
        temp_a3 = &sp48;
        sp48 = (f32) limbDrawTable->x;
        sp4C = (f32) limbDrawTable->y;
        sp50 = (f32) limbDrawTable->z;
        sp40.unk_0 = (s32) (unaligned s32) limbDrawTable->unk_6;
        sp40.unk_4 = (u16) limbDrawTable[1].z;
        sp54 = temp_v0->unk_8;
        if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, 1, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp40, actor) == 0)) {
            SysMatrix_RotateAndTranslateState((Vec3f *) &sp48, (Vec3s *) &sp40);
            if (sp54 != 0) {
                temp_v1 = sp3C->polyOpa.p;
                temp_v1->words.w0 = 0xDA380003;
                sp34 = temp_v1;
                temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v1[1].words.w0 = 0xDE000000;
                temp_v1[1].words.w1 = (u32) sp54;
                sp3C->polyOpa.p = &temp_v1[2];
            }
        }
        if (postLimbDraw != 0) {
            postLimbDraw(globalCtx, 1, &sp54, (Vec3s *) &sp40, actor);
        }
        temp_a1 = sp5C->unk_6;
        if (temp_a1 != 0xFF) {
            SkelAnime_DrawLimb(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor);
        }
        SysMatrix_StatePop();
    }
}

void SkelAnime_DrawLimbSV(GlobalContext *globalCtx, s32 limbIndex, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), Actor *actor, RSPMatrix **limbMatricies) {
    void *sp5C;
    Gfx *sp58;
    Gfx *sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ? sp40;
    GraphicsContext *sp3C;
    Gfx **temp_a2;
    Gfx *temp_t3_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    f32 *temp_a3;
    s32 temp_t3;
    s32 temp_t6;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t7;
    void *temp_v0;

    sp3C = globalCtx->state.gfxCtx;
    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(skeleton[limbIndex]);
    sp5C = temp_v0;
    temp_t3 = limbIndex + 1;
    temp_t6 = temp_t3 * 6;
    limbIndex = temp_t3;
    temp_t7 = limbDrawTable + temp_t6;
    temp_a2 = &sp58;
    sp40.unk_0 = (s32) (unaligned s32) temp_t7->unk_0;
    temp_a3 = &sp48;
    sp40.unk_4 = (u16) temp_t7->unk_4;
    sp48 = (f32) temp_v0->unk_0;
    sp4C = (f32) temp_v0->unk_2;
    sp50 = (f32) temp_v0->unk_4;
    temp_t3_2 = temp_v0->unk_8;
    sp54 = temp_t3_2;
    sp58 = temp_t3_2;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, limbIndex, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp40, actor) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp48, (Vec3s *) &sp40);
        if (sp58 != 0) {
            SysMatrix_GetStateAsRSPMatrix(*limbMatricies);
            temp_v1 = sp3C->polyOpa.p;
            sp3C->polyOpa.p = &temp_v1[1];
            temp_v1->words.w0 = 0xDA380003;
            temp_v1->words.w1 = (u32) *limbMatricies;
            temp_v1_2 = sp3C->polyOpa.p;
            sp3C->polyOpa.p = &temp_v1_2[1];
            temp_v1_2->words.w0 = 0xDE000000;
            temp_v1_2->words.w1 = (u32) sp58;
            *limbMatricies = &(*limbMatricies)[1];
        } else if (sp54 != 0) {
            SysMatrix_GetStateAsRSPMatrix(*limbMatricies);
            *limbMatricies = &(*limbMatricies)[1];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, limbIndex, &sp54, (Vec3s *) &sp40, actor);
    }
    temp_a1 = sp5C->unk_6;
    if (temp_a1 != 0xFF) {
        SkelAnime_DrawLimbSV(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, limbMatricies);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp5C->unk_7;
    if (temp_a1_2 != 0xFF) {
        SkelAnime_DrawLimbSV(globalCtx, (s32) temp_a1_2, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, limbMatricies);
    }
}

void SkelAnime_DrawSV(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 dListCount, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), Actor *actor) {
    void *sp6C;
    Gfx *sp64;
    Gfx *sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp4C;
    Gfx *sp48;
    GraphicsContext *sp44;
    Gfx *sp38;
    Gfx **temp_a2;
    Gfx *temp_t3;
    Gfx *temp_v0;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_v1;
    f32 *temp_a3;
    u8 temp_a1;
    void *temp_v0_2;

    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyOpa.d - (((dListCount << 6) + 0xF) & ~0xF);
    temp_v1->polyOpa.d = temp_v0;
    sp48 = temp_v0;
    if (skeleton != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_v1_2 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xDB060034;
        temp_v1_2->words.w1 = (u32) sp48;
        sp44 = temp_a0;
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
        temp_t3 = temp_v0_2->unk_8;
        sp60 = temp_t3;
        sp64 = temp_t3;
        if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, 1, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp4C, actor) == 0)) {
            SysMatrix_RotateAndTranslateState((Vec3f *) &sp54, (Vec3s *) &sp4C);
            if (sp64 != 0) {
                temp_v1_3 = sp44->polyOpa.p;
                temp_v1_3->words.w0 = 0xDA380003;
                sp38 = temp_v1_3;
                temp_v1_3->words.w1 = SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp48);
                temp_v1_3[1].words.w0 = 0xDE000000;
                temp_v1_3[1].words.w1 = (u32) sp64;
                sp44->polyOpa.p = &temp_v1_3[2];
                sp48 = &sp48[8];
            } else if (sp60 != 0) {
                SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp48);
                sp48 = &sp48[8];
            }
        }
        if (postLimbDraw != 0) {
            postLimbDraw(globalCtx, 1, &sp60, (Vec3s *) &sp4C, actor);
        }
        temp_a1 = sp6C->unk_6;
        if (temp_a1 != 0xFF) {
            SkelAnime_DrawLimbSV(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, (RSPMatrix **) &sp48);
        }
        SysMatrix_StatePop();
    }
}

void func_80134148(GlobalContext *globalCtx, s32 limbIndex, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), void (*unkDraw)(GlobalContext *, s32, Actor *), Actor *actor, RSPMatrix **mtx) {
    void *sp64;
    Gfx *sp60;
    Gfx *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    ? sp48;
    GraphicsContext *sp44;
    Gfx *sp3C;
    Gfx **temp_a2;
    Gfx *temp_t3_2;
    Gfx *temp_v1;
    f32 *temp_a3;
    s32 temp_t3;
    s32 temp_t6;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t7;
    void *temp_v0;

    sp44 = globalCtx->state.gfxCtx;
    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(skeleton[limbIndex]);
    sp64 = temp_v0;
    temp_t3 = limbIndex + 1;
    temp_t6 = temp_t3 * 6;
    limbIndex = temp_t3;
    temp_t7 = limbDrawTable + temp_t6;
    temp_a2 = &sp60;
    sp48.unk_0 = (s32) (unaligned s32) temp_t7->unk_0;
    temp_a3 = &sp50;
    sp48.unk_4 = (u16) temp_t7->unk_4;
    sp50 = (f32) temp_v0->unk_0;
    sp54 = (f32) temp_v0->unk_2;
    sp58 = (f32) temp_v0->unk_4;
    temp_t3_2 = temp_v0->unk_8;
    sp5C = temp_t3_2;
    sp60 = temp_t3_2;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, limbIndex, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp48, actor) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp50, (Vec3s *) &sp48);
        SysMatrix_StatePush();
        unkDraw(globalCtx, limbIndex, actor);
        if (sp60 != 0) {
            temp_v1 = sp44->polyOpa.p;
            temp_v1->words.w0 = 0xDA380003;
            sp3C = temp_v1;
            temp_v1->words.w1 = SysMatrix_GetStateAsRSPMatrix(*mtx);
            temp_v1[1].words.w0 = 0xDE000000;
            temp_v1[1].words.w1 = (u32) sp60;
            sp44->polyOpa.p = &temp_v1[2];
            *mtx = &(*mtx)[1];
        } else if (sp5C != 0) {
            SysMatrix_GetStateAsRSPMatrix(*mtx);
            *mtx = &(*mtx)[1];
        }
        SysMatrix_StatePop();
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, limbIndex, &sp5C, (Vec3s *) &sp48, actor);
    }
    temp_a1 = sp64->unk_6;
    if (temp_a1 != 0xFF) {
        func_80134148(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, unkDraw, actor, mtx);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp64->unk_7;
    if (temp_a1_2 != 0xFF) {
        func_80134148(globalCtx, (s32) temp_a1_2, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, unkDraw, actor, mtx);
    }
}

void func_801343C0(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 dListCount, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *), void (*unkDraw)(GlobalContext *, s32, Actor *), Actor *actor) {
    void *sp74;
    Gfx *sp6C;
    Gfx *sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    ? sp54;
    Gfx *sp50;
    GraphicsContext *sp4C;
    Gfx *sp40;
    Gfx **temp_a2;
    Gfx *temp_a0_2;
    Gfx *temp_t2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    f32 *temp_a3;
    u8 temp_a1;
    void *temp_v0;

    if (skeleton != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_v1 = temp_a0->polyOpa.d - (((dListCount << 6) + 0xF) & ~0xF);
        temp_a0->polyOpa.d = temp_v1;
        sp50 = temp_v1;
        temp_v1_2 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xDB060034;
        temp_v1_2->words.w1 = (u32) sp50;
        sp4C = temp_a0;
        SysMatrix_StatePush();
        temp_v0 = Lib_SegmentedToVirtual(*skeleton);
        sp74 = temp_v0;
        temp_a2 = &sp6C;
        temp_a3 = &sp5C;
        sp5C = (f32) limbDrawTable->x;
        sp60 = (f32) limbDrawTable->y;
        sp64 = (f32) limbDrawTable->z;
        sp54.unk_0 = (s32) (unaligned s32) limbDrawTable->unk_6;
        sp54.unk_4 = (u16) limbDrawTable[1].z;
        temp_t2 = temp_v0->unk_8;
        sp68 = temp_t2;
        sp6C = temp_t2;
        if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, 1, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp54, actor) == 0)) {
            SysMatrix_RotateAndTranslateState((Vec3f *) &sp5C, (Vec3s *) &sp54);
            SysMatrix_StatePush();
            unkDraw(globalCtx, 1, actor);
            if (sp6C != 0) {
                temp_v1_3 = sp4C->polyOpa.p;
                temp_v1_3->words.w0 = 0xDA380003;
                sp40 = temp_v1_3;
                temp_v1_3->words.w1 = SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp50);
                temp_v1_3[1].words.w0 = 0xDE000000;
                temp_v1_3[1].words.w1 = (u32) sp6C;
                sp4C->polyOpa.p = &temp_v1_3[2];
                sp50 = &sp50[8];
            } else if (sp68 != 0) {
                temp_a0_2 = sp50;
                sp50 = &sp50[8];
                SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) temp_a0_2);
            }
            SysMatrix_StatePop();
        }
        if (postLimbDraw != 0) {
            postLimbDraw(globalCtx, 1, &sp68, (Vec3s *) &sp54, actor);
        }
        temp_a1 = sp74->unk_6;
        if (temp_a1 != 0xFF) {
            func_80134148(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, unkDraw, actor, (RSPMatrix **) &sp50);
        }
        SysMatrix_StatePop();
    }
}

void SkelAnime_AnimateFrame(AnimationHeader *animationSeg, s32 currentFrame, s32 limbCount, Vec3s *dst) {
    void *sp24;
    void *sp20;
    s32 temp_a0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_a1;
    Vec3s *phi_a3;
    s32 phi_a0;

    temp_v0 = Lib_SegmentedToVirtual((void *) animationSeg);
    sp24 = temp_v0;
    sp20 = Lib_SegmentedToVirtual(temp_v0->unk_8);
    temp_v0_2 = Lib_SegmentedToVirtual(sp24->unk_4);
    temp_v1 = sp24->unk_C;
    phi_a1 = sp20;
    phi_a3 = dst;
    phi_a0 = 0;
    if (limbCount > 0) {
        do {
            temp_v1_2 = phi_a1->unk_0;
            temp_a0 = phi_a0 + 1;
            phi_a0 = temp_a0;
            if ((s32) temp_v1_2 >= (s32) temp_v1) {
                phi_a3->x = *((currentFrame * 2) + temp_v0_2 + (temp_v1_2 * 2));
            } else {
                phi_a3->x = *(temp_v0_2 + (temp_v1_2 * 2));
            }
            temp_v1_3 = phi_a1->unk_2;
            if ((s32) temp_v1_3 >= (s32) temp_v1) {
                phi_a3->y = *((currentFrame * 2) + temp_v0_2 + (temp_v1_3 * 2));
            } else {
                phi_a3->y = *(temp_v0_2 + (temp_v1_3 * 2));
            }
            temp_v1_4 = phi_a1->unk_4;
            phi_a1 += 6;
            if ((s32) temp_v1_4 >= (s32) temp_v1) {
                phi_a3->z = *((currentFrame * 2) + temp_v0_2 + (temp_v1_4 * 2));
            } else {
                phi_a3->z = *(temp_v0_2 + (temp_v1_4 * 2));
            }
            phi_a3 += 6;
        } while (temp_a0 != limbCount);
    }
}

s16 SkelAnime_GetTotalFrames(AnimationHeaderCommon *animationSeg) {
    return *Lib_SegmentedToVirtual((void *) animationSeg);
}

s16 SkelAnime_GetFrameCount(AnimationHeaderCommon *animationSeg) {
    return (s16) (*Lib_SegmentedToVirtual((void *) animationSeg) - 1);
}

Gfx *SkelAnime_Draw2Limb(GlobalContext *globalCtx, s32 limbIndex, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **), Actor *actor, Gfx *gfx) {
    void *sp4C;
    Gfx *sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp34;
    Gfx *sp30;
    Gfx **temp_a2;
    f32 *temp_a3;
    s32 temp_t1;
    s32 temp_t4;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t5;
    void *temp_v0;

    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(skeleton[limbIndex]);
    sp4C = temp_v0;
    temp_t1 = limbIndex + 1;
    temp_t4 = temp_t1 * 6;
    limbIndex = temp_t1;
    temp_t5 = limbDrawTable + temp_t4;
    sp34.unk_0 = (s32) (unaligned s32) temp_t5->unk_0;
    temp_a2 = &sp48;
    sp34.unk_4 = (u16) temp_t5->unk_4;
    temp_a3 = &sp3C;
    sp3C = (f32) temp_v0->unk_0;
    sp40 = (f32) temp_v0->unk_2;
    sp44 = (f32) temp_v0->unk_4;
    sp48 = temp_v0->unk_8;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, limbIndex, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp34, actor, &gfx) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp3C, (Vec3s *) &sp34);
        if (sp48 != 0) {
            sp30 = gfx;
            gfx->words.w0 = 0xDA380003;
            sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            gfx[1].words.w0 = 0xDE000000;
            gfx[1].words.w1 = (u32) sp48;
            gfx = &gfx[2];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, limbIndex, &sp48, (Vec3s *) &sp34, actor, &gfx);
    }
    temp_a1 = sp4C->unk_6;
    if (temp_a1 != 0xFF) {
        gfx = SkelAnime_Draw2Limb(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, gfx);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp4C->unk_7;
    if (temp_a1_2 != 0xFF) {
        gfx = SkelAnime_Draw2Limb(globalCtx, (s32) temp_a1_2, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, gfx);
    }
    return gfx;
}

Gfx *SkelAnime_Draw2(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **), Actor *actor, Gfx *gfx) {
    void *sp54;
    Gfx *sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    ? sp38;
    Gfx *sp34;
    Gfx **temp_a2;
    f32 *temp_a3;
    u8 temp_a1;
    void *temp_v0;

    if (skeleton == 0) {
        return NULL;
    }
    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(*skeleton);
    sp54 = temp_v0;
    temp_a2 = &sp4C;
    temp_a3 = &sp40;
    sp40 = (f32) limbDrawTable->x;
    sp44 = (f32) limbDrawTable->y;
    sp48 = (f32) limbDrawTable->z;
    sp38.unk_0 = (s32) (unaligned s32) limbDrawTable->unk_6;
    sp38.unk_4 = (u16) limbDrawTable[1].z;
    sp4C = temp_v0->unk_8;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, 1, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp38, actor, &gfx) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp40, (Vec3s *) &sp38);
        if (sp4C != 0) {
            sp34 = gfx;
            gfx->words.w0 = 0xDA380003;
            sp34->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            gfx[1].words.w0 = 0xDE000000;
            gfx[1].words.w1 = (u32) sp4C;
            gfx = &gfx[2];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, 1, &sp4C, (Vec3s *) &sp38, actor, &gfx);
    }
    temp_a1 = sp54->unk_6;
    if (temp_a1 != 0xFF) {
        gfx = SkelAnime_Draw2Limb(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, gfx);
    }
    SysMatrix_StatePop();
    return gfx;
}

Gfx *SkelAnime_DrawLimbSV2(GlobalContext *globalCtx, s32 limbIndex, void **skeleton, Vec3s *limbDrawTable, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **), Actor *actor, RSPMatrix **mtx, Gfx *gfx) {
    void *sp5C;
    Gfx *sp58;
    Gfx *sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ? sp40;
    Gfx *sp3C;
    Gfx **temp_a2;
    Gfx *temp_t1_2;
    f32 *temp_a3;
    s32 temp_t1;
    s32 temp_t4;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_t5;
    void *temp_v0;

    SysMatrix_StatePush();
    temp_v0 = Lib_SegmentedToVirtual(skeleton[limbIndex]);
    sp5C = temp_v0;
    temp_t1 = limbIndex + 1;
    temp_t4 = temp_t1 * 6;
    limbIndex = temp_t1;
    temp_t5 = limbDrawTable + temp_t4;
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
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, limbIndex, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp40, actor, &gfx) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp48, (Vec3s *) &sp40);
        if (sp58 != 0) {
            sp3C = gfx;
            gfx->words.w0 = 0xDA380003;
            sp3C->words.w1 = SysMatrix_GetStateAsRSPMatrix(*mtx);
            gfx[1].words.w0 = 0xDE000000;
            gfx[1].words.w1 = (u32) sp58;
            gfx = &gfx[2];
            *mtx = &(*mtx)[1];
        } else if (sp54 != 0) {
            SysMatrix_GetStateAsRSPMatrix(*mtx);
            *mtx = &(*mtx)[1];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, limbIndex, &sp54, (Vec3s *) &sp40, actor, &gfx);
    }
    temp_a1 = sp5C->unk_6;
    if (temp_a1 != 0xFF) {
        gfx = SkelAnime_DrawLimbSV2(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, mtx, gfx);
    }
    SysMatrix_StatePop();
    temp_a1_2 = sp5C->unk_7;
    if (temp_a1_2 != 0xFF) {
        gfx = SkelAnime_DrawLimbSV2(globalCtx, (s32) temp_a1_2, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, mtx, gfx);
    }
    return gfx;
}

Gfx *SkelAnime_DrawSV2(GlobalContext *globalCtx, void **skeleton, Vec3s *limbDrawTable, s32 dListCount, s32 (*overrideLimbDraw)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **), void (*postLimbDraw)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **), Actor *actor, Gfx *gfx) {
    void *sp6C;
    Gfx *sp64;
    Gfx *sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp4C;
    Gfx *sp48;
    Gfx *sp40;
    Gfx **temp_a2;
    Gfx *temp_t2;
    Gfx *temp_t3;
    Gfx *temp_v0;
    GraphicsContext *temp_v1;
    f32 *temp_a3;
    u8 temp_a1;
    void *temp_v0_2;

    if (skeleton == 0) {
        return NULL;
    }
    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyOpa.d - (((dListCount << 6) + 0xF) & ~0xF);
    temp_v1->polyOpa.d = temp_v0;
    sp48 = temp_v0;
    temp_t2 = gfx;
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
    temp_t3 = temp_v0_2->unk_8;
    sp60 = temp_t3;
    sp64 = temp_t3;
    if ((overrideLimbDraw == 0) || (overrideLimbDraw(globalCtx, 1, temp_a2, (Vec3f *) temp_a3, (Vec3s *) &sp4C, actor, &gfx) == 0)) {
        SysMatrix_RotateAndTranslateState((Vec3f *) &sp54, (Vec3s *) &sp4C);
        if (sp64 != 0) {
            sp40 = gfx;
            gfx->words.w0 = 0xDA380003;
            sp40->words.w1 = SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp48);
            gfx[1].words.w0 = 0xDE000000;
            gfx[1].words.w1 = (u32) sp64;
            gfx = &gfx[2];
            sp48 = &sp48[8];
        } else if (sp60 != 0) {
            SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) sp48);
            sp48 = &sp48[8];
        }
    }
    if (postLimbDraw != 0) {
        postLimbDraw(globalCtx, 1, &sp60, (Vec3s *) &sp4C, actor, &gfx);
    }
    temp_a1 = sp6C->unk_6;
    if (temp_a1 != 0xFF) {
        gfx = SkelAnime_DrawLimbSV2(globalCtx, (s32) temp_a1, skeleton, limbDrawTable, overrideLimbDraw, postLimbDraw, actor, (RSPMatrix **) &sp48, gfx);
    }
    SysMatrix_StatePop();
    return gfx;
}

s32 func_80134FFC(s32 arg0, s32 arg1, Vec3s *dst) {
    void *sp24;
    s16 sp22;
    void *sp1C;
    Vec3s *temp_a2;
    s16 temp_t0;
    s32 temp_a0;
    void *temp_a2_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;
    Vec3s *phi_a2;
    s32 phi_a0;

    temp_v0 = Lib_SegmentedToVirtual((void *) arg0);
    sp24 = temp_v0;
    temp_t0 = temp_v0->unk_2;
    sp22 = temp_t0;
    sp1C = Lib_SegmentedToVirtual(temp_v0->unk_8);
    temp_v0_2 = Lib_SegmentedToVirtual(sp24->unk_4);
    phi_a0 = 1;
    if (arg1 < (s32) sp1C->unk_0) {
        dst->x = *((arg1 * 2) + temp_v0_2 + (sp1C->unk_2 * 2));
    } else {
        dst->x = *(temp_v0_2 + (sp1C->unk_2 * 2));
    }
    if (arg1 < (s32) sp1C->unk_4) {
        dst->y = *((arg1 * 2) + temp_v0_2 + (sp1C->unk_6 * 2));
    } else {
        dst->y = *(temp_v0_2 + (sp1C->unk_6 * 2));
    }
    if (arg1 < (s32) sp1C->unk_8) {
        dst->z = *((arg1 * 2) + temp_v0_2 + (sp1C->unk_A * 2));
    } else {
        dst->z = *(temp_v0_2 + (sp1C->unk_A * 2));
    }
    temp_a2 = &dst[1];
    temp_v1 = sp1C + 0xC;
    phi_v1 = temp_v1;
    phi_a2 = temp_a2;
    if ((s32) temp_t0 > 0) {
        if ((temp_t0 & 1) != 0) {
            phi_a0 = 2;
            if (arg1 < (s32) temp_v1->unk_0) {
                temp_a2->x = *((arg1 * 2) + temp_v0_2 + (temp_v1->unk_2 * 2));
            } else {
                temp_a2->x = *(temp_v0_2 + (temp_v1->unk_2 * 2));
            }
            if (arg1 < (s32) temp_v1->unk_4) {
                temp_a2->y = *((arg1 * 2) + temp_v0_2 + (temp_v1->unk_6 * 2));
            } else {
                temp_a2->y = *(temp_v0_2 + (temp_v1->unk_6 * 2));
            }
            if (arg1 < (s32) temp_v1->unk_8) {
                temp_a2->z = *((arg1 * 2) + temp_v0_2 + (temp_v1->unk_A * 2));
            } else {
                temp_a2->z = *(temp_v0_2 + (temp_v1->unk_A * 2));
            }
            phi_v1 = temp_v1 + 0xC;
            phi_a2 = &temp_a2[1];
            if ((temp_t0 + 1) != 2) {
                goto loop_21;
            }
        } else {
            do {
loop_21:
                temp_a0 = phi_a0 + 2;
                phi_a0 = temp_a0;
                if (arg1 < (s32) phi_v1->unk_0) {
                    phi_a2->x = *((arg1 * 2) + temp_v0_2 + (phi_v1->unk_2 * 2));
                } else {
                    phi_a2->x = *(temp_v0_2 + (phi_v1->unk_2 * 2));
                }
                if (arg1 < (s32) phi_v1->unk_4) {
                    phi_a2->y = *((arg1 * 2) + temp_v0_2 + (phi_v1->unk_6 * 2));
                } else {
                    phi_a2->y = *(temp_v0_2 + (phi_v1->unk_6 * 2));
                }
                if (arg1 < (s32) phi_v1->unk_8) {
                    phi_a2->z = *((arg1 * 2) + temp_v0_2 + (phi_v1->unk_A * 2));
                } else {
                    phi_a2->z = *(temp_v0_2 + (phi_v1->unk_A * 2));
                }
                temp_v1_2 = phi_v1 + 0xC;
                temp_a2_2 = phi_a2 + 6;
                if (arg1 < (s32) phi_v1->unk_C) {
                    temp_a2_2->unk_0 = (s16) *((arg1 * 2) + temp_v0_2 + (temp_v1_2->unk_2 * 2));
                } else {
                    temp_a2_2->unk_0 = (s16) *(temp_v0_2 + (temp_v1_2->unk_2 * 2));
                }
                if (arg1 < (s32) temp_v1_2->unk_4) {
                    temp_a2_2->unk_2 = (s16) *((arg1 * 2) + temp_v0_2 + (temp_v1_2->unk_6 * 2));
                } else {
                    temp_a2_2->unk_2 = (s16) *(temp_v0_2 + (temp_v1_2->unk_6 * 2));
                }
                if (arg1 < (s32) temp_v1_2->unk_8) {
                    temp_a2_2->unk_4 = (s16) *((arg1 * 2) + temp_v0_2 + (temp_v1_2->unk_A * 2));
                } else {
                    temp_a2_2->unk_4 = (s16) *(temp_v0_2 + (temp_v1_2->unk_A * 2));
                }
                phi_v1 = temp_v1_2 + 0xC;
                phi_a2 = temp_a2_2 + 6;
            } while ((temp_t0 + 1) != temp_a0);
        }
    }
    return (s32) temp_t0;
}

s16 func_801353D4(AnimationHeaderCommon *animationSeg) {
    return Lib_SegmentedToVirtual((void *) animationSeg)->unk_2;
}

s16 SkelAnime_GetTotalFrames2(AnimationHeaderCommon *animationSeg) {
    return *Lib_SegmentedToVirtual((void *) animationSeg);
}

s16 SkelAnime_GetFrameCount2(AnimationHeaderCommon *animationSeg) {
    return (s16) (*Lib_SegmentedToVirtual((void *) animationSeg) - 1);
}

void SkelAnime_InterpolateVec3s(s32 limbCount, Vec3s *dst, Vec3s *vec2, Vec3s *vec3, f32 unkf) {
    Vec3s *temp_a2;
    Vec3s *temp_a2_2;
    Vec3s *temp_a3;
    Vec3s *temp_a3_2;
    Vec3s *temp_a3_4;
    Vec3s *temp_a3_5;
    Vec3s *temp_s0;
    Vec3s *temp_s0_2;
    Vec3s *temp_s0_4;
    Vec3s *temp_s0_5;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_v1;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_13;
    s16 temp_v1_14;
    s16 temp_v1_15;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s16 temp_v1_9;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    void *temp_a2_3;
    void *temp_a3_3;
    void *temp_s0_3;
    s32 phi_v0;
    s16 phi_t4;
    s16 phi_v1;
    Vec3s *phi_s0;
    Vec3s *phi_a3;
    Vec3s *phi_a2;
    s32 phi_v0_2;
    s16 phi_t4_2;
    s16 phi_v1_2;
    Vec3s *phi_s0_2;
    Vec3s *phi_a3_2;
    Vec3s *phi_a2_2;
    Vec3s *phi_a3_3;
    Vec3s *phi_s0_3;
    s32 phi_v0_3;
    Vec3s *phi_a3_4;
    Vec3s *phi_s0_4;
    s32 phi_v0_4;
    Vec3s *phi_a3_5;
    Vec3s *phi_a2_3;
    Vec3s *phi_s0_5;

    phi_a3_3 = vec3;
    phi_s0_3 = dst;
    phi_a3_4 = vec3;
    phi_s0_4 = dst;
    phi_a3_5 = vec3;
    phi_a2_3 = vec2;
    phi_s0_5 = dst;
    if (unkf < 1.0f) {
        phi_v0 = 0;
        if ((limbCount > 0) && (((limbCount & 1) == 0) || (temp_v1 = vec2->x, temp_s0 = &dst[1], temp_a2 = &vec2[1], temp_a3 = &vec3[1], temp_s0->unk_-6 = (s16) ((s32) ((f32) (s16) (vec3->x - temp_v1) * unkf) + temp_v1), temp_v1_2 = temp_a2->unk_-4, temp_s0->unk_-4 = (s16) ((s32) ((f32) (s16) (temp_a3->unk_-4 - temp_v1_2) * unkf) + temp_v1_2), temp_v1_3 = temp_a2->unk_-2, temp_s0->unk_-2 = (s16) ((s32) ((f32) (s16) (temp_a3->unk_-2 - temp_v1_3) * unkf) + temp_v1_3), phi_v0 = 1, phi_a3_5 = temp_a3, phi_a2_3 = temp_a2, phi_s0_5 = temp_s0, (limbCount != 1)))) {
            temp_v0 = phi_v0 + 2;
            temp_v1_4 = phi_a2_3->x;
            temp_t4 = phi_a3_5->x;
            phi_t4 = temp_t4;
            phi_v1 = temp_v1_4;
            phi_s0 = phi_s0_5;
            phi_a3 = phi_a3_5;
            phi_a2 = phi_a2_3;
            phi_v0_2 = temp_v0;
            phi_t4_2 = temp_t4;
            phi_v1_2 = temp_v1_4;
            phi_s0_2 = phi_s0_5;
            phi_a3_2 = phi_a3_5;
            phi_a2_2 = phi_a2_3;
            if (temp_v0 != limbCount) {
                do {
                    temp_v0_2 = phi_v0_2 + 2;
                    temp_s0_2 = phi_s0 + 0xC;
                    temp_a2_2 = phi_a2 + 0xC;
                    temp_a3_2 = phi_a3 + 0xC;
                    temp_s0_2->unk_-C = (s16) ((s32) ((f32) (s16) (phi_t4 - phi_v1) * unkf) + phi_v1);
                    temp_v1_5 = temp_a2_2->unk_-A;
                    temp_s0_2->unk_-A = (s16) ((s32) ((f32) (s16) (temp_a3_2->unk_-A - temp_v1_5) * unkf) + temp_v1_5);
                    temp_v1_6 = temp_a2_2->unk_-8;
                    temp_s0_2->unk_-8 = (s16) ((s32) ((f32) (s16) (temp_a3_2->unk_-8 - temp_v1_6) * unkf) + temp_v1_6);
                    temp_v1_7 = temp_a2_2->unk_-6;
                    temp_s0_2->unk_-6 = (s16) ((s32) ((f32) (s16) (temp_a3_2->unk_-6 - temp_v1_7) * unkf) + temp_v1_7);
                    temp_v1_8 = temp_a2_2->unk_-4;
                    temp_s0_2->unk_-4 = (s16) ((s32) ((f32) (s16) (temp_a3_2->unk_-4 - temp_v1_8) * unkf) + temp_v1_8);
                    temp_v1_9 = temp_a2_2->unk_-2;
                    temp_s0_2->unk_-2 = (s16) ((s32) ((f32) (s16) (temp_a3_2->unk_-2 - temp_v1_9) * unkf) + temp_v1_9);
                    temp_v1_10 = temp_a2_2->x;
                    temp_t4_2 = temp_a3_2->x;
                    phi_t4 = temp_t4_2;
                    phi_v1 = temp_v1_10;
                    phi_s0 = temp_s0_2;
                    phi_a3 = temp_a3_2;
                    phi_a2 = temp_a2_2;
                    phi_v0_2 = temp_v0_2;
                    phi_t4_2 = temp_t4_2;
                    phi_v1_2 = temp_v1_10;
                    phi_s0_2 = temp_s0_2;
                    phi_a3_2 = temp_a3_2;
                    phi_a2_2 = temp_a2_2;
                } while (temp_v0_2 != limbCount);
            }
            temp_s0_3 = phi_s0_2 + 0xC;
            temp_a2_3 = phi_a2_2 + 0xC;
            temp_a3_3 = phi_a3_2 + 0xC;
            temp_s0_3->unk_-C = (s16) ((s32) ((f32) (s16) (phi_t4_2 - phi_v1_2) * unkf) + phi_v1_2);
            temp_v1_11 = temp_a2_3->unk_-A;
            temp_s0_3->unk_-A = (s16) ((s32) ((f32) (s16) (temp_a3_3->unk_-A - temp_v1_11) * unkf) + temp_v1_11);
            temp_v1_12 = temp_a2_3->unk_-8;
            temp_s0_3->unk_-8 = (s16) ((s32) ((f32) (s16) (temp_a3_3->unk_-8 - temp_v1_12) * unkf) + temp_v1_12);
            temp_v1_13 = temp_a2_3->unk_-6;
            temp_s0_3->unk_-6 = (s16) ((s32) ((f32) (s16) (temp_a3_3->unk_-6 - temp_v1_13) * unkf) + temp_v1_13);
            temp_v1_14 = temp_a2_3->unk_-4;
            temp_s0_3->unk_-4 = (s16) ((s32) ((f32) (s16) (temp_a3_3->unk_-4 - temp_v1_14) * unkf) + temp_v1_14);
            temp_v1_15 = temp_a2_3->unk_-2;
            temp_s0_3->unk_-2 = (s16) ((s32) ((f32) (s16) (temp_a3_3->unk_-2 - temp_v1_15) * unkf) + temp_v1_15);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    phi_v0_3 = 0;
    phi_v0_4 = 0;
    if (limbCount > 0) {
        temp_a1 = limbCount & 3;
        if (temp_a1 != 0) {
            do {
                temp_v0_3 = phi_v0_3 + 1;
                temp_s0_4 = phi_s0_3 + 6;
                temp_s0_4->unk_-6 = (s16) phi_a3_3->x;
                temp_a3_4 = phi_a3_3 + 6;
                temp_s0_4->unk_-4 = (s16) phi_a3_3->y;
                temp_s0_4->unk_-2 = (s16) temp_a3_4->unk_-2;
                phi_a3_3 = temp_a3_4;
                phi_s0_3 = temp_s0_4;
                phi_v0_3 = temp_v0_3;
                phi_a3_4 = temp_a3_4;
                phi_s0_4 = temp_s0_4;
                phi_v0_4 = temp_v0_3;
            } while (temp_a1 != temp_v0_3);
            if (temp_v0_3 != limbCount) {
                goto loop_11;
            }
        } else {
            do {
loop_11:
                temp_v0_4 = phi_v0_4 + 4;
                temp_s0_5 = phi_s0_4 + 0x18;
                temp_s0_5->unk_-18 = (s16) phi_a3_4->x;
                temp_a3_5 = phi_a3_4 + 0x18;
                temp_s0_5->unk_-16 = (s16) phi_a3_4->y;
                temp_s0_5->unk_-14 = (s16) temp_a3_5->unk_-14;
                temp_s0_5->unk_-12 = (s16) temp_a3_5->unk_-12;
                temp_s0_5->unk_-10 = (s16) temp_a3_5->unk_-10;
                temp_s0_5->unk_-E = (s16) temp_a3_5->unk_-E;
                temp_s0_5->unk_-C = (s16) temp_a3_5->unk_-C;
                temp_s0_5->unk_-A = (s16) temp_a3_5->unk_-A;
                temp_s0_5->unk_-8 = (s16) temp_a3_5->unk_-8;
                temp_s0_5->unk_-6 = (s16) temp_a3_5->unk_-6;
                temp_s0_5->unk_-4 = (s16) temp_a3_5->unk_-4;
                temp_s0_5->unk_-2 = (s16) temp_a3_5->unk_-2;
                phi_a3_4 = temp_a3_5;
                phi_s0_4 = temp_s0_5;
                phi_v0_4 = temp_v0_4;
            } while (temp_v0_4 != limbCount);
        }
    }
}

void SkelAnime_AnimationCtxReset(AnimationContext *animationCtx) {
    animationCtx->animationCount = 0;
}

void func_801358D4(GlobalContext *globalCtx) {
    D_801F5AB0 *= 2;
}

void func_801358F4(GlobalContext *globalCtx) {
    D_801F5AB4 |= D_801F5AB0;
}

AnimationEntry *SkelAnime_NextEntry(AnimationContext *animationCtx, s32 type) {
    s16 temp_v1;

    temp_v1 = animationCtx->animationCount;
    if ((s32) temp_v1 >= 0x32) {
        return NULL;
    }
    animationCtx->animationCount = temp_v1 + 1;
    animationCtx->entries[temp_v1].type = (u8) type;
    return &animationCtx->entries[temp_v1];
}

void SkelAnime_LoadLinkAnimetion(GlobalContext *globalCtx, LinkAnimationHeader *linkAnimetionSeg, s32 frame, s32 limbCount, void *ram) {
    AnimationEntry *sp34;
    void *sp30;
    u8 *sp28;
    AnimationEntry *temp_v0;
    u32 temp_a3;
    u8 *temp_a0;

    temp_v0 = SkelAnime_NextEntry(&globalCtx->animationCtx, 0);
    if (temp_v0 != 0) {
        sp34 = temp_v0;
        sp30 = Lib_SegmentedToVirtual((void *) linkAnimetionSeg);
        temp_a0 = &sp34->types.raw.raw[32];
        sp28 = temp_a0;
        osCreateMesgQueue((OSMesgQueue *) temp_a0, (void **) &sp34->types.raw.raw[56], 1);
        temp_a3 = (limbCount * 6) + 2;
        DmaMgr_SendRequestImpl((DmaRequest *) &sp34->types, ram, (u32) &_link_animetionSegmentRomStart[(sp30->unk_4 & 0xFFFFFF) + (temp_a3 * frame)], temp_a3, 0, (OSMesgQueue *) sp28, NULL);
    }
}

void SkelAnime_LoadAnimationType1(GlobalContext *globalCtx, s32 vecCount, Vec3s *dst, Vec3s *src) {
    AnimationEntry *temp_v0;

    temp_v0 = SkelAnime_NextEntry(&globalCtx->animationCtx, 1);
    if (temp_v0 != 0) {
        temp_v0->types.raw.raw[0] = (u8) D_801F5AB0;
        temp_v0->types.raw.raw[1] = (u8) vecCount;
        temp_v0->types.type0.req.dramAddr = (void *) dst;
        temp_v0->types.type0.req.size = (u32) src;
    }
}

void SkelAnime_LoadAnimationType2(GlobalContext *globalCtx, s32 limbCount, Vec3s *arg2, Vec3s *arg3, f32 arg4) {
    AnimationEntry *temp_v0;

    temp_v0 = SkelAnime_NextEntry(&globalCtx->animationCtx, 2);
    if (temp_v0 != 0) {
        temp_v0->types.raw.raw[0] = (u8) D_801F5AB0;
        temp_v0->types.raw.raw[1] = (u8) limbCount;
        temp_v0->types.type0.req.dramAddr = (void *) arg2;
        temp_v0->types.type0.req.size = (u32) arg3;
        temp_v0->types.type0.req.filename = (bitwise s8 *) arg4;
    }
}

void SkelAnime_LoadAnimationType3(GlobalContext *globalCtx, s32 vecCount, Vec3s *dst, Vec3s *src, u8 *index) {
    AnimationEntry *temp_v0;

    temp_v0 = SkelAnime_NextEntry(&globalCtx->animationCtx, 3);
    if (temp_v0 != 0) {
        temp_v0->types.raw.raw[0] = (u8) D_801F5AB0;
        temp_v0->types.raw.raw[1] = (u8) vecCount;
        temp_v0->types.type0.req.dramAddr = (void *) dst;
        temp_v0->types.type0.req.size = (u32) src;
        temp_v0->types.type0.req.filename = (s8 *) index;
    }
}

void SkelAnime_LoadAnimationType4(GlobalContext *globalCtx, s32 vecCount, Vec3s *dst, Vec3s *src, u8 *index) {
    AnimationEntry *temp_v0;

    temp_v0 = SkelAnime_NextEntry(&globalCtx->animationCtx, 4);
    if (temp_v0 != 0) {
        temp_v0->types.raw.raw[0] = (u8) D_801F5AB0;
        temp_v0->types.raw.raw[1] = (u8) vecCount;
        temp_v0->types.type0.req.dramAddr = (void *) dst;
        temp_v0->types.type0.req.size = (u32) src;
        temp_v0->types.type0.req.filename = (s8 *) index;
    }
}

void SkelAnime_LoadAnimationType5(GlobalContext *globalCtx, Actor *actor, SkelAnime *skelAnime, f32 arg3) {
    AnimationEntry *temp_v0;

    temp_v0 = SkelAnime_NextEntry(&globalCtx->animationCtx, 5);
    if (temp_v0 != 0) {
        temp_v0->types.type0.req.vromAddr = (u32) actor;
        temp_v0->types.type0.req.dramAddr = (void *) skelAnime;
        temp_v0->types.type0.req.size = (bitwise u32) arg3;
    }
}

void SkelAnime_LinkAnimetionLoaded(GlobalContext *globalCtx, AnimationEntryType0 *entry) {
    osRecvMesg(&entry->msgQueue, NULL, 1);
}

void SkelAnime_AnimationType1Loaded(GlobalContext *globalCtx, AnimationEntryType1 *entry) {
    Vec3s *temp_v1;
    s32 temp_a2;
    Vec3s *phi_a0;
    Vec3s *phi_v1;
    s32 phi_a2;

    if ((entry->unk00 & D_801F5AB4) == 0) {
        phi_a0 = entry->src;
        phi_v1 = entry->dst;
        phi_a2 = 0;
        if ((s32) entry->vecCount > 0) {
            do {
                temp_a2 = phi_a2 + 1;
                temp_v1 = phi_v1 + 6;
                temp_v1->unk_-6 = (unaligned s32) phi_a0->unk_0;
                temp_v1->unk_-2 = (u16) phi_a0->z;
                phi_a0 += 6;
                phi_v1 = temp_v1;
                phi_a2 = temp_a2;
            } while (temp_a2 < (s32) entry->vecCount);
        }
    }
}

void SkelAnime_AnimationType2Loaded(GlobalContext *globalCtx, AnimationEntryType2 *entry) {
    Vec3s *temp_a1;

    if ((entry->unk00 & D_801F5AB4) == 0) {
        temp_a1 = entry->unk04;
        SkelAnime_InterpolateVec3s((s32) entry->limbCount, temp_a1, temp_a1, entry->unk08, entry->unk0C);
    }
}

void SkelAnime_AnimationType3Loaded(GlobalContext *globalCtx, AnimationEntryType3 *entry) {
    s32 temp_a3;
    u8 *phi_a2;
    Vec3s *phi_a0;
    Vec3s *phi_v1;
    s32 phi_a3;

    phi_a3 = 0;
    if ((entry->unk00 & D_801F5AB4) == 0) {
        phi_a2 = entry->index;
        phi_a0 = entry->src;
        phi_v1 = entry->dst;
        if ((s32) entry->vecCount > 0) {
            do {
                phi_a2 += 1;
                if (*phi_a2 != 0) {
                    phi_v1->unk_0 = (unaligned s32) phi_a0->unk_0;
                    phi_v1->z = phi_a0->z;
                }
                temp_a3 = phi_a3 + 1;
                phi_a0 += 6;
                phi_v1 += 6;
                phi_a3 = temp_a3;
            } while (temp_a3 < (s32) entry->vecCount);
        }
    }
}

void SkelAnime_AnimationType4Loaded(GlobalContext *globalCtx, AnimationEntryType4 *entry) {
    s32 temp_a3;
    u8 *phi_a2;
    Vec3s *phi_a0;
    Vec3s *phi_v1;
    s32 phi_a3;

    phi_a3 = 0;
    if ((entry->unk00 & D_801F5AB4) == 0) {
        phi_a2 = entry->index;
        phi_a0 = entry->src;
        phi_v1 = entry->dst;
        if ((s32) entry->vecCount > 0) {
            do {
                phi_a2 += 1;
                if (*phi_a2 == 0) {
                    phi_v1->unk_0 = (unaligned s32) phi_a0->unk_0;
                    phi_v1->z = phi_a0->z;
                }
                temp_a3 = phi_a3 + 1;
                phi_a0 += 6;
                phi_v1 += 6;
                phi_a3 = temp_a3;
            } while (temp_a3 < (s32) entry->vecCount);
        }
    }
}

void SkelAnime_AnimationType5Loaded(GlobalContext *globalCtx, AnimationEntryType5 *entry) {
    Actor *sp28;
    f32 sp1C;
    Actor *temp_v0;
    SkelAnime *temp_a0;
    s16 temp_a2;

    temp_v0 = entry->actor;
    temp_a0 = entry->skelAnime;
    temp_a2 = temp_v0->shape.rot.y;
    entry = entry;
    sp28 = temp_v0;
    func_80137748(temp_a0, (Vec3f *) &sp1C, temp_a2);
    temp_v0->world.pos.x += sp1C * temp_v0->scale.x * entry->unk08;
    temp_v0->world.pos.y += sp20 * temp_v0->scale.y * entry->unk08;
    temp_v0->world.pos.z += sp24 * temp_v0->scale.z * entry->unk08;
}

void func_80135EE8(GlobalContext *globalCtx, AnimationContext *animationCtx) {
    AnimationEntry *phi_s0;

    phi_s0 = animationCtx->entries;
    if (animationCtx->animationCount != 0) {
        do {
            ((? (*)(GlobalContext *, void *)) (&D_801C5CB0)[phi_s0->type])(globalCtx, phi_s0 + 4);
            animationCtx->animationCount += -1;
            phi_s0 += 0x40;
        } while (animationCtx->animationCount != 0);
    }
    D_801F5AB0 = 1;
    D_801F5AB4 = 0;
}

void SkelAnime_InitLinkAnimetion(GlobalContext *globalCtx, SkelAnime *skelAnime, FlexSkeletonHeader *skeletonHeaderSeg, LinkAnimationHeader *linkAnimationHeaderSeg, s32 flags, Vec3s *limbDrawTbl, Vec3s *transitionDrawTbl, s32 limbBufCount) {
    s32 sp34;
    u32 sp30;
    u32 temp_a1_2;
    u8 temp_a0;
    void *temp_a1;
    void *temp_v0;
    u8 phi_v1;
    u32 phi_a0;
    u8 phi_v1_2;
    u8 phi_v1_3;

    temp_v0 = Lib_SegmentedToVirtual((void *) skeletonHeaderSeg);
    temp_a0 = temp_v0->unk_4;
    temp_a1 = temp_v0;
    skelAnime->initFlags = (s8) flags;
    if ((flags & 2) != 0) {
        phi_v1_3 = temp_a0;
    } else {
        phi_v1_3 = 1U;
    }
    phi_v1_2 = phi_v1_3;
    if ((flags & 1) != 0) {
        phi_v1_2 = phi_v1_3 + temp_a0;
    }
    phi_v1 = phi_v1_2;
    if ((flags & 4) != 0) {
        phi_v1 = phi_v1_2 + temp_a0;
    }
    skelAnime->limbCount = phi_v1;
    skelAnime->dListCount = temp_a1->unk_8;
    sp34 = (s32) phi_v1;
    skelAnime->skeleton = Lib_SegmentedToVirtual(temp_a1->unk_0);
    temp_a1_2 = phi_v1 * 6;
    phi_a0 = temp_a1_2;
    if ((flags & 8) != 0) {
        phi_a0 = temp_a1_2 + 2;
    }
    if (limbDrawTbl == 0) {
        sp30 = phi_a0;
        skelAnime->limbDrawTbl = zelda_malloc(phi_a0);
        skelAnime->transitionDrawTbl = zelda_malloc(phi_a0);
    } else {
        skelAnime->limbDrawTbl = (Vec3s *) ((s32) (limbDrawTbl + 0xF) & ~0xF);
        skelAnime->transitionDrawTbl = (Vec3s *) ((s32) (transitionDrawTbl + 0xF) & ~0xF);
    }
    SkelAnime_ChangeLinkAnim(globalCtx, skelAnime, linkAnimationHeaderSeg, 1.0f, 0.0f, 0.0f, (u8) 0, 0.0f);
}

void func_801360A8(SkelAnime *skelAnime) {
    if ((s32) skelAnime->mode < 2) {
        skelAnime->animUpdate = func_80136288;
    } else {
        skelAnime->animUpdate = func_8013631C;
    }
    skelAnime->transCurrentFrame = 0.0f;
}

s32 func_801360E0(GlobalContext *globalCtx, SkelAnime *skelAnime) {
    return skelAnime->animUpdate(globalCtx, skelAnime);
}

s32 func_80136104(GlobalContext *globalCtx, SkelAnime *skelAnime) {
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f12;

    temp_f0 = skelAnime->transCurrentFrame;
    temp_f12 = temp_f0;
    skelAnime->transCurrentFrame = temp_f0 - (skelAnime->transitionStep * ((f32) globalCtx->state.framerateDivisor * 0.5f));
    if (skelAnime->transCurrentFrame <= 0.0f) {
        sp2C = temp_f12;
        func_801360A8(skelAnime);
    }
    SkelAnime_LoadAnimationType2(globalCtx, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl, skelAnime->transitionDrawTbl, 1.0f - (skelAnime->transCurrentFrame / temp_f12));
    return 0;
}

void func_801361BC(GlobalContext *globalCtx, SkelAnime *skelAnime) {
    f32 temp_f0;
    f32 temp_f0_2;

    SkelAnime_LoadLinkAnimetion(globalCtx, (LinkAnimationHeader *) skelAnime->animCurrentSeg, (s32) skelAnime->animCurrentFrame, (s32) skelAnime->limbCount, (void *) skelAnime->limbDrawTbl);
    temp_f0 = skelAnime->transCurrentFrame;
    if (temp_f0 != 0.0f) {
        skelAnime->transCurrentFrame = temp_f0 - (skelAnime->transitionStep * ((f32) globalCtx->state.framerateDivisor * 0.5f));
        temp_f0_2 = skelAnime->transCurrentFrame;
        if (temp_f0_2 <= 0.0f) {
            skelAnime->transCurrentFrame = 0.0f;
            return;
        }
        SkelAnime_LoadAnimationType2(globalCtx, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl, skelAnime->transitionDrawTbl, temp_f0_2);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

s32 func_80136288(GlobalContext *globalCtx, SkelAnime *skelAnime) {
    f32 temp_f0;
    f32 temp_f2;

    skelAnime->animCurrentFrame += skelAnime->animPlaybackSpeed * ((f32) globalCtx->state.framerateDivisor * 0.5f);
    temp_f0 = skelAnime->animCurrentFrame;
    if (temp_f0 < 0.0f) {
        skelAnime->animCurrentFrame = temp_f0 + skelAnime->totalFrames;
    } else {
        temp_f2 = skelAnime->totalFrames;
        if (temp_f2 <= temp_f0) {
            skelAnime->animCurrentFrame = temp_f0 - temp_f2;
        }
    }
    func_801361BC(globalCtx, skelAnime);
    return 0;
}

s32 func_8013631C(GlobalContext *globalCtx, SkelAnime *skelAnime) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f12 = skelAnime->animFrameCount;
    temp_f0 = skelAnime->animCurrentFrame;
    if (temp_f12 == temp_f0) {
        func_801361BC(globalCtx, skelAnime);
        return 1;
    }
    temp_f2 = skelAnime->animPlaybackSpeed;
    skelAnime->animCurrentFrame = temp_f0 + (temp_f2 * ((f32) globalCtx->state.framerateDivisor * 0.5f));
    temp_f0_2 = skelAnime->animCurrentFrame;
    if (((temp_f0_2 - temp_f12) * temp_f2) > 0.0f) {
        skelAnime->animCurrentFrame = temp_f12;
    } else if (temp_f0_2 < 0.0f) {
        skelAnime->animCurrentFrame = temp_f0_2 + skelAnime->totalFrames;
    } else {
        temp_f2_2 = skelAnime->totalFrames;
        if (temp_f2_2 <= temp_f0_2) {
            skelAnime->animCurrentFrame = temp_f0_2 - temp_f2_2;
        }
    }
    func_801361BC(globalCtx, skelAnime);
    return 0;
}

void SkelAnime_SetTransition(GlobalContext *globalCtx, SkelAnime *skelAnime, f32 transitionRate) {
    skelAnime->transCurrentFrame = 1.0f;
    skelAnime->transitionStep = 1.0f / transitionRate;
}

void SkelAnime_ChangeLinkAnim(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg, f32 playbackSpeed, f32 frame, f32 frameCount, u8 animationMode, f32 transitionRate) {
    f32 phi_f12;

    skelAnime->mode = animationMode;
    if ((transitionRate != 0.0f) && ((linkAnimationHeaderSeg != skelAnime->animCurrentSeg) || (frame != skelAnime->animCurrentFrame))) {
        if (transitionRate < 0.0f) {
            transitionRate = transitionRate;
            func_801360A8(skelAnime);
            SkelAnime_CopyVec3s(skelAnime, skelAnime->transitionDrawTbl, skelAnime->limbDrawTbl);
            phi_f12 = -transitionRate;
        } else {
            skelAnime->animUpdate = func_80136104;
            transitionRate = transitionRate;
            SkelAnime_LoadLinkAnimetion(globalCtx, linkAnimationHeaderSeg, (s32) frame, (s32) skelAnime->limbCount, (void *) skelAnime->transitionDrawTbl);
            phi_f12 = transitionRate;
        }
        skelAnime->transCurrentFrame = 1.0f;
        skelAnime->transitionStep = 1.0f / phi_f12;
    } else {
        func_801360A8(skelAnime);
        SkelAnime_LoadLinkAnimetion(globalCtx, linkAnimationHeaderSeg, (s32) frame, (s32) skelAnime->limbCount, (void *) skelAnime->limbDrawTbl);
        skelAnime->transCurrentFrame = 0.0f;
    }
    skelAnime->animCurrentSeg = (AnimationHeader *) linkAnimationHeaderSeg;
    skelAnime->initialFrame = frame;
    skelAnime->animCurrentFrame = frame;
    skelAnime->animFrameCount = frameCount;
    skelAnime->totalFrames = (f32) SkelAnime_GetTotalFrames((AnimationHeaderCommon *) linkAnimationHeaderSeg);
    skelAnime->animPlaybackSpeed = playbackSpeed;
}

void SkelAnime_ChangeLinkAnimDefaultStop(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg) {
    SkelAnime_ChangeLinkAnim(globalCtx, skelAnime, linkAnimationHeaderSeg, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) linkAnimationHeaderSeg), (u8) 2, 0.0f);
}

void SkelAnime_ChangeLinkAnimPlaybackStop(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg, f32 playbackSpeed) {
    SkelAnime_ChangeLinkAnim(globalCtx, skelAnime, linkAnimationHeaderSeg, playbackSpeed, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) linkAnimationHeaderSeg), (u8) 2, 0.0f);
}

void SkelAnime_ChangeLinkAnimDefaultRepeat(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg) {
    SkelAnime_ChangeLinkAnim(globalCtx, skelAnime, linkAnimationHeaderSeg, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) linkAnimationHeaderSeg), (u8) 0, 0.0f);
}

void SkelAnime_ChangeLinkAnimPlaybackRepeat(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg, f32 playbackSpeed) {
    SkelAnime_ChangeLinkAnim(globalCtx, skelAnime, linkAnimationHeaderSeg, playbackSpeed, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) linkAnimationHeaderSeg), (u8) 0, 0.0f);
}

void func_8013670C(GlobalContext *globalCtx, SkelAnime *skelAnime) {
    SkelAnime_LoadAnimationType1(globalCtx, (s32) skelAnime->limbCount, skelAnime->transitionDrawTbl, skelAnime->limbDrawTbl);
}

void func_8013673C(GlobalContext *globalCtx, SkelAnime *skelAnime) {
    SkelAnime_LoadAnimationType1(globalCtx, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl, skelAnime->transitionDrawTbl);
}

void func_8013676C(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg, f32 frame) {
    SkelAnime_LoadLinkAnimetion(globalCtx, linkAnimationHeaderSeg, (s32) frame, (s32) skelAnime->limbCount, (void *) skelAnime->transitionDrawTbl);
}

void func_801367B0(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg, f32 frame) {
    SkelAnime_LoadLinkAnimetion(globalCtx, linkAnimationHeaderSeg, (s32) frame, (s32) skelAnime->limbCount, (void *) skelAnime->limbDrawTbl);
}

void func_801367F4(GlobalContext *globalCtx, SkelAnime *skelAnime, f32 frame) {
    SkelAnime_LoadAnimationType2(globalCtx, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl, skelAnime->transitionDrawTbl, frame);
}

void func_8013682C(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg, f32 transitionFrame, LinkAnimationHeader *LinkAnimationHeaderSeg2, f32 frame, f32 transitionRate, Vec3s *limbDrawTbl) {
    s32 sp28;
    s32 temp_v0;

    SkelAnime_LoadLinkAnimetion(globalCtx, linkAnimationHeaderSeg, (s32) transitionFrame, (s32) skelAnime->limbCount, (void *) skelAnime->limbDrawTbl);
    temp_v0 = (s32) (limbDrawTbl + 0xF) & ~0xF;
    sp28 = temp_v0;
    SkelAnime_LoadLinkAnimetion(globalCtx, LinkAnimationHeaderSeg2, (s32) frame, (s32) skelAnime->limbCount, (void *) temp_v0);
    SkelAnime_LoadAnimationType2(globalCtx, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl, (Vec3s *) sp28, transitionRate);
}

void func_801368CC(GlobalContext *globalCtx, SkelAnime *skelAnime, LinkAnimationHeader *linkAnimationHeaderSeg, f32 transitionFrame, LinkAnimationHeader *LinkAnimationHeaderSeg2, f32 frame, f32 transitionRate, Vec3s *limbDrawTbl) {
    s32 sp28;
    s32 temp_v0;

    SkelAnime_LoadLinkAnimetion(globalCtx, linkAnimationHeaderSeg, (s32) transitionFrame, (s32) skelAnime->limbCount, (void *) skelAnime->transitionDrawTbl);
    temp_v0 = (s32) (limbDrawTbl + 0xF) & ~0xF;
    sp28 = temp_v0;
    SkelAnime_LoadLinkAnimetion(globalCtx, LinkAnimationHeaderSeg2, (s32) frame, (s32) skelAnime->limbCount, (void *) temp_v0);
    SkelAnime_LoadAnimationType2(globalCtx, (s32) skelAnime->limbCount, skelAnime->transitionDrawTbl, (Vec3s *) sp28, transitionRate);
}

void SkelAnime_SetModeStop(SkelAnime *skelAnime) {
    skelAnime->mode = 2;
    func_801360A8(skelAnime);
}

s32 func_80136990(SkelAnime *skelAnime, f32 arg1, f32 updateRate) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 phi_f2;
    f32 phi_f14;

    temp_f0 = skelAnime->animPlaybackSpeed * updateRate;
    temp_f2 = skelAnime->animCurrentFrame - temp_f0;
    phi_f2 = temp_f2;
    phi_f14 = arg1;
    if (temp_f2 < 0.0f) {
        phi_f2 = temp_f2 + skelAnime->totalFrames;
    } else {
        temp_f12 = skelAnime->totalFrames;
        if (temp_f12 <= temp_f2) {
            phi_f2 = temp_f2 - temp_f12;
        }
    }
    if ((arg1 == 0.0f) && (temp_f0 > 0.0f)) {
        phi_f14 = skelAnime->totalFrames;
    }
    temp_f12_2 = (phi_f2 + temp_f0) - phi_f14;
    if (((temp_f12_2 * temp_f0) >= 0.0f) && (((temp_f12_2 - temp_f0) * temp_f0) < 0.0f)) {
        return 1;
    }
    return 0;
}

s32 func_80136A48(SkelAnime *skelAnime, f32 arg1) {
    return func_80136990(skelAnime, arg1, gFramerateDivisorHalf);
}

void SkelAnime_Init(GlobalContext *globalCtx, SkelAnime *skelAnime, SkeletonHeader *skeletonHeaderSeg, AnimationHeader *animationSeg, Vec3s *limbDrawTbl, Vec3s *transitionDrawTable, s32 limbCount) {
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual((void *) skeletonHeaderSeg);
    skelAnime->limbCount = temp_v0->unk_4 + 1;
    skelAnime->skeleton = Lib_SegmentedToVirtual(temp_v0->unk_0);
    if (limbDrawTbl == 0) {
        skelAnime->limbDrawTbl = zelda_malloc(skelAnime->limbCount * 6);
        skelAnime->transitionDrawTbl = zelda_malloc(skelAnime->limbCount * 6);
    } else {
        skelAnime->limbDrawTbl = limbDrawTbl;
        skelAnime->transitionDrawTbl = transitionDrawTable;
    }
    if (animationSeg != 0) {
        SkelAnime_ChangeAnimDefaultRepeat(skelAnime, animationSeg);
    }
}

void SkelAnime_InitSV(GlobalContext *globalCtx, SkelAnime *skelAnime, FlexSkeletonHeader *skeletonHeaderSeg, AnimationHeader *animationSeg, Vec3s *limbDrawTbl, Vec3s *transitionDrawTable, s32 limbCount) {
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual((void *) skeletonHeaderSeg);
    skelAnime->limbCount = temp_v0->unk_4 + 1;
    skelAnime->dListCount = temp_v0->unk_8;
    skelAnime->skeleton = Lib_SegmentedToVirtual(temp_v0->unk_0);
    if (limbDrawTbl == 0) {
        skelAnime->limbDrawTbl = zelda_malloc(skelAnime->limbCount * 6);
        skelAnime->transitionDrawTbl = zelda_malloc(skelAnime->limbCount * 6);
    } else {
        skelAnime->limbDrawTbl = limbDrawTbl;
        skelAnime->transitionDrawTbl = transitionDrawTable;
    }
    if (animationSeg != 0) {
        SkelAnime_ChangeAnimDefaultRepeat(skelAnime, animationSeg);
    }
}

void SkelAnime_InitSkin(GlobalContext *globalCtx, SkelAnime *skelAnime, SkeletonHeader *skeletonHeaderSeg, AnimationHeader *animationSeg) {
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual((void *) skeletonHeaderSeg);
    skelAnime->limbCount = temp_v0->unk_4 + 1;
    skelAnime->skeleton = Lib_SegmentedToVirtual(temp_v0->unk_0);
    skelAnime->limbDrawTbl = zelda_malloc(skelAnime->limbCount * 6);
    skelAnime->transitionDrawTbl = zelda_malloc(skelAnime->limbCount * 6);
    if (animationSeg != 0) {
        SkelAnime_ChangeAnimDefaultRepeat(skelAnime, animationSeg);
    }
}

void func_80136C84(SkelAnime *skelAnime) {
    u8 temp_v0;

    temp_v0 = skelAnime->mode;
    if ((s32) temp_v0 < 2) {
        skelAnime->animUpdate = (s32 (*)(GlobalContext *, SkelAnime *)) func_8013702C;
        return;
    }
    if ((s32) temp_v0 < 4) {
        skelAnime->animUpdate = (s32 (*)(GlobalContext *, SkelAnime *)) func_8013713C;
        return;
    }
    skelAnime->animUpdate = (s32 (*)(GlobalContext *, SkelAnime *)) func_801370B0;
}

s32 SkelAnime_FrameUpdateMatrix(SkelAnime *skelAnime) {
    return skelAnime->animUpdate((GlobalContext *) skelAnime, MIPS2C_ERROR(Read from unset register $a1));
}

s32 func_80136CF4(SkelAnime *skelAnime) {
    f32 sp2C;
    Vec3s *temp_a1;
    f32 temp_f0;
    f32 temp_f12;

    temp_f0 = skelAnime->transCurrentFrame;
    temp_f12 = temp_f0;
    skelAnime->transCurrentFrame = temp_f0 - (skelAnime->transitionStep * gFramerateDivisorThird);
    if (skelAnime->transCurrentFrame <= 0.0f) {
        sp2C = temp_f12;
        func_80136C84(skelAnime);
        skelAnime->transCurrentFrame = 0.0f;
    }
    temp_a1 = skelAnime->limbDrawTbl;
    SkelAnime_InterpolateVec3s((s32) skelAnime->limbCount, temp_a1, temp_a1, skelAnime->transitionDrawTbl, 1.0f - (skelAnime->transCurrentFrame / temp_f12));
    return 0;
}

s32 func_80136D98(SkelAnime *skelAnime) {
    s16 sp2E;
    s16 sp2C;
    f32 sp28;
    Vec3s *temp_a1;
    f32 temp_f0;
    s32 temp_a2;
    s32 temp_f16;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_f0 = skelAnime->transCurrentFrame;
    temp_a2 = (s32) (temp_f0 * 16384.0f);
    skelAnime->transCurrentFrame = temp_f0 - (skelAnime->transitionStep * gFramerateDivisorThird);
    if (skelAnime->transCurrentFrame <= 0.0f) {
        sp2E = (s16) temp_a2;
        func_80136C84(skelAnime);
        skelAnime->transCurrentFrame = 0.0f;
    }
    temp_f16 = (s32) (skelAnime->transCurrentFrame * 16384.0f);
    if ((s32) skelAnime->unk03 < 0) {
        sp2C = (s16) temp_f16;
        sp28 = 1.0f - Math_CosS((s16) temp_a2);
        phi_f2 = 1.0f - Math_CosS((s16) temp_f16);
    } else {
        sp2C = (s16) temp_f16;
        sp28 = Math_SinS((s16) temp_a2);
        phi_f2 = Math_SinS((s16) temp_f16);
    }
    if (phi_f2 != 0.0f) {
        phi_f2_2 = phi_f2 / sp28;
    } else {
        phi_f2_2 = 0.0f;
    }
    temp_a1 = skelAnime->limbDrawTbl;
    SkelAnime_InterpolateVec3s((s32) skelAnime->limbCount, temp_a1, temp_a1, skelAnime->transitionDrawTbl, 1.0f - phi_f2_2);
    return 0;
}

void func_80136F04(SkelAnime *skelAnime) {
    ? sp38;
    f32 sp30;
    Vec3s *temp_a1_2;
    Vec3s *temp_a1_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    s32 temp_a1;
    s32 temp_f8;
    s32 phi_a1;

    SkelAnime_AnimateFrame(skelAnime->animCurrentSeg, (s32) skelAnime->animCurrentFrame, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl);
    if ((skelAnime->mode & 1) != 0) {
        temp_f0 = skelAnime->animCurrentFrame;
        temp_f8 = (s32) temp_f0;
        temp_a1 = temp_f8 + 1;
        temp_f2 = temp_f0 - (f32) temp_f8;
        phi_a1 = temp_a1;
        if (temp_a1 >= (s32) skelAnime->totalFrames) {
            phi_a1 = 0;
        }
        sp30 = temp_f2;
        SkelAnime_AnimateFrame(skelAnime->animCurrentSeg, phi_a1, (s32) skelAnime->limbCount, (Vec3s *) &sp38);
        temp_a1_2 = skelAnime->limbDrawTbl;
        SkelAnime_InterpolateVec3s((s32) skelAnime->limbCount, temp_a1_2, temp_a1_2, (Vec3s *) &sp38, temp_f2);
    }
    temp_f0_2 = skelAnime->transCurrentFrame;
    if (temp_f0_2 != 0.0f) {
        skelAnime->transCurrentFrame = temp_f0_2 - (skelAnime->transitionStep * gFramerateDivisorThird);
        temp_f0_3 = skelAnime->transCurrentFrame;
        if (temp_f0_3 <= 0.0f) {
            skelAnime->transCurrentFrame = 0.0f;
            return;
        }
        temp_a1_3 = skelAnime->limbDrawTbl;
        SkelAnime_InterpolateVec3s((s32) skelAnime->limbCount, temp_a1_3, temp_a1_3, skelAnime->transitionDrawTbl, temp_f0_3);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

s32 func_8013702C(SkelAnime *skelAnime) {
    f32 temp_f0;
    f32 temp_f2;

    skelAnime->animCurrentFrame += skelAnime->animPlaybackSpeed * gFramerateDivisorThird;
    temp_f0 = skelAnime->animCurrentFrame;
    if (temp_f0 < 0.0f) {
        skelAnime->animCurrentFrame = temp_f0 + skelAnime->totalFrames;
    } else {
        temp_f2 = skelAnime->totalFrames;
        if (temp_f2 <= temp_f0) {
            skelAnime->animCurrentFrame = temp_f0 - temp_f2;
        }
    }
    func_80136F04(skelAnime);
    return 0;
}

s32 func_801370B0(SkelAnime *skelAnime) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = skelAnime->initialFrame;
    skelAnime->animCurrentFrame += skelAnime->animPlaybackSpeed * gFramerateDivisorThird;
    temp_f0 = skelAnime->animCurrentFrame;
    if (temp_f0 < temp_f12) {
        skelAnime->animCurrentFrame = (temp_f0 - temp_f12) + skelAnime->animFrameCount;
    } else {
        temp_f2 = skelAnime->animFrameCount;
        if (temp_f2 <= temp_f0) {
            skelAnime->animCurrentFrame = (temp_f0 - temp_f2) + temp_f12;
        }
    }
    func_80136F04(skelAnime);
    return 0;
}

s32 func_8013713C(SkelAnime *skelAnime) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f12 = skelAnime->animFrameCount;
    temp_f0 = skelAnime->animCurrentFrame;
    if (temp_f12 == temp_f0) {
        SkelAnime_AnimateFrame(skelAnime->animCurrentSeg, (s32) temp_f0, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl);
        func_80136F04(skelAnime);
        return 1;
    }
    temp_f2 = skelAnime->animPlaybackSpeed;
    skelAnime->animCurrentFrame = temp_f0 + (temp_f2 * gFramerateDivisorThird);
    temp_f0_2 = skelAnime->animCurrentFrame;
    if (((temp_f0_2 - temp_f12) * temp_f2) > 0.0f) {
        skelAnime->animCurrentFrame = temp_f12;
    } else if (temp_f0_2 < 0.0f) {
        skelAnime->animCurrentFrame = temp_f0_2 + skelAnime->totalFrames;
    } else {
        temp_f2_2 = skelAnime->totalFrames;
        if (temp_f2_2 <= temp_f0_2) {
            skelAnime->animCurrentFrame = temp_f0_2 - temp_f2_2;
        }
    }
    func_80136F04(skelAnime);
    return 0;
}

void SkelAnime_ChangeAnimImpl(SkelAnime *skelAnime, AnimationHeader *animationSeg, f32 playbackSpeed, f32 frame, f32 frameCount, u8 animationType, f32 transitionRate, s8 unk2) {
    u8 temp_v1;
    f32 phi_f12;

    skelAnime->mode = animationType;
    if ((transitionRate != 0.0f) && ((animationSeg != skelAnime->animCurrentSeg) || (frame != skelAnime->animCurrentFrame))) {
        if (transitionRate < 0.0f) {
            transitionRate = transitionRate;
            func_80136C84(skelAnime);
            SkelAnime_CopyVec3s(skelAnime, skelAnime->transitionDrawTbl, skelAnime->limbDrawTbl);
            phi_f12 = -transitionRate;
        } else {
            if (unk2 != 0) {
                skelAnime->animUpdate = (s32 (*)(GlobalContext *, SkelAnime *)) func_80136D98;
                skelAnime->unk03 = unk2;
            } else {
                skelAnime->animUpdate = (s32 (*)(GlobalContext *, SkelAnime *)) func_80136CF4;
            }
            transitionRate = transitionRate;
            SkelAnime_AnimateFrame(animationSeg, (s32) frame, (s32) skelAnime->limbCount, skelAnime->transitionDrawTbl);
            phi_f12 = transitionRate;
        }
        skelAnime->transCurrentFrame = 1.0f;
        skelAnime->transitionStep = 1.0f / phi_f12;
    } else {
        func_80136C84(skelAnime);
        SkelAnime_AnimateFrame(animationSeg, (s32) frame, (s32) skelAnime->limbCount, skelAnime->limbDrawTbl);
        skelAnime->transCurrentFrame = 0.0f;
    }
    skelAnime->animCurrentSeg = animationSeg;
    skelAnime->initialFrame = frame;
    skelAnime->animFrameCount = frameCount;
    temp_v1 = skelAnime->mode;
    skelAnime->totalFrames = (f32) SkelAnime_GetTotalFrames((AnimationHeaderCommon *) animationSeg);
    if ((s32) temp_v1 >= 4) {
        skelAnime->animCurrentFrame = 0.0f;
    } else {
        skelAnime->animCurrentFrame = frame;
        if ((s32) temp_v1 < 2) {
            skelAnime->animFrameCount = skelAnime->totalFrames - 1.0f;
        }
    }
    skelAnime->animPlaybackSpeed = playbackSpeed;
}

void SkelAnime_ChangeAnim(SkelAnime *skelAnime, AnimationHeader *animationSeg, f32 playbackSpeed, f32 frame, f32 frameCount, u8 mode, f32 transitionRate) {
    SkelAnime_ChangeAnimImpl(skelAnime, animationSeg, playbackSpeed, frame, frameCount, (u8) (s32) mode, transitionRate, (s8) 0);
}

void SkelAnime_ChangeAnimDefaultStop(SkelAnime *skelAnime, AnimationHeader *animationSeg) {
    SkelAnime_ChangeAnim(skelAnime, animationSeg, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) animationSeg), (u8) 2, 0.0f);
}

void SkelAnime_ChangeAnimTransitionStop(SkelAnime *skelAnime, AnimationHeader *animationSeg, f32 transitionRate) {
    SkelAnime_ChangeAnim(skelAnime, animationSeg, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) animationSeg), (u8) 2, transitionRate);
}

void SkelAnime_ChangeAnimPlaybackStop(SkelAnime *skelAnime, AnimationHeader *animationSeg, f32 playbackSpeed) {
    SkelAnime_ChangeAnim(skelAnime, animationSeg, playbackSpeed, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) animationSeg), (u8) 2, 0.0f);
}

void SkelAnime_ChangeAnimDefaultRepeat(SkelAnime *skelAnime, AnimationHeader *animationSeg) {
    SkelAnime_ChangeAnim(skelAnime, animationSeg, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) animationSeg), (u8) 0, 0.0f);
}

void SkelAnime_ChangeAnimTransitionRepeat(SkelAnime *skelAnime, AnimationHeader *animationSeg, f32 transitionRate) {
    SkelAnime_ChangeAnim(skelAnime, animationSeg, 1.0f, 0.0f, 0.0f, (u8) 0, transitionRate);
}

void SkelAnime_ChangeAnimPlaybackRepeat(SkelAnime *skelAnime, AnimationHeader *animationSeg, f32 playbackSpeed) {
    SkelAnime_ChangeAnim(skelAnime, animationSeg, playbackSpeed, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) animationSeg), (u8) 0, 0.0f);
}

void SkelAnime_AnimSetStop(SkelAnime *skelAnime) {
    skelAnime->mode = 2;
    skelAnime->animFrameCount = skelAnime->totalFrames;
    func_80136C84(skelAnime);
}

void SkelAnime_AnimReverse(SkelAnime *skelAnime) {
    f32 temp_f4;

    temp_f4 = skelAnime->animFrameCount;
    skelAnime->animFrameCount = skelAnime->initialFrame;
    skelAnime->animPlaybackSpeed = -skelAnime->animPlaybackSpeed;
    skelAnime->initialFrame = temp_f4;
}

void func_80137674(SkelAnime *skelAnime, Vec3s *dst, Vec3s *src, u8 *index) {
    s32 temp_v0;
    u8 temp_v1;
    u8 *phi_a3;
    Vec3s *phi_a2;
    Vec3s *phi_s0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v1 = skelAnime->limbCount;
    phi_a3 = index;
    phi_a2 = src;
    phi_s0 = dst;
    phi_v0 = 0;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 > 0) {
        do {
            temp_v0 = phi_v0 + 1;
            phi_a3 += 1;
            phi_v0 = temp_v0;
            if (*phi_a3 != 0) {
                phi_s0->unk_0 = (unaligned s32) phi_a2->unk_0;
                phi_s0->z = phi_a2->z;
                phi_v1 = (s32) skelAnime->limbCount;
            }
            phi_a2 += 6;
            phi_s0 += 6;
        } while (temp_v0 < phi_v1);
    }
}

void func_801376DC(SkelAnime *skelAnime, Vec3s *dst, Vec3s *src, u8 *arg3) {
    s32 temp_v0;
    u8 temp_v1;
    u8 *phi_a3;
    Vec3s *phi_a2;
    Vec3s *phi_s0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v1 = skelAnime->limbCount;
    phi_a3 = arg3;
    phi_a2 = src;
    phi_s0 = dst;
    phi_v0 = 0;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 > 0) {
        do {
            temp_v0 = phi_v0 + 1;
            phi_a3 += 1;
            phi_v0 = temp_v0;
            if (*phi_a3 == 0) {
                phi_s0->unk_0 = (unaligned s32) phi_a2->unk_0;
                phi_s0->z = phi_a2->z;
                phi_v1 = (s32) skelAnime->limbCount;
            }
            phi_a2 += 6;
            phi_s0 += 6;
        } while (temp_v0 < phi_v1);
    }
}

void func_80137748(SkelAnime *skelAnime, Vec3f *pos, s16 angle) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    Vec3s *temp_v0;
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_t1;
    s16 temp_t2;
    u8 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if ((skelAnime->flags & 0x10) != 0) {
        pos->z = 0.0f;
        pos->x = 0.0f;
    } else {
        temp_v0 = skelAnime->limbDrawTbl;
        sp24 = (f32) (temp_v0->x - skelAnime->prevFramePos.x);
        temp_t2 = skelAnime->prevFramePos.z;
        temp_t1 = temp_v0->z;
        skelAnime = skelAnime;
        sp20 = (f32) (temp_t1 - temp_t2);
        sp1C = Math_SinS(angle);
        temp_f0 = Math_CosS(angle);
        temp_f6 = sp20 * temp_f0;
        pos->x = (sp24 * temp_f0) + (sp20 * sp1C);
        pos->z = temp_f6 - (sp24 * sp1C);
    }
    temp_v0_2 = skelAnime->limbDrawTbl;
    skelAnime->prevFramePos.x = temp_v0_2->x;
    temp_v0_2->x = skelAnime->unk3E.x;
    temp_v0_3 = skelAnime->limbDrawTbl;
    skelAnime->prevFramePos.z = temp_v0_3->z;
    temp_v0_3->z = skelAnime->unk3E.z;
    temp_v1 = skelAnime->flags;
    if ((temp_v1 & 2) != 0) {
        if ((temp_v1 & 0x10) != 0) {
            pos->y = 0.0f;
        } else {
            pos->y = (f32) (skelAnime->limbDrawTbl->y - skelAnime->prevFramePos.y);
        }
        temp_v0_4 = skelAnime->limbDrawTbl;
        skelAnime->prevFramePos.y = temp_v0_4->y;
        temp_v0_4->y = skelAnime->unk3E.y;
    } else {
        pos->y = 0.0f;
        skelAnime->prevFramePos.y = skelAnime->limbDrawTbl->y;
    }
    skelAnime->flags &= 0xFFEF;
}

s32 func_801378B8(SkelAnime *skelAnime, f32 arg1) {
    return func_80136990(skelAnime, arg1, 1.0f);
}

void SkelAnime_Free(SkelAnime *skelAnime, GlobalContext *globalCtx) {
    Vec3s *temp_a0;
    Vec3s *temp_a1;
    void *temp_a0_2;

    temp_a1 = skelAnime->limbDrawTbl;
    temp_a0 = temp_a1;
    if (temp_a1 != 0) {
        skelAnime = skelAnime;
        zelda_free((void *) temp_a0);
    }
    temp_a0_2 = skelAnime->transitionDrawTbl;
    if (temp_a0_2 != 0) {
        zelda_free(temp_a0_2);
    }
}

void SkelAnime_CopyVec3s(SkelAnime *skelAnime, Vec3s *dst, Vec3s *src) {
    bcopy((void *) src, (void *) dst, skelAnime->limbCount * 6);
}
