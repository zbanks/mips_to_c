typedef struct GameAllocNode {
    /* 0x00 */ GameAllocNode *next;
    /* 0x04 */ GameAllocNode *prev;
    /* 0x08 */ u32 size;
    /* 0x0C */ u16 unk_C;                           /* inferred */
    /* 0x0E */ s16 unk_E;                           /* inferred */
} GameAllocNode;                                    /* size = 0x10 */

typedef struct GameState {
    /* 0x00 */ GraphicsContext *gfxCtx;
    /* 0x04 */ void (*main)(GameState *);
    /* 0x08 */ void (*destroy)(GameState *);
    /* 0x0C */ void (*nextGameStateInit)(GameState *);
    /* 0x10 */ u32 nextGameStateSize;
    /* 0x14 */ Input input[4];
    /* 0x74 */ TwoHeadArena heap;
    /* 0x84 */ GameAlloc alloc;
    /* 0x98 */ s16 unk_98;                          /* inferred */
    /* 0x9A */ s16 unk_9A;                          /* inferred */
    /* 0x9B */ u8 running;                          /* overlap */
    /* 0x9C */ u32 frames;
    /* 0xA0 */ s16 unk_A0;                          /* inferred */
    /* 0xA2 */ u8 framerateDivisor;
    /* 0xA3 */ char pad_A3[0x1];
} GameState;                                        /* size = 0xA4 */

typedef struct GraphicsContext {
    /* 0x000 */ Gfx *polyOpaBuffer;
    /* 0x004 */ Gfx *polyXluBuffer;
    /* 0x008 */ char pad_8[0x8];                    /* maybe part of polyXluBuffer[3]? */
    /* 0x010 */ Gfx *overlayBuffer;
    /* 0x014 */ char pad_14[0x44];                  /* maybe part of overlayBuffer[18]? */
    /* 0x058 */ OSMesgQueue *unk58;
    /* 0x05C */ OSMesgQueue unk5C;
    /* 0x074 */ char pad_74[0x9C];                  /* maybe part of unk5C[7]? */
    /* 0x110 */ ? unk_110;                          /* inferred */
    /* 0x110 */ char pad_110[0x90];
    /* 0x1A0 */ Gfx *unk1A0;
    /* 0x1A4 */ TwoHeadGfxArena unk1A4;
    /* 0x1B4 */ Gfx *unk1B4;
    /* 0x1B8 */ TwoHeadGfxArena unk1B8;
    /* 0x1C8 */ char pad_1C8[0x38];                 /* maybe part of unk1B8[4]? */
    /* 0x200 */ ? unk_200;                          /* inferred */
    /* 0x200 */ char pad_200[0x40];
    /* 0x240 */ s16 unk_240;                        /* inferred */
    /* 0x242 */ s16 unk_242;                        /* inferred */
    /* 0x244 */ char pad_244[0xC];                  /* maybe part of unk_242[7]? */
    /* 0x250 */ s16 unk_250;                        /* inferred */
    /* 0x252 */ s16 unk_252;                        /* inferred */
    /* 0x254 */ char pad_254[0xC];                  /* maybe part of unk_252[7]? */
    /* 0x260 */ s16 unk_260;                        /* inferred */
    /* 0x262 */ s16 unk_262;                        /* inferred */
    /* 0x264 */ char pad_264[0xC];                  /* maybe part of unk_262[7]? */
    /* 0x270 */ s16 unk_270;                        /* inferred */
    /* 0x272 */ s16 unk_272;                        /* inferred */
    /* 0x274 */ OSViMode *unk274;
    /* 0x278 */ void *zbuffer;
    /* 0x27C */ char pad_27C[0x4];
    /* 0x280 */ s16 unk_280;                        /* inferred */
    /* 0x282 */ s16 unk_282;                        /* inferred */
    /* 0x284 */ char pad_284[0xC];                  /* maybe part of unk_282[7]? */
    /* 0x290 */ s16 unk_290;                        /* inferred */
    /* 0x292 */ s16 unk_292;                        /* inferred */
    /* 0x294 */ char pad_294[0x4];                  /* maybe part of unk_292[3]? */
    /* 0x298 */ TwoHeadGfxArena overlay;
    /* 0x2A8 */ TwoHeadGfxArena polyOpa;
    /* 0x2B8 */ TwoHeadGfxArena polyXlu;
    /* 0x2C8 */ s32 displaylistCounter;
    /* 0x2CC */ void *framebuffer;
    /* 0x2D0 */ s32 pad2D0;
    /* 0x2D4 */ u32 viConfigFeatures;
    /* 0x2D8 */ char pad_2D8[0x3];
    /* 0x2DB */ u8 framebufferCounter;
    /* 0x2DC */ char pad_2DC[0x8];                  /* maybe part of framebufferCounter[9]? */
    /* 0x2E4 */ f32 viConfigXScale;
    /* 0x2E8 */ f32 viConfigYScale;
    /* 0x2EC */ char pad_2EC[0x4];
} GraphicsContext;                                  /* size = 0x2F0 */

struct _mips2c_stack_FileChoose_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_FileChoose_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ TwoHeadArena *sp28;                  /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ u8 *sp30;                            /* inferred */
    /* 0x34 */ u32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_FileChoose_Main {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x70];                   /* maybe part of sp28[29]? */
    /* 0x9C */ GraphicsContext *sp9C;               /* inferred */
    /* 0xA0 */ char pad_A0[0x10];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_FileChoose_RenderView {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ View *sp18;                          /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ void **sp34;                         /* inferred */
    /* 0x38 */ void **sp38;                         /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_FileChoose_UpdateAndDrawSkybox {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x10];                   /* maybe part of sp3C[5]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_FileChoose_nop8080BC4C {};     /* size 0x0 */

struct _mips2c_stack_FileChoose_nop8080bc44 {};     /* size 0x0 */

struct _mips2c_stack_func_80804010 {};              /* size 0x0 */

struct _mips2c_stack_func_808041A0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80804654 {};              /* size 0x0 */

struct _mips2c_stack_func_808047D8 {};              /* size 0x0 */

struct _mips2c_stack_func_8080489C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80804DAC {};              /* size 0x0 */

struct _mips2c_stack_func_80804E74 {};              /* size 0x0 */

struct _mips2c_stack_func_80804F98 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8080525C {};              /* size 0x0 */

struct _mips2c_stack_func_808052B0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ SramContext *sp20;                   /* inferred */
    /* 0x24 */ char pad_24[0x14];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808054A4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SramContext *sp18;                   /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808055D0 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808058A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80805918 {};              /* size 0x0 */

struct _mips2c_stack_func_80805A58 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80805B30 {};              /* size 0x0 */

struct _mips2c_stack_func_80805C1C {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80806014 {};              /* size 0x0 */

struct _mips2c_stack_func_80806148 {};              /* size 0x0 */

struct _mips2c_stack_func_80806310 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808067E0 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad_14[0x4];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x1C];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80806BC8 {};              /* size 0x0 */

struct _mips2c_stack_func_80806CA0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ SramContext *sp24;                   /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80806E84 {};              /* size 0x0 */

struct _mips2c_stack_func_80806F30 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808071E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80807390 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SramContext *sp18;                   /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8080742C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808074B4 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
};                                                  /* size = 0x10 */

struct _mips2c_stack_func_808077AC {};              /* size 0x0 */

struct _mips2c_stack_func_80807940 {};              /* size 0x0 */

struct _mips2c_stack_func_80807A78 {};              /* size 0x0 */

struct _mips2c_stack_func_80807C58 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80808214 {
    /* 0x000 */ char pad_0[0x28];
    /* 0x028 */ void *sp28;                         /* inferred */
    /* 0x02C */ char pad_2C[0x8];                   /* maybe part of sp28[3]? */
    /* 0x034 */ void *sp34;                         /* inferred */
    /* 0x038 */ char pad_38[0xD0];                  /* maybe part of sp34[53]? */
    /* 0x108 */ s16 sp108;                          /* inferred */
    /* 0x10A */ char pad_10A[0xE];
};                                                  /* size = 0x118 */

struct _mips2c_stack_func_80808D30 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80808F1C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ GraphicsContext **sp20;              /* inferred */
    /* 0x24 */ GraphicsContext **sp24;              /* inferred */
    /* 0x28 */ GraphicsContext **sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x90];                   /* maybe part of sp28[37]? */
    /* 0xBC */ GraphicsContext *spBC;               /* inferred */
    /* 0xC0 */ char pad_C0[0x2];
    /* 0xC2 */ u16 spC2;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x14];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80809DF0 {};              /* size 0x0 */

struct _mips2c_stack_func_80809EA0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8080A3CC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SramContext *sp1C;                   /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8080A418 {};              /* size 0x0 */

struct _mips2c_stack_func_8080A4A0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ SramContext *sp18;                   /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8080A6BC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SramContext *sp1C;                   /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8080A708 {
    /* 0x000 */ char pad_0[0x2C];
    /* 0x02C */ void *sp2C;                         /* inferred */
    /* 0x030 */ char pad_30[0x134];                 /* maybe part of sp2C[78]? */
    /* 0x164 */ Gfx *sp164;                         /* inferred */
    /* 0x168 */ char pad_168[0x8];                  /* maybe part of sp164[3]? */
    /* 0x170 */ Gfx *sp170;                         /* inferred */
    /* 0x174 */ char pad_174[0x8];                  /* maybe part of sp170[3]? */
    /* 0x17C */ Gfx *sp17C;                         /* inferred */
    /* 0x180 */ char pad_180[0x2C];                 /* maybe part of sp17C[12]? */
    /* 0x1AC */ GraphicsContext *sp1AC;             /* inferred */
    /* 0x1B0 */ char pad_1B0[0x10];
};                                                  /* size = 0x1C0 */

struct _mips2c_stack_func_8080BBFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8080BC20 {};              /* size 0x0 */

struct _mips2c_stack_func_8080BC58 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8080BDAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8080BE60 {};              /* size 0x0 */

struct _mips2c_stack_func_8080C040 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8080C228 {};              /* size 0x0 */

struct _mips2c_stack_func_8080C29C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8080C324 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8080C3A8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x18];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8080D164 {};              /* size 0x0 */

struct _mips2c_stack_func_8080D170 {};              /* size 0x0 */

struct _mips2c_stack_func_8080D1BC {};              /* size 0x0 */

struct _mips2c_stack_func_8080D220 {};              /* size 0x0 */

struct _mips2c_stack_func_8080D284 {};              /* size 0x0 */

struct _mips2c_stack_func_8080D2EC {};              /* size 0x0 */

struct _mips2c_stack_func_8080D3D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8080D40C {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8080D6D4 {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ void *sp50;                          /* inferred */
    /* 0x54 */ char pad_54[0x44];                   /* maybe part of sp50[18]? */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ s32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ u16 spA4;                            /* inferred */
    /* 0xA6 */ u16 spA6;                            /* inferred */
    /* 0xA8 */ u16 spA8;                            /* inferred */
    /* 0xAA */ char pad_AA[0x2];
    /* 0xAC */ s16 spAC;                            /* inferred */
    /* 0xAE */ char pad_AE[0xA];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_8080F25C {
    /* 0x000 */ char pad_0[0x3C];
    /* 0x03C */ void *sp3C;                         /* inferred */
    /* 0x040 */ void *sp40;                         /* inferred */
    /* 0x044 */ void *sp44;                         /* inferred */
    /* 0x048 */ void *sp48;                         /* inferred */
    /* 0x04C */ void *sp4C;                         /* inferred */
    /* 0x050 */ u16 *sp50;                          /* inferred */
    /* 0x054 */ s32 sp54;                           /* inferred */
    /* 0x058 */ char pad_58[0x19F];                 /* maybe part of sp54[104]? */
    /* 0x1F7 */ u8 sp1F7;                           /* inferred */
    /* 0x1F8 */ u16 sp1F8;                          /* inferred */
    /* 0x1FA */ u16 sp1FA;                          /* inferred */
    /* 0x1FC */ u16 sp1FC;                          /* inferred */
    /* 0x1FE */ char pad_1FE[0x2];
    /* 0x200 */ s16 sp200;                          /* inferred */
    /* 0x202 */ s16 sp202;                          /* inferred */
    /* 0x204 */ s16 sp204;                          /* inferred */
    /* 0x206 */ s16 sp206;                          /* inferred */
    /* 0x208 */ s16 sp208;                          /* inferred */
    /* 0x20A */ s16 sp20A;                          /* inferred */
    /* 0x20C */ s16 sp20C;                          /* inferred */
    /* 0x20E */ char pad_20E[0x8];                  /* maybe part of sp20C[5]? */
    /* 0x216 */ s16 sp216;                          /* inferred */
    /* 0x218 */ char pad_218[0x8];
};                                                  /* size = 0x220 */

struct _mips2c_stack_func_808108DC {
    /* 0x000 */ char pad_0[0x40];
    /* 0x040 */ void *sp40;                         /* inferred */
    /* 0x044 */ char pad_44[0x22C];                 /* maybe part of sp40[140]? */
    /* 0x270 */ GraphicsContext *sp270;             /* inferred */
    /* 0x274 */ char pad_274[0xC];
};                                                  /* size = 0x280 */

struct _mips2c_stack_func_80811CB8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ GraphicsContext **sp24;              /* inferred */
    /* 0x28 */ ? *sp28;                             /* inferred */
    /* 0x2C */ ? *sp2C;                             /* inferred */
    /* 0x30 */ ? *sp30;                             /* inferred */
    /* 0x34 */ char pad_34[0x20];                   /* maybe part of sp30[9]? */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ char pad_58[0x2C];                   /* maybe part of sp54[12]? */
    /* 0x84 */ Gfx *sp84;                           /* inferred */
    /* 0x88 */ char pad_88[0x2C];                   /* maybe part of sp84[12]? */
    /* 0xB4 */ Gfx *spB4;                           /* inferred */
    /* 0xB8 */ char pad_B8[0x18];                   /* maybe part of spB4[7]? */
    /* 0xD0 */ GraphicsContext *spD0;               /* inferred */
    /* 0xD4 */ char pad_D4[0x4];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80812460 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
};                                                  /* size = 0x10 */

struct _mips2c_stack_func_80812668 {};              /* size 0x0 */

struct _mips2c_stack_func_80812760 {};              /* size 0x0 */

struct _mips2c_stack_func_80812840 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80812980 {};              /* size 0x0 */

struct _mips2c_stack_func_80812A6C {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80812D44 {};              /* size 0x0 */

struct _mips2c_stack_func_80812D94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80812E94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80812ED0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ GraphicsContext **sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x1C];                   /* maybe part of sp20[8]? */
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x1C];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80813908 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SramContext *sp24;                   /* inferred */
    /* 0x28 */ char pad_28[0x38];
};                                                  /* size = 0x60 */

? ShrinkWindow_Init();                              /* extern */
? func_80143668(void *, void *, ?, u8, f32, f32, f32); /* extern */
? func_80144E78(void *);                            /* extern */
? func_80146628(void *, SramContext *, SaveContext *, void *); /* extern */
? func_80146AA0(GraphicsContext **, GraphicsContext **); /* extern */
? func_80146DF8(SramContext *);                     /* extern */
? func_80147008(SramContext *, s32, s32, void *);   /* extern */
? func_801A3238(?, ?, ?, ?, s32);                   /* extern */
? func_801A3D98(s8);                                /* extern */
? func_801A4058(?);                                 /* extern */
void FileChoose_RenderView(GraphicsContext **arg0, void **arg1, void **arg2, f32 arg3, f32); /* static */
void FileChoose_UpdateAndDrawSkybox(void **arg0);   /* static */
void FileChoose_nop8080BC4C(GraphicsContext **arg0); /* static */
void FileChoose_nop8080bc44();                      /* static */
void func_80804010(void *arg0);                     /* static */
void func_808041A0(void *arg0);                     /* static */
void func_80804654(void *arg0);                     /* static */
void func_808047D8(void *arg0);                     /* static */
void func_8080489C(void *arg0);                     /* static */
void func_80804DAC(void *arg0);                     /* static */
void func_80804E74(void *arg0);                     /* static */
void func_80804F98(void *arg0);                     /* static */
void func_8080525C(void *arg0);                     /* static */
void func_808052B0(void *arg0);                     /* static */
void func_808054A4(void *arg0);                     /* static */
void func_808055D0(void *arg0);                     /* static */
void func_808058A4(void *arg0);                     /* static */
void func_80805918(void *arg0);                     /* static */
void func_80805A58(void *arg0);                     /* static */
void func_80805B30(void *arg0);                     /* static */
void func_80805C1C(void *arg0);                     /* static */
void func_80806014(void *arg0);                     /* static */
void func_80806148(void *arg0);                     /* static */
void func_80806310(void *arg0);                     /* static */
void func_808067E0(void *arg0);                     /* static */
void func_80806BC8(void *arg0);                     /* static */
void func_80806CA0(void *arg0);                     /* static */
void func_80806E84(void *arg0);                     /* static */
void func_80806F30(void *arg0);                     /* static */
void func_808071E4(void *arg0);                     /* static */
void func_80807390(void *arg0);                     /* static */
void func_8080742C(void *arg0);                     /* static */
void func_808074B4(void *arg0);                     /* static */
void func_808077AC(void *arg0);                     /* static */
void func_80807940(GraphicsContext *arg0, void *arg1, s16 arg2, void *); /* static */
void func_80807A78(void *arg0, s32 arg1, s32 arg2, s16 arg3); /* static */
void func_80807C58(GraphicsContext **arg0);         /* static */
void func_80808214(GraphicsContext **arg0);         /* static */
void func_80808D30(GraphicsContext **arg0, s32, s32, s32); /* static */
void func_80808F1C(GraphicsContext **arg0, GraphicsContext **, u32, u32); /* static */
void func_80809DF0(void *arg0);                     /* static */
void func_80809EA0(void *arg0);                     /* static */
void func_8080A3CC(void *arg0);                     /* static */
void func_8080A418(void *arg0);                     /* static */
void func_8080A4A0(void *arg0);                     /* static */
void func_8080A6BC(void *arg0);                     /* static */
void func_8080A708(GraphicsContext **arg0);         /* static */
void func_8080BBFC(GraphicsContext **);             /* static */
void func_8080BC20(void *arg0);                     /* static */
void func_8080BC58(void *arg0);                     /* static */
void func_8080BDAC(GraphicsContext **arg0);         /* static */
Gfx *func_8080BE60(Gfx *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4); /* static */
void func_8080C040(void *arg0);                     /* static */
void func_8080C228(u16 arg0, u16 *arg1, u16 *arg2, u16 *arg3); /* static */
void func_8080C29C(void *arg0);                     /* static */
void func_8080C324(void *arg0);                     /* static */
void func_8080C3A8(void *arg0);                     /* static */
void func_8080D164(s32 arg0);                       /* static */
void func_8080D170(void *arg0);                     /* static */
void func_8080D1BC(void *arg0);                     /* static */
void func_8080D220(void *arg0);                     /* static */
void func_8080D284(void *arg0);                     /* static */
void func_8080D2EC(GraphicsContext **arg0, GraphicsContext *); /* static */
void func_8080D3D0(void *arg0);                     /* static */
void func_8080D40C(GraphicsContext **arg0);         /* static */
void func_8080D6D4(GraphicsContext **arg0);         /* static */
void func_8080F25C(GraphicsContext **arg0, s16 arg1); /* static */
void func_808108DC(GraphicsContext **arg0, GraphicsContext **, u32, u32); /* static */
void func_80811CB8(GraphicsContext **arg0);         /* static */
void func_80812460(void *arg0);                     /* static */
void func_80812668(void *arg0);                     /* static */
void func_80812760(void *arg0);                     /* static */
void func_80812840(void *arg0);                     /* static */
void func_80812980(void *arg0);                     /* static */
void func_80812A6C(void *arg0);                     /* static */
void func_80812D44(void *arg0);                     /* static */
void func_80812D94(void *arg0);                     /* static */
void func_80812E94(void *arg0);                     /* static */
void func_80812ED0(GraphicsContext **arg0);         /* static */
void func_80813908(GameState *arg0);                /* static */
extern ? D_01002800;
extern ? D_01007980;
extern ? D_010220B0;
extern ? D_010277B0;
extern ? D_0102A030;
extern ? D_0102A6B0;
extern ? D_0102A7B0;
extern ? D_0102AAB0;
extern ? D_0102B170;
extern ? D_0102B3B0;
extern ? D_0102B8F0;
extern ? D_0102FCB0;
extern ? D_010308F0;
extern ? D_010310F0;
extern ? D_010311F0;
extern ? D_01031408;
extern ? D_01031618;
extern ? D_0E0002E0;
extern ? D_801C6798;
extern ? D_801C67C8;
extern s32 D_801C67E8;
extern ? D_801C6818;
extern s32 D_801C6838;
static ? D_80813DF0;                                /* unable to generate initializer */
static ? D_80813F30;                                /* unable to generate initializer */
static ? D_80814130;                                /* unable to generate initializer */
static ? D_80814170;                                /* unable to generate initializer */
static ? D_808141B0;                                /* unable to generate initializer */
static ? D_808141F0;                                /* unable to generate initializer */
static ? D_80814240;                                /* unable to generate initializer */
static ? D_8081424C;                                /* unable to generate initializer */
static s16 D_80814260 = 0xF;
static ? D_80814264;                                /* unable to generate initializer */
static ? D_8081426C;                                /* unable to generate initializer */
static ? D_80814280;                                /* unable to generate initializer */
static ? D_80814304;                                /* unable to generate initializer */
static ? D_80814384;                                /* unable to generate initializer */
static ? D_80814404;                                /* unable to generate initializer */
static ? D_80814410;                                /* unable to generate initializer */
static ? D_8081441C;                                /* unable to generate initializer */
static ? D_80814428;                                /* unable to generate initializer */
static ? D_80814430;                                /* unable to generate initializer */
static ? D_80814434;                                /* unable to generate initializer */
static ? D_8081444C;                                /* unable to generate initializer */
static ? D_80814464;                                /* unable to generate initializer */
static ? D_8081448C;                                /* unable to generate initializer */
static s16 D_808144BC = 0xFF;
static s16 D_808144C0 = 0xFF;
static s16 D_808144C4 = 0xFF;
static s16 D_808144C8 = 0;
static s16 D_808144CC = 0;
static s16 D_808144D0 = 0;
static s16 D_808144D4 = 1;
static s16 D_808144D8 = 0x14;
static ? D_808144DC;                                /* unable to generate initializer */
static ? D_808144E8;                                /* unable to generate initializer */
static ? D_80814510;                                /* unable to generate initializer */
static ? D_80814538;                                /* unable to generate initializer */
static ? D_80814548;                                /* unable to generate initializer */
static ? D_80814554;                                /* unable to generate initializer */
static void D_8081455C;                             /* unable to generate initializer */
static s16 D_80814564 = 0;
static ? D_80814568;                                /* unable to generate initializer */
static ? D_8081461C;                                /* unable to generate initializer */
static ? D_80814620;                                /* unable to generate initializer */
static ? D_80814628;                                /* unable to generate initializer */
static ? D_80814630;                                /* unable to generate initializer */
static ? D_80814638;                                /* unable to generate initializer */
static ? D_80814644;                                /* unable to generate initializer */
static ? D_8081464C;                                /* unable to generate initializer */
static ? D_80814650;                                /* unable to generate initializer */
static ? D_80814654;                                /* unable to generate initializer */
static ? D_8081465C;                                /* unable to generate initializer */
static ? D_8081466C;                                /* unable to generate initializer */
static ? D_8081467C;                                /* unable to generate initializer */
static ? D_8081468C;                                /* unable to generate initializer */
static ? D_808146B4;                                /* unable to generate initializer */
static ? D_808146C4;                                /* unable to generate initializer */
static ? D_808146D8;                                /* unable to generate initializer */
static ? D_808146EC;                                /* unable to generate initializer */
static ? D_808146F8;                                /* unable to generate initializer */
static ? D_80814704;                                /* unable to generate initializer */
static ? D_80814720;                                /* unable to generate initializer */
static ? D_80814744;                                /* unable to generate initializer */
static ? D_80814758;                                /* unable to generate initializer */
static ? D_80814764;                                /* unable to generate initializer */
static ? D_80814774;                                /* unable to generate initializer */
static ? D_8081477C;                                /* unable to generate initializer */
static ? D_8081479C;                                /* unable to generate initializer */
static ? D_808147A8;                                /* unable to generate initializer */
static ? D_808147B4;                                /* unable to generate initializer */
static ? D_808147C0;                                /* unable to generate initializer */
static ? D_808147C8;                                /* unable to generate initializer */
static s16 D_80814E80;
static u8 D_80814E90[32];
static s16 fileChooseSkyboxRotation = 0;

void func_80804010(void *arg0) {
    s16 temp_a1;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_v1;
    void *temp_t6;
    s16 phi_v0;
    s32 phi_v1;

    phi_v0 = 0;
    do {
        temp_v1 = phi_v0 * 2;
        temp_t6 = arg0 + temp_v1;
        temp_a1 = *(&D_80814240 + temp_v1);
        temp_t0 = temp_t6->unk_2449A;
        temp_v0 = phi_v0 + 1;
        temp_a2 = temp_t0 - temp_a1;
        phi_v0 = temp_v0;
        if (temp_a2 < 0) {
            phi_v1 = -temp_a2;
        } else {
            phi_v1 = temp_a2;
        }
        temp_lo = phi_v1 / (s32) arg0->unk_24498;
        if ((s32) temp_t0 >= (s32) temp_a1) {
            temp_t6->unk_2449A = (s16) (temp_t0 - temp_lo);
        } else {
            temp_t6->unk_2449A = (s16) (temp_t0 + temp_lo);
        }
    } while ((s32) temp_v0 < 5);
    arg0->unk_244DA = (s16) (arg0->unk_244DA - 0x32);
    arg0->unk_244DC = (s16) (arg0->unk_244DC - 0x32);
    arg0->unk_244E2 = (s16) (arg0->unk_244E2 - 0x32);
    arg0->unk_244E0 = (s16) (arg0->unk_244E0 + 0x32);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_24498 = 4;
        arg0->unk_244E2 = 0;
        temp_v0_2 = arg0->unk_244E2;
        arg0->unk_244E0 = 0xC8;
        arg0->unk_244DC = temp_v0_2;
        arg0->unk_244DA = temp_v0_2;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24480 = 3;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_808041A0(void *arg0) {
    void *sp1C;
    s16 temp_v0_3;
    s16 temp_v1;
    u16 temp_v0;
    void *temp_a2;
    void *temp_t9;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    s32 phi_a0;
    s16 phi_v1;

    temp_a2 = arg0 + 0x20000;
    temp_v1 = arg0->unk_24480;
    phi_v1 = temp_v1;
    if (((temp_v1 == 3) && ((arg0->unk_20 & 0x9000) != 0)) || (temp_v0 = arg0->unk_20, (~(temp_v0 | ~0x4000) == 0))) {
        arg0->unk_24498 = 4;
        arg0->unk_24480 = 3;
        arg0->unk_244AE = 0;
        arg0->unk_24486 = 0x14;
        arg0->unk_244A8 = -1;
        play_sound(0x483CU);
        return;
    }
    if ((temp_v0 & 0x9000) != 0) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_v0_2 = *(&D_801C6798 + (temp_v1 * 4)) + arg0->unk_220;
            if ((temp_v0_2->unk_24 == 0x5A) || (temp_v0_2->unk_25 == 0x45) || (temp_v0_2->unk_26 == 0x4C) || (temp_v0_2->unk_27 == 0x44) || (temp_v0_2->unk_28 == 0x41) || (temp_v0_2->unk_29 == 0x33)) {
                arg0->unk_24498 = 4;
                arg0->unk_2448E = (s16) arg0->unk_24480;
                arg0->unk_24486 = 5;
                arg0->unk_244AE = 3;
                play_sound(0x483BU);
                return;
            }
            play_sound(0x483DU);
            return;
        }
        temp_t9 = arg0 + (temp_v1 * 6);
        if ((temp_t9->unk_243F4 == 0x5A) && (temp_t9->unk_243F5 == 0x45) && (temp_t9->unk_243F6 == 0x4C) && (temp_t9->unk_243F7 == 0x44) && (temp_t9->unk_243F8 == 0x41) && (temp_t9->unk_243F9 == 0x33)) {
            arg0->unk_24498 = 4;
            arg0->unk_2448E = (s16) arg0->unk_24480;
            arg0->unk_24486 = 5;
            arg0->unk_244AE = 3;
            play_sound(0x483BU);
            return;
        }
        play_sound(0x483DU);
        return;
    }
    temp_v0_3 = arg0->unk_24504;
    phi_a0 = (s32) temp_v0_3;
    if ((s32) temp_v0_3 < 0) {
        phi_a0 = -(s32) temp_v0_3;
    }
    if (phi_a0 >= 0x1E) {
        arg0 = arg0;
        sp1C = temp_a2;
        play_sound(0x4839U);
        if ((s32) temp_a2->unk_4504 >= 0x1E) {
            arg0->unk_24480 = (s16) (temp_a2->unk_4480 - 1);
            if (temp_a2->unk_4480 == 2) {
                arg0->unk_24480 = 1;
            }
            phi_v1 = (s16) (s32) temp_a2->unk_4480;
            if ((s32) temp_a2->unk_4480 < 0) {
                arg0->unk_24480 = 3;
                goto block_34;
            }
        } else {
            arg0->unk_24480 = (s16) (temp_a2->unk_4480 + 1);
            if (temp_a2->unk_4480 == 2) {
                arg0->unk_24480 = 3;
            }
            phi_v1 = (s16) (s32) temp_a2->unk_4480;
            if ((s32) temp_a2->unk_4480 >= 4) {
                arg0->unk_24480 = 0;
block_34:
                phi_v1 = temp_a2->unk_4480;
            }
        }
    }
    if (phi_v1 != 3) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_v0_4 = *(&D_801C6798 + (phi_v1 * 4)) + arg0->unk_220;
            if ((temp_v0_4->unk_24 != 0x5A) && (temp_v0_4->unk_25 != 0x45) && (temp_v0_4->unk_26 != 0x4C) && (temp_v0_4->unk_27 != 0x44) && (temp_v0_4->unk_28 != 0x41) && (temp_v0_4->unk_29 != 0x33)) {
                arg0->unk_244A8 = 3;
                arg0->unk_244AA = (s16) temp_a2->unk_4480;
                arg0->unk_244E8 = 0xFF;
                return;
            }
            arg0->unk_244A8 = -1;
            return;
        }
        temp_v0_5 = arg0 + (phi_v1 * 6) + 0x20000;
        if ((temp_v0_5->unk_43F4 != 0x5A) || (temp_v0_5->unk_43F5 != 0x45) || (temp_v0_5->unk_43F6 != 0x4C) || (temp_v0_5->unk_43F7 != 0x44) || (temp_v0_5->unk_43F8 != 0x41) || (temp_v0_5->unk_43F9 != 0x33)) {
            arg0->unk_244A8 = 3;
            arg0->unk_244AA = (s16) temp_a2->unk_4480;
            arg0->unk_244E8 = 0xFF;
            return;
        }
        arg0->unk_244A8 = -1;
        /* Duplicate return node #53. Try simplifying control flow for better match */
    }
}

void func_80804654(void *arg0) {
    s16 temp_a3;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t6;
    void *temp_t8;
    s16 phi_v0;
    s32 phi_v1;

    phi_v0 = 0;
    do {
        temp_v1 = phi_v0 * 2;
        temp_t6 = arg0 + temp_v1;
        temp_a3 = temp_t6->unk_2449A;
        temp_t1 = *(&D_8081424C + (arg0->unk_24480 * 6) + temp_v1);
        temp_v0 = phi_v0 + 1;
        temp_a1 = temp_a3 - temp_t1;
        phi_v0 = temp_v0;
        if (temp_a1 < 0) {
            phi_v1 = -temp_a1;
        } else {
            phi_v1 = temp_a1;
        }
        temp_lo = phi_v1 / (s32) arg0->unk_24498;
        if ((s32) temp_t1 >= (s32) temp_a3) {
            temp_t6->unk_2449A = (s16) (temp_a3 + temp_lo);
        } else {
            temp_t6->unk_2449A = (s16) (temp_a3 - temp_lo);
        }
    } while ((s32) temp_v0 < 3);
    temp_t8 = arg0 + (arg0->unk_24480 * 2);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    temp_t8->unk_244C2 = (s16) (temp_t8->unk_244C2 - 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        temp_v0_2 = arg0->unk_24480;
        temp_v1_2 = temp_v0_2 * 2;
        (arg0 + temp_v1_2)->unk_2449A = (s16) *(&D_8081424C + (temp_v0_2 * 6) + temp_v1_2);
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24498 = 4;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_808047D8(void *arg0) {
    void *temp_t3;
    void *temp_t8;

    temp_t8 = arg0 + (arg0->unk_24480 * 2);
    temp_t8->unk_244C2 = (s16) (temp_t8->unk_244C2 - 0x32);
    temp_t3 = arg0 + (arg0->unk_24480 * 2);
    temp_t3->unk_244D4 = (s16) (temp_t3->unk_244D4 + 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        (arg0 + (arg0->unk_24480 * 2))->unk_244C2 = 0;
        (arg0 + (arg0->unk_24480 * 2))->unk_244D4 = 0xC8;
        arg0->unk_24480 = 3;
        arg0->unk_24498 = 4;
        arg0->unk_24486 = 7;
    }
}

void func_8080489C(void *arg0) {
    void *sp1C;
    s16 temp_v0_3;
    s16 temp_v1;
    u16 temp_v0;
    void *temp_a2;
    void *temp_t8;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    s32 phi_a0;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_a2 = arg0 + 0x20000;
    temp_v1 = arg0->unk_24480;
    phi_v1_2 = temp_v1;
    if (((temp_v1 == 3) && ((arg0->unk_20 & 0x9000) != 0)) || (temp_v0 = arg0->unk_20, (~(temp_v0 | ~0x4000) == 0))) {
        arg0->unk_24480 = (s16) temp_a2->unk_448E;
        arg0->unk_244AE = 2;
        arg0->unk_24498 = 4;
        arg0->unk_24486 = 8;
        play_sound(0x483CU);
        return;
    }
    if ((temp_v0 & 0x9000) != 0) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_v0_2 = *(&D_801C6798 + (temp_v1 * 4)) + arg0->unk_220;
            if ((temp_v0_2->unk_24 != 0x5A) && (temp_v0_2->unk_25 != 0x45) && (temp_v0_2->unk_26 != 0x4C) && (temp_v0_2->unk_27 != 0x44) && (temp_v0_2->unk_28 != 0x41) && (temp_v0_2->unk_29 != 0x33)) {
                arg0->unk_244A6 = temp_v1;
                arg0->unk_244AE = 4;
                arg0->unk_24498 = 4;
                arg0->unk_24486 = 0xA;
                play_sound(0x483BU);
                return;
            }
            play_sound(0x483DU);
            return;
        }
        temp_t8 = arg0 + (temp_v1 * 6);
        if ((temp_t8->unk_243F4 != 0x5A) || (temp_t8->unk_243F5 != 0x45) || (temp_t8->unk_243F6 != 0x4C) || (temp_t8->unk_243F7 != 0x44) || (temp_t8->unk_243F8 != 0x41) || (temp_t8->unk_243F9 != 0x33)) {
            arg0->unk_244A6 = temp_v1;
            arg0->unk_244AE = 4;
            arg0->unk_24498 = 4;
            arg0->unk_24486 = 0xA;
            play_sound(0x483BU);
            return;
        }
        play_sound(0x483DU);
        return;
    }
    temp_v0_3 = arg0->unk_24504;
    phi_a0 = (s32) temp_v0_3;
    if ((s32) temp_v0_3 < 0) {
        phi_a0 = -(s32) temp_v0_3;
    }
    if (phi_a0 >= 0x1E) {
        arg0 = arg0;
        sp1C = temp_a2;
        play_sound(0x4839U);
        if ((s32) temp_a2->unk_4504 >= 0x1E) {
            arg0->unk_24480 = (s16) (temp_a2->unk_4480 - 1);
            if (temp_a2->unk_4480 == 2) {
                arg0->unk_24480 = 1;
            }
            phi_v1_2 = (s16) (s32) temp_a2->unk_4480;
            if (temp_a2->unk_448E == (s32) temp_a2->unk_4480) {
                arg0->unk_24480 = (s16) ((s32) temp_a2->unk_4480 - 1);
                if ((s32) temp_a2->unk_4480 < 0) {
                    arg0->unk_24480 = 3;
                }
                phi_v1_2 = temp_a2->unk_4480;
                if (temp_a2->unk_4480 == 2) {
                    arg0->unk_24480 = 1;
                    goto block_41;
                }
            } else if ((s32) temp_a2->unk_4480 < 0) {
                arg0->unk_24480 = 3;
                goto block_41;
            }
        } else {
            arg0->unk_24480 = (s16) (temp_a2->unk_4480 + 1);
            if ((s32) temp_a2->unk_4480 >= 4) {
                arg0->unk_24480 = 0;
            }
            phi_v1 = temp_a2->unk_4480;
            if (temp_a2->unk_448E == temp_a2->unk_4480) {
                arg0->unk_24480 = (s16) (temp_a2->unk_4480 + 1);
                phi_v1 = temp_a2->unk_4480;
            }
            phi_v1_2 = phi_v1;
            if (phi_v1 == 2) {
                arg0->unk_24480 = 3;
block_41:
                phi_v1_2 = temp_a2->unk_4480;
            }
        }
    }
    if (phi_v1_2 != 3) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_v0_4 = *(&D_801C6798 + (phi_v1_2 * 4)) + arg0->unk_220;
            if ((temp_v0_4->unk_24 == 0x5A) || (temp_v0_4->unk_25 == 0x45) || (temp_v0_4->unk_26 == 0x4C) || (temp_v0_4->unk_27 == 0x44) || (temp_v0_4->unk_28 == 0x41) || (temp_v0_4->unk_29 == 0x33)) {
                arg0->unk_244A8 = 4;
                arg0->unk_244AA = (s16) temp_a2->unk_4480;
                arg0->unk_244E8 = 0xFF;
                return;
            }
            arg0->unk_244A8 = -1;
            return;
        }
        temp_v0_5 = arg0 + (phi_v1_2 * 6) + 0x20000;
        if ((temp_v0_5->unk_43F4 == 0x5A) && (temp_v0_5->unk_43F5 == 0x45) && (temp_v0_5->unk_43F6 == 0x4C) && (temp_v0_5->unk_43F7 == 0x44) && (temp_v0_5->unk_43F8 == 0x41) && (temp_v0_5->unk_43F9 == 0x33)) {
            arg0->unk_244A8 = 4;
            arg0->unk_244AA = (s16) temp_a2->unk_4480;
            arg0->unk_244E8 = 0xFF;
            return;
        }
        arg0->unk_244A8 = -1;
        /* Duplicate return node #60. Try simplifying control flow for better match */
    }
}

void func_80804DAC(void *arg0) {
    void *temp_t3;
    void *temp_t8;

    temp_t8 = arg0 + (arg0->unk_24480 * 2);
    temp_t8->unk_244D4 = (s16) (temp_t8->unk_244D4 - 0x32);
    temp_t3 = arg0 + (arg0->unk_24480 * 2);
    temp_t3->unk_244C2 = (s16) (temp_t3->unk_244C2 + 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244AE = 2;
        (arg0 + (arg0->unk_24480 * 2))->unk_244C2 = 0xC8;
        (arg0 + (arg0->unk_24480 * 2))->unk_244D4 = 0;
        arg0->unk_24498 = 4;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_80804E74(void *arg0) {
    s16 temp_a1;
    s16 temp_t0;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_v1;
    void *temp_t6;
    s16 phi_v0;
    s32 phi_v1;

    phi_v0 = 0;
    do {
        temp_v1 = phi_v0 * 2;
        temp_t6 = arg0 + temp_v1;
        temp_a1 = *(&D_80814240 + temp_v1);
        temp_t0 = temp_t6->unk_2449A;
        temp_v0 = phi_v0 + 1;
        temp_a2 = temp_t0 - temp_a1;
        phi_v0 = temp_v0;
        if (temp_a2 < 0) {
            phi_v1 = -temp_a2;
        } else {
            phi_v1 = temp_a2;
        }
        temp_lo = phi_v1 / (s32) arg0->unk_24498;
        if ((s32) temp_t0 >= (s32) temp_a1) {
            temp_t6->unk_2449A = (s16) (temp_t0 - temp_lo);
        } else {
            temp_t6->unk_2449A = (s16) (temp_t0 + temp_lo);
        }
    } while ((s32) temp_v0 < 3);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24480 = 3;
        arg0->unk_24486 = 4;
    }
}

void func_80804F98(void *arg0) {
    s16 *temp_s4;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s16 temp_s3_5;
    s16 temp_s7;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s3_4;
    s32 temp_s6;
    void *temp_s3;
    void *temp_t6;
    void *temp_t8;
    void *temp_t9;
    s16 phi_v1;
    s32 phi_s5;

    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    phi_v1 = 0;
    do {
        temp_v0 = arg0->unk_244A6;
        if ((phi_v1 != temp_v0) && (temp_t8 = arg0 + (phi_v1 * 2), (phi_v1 != arg0->unk_2448E))) {
            temp_t8->unk_244BC = (s16) (temp_t8->unk_244BC - 0x32);
            if (gSaveContext.unk_3F3F == 0) {
                temp_s3 = *(&D_801C6798 + (phi_v1 * 4)) + arg0->unk_220;
                if ((temp_s3->unk_24 == 0x5A) || (temp_s3->unk_25 == 0x45) || (temp_s3->unk_26 == 0x4C) || (temp_s3->unk_27 == 0x44) || (temp_s3->unk_28 == 0x41) || (temp_s3->unk_29 == 0x33)) {
                    temp_s3_2 = temp_t8->unk_244BC;
                    temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE - 0x3F);
                    temp_t8->unk_244C8 = temp_s3_2;
                    temp_t8->unk_244C2 = temp_s3_2;
                }
            } else {
                temp_t9 = arg0 + (phi_v1 * 6);
                if ((temp_t9->unk_243F4 == 0x5A) && (temp_t9->unk_243F5 == 0x45) && (temp_t9->unk_243F6 == 0x4C) && (temp_t9->unk_243F7 == 0x44) && (temp_t9->unk_243F8 == 0x41) && (temp_t9->unk_243F9 == 0x33)) {
                    temp_s3_3 = temp_t8->unk_244BC;
                    temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE - 0x3F);
                    temp_t8->unk_244C8 = temp_s3_3;
                    temp_t8->unk_244C2 = temp_s3_3;
                }
            }
        } else {
            temp_s3_4 = phi_v1 * 2;
            if (phi_v1 == temp_v0) {
                temp_t6 = arg0 + temp_s3_4;
                temp_s4 = &D_80814264 + temp_s3_4;
                temp_s7 = temp_t6->unk_2449A;
                temp_s6 = temp_s7 - *temp_s4;
                phi_s5 = temp_s6;
                if (temp_s6 < 0) {
                    phi_s5 = -temp_s6;
                }
                temp_t6->unk_2449A = (s16) (temp_s7 + (phi_s5 / (s32) arg0->unk_24498));
                temp_s3_5 = *temp_s4;
                if ((s32) temp_t6->unk_2449A >= (s32) temp_s3_5) {
                    temp_t6->unk_2449A = temp_s3_5;
                }
            }
        }
        temp_v1 = phi_v1 + 1;
        phi_v1 = temp_v1;
    } while ((s32) temp_v1 < 3);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24498 = 4;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_8080525C(void *arg0) {
    arg0->unk_244DE = (s16) (arg0->unk_244DE + 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_24486 = 0xC;
        arg0->unk_24480 = 1;
    }
}

void func_808052B0(void *arg0) {
    SramContext *sp20;
    s32 sp1C;
    SramContext *temp_a1;
    s16 temp_v0_3;
    s32 temp_t0;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_a0;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_t4;
    s32 phi_v1;

    temp_a3 = arg0;
    temp_t0 = temp_a3 + 0x20000;
    if (((temp_a3->unk_24480 != 0) && ((temp_a3->unk_20 & 0x9000) != 0)) || (temp_v0 = temp_a3->unk_20, (~(temp_v0 | ~0x4000) == 0))) {
        temp_a3->unk_24498 = 4;
        temp_a3->unk_244AE = 3;
        temp_a3->unk_24486 = 0xE;
        play_sound(0x483CU);
        return;
    }
    if ((temp_v0 & 0x9000) != 0) {
        gSaveContext.time = gSaveContext.time;
        temp_a1 = temp_a3 + 0x220;
        temp_a0 = temp_a3;
        (temp_a3 + (temp_a3->unk_244A6 * 2))->unk_244C8 = 0;
        temp_t4 = temp_a3 + (temp_a3->unk_244A6 * 2);
        temp_t4->unk_244D4 = (s16) temp_t4->unk_244C8;
        temp_a3->unk_244AE = 5;
        temp_a3->unk_24498 = 4;
        sp1C = temp_t0;
        arg0 = temp_a3;
        sp20 = temp_a1;
        func_80146628(temp_a0, temp_a1, &gSaveContext, temp_a3);
        temp_a3_2 = arg0;
        if (gSaveContext.unk_3F3F == 0) {
            temp_a3_2->unk_24486 = 0xF;
        } else {
            temp_v0_2 = temp_a3->unk_244A6 * 2 * 4;
            arg0 = temp_a3_2;
            func_80147008(sp20, *(&D_801C67C8 + temp_v0_2), *(&D_801C6818 + temp_v0_2), temp_a3_2);
            func_80147020(sp20);
            arg0->unk_24486 = 0xD;
        }
        func_8013ECE0(300.0f, 0xB4U, 0x14U, 0x64U);
        play_sound(0x483BU);
        return;
    }
    temp_v0_3 = temp_a3->unk_24504;
    phi_v1 = (s32) temp_v0_3;
    if ((s32) temp_v0_3 < 0) {
        phi_v1 = -(s32) temp_v0_3;
    }
    if (phi_v1 >= 0x1E) {
        arg0 = temp_a3;
        sp1C = temp_t0;
        play_sound(0x4839U);
        arg0->unk_24480 = (s16) (temp_a3->unk_24480 ^ 1);
    }
}

void func_808054A4(void *arg0) {
    SramContext *sp18;
    SramContext *temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_a0 = arg0 + 0x220;
    sp18 = temp_a0;
    arg0 = arg0;
    func_80147068(temp_a0);
    phi_v0 = 0;
    phi_v0_2 = 0;
    if (temp_a0->status == 0) {
        arg0->unk_24486 = 0xF;
        do {
            temp_v0 = (phi_v0 + 1) & 0xFFFF;
            (arg0 + (arg0->unk_244A6 * 6) + phi_v0)->unk_243F4 = (u8) gSaveContext.newf[phi_v0];
            phi_v0 = temp_v0;
        } while (temp_v0 < 6);
        (arg0 + (arg0->unk_244A6 * 2))->unk_2440C = (u16) gSaveContext.deaths;
        do {
            temp_v0_2 = (phi_v0_2 + 1) & 0xFFFF;
            (arg0 + (arg0->unk_244A6 * 8) + phi_v0_2)->unk_24414 = (u8) gSaveContext.playerName[phi_v0_2];
            phi_v0_2 = temp_v0_2;
        } while (temp_v0_2 < 8);
        (arg0 + (arg0->unk_244A6 * 2))->unk_24434 = (s16) gSaveContext.healthCapacity;
        (arg0 + (arg0->unk_244A6 * 2))->unk_2443C = (s16) gSaveContext.health;
        (arg0 + arg0->unk_244A6)->unk_24454 = (s8) gSaveContext.inventory.dungeonKeys[9];
    }
}

void func_808055D0(void *arg0) {
    s16 temp_s5;
    s16 temp_s6;
    s16 temp_v1;
    s32 temp_lo;
    s32 temp_s3_2;
    s32 temp_s4;
    void *temp_s3;
    void *temp_t7;
    void *temp_t8;
    void *temp_t9;
    s16 phi_v1;
    s32 phi_s3;

    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_244DE = (s16) (arg0->unk_244DE - 0x32);
    phi_v1 = 0;
    do {
        if (phi_v1 != arg0->unk_244A6) {
            temp_t7 = arg0 + (phi_v1 * 2);
            if (phi_v1 != arg0->unk_2448E) {
                temp_t7->unk_244BC = (s16) (temp_t7->unk_244BC + 0x32);
                if (gSaveContext.unk_3F3F == 0) {
                    temp_s3 = *(&D_801C6798 + (phi_v1 * 4)) + arg0->unk_220;
                    if ((temp_s3->unk_24 == 0x5A) || (temp_s3->unk_25 == 0x45) || (temp_s3->unk_26 == 0x4C) || (temp_s3->unk_27 == 0x44) || (temp_s3->unk_28 == 0x41) || (temp_s3->unk_29 == 0x33)) {
                        temp_t7->unk_244CE = (s16) (temp_t7->unk_244CE + 0x3F);
                        temp_t7->unk_244C8 = (s16) temp_t7->unk_244BC;
                        goto block_18;
                    }
                } else {
                    temp_t8 = arg0 + (phi_v1 * 6);
                    if ((temp_t8->unk_243F4 == 0x5A) && (temp_t8->unk_243F5 == 0x45) && (temp_t8->unk_243F6 == 0x4C) && (temp_t8->unk_243F7 == 0x44) && (temp_t8->unk_243F8 == 0x41) && (temp_t8->unk_243F9 == 0x33)) {
                        temp_t7->unk_244C8 = (s16) temp_t7->unk_244BC;
                        temp_t7->unk_244CE = (s16) (temp_t7->unk_244CE + 0x3F);
block_18:
                        temp_t7->unk_244C2 = temp_t7->unk_244BC;
                    }
                }
            }
        }
        temp_s3_2 = phi_v1 * 2;
        temp_t9 = arg0 + temp_s3_2;
        temp_s6 = *(&D_8081424C + (arg0->unk_2448E * 6) + temp_s3_2);
        temp_s5 = temp_t9->unk_2449A;
        temp_v1 = phi_v1 + 1;
        temp_s4 = temp_s5 - temp_s6;
        phi_v1 = temp_v1;
        if (temp_s4 < 0) {
            phi_s3 = -temp_s4;
        } else {
            phi_s3 = temp_s4;
        }
        temp_lo = phi_s3 / (s32) arg0->unk_24498;
        if ((s32) temp_s6 >= (s32) temp_s5) {
            temp_t9->unk_2449A = (s16) (temp_s5 + temp_lo);
        } else {
            temp_t9->unk_2449A = (s16) (temp_s5 - temp_lo);
        }
    } while ((s32) temp_v1 < 3);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24498 = 4;
        arg0->unk_24480 = 3;
        arg0->unk_24486 = 7;
    }
}

void func_808058A4(void *arg0) {
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244DE = (s16) (arg0->unk_244DE - 0x32);
    arg0->unk_244E0 = (s16) (arg0->unk_244E0 - 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244B6 = 0;
        arg0->unk_24498 = 4;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_80805918(void *arg0) {
    s16 temp_a1;
    s32 temp_a2;
    void *temp_t2;
    void *temp_t4;
    void *temp_t8;
    void *temp_t8_2;
    s32 phi_a3;

    temp_t8 = arg0 + (arg0->unk_244A6 * 2);
    temp_t8->unk_244D4 = (s16) (temp_t8->unk_244D4 + 0x32);
    temp_t4 = arg0 + (arg0->unk_244A6 * 2);
    temp_t4->unk_244C8 = (s16) (temp_t4->unk_244C8 + 0x32);
    temp_t2 = arg0 + (arg0->unk_244A6 * 2);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    temp_a1 = temp_t2->unk_24492;
    temp_a2 = temp_a1 + 0x38;
    phi_a3 = temp_a2;
    if (temp_a2 < 0) {
        phi_a3 = -0x38 - temp_a1;
    }
    temp_t2->unk_24492 = (s16) (temp_a1 - (phi_a3 / (s32) arg0->unk_24498));
    temp_t8_2 = arg0 + (arg0->unk_244A6 * 2);
    if ((s32) temp_t8_2->unk_24492 < -0x37) {
        temp_t8_2->unk_24492 = -0x38;
    }
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_24498 = 0x2D;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_80805A58(void *arg0) {
    void *sp1C;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_v1;
    s16 phi_v0;

    temp_v1 = arg0 + 0x20000;
    temp_v0 = arg0->unk_24498;
    phi_v0 = temp_v0;
    if (temp_v0 == 0x26) {
        (arg0 + (arg0->unk_244A6 * 2))->unk_244CE = 0xFF;
        arg0 = arg0;
        sp1C = temp_v1;
        play_sound(0x28BAU);
        phi_v0 = temp_v1->unk_4498;
    }
    arg0->unk_24498 = (s16) (phi_v0 - 1);
    temp_v0_2 = temp_v1->unk_4498;
    if (((s32) temp_v0_2 < 0x25) && (((arg0->unk_20 & 0xD000) != 0) || (temp_v0_2 == 0))) {
        arg0->unk_24498 = 4;
        arg0->unk_244AE = 0;
        arg0 = arg0;
        play_sound(0x483BU);
        arg0->unk_24486 = 0x12;
    }
}

void func_80805B30(void *arg0) {
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t8;
    void *temp_t8_2;

    temp_t8 = arg0 + (arg0->unk_2448E * 2);
    temp_t8->unk_244D4 = (s16) (temp_t8->unk_244D4 - 0x32);
    temp_t3 = arg0 + (arg0->unk_244A6 * 2);
    temp_t3->unk_244D4 = (s16) (temp_t3->unk_244D4 - 0x32);
    temp_t8_2 = arg0 + (arg0->unk_2448E * 2);
    temp_t8_2->unk_244C2 = (s16) (temp_t8_2->unk_244C2 + 0x32);
    temp_t3_2 = arg0 + (arg0->unk_244A6 * 2);
    temp_t3_2->unk_244C2 = (s16) (temp_t3_2->unk_244C2 + 0x32);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244A0 = 0;
        (arg0 + (arg0->unk_244A6 * 2))->unk_24492 = (s16) arg0->unk_244A0;
        arg0->unk_24498 = 4;
        arg0->unk_244B6 = 0;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_80805C1C(void *arg0) {
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_a3_2;
    s16 temp_t1;
    s32 temp_lo;
    void *temp_a3;
    void *temp_a3_3;
    void *temp_t6;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t9;
    void *temp_t9_2;
    s16 phi_a2;
    s32 phi_v1;
    s16 phi_a2_2;
    s16 phi_a2_3;

    phi_a2 = 0;
    phi_a2_2 = 0;
    phi_a2_3 = 0;
    do {
        temp_t7 = arg0 + (phi_a2 * 2);
        temp_t1 = temp_t7->unk_2449A;
        temp_a2 = phi_a2 + 1;
        phi_a2 = temp_a2;
        if ((s32) temp_t1 < 0) {
            phi_v1 = -(s32) temp_t1;
        } else {
            phi_v1 = (s32) temp_t1;
        }
        temp_lo = phi_v1 / (s32) arg0->unk_24498;
        if ((s32) temp_t1 >= 0) {
            temp_t7->unk_2449A = (s16) (temp_t1 - temp_lo);
        } else {
            temp_t7->unk_2449A = (s16) (temp_t1 + temp_lo);
        }
    } while ((s32) temp_a2 < 5);
    do {
        temp_t9 = arg0 + (phi_a2_2 * 2);
        if (phi_a2_2 != arg0->unk_24480) {
            temp_t9->unk_244BC = (s16) (temp_t9->unk_244BC + 0x32);
            if (gSaveContext.unk_3F3F == 0) {
                temp_a3 = *(&D_801C6798 + (phi_a2_2 * 4)) + arg0->unk_220;
                if ((temp_a3->unk_24 == 0x5A) || (temp_a3->unk_25 == 0x45) || (temp_a3->unk_26 == 0x4C) || (temp_a3->unk_27 == 0x44) || (temp_a3->unk_28 == 0x41) || (temp_a3->unk_29 == 0x33)) {
                    temp_t9->unk_244CE = (s16) (temp_t9->unk_244CE + 0x3F);
                    temp_t9->unk_244C8 = (s16) temp_t9->unk_244BC;
                    goto block_25;
                }
            } else {
                temp_t6 = arg0 + (phi_a2_2 * 6);
                if ((temp_t6->unk_243F4 == 0x5A) && (temp_t6->unk_243F5 == 0x45) && (temp_t6->unk_243F6 == 0x4C) && (temp_t6->unk_243F7 == 0x44) && (temp_t6->unk_243F8 == 0x41) && (temp_t6->unk_243F9 == 0x33)) {
                    temp_t9->unk_244C8 = (s16) temp_t9->unk_244BC;
                    temp_t9->unk_244CE = (s16) (temp_t9->unk_244CE + 0x3F);
block_25:
                    temp_t9->unk_244C2 = temp_t9->unk_244BC;
                }
            }
        }
        temp_a2_2 = phi_a2_2 + 1;
        phi_a2_2 = temp_a2_2;
    } while ((s32) temp_a2_2 < 3);
    arg0->unk_244DA = (s16) (arg0->unk_244DA + 0x32);
    arg0->unk_244DC = (s16) (arg0->unk_244DC + 0x32);
    arg0->unk_244E2 = (s16) (arg0->unk_244E2 + 0x32);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        do {
            temp_t7_2 = arg0 + (phi_a2_3 * 2);
            temp_t7_2->unk_244CE = 0;
            temp_a3_2 = temp_t7_2->unk_244CE;
            temp_t7_2->unk_244BC = 0xC8;
            temp_t7_2->unk_244C8 = temp_a3_2;
            temp_t7_2->unk_244C2 = temp_a3_2;
            if (gSaveContext.unk_3F3F == 0) {
                temp_a3_3 = *(&D_801C6798 + (phi_a2_3 * 4)) + arg0->unk_220;
                if ((temp_a3_3->unk_24 == 0x5A) || (temp_a3_3->unk_25 == 0x45) || (temp_a3_3->unk_26 == 0x4C) || (temp_a3_3->unk_27 == 0x44) || (temp_a3_3->unk_28 == 0x41) || (temp_a3_3->unk_29 == 0x33)) {
                    temp_t7_2->unk_244CE = 0xFF;
                    temp_t7_2->unk_244C8 = (s16) temp_t7_2->unk_244BC;
                    goto block_43;
                }
            } else {
                temp_t9_2 = arg0 + (phi_a2_3 * 6);
                if ((temp_t9_2->unk_243F4 == 0x5A) && (temp_t9_2->unk_243F5 == 0x45) && (temp_t9_2->unk_243F6 == 0x4C) && (temp_t9_2->unk_243F7 == 0x44) && (temp_t9_2->unk_243F8 == 0x41) && (temp_t9_2->unk_243F9 == 0x33)) {
                    temp_t7_2->unk_244CE = 0xFF;
                    temp_t7_2->unk_244C8 = (s16) temp_t7_2->unk_244BC;
block_43:
                    temp_t7_2->unk_244C2 = temp_t7_2->unk_244BC;
                }
            }
            temp_a2_3 = phi_a2_3 + 1;
            phi_a2_3 = temp_a2_3;
        } while ((s32) temp_a2_3 < 3);
        (arg0 + (arg0->unk_2448E * 2))->unk_24492 = 0;
        arg0->unk_244F0 = 0x46;
        arg0->unk_244F2 = 1;
        arg0->unk_24528 = 0x14;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24486 = 2;
    }
}

void func_80806014(void *arg0) {
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_lo;
    void *temp_t7;
    s16 phi_v0;
    s32 phi_v1;

    phi_v0 = 0;
    do {
        temp_t7 = arg0 + (phi_v0 * 2);
        temp_a3 = temp_t7->unk_2449A;
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        if ((s32) temp_a3 < 0) {
            phi_v1 = -(s32) temp_a3;
        } else {
            phi_v1 = (s32) temp_a3;
        }
        temp_lo = phi_v1 / (s32) arg0->unk_24498;
        if ((s32) temp_a3 >= 0) {
            temp_t7->unk_2449A = (s16) (temp_a3 - temp_lo);
        } else {
            temp_t7->unk_2449A = (s16) (temp_a3 + temp_lo);
        }
    } while ((s32) temp_v0 < 5);
    arg0->unk_244DA = (s16) (arg0->unk_244DA + 0x32);
    arg0->unk_244E0 = (s16) (arg0->unk_244E0 - 0x32);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244DA = 0xC8;
        arg0->unk_244E0 = 0;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24486 = 2;
    }
    temp_v0_2 = arg0->unk_244DA;
    arg0->unk_244DC = temp_v0_2;
    arg0->unk_244E2 = temp_v0_2;
}

void func_80806148(void *arg0) {
    s16 temp_a1;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_v1;
    void *temp_t6;
    s16 phi_v0;
    s32 phi_v1;

    phi_v0 = 0;
    do {
        temp_v1 = phi_v0 * 2;
        temp_t6 = arg0 + temp_v1;
        temp_a1 = *(&D_80814240 + temp_v1);
        temp_t0 = temp_t6->unk_2449A;
        temp_v0 = phi_v0 + 1;
        temp_a2 = temp_t0 - temp_a1;
        phi_v0 = temp_v0;
        if (temp_a2 < 0) {
            phi_v1 = -temp_a2;
        } else {
            phi_v1 = temp_a2;
        }
        temp_lo = phi_v1 / (s32) arg0->unk_24498;
        if ((s32) temp_t0 >= (s32) temp_a1) {
            temp_t6->unk_2449A = (s16) (temp_t0 - temp_lo);
        } else {
            temp_t6->unk_2449A = (s16) (temp_t0 + temp_lo);
        }
    } while ((s32) temp_v0 < 5);
    arg0->unk_244DA = (s16) (arg0->unk_244DA - 0x64);
    arg0->unk_244DC = (s16) (arg0->unk_244DC - 0x64);
    arg0->unk_244E2 = (s16) (arg0->unk_244E2 - 0x64);
    arg0->unk_244E0 = (s16) (arg0->unk_244E0 + 0x32);
    if ((s32) arg0->unk_244DA <= 0) {
        arg0->unk_244E2 = 0;
        temp_v0_2 = arg0->unk_244E2;
        arg0->unk_244DC = temp_v0_2;
        arg0->unk_244DA = temp_v0_2;
    }
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244F0 = 0x46;
        arg0->unk_244F2 = 1;
        arg0->unk_24528 = 0x14;
        arg0->unk_244E2 = 0;
        temp_v0_3 = arg0->unk_244E2;
        arg0->unk_244E0 = 0xC8;
        arg0->unk_244DC = temp_v0_3;
        arg0->unk_244DA = temp_v0_3;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24480 = 3;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_80806310(void *arg0) {
    void *sp1C;
    s16 temp_v0_3;
    s16 temp_v1;
    u16 temp_v0;
    void *temp_a2;
    void *temp_t8;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    s32 phi_a0;
    s16 phi_v1;

    temp_a2 = arg0 + 0x20000;
    temp_v1 = arg0->unk_24480;
    phi_v1 = temp_v1;
    if (((temp_v1 == 3) && ((arg0->unk_20 & 0x9000) != 0)) || (temp_v0 = arg0->unk_20, (~(temp_v0 | ~0x4000) == 0))) {
        arg0->unk_24480 = 4;
        arg0->unk_24498 = 4;
        arg0->unk_244AE = 0;
        arg0->unk_24486 = 0x20;
        arg0->unk_244A8 = -1;
        play_sound(0x483CU);
        return;
    }
    if ((temp_v0 & 0x9000) != 0) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_v0_2 = *(&D_801C6798 + (temp_v1 * 4)) + arg0->unk_220;
            if ((temp_v0_2->unk_24 == 0x5A) || (temp_v0_2->unk_25 == 0x45) || (temp_v0_2->unk_26 == 0x4C) || (temp_v0_2->unk_27 == 0x44) || (temp_v0_2->unk_28 == 0x41) || (temp_v0_2->unk_29 == 0x33)) {
                arg0->unk_24498 = 4;
                arg0->unk_2448E = (s16) arg0->unk_24480;
                arg0->unk_24486 = 0x17;
                arg0->unk_244AE = 7;
                play_sound(0x483BU);
                return;
            }
            play_sound(0x483DU);
            return;
        }
        temp_t8 = arg0 + (temp_v1 * 6);
        if ((temp_t8->unk_243F4 == 0x5A) && (temp_t8->unk_243F5 == 0x45) && (temp_t8->unk_243F6 == 0x4C) && (temp_t8->unk_243F7 == 0x44) && (temp_t8->unk_243F8 == 0x41) && (temp_t8->unk_243F9 == 0x33)) {
            arg0->unk_24498 = 4;
            arg0->unk_2448E = (s16) arg0->unk_24480;
            arg0->unk_24486 = 0x17;
            arg0->unk_244AE = 7;
            play_sound(0x483BU);
            return;
        }
        play_sound(0x483DU);
        return;
    }
    temp_v0_3 = arg0->unk_24504;
    phi_a0 = (s32) temp_v0_3;
    if ((s32) temp_v0_3 < 0) {
        phi_a0 = -(s32) temp_v0_3;
    }
    if (phi_a0 >= 0x1E) {
        arg0 = arg0;
        sp1C = temp_a2;
        play_sound(0x4839U);
        if ((s32) temp_a2->unk_4504 >= 0x1E) {
            arg0->unk_24480 = (s16) (temp_a2->unk_4480 - 1);
            if (temp_a2->unk_4480 == 2) {
                arg0->unk_24480 = 1;
            }
            phi_v1 = (s16) (s32) temp_a2->unk_4480;
            if ((s32) temp_a2->unk_4480 < 0) {
                arg0->unk_24480 = 3;
                goto block_34;
            }
        } else {
            arg0->unk_24480 = (s16) (temp_a2->unk_4480 + 1);
            if (temp_a2->unk_4480 == 2) {
                arg0->unk_24480 = 3;
            }
            phi_v1 = (s16) (s32) temp_a2->unk_4480;
            if ((s32) temp_a2->unk_4480 >= 4) {
                arg0->unk_24480 = 0;
block_34:
                phi_v1 = temp_a2->unk_4480;
            }
        }
    }
    if (phi_v1 != 3) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_v0_4 = *(&D_801C6798 + (phi_v1 * 4)) + arg0->unk_220;
            if ((temp_v0_4->unk_24 != 0x5A) && (temp_v0_4->unk_25 != 0x45) && (temp_v0_4->unk_26 != 0x4C) && (temp_v0_4->unk_27 != 0x44) && (temp_v0_4->unk_28 != 0x41) && (temp_v0_4->unk_29 != 0x33)) {
                arg0->unk_244A8 = 3;
                arg0->unk_244AA = (s16) temp_a2->unk_4480;
                arg0->unk_244E8 = 0xFF;
                return;
            }
            arg0->unk_244A8 = -1;
            return;
        }
        temp_v0_5 = arg0 + (phi_v1 * 6) + 0x20000;
        if ((temp_v0_5->unk_43F4 != 0x5A) || (temp_v0_5->unk_43F5 != 0x45) || (temp_v0_5->unk_43F6 != 0x4C) || (temp_v0_5->unk_43F7 != 0x44) || (temp_v0_5->unk_43F8 != 0x41) || (temp_v0_5->unk_43F9 != 0x33)) {
            arg0->unk_244A8 = 3;
            arg0->unk_244AA = (s16) temp_a2->unk_4480;
            arg0->unk_244E8 = 0xFF;
            return;
        }
        arg0->unk_244A8 = -1;
        return;
    }
    arg0->unk_244A8 = -1;
}

void func_808067E0(void *arg0) {
    s32 sp18;
    s32 sp10;
    s16 temp_s0;
    s16 temp_s0_3;
    s16 temp_s1_2;
    s16 temp_s1_3;
    s16 temp_s1_6;
    s16 temp_s1_7;
    s16 temp_t8_2;
    s16 temp_t9_2;
    s32 temp_lo;
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 temp_s1_4;
    void *temp_s1;
    void *temp_s1_5;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t8;
    void *temp_t9;
    s16 phi_s0;
    s32 phi_s0_2;
    s16 phi_s0_3;

    phi_s0 = 0;
    phi_s0_3 = 0;
    do {
        temp_t8 = arg0 + (phi_s0 * 2);
        if (phi_s0 != arg0->unk_24480) {
            temp_t8->unk_244BC = (s16) (temp_t8->unk_244BC - 0x32);
            if (gSaveContext.unk_3F3F == 0) {
                temp_s1 = *(&D_801C6798 + (phi_s0 * 4)) + arg0->unk_220;
                if ((temp_s1->unk_24 == 0x5A) || (temp_s1->unk_25 == 0x45) || (temp_s1->unk_26 == 0x4C) || (temp_s1->unk_27 == 0x44) || (temp_s1->unk_28 == 0x41) || (temp_s1->unk_29 == 0x33)) {
                    temp_s1_2 = temp_t8->unk_244BC;
                    temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE - 0x3F);
                    temp_t8->unk_244C8 = temp_s1_2;
                    temp_t8->unk_244C2 = temp_s1_2;
                }
            } else {
                temp_t9 = arg0 + (phi_s0 * 6);
                if ((temp_t9->unk_243F4 == 0x5A) && (temp_t9->unk_243F5 == 0x45) && (temp_t9->unk_243F6 == 0x4C) && (temp_t9->unk_243F7 == 0x44) && (temp_t9->unk_243F8 == 0x41) && (temp_t9->unk_243F9 == 0x33)) {
                    temp_s1_3 = temp_t8->unk_244BC;
                    temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE - 0x3F);
                    temp_t8->unk_244C8 = temp_s1_3;
                    temp_t8->unk_244C2 = temp_s1_3;
                }
            }
        } else {
            temp_t7 = arg0 + (phi_s0 * 2);
            temp_t7->unk_244C2 = (s16) (temp_t7->unk_244C2 - 0x32);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 3);
    temp_s0_2 = arg0->unk_24480 * 2;
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x1F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x1F);
    temp_t6 = arg0 + temp_s0_2;
    temp_t9_2 = temp_t6->unk_2449A;
    temp_t8_2 = *(&D_8081426C + temp_s0_2);
    sp18 = (s32) temp_t9_2;
    temp_s1_4 = temp_t9_2 - temp_t8_2;
    sp10 = (s32) temp_t8_2;
    if (temp_s1_4 < 0) {
        phi_s0_2 = -temp_s1_4;
    } else {
        phi_s0_2 = temp_s1_4;
    }
    temp_lo = phi_s0_2 / (s32) arg0->unk_24498;
    if (sp18 >= sp10) {
        temp_t6->unk_2449A = (s16) (sp18 - temp_lo);
    } else {
        temp_t6->unk_2449A = (s16) (sp18 + temp_lo);
    }
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        do {
            if (phi_s0_3 != arg0->unk_24480) {
                temp_t6_2 = arg0 + (phi_s0_3 * 2);
                temp_t6_2->unk_244BC = 0;
                if (gSaveContext.unk_3F3F == 0) {
                    temp_s1_5 = *(&D_801C6798 + (phi_s0_3 * 4)) + arg0->unk_220;
                    if ((temp_s1_5->unk_24 == 0x5A) || (temp_s1_5->unk_25 == 0x45) || (temp_s1_5->unk_26 == 0x4C) || (temp_s1_5->unk_27 == 0x44) || (temp_s1_5->unk_28 == 0x41) || (temp_s1_5->unk_29 == 0x33)) {
                        temp_s1_6 = temp_t6_2->unk_244BC;
                        temp_t6_2->unk_244CE = 0;
                        temp_t6_2->unk_244C8 = temp_s1_6;
                        temp_t6_2->unk_244C2 = temp_s1_6;
                    }
                } else {
                    temp_t7_2 = arg0 + (phi_s0_3 * 6);
                    if ((temp_t7_2->unk_243F4 == 0x5A) && (temp_t7_2->unk_243F5 == 0x45) && (temp_t7_2->unk_243F6 == 0x4C) && (temp_t7_2->unk_243F7 == 0x44) && (temp_t7_2->unk_243F8 == 0x41) && (temp_t7_2->unk_243F9 == 0x33)) {
                        temp_s1_7 = temp_t6_2->unk_244BC;
                        temp_t6_2->unk_244CE = 0;
                        temp_t6_2->unk_244C8 = temp_s1_7;
                        temp_t6_2->unk_244C2 = temp_s1_7;
                    }
                }
            } else {
                (arg0 + (phi_s0_3 * 2))->unk_244C2 = 0;
            }
            temp_s0_3 = phi_s0_3 + 1;
            phi_s0_3 = temp_s0_3;
        } while ((s32) temp_s0_3 < 3);
        temp_s0_4 = arg0->unk_24480 * 2;
        (arg0 + temp_s0_4)->unk_2449A = (s16) *(&D_8081426C + temp_s0_4);
        arg0->unk_24498 = 4;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_80806BC8(void *arg0) {
    void *temp_t4;

    temp_t4 = arg0 + (arg0->unk_24480 * 2);
    arg0->unk_244DE = (s16) (arg0->unk_244DE + 0x32);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x1F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x1F);
    temp_t4->unk_244D4 = (s16) (temp_t4->unk_244D4 + 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_24498 = 4;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        (arg0 + (arg0->unk_24480 * 2))->unk_244D4 = (s16) arg0->unk_244B6;
        arg0->unk_244B8 = 0;
        arg0->unk_244DE = 0xC8;
        arg0->unk_24480 = 1;
        arg0->unk_24486 = 0x19;
    }
}

void func_80806CA0(void *arg0) {
    SramContext *sp24;
    void *sp20;
    SramContext *temp_a1;
    s16 temp_v0_3;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_a3;
    s32 phi_v1;

    temp_a3 = arg0 + 0x20000;
    if (((arg0->unk_24480 != 0) && ((arg0->unk_20 & 0x9000) != 0)) || (temp_v0 = arg0->unk_20, (~(temp_v0 | ~0x4000) == 0))) {
        arg0->unk_24480 = (s16) arg0->unk_2448E;
        arg0->unk_244AE = 6;
        arg0->unk_24486 = 0x1A;
        arg0->unk_24498 = 4;
        play_sound(0x483CU);
        return;
    }
    if ((temp_v0 & 0x9000) != 0) {
        temp_a1 = arg0 + 0x220;
        sp20 = temp_a3;
        sp24 = temp_a1;
        func_80146580((s32) arg0, temp_a1, (s32) arg0->unk_2448E);
        if (gSaveContext.unk_3F3F == 0) {
            arg0->unk_24486 = 0x1C;
        } else {
            sp20 = temp_a3;
            temp_v0_2 = arg0->unk_2448E * 2 * 4;
            func_80147008(sp24, *(&D_801C67C8 + temp_v0_2), *(&D_801C6818 + temp_v0_2), temp_a3);
            func_80147020(sp24);
            arg0->unk_24486 = 0x1D;
        }
        (arg0 + ((arg0 + 0x20000)->unk_448E * 2))->unk_244CE = 0;
        play_sound(0x28BAU);
        arg0->unk_24498 = 4;
        arg0->unk_244AE = 8;
        func_8013ECE0(200.0f, 0xFFU, 0x14U, 0x96U);
        D_80814260 = 0xF;
        return;
    }
    temp_v0_3 = arg0->unk_24504;
    phi_v1 = (s32) temp_v0_3;
    if ((s32) temp_v0_3 < 0) {
        phi_v1 = -(s32) temp_v0_3;
    }
    if (phi_v1 >= 0x1E) {
        sp20 = temp_a3;
        play_sound(0x4839U);
        arg0->unk_24480 = (s16) (arg0->unk_24480 ^ 1);
    }
}

void func_80806E84(void *arg0) {
    void *temp_t3;
    void *temp_t8;

    temp_t8 = arg0 + (arg0->unk_24480 * 2);
    temp_t8->unk_244D4 = (s16) (temp_t8->unk_244D4 - 0x32);
    temp_t3 = arg0 + (arg0->unk_24480 * 2);
    temp_t3->unk_244C2 = (s16) (temp_t3->unk_244C2 + 0x32);
    arg0->unk_244DE = (s16) (arg0->unk_244DE - 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_24498 = 4;
        (arg0 + (arg0->unk_24480 * 2))->unk_244D4 = 0;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
    }
}

void func_80806F30(void *arg0) {
    s16 temp_a2_2;
    s16 temp_t0;
    s16 temp_t1;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_lo;
    s32 temp_t2;
    void *temp_a3;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t9;
    s32 phi_a2;
    s16 phi_a2_2;

    temp_a2 = arg0->unk_24480 * 2;
    temp_t6 = arg0 + temp_a2;
    temp_t1 = *(&D_80814240 + temp_a2);
    temp_t0 = temp_t6->unk_2449A;
    temp_t2 = temp_t0 - temp_t1;
    if (temp_t2 < 0) {
        phi_a2 = -temp_t2;
    } else {
        phi_a2 = temp_t2;
    }
    temp_lo = phi_a2 / (s32) arg0->unk_24498;
    phi_a2_2 = 0;
    if ((s32) temp_t0 >= (s32) temp_t1) {
        temp_t6->unk_2449A = (s16) (temp_t0 - temp_lo);
    } else {
        temp_t6->unk_2449A = (s16) (temp_t0 + temp_lo);
    }
    do {
        temp_t9 = arg0 + (phi_a2_2 * 2);
        if (phi_a2_2 != arg0->unk_24480) {
            temp_t9->unk_244BC = (s16) (temp_t9->unk_244BC + 0x32);
            if (gSaveContext.unk_3F3F == 0) {
                temp_a3 = *(&D_801C6798 + (phi_a2_2 * 4)) + arg0->unk_220;
                if ((temp_a3->unk_24 == 0x5A) || (temp_a3->unk_25 == 0x45) || (temp_a3->unk_26 == 0x4C) || (temp_a3->unk_27 == 0x44) || (temp_a3->unk_28 == 0x41) || (temp_a3->unk_29 == 0x33)) {
                    temp_t9->unk_244CE = (s16) (temp_t9->unk_244CE + 0x3F);
                    temp_t9->unk_244C8 = (s16) temp_t9->unk_244BC;
                    goto block_23;
                }
            } else {
                temp_t6_2 = arg0 + (phi_a2_2 * 6);
                if ((temp_t6_2->unk_243F4 == 0x5A) && (temp_t6_2->unk_243F5 == 0x45) && (temp_t6_2->unk_243F6 == 0x4C) && (temp_t6_2->unk_243F7 == 0x44) && (temp_t6_2->unk_243F8 == 0x41) && (temp_t6_2->unk_243F9 == 0x33)) {
                    temp_t9->unk_244C8 = (s16) temp_t9->unk_244BC;
                    temp_t9->unk_244CE = (s16) (temp_t9->unk_244CE + 0x3F);
block_23:
                    temp_t9->unk_244C2 = temp_t9->unk_244BC;
                }
            }
        }
        temp_a2_2 = phi_a2_2 + 1;
        phi_a2_2 = temp_a2_2;
    } while ((s32) temp_a2_2 < 3);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        temp_a2_3 = arg0->unk_24480 * 2;
        (arg0 + temp_a2_3)->unk_2449A = (s16) *(&D_80814240 + temp_a2_3);
        arg0->unk_24498 = 4;
        arg0->unk_24480 = 3;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24486 = 0x16;
    }
}

void func_808071E4(void *arg0) {
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_t1;
    void *temp_t2;
    void *temp_t6;

    temp_v0 = D_80814260;
    if (temp_v0 == 0) {
        temp_v1 = arg0->unk_24498;
        if (temp_v1 == 4) {
            D_80814E80 = 1;
        }
        temp_a3 = D_80814E80;
        if (temp_v1 != 0) {
            temp_t2 = arg0 + (arg0->unk_2448E * 2);
            arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
            arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
            temp_t2->unk_244D4 = (s16) (temp_t2->unk_244D4 - 0x32);
            arg0->unk_244DE = (s16) (arg0->unk_244DE - 0x32);
            arg0->unk_244E0 = (s16) (arg0->unk_244E0 - 0x32);
        }
        temp_t1 = arg0 + (arg0->unk_2448E * 2);
        temp_t1->unk_24492 = (s16) (temp_t1->unk_24492 - temp_a3);
        arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
        D_80814E80 = temp_a3 + 2;
        if (arg0->unk_24498 == 0) {
            arg0->unk_24486 = 0x1E;
            arg0->unk_244AC = (s16) arg0->unk_244AE;
            arg0->unk_244B6 = 0xFF;
            (arg0 + (arg0->unk_2448E * 2))->unk_244CE = 0;
            temp_t6 = arg0 + (arg0->unk_2448E * 2);
            arg0->unk_244E0 = 0;
            temp_v1_2 = arg0->unk_244E0;
            arg0->unk_244B8 = (s16) temp_t6->unk_244CE;
            arg0->unk_244DE = temp_v1_2;
            temp_t6->unk_244C2 = temp_v1_2;
            (arg0 + (arg0->unk_2448E * 2))->unk_244C8 = temp_v1_2;
            (arg0 + (arg0->unk_2448E * 2))->unk_244D4 = temp_v1_2;
            arg0->unk_24498 = 0x2D;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    D_80814260 = temp_v0 - 1;
    if (D_80814260 == 0) {
        play_sound(0x5801U);
    }
}

void func_80807390(void *arg0) {
    SramContext *sp18;
    SramContext *temp_a0;
    s32 temp_v0;
    s32 phi_v0;

    temp_a0 = arg0 + 0x220;
    sp18 = temp_a0;
    arg0 = arg0;
    func_80147068(temp_a0);
    phi_v0 = 0;
    if (temp_a0->status == 0) {
        arg0->unk_24486 = 0x1C;
        do {
            temp_v0 = (phi_v0 + 1) & 0xFFFF;
            (arg0 + (arg0->unk_2448E * 6) + phi_v0)->unk_243F4 = (u8) gSaveContext.newf[phi_v0];
            phi_v0 = temp_v0;
        } while (temp_v0 < 6);
    }
}

void func_8080742C(void *arg0) {
    if (((arg0->unk_20 & 0xD000) != 0) || (arg0->unk_24498 = (s16) (arg0->unk_24498 - 1), (arg0->unk_24498 == 0))) {
        arg0->unk_244A0 = 0;
        arg0->unk_24498 = 4;
        arg0->unk_244AE = 0;
        arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
        play_sound(0x483CU);
    }
}

void func_808074B4(void *arg0) {
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a2_2;
    s16 temp_t1;
    s32 temp_lo;
    void *temp_a2;
    void *temp_t7;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_t9;
    s16 phi_a1;
    s32 phi_a2;
    s16 phi_a1_2;

    phi_a1 = 0;
    phi_a1_2 = 0;
    do {
        temp_t7 = arg0 + (phi_a1 * 2);
        temp_t1 = temp_t7->unk_2449A;
        temp_a1 = phi_a1 + 1;
        phi_a1 = temp_a1;
        if ((s32) temp_t1 < 0) {
            phi_a2 = -(s32) temp_t1;
        } else {
            phi_a2 = (s32) temp_t1;
        }
        temp_lo = phi_a2 / (s32) arg0->unk_24498;
        if ((s32) temp_t1 >= 0) {
            temp_t7->unk_2449A = (s16) (temp_t1 - temp_lo);
        } else {
            temp_t7->unk_2449A = (s16) (temp_t1 + temp_lo);
        }
    } while ((s32) temp_a1 < 5);
    do {
        temp_t8 = arg0 + (phi_a1_2 * 2);
        temp_t8->unk_244BC = (s16) (temp_t8->unk_244BC + 0x32);
        if (gSaveContext.unk_3F3F == 0) {
            temp_a2 = *(&D_801C6798 + (phi_a1_2 * 4)) + arg0->unk_220;
            if ((temp_a2->unk_24 == 0x5A) || (temp_a2->unk_25 == 0x45) || (temp_a2->unk_26 == 0x4C) || (temp_a2->unk_27 == 0x44) || (temp_a2->unk_28 == 0x41) || (temp_a2->unk_29 == 0x33)) {
                temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE + 0x3F);
                temp_t8->unk_244C8 = (s16) temp_t8->unk_244BC;
                goto block_24;
            }
        } else {
            temp_t9 = arg0 + (phi_a1_2 * 6);
            if ((temp_t9->unk_243F4 == 0x5A) && (temp_t9->unk_243F5 == 0x45) && (temp_t9->unk_243F6 == 0x4C) && (temp_t9->unk_243F7 == 0x44) && (temp_t9->unk_243F8 == 0x41) && (temp_t9->unk_243F9 == 0x33)) {
                temp_t8->unk_244C8 = (s16) temp_t8->unk_244BC;
                temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE + 0x3F);
block_24:
                temp_t8->unk_244C2 = temp_t8->unk_244BC;
            }
        }
        temp_a1_2 = phi_a1_2 + 1;
        phi_a1_2 = temp_a1_2;
    } while ((s32) temp_a1_2 < 3);
    temp_t8_2 = arg0 + (arg0->unk_2448E * 2);
    if ((s32) temp_t8_2->unk_244BC >= 0xC8) {
        temp_t8_2->unk_244BC = 0xC8;
    }
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        (arg0 + (arg0->unk_2448E * 2))->unk_24492 = 0;
        arg0->unk_244F0 = 0x46;
        arg0->unk_244F2 = 1;
        arg0->unk_24528 = 0x14;
        arg0->unk_244E0 = 0;
        arg0->unk_244DA = 0xC8;
        arg0->unk_244DE = (s16) arg0->unk_244E0;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24486 = 2;
    }
    temp_a2_2 = arg0->unk_244DA;
    arg0->unk_244DC = temp_a2_2;
    arg0->unk_244E2 = temp_a2_2;
}

void func_808077AC(void *arg0) {
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_lo;
    void *temp_t7;
    s16 phi_v0;
    s32 phi_v1;

    phi_v0 = 0;
    do {
        temp_t7 = arg0 + (phi_v0 * 2);
        temp_a3 = temp_t7->unk_2449A;
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        if ((s32) temp_a3 < 0) {
            phi_v1 = -(s32) temp_a3;
        } else {
            phi_v1 = (s32) temp_a3;
        }
        temp_lo = phi_v1 / (s32) arg0->unk_24498;
        if ((s32) temp_a3 >= 0) {
            temp_t7->unk_2449A = (s16) (temp_a3 - temp_lo);
        } else {
            temp_t7->unk_2449A = (s16) (temp_a3 + temp_lo);
        }
    } while ((s32) temp_v0 < 5);
    arg0->unk_244DA = (s16) (arg0->unk_244DA + 0x32);
    arg0->unk_244DC = (s16) (arg0->unk_244DC + 0x32);
    arg0->unk_244E2 = (s16) (arg0->unk_244E2 + 0x32);
    arg0->unk_244E0 = (s16) (arg0->unk_244E0 - 0x64);
    if ((s32) arg0->unk_244E0 <= 0) {
        arg0->unk_244E0 = 0;
    }
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244F0 = 0x46;
        arg0->unk_244F2 = 1;
        arg0->unk_24528 = 0x14;
        arg0->unk_244DA = 0xC8;
        arg0->unk_244E0 = 0;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_24486 = 2;
    }
    temp_v0_2 = arg0->unk_244DA;
    arg0->unk_244DC = temp_v0_2;
    arg0->unk_244E2 = temp_v0_2;
}

void func_80807940(GraphicsContext *arg0, void *arg1, s16 arg2) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;

    temp_v0 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = arg1;
    temp_v0->words.w0 = 0xFD900000;
    temp_v0_2 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x7080200;
    temp_v0_2->words.w0 = 0xF5900000;
    temp_v0_3 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE6000000;
    temp_v0_4 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = 0x703F800;
    temp_v0_4->words.w0 = 0xF3000000;
    temp_v0_5 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 0;
    temp_v0_5->words.w0 = 0xE7000000;
    temp_v0_6 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xF5800200;
    temp_v0_6->words.w1 = 0x80200;
    temp_v0_7 = arg0->polyOpa.p;
    arg0->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xF2000000;
    temp_v0_7->words.w1 = 0x3C03C;
    temp_v0_8 = arg0->polyOpa.p;
    temp_a1 = arg2 * 2;
    arg0->polyOpa.p = temp_v0_8 + 8;
    temp_t0 = (temp_a1 + 6) & 0xFF;
    temp_a3 = (temp_a1 & 0xFF) << 0x10;
    temp_v0_8->words.w1 = temp_a3 | (temp_t0 << 8) | ((temp_a1 + 2) & 0xFF);
    temp_v0_8->words.w0 = temp_a3 | (((temp_a1 + 4) & 0xFF) << 8) | temp_t0 | 0x7000000;
}

void func_80807A78(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t1;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_v0 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0 + 8);
    temp_v0->unk_0 = 0xFD900000;
    temp_v0->unk_4 = arg1;
    temp_v0_2 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_2 + 8);
    temp_v0_2->unk_4 = 0x7000000;
    temp_v0_2->unk_0 = 0xF5900000;
    temp_v0_3 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_3 + 8);
    temp_v0_3->unk_4 = 0;
    temp_v0_3->unk_0 = 0xE6000000;
    temp_v0_4 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_4 + 8);
    temp_v0_4->unk_4 = 0x703F800;
    temp_v0_4->unk_0 = 0xF3000000;
    temp_v0_5 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_5 + 8);
    temp_v0_5->unk_4 = 0;
    temp_v0_5->unk_0 = 0xE7000000;
    temp_v0_6 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_6 + 8);
    temp_v0_6->unk_4 = 0;
    temp_v0_6->unk_0 = 0xF5800200;
    temp_v0_7 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_7 + 8);
    temp_v0_7->unk_4 = 0x3C03C;
    temp_v0_7->unk_0 = 0xF2000000;
    temp_v0_8 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_8 + 8);
    temp_v0_8->unk_0 = 0xFD900000;
    temp_v0_8->unk_4 = arg2;
    temp_v0_9 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_9 + 8);
    temp_v0_9->unk_4 = 0x7000000;
    temp_v0_9->unk_0 = 0xF5900080;
    temp_v0_10 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_10 + 8);
    temp_v0_10->unk_4 = 0;
    temp_v0_10->unk_0 = 0xE6000000;
    temp_v0_11 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_11 + 8);
    temp_v0_11->unk_4 = 0x703F800;
    temp_v0_11->unk_0 = 0xF3000000;
    temp_v0_12 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_12 + 8);
    temp_v0_12->unk_4 = 0;
    temp_v0_12->unk_0 = 0xE7000000;
    temp_v0_13 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_13 + 8);
    temp_v0_13->unk_4 = 0x1000000;
    temp_v0_13->unk_0 = 0xF5800280;
    temp_v0_14 = arg0->unk_2B0;
    arg0->unk_2B0 = (void *) (temp_v0_14 + 8);
    temp_v0_14->unk_4 = 0x103C03C;
    temp_v0_14->unk_0 = 0xF2000000;
    temp_v0_15 = arg0->unk_2B0;
    temp_a2 = arg3 * 2;
    temp_t0 = (temp_a2 & 0xFF) << 0x10;
    arg0->unk_2B0 = (void *) (temp_v0_15 + 8);
    temp_t1 = (temp_a2 + 6) & 0xFF;
    temp_v0_15->unk_0 = (s32) (temp_t0 | (((temp_a2 + 4) & 0xFF) << 8) | temp_t1 | 0x7000000);
    temp_v0_15->unk_4 = (s32) (temp_t0 | (temp_t1 << 8) | ((temp_a2 + 2) & 0xFF));
}

void func_80807C58(GraphicsContext **arg0) {
    GraphicsContext *temp_t2;
    GraphicsContext *temp_t2_2;
    s16 *temp_t3;
    s16 *temp_v1_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_a0_8;
    s16 temp_a0_9;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_s1;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_v1_10;
    s16 temp_v1_3;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_s0;
    s32 temp_t2_3;
    s32 temp_v1;
    s32 temp_v1_7;
    s32 temp_v1_8;
    u16 temp_v1_4;
    u16 temp_v1_9;
    u8 temp_a0_10;
    u8 temp_a0_3;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s2_4;
    void *temp_s2_5;
    void *temp_s2_6;
    void *temp_t4_2;
    void *temp_t4_3;
    void *temp_t4_4;
    void *temp_t4_5;
    void *temp_t4_6;
    void *temp_t4_7;
    void *temp_t4_8;
    s16 phi_t4;
    s16 phi_t2;
    s16 phi_a2;
    s16 phi_t3;
    s16 phi_a3;
    s16 phi_t5;
    s16 phi_a2_2;
    s16 phi_a3_2;

    temp_t2 = arg0->unk_0;
    temp_v1 = temp_t2->polyOpa.d - 0x1040;
    temp_t2->polyOpa.d = temp_v1;
    arg0[37114] = temp_v1;
    phi_t3 = 0x26;
    phi_t5 = 0;
    phi_a2_2 = 0;
    phi_t4 = 0;
    phi_a2 = 0;
    do {
        temp_s1 = phi_t3 - 0xC;
        phi_t2 = -0x60;
        phi_a3 = 0;
        phi_a3_2 = 0;
loop_2:
        temp_v1_2 = &D_80814304 + (phi_t4 * 2);
        temp_s0 = phi_a2 * 0x10;
        temp_a0 = *temp_v1_2 + phi_t2;
        (arg0[37114] + temp_s0)->unk_20 = temp_a0;
        temp_a3 = phi_a3 + 1;
        *(arg0[37114] + temp_s0) = temp_a0;
        temp_a0_2 = *temp_v1_2 + phi_t2 + 0xC;
        (arg0[37114] + temp_s0)->unk_30 = temp_a0_2;
        temp_a2 = phi_a2 + 4;
        temp_t4 = phi_t4 + 1;
        (arg0[37114] + temp_s0)->unk_10 = temp_a0_2;
        (arg0[37114] + temp_s0)->unk_12 = phi_t3;
        temp_s2 = arg0[37114] + temp_s0;
        temp_s2->unk_2 = (s16) temp_s2->unk_12;
        (arg0[37114] + temp_s0)->unk_32 = temp_s1;
        (arg0[37114] + temp_s0)->unk_22 = temp_s1;
        (arg0[37114] + temp_s0)->unk_34 = 0;
        temp_s2_2 = arg0[37114] + temp_s0;
        temp_v1_3 = temp_s2_2->unk_34;
        temp_s2_2->unk_24 = temp_v1_3;
        (arg0[37114] + temp_s0)->unk_14 = temp_v1_3;
        (arg0[37114] + temp_s0)->unk_4 = temp_v1_3;
        (arg0[37114] + temp_s0)->unk_36 = 0;
        temp_s2_3 = arg0[37114] + temp_s0;
        temp_v1_4 = temp_s2_3->unk_36;
        temp_s2_3->unk_26 = temp_v1_4;
        (arg0[37114] + temp_s0)->unk_16 = temp_v1_4;
        (arg0[37114] + temp_s0)->unk_6 = temp_v1_4;
        (arg0[37114] + temp_s0)->unk_28 = 0;
        temp_s2_4 = arg0[37114] + temp_s0;
        temp_v1_5 = temp_s2_4->unk_28;
        temp_s2_4->unk_1A = temp_v1_5;
        (arg0[37114] + temp_s0)->unk_A = temp_v1_5;
        (arg0[37114] + temp_s0)->unk_8 = temp_v1_5;
        (arg0[37114] + temp_s0)->unk_3A = 0x200;
        temp_s2_5 = arg0[37114] + temp_s0;
        temp_v1_6 = temp_s2_5->unk_3A;
        temp_s2_5->unk_38 = temp_v1_6;
        (arg0[37114] + temp_s0)->unk_2A = temp_v1_6;
        (arg0[37114] + temp_s0)->unk_18 = temp_v1_6;
        (arg0[37114] + temp_s0)->unk_3F = 0xFF;
        temp_s2_6 = arg0[37114] + temp_s0;
        temp_a0_3 = temp_s2_6->unk_3F;
        temp_s2_6->unk_2F = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_1F = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_F = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_3E = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_2E = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_1E = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_E = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_3D = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_2D = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_1D = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_D = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_3C = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_2C = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_1C = temp_a0_3;
        (arg0[37114] + temp_s0)->unk_C = temp_a0_3;
        phi_t4 = temp_t4;
        phi_t2 = (s16) (phi_t2 + 0x10);
        phi_a2 = temp_a2;
        phi_a3 = temp_a3;
        phi_t4 = temp_t4;
        phi_a2 = temp_a2;
        if ((s32) temp_a3 < 0xD) {
            goto loop_2;
        }
        temp_t5 = phi_t5 + 1;
        phi_t3 = (s16) (phi_t3 - 0x10);
        phi_t5 = temp_t5;
    } while ((s32) temp_t5 < 5);
    temp_t2_2 = arg0->unk_0;
    temp_v1_7 = temp_t2_2->polyOpa.d - 0x180;
    temp_t2_2->polyOpa.d = temp_v1_7;
    arg0[37116] = temp_v1_7;
    do {
        temp_v1_8 = phi_a2_2 * 2;
        temp_t2_3 = phi_a3_2 * 0x10;
        temp_a0_4 = *(&D_80814404 + temp_v1_8) + 1;
        (arg0[37116] + temp_t2_3)->unk_20 = temp_a0_4;
        temp_t3 = &D_80814410 + temp_v1_8;
        temp_a2_2 = phi_a2_2 + 1;
        *(arg0[37116] + temp_t2_3) = temp_a0_4;
        temp_t4_2 = arg0[37116] + temp_t2_3;
        temp_a0_5 = (*temp_t3 + temp_t4_2->unk_0) - 2;
        temp_t4_2->unk_30 = temp_a0_5;
        (arg0[37116] + temp_t2_3)->unk_10 = temp_a0_5;
        temp_a0_6 = *(&D_8081441C + temp_v1_8) - 1;
        (arg0[37116] + temp_t2_3)->unk_12 = temp_a0_6;
        (arg0[37116] + temp_t2_3)->unk_2 = temp_a0_6;
        temp_t4_3 = arg0[37116] + temp_t2_3;
        temp_a0_7 = temp_t4_3->unk_2 - 0xE;
        temp_t4_3->unk_32 = temp_a0_7;
        (arg0[37116] + temp_t2_3)->unk_22 = temp_a0_7;
        (arg0[37116] + temp_t2_3)->unk_34 = 0;
        temp_t4_4 = arg0[37116] + temp_t2_3;
        temp_a0_8 = temp_t4_4->unk_34;
        temp_t4_4->unk_24 = temp_a0_8;
        (arg0[37116] + temp_t2_3)->unk_14 = temp_a0_8;
        (arg0[37116] + temp_t2_3)->unk_4 = temp_a0_8;
        (arg0[37116] + temp_t2_3)->unk_36 = 0;
        temp_t4_5 = arg0[37116] + temp_t2_3;
        temp_v1_9 = temp_t4_5->unk_36;
        temp_t4_5->unk_26 = temp_v1_9;
        (arg0[37116] + temp_t2_3)->unk_16 = temp_v1_9;
        (arg0[37116] + temp_t2_3)->unk_6 = temp_v1_9;
        (arg0[37116] + temp_t2_3)->unk_28 = 0;
        temp_t4_6 = arg0[37116] + temp_t2_3;
        temp_v1_10 = temp_t4_6->unk_28;
        temp_t4_6->unk_1A = temp_v1_10;
        (arg0[37116] + temp_t2_3)->unk_A = temp_v1_10;
        (arg0[37116] + temp_t2_3)->unk_8 = temp_v1_10;
        temp_a0_9 = *temp_t3 << 5;
        (arg0[37116] + temp_t2_3)->unk_38 = temp_a0_9;
        (arg0[37116] + temp_t2_3)->unk_18 = temp_a0_9;
        (arg0[37116] + temp_t2_3)->unk_3A = 0x200;
        temp_t4_7 = arg0[37116] + temp_t2_3;
        temp_t4_7->unk_2A = (s16) temp_t4_7->unk_3A;
        (arg0[37116] + temp_t2_3)->unk_3F = 0xFF;
        temp_t4_8 = arg0[37116] + temp_t2_3;
        temp_a0_10 = temp_t4_8->unk_3F;
        temp_t4_8->unk_2F = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_1F = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_F = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_3E = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_2E = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_1E = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_E = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_3D = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_2D = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_1D = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_D = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_3C = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_2C = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_1C = temp_a0_10;
        (arg0[37116] + temp_t2_3)->unk_C = temp_a0_10;
        phi_a2_2 = temp_a2_2;
        phi_a3_2 = (s16) (phi_a3_2 + 4);
    } while ((s32) temp_a2_2 < 6);
}

void func_80808214(GraphicsContext **arg0) {
    s16 sp108;
    void *sp34;
    void *sp28;
    GraphicsContext *temp_t0;
    GraphicsContext *temp_v0_25;
    s16 temp_a0_3;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_s0;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_v0_20;
    s32 temp_v0_26;
    s32 temp_v0_27;
    s32 temp_v1_2;
    u16 *temp_a2;
    u16 temp_a0_4;
    u16 temp_v1;
    u8 temp_v1_9;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    void *temp_t2;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_28;
    void *temp_v0_29;
    void *temp_v0_2;
    void *temp_v0_30;
    void *temp_v0_31;
    void *temp_v0_32;
    void *temp_v0_33;
    void *temp_v0_34;
    void *temp_v0_35;
    void *temp_v0_36;
    void *temp_v0_37;
    void *temp_v0_38;
    void *temp_v0_39;
    void *temp_v0_3;
    void *temp_v0_40;
    void *temp_v0_41;
    void *temp_v0_42;
    void *temp_v0_43;
    void *temp_v0_44;
    void *temp_v0_45;
    void *temp_v0_46;
    void *temp_v0_47;
    void *temp_v0_48;
    void *temp_v0_49;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    s16 phi_t1;
    s32 phi_a0;
    s32 phi_v1;
    s32 phi_a1;
    s16 phi_s0;
    s32 phi_s0_2;
    s16 phi_t1_2;
    s32 phi_a2;
    s32 phi_v0;
    void *phi_a3;
    s16 phi_v0_2;
    s16 phi_s0_3;

    temp_t0 = arg0->unk_0;
    temp_v0 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x552EFF7F;
    temp_v0_2->words.w0 = 0xFC309661;
    temp_v0_3 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFA000000;
    temp_v0_3->words.w1 = (arg0->unk_244B6 & 0xFF) | ~0xFF;
    temp_v0_4 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = 0;
    temp_v0_4->words.w0 = 0xFB000000;
    temp_v0_5 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0x1018030;
    temp_v0_5->words.w1 = arg0[37116];
    temp_v0_6 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = &D_01007980;
    temp_v0_6->words.w0 = 0xFD700000;
    temp_v0_7 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0x7000000;
    temp_v0_7->words.w0 = 0xF5700000;
    temp_v0_8 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xE6000000;
    temp_v0_9 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0x71BF125;
    temp_v0_9->words.w0 = 0xF3000000;
    temp_v0_10 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0;
    temp_v0_10->words.w0 = 0xE7000000;
    temp_v0_11 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_11 + 8;
    temp_v0_11->words.w1 = 0;
    temp_v0_11->words.w0 = 0xF5680E00;
    temp_v0_12 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_12 + 8;
    temp_v0_12->words.w0 = 0xF2000000;
    temp_v0_12->words.w1 = 0xDC03C;
    temp_v0_13 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_13 + 8;
    temp_v0_13->words.w1 = 0x602;
    temp_v0_13->words.w0 = 0x7000406;
    temp_v0_14 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_14 + 8;
    temp_v0_14->words.w1 = 0;
    temp_v0_14->words.w0 = 0xE7000000;
    phi_t1 = 0;
    phi_s0 = 0x10;
    phi_t1_2 = 0;
    phi_a3 = arg0 + 0x20000;
    do {
        temp_v0_15 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_15 + 8;
        temp_v0_15->words.w0 = 0xFA000000;
        temp_v0_15->words.w1 = ((arg0->unk_244B4 & 0xFF) << 8) | (arg0->unk_244B0 << 0x18) | ((arg0->unk_244B2 & 0xFF) << 0x10) | 0xFF;
        temp_v0_16 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_16 + 8;
        temp_v0_16->words.w1 = 0;
        temp_v0_16->words.w0 = 0xFB000000;
        temp_v0_17 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_17 + 8;
        temp_v0_17->words.w0 = 0xFD700000;
        temp_v0_17->words.w1 = *(&D_80814428 + (phi_t1 * 4));
        temp_v0_18 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_18 + 8;
        temp_v0_18->words.w1 = 0x7000000;
        temp_v0_18->words.w0 = 0xF5700000;
        temp_v0_19 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_19 + 8;
        temp_v0_19->words.w1 = 0;
        temp_v0_19->words.w0 = 0xE6000000;
        temp_t2 = temp_t0->polyOpa.p;
        temp_a2 = &D_80814430 + (phi_t1 * 2);
        temp_t0->polyOpa.p = temp_t2 + 8;
        temp_t2->words.w0 = 0xF3000000;
        temp_v1 = *temp_a2;
        temp_t1 = phi_t1 + 1;
        temp_a0 = (temp_v1 * 0x10) - 1;
        phi_a1 = 0x7FF;
        if (temp_a0 < 0x7FF) {
            phi_a1 = temp_a0;
        }
        temp_v0_20 = (s32) (temp_v1 * 2) / 8;
        phi_t1 = temp_t1;
        if (temp_v0_20 <= 0) {
            phi_a0 = 1;
        } else {
            phi_a0 = temp_v0_20;
        }
        if (temp_v0_20 <= 0) {
            phi_v1 = 1;
        } else {
            phi_v1 = temp_v0_20;
        }
        temp_t2->words.w1 = (((s32) (phi_a0 + 0x7FF) / phi_v1) & 0xFFF) | 0x7000000U | ((phi_a1 & 0xFFF) << 0xC);
        temp_v0_21 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_21 + 8;
        temp_v0_21->words.w1 = 0;
        temp_v0_21->words.w0 = 0xE7000000;
        temp_v0_22 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_22 + 8;
        temp_v0_22->words.w1 = 0;
        temp_v0_22->words.w0 = ((((s32) ((*temp_a2 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5700000;
        temp_v0_23 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_23 + 8;
        temp_v0_23->words.w0 = 0xF2000000;
        temp_a2_2 = phi_s0 * 2;
        temp_v0_23->words.w1 = ((((*temp_a2 - 1) * 4) & 0xFFF) << 0xC) | 0x3C;
        temp_v0_24 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_24 + 8;
        temp_a0_2 = (temp_a2_2 & 0xFF) << 0x10;
        temp_a1 = (temp_a2_2 + 6) & 0xFF;
        temp_v0_24->words.w0 = temp_a0_2 | (((temp_a2_2 + 4) & 0xFF) << 8) | temp_a1 | 0x7000000U;
        temp_v0_24->words.w1 = temp_a0_2 | (temp_a1 << 8) | ((temp_a2_2 + 2) & 0xFF);
        phi_s0 = (s16) (phi_s0 + 4);
    } while ((s32) temp_t1 < 2);
    temp_v0_25 = arg0->unk_0;
    temp_v1_2 = temp_v0_25->polyOpa.d - 0x2C0;
    temp_v0_25->polyOpa.d = temp_v1_2;
    arg0[37115] = temp_v1_2;
    phi_s0_2 = 0;
    phi_s0_3 = (s16) 0;
    do {
        if ((phi_s0_2 > 0) && (phi_s0_2 < 9)) {
            temp_a2_3 = phi_s0_2 * 2;
            temp_v0_26 = phi_t1_2 * 0x10;
            temp_v1_3 = *(&D_80814280 + ((arg0 + (arg0->unk_24480 * 8) + phi_s0_2)->unk_24413 * 2)) + *(&D_80814434 + temp_a2_3) + arg0->unk_24506;
            (arg0[37115] + temp_v0_26)->unk_20 = temp_v1_3;
            *(arg0[37115] + temp_v0_26) = temp_v1_3;
            temp_a1_2 = arg0[37115] + temp_v0_26;
            temp_v1_4 = temp_a1_2->unk_0 + 0xA;
            temp_a1_2->unk_30 = temp_v1_4;
            (arg0[37115] + temp_v0_26)->unk_10 = temp_v1_4;
            phi_a2 = temp_a2_3;
            phi_v0 = temp_v0_26;
        } else {
            temp_a2_4 = phi_s0_2 * 2;
            temp_v0_27 = phi_t1_2 * 0x10;
            temp_v1_5 = *(&D_80814434 + temp_a2_4) + arg0->unk_24506;
            (arg0[37115] + temp_v0_27)->unk_20 = temp_v1_5;
            *(arg0[37115] + temp_v0_27) = temp_v1_5;
            temp_a1_3 = arg0[37115] + temp_v0_27;
            temp_v1_6 = temp_a1_3->unk_0 + 0xA;
            temp_a1_3->unk_30 = temp_v1_6;
            (arg0[37115] + temp_v0_27)->unk_10 = temp_v1_6;
            phi_a2 = temp_a2_4;
            phi_v0 = temp_v0_27;
        }
        temp_v1_7 = *(&D_8081444C + phi_a2);
        temp_t1_2 = phi_t1_2 + 4;
        (arg0[37115] + phi_v0)->unk_12 = temp_v1_7;
        (arg0[37115] + phi_v0)->unk_2 = temp_v1_7;
        temp_a1_4 = arg0[37115] + phi_v0;
        temp_v1_8 = temp_a1_4->unk_2 - 0xA;
        temp_a1_4->unk_32 = temp_v1_8;
        (arg0[37115] + phi_v0)->unk_22 = temp_v1_8;
        (arg0[37115] + phi_v0)->unk_34 = 0;
        temp_a1_5 = arg0[37115] + phi_v0;
        temp_a0_3 = temp_a1_5->unk_34;
        temp_a1_5->unk_24 = temp_a0_3;
        (arg0[37115] + phi_v0)->unk_14 = temp_a0_3;
        (arg0[37115] + phi_v0)->unk_4 = temp_a0_3;
        (arg0[37115] + phi_v0)->unk_36 = 0;
        temp_a1_6 = arg0[37115] + phi_v0;
        temp_a0_4 = temp_a1_6->unk_36;
        temp_a1_6->unk_26 = temp_a0_4;
        (arg0[37115] + phi_v0)->unk_16 = temp_a0_4;
        (arg0[37115] + phi_v0)->unk_6 = temp_a0_4;
        (arg0[37115] + phi_v0)->unk_28 = 0;
        temp_a1_7 = arg0[37115] + phi_v0;
        temp_a0_5 = temp_a1_7->unk_28;
        temp_a1_7->unk_1A = temp_a0_5;
        (arg0[37115] + phi_v0)->unk_A = temp_a0_5;
        (arg0[37115] + phi_v0)->unk_8 = temp_a0_5;
        (arg0[37115] + phi_v0)->unk_3A = 0x200;
        temp_a1_8 = arg0[37115] + phi_v0;
        temp_a0_6 = temp_a1_8->unk_3A;
        temp_a1_8->unk_38 = temp_a0_6;
        (arg0[37115] + phi_v0)->unk_2A = temp_a0_6;
        (arg0[37115] + phi_v0)->unk_18 = temp_a0_6;
        (arg0[37115] + phi_v0)->unk_3F = 0xFF;
        temp_a1_9 = arg0[37115] + phi_v0;
        temp_v1_9 = temp_a1_9->unk_3F;
        temp_a1_9->unk_2F = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_1F = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_F = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_3E = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_2E = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_1E = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_E = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_3D = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_2D = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_1D = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_D = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_3C = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_2C = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_1C = temp_v1_9;
        (arg0[37115] + phi_v0)->unk_C = temp_v1_9;
        phi_s0_2 = (s32) (s16) (phi_s0_2 + 1);
        phi_t1_2 = temp_t1_2;
    } while ((s32) temp_t1_2 < 0x2C);
    temp_v0_28 = arg0[37115];
    temp_v1_10 = temp_v0_28->unk_0 + 0x6C;
    temp_v0_28->unk_30 = temp_v1_10;
    arg0[37115]->unk_10 = temp_v1_10;
    temp_v0_29 = arg0[37115];
    temp_v1_11 = temp_v0_29->unk_2 - 0x10;
    temp_v0_29->unk_32 = temp_v1_11;
    arg0[37115]->unk_22 = temp_v1_11;
    arg0[37115]->unk_38 = 0xD80;
    temp_v0_30 = arg0[37115];
    temp_v0_30->unk_18 = temp_v0_30->unk_38;
    temp_v0_31 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_31 + 8;
    temp_v0_31->words.w1 = 0;
    temp_v0_31->words.w0 = 0xE7000000;
    temp_v0_32 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_32 + 8;
    temp_v0_32->words.w0 = 0xFC309661;
    temp_v0_32->words.w1 = 0x552EFF7F;
    temp_v0_33 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_33 + 8;
    temp_v0_33->words.w0 = 0xFA000000;
    temp_v0_33->words.w1 = ((arg0->unk_244B4 & 0xFF) << 8) | (arg0->unk_244B0 << 0x18) | ((arg0->unk_244B2 & 0xFF) << 0x10) | (arg0->unk_244E4 & 0xFF);
    temp_v0_34 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_34 + 8;
    temp_v0_34->words.w0 = 0x1004008;
    temp_v0_34->words.w1 = arg0[37115];
    temp_v0_35 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_35 + 8;
    temp_v0_35->words.w1 = &D_010220B0;
    temp_v0_35->words.w0 = 0xFD700000;
    temp_v0_36 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_36 + 8;
    temp_v0_36->words.w1 = 0x7000000;
    temp_v0_36->words.w0 = 0xF5700000;
    temp_v0_37 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_37 + 8;
    temp_v0_37->words.w1 = 0;
    temp_v0_37->words.w0 = 0xE6000000;
    temp_v0_38 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_38 + 8;
    temp_v0_38->words.w1 = 0x76BF04C;
    temp_v0_38->words.w0 = 0xF3000000;
    temp_v0_39 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_39 + 8;
    temp_v0_39->words.w1 = 0;
    temp_v0_39->words.w0 = 0xE7000000;
    temp_v0_40 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_40 + 8;
    temp_v0_40->words.w1 = 0;
    temp_v0_40->words.w0 = 0xF5703600;
    temp_v0_41 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_41 + 8;
    temp_v0_41->words.w0 = 0xF2000000;
    temp_v0_41->words.w1 = 0x1AC03C;
    temp_v0_42 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_42 + 8;
    temp_v0_42->words.w1 = 0x602;
    temp_v0_42->words.w0 = 0x7000406;
    temp_v0_43 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_43 + 8;
    temp_v0_43->words.w1 = 0;
    temp_v0_43->words.w0 = 0xE7000000;
    temp_v0_44 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_44 + 8;
    temp_v0_44->words.w0 = 0xFCFF97FF;
    temp_v0_44->words.w1 = 0xFF2DFEFF;
    temp_v0_45 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_45 + 8;
    temp_v0_45->words.w0 = 0x1020040;
    temp_v0_45->words.w1 = arg0[37115] + 0x40;
    temp_v0_46 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_46 + 8;
    temp_v0_46->words.w0 = 0xFA000000;
    temp_v0_46->words.w1 = (arg0->unk_244E4 & 0xFF) | ~0xFF;
    sp34 = arg0 + 0x12550;
    phi_v0_2 = 0;
    do {
        sp28 = phi_a3;
        sp108 = phi_v0_2;
        func_80807940(arg0->unk_0, ((arg0 + (phi_a3->unk_4480 * 8) + phi_v0_2)->unk_24414 << 7) + sp34 + 0x7880, phi_s0_3, phi_a3);
        temp_s0 = phi_s0_3 + 4;
        phi_v0_2 = (s16) (phi_v0_2 + 1);
        phi_s0_3 = temp_s0;
    } while ((s32) temp_s0 < 0x20);
    phi_a3->unk_43EC->unk_2BA = 0x300;
    temp_v0_47 = phi_a3->unk_43EC;
    temp_v1_12 = temp_v0_47->unk_2BA;
    temp_v0_47->unk_2B8 = temp_v1_12;
    phi_a3->unk_43EC->unk_2AA = temp_v1_12;
    phi_a3->unk_43EC->unk_298 = temp_v1_12;
    phi_a3->unk_43EC->unk_27A = temp_v1_12;
    phi_a3->unk_43EC->unk_278 = temp_v1_12;
    phi_a3->unk_43EC->unk_26A = temp_v1_12;
    phi_a3->unk_43EC->unk_258 = temp_v1_12;
    temp_a0_7 = phi_a3->unk_4510;
    if ((temp_a0_7 == 0) || (temp_a0_7 == 1) || (temp_a0_7 == 4)) {
        phi_a3->unk_43EC->unk_2B8 = 0x700;
        temp_v0_49 = phi_a3->unk_43EC;
        temp_v0_49->unk_298 = (s16) temp_v0_49->unk_2B8;
        return;
    }
    if ((temp_a0_7 == 2) || (temp_a0_7 == 3)) {
        phi_a3->unk_43EC->unk_2B8 = 0x500;
        temp_v0_48 = phi_a3->unk_43EC;
        temp_v0_48->unk_298 = (s16) temp_v0_48->unk_2B8;
    }
}

void func_80808D30(GraphicsContext **arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s6;
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_s5;
    void *temp_s2;
    s16 phi_s5;
    s16 phi_s1;
    s16 phi_s0;

    temp_a0 = arg0->unk_0;
    temp_s6 = temp_a0;
    func_8012C8AC(temp_a0);
    temp_v1 = temp_s6->polyOpa.p;
    temp_s6->polyOpa.p = &temp_v1[1];
    temp_v1->words.w1 = 0x100000;
    temp_v1->words.w0 = 0xE3000A01;
    temp_v1_2 = temp_s6->polyOpa.p;
    temp_s6->polyOpa.p = &temp_v1_2[1];
    temp_v1_2->words.w0 = 0xE200001C;
    temp_v1_2->words.w1 = 0xC184240;
    temp_v1_3 = temp_s6->polyOpa.p;
    temp_s6->polyOpa.p = &temp_v1_3[1];
    temp_v1_3->words.w0 = 0xFCFFADFF;
    temp_v1_3->words.w1 = 0xFFFD9238;
    temp_v1_4 = temp_s6->polyOpa.p;
    temp_s6->polyOpa.p = &temp_v1_4[1];
    temp_v1_4->words.w0 = (arg0->unk_24514 & 0xFF) | 0xFA000000;
    temp_v1_4->words.w1 = -1;
    temp_s2 = arg0 + 0x12550;
    phi_s5 = 0;
    phi_s1 = 0;
    do {
        temp_v1_5 = temp_s6->polyOpa.p;
        temp_s6->polyOpa.p = &temp_v1_5[1];
        temp_v1_5->words.w0 = 0x1020040;
        temp_v1_5->words.w1 = arg0[37114] + (phi_s5 * 0x10);
        phi_s0 = 0;
loop_2:
        func_80807940(arg0->unk_0, (*(&D_808141F0 + phi_s1) << 7) + temp_s2 + 0x7880, phi_s0);
        temp_s0 = phi_s0 + 4;
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
        if ((s32) temp_s0 < 0x20) {
            goto loop_2;
        }
        temp_s5 = phi_s5 + 0x20;
        phi_s5 = temp_s5;
    } while ((s32) temp_s5 < 0x100);
    temp_v1_6 = temp_s6->polyOpa.p;
    temp_s6->polyOpa.p = &temp_v1_6[1];
    temp_v1_6->words.w0 = 0x1004008;
    temp_v1_6->words.w1 = arg0[37114] + 0x1000;
    func_80807940(arg0->unk_0, (*(&D_808141F0 + temp_s1) << 7) + temp_s2 + 0x7880, 0);
}

void func_80808F1C(GraphicsContext **arg0) {
    u16 spC2;
    GraphicsContext *spBC;
    GraphicsContext **sp28;
    GraphicsContext **sp24;
    GraphicsContext **sp20;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_38;
    Gfx *temp_v0_39;
    Gfx *temp_v0_40;
    Gfx *temp_v0_41;
    Gfx *temp_v0_42;
    Gfx *temp_v0_43;
    Gfx *temp_v0_44;
    Gfx *temp_v0_48;
    Gfx *temp_v0_53;
    GraphicsContext **temp_a1;
    GraphicsContext **temp_t0;
    GraphicsContext **temp_t7;
    GraphicsContext *temp_t2;
    GraphicsContext *temp_v1;
    GraphicsContext *temp_v1_2;
    GraphicsContext *temp_v1_3;
    GraphicsContext *temp_v1_4;
    GraphicsContext *temp_v1_6;
    GraphicsContext *temp_v1_7;
    GraphicsContext *temp_v1_8;
    GraphicsContext *temp_v1_9;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_46;
    s16 temp_v0_47;
    s16 temp_v0_49;
    s16 temp_v0_4;
    s16 temp_v0_50;
    s16 temp_v0_51;
    s16 temp_v0_52;
    s16 temp_v0_54;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_17;
    s16 temp_v1_18;
    s16 temp_v1_19;
    s16 temp_v1_20;
    s16 temp_v1_5;
    s32 temp_a0;
    s32 temp_v0_55;
    u16 temp_v0_45;
    void *temp_t6;
    void *temp_t7_2;
    void *temp_t8;
    void *temp_t9;
    void *temp_v0_56;
    void *temp_v0_57;
    void *temp_v0_58;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    s16 phi_v1;
    s16 phi_v1_2;
    s16 phi_v1_3;
    s16 phi_v1_4;
    s16 phi_v1_5;
    s16 phi_v1_6;
    s16 phi_v1_7;
    s16 phi_v1_8;
    s16 phi_v1_9;
    s32 phi_a1;
    u16 phi_v0;
    GraphicsContext **phi_t0;
    GraphicsContext *phi_t2;
    GraphicsContext *phi_t2_2;

    temp_t2 = arg0->unk_0;
    spBC = temp_t2;
    func_80807C58(arg0);
    func_80808214(arg0);
    func_8080D2EC(arg0);
    temp_t0 = arg0 + 0x20000;
    temp_v1 = arg0[37115];
    temp_a0 = (s16) ((arg0->unk_2451C * 4) + 4) * 0x10;
    temp_v0 = *(temp_v1 + temp_a0) - 6;
    temp_v1->unk_260 = temp_v0;
    arg0[37115]->unk_240 = temp_v0;
    temp_v1_2 = arg0[37115];
    temp_v0_2 = temp_v1_2->unk_240 + 0x18;
    temp_v1_2->unk_270 = temp_v0_2;
    arg0[37115]->unk_250 = temp_v0_2;
    temp_v1_3 = arg0[37115];
    temp_v0_3 = (temp_v1_3 + temp_a0)->unk_2 + 7;
    temp_v1_3->unk_252 = temp_v0_3;
    arg0[37115]->unk_242 = temp_v0_3;
    temp_v1_4 = arg0[37115];
    temp_v0_4 = temp_v1_4->unk_242 - 0x18;
    temp_v1_4->unk_272 = temp_v0_4;
    arg0[37115]->unk_262 = temp_v0_4;
    temp_v1_5 = arg0->unk_24510;
    if ((temp_v1_5 == 0) || (temp_v1_5 == 1) || (temp_v1_5 == 4)) {
        temp_v0_11 = (arg0[37116] + (arg0->unk_24518 << 6))->unk_40 - 4;
        arg0[37115]->unk_2A0 = temp_v0_11;
        arg0[37115]->unk_280 = temp_v0_11;
        temp_v1_8 = arg0[37115];
        temp_v0_12 = temp_v1_8->unk_280 + 0x34;
        temp_v1_8->unk_2B0 = temp_v0_12;
        arg0[37115]->unk_290 = temp_v0_12;
        temp_v0_13 = (arg0[37116] + (arg0->unk_24518 << 6))->unk_42 + 4;
        arg0[37115]->unk_292 = temp_v0_13;
        arg0[37115]->unk_282 = temp_v0_13;
    } else if ((temp_v1_5 == 2) || (temp_v1_5 == 3)) {
        temp_v0_8 = (arg0[37116] + (arg0->unk_24518 << 6))->unk_40 - 4;
        arg0[37115]->unk_2A0 = temp_v0_8;
        arg0[37115]->unk_280 = temp_v0_8;
        temp_v1_7 = arg0[37115];
        temp_v0_9 = temp_v1_7->unk_280 + 0x28;
        temp_v1_7->unk_2B0 = temp_v0_9;
        arg0[37115]->unk_290 = temp_v0_9;
        temp_v0_10 = (arg0[37116] + (arg0->unk_24518 << 6))->unk_42 + 4;
        arg0[37115]->unk_292 = temp_v0_10;
        arg0[37115]->unk_282 = temp_v0_10;
    } else {
        temp_a0_2 = arg0->unk_24516;
        temp_v0_5 = (*(arg0[37114] + (temp_a0_2 << 6)) - *(&D_80814304 + (temp_a0_2 * 2))) - 6;
        arg0[37115]->unk_2A0 = temp_v0_5;
        arg0[37115]->unk_280 = temp_v0_5;
        temp_v1_6 = arg0[37115];
        temp_v0_6 = temp_v1_6->unk_280 + 0x18;
        temp_v1_6->unk_2B0 = temp_v0_6;
        arg0[37115]->unk_290 = temp_v0_6;
        temp_v0_7 = (arg0[37114] + (arg0->unk_24516 << 6))->unk_2 + 6;
        arg0[37115]->unk_292 = temp_v0_7;
        arg0[37115]->unk_282 = temp_v0_7;
    }
    temp_v1_9 = arg0[37115];
    temp_v0_14 = temp_v1_9->unk_282 - 0x18;
    temp_v1_9->unk_2B2 = temp_v0_14;
    arg0[37115]->unk_2A2 = temp_v0_14;
    temp_v0_15 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_15 + 8;
    temp_v0_15->words.w0 = 0x1008010;
    temp_v0_15->words.w1 = &arg0[37115]->unk_240;
    temp_v0_16 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_16 + 8;
    temp_v0_16->words.w1 = 0;
    temp_v0_16->words.w0 = 0xE7000000;
    temp_v0_17 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_17 + 8;
    temp_v0_17->words.w1 = 0xFF2FFFFF;
    temp_v0_17->words.w0 = 0xFC6196C3;
    temp_v0_18 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_18 + 8;
    temp_v0_18->words.w0 = 0xFA000000;
    temp_v0_18->words.w1 = (arg0->unk_244F0 & 0xFF) | (arg0->unk_244EA << 0x18) | ((arg0->unk_244EC & 0xFF) << 0x10) | ((arg0->unk_244EE & 0xFF) << 8);
    temp_v0_19 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_19 + 8;
    temp_v0_19->words.w1 = &D_0102B170;
    temp_v0_19->words.w0 = 0xFD900000;
    temp_v0_20 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_20 + 8;
    temp_v0_20->words.w1 = 0x7000000;
    temp_v0_20->words.w0 = 0xF5900000;
    temp_v0_21 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_21 + 8;
    temp_v0_21->words.w1 = 0;
    temp_v0_21->words.w0 = 0xE6000000;
    temp_v0_22 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_22 + 8;
    temp_v0_22->words.w1 = 0x711F2AB;
    temp_v0_22->words.w0 = 0xF3000000;
    temp_v0_23 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_23 + 8;
    temp_v0_23->words.w1 = 0;
    temp_v0_23->words.w0 = 0xE7000000;
    temp_v0_24 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_24 + 8;
    temp_v0_24->words.w1 = 0;
    temp_v0_24->words.w0 = 0xF5880600;
    temp_v0_25 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_25 + 8;
    temp_v0_25->words.w1 = 0x5C05C;
    temp_v0_25->words.w0 = 0xF2000000;
    temp_v0_26 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_26 + 8;
    temp_v0_26->words.w1 = 0x602;
    temp_v0_26->words.w0 = 0x7000406;
    temp_v1_10 = arg0->unk_24510;
    if ((temp_v1_10 == 0) || (temp_v1_10 == 1) || (temp_v1_10 == 4)) {
        temp_v0_34 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_34 + 8;
        temp_v0_34->words.w1 = &D_0102B3B0;
        temp_v0_34->words.w0 = 0xFD900000;
        temp_v0_35 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_35 + 8;
        temp_v0_35->words.w1 = 0x7000000;
        temp_v0_35->words.w0 = 0xF5900000;
        temp_v0_36 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_36 + 8;
        temp_v0_36->words.w1 = 0;
        temp_v0_36->words.w0 = 0xE6000000;
        temp_v0_37 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_37 + 8;
        temp_v0_37->words.w1 = 0x729F125;
        temp_v0_37->words.w0 = 0xF3000000;
        temp_v0_38 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_38 + 8;
        temp_v0_38->words.w1 = 0;
        temp_v0_38->words.w0 = 0xE7000000;
        temp_v0_39 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_39 + 8;
        temp_v0_39->words.w1 = 0;
        temp_v0_39->words.w0 = 0xF5880E00;
        temp_v0_40 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_40 + 8;
        temp_v0_40->words.w1 = 0xDC05C;
        temp_v0_40->words.w0 = 0xF2000000;
    } else if ((temp_v1_10 == 2) || (temp_v1_10 == 3)) {
        temp_v0_27 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_27 + 8;
        temp_v0_27->words.w1 = &D_0102B8F0;
        temp_v0_27->words.w0 = 0xFD900000;
        temp_v0_28 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_28 + 8;
        temp_v0_28->words.w1 = 0x7000000;
        temp_v0_28->words.w0 = 0xF5900000;
        temp_v0_29 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_29 + 8;
        temp_v0_29->words.w1 = 0;
        temp_v0_29->words.w0 = 0xE6000000;
        temp_v0_30 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_30 + 8;
        temp_v0_30->words.w1 = 0x71DF19A;
        temp_v0_30->words.w0 = 0xF3000000;
        temp_v0_31 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_31 + 8;
        temp_v0_31->words.w1 = 0;
        temp_v0_31->words.w0 = 0xE7000000;
        temp_v0_32 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_32 + 8;
        temp_v0_32->words.w1 = 0;
        temp_v0_32->words.w0 = 0xF5880A00;
        temp_v0_33 = temp_t2->polyOpa.p;
        temp_t2->polyOpa.p = temp_v0_33 + 8;
        temp_v0_33->words.w1 = 0x9C05C;
        temp_v0_33->words.w0 = 0xF2000000;
    }
    temp_v0_41 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_41 + 8;
    temp_v0_41->words.w0 = 0x7080C0E;
    temp_v0_41->words.w1 = 0x80E0A;
    sp20 = temp_t0;
    spBC = temp_t2;
    func_80808D30(arg0, 0xF5900000U, 0x7000000U, 0xE6000000U);
    temp_v0_42 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = temp_v0_42 + 8;
    temp_v0_42->words.w1 = 0;
    temp_v0_42->words.w0 = 0xE7000000;
    spBC = temp_t2;
    sp20 = temp_t0;
    func_8012C8AC(arg0->unk_0);
    temp_v0_43 = temp_t2->polyOpa.p;
    temp_t2->polyOpa.p = &temp_v0_43[1];
    temp_v0_43->words.w0 = 0xFCFF97FF;
    temp_v0_43->words.w1 = 0xFF2DFEFF;
    temp_v0_44 = temp_t2->polyOpa.p;
    temp_t7 = &arg0[5];
    temp_t2->polyOpa.p = &temp_v0_44[1];
    temp_v0_44->words.w1 = -1;
    temp_v0_44->words.w0 = 0xFA000000;
    phi_t0 = temp_t0;
    phi_t2 = temp_t2;
    phi_t2_2 = temp_t2;
    if (arg0->unk_24486 == 0x24) {
        sp24 = temp_t7;
        temp_v0_45 = temp_t7->unk_C;
        phi_v0 = temp_v0_45;
        if (~(temp_v0_45 | ~0x1000) == 0) {
            spBC = temp_t2;
            play_sound(0x483BU);
            arg0->unk_2451A = 5;
            arg0->unk_24518 = 4;
            phi_t2_2 = temp_t2;
        } else if (~(temp_v0_45 | ~0x4000) == 0) {
            temp_v0_46 = arg0->unk_2451C;
            if ((temp_v0_46 == 7) && (phi_v1 = temp_v0_46, phi_v1_2 = temp_v0_46, ((arg0 + (arg0->unk_24480 * 8))->unk_2441B != 0x3E))) {
                if ((s32) temp_v0_46 < 7) {
                    do {
                        temp_t9 = arg0 + (arg0->unk_24480 * 8) + phi_v1;
                        temp_v1_11 = phi_v1 + 1;
                        temp_t9->unk_24414 = (u8) temp_t9->unk_24415;
                        phi_v1 = temp_v1_11;
                        phi_v1_2 = temp_v1_11;
                    } while ((s32) temp_v1_11 < 7);
                }
                (arg0 + (arg0->unk_24480 * 8) + phi_v1_2)->unk_24414 = 0x3E;
                spBC = temp_t2;
                play_sound(0x483CU);
                phi_t2_2 = temp_t2;
            } else {
                arg0->unk_2451C = (s16) (temp_v0_46 - 1);
                temp_v0_47 = arg0->unk_2451C;
                if ((s32) temp_v0_47 < 0) {
                    arg0->unk_2451C = 0;
                    arg0->unk_24486 = 0x26;
                    spBC = temp_t2;
                    play_sound(0x483CU);
                    phi_t2_2 = temp_t2;
                } else {
                    phi_v1_3 = temp_v0_47;
                    phi_v1_4 = temp_v0_47;
                    if ((s32) temp_v0_47 < 7) {
                        do {
                            temp_t6 = arg0 + (arg0->unk_24480 * 8) + phi_v1_3;
                            temp_v1_12 = phi_v1_3 + 1;
                            temp_t6->unk_24414 = (u8) temp_t6->unk_24415;
                            phi_v1_3 = temp_v1_12;
                            phi_v1_4 = temp_v1_12;
                        } while ((s32) temp_v1_12 < 7);
                    }
                    (arg0 + (arg0->unk_24480 * 8) + phi_v1_4)->unk_24414 = 0x3E;
                    spBC = temp_t2;
                    play_sound(0x483CU);
                    phi_t2_2 = temp_t2;
                }
            }
        } else {
            temp_a0_3 = arg0->unk_24512;
            if ((s32) temp_a0_3 < 3) {
                if (arg0->unk_2451A != 5) {
                    temp_v0_48 = temp_t2->polyOpa.p;
                    temp_t2->polyOpa.p = &temp_v0_48[1];
                    temp_v0_48->words.w1 = 0xFFFF00FF;
                    temp_v0_48->words.w0 = 0xFA000000;
                    temp_a0_4 = arg0->unk_24516;
                    temp_v1_13 = arg0[37114] + (temp_a0_4 << 6);
                    temp_v0_49 = (*(&D_80814384 + (temp_a0_4 * 2)) + temp_v1_13->unk_0) - 2;
                    temp_v1_13->unk_20 = temp_v0_49;
                    *(arg0[37114] + (arg0->unk_24516 << 6)) = temp_v0_49;
                    temp_v1_14 = arg0[37114] + (arg0->unk_24516 << 6);
                    temp_v0_50 = temp_v1_14->unk_0 + 0x10;
                    temp_v1_14->unk_30 = temp_v0_50;
                    (arg0[37114] + (arg0->unk_24516 << 6))->unk_10 = temp_v0_50;
                    temp_v1_15 = arg0[37114] + (arg0->unk_24516 << 6);
                    temp_v0_51 = temp_v1_15->unk_2 + 2;
                    temp_v1_15->unk_12 = temp_v0_51;
                    (arg0[37114] + (arg0->unk_24516 << 6))->unk_2 = temp_v0_51;
                    temp_v1_16 = arg0[37114] + (arg0->unk_24516 << 6);
                    temp_v0_52 = temp_v1_16->unk_2 - 0x10;
                    temp_v1_16->unk_32 = temp_v0_52;
                    (arg0[37114] + (arg0->unk_24516 << 6))->unk_22 = temp_v0_52;
                    temp_v0_53 = temp_t2->polyOpa.p;
                    temp_t2->polyOpa.p = &temp_v0_53[1];
                    temp_v0_53->words.w0 = 0x1004008;
                    temp_v0_53->words.w1 = (u32) (arg0[37114] + (arg0->unk_24516 << 6));
                    spBC = temp_t2;
                    sp20 = temp_t0;
                    func_80807940(arg0->unk_0, (*(&D_808141F0 + arg0->unk_24516) << 7) + arg0 + 0x19DD0, 0);
                    if (~(sp24->unk_C | 0xFFFF7FFF) == 0) {
                        sp20 = temp_t0;
                        spBC = temp_t2;
                        play_sound(0x483AU);
                        (arg0 + (arg0->unk_24480 * 8) + arg0->unk_2451C)->unk_24414 = (u8) *(&D_808141F0 + arg0->unk_24516);
                        arg0->unk_2451C = (s16) (arg0->unk_2451C + 1);
                        if ((s32) arg0->unk_2451C >= 8) {
                            arg0->unk_2451C = 7;
                        }
                    }
                    phi_v0 = sp24->unk_C;
                    phi_t0 = arg0 + 0x20000;
                    phi_t2 = arg0->unk_0;
                } else if (~(temp_v0_45 | 0xFFFF7FFF) == 0) {
                    temp_v1_17 = arg0->unk_24510;
                    if (temp_v1_17 != temp_a0_3) {
                        if (temp_v1_17 == 3) {
                            temp_v0_54 = arg0->unk_2451C;
                            if ((temp_v0_54 == 7) && (phi_v1_5 = temp_v0_54, phi_v1_6 = temp_v0_54, ((arg0 + (arg0->unk_24480 * 8))->unk_2441B != 0x3E))) {
                                if ((s32) temp_v0_54 < 7) {
                                    do {
                                        temp_t8 = arg0 + (arg0->unk_24480 * 8) + phi_v1_5;
                                        temp_v1_18 = phi_v1_5 + 1;
                                        temp_t8->unk_24414 = (u8) temp_t8->unk_24415;
                                        phi_v1_5 = temp_v1_18;
                                        phi_v1_6 = temp_v1_18;
                                    } while ((s32) temp_v1_18 < 7);
                                }
                                (arg0 + (arg0->unk_24480 * 8) + phi_v1_6)->unk_24414 = 0x3E;
                                spBC = temp_t2;
                                sp20 = temp_t0;
                                play_sound(0x483CU);
                            } else {
                                arg0->unk_2451C = (s16) (temp_v0_54 - 1);
                                if ((s32) arg0->unk_2451C < 0) {
                                    arg0->unk_2451C = 0;
                                }
                                phi_v1_7 = arg0->unk_2451C;
                                phi_v1_8 = arg0->unk_2451C;
                                if ((s32) arg0->unk_2451C < 7) {
                                    do {
                                        temp_t7_2 = arg0 + (arg0->unk_24480 * 8) + phi_v1_7;
                                        temp_v1_19 = phi_v1_7 + 1;
                                        temp_t7_2->unk_24414 = (u8) temp_t7_2->unk_24415;
                                        phi_v1_7 = temp_v1_19;
                                        phi_v1_8 = temp_v1_19;
                                    } while ((s32) temp_v1_19 < 7);
                                }
                                (arg0 + (arg0->unk_24480 * 8) + phi_v1_8)->unk_24414 = 0x3E;
                                spBC = temp_t2;
                                sp20 = temp_t0;
                                play_sound(0x483CU);
                            }
                            phi_v0 = sp24->unk_C;
                            phi_t0 = arg0 + 0x20000;
                            phi_t2 = spBC;
                        } else {
                            phi_a1 = 0;
                            if (temp_v1_17 == 4) {
                                phi_v1_9 = 0;
loop_53:
                                temp_v1_20 = phi_v1_9 + 1;
                                phi_v1_9 = temp_v1_20;
                                if ((arg0 + (arg0->unk_24480 * 8) + phi_v1_9)->unk_24414 != 0x3E) {
                                    phi_a1 = 1;
                                } else if ((s32) temp_v1_20 < 8) {
                                    goto loop_53;
                                }
                                if (phi_a1 != 0) {
                                    sp20 = temp_t0;
                                    spBC = temp_t2;
                                    play_sound(0x483BU);
                                    temp_a1 = &arg0[136];
                                    sp28 = temp_a1;
                                    gSaveContext.fileNum = (s32) arg0->unk_24480;
                                    spC2 = gSaveContext.time;
                                    func_80146AA0(arg0, temp_a1);
                                    gSaveContext.time = spC2;
                                    if (gSaveContext.unk_3F3F == 0) {
                                        arg0->unk_24486 = 0x26;
                                    } else {
                                        temp_v0_55 = arg0->unk_24480 * 2 * 4;
                                        spBC = temp_t2;
                                        sp20 = temp_t0;
                                        func_80147008((SramContext *) sp28, *(&D_801C67C8 + temp_v0_55), *(&D_801C6818 + temp_v0_55));
                                        func_80147020((SramContext *) sp28);
                                        arg0->unk_24486 = 0x25;
                                    }
                                    (arg0 + ((arg0 + 0x20000)->unk_4480 * 2) + 0x20000)->unk_44C8 = 0xC8;
                                    temp_v0_56 = arg0 + ((arg0 + 0x20000)->unk_4480 * 2) + 0x20000;
                                    temp_v0_56->unk_44C2 = (s16) temp_v0_56->unk_44C8;
                                    (arg0 + ((arg0 + 0x20000)->unk_4480 * 2) + 0x20000)->unk_44CE = 0xFF;
                                    spBC = arg0->unk_0;
                                    sp20 = arg0 + 0x20000;
                                    func_8013ECE0(300.0f, 0xB4U, 0x14U, 0x64U);
                                    phi_v0 = sp24->unk_C;
                                    phi_t0 = arg0 + 0x20000;
                                    phi_t2 = arg0->unk_0;
                                } else {
                                    sp20 = temp_t0;
                                    spBC = temp_t2;
                                    play_sound(0x483DU);
                                    phi_v0 = sp24->unk_C;
                                    phi_t0 = temp_t0;
                                    phi_t2 = temp_t2;
                                }
                            }
                        }
                    }
                }
                phi_t2_2 = phi_t2;
                if (~(phi_v0 | ~1) == 0) {
                    sp20 = phi_t0;
                    spBC = phi_t2;
                    play_sound(0x4839U);
                    arg0->unk_2451C = (s16) (phi_t0->unk_451C + 1);
                    phi_t2_2 = phi_t2;
                    if ((s32) phi_t0->unk_451C >= 8) {
                        arg0->unk_2451C = 7;
                    }
                } else if (~(phi_v0 | ~2) == 0) {
                    sp20 = phi_t0;
                    spBC = phi_t2;
                    play_sound(0x4839U);
                    arg0->unk_2451C = (s16) (phi_t0->unk_451C - 1);
                    phi_t2_2 = phi_t2;
                    if ((s32) phi_t0->unk_451C < 0) {
                        arg0->unk_2451C = 0;
                    }
                }
            }
        }
    }
    temp_v0_57 = phi_t2_2->polyOpa.p;
    phi_t2_2->polyOpa.p = temp_v0_57 + 8;
    temp_v0_57->words.w1 = 0;
    temp_v0_57->words.w0 = 0xE7000000;
    temp_v0_58 = phi_t2_2->polyOpa.p;
    phi_t2_2->polyOpa.p = temp_v0_58 + 8;
    temp_v0_58->words.w1 = -0xC07;
    temp_v0_58->words.w0 = 0xFC127E24;
}

void func_80809DF0(void *arg0) {
    arg0->unk_244E4 = (s16) (arg0->unk_244E4 + 0x19);
    if ((s32) arg0->unk_244E4 >= 0xFF) {
        arg0->unk_244E4 = 0xFF;
    }
    arg0->unk_24506 = (s16) (arg0->unk_24506 - 0x1E);
    if ((s32) arg0->unk_24506 <= 0) {
        arg0->unk_24506 = 0;
        arg0->unk_244E4 = 0xFF;
        arg0->unk_24518 = 0;
        arg0->unk_2451A = 0;
        arg0->unk_24510 = 0x63;
        arg0->unk_24486 = 0x24;
    }
}

void func_80809EA0(void *arg0) {
    void *sp1C;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    void *temp_v1;
    s16 phi_a0;
    void *phi_at;
    void *phi_v1;
    void *phi_a1;

    arg0->unk_24510 = 0x63;
    temp_v1 = arg0 + 0x20000;
    if (arg0->unk_2451A != 5) {
        temp_v0 = arg0->unk_24502;
        if ((s32) temp_v0 < -0x1E) {
            sp1C = temp_v1;
            arg0 = arg0;
            play_sound(0x4839U);
            arg0->unk_24516 = (s16) (arg0->unk_24516 - 1);
            arg0->unk_24518 = (s16) (arg0->unk_24518 - 1);
            if ((s32) arg0->unk_24518 < 0) {
                arg0->unk_24518 = 0xC;
                arg0->unk_24516 = (s16) ((arg0->unk_2451A * 0xD) + arg0->unk_24518);
            }
        } else if ((s32) temp_v0 >= 0x1F) {
            sp1C = temp_v1;
            arg0 = arg0;
            play_sound(0x4839U);
            arg0->unk_24516 = (s16) (arg0->unk_24516 + 1);
            arg0->unk_24518 = (s16) (arg0->unk_24518 + 1);
            if ((s32) arg0->unk_24518 >= 0xD) {
                arg0->unk_24518 = 0;
                arg0->unk_24516 = (s16) ((arg0->unk_2451A * 0xD) + arg0->unk_24518);
            }
        }
    } else {
        temp_v0_2 = arg0->unk_24502;
        if ((s32) temp_v0_2 < -0x1E) {
            sp1C = temp_v1;
            arg0 = arg0;
            play_sound(0x4839U);
            arg0->unk_24518 = (s16) (arg0->unk_24518 - 1);
            if ((s32) arg0->unk_24518 < 3) {
                arg0->unk_24518 = 4;
            }
        } else if ((s32) temp_v0_2 >= 0x1F) {
            sp1C = temp_v1;
            arg0 = arg0;
            play_sound(0x4839U);
            arg0->unk_24518 = (s16) (arg0->unk_24518 + 1);
            if ((s32) arg0->unk_24518 >= 5) {
                arg0->unk_24518 = 3;
            }
        }
    }
    temp_v0_3 = (arg0 + 0x20000)->unk_4504;
    phi_v1 = arg0 + 0x20000;
    phi_a1 = arg0;
    if ((s32) temp_v0_3 >= 0x1F) {
        sp1C = arg0 + 0x20000;
        arg0 = arg0;
        play_sound(0x4839U);
        arg0->unk_2451A = (s16) ((arg0 + 0x20000)->unk_451A - 1);
        phi_v1 = arg0 + 0x20000;
        phi_a1 = arg0;
        if ((s32) (arg0 + 0x20000)->unk_451A < 0) {
            if ((s32) (arg0 + 0x20000)->unk_4518 < 8) {
                arg0->unk_2451A = 4;
                arg0->unk_24516 = (s16) ((arg0 + 0x20000)->unk_4518 + 0x34);
            } else {
                arg0->unk_2451A = 5;
                arg0->unk_24516 = (s16) ((arg0 + 0x20000)->unk_4516 + 0x34);
                temp_v0_4 = (arg0 + 0x20000)->unk_4518;
                phi_a0 = temp_v0_4;
                if ((s32) temp_v0_4 < 0xA) {
                    arg0->unk_24518 = 3;
                    goto block_21;
                }
                if ((s32) temp_v0_4 < 0xD) {
                    arg0->unk_24518 = 4;
block_21:
                }
                phi_at = arg0 + ((arg0 + 0x20000)->unk_4518 * 2) + 0x20000;
                goto block_43;
            }
        } else {
            arg0->unk_24516 = (s16) ((arg0 + 0x20000)->unk_4516 - 0xD);
            if ((arg0 + 0x20000)->unk_451A == 4) {
                arg0->unk_24516 = 0x34;
                arg0->unk_24518 = (s16) (arg0 + ((arg0 + 0x20000)->unk_4518 * 2))->unk_2451E;
                arg0->unk_24516 = (s16) ((arg0 + 0x20000)->unk_4516 + (arg0 + 0x20000)->unk_4518);
            }
        }
    } else if ((s32) temp_v0_3 < -0x1E) {
        sp1C = arg0 + 0x20000;
        arg0 = arg0;
        play_sound(0x4839U);
        arg0->unk_2451A = (s16) ((arg0 + 0x20000)->unk_451A + 1);
        phi_v1 = arg0 + 0x20000;
        phi_a1 = arg0;
        if ((s32) (arg0 + 0x20000)->unk_451A >= 6) {
            arg0->unk_2451A = 0;
            arg0->unk_24518 = (s16) (arg0 + ((arg0 + 0x20000)->unk_4518 * 2))->unk_2451E;
            arg0->unk_24516 = (s16) (arg0 + 0x20000)->unk_4518;
        } else {
            arg0->unk_24516 = (s16) ((arg0 + 0x20000)->unk_4516 + 0xD);
            if ((arg0 + 0x20000)->unk_451A == 5) {
                temp_v0_5 = (arg0 + 0x20000)->unk_4518;
                if ((s32) temp_v0_5 < 8) {
                    arg0->unk_2451A = 0;
                    arg0->unk_24516 = (s16) (arg0 + 0x20000)->unk_4518;
                } else {
                    phi_a0 = temp_v0_5;
                    if ((s32) temp_v0_5 < 3) {
                        arg0->unk_24518 = 0;
                        goto block_41;
                    }
                    if ((s32) temp_v0_5 < 6) {
                        arg0->unk_24518 = 1;
                        goto block_41;
                    }
                    if ((s32) temp_v0_5 < 8) {
                        arg0->unk_24518 = 2;
                        goto block_41;
                    }
                    if ((s32) temp_v0_5 < 0xA) {
                        arg0->unk_24518 = 3;
                        goto block_41;
                    }
                    if ((s32) temp_v0_5 < 0xD) {
                        arg0->unk_24518 = 4;
block_41:
                    }
                    phi_at = arg0 + ((arg0 + 0x20000)->unk_4518 * 2) + 0x20000;
block_43:
                    phi_at->unk_451E = phi_a0;
                    phi_v1 = arg0 + 0x20000;
                    phi_a1 = arg0;
                }
            }
        }
    }
    if (phi_v1->unk_451A == 5) {
        phi_a1->unk_24510 = (s16) phi_v1->unk_4518;
    }
}

void func_8080A3CC(void *arg0) {
    SramContext *sp1C;
    SramContext *temp_a0;

    temp_a0 = arg0 + 0x220;
    sp1C = temp_a0;
    func_80147068(temp_a0);
    if (temp_a0->status == 0) {
        arg0->unk_24486 = 0x26;
    }
}

void func_8080A418(void *arg0) {
    arg0->unk_244E4 = (s16) (arg0->unk_244E4 + 0x19);
    if ((s32) arg0->unk_244E4 >= 0xFF) {
        arg0->unk_244E4 = 0xFF;
    }
    arg0->unk_24506 = (s16) (arg0->unk_24506 - 0x1E);
    if ((s32) arg0->unk_24506 <= 0) {
        arg0->unk_24506 = 0;
        arg0->unk_244E4 = 0xFF;
        arg0->unk_24486 = 0x29;
    }
}

void func_8080A4A0(void *arg0) {
    SramContext *sp18;
    SramContext *temp_a0;
    SramContext *temp_v1;
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_t0;
    u8 temp_t3;
    void *temp_a3;

    if (~(arg0->unk_20 | ~0x4000) == 0) {
        arg0 = arg0;
        play_sound(0x483BU);
        temp_a0 = arg0 + 0x220;
        sp18 = temp_a0;
        func_80146DF8(temp_a0);
        temp_a3 = arg0;
        if (gSaveContext.unk_3F3F == 0) {
            temp_a3->unk_24486 = 0x2B;
        } else {
            arg0 = temp_a3;
            func_80147008(temp_a0, D_801C67E8, D_801C6838, temp_a3);
            func_80147020(sp18);
            arg0->unk_24486 = 0x2A;
        }
        func_801A3D98(gSaveContext.audioSetting);
        return;
    }
    temp_v1 = arg0 + 0x20000;
    temp_v0 = arg0->unk_24502;
    if ((s32) temp_v0 < -0x1E) {
        sp18 = temp_v1;
        arg0 = arg0;
        play_sound(0x4839U);
        if (*D_80814E90 == 0) {
            temp_t3 = gSaveContext.audioSetting - 1;
            gSaveContext.audioSetting = temp_t3;
            if ((temp_t3 & 0xFF) >= 0xF1) {
                gSaveContext.audioSetting = 3;
            }
        } else {
            gSaveContext.zTargetSetting ^= 1;
        }
    } else if ((s32) temp_v0 >= 0x1F) {
        sp18 = temp_v1;
        arg0 = arg0;
        play_sound(0x4839U);
        if (*D_80814E90 == 0) {
            temp_t0 = gSaveContext.audioSetting + 1;
            gSaveContext.audioSetting = temp_t0;
            if ((temp_t0 & 0xFF) >= 4) {
                gSaveContext.audioSetting = 0;
            }
        } else {
            gSaveContext.zTargetSetting ^= 1;
        }
    }
    temp_v0_2 = (arg0 + 0x20000)->unk_4504;
    if (((s32) temp_v0_2 < -0x1E) || ((s32) temp_v0_2 >= 0x1F)) {
        play_sound(0x4839U);
        *D_80814E90 ^= 1;
        return;
    }
    if (~(arg0->unk_20 | 0xFFFF7FFF) == 0) {
        play_sound(0x483BU);
        *D_80814E90 ^= 1;
    }
}

void func_8080A6BC(void *arg0) {
    SramContext *sp1C;
    SramContext *temp_a0;

    temp_a0 = arg0 + 0x220;
    sp1C = temp_a0;
    func_80147068(temp_a0);
    if (temp_a0->status == 0) {
        arg0->unk_24486 = 0x2B;
    }
}

void func_8080A708(GraphicsContext **arg0) {
    GraphicsContext *sp1AC;
    Gfx *sp17C;
    Gfx *sp170;
    Gfx *sp164;
    void *sp2C;
    Gfx *temp_a3_3;
    Gfx *temp_t1_3;
    Gfx *temp_t1_4;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_24;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_30;
    Gfx *temp_v1_31;
    Gfx *temp_v1_32;
    Gfx *temp_v1_33;
    Gfx *temp_v1_34;
    Gfx *temp_v1_35;
    Gfx *temp_v1_36;
    Gfx *temp_v1_37;
    Gfx *temp_v1_38;
    Gfx *temp_v1_39;
    Gfx *temp_v1_3;
    Gfx *temp_v1_40;
    Gfx *temp_v1_41;
    Gfx *temp_v1_42;
    Gfx *temp_v1_43;
    Gfx *temp_v1_44;
    Gfx *temp_v1_45;
    Gfx *temp_v1_46;
    Gfx *temp_v1_47;
    Gfx *temp_v1_48;
    Gfx *temp_v1_49;
    Gfx *temp_v1_4;
    Gfx *temp_v1_50;
    Gfx *temp_v1_51;
    Gfx *temp_v1_52;
    Gfx *temp_v1_53;
    Gfx *temp_v1_54;
    Gfx *temp_v1_55;
    Gfx *temp_v1_56;
    Gfx *temp_v1_57;
    Gfx *temp_v1_58;
    Gfx *temp_v1_59;
    Gfx *temp_v1_5;
    Gfx *temp_v1_60;
    Gfx *temp_v1_61;
    Gfx *temp_v1_62;
    Gfx *temp_v1_63;
    Gfx *temp_v1_64;
    Gfx *temp_v1_65;
    Gfx *temp_v1_66;
    Gfx *temp_v1_67;
    Gfx *temp_v1_68;
    Gfx *temp_v1_69;
    Gfx *temp_v1_6;
    Gfx *temp_v1_70;
    Gfx *temp_v1_71;
    Gfx *temp_v1_72;
    Gfx *temp_v1_73;
    Gfx *temp_v1_74;
    Gfx *temp_v1_75;
    Gfx *temp_v1_76;
    Gfx *temp_v1_77;
    Gfx *temp_v1_78;
    Gfx *temp_v1_79;
    Gfx *temp_v1_7;
    Gfx *temp_v1_80;
    Gfx *temp_v1_81;
    Gfx *temp_v1_82;
    Gfx *temp_v1_83;
    Gfx *temp_v1_84;
    Gfx *temp_v1_85;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    GraphicsContext *temp_t0;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_ra;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_t1_2;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t2_3;
    s16 temp_t2_4;
    s16 temp_t2_5;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t3_4;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_t7;
    s16 temp_t8;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_19;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_9;
    u16 temp_a0;
    u16 temp_a0_3;
    u16 temp_a0_5;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a3_4;
    void *temp_a3_5;
    void *temp_ra_2;
    void *temp_v1;
    void *temp_v1_2;
    s16 phi_t2;
    s16 phi_t3;
    s32 phi_a0;
    s16 phi_v0;
    s16 phi_v0_2;
    s32 phi_a0_2;
    s16 phi_t2_2;
    s32 phi_v1;
    s32 phi_a0_3;
    s32 phi_a1;
    s16 phi_t3_2;
    s16 phi_t2_3;
    s32 phi_v1_2;
    s32 phi_a0_4;
    s32 phi_a1_2;
    s16 phi_t3_3;
    s16 phi_t2_4;
    s32 phi_v1_3;
    s32 phi_a0_5;
    s32 phi_a1_3;
    s16 phi_t3_4;
    s16 phi_t3_5;
    s32 phi_a0_6;
    s32 phi_a0_7;
    s32 phi_a0_8;
    s32 phi_a0_9;

    temp_t2 = D_808144BC;
    temp_s0 = D_808144D4;
    temp_t1 = temp_s0 * 6;
    temp_v1 = temp_t1 + &D_808144DC;
    temp_ra = temp_v1->unk_0;
    temp_t0 = arg0->unk_0;
    temp_v0 = temp_t2 - temp_ra;
    if (temp_v0 < 0) {
        phi_a0_6 = -temp_v0;
    } else {
        phi_a0_6 = temp_v0;
    }
    temp_a3 = D_808144D8;
    temp_t3 = D_808144C0;
    temp_t5 = temp_v1->unk_2;
    temp_lo = phi_a0_6 / (s32) temp_a3;
    temp_v0_2 = temp_t3 - temp_t5;
    if (temp_v0_2 < 0) {
        phi_a0_7 = -temp_v0_2;
    } else {
        phi_a0_7 = temp_v0_2;
    }
    temp_lo_2 = phi_a0_7 / (s32) temp_a3;
    temp_t4 = temp_v1->unk_4;
    temp_v0_3 = D_808144C4 - temp_t4;
    if (temp_v0_3 < 0) {
        phi_a0 = -temp_v0_3;
    } else {
        phi_a0 = temp_v0_3;
    }
    if ((s32) temp_t2 >= (s32) temp_ra) {
        phi_t2 = (s16) (temp_t2 - (s16) temp_lo);
    } else {
        phi_t2 = (s16) (temp_t2 + (s16) temp_lo);
    }
    D_808144BC = phi_t2;
    if ((s32) temp_t3 >= (s32) temp_t5) {
        phi_t3 = (s16) (temp_t3 - (s16) temp_lo_2);
    } else {
        phi_t3 = (s16) (temp_t3 + (s16) temp_lo_2);
    }
    D_808144C0 = phi_t3;
    temp_t8 = D_808144C4;
    if ((s32) temp_t8 >= (s32) temp_t4) {
        D_808144C4 = temp_t8 - (s16) (phi_a0 / (s32) temp_a3);
    } else {
        D_808144C4 = D_808144C4 + (s16) (phi_a0 / (s32) temp_a3);
    }
    temp_v1_2 = temp_t1 + &D_808144E8;
    temp_t3_2 = temp_v1_2->unk_0;
    temp_v0_4 = D_808144C8 - temp_t3_2;
    if (temp_v0_4 < 0) {
        phi_a0_8 = -temp_v0_4;
    } else {
        phi_a0_8 = temp_v0_4;
    }
    temp_lo_3 = phi_a0_8 / (s32) temp_a3;
    temp_t1_2 = temp_v1_2->unk_2;
    temp_v0_5 = D_808144CC - temp_t1_2;
    if (temp_v0_5 < 0) {
        phi_a0_9 = -temp_v0_5;
    } else {
        phi_a0_9 = temp_v0_5;
    }
    temp_lo_4 = phi_a0_9 / (s32) temp_a3;
    temp_t2_2 = temp_v1_2->unk_4;
    temp_v0_6 = D_808144D0 - temp_t2_2;
    if (temp_v0_6 < 0) {
        phi_a0_2 = -temp_v0_6;
    } else {
        phi_a0_2 = temp_v0_6;
    }
    temp_v0_7 = D_808144C8;
    if ((s32) temp_v0_7 >= (s32) temp_t3_2) {
        phi_v0 = (s16) (temp_v0_7 - (s16) temp_lo_3);
    } else {
        phi_v0 = (s16) (temp_v0_7 + (s16) temp_lo_3);
    }
    D_808144C8 = phi_v0;
    temp_v0_8 = D_808144CC;
    if ((s32) temp_v0_8 >= (s32) temp_t1_2) {
        phi_v0_2 = (s16) (temp_v0_8 - (s16) temp_lo_4);
    } else {
        phi_v0_2 = (s16) (temp_v0_8 + (s16) temp_lo_4);
    }
    D_808144CC = phi_v0_2;
    temp_t7 = D_808144D0;
    if ((s32) temp_t7 >= (s32) temp_t2_2) {
        D_808144D0 = temp_t7 - (s16) (phi_a0_2 / (s32) temp_a3);
    } else {
        D_808144D0 = D_808144D0 + (s16) (phi_a0_2 / (s32) temp_a3);
    }
    temp_a3_2 = temp_a3 - 1;
    D_808144D8 = temp_a3_2;
    if (temp_a3_2 == 0) {
        D_808144BC = temp_ra;
        D_808144C0 = temp_t5;
        D_808144C4 = temp_t4;
        D_808144C8 = temp_t3_2;
        D_808144CC = temp_t1_2;
        D_808144D0 = temp_t2_2;
        temp_s0_2 = temp_s0 + 1;
        D_808144D8 = 0x14;
        D_808144D4 = temp_s0_2;
        if ((s32) temp_s0_2 >= 2) {
            D_808144D4 = 0;
        }
    }
    temp_v1_3 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_3 + 8;
    temp_v1_3->words.w1 = 0;
    temp_v1_3->words.w0 = 0xE7000000;
    temp_v1_4 = temp_t0->polyOpa.p;
    temp_ra_2 = arg0 + 0x20000;
    temp_t0->polyOpa.p = temp_v1_4 + 8;
    temp_v1_4->words.w0 = 0xFA000000;
    temp_v1_4->words.w1 = (arg0->unk_244B6 & 0xFF) | 0xFFFF00;
    temp_v1_5 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_5 + 8;
    temp_v1_5->words.w1 = 0;
    temp_v1_5->words.w0 = 0xFB000000;
    temp_v1_6 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_6 + 8;
    temp_v1_6->words.w1 = &D_0102A6B0;
    temp_v1_6->words.w0 = 0xFD700000;
    temp_v1_7 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_7 + 8;
    temp_v1_7->words.w1 = 0x7000000;
    temp_v1_7->words.w0 = 0xF5700000;
    temp_v1_8 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_8 + 8;
    temp_v1_8->words.w1 = 0;
    temp_v1_8->words.w0 = 0xE6000000;
    temp_v1_9 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_9 + 8;
    temp_v1_9->words.w1 = 0x707F080;
    temp_v1_9->words.w0 = 0xF3000000;
    temp_v1_10 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_10 + 8;
    temp_v1_10->words.w1 = 0;
    temp_v1_10->words.w0 = 0xE7000000;
    temp_v1_11 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_11 + 8;
    temp_v1_11->words.w1 = 0;
    temp_v1_11->words.w0 = 0xF5602000;
    temp_v1_12 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_12 + 8;
    temp_v1_12->words.w0 = 0xF2000000;
    temp_v1_12->words.w1 = 0x3FC004;
    sp2C = temp_ra_2;
    sp1AC = temp_t0;
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(0.0f, 0.1f, 0.0f, 1);
    temp_v1_13 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1_13 + 8;
    temp_v1_13->words.w0 = 0xDA380003;
    sp2C = temp_ra_2;
    sp1AC = temp_t0;
    sp17C = temp_v1_13;
    sp17C->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v1_14 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_14[1];
    temp_v1_14->words.w0 = 0x1004008;
    temp_v1_14->words.w1 = (u32) &D_80814130;
    temp_v1_15 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_15[1];
    temp_v1_15->words.w1 = 0x602;
    temp_v1_15->words.w0 = 0x7000406;
    sp2C = temp_ra_2;
    sp1AC = temp_t0;
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(0.0f, 0.2f, 0.0f, 1);
    temp_v1_16 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_16[1];
    temp_v1_16->words.w0 = 0xDA380003;
    sp2C = temp_ra_2;
    sp1AC = temp_t0;
    sp170 = temp_v1_16;
    sp170->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v1_17 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_17[1];
    temp_v1_17->words.w0 = 0x1004008;
    temp_v1_17->words.w1 = (u32) &D_80814170;
    temp_v1_18 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_18[1];
    temp_v1_18->words.w1 = 0x602;
    temp_v1_18->words.w0 = 0x7000406;
    sp2C = temp_ra_2;
    sp1AC = temp_t0;
    SysMatrix_StatePop();
    SysMatrix_StatePush();
    SysMatrix_InsertTranslation(0.0f, 0.4f, 0.0f, 1);
    temp_v1_19 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_19[1];
    temp_v1_19->words.w0 = 0xDA380003;
    sp2C = temp_ra_2;
    sp1AC = temp_t0;
    sp164 = temp_v1_19;
    sp164->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v1_20 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_20[1];
    temp_v1_20->words.w0 = 0x1004008;
    temp_v1_20->words.w1 = (u32) &D_808141B0;
    temp_v1_21 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_21[1];
    temp_v1_21->words.w1 = 0x602;
    temp_v1_21->words.w0 = 0x7000406;
    sp2C = temp_ra_2;
    sp1AC = temp_t0;
    SysMatrix_StatePop();
    temp_v1_22 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_22[1];
    temp_v1_22->words.w0 = 0x1020040;
    temp_v1_22->words.w1 = (u32) &D_80813DF0;
    temp_v1_23 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_23[1];
    temp_v1_23->words.w1 = 0;
    temp_v1_23->words.w0 = 0xE7000000;
    temp_v1_24 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_24[1];
    temp_v1_24->words.w1 = 0x552EFF7F;
    temp_v1_24->words.w0 = 0xFC309661;
    temp_v1_25 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_25[1];
    temp_v1_25->words.w0 = 0xFA000000;
    temp_v1_25->words.w1 = (arg0->unk_244B6 & 0xFF) | ~0xFF;
    temp_v1_26 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_26[1];
    temp_v1_26->words.w1 = 0xFF;
    temp_v1_26->words.w0 = 0xFB000000;
    phi_t2_2 = 0;
    phi_t3_2 = 0;
    phi_t2_3 = 0;
    phi_t3_3 = 0;
    do {
        if (phi_t2_2 == 4) {
            temp_v1_27 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_27[1];
            temp_v1_27->words.w1 = 0;
            temp_v1_27->words.w0 = 0xE7000000;
            if (gSaveContext.audioSetting == 3) {
                temp_v1_28 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_28[1];
                temp_v1_28->words.w1 = -1;
                temp_v1_28->words.w0 = 0xFB000000;
            } else {
                temp_v1_29 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_29[1];
                temp_v1_29->words.w0 = 0xFA000000;
                temp_v1_29->words.w1 = arg0->unk_244B6 & 0xFF;
                temp_v1_30 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_30[1];
                temp_v1_30->words.w1 = 0xFF;
                temp_v1_30->words.w0 = 0xFB000000;
            }
        }
        temp_v1_31 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_31[1];
        temp_a2 = (phi_t2_2 * 8) + &D_80814464;
        temp_v1_31->words.w0 = 0xFD700000;
        temp_t2_3 = phi_t2_2 + 1;
        temp_v1_31->words.w1 = temp_a2->unk_0;
        temp_v1_32 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_32[1];
        temp_v1_32->words.w1 = 0x7000000;
        temp_v1_32->words.w0 = 0xF5700000;
        temp_v1_33 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_33[1];
        temp_v1_33->words.w1 = 0;
        temp_v1_33->words.w0 = 0xE6000000;
        temp_a3_3 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_a3_3[1];
        temp_a3_3->words.w0 = 0xF3000000;
        temp_a0 = temp_a2->unk_4;
        temp_v0_9 = ((s32) ((temp_a2->unk_6 * temp_a0) + 1) >> 1) - 1;
        phi_t2_2 = temp_t2_3;
        phi_a1 = 0x7FF;
        phi_a1_2 = 0x7FF;
        phi_a1_3 = 0x7FF;
        if (temp_v0_9 < 0x7FF) {
            phi_a1 = temp_v0_9;
        }
        temp_v0_10 = (s32) temp_a0 / 8;
        phi_v1 = temp_v0_10;
        if (temp_v0_10 <= 0) {
            phi_v1 = 1;
        }
        if (temp_v0_10 <= 0) {
            phi_a0_3 = 1;
        } else {
            phi_a0_3 = temp_v0_10;
        }
        temp_a3_3->words.w1 = (((s32) (phi_v1 + 0x7FF) / phi_a0_3) & 0xFFF) | 0x7000000U | ((phi_a1 & 0xFFF) << 0xC);
        temp_v1_34 = temp_t0->polyOpa.p;
        temp_v0_11 = phi_t3_2 * 2;
        temp_t0->polyOpa.p = &temp_v1_34[1];
        temp_v1_34->words.w1 = 0;
        temp_v1_34->words.w0 = 0xE7000000;
        temp_v1_35 = temp_t0->polyOpa.p;
        temp_a0_2 = (temp_v0_11 & 0xFF) << 0x10;
        temp_t0->polyOpa.p = &temp_v1_35[1];
        temp_v1_35->words.w1 = 0;
        temp_v1_35->words.w0 = ((((s32) (temp_a2->unk_4 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000;
        temp_v1_36 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_36[1];
        temp_v1_36->words.w0 = 0xF2000000;
        temp_a1 = (temp_v0_11 + 6) & 0xFF;
        temp_v1_36->words.w1 = (((temp_a2->unk_6 - 1) * 4) & 0xFFF) | ((((temp_a2->unk_4 - 1) * 4) & 0xFFF) << 0xC);
        temp_v1_37 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_37[1];
        temp_v1_37->words.w0 = temp_a0_2 | (((temp_v0_11 + 4) & 0xFF) << 8) | temp_a1 | 0x7000000U;
        temp_v1_37->words.w1 = temp_a0_2 | (temp_a1 << 8) | ((temp_v0_11 + 2) & 0xFF);
        phi_t3_2 = (s16) (phi_t3_2 + 4);
    } while ((s32) temp_t2_3 < 5);
    temp_v1_38 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_38[1];
    temp_v1_38->words.w1 = 0;
    temp_v1_38->words.w0 = 0xE7000000;
    temp_v1_39 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_39[1];
    temp_v1_39->words.w1 = 0x552EFF7F;
    temp_v1_39->words.w0 = 0xFC309661;
    temp_v1_40 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_40[1];
    temp_v1_40->words.w0 = 0xFA000000;
    temp_v1_40->words.w1 = (arg0->unk_244B6 & 0xFF) | ~0xFF;
    temp_v1_41 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_41[1];
    temp_v1_41->words.w1 = 0xFF;
    temp_v1_41->words.w0 = 0xFB000000;
    temp_v1_42 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_42[1];
    temp_v1_42->words.w0 = 0x1020040;
    temp_v1_42->words.w1 = (u32) &D_80813F30;
    do {
        temp_v1_43 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_43[1];
        temp_v1_43->words.w1 = 0;
        temp_v1_43->words.w0 = 0xE7000000;
        if (phi_t2_3 == gSaveContext.audioSetting) {
            if (*D_80814E90 == 0) {
                temp_v1_44 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_44[1];
                temp_v1_44->words.w0 = 0xFA000000;
                temp_v1_44->words.w1 = (arg0->unk_244B6 & 0xFF) | (D_808144BC << 0x18) | ((D_808144C0 & 0xFF) << 0x10) | ((D_808144C4 & 0xFF) << 8);
                temp_v1_45 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_45[1];
                temp_v1_45->words.w1 = (D_808144C8 << 0x18) | ((D_808144CC & 0xFF) << 0x10) | ((D_808144D0 & 0xFF) << 8) | 0xFF;
                temp_v1_45->words.w0 = 0xFB000000;
            } else {
                temp_v1_46 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_46[1];
                temp_v1_46->words.w0 = 0xFA000000;
                temp_v1_46->words.w1 = (arg0->unk_244B6 & 0xFF) | ~0xFF;
                temp_v1_47 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_47[1];
                temp_v1_47->words.w1 = 0xFF;
                temp_v1_47->words.w0 = 0xFB000000;
            }
        } else {
            temp_v1_48 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_48[1];
            temp_v1_48->words.w0 = 0xFA000000;
            temp_v1_48->words.w1 = (arg0->unk_244B6 & 0xFF) | 0x78787800;
            temp_v1_49 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_49[1];
            temp_v1_49->words.w1 = 0xFF;
            temp_v1_49->words.w0 = 0xFB000000;
        }
        temp_v1_50 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_50[1];
        temp_a1_2 = phi_t2_3 * 8;
        temp_a3_4 = temp_a1_2 + &D_8081448C;
        temp_v1_50->words.w0 = 0xFD700000;
        temp_t2_4 = phi_t2_3 + 1;
        temp_v1_50->words.w1 = temp_a3_4->unk_0;
        temp_v1_51 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_51[1];
        temp_v1_51->words.w1 = 0x7000000;
        temp_v1_51->words.w0 = 0xF5700000;
        temp_v1_52 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_52[1];
        temp_v1_52->words.w1 = 0;
        temp_v1_52->words.w0 = 0xE6000000;
        temp_t1_3 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_t1_3[1];
        temp_t1_3->words.w0 = 0xF3000000;
        temp_a2_2 = temp_a1_2 + &D_80814464;
        temp_a0_3 = temp_a3_4->unk_4;
        temp_v0_12 = ((s32) ((temp_a2_2->unk_6 * temp_a0_3) + 1) >> 1) - 1;
        phi_t2_3 = temp_t2_4;
        phi_t2_4 = temp_t2_4;
        if (temp_v0_12 < 0x7FF) {
            phi_a1_2 = temp_v0_12;
        }
        temp_v0_13 = (s32) temp_a0_3 / 8;
        phi_v1_2 = temp_v0_13;
        if (temp_v0_13 <= 0) {
            phi_v1_2 = 1;
        }
        if (temp_v0_13 <= 0) {
            phi_a0_4 = 1;
        } else {
            phi_a0_4 = temp_v0_13;
        }
        temp_t1_3->words.w1 = (((s32) (phi_v1_2 + 0x7FF) / phi_a0_4) & 0xFFF) | 0x7000000U | ((phi_a1_2 & 0xFFF) << 0xC);
        temp_v1_53 = temp_t0->polyOpa.p;
        temp_v0_14 = phi_t3_3 * 2;
        temp_t0->polyOpa.p = &temp_v1_53[1];
        temp_v1_53->words.w1 = 0;
        temp_v1_53->words.w0 = 0xE7000000;
        temp_v1_54 = temp_t0->polyOpa.p;
        temp_a0_4 = (temp_v0_14 & 0xFF) << 0x10;
        temp_t0->polyOpa.p = &temp_v1_54[1];
        temp_v1_54->words.w1 = 0;
        temp_v1_54->words.w0 = ((((s32) (temp_a3_4->unk_4 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000;
        temp_v1_55 = temp_t0->polyOpa.p;
        temp_t3_3 = phi_t3_3 + 4;
        temp_t0->polyOpa.p = &temp_v1_55[1];
        temp_v1_55->words.w0 = 0xF2000000;
        temp_a1_3 = (temp_v0_14 + 6) & 0xFF;
        temp_v1_55->words.w1 = (((temp_a2_2->unk_6 - 1) * 4) & 0xFFF) | ((((temp_a3_4->unk_4 - 1) * 4) & 0xFFF) << 0xC);
        temp_v1_56 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v1_56[1];
        temp_v1_56->words.w0 = temp_a0_4 | (((temp_v0_14 + 4) & 0xFF) << 8) | temp_a1_3 | 0x7000000U;
        temp_v1_56->words.w1 = temp_a0_4 | (temp_a1_3 << 8) | ((temp_v0_14 + 2) & 0xFF);
        phi_t3_3 = temp_t3_3;
        phi_t3_4 = temp_t3_3;
        phi_t3_5 = temp_t3_3;
    } while ((s32) temp_t2_4 < 4);
    if ((s32) temp_t2_4 < 6) {
        do {
            temp_v1_57 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_57[1];
            temp_v1_57->words.w1 = 0;
            temp_v1_57->words.w0 = 0xE7000000;
            if (phi_t2_4 == (gSaveContext.zTargetSetting + 4)) {
                if (*D_80814E90 == 1) {
                    temp_v1_58 = temp_t0->polyOpa.p;
                    temp_t0->polyOpa.p = &temp_v1_58[1];
                    temp_v1_58->words.w0 = 0xFA000000;
                    temp_v1_58->words.w1 = (arg0->unk_244B6 & 0xFF) | (D_808144BC << 0x18) | ((D_808144C0 & 0xFF) << 0x10) | ((D_808144C4 & 0xFF) << 8);
                    temp_v1_59 = temp_t0->polyOpa.p;
                    temp_t0->polyOpa.p = &temp_v1_59[1];
                    temp_v1_59->words.w1 = (D_808144C8 << 0x18) | ((D_808144CC & 0xFF) << 0x10) | ((D_808144D0 & 0xFF) << 8) | 0xFF;
                    temp_v1_59->words.w0 = 0xFB000000;
                } else {
                    temp_v1_60 = temp_t0->polyOpa.p;
                    temp_t0->polyOpa.p = &temp_v1_60[1];
                    temp_v1_60->words.w0 = 0xFA000000;
                    temp_v1_60->words.w1 = (arg0->unk_244B6 & 0xFF) | ~0xFF;
                    temp_v1_61 = temp_t0->polyOpa.p;
                    temp_t0->polyOpa.p = &temp_v1_61[1];
                    temp_v1_61->words.w1 = 0xFF;
                    temp_v1_61->words.w0 = 0xFB000000;
                }
            } else {
                temp_v1_62 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_62[1];
                temp_v1_62->words.w0 = 0xFA000000;
                temp_v1_62->words.w1 = (arg0->unk_244B6 & 0xFF) | 0x78787800;
                temp_v1_63 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v1_63[1];
                temp_v1_63->words.w1 = 0xFF;
                temp_v1_63->words.w0 = 0xFB000000;
            }
            temp_v1_64 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_64[1];
            temp_a1_4 = phi_t2_4 * 8;
            temp_a3_5 = temp_a1_4 + &D_8081448C;
            temp_v1_64->words.w0 = 0xFD700000;
            temp_t2_5 = phi_t2_4 + 1;
            temp_v1_64->words.w1 = temp_a3_5->unk_0;
            temp_v1_65 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_65[1];
            temp_v1_65->words.w1 = 0x7000000;
            temp_v1_65->words.w0 = 0xF5700000;
            temp_v1_66 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_66[1];
            temp_v1_66->words.w1 = 0;
            temp_v1_66->words.w0 = 0xE6000000;
            temp_t1_4 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_t1_4[1];
            temp_t1_4->words.w0 = 0xF3000000;
            temp_a2_3 = temp_a1_4 + &D_80814464;
            temp_a0_5 = temp_a3_5->unk_4;
            temp_v0_15 = ((s32) ((temp_a2_3->unk_6 * temp_a0_5) + 1) >> 1) - 1;
            phi_t2_4 = temp_t2_5;
            if (temp_v0_15 < 0x7FF) {
                phi_a1_3 = temp_v0_15;
            }
            temp_v0_16 = (s32) temp_a0_5 / 8;
            phi_v1_3 = temp_v0_16;
            if (temp_v0_16 <= 0) {
                phi_v1_3 = 1;
            }
            if (temp_v0_16 <= 0) {
                phi_a0_5 = 1;
            } else {
                phi_a0_5 = temp_v0_16;
            }
            temp_t1_4->words.w1 = (((s32) (phi_v1_3 + 0x7FF) / phi_a0_5) & 0xFFF) | 0x7000000U | ((phi_a1_3 & 0xFFF) << 0xC);
            temp_v1_67 = temp_t0->polyOpa.p;
            temp_v0_17 = phi_t3_4 * 2;
            temp_t0->polyOpa.p = &temp_v1_67[1];
            temp_v1_67->words.w1 = 0;
            temp_v1_67->words.w0 = 0xE7000000;
            temp_v1_68 = temp_t0->polyOpa.p;
            temp_a0_6 = (temp_v0_17 & 0xFF) << 0x10;
            temp_t0->polyOpa.p = &temp_v1_68[1];
            temp_v1_68->words.w1 = 0;
            temp_v1_68->words.w0 = ((((s32) (temp_a3_5->unk_4 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000;
            temp_v1_69 = temp_t0->polyOpa.p;
            temp_t3_4 = phi_t3_4 + 4;
            temp_t0->polyOpa.p = &temp_v1_69[1];
            temp_v1_69->words.w0 = 0xF2000000;
            temp_a1_5 = (temp_v0_17 + 6) & 0xFF;
            temp_v1_69->words.w1 = (((temp_a2_3->unk_6 - 1) * 4) & 0xFFF) | ((((temp_a3_5->unk_4 - 1) * 4) & 0xFFF) << 0xC);
            temp_v1_70 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v1_70[1];
            temp_v1_70->words.w0 = temp_a0_6 | (((temp_v0_17 + 4) & 0xFF) << 8) | temp_a1_5 | 0x7000000U;
            temp_v1_70->words.w1 = temp_a0_6 | (temp_a1_5 << 8) | ((temp_v0_17 + 2) & 0xFF);
            phi_t3_4 = temp_t3_4;
            phi_t3_5 = temp_t3_4;
        } while ((s32) temp_t2_5 < 6);
    }
    temp_v1_71 = temp_t0->polyOpa.p;
    temp_v0_18 = phi_t3_5 * 2;
    temp_t0->polyOpa.p = &temp_v1_71[1];
    temp_v1_71->words.w1 = 0;
    temp_v1_71->words.w0 = 0xE7000000;
    temp_v1_72 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_72[1];
    temp_v1_72->words.w1 = (u32) &D_0102A7B0;
    temp_v1_72->words.w0 = 0xFD700000;
    temp_v1_73 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_73[1];
    temp_v1_73->words.w1 = 0x7000000;
    temp_v1_73->words.w0 = 0xF5700000;
    temp_v1_74 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_74[1];
    temp_v1_74->words.w1 = 0;
    temp_v1_74->words.w0 = 0xE6000000;
    temp_v1_75 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_75[1];
    temp_v1_75->words.w1 = 0x717F156;
    temp_v1_75->words.w0 = 0xF3000000;
    temp_v1_76 = temp_t0->polyOpa.p;
    temp_a0_7 = (temp_v0_18 & 0xFF) << 0x10;
    temp_t0->polyOpa.p = &temp_v1_76[1];
    temp_v1_76->words.w1 = 0;
    temp_v1_76->words.w0 = 0xE7000000;
    temp_v1_77 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_77[1];
    temp_v1_77->words.w1 = 0;
    temp_v1_77->words.w0 = 0xF5600C00;
    temp_v1_78 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_78[1];
    temp_v1_78->words.w0 = 0xF2000000;
    temp_v1_78->words.w1 = 0x17C03C;
    temp_v1_79 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_79[1];
    temp_v1_79->words.w0 = 0xFA000000;
    temp_a1_6 = (temp_v0_18 + 6) & 0xFF;
    temp_v1_79->words.w1 = (arg0->unk_244B6 & 0xFF) | 0x37373700;
    temp_v1_80 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_80[1];
    temp_v1_80->words.w1 = 0x282828FF;
    temp_v1_80->words.w0 = 0xFB000000;
    temp_v1_81 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_81[1];
    temp_v1_81->words.w0 = temp_a0_7 | (((temp_v0_18 + 4) & 0xFF) << 8) | temp_a1_6 | 0x7000000U;
    temp_v1_81->words.w1 = temp_a0_7 | (temp_a1_6 << 8) | ((temp_v0_18 + 2) & 0xFF);
    temp_v1_82 = temp_t0->polyOpa.p;
    temp_v0_19 = (s16) (phi_t3_5 + 4) * 2;
    temp_t0->polyOpa.p = &temp_v1_82[1];
    temp_v1_82->words.w1 = 0;
    temp_v1_82->words.w0 = 0xE7000000;
    temp_v1_83 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_83[1];
    temp_v1_83->words.w0 = 0xFA000000;
    temp_a0_8 = (temp_v0_19 & 0xFF) << 0x10;
    temp_v1_83->words.w1 = (arg0->unk_244B6 & 0xFF) | 0x1E1E1E00;
    temp_v1_84 = temp_t0->polyOpa.p;
    temp_a1_7 = (temp_v0_19 + 6) & 0xFF;
    temp_t0->polyOpa.p = &temp_v1_84[1];
    temp_v1_84->words.w1 = 0xFF;
    temp_v1_84->words.w0 = 0xFB000000;
    temp_v1_85 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v1_85[1];
    temp_v1_85->words.w0 = temp_a0_8 | (((temp_v0_19 + 4) & 0xFF) << 8) | temp_a1_7 | 0x7000000U;
    temp_v1_85->words.w1 = temp_a0_8 | (temp_a1_7 << 8) | ((temp_v0_19 + 2) & 0xFF);
}

void func_8080BBFC(void) {
    func_8080A708();
}

void func_8080BC20(void *arg0) {
    arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
}

void FileChoose_nop8080bc44(void) {

}

void FileChoose_nop8080BC4C(GraphicsContext **arg0) {

}

void func_8080BC58(void *arg0) {
    s16 temp_v1;

    temp_v1 = arg0->unk_24486;
    if (temp_v1 == 0) {
        if (gSaveContext.option_id != 0xA51D) {
            arg0->unk_24486 = (s16) (temp_v1 + 1);
        } else {
            arg0->unk_24484 = 1;
            arg0->unk_24486 = 0;
            arg0->unk_244AC = 0;
            arg0->unk_244AE = 1;
        }
    }
    if (arg0->unk_24486 == (void *)1) {
        arg0->unk_2450A = (s16) (arg0->unk_2450A - 0x28);
        if ((s32) arg0->unk_2450A <= 0) {
            arg0->unk_2450A = 0;
            arg0->unk_24486 = (s16) (arg0->unk_24486 + 1);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk_24486 == 2) {
        func_8080BC20((void *)1);
        return;
    }
    arg0->unk_2450A = (s16) (arg0->unk_2450A + 0x28);
    if ((s32) arg0->unk_2450A >= 0xFF) {
        arg0->unk_2450A = 0xFF;
        arg0->unk_24484 = (s16) (void *)1;
        arg0->unk_24486 = 0;
        arg0->unk_244AC = 0;
        arg0->unk_244AE = (s16) (void *)1;
    }
}

void func_8080BDAC(GraphicsContext **arg0) {
    func_8012C628(*arg0);
    FileChoose_nop8080BC4C(arg0);
}

void FileChoose_RenderView(GraphicsContext **arg0, void **arg1, void **arg2, f32 arg3) {
    f32 sp3C;
    void **sp38;
    void **sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    View *sp18;
    View *temp_a0;

    temp_a0 = arg0 + 0xB8;
    sp34 = arg1;
    sp38 = arg2;
    sp30 = 0.0f;
    sp2C = 0.0f;
    sp28 = 0.0f;
    sp24 = 0.0f;
    sp1C = 0.0f;
    sp18 = temp_a0;
    sp3C = arg3;
    sp20 = 1.0f;
    View_SetViewOrientation(temp_a0, (Vec3f *) &sp34, (Vec3f *) &sp28, (Vec3f *) &sp1C);
    View_RenderView(temp_a0, 0x7F);
}

Gfx *func_8080BE60(Gfx *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    s32 phi_t2;
    s32 phi_t3;
    s32 phi_t0;

    arg0->words.w0 = 0xFD700000;
    arg0->words.w1 = arg1;
    temp_a0_2 = arg0 + 8;
    temp_a0_2->unk_0 = 0xF5700000;
    temp_a0_2->unk_4 = 0x7000000;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk_0 = 0xE6000000;
    temp_a0_3->unk_4 = 0;
    temp_a0_4 = temp_a0_3 + 8;
    temp_a0_4->unk_0 = 0xF3000000;
    temp_a0_5 = temp_a0_4 + 8;
    temp_a1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    phi_t0 = 0x7FF;
    if (temp_a1 < 0x7FF) {
        phi_t0 = temp_a1;
    }
    temp_t1 = (s32) arg2 / 8;
    if (temp_t1 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t1;
    }
    if (temp_t1 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = temp_t1;
    }
    temp_a0_4->unk_4 = (s32) ((((s32) (phi_t2 + 0x7FF) / phi_t3) & 0xFFF) | 0x7000000 | ((phi_t0 & 0xFFF) << 0xC));
    temp_a0_5->unk_0 = 0xE7000000;
    temp_a0_5->unk_4 = 0;
    temp_a0_6 = temp_a0_5 + 8;
    temp_a0_6->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000);
    temp_a0_6->unk_4 = 0;
    temp_a0_7 = temp_a0_6 + 8;
    temp_a0_7->unk_0 = 0xF2000000;
    temp_a0_7->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_a0 = temp_a0_7 + 8;
    temp_a1_2 = arg4 * 2;
    temp_a2 = (temp_a1_2 & 0xFF) << 0x10;
    temp_a3 = (temp_a1_2 + 6) & 0xFF;
    temp_a0->unk_4 = (s32) (temp_a2 | (temp_a3 << 8) | ((temp_a1_2 + 2) & 0xFF));
    temp_a0->unk_0 = (s32) (temp_a2 | (((temp_a1_2 + 4) & 0xFF) << 8) | temp_a3 | 0x7000000);
    return temp_a0 + 8;
}

void func_8080C040(void *arg0) {
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_a2;
    void *temp_t7;
    void *temp_t8;
    s16 phi_v1;

    arg0->unk_244B6 = (s16) (arg0->unk_244B6 + 0x14);
    arg0->unk_244BA = (s16) (arg0->unk_244BA + 0x10);
    phi_v1 = 0;
    do {
        temp_t7 = arg0 + (phi_v1 * 2);
        temp_t7->unk_244BC = (s16) arg0->unk_244BA;
        if (gSaveContext.unk_3F3F == 0) {
            temp_a2 = *(&D_801C6798 + (phi_v1 * 4)) + arg0->unk_220;
            if ((temp_a2->unk_24 == 0x5A) || (temp_a2->unk_25 == 0x45) || (temp_a2->unk_26 == 0x4C) || (temp_a2->unk_27 == 0x44) || (temp_a2->unk_28 == 0x41) || (temp_a2->unk_29 == 0x33)) {
                temp_a2_2 = arg0->unk_244BA;
                temp_t7->unk_244CE = (s16) (temp_t7->unk_244CE + 0x14);
                temp_t7->unk_244C8 = temp_a2_2;
                temp_t7->unk_244C2 = temp_a2_2;
                if ((s32) temp_t7->unk_244CE >= 0xFF) {
                    goto block_17;
                }
            }
        } else {
            temp_t8 = arg0 + (phi_v1 * 6);
            if ((temp_t8->unk_243F4 == 0x5A) && (temp_t8->unk_243F5 == 0x45) && (temp_t8->unk_243F6 == 0x4C) && (temp_t8->unk_243F7 == 0x44) && (temp_t8->unk_243F8 == 0x41) && (temp_t8->unk_243F9 == 0x33)) {
                temp_a2_3 = arg0->unk_244BA;
                temp_t7->unk_244CE = (s16) (temp_t7->unk_244CE + 0x14);
                temp_t7->unk_244C8 = temp_a2_3;
                temp_t7->unk_244C2 = temp_a2_3;
                if ((s32) temp_t7->unk_244CE >= 0xFF) {
block_17:
                    temp_t7->unk_244CE = 0xFF;
                }
            }
        }
        temp_v1 = phi_v1 + 1;
        phi_v1 = temp_v1;
    } while ((s32) temp_v1 < 3);
    temp_v1_2 = arg0->unk_244BA;
    arg0->unk_244E2 = temp_v1_2;
    arg0->unk_244DA = temp_v1_2;
    arg0->unk_244DC = temp_v1_2;
}

void func_8080C228(u16 arg0, u16 *arg1, u16 *arg2, u16 *arg3) {
    u16 temp_t5;
    u16 temp_v0;
    u16 phi_v0;

    *arg1 = 0;
    *arg2 = 0;
    *arg3 = arg0 & 0xFFFF;
loop_1:
    temp_v0 = *arg3;
    phi_v0 = temp_v0;
    if ((temp_v0 - 0x64) >= 0) {
        *arg1 += 1;
        *arg3 += -0x64;
        goto loop_1;
    }
loop_3:
    if ((phi_v0 - 0xA) >= 0) {
        *arg2 += 1;
        temp_t5 = *arg3 - 0xA;
        *arg3 = temp_t5;
        phi_v0 = temp_t5 & 0xFFFF;
        goto loop_3;
    }
}

void func_8080C29C(void *arg0) {
    func_8080C040();
    arg0->unk_2450A = (s16) (arg0->unk_2450A - 0x28);
    arg0->unk_24508 = (s16) (arg0->unk_24508 - 0x14);
    if ((s32) arg0->unk_24508 < -0x5D) {
        arg0->unk_24508 = -0x5E;
        arg0->unk_24486 = 1;
        arg0->unk_2450A = 0;
    }
}

void func_8080C324(void *arg0) {
    s32 sp18;

    arg0->unk_244E6 = (s16) (arg0->unk_244E6 + 0x14);
    sp18 = arg0 + 0x20000;
    func_8080C040();
    if ((s32) arg0->unk_244B6 >= 0xFF) {
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244E6 = 0xFF;
        arg0->unk_244BA = 0xC8;
        arg0->unk_24486 = 2;
    }
}

void func_8080C3A8(void *arg0) {
    void *sp1C;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    u16 temp_v0;
    u8 temp_t0;
    u8 temp_v1_3;
    void *temp_t8;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;
    s32 phi_a0;

    if ((~(arg0->unk_20 | ~0x1000) == 0) || (temp_v0 = arg0->unk_20, (~(temp_v0 | 0xFFFF7FFF) == 0))) {
        temp_v0_8 = arg0 + 0x20000;
        temp_a1_2 = arg0->unk_24480;
        if ((s32) temp_a1_2 < 3) {
            if (gSaveContext.unk_3F3F == 0) {
                temp_v1_5 = *(&D_801C6798 + (temp_a1_2 * 4)) + arg0->unk_220;
                if ((temp_v1_5->unk_24 != 0x5A) && (temp_v1_5->unk_25 != 0x45) && (temp_v1_5->unk_26 != 0x4C) && (temp_v1_5->unk_27 != 0x44) && (temp_v1_5->unk_28 != 0x41) && (temp_v1_5->unk_29 != 0x33)) {
                    sp1C = temp_v0_8;
                    arg0 = arg0;
                    play_sound(0x483BU);
                    arg0->unk_24486 = 0x22;
                    arg0->unk_24510 = 0x63;
                    arg0->unk_24512 = 0;
                    if (gSaveContext.language != 0) {
                        arg0->unk_24512 = 2;
                    }
                    arg0->unk_24518 = 0;
                    arg0->unk_2451A = 0;
                    arg0->unk_24516 = 0;
                    arg0->unk_24514 = 0;
                    arg0->unk_2451C = 0;
                    arg0->unk_24506 = 0x78;
                    arg0->unk_244E4 = 0;
                    Lib_MemCpy(arg0 + (arg0->unk_24480 * 8) + 0x24414, &D_8081455C, 8U);
                    return;
                }
                sp1C = temp_v0_8;
                arg0 = arg0;
                play_sound(0x483BU);
                arg0->unk_24498 = 4;
                arg0->unk_2448C = 0;
                arg0->unk_2448E = (s16) arg0->unk_24480;
                arg0->unk_24484 = 2;
                arg0->unk_244AE = 1;
                return;
            }
            temp_t8 = arg0 + (temp_a1_2 * 6);
            if ((temp_t8->unk_243F4 != 0x5A) || (temp_t8->unk_243F5 != 0x45) || (temp_t8->unk_243F6 != 0x4C) || (temp_t8->unk_243F7 != 0x44) || (temp_t8->unk_243F8 != 0x41) || (temp_t8->unk_243F9 != 0x33)) {
                sp1C = temp_v0_8;
                arg0 = arg0;
                play_sound(0x483BU);
                arg0->unk_24486 = 0x22;
                arg0->unk_24510 = 0x63;
                arg0->unk_24512 = 0;
                if (gSaveContext.language != 0) {
                    arg0->unk_24512 = 2;
                }
                arg0->unk_24518 = 0;
                arg0->unk_2451A = 0;
                arg0->unk_24516 = 0;
                arg0->unk_24514 = 0;
                arg0->unk_2451C = 0;
                arg0->unk_24506 = 0x78;
                arg0->unk_244E4 = 0;
                Lib_MemCpy(arg0 + (arg0->unk_24480 * 8) + 0x24414, &D_8081455C, 8U);
                return;
            }
            sp1C = temp_v0_8;
            arg0 = arg0;
            play_sound(0x483BU);
            arg0->unk_24498 = 4;
            arg0->unk_2448C = 0;
            arg0->unk_2448E = (s16) arg0->unk_24480;
            arg0->unk_24484 = 2;
            arg0->unk_244AE = 1;
            return;
        }
        if (arg0->unk_244A8 == -1) {
            sp1C = temp_v0_8;
            arg0 = arg0;
            play_sound(0x483BU);
            arg0->unk_24488 = (s16) arg0->unk_24486;
            temp_a1_3 = arg0->unk_24480;
            if (temp_a1_3 == 3) {
                arg0->unk_24486 = 3;
                arg0->unk_244AE = 2;
            } else if (temp_a1_3 == 4) {
                arg0->unk_24486 = 0x15;
                arg0->unk_244AE = 6;
            } else {
                arg0->unk_24486 = 0x27;
                arg0->unk_24510 = 0;
                arg0->unk_24518 = 0;
                arg0->unk_2451A = 0;
                arg0->unk_24514 = 0;
                arg0->unk_2451C = 0;
                arg0->unk_24506 = 0x78;
            }
            arg0->unk_24498 = 4;
            return;
        }
        play_sound(0x483DU);
        return;
    }
    if (~(temp_v0 | ~0x4000) == 0) {
        gSaveContext.gameMode = 1;
        arg0->unk_9B = 0;
        arg0->unk_10 = 0x210;
        arg0->unk_C = Opening_Init;
        return;
    }
    temp_v1 = arg0->unk_24504;
    phi_a0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_a0 = -(s32) temp_v1;
    }
    if (phi_a0 >= 0x1F) {
        sp1C = arg0 + 0x20000;
        arg0 = arg0;
        play_sound(0x4839U);
        if ((s32) arg0->unk_24504 >= 0x1F) {
            arg0->unk_24480 = (s16) (arg0->unk_24480 - 1);
            if (arg0->unk_24480 == 2) {
                arg0->unk_24480 = 1;
            }
            if ((s32) arg0->unk_24480 < 0) {
                arg0->unk_24480 = 5;
            }
        } else {
            arg0->unk_24480 = (s16) (arg0->unk_24480 + 1);
            if (arg0->unk_24480 == 2) {
                arg0->unk_24480 = 3;
            }
            if ((s32) arg0->unk_24480 >= 6) {
                arg0->unk_24480 = 0;
            }
        }
    }
    temp_a1 = (arg0 + 0x20000)->unk_4480;
    if (temp_a1 == 3) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_a0 = arg0->unk_220;
            temp_v1_2 = D_801C6798.unk_0 + temp_a0;
            temp_t0 = temp_v1_2->unk_24;
            if ((temp_t0 != 0x5A) && (temp_v1_2->unk_25 != 0x45) && (temp_v1_2->unk_26 != 0x4C) && (temp_v1_2->unk_27 != 0x44) && (temp_v1_2->unk_28 != 0x41) && (temp_v1_2->unk_29 != 0x33) && (temp_v0_2 = D_801C6798.unk_4 + temp_a0, (temp_v0_2->unk_24 != 0x5A)) && (temp_v0_2->unk_25 != 0x45) && (temp_v0_2->unk_26 != 0x4C) && (temp_v0_2->unk_27 != 0x44) && (temp_v0_2->unk_28 != 0x41) && (temp_v0_2->unk_29 != 0x33) && (temp_v0_3 = D_801C6798.unk_8 + temp_a0, (temp_v0_3->unk_24 != 0x5A)) && (temp_v0_3->unk_25 != 0x45) && (temp_v0_3->unk_26 != 0x4C) && (temp_v0_3->unk_27 != 0x44) && (temp_v0_3->unk_28 != 0x41) && (temp_v0_3->unk_29 != 0x33)) {
                arg0->unk_244AA = temp_a1;
                arg0->unk_244A8 = 0;
                arg0->unk_244E8 = 0xFF;
                return;
            }
            if (((temp_t0 == 0x5A) || (temp_v1_2->unk_25 == 0x45) || (temp_v1_2->unk_26 == 0x4C) || (temp_v1_2->unk_27 == 0x44) || (temp_v1_2->unk_28 == 0x41) || (temp_v1_2->unk_29 == 0x33)) && ((temp_v0_4 = D_801C6798.unk_4 + temp_a0, (temp_v0_4->unk_24 == 0x5A)) || (temp_v0_4->unk_25 == 0x45) || (temp_v0_4->unk_26 == 0x4C) || (temp_v0_4->unk_27 == 0x44) || (temp_v0_4->unk_28 == 0x41) || (temp_v0_4->unk_29 == 0x33)) && ((temp_v0_5 = D_801C6798.unk_8 + temp_a0, (temp_v0_5->unk_24 == 0x5A)) || (temp_v0_5->unk_25 == 0x45) || (temp_v0_5->unk_26 == 0x4C) || (temp_v0_5->unk_27 == 0x44) || (temp_v0_5->unk_28 == 0x41) || (temp_v0_5->unk_29 == 0x33))) {
                arg0->unk_244AA = temp_a1;
                arg0->unk_244A8 = 2;
                arg0->unk_244E8 = 0xFF;
                return;
            }
            arg0->unk_244A8 = -1;
            return;
        }
        temp_v1_3 = (arg0 + 0x20000)->unk_43F4;
        if (((temp_v1_3 != 0x5A) || ((arg0 + 0x20000)->unk_43F5 != 0x45) || ((arg0 + 0x20000)->unk_43F6 != 0x4C) || ((arg0 + 0x20000)->unk_43F7 != 0x44) || ((arg0 + 0x20000)->unk_43F8 != 0x41) || ((arg0 + 0x20000)->unk_43F9 != 0x33)) && (((arg0 + 0x20000)->unk_43FA != 0x5A) || ((arg0 + 0x20000)->unk_43FB != 0x45) || ((arg0 + 0x20000)->unk_43FC != 0x4C) || ((arg0 + 0x20000)->unk_43FD != 0x44) || ((arg0 + 0x20000)->unk_43FE != 0x41) || ((arg0 + 0x20000)->unk_43FF != 0x33)) && (((arg0 + 0x20000)->unk_4400 != 0x5A) || ((arg0 + 0x20000)->unk_4401 != 0x45) || ((arg0 + 0x20000)->unk_4402 != 0x4C) || ((arg0 + 0x20000)->unk_4403 != 0x44) || ((arg0 + 0x20000)->unk_4404 != 0x41) || ((arg0 + 0x20000)->unk_4405 != 0x33))) {
            arg0->unk_244AA = temp_a1;
            arg0->unk_244A8 = 0;
            arg0->unk_244E8 = 0xFF;
            return;
        }
        if ((temp_v1_3 == 0x5A) && ((arg0 + 0x20000)->unk_43F5 == 0x45) && ((arg0 + 0x20000)->unk_43F6 == 0x4C) && ((arg0 + 0x20000)->unk_43F7 == 0x44) && ((arg0 + 0x20000)->unk_43F8 == 0x41) && ((arg0 + 0x20000)->unk_43F9 == 0x33) && ((arg0 + 0x20000)->unk_43FA == 0x5A) && ((arg0 + 0x20000)->unk_43FB == 0x45) && ((arg0 + 0x20000)->unk_43FC == 0x4C) && ((arg0 + 0x20000)->unk_43FD == 0x44) && ((arg0 + 0x20000)->unk_43FE == 0x41) && ((arg0 + 0x20000)->unk_43FF == 0x33) && ((arg0 + 0x20000)->unk_4400 == 0x5A) && ((arg0 + 0x20000)->unk_4401 == 0x45) && ((arg0 + 0x20000)->unk_4402 == 0x4C) && ((arg0 + 0x20000)->unk_4403 == 0x44) && ((arg0 + 0x20000)->unk_4404 == 0x41) && ((arg0 + 0x20000)->unk_4405 == 0x33)) {
            arg0->unk_244AA = temp_a1;
            arg0->unk_244A8 = 2;
            arg0->unk_244E8 = 0xFF;
            return;
        }
        arg0->unk_244A8 = -1;
        return;
    }
    if (temp_a1 == 4) {
        if (gSaveContext.unk_3F3F == 0) {
            temp_a0_2 = arg0->unk_220;
            temp_v1_4 = D_801C6798.unk_0 + temp_a0_2;
            if ((temp_v1_4->unk_24 != 0x5A) && (temp_v1_4->unk_25 != 0x45) && (temp_v1_4->unk_26 != 0x4C) && (temp_v1_4->unk_27 != 0x44) && (temp_v1_4->unk_28 != 0x41) && (temp_v1_4->unk_29 != 0x33) && (temp_v0_6 = D_801C6798.unk_4 + temp_a0_2, (temp_v0_6->unk_24 != 0x5A)) && (temp_v0_6->unk_25 != 0x45) && (temp_v0_6->unk_26 != 0x4C) && (temp_v0_6->unk_27 != 0x44) && (temp_v0_6->unk_28 != 0x41) && (temp_v0_6->unk_29 != 0x33) && (temp_v0_7 = D_801C6798.unk_8 + temp_a0_2, (temp_v0_7->unk_24 != 0x5A)) && (temp_v0_7->unk_25 != 0x45) && (temp_v0_7->unk_26 != 0x4C) && (temp_v0_7->unk_27 != 0x44) && (temp_v0_7->unk_28 != 0x41) && (temp_v0_7->unk_29 != 0x33)) {
                arg0->unk_244AA = temp_a1;
                arg0->unk_244A8 = 1;
                arg0->unk_244E8 = 0xFF;
                return;
            }
            arg0->unk_244A8 = -1;
            return;
        }
        if ((((arg0 + 0x20000)->unk_43F4 != 0x5A) || ((arg0 + 0x20000)->unk_43F5 != 0x45) || ((arg0 + 0x20000)->unk_43F6 != 0x4C) || ((arg0 + 0x20000)->unk_43F7 != 0x44) || ((arg0 + 0x20000)->unk_43F8 != 0x41) || ((arg0 + 0x20000)->unk_43F9 != 0x33)) && (((arg0 + 0x20000)->unk_43FA != 0x5A) || ((arg0 + 0x20000)->unk_43FB != 0x45) || ((arg0 + 0x20000)->unk_43FC != 0x4C) || ((arg0 + 0x20000)->unk_43FD != 0x44) || ((arg0 + 0x20000)->unk_43FE != 0x41) || ((arg0 + 0x20000)->unk_43FF != 0x33)) && (((arg0 + 0x20000)->unk_4400 != 0x5A) || ((arg0 + 0x20000)->unk_4401 != 0x45) || ((arg0 + 0x20000)->unk_4402 != 0x4C) || ((arg0 + 0x20000)->unk_4403 != 0x44) || ((arg0 + 0x20000)->unk_4404 != 0x41) || ((arg0 + 0x20000)->unk_4405 != 0x33))) {
            arg0->unk_244AA = temp_a1;
            arg0->unk_244A8 = 1;
            arg0->unk_244E8 = 0xFF;
            return;
        }
        arg0->unk_244A8 = -1;
        return;
    }
    arg0->unk_244A8 = -1;
}

void func_8080D164(s32 arg0) {

}

void func_8080D170(void *arg0) {
    s16 temp_v0;

    temp_v0 = D_80814564 + 2;
    D_80814564 = temp_v0;
    if (temp_v0 == 0xFE) {
        arg0->unk_24486 = (s16) arg0->unk_2448A;
        D_80814564 = 0;
    }
}

void func_8080D1BC(void *arg0) {
    arg0->unk_2450C = (f32) (arg0->unk_2450C + 50.0f);
    if (arg0->unk_2450C >= 314.0f) {
        arg0->unk_2450C = 314.0f;
        arg0->unk_24486 = 0x23;
    }
}

void func_8080D220(void *arg0) {
    arg0->unk_2450C = (f32) (arg0->unk_2450C + 50.0f);
    if (arg0->unk_2450C >= 314.0f) {
        arg0->unk_2450C = 314.0f;
        arg0->unk_24486 = 0x28;
    }
}

void func_8080D284(void *arg0) {
    arg0->unk_2450C = (f32) (arg0->unk_2450C + 50.0f);
    if (arg0->unk_2450C >= 628.0f) {
        arg0->unk_2450C = 0.0f;
        arg0->unk_24486 = 2;
    }
}

void func_8080D2EC(GraphicsContext **arg0) {
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_a2;
    s32 temp_lo;
    s32 phi_a3;

    temp_v1 = arg0->unk_244F0;
    temp_a1 = *(&D_8081461C + (arg0->unk_244F2 * 2));
    temp_a2 = temp_v1 - temp_a1;
    phi_a3 = temp_a2;
    if (temp_a2 < 0) {
        phi_a3 = -temp_a2;
    }
    temp_lo = phi_a3 / (s32) arg0->unk_24528;
    if ((s32) temp_v1 >= (s32) temp_a1) {
        arg0->unk_244F0 = (s16) (temp_v1 - temp_lo);
    } else {
        arg0->unk_244F0 = (s16) (temp_v1 + temp_lo);
    }
    arg0->unk_24528 = (s16) (arg0->unk_24528 - 1);
    if (arg0->unk_24528 == 0) {
        arg0->unk_244F0 = (s16) *(&D_8081461C + (arg0->unk_244F2 * 2));
        arg0->unk_24528 = 0x14;
        arg0->unk_244F2 = (s16) (arg0->unk_244F2 ^ 1);
    }
}

void func_8080D3D0(void *arg0) {
    *(&D_80814568 + (arg0->unk_24486 * 4))();
}

void func_8080D40C(GraphicsContext **arg0) {
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t1;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_v1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_t0;
    u8 temp_t3_3;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_t5_3;
    void *temp_t5_4;
    void *temp_t5_5;
    void *temp_v1;
    s16 phi_a3;
    s16 phi_a1;
    s16 phi_a2;
    s32 phi_v0;
    s16 phi_t0;
    s16 phi_v1;

    temp_v1 = arg0->unk_0;
    temp_v0 = temp_v1->polyOpa.d - 0x500;
    temp_v1->polyOpa.d = temp_v0;
    arg0[41] = temp_v0;
    phi_a3 = 0;
    phi_a1 = arg0->unk_24508 - 0x5A;
    phi_a2 = 0;
    do {
        temp_a1 = phi_a1 + 0x40;
        phi_a1 = temp_a1;
        if (phi_a3 == 3) {
            phi_v0 = 0x30;
        } else {
            phi_v0 = 0x40;
        }
        temp_t4 = phi_v0 << 5;
        temp_t1 = phi_v0 + temp_a1;
        phi_t0 = 0x50;
        phi_v1 = 0;
loop_5:
        temp_v0_2 = phi_a2 * 0x10;
        temp_t2 = phi_t0 - 0x20;
        (arg0[41] + temp_v0_2)->unk_20 = temp_a1;
        temp_v1_2 = phi_v1 + 1;
        *(arg0[41] + temp_v0_2) = temp_a1;
        temp_a2 = phi_a2 + 4;
        (arg0[41] + temp_v0_2)->unk_30 = temp_t1;
        (arg0[41] + temp_v0_2)->unk_10 = temp_t1;
        (arg0[41] + temp_v0_2)->unk_12 = phi_t0;
        (arg0[41] + temp_v0_2)->unk_2 = phi_t0;
        (arg0[41] + temp_v0_2)->unk_32 = temp_t2;
        (arg0[41] + temp_v0_2)->unk_22 = temp_t2;
        (arg0[41] + temp_v0_2)->unk_34 = 0;
        temp_t5 = arg0[41] + temp_v0_2;
        temp_t3 = temp_t5->unk_34;
        temp_t5->unk_24 = temp_t3;
        (arg0[41] + temp_v0_2)->unk_14 = temp_t3;
        (arg0[41] + temp_v0_2)->unk_4 = temp_t3;
        (arg0[41] + temp_v0_2)->unk_36 = 0;
        temp_t5_2 = arg0[41] + temp_v0_2;
        temp_t0 = temp_t5_2->unk_36;
        temp_t5_2->unk_26 = temp_t0;
        (arg0[41] + temp_v0_2)->unk_16 = temp_t0;
        (arg0[41] + temp_v0_2)->unk_6 = temp_t0;
        (arg0[41] + temp_v0_2)->unk_28 = 0;
        temp_t5_3 = arg0[41] + temp_v0_2;
        temp_t3_2 = temp_t5_3->unk_28;
        temp_t5_3->unk_1A = temp_t3_2;
        (arg0[41] + temp_v0_2)->unk_A = temp_t3_2;
        (arg0[41] + temp_v0_2)->unk_8 = temp_t3_2;
        (arg0[41] + temp_v0_2)->unk_38 = temp_t4;
        (arg0[41] + temp_v0_2)->unk_18 = temp_t4;
        (arg0[41] + temp_v0_2)->unk_3A = 0x400;
        temp_t5_4 = arg0[41] + temp_v0_2;
        temp_t5_4->unk_2A = (s16) temp_t5_4->unk_3A;
        (arg0[41] + temp_v0_2)->unk_3F = 0xFF;
        temp_t5_5 = arg0[41] + temp_v0_2;
        temp_t3_3 = temp_t5_5->unk_3F;
        temp_t5_5->unk_1F = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_2F = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_F = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_3E = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_1E = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_3D = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_1D = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_3C = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_1C = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_2E = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_E = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_2D = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_D = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_2C = temp_t3_3;
        (arg0[41] + temp_v0_2)->unk_C = temp_t3_3;
        phi_a2 = temp_a2;
        phi_t0 = temp_t2;
        phi_v1 = temp_v1_2;
        phi_a2 = temp_a2;
        if ((s32) temp_v1_2 < 5) {
            goto loop_5;
        }
        temp_a3 = phi_a3 + 1;
        phi_a3 = temp_a3;
    } while ((s32) temp_a3 < 4);
}

void func_8080D6D4(GraphicsContext **arg0) {
    s16 spAC;
    u16 spA8;
    u16 spA6;
    u16 spA4;
    s32 sp9C;
    s32 sp98;
    void *sp50;
    GraphicsContext *temp_v1;
    s16 *temp_a1_10;
    s16 *temp_a1_8;
    s16 *temp_a2_3;
    s16 *temp_a2_4;
    s16 *temp_t0;
    s16 *temp_t0_2;
    s16 temp_a1;
    s16 temp_a1_13;
    s16 temp_a1_14;
    s16 temp_a1_15;
    s16 temp_a1_16;
    s16 temp_a1_17;
    s16 temp_a1_18;
    s16 temp_a1_19;
    s16 temp_a1_3;
    s16 temp_a1_9;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a2_5;
    s16 temp_a2_6;
    s16 temp_a2_7;
    s16 temp_a2_8;
    s16 temp_a2_9;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_a3_5;
    s16 temp_a3_6;
    s16 temp_a3_7;
    s16 temp_a3_8;
    s16 temp_a3_9;
    s16 temp_s1;
    s16 temp_s1_5;
    s16 temp_s4;
    s16 temp_s4_2;
    s16 temp_s4_3;
    s16 temp_s4_4;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t4;
    s16 temp_v0_15;
    s16 temp_v0_25;
    s16 temp_v0_5;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_13;
    s16 temp_v1_14;
    s16 temp_v1_15;
    s16 temp_v1_16;
    s16 temp_v1_17;
    s16 temp_v1_18;
    s16 temp_v1_19;
    s16 temp_v1_20;
    s16 temp_v1_21;
    s16 temp_v1_22;
    s16 temp_v1_23;
    s16 temp_v1_24;
    s16 temp_v1_25;
    s16 temp_v1_26;
    s16 temp_v1_27;
    s16 temp_v1_28;
    s16 temp_v1_29;
    s16 temp_v1_2;
    s16 temp_v1_30;
    s16 temp_v1_31;
    s16 temp_v1_32;
    s16 temp_v1_33;
    s16 temp_v1_34;
    s16 temp_v1_35;
    s16 temp_v1_36;
    s16 temp_v1_37;
    s16 temp_v1_38;
    s16 temp_v1_39;
    s16 temp_v1_3;
    s16 temp_v1_40;
    s16 temp_v1_41;
    s16 temp_v1_42;
    s16 temp_v1_43;
    s16 temp_v1_44;
    s16 temp_v1_45;
    s16 temp_v1_46;
    s16 temp_v1_47;
    s16 temp_v1_48;
    s16 temp_v1_49;
    s16 temp_v1_4;
    s16 temp_v1_50;
    s16 temp_v1_51;
    s16 temp_v1_52;
    s16 temp_v1_53;
    s16 temp_v1_54;
    s16 temp_v1_55;
    s16 temp_v1_56;
    s16 temp_v1_57;
    s16 temp_v1_58;
    s16 temp_v1_59;
    s16 temp_v1_60;
    s16 temp_v1_61;
    s16 temp_v1_62;
    s16 temp_v1_63;
    s16 temp_v1_64;
    s16 temp_v1_65;
    s16 temp_v1_66;
    s16 temp_v1_67;
    s16 temp_v1_68;
    s16 temp_v1_69;
    s16 temp_v1_6;
    s16 temp_v1_70;
    s16 temp_v1_71;
    s16 temp_v1_72;
    s16 temp_v1_73;
    s16 temp_v1_74;
    s16 temp_v1_75;
    s16 temp_v1_76;
    s16 temp_v1_77;
    s16 temp_v1_78;
    s16 temp_v1_79;
    s16 temp_v1_7;
    s16 temp_v1_80;
    s16 temp_v1_81;
    s16 temp_v1_82;
    s16 temp_v1_83;
    s16 temp_v1_84;
    s16 temp_v1_8;
    s16 temp_v1_9;
    s32 temp_a0_73;
    s32 temp_a1_11;
    s32 temp_a1_12;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s3;
    s32 temp_s3_10;
    s32 temp_s3_11;
    s32 temp_s3_12;
    s32 temp_s3_13;
    s32 temp_s3_14;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s3_5;
    s32 temp_s3_6;
    s32 temp_s3_7;
    s32 temp_s3_8;
    s32 temp_s3_9;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_23;
    s32 temp_v0_24;
    s32 temp_v0_26;
    s32 temp_v0_27;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 temp_v0_8;
    s32 temp_v0_9;
    u16 temp_a1_2;
    u8 temp_v1_5;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_17;
    void *temp_a0_18;
    void *temp_a0_19;
    void *temp_a0_20;
    void *temp_a0_21;
    void *temp_a0_22;
    void *temp_a0_23;
    void *temp_a0_24;
    void *temp_a0_25;
    void *temp_a0_26;
    void *temp_a0_27;
    void *temp_a0_28;
    void *temp_a0_29;
    void *temp_a0_2;
    void *temp_a0_30;
    void *temp_a0_31;
    void *temp_a0_32;
    void *temp_a0_33;
    void *temp_a0_34;
    void *temp_a0_35;
    void *temp_a0_36;
    void *temp_a0_37;
    void *temp_a0_38;
    void *temp_a0_39;
    void *temp_a0_3;
    void *temp_a0_40;
    void *temp_a0_41;
    void *temp_a0_42;
    void *temp_a0_43;
    void *temp_a0_44;
    void *temp_a0_45;
    void *temp_a0_46;
    void *temp_a0_47;
    void *temp_a0_48;
    void *temp_a0_49;
    void *temp_a0_4;
    void *temp_a0_50;
    void *temp_a0_51;
    void *temp_a0_52;
    void *temp_a0_53;
    void *temp_a0_54;
    void *temp_a0_55;
    void *temp_a0_56;
    void *temp_a0_57;
    void *temp_a0_58;
    void *temp_a0_59;
    void *temp_a0_5;
    void *temp_a0_60;
    void *temp_a0_61;
    void *temp_a0_62;
    void *temp_a0_63;
    void *temp_a0_64;
    void *temp_a0_65;
    void *temp_a0_66;
    void *temp_a0_67;
    void *temp_a0_68;
    void *temp_a0_69;
    void *temp_a0_6;
    void *temp_a0_70;
    void *temp_a0_71;
    void *temp_a0_72;
    void *temp_a0_74;
    void *temp_a0_75;
    void *temp_a0_76;
    void *temp_a0_77;
    void *temp_a0_78;
    void *temp_a0_79;
    void *temp_a0_7;
    void *temp_a0_80;
    void *temp_a0_81;
    void *temp_a0_82;
    void *temp_a0_83;
    void *temp_a0_84;
    void *temp_a0_85;
    void *temp_a0_86;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a1_20;
    void *temp_a1_21;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_s6;
    void *temp_t7;
    void *temp_t8;
    void *temp_t9;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_7;
    s32 phi_t1;
    s16 phi_s1;
    s32 phi_s3;
    s16 phi_s4;
    s16 phi_a3;
    s32 phi_s3_2;
    s16 phi_s4_2;
    s32 phi_t0;
    s16 phi_s4_3;
    s16 phi_a3_2;
    s32 phi_s1_2;
    s32 phi_s3_3;
    u16 *phi_t2;
    s32 phi_s1_3;
    s32 phi_s3_4;
    s16 phi_a3_3;
    s16 phi_a3_4;
    s32 phi_s1_4;
    s32 phi_s3_5;
    s16 phi_s1_5;
    s32 phi_s3_6;
    s16 phi_t0_2;
    s16 phi_a3_5;
    s16 phi_s1_6;
    s32 phi_s3_7;
    s16 phi_a3_6;
    s32 phi_t0_3;
    s16 phi_a3_7;
    s32 phi_s3_8;
    s16 phi_s1_7;
    s32 phi_s3_9;
    s16 phi_a3_8;
    s32 phi_s3_10;
    s16 phi_s4_4;
    s32 phi_a1;
    s16 phi_s4_5;
    s32 phi_s3_11;
    s16 phi_s1_8;
    void *phi_s6;
    s16 phi_t6;
    s32 phi_t9;
    s32 phi_s3_12;

    temp_v1 = arg0->unk_0;
    temp_v0 = temp_v1->polyOpa.d - 0x3C00;
    temp_v1->polyOpa.d = temp_v0;
    arg0[37113] = temp_v0;
    phi_t1 = 0;
    do {
        temp_v0_2 = phi_t1 * 0x10;
        (arg0[37113] + temp_v0_2)->unk_20 = 0x12C;
        temp_t1 = (phi_t1 + 4) & 0xFFFF;
        temp_a0 = arg0[37113] + temp_v0_2;
        temp_a0->unk_0 = (s16) temp_a0->unk_20;
        temp_a0_2 = arg0[37113] + temp_v0_2;
        temp_v1_2 = temp_a0_2->unk_0 + 0x10;
        temp_a0_2->unk_30 = temp_v1_2;
        (arg0[37113] + temp_v0_2)->unk_10 = temp_v1_2;
        (arg0[37113] + temp_v0_2)->unk_12 = 0;
        temp_a0_3 = arg0[37113] + temp_v0_2;
        temp_a0_3->unk_2 = (s16) temp_a0_3->unk_12;
        temp_a0_4 = arg0[37113] + temp_v0_2;
        temp_v1_3 = temp_a0_4->unk_2 - 0x10;
        temp_a0_4->unk_32 = temp_v1_3;
        (arg0[37113] + temp_v0_2)->unk_22 = temp_v1_3;
        (arg0[37113] + temp_v0_2)->unk_34 = 0;
        temp_a0_5 = arg0[37113] + temp_v0_2;
        temp_a1 = temp_a0_5->unk_34;
        temp_a0_5->unk_24 = temp_a1;
        (arg0[37113] + temp_v0_2)->unk_14 = temp_a1;
        (arg0[37113] + temp_v0_2)->unk_4 = temp_a1;
        (arg0[37113] + temp_v0_2)->unk_36 = 0;
        temp_a0_6 = arg0[37113] + temp_v0_2;
        temp_a1_2 = temp_a0_6->unk_36;
        temp_a0_6->unk_26 = temp_a1_2;
        (arg0[37113] + temp_v0_2)->unk_16 = temp_a1_2;
        (arg0[37113] + temp_v0_2)->unk_6 = temp_a1_2;
        (arg0[37113] + temp_v0_2)->unk_28 = 0;
        temp_a0_7 = arg0[37113] + temp_v0_2;
        temp_v1_4 = temp_a0_7->unk_28;
        temp_a0_7->unk_1A = temp_v1_4;
        (arg0[37113] + temp_v0_2)->unk_A = temp_v1_4;
        (arg0[37113] + temp_v0_2)->unk_8 = temp_v1_4;
        (arg0[37113] + temp_v0_2)->unk_3A = 0x200;
        temp_a0_8 = arg0[37113] + temp_v0_2;
        temp_a1_3 = temp_a0_8->unk_3A;
        temp_a0_8->unk_38 = temp_a1_3;
        (arg0[37113] + temp_v0_2)->unk_2A = temp_a1_3;
        (arg0[37113] + temp_v0_2)->unk_18 = temp_a1_3;
        (arg0[37113] + temp_v0_2)->unk_3F = 0xFF;
        temp_a0_9 = arg0[37113] + temp_v0_2;
        temp_v1_5 = temp_a0_9->unk_3F;
        temp_a0_9->unk_2F = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_1F = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_F = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_3E = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_2E = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_1E = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_E = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_3D = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_2D = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_1D = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_D = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_3C = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_2C = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_1C = temp_v1_5;
        (arg0[37113] + temp_v0_2)->unk_C = temp_v1_5;
        phi_t1 = temp_t1;
    } while (temp_t1 < 0x3C0);
    temp_v1_6 = arg0->unk_24508;
    arg0[37113]->unk_20 = temp_v1_6;
    arg0[37113]->unk_0 = temp_v1_6;
    temp_a1_4 = arg0[37113];
    temp_v1_7 = temp_a1_4->unk_0 + 0x80;
    temp_a1_4->unk_30 = temp_v1_7;
    arg0[37113]->unk_10 = temp_v1_7;
    arg0[37113]->unk_12 = 0x48;
    temp_a1_5 = arg0[37113];
    temp_a1_5->unk_2 = (s16) temp_a1_5->unk_12;
    temp_a1_6 = arg0[37113];
    temp_v1_8 = temp_a1_6->unk_2 - 0x10;
    temp_a1_6->unk_32 = temp_v1_8;
    arg0[37113]->unk_22 = temp_v1_8;
    arg0[37113]->unk_38 = 0x1000;
    temp_a1_7 = arg0[37113];
    temp_a1_7->unk_18 = temp_a1_7->unk_38;
    phi_a3 = 0;
    phi_a3_2 = 0;
    phi_a3_3 = 0;
    phi_a3_5 = 0;
    phi_a3_6 = 0;
    phi_a3_7 = 0;
    phi_a3_8 = 0;
    phi_s3 = 4;
    do {
        phi_s1 = arg0->unk_24508 - 6;
        phi_s4 = 0;
        phi_s4_2 = 0;
        phi_s4_3 = 0;
        phi_s4_4 = 0;
loop_4:
        temp_v0_3 = phi_s3 * 0x10;
        (arg0[37113] + temp_v0_3)->unk_20 = phi_s1;
        temp_a1_8 = &D_80814538 + (phi_s4 * 2);
        *(arg0[37113] + temp_v0_3) = phi_s1;
        temp_s4 = phi_s4 + 1;
        temp_a0_10 = arg0[37113] + temp_v0_3;
        temp_v1_9 = *temp_a1_8 + temp_a0_10->unk_0;
        temp_a0_10->unk_30 = temp_v1_9;
        temp_s3 = (phi_s3 + 4) & 0xFFFF;
        (arg0[37113] + temp_v0_3)->unk_10 = temp_v1_9;
        temp_v1_10 = (arg0 + (phi_a3 * 2))->unk_24492 + 0x2C;
        (arg0[37113] + temp_v0_3)->unk_12 = temp_v1_10;
        (arg0[37113] + temp_v0_3)->unk_2 = temp_v1_10;
        temp_a0_11 = arg0[37113] + temp_v0_3;
        temp_v1_11 = temp_a0_11->unk_2 - 0x38;
        temp_a0_11->unk_32 = temp_v1_11;
        (arg0[37113] + temp_v0_3)->unk_22 = temp_v1_11;
        temp_v1_12 = *temp_a1_8 << 5;
        (arg0[37113] + temp_v0_3)->unk_38 = temp_v1_12;
        (arg0[37113] + temp_v0_3)->unk_18 = temp_v1_12;
        (arg0[37113] + temp_v0_3)->unk_3A = 0x700;
        temp_a0_12 = arg0[37113] + temp_v0_3;
        temp_a0_12->unk_2A = (s16) temp_a0_12->unk_3A;
        phi_s1 += *temp_a1_8;
        phi_s3 = temp_s3;
        phi_s4 = temp_s4;
        phi_s3_2 = temp_s3;
        phi_s3 = temp_s3;
        if ((s32) temp_s4 < 7) {
            goto loop_4;
        }
        temp_a3 = phi_a3 + 1;
        phi_a3 = temp_a3;
    } while ((s32) temp_a3 < 3);
    temp_s1 = arg0->unk_24508 - 6;
    temp_a1_9 = temp_s1 + 0x40;
    temp_a2 = temp_s1 + 0x34;
    temp_a3_2 = temp_s1 + 0xA9;
    phi_t0 = 0x2C;
    do {
        temp_v0_4 = phi_s3_2 * 0x10;
        (arg0[37113] + temp_v0_4)->unk_20 = temp_s1;
        temp_s3_2 = (phi_s3_2 + 0x10) & 0xFFFF;
        *(arg0[37113] + temp_v0_4) = temp_s1;
        temp_s6 = arg0 + (phi_s4_2 * 2);
        temp_a0_13 = arg0[37113] + temp_v0_4;
        temp_s4_2 = phi_s4_2 + 1;
        temp_v1_13 = temp_a0_13->unk_0 + 0x40;
        temp_a0_13->unk_30 = temp_v1_13;
        (arg0[37113] + temp_v0_4)->unk_10 = temp_v1_13;
        temp_v1_14 = temp_s6->unk_2449A + phi_t0;
        (arg0[37113] + temp_v0_4)->unk_12 = temp_v1_14;
        (arg0[37113] + temp_v0_4)->unk_2 = temp_v1_14;
        temp_a0_14 = arg0[37113] + temp_v0_4;
        temp_v1_15 = temp_a0_14->unk_2 - 0x10;
        temp_a0_14->unk_32 = temp_v1_15;
        (arg0[37113] + temp_v0_4)->unk_22 = temp_v1_15;
        (arg0[37113] + temp_v0_4)->unk_38 = 0x800;
        temp_a0_15 = arg0[37113] + temp_v0_4;
        temp_a0_15->unk_18 = (s16) temp_a0_15->unk_38;
        (arg0[37113] + temp_v0_4)->unk_60 = temp_a1_9;
        (arg0[37113] + temp_v0_4)->unk_40 = temp_a1_9;
        temp_a0_16 = arg0[37113] + temp_v0_4;
        temp_v1_16 = temp_a0_16->unk_40 + 0x6C;
        temp_a0_16->unk_70 = temp_v1_16;
        (arg0[37113] + temp_v0_4)->unk_50 = temp_v1_16;
        temp_v1_17 = temp_s6->unk_2449A + phi_t0;
        (arg0[37113] + temp_v0_4)->unk_52 = temp_v1_17;
        (arg0[37113] + temp_v0_4)->unk_42 = temp_v1_17;
        temp_a0_17 = arg0[37113] + temp_v0_4;
        temp_v1_18 = temp_a0_17->unk_42 - 0x10;
        temp_a0_17->unk_72 = temp_v1_18;
        (arg0[37113] + temp_v0_4)->unk_62 = temp_v1_18;
        (arg0[37113] + temp_v0_4)->unk_78 = 0xD80;
        temp_a0_18 = arg0[37113] + temp_v0_4;
        temp_a0_18->unk_58 = (s16) temp_a0_18->unk_78;
        (arg0[37113] + temp_v0_4)->unk_A0 = temp_a2;
        (arg0[37113] + temp_v0_4)->unk_80 = temp_a2;
        temp_a0_19 = arg0[37113] + temp_v0_4;
        temp_v1_19 = temp_a0_19->unk_80 + 0x18;
        temp_a0_19->unk_B0 = temp_v1_19;
        (arg0[37113] + temp_v0_4)->unk_90 = temp_v1_19;
        temp_v1_20 = temp_s6->unk_2449A + phi_t0;
        (arg0[37113] + temp_v0_4)->unk_92 = temp_v1_20;
        (arg0[37113] + temp_v0_4)->unk_82 = temp_v1_20;
        temp_a0_20 = arg0[37113] + temp_v0_4;
        temp_v1_21 = temp_a0_20->unk_82 - 0x10;
        temp_a0_20->unk_B2 = temp_v1_21;
        (arg0[37113] + temp_v0_4)->unk_A2 = temp_v1_21;
        (arg0[37113] + temp_v0_4)->unk_B8 = 0x300;
        temp_a0_21 = arg0[37113] + temp_v0_4;
        temp_a0_21->unk_98 = (s16) temp_a0_21->unk_B8;
        (arg0[37113] + temp_v0_4)->unk_E0 = temp_a3_2;
        (arg0[37113] + temp_v0_4)->unk_C0 = temp_a3_2;
        temp_a0_22 = arg0[37113] + temp_v0_4;
        temp_v1_22 = temp_a0_22->unk_C0 + 0x34;
        temp_a0_22->unk_F0 = temp_v1_22;
        (arg0[37113] + temp_v0_4)->unk_D0 = temp_v1_22;
        temp_v1_23 = temp_s6->unk_2449A + phi_t0;
        (arg0[37113] + temp_v0_4)->unk_D2 = temp_v1_23;
        (arg0[37113] + temp_v0_4)->unk_C2 = temp_v1_23;
        temp_a0_23 = arg0[37113] + temp_v0_4;
        temp_v1_24 = temp_a0_23->unk_C2 - 0x10;
        temp_a0_23->unk_F2 = temp_v1_24;
        (arg0[37113] + temp_v0_4)->unk_E2 = temp_v1_24;
        (arg0[37113] + temp_v0_4)->unk_F8 = 0x680;
        temp_a0_24 = arg0[37113] + temp_v0_4;
        temp_a0_24->unk_D8 = (s16) temp_a0_24->unk_F8;
        phi_s3_2 = temp_s3_2;
        phi_s4_2 = temp_s4_2;
        phi_t0 += -0x10;
        phi_s3_11 = temp_s3_2;
    } while ((s32) temp_s4_2 < 3);
    sp9C = 0x2C;
    do {
        phi_s3_3 = phi_s3_11;
        phi_s3_12 = phi_s3_11;
        if (gSaveContext.unk_3F3F != 0) {
            spAC = phi_s4_3;
            if ((arg0 + phi_s4_3)->unk_2446A != 0) {
                spAC = phi_s4_3 + 2;
            }
            temp_v0_5 = arg0->unk_24486;
            phi_s1_2 = arg0->unk_24508 - 6;
            if ((temp_v0_5 == 0x10) && (temp_t9 = arg0 + (phi_s4_3 * 2), phi_s6 = temp_t9 + 0x20000, (phi_s4_3 == arg0->unk_244A6))) {
                sp98 = temp_t9->unk_24492 + 0x2C;
            } else if (((temp_v0_5 == 0x11) || (temp_v0_5 == 0x12)) && (temp_t7 = arg0 + (phi_s4_3 * 2), phi_s6 = temp_t7 + 0x20000, (phi_s4_3 == arg0->unk_244A6))) {
                sp98 = temp_t7->unk_2449A + sp9C;
            } else {
                temp_t8 = arg0 + (phi_s4_3 * 2);
                sp98 = temp_t8->unk_24492 + sp9C + temp_t8->unk_2449A;
                phi_s6 = temp_t8 + 0x20000;
            }
            temp_t2 = sp98 - 2;
            temp_a2_2 = temp_t2 - 1;
            do {
                temp_v0_6 = phi_s3_3 * 0x10;
                temp_a1_10 = &D_80814280 + ((arg0 + (phi_s4_3 * 8) + phi_a3_2)->unk_24414 * 2);
                temp_a3_3 = phi_a3_2 + 1;
                temp_v1_25 = *temp_a1_10 + phi_s1_2 + 0x4E;
                (arg0[37113] + temp_v0_6)->unk_20 = temp_v1_25;
                *(arg0[37113] + temp_v0_6) = temp_v1_25;
                temp_a0_25 = arg0[37113] + temp_v0_6;
                temp_s3_3 = (phi_s3_3 + 4) & 0xFFFF;
                temp_v1_26 = temp_a0_25->unk_0 + 0xB;
                temp_a0_25->unk_30 = temp_v1_26;
                (arg0[37113] + temp_v0_6)->unk_10 = temp_v1_26;
                (arg0[37113] + temp_v0_6)->unk_12 = temp_t2;
                (arg0[37113] + temp_v0_6)->unk_2 = temp_t2;
                temp_a0_26 = arg0[37113] + temp_v0_6;
                temp_v1_27 = temp_a0_26->unk_2 - 0xC;
                temp_a0_26->unk_32 = temp_v1_27;
                (arg0[37113] + temp_v0_6)->unk_22 = temp_v1_27;
                temp_v1_28 = *temp_a1_10 + phi_s1_2 + 0x4F;
                (arg0[37113] + temp_v0_6)->unk_220 = temp_v1_28;
                (arg0[37113] + temp_v0_6)->unk_200 = temp_v1_28;
                temp_a0_27 = arg0[37113] + temp_v0_6;
                temp_v1_29 = temp_a0_27->unk_200 + 0xB;
                temp_a0_27->unk_230 = temp_v1_29;
                (arg0[37113] + temp_v0_6)->unk_210 = temp_v1_29;
                (arg0[37113] + temp_v0_6)->unk_212 = temp_a2_2;
                (arg0[37113] + temp_v0_6)->unk_202 = temp_a2_2;
                temp_a0_28 = arg0[37113] + temp_v0_6;
                temp_v1_30 = temp_a0_28->unk_202 - 0xC;
                temp_a0_28->unk_232 = temp_v1_30;
                (arg0[37113] + temp_v0_6)->unk_222 = temp_v1_30;
                phi_a3_2 = temp_a3_3;
                phi_s1_2 += 0xA;
                phi_s3_3 = temp_s3_3;
            } while ((s32) temp_a3_3 < 8);
            temp_s1_2 = arg0->unk_24508 + 0xE;
            func_8080C228((arg0 + (spAC * 2))->unk_2446C, &spA4, &spA6, &spA8);
            temp_v0_7 = arg0 + spAC;
            temp_t3 = sp98 - 0x18;
            temp_t4 = temp_t3 - 1;
            sp50 = temp_v0_7 + 0x20000;
            phi_t2 = &(&spA4)[*(&D_80814554 + (temp_v0_7->unk_24474 * 2))];
            phi_s1_3 = temp_s1_2;
            phi_s3_4 = (temp_s3_3 + 0x20) & 0xFFFF;
            do {
                temp_v0_8 = phi_s3_4 * 0x10;
                temp_a1_11 = phi_a3_3 * 2;
                temp_t0 = &D_80814628 + temp_a1_11;
                temp_v1_31 = *(&D_80814280 + (*phi_t2 * 2)) + phi_s1_3;
                (arg0[37113] + temp_v0_8)->unk_20 = temp_v1_31;
                temp_a2_3 = &D_80814630 + temp_a1_11;
                temp_a3_4 = phi_a3_3 + 1;
                *(arg0[37113] + temp_v0_8) = temp_v1_31;
                temp_a0_29 = arg0[37113] + temp_v0_8;
                temp_v1_32 = *temp_t0 + temp_a0_29->unk_0;
                temp_a0_29->unk_30 = temp_v1_32;
                temp_s3_4 = (phi_s3_4 + 4) & 0xFFFF;
                (arg0[37113] + temp_v0_8)->unk_10 = temp_v1_32;
                (arg0[37113] + temp_v0_8)->unk_12 = temp_t3;
                (arg0[37113] + temp_v0_8)->unk_2 = temp_t3;
                temp_a0_30 = arg0[37113] + temp_v0_8;
                temp_v1_33 = temp_a0_30->unk_2 - *temp_a2_3;
                temp_a0_30->unk_32 = temp_v1_33;
                (arg0[37113] + temp_v0_8)->unk_22 = temp_v1_33;
                temp_a0_31 = arg0[37113] + temp_v0_8;
                temp_v1_34 = temp_a0_31->unk_0 + 1;
                temp_a0_31->unk_E0 = temp_v1_34;
                (arg0[37113] + temp_v0_8)->unk_C0 = temp_v1_34;
                temp_a0_32 = arg0[37113] + temp_v0_8;
                temp_v1_35 = *temp_t0 + temp_a0_32->unk_C0;
                temp_a0_32->unk_F0 = temp_v1_35;
                (arg0[37113] + temp_v0_8)->unk_D0 = temp_v1_35;
                (arg0[37113] + temp_v0_8)->unk_D2 = temp_t4;
                (arg0[37113] + temp_v0_8)->unk_C2 = temp_t4;
                temp_a0_33 = arg0[37113] + temp_v0_8;
                temp_v1_36 = temp_a0_33->unk_C2 - *temp_a2_3;
                temp_a0_33->unk_F2 = temp_v1_36;
                (arg0[37113] + temp_v0_8)->unk_E2 = temp_v1_36;
                phi_t2 += 2;
                phi_s1_3 += *(&D_80814620 + temp_a1_11);
                phi_s3_4 = temp_s3_4;
                phi_a3_3 = temp_a3_4;
            } while ((s32) temp_a3_4 < 3);
            temp_s1_3 = arg0->unk_24508 + 0x2A;
            func_8080C228((u16) temp_v0_7->unk_24478, &spA4, &spA6, &spA8);
            temp_t2_2 = sp98 - 0x2A;
            temp_t3_2 = temp_t2_2 - 1;
            phi_a3_4 = 1;
            phi_s1_4 = temp_s1_3;
            phi_s3_5 = (temp_s3_4 + 0xC) & 0xFFFF;
            do {
                temp_a1_12 = phi_a3_4 * 2;
                temp_v0_9 = phi_s3_5 * 0x10;
                temp_t0_2 = &D_80814628 + temp_a1_12;
                temp_a2_4 = &D_80814630 + temp_a1_12;
                temp_v1_37 = *(&D_80814280 + ((sp + temp_a1_12)->unk_A4 * 2)) + phi_s1_4;
                (arg0[37113] + temp_v0_9)->unk_20 = temp_v1_37;
                temp_a3_5 = phi_a3_4 + 1;
                *(arg0[37113] + temp_v0_9) = temp_v1_37;
                temp_a0_34 = arg0[37113] + temp_v0_9;
                temp_v1_38 = *temp_t0_2 + temp_a0_34->unk_0;
                temp_a0_34->unk_30 = temp_v1_38;
                temp_s3_5 = (phi_s3_5 + 4) & 0xFFFF;
                (arg0[37113] + temp_v0_9)->unk_10 = temp_v1_38;
                (arg0[37113] + temp_v0_9)->unk_12 = temp_t2_2;
                (arg0[37113] + temp_v0_9)->unk_2 = temp_t2_2;
                temp_a0_35 = arg0[37113] + temp_v0_9;
                temp_v1_39 = temp_a0_35->unk_2 - *temp_a2_4;
                temp_a0_35->unk_32 = temp_v1_39;
                (arg0[37113] + temp_v0_9)->unk_22 = temp_v1_39;
                temp_a0_36 = arg0[37113] + temp_v0_9;
                temp_v1_40 = temp_a0_36->unk_0 + 1;
                temp_a0_36->unk_A0 = temp_v1_40;
                (arg0[37113] + temp_v0_9)->unk_80 = temp_v1_40;
                temp_a0_37 = arg0[37113] + temp_v0_9;
                temp_v1_41 = *temp_t0_2 + temp_a0_37->unk_80;
                temp_a0_37->unk_B0 = temp_v1_41;
                (arg0[37113] + temp_v0_9)->unk_90 = temp_v1_41;
                (arg0[37113] + temp_v0_9)->unk_92 = temp_t3_2;
                (arg0[37113] + temp_v0_9)->unk_82 = temp_t3_2;
                temp_a0_38 = arg0[37113] + temp_v0_9;
                temp_v1_42 = temp_a0_38->unk_82 - *temp_a2_4;
                temp_a0_38->unk_B2 = temp_v1_42;
                (arg0[37113] + temp_v0_9)->unk_A2 = temp_v1_42;
                phi_a3_4 = temp_a3_5;
                phi_s1_4 += *(&D_80814620 + temp_a1_12);
                phi_s3_5 = temp_s3_5;
            } while ((s32) temp_a3_5 < 3);
            phi_s1_5 = arg0->unk_24508 + 0x3F;
            phi_s3_6 = (temp_s3_5 + 8) & 0xFFFF;
            phi_t0_2 = sp98 - 0x10;
            do {
                temp_v0_10 = phi_s3_6 * 0x10;
                (arg0[37113] + temp_v0_10)->unk_20 = phi_s1_5;
                *(arg0[37113] + temp_v0_10) = phi_s1_5;
                temp_s3_6 = (phi_s3_6 + 4) & 0xFFFF;
                temp_a0_39 = arg0[37113] + temp_v0_10;
                temp_v1_43 = temp_a0_39->unk_0 + 0xA;
                temp_a0_39->unk_30 = temp_v1_43;
                (arg0[37113] + temp_v0_10)->unk_10 = temp_v1_43;
                (arg0[37113] + temp_v0_10)->unk_12 = phi_t0_2;
                (arg0[37113] + temp_v0_10)->unk_2 = phi_t0_2;
                temp_a0_40 = arg0[37113] + temp_v0_10;
                temp_v1_44 = temp_a0_40->unk_2 - 0xA;
                temp_a0_40->unk_32 = temp_v1_44;
                (arg0[37113] + temp_v0_10)->unk_22 = temp_v1_44;
                phi_s3_6 = temp_s3_6;
                phi_s3_7 = temp_s3_6;
                phi_s1_8 = phi_s1_5;
                if (phi_a3_5 == 9) {
                    phi_s1_8 = arg0->unk_24508 + 0x36;
                    phi_t0_2 += -8;
                }
                temp_a3_6 = phi_a3_5 + 1;
                phi_s1_5 = phi_s1_8 + 9;
                phi_a3_5 = temp_a3_6;
            } while ((s32) temp_a3_6 < 0x14);
            temp_a2_5 = sp98 - 0x20;
            phi_s1_6 = arg0->unk_24508 + 0x40;
            do {
                temp_v0_11 = phi_s3_7 * 0x10;
                temp_a3_7 = phi_a3_6 + 1;
                (arg0[37113] + temp_v0_11)->unk_20 = phi_s1_6;
                *(arg0[37113] + temp_v0_11) = phi_s1_6;
                temp_a0_41 = arg0[37113] + temp_v0_11;
                temp_s3_7 = (phi_s3_7 + 4) & 0xFFFF;
                temp_v1_45 = temp_a0_41->unk_0 + 0x14;
                temp_a0_41->unk_30 = temp_v1_45;
                (arg0[37113] + temp_v0_11)->unk_10 = temp_v1_45;
                (arg0[37113] + temp_v0_11)->unk_12 = temp_a2_5;
                (arg0[37113] + temp_v0_11)->unk_2 = temp_a2_5;
                temp_a0_42 = arg0[37113] + temp_v0_11;
                temp_v1_46 = temp_a0_42->unk_2 - 0x14;
                temp_a0_42->unk_32 = temp_v1_46;
                (arg0[37113] + temp_v0_11)->unk_22 = temp_v1_46;
                (arg0[37113] + temp_v0_11)->unk_3A = 0x400;
                temp_a0_43 = arg0[37113] + temp_v0_11;
                temp_a1_13 = temp_a0_43->unk_3A;
                temp_a0_43->unk_38 = temp_a1_13;
                (arg0[37113] + temp_v0_11)->unk_2A = temp_a1_13;
                (arg0[37113] + temp_v0_11)->unk_18 = temp_a1_13;
                phi_s1_6 += 0x18;
                phi_s3_7 = temp_s3_7;
                phi_a3_6 = temp_a3_7;
            } while ((s32) temp_a3_7 < 4);
            temp_v0_12 = temp_s3_7 * 0x10;
            temp_v1_47 = arg0->unk_24508 - 1;
            (arg0[37113] + temp_v0_12)->unk_20 = temp_v1_47;
            *(arg0[37113] + temp_v0_12) = temp_v1_47;
            temp_s3_8 = (temp_s3_7 + 4) & 0xFFFF;
            temp_a0_44 = arg0[37113] + temp_v0_12;
            temp_v1_48 = temp_a0_44->unk_0 + 0x10;
            temp_a0_44->unk_30 = temp_v1_48;
            (arg0[37113] + temp_v0_12)->unk_10 = temp_v1_48;
            temp_a1_14 = sp98 - 0x15;
            (arg0[37113] + temp_v0_12)->unk_12 = temp_a1_14;
            (arg0[37113] + temp_v0_12)->unk_2 = temp_a1_14;
            temp_a0_45 = arg0[37113] + temp_v0_12;
            temp_v1_49 = temp_a0_45->unk_2 - 0x10;
            temp_a0_45->unk_32 = temp_v1_49;
            (arg0[37113] + temp_v0_12)->unk_22 = temp_v1_49;
            (arg0[37113] + temp_v0_12)->unk_38 = 0x200;
            temp_a0_46 = arg0[37113] + temp_v0_12;
            temp_a0_46->unk_18 = (s16) temp_a0_46->unk_38;
            (arg0[37113] + temp_v0_12)->unk_3A = 0x200;
            temp_a0_47 = arg0[37113] + temp_v0_12;
            temp_v0_13 = temp_s3_8 * 0x10;
            temp_a0_47->unk_2A = (s16) temp_a0_47->unk_3A;
            temp_s3_9 = (temp_s3_8 + 4) & 0xFFFF;
            temp_v1_50 = arg0->unk_24508 + 0x27;
            (arg0[37113] + temp_v0_13)->unk_20 = temp_v1_50;
            *(arg0[37113] + temp_v0_13) = temp_v1_50;
            temp_a0_48 = arg0[37113] + temp_v0_13;
            temp_v1_51 = temp_a0_48->unk_0 + 0x18;
            temp_a0_48->unk_30 = temp_v1_51;
            (arg0[37113] + temp_v0_13)->unk_10 = temp_v1_51;
            (arg0[37113] + temp_v0_13)->unk_12 = temp_a1_14;
            (arg0[37113] + temp_v0_13)->unk_2 = temp_a1_14;
            temp_a0_49 = arg0[37113] + temp_v0_13;
            temp_v1_52 = temp_a0_49->unk_2 - 0x10;
            temp_a0_49->unk_32 = temp_v1_52;
            (arg0[37113] + temp_v0_13)->unk_22 = temp_v1_52;
            (arg0[37113] + temp_v0_13)->unk_38 = 0x300;
            temp_a0_50 = arg0[37113] + temp_v0_13;
            temp_a0_50->unk_18 = (s16) temp_a0_50->unk_38;
            (arg0[37113] + temp_v0_13)->unk_3A = 0x200;
            temp_a0_51 = arg0[37113] + temp_v0_13;
            temp_v0_14 = temp_s3_9 * 0x10;
            temp_a0_51->unk_2A = (s16) temp_a0_51->unk_3A;
            temp_s3_10 = (temp_s3_9 + 8) & 0xFFFF;
            temp_v1_53 = arg0->unk_24508 - 0xA;
            (arg0[37113] + temp_v0_14)->unk_20 = temp_v1_53;
            *(arg0[37113] + temp_v0_14) = temp_v1_53;
            temp_a0_52 = arg0[37113] + temp_v0_14;
            temp_v1_54 = temp_a0_52->unk_0 + 0x40;
            temp_a0_52->unk_30 = temp_v1_54;
            (arg0[37113] + temp_v0_14)->unk_10 = temp_v1_54;
            temp_a2_6 = sp98 - 0x27;
            (arg0[37113] + temp_v0_14)->unk_12 = temp_a2_6;
            temp_a1_15 = temp_a2_6 - 1;
            (arg0[37113] + temp_v0_14)->unk_2 = temp_a2_6;
            temp_a0_53 = arg0[37113] + temp_v0_14;
            temp_v1_55 = temp_a0_53->unk_2 - 0x10;
            temp_a0_53->unk_32 = temp_v1_55;
            (arg0[37113] + temp_v0_14)->unk_22 = temp_v1_55;
            (arg0[37113] + temp_v0_14)->unk_38 = 0x800;
            temp_a0_54 = arg0[37113] + temp_v0_14;
            temp_a0_54->unk_18 = (s16) temp_a0_54->unk_38;
            (arg0[37113] + temp_v0_14)->unk_3A = 0x200;
            temp_a0_55 = arg0[37113] + temp_v0_14;
            temp_a0_55->unk_2A = (s16) temp_a0_55->unk_3A;
            temp_a0_56 = arg0[37113] + temp_v0_14;
            temp_v1_56 = temp_a0_56->unk_0 + 1;
            temp_a0_56->unk_60 = temp_v1_56;
            (arg0[37113] + temp_v0_14)->unk_40 = temp_v1_56;
            temp_a0_57 = arg0[37113] + temp_v0_14;
            temp_v1_57 = temp_a0_57->unk_40 + 0x40;
            temp_a0_57->unk_70 = temp_v1_57;
            (arg0[37113] + temp_v0_14)->unk_50 = temp_v1_57;
            (arg0[37113] + temp_v0_14)->unk_52 = temp_a1_15;
            (arg0[37113] + temp_v0_14)->unk_42 = temp_a1_15;
            temp_a0_58 = arg0[37113] + temp_v0_14;
            temp_v1_58 = temp_a0_58->unk_42 - 0x10;
            temp_a0_58->unk_72 = temp_v1_58;
            (arg0[37113] + temp_v0_14)->unk_62 = temp_v1_58;
            (arg0[37113] + temp_v0_14)->unk_78 = 0x800;
            temp_a0_59 = arg0[37113] + temp_v0_14;
            temp_a0_59->unk_58 = (s16) temp_a0_59->unk_78;
            (arg0[37113] + temp_v0_14)->unk_7A = 0x200;
            temp_a0_60 = arg0[37113] + temp_v0_14;
            temp_a0_60->unk_6A = (s16) temp_a0_60->unk_7A;
            temp_v0_15 = arg0->unk_24486;
            temp_s1_4 = arg0->unk_24508 + 0xA3;
            if ((temp_v0_15 == 0x10) && (phi_s4_3 == arg0->unk_244A6)) {
                phi_t0_3 = phi_s6->unk_4492 + 0x2C;
            } else {
                if (((temp_v0_15 == 0x11) || (temp_v0_15 == 0x12)) && (phi_t9 = sp9C, (phi_s4_3 == arg0->unk_244A6))) {
                    phi_t6 = phi_s6->unk_449A;
                } else {
                    phi_t6 = phi_s6->unk_4492 + sp9C;
                    phi_t9 = (s32) phi_s6->unk_449A;
                }
                phi_t0_3 = phi_t6 + phi_t9;
            }
            temp_v0_16 = temp_s3_10 * 0x10;
            temp_a1_16 = temp_s1_4 + 0xE;
            (arg0[37113] + temp_v0_16)->unk_20 = temp_a1_16;
            temp_a2_7 = phi_t0_3 - 2;
            temp_t3_3 = phi_t0_3 - 0x2B;
            *(arg0[37113] + temp_v0_16) = temp_a1_16;
            temp_a0_61 = arg0[37113] + temp_v0_16;
            temp_v1_59 = temp_a0_61->unk_0 + 0x18;
            temp_a0_61->unk_30 = temp_v1_59;
            (arg0[37113] + temp_v0_16)->unk_10 = temp_v1_59;
            (arg0[37113] + temp_v0_16)->unk_12 = temp_a2_7;
            (arg0[37113] + temp_v0_16)->unk_2 = temp_a2_7;
            temp_a0_62 = arg0[37113] + temp_v0_16;
            temp_v1_60 = temp_a0_62->unk_2 - 0xC;
            temp_a0_62->unk_32 = temp_v1_60;
            (arg0[37113] + temp_v0_16)->unk_22 = temp_v1_60;
            (arg0[37113] + temp_v0_16)->unk_38 = 0x300;
            temp_a0_63 = arg0[37113] + temp_v0_16;
            temp_a0_63->unk_18 = (s16) temp_a0_63->unk_38;
            (arg0[37113] + temp_v0_16)->unk_3A = 0x180;
            temp_a0_64 = arg0[37113] + temp_v0_16;
            temp_a0_64->unk_2A = (s16) temp_a0_64->unk_3A;
            phi_s3_8 = (temp_s3_10 + 4) & 0xFFFF;
            do {
                temp_v0_17 = phi_s3_8 * 0x10;
                temp_a1_17 = temp_s1_4 + phi_a3_7 + 2;
                (arg0[37113] + temp_v0_17)->unk_20 = temp_a1_17;
                temp_a2_8 = (phi_t0_3 - phi_a3_7) - 0x12;
                *(arg0[37113] + temp_v0_17) = temp_a1_17;
                temp_a3_8 = phi_a3_7 + 1;
                temp_a0_65 = arg0[37113] + temp_v0_17;
                temp_v1_61 = temp_a0_65->unk_0 + 0x30;
                temp_a0_65->unk_30 = temp_v1_61;
                temp_s3_11 = (phi_s3_8 + 4) & 0xFFFF;
                (arg0[37113] + temp_v0_17)->unk_10 = temp_v1_61;
                (arg0[37113] + temp_v0_17)->unk_12 = temp_a2_8;
                (arg0[37113] + temp_v0_17)->unk_2 = temp_a2_8;
                temp_a0_66 = arg0[37113] + temp_v0_17;
                temp_v1_62 = temp_a0_66->unk_2 - 0x18;
                temp_a0_66->unk_32 = temp_v1_62;
                (arg0[37113] + temp_v0_17)->unk_22 = temp_v1_62;
                (arg0[37113] + temp_v0_17)->unk_38 = 0x600;
                temp_a0_67 = arg0[37113] + temp_v0_17;
                temp_a0_67->unk_18 = (s16) temp_a0_67->unk_38;
                (arg0[37113] + temp_v0_17)->unk_3A = 0x300;
                temp_a0_68 = arg0[37113] + temp_v0_17;
                temp_a0_68->unk_2A = (s16) temp_a0_68->unk_3A;
                phi_a3_7 = temp_a3_8;
                phi_s3_8 = temp_s3_11;
                phi_s3_9 = temp_s3_11;
            } while ((s32) temp_a3_8 < 2);
            temp_a2_9 = phi_t0_3 - 0x2A;
            phi_s1_7 = temp_s1_4 + 6;
            do {
                temp_v0_18 = phi_s3_9 * 0x10;
                temp_a1_18 = phi_s1_7 + 1;
                (arg0[37113] + temp_v0_18)->unk_20 = phi_s1_7;
                temp_a3_9 = phi_a3_8 + 1;
                *(arg0[37113] + temp_v0_18) = phi_s1_7;
                temp_a0_69 = arg0[37113] + temp_v0_18;
                temp_s3_12 = (phi_s3_9 + 4) & 0xFFFF;
                temp_v1_63 = temp_a0_69->unk_0 + 0xC;
                temp_a0_69->unk_30 = temp_v1_63;
                (arg0[37113] + temp_v0_18)->unk_10 = temp_v1_63;
                (arg0[37113] + temp_v0_18)->unk_12 = temp_a2_9;
                (arg0[37113] + temp_v0_18)->unk_2 = temp_a2_9;
                temp_a0_70 = arg0[37113] + temp_v0_18;
                temp_v1_64 = temp_a0_70->unk_2 - 0xC;
                temp_a0_70->unk_32 = temp_v1_64;
                (arg0[37113] + temp_v0_18)->unk_22 = temp_v1_64;
                (arg0[37113] + temp_v0_18)->unk_160 = temp_a1_18;
                (arg0[37113] + temp_v0_18)->unk_140 = temp_a1_18;
                temp_a0_71 = arg0[37113] + temp_v0_18;
                temp_v1_65 = temp_a0_71->unk_140 + 0xC;
                temp_a0_71->unk_170 = temp_v1_65;
                (arg0[37113] + temp_v0_18)->unk_150 = temp_v1_65;
                (arg0[37113] + temp_v0_18)->unk_152 = temp_t3_3;
                (arg0[37113] + temp_v0_18)->unk_142 = temp_t3_3;
                temp_a0_72 = arg0[37113] + temp_v0_18;
                temp_v1_66 = temp_a0_72->unk_142 - 0xC;
                temp_a0_72->unk_172 = temp_v1_66;
                (arg0[37113] + temp_v0_18)->unk_162 = temp_v1_66;
                phi_s1_7 += 8;
                phi_s3_9 = temp_s3_12;
                phi_a3_8 = temp_a3_9;
            } while ((s32) temp_a3_9 < 5);
            temp_a0_73 = temp_s3_11 * 0x10;
            temp_v0_19 = arg0[37113] + temp_a0_73;
            temp_v1_67 = temp_v0_19->unk_80 + 3;
            temp_v0_19->unk_A0 = temp_v1_67;
            (arg0[37113] + temp_a0_73)->unk_80 = temp_v1_67;
            temp_v0_20 = arg0[37113] + temp_a0_73;
            temp_v1_68 = temp_v0_20->unk_80 + 0xC;
            temp_v0_20->unk_B0 = temp_v1_68;
            (arg0[37113] + temp_a0_73)->unk_90 = temp_v1_68;
            temp_v0_21 = arg0[37113] + temp_a0_73;
            temp_v1_69 = temp_v0_21->unk_80 + 1;
            temp_v0_21->unk_1E0 = temp_v1_69;
            (arg0[37113] + temp_a0_73)->unk_1C0 = temp_v1_69;
            temp_v0_22 = arg0[37113] + temp_a0_73;
            temp_v1_70 = temp_v0_22->unk_1C0 + 0xC;
            temp_v0_22->unk_1F0 = temp_v1_70;
            (arg0[37113] + temp_a0_73)->unk_1D0 = temp_v1_70;
            phi_s3_12 = (temp_s3_12 + 0x14) & 0xFFFF;
        }
        temp_s4_3 = phi_s4_3 + 1;
        sp9C += -0x10;
        phi_s4_3 = temp_s4_3;
        phi_s3_10 = phi_s3_12;
        phi_s3_11 = phi_s3_12;
    } while ((s32) temp_s4_3 < 3);
    temp_s1_5 = arg0->unk_24508 - 6;
    phi_a1 = -0xC;
    do {
        temp_v0_23 = phi_s3_10 * 0x10;
        (arg0[37113] + temp_v0_23)->unk_20 = temp_s1_5;
        temp_s3_13 = (phi_s3_10 + 4) & 0xFFFF;
        *(arg0[37113] + temp_v0_23) = temp_s1_5;
        temp_s4_4 = phi_s4_4 + 1;
        temp_a0_74 = arg0[37113] + temp_v0_23;
        temp_v1_71 = temp_a0_74->unk_0 + 0x40;
        temp_a0_74->unk_30 = temp_v1_71;
        (arg0[37113] + temp_v0_23)->unk_10 = temp_v1_71;
        temp_v1_72 = (arg0 + (phi_s4_4 * 2))->unk_244A0 + phi_a1;
        (arg0[37113] + temp_v0_23)->unk_12 = temp_v1_72;
        (arg0[37113] + temp_v0_23)->unk_2 = temp_v1_72;
        temp_a0_75 = arg0[37113] + temp_v0_23;
        temp_v1_73 = temp_a0_75->unk_2 - 0x10;
        temp_a0_75->unk_32 = temp_v1_73;
        (arg0[37113] + temp_v0_23)->unk_22 = temp_v1_73;
        (arg0[37113] + temp_v0_23)->unk_38 = 0x800;
        temp_a0_76 = arg0[37113] + temp_v0_23;
        temp_a0_76->unk_18 = (s16) temp_a0_76->unk_38;
        phi_s3_10 = temp_s3_13;
        phi_s4_4 = temp_s4_4;
        phi_a1 += -0x10;
    } while ((s32) temp_s4_4 < 2);
    temp_v0_24 = temp_s3_13 * 0x10;
    (arg0[37113] + temp_v0_24)->unk_20 = temp_s1_5;
    temp_s3_14 = (temp_s3_13 + 4) & 0xFFFF;
    *(arg0[37113] + temp_v0_24) = temp_s1_5;
    temp_a0_77 = arg0[37113] + temp_v0_24;
    temp_v1_74 = temp_a0_77->unk_0 + 0x40;
    temp_a0_77->unk_30 = temp_v1_74;
    (arg0[37113] + temp_v0_24)->unk_10 = temp_v1_74;
    temp_v1_75 = arg0->unk_244A4 - 0x34;
    (arg0[37113] + temp_v0_24)->unk_12 = temp_v1_75;
    (arg0[37113] + temp_v0_24)->unk_2 = temp_v1_75;
    temp_a0_78 = arg0[37113] + temp_v0_24;
    temp_v1_76 = temp_a0_78->unk_2 - 0x10;
    temp_a0_78->unk_32 = temp_v1_76;
    (arg0[37113] + temp_v0_24)->unk_22 = temp_v1_76;
    (arg0[37113] + temp_v0_24)->unk_38 = 0x800;
    temp_a0_79 = arg0[37113] + temp_v0_24;
    temp_a0_79->unk_18 = (s16) temp_a0_79->unk_38;
    temp_a1_19 = arg0->unk_24484;
    if (((temp_a1_19 == 1) && ((s32) arg0->unk_24486 >= 2)) || ((temp_a1_19 == 2) && (arg0->unk_2448C == 3))) {
        if (temp_a1_19 == 1) {
            temp_v0_25 = arg0->unk_24486;
            if ((temp_v0_25 == 4) || (temp_v0_25 == 7) || (temp_v0_25 == 0x16)) {
                phi_s4_5 = *(&D_80814644 + (arg0->unk_24480 * 2));
            } else if ((temp_v0_25 == 0x19) || (temp_v0_25 == 0xC)) {
                phi_s4_5 = *(&D_8081464C + (arg0->unk_24480 * 2));
            } else {
                phi_s4_5 = *(&D_80814638 + (arg0->unk_24480 * 2));
            }
        } else {
            phi_s4_5 = *(&D_80814650 + (arg0->unk_24482 * 2));
        }
        temp_v0_26 = temp_s3_14 * 0x10;
        temp_v1_77 = arg0->unk_24508 - 0xA;
        (arg0[37113] + temp_v0_26)->unk_20 = temp_v1_77;
        *(arg0[37113] + temp_v0_26) = temp_v1_77;
        temp_a0_80 = arg0[37113] + temp_v0_26;
        temp_v1_78 = temp_a0_80->unk_0 + 0x48;
        temp_a0_80->unk_30 = temp_v1_78;
        (arg0[37113] + temp_v0_26)->unk_10 = temp_v1_78;
        temp_a1_20 = arg0[37113];
        temp_v1_79 = (temp_a1_20 + (phi_s4_5 * 0x10))->unk_2 + 4;
        (temp_a1_20 + temp_v0_26)->unk_12 = temp_v1_79;
        (arg0[37113] + temp_v0_26)->unk_2 = temp_v1_79;
        temp_a0_81 = arg0[37113] + temp_v0_26;
        temp_v1_80 = temp_a0_81->unk_2 - 0x18;
        temp_a0_81->unk_32 = temp_v1_80;
        (arg0[37113] + temp_v0_26)->unk_22 = temp_v1_80;
        (arg0[37113] + temp_v0_26)->unk_38 = 0x900;
        temp_a0_82 = arg0[37113] + temp_v0_26;
        temp_a0_82->unk_18 = (s16) temp_a0_82->unk_38;
        (arg0[37113] + temp_v0_26)->unk_3A = 0x300;
        temp_a0_83 = arg0[37113] + temp_v0_26;
        temp_a0_83->unk_2A = (s16) temp_a0_83->unk_3A;
    }
    temp_v0_27 = temp_s3_14 * 0x10;
    temp_v1_81 = arg0->unk_24508 + 0x3A;
    (arg0[37113] + temp_v0_27)->unk_60 = temp_v1_81;
    (arg0[37113] + temp_v0_27)->unk_40 = temp_v1_81;
    temp_a0_84 = arg0[37113] + temp_v0_27;
    temp_v1_82 = temp_a0_84->unk_40 + 0x80;
    temp_a0_84->unk_70 = temp_v1_82;
    (arg0[37113] + temp_v0_27)->unk_50 = temp_v1_82;
    temp_a1_21 = arg0[37113];
    temp_v1_83 = (temp_a1_21 + (*(&D_80814638 + (arg0->unk_244AA * 2)) * 0x10))->unk_2;
    (temp_a1_21 + temp_v0_27)->unk_52 = temp_v1_83;
    (arg0[37113] + temp_v0_27)->unk_42 = temp_v1_83;
    temp_a0_85 = arg0[37113] + temp_v0_27;
    temp_v1_84 = temp_a0_85->unk_42 - 0x10;
    temp_a0_85->unk_72 = temp_v1_84;
    (arg0[37113] + temp_v0_27)->unk_62 = temp_v1_84;
    (arg0[37113] + temp_v0_27)->unk_78 = 0x1000;
    temp_a0_86 = arg0[37113] + temp_v0_27;
    temp_a0_86->unk_58 = (s16) temp_a0_86->unk_78;
}

void func_8080F25C(GraphicsContext **arg0, s16 arg1) {
    s16 sp216;
    s16 sp20C;
    s16 sp20A;
    s16 sp208;
    s16 sp206;
    s16 sp204;
    s16 sp202;
    s16 sp200;
    u16 sp1FC;
    u16 sp1FA;
    u16 sp1F8;
    u8 sp1F7;
    s32 sp54;
    u16 *sp50;
    void *sp4C;
    void *sp48;
    void *sp44;
    void *sp40;
    void *sp3C;
    Gfx *temp_v1;
    Gfx *temp_v1_100;
    Gfx *temp_v1_101;
    Gfx *temp_v1_102;
    Gfx *temp_v1_103;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_2;
    Gfx *temp_v1_30;
    Gfx *temp_v1_31;
    Gfx *temp_v1_32;
    Gfx *temp_v1_33;
    Gfx *temp_v1_34;
    Gfx *temp_v1_35;
    Gfx *temp_v1_36;
    Gfx *temp_v1_37;
    Gfx *temp_v1_38;
    Gfx *temp_v1_39;
    Gfx *temp_v1_3;
    Gfx *temp_v1_40;
    Gfx *temp_v1_41;
    Gfx *temp_v1_42;
    Gfx *temp_v1_43;
    Gfx *temp_v1_44;
    Gfx *temp_v1_45;
    Gfx *temp_v1_46;
    Gfx *temp_v1_47;
    Gfx *temp_v1_48;
    Gfx *temp_v1_49;
    Gfx *temp_v1_4;
    Gfx *temp_v1_50;
    Gfx *temp_v1_51;
    Gfx *temp_v1_52;
    Gfx *temp_v1_53;
    Gfx *temp_v1_54;
    Gfx *temp_v1_55;
    Gfx *temp_v1_56;
    Gfx *temp_v1_57;
    Gfx *temp_v1_58;
    Gfx *temp_v1_59;
    Gfx *temp_v1_5;
    Gfx *temp_v1_60;
    Gfx *temp_v1_61;
    Gfx *temp_v1_62;
    Gfx *temp_v1_63;
    Gfx *temp_v1_64;
    Gfx *temp_v1_65;
    Gfx *temp_v1_66;
    Gfx *temp_v1_67;
    Gfx *temp_v1_68;
    Gfx *temp_v1_69;
    Gfx *temp_v1_6;
    Gfx *temp_v1_70;
    Gfx *temp_v1_71;
    Gfx *temp_v1_72;
    Gfx *temp_v1_73;
    Gfx *temp_v1_74;
    Gfx *temp_v1_75;
    Gfx *temp_v1_76;
    Gfx *temp_v1_77;
    Gfx *temp_v1_78;
    Gfx *temp_v1_79;
    Gfx *temp_v1_7;
    Gfx *temp_v1_80;
    Gfx *temp_v1_81;
    Gfx *temp_v1_82;
    Gfx *temp_v1_83;
    Gfx *temp_v1_84;
    Gfx *temp_v1_85;
    Gfx *temp_v1_86;
    Gfx *temp_v1_87;
    Gfx *temp_v1_88;
    Gfx *temp_v1_89;
    Gfx *temp_v1_8;
    Gfx *temp_v1_90;
    Gfx *temp_v1_91;
    Gfx *temp_v1_92;
    Gfx *temp_v1_93;
    Gfx *temp_v1_94;
    Gfx *temp_v1_97;
    Gfx *temp_v1_98;
    Gfx *temp_v1_99;
    Gfx *temp_v1_9;
    GraphicsContext *temp_s2;
    f32 temp_f6;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s16 temp_s0_5;
    s16 temp_s0_6;
    s16 temp_s0_7;
    s16 temp_s0_8;
    s16 temp_s0_9;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_t1;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1_24;
    s16 temp_v1_95;
    s16 temp_v1_96;
    s32 temp_a1;
    s32 temp_f4;
    s32 temp_hi;
    s32 temp_t6;
    s32 temp_v0_4;
    u16 *temp_a0;
    u16 *temp_a3;
    u16 *temp_a3_2;
    u16 temp_t9;
    u8 temp_t2;
    void *temp_a2;
    void *temp_s4;
    void *temp_s4_2;
    void *temp_s4_3;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;
    s16 phi_s0;
    s16 phi_s1;
    s16 phi_s0_2;
    s16 phi_s1_2;
    s16 phi_a1;
    s16 phi_s0_3;
    s16 phi_s1_3;
    s32 phi_v0;
    s16 phi_s0_4;
    s16 phi_s1_4;
    s32 phi_a2;
    s32 phi_t1;
    s16 phi_s1_5;
    void *phi_t4;
    s16 phi_t3;
    u8 phi_t2;
    s16 phi_t1_2;
    u32 *phi_t0;
    s16 phi_t3_2;
    s16 phi_s1_6;
    s16 phi_s0_5;
    s16 phi_s1_7;
    s16 phi_s0_6;
    s16 phi_s1_8;
    s16 phi_a1_2;
    s32 phi_a0;
    s16 phi_v0_2;
    s16 phi_v1;
    f32 phi_f6;
    s16 phi_v0_3;
    s16 phi_v1_2;
    s16 phi_s0_7;
    s16 phi_s1_9;
    s16 phi_s0_8;
    s16 phi_s1_10;
    s16 phi_s1_11;
    u8 phi_t2_2;

    temp_s2 = arg0->unk_0;
    temp_v1 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xE7000000;
    temp_v1_2 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xFCFF97FF;
    temp_v1_2->words.w1 = 0xFF2DFEFF;
    temp_t6 = arg1 * 2;
    temp_t8 = arg0 + temp_t6;
    sp20C = arg1;
    sp44 = temp_t8 + 0x20000;
    sp54 = temp_t6;
    phi_s0 = 0;
    phi_s1 = 0;
    phi_s0_2 = 0;
    phi_s1_2 = 0;
    phi_a1 = arg1;
    phi_s1_3 = 0;
    phi_s1_7 = 0;
    phi_s1_8 = 0;
    phi_a0 = 0x20000;
    phi_s0_7 = 0;
    phi_s1_9 = 0;
    phi_s0_8 = 0;
    phi_s1_10 = 0;
    phi_s1_11 = 0;
    phi_s1_6 = 0;
    if (temp_t8->unk_244C8 != 0) {
        temp_v1_3 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0x1020040;
        temp_a3 = sp54 + &D_80814654;
        temp_v1_3->words.w1 = (*temp_a3 * 0x10) + arg0[37113] + 0x200;
        temp_v1_4 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFA000000;
        temp_s4 = arg0 + 0x12550;
        temp_v1_4->words.w1 = sp44->unk_44C8 & 0xFF;
        arg1 = arg1;
        sp50 = temp_a3;
        sp40 = arg0 + 0x20000;
        sp4C = arg0 + (arg1 * 8);
        do {
            func_80807940(arg0->unk_0, ((sp4C + phi_s0)->unk_24414 << 7) + temp_s4 + 0x7880, phi_s1);
            temp_s1 = phi_s1 + 4;
            phi_s0 = (s16) (phi_s0 + 1);
            phi_s1 = temp_s1;
        } while ((s32) temp_s1 < 0x20);
        temp_v1_5 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_5[1];
        temp_v1_5->words.w0 = 0x1020040;
        temp_v1_5->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4;
        temp_v1_6 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_6[1];
        temp_v1_6->words.w0 = 0xFA000000;
        temp_v1_6->words.w1 = (sp44->unk_44C8 & 0xFF) | ~0xFF;
        do {
            func_80807940(arg0->unk_0, ((sp4C + phi_s0_2)->unk_24414 << 7) + temp_s4 + 0x7880, phi_s1_2);
            temp_s1_2 = phi_s1_2 + 4;
            phi_s0_2 = (s16) (phi_s0_2 + 1);
            phi_s1_2 = temp_s1_2;
        } while ((s32) temp_s1_2 < 0x20);
        phi_a1 = arg1;
    }
    temp_t8_2 = arg0 + 0x20000;
    sp40 = temp_t8_2;
    temp_s4_2 = arg0 + 0x12550;
    phi_a1_2 = phi_a1;
    phi_a0 = 0x20000;
    if ((phi_a1 == temp_t8_2->unk_448E) || (phi_a1 == temp_t8_2->unk_44A6)) {
        temp_a3_2 = sp54 + &D_80814654;
        if ((arg0 + phi_a1 + 0x20000)->unk_446A != 0) {
            sp20C = phi_a1 + 2;
        }
        temp_v1_7 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_7[1];
        temp_v1_7->words.w1 = 0;
        temp_v1_7->words.w0 = 0xE7000000;
        temp_v1_8 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_8[1];
        temp_v1_8->words.w0 = 0xFC119623;
        temp_v1_8->words.w1 = 0xFF2FFFFF;
        arg1 = phi_a1;
        temp_v1_9 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_9[1];
        temp_v1_9->words.w0 = 0xFA000000;
        temp_a2 = arg0 + sp20C;
        temp_v0 = (temp_a2->unk_24474 * 6) + &D_808146C4;
        temp_v1_9->words.w1 = (sp44->unk_44D4 & 0xFF) | (temp_v0->unk_0 << 0x18) | ((temp_v0->unk_2 & 0xFF) << 0x10) | ((temp_v0->unk_4 & 0xFF) << 8);
        temp_v1_10 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_10[1];
        temp_v1_10->words.w0 = 0xFB000000;
        temp_v0_2 = (temp_a2->unk_24474 * 6) + &D_808146D8;
        temp_v1_10->words.w1 = ((temp_v0_2->unk_4 & 0xFF) << 8) | (temp_v0_2->unk_0 << 0x18) | ((temp_v0_2->unk_2 & 0xFF) << 0x10) | 0xFF;
        temp_v1_11 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_11[1];
        temp_v1_11->words.w0 = 0x1004008;
        temp_v1_11->words.w1 = (*temp_a3_2 * 0x10) + sp40->unk_43E4 + 0xC80;
        temp_v1_12 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_12[1];
        temp_v1_12->words.w0 = 0xFD700000;
        temp_v1_12->words.w1 = (u32) &D_010310F0;
        temp_v1_13 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_13[1];
        temp_v1_13->words.w1 = 0x7000000;
        temp_v1_13->words.w0 = 0xF5700000;
        temp_v1_14 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_14[1];
        temp_v1_14->words.w1 = 0;
        temp_v1_14->words.w0 = 0xE6000000;
        sp50 = temp_a3_2;
        temp_v1_15 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_15[1];
        temp_v1_15->words.w1 = 0x707F400;
        temp_v1_15->words.w0 = 0xF3000000;
        temp_v1_16 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_16[1];
        temp_v1_16->words.w1 = 0;
        temp_v1_16->words.w0 = 0xE7000000;
        temp_v1_17 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_17[1];
        temp_v1_17->words.w1 = 0;
        temp_v1_17->words.w0 = 0xF5680400;
        sp3C = temp_a2 + 0x20000;
        temp_v1_18 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_18[1];
        temp_v1_18->words.w1 = 0x3C03C;
        temp_v1_18->words.w0 = 0xF2000000;
        temp_v1_19 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_19[1];
        temp_v1_19->words.w1 = 0x602;
        temp_v1_19->words.w0 = 0x7000406;
        temp_v1_20 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_20[1];
        temp_v1_20->words.w1 = 0;
        temp_v1_20->words.w0 = 0xE7000000;
        temp_v1_21 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_21[1];
        temp_v1_21->words.w1 = 0xFF2FFFFF;
        temp_v1_21->words.w0 = 0xFC6196C3;
        temp_v1_22 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_22[1];
        temp_v1_22->words.w0 = 0xFA000000;
        temp_v1_22->words.w1 = sp44->unk_44D4 & 0xFF;
        temp_v1_23 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_23[1];
        temp_v1_23->words.w0 = 0x100C018;
        temp_v1_23->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0x4C0;
        temp_v0_3 = arg0 + (sp20C * 2);
        sp48 = temp_v0_3 + 0x20000;
        func_8080C228(temp_v0_3->unk_2446C, &sp1F8, &sp1FA, &sp1FC);
        temp_v0_4 = sp3C->unk_4474 * 2;
        temp_s0 = *(&D_80814554 + temp_v0_4);
        phi_s0_3 = temp_s0;
        phi_v0 = temp_v0_4;
        if ((s32) temp_s0 < 3) {
            do {
                func_80807940(arg0->unk_0, ((sp + (phi_s0_3 * 2))->unk_1F8 << 7) + temp_s4_2 + 0x7880, phi_s1_3);
                temp_s0_2 = phi_s0_3 + 1;
                phi_s0_3 = temp_s0_2;
                phi_s1_3 = (s16) (phi_s1_3 + 4);
            } while ((s32) temp_s0_2 < 3);
            phi_v0 = sp3C->unk_4474 * 2;
        }
        temp_v1_24 = sp48->unk_446C;
        phi_s1_4 = 0;
        phi_s1_11 = 0;
        if (temp_v1_24 == *(gUpgradeCapacities[3] + phi_v0)) {
            temp_v1_25 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v1_25[1];
            temp_v1_25->words.w0 = 0xFA000000;
            temp_v1_25->words.w1 = (sp44->unk_44D4 & 0xFF) | 0x78FF0000;
        } else if (temp_v1_24 != 0) {
            temp_v1_26 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v1_26[1];
            temp_v1_26->words.w0 = 0xFA000000;
            temp_v1_26->words.w1 = (sp44->unk_44D4 & 0xFF) | ~0xFF;
        } else {
            temp_v1_27 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v1_27[1];
            temp_v1_27->words.w0 = 0xFA000000;
            temp_v1_27->words.w1 = (sp44->unk_44D4 & 0xFF) | 0x64646400;
        }
        temp_v1_28 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_28[1];
        temp_v1_28->words.w0 = 0x100C018;
        temp_v1_28->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0x400;
        temp_s0_3 = *(&D_80814554 + (sp3C->unk_4474 * 2));
        phi_s0_4 = temp_s0_3;
        if ((s32) temp_s0_3 < 3) {
            do {
                func_80807940(arg0->unk_0, ((sp + (phi_s0_4 * 2))->unk_1F8 << 7) + temp_s4_2 + 0x7880, phi_s1_4);
                temp_s0_4 = phi_s0_4 + 1;
                phi_s0_4 = temp_s0_4;
                phi_s1_4 = (s16) (phi_s1_4 + 4);
            } while ((s32) temp_s0_4 < 3);
        }
        temp_v1_29 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_29[1];
        temp_v1_29->words.w1 = 0;
        temp_v1_29->words.w0 = 0xE7000000;
        temp_v1_30 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_30[1];
        temp_v1_30->words.w0 = 0xFC309661;
        temp_v1_30->words.w1 = 0x552EFF7F;
        temp_v1_31 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_31[1];
        temp_v1_31->words.w0 = 0xFA000000;
        temp_v1_31->words.w1 = (sp44->unk_44D4 & 0xFF) | 0xFF000000;
        temp_v1_32 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_32[1];
        temp_v1_32->words.w1 = 0xFF;
        temp_v1_32->words.w0 = 0xFB000000;
        temp_v1_33 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_33[1];
        temp_v1_33->words.w0 = 0x1004008;
        temp_v1_33->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0xCC0;
        temp_s2->polyOpa.p = func_8080BE60(temp_s2->polyOpa.p, *(&D_8081467C + (sp3C->unk_447C * 4)), 0x18, 0x10, (s16) 0);
        phi_s1_5 = phi_s1_11;
        phi_t2_2 = 4U;
        phi_s1_6 = phi_s1_11;
        if (sp3C->unk_4454 == 0) {
            phi_a2 = 0;
        } else {
            phi_a2 = 1;
        }
        temp_v1_34 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_34[1];
        temp_v1_34->words.w0 = 0xFA000000;
        temp_a1 = phi_a2 * 6;
        temp_v0_5 = temp_a1 + &D_808146EC;
        temp_v1_34->words.w1 = (sp44->unk_44D4 & 0xFF) | (temp_v0_5->unk_0 << 0x18) | ((temp_v0_5->unk_2 & 0xFF) << 0x10) | ((temp_v0_5->unk_4 & 0xFF) << 8);
        temp_v1_35 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_35[1];
        temp_v0_6 = temp_a1 + &D_808146F8;
        temp_v1_35->words.w0 = 0xFB000000;
        temp_v1_35->words.w1 = ((temp_v0_6->unk_4 & 0xFF) << 8) | (temp_v0_6->unk_0 << 0x18) | ((temp_v0_6->unk_2 & 0xFF) << 0x10) | 0xFF;
        temp_t1 = sp48->unk_443C;
        temp_s0_5 = (s16) ((s32) sp48->unk_4434 / 0x10);
        phi_t1 = (s32) temp_t1;
        if ((s32) temp_t1 < 0x31) {
            phi_t1 = 0x30;
        }
        phi_t3 = 0;
        if ((s32) temp_s0_5 > 0) {
            phi_t4 = (phi_a2 * 0x14) + &D_8081468C;
            do {
                phi_t2 = phi_t2_2;
                phi_t1_2 = (s16) phi_t1;
                if (phi_t1 < 0x10) {
                    phi_t2 = 0U;
                    if (phi_t1 != 0) {
                        temp_t2 = *(&D_808146B4 + phi_t1);
                        phi_t2 = temp_t2;
                        phi_t1_2 = 0;
                        phi_t0 = phi_t4 + (temp_t2 * 4);
                    } else {
                        phi_t0 = phi_t4 + (0U * 4);
                    }
                } else {
                    phi_t1_2 = (s16) (phi_t1 - 0x10);
                    phi_t0 = phi_t4 + (phi_t2_2 * 4);
                }
                temp_v1_36 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_36[1];
                temp_v1_36->words.w0 = 0x1004008;
                temp_v1_36->words.w1 = ((*sp50 + phi_s1_5) * 0x10) + sp40->unk_43E4 + 0x680;
                sp4C = phi_t4;
                sp216 = phi_t3;
                sp1F7 = phi_t2;
                sp20A = phi_t1_2;
                temp_t3 = phi_t3 + 1;
                temp_s2->polyOpa.p = func_8080BE60(temp_s2->polyOpa.p, *phi_t0, 0x10, 0x10, (s16) 0);
                phi_t1 = (s32) phi_t1_2;
                phi_s1_5 = (s16) (phi_s1_5 + 4);
                phi_t3 = temp_t3;
                phi_t2_2 = phi_t2;
            } while ((s32) temp_t3 < (s32) temp_s0_5);
        }
        temp_v1_37 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_37[1];
        temp_v1_37->words.w1 = 0;
        temp_v1_37->words.w0 = 0xE7000000;
        temp_v1_38 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_38[1];
        temp_v1_38->words.w0 = 0xFC119623;
        temp_v1_38->words.w1 = 0xFF2FFFFF;
        temp_v1_39 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_39[1];
        temp_v1_39->words.w0 = 0xFA000000;
        temp_v1_39->words.w1 = (sp44->unk_44D4 & 0xFF) | ~0xFF;
        temp_v1_40 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_40[1];
        temp_v1_40->words.w1 = 0xFF;
        temp_v1_40->words.w0 = 0xFB000000;
        phi_t3_2 = 0;
        do {
            temp_t3_2 = phi_t3_2 + 1;
            phi_t3_2 = temp_t3_2;
            if ((gBitFlags[phi_t3_2] & (arg0 + (sp20C * 4))->unk_24444) != 0) {
                temp_v1_41 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_41[1];
                temp_v1_41->words.w0 = 0x1004008;
                temp_v1_41->words.w1 = ((*sp50 + phi_s1_6) * 0x10) + sp40->unk_43E4 + 0xB80;
                temp_v1_42 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_42[1];
                temp_v1_42->words.w0 = 0xFD180000;
                temp_v1_42->words.w1 = *(&D_8081465C + (phi_t3_2 * 4));
                temp_v1_43 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_43[1];
                temp_v1_43->words.w1 = 0x7000000;
                temp_v1_43->words.w0 = 0xF5180000;
                temp_v1_44 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_44[1];
                temp_v1_44->words.w1 = 0;
                temp_v1_44->words.w0 = 0xE6000000;
                temp_v1_45 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_45[1];
                temp_v1_45->words.w1 = 0x73FF080;
                temp_v1_45->words.w0 = 0xF3000000;
                temp_v1_46 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_46[1];
                temp_v1_46->words.w1 = 0;
                temp_v1_46->words.w0 = 0xE7000000;
                temp_v1_47 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_47[1];
                temp_v1_47->words.w1 = 0;
                temp_v1_47->words.w0 = 0xF5181000;
                temp_v1_48 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_48[1];
                temp_v1_48->words.w1 = 0x7C07C;
                temp_v1_48->words.w0 = 0xF2000000;
                temp_v1_49 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v1_49[1];
                temp_v1_49->words.w1 = 0x602;
                temp_v1_49->words.w0 = 0x7000406;
            }
            phi_s1_6 = (s16) (phi_s1_6 + 4);
        } while ((s32) temp_t3_2 < 4);
        temp_v1_50 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_50[1];
        temp_v1_50->words.w1 = 0;
        temp_v1_50->words.w0 = 0xE7000000;
        temp_v1_51 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_51[1];
        temp_v1_51->words.w0 = 0xFC6196C3;
        temp_v1_51->words.w1 = 0xFF2FFFFF;
        temp_v1_52 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_52[1];
        temp_v1_52->words.w0 = 0xFA000000;
        temp_v1_52->words.w1 = sp44->unk_44D4 & 0xFF;
        temp_v1_53 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_53[1];
        temp_v1_53->words.w0 = 0x1008010;
        temp_v1_53->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0xD00;
        temp_v1_54 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_54[1];
        temp_v1_54->words.w0 = 0xFD900000;
        temp_v1_54->words.w1 = (u32) &D_010308F0;
        temp_v1_55 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_55[1];
        temp_v1_55->words.w1 = 0x7000000;
        temp_v1_55->words.w0 = 0xF5900000;
        temp_v1_56 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_56[1];
        temp_v1_56->words.w1 = 0;
        temp_v1_56->words.w0 = 0xE6000000;
        temp_v1_57 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_57[1];
        temp_v1_57->words.w1 = 0x70FF200;
        temp_v1_57->words.w0 = 0xF3000000;
        temp_v1_58 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_58[1];
        temp_v1_58->words.w1 = 0;
        temp_v1_58->words.w0 = 0xE7000000;
        temp_v1_59 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_59[1];
        temp_v1_59->words.w1 = 0;
        temp_v1_59->words.w0 = 0xF5800800;
        temp_v1_60 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_60[1];
        temp_v1_60->words.w0 = 0xF2000000;
        temp_v1_60->words.w1 = 0xFC03C;
        temp_v1_61 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_61[1];
        temp_v1_61->words.w0 = 0x7080C0E;
        temp_v1_61->words.w1 = 0x80E0A;
        temp_v1_62 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_62[1];
        temp_v1_62->words.w0 = 0xFA000000;
        temp_v1_62->words.w1 = (sp44->unk_44D4 & 0xFF) | ~0xFF;
        temp_v1_63 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_63[1];
        temp_v1_63->words.w1 = 0x602;
        temp_v1_63->words.w0 = 0x7000406;
        temp_v1_64 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_64[1];
        temp_v1_64->words.w1 = 0;
        temp_v1_64->words.w0 = 0xE7000000;
        temp_v1_65 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_65[1];
        temp_v1_65->words.w0 = 0xFA000000;
        temp_v1_65->words.w1 = sp44->unk_44D4 & 0xFF;
        temp_v1_66 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_66[1];
        temp_v1_66->words.w0 = 0x1008010;
        temp_v1_66->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0x600;
        func_8080C228((u16) sp3C->unk_4478, &sp1F8, &sp1FA, &sp1FC);
        phi_s0_5 = 1;
        phi_s0_6 = 1;
        do {
            func_80807940(arg0->unk_0, ((sp + (phi_s0_5 * 2))->unk_1F8 << 7) + temp_s4_2 + 0x7880, phi_s1_7);
            temp_s0_6 = phi_s0_5 + 1;
            phi_s0_5 = temp_s0_6;
            phi_s1_7 = (s16) (phi_s1_7 + 4);
        } while ((s32) temp_s0_6 < 3);
        temp_v1_67 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_67[1];
        temp_v1_67->words.w0 = 0xFA000000;
        temp_v1_67->words.w1 = (sp44->unk_44D4 & 0xFF) | ~0xFF;
        temp_v1_68 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_68[1];
        temp_v1_68->words.w0 = 0x1008010;
        temp_v1_68->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0x580;
        do {
            func_80807940(arg0->unk_0, ((sp + (phi_s0_6 * 2))->unk_1F8 << 7) + temp_s4_2 + 0x7880, phi_s1_8);
            temp_s0_7 = phi_s0_6 + 1;
            phi_s0_6 = temp_s0_7;
            phi_s1_8 = (s16) (phi_s1_8 + 4);
        } while ((s32) temp_s0_7 < 3);
        phi_a1_2 = arg1;
    }
    temp_s4_3 = arg0 + 0x12550;
    if ((arg0 + phi_a1_2 + phi_a0)->unk_446A != 0) {
        temp_a0 = sp54 + &D_80814654;
        sp48 = arg0 + (sp20C * 2) + 0x20000;
        temp_v1_69 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_69[1];
        temp_v1_69->words.w1 = 0;
        temp_v1_69->words.w0 = 0xE7000000;
        temp_v1_70 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_70[1];
        temp_v1_70->words.w0 = 0xFC119623;
        temp_v1_70->words.w1 = 0xFF2FFFFF;
        temp_v1_71 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_71[1];
        temp_v1_71->words.w0 = 0xFA000000;
        temp_v1_71->words.w1 = (sp44->unk_44C8 & 0xFF) | ~0xFF;
        temp_v1_72 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_72[1];
        temp_v1_72->words.w0 = 0x1004008;
        temp_v1_72->words.w1 = (*temp_a0 * 0x10) + sp40->unk_43E4 + 0xD80;
        temp_v1_73 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_73[1];
        temp_v1_73->words.w0 = 0xFD180000;
        temp_v1_73->words.w1 = (u32) &D_0102FCB0;
        temp_v1_74 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_74[1];
        temp_v1_74->words.w1 = 0x7000000;
        temp_v1_74->words.w0 = 0xF5180000;
        temp_v1_75 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_75[1];
        temp_v1_75->words.w1 = 0;
        temp_v1_75->words.w0 = 0xE6000000;
        temp_v1_76 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_76[1];
        temp_v1_76->words.w1 = 0x711F0AB;
        temp_v1_76->words.w0 = 0xF3000000;
        temp_v1_77 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_77[1];
        temp_v1_77->words.w1 = 0;
        temp_v1_77->words.w0 = 0xE7000000;
        temp_v1_78 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_78[1];
        temp_v1_78->words.w1 = 0;
        temp_v1_78->words.w0 = 0xF5180C00;
        temp_v1_79 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_79[1];
        temp_v1_79->words.w0 = 0xF2000000;
        temp_v1_79->words.w1 = 0x5C02C;
        temp_v1_80 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_80[1];
        temp_v1_80->words.w1 = 0x602;
        temp_v1_80->words.w0 = 0x7000406;
        sp50 = temp_a0;
        temp_v1_81 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_81[1];
        temp_v1_81->words.w1 = 0;
        temp_v1_81->words.w0 = 0xE7000000;
        temp_v1_82 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_82[1];
        temp_v1_82->words.w0 = 0xFC119623;
        temp_v1_82->words.w1 = 0xFF2FFFFF;
        temp_v1_83 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_83[1];
        temp_v1_83->words.w0 = 0x1008010;
        temp_v1_83->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0xDC0;
        temp_v1_84 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_84[1];
        temp_v1_84->words.w0 = 0xFA000000;
        temp_v1_84->words.w1 = sp44->unk_44D4 & 0xFF;
        temp_v1_85 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_85[1];
        temp_v1_85->words.w0 = 0xFD900000;
        temp_v1_85->words.w1 = *(&D_8081466C + (sp48->unk_4460 * 4));
        temp_v1_86 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_86[1];
        temp_v1_86->words.w1 = 0x7080200;
        temp_v1_86->words.w0 = 0xF5900000;
        temp_v1_87 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_87[1];
        temp_v1_87->words.w1 = 0;
        temp_v1_87->words.w0 = 0xE6000000;
        temp_v1_88 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_88[1];
        temp_v1_88->words.w1 = 0x711F2AB;
        temp_v1_88->words.w0 = 0xF3000000;
        temp_v1_89 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_89[1];
        temp_v1_89->words.w1 = 0;
        temp_v1_89->words.w0 = 0xE7000000;
        temp_v1_90 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_90[1];
        temp_v1_90->words.w0 = 0xF5800600;
        temp_v1_90->words.w1 = 0x80200;
        temp_v1_91 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_91[1];
        temp_v1_91->words.w0 = 0xF2000000;
        temp_v1_91->words.w1 = 0xBC05C;
        temp_v1_92 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_92[1];
        temp_v1_92->words.w0 = 0x7080C0E;
        temp_v1_92->words.w1 = 0x80E0A;
        temp_v1_93 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_93[1];
        temp_v1_93->words.w0 = 0xFA000000;
        temp_v1_93->words.w1 = (sp44->unk_44D4 & 0xFF) | ~0xFF;
        temp_v1_94 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_94[1];
        temp_v1_94->words.w1 = 0x602;
        temp_v1_94->words.w0 = 0x7000406;
        sp200 = 0;
        temp_f4 = (s32) (((f32) sp48->unk_4458 * 0.021972656f) / 60.0f);
        sp202 = (s16) temp_f4;
        if ((s32) (s16) temp_f4 >= 0xA) {
            phi_v0_2 = (s16) temp_f4;
            phi_v1 = 0;
            do {
                temp_v0_7 = phi_v0_2 - 0xA;
                temp_v1_95 = phi_v1 + 1;
                phi_v0_2 = temp_v0_7;
                phi_v1 = temp_v1_95;
            } while ((s32) temp_v0_7 >= 0xA);
            sp200 = temp_v1_95;
            sp202 = temp_v0_7;
        }
        sp206 = 0;
        temp_t9 = sp48->unk_4458;
        temp_f6 = (f32) temp_t9;
        phi_f6 = temp_f6;
        if ((s32) temp_t9 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_hi = (s32) (phi_f6 * 0.021972656f) % 0x3C;
        sp208 = (s16) temp_hi;
        phi_v1_2 = 0;
        if ((s32) (s16) temp_hi >= 0xA) {
            phi_v0_3 = (s16) temp_hi;
            do {
                temp_v0_8 = phi_v0_3 - 0xA;
                temp_v1_96 = phi_v1_2 + 1;
                phi_v0_3 = temp_v0_8;
                phi_v1_2 = temp_v1_96;
            } while ((s32) temp_v0_8 >= 0xA);
            sp206 = temp_v1_96;
            sp208 = temp_v0_8;
        }
        sp204 = 0x41;
        temp_v1_97 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_97[1];
        temp_v1_97->words.w1 = 0;
        temp_v1_97->words.w0 = 0xE7000000;
        temp_v1_98 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_98[1];
        temp_v1_98->words.w0 = 0xFC6196C3;
        temp_v1_98->words.w1 = 0xFF2FFFFF;
        temp_v1_99 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_99[1];
        temp_v1_99->words.w0 = 0xFA000000;
        temp_v1_99->words.w1 = sp44->unk_44D4 & 0xFF;
        temp_v1_100 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_100[1];
        temp_v1_100->words.w0 = 0x1014028;
        temp_v1_100->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0xF80;
        do {
            func_80807940(arg0->unk_0, ((sp + (phi_s0_7 * 2))->unk_200 << 7) + temp_s4_3 + 0x7880, phi_s1_9);
            temp_s0_8 = phi_s0_7 + 1;
            phi_s0_7 = temp_s0_8;
            phi_s1_9 = (s16) (phi_s1_9 + 4);
        } while ((s32) temp_s0_8 < 5);
        temp_v1_101 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_101[1];
        temp_v1_101->words.w0 = 0xFA000000;
        temp_v1_101->words.w1 = (sp44->unk_44D4 & 0xFF) | ~0xFF;
        temp_v1_102 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v1_102[1];
        temp_v1_102->words.w0 = 0x1014028;
        temp_v1_102->words.w1 = (*sp50 * 0x10) + sp40->unk_43E4 + 0xE40;
        do {
            func_80807940(arg0->unk_0, ((sp + (phi_s0_8 * 2))->unk_200 << 7) + temp_s4_3 + 0x7880, phi_s1_10);
            temp_s0_9 = phi_s0_8 + 1;
            phi_s0_8 = temp_s0_9;
            phi_s1_10 = (s16) (phi_s1_10 + 4);
        } while ((s32) temp_s0_9 < 5);
    }
    temp_v1_103 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = &temp_v1_103[1];
    temp_v1_103->words.w1 = 0;
    temp_v1_103->words.w0 = 0xE7000000;
}

void func_808108DC(GraphicsContext **arg0) {
    GraphicsContext *sp270;
    void *sp40;
    GraphicsContext *temp_t1;
    s16 *temp_a3;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s6;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t2_3;
    s16 temp_t2_4;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    void *temp_a2;
    void *temp_a2_100;
    void *temp_a2_101;
    void *temp_a2_102;
    void *temp_a2_103;
    void *temp_a2_104;
    void *temp_a2_105;
    void *temp_a2_106;
    void *temp_a2_107;
    void *temp_a2_108;
    void *temp_a2_109;
    void *temp_a2_10;
    void *temp_a2_110;
    void *temp_a2_111;
    void *temp_a2_112;
    void *temp_a2_113;
    void *temp_a2_114;
    void *temp_a2_115;
    void *temp_a2_116;
    void *temp_a2_117;
    void *temp_a2_118;
    void *temp_a2_119;
    void *temp_a2_11;
    void *temp_a2_120;
    void *temp_a2_121;
    void *temp_a2_122;
    void *temp_a2_123;
    void *temp_a2_124;
    void *temp_a2_125;
    void *temp_a2_126;
    void *temp_a2_127;
    void *temp_a2_128;
    void *temp_a2_129;
    void *temp_a2_12;
    void *temp_a2_130;
    void *temp_a2_131;
    void *temp_a2_132;
    void *temp_a2_13;
    void *temp_a2_14;
    void *temp_a2_15;
    void *temp_a2_16;
    void *temp_a2_17;
    void *temp_a2_18;
    void *temp_a2_19;
    void *temp_a2_20;
    void *temp_a2_21;
    void *temp_a2_22;
    void *temp_a2_23;
    void *temp_a2_24;
    void *temp_a2_25;
    void *temp_a2_26;
    void *temp_a2_27;
    void *temp_a2_28;
    void *temp_a2_29;
    void *temp_a2_2;
    void *temp_a2_30;
    void *temp_a2_31;
    void *temp_a2_32;
    void *temp_a2_33;
    void *temp_a2_34;
    void *temp_a2_35;
    void *temp_a2_36;
    void *temp_a2_37;
    void *temp_a2_38;
    void *temp_a2_39;
    void *temp_a2_3;
    void *temp_a2_40;
    void *temp_a2_41;
    void *temp_a2_42;
    void *temp_a2_43;
    void *temp_a2_44;
    void *temp_a2_45;
    void *temp_a2_46;
    void *temp_a2_47;
    void *temp_a2_48;
    void *temp_a2_49;
    void *temp_a2_4;
    void *temp_a2_50;
    void *temp_a2_51;
    void *temp_a2_52;
    void *temp_a2_53;
    void *temp_a2_54;
    void *temp_a2_55;
    void *temp_a2_56;
    void *temp_a2_57;
    void *temp_a2_58;
    void *temp_a2_59;
    void *temp_a2_5;
    void *temp_a2_60;
    void *temp_a2_61;
    void *temp_a2_62;
    void *temp_a2_63;
    void *temp_a2_64;
    void *temp_a2_65;
    void *temp_a2_66;
    void *temp_a2_67;
    void *temp_a2_68;
    void *temp_a2_69;
    void *temp_a2_6;
    void *temp_a2_70;
    void *temp_a2_71;
    void *temp_a2_72;
    void *temp_a2_73;
    void *temp_a2_74;
    void *temp_a2_75;
    void *temp_a2_76;
    void *temp_a2_77;
    void *temp_a2_78;
    void *temp_a2_79;
    void *temp_a2_7;
    void *temp_a2_80;
    void *temp_a2_81;
    void *temp_a2_82;
    void *temp_a2_83;
    void *temp_a2_84;
    void *temp_a2_85;
    void *temp_a2_86;
    void *temp_a2_87;
    void *temp_a2_88;
    void *temp_a2_89;
    void *temp_a2_8;
    void *temp_a2_90;
    void *temp_a2_91;
    void *temp_a2_92;
    void *temp_a2_93;
    void *temp_a2_94;
    void *temp_a2_95;
    void *temp_a2_96;
    void *temp_a2_97;
    void *temp_a2_98;
    void *temp_a2_99;
    void *temp_a2_9;
    void *temp_t6;
    void *temp_t8;
    s32 phi_s0;
    s16 phi_s6;
    s32 phi_t2;
    s32 phi_a1;
    s32 phi_v1;
    s32 phi_a0;
    s16 phi_t3;
    s32 phi_t2_2;
    s16 phi_s6_2;
    GraphicsContext *phi_t1;
    s16 phi_s0_2;
    s16 phi_t2_3;
    s16 phi_t3_2;
    s16 phi_t2_4;
    s16 phi_t3_3;

    temp_t1 = arg0->unk_0;
    temp_a2 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2 + 8;
    temp_a2->words.w1 = 0;
    temp_a2->words.w0 = 0xE7000000;
    temp_a2_2 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_2 + 8;
    temp_a2_2->words.w1 = 0x552EFF7F;
    temp_a2_2->words.w0 = 0xFC309661;
    temp_a2_3 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_3 + 8;
    temp_a2_3->words.w0 = 0xFA000000;
    temp_a2_3->words.w1 = (arg0->unk_244B6 & 0xFF) | ~0xFF;
    temp_a2_4 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_4 + 8;
    temp_a2_4->words.w1 = 0;
    temp_a2_4->words.w0 = 0xFB000000;
    temp_a2_5 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_5 + 8;
    temp_a2_5->words.w0 = 0x1004008;
    temp_a2_5->words.w1 = arg0[37113];
    temp_a2_6 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_6 + 8;
    temp_a2_6->words.w0 = 0xFD700000;
    temp_a2_6->words.w1 = *(&D_80814720 + (arg0->unk_244AC * 4));
    temp_a2_7 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_7 + 8;
    temp_a2_7->words.w1 = 0x7000000;
    temp_a2_7->words.w0 = 0xF5700000;
    temp_a2_8 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_8 + 8;
    temp_a2_8->words.w1 = 0;
    temp_a2_8->words.w0 = 0xE6000000;
    temp_a2_9 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_9 + 8;
    temp_a2_9->words.w1 = 0x73FF080;
    temp_a2_9->words.w0 = 0xF3000000;
    temp_a2_10 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_10 + 8;
    temp_a2_10->words.w1 = 0;
    temp_a2_10->words.w0 = 0xE7000000;
    temp_a2_11 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_11 + 8;
    temp_a2_11->words.w1 = 0;
    temp_a2_11->words.w0 = 0xF5682000;
    temp_a2_12 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_12 + 8;
    temp_a2_12->words.w0 = 0xF2000000;
    temp_a2_12->words.w1 = 0x1FC03C;
    sp40 = arg0 + 0x20000;
    temp_a2_13 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_13 + 8;
    temp_a2_13->words.w1 = 0x602;
    temp_a2_13->words.w0 = 0x7000406;
    temp_a2_14 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_14 + 8;
    temp_a2_14->words.w1 = 0;
    temp_a2_14->words.w0 = 0xE7000000;
    temp_a2_15 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_15 + 8;
    temp_a2_15->words.w0 = 0xFA000000;
    temp_a2_15->words.w1 = (arg0->unk_244B8 & 0xFF) | ~0xFF;
    temp_a2_16 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_16 + 8;
    temp_a2_16->words.w0 = 0xFD700000;
    temp_a2_16->words.w1 = *(&D_80814720 + (arg0->unk_244AE * 4));
    temp_a2_17 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_17 + 8;
    temp_a2_17->words.w1 = 0x7000000;
    temp_a2_17->words.w0 = 0xF5700000;
    temp_a2_18 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_18 + 8;
    temp_a2_18->words.w1 = 0;
    temp_a2_18->words.w0 = 0xE6000000;
    temp_a2_19 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_19 + 8;
    temp_a2_19->words.w1 = 0x73FF080;
    temp_a2_19->words.w0 = 0xF3000000;
    temp_a2_20 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_20 + 8;
    temp_a2_20->words.w1 = 0;
    temp_a2_20->words.w0 = 0xE7000000;
    temp_a2_21 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_21 + 8;
    temp_a2_21->words.w1 = 0;
    temp_a2_21->words.w0 = 0xF5682000;
    temp_a2_22 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_22 + 8;
    temp_a2_22->words.w0 = 0xF2000000;
    temp_a2_22->words.w1 = 0x1FC03C;
    temp_a2_23 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_23 + 8;
    temp_a2_23->words.w1 = 0x602;
    temp_a2_23->words.w0 = 0x7000406;
    temp_a2_24 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_24 + 8;
    temp_a2_24->words.w1 = 0;
    temp_a2_24->words.w0 = 0xE7000000;
    phi_s0 = 0;
    phi_s6 = 4;
    phi_t1 = temp_t1;
    phi_s0_2 = (s16) 0;
    do {
        if (phi_s0 < 2) {
            temp_a2_25 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_25 + 8;
            temp_a2_25->words.w1 = 0;
            temp_a2_25->words.w0 = 0xE7000000;
            temp_a2_26 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_26 + 8;
            temp_a2_26->words.w0 = 0xFA000000;
            temp_a2_26->words.w1 = ((arg0 + (phi_s0 * 2))->unk_244D4 & 0xFF) | (sp40->unk_44B0 << 0x18) | ((sp40->unk_44B2 & 0xFF) << 0x10) | ((sp40->unk_44B4 & 0xFF) << 8);
            temp_a2_27 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_27 + 8;
            temp_a2_27->words.w0 = 0x101C038;
            temp_a2_27->words.w1 = sp40->unk_43E4 + (phi_s6 * 0x10);
            phi_t2 = 0;
            phi_t3 = 0;
            do {
                if ((phi_t2 < 5) || (((arg0 + phi_s0)->unk_2446A != 0) && (phi_t2 >= 5))) {
                    temp_a2_28 = temp_t1->polyOpa.p;
                    temp_t1->polyOpa.p = temp_a2_28 + 8;
                    temp_a2_28->words.w0 = 0xFD700000;
                    temp_a2_28->words.w1 = *(&D_80814704 + (phi_t2 * 4));
                    temp_a2_29 = temp_t1->polyOpa.p;
                    temp_t1->polyOpa.p = temp_a2_29 + 8;
                    temp_a2_29->words.w1 = 0x7000000;
                    temp_a2_29->words.w0 = 0xF5700000;
                    temp_a2_30 = temp_t1->polyOpa.p;
                    temp_t1->polyOpa.p = temp_a2_30 + 8;
                    temp_a2_30->words.w1 = 0;
                    temp_a2_30->words.w0 = 0xE6000000;
                    temp_a2_31 = temp_t1->polyOpa.p;
                    temp_a3 = &D_80814538 + (phi_t2 * 2);
                    temp_t1->polyOpa.p = temp_a2_31 + 8;
                    temp_a2_31->words.w0 = 0xF3000000;
                    temp_v1 = *temp_a3;
                    temp_v0 = (temp_v1 * 0x38) - 1;
                    phi_a0 = 0x7FF;
                    if (temp_v0 < 0x7FF) {
                        phi_a0 = temp_v0;
                    }
                    temp_v0_2 = (s32) (temp_v1 * 2) / 8;
                    phi_a1 = temp_v0_2;
                    if (temp_v0_2 <= 0) {
                        phi_a1 = 1;
                    }
                    if (temp_v0_2 <= 0) {
                        phi_v1 = 1;
                    } else {
                        phi_v1 = temp_v0_2;
                    }
                    temp_a2_31->words.w1 = (((s32) (phi_a1 + 0x7FF) / phi_v1) & 0xFFF) | 0x7000000U | ((phi_a0 & 0xFFF) << 0xC);
                    temp_a2_32 = temp_t1->polyOpa.p;
                    temp_v1_2 = phi_t3 * 2;
                    temp_t1->polyOpa.p = temp_a2_32 + 8;
                    temp_a2_32->words.w1 = 0;
                    temp_a2_32->words.w0 = 0xE7000000;
                    temp_a2_33 = temp_t1->polyOpa.p;
                    temp_a1 = (temp_v1_2 + 6) & 0xFF;
                    temp_t1->polyOpa.p = temp_a2_33 + 8;
                    temp_a0 = (temp_v1_2 & 0xFF) << 0x10;
                    temp_a2_33->words.w1 = 0;
                    temp_a2_33->words.w0 = ((((s32) ((*temp_a3 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5700000U;
                    temp_a2_34 = temp_t1->polyOpa.p;
                    temp_t1->polyOpa.p = temp_a2_34 + 8;
                    temp_a2_34->words.w0 = 0xF2000000;
                    temp_a2_34->words.w1 = ((((*temp_a3 - 1) * 4) & 0xFFF) << 0xC) | 0xDC;
                    temp_a2_35 = temp_t1->polyOpa.p;
                    temp_t1->polyOpa.p = temp_a2_35 + 8;
                    temp_a2_35->words.w0 = temp_a0 | (((temp_v1_2 + 4) & 0xFF) << 8) | temp_a1 | 0x7000000U;
                    temp_a2_35->words.w1 = temp_a0 | (temp_a1 << 8) | ((temp_v1_2 + 2) & 0xFF);
                }
                temp_t2 = phi_t2 + 1;
                phi_t2 = (s32) temp_t2;
                phi_t3 = (s16) (phi_t3 + 4);
            } while ((s32) temp_t2 < 7);
        }
        temp_s0 = phi_s0 + 1;
        temp_s6 = phi_s6 + 0x1C;
        phi_s0 = (s32) temp_s0;
        phi_s6 = temp_s6;
        phi_s6_2 = temp_s6;
    } while ((s32) temp_s0 < 3);
    temp_a2_36 = temp_t1->polyOpa.p;
    temp_t1->polyOpa.p = temp_a2_36 + 8;
    temp_a2_36->words.w1 = 0;
    temp_a2_36->words.w0 = 0xE7000000;
    phi_t2_2 = 0;
    phi_t2_3 = (s16) 0;
    phi_t2_4 = (s16) 0;
    do {
        if (phi_t2_2 < 2) {
            temp_a2_37 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_37 + 8;
            temp_a2_37->words.w0 = 0x1010020;
            temp_a2_37->words.w1 = sp40->unk_43E4 + (phi_s6_2 * 0x10);
            temp_a2_38 = temp_t1->polyOpa.p;
            temp_t6 = arg0 + (phi_t2_2 * 2);
            temp_t1->polyOpa.p = temp_a2_38 + 8;
            temp_a2_38->words.w0 = 0xFA000000;
            temp_a2_38->words.w1 = (temp_t6->unk_244BC & 0xFF) | (D_80814548.unk_0 << 0x18) | ((D_80814548.unk_2 & 0xFF) << 0x10) | ((D_80814548.unk_4 & 0xFF) << 8);
            temp_a2_39 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_39 + 8;
            temp_a2_39->words.w0 = 0xFD700000;
            temp_a2_39->words.w1 = *(&D_80814758 + (phi_t2_2 * 4));
            temp_a2_40 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_40 + 8;
            temp_a2_40->words.w1 = 0x7000000;
            temp_a2_40->words.w0 = 0xF5700000;
            temp_a2_41 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_41 + 8;
            temp_a2_41->words.w1 = 0;
            temp_a2_41->words.w0 = 0xE6000000;
            temp_a2_42 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_42 + 8;
            temp_a2_42->words.w1 = 0x73FF080;
            temp_a2_42->words.w0 = 0xF3000000;
            temp_a2_43 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_43 + 8;
            temp_a2_43->words.w1 = 0;
            temp_a2_43->words.w0 = 0xE7000000;
            temp_a2_44 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_44 + 8;
            temp_a2_44->words.w1 = 0;
            temp_a2_44->words.w0 = 0xF5702000;
            temp_a2_45 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_45 + 8;
            temp_a2_45->words.w1 = 0xFC03C;
            temp_a2_45->words.w0 = 0xF2000000;
            temp_a2_46 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_46 + 8;
            temp_a2_46->words.w1 = 0x602;
            temp_a2_46->words.w0 = 0x7000406;
            temp_a2_47 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_47 + 8;
            temp_a2_47->words.w0 = 0xFA000000;
            temp_a2_47->words.w1 = (temp_t6->unk_244C2 & 0xFF) | (D_80814548.unk_0 << 0x18) | ((D_80814548.unk_2 & 0xFF) << 0x10) | ((D_80814548.unk_4 & 0xFF) << 8);
            temp_a2_48 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_48 + 8;
            temp_a2_48->words.w1 = &D_010220B0;
            temp_a2_48->words.w0 = 0xFD700000;
            temp_a2_49 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_49 + 8;
            temp_a2_49->words.w1 = 0x7000000;
            temp_a2_49->words.w0 = 0xF5700000;
            temp_a2_50 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_50 + 8;
            temp_a2_50->words.w1 = 0;
            temp_a2_50->words.w0 = 0xE6000000;
            temp_a2_51 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_51 + 8;
            temp_a2_51->words.w1 = 0x76BF04C;
            temp_a2_51->words.w0 = 0xF3000000;
            temp_a2_52 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_52 + 8;
            temp_a2_52->words.w1 = 0;
            temp_a2_52->words.w0 = 0xE7000000;
            temp_a2_53 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_53 + 8;
            temp_a2_53->words.w1 = 0;
            temp_a2_53->words.w0 = 0xF5703600;
            temp_a2_54 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_54 + 8;
            temp_a2_54->words.w1 = 0x1AC03C;
            temp_a2_54->words.w0 = 0xF2000000;
            temp_a2_55 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_55 + 8;
            temp_a2_55->words.w0 = 0x7080C0E;
            temp_a2_55->words.w1 = 0x80E0A;
            temp_a2_56 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_56 + 8;
            temp_a2_56->words.w0 = 0xFA000000;
            temp_a2_56->words.w1 = (temp_t6->unk_244CE & 0xFF) | (D_80814548.unk_0 << 0x18) | ((D_80814548.unk_2 & 0xFF) << 0x10) | ((D_80814548.unk_4 & 0xFF) << 8);
            temp_a2_57 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_57 + 8;
            temp_a2_57->words.w1 = &D_01002800;
            temp_a2_57->words.w0 = 0xFD700000;
            temp_a2_58 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_58 + 8;
            temp_a2_58->words.w1 = 0x7000000;
            temp_a2_58->words.w0 = 0xF5700000;
            temp_a2_59 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_59 + 8;
            temp_a2_59->words.w1 = 0;
            temp_a2_59->words.w0 = 0xE6000000;
            temp_a2_60 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_60 + 8;
            temp_a2_60->words.w1 = 0x70BF2AB;
            temp_a2_60->words.w0 = 0xF3000000;
            temp_a2_61 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_61 + 8;
            temp_a2_61->words.w1 = 0;
            temp_a2_61->words.w0 = 0xE7000000;
            temp_a2_62 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_62 + 8;
            temp_a2_62->words.w1 = 0;
            temp_a2_62->words.w0 = 0xF5680600;
            temp_a2_63 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_63 + 8;
            temp_a2_63->words.w0 = 0xF2000000;
            temp_a2_63->words.w1 = 0x5C03C;
            temp_a2_64 = temp_t1->polyOpa.p;
            temp_t1->polyOpa.p = temp_a2_64 + 8;
            temp_a2_64->words.w0 = 0x7101416;
            temp_a2_64->words.w1 = 0x101612;
            if ((arg0 + phi_t2_2)->unk_2446A != 0) {
                temp_a2_65 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_65 + 8;
                temp_a2_65->words.w0 = 0xFA000000;
                temp_a2_65->words.w1 = (temp_t6->unk_244C2 & 0xFF) | (D_80814548.unk_0 << 0x18) | ((D_80814548.unk_2 & 0xFF) << 0x10) | ((D_80814548.unk_4 & 0xFF) << 8);
                temp_a2_66 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_66 + 8;
                temp_a2_66->words.w1 = &D_0102A030;
                temp_a2_66->words.w0 = 0xFD700000;
                temp_a2_67 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_67 + 8;
                temp_a2_67->words.w1 = 0x7000000;
                temp_a2_67->words.w0 = 0xF5700000;
                temp_a2_68 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_68 + 8;
                temp_a2_68->words.w1 = 0;
                temp_a2_68->words.w0 = 0xE6000000;
                temp_a2_69 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_69 + 8;
                temp_a2_69->words.w1 = 0x733F09E;
                temp_a2_69->words.w0 = 0xF3000000;
                temp_a2_70 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_70 + 8;
                temp_a2_70->words.w1 = 0;
                temp_a2_70->words.w0 = 0xE7000000;
                temp_a2_71 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_71 + 8;
                temp_a2_71->words.w1 = 0;
                temp_a2_71->words.w0 = 0xF5701A00;
                temp_a2_72 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_72 + 8;
                temp_a2_72->words.w0 = 0xF2000000;
                temp_a2_72->words.w1 = 0xCC03C;
                temp_a2_73 = temp_t1->polyOpa.p;
                temp_t1->polyOpa.p = temp_a2_73 + 8;
                temp_a2_73->words.w0 = 0x7181C1E;
                temp_a2_73->words.w1 = 0x181E1A;
            }
        }
        temp_t2_2 = phi_t2_2 + 1;
        phi_t2_2 = (s32) temp_t2_2;
        phi_s6_2 = (s16) (phi_s6_2 + 0x10);
    } while ((s32) temp_t2_2 < 3);
    do {
        sp270 = phi_t1;
        func_8080F25C(arg0, phi_s0_2);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_2;
    } while ((s32) temp_s0_2 < 2);
    temp_a2_74 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_74 + 8;
    temp_a2_74->words.w1 = 0;
    temp_a2_74->words.w0 = 0xE7000000;
    temp_a2_75 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_75 + 8;
    temp_a2_75->words.w1 = 0x552EFF7F;
    temp_a2_75->words.w0 = 0xFC309661;
    temp_a2_76 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_76 + 8;
    temp_a2_76->words.w1 = 0;
    temp_a2_76->words.w0 = 0xFB000000;
    temp_a2_77 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_77 + 8;
    temp_a2_77->words.w0 = 0x1014028;
    temp_a2_77->words.w1 = sp40->unk_43E4 + 0x3AC0;
    phi_t3_2 = 0;
    phi_t3_3 = 0;
    do {
        temp_a2_78 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_78 + 8;
        temp_a2_78->words.w1 = 0;
        temp_a2_78->words.w0 = 0xE7000000;
        temp_a2_79 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_79 + 8;
        temp_a2_79->words.w0 = 0xFA000000;
        temp_v1_3 = phi_t3_2 * 2;
        temp_a2_79->words.w1 = ((arg0 + (phi_t2_3 * 2))->unk_244DA & 0xFF) | (sp40->unk_44B0 << 0x18) | ((sp40->unk_44B2 & 0xFF) << 0x10) | ((sp40->unk_44B4 & 0xFF) << 8);
        temp_a2_80 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_80 + 8;
        temp_a2_80->words.w0 = 0xFD700000;
        temp_a0_2 = (temp_v1_3 & 0xFF) << 0x10;
        temp_a2_80->words.w1 = *(&D_80814764 + (phi_t2_3 * 4));
        temp_a2_81 = phi_t1->polyOpa.p;
        temp_a1_2 = (temp_v1_3 + 6) & 0xFF;
        phi_t1->polyOpa.p = temp_a2_81 + 8;
        temp_a2_81->words.w1 = 0x7000000;
        temp_a2_81->words.w0 = 0xF5700000;
        temp_a2_82 = phi_t1->polyOpa.p;
        temp_t2_3 = phi_t2_3 + 1;
        phi_t1->polyOpa.p = temp_a2_82 + 8;
        temp_a2_82->words.w1 = 0;
        temp_a2_82->words.w0 = 0xE6000000;
        temp_a2_83 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_83 + 8;
        temp_a2_83->words.w1 = 0x73FF080;
        temp_a2_83->words.w0 = 0xF3000000;
        temp_a2_84 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_84 + 8;
        temp_a2_84->words.w1 = 0;
        temp_a2_84->words.w0 = 0xE7000000;
        temp_a2_85 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_85 + 8;
        temp_a2_85->words.w1 = 0;
        temp_a2_85->words.w0 = 0xF5702000;
        temp_a2_86 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_86 + 8;
        temp_a2_86->words.w1 = 0xFC03C;
        temp_a2_86->words.w0 = 0xF2000000;
        temp_a2_87 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_87 + 8;
        temp_a2_87->words.w0 = temp_a0_2 | (((temp_v1_3 + 4) & 0xFF) << 8) | temp_a1_2 | 0x7000000U;
        temp_a2_87->words.w1 = temp_a0_2 | (temp_a1_2 << 8) | ((temp_v1_3 + 2) & 0xFF);
        phi_t2_3 = temp_t2_3;
        phi_t3_2 = (s16) (phi_t3_2 + 4);
    } while ((s32) temp_t2_3 < 2);
    temp_a2_88 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_88 + 8;
    temp_a2_88->words.w1 = 0;
    temp_a2_88->words.w0 = 0xE7000000;
    do {
        temp_t8 = arg0 + (phi_t2_4 * 2);
        temp_a2_89 = phi_t1->polyOpa.p;
        temp_t2_4 = phi_t2_4 + 1;
        phi_t1->polyOpa.p = temp_a2_89 + 8;
        temp_a2_89->words.w0 = 0xFA000000;
        temp_v1_4 = phi_t3_3 * 2;
        temp_a2_89->words.w1 = (temp_t8->unk_244DE & 0xFF) | (sp40->unk_44B0 << 0x18) | ((sp40->unk_44B2 & 0xFF) << 0x10) | ((sp40->unk_44B4 & 0xFF) << 8);
        temp_a2_90 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_90 + 8;
        temp_a2_90->words.w0 = 0xFD700000;
        temp_a0_3 = (temp_v1_4 & 0xFF) << 0x10;
        temp_a2_90->words.w1 = *(&D_80814764 + (temp_t8->unk_244F6 * 4));
        temp_a2_91 = phi_t1->polyOpa.p;
        temp_a1_3 = (temp_v1_4 + 6) & 0xFF;
        phi_t1->polyOpa.p = temp_a2_91 + 8;
        temp_a2_91->words.w1 = 0x7000000;
        temp_a2_91->words.w0 = 0xF5700000;
        temp_a2_92 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_92 + 8;
        temp_a2_92->words.w1 = 0;
        temp_a2_92->words.w0 = 0xE6000000;
        temp_a2_93 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_93 + 8;
        temp_a2_93->words.w1 = 0x73FF080;
        temp_a2_93->words.w0 = 0xF3000000;
        temp_a2_94 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_94 + 8;
        temp_a2_94->words.w1 = 0;
        temp_a2_94->words.w0 = 0xE7000000;
        temp_a2_95 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_95 + 8;
        temp_a2_95->words.w1 = 0;
        temp_a2_95->words.w0 = 0xF5702000;
        temp_a2_96 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_96 + 8;
        temp_a2_96->words.w1 = 0xFC03C;
        temp_a2_96->words.w0 = 0xF2000000;
        temp_a2_97 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_97 + 8;
        temp_a2_97->words.w0 = temp_a0_3 | (((temp_v1_4 + 4) & 0xFF) << 8) | temp_a1_3 | 0x7000000U;
        temp_a2_97->words.w1 = temp_a0_3 | (temp_a1_3 << 8) | ((temp_v1_4 + 2) & 0xFF);
        phi_t2_4 = temp_t2_4;
        phi_t3_3 = (s16) (phi_t3_3 + 4);
    } while ((s32) temp_t2_4 < 2);
    temp_a2_98 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_98 + 8;
    temp_a2_98->words.w1 = 0;
    temp_a2_98->words.w0 = 0xE7000000;
    temp_a2_99 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_99 + 8;
    temp_a2_99->words.w0 = 0xFA000000;
    temp_a2_99->words.w1 = ((sp40->unk_44B4 & 0xFF) << 8) | (sp40->unk_44B0 << 0x18) | ((sp40->unk_44B2 & 0xFF) << 0x10) | (sp40->unk_44E2 & 0xFF);
    temp_a2_100 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_100 + 8;
    temp_a2_100->words.w0 = 0xFD700000;
    temp_a2_100->words.w1 = &D_010277B0;
    temp_a2_101 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_101 + 8;
    temp_a2_101->words.w1 = 0x7000000;
    temp_a2_101->words.w0 = 0xF5700000;
    temp_a2_102 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_102 + 8;
    temp_a2_102->words.w1 = 0;
    temp_a2_102->words.w0 = 0xE6000000;
    temp_a2_103 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_103 + 8;
    temp_a2_103->words.w1 = 0x73FF080;
    temp_a2_103->words.w0 = 0xF3000000;
    temp_a2_104 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_104 + 8;
    temp_a2_104->words.w1 = 0;
    temp_a2_104->words.w0 = 0xE7000000;
    temp_a2_105 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_105 + 8;
    temp_a2_105->words.w1 = 0;
    temp_a2_105->words.w0 = 0xF5702000;
    temp_a2_106 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_106 + 8;
    temp_a2_106->words.w1 = 0xFC03C;
    temp_a2_106->words.w0 = 0xF2000000;
    temp_a2_107 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_107 + 8;
    temp_a2_107->words.w0 = 0x7101416;
    temp_a2_107->words.w1 = 0x101612;
    temp_v1_5 = sp40->unk_4484;
    if (((temp_v1_5 == 1) && ((temp_v0_3 = sp40->unk_4486, (temp_v0_3 == 2)) || (temp_v0_3 == 4) || (temp_v0_3 == 7) || (temp_v0_3 == 0xC) || (temp_v0_3 == 0x16) || (temp_v0_3 == 0x19))) || ((temp_v1_5 == 2) && (sp40->unk_448C == 3))) {
        temp_a2_108 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_108 + 8;
        temp_a2_108->words.w1 = 0;
        temp_a2_108->words.w0 = 0xE7000000;
        temp_a2_109 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_109 + 8;
        temp_a2_109->words.w1 = 0xFF2FFFFF;
        temp_a2_109->words.w0 = 0xFC6196C3;
        temp_a2_110 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_110 + 8;
        temp_a2_110->words.w0 = 0xFA000000;
        temp_a2_110->words.w1 = (sp40->unk_44F0 & 0xFF) | (sp40->unk_44EA << 0x18) | ((sp40->unk_44EC & 0xFF) << 0x10) | ((sp40->unk_44EE & 0xFF) << 8);
        temp_a2_111 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_111 + 8;
        temp_a2_111->words.w0 = 0xFD900000;
        temp_a2_111->words.w1 = &D_0102AAB0;
        temp_a2_112 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_112 + 8;
        temp_a2_112->words.w1 = 0x7000000;
        temp_a2_112->words.w0 = 0xF5900000;
        temp_a2_113 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_113 + 8;
        temp_a2_113->words.w1 = 0;
        temp_a2_113->words.w0 = 0xE6000000;
        temp_a2_114 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_114 + 8;
        temp_a2_114->words.w1 = 0x735F0E4;
        temp_a2_114->words.w0 = 0xF3000000;
        temp_a2_115 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_115 + 8;
        temp_a2_115->words.w1 = 0;
        temp_a2_115->words.w0 = 0xE7000000;
        temp_a2_116 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_116 + 8;
        temp_a2_116->words.w1 = 0;
        temp_a2_116->words.w0 = 0xF5881200;
        temp_a2_117 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_117 + 8;
        temp_a2_117->words.w0 = 0xF2000000;
        temp_a2_117->words.w1 = 0x11C05C;
        temp_a2_118 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_118 + 8;
        temp_a2_118->words.w0 = 0x7181C1E;
        temp_a2_118->words.w1 = 0x181E1A;
    }
    if ((s32) sp40->unk_44A8 >= 0) {
        temp_a2_119 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_119 + 8;
        temp_a2_119->words.w1 = 0;
        temp_a2_119->words.w0 = 0xE7000000;
        temp_a2_120 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_120 + 8;
        temp_a2_120->words.w1 = 0x552EFF7F;
        temp_a2_120->words.w0 = 0xFC309661;
        temp_a2_121 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_121 + 8;
        temp_a2_121->words.w0 = 0xFA000000;
        temp_a2_121->words.w1 = (sp40->unk_44E8 & 0xFF) | ~0xFF;
        temp_a2_122 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_122 + 8;
        temp_a2_122->words.w1 = 0;
        temp_a2_122->words.w0 = 0xFB000000;
        temp_a2_123 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_123 + 8;
        temp_a2_123->words.w0 = 0xFD700000;
        temp_a2_123->words.w1 = *(&D_80814744 + (sp40->unk_44A8 * 4));
        temp_a2_124 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_124 + 8;
        temp_a2_124->words.w1 = 0x7000000;
        temp_a2_124->words.w0 = 0xF5700000;
        temp_a2_125 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_125 + 8;
        temp_a2_125->words.w1 = 0;
        temp_a2_125->words.w0 = 0xE6000000;
        temp_a2_126 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_126 + 8;
        temp_a2_126->words.w1 = 0x73FF080;
        temp_a2_126->words.w0 = 0xF3000000;
        temp_a2_127 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_127 + 8;
        temp_a2_127->words.w1 = 0;
        temp_a2_127->words.w0 = 0xE7000000;
        temp_a2_128 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_128 + 8;
        temp_a2_128->words.w1 = 0;
        temp_a2_128->words.w0 = 0xF5682000;
        temp_a2_129 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_129 + 8;
        temp_a2_129->words.w0 = 0xF2000000;
        temp_a2_129->words.w1 = 0x1FC03C;
        temp_a2_130 = phi_t1->polyOpa.p;
        phi_t1->polyOpa.p = temp_a2_130 + 8;
        temp_a2_130->words.w0 = 0x7202426;
        temp_a2_130->words.w1 = 0x202622;
    }
    temp_a2_131 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_131 + 8;
    temp_a2_131->words.w1 = 0;
    temp_a2_131->words.w0 = 0xE7000000;
    temp_a2_132 = phi_t1->polyOpa.p;
    phi_t1->polyOpa.p = temp_a2_132 + 8;
    temp_a2_132->words.w1 = -0xC07;
    temp_a2_132->words.w0 = 0xFC127E24;
}

void func_80811CB8(GraphicsContext **arg0) {
    GraphicsContext *spD0;
    Gfx *spB4;
    Gfx *sp84;
    Gfx *sp54;
    ? *sp30;
    ? *sp2C;
    ? *sp28;
    GraphicsContext **sp24;
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
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_38;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext **temp_a1;
    GraphicsContext *temp_f0;
    GraphicsContext *temp_t0;
    s16 temp_v0_2;
    void *temp_v0_39;
    s32 phi_v0;
    GraphicsContext *phi_t0;
    GraphicsContext **phi_a1;
    s32 phi_v0_2;

    temp_t0 = arg0->unk_0;
    temp_v0 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    spD0 = temp_t0;
    func_8012C8AC(arg0->unk_0);
    FileChoose_RenderView(arg0, NULL, NULL, 64.0f);
    func_8080D40C(arg0);
    func_8080D6D4(arg0);
    temp_a1 = arg0 + 0x20000;
    temp_v0_2 = arg0->unk_24486;
    phi_v0 = (s32) temp_v0_2;
    phi_t0 = temp_t0;
    phi_a1 = temp_a1;
    if ((temp_v0_2 != 0x24) && (temp_v0_2 != 0x23)) {
        temp_v0_3 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = 0;
        temp_v0_3->words.w0 = 0xE7000000;
        temp_v0_4 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = 0xFF2FFFFF;
        temp_v0_4->words.w0 = 0xFC119623;
        temp_v0_5 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFA000000;
        temp_v0_5->words.w1 = ((arg0->unk_244B4 & 0xFF) << 8) | (arg0->unk_244B0 << 0x18) | ((arg0->unk_244B2 & 0xFF) << 0x10) | (arg0->unk_244BA & 0xFF);
        temp_v0_6 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = 0;
        temp_v0_6->words.w0 = 0xFB000000;
        sp24 = temp_a1;
        spD0 = temp_t0;
        SysMatrix_InsertTranslation(0.0f, 0.0f, -93.6f, 0);
        Matrix_Scale(0.78f, 0.78f, 0.78f, 1);
        temp_f0 = arg0[37187];
        if ((bitwise f32) temp_f0 != 0.0f) {
            sp24 = temp_a1;
            spD0 = temp_t0;
            SysMatrix_RotateStateAroundXAxis((bitwise f32) temp_f0 / 100.0f);
        }
        temp_v0_7 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDA380003;
        spD0 = arg0->unk_0;
        sp24 = arg0 + 0x20000;
        spB4 = temp_v0_7;
        spB4->words.w1 = Matrix_NewMtx(arg0->unk_0);
        temp_v0_8 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = &temp_v0_8[1];
        temp_v0_8->words.w0 = 0x1020040;
        temp_v0_8->words.w1 = (u32) arg0[41];
        temp_v0_9 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = &temp_v0_9[1];
        temp_v0_9->words.w1 = (u32) &D_010311F0;
        temp_v0_9->words.w0 = 0xDE000000;
        temp_v0_10 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = &temp_v0_10[1];
        temp_v0_10->words.w0 = 0x1020040;
        temp_v0_10->words.w1 = (u32) &arg0[41]->unk_200;
        temp_v0_11 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = &temp_v0_11[1];
        temp_v0_11->words.w1 = (u32) &D_01031408;
        temp_v0_11->words.w0 = 0xDE000000;
        temp_v0_12 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = &temp_v0_12[1];
        temp_v0_12->words.w0 = 0x1010020;
        temp_v0_12->words.w1 = (u32) &arg0[41][1].unk_110;
        temp_v0_13 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = &temp_v0_13[1];
        temp_v0_13->words.w1 = (u32) &D_01031618;
        temp_v0_13->words.w0 = 0xDE000000;
        temp_v0_14 = arg0->unk_0->polyOpa.p;
        arg0->unk_0->polyOpa.p = &temp_v0_14[1];
        temp_v0_14->words.w1 = 0;
        temp_v0_14->words.w0 = 0xE7000000;
        sp24 = arg0 + 0x20000;
        spD0 = arg0->unk_0;
        func_808108DC(arg0, arg0 + 0x20000, 0xDE000000U, 0x1020040U);
        phi_v0 = (s32) (arg0 + 0x20000)->unk_4486;
        phi_t0 = arg0->unk_0;
        phi_a1 = arg0 + 0x20000;
    }
    phi_v0_2 = phi_v0;
    if ((phi_v0 >= 0x22) && (phi_v0 < 0x27)) {
        sp30 = &D_010311F0;
        sp2C = &D_01031408;
        sp28 = &D_01031618;
        temp_v0_15 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_15 + 8;
        temp_v0_15->words.w1 = 0;
        temp_v0_15->words.w0 = 0xE7000000;
        temp_v0_16 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_16 + 8;
        temp_v0_16->words.w0 = 0xFC119623;
        temp_v0_16->words.w1 = 0xFF2FFFFF;
        temp_v0_17 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_17 + 8;
        temp_v0_17->words.w0 = 0xFA000000;
        temp_v0_17->words.w1 = ((phi_a1->unk_44B4 & 0xFF) << 8) | (phi_a1->unk_44B0 << 0x18) | ((phi_a1->unk_44B2 & 0xFF) << 0x10) | (phi_a1->unk_44BA & 0xFF);
        temp_v0_18 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_18 + 8;
        temp_v0_18->words.w1 = 0;
        temp_v0_18->words.w0 = 0xFB000000;
        sp24 = phi_a1;
        spD0 = phi_t0;
        SysMatrix_InsertTranslation(0.0f, 0.0f, -93.6f, 0);
        Matrix_Scale(0.78f, 0.78f, 0.78f, 1);
        SysMatrix_RotateStateAroundXAxis(((bitwise f32) phi_a1[4419] - 314.0f) / 100.0f);
        temp_v0_19 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_19[1];
        temp_v0_19->words.w0 = 0xDA380003;
        spD0 = phi_t0;
        sp24 = phi_a1;
        sp84 = temp_v0_19;
        sp84->words.w1 = Matrix_NewMtx(arg0->unk_0);
        temp_v0_20 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_20[1];
        temp_v0_20->words.w0 = 0x1020040;
        temp_v0_20->words.w1 = (u32) arg0[41];
        temp_v0_21 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_21[1];
        temp_v0_21->words.w0 = 0xDE000000;
        temp_v0_21->words.w1 = (u32) sp30;
        temp_v0_22 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_22[1];
        temp_v0_22->words.w0 = 0x1020040;
        temp_v0_22->words.w1 = (u32) &arg0[41]->unk_200;
        temp_v0_23 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_23[1];
        temp_v0_23->words.w0 = 0xDE000000;
        temp_v0_23->words.w1 = (u32) sp2C;
        temp_v0_24 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_24[1];
        temp_v0_24->words.w0 = 0x1010020;
        temp_v0_24->words.w1 = (u32) &arg0[41][1].unk_110;
        temp_v0_25 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_25[1];
        temp_v0_25->words.w0 = 0xDE000000;
        temp_v0_25->words.w1 = (u32) sp28;
        temp_v0_26 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_26[1];
        temp_v0_26->words.w1 = 0;
        temp_v0_26->words.w0 = 0xE7000000;
        sp24 = phi_a1;
        spD0 = phi_t0;
        func_80808F1C(arg0, phi_a1, 0xDE000000U, 0x1020040U);
        phi_v0_2 = (s32) phi_a1->unk_4486;
    }
    if ((phi_v0_2 >= 0x27) && (phi_v0_2 < 0x2C)) {
        sp30 = &D_010311F0;
        sp2C = &D_01031408;
        sp28 = &D_01031618;
        temp_v0_27 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_27 + 8;
        temp_v0_27->words.w1 = 0;
        temp_v0_27->words.w0 = 0xE7000000;
        temp_v0_28 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_28 + 8;
        temp_v0_28->words.w0 = 0xFC119623;
        temp_v0_28->words.w1 = 0xFF2FFFFF;
        temp_v0_29 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_29 + 8;
        temp_v0_29->words.w0 = 0xFA000000;
        temp_v0_29->words.w1 = ((phi_a1->unk_44B4 & 0xFF) << 8) | (phi_a1->unk_44B0 << 0x18) | ((phi_a1->unk_44B2 & 0xFF) << 0x10) | (phi_a1->unk_44BA & 0xFF);
        temp_v0_30 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = temp_v0_30 + 8;
        temp_v0_30->words.w1 = 0;
        temp_v0_30->words.w0 = 0xFB000000;
        sp24 = phi_a1;
        spD0 = phi_t0;
        SysMatrix_InsertTranslation(0.0f, 0.0f, -93.6f, 0);
        Matrix_Scale(0.78f, 0.78f, 0.78f, 1);
        SysMatrix_RotateStateAroundXAxis(((bitwise f32) phi_a1[4419] - 314.0f) / 100.0f);
        temp_v0_31 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_31[1];
        temp_v0_31->words.w0 = 0xDA380003;
        spD0 = phi_t0;
        sp54 = temp_v0_31;
        sp54->words.w1 = Matrix_NewMtx(arg0->unk_0);
        temp_v0_32 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_32[1];
        temp_v0_32->words.w0 = 0x1020040;
        temp_v0_32->words.w1 = (u32) arg0[41];
        temp_v0_33 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_33[1];
        temp_v0_33->words.w0 = 0xDE000000;
        temp_v0_33->words.w1 = (u32) sp30;
        temp_v0_34 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_34[1];
        temp_v0_34->words.w0 = 0x1020040;
        temp_v0_34->words.w1 = (u32) &arg0[41]->unk_200;
        temp_v0_35 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_35[1];
        temp_v0_35->words.w0 = 0xDE000000;
        temp_v0_35->words.w1 = (u32) sp2C;
        temp_v0_36 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_36[1];
        temp_v0_36->words.w0 = 0x1010020;
        temp_v0_36->words.w1 = (u32) &arg0[41][1].unk_110;
        temp_v0_37 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_37[1];
        temp_v0_37->words.w0 = 0xDE000000;
        temp_v0_37->words.w1 = (u32) sp28;
        temp_v0_38 = phi_t0->polyOpa.p;
        phi_t0->polyOpa.p = &temp_v0_38[1];
        temp_v0_38->words.w1 = 0;
        temp_v0_38->words.w0 = 0xE7000000;
        spD0 = phi_t0;
        func_8080BBFC(arg0);
    }
    temp_v0_39 = phi_t0->polyOpa.p;
    phi_t0->polyOpa.p = temp_v0_39 + 8;
    temp_v0_39->words.w1 = 0;
    temp_v0_39->words.w0 = 0xE7000000;
    FileChoose_RenderView(arg0, NULL, NULL, 64.0f);
}

void func_80812460(void *arg0) {
    s16 temp_v0;
    s16 temp_v1;
    void *temp_t8;
    void *temp_t9;
    void *temp_v1_2;
    s16 phi_v0;

    phi_v0 = 0;
    do {
        temp_t8 = arg0 + (phi_v0 * 2);
        if (phi_v0 != arg0->unk_24480) {
            temp_t8->unk_244BC = (s16) (temp_t8->unk_244BC - 0x32);
            temp_v1 = temp_t8->unk_244BC;
            arg0->unk_244E2 = temp_v1;
            arg0->unk_244DA = temp_v1;
            arg0->unk_244DC = temp_v1;
            if (gSaveContext.unk_3F3F == 0) {
                temp_v1_2 = *(&D_801C6798 + (phi_v0 * 4)) + arg0->unk_220;
                if ((temp_v1_2->unk_24 == 0x5A) || (temp_v1_2->unk_25 == 0x45) || (temp_v1_2->unk_26 == 0x4C) || (temp_v1_2->unk_27 == 0x44) || (temp_v1_2->unk_28 == 0x41) || (temp_v1_2->unk_29 == 0x33)) {
                    temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE - 0x3F);
                    temp_t8->unk_244C2 = (s16) temp_t8->unk_244BC;
                    goto block_17;
                }
            } else {
                temp_t9 = arg0 + (phi_v0 * 6);
                if ((temp_t9->unk_243F4 == 0x5A) && (temp_t9->unk_243F5 == 0x45) && (temp_t9->unk_243F6 == 0x4C) && (temp_t9->unk_243F7 == 0x44) && (temp_t9->unk_243F8 == 0x41) && (temp_t9->unk_243F9 == 0x33)) {
                    temp_t8->unk_244C2 = (s16) temp_t8->unk_244BC;
                    temp_t8->unk_244CE = (s16) (temp_t8->unk_244CE - 0x3F);
block_17:
                    temp_t8->unk_244C8 = temp_t8->unk_244BC;
                }
            }
        }
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
    } while ((s32) temp_v0 < 3);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_24498 = 4;
        arg0->unk_2448C = (s16) (arg0->unk_2448C + 1);
        arg0->unk_24482 = 0;
    }
}

void func_80812668(void *arg0) {
    s16 temp_a2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t6;
    s32 phi_v1;

    temp_v1 = arg0->unk_24480 * 2;
    temp_t6 = arg0 + temp_v1;
    temp_a2 = temp_t6->unk_2449A;
    temp_a3 = temp_a2 - *(&D_80814774 + temp_v1);
    phi_v1 = temp_a3;
    if (temp_a3 < 0) {
        phi_v1 = -temp_a3;
    }
    temp_t6->unk_2449A = (s16) (temp_a2 + (phi_v1 / (s32) arg0->unk_24498));
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if ((arg0->unk_24498 == 0) || (temp_v1_2 = arg0->unk_24480 * 2, ((arg0 + temp_v1_2)->unk_2449A == *(&D_80814774 + temp_v1_2)))) {
        arg0->unk_244A2 = -0x18;
        arg0->unk_244A0 = (s16) arg0->unk_244A2;
        arg0->unk_24498 = 4;
        arg0->unk_2448C = (s16) (arg0->unk_2448C + 1);
    }
}

void func_80812760(void *arg0) {
    s16 temp_v1;
    void *temp_t3;
    void *temp_t8;
    void *temp_t8_2;

    temp_t8 = arg0 + (arg0->unk_24480 * 2);
    temp_t8->unk_244D4 = (s16) (temp_t8->unk_244D4 + 0x32);
    temp_t3 = arg0 + (arg0->unk_24480 * 2);
    temp_t3->unk_244C2 = (s16) (temp_t3->unk_244C2 - 0x64);
    temp_t8_2 = arg0 + (arg0->unk_24480 * 2);
    if ((s32) temp_t8_2->unk_244C2 <= 0) {
        temp_t8_2->unk_244C2 = 0;
    }
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        (arg0 + (arg0->unk_24480 * 2))->unk_244D4 = 0xC8;
        arg0->unk_24498 = 4;
        arg0->unk_2448C = (s16) (arg0->unk_2448C + 1);
    }
    temp_v1 = (arg0 + (arg0->unk_24480 * 2))->unk_244D4;
    arg0->unk_244E0 = temp_v1;
    arg0->unk_244DE = temp_v1;
}

void func_80812840(void *arg0) {
    void *sp20;
    s16 temp_v1;
    u16 temp_v0;
    s32 phi_a0;

    if ((~(arg0->unk_20 | ~0x1000) == 0) || (temp_v0 = arg0->unk_20, (~(temp_v0 | 0xFFFF7FFF) == 0))) {
        if (arg0->unk_24482 == 0) {
            func_8013ECE0(300.0f, 0xB4U, 0x14U, 0x64U);
            play_sound(0x483BU);
            arg0->unk_2448C = 6;
            func_801A4058(0xF);
            return;
        }
        sp20 = arg0 + 0x20000;
        play_sound(0x483CU);
        arg0->unk_2448C = (s16) (arg0->unk_2448C + 1);
        return;
    }
    if (~(temp_v0 | ~0x4000) == 0) {
        play_sound(0x483CU);
        arg0->unk_2448C = (s16) (arg0->unk_2448C + 1);
        return;
    }
    temp_v1 = arg0->unk_24504;
    phi_a0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_a0 = -(s32) temp_v1;
    }
    if (phi_a0 >= 0x1E) {
        sp20 = arg0 + 0x20000;
        play_sound(0x4839U);
        arg0->unk_24482 = (s16) (arg0->unk_24482 ^ 1);
    }
}

void func_80812980(void *arg0) {
    s16 temp_v1;
    void *temp_t3;
    void *temp_t8;

    temp_t8 = arg0 + (arg0->unk_24480 * 2);
    temp_t8->unk_244D4 = (s16) (temp_t8->unk_244D4 - 0x32);
    temp_t3 = arg0 + (arg0->unk_24480 * 2);
    temp_t3->unk_244C2 = (s16) (temp_t3->unk_244C2 + 0x32);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244A2 = 0;
        arg0->unk_244A0 = (s16) arg0->unk_244A2;
        (arg0 + (arg0->unk_24480 * 2))->unk_244C2 = 0xC8;
        (arg0 + (arg0->unk_24480 * 2))->unk_244D4 = 0;
        arg0->unk_244AE = 0;
        arg0->unk_24498 = 4;
        arg0->unk_2448C = (s16) (arg0->unk_2448C + 1);
    }
    temp_v1 = (arg0 + (arg0->unk_24480 * 2))->unk_244D4;
    arg0->unk_244E0 = temp_v1;
    arg0->unk_244DE = temp_v1;
}

void func_80812A6C(void *arg0) {
    s16 temp_a1;
    s16 temp_a2;
    void *temp_a2_2;
    void *temp_t6;
    void *temp_t8;
    void *temp_t9;
    void *temp_t9_2;
    s32 phi_a3;
    s16 phi_a1;

    temp_t8 = arg0 + (arg0->unk_24480 * 2);
    temp_a2 = temp_t8->unk_2449A;
    if ((s32) temp_a2 < 0) {
        phi_a3 = -(s32) temp_a2;
    } else {
        phi_a3 = (s32) temp_a2;
    }
    temp_t8->unk_2449A = (s16) (temp_a2 - (phi_a3 / (s32) arg0->unk_24498));
    temp_t9 = arg0 + (arg0->unk_24480 * 2);
    if ((s32) temp_t9->unk_2449A <= 0) {
        temp_t9->unk_2449A = 0;
    }
    phi_a1 = 0;
    do {
        temp_t9_2 = arg0 + (phi_a1 * 2);
        if (phi_a1 != arg0->unk_24480) {
            temp_t9_2->unk_244BC = (s16) (temp_t9_2->unk_244BC + 0x32);
            if ((s32) temp_t9_2->unk_244BC >= 0xC8) {
                temp_t9_2->unk_244BC = 0xC8;
            }
            arg0->unk_244E2 = temp_t9_2->unk_244BC;
            arg0->unk_244DA = temp_t9_2->unk_244BC;
            arg0->unk_244DC = temp_t9_2->unk_244BC;
            if (gSaveContext.unk_3F3F == 0) {
                temp_a2_2 = *(&D_801C6798 + (phi_a1 * 4)) + arg0->unk_220;
                if ((temp_a2_2->unk_24 == 0x5A) || (temp_a2_2->unk_25 == 0x45) || (temp_a2_2->unk_26 == 0x4C) || (temp_a2_2->unk_27 == 0x44) || (temp_a2_2->unk_28 == 0x41) || (temp_a2_2->unk_29 == 0x33)) {
                    temp_t9_2->unk_244CE = (s16) (temp_t9_2->unk_244CE + 0x3F);
                    temp_t9_2->unk_244C8 = (s16) temp_t9_2->unk_244BC;
                    goto block_24;
                }
            } else {
                temp_t6 = arg0 + (phi_a1 * 6);
                if ((temp_t6->unk_243F4 == 0x5A) && (temp_t6->unk_243F5 == 0x45) && (temp_t6->unk_243F6 == 0x4C) && (temp_t6->unk_243F7 == 0x44) && (temp_t6->unk_243F8 == 0x41) && (temp_t6->unk_243F9 == 0x33)) {
                    temp_t9_2->unk_244C8 = (s16) temp_t9_2->unk_244BC;
                    temp_t9_2->unk_244CE = (s16) (temp_t9_2->unk_244CE + 0x3F);
block_24:
                    temp_t9_2->unk_244C2 = temp_t9_2->unk_244BC;
                }
            }
        }
        temp_a1 = phi_a1 + 1;
        phi_a1 = temp_a1;
    } while ((s32) temp_a1 < 3);
    arg0->unk_244B6 = (s16) (arg0->unk_244B6 - 0x3F);
    arg0->unk_244B8 = (s16) (arg0->unk_244B8 + 0x3F);
    arg0->unk_24498 = (s16) (arg0->unk_24498 - 1);
    if (arg0->unk_24498 == 0) {
        arg0->unk_244B6 = 0xFF;
        arg0->unk_244B8 = 0;
        arg0->unk_244AC = (s16) arg0->unk_244AE;
        arg0->unk_24498 = 4;
        arg0->unk_24484 = 1;
        arg0->unk_24486 = 2;
        arg0->unk_2448A = 2;
        arg0->unk_2448C = 0;
    }
}

void func_80812D44(void *arg0) {
    arg0->unk_2450A = (s16) (arg0->unk_2450A + 0x28);
    if ((s32) arg0->unk_2450A >= 0xFF) {
        arg0->unk_2450A = 0xFF;
        arg0->unk_2448C = (s16) (arg0->unk_2448C + 1);
    }
}

void func_80812D94(void *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    gSaveContext.fileNum = (s32) arg0->unk_24480;
    func_80144E78(arg0 + 0x220);
    gSaveContext.gameMode = 0;
    arg0->unk_9B = 0;
    arg0->unk_C = Play_Init;
    arg0->unk_10 = 0x19258;
    gSaveContext.respawnFlag = 0;
    gSaveContext.respawn[0].entranceIndex = 0xFFFF;
    gSaveContext.seqIndex = 0xFF;
    gSaveContext.nightSeqIndex = 0xFF;
    gSaveContext.showTitleCard = 1;
    gSaveContext.dogParams = 0;
    phi_v0 = 0;
    do {
        temp_v0 = (phi_v0 + 1) & 0xFFFF;
        gSaveContext.unk_3DD0[phi_v0] = 0;
        phi_v0 = temp_v0;
    } while (temp_v0 < 7);
    gSaveContext.unk_3F26 = 0x32;
    gSaveContext.unk_3DC0 = 0;
    gSaveContext.healthAccumulator = 0;
    gSaveContext.unk_3F2C = 0;
    gSaveContext.unk_3F46 = 0;
    gSaveContext.environmentTime = 0;
    gSaveContext.nextTransition = 0xFF;
    gSaveContext.cutsceneTrigger = 0;
    gSaveContext.unk_3F4D = 0;
    gSaveContext.nextDayTime = 0xFFFF;
    gSaveContext.unk_3DBB = 0;
    gSaveContext.buttonStatus[0] = 0;
    gSaveContext.buttonStatus[1] = 0;
    gSaveContext.buttonStatus[2] = 0;
    gSaveContext.buttonStatus[3] = 0;
    gSaveContext.buttonStatus[4] = 0;
    gSaveContext.unk_3F1E = 0;
    gSaveContext.unk_3F20 = 0;
    gSaveContext.unk_3F22 = 0;
    gSaveContext.unk_3F24 = 0;
    gSaveContext.naviTimer = 0;
}

void func_80812E94(void *arg0) {
    *(&D_8081477C + (arg0->unk_2448C * 4))();
}

void func_80812ED0(GraphicsContext **arg0) {
    Gfx *sp40;
    GraphicsContext **sp20;
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
    GraphicsContext *temp_s0;

    temp_s0 = arg0->unk_0;
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    func_8012C8AC(arg0->unk_0);
    FileChoose_RenderView(arg0, NULL, NULL, 64.0f);
    func_8080D40C(arg0);
    func_8080D6D4(arg0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFC119623;
    temp_v0_2->words.w1 = 0xFF2FFFFF;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFA000000;
    temp_v0_3->words.w1 = ((arg0->unk_244B4 & 0xFF) << 8) | (arg0->unk_244B0 << 0x18) | ((arg0->unk_244B2 & 0xFF) << 0x10) | (arg0->unk_244BA & 0xFF);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = 0;
    temp_v0_4->words.w0 = 0xFB000000;
    sp20 = arg0 + 0x20000;
    SysMatrix_InsertTranslation(0.0f, 0.0f, -93.6f, 0);
    Matrix_Scale(0.78f, 0.78f, 0.78f, 1);
    SysMatrix_RotateStateAroundXAxis((bitwise f32) arg0[37187] / 100.0f);
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDA380003;
    sp40 = temp_v0_5;
    sp40->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v0_6 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w0 = 0x1020040;
    temp_v0_6->words.w1 = (u32) arg0[41];
    temp_v0_7 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = (u32) &D_010311F0;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_8 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_8[1];
    temp_v0_8->words.w0 = 0x1020040;
    temp_v0_8->words.w1 = (u32) &arg0[41]->unk_200;
    temp_v0_9 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_9[1];
    temp_v0_9->words.w1 = (u32) &D_01031408;
    temp_v0_9->words.w0 = 0xDE000000;
    temp_v0_10 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_10[1];
    temp_v0_10->words.w0 = 0x1010020;
    temp_v0_10->words.w1 = (u32) &arg0[41][1].unk_110;
    temp_v0_11 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_11[1];
    temp_v0_11->words.w1 = (u32) &D_01031618;
    temp_v0_11->words.w0 = 0xDE000000;
    func_808108DC(arg0, (GraphicsContext **) 0x1020040U);
    temp_v0_12 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_12[1];
    temp_v0_12->words.w1 = 0;
    temp_v0_12->words.w0 = 0xE7000000;
    FileChoose_RenderView(arg0, NULL, NULL, 64.0f);
}

void FileChoose_UpdateAndDrawSkybox(void **arg0) {
    f32 sp58;
    f32 sp50;
    f32 sp3C;
    f32 temp_a3;
    f32 temp_f2;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;

    temp_s2 = arg0->unk_0;
    temp_v1 = temp_s2->unk_2B0;
    temp_s2->unk_2B0 = (void *) (temp_v1 + 8);
    temp_v1->unk_4 = 0;
    temp_v1->unk_0 = 0xE7000000;
    sp3C = Math_CosS(fileChooseSkyboxRotation);
    sp58 = (1000.0f * sp3C) - (Math_SinS(fileChooseSkyboxRotation) * 1000.0f);
    sp3C = Math_SinS(fileChooseSkyboxRotation);
    temp_f2 = (Math_CosS(fileChooseSkyboxRotation) * 1000.0f) + (1000.0f * sp3C);
    temp_a3 = temp_f2;
    sp50 = temp_f2;
    FileChoose_RenderView((bitwise GraphicsContext **) 1000.0f, arg0, (bitwise void **) sp58, -700.0f, temp_a3);
    func_80143668(arg0 + 0x248, arg0->unk_0, 1, arg0->unk_242F3, sp58, -700.0f, sp50);
    temp_v1_2 = temp_s2->unk_2B0;
    temp_s2->unk_2B0 = (void *) (temp_v1_2 + 8);
    temp_v1_2->unk_4 = 0;
    temp_v1_2->unk_0 = 0xE3001001;
    fileChooseSkyboxRotation += -0xA;
}

void FileChoose_Main(GameState *thisx) {
    GraphicsContext *sp9C;
    void *sp28;
    Gfx *temp_t1;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a1;
    Input *temp_v0_4;
    s16 *temp_a0_2;
    s16 *temp_t0;
    s16 temp_v0_5;
    s16 temp_v0_9;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_t2;
    s32 temp_v0_13;
    s16 phi_a0;
    s32 phi_a2;
    s32 phi_a0_2;
    s32 phi_v1;
    s32 phi_a2_2;

    func_8012CF0C(thisx->gfxCtx, 0, 1, 0U, (u8) 0, (u8) 0);
    temp_a1 = thisx->gfxCtx;
    temp_v0 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060004;
    temp_v0->words.w1 = (u32) thisx[1].main;
    temp_v0_2 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060008;
    temp_v0_2->words.w1 = (u32) thisx[1].destroy;
    temp_v0_3 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDB060018;
    temp_v0_3->words.w1 = (u32) thisx[1].nextGameStateInit;
    temp_v0_4 = thisx->input;
    thisx[906].unk_9A = (s16) temp_v0_4->rel.stick_x;
    thisx->unk_24504 = (s16) temp_v0_4->rel.stick_y;
    temp_v1 = thisx[906].unk_9A;
    if ((s32) temp_v1 < -0x1E) {
        if (thisx->unk_244FE == -1) {
            thisx[906].alloc.base.unk_E += -1;
            if ((s32) thisx[906].alloc.base.unk_E < 0) {
                thisx[906].alloc.base.unk_E = 2;
                phi_a0 = 1;
            } else {
                thisx[906].unk_9A = 0;
                phi_a0 = 1;
            }
        } else {
            thisx[906].alloc.base.unk_E = 0xA;
            thisx->unk_244FE = -1;
            phi_a0 = 1;
        }
    } else if ((s32) temp_v1 >= 0x1F) {
        if (thisx->unk_244FE == 1) {
            thisx[906].alloc.base.unk_E += -1;
            if ((s32) thisx[906].alloc.base.unk_E < 0) {
                thisx[906].alloc.base.unk_E = 2;
                goto block_13;
            }
            thisx[906].unk_9A = 0;
            phi_a0 = 1;
        } else {
            thisx[906].alloc.base.unk_E = 0xA;
            thisx->unk_244FE = 1;
            goto block_13;
        }
    } else {
        thisx->unk_244FE = 0;
block_13:
        phi_a0 = 1;
    }
    temp_v0_5 = thisx->unk_24504;
    if ((s32) temp_v0_5 < -0x1E) {
        if (thisx[906].unk_98 == -1) {
            thisx->unk_244FC = (s16) (thisx->unk_244FC - 1);
            if ((s32) thisx->unk_244FC < 0) {
                thisx->unk_244FC = 2;
            } else {
                thisx->unk_24504 = 0;
            }
        } else {
            thisx->unk_244FC = 0xA;
            thisx[906].unk_98 = -1;
        }
    } else if ((s32) temp_v0_5 >= 0x1F) {
        if (phi_a0 == thisx[906].unk_98) {
            thisx->unk_244FC = (s16) (thisx->unk_244FC - 1);
            if ((s32) thisx->unk_244FC < 0) {
                thisx->unk_244FC = 2;
            } else {
                thisx->unk_24504 = 0;
            }
        } else {
            thisx->unk_244FC = 0xA;
            thisx[906].unk_98 = phi_a0;
        }
    } else {
        thisx[906].unk_98 = 0;
    }
    thisx->unk_244E8 = 0;
    sp28 = thisx + 0x20000;
    sp9C = temp_a1;
    func_8080D2EC((GraphicsContext **) thisx, temp_a1);
    *(&D_808147A8 + (thisx->unk_24484 * 4))(thisx);
    FileChoose_UpdateAndDrawSkybox((void **) thisx);
    *(&D_8081479C + (thisx->unk_24484 * 4))(thisx);
    func_8012C628(thisx->gfxCtx);
    temp_v0_6 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w0 = 0xFC309661;
    temp_v0_6->words.w1 = 0x552EFF7F;
    temp_v0_7 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_7[1];
    temp_v0_7->words.w0 = 0xFA000000;
    temp_v0_7->words.w1 = (thisx->unk_244E6 & 0xFF) | 0x64FFFF00;
    temp_v0_8 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_8[1];
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xFB000000;
    if ((s32) thisx->unk_22C > 0) {
        phi_a2 = 0;
    } else {
        temp_v0_9 = thisx->unk_24486;
        phi_a2 = 1;
        if (((s32) temp_v0_9 >= 0x27) && ((s32) temp_v0_9 < 0x2C)) {
            phi_a2 = 2;
        }
    }
    temp_v0_10 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_10[1];
    temp_v0_10->words.w0 = 0xFD700000;
    temp_t2 = phi_a2 * 2;
    temp_v0_10->words.w1 = *(&D_808147B4 + (phi_a2 * 4));
    temp_v0_11 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_11[1];
    temp_v0_11->words.w1 = 0x7000000;
    temp_v0_11->words.w0 = 0xF5700000;
    temp_v0_12 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_12[1];
    temp_v0_12->words.w1 = 0;
    temp_v0_12->words.w0 = 0xE6000000;
    temp_t1 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_t1[1];
    temp_t0 = temp_t2 + &D_808147C0;
    temp_t1->words.w0 = 0xF3000000;
    temp_v1_2 = *temp_t0;
    temp_a0 = ((s32) ((temp_v1_2 * 0x10) + 1) >> 1) - 1;
    if (temp_a0 < 0x7FF) {
        phi_a2_2 = temp_a0;
    } else {
        phi_a2_2 = 0x7FF;
    }
    temp_v0_13 = (s32) temp_v1_2 / 8;
    if (temp_v0_13 <= 0) {
        phi_a0_2 = 1;
    } else {
        phi_a0_2 = temp_v0_13;
    }
    if (temp_v0_13 <= 0) {
        phi_v1 = 1;
    } else {
        phi_v1 = temp_v0_13;
    }
    temp_t1->words.w1 = (((s32) (phi_a0_2 + 0x7FF) / phi_v1) & 0xFFF) | 0x7000000U | ((phi_a2_2 & 0xFFF) << 0xC);
    temp_v0_14 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_14[1];
    temp_v0_14->words.w1 = 0;
    temp_v0_14->words.w0 = 0xE7000000;
    temp_v0_15 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_15[1];
    temp_v0_15->words.w1 = 0;
    temp_v0_15->words.w0 = ((((s32) (*temp_t0 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000;
    temp_v0_16 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_16[1];
    temp_v0_16->words.w0 = 0xF2000000;
    temp_v0_16->words.w1 = ((((*temp_t0 - 1) * 4) & 0xFFF) << 0xC) | 0x3C;
    temp_v0_17 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_17[1];
    temp_a0_2 = temp_t2 + &D_808147C8;
    temp_v0_17->words.w0 = ((((*temp_t0 + *temp_a0_2) * 4) & 0xFFF) << 0xC) | 0xE4000000 | 0x370;
    temp_v0_17->words.w1 = (((*temp_a0_2 * 4) & 0xFFF) << 0xC) | 0x330;
    temp_v0_18 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_18[1];
    temp_v0_18->words.w1 = 0;
    temp_v0_18->words.w0 = 0xE1000000;
    temp_v0_19 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_19[1];
    temp_v0_19->words.w1 = 0x4000400;
    temp_v0_19->words.w0 = 0xF1000000;
    temp_v0_20 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_20[1];
    temp_v0_20->words.w1 = 0;
    temp_v0_20->words.w0 = 0xE7000000;
    temp_v0_21 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_21[1];
    temp_v0_21->words.w1 = (u32) &D_80814510;
    temp_v0_21->words.w0 = 0xDE000000;
    temp_v0_22 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_22[1];
    temp_v0_22->words.w0 = 0xFA000000;
    temp_v0_22->words.w1 = thisx->unk_2450A & 0xFF;
    temp_v0_23 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_23[1];
    temp_v0_23->words.w1 = (u32) &D_0E0002E0;
    temp_v0_23->words.w0 = 0xDE000000;
}

void func_80813908(GameState *arg0) {
    SramContext *sp24;
    SramContext *temp_a1;
    s16 temp_a0;
    s16 temp_a1_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s8 *temp_v0;

    temp_a1 = arg0 + 0x220;
    sp24 = temp_a1;
    Sram_Alloc(arg0, temp_a1);
    func_801457CC(arg0, temp_a1);
    arg0->unk_24484 = 0;
    arg0[906].input[0].prev.button = 0;
    temp_v1 = (s16) arg0[906].input[0].prev.button;
    arg0[906].input[1].rel.button = (u16) temp_v1;
    arg0[906].input[0].rel.button = (u16) temp_v1;
    arg0->unk_2448C = temp_v1;
    arg0->unk_24480 = temp_v1;
    arg0->unk_244F6 = 2;
    arg0[906].alloc.base.unk_C = 3;
    arg0[906].input[2].cur.button = 0;
    arg0->unk_244AE = 1;
    arg0->unk_2450A = 0xFF;
    arg0->unk_244F2 = 1;
    arg0->unk_244F4 = 0xC;
    arg0->unk_244EA = 0x9B;
    arg0->unk_244EC = 0xFF;
    arg0->unk_244EE = 0xFF;
    arg0->unk_244F0 = 0x46;
    arg0->unk_24486 = 0;
    arg0[907].gfxCtx = NULL;
    arg0[906].alloc.base.unk_E = 0;
    arg0->unk_244FE = (s16) arg0[906].alloc.base.unk_E;
    arg0->unk_244FC = 0;
    arg0[906].unk_98 = arg0->unk_244FC;
    arg0->unk_24516 = 0;
    temp_a0 = arg0->unk_24516;
    arg0->unk_2451A = temp_a0;
    arg0->unk_24518 = temp_a0;
    arg0->unk_24510 = 0x63;
    arg0->unk_244B0 = 0x64;
    arg0[906].input[2].prev.button = 0x96;
    arg0->unk_244B4 = 0xFF;
    arg0->unk_244E8 = 0;
    temp_v1_2 = arg0->unk_244E8;
    arg0->unk_244E6 = temp_v1_2;
    arg0->unk_244E4 = temp_v1_2;
    arg0->unk_244E2 = temp_v1_2;
    arg0->unk_244B6 = temp_v1_2;
    arg0[906].input[2].press.button = (u16) temp_v1_2;
    arg0->unk_244BC = temp_v1_2;
    arg0[906].input[2].rel.button = (u16) temp_v1_2;
    arg0->unk_244C0 = temp_v1_2;
    arg0->unk_244C2 = temp_v1_2;
    arg0[906].input[3].cur.button = (u16) temp_v1_2;
    arg0->unk_244C6 = temp_v1_2;
    arg0->unk_244C8 = temp_v1_2;
    arg0[906].input[3].prev.button = (u16) temp_v1_2;
    arg0->unk_244CC = temp_v1_2;
    arg0->unk_244CE = temp_v1_2;
    arg0[906].input[3].press.button = (u16) temp_v1_2;
    arg0->unk_244D2 = temp_v1_2;
    arg0->unk_244D4 = temp_v1_2;
    arg0[906].input[3].rel.button = (u16) temp_v1_2;
    arg0->unk_244D8 = temp_v1_2;
    arg0->unk_244DA = temp_v1_2;
    arg0->unk_244DC = temp_v1_2;
    arg0->unk_244DE = temp_v1_2;
    arg0->unk_244E0 = temp_v1_2;
    arg0->unk_244BA = temp_v1_2;
    arg0[906].unk_A0 = 6;
    arg0->unk_24498 = 4;
    arg0->unk_244A8 = -1;
    arg0->unk_24496 = 0;
    temp_a1_2 = arg0->unk_24496;
    arg0[906].input[1].cur.button = (u16) temp_a1_2;
    arg0->unk_24492 = temp_a1_2;
    arg0->unk_244A4 = temp_a1_2;
    arg0->unk_244A2 = temp_a1_2;
    arg0[906].input[1].press.button = (u16) temp_a1_2;
    arg0->unk_2449E = temp_a1_2;
    arg0->unk_2449C = temp_a1_2;
    arg0[906].input[1].prev.button = (u16) temp_a1_2;
    arg0->unk_244AA = temp_a1_2;
    arg0->unk_2451E = 0;
    arg0[907].input[0].cur.button = 3;
    arg0->unk_24522 = 6;
    arg0->unk_24524 = 8;
    arg0[907].input[0].prev.button = 0xA;
    arg0->unk_24528 = 0x14;
    ShrinkWindow_SetLetterboxTarget(0);
    gSaveContext.environmentTime = 0;
    gSaveContext.time = 0;
    func_801434E4(arg0, (SkyboxContext *) &arg0[3].input[3], 1);
    temp_v0 = &arg0[903].input[3].prev.stick_x;
    gGameInfo->data[15] = 0xA;
    temp_v0[25] = 0;
    temp_v0->unk_1A = 0;
    temp_v0[33] = 0;
    temp_v0->unk_22 = 0;
    temp_v0[68] = 0;
    temp_v0[16] = 0x63;
    temp_v0[17] = 0x63;
    temp_v0[31] = 0;
    temp_v0[32] = 0;
    temp_v0[193] = 0;
    temp_v0[23] = 2;
    temp_v0[21] = 0;
    temp_v0[19] = 0;
    temp_v0->unk_84 = 0.0f;
    temp_v0->unk_88 = 0.0f;
    gSaveContext.buttonStatus[0] = 0;
    gSaveContext.buttonStatus[1] = 0;
    gSaveContext.buttonStatus[2] = 0;
    gSaveContext.buttonStatus[3] = 0;
    gSaveContext.buttonStatus[4] = 0;
}

void FileChoose_Destroy(GameState *thisx) {
    ShrinkWindow_Fini();
}

void FileChoose_Init(GameState *thisx) {
    u32 sp34;
    u8 *sp30;
    u32 sp2C;
    TwoHeadArena *sp28;
    TwoHeadArena *temp_a0;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_a2_2;
    void (*temp_v0)(GameState *);
    void (*temp_v0_2)(GameState *);
    void (*temp_v0_3)(GameState *);

    Game_SetFramerateDivisor(thisx, 1);
    SysMatrix_StateAlloc(thisx);
    ShrinkWindow_Init();
    View_Init((View *) thisx[1].input, thisx->gfxCtx);
    thisx->main = FileChoose_Main;
    thisx->destroy = FileChoose_Destroy;
    func_80813908(thisx);
    Font_LoadOrderedFont((Font *) &thisx[457].alloc.base.size);
    temp_a2 = _title_staticSegmentRomEnd - _title_staticSegmentRomStart;
    temp_a0 = &thisx->heap;
    sp28 = temp_a0;
    sp2C = temp_a2;
    sp30 = _title_staticSegmentRomStart;
    temp_v0 = THA_AllocEndAlign16(temp_a0, temp_a2);
    thisx[1].main = temp_v0;
    DmaMgr_SendRequest0((void *) temp_v0, (u32) sp30, temp_a2);
    temp_a2_2 = _parameter_staticSegmentRomEnd - _parameter_staticSegmentRomStart;
    sp2C = temp_a2_2;
    sp30 = _parameter_staticSegmentRomStart;
    temp_v0_2 = THA_AllocEndAlign16(temp_a0, temp_a2_2);
    thisx[1].destroy = temp_v0_2;
    DmaMgr_SendRequest0((void *) temp_v0_2, (u32) sp30, temp_a2_2);
    temp_a1 = objectFileTable[277].vromEnd - objectFileTable[277].vromStart;
    sp34 = temp_a1;
    temp_v0_3 = THA_AllocEndAlign16(temp_a0, temp_a1);
    thisx[1].nextGameStateInit = temp_v0_3;
    DmaMgr_SendRequest0((void *) temp_v0_3, objectFileTable[277].vromStart, sp34);
    audio_setBGM(0xAU);
    func_801A3238(0, 0x18, 0, 7, 1);
}
