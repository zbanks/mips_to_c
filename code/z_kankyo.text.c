CRASHED

typedef struct GraphicsContext {
    /* 0x000 */ Gfx *polyOpaBuffer;
    /* 0x004 */ Gfx *polyXluBuffer;
    /* 0x008 */ char pad_8[0x8];                    /* maybe part of polyXluBuffer[3]? */
    /* 0x010 */ Gfx *overlayBuffer;
    /* 0x014 */ char pad_14[0x44];                  /* maybe part of overlayBuffer[18]? */
    /* 0x058 */ OSMesgQueue *unk58;
    /* 0x05C */ OSMesgQueue unk5C;
    /* 0x074 */ char pad_74[0x12C];                 /* maybe part of unk5C[13]? */
    /* 0x1A0 */ Gfx *unk1A0;
    /* 0x1A4 */ TwoHeadGfxArena unk1A4;
    /* 0x1B4 */ Gfx *unk1B4;
    /* 0x1B8 */ TwoHeadGfxArena unk1B8;
    /* 0x1C8 */ char pad_1C8[0xAC];                 /* maybe part of unk1B8[11]? */
    /* 0x274 */ OSViMode *unk274;
    /* 0x278 */ void *zbuffer;
    /* 0x27C */ char pad_27C[0x1C];                 /* maybe part of zbuffer[8]? */
    /* 0x298 */ TwoHeadGfxArena overlay;
    /* 0x2A8 */ TwoHeadGfxArena polyOpa;
    /* 0x2B8 */ TwoHeadGfxArena polyXlu;
    /* 0x2C8 */ s32 displaylistCounter;
    /* 0x2CC */ void *framebuffer;
    /* 0x2D0 */ s32 pad2D0;
    /* 0x2D4 */ u32 viConfigFeatures;
    /* 0x2D8 */ char pad_2D8[0x3];
    /* 0x2DB */ u8 framebufferCounter;
    /* 0x2DC */ void (*unk_2DC)(s32, GlobalContext *); /* inferred */
    /* 0x2E0 */ GlobalContext *unk_2E0;             /* inferred */
    /* 0x2E4 */ f32 viConfigXScale;
    /* 0x2E8 */ f32 viConfigYScale;
    /* 0x2EC */ char pad_2EC[0x4];
} GraphicsContext;                                  /* size = 0x2F0 */

typedef struct {
    /* 0x00 */ Room currRoom;
    /* 0x14 */ Room prevRoom;
    /* 0x28 */ void *roomMemPages[2];
    /* 0x30 */ u8 activeMemPage;
    /* 0x31 */ s8 unk31;
    /* 0x32 */ char pad_32[0x2];                    /* maybe part of unk31[3]? */
    /* 0x34 */ void *activeRoomVram;
    /* 0x38 */ DmaRequest dmaRequest;
    /* 0x58 */ OSMesgQueue loadQueue;
    /* 0x70 */ void *loadMsg[1];
    /* 0x74 */ void *unk74;
    /* 0x78 */ s8 unk78;
    /* 0x79 */ s8 unk79;
    /* 0x7A */ s16 unk_7A;                          /* inferred */
    /* 0x7C */ s16 unk_7C;                          /* inferred */
    /* 0x7E */ char pad_7E[0x2];
} RoomContext;                                      /* size = 0x80 */

struct _mips2c_stack_Kankyo_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ LightContext *sp3C;                  /* inferred */
    /* 0x40 */ LightInfo *sp40;                     /* inferred */
    /* 0x44 */ char pad_44[0x14];
};                                                  /* size = 0x58 */

struct _mips2c_stack_Kankyo_IsSceneUpsideDown {};   /* size 0x0 */

struct _mips2c_stack_func_800F5090 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F50D4 {};              /* size 0x0 */

struct _mips2c_stack_func_800F5954 {};              /* size 0x0 */

struct _mips2c_stack_func_800F5A8C {};              /* size 0x0 */

struct _mips2c_stack_func_800F5B10 {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ f64 sp8;                             /* inferred */
    /* 0x10 */ f64 sp10;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F5CD0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ DmaRequest *sp3C;                    /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x3];
    /* 0x4B */ u8 sp4B;                             /* inferred */
    /* 0x4C */ u8 sp4C;                             /* inferred */
    /* 0x4D */ u8 sp4D;                             /* inferred */
    /* 0x4E */ u8 sp4E;                             /* inferred */
    /* 0x4F */ u8 sp4F;                             /* inferred */
    /* 0x50 */ char pad_50[0x4];                    /* maybe part of sp4F[5]? */
    /* 0x54 */ u32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_800F6834 {};              /* size 0x0 */

struct _mips2c_stack_func_800F694C {};              /* size 0x0 */

struct _mips2c_stack_func_800F6A04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F6A40 {};              /* size 0x0 */

struct _mips2c_stack_func_800F6AB8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F6CEC {};              /* size 0x0 */

struct _mips2c_stack_func_800F6EA4 {};              /* size 0x0 */

struct _mips2c_stack_func_800F6FF8 {
    /* 0x000 */ char pad_0[0x54];
    /* 0x054 */ u8 *sp54;                           /* inferred */
    /* 0x058 */ LightSettings *sp58;                /* inferred */
    /* 0x05C */ u8 *sp5C;                           /* inferred */
    /* 0x060 */ LightSettings *sp60;                /* inferred */
    /* 0x064 */ u8 *sp64;                           /* inferred */
    /* 0x068 */ LightSettings *sp68;                /* inferred */
    /* 0x06C */ u8 *sp6C;                           /* inferred */
    /* 0x070 */ LightSettings *sp70;                /* inferred */
    /* 0x074 */ s32 sp74;                           /* inferred */
    /* 0x078 */ s32 sp78;                           /* inferred */
    /* 0x07C */ s32 sp7C;                           /* inferred */
    /* 0x080 */ char pad_80[0x4];
    /* 0x084 */ s32 sp84;                           /* inferred */
    /* 0x088 */ char pad_88[0x4];
    /* 0x08C */ s16 sp8C;                           /* inferred */
    /* 0x08E */ s16 sp8E;                           /* inferred */
    /* 0x090 */ u8 sp90;                            /* inferred */
    /* 0x091 */ u8 sp91;                            /* inferred */
    /* 0x092 */ char pad_92[0x2];                   /* maybe part of sp91[3]? */
    /* 0x094 */ u8 sp94;                            /* inferred */
    /* 0x095 */ u8 sp95;                            /* inferred */
    /* 0x096 */ u8 sp96;                            /* inferred */
    /* 0x097 */ char pad_97[0xD];                   /* maybe part of sp96[14]? */
    /* 0x0A4 */ ? spA4;                             /* inferred */
    /* 0x0A4 */ char pad_A4[0x1C];
    /* 0x0C0 */ ? spC0;                             /* inferred */
    /* 0x0C0 */ char pad_C0[0x1C];
    /* 0x0DC */ ? spDC;                             /* inferred */
    /* 0x0DC */ char pad_DC[0x1C];
    /* 0x0F8 */ ? spF8;                             /* inferred */
    /* 0x0F8 */ char pad_F8[0x38];
};                                                  /* size = 0x130 */

struct _mips2c_stack_func_800F8554 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800F88C4 {};              /* size 0x0 */

struct _mips2c_stack_func_800F8970 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800F8A9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F8CD4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800F8D84 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x14];                   /* maybe part of sp2C[6]? */
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_800F9728 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800F9824 {
    /* 0x000 */ char pad_0[0x5C];
    /* 0x05C */ f32 *sp5C;                          /* inferred */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ f32 sp64;                           /* inferred */
    /* 0x068 */ char pad_68[0x4];
    /* 0x06C */ f32 sp6C;                           /* inferred */
    /* 0x070 */ f32 sp70;                           /* inferred */
    /* 0x074 */ f32 sp74;                           /* inferred */
    /* 0x078 */ char pad_78[0x44];                  /* maybe part of sp74[18]? */
    /* 0x0BC */ f32 spBC;                           /* inferred */
    /* 0x0C0 */ char pad_C0[0x3];
    /* 0x0C3 */ u8 spC3;                            /* inferred */
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ char pad_CC[0x10];                  /* maybe part of spC8[5]? */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ char pad_E0[0x4];
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ char pad_F4[0x8];                   /* maybe part of spF0[3]? */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ char pad_108[0x10];                 /* maybe part of sp104[5]? */
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ char pad_11C[0x14];
};                                                  /* size = 0x130 */

struct _mips2c_stack_func_800FA39C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800FA3C4 {
    /* 0x000 */ char pad_0[0x78];
    /* 0x078 */ ? *sp78;                            /* inferred */
    /* 0x07C */ char pad_7C[0x8];                   /* maybe part of sp78[3]? */
    /* 0x084 */ Gfx *sp84;                          /* inferred */
    /* 0x088 */ char pad_88[0x3E];                  /* maybe part of sp84[16]? */
    /* 0x0C6 */ s16 spC6;                           /* inferred */
    /* 0x0C8 */ char pad_C8[0xC];                   /* maybe part of spC6[7]? */
    /* 0x0D4 */ f32 spD4;                           /* inferred */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ char pad_F4[0x20];                  /* maybe part of spF0[9]? */
    /* 0x114 */ void *sp114;                        /* inferred */
};                                                  /* size = 0x118 */

struct _mips2c_stack_func_800FA9FC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FAAB4 {};              /* size 0x0 */

struct _mips2c_stack_func_800FAC20 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0xC];                    /* maybe part of sp1C[4]? */
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ char pad_30[0x10];                   /* maybe part of sp2C[5]? */
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_800FAF74 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GraphicsContext *sp1C;               /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FB010 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FB320 {};              /* size 0x0 */

struct _mips2c_stack_func_800FB388 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_800FB758 {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800FB9B4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FBCBC {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ?32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_800FBDEC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ LightContext *sp2C;                  /* inferred */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800FBF3C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800FC158 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800FC3DC {};              /* size 0x0 */

struct _mips2c_stack_func_800FC444 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 *sp24;                           /* inferred */
    /* 0x28 */ u32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x2C];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_800FC64C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ char pad_40[0xC];                    /* maybe part of sp3C[4]? */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad_50[0x14];                   /* maybe part of sp4C[6]? */
    /* 0x64 */ GraphicsContext *sp64;               /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ u8 sp74;                             /* inferred */
    /* 0x75 */ u8 sp75;                             /* inferred */
    /* 0x76 */ u8 sp76;                             /* inferred */
    /* 0x77 */ char pad_77[0x1];
    /* 0x78 */ u8 sp78;                             /* inferred */
    /* 0x79 */ u8 sp79;                             /* inferred */
    /* 0x7A */ u8 sp7A;                             /* inferred */
    /* 0x7B */ char pad_7B[0x3];                    /* maybe part of sp7A[4]? */
    /* 0x7E */ u16 sp7E;                            /* inferred */
    /* 0x80 */ u16 sp80;                            /* inferred */
    /* 0x82 */ u16 sp82;                            /* inferred */
    /* 0x84 */ char pad_84[0x14];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_800FD2B4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800FD538 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u8 sp1C;                             /* inferred */
    /* 0x1D */ u8 sp1D;                             /* inferred */
    /* 0x1E */ u8 sp1E;                             /* inferred */
    /* 0x1F */ char pad_1F[0x1];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FD59C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800FD5E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800FD654 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800FD698 {};              /* size 0x0 */

struct _mips2c_stack_func_800FD750 {};              /* size 0x0 */

struct _mips2c_stack_func_800FD768 {};              /* size 0x0 */

struct _mips2c_stack_func_800FD78C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800FD858 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800FD928 {};              /* size 0x0 */

struct _mips2c_stack_func_800FD980 {};              /* size 0x0 */

struct _mips2c_stack_func_800FDAF8 {};              /* size 0x0 */

struct _mips2c_stack_func_800FDC94 {
    /* 0x000 */ char pad_0[0xD8];
    /* 0x0D8 */ void *spD8;                         /* inferred */
    /* 0x0DC */ char pad_DC[0x8];                   /* maybe part of spD8[3]? */
    /* 0x0E4 */ s32 spE4;                           /* inferred */
    /* 0x0E8 */ s32 spE8;                           /* inferred */
    /* 0x0EC */ char pad_EC[0x4];
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ char pad_F8[0x4];
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
};                                                  /* size = 0x108 */

struct _mips2c_stack_func_800FE390 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FE3E0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800FE484 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE498 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE4A8 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE4B8 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE590 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE5D0 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ u8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FE610 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE620 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE658 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE6F8 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE778 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE788 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE798 {};              /* size 0x0 */

struct _mips2c_stack_func_800FE7A8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800FE9B4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x3];
    /* 0x1F */ u8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800FEA50 {};              /* size 0x0 */

struct _mips2c_stack_func_800FEAB0 {};              /* size 0x0 */

struct _mips2c_stack_func_800FEAC0 {};              /* size 0x0 */

struct _mips2c_stack_func_800FEAF4 {};              /* size 0x0 */

struct _mips2c_stack_get_current_day {};            /* size 0x0 */

struct _mips2c_stack_get_days_elapsed {};           /* size 0x0 */

struct _mips2c_stack_reset_days_elapsed {};         /* size 0x0 */

? func_8013EE24();                                  /* extern */
? func_8013EE38();                                  /* extern */
? func_80143624(f32, void *, s32, s32, s32, u32);   /* extern */
s32 func_80169FFC(GlobalContext *, void *, void *, void *); /* extern */
s32 func_80178A34(s32, s32);                        /* extern */
? func_801A2544(s32, u8, u8, SaveContext *);        /* extern */
? func_801A25E4(s32, u8, u8, SaveContext *);        /* extern */
? func_801A47DC(?, ?, ?, GlobalContext *);          /* extern */
? func_801A4A28(u8, u8, u8, SaveContext *);         /* extern */
s32 Kankyo_IsSceneUpsideDown(GlobalContext *arg0, GraphicsContext *); /* static */
void func_800F5090(s32 arg0, GlobalContext *arg1);  /* static */
s32 func_800F50D4(s32 arg0);                        /* static */
f32 func_800F5A8C(u16 arg0, u16 arg1, u16 arg2, s32, s32); /* static */
f32 func_800F5B10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4); /* static */
void func_800F5CD0(s32 arg0, void *arg1, void *arg2); /* static */
void func_800F6834(void *arg0, s8 arg1);            /* static */
void func_800F694C(void *arg0);                     /* static */
void func_800F6A04();                               /* static */
void func_800F6A40(GlobalContext *arg0);            /* static */
void func_800F6AB8();                               /* static */
void func_800F6CEC(GlobalContext *arg0, u8 arg1, ? *arg2, LightSettings *arg3); /* static */
u8 func_800F6EA4(f32 arg0, f32 arg1, f32 arg2, f32); /* static */
void func_800F8554(GlobalContext *arg0);            /* static */
void func_800F88C4(s32 arg0, s32, u8, s32);         /* static */
void func_800F8970();                               /* static */
void func_800F8A9C(GlobalContext *arg0);            /* static */
void func_800F8CD4(GlobalContext *arg0, EnvironmentContext *arg1, LightContext *arg2, void *arg3, s32 arg4, s16 *arg5); /* static */
void func_800F8D84(GlobalContext *arg0);            /* static */
void func_800F9728(GlobalContext *arg0, ? arg1, ? arg2, ? arg3, ? arg4); /* static */
f32 func_800FA39C();                                /* static */
void func_800FA3C4(GameState *arg0, GameState *arg1, GraphicsContext *arg2, GameState *); /* static */
void func_800FA9FC(GlobalContext *arg0, GameState *arg1, GraphicsContext *arg2); /* static */
void func_800FAAB4(void *arg0, s32 arg1);           /* static */
void func_800FAC20(GraphicsContext **arg0);         /* static */
void func_800FAF74(GraphicsContext **arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4); /* static */
void func_800FB010(GlobalContext *arg0);            /* static */
void func_800FB388(GraphicsContext **arg0, ? arg1); /* static */
void func_800FB758(GlobalContext *arg0);            /* static */
void func_800FB9B4(GlobalContext *arg0);            /* static */
void func_800FBCBC(GlobalContext *arg0);            /* static */
void func_800FBDEC(GlobalContext *arg0);            /* static */
void func_800FC158(GlobalContext *arg0);            /* static */
void func_800FC3DC(GlobalContext *arg0);            /* static */
void func_800FC444(void *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5); /* static */
void func_800FC64C(void *arg0, s32 arg1);           /* static */
? func_800FD2B4(void *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
void func_800FD698(void *arg0, s16 arg1, s16 arg2, f32 arg3); /* static */
? func_800FD768();                                  /* static */
void func_800FD980(GraphicsContext **arg0);         /* static */
void func_800FDAF8(void **arg0, f32 arg1, f32 arg2, u32 arg3, s32 arg4); /* static */
void func_800FDC94(GlobalContext *arg0, Gfx **arg1); /* static */
void func_800FE390(GraphicsContext **arg0);         /* static */
void func_800FE3E0(GlobalContext *arg0);            /* static */
u8 func_800FE4A8();                                 /* static */
s32 func_800FE590(GlobalContext *arg0, SaveContext *); /* static */
u8 func_800FE5D0(GlobalContext *arg0);              /* static */
? func_800FE610(s32 arg0);                          /* static */
? func_800FE6F8(s32 arg0, s16 arg1, s16 arg2);      /* static */
u8 func_800FE778();                                 /* static */
u8 func_800FE788();                                 /* static */
f32 func_800FE798();                                /* static */
void func_800FE7A8(s32 arg0, void *arg1);           /* static */
u8 func_800FE9B4(GlobalContext *arg0);              /* static */
void func_800FEA50(s32 arg0);                       /* static */
void func_800FEAC0();                               /* static */
void func_800FEAF4(void *arg0);                     /* static */
s32 get_current_day();                              /* static */
u32 get_days_elapsed();                             /* static */
void reset_days_elapsed();                          /* static */
extern Gfx D_01000000;
extern ? D_040549A8;
extern ? D_040706E0;
extern ? D_0407AB70;
extern ? D_050089D0;
static f32 D_801BDB90 = 0.0f;
static s32 D_801BDB94 = 0xFFFC;
static s32 D_801BDB98 = 0;
static u16 D_801BDB9C = 0;
static u8 D_801BDBA0 = 0;
static u8 D_801BDBA4 = 0;
static u8 D_801BDBA8 = 0;
static u8 D_801BDBB0 = 0;
static u8 D_801BDBB4 = 0;
static s8 D_801BDBB8 = 0;
static u8 D_801BDBBC = 0;
static s8 D_801BDBC0 = 0;
static s8 D_801BDBC4 = 0;
static ? D_801BDBCC;                                /* unable to generate initializer */
static ? D_801BDCF4;                                /* unable to generate initializer */
static ? D_801BE4D4;                                /* unable to generate initializer */
static ? D_801BE4F4;                                /* unable to generate initializer */
static ? D_801BE534;                                /* unable to generate initializer */
static ? D_801BE6D4;                                /* unable to generate initializer */
static ? D_801BE874;                                /* unable to generate initializer */
static ? D_801BE894;                                /* unable to generate initializer */
static ? D_801BE8BC;                                /* unable to generate initializer */
static ? D_801BE8E4;                                /* unable to generate initializer */
static ? D_801BE90C;                                /* unable to generate initializer */
static ? D_801BE92C;                                /* unable to generate initializer */
static ? D_801BE944;                                /* unable to generate initializer */
static s8 D_801F4DDC;
static u8 D_801F4E30;
static u8 D_801F4E31;
static u8 D_801F4E32;
static ? D_801F4E38;
static f32 D_801F4E44;
static f32 D_801F4E48;
static s16 D_801F4E4C;
static u8 D_801F4E4E;
static ? D_801F4E50;
static f32 D_801F4E5C;
static f32 D_801F4E60;
static s16 D_801F4E64;
static ? D_801F4E68;
static f32 D_801F4E74;
static u16 D_801F4E78;
static u16 D_801F4E7A;
static ? D_801F4E80;
static LightNode *D_801F4EE0;
static LightInfo D_801F4EE8;
static LightNode *D_801F4EF8;
static LightInfo D_801F4F00;
static f32 D_801F4F10;
static f32 D_801F4F14;
static f32 D_801F4F18;
static f32 D_801F4F1C;
static s32 D_801F4F20;
static s32 D_801F4F24;
static f32 D_801F4F28;
static s16 D_801F4F2C;
static u16 D_801F4F2E;
static u8 D_801F4F30;
static u8 D_801F4F31;
static u8 D_801F4F32;
static u8 D_801F4F33;
static u8 D_801F4F34;
static void *D_801F4F38;
static ? D_801DD880;                                /* unable to generate initializer; const */
static ? D_801DD8E0;                                /* unable to generate initializer; const */
static ? D_801DD900;                                /* unable to generate initializer; const */
u8 D_801BDBC8 = 0;
Vec3f D_801D15B0 = {0.0f, 0.0f, 0.0f};
GameInfo *gGameInfo;
SaveContext gSaveContext;

void func_800F5090(s32 arg0, GlobalContext *arg1) {
    D_801BDB94 = func_80178A34(D_801F4F20, D_801F4F24);
    Lights_GlowCheck(arg1);
}

s32 func_800F50D4(s32 arg0) {
    void *temp_a1;

    temp_a1 = (((arg0 >> 0xF) & 7) * 8) + &D_801BE4F4;
    return temp_a1->unk_4 + (((arg0 >> 4) & 0x7FF) << temp_a1->unk_0);
}

void Kankyo_Init(GlobalContext *globalCtx, EnvironmentContext *envCtx) {
    LightInfo *sp40;
    LightContext *sp3C;
    void *sp34;
    GameInfo *temp_v0_3;
    LightContext *temp_a1;
    LightInfo *temp_a0;
    LightInfo *temp_a0_2;
    f32 temp_f16;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v1;
    u16 temp_v0;
    u16 temp_v0_7;
    u8 temp_t6;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_t9;
    u8 temp_v0_4;
    u8 temp_v0_6;
    u8 temp_v1_2;
    s32 phi_a0;
    u8 phi_v0;
    s32 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    arg2 = MIPS2C_ERROR(Read from unset register $a2);
    gGameInfo->data[1057] = 0;
    gSaveContext.unk_3F58 = 0;
    gSaveContext.environmentTime = gSaveContext.time;
    func_800FEAC0();
    temp_v0 = gSaveContext.time;
    if (((s32) temp_v0 >= 0xC000) || ((s32) temp_v0 < 0x4000)) {
        gSaveContext.isNight = 1;
    } else {
        gSaveContext.isNight = 0;
    }
    temp_a0 = &envCtx->unk_28;
    globalCtx->state.gfxCtx->unk_2DC = func_800F5090;
    globalCtx->state.gfxCtx->unk_2E0 = globalCtx;
    sp40 = temp_a0;
    Lights_DirectionalSetInfo(temp_a0, 0x50, 0x50, 0x50, (u8) 0x50, (u8) 0x50, (u8) 0x50);
    temp_a1 = &globalCtx->lightCtx;
    sp3C = temp_a1;
    LightContext_InsertLight(globalCtx, temp_a1, sp40);
    temp_a0_2 = &envCtx->unk_36;
    sp40 = temp_a0_2;
    Lights_DirectionalSetInfo(temp_a0_2, 0x50, 0x50, 0x50, (u8) 0x50, (u8) 0x50, (u8) 0x50);
    LightContext_InsertLight(globalCtx, temp_a1, sp40);
    envCtx->unk_19 = 0;
    envCtx->unk_1A = 0;
    envCtx->unk_21 = 0;
    envCtx->unk_22 = 0;
    envCtx->unk_44 = 0;
    envCtx->unk_10 = 0x63;
    envCtx->unk_11 = 0x63;
    envCtx->unk_84 = 0.0f;
    envCtx->unk_88 = 0.0f;
    if ((globalCtx->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 8)) {
        gSaveContext.day = 1;
    }
    temp_v0_2 = gSaveContext.day;
    if ((temp_v0_2 != 0) && (temp_v0_2 != 1)) {
        if (temp_v0_2 != 2) {
            if (temp_v0_2 != 3) {
                goto block_11;
            }
            envCtx->unk_1F = 4;
            envCtx->unk_20 = 4;
        } else {
            envCtx->unk_1F = 3;
            envCtx->unk_20 = 3;
        }
    } else {
block_11:
        envCtx->unk_1F = 0;
        envCtx->unk_20 = 0;
    }
    envCtx->unk_C1 = 0;
    envCtx->unk_C2 = 0;
    envCtx->unk_E0 = 0;
    envCtx->unk_E1 = 0;
    envCtx->unk_E2 = 0;
    envCtx->unk_E3 = 0;
    envCtx->unk_E4 = 0;
    envCtx->unk_E5 = 0;
    envCtx->unk_E6[0] = 0;
    envCtx->unk_E6[1] = 0;
    envCtx->unk_E6[2] = 0;
    envCtx->unk_E6[3] = 0;
    envCtx->unk_ED = 0;
    envCtx->unk_EE[0] = 0;
    envCtx->unk_EE[1] = 0;
    envCtx->unk_EE[2] = 0;
    envCtx->unk_EE[3] = 0;
    envCtx->unk_EA = 0;
    envCtx->unk_EB = 0;
    envCtx->unk_EC = 0;
    envCtx->unk_DC = 1.0f;
    D_801F4E68.unk_0 = 0;
    D_801F4E68.unk_1 = 0;
    D_801F4E68.unk_2 = 0;
    D_801F4E68.unk_3 = 0;
    D_801F4F2C = 0;
    D_801F4F30 = 0xFF;
    D_801F4F31 = 0;
    D_801F4E30 = 0;
    D_801F4F33 = 0;
    gSaveContext.unk_3F48 = 0;
    envCtx->unk_8C.ambientColor[0] = 0;
    envCtx->unk_8C.ambientColor[1] = 0;
    envCtx->unk_8C.ambientColor[2] = 0;
    envCtx->unk_8C.diffuseColor1[0] = 0;
    envCtx->unk_8C.diffuseColor1[1] = 0;
    envCtx->unk_8C.diffuseColor1[2] = 0;
    envCtx->unk_8C.diffuseColor2[0] = 0;
    envCtx->unk_8C.diffuseColor2[1] = 0;
    envCtx->unk_8C.diffuseColor2[2] = 0;
    envCtx->unk_8C.fogColor[0] = 0;
    envCtx->unk_8C.fogColor[1] = 0;
    envCtx->unk_8C.fogColor[2] = 0;
    envCtx->unk_8C.fogNear = 0;
    envCtx->unk_8C.fogFar = 0;
    envCtx->unk_4 = -(Math_SinS((s16) (gSaveContext.time - 0x8000)) * 120.0f) * 25.0f;
    envCtx->unk_8 = Math_CosS((s16) (gSaveContext.time - 0x8000)) * 120.0f * 25.0f;
    temp_f16 = Math_CosS((s16) (gSaveContext.time - 0x8000)) * 20.0f;
    envCtx->windDir.x = 0x50;
    envCtx->windDir.y = 0x50;
    envCtx->windDir.z = 0x50;
    envCtx->unk_C0 = 0;
    envCtx->unk_C3 = 0xFF;
    envCtx->unk_DA = 0xFFFF;
    envCtx->unk_2 = 0;
    envCtx->unk_C = temp_f16 * 25.0f;
    envCtx->windSpeed = 20.0f;
    gGameInfo->data[15] = 0;
    temp_v0_3 = gGameInfo;
    temp_v0_3->data[15] = temp_v0_3->data[15];
    gGameInfo->data[9] = 0;
    gGameInfo->data[1120] = 0;
    globalCtx->envCtx.unk_F2[0] = 0;
    globalCtx->envCtx.unk_F2[2] = 0;
    globalCtx->envCtx.unk_F2[3] = 0;
    globalCtx->envCtx.unk_F2[4] = 0;
    temp_v1 = gSaveContext.day;
    D_801F4E31 = envCtx->unk_17;
    phi_a0 = 0;
    if (temp_v1 != 0) {
        phi_a0 = (temp_v1 - 1) & 0xFF;
    }
    temp_t8 = phi_a0 + (D_801F4E31 * 3);
    temp_v0_4 = temp_t8 & 0xFF;
    envCtx->unk_17 = temp_t8;
    envCtx->unk_18 = temp_v0_4;
    temp_v1_2 = D_801F4E31;
    phi_v0_2 = (s32) temp_v0_4;
    if (temp_v1_2 == 4) {
        envCtx->unk_17 = 0xE;
        phi_v0 = 0xEU & 0xFF;
        goto block_30;
    }
    if (temp_v1_2 == 5) {
        envCtx->unk_17 = 0x10;
        phi_v0 = 0x10U & 0xFF;
        goto block_30;
    }
    if (temp_v1_2 == 6) {
        envCtx->unk_17 = 0x11;
        phi_v0 = 0x11U & 0xFF;
        goto block_30;
    }
    temp_t6 = phi_a0 + 0x12;
    if (temp_v1_2 == 7) {
        envCtx->unk_17 = temp_t6;
        phi_v0 = temp_t6 & 0xFF;
        goto block_30;
    }
    temp_t7 = phi_a0 + 0x15;
    if (temp_v1_2 == 8) {
        envCtx->unk_17 = temp_t7;
        phi_v0 = temp_t7 & 0xFF;
        goto block_30;
    }
    if (temp_v1_2 == 9) {
        envCtx->unk_17 = 0x18;
        phi_v0 = 0x18U & 0xFF;
        goto block_30;
    }
    temp_t9 = phi_a0 + 0x19;
    if (temp_v1_2 == 0xA) {
        envCtx->unk_17 = temp_t9;
        phi_v0 = temp_t9 & 0xFF;
block_30:
        envCtx->unk_18 = phi_v0;
        phi_v0_2 = (s32) phi_v0;
    }
    if (phi_a0 >= 3) {
        envCtx->unk_17 = 0xD;
        envCtx->unk_18 = 0xD;
        phi_v0_2 = 0xDU & 0xFF;
    }
    if (phi_v0_2 >= 0x1C) {
        envCtx->unk_17 = 0;
        envCtx->unk_18 = 0;
    }
    D_801F4E74 = 0.0f;
    if ((globalCtx->sceneNum == 0x13) && ((temp_v0_5 = gSaveContext.sceneSetupIndex, (temp_v0_5 == 0)) || (temp_v0_5 == 1)) && ((gSaveContext.weekEventReg[52] & 0x20) == 0)) {
        globalCtx->skyboxId = 3;
        envCtx->unk_1F = 5;
        envCtx->unk_20 = 5;
        D_801F4E74 = 1.0f;
    }
    if ((gSaveContext.unk_3DBB != 0) || (gSaveContext.respawnFlag != 0)) {
        if (D_801BDBB0 == 2) {
            if ((gSaveContext.weekEventReg[52] & 0x20) == 0) {
                globalCtx->skyboxId = 3;
                envCtx->unk_1F = 5;
                envCtx->unk_20 = 5;
                D_801F4E74 = 1.0f;
            } else {
                D_801BDBB0 = 0;
            }
        }
        globalCtx->envCtx.unk_F2[2] = 0;
        globalCtx->envCtx.unk_F2[3] = 0;
        temp_v0_6 = D_801BDBB0;
        if (temp_v0_6 == 1) {
            if ((((s32) gSaveContext.day % 5) == 2) && (temp_v0_7 = gSaveContext.time, (((s32) temp_v0_7 < 0x4AAA) == 0)) && ((s32) temp_v0_7 < 0xBAAA)) {
                sp34 = globalCtx + 0x10000;
                if (func_800FE4B8(globalCtx) != 0) {
                    globalCtx->envCtx.unk_F2[0] = 0x3C;
                }
                globalCtx->envCtx.unk_F2[1] = 0x3C;
            } else {
                D_801BDBB0 = 0;
                func_800FD858(globalCtx);
            }
        } else if (temp_v0_6 == 3) {
            globalCtx->envCtx.unk_F2[2] = 0x80;
            globalCtx->envCtx.unk_F2[3] = 0x80;
            func_800FD858(globalCtx);
        } else {
            func_800FD858(globalCtx);
        }
    } else {
        D_801BDBB0 = 0;
        func_800FD858(globalCtx);
    }
    D_801BDBB8 = 0;
    D_801BDBB4 = 0;
    D_801BDBBC = 0;
    gSaveContext.unk_3DBB = 0;
    gGameInfo->data[1443] = 0x50;
    gGameInfo->data[1444] = 0x50;
    gGameInfo->data[1445] = 0x50;
    gGameInfo->data[1446] = -0x50;
    gGameInfo->data[1447] = -0x50;
    gGameInfo->data[1448] = -0x50;
    gGameInfo->data[1449] = 0xA;
    gGameInfo->data[1450] = 0;
    gGameInfo->data[1451] = 0;
    gGameInfo->data[1452] = 0;
    gGameInfo->data[1453] = 0;
    gGameInfo->data[1454] = 0;
    D_801F4DDC = 1;
    phi_v0_3 = 0;
    phi_v0_4 = 0;
    do {
        temp_v0_8 = phi_v0_3 + 1;
        *(&D_801F4E80 + (phi_v0_3 << 5)) = 0xFF;
        phi_v0_3 = temp_v0_8;
    } while ((s32) temp_v0_8 < 3);
    globalCtx->roomCtx.unk_7A = 0;
    globalCtx->roomCtx.unk_7C = 0;
    do {
        temp_v0_9 = phi_v0_4 + 1;
        globalCtx->csCtx.npcActions[phi_v0_4] = NULL;
        phi_v0_4 = temp_v0_9;
    } while ((s32) temp_v0_9 < 0xA);
    D_801F4E32 = 0;
    D_801F4E4E = 0;
    func_8013EE24();
    D_801BDB98 = 0;
    D_801F4E7A = 0;
    D_801BDBA8 = 0;
    D_801F4F32 = 0;
    D_801F4F1C = 255.0f;
    func_800F8A9C(globalCtx);
}

u32 func_800F5954(u8 *param_1, u32 param_2, u32 param_3, u8 param_4, u8 param_5) {
    s16 temp_a2;
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_lo;
    u8 temp_t1;
    u8 temp_t7;
    u8 temp_t8;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    temp_a1 = param_2 & 0xFF;
    temp_t1 = *param_1;
    temp_v1 = temp_a1 - temp_t1;
    if (temp_a1 != temp_t1) {
        temp_lo = (s32) temp_v1 / (s32) (param_3 & 0xFF);
        phi_v0 = (s32) (s16) temp_lo;
        phi_v0_2 = (s32) (s16) temp_lo;
        if (((s32) (s16) temp_lo >= (s32) (s16) param_5) || (temp_a2 = (s32) param_5 * -1, (((s32) temp_a2 < (s32) (s16) temp_lo) == 0))) {
            if ((s32) (s16) param_4 < (s32) (s16) temp_lo) {
                phi_v0_2 = (s32) (s16) param_4;
            }
            phi_v0_3 = phi_v0_2;
            if (phi_v0_2 < (s32) (s16) ((s32) param_4 * -1)) {
                phi_v0_3 = (s32) (s16) ((s32) param_4 * -1);
            }
            *param_1 = temp_t1 + phi_v0_3;
        } else {
            temp_t8 = temp_t1 + (s16) param_5;
            if ((s32) (s16) temp_lo < (s32) (s16) param_5) {
                *param_1 = temp_t8;
                phi_v0 = (s32) (s16) param_5;
                if (temp_a1 < (temp_t8 & 0xFF)) {
                    *param_1 = (u8) temp_a1;
                }
            }
            if ((s32) temp_a2 < phi_v0) {
                temp_t7 = *param_1 + temp_a2;
                *param_1 = temp_t7;
                if ((temp_t7 & 0xFF) < temp_a1) {
                    *param_1 = (u8) temp_a1;
                }
            }
        }
    }
    return temp_v1 & 0xFF;
}

f32 func_800F5A8C(u16 arg0, u16 arg1, u16 arg2) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    temp_f0 = (f32) (temp_a0 - (arg1 & 0xFFFF));
    if ((temp_f0 != 0.0f) && (temp_f2 = 1.0f - ((f32) (temp_a0 - (arg2 & 0xFFFF)) / temp_f0), !(temp_f2 >= 1.0f))) {
        return temp_f2;
    }
    return 1.0f;
}

f32 func_800F5B10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    f32 phi_f14;
    f32 phi_f20;
    f32 phi_f20_2;

    temp_a2 = arg2 & 0xFFFF;
    temp_a1 = arg1 & 0xFFFF;
    temp_a0 = arg0 & 0xFFFF;
    if (temp_a1 >= temp_a2) {
        return 0.0f;
    }
    if (temp_a2 >= temp_a0) {
        return 1.0f;
    }
    temp_f2 = (f32) temp_a1;
    temp_f0 = (f32) temp_a0;
    if ((temp_f0 <= temp_f2) || (temp_f12 = temp_f0 - temp_f2, temp_f16 = (f32) (arg3 & 0xFFFF), temp_f18 = (f32) arg4, (temp_f12 < (temp_f16 + temp_f18)))) {
        return 0.0f;
    }
    temp_f22 = 1.0f / (((2.0f * temp_f12) - temp_f16) - temp_f18);
    if (temp_f16 != 0.0f) {
        temp_f14 = (f32) temp_a2 - temp_f2;
        phi_f14 = temp_f14;
        if (temp_f14 <= temp_f16) {
            return (temp_f22 * temp_f14 * temp_f14) / temp_f16;
        }
        phi_f20 = temp_f22 * temp_f16;
        goto block_12;
    }
    phi_f14 = (f32) temp_a2 - temp_f2;
    phi_f20 = 0.0f;
block_12:
    if (phi_f14 <= (temp_f12 - temp_f18)) {
        return phi_f20 + (2.0f * temp_f22 * (phi_f14 - temp_f16));
    }
    temp_f20 = phi_f20 + (2.0f * temp_f22 * ((temp_f12 - temp_f16) - temp_f18));
    phi_f20_2 = temp_f20;
    if (temp_f18 != 0.0f) {
        temp_f20_2 = temp_f20 + (temp_f22 * temp_f18);
        phi_f20_2 = temp_f20_2;
        if (phi_f14 < temp_f12) {
            temp_f2_2 = temp_f12 - phi_f14;
            phi_f20_2 = temp_f20_2 - ((temp_f22 * temp_f2_2 * temp_f2_2) / temp_f18);
        }
    }
    return phi_f20_2;
}

void func_800F5CD0(s32 arg0, void *arg1, void *arg2) {
    u32 sp54;
    u8 sp4F;
    u8 sp4E;
    u8 sp4D;
    u8 sp4C;
    u8 sp4B;
    f32 sp44;
    DmaRequest *sp3C;
    void *sp38;
    s32 sp34;
    GameInfo *temp_v0_3;
    OSMesgQueue *temp_a0_3;
    OSMesgQueue *temp_a0_4;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_t2_3;
    s32 temp_t4;
    u16 temp_a0_2;
    u16 temp_t0;
    u16 temp_t7;
    u16 temp_t8;
    u16 temp_v0;
    u8 temp_a1;
    u8 temp_ra;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t2;
    u8 temp_t2_2;
    u8 temp_t3;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t7_2;
    u8 temp_t9;
    u8 temp_v0_2;
    void *temp_t0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *phi_v1;
    s32 phi_a3;
    s16 phi_t1;
    s32 phi_a3_2;
    f32 phi_f0;
    f32 phi_f18;
    DmaRequest *phi_t2;
    u8 phi_t1_2;
    f32 phi_f12;
    f32 phi_f18_2;

    temp_a0 = arg0 & 0xFF;
    sp4D = 0xFF;
    sp4C = 0xFF;
    sp4B = 0;
    phi_t1 = 0xFF;
    phi_f12 = (bitwise f32) 0U;
    phi_t2 = (DmaRequest *)0xFF;
    if ((s32) arg1->unk_17 >= 0x1C) {
        arg1->unk_17 = 0U;
    }
    if ((temp_a0 == 1) || ((temp_a0 == 3) && (D_801F4E74 < 1.0f))) {
        phi_a3 = 0;
        if (arg1->unk_15 == 0) {
            temp_t0 = gSaveContext.environmentTime;
            phi_v1 = (arg1->unk_17 * 0x48) + &D_801BDCF4;
loop_7:
            if (((s32) temp_t0 >= (s32) phi_v1->unk_0) && ((temp_v0 = phi_v1->unk_2, (((s32) temp_t0 < (s32) temp_v0) != 0)) || (temp_v0 == 0xFFFF))) {
                temp_t1 = phi_v1->unk_4;
                temp_t2 = phi_v1->unk_5;
                if (temp_t2 == temp_t1) {
                    D_801BDBBC = 0;
                } else {
                    D_801BDBBC = 1;
                }
                if (D_801BDBBC != 0) {
                    temp_v1 = (arg1->unk_17 * 0x48) + phi_a3 + &D_801BDCF4;
                    sp4E = temp_t2;
                    sp4F = temp_t1;
                    sp34 = phi_a3;
                    sp4B = (u8) (u32) (func_800F5A8C(0U, temp_v1->unk_2, temp_v1->unk_0, temp_t0 & 0xFFFF, phi_a3) * 255.0f);
                } else {
                    sp4E = temp_t2;
                    sp4F = temp_t1;
                    temp_v1_2 = (arg1->unk_17 * 0x48) + phi_a3 + &D_801BDCF4;
                    sp34 = phi_a3;
                    if (((u32) (func_800F5A8C(0U, temp_v1_2->unk_2, temp_v1_2->unk_0, temp_t0 & 0xFFFF, phi_a3) * 255.0f) & 0xFF) < 0x80) {
                        sp4B = 0xFF;
                    } else {
                        sp4B = 0;
                    }
                    temp_v0_2 = arg1->unk_19;
                    if ((temp_v0_2 != 0) && ((s32) temp_v0_2 < 3)) {
                        arg1->unk_19 = (u8) (temp_v0_2 + 1);
                        sp4B = 0;
                    }
                }
                temp_v1_3 = (arg1->unk_17 * 0x48) + phi_a3 + &D_801BDCF4;
                sp4E = phi_v1->unk_5;
                sp4F = phi_v1->unk_4;
                sp34 = phi_a3;
                sp4D = temp_v1_3->unk_6;
                sp4C = temp_v1_3->unk_7;
                phi_t1 = (s16) phi_v1->unk_4;
                phi_a3_2 = phi_a3;
                phi_f12 = func_800F5A8C(temp_v1_3->unk_2, temp_v1_3->unk_0, gSaveContext.environmentTime, phi_a3);
                phi_t2 = (DmaRequest *) phi_v1->unk_5;
            } else {
                temp_a3 = phi_a3 + 8;
                phi_v1 += 8;
                phi_a3 = temp_a3;
                phi_a3_2 = temp_a3;
                if (temp_a3 != 0x48) {
                    goto loop_7;
                }
            }
            temp_v0_3 = gGameInfo;
            phi_t1_2 = (u8) phi_t1;
            if (temp_v0_3->data[1120] != 0) {
                temp_t2_2 = temp_v0_3->unk_8E3;
                phi_t2 = (DmaRequest *) temp_t2_2;
                phi_t1_2 = temp_t2_2;
            } else {
                temp_v0_3->data[1127] = phi_t1;
            }
            if ((s32) arg1->unk_19 >= 3) {
                temp_a1 = arg1->unk_18;
                temp_v1_4 = (arg1->unk_17 * 0x48) + phi_a3_2 + &D_801BDCF4;
                temp_v0_4 = (temp_a1 * 0x48) + phi_a3_2 + &D_801BDCF4;
                temp_t1_2 = temp_v1_4->unk_4;
                sp4D = temp_v1_4->unk_6;
                sp4C = temp_v0_4->unk_7;
                temp_t8 = arg1->unk_24;
                temp_f0 = (f32) temp_t8;
                phi_f0 = temp_f0;
                phi_t2 = (DmaRequest *) temp_v0_4->unk_5;
                phi_t1_2 = temp_t1_2;
                if ((s32) temp_t8 < 0) {
                    phi_f0 = temp_f0 + 4294967296.0f;
                }
                temp_a0_2 = arg1->unk_1A;
                temp_t7 = temp_a0_2 - 1;
                temp_f18 = (f32) temp_a0_2;
                phi_f18 = temp_f18;
                if ((s32) temp_a0_2 < 0) {
                    phi_f18 = temp_f18 + 4294967296.0f;
                }
                temp_f2 = (phi_f0 - phi_f18) / phi_f0;
                sp4B = (u8) (u32) (temp_f2 * 255.0f);
                arg1->unk_1A = temp_t7;
                phi_f12 = temp_f2;
                if ((temp_t7 & 0xFFFF) <= 0) {
                    arg1->unk_19 = 0U;
                    arg1->unk_17 = temp_a1;
                }
            }
            sp3C = phi_t2;
            if ((phi_t1_2 != arg1->unk_10) && (arg1->unk_44 == 0)) {
                arg1->unk_44 = 1;
                temp_v0_5 = (phi_t1_2 * 0x10) + &D_801BE4D4;
                temp_a0_3 = arg1 + 0x68;
                sp34 = (s32) temp_a0_3;
                sp54 = temp_v0_5->unk_4 - temp_v0_5->unk_0;
                sp38 = temp_v0_5;
                sp44 = phi_f12;
                sp4E = (u8) phi_t2;
                sp4F = phi_t1_2;
                osCreateMesgQueue(temp_a0_3, arg1 + 0x80, 1);
                DmaMgr_SendRequestImpl(arg1 + 0x48, arg2->unk_168, temp_v0_5->unk_0, sp54, 0, (OSMesgQueue *) sp34, NULL);
                arg1->unk_10 = phi_t1_2;
            }
            if ((sp3C != arg1->unk_11) && (arg1->unk_44 == 0)) {
                arg1->unk_44 = 0xB;
                temp_v0_6 = ((u8) phi_t2 * 0x10) + &D_801BE4D4;
                temp_a0_4 = arg1 + 0x68;
                sp54 = temp_v0_6->unk_4 - temp_v0_6->unk_0;
                sp34 = (s32) temp_a0_4;
                sp3C = arg1 + 0x48;
                sp38 = temp_v0_6;
                sp44 = phi_f12;
                sp4E = (u8) phi_t2;
                osCreateMesgQueue(temp_a0_4, arg1 + 0x80, 1);
                DmaMgr_SendRequestImpl(sp3C, arg2->unk_16C, temp_v0_6->unk_0, sp54, 0, (OSMesgQueue *) sp34, NULL);
                arg1->unk_11 = (u8) phi_t2;
            }
            if ((arg1->unk_44 == 1) || (arg1->unk_44 == 0xB)) {
                sp44 = phi_f12;
                if (osRecvMesg(arg1 + 0x68, NULL, 0) == 0) {
                    arg1->unk_44 = 0;
                }
            }
            arg1->unk_13 = sp4B;
            temp_t2_3 = sp4D * 4;
            temp_v0_7 = temp_t2_3 + &D_801BE534;
            temp_t3 = temp_v0_7->unk_0;
            temp_t4 = sp4C * 4;
            temp_v1_5 = temp_t4 + &D_801BE534;
            temp_t5 = temp_v0_7->unk_1;
            temp_ra = temp_v0_7->unk_2;
            temp_t0_2 = temp_t2_3 + &D_801BE6D4;
            temp_t6 = temp_t0_2->unk_0;
            sp38 = (void *) temp_t6;
            if ((s32) temp_t6 < 0) {

            }
            temp_t7_2 = temp_t0_2->unk_1;
            sp38 = (void *) temp_t7_2;
            if ((s32) temp_t7_2 < 0) {

            }
            temp_t9 = temp_t0_2->unk_2;
            sp3C = (DmaRequest *) temp_t9;
            temp_f18_2 = (f32) temp_t9;
            phi_f18_2 = temp_f18_2;
            if ((s32) temp_t9 < 0) {
                phi_f18_2 = temp_f18_2 + 4294967296.0f;
            }
            func_80143624(phi_f12, arg2, (u32) ((f32) temp_t3 + ((f32) (temp_v1_5->unk_0 - temp_t3) * phi_f12)) & 0xFF, (u32) ((f32) temp_t5 + ((f32) (temp_v1_5->unk_1 - temp_t5) * phi_f12)) & 0xFF, (u32) ((f32) temp_ra + ((f32) (temp_v1_5->unk_2 - temp_ra) * phi_f12)) & 0xFF, (u32) (phi_f18_2 + ((f32) ((temp_t4 + &D_801BE6D4)->unk_2 - temp_t9) * phi_f12)));
        }
    }
}

void func_800F6834(void *arg0, s8 arg1) {
    s8 phi_a1;

    phi_a1 = arg1;
    if (arg1 == 0x1F) {
        phi_a1 = 0;
    }
    if (arg0->unk_17022 == 0) {
        if (D_801F4F31 == 0) {
            D_801F4F31 = 1;
            D_801BDBB4 = arg0->unk_17024;
            if (phi_a1 != arg0->unk_17023) {
                arg0->unk_17023 = phi_a1;
                arg0->unk_17024 = phi_a1;
                return;
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
        if ((phi_a1 != arg0->unk_17023) && (arg0->unk_17026 == 0)) {
            arg0->unk_17025 = 1;
            arg0->unk_17024 = phi_a1;
            arg0->unk_17028 = 0x14;
            arg0->unk_17026 = (u16) arg0->unk_17028;
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk_170C7 == 0xFF) {
        if (D_801F4F31 == 0) {
            D_801F4F31 = 1;
            D_801BDBB4 = arg0->unk_170C5;
        }
        arg0->unk_170C4 = 0;
        arg0->unk_170C7 = phi_a1;
    }
}

void func_800F694C(void *arg0) {
    if (arg0->unk_17022 == 0) {
        if (D_801F4F31 != 0) {
            D_801F4F31 = 0;
            arg0->unk_17023 = (u8) D_801BDBB4;
            arg0->unk_17024 = (u8) D_801BDBB4;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    if (D_801F4F31 != 0) {
        D_801F4F31 = 0;
        arg0->unk_170C5 = (u8) D_801BDBB4;
        arg0->unk_170C4 = 0;
        arg0->unk_170C7 = 0xFF;
        arg0->unk_170E0 = 1.0f;
    }
}

void func_800F6A04(void) {
    s32 temp_v0;

    temp_v0 = gSaveContext.gameMode;
    if ((temp_v0 != 0) && (temp_v0 != 3)) {
        func_8013EE38();
    }
}

void func_800F6A40(GlobalContext *arg0) {
    u8 temp_v0;

    if ((arg0->pauseCtx.state == 0) && (arg0->pauseCtx.debugState == 0) && ((temp_v0 = arg0->skyboxId, (temp_v0 == 1)) || (temp_v0 == 3))) {
        arg0->skyboxCtx.rotY -= (f32) gGameInfo->data[15] * 0.0001f;
    }
}

void func_800F6AB8(void) {
    s32 temp_v0_2;
    u16 temp_t6;
    u16 temp_v0;

    temp_v0 = gSaveContext.nextDayTime;
    if (((s32) temp_v0 >= 0xFF00) && (temp_t6 = temp_v0 - 0x10, (temp_v0 != 0xFFFF))) {
        temp_v0_2 = temp_t6 & 0xFFFF;
        gSaveContext.nextDayTime = temp_t6;
        if (temp_v0_2 == 0xFF0E) {
            play_sound(0x2813U);
            gSaveContext.nextDayTime = 0xFFFF;
            return;
        }
        if (temp_v0_2 == 0xFF0D) {
            func_8019F128(0x28AEU);
            gSaveContext.nextDayTime = 0xFFFF;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

/*
Failed to decompile function func_800F6B44:

Label L800F6BC4 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_800F6CEC(GlobalContext *arg0, u8 arg1, ? *arg2, LightSettings *arg3) {
    ? *temp_t2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_t1;
    s32 temp_t3;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v1_2;
    s32 phi_t1;
    ? *phi_t2;

    temp_a1 = arg1 & 0xFF;
    temp_a0 = gSaveContext.day;
    if ((temp_a0 >= 2) && (temp_a1 >= 4) && (temp_a1 < 8)) {
        temp_t3 = arg3 + (((temp_a0 * 4) + 4) * 0x16);
        temp_v1 = temp_a1 % 4;
        phi_t1 = 0;
        phi_t2 = arg2;
        do {
            temp_v0 = temp_t3 + (temp_v1 * 0x16) + phi_t1;
            temp_a0_2 = arg3 + (temp_v1 * 0x16) + phi_t1;
            temp_t1 = phi_t1 + 1;
            temp_t2 = phi_t2 + 2;
            temp_t2->unk_-2 = (s16) (temp_v0->unk_0 - temp_a0_2->unk_0);
            temp_t2->unk_4 = (s16) (temp_v0->unk_6 - temp_a0_2->unk_6);
            temp_t2->unk_A = (s16) (temp_v0->unk_C - temp_a0_2->unk_C);
            temp_t2->unk_10 = (s16) (temp_v0->unk_F - temp_a0_2->unk_F);
            phi_t1 = temp_t1;
            phi_t2 = temp_t2;
        } while (temp_t1 != 3);
        temp_v0_2 = temp_v1 * 0x16;
        arg2->unk_18 = (s16) ((temp_t3 + temp_v0_2)->unk_12 - (arg3 + temp_v0_2)->unk_12);
    }
    if ((temp_a1 >= 4) && (temp_a1 < 8) && (D_801BDBB0 == 1)) {
        arg2->unk_0 = -0x32;
        arg2->unk_2 = -0x64;
        arg2->unk_4 = -0x64;
        arg2->unk_6 = -0x64;
        arg2->unk_8 = -0x64;
        arg2->unk_A = -0x64;
        arg2->unk_C = -0x64;
        arg2->unk_E = -0x64;
        arg2->unk_10 = -0x64;
        temp_v1_2 = arg3 + (temp_a1 * 0x16);
        arg2->unk_12 = (s16) (0x1E - temp_v1_2->unk_F);
        arg2->unk_14 = (s16) (0x1E - temp_v1_2->unk_10);
        arg2->unk_16 = (s16) (0x2D - temp_v1_2->unk_11);
    }
}

u8 func_800F6EA4(f32 arg0, f32 arg1, f32 arg2) {
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f0;
    f32 phi_f0_2;

    if (arg0 < 0.0f) {
        phi_f12 = 0.0f;
    } else {
        if (arg0 > 255.0f) {
            phi_f0 = 255.0f;
        } else {
            phi_f0 = arg0;
        }
        phi_f12 = phi_f0;
    }
    if (arg1 < 0.0f) {
        phi_f14 = 0.0f;
    } else {
        if (arg1 > 255.0f) {
            phi_f0_2 = 255.0f;
        } else {
            phi_f0_2 = arg1;
        }
        phi_f14 = phi_f0_2;
    }
    return (u32) (((phi_f12 - phi_f14) * arg2) + phi_f14) & 0xFF;
}

s32 Kankyo_IsSceneUpsideDown(GlobalContext *arg0) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->sceneNum;
    phi_v1 = 0;
    if ((temp_v0 == 0x59) || (temp_v0 == 0x18)) {
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_800F6FF8(GlobalContext *globalCtx, EnvironmentContext *envCtx, LightContext *lightCtx) {
    ? spF8;
    ? spDC;
    ? spC0;
    ? spA4;
    u8 sp96;
    u8 sp95;
    u8 sp94;
    u8 sp91;
    u8 sp90;
    s16 sp8E;
    s16 sp8C;
    s32 sp84;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    LightSettings *sp70;
    u8 *sp6C;
    LightSettings *sp68;
    u8 *sp64;
    LightSettings *sp60;
    u8 *sp5C;
    LightSettings *sp58;
    u8 *sp54;
    EnvironmentContext *temp_s2_2;
    EnvironmentContext *temp_s2_3;
    EnvironmentContext *temp_s2_4;
    EnvironmentContext *temp_v1_4;
    EnvironmentContext *temp_v1_6;
    LightSettings *temp_a0_3;
    LightSettings *temp_a3;
    LightSettings *temp_s4;
    LightSettings *temp_t0;
    LightSettings *temp_v0_11;
    LightSettings *temp_v0_14;
    LightSettings *temp_v0_8;
    LightSettings *temp_v1_7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f16_5;
    f32 temp_f16_6;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f4;
    f32 temp_f8;
    f32 temp_f8_2;
    s16 temp_a1_6;
    s16 temp_a2_2;
    s16 temp_s0_2;
    s16 temp_t8;
    s16 temp_v0_15;
    s16 temp_v0_16;
    s16 temp_v0_17;
    s16 temp_v0_18;
    s16 temp_v0_9;
    s32 temp_a0_7;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3_2;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_t7_2;
    s32 temp_v0_10;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_19;
    s32 temp_v0_20;
    s32 temp_v1_3;
    s8 temp_a1_3;
    s8 temp_a1_4;
    u16 temp_a2;
    u16 temp_s0;
    u16 temp_s1;
    u16 temp_t4;
    u16 temp_t7;
    u16 temp_v0_2;
    u16 temp_v1_5;
    u8 *temp_a0_2;
    u8 *temp_v0_4;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 temp_a0;
    u8 temp_a0_4;
    u8 temp_a0_5;
    u8 temp_a0_6;
    u8 temp_a1_5;
    u8 temp_s2;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    void *phi_a0;
    void *phi_v1;
    s32 phi_v1_2;
    s32 phi_a3;
    s32 phi_t0;
    s32 phi_t1;
    ? *phi_s0;
    s32 phi_s1;
    f32 phi_f10;
    f32 phi_f26;
    EnvironmentContext *phi_s2;
    u16 phi_v0;
    s32 phi_s1_2;
    ? *phi_s0_2;
    f32 phi_f16;
    EnvironmentContext *phi_s2_2;
    f32 phi_f16_2;
    ? *phi_s0_3;
    s32 phi_s1_3;
    f32 phi_f16_3;
    EnvironmentContext *phi_s2_3;
    s32 phi_a1;
    s32 phi_v0_2;
    EnvironmentContext *phi_v1_3;
    s32 phi_v0_3;
    f32 phi_f16_4;
    s32 phi_v0_4;
    f32 phi_f10_2;
    EnvironmentContext *phi_v1_4;
    f32 phi_f8;
    f32 phi_f10_3;
    f32 phi_f16_5;
    u16 phi_t8;
    EnvironmentContext *phi_a1_2;
    EnvironmentContext *phi_v1_5;
    LightContext *phi_a0_2;
    s32 phi_a3_2;
    f32 phi_f0;
    f32 phi_f16_6;

    __osMemset((void *) &spA4, 0, 0x70U);
    temp_a0 = envCtx->unk_C3;
    temp_s4 = globalCtx->envCtx.lightSettingsList;
    phi_f26 = 0.0f;
    if ((temp_a0 != 0xFF) && (envCtx->unk_E0 != 2)) {
        temp_v0 = envCtx->unk_C1;
        if ((temp_a0 != temp_v0) && (envCtx->unk_DC >= 1.0f) && ((s32) temp_a0 < 0x20)) {
            envCtx->unk_DC = 0.0f;
            envCtx->unk_C2 = temp_v0;
            envCtx->unk_C1 = temp_a0;
        }
    }
    if (temp_a0 != 0xFE) {
        if ((envCtx->unk_1E == 0) && (temp_a0 == 0xFF)) {
            temp_a2 = gSaveContext.environmentTime;
            phi_a0 = (envCtx->unk_20 * 0x2A) + &D_801BDBCC;
            phi_v1 = (envCtx->unk_1F * 0x2A) + &D_801BDBCC;
            phi_a1 = 0;
loop_10:
            temp_s0 = phi_v1->unk_0;
            temp_s1 = phi_v1->unk_2;
            temp_s2 = phi_v1->unk_4;
            sp96 = phi_a0->unk_4;
            if (((s32) temp_a2 >= (s32) temp_s0) && (((s32) temp_a2 < (s32) temp_s1) || (temp_s1 == 0xFFFF))) {
                sp94 = phi_a0->unk_5;
                sp95 = phi_v1->unk_5;
                func_800F6CEC(globalCtx, temp_s2 & 0xFF, &spA4, temp_s4);
                func_800F6CEC(globalCtx, sp95, &spC0, temp_s4);
                func_800F6CEC(globalCtx, sp96, &spDC, temp_s4);
                func_800F6CEC(globalCtx, sp94, &spF8, temp_s4);
                phi_a3 = (s32) sp94;
                if (((s32) sp94 >= (s32) envCtx->numLightSettings) && (D_801BDBA8 == 0)) {
                    D_801BDBA8 = 1;
                }
                phi_t0 = (s32) temp_s2;
                if (((s32) temp_s2 >= (s32) envCtx->numLightSettings) || (phi_v1_2 = (s32) sp95, phi_t1 = (s32) sp96, (((s32) sp95 < (s32) envCtx->numLightSettings) == 0)) || ((s32) sp96 >= (s32) envCtx->numLightSettings) || ((s32) sp94 >= (s32) envCtx->numLightSettings)) {
                    sp96 = 0;
                    phi_v1_2 = 0;
                    phi_a3 = 0;
                    phi_t0 = 0;
                    phi_t1 = 0;
                }
                sp78 = phi_v1_2;
                sp84 = phi_a3;
                sp7C = phi_t0;
                sp74 = phi_t1;
                temp_f0 = func_800F5A8C(temp_s1 & 0xFFFF, temp_s0 & 0xFFFF, gSaveContext.environmentTime, phi_a3);
                D_801BDBA0 = sp7C & 3;
                D_801BDBA4 = sp78 & 3;
                D_801BDB90 = temp_f0;
                phi_s0 = &spA4;
                phi_s1 = 0;
                phi_s1_2 = 0;
                phi_s1_3 = 0;
                if (envCtx->unk_21 != 0) {
                    temp_t4 = envCtx->unk_24;
                    temp_f0_2 = (f32) temp_t4;
                    phi_f0 = temp_f0_2;
                    if ((s32) temp_t4 < 0) {
                        phi_f0 = temp_f0_2 + 4294967296.0f;
                    }
                    temp_v0_2 = envCtx->unk_22;
                    temp_t7 = temp_v0_2 - 1;
                    temp_f16 = (f32) temp_v0_2;
                    phi_f16_6 = temp_f16;
                    if ((s32) temp_v0_2 < 0) {
                        phi_f16_6 = temp_f16 + 4294967296.0f;
                    }
                    envCtx->unk_22 = temp_t7;
                    phi_f26 = (phi_f0 - phi_f16_6) / phi_f0;
                    if ((temp_t7 & 0xFFFF) <= 0) {
                        envCtx->unk_21 = 0;
                        envCtx->unk_1F = envCtx->unk_20;
                    }
                }
                sp60 = &temp_s4[sp84];
                sp58 = &temp_s4[sp74];
                sp68 = &temp_s4[sp7C];
                sp70 = &temp_s4[sp78];
                phi_s2 = envCtx;
                do {
                    sp90 = func_800F6EA4((f32) (phi_s0->unk_1C + sp70->ambientColor[phi_s1]), (f32) (phi_s0->unk_0 + sp68->ambientColor[phi_s1]), temp_f0);
                    temp_v0_3 = func_800F6EA4((f32) (phi_s0->unk_54 + sp60->ambientColor[phi_s1]), (f32) (phi_s0->unk_38 + sp58->ambientColor[phi_s1]), temp_f0);
                    temp_s1_2 = phi_s1 + 1;
                    temp_f4 = (f32) ((temp_v0_3 & 0xFF) - sp90);
                    sp91 = temp_v0_3;
                    temp_f10 = (f32) sp90;
                    phi_s0 += 2;
                    phi_s1 = temp_s1_2;
                    phi_f10 = temp_f10;
                    if ((s32) sp90 < 0) {
                        phi_f10 = temp_f10 + 4294967296.0f;
                    }
                    temp_s2_2 = phi_s2 + 1;
                    temp_s2_2->unk_C3 = (u8) (u32) (phi_f10 + (temp_f4 * phi_f26));
                    phi_s2 = temp_s2_2;
                } while (temp_s1_2 < 3);
                if (Kankyo_IsSceneUpsideDown(globalCtx) != 0) {
                    phi_v0 = (gSaveContext.time + 0x8000) & 0xFFFF;
                } else {
                    phi_v0 = gSaveContext.time;
                }
                temp_s0_2 = phi_v0 - 0x8000;
                envCtx->unk_C4.diffuseDir1[0] = (s8) (s32) -(Math_SinS(temp_s0_2) * 120.0f);
                envCtx->unk_C4.diffuseDir1[1] = (s8) (s32) (Math_CosS(temp_s0_2) * 120.0f);
                temp_f8 = Math_CosS(temp_s0_2) * 20.0f;
                envCtx->unk_C4.diffusePos2[0] = (s8) -(s32) envCtx->unk_C4.diffuseDir1[0];
                envCtx->unk_C4.diffusePos2[1] = (s8) -(s32) envCtx->unk_C4.diffuseDir1[1];
                envCtx->unk_C4.diffuseDir1[2] = (s8) (s32) temp_f8;
                envCtx->unk_C4.diffusePos2[2] = (s8) -(s32) envCtx->unk_C4.diffuseDir1[2];
                phi_s0_2 = &spA4;
                phi_s2_2 = envCtx;
                do {
                    temp_v0_4 = &sp70->ambientColor[phi_s1_2];
                    temp_v1 = &sp68->ambientColor[phi_s1_2];
                    sp64 = temp_v1;
                    sp6C = temp_v0_4;
                    sp90 = func_800F6EA4((f32) (phi_s0_2->unk_22 + temp_v0_4->unk_6), (f32) (phi_s0_2->unk_6 + temp_v1->unk_6), temp_f0);
                    temp_v1_2 = &sp60->ambientColor[phi_s1_2];
                    temp_a0_2 = &sp58->ambientColor[phi_s1_2];
                    sp54 = temp_a0_2;
                    sp5C = temp_v1_2;
                    temp_v0_5 = func_800F6EA4((f32) (phi_s0_2->unk_5A + temp_v1_2->unk_6), (f32) (phi_s0_2->unk_3E + temp_a0_2->unk_6), (bitwise f32) temp_a0_2, temp_f0);
                    temp_t7_2 = temp_v0_5 & 0xFF;
                    sp91 = temp_v0_5;
                    temp_f16_2 = (f32) sp90;
                    phi_f16 = temp_f16_2;
                    if ((s32) sp90 < 0) {
                        phi_f16 = temp_f16_2 + 4294967296.0f;
                    }
                    phi_s2_2->unk_C4.diffuseColor1[0] = (u8) (u32) (phi_f16 + ((f32) (temp_t7_2 - sp90) * phi_f26));
                    sp90 = func_800F6EA4((f32) (phi_s0_2->unk_28 + sp6C->unk_C), (f32) (phi_s0_2->unk_C + sp64->unk_C), temp_f0);
                    temp_v0_6 = func_800F6EA4((f32) (phi_s0_2->unk_60 + sp5C->unk_C), (f32) (phi_s0_2->unk_44 + sp54->unk_C), temp_f0);
                    temp_s1_3 = phi_s1_2 + 1;
                    temp_f18 = (f32) ((temp_v0_6 & 0xFF) - sp90);
                    sp91 = temp_v0_6;
                    temp_f16_3 = (f32) sp90;
                    phi_s1_2 = temp_s1_3;
                    phi_s0_2 += 2;
                    phi_f16_2 = temp_f16_3;
                    if ((s32) sp90 < 0) {
                        phi_f16_2 = temp_f16_3 + 4294967296.0f;
                    }
                    temp_s2_3 = phi_s2_2 + 1;
                    temp_s2_3->unk_C4.diffusePos2[2] = (s8) (u32) (phi_f16_2 + (temp_f18 * phi_f26));
                    phi_s2_2 = temp_s2_3;
                } while (temp_s1_3 < 3);
                phi_s0_3 = &spA4;
                phi_s2_3 = envCtx;
                do {
                    sp90 = func_800F6EA4((f32) (phi_s0_3->unk_2E + sp70->ambientColor[phi_s1_3].unk_F), (f32) (phi_s0_3->unk_12 + sp68->ambientColor[phi_s1_3].unk_F), temp_f0);
                    temp_v0_7 = func_800F6EA4((f32) (phi_s0_3->unk_66 + sp60->ambientColor[phi_s1_3].unk_F), (f32) (phi_s0_3->unk_4A + sp58->ambientColor[phi_s1_3].unk_F), temp_f0);
                    temp_s1_4 = phi_s1_3 + 1;
                    temp_f18_2 = (f32) ((temp_v0_7 & 0xFF) - sp90);
                    sp91 = temp_v0_7;
                    temp_f16_4 = (f32) sp90;
                    phi_s0_3 += 2;
                    phi_s1_3 = temp_s1_4;
                    phi_f16_3 = temp_f16_4;
                    if ((s32) sp90 < 0) {
                        phi_f16_3 = temp_f16_4 + 4294967296.0f;
                    }
                    temp_s2_4 = phi_s2_3 + 1;
                    temp_s2_4->unk_C4.diffuseColor[2] = (u8) (u32) (phi_f16_3 + (temp_f18_2 * phi_f26));
                    phi_s2_3 = temp_s2_4;
                } while (temp_s1_4 != 3);
                temp_v0_8 = &temp_s4[sp7C];
                temp_v1_3 = (s16) temp_v0_8->fogNear & 0x3FF;
                temp_a0_3 = &temp_s4[sp78];
                temp_a3 = &temp_s4[sp74];
                temp_t8 = temp_v1_3 + (s32) ((f32) (((s16) temp_a0_3->fogNear & 0x3FF) - temp_v1_3) * temp_f0);
                sp8C = temp_t8;
                temp_t0 = &temp_s4[sp84];
                temp_a1 = (s16) temp_a3->fogNear & 0x3FF;
                sp8E = temp_a1 + (s32) ((f32) (((s16) temp_t0->fogNear & 0x3FF) - temp_a1) * temp_f0);
                envCtx->unk_C4.fogNear = (u16) (s32) ((f32) temp_t8 + ((f32) (sp8E - temp_t8) * phi_f26));
                temp_a2_2 = (s16) temp_v0_8->fogFar;
                sp8C = temp_a2_2 + (s32) ((f32) ((s16) temp_a0_3->fogFar - temp_a2_2) * temp_f0);
                temp_v0_9 = (s16) temp_a3->fogFar;
                sp8E = temp_v0_9 + (s32) ((f32) ((s16) temp_t0->fogFar - temp_v0_9) * temp_f0);
                phi_t8 = (u16) (s32) ((f32) sp8C + ((f32) (sp8E - sp8C) * phi_f26));
                goto block_74;
            }
            temp_a1_2 = phi_a1 + 6;
            phi_a0 += 6;
            phi_v1 += 6;
            phi_a1 = temp_a1_2;
            if (temp_a1_2 == 0x2A) {

            } else {
                goto loop_10;
            }
        } else {
            phi_v0_2 = 0;
            phi_v0_4 = 0;
            if (((s32) envCtx->unk_C1 >= (s32) envCtx->numLightSettings) && (D_801BDBA8 == 0)) {
                D_801BDBA8 = 1;
            }
            phi_v1_3 = envCtx;
            if (envCtx->unk_C0 == 0) {
                do {
                    temp_v1_4 = phi_v1_3 + 1;
                    temp_v1_4->unk_C3 = temp_s4[envCtx->unk_C1].ambientColor[phi_v0_2];
                    temp_v1_4->unk_C4.ambientColor[2] = temp_s4[envCtx->unk_C1].ambientColor[phi_v0_2].unk_3;
                    temp_v1_4->unk_C4.diffuseDir1[2] = temp_s4[envCtx->unk_C1].ambientColor[phi_v0_2].unk_6;
                    temp_v1_4->unk_C4.diffuseColor1[2] = temp_s4[envCtx->unk_C1].ambientColor[phi_v0_2].unk_9;
                    temp_v1_4->unk_C4.diffusePos2[2] = temp_s4[envCtx->unk_C1].ambientColor[phi_v0_2].unk_C;
                    temp_v0_10 = phi_v0_2 + 1;
                    temp_v1_4->unk_C4.diffuseColor[2] = temp_s4[envCtx->unk_C1].ambientColor[phi_v0_2].unk_F;
                    phi_v0_2 = temp_v0_10;
                    phi_v1_3 = temp_v1_4;
                } while (temp_v0_10 != 3);
                temp_v0_11 = &temp_s4[envCtx->unk_C1];
                envCtx->unk_C4.fogNear = (s16) temp_v0_11->fogNear & 0x3FF;
                envCtx->unk_DC = 1.0f;
                envCtx->unk_C4.fogFar = (u16) (s16) temp_v0_11->fogFar;
            } else {
                temp_v0_12 = (((s32) (s16) temp_s4[envCtx->unk_C1].fogNear >> 0xA) * 4) & 0xFF;
                phi_v0_3 = temp_v0_12;
                if (temp_v0_12 == 0) {
                    phi_v0_3 = (temp_v0_12 + 1) & 0xFF;
                }
                temp_v1_5 = envCtx->unk_DA;
                if (temp_v1_5 != 0xFFFF) {
                    phi_v0_3 = temp_v1_5 & 0xFF;
                }
                phi_v1_4 = envCtx;
                if (envCtx->unk_E0 == 0) {
                    temp_f16_5 = (f32) phi_v0_3;
                    phi_f16_4 = temp_f16_5;
                    if (phi_v0_3 < 0) {
                        phi_f16_4 = temp_f16_5 + 4294967296.0f;
                    }
                    envCtx->unk_DC += phi_f16_4 / 255.0f;
                }
                if (envCtx->unk_DC > 1.0f) {
                    envCtx->unk_DC = 1.0f;
                }
                do {
                    temp_a0_4 = temp_s4[envCtx->unk_C2].ambientColor[phi_v0_4];
                    temp_f10_2 = (f32) temp_a0_4;
                    phi_f10_2 = temp_f10_2;
                    if ((s32) temp_a0_4 < 0) {
                        phi_f10_2 = temp_f10_2 + 4294967296.0f;
                    }
                    phi_v1_4->unk_C4.ambientColor[0] = (u8) (u32) (phi_f10_2 + ((f32) (temp_s4[envCtx->unk_C1].ambientColor[phi_v0_4] - temp_a0_4) * envCtx->unk_DC));
                    temp_a1_3 = temp_s4[envCtx->unk_C2].ambientColor[phi_v0_4].unk_3;
                    phi_v1_4->unk_C4.diffuseDir1[0] = (s8) (s32) ((f32) temp_a1_3 + ((f32) (temp_s4[envCtx->unk_C1].ambientColor[phi_v0_4].unk_3 - temp_a1_3) * envCtx->unk_DC));
                    temp_a0_5 = temp_s4[envCtx->unk_C2].ambientColor[phi_v0_4].unk_6;
                    temp_f8_2 = (f32) temp_a0_5;
                    phi_f8 = temp_f8_2;
                    if ((s32) temp_a0_5 < 0) {
                        phi_f8 = temp_f8_2 + 4294967296.0f;
                    }
                    phi_v1_4->unk_C4.diffuseColor1[0] = (u8) (u32) (phi_f8 + ((f32) (temp_s4[envCtx->unk_C1].ambientColor[phi_v0_4].unk_6 - temp_a0_5) * envCtx->unk_DC));
                    temp_a1_4 = temp_s4[envCtx->unk_C2].ambientColor[phi_v0_4].unk_9;
                    phi_v1_4->unk_C4.diffusePos2[0] = (s8) (s32) ((f32) temp_a1_4 + ((f32) (temp_s4[envCtx->unk_C1].ambientColor[phi_v0_4].unk_9 - temp_a1_4) * envCtx->unk_DC));
                    temp_a0_6 = temp_s4[envCtx->unk_C2].ambientColor[phi_v0_4].unk_C;
                    temp_f10_3 = (f32) temp_a0_6;
                    phi_f10_3 = temp_f10_3;
                    if ((s32) temp_a0_6 < 0) {
                        phi_f10_3 = temp_f10_3 + 4294967296.0f;
                    }
                    phi_v1_4->unk_C4.diffuseColor[0] = (u8) (u32) (phi_f10_3 + ((f32) (temp_s4[envCtx->unk_C1].ambientColor[phi_v0_4].unk_C - temp_a0_6) * envCtx->unk_DC));
                    temp_a1_5 = temp_s4[envCtx->unk_C2].ambientColor[phi_v0_4].unk_F;
                    temp_v0_13 = phi_v0_4 + 1;
                    temp_f16_6 = (f32) temp_a1_5;
                    phi_v0_4 = temp_v0_13;
                    phi_f16_5 = temp_f16_6;
                    if ((s32) temp_a1_5 < 0) {
                        phi_f16_5 = temp_f16_6 + 4294967296.0f;
                    }
                    temp_v1_6 = phi_v1_4 + 1;
                    temp_v1_6->unk_C4.diffuseColor[2] = (u8) (u32) (phi_f16_5 + ((f32) (temp_s4[envCtx->unk_C1].ambientColor[phi_v0_4].unk_F - temp_a1_5) * envCtx->unk_DC));
                    phi_v1_4 = temp_v1_6;
                } while (temp_v0_13 != 3);
                temp_f0_3 = envCtx->unk_DC;
                temp_v1_7 = &temp_s4[envCtx->unk_C2];
                temp_a0_7 = (s16) temp_v1_7->fogNear & 0x3FF;
                temp_v0_14 = &temp_s4[envCtx->unk_C1];
                envCtx->unk_C4.fogNear = (u16) (s32) ((f32) temp_a0_7 + ((f32) (((s16) temp_v0_14->fogNear & 0x3FF) - temp_a0_7) * temp_f0_3));
                temp_a1_6 = (s16) temp_v1_7->fogFar;
                phi_t8 = (u16) (s32) ((f32) temp_a1_6 + ((f32) ((s16) temp_v0_14->fogFar - temp_a1_6) * temp_f0_3));
block_74:
                envCtx->unk_C4.fogFar = phi_t8;
            }
        }
    }
    envCtx->unk_C0 = 1;
    phi_a1_2 = envCtx;
    phi_v1_5 = envCtx;
    phi_a0_2 = lightCtx;
    phi_a3_2 = 0;
    do {
        temp_a3_2 = phi_a3_2 + 2;
        temp_v0_15 = phi_a1_2->unk_8C.ambientColor[0] + phi_v1_5->unk_C4.ambientColor[0];
        phi_a3_2 = temp_a3_2;
        if ((s32) temp_v0_15 >= 0x100) {
            phi_a0_2->ambient.r = 0xFF;
        } else if ((s32) temp_v0_15 < 0) {
            phi_a0_2->ambient.r = 0;
        } else {
            phi_a0_2->ambient.r = (u8) temp_v0_15;
        }
        temp_v0_16 = phi_a1_2->unk_8C.diffuseColor1[0] + phi_v1_5->unk_C4.diffuseColor1[0];
        if ((s32) temp_v0_16 >= 0x100) {
            phi_v1_5->unk_28.params.dir.color[0] = 0xFF;
        } else if ((s32) temp_v0_16 < 0) {
            phi_v1_5->unk_28.params.dir.color[0] = 0;
        } else {
            phi_v1_5->unk_28.params.dir.color[0] = (u8) temp_v0_16;
        }
        temp_v0_17 = phi_a1_2->unk_8C.diffuseColor2[0] + phi_v1_5->unk_C4.diffuseColor[0];
        if ((s32) temp_v0_17 >= 0x100) {
            phi_v1_5->unk_36.params.dir.color[0] = 0xFF;
        } else if ((s32) temp_v0_17 < 0) {
            phi_v1_5->unk_36.params.dir.color[0] = 0;
        } else {
            phi_v1_5->unk_36.params.dir.color[0] = (u8) temp_v0_17;
        }
        temp_v0_18 = phi_a1_2->unk_8C.fogColor[0] + phi_v1_5->unk_C4.fogColor[0];
        phi_a1_2 += 2;
        phi_v1_5 += 1;
        if ((s32) temp_v0_18 >= 0x100) {
            phi_a0_2->unk7 = 0xFF;
        } else if ((s32) temp_v0_18 < 0) {
            phi_a0_2->unk7 = 0;
        } else {
            phi_a0_2->unk7 = (u8) temp_v0_18;
        }
        phi_a0_2 += 1;
    } while (temp_a3_2 != 6);
    envCtx->unk_28.params.dir.x = envCtx->unk_C4.diffuseDir1[0];
    temp_v0_19 = (s16) envCtx->unk_C4.fogNear + envCtx->unk_8C.fogNear;
    envCtx->unk_28.params.dir.y = envCtx->unk_C4.diffuseDir1[1];
    envCtx->unk_28.params.dir.z = envCtx->unk_C4.diffuseDir1[2];
    envCtx->unk_36.params.dir.x = envCtx->unk_C4.diffusePos2[0];
    envCtx->unk_36.params.dir.y = envCtx->unk_C4.diffusePos2[1];
    envCtx->unk_36.params.dir.z = envCtx->unk_C4.diffusePos2[2];
    if (temp_v0_19 < 0x3E5) {
        lightCtx->unkA = (s16) temp_v0_19;
    } else {
        lightCtx->unkA = 0x3E4;
    }
    temp_v0_20 = (s16) envCtx->unk_C4.fogFar + envCtx->unk_8C.fogFar;
    if (temp_v0_20 < 0x3A99) {
        lightCtx->unkC = (s16) temp_v0_20;
    } else {
        lightCtx->unkC = 0x3A98;
    }
    if ((envCtx->unk_28.params.dir.x == 0) && (envCtx->unk_28.params.dir.y == 0) && (envCtx->unk_28.params.dir.z == 0)) {
        envCtx->unk_28.params.dir.x = 1;
    }
    if ((envCtx->unk_36.params.dir.x == 0) && (envCtx->unk_36.params.dir.y == 0) && (envCtx->unk_36.params.dir.z == 0)) {
        envCtx->unk_36.params.dir.x = 1;
    }
}

void func_800F8554(GlobalContext *arg0) {
    f32 sp34;
    void *sp28;
    f32 *sp24;
    s32 sp20;
    f32 *temp_a0_3;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    s16 temp_a0;
    s16 temp_a0_2;
    void *temp_v0;
    u16 phi_v0;
    f32 phi_f0;
    f32 phi_f2;
    f32 phi_f0_2;

    temp_v0 = arg0 + 0x10000;
    if (arg0->envCtx.unk_16 == 0) {
        if (arg0->envCtx.unk_F2[1] != 0) {
            sp28 = temp_v0;
            Math_SmoothStepToF(&D_801F4F1C, 0.0f, 0.5f, 4.0f, 0.01f);
        } else {
            sp28 = temp_v0;
            Math_SmoothStepToF(&D_801F4F1C, 255.0f, 0.5f, 4.0f, 0.01f);
        }
        if (Kankyo_IsSceneUpsideDown(arg0) != 0) {
            phi_v0 = (gSaveContext.time + 0x8000) & 0xFFFF;
        } else {
            phi_v0 = gSaveContext.time;
        }
        temp_a0 = phi_v0 - 0x8000;
        if (arg0->csCtx.state != 0) {
            temp_a0_2 = phi_v0 - 0x8000;
            sp20 = (s32) temp_a0_2;
            Math_SmoothStepToF(&arg0->envCtx.unk_4, -(Math_SinS(temp_a0_2) * 120.0f) * 25.0f, 1.0f, 0.8f, 0.8f);
            temp_a0_3 = &arg0->envCtx.unk_8;
            temp_f10 = Math_CosS(unksp22) * 120.0f;
            sp24 = temp_a0_3;
            Math_SmoothStepToF(temp_a0_3, temp_f10 * 25.0f, 1.0f, 0.8f, 0.8f);
            Math_SmoothStepToF(temp_a0_3, Math_CosS(unksp22) * 20.0f * 25.0f, 1.0f, 0.8f, 0.8f);
        } else {
            sp20 = (s32) temp_a0;
            arg0->envCtx.unk_4 = -(Math_SinS(temp_a0) * 120.0f) * 25.0f;
            arg0->envCtx.unk_8 = Math_CosS(unksp22) * 120.0f * 25.0f;
            arg0->envCtx.unk_C = Math_CosS(unksp22) * 20.0f * 25.0f;
        }
        temp_f0 = sp28->unk_700C / 25.0f;
        sp34 = temp_f0;
        phi_f0 = temp_f0;
        if (Kankyo_IsSceneUpsideDown(arg0) != 0) {
            phi_f0 = -temp_f0;
        }
        temp_f12 = phi_f0 / 80.0f;
        D_801F4F10 = temp_f12 * 255.0f;
        if (D_801F4F10 < 0.0f) {
            D_801F4F10 = 0.0f;
        }
        phi_f2 = D_801F4F10;
        if (D_801F4F10 > 255.0f) {
            D_801F4F10 = 255.0f;
            phi_f2 = D_801F4F10;
        }
        D_801F4F14 = temp_f12;
        D_801F4F10 = 255.0f - phi_f2;
        if (D_801F4F14 < 0.0f) {
            D_801F4F14 = 0.0f;
        }
        phi_f0_2 = D_801F4F14;
        if (D_801F4F14 > 1.0f) {
            D_801F4F14 = 1.0f;
            phi_f0_2 = D_801F4F14;
        }
        D_801F4F18 = (2.0f * phi_f0_2) + 12.0f;
    }
}

void func_800F88C4(s32 arg0) {
    s32 temp_a0;
    u8 temp_v0;

    temp_a0 = arg0 & 0xFFFF;
    temp_v0 = gSaveContext.weekEventReg[28];
    if (((temp_v0 & 8) == 0) && ((temp_v0 & 0x10) == 0) && ((gSaveContext.weekEventReg[temp_a0 >> 8] & temp_a0 & 0xFF) != 0)) {
        if ((gSaveContext.weekEventReg[91] & 4) != 0) {
            gSaveContext.weekEventReg[28] = temp_v0 | 8;
            gSaveContext.weekEventReg[90] |= 8;
            gSaveContext.weekEventReg[51] |= 2;
        }
        if ((gSaveContext.weekEventReg[91] & 8) != 0) {
            gSaveContext.weekEventReg[28] |= 0x10;
            gSaveContext.weekEventReg[90] |= 8;
            gSaveContext.weekEventReg[51] |= 2;
        }
    }
}

void func_800F8970(void) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 phi_v0;

    temp_v0 = gSaveContext.weekEventReg[27];
    if (((temp_v0 & 0x40) == 0) && ((gSaveContext.time - 0x3FFC) >= 0x2580)) {
        gSaveContext.weekEventReg[27] = temp_v0 | 0x40;
        func_800F88C4(0x1B02);
    }
    if (((gSaveContext.weekEventReg[27] & 0x80) == 0) && ((gSaveContext.time - 0x3FFC) >= 0x2B30)) {
        gSaveContext.weekEventReg[27] |= 0x80;
        func_800F88C4(0x1B04);
    }
    temp_v0_2 = gSaveContext.weekEventReg[28];
    if (((temp_v0_2 & 1) == 0) && ((gSaveContext.time - 0x3FFC) >= 0x30E0)) {
        gSaveContext.weekEventReg[28] = temp_v0_2 | 1;
        func_800F88C4(0x1B08);
    }
    phi_v0 = gSaveContext.weekEventReg[28];
    if (((gSaveContext.weekEventReg[28] & 2) == 0) && ((gSaveContext.time - 0x3FFC) >= 0x3413)) {
        gSaveContext.weekEventReg[28] |= 2;
        func_800F88C4(0x1B10);
        phi_v0 = gSaveContext.weekEventReg[28];
    }
    if (((phi_v0 & 4) == 0) && ((gSaveContext.time - 0x3FFC) >= 0x39C3)) {
        gSaveContext.weekEventReg[28] = phi_v0 | 4;
        func_800F88C4(0x1B20);
    }
}

void func_800F8A9C(GlobalContext *arg0) {
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_a0_2;
    u8 temp_a0;
    u8 temp_a0_3;
    u8 temp_a1_2;
    u8 temp_a2;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t5;
    u8 temp_t5_2;
    u8 temp_t7;
    u8 temp_t7_2;
    u8 temp_v1_3;

    temp_a2 = gSaveContext.eventInf[7];
    temp_a3 = gSaveContext.day;
    temp_a1 = ((s32) (temp_a2 & 0xE0) >> 5) & 0xFF;
    if (temp_a1 != (temp_a3 & 0xFF)) {
        temp_t5 = gSaveContext.weekEventReg[28] | 1;
        temp_t7 = temp_t5 | 2;
        temp_t1 = gSaveContext.weekEventReg[27] | 0x40;
        gSaveContext.weekEventReg[28] = temp_t5;
        gSaveContext.weekEventReg[27] = temp_t1;
        gSaveContext.weekEventReg[28] = temp_t7;
        gSaveContext.eventInf[7] = (temp_a2 & 0x1F) | (temp_a3 << 5);
        gSaveContext.weekEventReg[27] = temp_t1 | 0x80;
        gSaveContext.weekEventReg[28] = temp_t7 | 4;
        func_800F88C4(0x1B02, temp_a1, temp_a2, temp_a3);
        func_800F88C4(0x1B04);
        func_800F88C4(0x1B08);
        func_800F88C4(0x1B10);
        func_800F88C4(0x1B20);
        temp_t5_2 = gSaveContext.weekEventReg[28] & 0xFE;
        temp_t7_2 = temp_t5_2 & 0xFD;
        temp_t1_2 = gSaveContext.weekEventReg[27] & 0xBF;
        gSaveContext.weekEventReg[28] = temp_t5_2;
        gSaveContext.weekEventReg[27] = temp_t1_2;
        gSaveContext.weekEventReg[28] = temp_t7_2;
        gSaveContext.weekEventReg[27] = temp_t1_2 & 0x7F;
        gSaveContext.weekEventReg[28] = temp_t7_2 & 0xFB;
    }
    temp_v1 = gSaveContext.time - 0x3FFC;
    if ((temp_v1 < 0x1FFE) || (temp_v1 >= 0x3FFD)) {
        gSaveContext.weekEventReg[90] &= 0xF7;
    }
    func_800F8970();
    if ((gSaveContext.weekEventReg[75] & 0x10) == 0) {
        temp_a0 = gSaveContext.weekEventReg[55];
        if ((temp_a0 & 2) == 0) {
            temp_v1_2 = gSaveContext.day;
            if (temp_v1_2 >= 2) {
                gSaveContext.weekEventReg[55] = temp_a0 | 2;
            } else if ((temp_v1_2 == 1) && ((gSaveContext.time - 0x3FFC) >= 0x6FF9)) {
                gSaveContext.weekEventReg[55] = temp_a0 | 2;
            }
        }
    }
    temp_a1_2 = gSaveContext.weekEventReg[90];
    if ((temp_a1_2 & 1) == 0) {
        temp_a0_2 = gSaveContext.time;
        temp_v1_3 = gSaveContext.weekEventReg[89];
        temp_a2_2 = (temp_a0_2 - D_801F4E78) & 0xFFFF;
        if (((temp_v1_3 & 0x40) != 0) && (((temp_a0_2 - 0x3FFC) & 0xFFFF) >= 0xF556)) {
            gSaveContext.weekEventReg[90] = temp_a1_2 | 1;
            return;
        }
        if (((temp_v1_3 & 8) != 0) && (temp_a2_2 >= 0x416)) {
            gSaveContext.weekEventReg[89] = temp_v1_3 | 0x40;
            D_801F4E78 = 0;
            return;
        }
        temp_a0_3 = gSaveContext.weekEventReg[85];
        if (((temp_a0_3 & 0x80) != 0) && (temp_a2_2 >= 0x1198)) {
            gSaveContext.weekEventReg[89] = temp_v1_3 | 8;
            D_801F4E78 = gSaveContext.time;
            return;
        }
        if (((gSaveContext.weekEventReg[86] & 1) != 0) && (temp_a2_2 >= 0xC43)) {
            gSaveContext.weekEventReg[85] = temp_a0_3 | 0x80;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
    }
}

void func_800F8CD4(GlobalContext *arg0, EnvironmentContext *arg1, LightContext *arg2, void *arg3, s32 arg4, s16 *arg5) {
    D_801BDBC0 = 0;
    D_801BDBC4 = 0;
    func_800F6A04();
    if (arg3->unk_1EC == 0) {
        func_800F6A40(arg0);
        func_800FC3DC(arg0);
        func_800FB9B4(arg0);
        func_800F6AB8();
        func_800F6B44(arg0, arg1, (s32) arg3, arg4, arg5);
        func_800F8554(arg0);
        func_800F6FF8(arg0, arg1, arg2);
        func_800F8A9C(arg0);
    }
}

void func_800F8D84(GlobalContext *arg0) {
    GraphicsContext *sp44;
    Gfx *sp2C;
    void *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f6;
    f32 temp_f8_2;
    s32 temp_f10;
    s32 temp_f8;
    s32 phi_t8;
    s32 phi_t7;

    if (arg0->envCtx.unk_16 == 0) {
        temp_a1 = arg0->state.gfxCtx;
        if (!(arg0->envCtx.unk_8 > -800.0f)) {
            sp24 = arg0 + 0x10000;
            sp44 = temp_a1;
            if (Kankyo_IsSceneUpsideDown(arg0, temp_a1) != 0) {
                goto block_4;
            }
        } else {
block_4:
            sp44 = arg0->state.gfxCtx;
            SysMatrix_InsertTranslation(arg0->view.eye.x + (arg0 + 0x10000)->unk_7008, arg0->view.eye.y + arg0->envCtx.unk_8, arg0->view.eye.z + (arg0 + 0x10000)->unk_7010, 0);
            if ((s32) gSaveContext.time < 0x8000) {
                temp_v1 = arg0->state.gfxCtx->polyOpa.p;
                arg0->state.gfxCtx->polyOpa.p = temp_v1 + 8;
                temp_v1->words.w0 = 0xFA000000;
                temp_f0 = D_801F4F14;
                temp_f6 = D_801F4F1C;
                temp_f8 = (s32) temp_f6;
                if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                    if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                        phi_t8 = (s32) (temp_f6 - 2.1474836e9f) | 0x80000000;
                    } else {
                        goto block_8;
                    }
                } else {
                    phi_t8 = temp_f8;
                    if (temp_f8 < 0) {
block_8:
                        phi_t8 = -1;
                    }
                }
                temp_v1->words.w1 = ((((u32) (temp_f0 * 52.0f) + 0xCB) & 0xFF) << 0x10) | 0xFF000000 | ((((u32) (temp_f0 * 19.0f) + 0xB5) & 0xFF) << 8) | (phi_t8 & 0xFF);
                temp_v1_2 = arg0->state.gfxCtx->polyOpa.p;
                arg0->state.gfxCtx->polyOpa.p = temp_v1_2 + 8;
                temp_v1_2->words.w0 = 0xFB000000;
                temp_f0_2 = D_801F4F14;
                temp_v1_2->words.w1 = ((0xAF - (u32) (temp_f0_2 * 5.0f)) << 0x18) | ((((u32) (temp_f0_2 * 135.0f) + 0x78) & 0xFF) << 0x10) | ((((u32) (temp_f0_2 * 100.0f) + 0x64) & 0xFF) << 8) | ((u32) D_801F4F10 & 0xFF);
            } else {
                temp_v1_3 = arg0->state.gfxCtx->polyOpa.p;
                arg0->state.gfxCtx->polyOpa.p = temp_v1_3 + 8;
                temp_v1_3->words.w0 = 0xFA000000;
                temp_f0_3 = D_801F4F14;
                temp_f8_2 = D_801F4F1C;
                temp_f10 = (s32) temp_f8_2;
                if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                    if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                        phi_t7 = (s32) (temp_f8_2 - 2.1474836e9f) | 0x80000000;
                    } else {
                        goto block_14;
                    }
                } else {
                    phi_t7 = temp_f10;
                    if (temp_f10 < 0) {
block_14:
                        phi_t7 = -1;
                    }
                }
                temp_v1_3->words.w1 = ((((u32) (temp_f0_3 * 75.0f) + 0xB4) & 0xFF) << 0x10) | 0xFF000000 | ((((u32) (temp_f0_3 * 100.0f) + 0x64) & 0xFF) << 8) | (phi_t7 & 0xFF);
                temp_v1_4 = arg0->state.gfxCtx->polyOpa.p;
                arg0->state.gfxCtx->polyOpa.p = temp_v1_4 + 8;
                temp_v1_4->words.w0 = 0xFB000000;
                temp_f0_4 = D_801F4F14;
                temp_v1_4->words.w1 = (((u32) (temp_f0_4 * 255.0f) & 0xFF) << 0x10) | 0xB4000000 | (((u32) (temp_f0_4 * 200.0f) & 0xFF) << 8) | ((u32) D_801F4F10 & 0xFF);
            }
            temp_f12 = D_801F4F18;
            sp44 = arg0->state.gfxCtx;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0 = arg0->state.gfxCtx->polyOpa.p;
            arg0->state.gfxCtx->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            sp44 = arg0->state.gfxCtx;
            sp2C = temp_v0;
            sp2C->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            sp44 = arg0->state.gfxCtx;
            func_8012C148(arg0->state.gfxCtx);
            temp_v0_2 = arg0->state.gfxCtx->polyOpa.p;
            arg0->state.gfxCtx->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = (u32) &D_0407AB70;
        }
    }
}

void func_800F9728(GlobalContext *arg0, ? arg1, ? arg2, ? arg3, ? arg4) {
    if ((arg0->envCtx.unk_F2[1] == 0) && (((arg0 + (arg0->activeCamera * 4))->unk_800->unk_14C & 0x100) == 0) && (arg0->skyboxId == 1)) {
        func_800F9824(arg0, arg0 + 0x17004, arg0 + 0xB8, arg0->state.gfxCtx, (Vec3f) arg4.unk_0, arg4.unk_4, arg4.unk_8, (s8) 370.0f, (bitwise s8) (Math_CosS((s16) (gSaveContext.time - 0x8000)) * 120.0f), 0x190, 1);
    }
}

void func_800F9824(GlobalContext *globalCtx, EnvironmentContext *envCtx, View *view, GraphicsContext *gfxCtx, f32 vec, f32 vec_unk4, f32 vec_unk8, f32 arg5, f32 arg6, s8 arg7, s8 arg8) {
    f32 sp118;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spDC;
    f32 spC4;
    u8 spC3;
    f32 spBC;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    f32 sp60;
    f32 *sp5C;
    Gfx *temp_a0;
    Gfx *temp_a0_10;
    Gfx *temp_a0_11;
    Gfx *temp_a0_2;
    Gfx *temp_a0_3;
    Gfx *temp_a0_4;
    Gfx *temp_a0_5;
    Gfx *temp_a0_6;
    Gfx *temp_a0_7;
    Gfx *temp_a0_8;
    Gfx *temp_a0_9;
    Gfx *temp_v0_4;
    Gfx *temp_v1;
    Mtx *temp_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4_2;
    f32 temp_f8;
    s16 temp_s2;
    s32 temp_f4;
    s32 temp_s1;
    s32 temp_t8;
    s32 temp_v0_3;
    void *temp_v0;
    s16 phi_s2;
    f32 phi_f12;
    f32 phi_f4;
    f32 phi_f20;
    f32 phi_f20_2;
    f32 phi_f20_3;
    f32 phi_f20_4;
    f32 phi_f0;
    f32 phi_f20_5;
    f32 phi_f0_2;

    spC3 = 0;
    spBC = 0.0f;
    temp_f0 = Math3D_Distance((Vec3f *) &vec, &view->eye);
    temp_f16 = view->eye.x;
    temp_f18 = view->eye.y;
    temp_f2 = view->at.x - temp_f16;
    temp_f12 = view->at.y - temp_f18;
    sp74 = view->eye.z;
    temp_f22 = temp_f0 / 12.0f;
    temp_f14 = view->at.z - sp74;
    temp_f0_2 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    temp_f26 = temp_f2 / temp_f0_2;
    sp60 = temp_f12 / temp_f0_2;
    sp118 = sp60;
    sp70 = temp_f22 * 6.0f;
    temp_f24 = temp_f14 / temp_f0_2;
    temp_f10 = temp_f16 + (temp_f26 * sp70);
    spF0 = temp_f10;
    temp_f10_2 = temp_f18 + (sp60 * sp70);
    spEC = temp_f10_2;
    temp_f8 = sp74 + (temp_f24 * sp70);
    spE8 = temp_f8;
    temp_f2_2 = vec - temp_f10;
    temp_f12_2 = vec_unk4 - temp_f10_2;
    temp_f14_2 = vec_unk8 - temp_f8;
    temp_f0_3 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2));
    temp_f16_2 = temp_f2_2 / temp_f0_3;
    temp_f18_2 = temp_f12_2 / temp_f0_3;
    sp104 = temp_f16_2;
    temp_f20 = temp_f14_2 / temp_f0_3;
    sp100 = temp_f18_2;
    spFC = temp_f20;
    sp6C = ((temp_f26 * sp104) + (sp60 * sp100) + (temp_f24 * spFC)) / sqrtf(((temp_f26 * temp_f26) + (sp60 * sp60) + (temp_f24 * temp_f24)) * ((temp_f16_2 * temp_f16_2) + (temp_f18_2 * temp_f18_2) + (temp_f20 * temp_f20)));
    temp_f0_4 = sp6C * 3.5f;
    spE4 = sp6C;
    spDC = temp_f0_4;
    if (temp_f0_4 > 1.0f) {
        spDC = 1.0f;
    }
    if ((u8) arg8 == 0) {
        spDC = sp6C;
    }
    if (!(sp6C < 0.0f)) {
        if ((u8) arg8 != 0) {
            func_80169474(globalCtx, (Vec3f *) &vec, (Vec3f *) &spC4);
            D_801F4F20 = (s32) spC4;
            temp_f4 = (s32) (spC8 - 5.0f);
            D_801F4F24 = temp_f4;
            if (temp_f4 < 0) {
                D_801F4F24 = 0;
            }
            if ((D_801BDB94 != 0xFFFC) || (spC4 < 0.0f) || (spC8 < 0.0f) || (spC4 > 320.0f) || (spC8 > 240.0f)) {
                spC3 = 1;
            }
        }
        sp70 = -sp100;
        sp74 = -sp104;
        sp5C = &envCtx->unk_88;
        sp6C = -spFC;
        sp60 = (bitwise f32) spC3;
        sp64 = arg6 / 10.0f;
        phi_s2 = 0;
        do {
            SysMatrix_InsertTranslation(vec, vec_unk4, vec_unk8, 0);
            if ((u8) arg8 != 0) {
                spBC = func_800F5A8C(0x3CU, 0xFU, (u32) globalCtx->view.fovy & 0xFFFF);
            }
            temp_f0_5 = (f32) phi_s2;
            SysMatrix_InsertTranslation(sp74 * temp_f0_5 * temp_f22, sp70 * temp_f0_5 * temp_f22, sp6C * temp_f0_5 * temp_f22, 1);
            temp_s1 = phi_s2 * 4;
            temp_f12_3 = *(&D_801BE894 + temp_s1) * spE4;
            if ((u8) arg8 != 0) {
                phi_f12 = temp_f12_3 * (0.001f * (arg5 + (630.0f * spBC)));
            } else {
                phi_f12 = temp_f12_3 * (0.0001f * arg5 * (2.0f * temp_f22));
            }
            Matrix_Scale(phi_f12, phi_f12, phi_f12, 1);
            phi_f20 = sp64;
            if (sp64 > 1.0f) {
                phi_f20 = 1.0f;
            }
            temp_t8 = *(&D_801BE8BC + temp_s1);
            temp_f4_2 = (f32) temp_t8;
            phi_f4 = temp_f4_2;
            if (temp_t8 < 0) {
                phi_f4 = temp_f4_2 + 4294967296.0f;
            }
            temp_f20_2 = phi_f4 * phi_f20;
            phi_f20_5 = temp_f20_2;
            if (temp_f20_2 < 0.0f) {
                phi_f20_5 = 0.0f;
            }
            phi_f20_2 = phi_f20_5;
            if ((u8) arg8 != 0) {
                temp_f0_6 = (f32) (0x3E4 - globalCtx->lightCtx.unkA) / 50.0f;
                phi_f0_2 = temp_f0_6;
                if (temp_f0_6 > 1.0f) {
                    phi_f0_2 = 1.0f;
                }
                phi_f20_2 = phi_f20_5 * (1.0f - phi_f0_2);
            }
            if ((bitwise s32) sp60 == 0) {
                Math_SmoothStepToF(sp5C, spDC, 0.5f, 0.05f, 0.001f);
            } else {
                Math_SmoothStepToF(sp5C, 0.0f, 0.5f, 0.05f, 0.001f);
            }
            temp_a0 = gfxCtx->polyXlu.p;
            gfxCtx->polyXlu.p = temp_a0 + 8;
            gfxCtx->polyXlu.p = func_8012C7FC(temp_a0);
            temp_v1 = gfxCtx->polyXlu.p;
            gfxCtx->polyXlu.p = temp_v1 + 8;
            temp_v0 = (phi_s2 * 3) + &D_801BE874;
            temp_v1->words.w0 = 0xFA000000;
            temp_v1->words.w1 = (temp_v0->unk_2 << 8) | (temp_v0->unk_0 << 0x18) | (temp_v0->unk_1 << 0x10) | ((u32) (phi_f20_2 * envCtx->unk_88) & 0xFF);
            temp_v0_2 = Matrix_NewMtx(gfxCtx);
            temp_s2 = phi_s2 + 1;
            if (temp_v0_2 != 0) {
                temp_a0_2 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_2 + 8;
                temp_a0_2->words.w1 = (u32) temp_v0_2;
                temp_a0_2->words.w0 = 0xDA380003;
                temp_a0_3 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_3 + 8;
                temp_a0_3->words.w0 = 0xFCFF97FF;
                temp_a0_3->words.w1 = 0xFF2DFEFF;
                temp_a0_4 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_4 + 8;
                temp_a0_4->words.w1 = 0x30;
                temp_a0_4->words.w0 = 0xE3001A01;
                temp_a0_5 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_5 + 8;
                temp_a0_5->words.w1 = 0xC0;
                temp_a0_5->words.w0 = 0xE3001801;
                temp_a0_6 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_6 + 8;
                temp_a0_6->words.w1 = (u32) &D_01000000;
                temp_a0_6->words.w0 = 0xDA380001;
                temp_v0_3 = *(&D_801BE8E4 + temp_s1);
                if ((temp_v0_3 != 0) && (temp_v0_3 != 1)) {
                    if (temp_v0_3 != 2) {

                    } else {
                        temp_a0_7 = gfxCtx->polyXlu.p;
                        gfxCtx->polyXlu.p = temp_a0_7 + 8;
                        temp_a0_7->words.w1 = (u32) &D_040549A8;
                        temp_a0_7->words.w0 = 0xDE000000;
                    }
                } else {
                    temp_a0_8 = gfxCtx->polyXlu.p;
                    gfxCtx->polyXlu.p = temp_a0_8 + 8;
                    temp_a0_8->words.w1 = (u32) &D_04054940;
                    temp_a0_8->words.w0 = 0xDE000000;
                }
            }
            phi_s2 = temp_s2;
        } while ((s32) temp_s2 < 0xA);
        if ((s16) arg7 != 0) {
            temp_f22_2 = spE4 - (1.5f - spE4);
            if (temp_f22_2 > 0.0f) {
                gfxCtx->polyXlu.p = func_8012BFC4(gfxCtx->polyXlu.p);
                phi_f20_3 = sp64;
                if (sp64 > 1.0f) {
                    phi_f20_3 = 1.0f;
                }
                temp_f20_3 = (f32) (s16) arg7 * phi_f20_3;
                phi_f20_4 = temp_f20_3;
                if (temp_f20_3 < 0.0f) {
                    phi_f20_4 = 0.0f;
                }
                temp_f0_7 = (f32) (0x3E4 - globalCtx->lightCtx.unkA) / 50.0f;
                phi_f0 = temp_f0_7;
                if (temp_f0_7 > 1.0f) {
                    phi_f0 = 1.0f;
                }
                temp_a0_9 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_9 + 8;
                temp_a0_9->words.w1 = 0x30;
                temp_a0_9->words.w0 = 0xE3001A01;
                temp_a0_10 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_10 + 8;
                temp_a0_10->words.w1 = 0xC0;
                temp_a0_10->words.w0 = 0xE3001801;
                if ((bitwise s32) sp60 == 0) {
                    Math_SmoothStepToF(&envCtx->unk_84, phi_f20_4 * (1.0f - phi_f0) * temp_f22_2, 0.5f, 50.0f, 0.1f);
                } else {
                    Math_SmoothStepToF(&envCtx->unk_84, 0.0f, 0.5f, 50.0f, 0.1f);
                }
                temp_f0_8 = arg6 / 120.0f;
                spBC = temp_f0_8;
                if (temp_f0_8 < 0.0f) {
                    spBC = 0.0f;
                }
                temp_v0_4 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xFA000000;
                temp_v0_4->words.w1 = ((((u32) (spBC * 75.0f) + 0xB4) & 0xFF) << 0x10) | 0xFF000000 | ((((u32) (spBC * 155.0f) + 0x64) & 0xFF) << 8) | ((u32) envCtx->unk_84 & 0xFF);
                temp_a0_11 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a0_11 + 8;
                temp_a0_11->words.w1 = (u32) &D_0E0002C8;
                temp_a0_11->words.w0 = 0xDE000000;
                return;
            }
            envCtx->unk_84 = 0.0f;
            /* Duplicate return node #56. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #56. Try simplifying control flow for better match */
    }
}

f32 func_800FA39C(void) {
    return Rand_ZeroOne() - 0.5f;
}

void func_800FA3C4(GameState *arg0, GameState *arg1, GraphicsContext *arg2) {
    void *sp114;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    s16 spC6;
    Gfx *sp84;
    ? *sp78;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    f32 *temp_a1;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_s3_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0_2;
    u8 temp_t8;
    u8 temp_v0;
    f32 phi_f6;
    f32 phi_f0;
    u8 phi_v0;
    f32 phi_f0_2;
    s32 phi_s6;
    s32 phi_s2;
    s32 phi_s3;
    s32 phi_s2_2;
    f32 phi_f2;
    f32 phi_f2_2;

    sp114 = arg0->unk_1CCC;
    if (arg0->unk_170FA != 0) {
        temp_v0 = arg0->unk_170F7;
        phi_v0 = temp_v0;
        phi_s6 = (s32) temp_v0;
    } else {
        temp_f0 = (f32) func_80173B48(arg0) / 3e7.0f;
        if (temp_f0 < 0.0f) {
            phi_f0 = 0.0f;
        } else {
            if (temp_f0 > 1.0f) {
                phi_f2 = 1.0f;
            } else {
                phi_f2 = temp_f0;
            }
            phi_f0 = phi_f2;
        }
        temp_t8 = arg0->unk_170F7;
        temp_f6 = (f32) temp_t8;
        phi_f6 = temp_f6;
        if ((s32) temp_t8 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_v0_2 = (u32) (phi_f6 * phi_f0) & 0xFF;
        phi_v0 = (u8) temp_v0_2;
        phi_s6 = temp_v0_2;
        if (temp_v0_2 < 5) {
            phi_v0 = 5U;
            phi_s6 = 5;
        }
    }
    temp_f18 = arg1->unk_28;
    temp_f16 = arg1->unk_2C;
    temp_f2 = arg1->unk_34 - temp_f18;
    temp_f20 = arg1->unk_30;
    temp_f12 = arg1->unk_38 - temp_f16;
    temp_f14 = arg1->unk_3C - temp_f20;
    temp_f0_2 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    temp_f22 = temp_f2 / temp_f0_2;
    temp_f24 = temp_f14 / temp_f0_2;
    temp_f4 = (temp_f12 / temp_f0_2) * 120.0f;
    spF0 = temp_f18 + (temp_f22 * 50.0f);
    spEC = temp_f16 + temp_f4;
    spE8 = temp_f20 + (temp_f24 * 50.0f);
    spE4 = temp_f18 + (temp_f22 * 220.0f);
    spE0 = temp_f20 + (temp_f24 * 220.0f);
    if (phi_v0 != 0) {
        temp_v0_3 = arg2->polyXlu.p;
        arg2->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0;
        temp_v0_3->words.w0 = 0xE7000000;
        temp_v0_4 = arg2->polyXlu.p;
        arg2->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0x96FFFF19;
        temp_v0_4->words.w0 = 0xFA000000;
        arg2->polyXlu.p = Gfx_CallSetupDL(arg2->polyXlu.p, 0x14U);
    }
    temp_f0_3 = arg0->unk_170B8 / 60.0f;
    if (temp_f0_3 < 0.0f) {
        phi_f0_2 = 0.0f;
    } else {
        if (temp_f0_3 > 1.0f) {
            phi_f2_2 = 1.0f;
        } else {
            phi_f2_2 = temp_f0_3;
        }
        phi_f0_2 = phi_f2_2;
    }
    temp_s3 = &spD4;
    temp_a1 = temp_s3;
    spD4 = (f32) arg0->unk_170B0 * phi_f0_2;
    spD8 = (f32) arg0->unk_170B2 + 100.0f;
    spDC = (f32) arg0->unk_170B4 * phi_f0_2;
    spC6 = 0x4000 - Math_Vec3f_Pitch(&D_801D15B0, (Vec3f *) temp_a1);
    temp_s3_2 = Math_Vec3f_Yaw(&D_801D15B0, (Vec3f *) temp_s3) + 0x8000;
    phi_s2 = 0;
    phi_s2_2 = 0;
    if (phi_s6 > 0) {
        sp84 = &D_01000000;
        sp78 = &D_040706E0;
        do {
            temp_f22_2 = Rand_ZeroOne();
            temp_f20_2 = Rand_ZeroOne();
            SysMatrix_InsertTranslation(((temp_f22_2 - 0.7f) * 100.0f) + spF0, ((temp_f20_2 - 0.7f) * 100.0f) + spEC, ((Rand_ZeroOne() - 0.7f) * 100.0f) + spE8, 0);
            temp_v0_5 = arg2->polyXlu.p;
            arg2->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380001;
            temp_v0_5->words.w1 = (u32) sp84;
            temp_s0 = (s32) (phi_s2 << 0x15) >> 0x10;
            Matrix_RotateY((s16) (temp_s3_2 + temp_s0), 1U);
            SysMatrix_InsertXRotation_s((s16) (spC6 + temp_s0), 1);
            Matrix_Scale(0.3f, 1.0f, 0.3f, 1);
            temp_v0_6 = arg2->polyXlu.p;
            arg2->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(arg2);
            temp_v0_7 = arg2->polyXlu.p;
            temp_s2 = phi_s2 + 1;
            arg2->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDE000000;
            temp_v0_7->words.w1 = (u32) sp78;
            phi_s2 = temp_s2;
        } while (temp_s2 != phi_s6);
    }
    phi_s3 = 0;
    if ((sp114->unk_88 < arg1->unk_2C) && (phi_s6 > 0)) {
        sp84 = D_04030100;
        do {
            if (phi_s3 == 0) {
                func_8012C2DC(arg2);
                temp_v0_8 = arg2->polyXlu.p;
                arg2->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w1 = -1;
                temp_v0_8->words.w0 = 0xFB000000;
                temp_v0_9 = arg2->polyXlu.p;
                arg2->polyXlu.p = temp_v0_9 + 8;
                temp_v0_9->words.w1 = -0x9C;
                temp_v0_9->words.w0 = 0xFA000000;
                phi_s3 = (phi_s3 + 1) & 0xFF;
            }
            temp_f20_3 = func_800FA39C();
            SysMatrix_InsertTranslation((temp_f20_3 * 220.0f) + spE4, sp114->unk_88 + 2.0f, (func_800FA39C() * 220.0f) + spE0, 0);
            temp_f12_2 = (Rand_ZeroOne() * 0.05f) + 0.05f;
            Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
            temp_v0_10 = arg2->polyXlu.p;
            arg2->polyXlu.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0xDA380003;
            temp_v0_10->words.w1 = Matrix_NewMtx(arg2);
            temp_v0_11 = arg2->polyXlu.p;
            temp_s2_2 = phi_s2_2 + 1;
            arg2->polyXlu.p = temp_v0_11 + 8;
            temp_v0_11->words.w0 = 0xDE000000;
            temp_v0_11->words.w1 = (u32) sp84;
            phi_s2_2 = temp_s2_2;
        } while (temp_s2_2 != phi_s6);
    }
}

void func_800FA9FC(GlobalContext *arg0, GameState *arg1, GraphicsContext *arg2) {
    void *sp18;
    s32 temp_v0;
    u8 temp_v1;

    temp_v0 = (arg0 + (arg0->activeCamera * 4))->unk_800->unk_14C & 0x100;
    if ((temp_v0 == 0) && (temp_v1 = arg0->envCtx.unk_F2[2], (temp_v1 == 0))) {
        if (arg0->envCtx.unk_F2[4] != 0) {
            if (temp_v1 == 0) {
                func_800FA3C4(arg1, arg1);
                return;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0 == 0) {
            sp18 = arg0 + 0x10000;
            arg1 = arg1;
            if ((func_800FE4B8(arg0) != 0) && (arg0->envCtx.unk_F2[2] == 0)) {
                func_800FA3C4((GameState *) arg0, arg1, arg2, arg1);
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_800FAAB4(void *arg0, s32 arg1) {
    s8 temp_a1;
    s8 phi_a1;

    temp_a1 = arg1 & 0xFF;
    phi_a1 = temp_a1;
    if (arg0->unk_17022 == 0) {
        if ((temp_a1 == 0x1F) || (D_801F4F33 != 0)) {
            if (D_801F4F30 != 0xFF) {
                arg0->unk_17025 = 1;
                arg0->unk_17024 = (u8) D_801F4F30;
                arg0->unk_17028 = 0x14;
                arg0->unk_17026 = (u16) arg0->unk_17028;
                D_801F4F30 = 0xFF;
                return;
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
        if (temp_a1 != arg0->unk_17024) {
            D_801F4F30 = arg0->unk_17023;
            arg0->unk_17025 = 1;
            arg0->unk_17024 = temp_a1;
            arg0->unk_17028 = 0x14;
            arg0->unk_17026 = (u16) arg0->unk_17028;
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    if ((temp_a1 != arg0->unk_170C5) && (arg0->unk_170E0 >= 1.0f) && (arg0->unk_170C7 == 0xFF)) {
        if ((s32) temp_a1 >= 0x1F) {
            phi_a1 = 0;
        }
        arg0->unk_170E0 = 0.0f;
        arg0->unk_170C6 = (u8) arg0->unk_170C5;
        arg0->unk_170C5 = phi_a1;
    }
}

void func_800FAC20(GraphicsContext **arg0) {
    GraphicsContext *sp40;
    GraphicsContext *sp2C;
    s32 *sp1C;
    s32 sp18;
    Gfx *temp_a0_3;
    Gfx *temp_a0_4;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    f32 temp_f16;
    f32 temp_f4;
    s32 *temp_v1;
    s32 temp_f18;
    s32 temp_f6;
    u8 temp_v0;
    u8 temp_v0_2;
    f32 phi_f0;
    f32 phi_f0_2;
    s32 phi_t5;
    s32 phi_t6;

    temp_v1 = arg0 + 0x18000;
    temp_v0 = arg0->unk_18874;
    if ((((temp_v0 != 0) && ((s32) arg0->unk_822 < 0x3D4)) || ((s32) temp_v0 >= 2)) && ((temp_v0 != 3) || (D_801F4E74 != 0.0f))) {
        temp_a0 = arg0->unk_0;
        arg0 = arg0;
        sp1C = temp_v1;
        sp40 = temp_a0;
        func_8012C080(temp_a0);
        temp_v0_2 = temp_v1->unk_874;
        phi_f0 = (f32) (0x3E8 - arg0->unk_822) * 0.02f;
        if (temp_v0_2 == 2) {
            phi_f0 = 1.0f;
        }
        phi_f0_2 = phi_f0;
        if (phi_f0 > 1.0f) {
            phi_f0_2 = 1.0f;
        }
        if (temp_v0_2 != 3) {
            temp_v1_2 = sp40->polyOpa.p;
            temp_f4 = 255.0f * phi_f0_2;
            sp40->polyOpa.p = temp_v1_2 + 8;
            temp_v1_2->words.w0 = 0xFA000000;
            temp_f6 = (s32) temp_f4;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t5 = (s32) (temp_f4 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_13;
                }
            } else {
                phi_t5 = temp_f6;
                if (temp_f6 < 0) {
block_13:
                    phi_t5 = -1;
                }
            }
            temp_v1_2->words.w1 = (arg0->unk_821 << 8) | (arg0->unk_81F << 0x18) | (arg0->unk_820 << 0x10) | (phi_t5 & 0xFF);
        } else {
            temp_v1_3 = sp40->polyOpa.p;
            sp40->polyOpa.p = temp_v1_3 + 8;
            temp_v1_3->words.w0 = 0xFA000000;
            temp_f16 = 255.0f * D_801F4E74;
            temp_f18 = (s32) temp_f16;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t6 = (s32) (temp_f16 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_19;
                }
            } else {
                phi_t6 = temp_f18;
                if (temp_f18 < 0) {
block_19:
                    phi_t6 = -1;
                }
            }
            temp_v1_3->words.w1 = (((arg0->unk_821 + 0x10) & 0xFF) << 8) | ((arg0->unk_81F + 0x10) << 0x18) | (((arg0->unk_820 + 0x10) & 0xFF) << 0x10) | (phi_t6 & 0xFF);
        }
        temp_v0_3 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = (u32) &D_0E0002C8;
    }
    if (arg0->unk_170F1 != 0) {
        temp_a0_2 = arg0->unk_0;
        sp18 = arg0 + 0x10000;
        sp1C = &D_0E0002C8;
        sp2C = temp_a0_2;
        func_8012C080(temp_a0_2);
        temp_a0_3 = sp2C->polyOpa.p;
        sp2C->polyOpa.p = temp_a0_3 + 8;
        temp_a0_3->words.w0 = 0xFA000000;
        temp_a0_3->words.w1 = arg0->unk_170F5 | (arg0->unk_170F2 << 0x18) | (arg0->unk_170F3 << 0x10) | (arg0->unk_170F4 << 8);
        temp_a0_4 = sp2C->polyOpa.p;
        sp2C->polyOpa.p = temp_a0_4 + 8;
        temp_a0_4->words.w0 = 0xDE000000;
        temp_a0_4->words.w1 = (u32) &D_0E0002C8;
    }
}

void func_800FAF74(GraphicsContext **arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    GraphicsContext *sp1C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;

    temp_a0 = *arg0;
    sp1C = temp_a0;
    func_8012C080(temp_a0);
    temp_v1 = sp1C->polyOpa.p;
    sp1C->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFA000000;
    temp_v1->words.w1 = (arg1 << 0x18) | (arg2 << 0x10) | (arg3 << 8) | arg4;
    temp_v1_2 = sp1C->polyOpa.p;
    sp1C->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xDE000000;
    temp_v1_2->words.w1 = (u32) &D_0E0002C8;
}

void func_800FB010(GlobalContext *arg0) {
    s16 temp_a0_2;
    s16 temp_a0_3;
    u8 temp_a0;

    if (arg0->envCtx.unk_E3 != 0) {
        temp_a0 = D_801F4E68.unk_0;
        if (temp_a0 != 0) {
            if (temp_a0 != 1) {
                if (temp_a0 != 2) {

                } else {
                    temp_a0_2 = arg0->envCtx.unk_8C.ambientColor[0];
                    if ((s32) temp_a0_2 > 0) {
                        arg0->envCtx.unk_8C.ambientColor[0] = temp_a0_2 - 0xA;
                        arg0->envCtx.unk_8C.ambientColor[1] += -0xA;
                    }
                    temp_a0_3 = arg0->envCtx.unk_8C.ambientColor[2];
                    if ((s32) temp_a0_3 > 0) {
                        arg0->envCtx.unk_8C.ambientColor[2] = temp_a0_3 - 0xA;
                    }
                    D_801F4F2C += -0xA;
                    if ((s32) D_801F4E68.unk_4 >= (s32) D_801F4F2C) {
                        arg0->envCtx.unk_8C.ambientColor[0] = 0;
                        arg0->envCtx.unk_8C.ambientColor[1] = 0;
                        arg0->envCtx.unk_8C.ambientColor[2] = 0;
                        D_801F4E68.unk_0 = 0U;
                        if (arg0->envCtx.unk_E3 == 2) {
                            arg0->envCtx.unk_E3 = 0;
                        }
                    }
                }
            } else {
                D_801F4E68.unk_1 = 0xC8U;
                D_801F4E68.unk_2 = 0xC8U;
                D_801F4E68.unk_3 = 0xFFU;
                arg0->envCtx.unk_8C.ambientColor[0] += 0x50;
                arg0->envCtx.unk_8C.ambientColor[1] += 0x50;
                arg0->envCtx.unk_8C.ambientColor[2] += 0x64;
                D_801F4F2C += 0x64;
                if ((s32) D_801F4F2C >= (s32) D_801F4E68.unk_4) {
                    func_801A47DC(0xF, 0, 0);
                    D_801F4E68.unk_4 = 0U;
                    D_801F4E68.unk_0 = (u8) (D_801F4E68.unk_0 + 1);
                }
            }
        } else {
            if (Rand_ZeroOne() < 0.1f) {
                D_801F4E68.unk_8 = (f32) (D_801F4E68.unk_8 + 10.0f);
            }
            D_801F4E68.unk_8 = (f32) (D_801F4E68.unk_8 + Rand_ZeroOne());
            if (D_801F4E68.unk_8 > 500.0f) {
                D_801F4E68.unk_1 = 0xC8U;
                D_801F4E68.unk_2 = 0xC8U;
                D_801F4E68.unk_3 = 0xFFU;
                D_801F4E68.unk_4 = 0xC8U;
                D_801F4E68.unk_8 = 0.0f;
                func_800FB320(arg0, (u32) ((Rand_ZeroOne() * 2.9f) + 1.0f) & 0xFF);
                D_801F4F2C = 0;
                D_801F4E68.unk_0 = (u8) (D_801F4E68.unk_0 + 1);
            }
        }
    }
    if (D_801F4E68.unk_0 != 0) {
        func_800FAF74((GraphicsContext **) arg0, D_801F4E68.unk_1, D_801F4E68.unk_2, D_801F4E68.unk_3, (u8) (s32) D_801F4F2C);
    }
}

void func_800FB320(GlobalContext *globalCtx, u8 param_2) {
    s16 temp_v0;
    s16 temp_v1;
    u8 *temp_a0;
    s16 phi_v1;
    s16 phi_v0;

    phi_v1 = 0;
    phi_v0 = 0;
loop_1:
    temp_a0 = &D_801F4E80 + (phi_v1 << 5);
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if ((*temp_a0 != 0xFF) || (temp_v0 = phi_v0 + 1, *temp_a0 = 0, phi_v0 = temp_v0, (((s32) temp_v0 < (param_2 & 0xFF)) != 0))) {
        if ((s32) temp_v1 < 3) {
            goto loop_1;
        }
    }
}

void func_800FB388(GraphicsContext **arg0, ? arg1) {
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_s4;
    u8 temp_t5;
    u8 temp_t7;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_s0;
    s16 phi_s4;
    u8 phi_v1;

    temp_s2 = arg0->unk_0;
    phi_s4 = 0;
    do {
        temp_s0 = (phi_s4 << 5) + &D_801F4E80;
        temp_v1 = temp_s0->unk_0;
        phi_v1 = temp_v1;
        if (temp_v1 != 0) {
            if (temp_v1 != 1) {
                if (temp_v1 != 2) {

                } else {
                    temp_v0 = temp_s0->unk_1E;
                    if ((s32) temp_v0 < 7) {
                        temp_s0->unk_1E = (u8) (temp_v0 + 1);
                    } else {
                        temp_s0->unk_0 = 0xFFU;
                    }
                    goto block_12;
                }
            } else {
                temp_t7 = temp_s0->unk_1F - 1;
                temp_s0->unk_1F = temp_t7;
                if ((temp_t7 & 0xFF) <= 0) {
                    temp_s0->unk_0 = (u8) (temp_s0->unk_0 + 1);
                }
block_12:
                phi_v1 = temp_s0->unk_0;
            }
        } else {
            temp_f14 = arg0->unk_E0;
            temp_f2 = arg0->unk_EC - temp_f14;
            temp_f12 = arg0->unk_F4 - arg0->unk_E8;
            temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
            temp_f20 = temp_f12 / temp_f0;
            temp_s0->unk_10 = (f32) (temp_f14 + ((temp_f2 / temp_f0) * 9500.0f));
            temp_s0->unk_14 = (f32) ((Rand_ZeroOne() * 1000.0f) + 4000.0f);
            temp_s0->unk_18 = (f32) (arg0->unk_E8 + (temp_f20 * 9500.0f));
            temp_f16 = (Rand_ZeroOne() - 0.5f) * 5000.0f;
            temp_s0->unk_8 = 0.0f;
            temp_s0->unk_4 = temp_f16;
            temp_f4 = Rand_ZeroOne() - 0.5f;
            temp_s0->unk_1E = 0U;
            temp_s0->unk_C = (f32) (temp_f4 * 5000.0f);
            temp_s0->unk_1C = (s8) (s32) ((Rand_ZeroOne() - 0.5f) * 40.0f);
            temp_f8 = (Rand_ZeroOne() - 0.5f) * 40.0f;
            temp_t5 = temp_s0->unk_0 + 1;
            temp_s0->unk_1F = (u8) ((phi_s4 * 3) + 3);
            temp_s0->unk_0 = temp_t5;
            temp_s0->unk_1D = (s8) (s32) temp_f8;
            phi_v1 = temp_t5 & 0xFF;
        }
        if (phi_v1 == 2) {
            SysMatrix_InsertTranslation(temp_s0->unk_4 + temp_s0->unk_10, temp_s0->unk_8 + temp_s0->unk_14, temp_s0->unk_C + temp_s0->unk_18, 0);
            SysMatrix_RotateStateAroundXAxis((f32) temp_s0->unk_1C * 0.017453292f);
            SysMatrix_InsertZRotation_f((f32) temp_s0->unk_1D * 0.017453292f, 1);
            Matrix_Scale(22.0f, 100.0f, 22.0f, 1);
            temp_v0_2 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = -0x80;
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_3->words.w1 = 0xFFFF80;
            temp_v0_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(arg0->unk_0);
            temp_v0_5 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDB060020;
            temp_v0_5->words.w1 = Lib_SegmentedToVirtual(*(&D_801BE90C + (temp_s0->unk_1E * 4)));
            func_8012C9BC(arg0->unk_0);
            temp_v0_6 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_01000000;
            temp_v0_6->words.w0 = 0xDA380001;
            temp_v0_7 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_0403F230;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
    } while ((s32) temp_s4 < 3);
}

void func_800FB758(GlobalContext *arg0) {
    u8 sp27;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a2;
    u8 phi_v0;
    s32 phi_v0_2;

    temp_v0 = (gSaveContext.day - 1) & 0xFF;
    phi_v0 = (u8) temp_v0;
    if (temp_v0 >= 3) {
        phi_v0 = 0U;
    }
    if (arg0->envCtx.unk_E4 != 0xFE) {
        arg0->envCtx.unk_E4 = 0xFF;
        if (gSaveContext.unk_3F46 != 0) {
            arg0->envCtx.unk_E4 = 0xFE;
            func_801A89A8(gSaveContext.unk_3F46 + 0x8000);
            gSaveContext.unk_3F46 = 0;
            goto block_32;
        }
        sp27 = phi_v0;
        if ((func_800FE590(arg0, &gSaveContext) == 0) || (func_800FE5D0(arg0) != 0) || (func_801A8A50(0) != 0x57)) {
            temp_a2 = arg0->soundCtx.seqIndex;
            if (temp_a2 == 0x7F) {
                temp_a0 = arg0->soundCtx.nightSeqIndex;
                if (temp_a0 != 0x13) {
                    if (temp_a0 != gSaveContext.nightSeqIndex) {
                        func_801A4A28(temp_a0, temp_a2, temp_a2, &gSaveContext);
                    }
                    goto block_32;
                }
            } else {
                temp_a0_2 = arg0->soundCtx.nightSeqIndex;
                if (temp_a0_2 == 0x13) {
                    if (temp_a2 != gSaveContext.seqIndex) {
                        func_801A25E4(temp_a2 & 0xFFFF, sp27, temp_a2, &gSaveContext);
                    }
                } else {
                    temp_v0_2 = gSaveContext.time;
                    phi_v0_2 = (s32) temp_v0_2;
                    if (((s32) temp_v0_2 >= 0x4000) && ((s32) temp_v0_2 < 0xB71D)) {
                        if (D_801BDBC8 != 0) {
                            func_801A2544(temp_a2 & 0xFFFF, sp27, temp_a2, &gSaveContext);
                        } else if (((s32) temp_v0_2 >= 0x402D) && (temp_a2 != gSaveContext.seqIndex)) {
                            func_801A25E4(temp_a2 & 0xFFFF, sp27, temp_a2, &gSaveContext);
                        }
                        arg0->envCtx.unk_E4 = 1;
                    } else {
                        if (temp_a0_2 != gSaveContext.nightSeqIndex) {
                            func_801A4A28(temp_a0_2, temp_a2, temp_a2, &gSaveContext);
                            phi_v0_2 = (s32) gSaveContext.time;
                        }
                        if ((phi_v0_2 >= 0xB71D) && (phi_v0_2 < 0xCAAA)) {
                            arg0->envCtx.unk_E4 = 3;
                        } else if ((phi_v0_2 >= 0xCAAB) || (phi_v0_2 < 0x3555)) {
                            arg0->envCtx.unk_E4 = 5;
                        } else {
                            arg0->envCtx.unk_E4 = 7;
                        }
                    }
                }
                goto block_32;
            }
        } else {
block_32:
            func_801A3CD8(arg0->roomCtx.currRoom.echo);
            D_801BDBC8 = 0;
        }
    }
}

void func_800FB9B4(GlobalContext *arg0) {
    void *sp18;
    GlobalContext *temp_a3;
    u16 temp_v1;
    u8 temp_a0;
    u8 temp_v0;
    u8 phi_v0;
    GlobalContext *phi_a3;
    GlobalContext *phi_a3_2;
    SaveContext *phi_t0;

    temp_a3 = arg0;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    phi_t0 = &gSaveContext;
    if ((temp_a3->csCtx.state == 0) && ((temp_a3->actorCtx.unk5 & 2) == 0)) {
        sp18 = temp_a3 + 0x10000;
        temp_v0 = temp_a3->envCtx.unk_E4;
        phi_v0 = temp_v0;
        switch (temp_v0) {
        case 1:
            if ((s32) gSaveContext.time >= 0xB71D) {
                arg0 = temp_a3;
                func_801A89A8(0x10F000FF);
                arg0->envCtx.unk_E4 = sp18->unk_70E8 + 1;
block_18:
                phi_a3_2 = arg0;
                phi_t0 = &gSaveContext;
            }
            break;
        case 2:
            if ((s32) gSaveContext.time >= 0xC000) {
                temp_a3->envCtx.unk_E4 = temp_v0 + 1;
            }
            break;
        case 3:
            if ((s32) sp18->unk_70F7 < 9) {
                temp_a0 = temp_a3->soundCtx.nightSeqIndex;
                arg0 = temp_a3;
                func_801A4A28(temp_a0, (u8) temp_a3);
                func_801A47DC(1, 1, 1);
                phi_v0 = sp18->unk_70E8;
                phi_a3 = arg0;
            }
            phi_a3->envCtx.unk_E4 = phi_v0 + 1;
            phi_a3_2 = phi_a3;
            phi_t0 = &gSaveContext;
            break;
        case 4:
            if ((s32) gSaveContext.time >= 0xCAAA) {
                temp_a3->envCtx.unk_E4 = temp_v0 + 1;
            }
            break;
        case 5:
            arg0 = temp_a3;
            func_801A47DC(1, 1, 0, temp_a3);
            func_801A47DC(0x24, 1, 1);
            arg0->envCtx.unk_E4 = sp18->unk_70E8 + 1;
            goto block_18;
        case 6:
            temp_v1 = gSaveContext.time;
            if (((s32) temp_v1 < 0xCAAA) && ((s32) temp_v1 >= 0x3555)) {
                temp_a3->envCtx.unk_E4 = temp_v0 + 1;
            }
            break;
        case 7:
            arg0 = temp_a3;
            func_801A47DC(0x24, 1, 0, temp_a3);
            func_801A47DC(0x56, 1, 1);
            arg0->envCtx.unk_E4 = sp18->unk_70E8 + 1;
            goto block_18;
        }
    }
    if ((phi_a3_2->envCtx.unk_E4 != 0xFE) && (phi_t0->day == 3) && ((s32) phi_t0->time < 0x4000)) {
        arg0 = phi_a3_2;
        if ((func_800FE5D0(phi_a3_2) == 0) && (arg0->sceneLoadFlag == 0) && (arg0->unk_18B4A == 0) && (arg0->csCtx.state == 0) && ((arg0->sceneNum != 0x2D) || (gSaveContext.sceneSetupIndex != 1)) && (ActorCutscene_GetCurrentIndex() == -1) && (func_801A8A50(0) != 0x57) && (func_801A8A50(0) != 0x55)) {
            func_801A89A8(0x140000FF);
            func_801A25E4(0x57, 2U);
        }
    }
}

void func_800FBCBC(GlobalContext *arg0) {
    f32 sp44;
    f32 sp40;
    ?32 sp3C;
    ?32 *temp_t2;
    ?32 *temp_t7;

    if (D_801F4E32 != 0) {
        temp_t7 = &sp3C;
        sp3C = D_801F4E38.unk_0;
        sp40 = D_801F4E38.unk_4;
        sp44 = D_801F4E38.unk_8;
        func_800F9824(arg0, arg0 + 0x17004, arg0 + 0xB8, arg0->state.gfxCtx, (Vec3f) temp_t7->unk_0, temp_t7->unk_4, temp_t7->unk_8, (s8) D_801F4E44, (s8) D_801F4E48, (s32) D_801F4E4C, 0);
    }
    if (D_801F4E4E != 0) {
        temp_t2 = &sp3C;
        sp3C = D_801F4E50.unk_0;
        sp40 = D_801F4E50.unk_4;
        sp44 = D_801F4E50.unk_8;
        func_800F9824(arg0, arg0 + 0x17004, arg0 + 0xB8, arg0->state.gfxCtx, (Vec3f) temp_t2->unk_0, temp_t2->unk_4, temp_t2->unk_8, (s8) D_801F4E5C, (s8) D_801F4E60, (s32) D_801F4E64, 0);
    }
}

void func_800FBDEC(GlobalContext *arg0) {
    void *sp30;
    LightContext *sp2C;
    LightContext *temp_a1;
    void *temp_v1;

    temp_v1 = arg0->actorCtx.actorList[2].first;
    D_801F4F34 = 0;
    sp30 = temp_v1;
    Lights_PointNoGlowSetInfo(&D_801F4EE8, (s16) (s32) (temp_v1->world.pos.x - 10.0f), (s16) (s32) (temp_v1->world.pos.y + 10.0f), (s16) (s32) (temp_v1->world.pos.z - 10.0f), (u8) 0, (u8) 0, (u8) 0, (s16) 0xFF);
    temp_a1 = arg0 + 0x818;
    sp2C = temp_a1;
    D_801F4EE0 = LightContext_InsertLight(arg0, temp_a1, &D_801F4EE8);
    Lights_PointNoGlowSetInfo(&D_801F4F00, (s16) (s32) (temp_v1->world.pos.x + 10.0f), (s16) (s32) (temp_v1->world.pos.y + 10.0f), (s16) (s32) (temp_v1->world.pos.z + 10.0f), (u8) 0, (u8) 0, (u8) 0, (s16) 0xFF);
    D_801F4EF8 = LightContext_InsertLight(arg0, temp_a1, &D_801F4F00);
}

void func_800FBF3C(GlobalContext *globalCtx) {
    Actor *sp34;
    Actor *temp_v1;
    s16 temp_a0;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    s16 phi_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = D_801F4F34;
    sp34 = temp_v1;
    Lights_PointNoGlowSetInfo(&D_801F4EE8, (s16) (s32) (temp_v1->world.pos.x - 10.0f), (s16) (s32) (temp_v1->world.pos.y + 10.0f), (s16) (s32) (temp_v1->world.pos.z - 10.0f), (u8) (s32) temp_v0, (u8) (s32) temp_v0, (u8) (s32) temp_v0, (s16) 0xFF);
    temp_v0_2 = D_801F4F34;
    Lights_PointNoGlowSetInfo(&D_801F4F00, (s16) (s32) (temp_v1->world.pos.x + 10.0f), (s16) (s32) (temp_v1->world.pos.y + 10.0f), (s16) (s32) (temp_v1->world.pos.z + 10.0f), (u8) (s32) temp_v0_2, (u8) (s32) temp_v0_2, (u8) (s32) temp_v0_2, (s16) 0xFF);
    temp_v0_3 = D_801F4F34;
    if ((s32) temp_v0_3 < 0xFE) {
        D_801F4F34 = temp_v0_3 + 2;
    }
    if (func_80169FFC(globalCtx) != 0) {
        phi_v1 = 0;
        do {
            temp_a0 = globalCtx->envCtx.unk_8C.ambientColor[phi_v1];
            temp_v1_2 = phi_v1 + 1;
            phi_v1 = temp_v1_2;
            if ((s32) temp_a0 >= -0xFE) {
                globalCtx->envCtx.unk_8C.ambientColor[phi_v1] = temp_a0 - 0xC;
                globalCtx->envCtx.unk_8C.diffuseColor1[phi_v1] += -0xC;
            }
            globalCtx->envCtx.unk_8C.fogColor[phi_v1] = -0xFF;
        } while ((s32) temp_v1_2 < 3);
        temp_v1_3 = globalCtx->envCtx.unk_8C.fogFar;
        if (((s16) globalCtx->envCtx.unk_C4.fogFar + temp_v1_3) >= 0x385) {
            globalCtx->envCtx.unk_8C.fogFar = temp_v1_3 - 0x64;
        }
        temp_v1_4 = globalCtx->envCtx.unk_8C.fogNear;
        if (((s16) globalCtx->envCtx.unk_C4.fogNear + temp_v1_4) >= 0x3B7) {
            globalCtx->envCtx.unk_8C.fogNear = temp_v1_4 - 0xA;
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    globalCtx->envCtx.unk_E5 = 1;
    globalCtx->envCtx.unk_E6[0] = 0;
    globalCtx->envCtx.unk_E6[1] = 0;
    globalCtx->envCtx.unk_E6[2] = 0;
    globalCtx->envCtx.unk_E6[3] = D_801F4F34;
}

void func_800FC158(GlobalContext *arg0) {
    LightContext *temp_s0_2;
    s32 temp_s0_4;
    u8 temp_s0;
    u8 temp_s0_3;
    u8 temp_v0;
    void *temp_s1;
    void *temp_s3;
    s16 *phi_s1;
    s16 *phi_s2;
    void *phi_s3;
    s32 phi_s0;

    temp_v0 = D_801F4F34;
    temp_s1 = arg0->actorCtx.actorList[2].first;
    if ((s32) temp_v0 >= 3) {
        D_801F4F34 = temp_v0 - 3;
    } else {
        D_801F4F34 = 0;
    }
    temp_s0 = D_801F4F34;
    if (temp_s0 == 1) {
        temp_s0_2 = arg0 + 0x818;
        LightContext_RemoveLight(arg0, temp_s0_2, D_801F4EE0);
        LightContext_RemoveLight(arg0, temp_s0_2, D_801F4EF8);
    } else if ((s32) temp_s0 >= 2) {
        Lights_PointNoGlowSetInfo(&D_801F4EE8, (s16) (s32) (temp_s1->world.pos.x - 10.0f), (s16) (s32) (temp_s1->world.pos.y + 10.0f), (s16) (s32) (temp_s1->world.pos.z - 10.0f), (u8) (s32) temp_s0, (u8) (s32) temp_s0, (u8) (s32) temp_s0, (s16) 0xFF);
        temp_s0_3 = D_801F4F34;
        Lights_PointNoGlowSetInfo(&D_801F4F00, (s16) (s32) (temp_s1->world.pos.x + 10.0f), (s16) (s32) (temp_s1->world.pos.y + 10.0f), (s16) (s32) (temp_s1->world.pos.z + 10.0f), (u8) (s32) temp_s0_3, (u8) (s32) temp_s0_3, (u8) (s32) temp_s0_3, (s16) 0xFF);
    }
    if (func_80169FFC(arg0) != 0) {
        phi_s1 = (s16 *) &arg0->envCtx.unk_8C;
        phi_s2 = arg0->envCtx.unk_8C.diffuseColor1;
        phi_s3 = arg0 + 0x10000;
        phi_s0 = 0;
        do {
            Math_SmoothStepToS(phi_s1, 0, 5, 0xC, (s16) 1);
            Math_SmoothStepToS(phi_s2, 0, 5, 0xC, (s16) 1);
            temp_s0_4 = phi_s0 + 1;
            temp_s3 = phi_s3 + 2;
            temp_s3->unk_70A0 = 0;
            phi_s1 += 2;
            phi_s2 += 2;
            phi_s3 = temp_s3;
            phi_s0 = temp_s0_4;
        } while (temp_s0_4 != 3);
        arg0->envCtx.unk_8C.fogFar = 0;
        arg0->envCtx.unk_8C.fogNear = 0;
        return;
    }
    arg0->envCtx.unk_E5 = 1;
    arg0->envCtx.unk_E6[0] = 0;
    arg0->envCtx.unk_E6[1] = 0;
    arg0->envCtx.unk_E6[2] = 0;
    arg0->envCtx.unk_E6[3] = D_801F4F34;
    if (D_801F4F34 == 0) {
        arg0->envCtx.unk_E5 = 0;
    }
}

void func_800FC3DC(GlobalContext *arg0) {
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_v1;
    s32 phi_a2;

    temp_v1 = arg0->envCtx.unk_F2[4];
    temp_a1 = arg0->envCtx.unk_F2[0];
    phi_a2 = temp_v1 & 0xFF;
    if ((s32) temp_v1 < (s32) temp_a1) {
        phi_a2 = temp_a1 & 0xFF;
    }
    temp_a1_2 = arg0->envCtx.unk_F2[1];
    if ((phi_a2 != temp_a1_2) && ((arg0->state.frames & 7) == 0)) {
        if ((s32) temp_a1_2 < phi_a2) {
            arg0->envCtx.unk_F2[1] = temp_a1_2 + 2;
            return;
        }
        arg0->envCtx.unk_F2[1] = temp_a1_2 - 2;
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_800FC444(void *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
    u32 sp28;
    s32 *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    u8 temp_a2;
    u8 temp_a3;
    u8 phi_a2;
    u8 phi_a3;

    temp_a3 = arg3 & 0xFF;
    temp_a2 = arg2 & 0xFF;
    phi_a2 = temp_a2;
    phi_a3 = temp_a3;
    if (arg4 != 0) {
        if ((arg5 & 1) != 0) {
            arg3 = temp_a3;
            arg2 = temp_a2;
            sp28 = (u32) arg5;
            arg0->unk_2B0 = func_8012BFC4(arg0->unk_2B0);
            temp_v0 = arg0->unk_2B0;
            arg0->unk_2B0 = (Gfx *) (temp_v0 + 8);
            temp_v0->words.w0 = 0xFA000000;
            temp_v0->words.w1 = (arg1 << 0x18) | ((arg2 & 0xFF) << 0x10) | ((arg3 & 0xFF) << 8) | arg4;
            temp_v0_2 = arg0->unk_2B0;
            arg0->unk_2B0 = (Gfx *) (temp_v0_2 + 8);
            temp_v0_2->words.w1 = 0x30;
            temp_v0_2->words.w0 = 0xE3001A01;
            temp_v0_3 = arg0->unk_2B0;
            arg0->unk_2B0 = (Gfx *) (temp_v0_3 + 8);
            temp_v0_3->words.w1 = 0xC0;
            temp_v0_3->words.w0 = 0xE3001801;
            temp_v0_4 = arg0->unk_2B0;
            arg0->unk_2B0 = (Gfx *) (temp_v0_4 + 8);
            temp_v0_4->words.w0 = 0xDE000000;
            temp_v0_4->words.w1 = (u32) &D_0E0002C8;
            phi_a2 = arg2;
            phi_a3 = arg3;
        }
        if ((arg5 & 2) != 0) {
            sp28 = (arg1 << 0x18) | ((phi_a2 & 0xFF) << 0x10) | ((phi_a3 & 0xFF) << 8) | arg4;
            sp24 = &D_0E0002C8;
            arg0->unk_2C0 = func_8012BFC4(arg0->unk_2C0);
            temp_v0_5 = arg0->unk_2C0;
            arg0->unk_2C0 = (Gfx *) (temp_v0_5 + 8);
            temp_v0_5->words.w0 = 0xFA000000;
            temp_v0_5->words.w1 = sp28;
            if (arg4 == 0xFF) {
                temp_v0_6 = arg0->unk_2C0;
                arg0->unk_2C0 = (Gfx *) (temp_v0_6 + 8);
                temp_v0_6->words.w0 = 0xE200001C;
                temp_v0_6->words.w1 = 0xF0A4000;
            }
            temp_v0_7 = arg0->unk_2C0;
            arg0->unk_2C0 = (Gfx *) (temp_v0_7 + 8);
            temp_v0_7->words.w1 = 0x30;
            temp_v0_7->words.w0 = 0xE3001A01;
            temp_v0_8 = arg0->unk_2C0;
            arg0->unk_2C0 = (Gfx *) (temp_v0_8 + 8);
            temp_v0_8->words.w1 = 0xC0;
            temp_v0_8->words.w0 = 0xE3001801;
            temp_v0_9 = arg0->unk_2C0;
            arg0->unk_2C0 = (Gfx *) (temp_v0_9 + 8);
            temp_v0_9->words.w0 = 0xDE000000;
            temp_v0_9->words.w1 = (u32) sp24;
        }
    }
}

void func_800FC64C(void *arg0, s32 arg1) {
    u16 sp82;
    u16 sp80;
    u16 sp7E;
    u8 sp7A;
    u8 sp79;
    u8 sp78;
    u8 sp76;
    u8 sp75;
    u8 sp74;
    f32 sp6C;
    GraphicsContext *sp64;
    Gfx *sp4C;
    void *sp3C;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_v1_7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f4_5;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 temp_a2;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t5_2;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 temp_t6_3;
    u8 temp_t6_4;
    u8 temp_t7;
    u8 temp_t7_2;
    u8 temp_t8;
    u8 temp_t8_2;
    u8 temp_t8_3;
    u8 temp_t9;
    u8 temp_v0;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_t5;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_a0;
    s32 phi_t1;
    s32 phi_t0;
    s32 phi_a0_2;
    s8 phi_a3;
    s8 phi_t2;
    s32 phi_t0_2;
    f32 phi_f18;
    f32 phi_f4;
    f32 phi_f6;
    f32 phi_f4_2;
    u32 phi_ra;
    f32 phi_f14;
    u32 phi_t4;
    u32 phi_t3;
    u32 phi_t2_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    f32 phi_f18_2;
    f32 phi_f4_3;
    f32 phi_f8;
    f32 phi_f4_4;
    f32 phi_f10;
    f32 phi_f4_5;

    temp_a1 = arg1 & 0xFF;
    temp_t5 = arg0 + 0x10000;
    temp_a2 = arg0->unk_170EF;
    temp_v0 = arg0->unk_170F0;
    phi_v1_2 = 0;
    phi_t1 = 9;
    phi_t0 = 0;
    phi_t0_2 = 0;
    switch (temp_a1) {
    case 3:
        temp_v1 = arg0->unk_9C & 0x7F;
        phi_v1_4 = temp_v1;
        if (temp_v1 >= 0x81) {
            phi_v1_4 = 0xFF - temp_v1;
        }
        phi_v1_2 = phi_v1_4 + 0x49;
        phi_t0 = 0xFF;
        break;
    case 1:
        phi_v1_2 = 0xFF;
        if ((s32) temp_a2 >= 0xFF) {
            phi_t0 = 0xFF;
        } else {
            phi_t0 = 0x80;
        }
        break;
    case 2:
    case 5:
        if ((s32) temp_v0 >= 0x81) {
            phi_v1 = 0xFF;
        } else {
            temp_v1_2 = arg0->unk_9C & 0x7F;
            phi_v1_3 = temp_v1_2;
            if (temp_v1_2 >= 0x41) {
                phi_v1_3 = 0x80 - temp_v1_2;
            }
            phi_v1 = phi_v1_3 + 0x49;
        }
        phi_v1_2 = phi_v1;
        phi_t0 = 0x80;
        if (phi_v1 >= (s32) temp_a2) {
            phi_t0 = 0x80;
            if (phi_v1 != 0xFF) {
                arg0->unk_170EE = (s8) (arg0->unk_170EE + 1);
                phi_t0 = 0x80;
            }
        }
        break;
    case 4:
        phi_v1_2 = (s32) temp_v0 >> 1;
        if ((s32) temp_v0 >= 0x81) {
            phi_v1_2 = 0xFF;
        }
        if (temp_a2 == 0) {
            arg0->unk_170EE = 0;
        }
        break;
    case 6:
    case 8:
        temp_t0 = D_801F4E30;
        phi_v1_2 = (s32) temp_t0;
        phi_t1 = 1;
        phi_t0 = (s32) temp_t0;
        if (temp_a1 == 8) {
            phi_t1 = 0xA;
        }
        break;
    case 7:
    case 9:
        if (temp_a2 == 0) {
            arg0->unk_170EE = 0;
        }
        phi_t1 = 1;
        if (temp_a1 == 9) {
            phi_t1 = 0xA;
        }
        break;
    case 10:
        temp_t0_2 = D_801F4E30;
        phi_v1_2 = (s32) temp_t0_2;
        phi_t1 = 0xFF;
        phi_t0 = (s32) temp_t0_2;
        if (temp_a2 == 0) {
            arg0->unk_170EE = 0;
        }
        break;
    case 11:
        temp_v1_3 = arg0->unk_9C & 0x7F;
        phi_v1_5 = temp_v1_3;
        if (temp_v1_3 >= 0x41) {
            phi_v1_5 = 0x80 - temp_v1_3;
        }
        phi_v1_2 = phi_v1_5 + 0x49;
        phi_t0 = 0x80;
        break;
    case 12:
        if (temp_a2 == 0) {
            arg0->unk_170EE = 0;
        }
        break;
    case 13:
        temp_t0_3 = D_801F4E30;
        phi_v1_2 = (s32) temp_t0_3;
        phi_t1 = 0xA;
        phi_t0 = (s32) temp_t0_3;
        break;
    }
    temp_v0_2 = temp_a2 - phi_v1_2;
    if (temp_v0_2 < 0) {
        phi_a0 = -temp_v0_2;
    } else {
        phi_a0 = temp_v0_2;
    }
    temp_v0_3 = temp_v0 - phi_t0;
    if (phi_a0 < phi_t1) {
        phi_a3 = (s8) phi_v1_2;
    } else if (phi_v1_2 < (s32) temp_a2) {
        phi_a3 = temp_a2 - phi_t1;
    } else {
        phi_a3 = temp_a2 + phi_t1;
    }
    phi_a0_2 = temp_v0_3;
    if (temp_v0_3 < 0) {
        phi_a0_2 = -temp_v0_3;
    }
    if (phi_a0_2 < phi_t1) {
        phi_t2 = (s8) phi_t0;
    } else if (phi_t0 < (s32) temp_v0) {
        phi_t2 = temp_v0 - phi_t1;
    } else {
        phi_t2 = temp_v0 + phi_t1;
    }
    arg0->unk_170EF = phi_a3;
    arg0->unk_170F0 = phi_t2;
    temp_f14 = (512.0f - (f32) (phi_a3 + phi_t2)) * 0.0234375f;
    phi_f14 = temp_f14;
    if (temp_f14 > 6.0f) {
        phi_f14 = 6.0f;
    }
    if (arg0->unk_170EF != 0) {
        if (temp_a1 >= 0xB) {
            phi_t0_2 = 0xC;
        }
        temp_v0_4 = phi_t0_2 + &D_801BE92C;
        if ((arg0->unk_17022 != 0) || (arg0->unk_170C7 != 0xFF)) {
            temp_v1_6 = phi_t0_2 + &D_801BE944;
            sp3C = temp_t5;
            sp79 = temp_v0_4->unk_4;
            sp7A = temp_v0_4->unk_5;
            phi_ra = (u32) temp_v0_4->unk_3;
            phi_t4 = (u32) temp_v1_6->unk_5;
            phi_t3 = (u32) temp_v1_6->unk_4;
            phi_t2_2 = (u32) temp_v1_6->unk_3;
        } else {
            sp3C = temp_t5;
            temp_t1 = D_801BDBA0;
            temp_t5_2 = D_801BDBA4;
            if (temp_t5_2 == temp_t1) {
                temp_a2_2 = (temp_t1 * 3) + phi_t0_2;
                temp_v0_5 = temp_a2_2 + &D_801BE92C;
                temp_v1_4 = temp_a2_2 + &D_801BE944;
                sp79 = temp_v0_5->unk_1;
                sp7A = temp_v0_5->unk_2;
                phi_ra = (u32) temp_v0_5->unk_0;
                phi_t4 = (u32) temp_v1_4->unk_2;
                phi_t3 = (u32) temp_v1_4->unk_1;
                phi_t2_2 = (u32) temp_v1_4->unk_0;
            } else {
                temp_a3 = (temp_t5_2 * 3) + phi_t0_2;
                temp_a0 = temp_a3 + &D_801BE92C;
                temp_f0 = D_801BDB90;
                temp_a2_3 = (temp_t1 * 3) + phi_t0_2;
                temp_v0_6 = temp_a2_3 + &D_801BE92C;
                temp_f2 = 1.0f - temp_f0;
                temp_t8 = temp_a0->unk_1;
                temp_f18 = (f32) temp_t8;
                phi_f18 = temp_f18;
                phi_ra = (s32) (((f32) temp_a0->unk_0 * temp_f0) + ((f32) temp_v0_6->unk_0 * temp_f2)) & 0xFF;
                if ((s32) temp_t8 < 0) {
                    phi_f18 = temp_f18 + 4294967296.0f;
                }
                temp_t6 = temp_v0_6->unk_1;
                temp_f4 = (f32) temp_t6;
                phi_f4 = temp_f4;
                if ((s32) temp_t6 < 0) {
                    phi_f4 = temp_f4 + 4294967296.0f;
                }
                temp_t8_2 = temp_a0->unk_2;
                temp_f6 = (f32) temp_t8_2;
                sp79 = (u8) (s32) ((phi_f18 * temp_f0) + (phi_f4 * temp_f2));
                phi_f6 = temp_f6;
                if ((s32) temp_t8_2 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                temp_t6_2 = temp_v0_6->unk_2;
                temp_f4_2 = (f32) temp_t6_2;
                phi_f4_2 = temp_f4_2;
                if ((s32) temp_t6_2 < 0) {
                    phi_f4_2 = temp_f4_2 + 4294967296.0f;
                }
                temp_a1_2 = temp_a3 + &D_801BE944;
                temp_t7 = temp_a1_2->unk_0;
                temp_v1_5 = temp_a2_3 + &D_801BE944;
                temp_f10 = (f32) temp_t7;
                sp7A = (u8) (s32) ((phi_f6 * temp_f0) + (phi_f4_2 * temp_f2));
                phi_f10 = temp_f10;
                if ((s32) temp_t7 < 0) {
                    phi_f10 = temp_f10 + 4294967296.0f;
                }
                temp_t9 = temp_v1_5->unk_0;
                temp_f4_3 = (f32) temp_t9;
                phi_f4_5 = temp_f4_3;
                if ((s32) temp_t9 < 0) {
                    phi_f4_5 = temp_f4_3 + 4294967296.0f;
                }
                temp_t6_3 = temp_a1_2->unk_1;
                temp_f8 = (f32) temp_t6_3;
                phi_t2_2 = (s32) ((phi_f10 * temp_f0) + (phi_f4_5 * temp_f2)) & 0xFF;
                phi_f8 = temp_f8;
                if ((s32) temp_t6_3 < 0) {
                    phi_f8 = temp_f8 + 4294967296.0f;
                }
                temp_t7_2 = temp_v1_5->unk_1;
                temp_f4_4 = (f32) temp_t7_2;
                phi_f4_4 = temp_f4_4;
                if ((s32) temp_t7_2 < 0) {
                    phi_f4_4 = temp_f4_4 + 4294967296.0f;
                }
                temp_t8_3 = temp_a1_2->unk_2;
                temp_f18_2 = (f32) temp_t8_3;
                phi_t3 = (s32) ((phi_f8 * temp_f0) + (phi_f4_4 * temp_f2)) & 0xFF;
                phi_f18_2 = temp_f18_2;
                if ((s32) temp_t8_3 < 0) {
                    phi_f18_2 = temp_f18_2 + 4294967296.0f;
                }
                temp_t6_4 = temp_v1_5->unk_2;
                temp_f4_5 = (f32) temp_t6_4;
                phi_f4_3 = temp_f4_5;
                if ((s32) temp_t6_4 < 0) {
                    phi_f4_3 = temp_f4_5 + 4294967296.0f;
                }
                phi_t4 = (s32) ((phi_f18_2 * temp_f0) + (phi_f4_3 * temp_f2)) & 0xFF;
            }
        }
        temp_f0_2 = 6.0f - phi_f14;
        temp_t2 = (u32) ((((f32) phi_t2_2 * phi_f14) + (temp_f0_2 * (f32) phi_ra)) * 0.16666667f) & 0xFF;
        temp_t3 = (u32) ((((f32) phi_t3 * phi_f14) + (temp_f0_2 * (f32) sp79)) * 0.16666667f) & 0xFF;
        temp_t4 = (u32) ((((f32) phi_t4 * phi_f14) + (temp_f0_2 * (f32) sp7A)) * 0.16666667f) & 0xFF;
        temp_f2_2 = (f32) D_801F4F2E;
        sp82 = (u16) (u32) (temp_f2_2 * 1.8333334f);
        sp80 = (u16) (u32) (temp_f2_2 * 1.5f);
        sp7E = (u16) (u32) (temp_f2_2 * 1.0f);
        temp_v1_7 = arg0->unk_0;
        sp78 = (u8) phi_ra;
        sp6C = phi_f14;
        sp76 = temp_t4;
        sp75 = temp_t3;
        sp74 = temp_t2;
        sp64 = temp_v1_7;
        temp_v1_7->polyXlu.p = func_8012C3A4(temp_v1_7->polyXlu.p);
        temp_v0_7 = temp_v1_7->polyXlu.p;
        temp_v1_7->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = 0x20;
        temp_v0_7->words.w0 = 0xE3001A01;
        temp_v0_8 = temp_v1_7->polyXlu.p;
        temp_v1_7->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0x80;
        temp_v0_8->words.w0 = 0xE3001801;
        temp_v0_9 = temp_v1_7->polyXlu.p;
        temp_v1_7->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xFA000080;
        temp_v0_9->words.w1 = (phi_ra << 0x18) | (sp79 << 0x10) | (sp7A << 8) | sp3C->unk_70EF;
        temp_v0_10 = temp_v1_7->polyXlu.p;
        temp_v1_7->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xFB000000;
        temp_v0_10->words.w1 = (temp_t2 << 0x18) | ((temp_t3 & 0xFF) << 0x10) | ((temp_t4 & 0xFF) << 8) | sp3C->unk_70F0;
        temp_v0_11 = temp_v1_7->polyXlu.p;
        temp_v1_7->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xDB060020;
        sp6C = phi_f14;
        sp64 = temp_v1_7;
        sp4C = temp_v0_11;
        sp4C->words.w1 = Gfx_TwoTexScroll(arg0->unk_0, 0, sp82 & 0xFFF, 0U, 0x200, 0x20, 1, sp80 & 0xFFF, 0xFFF - (sp7E & 0xFFF), 0x100, 0x40);
        temp_v0_12 = temp_v1_7->polyXlu.p;
        temp_v1_7->polyXlu.p = temp_v0_12 + 8;
        temp_v0_12->words.w1 = 0;
        temp_v0_12->words.w0 = 0xE3001001;
        temp_v0_13 = temp_v1_7->polyXlu.p;
        temp_v1_7->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w0 = 0xDE000000;
        temp_v0_13->words.w1 = (u32) &D_050089D0;
    }
    D_801F4F2E = D_801F4F2E + (s32) phi_f14;
}

? func_800FD2B4(void *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4) {
    void *sp1C;
    s32 sp18;
    GlobalContext *temp_f12;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    u8 temp_t3;
    u8 temp_t6;
    u8 temp_t9;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    f32 phi_f12;
    f32 phi_f12_2;
    f32 phi_f0;
    void *phi_v1;
    s32 phi_a0;
    void *phi_v0;
    f32 phi_f10;
    f32 phi_f0_2;
    void *phi_v1_2;
    s32 phi_a0_2;
    void *phi_v0_2;
    f32 phi_f10_2;
    void *phi_v1_3;
    f32 phi_f10_3;
    s32 phi_a0_3;

    temp_f12 = arg1;
    temp_a2 = arg0;
    temp_a1 = temp_a2->unk_1CCC;
    temp_a0 = temp_a2;
    if (temp_a2->unk_186E3 == 5) {
        return 0;
    }
    sp18 = temp_a2 + 0x18000;
    sp1C = temp_a1;
    arg0 = temp_a2;
    arg1 = temp_f12;
    phi_f12 = (bitwise f32) arg1;
    if (func_80169FFC(temp_f12, temp_a0, temp_a1, temp_a2) == 0) {
        return 0;
    }
    if (temp_a2->unk_18880 != 0) {
        return 0;
    }
    if ((temp_a1 != 0) && ((temp_a1->unk_A6C & 2) != 0)) {
        return 0;
    }
    phi_a0 = 0;
    phi_a0_2 = 0;
    phi_a0_3 = 0;
    if ((bitwise f32) arg1 < 0.0f) {
        phi_f12 = 0.0f;
    }
    phi_f12_2 = phi_f12;
    if (phi_f12 > 1.0f) {
        phi_f12_2 = 1.0f;
    }
    phi_f0 = phi_f12_2 - arg3;
    if (phi_f12_2 < arg3) {
        phi_f0 = 0.0f;
    }
    arg0->unk_170A8 = (s16) (s32) ((arg2 - (f32) arg0->unk_170DA) * phi_f0);
    if (phi_f12_2 == 0.0f) {
        phi_v1 = arg0 + 0x10000;
        do {
            temp_a0_2 = phi_a0 + 1;
            temp_v1 = phi_v1 + 2;
            temp_v1->unk_70A0 = 0;
            phi_v1 = temp_v1;
            phi_a0 = temp_a0_2;
        } while (temp_a0_2 != 3);
    } else {
        temp_f0 = phi_f12_2 * 5.0f;
        phi_v0 = arg0 + 0x10000;
        phi_f0_2 = temp_f0;
        phi_v1_2 = arg0 + 0x10000;
        if (temp_f0 > 1.0f) {
            phi_f0_2 = 1.0f;
        }
        do {
            temp_t3 = phi_v0->unk_70D7;
            temp_f10 = (f32) temp_t3;
            phi_f10 = temp_f10;
            if ((s32) temp_t3 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            temp_a0_3 = phi_a0_2 + 1;
            temp_v1_2 = phi_v1_2 + 2;
            temp_v1_2->unk_70A0 = (s16) (s32) (-phi_f10 * phi_f0_2);
            phi_v0 += 1;
            phi_v1_2 = temp_v1_2;
            phi_a0_2 = temp_a0_3;
        } while (temp_a0_3 != 3);
    }
    phi_v1_3 = arg0 + 0x10000;
    if (arg4 <= 0.0f) {

    } else {
        temp_f12_2 = phi_f12_2 * arg4;
        phi_v0_2 = arg0 + 0x10000;
        do {
            temp_t6 = phi_v0_2->unk_70C8;
            temp_f10_2 = (f32) temp_t6;
            phi_f10_2 = temp_f10_2;
            if ((s32) temp_t6 < 0) {
                phi_f10_2 = temp_f10_2 + 4294967296.0f;
            }
            phi_v1_3->unk_7090 = (s16) (s32) (-phi_f10_2 * temp_f12_2);
            temp_t9 = phi_v0_2->unk_70CE;
            temp_f10_3 = (f32) temp_t9;
            phi_f10_3 = temp_f10_3;
            if ((s32) temp_t9 < 0) {
                phi_f10_3 = temp_f10_3 + 4294967296.0f;
            }
            temp_a0_4 = phi_a0_3 + 1;
            temp_v1_3 = phi_v1_3 + 2;
            temp_v1_3->unk_7094 = (s16) (s32) (-phi_f10_3 * temp_f12_2);
            phi_v0_2 += 1;
            phi_v1_3 = temp_v1_3;
            phi_a0_3 = temp_a0_4;
        } while (temp_a0_4 != 3);
    }
    return 1;
}

void func_800FD538(Color_RGB8 *param_1, Color_RGB8 *param_2, f32 param_3, Vec3s *param_4) {
    u8 sp1C;

    Lib_LerpRGB(param_1, param_2, param_3, (Color_RGB8 *) &sp1C);
    param_4->x = sp1C - param_1->r;
    param_4->y = sp1D - param_1->g;
    param_4->z = sp1E - param_1->b;
}

void func_800FD59C(GlobalContext *globalCtx, Color_RGB8 *pzParm2, f32 fParm3) {
    func_800FD538((Color_RGB8 *) &globalCtx->envCtx.unk_C4, pzParm2, fParm3, (Vec3s *) &globalCtx->envCtx.unk_8C);
}

void func_800FD5E0(GlobalContext *globalCtx, Color_RGB8 *pzParm2, f32 fParm3) {
    func_800FD538((Color_RGB8 *) globalCtx->envCtx.unk_C4.diffuseColor1, pzParm2, fParm3, (Vec3s *) globalCtx->envCtx.unk_8C.diffuseColor1);
    func_800FD538((Color_RGB8 *) globalCtx->envCtx.unk_C4.diffuseColor, pzParm2, fParm3, (Vec3s *) globalCtx->envCtx.unk_8C.diffuseColor2);
}

void func_800FD654(GlobalContext *globalCtx, Color_RGB8 *pzParm2, f32 fParm3) {
    func_800FD538((Color_RGB8 *) globalCtx->envCtx.unk_C4.fogColor, pzParm2, fParm3, (Vec3s *) globalCtx->envCtx.unk_8C.fogColor);
}

void func_800FD698(void *arg0, s16 arg1, s16 arg2, f32 arg3) {
    arg0->unk_170A8 = (s16) (s32) ((f32) (arg1 - arg0->unk_170DA) * arg3);
    arg0->unk_170AA = (s16) (s32) ((f32) (arg2 - arg0->unk_170DC) * arg3);
}

u32 get_days_elapsed(void) {
    return gSaveContext.daysElapsed;
}

void reset_days_elapsed(void) {
    gSaveContext.daysElapsed = 0;
}

s32 get_current_day(void) {
    return gSaveContext.day;
}

void func_800FD750(s32 arg0) {
    gSaveContext.unk_3F46 = arg0 & 0xFFFF;
}

? func_800FD768(void) {
    ? phi_v1;

    phi_v1 = 0;
    if (gSaveContext.unk_3F46 != 0) {
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_800FD78C(GlobalContext *globalCtx) {
    u16 temp_v0;
    u8 temp_a0;

    if (((globalCtx->soundCtx.seqIndex != 0x7F) && (globalCtx->soundCtx.nightSeqIndex == 0x13)) || (globalCtx = globalCtx, (func_801A8A50(0) == 0x57))) {
        func_801A4A28(7U, (u8) globalCtx);
    } else if (globalCtx->soundCtx.seqIndex != 0x7F) {
        temp_a0 = globalCtx->soundCtx.nightSeqIndex;
        if (temp_a0 != 0x13) {
            temp_v0 = gSaveContext.time;
            if (((s32) temp_v0 >= 0x4000) && ((s32) temp_v0 < 0xC000)) {
                func_801A4A28(temp_a0, (u8) globalCtx);
            }
        }
    }
    func_801A47DC(0xE, 1, 1);
    func_801A47DC(0xF, 1, 1);
}

void func_800FD858(GlobalContext *globalCtx) {
    u16 temp_v0;

    if (((globalCtx->soundCtx.seqIndex != 0x7F) && (globalCtx->soundCtx.nightSeqIndex == 0x13)) || (globalCtx = globalCtx, (func_801A8A50(0) == 0x57))) {
        func_801A89A8(0x141400FF);
    } else if ((globalCtx->soundCtx.seqIndex != 0x7F) && (globalCtx->soundCtx.nightSeqIndex != 0x13)) {
        temp_v0 = gSaveContext.time;
        if (((s32) temp_v0 >= 0x4000) && ((s32) temp_v0 < 0xC000)) {
            func_801A89A8(0x141400FF);
        }
    }
    func_801A47DC(0xE, 1, 0);
    func_801A47DC(0xF, 1, 0);
}

void func_800FD928(s32 param_1) {
    D_801BDBB0 = 0;
    gSaveContext.cutscene = 0;
    gSaveContext.respawnFlag = -3;
    param_1->unk_1887A = (u16) gSaveContext.respawn[1].entranceIndex;
    param_1->unk_18875 = 0x14;
    param_1->unk_1887F = 3U;
    gSaveContext.nextTransition = 3;
}

void func_800FD980(GraphicsContext **arg0) {
    GraphicsContext *temp_v0;
    u16 temp_v1;
    void *temp_v1_2;
    f32 phi_f0;

    if ((arg0->unk_17014 == 0) && (arg0->unk_18874 == 1)) {
        temp_v1 = gSaveContext.time;
        if (((s32) temp_v1 >= 0xE000) || ((s32) temp_v1 < 0x1555)) {
            phi_f0 = 1.0f;
        } else if ((s32) temp_v1 >= 0xCAAB) {
            phi_f0 = 1.0f - ((f32) (0xE000 - temp_v1) * 0.00018308312f);
        } else if ((s32) temp_v1 < 0x2000) {
            phi_f0 = (f32) (0x2000 - temp_v1) * 0.00036616623f;
        } else {
            phi_f0 = 0.0f;
        }
        if (arg0->unk_1701B == 0x18) {
            phi_f0 = 1.0f;
        }
        D_801F4F28 = phi_f0;
        D_801BDB98 = (s32) D_801F4E7A;
    } else {
        D_801BDB98 = 0;
        D_801F4F28 = 0.0f;
    }
    if ((D_801BDB98 != 0) && (D_801F4F28 != 0.0f)) {
        temp_v0 = arg0->unk_0;
        D_801F4F38 = temp_v0->polyOpa.p;
        temp_v1_2 = temp_v0->polyOpa.p;
        temp_v0->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = 0;
        temp_v1_2->words.w0 = 0xE0000000;
        return;
    }
    D_801F4F38 = NULL;
}

void func_800FDAF8(void **arg0, f32 arg1, f32 arg2, u32 arg3, s32 arg4) {
    u32 temp_a1;
    u32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = *arg0;
    temp_v0_2 = temp_v0 + 8;
    temp_v1 = (u32) (arg1 * 4.0f);
    temp_v0_3 = temp_v0_2 + 8;
    temp_a1 = (u32) (arg2 * 4.0f);
    temp_v0->unk_0 = (s32) ((((temp_v1 + arg3) & 0xFFF) << 0xC) | 0xE4000000 | ((temp_a1 + arg4) & 0xFFF));
    temp_v0->unk_4 = (s32) (((temp_v1 & 0xFFF) << 0xC) | (temp_a1 & 0xFFF));
    temp_v0_2->unk_0 = 0xE1000000;
    temp_v0_2->unk_4 = 0;
    temp_v0_3->unk_0 = 0xF1000000;
    temp_v0_3->unk_4 = 0;
    *arg0 = temp_v0_3 + 8;
}

void func_800FDC94(GlobalContext *arg0, Gfx **arg1) {
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF4;
    f32 spF0;
    s32 spE8;
    s32 spE4;
    void *spD8;
    Gfx *temp_s5;
    MtxF *temp_s0;
    MtxF *temp_s3;
    f32 temp_a1;
    f32 temp_a2;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f8;
    f32 temp_f8_2;
    s16 temp_s1_3;
    s32 temp_f10;
    s32 temp_s2;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_s1_4;
    u8 temp_v0;
    void *temp_s5_2;
    void *temp_s5_3;
    void *temp_s5_4;
    void *temp_s5_5;
    void *temp_v0_2;
    s32 phi_t0;
    s32 phi_s2;
    u32 phi_s1;
    s32 phi_v1;
    void *phi_s5;
    u32 phi_a3;
    void *phi_s5_2;
    s32 phi_v1_2;
    void *phi_s5_3;

    temp_s5 = *arg1;
    spE4 = Kankyo_IsSceneUpsideDown(arg0);
    temp_s0 = &arg0->mf_187FC;
    SysMatrix_FromRSPMatrix((RSPMatrix *) arg0->view.viewingPtr, temp_s0);
    temp_s3 = &arg0->projectionMatrix;
    SysMatrix_FromRSPMatrix((RSPMatrix *) &arg0->view.projection, temp_s3);
    SkinMatrix_MtxFMtxFMult(temp_s3, temp_s0, temp_s3);
    temp_s5->words.w0 = 0xE7000000;
    temp_s5->words.w1 = 0;
    temp_s5_2 = temp_s5 + 8;
    temp_s5_2->unk_0 = 0xFB000000;
    temp_f8 = 255.0f * D_801F4F28;
    temp_s5_3 = temp_s5_2 + 8;
    temp_f10 = (s32) temp_f8;
    phi_v1 = 0;
    if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
        if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
            phi_t0 = (s32) (temp_f8 - 2.1474836e9f) | 0x80000000;
        } else {
            goto block_3;
        }
    } else {
        phi_t0 = temp_f10;
        if (temp_f10 < 0) {
block_3:
            phi_t0 = -1;
        }
    }
    temp_s5_2->unk_4 = (s32) ((phi_t0 & 0xFF) | ~0xFF);
    temp_s5_3->unk_0 = 0xFC32BA65;
    temp_s5_3->unk_4 = 0xFF77FFFF;
    temp_s5_4 = temp_s5_3 + 8;
    temp_s5_4->unk_0 = 0xEF000CF0;
    temp_s5_4->unk_4 = 0x50704C;
    temp_s5_5 = temp_s5_4 + 8;
    temp_v0 = (u8) gSaveContext.playerName[7];
    phi_s2 = 0;
    phi_s1 = (temp_v0 << 0x1C) ^ (((u8) gSaveContext.playerName[0] << 0x18) ^ ((u8) gSaveContext.playerName[1] << 0x14) ^ ((u8) gSaveContext.playerName[2] << 0x10) ^ ((u8) gSaveContext.playerName[3] << 0xC) ^ ((u8) gSaveContext.playerName[4] << 8) ^ ((u8) gSaveContext.playerName[5] * 0x10) ^ (u8) gSaveContext.playerName[6] ^ ((u32) temp_v0 >> 4));
    phi_s5 = temp_s5_5;
    phi_s5_3 = temp_s5_5;
    if (D_801BDB98 > 0) {
        do {
            phi_s5_2 = phi_s5;
            if (phi_s2 < 0x10) {
                temp_v0_2 = (phi_s2 * 6) + &D_801DD880;
                spFC = (f32) temp_v0_2->unk_0 + arg0->view.eye.x;
                sp100 = (f32) temp_v0_2->unk_2 + arg0->view.eye.y;
                sp104 = (f32) temp_v0_2->unk_4 + arg0->view.eye.z;
                phi_a3 = 8U;
            } else {
                temp_s1 = (phi_s1 * 0x19660D) + 0x3C6EF35F;
                sRandFloat = (temp_s1 >> 9) | 0x3F800000;
                temp_f4 = (bitwise f32) sRandFloat - 1.0f;
                temp_s1_2 = (temp_s1 * 0x19660D) + 0x3C6EF35F;
                sRandFloat = (temp_s1_2 >> 9) | 0x3F800000;
                spE8 = phi_v1;
                temp_f20 = (((bitwise f32) sRandFloat - 1.0f) + temp_f4) * 0.5f;
                temp_s1_3 = (temp_s1_2 * 0x19660D) + 0x3C6EF35F;
                sp100 = (arg0->view.eye.y + (temp_f20 * temp_f20 * 16384.0f)) - 1000.0f;
                temp_f22 = 1.2f - temp_f20;
                spFC = (Math_SinS(temp_s1_3) * temp_f22 * 16384.0f) + arg0->view.eye.x;
                temp_f16 = Math_CosS(temp_s1_3) * temp_f22 * 16384.0f;
                temp_s1_4 = (temp_s1_3 * 0x19660D) + 0x3C6EF35F;
                sRandFloat = (temp_s1_4 >> 9) | 0x3F800000;
                temp_f2 = (bitwise f32) sRandFloat - 1.0f;
                sp104 = temp_f16 + arg0->view.eye.z;
                phi_a3 = (u32) ((temp_f2 * temp_f2 * 8.0f) + 2.0f);
                phi_s1 = temp_s1_4;
            }
            phi_v1_2 = phi_v1;
            if (spE4 != 0) {
                sp100 = -sp100;
            }
            if ((phi_s2 < 0xF) || ((phi_s2 == 0xF) && (((s32) gSaveContext.day % 7) == 0))) {
                phi_s5->unk_0 = 0xFA000000;
                phi_s5->unk_4 = (s32) *(&D_801DD8E0 + ((phi_s2 & 7) * 4));
                phi_s5_2 = phi_s5 + 8;
            } else if (((phi_s2 & 0x3F) == 0) || (phi_s2 == 0x10)) {
                phi_s5->unk_0 = 0xFA000000;
                phi_s5->unk_4 = (s32) (unaligned s32) *(&D_801DD900 + ((phi_v1 & 0xF) * 4));
                phi_s5_2 = phi_s5 + 8;
                phi_v1_2 = phi_v1 + 1;
            }
            if (phi_a3 >= 2U) {
                temp_f2_2 = arg0->projectionMatrix.mf[3][3] + ((spFC * arg0->projectionMatrix.mf[0][3]) + (sp100 * arg0->projectionMatrix.mf[1][3]) + (sp104 * arg0->projectionMatrix.mf[2][3]));
                if (temp_f2_2 >= 1.0f) {
                    temp_f0 = 1.0f / temp_f2_2;
                    spF0 = (temp_s3->mf[3][0] + ((spFC * temp_s3->mf[0][0]) + (sp100 * temp_s3->mf[1][0]) + (sp104 * temp_s3->mf[2][0]))) * temp_f0;
                    spF4 = (temp_s3->mf[3][1] + ((spFC * temp_s3->mf[0][1]) + (sp100 * temp_s3->mf[1][1]) + (sp104 * temp_s3->mf[2][1]))) * temp_f0;
                }
                if ((temp_f2_2 >= 1.0f) && (spF0 > -1.0f) && (spF0 < 1.0f) && (spF4 > -1.0f) && (spF4 < 1.0f)) {
                    spD8 = phi_s5_2;
                    temp_f8_2 = (spF0 * 160.0f) + 160.0f;
                    spE8 = phi_v1_2;
                    temp_f16_2 = (spF4 * -120.0f) + 120.0f;
                    temp_a1 = temp_f8_2;
                    spF0 = temp_f8_2;
                    temp_a2 = temp_f16_2;
                    spF4 = temp_f16_2;
                    func_800FDAF8(&spD8, temp_a1, temp_a2, phi_a3, 4);
                }
            }
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
            phi_v1 = phi_v1_2;
            phi_s5 = phi_s5_2;
            phi_s5_3 = phi_s5_2;
        } while (temp_s2 < D_801BDB98);
    }
    phi_s5_3->unk_0 = 0xE7000000;
    phi_s5_3->unk_4 = 0;
    *arg1 = phi_s5_3 + 8;
}

void func_800FE390(GraphicsContext **arg0) {
    func_800FD980(arg0);
    func_800F8D84((GlobalContext *) arg0);
    func_800FB010((GlobalContext *) arg0);
    func_800FB388(arg0, 0);
    func_800FAC20(arg0);
}

void func_800FE3E0(GlobalContext *arg0) {
    Gfx *sp2C;
    Gfx *sp28;
    void *sp24;
    Gfx *temp_a0;
    Gfx *temp_t0;
    Gfx *temp_v0_2;
    void *temp_v0;

    if (D_801F4F38 != 0) {
        temp_v0 = arg0->state.gfxCtx;
        temp_a0 = temp_v0->polyOpa.p;
        sp24 = temp_v0;
        sp28 = temp_a0;
        sp2C = Graph_GfxPlusOne(temp_a0);
        temp_v0_2 = D_801F4F38;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = sp2C;
        func_800FDC94(arg0, &sp2C);
        temp_t0 = sp2C;
        sp2C = temp_t0 + 8;
        temp_t0->words.w1 = 0;
        temp_t0->words.w0 = 0xDF000000;
        Graph_BranchDlist(temp_a0, sp2C);
        sp24->polyOpa.p = sp2C;
        D_801F4F38 = NULL;
    }
}

void func_800FE484(void) {
    D_801F4F32 = 1;
}

void func_800FE498(void) {
    D_801F4F32 = 0;
}

u8 func_800FE4A8(void) {
    return D_801F4F32;
}

u32 func_800FE4B8(GlobalContext *globalCtx) {
    s16 temp_v0;
    u32 phi_v1;

    temp_v0 = globalCtx->sceneNum;
    phi_v1 = (u32) (u8) globalCtx->envCtx.unk_E2;
    if ((temp_v0 == 0x10) && (globalCtx->roomCtx.currRoom.num == 0)) {
        phi_v1 = 0U;
        if ((gSaveContext.day >= 2) && ((gSaveContext.weekEventReg[22] & 1) == 0)) {
            phi_v1 = 1U;
        }
    }
    if ((s32) temp_v0 >= 0x1D) {
        switch (temp_v0) {
        case 90:
            if (gSaveContext.sceneSetupIndex == 1) {
                goto block_12;
            }
            break;
        }
    } else if (temp_v0 == 0x1C) {
    case 77:
    case 80:
    case 91:
    case 92:
    case 93:
    case 107:
        if (gSaveContext.sceneSetupIndex == 0) {
block_12:
            phi_v1 = 0U;
        }
    }
    return phi_v1;
}

s32 func_800FE590(GlobalContext *arg0) {
    s32 phi_v1;

    phi_v1 = 0;
    if ((gSaveContext.day == 3) && ((s32) gSaveContext.time < 0x4000)) {
        phi_v1 = 1;
    }
    return phi_v1;
}

u8 func_800FE5D0(GlobalContext *arg0) {
    u8 sp1F;
    u8 phi_v1;

    sp1F = 0;
    phi_v1 = sp1F;
    if (Entrance_GetSceneNum(gSaveContext.entranceIndex & 0xFFFF) < 0) {
        phi_v1 = 1U;
    }
    return phi_v1;
}

? func_800FE610(s32 arg0) {
    return 0;
}

s32 func_800FE620(GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = gGameInfo->data[15];
    phi_v1 = 0;
    if (temp_v0 != 0) {
        phi_v1 = (*(&gSaveContext + 0x16) + temp_v0) & 0xFFFF;
    }
    return phi_v1;
}

void func_800FE658(f32 arg0) {
    D_801BDB9C = (u16) (u32) (arg0 * 45.511112f);
}

? func_800FE6F8(s32 arg0, s16 arg1, s16 arg2) {
    s16 temp_v0;
    ? phi_v1;

    temp_v0 = gGameInfo->data[15];
    phi_v1 = 0;
    if ((temp_v0 != 0) && ((s32) arg2 < ((((gSaveContext.unk_14 + temp_v0) * arg1 * 0x14) + gSaveContext.time) & 0xFFFF))) {
        phi_v1 = 1;
    }
    return phi_v1;
}

u8 func_800FE778(void) {
    return D_801BDBA0;
}

u8 func_800FE788(void) {
    return D_801BDBA4;
}

f32 func_800FE798(void) {
    return D_801BDB90;
}

void func_800FE7A8(s32 arg0, void *arg1) {
    f32 sp24;
    s32 sp1C;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    u8 *temp_a0;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_t9;
    void *temp_v1;
    void *temp_v1_2;
    f32 phi_f6;
    f32 phi_f6_2;
    f32 phi_f4;
    f32 phi_f4_2;
    f32 phi_f10;
    f32 phi_f10_2;
    f32 phi_f6_3;

    sp24 = func_800FE798();
    sp1C = func_800FE778();
    temp_a0 = arg0 + (func_800FE788() * 4);
    if (sp24 <= 0.0f) {
        temp_v1 = arg0 + (sp1C * 4);
        arg1->unk_0 = (u8) temp_v1->unk_0;
        arg1->unk_1 = (u8) temp_v1->unk_1;
        arg1->unk_2 = (u8) temp_v1->unk_2;
        arg1->unk_3 = (u8) temp_v1->unk_3;
        return;
    }
    temp_f0 = 1.0f - sp24;
    temp_v1_2 = arg0 + (sp1C * 4);
    temp_t5 = temp_v1_2->unk_0;
    temp_f6 = (f32) temp_t5;
    phi_f6 = temp_f6;
    if ((s32) temp_t5 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    arg1->unk_0 = (u8) (s32) (((f32) temp_a0->unk_0 * sp24) + (temp_f0 * phi_f6));
    temp_t8 = temp_a0->unk_1;
    temp_f6_2 = (f32) temp_t8;
    phi_f6_2 = temp_f6_2;
    if ((s32) temp_t8 < 0) {
        phi_f6_2 = temp_f6_2 + 4294967296.0f;
    }
    temp_t9 = temp_v1_2->unk_1;
    temp_f4 = (f32) temp_t9;
    phi_f4 = temp_f4;
    if ((s32) temp_t9 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    arg1->unk_1 = (u8) (s32) ((phi_f6_2 * sp24) + (temp_f0 * phi_f4));
    temp_t2 = temp_a0->unk_2;
    temp_f4_2 = (f32) temp_t2;
    phi_f4_2 = temp_f4_2;
    if ((s32) temp_t2 < 0) {
        phi_f4_2 = temp_f4_2 + 4294967296.0f;
    }
    temp_t3 = temp_v1_2->unk_2;
    temp_f10 = (f32) temp_t3;
    phi_f10 = temp_f10;
    if ((s32) temp_t3 < 0) {
        phi_f10 = temp_f10 + 4294967296.0f;
    }
    arg1->unk_2 = (u8) (s32) ((phi_f4_2 * sp24) + (temp_f0 * phi_f10));
    temp_t6 = temp_a0->unk_3;
    temp_f10_2 = (f32) temp_t6;
    phi_f10_2 = temp_f10_2;
    if ((s32) temp_t6 < 0) {
        phi_f10_2 = temp_f10_2 + 4294967296.0f;
    }
    temp_t7 = temp_v1_2->unk_3;
    temp_f6_3 = (f32) temp_t7;
    phi_f6_3 = temp_f6_3;
    if ((s32) temp_t7 < 0) {
        phi_f6_3 = temp_f6_3 + 4294967296.0f;
    }
    arg1->unk_3 = (u8) (s32) ((phi_f10_2 * sp24) + (temp_f0 * phi_f6_3));
}

u8 func_800FE9B4(GlobalContext *arg0) {
    u8 sp1F;
    s32 sp18;
    u8 phi_a1;
    u8 phi_a1_2;

    phi_a1 = 0U;
    if ((arg0->envCtx.unk_F2[4] == 0x3C) && (arg0->envCtx.unk_F2[2] == 0)) {
        phi_a1 = 1U;
    }
    phi_a1_2 = phi_a1;
    if ((arg0->envCtx.unk_F2[0] == 0x3C) && (((arg0 + (arg0->activeCamera * 4))->unk_800->unk_14C & 0x100) == 0)) {
        sp18 = arg0 + 0x10000;
        sp1F = phi_a1;
        phi_a1_2 = phi_a1;
        if ((func_800FE4B8(arg0) != 0) && (arg0->envCtx.unk_F2[2] == 0)) {
            phi_a1_2 = 1U;
        }
    }
    return phi_a1_2;
}

void func_800FEA50(s32 arg0) {
    s32 temp_v0;
    u8 phi_v0;

    temp_v0 = gSaveContext.day;
    if ((temp_v0 != 0) && (temp_v0 != 1)) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                goto block_4;
            }
            phi_v0 = 4U;
        } else {
            phi_v0 = 3U;
        }
    } else {
block_4:
        phi_v0 = 0U;
    }
    D_801F4F30 = phi_v0;
    D_801F4F33 = 1;
}

void func_800FEAB0(void) {
    D_801F4F33 = 0;
}

void func_800FEAC0(void) {
    u16 temp_v0;

    temp_v0 = D_801BDB9C;
    if (temp_v0 != 0) {
        D_801BDB9C = 0;
        gSaveContext.time += temp_v0;
    }
}

void func_800FEAF4(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s8 temp_a3;
    s8 temp_t4;
    s8 temp_t5;
    s8 temp_t7;
    s8 temp_t8;
    u8 temp_a2;
    s32 phi_v1;
    s8 phi_a3;
    s32 phi_a3_2;

    temp_v0 = gSaveContext.day;
    phi_v1 = 0;
    if (temp_v0 != 0) {
        phi_v1 = (temp_v0 - 1) & 0xFF;
    }
    temp_t8 = phi_v1 + (D_801F4E31 * 3);
    temp_a3 = temp_t8 & 0xFF;
    arg0->unk_17 = temp_t8;
    arg0->unk_18 = temp_a3;
    temp_a2 = D_801F4E31;
    phi_a3_2 = (s32) temp_a3;
    if (temp_a2 == 4) {
        arg0->unk_17 = 0xE;
        phi_a3 = 0xE & 0xFF;
        goto block_16;
    }
    if (temp_a2 == 5) {
        arg0->unk_17 = 0x10;
        phi_a3 = 0x10 & 0xFF;
        goto block_16;
    }
    if (temp_a2 == 6) {
        arg0->unk_17 = 0x11;
        phi_a3 = 0x11 & 0xFF;
        goto block_16;
    }
    temp_t4 = phi_v1 + 0x12;
    if (temp_a2 == 7) {
        arg0->unk_17 = temp_t4;
        phi_a3 = temp_t4 & 0xFF;
        goto block_16;
    }
    temp_t5 = phi_v1 + 0x15;
    if (temp_a2 == 8) {
        arg0->unk_17 = temp_t5;
        phi_a3 = temp_t5 & 0xFF;
        goto block_16;
    }
    if (temp_a2 == 9) {
        arg0->unk_17 = 0x18;
        phi_a3 = 0x18 & 0xFF;
        goto block_16;
    }
    temp_t7 = phi_v1 + 0x19;
    if (temp_a2 == 0xA) {
        arg0->unk_17 = temp_t7;
        phi_a3 = temp_t7 & 0xFF;
block_16:
        arg0->unk_18 = phi_a3;
        phi_a3_2 = (s32) phi_a3;
    }
    if (phi_v1 >= 3) {
        arg0->unk_17 = 0xD;
        arg0->unk_18 = 0xD;
        phi_a3_2 = 0xD & 0xFF;
    }
    if (phi_a3_2 >= 0x1C) {
        arg0->unk_17 = 0;
        arg0->unk_18 = 0;
    }
    temp_v1 = gSaveContext.day;
    if ((temp_v1 != 0) && (temp_v1 != 1)) {
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                /* Duplicate return node #25. Try simplifying control flow for better match */
                arg0->unk_1F = 0;
                arg0->unk_20 = 0;
                return;
            }
            arg0->unk_1F = 4;
            arg0->unk_20 = 4;
            return;
        }
        arg0->unk_1F = 3;
        arg0->unk_20 = 3;
        return;
    }
    arg0->unk_1F = 0;
    arg0->unk_20 = 0;
}
