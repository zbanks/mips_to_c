CRASHED

typedef struct EnFishing {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x4];
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ u8 unk_149;                         /* inferred */
    /* 0x14A */ u8 unk_14A;                         /* inferred */
    /* 0x14B */ char pad_14B[0x1];
    /* 0x14C */ s16 unk_14C;                        /* inferred */
    /* 0x14E */ u8 unk_14E;                         /* inferred */
    /* 0x14F */ char pad_14F[0x1];
    /* 0x150 */ s16 unk_150;                        /* inferred */
    /* 0x152 */ s16 unk_152;                        /* inferred */
    /* 0x154 */ s16 unk_154;                        /* inferred */
    /* 0x156 */ s16 unk_156;                        /* inferred */
    /* 0x158 */ s16 unk_158;                        /* inferred */
    /* 0x15A */ s16 unk_15A;                        /* inferred */
    /* 0x15C */ s16 unk_15C;                        /* inferred */
    /* 0x15E */ s16 unk_15E;                        /* inferred */
    /* 0x160 */ s16 unk_160;                        /* inferred */
    /* 0x162 */ s16 unk_162;                        /* inferred */
    /* 0x164 */ s16 unk_164;                        /* inferred */
    /* 0x166 */ s16 unk_166;                        /* inferred */
    /* 0x168 */ s16 unk_168;                        /* inferred */
    /* 0x16A */ s16 unk_16A;                        /* inferred */
    /* 0x16C */ s16 unk_16C;                        /* inferred */
    /* 0x16E */ s16 unk_16E;                        /* inferred */
    /* 0x170 */ s16 unk_170;                        /* inferred */
    /* 0x172 */ s16 unk_172;                        /* inferred */
    /* 0x174 */ s16 unk_174;                        /* inferred */
    /* 0x176 */ s16 unk_176;                        /* inferred */
    /* 0x178 */ s16 unk_178;                        /* inferred */
    /* 0x17A */ char pad_17A[0x2];
    /* 0x17C */ f32 unk_17C;                        /* inferred */
    /* 0x180 */ f32 unk_180;                        /* inferred */
    /* 0x184 */ f32 unk_184;                        /* inferred */
    /* 0x188 */ f32 unk_188;                        /* inferred */
    /* 0x18C */ f32 unk_18C;                        /* inferred */
    /* 0x190 */ f32 unk_190;                        /* inferred */
    /* 0x194 */ f32 unk_194;                        /* inferred */
    /* 0x198 */ s16 unk_198;                        /* inferred */
    /* 0x19A */ s16 unk_19A;                        /* inferred */
    /* 0x19C */ s16 unk_19C;                        /* inferred */
    /* 0x19E */ char pad_19E[0x2];
    /* 0x1A0 */ f32 unk_1A0;                        /* inferred */
    /* 0x1A4 */ f32 unk_1A4;                        /* inferred */
    /* 0x1A8 */ f32 unk_1A8;                        /* inferred */
    /* 0x1AC */ f32 unk_1AC;                        /* inferred */
    /* 0x1B0 */ f32 unk_1B0;                        /* inferred */
    /* 0x1B4 */ f32 unk_1B4;                        /* inferred */
    /* 0x1B8 */ f32 unk_1B8;                        /* inferred */
    /* 0x1BC */ f32 unk_1BC;                        /* inferred */
    /* 0x1C0 */ f32 unk_1C0;                        /* inferred */
    /* 0x1C4 */ char pad_1C4[0x6];                  /* maybe part of unk_1C0[2]? */
    /* 0x1CA */ u8 unk_1CA;                         /* inferred */
    /* 0x1CB */ char pad_1CB[0x2];                  /* maybe part of unk_1CA[3]? */
    /* 0x1CD */ u8 unk_1CD;                         /* inferred */
    /* 0x1CE */ char pad_1CE[0x2];                  /* maybe part of unk_1CD[3]? */
    /* 0x1D0 */ SkelAnime unk_1D0;                  /* inferred */
    /* 0x214 */ LightNode *unk_214;                 /* inferred */
    /* 0x218 */ LightInfo unk_218;                  /* inferred */
    /* 0x226 */ char pad_226[0x2];
    /* 0x228 */ ColliderJntSph unk_228;             /* inferred */
    /* 0x248 */ ColliderJntSphElement unk_248;      /* inferred */
    /* 0x288 */ char pad_288[0x2C0];                /* maybe part of unk_248[12]? */
} EnFishing;                                        /* size = 0x548 */

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
    /* 0x7C */ char pad_7C[0x4];                    /* maybe part of unk_7A[3]? */
} RoomContext;                                      /* size = 0x80 */

struct _mips2c_stack_EnFishing_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFishing_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnFishing_Init {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ ActorContext *sp5C;                  /* inferred */
    /* 0x60 */ char pad_60[0x18];
};                                                  /* size = 0x78 */

struct _mips2c_stack_EnFishing_Update {
    /* 0x000 */ char pad_0[0x3C];
    /* 0x03C */ f32 *sp3C;                          /* inferred */
    /* 0x040 */ s16 *sp40;                          /* inferred */
    /* 0x044 */ f32 *sp44;                          /* inferred */
    /* 0x048 */ PosRot *sp48;                       /* inferred */
    /* 0x04C */ f32 sp4C;                           /* inferred */
    /* 0x050 */ char pad_50[0x10];                  /* maybe part of sp4C[5]? */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ f32 sp64;                           /* inferred */
    /* 0x068 */ f32 sp68;                           /* inferred */
    /* 0x06C */ f32 sp6C;                           /* inferred */
    /* 0x070 */ char pad_70[0x2];
    /* 0x072 */ s16 sp72;                           /* inferred */
    /* 0x074 */ f32 sp74;                           /* inferred */
    /* 0x078 */ f32 sp78;                           /* inferred */
    /* 0x07C */ f32 sp7C;                           /* inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ ? sp84;                             /* inferred */
    /* 0x084 */ char pad_84[0x4];
    /* 0x088 */ f32 sp88;                           /* inferred */
    /* 0x08C */ char pad_8C[0x16];                  /* maybe part of sp88[6]? */
    /* 0x0A2 */ u16 spA2;                           /* inferred */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ char pad_A8[0x10];                  /* maybe part of spA4[5]? */
    /* 0x0B8 */ ? spB8;                             /* inferred */
    /* 0x0B8 */ char pad_B8[0x4];
    /* 0x0BC */ f32 spBC;                           /* inferred */
    /* 0x0C0 */ char pad_C0[0x4];
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ f32 spCC;                           /* inferred */
    /* 0x0D0 */ char pad_D0[0x8];                   /* maybe part of spCC[3]? */
    /* 0x0D8 */ f32 spD8;                           /* inferred */
    /* 0x0DC */ char pad_DC[0x4];
    /* 0x0E0 */ Actor *spE0;                        /* inferred */
    /* 0x0E4 */ char pad_E4[0xA];                   /* maybe part of spE0[3]? */
    /* 0x0EE */ s16 spEE;                           /* inferred */
    /* 0x0F0 */ s16 spF0;                           /* inferred */
    /* 0x0F2 */ s16 spF2;                           /* inferred */
    /* 0x0F4 */ s16 spF4;                           /* inferred */
    /* 0x0F6 */ s16 spF6;                           /* inferred */
    /* 0x0F8 */ char pad_F8[0x2];
    /* 0x0FA */ s16 spFA;                           /* inferred */
    /* 0x0FC */ s16 spFC;                           /* inferred */
    /* 0x0FE */ s16 spFE;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ f32 sp108;                          /* inferred */
    /* 0x10C */ f32 sp10C;                          /* inferred */
    /* 0x110 */ f32 sp110;                          /* inferred */
    /* 0x114 */ f32 sp114;                          /* inferred */
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ f32 sp11C;                          /* inferred */
    /* 0x120 */ f32 sp120;                          /* inferred */
    /* 0x124 */ f32 sp124;                          /* inferred */
    /* 0x128 */ f32 sp128;                          /* inferred */
    /* 0x12C */ f32 sp12C;                          /* inferred */
    /* 0x130 */ f32 sp130;                          /* inferred */
    /* 0x134 */ s16 sp134;                          /* inferred */
    /* 0x136 */ s16 sp136;                          /* inferred */
};                                                  /* size = 0x138 */

struct _mips2c_stack_func_808FC6C0 {};              /* size 0x0 */

struct _mips2c_stack_func_808FC770 {};              /* size 0x0 */

struct _mips2c_stack_func_808FC790 {};              /* size 0x0 */

struct _mips2c_stack_func_808FC8B8 {};              /* size 0x0 */

struct _mips2c_stack_func_808FC964 {};              /* size 0x0 */

struct _mips2c_stack_func_808FCABC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FCC0C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FCDBC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FCF60 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808FD054 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ ? sp80;                              /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_808FDCDC {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x10];                   /* maybe part of sp64[5]? */
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x8];                    /* maybe part of sp88[3]? */
    /* 0x94 */ f32 sp94;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_808FE3F8 {
    /* 0x000 */ char pad_0[0x6C];
    /* 0x06C */ ? *sp6C;                            /* inferred */
    /* 0x070 */ char pad_70[0x14];                  /* maybe part of sp6C[6]? */
    /* 0x084 */ Gfx *sp84;                          /* inferred */
    /* 0x088 */ char pad_88[0xC];                   /* maybe part of sp84[4]? */
    /* 0x094 */ Gfx *sp94;                          /* inferred */
    /* 0x098 */ char pad_98[0x10];                  /* maybe part of sp94[5]? */
    /* 0x0A8 */ Gfx *spA8;                          /* inferred */
    /* 0x0AC */ char pad_AC[0xC];                   /* maybe part of spA8[4]? */
    /* 0x0B8 */ Gfx *spB8;                          /* inferred */
    /* 0x0BC */ char pad_BC[0x10];                  /* maybe part of spB8[5]? */
    /* 0x0CC */ Gfx *spCC;                          /* inferred */
    /* 0x0D0 */ Gfx *spD0;                          /* inferred */
    /* 0x0D4 */ char pad_D4[0x10];                  /* maybe part of spD0[5]? */
    /* 0x0E4 */ Gfx *spE4;                          /* inferred */
    /* 0x0E8 */ char pad_E8[0x10];                  /* maybe part of spE4[5]? */
    /* 0x0F8 */ Gfx *spF8;                          /* inferred */
    /* 0x0FC */ char pad_FC[0x18];                  /* maybe part of spF8[7]? */
    /* 0x114 */ void *sp114;                        /* inferred */
    /* 0x118 */ char pad_118[0x8];                  /* maybe part of sp114[3]? */
    /* 0x120 */ f32 sp120;                          /* inferred */
    /* 0x124 */ char pad_124[0x4];
};                                                  /* size = 0x128 */

struct _mips2c_stack_func_808FEE1C {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808FEF70 {};              /* size 0x0 */

struct _mips2c_stack_func_808FF064 {
    /* 0x000 */ char pad_0[0x90];
    /* 0x090 */ f32 sp90;                           /* inferred */
    /* 0x094 */ f32 sp94;                           /* inferred */
    /* 0x098 */ f32 sp98;                           /* inferred */
    /* 0x09C */ f32 sp9C;                           /* inferred */
    /* 0x0A0 */ f32 spA0;                           /* inferred */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ f32 spA8;                           /* inferred */
    /* 0x0AC */ f32 spAC;                           /* inferred */
    /* 0x0B0 */ f32 spB0;                           /* inferred */
    /* 0x0B4 */ char pad_B4[0x4];
    /* 0x0B8 */ f32 spB8;                           /* inferred */
    /* 0x0BC */ f32 spBC;                           /* inferred */
    /* 0x0C0 */ f32 spC0;                           /* inferred */
    /* 0x0C4 */ ? spC4;                             /* inferred */
    /* 0x0C4 */ char pad_C4[0x8];
    /* 0x0CC */ f32 spCC;                           /* inferred */
    /* 0x0D0 */ char pad_D0[0xC];                   /* maybe part of spCC[4]? */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ char pad_E0[0x20];
};                                                  /* size = 0x100 */

struct _mips2c_stack_func_808FF5E0 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0x8];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x1C];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_808FF750 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x40];
    /* 0x6C */ Vec3f *sp6C;                         /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ Gfx *sp74;                           /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ Gfx *sp7C;                           /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ GraphicsContext *sp84;               /* inferred */
    /* 0x88 */ void *sp88;                          /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad_98[0x14];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_808FFC44 {
    /* 0x00 */ char pad_0[0x90];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ ? spB4;                              /* inferred */
    /* 0xB4 */ char pad_B4[0x8];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x1C];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_808FFF3C {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80900A04 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? *sp2C;                             /* inferred */
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x5C];                   /* maybe part of sp34[24]? */
    /* 0x94 */ Gfx *sp94;                           /* inferred */
    /* 0x98 */ char pad_98[0x18];                   /* maybe part of sp94[7]? */
    /* 0xB0 */ void *spB0;                          /* inferred */
    /* 0xB4 */ char pad_B4[0x4];
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80901480 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ void *sp40;                          /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x10];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ?32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ ?32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ ? sp80;                              /* inferred */
    /* 0x80 */ char pad_80[0x10];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ ? spB4;                              /* inferred */
    /* 0xB4 */ char pad_B4[0xC];
    /* 0xC0 */ void *spC0;                          /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ char pad_CC[0x4];
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ s16 spDC;                            /* inferred */
    /* 0xDE */ char pad_DE[0x2];
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_809033F0 {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0x8];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_809036BC {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x8];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_809038A4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x8];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80903C60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80903E20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80908554 {};              /* size 0x0 */

struct _mips2c_stack_func_80908674 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809086B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80908734 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809089B8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80908A64 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80908B4C {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80908E08 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80909234 {
    /* 0x00 */ char pad_0[0x78];
    /* 0x78 */ void *sp78;                          /* inferred */
    /* 0x7C */ char pad_7C[0x1C];                   /* maybe part of sp78[8]? */
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad_98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ char pad_C8[0x4];
    /* 0xCC */ s16 spCC;                            /* inferred */
    /* 0xCE */ s16 spCE;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0x4];
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ char pad_DC[0x4];
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
    /* 0xE8 */ f32 spE8;                            /* inferred */
    /* 0xEC */ char pad_EC[0xA];                    /* maybe part of spE8[3]? */
    /* 0xF6 */ s16 spF6;                            /* inferred */
};                                                  /* size = 0xF8 */

struct _mips2c_stack_func_80909AD0 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80909CC0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ MessageContext *sp20;                /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8090AB6C {
    /* 0x000 */ char pad_0[0x28];
    /* 0x028 */ void *sp28;                         /* inferred */
    /* 0x02C */ void *sp2C;                         /* inferred */
    /* 0x030 */ char pad_30[0x4];
    /* 0x034 */ CutsceneContext *sp34;              /* inferred */
    /* 0x038 */ char pad_38[0x10];                  /* maybe part of sp34[5]? */
    /* 0x048 */ ? sp48;                             /* inferred */
    /* 0x048 */ char pad_48[0x8];
    /* 0x050 */ f32 sp50;                           /* inferred */
    /* 0x054 */ f32 sp54;                           /* inferred */
    /* 0x058 */ f32 sp58;                           /* inferred */
    /* 0x05C */ f32 sp5C;                           /* inferred */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ f32 sp64;                           /* inferred */
    /* 0x068 */ f32 sp68;                           /* inferred */
    /* 0x06C */ char pad_6C[0x6];                   /* maybe part of sp68[2]? */
    /* 0x072 */ s16 sp72;                           /* inferred */
    /* 0x074 */ char pad_74[0x8];                   /* maybe part of sp72[5]? */
    /* 0x07C */ f32 sp7C;                           /* inferred */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ f32 sp84;                           /* inferred */
    /* 0x088 */ f32 sp88;                           /* inferred */
    /* 0x08C */ f32 sp8C;                           /* inferred */
    /* 0x090 */ f32 sp90;                           /* inferred */
    /* 0x094 */ f32 sp94;                           /* inferred */
    /* 0x098 */ f32 sp98;                           /* inferred */
    /* 0x09C */ char pad_9C[0x2];
    /* 0x09E */ s16 sp9E;                           /* inferred */
    /* 0x0A0 */ f32 spA0;                           /* inferred */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ f32 spA8;                           /* inferred */
    /* 0x0AC */ Camera *spAC;                       /* inferred */
    /* 0x0B0 */ char pad_B0[0x24];                  /* maybe part of spAC[10]? */
    /* 0x0D4 */ Actor *spD4;                        /* inferred */
    /* 0x0D8 */ char pad_D8[0x4];
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ char pad_E4[0x4];
    /* 0x0E8 */ s16 spE8;                           /* inferred */
    /* 0x0EA */ char pad_EA[0x2];
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ char pad_F0[0x4];
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ f32 sp108;                          /* inferred */
    /* 0x10C */ f32 sp10C;                          /* inferred */
    /* 0x110 */ char pad_110[0x8];
};                                                  /* size = 0x118 */

struct _mips2c_stack_func_8090C884 {};              /* size 0x0 */

struct _mips2c_stack_func_8090C8BC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8090C96C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

? func_800F6834(GlobalContext *, ?);                /* extern */
? func_8013EC44(?, s32, s32, ?, ?);                 /* extern */
s32 func_8013EE04();                                /* extern */
void func_808FC6C0(s16 arg0, void *arg1, ? *arg2, f32 arg3); /* static */
void func_808FC770(s32 arg0, s32 arg1, s32 arg2);   /* static */
f32 func_808FC790();                                /* static */
s32 func_808FC8B8(s16 *arg0, s16 arg1, s16 arg2, s16 arg3); /* static */
void func_808FC964(Vec3f *arg0, void *arg2, f32 arg3, f32 arg4, s16 arg5, s16 arg6, ?32, s32, s32); /* static */
void func_808FCABC(void *arg0, void *arg1, f32 *arg2, f32 *arg3, f32 arg4); /* static */
void func_808FCC0C(void *arg0, void *arg1, f32 *arg2, f32 arg3); /* static */
void func_808FCDBC(void *arg0, void *arg1, f32 *arg2, f32 arg3, u8 arg4); /* static */
void func_808FCF60(void *arg0, f32 *arg1, f32 *arg2); /* static */
void func_808FD054(EnFishing *arg0, GlobalContext *arg1); /* static */
void func_808FDCDC(void *arg0, GlobalContext *arg1); /* static */
void func_808FE3F8(void *arg0, GraphicsContext **arg1); /* static */
void func_808FEE1C(GraphicsContext **arg0);         /* static */
s32 func_808FEF70(void *arg0, f32, Vec3f *, Actor *); /* static */
void func_808FF064(GlobalContext *arg0, Vec3f *arg1, ? *arg2, ? *arg3, ? *); /* static */
void func_808FF5E0(? *arg0);                        /* static */
void func_808FF750(void *arg0, void *arg1, void *arg2, u8 arg3); /* static */
void func_808FFC44(GlobalContext *arg0);            /* static */
void func_808FFF3C(GlobalContext *arg0);            /* static */
? func_80900228(GlobalContext *, ? *, ? *);         /* static */
void func_80900A04(GlobalContext *arg0);            /* static */
void func_80901480(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809033F0(EnFishing *arg0, EnFishing *arg1, s32 arg2, ?); /* static */
void func_809036BC(EnFishing *arg0, GlobalContext *arg1); /* static */
void func_809038A4(EnFishing *arg0, u16 *arg1);     /* static */
void func_80903C60(Actor *arg0, s32 arg1);          /* static */
void func_80903E20(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
s32 func_80908554(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80908674(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 func_809086B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80908734(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809089B8(Vec3f *arg0, void *arg1);        /* static */
void func_80908A64(Vec3f *arg0, void *arg1, u8 arg2); /* static */
void func_80908B4C(GlobalContext *arg0);            /* static */
void func_80908E08(GraphicsContext **arg0);         /* static */
void func_80909234(GlobalContext *arg0);            /* static */
void func_80909AD0(GraphicsContext **arg0);         /* static */
void func_80909CC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8090AB6C(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_8090C884(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5); /* static */
void func_8090C8BC(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3); /* static */
void func_8090C96C(Actor *this, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_0600007C;
extern FlexSkeletonHeader D_060029C0;
extern ? D_06003230;
extern ? D_06003460;
extern ? D_060034C0;
extern ? D_06003610;
extern ? D_06003680;
extern ? D_06003760;
extern ? D_060039A8;
extern ? D_06003A18;
extern AnimationHeader D_0600453C;
extern ? D_06007350;
extern ? D_060074C8;
extern FlexSkeletonHeader D_060085F8;
extern ? D_06008610;
extern ? D_06008678;
extern ? D_060088C0;
extern ? D_06008970;
extern ? D_0600B950;
extern ? D_0600B9C0;
extern ? D_0600C220;
extern ? D_0600C298;
extern AnimationHeader D_0600CFE0;
extern FlexSkeletonHeader D_06011058;
extern ? D_06011070;
extern ? D_06011170;
extern ? D_06011270;
extern ? D_060113D0;
extern ? D_06011410;
extern f32 D_06012160;
extern ? D_06013330;
extern ? D_060133B0;
extern ? D_06013590;
extern ? D_06013610;
extern ? D_06013F50;
extern ? D_06013FD0;
extern ? D_06014030;
extern ? D_060140B0;
extern ? D_060153D0;
extern ? D_06015470;
static f32 D_8090CCD0 = 0.0f;
static u8 D_8090CCD4 = 0;
static f32 D_8090CCD8 = 0.0f;
static Vec3f D_8090CCDC;                            /* type too large by 4; unable to generate initializer */
static f32 D_8090CCE4 = 0.0f;
static f32 D_8090CCE8 = 0.0f;
static u8 D_8090CCEC = 0;
static f32 D_8090CCF0 = 0.0f;
static u8 D_8090CCF4 = 1;
static u16 D_8090CCF8 = 0;
static u8 D_8090CCFC = 0;
static s32 D_8090CD00 = 0;
static s16 D_8090CD04 = 0;
static u8 D_8090CD08 = 0;
static u8 D_8090CD0C = 0;
static u8 D_8090CD10 = 0;
static s16 D_8090CD14 = 0;
static Vec3f D_8090CD18;                            /* type too large by 8; unable to generate initializer */
static f32 D_8090CD1C = 500.0f;
static u8 D_8090CD24 = 0;
static f32 D_8090CD28 = 0.0f;
static f32 D_8090CD2C = 0.0f;
static f32 D_8090CD30 = 0.0f;
static f32 D_8090CD34 = 0.0f;
static f32 D_8090CD38 = 0.0f;
static f32 D_8090CD3C = 0.0f;
static f32 D_8090CD40 = 0.0f;
static s16 D_8090CD44 = 0;
static s16 D_8090CD48 = 0;
static u8 D_8090CD4C = 0;
static u8 D_8090CD50 = 0;
static u8 D_8090CD54 = 0;
static ColliderJntSphElementInit D_8090CD58 = {
    {0, {0xF7CFFFFF, 0, 0x10}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0, {{0, 0, 0}, 0x1E}, 0x64},
};
static ? D_8090CD80;                                /* unable to generate initializer */
static ? D_8090CD88;                                /* unable to generate initializer */
static ? D_8090CD8C;                                /* unable to generate initializer */
static ColliderJntSphInit D_8090CF08 = {{0xA, 0x10, 8, 9, 0x10, 0}, 0xC, &D_8090CD58};
static u8 D_8090CF18 = 0;
static Vec3f D_8090CF1C[2] = {{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 2000.0f}};
static ? D_8090CF34;                                /* unable to generate initializer */
static ? D_8090CF40;                                /* unable to generate initializer */
static ? D_8090CF4C;                                /* unable to generate initializer */
static ? D_8090CF58;                                /* unable to generate initializer */
static ? D_8090D3C0;                                /* unable to generate initializer */
static InitChainEntry D_8090D4D0[2];                /* unable to generate initializer */
static ? D_8090D4D8;                                /* unable to generate initializer */
static ? D_8090D4E4;                                /* unable to generate initializer */
static ? D_8090D4F0;                                /* unable to generate initializer */
static ? D_8090D4FC;                                /* unable to generate initializer */
static ? D_8090D508;                                /* unable to generate initializer */
static ? D_8090D558;                                /* unable to generate initializer */
static ? D_8090D5B0;                                /* unable to generate initializer */
static Vec3f D_8090D608 = {0.0f, 0.0f, 0.0f};
static Vec3f D_8090D614 = {0.0f, 0.0f, 0.0f};
static ? D_8090D620;                                /* unable to generate initializer */
static Vec3f D_8090D62C = {500.0f, 500.0f, 0.0f};
static ? D_8090D638;                                /* unable to generate initializer */
static ? D_8090D644;                                /* unable to generate initializer */
static Vec3f D_8090D650 = {670.0f, 0.0f, -600.0f};
static ? D_8090D65C;                                /* unable to generate initializer */
static ? D_8090D674;                                /* unable to generate initializer */
static f32 D_809101B0;
static f32 D_809101B4;
static s16 D_809101B8;
static f32 D_809101BC;
static f32 D_809101C0;
static f32 D_809101C4;
static f32 D_809101C8;
static s16 D_809101CC;
static f32 D_809101D0;
static Vec3f D_809101D8;
static ? D_809101E8;
static f32 D_80910B3C;
static f32 D_80910B40;
static f32 D_80910B44;
static ? D_80910B48;
static ? D_809114A8;
static ? D_80911E20;
static u8 D_80911E28;
static ? D_80911E30;
static ? D_80911E3C;
static s16 D_80911F20;
static f32 D_80911F24;
static Vec3f D_80911F28;                            /* type too large by 8 */
static f32 D_80911F2C;
static f32 D_80911F30;
static f32 D_80911F38;
static f32 D_80911F3C;
static f32 D_80911F40;
static s16 D_80911F44;
static f32 D_80911F48;
static f32 D_80911F4C;
static f32 D_80911F50;
static ? D_80911F58;
static f32 D_80911F64;
static s32 D_80911F68;
static s32 D_80911F6C;
static s32 D_80911F70;
static ? D_80911F78;
static ? D_80914048;
static f32 D_80915128;
static f32 D_8091512C;
static f32 D_80915130;
static void D_80915138;
static Vec3f D_809171B8;
static EnFishing *D_809171C4;
static u8 D_809171C8;
static u8 D_809171C9;
static u8 D_809171CA;
static u8 D_809171CB;
static f32 D_809171CC;
static u8 D_809171D0;
static u8 D_809171D1;
static u8 D_809171D2;
static s16 D_809171D4;
static u8 D_809171D6;
static u16 D_809171D8;
static u16 D_809171DA;
static s8 D_809171DC;
static Vec3f D_809171E0;
static s16 D_809171EC;
static s16 D_809171EE;
static s16 D_809171F0;
static u8 D_809171F2;
static s16 D_809171F4;
static s16 D_809171F6;
static EnFishing *D_809171F8;
static s16 D_809171FC;
static s16 D_809171FE;
static s16 D_80917200;
static s16 D_80917202;
static s16 D_80917204;
static u8 D_80917206;
static Vec3f D_80917208;                            /* type too large by 8 */
static f32 D_8091720C;
static f32 D_80917210;
static f32 D_80917228;
static f32 D_8091722C;
static Vec3f D_80917238;                            /* type too large by 8 */
static f32 D_8091723C;
static ? D_80917248;
static f32 D_80917254;
static f32 D_80917258;
static f32 D_8091725C;
static f32 D_80917260;
static s8 D_80917264;
static s16 D_80917266;
static u8 D_80917268;
static f32 D_8091726C;
static u8 D_80917270;
static s16 D_80917272;
static u8 D_80917274;
static Vec3f D_80917278;                            /* type too large by 8 */
static f32 D_8091727C[5];

void func_808FC6C0(s16 arg0, void *arg1, ? *arg2, f32 arg3) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 << 6;
    (arg1->unk_1C + temp_v0)->unk_30 = (s16) (s32) arg2->unk_0;
    (arg1->unk_1C + temp_v0)->unk_32 = (s16) (s32) arg2->unk_4;
    (arg1->unk_1C + temp_v0)->unk_34 = (s16) (s32) arg2->unk_8;
    temp_v1 = arg1->unk_1C + temp_v0;
    temp_v1->unk_36 = (s16) (s32) (temp_v1->unk_38 * (f32) temp_v1->unk_2E * arg3 * 1.6f);
}

void func_808FC770(s32 arg0, s32 arg1, s32 arg2) {
    D_80911F68 = arg0;
    D_80911F6C = arg1;
    D_80911F70 = arg2;
}

f32 func_808FC790(void) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s32 temp_f16;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_t7;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_hi = (s32) (D_80911F68 * 0xAB) % 0x763D;
    temp_hi_2 = (s32) (D_80911F6C * 0xAC) % 0x7663;
    temp_f16 = temp_hi_2;
    temp_t7 = (s32) (D_80911F70 * 0xAA) % 0x7673;
    temp_f6 = (f32) temp_hi;
    D_80911F68 = temp_hi;
    D_80911F6C = temp_hi_2;
    D_80911F70 = temp_t7;
    temp_f2 = (temp_f6 / 30269.0f) + ((f32) temp_f16 / 30307.0f) + ((f32) temp_t7 / 30323.0f);
    phi_f2 = temp_f2;
    phi_f2_2 = temp_f2;
    if (temp_f2 >= 1.0f) {
        do {
            temp_f2_2 = phi_f2 - 1.0f;
            phi_f2 = temp_f2_2;
            phi_f2_2 = temp_f2_2;
        } while (temp_f2_2 >= 1.0f);
    }
    return fabsf(phi_f2_2);
}

s32 func_808FC8B8(s16 *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 temp_v1;
    s32 temp_lo;
    s32 phi_t0;
    s32 phi_t0_2;

    temp_v1 = *arg0;
    temp_lo = (s32) (s16) (arg1 - temp_v1) / (s32) arg2;
    phi_t0 = (s32) (s16) temp_lo;
    if ((s32) arg3 < (s32) (s16) temp_lo) {
        phi_t0 = (s32) arg3;
    }
    phi_t0_2 = phi_t0;
    if (phi_t0 < -(s32) arg3) {
        phi_t0_2 = (s32) (s16) ((s32) arg3 * -1);
    }
    *arg0 = temp_v1 + phi_t0_2;
    return phi_t0_2;
}

void func_808FC964(Vec3f *arg0, void *arg1, void *arg2, f32 arg3, f32 arg4, s16 arg5, s16 arg6) {
    f32 temp_f0;
    s16 temp_v0;
    void *phi_a1;
    s16 phi_v0;

    phi_a1 = arg1;
    if (((arg0 == 0) || ((temp_f0 = arg0->z, !(temp_f0 > 500.0f)) && !(temp_f0 < 0.0f))) && (phi_v0 = 0, ((s32) arg6 > 0))) {
loop_4:
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        if (phi_a1->unk_24 == 0) {
            phi_a1->unk_24 = 1U;
            phi_a1->unk_0 = (s32) arg2->unk_0;
            phi_a1->unk_4 = (s32) arg2->unk_4;
            phi_a1->unk_8 = (s32) arg2->unk_8;
            phi_a1->unk_C = (s32) D_8090CF1C->x;
            phi_a1->unk_10 = (s32) D_8090CF1C->y;
            phi_a1->unk_14 = (s32) D_8090CF1C->z;
            phi_a1->unk_18 = (f32) D_8090CF1C->x;
            phi_a1->unk_1C = (f32) D_8090CF1C->y;
            phi_a1->unk_30 = (f32) (arg3 * 0.0025f);
            phi_a1->unk_20 = (f32) D_8090CF1C->z;
            phi_a1->unk_34 = (f32) (arg4 * 0.0025f);
            if (arg3 > 300.0f) {
                phi_a1->unk_2A = 0;
                phi_a1->unk_2C = 0;
                phi_a1->unk_2E = arg5;
                phi_a1->unk_38 = (f32) ((phi_a1->unk_34 - phi_a1->unk_30) * 0.05f);
                return;
            }
            phi_a1->unk_2C = 1;
            phi_a1->unk_2A = arg5;
            phi_a1->unk_38 = (f32) ((phi_a1->unk_34 - phi_a1->unk_30) * 0.1f);
            return;
        }
        phi_a1 += 0x40;
        if ((s32) temp_v0 >= (s32) arg6) {
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
        goto loop_4;
    }
}

void func_808FCABC(void *arg0, void *arg1, f32 *arg2, f32 *arg3, f32 arg4) {
    ? sp20;
    f32 temp_f0;
    s16 temp_v1;
    u8 temp_v0;
    void *phi_a1;
    s16 phi_v1;

    sp20.unk_0 = (s32) D_8090CF34.unk_0;
    sp20.unk_4 = (s32) D_8090CF34.unk_4;
    sp20.unk_8 = (s32) D_8090CF34.unk_8;
    phi_a1 = arg1;
    phi_v1 = 0;
    if ((arg0 == 0) || ((temp_f0 = arg0->unk_8, !(temp_f0 > 500.0f)) && !(temp_f0 < 0.0f))) {
loop_4:
        temp_v0 = phi_a1->unk_24;
        temp_v1 = phi_v1 + 1;
        phi_v1 = temp_v1;
        if ((temp_v0 == 0) || (temp_v0 == 5) || (temp_v0 == 7) || (temp_v0 == 8)) {
            phi_a1->unk_24 = 2U;
            phi_a1->unk_0 = (s32) arg2->unk_0;
            phi_a1->unk_4 = (s32) arg2[1];
            phi_a1->unk_8 = (s32) arg2[2];
            phi_a1->unk_C = (s32) arg3->unk_0;
            phi_a1->unk_10 = (s32) arg3[1];
            phi_a1->unk_14 = (s32) arg3[2];
            phi_a1->unk_18 = (s32) sp20.unk_0;
            phi_a1->unk_1C = (s32) sp20.unk_4;
            phi_a1->unk_20 = (s32) sp20.unk_8;
            arg1 = phi_a1;
            arg1->unk_2A = (s16) (s32) (Rand_ZeroFloat(100.0f) + 100.0f);
            arg1->unk_30 = arg4;
            return;
        }
        phi_a1 += 0x40;
        if ((s32) temp_v1 >= 0x64) {
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        goto loop_4;
    }
}

void func_808FCC0C(void *arg0, void *arg1, f32 *arg2, f32 arg3) {
    ? sp20;
    f32 temp_f0;
    s16 temp_v0;
    void *phi_a1;
    s16 phi_v0;

    sp20.unk_0 = (s32) D_8090CF40.unk_0;
    sp20.unk_4 = (s32) D_8090CF40.unk_4;
    sp20.unk_8 = (s32) D_8090CF40.unk_8;
    phi_a1 = arg1;
    phi_v0 = 0;
    if ((arg0 == 0) || ((temp_f0 = arg0->unk_8, !(temp_f0 > 500.0f)) && !(temp_f0 < 0.0f))) {
loop_3:
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        if (phi_a1->unk_24 == 0) {
            phi_a1->unk_24 = 3U;
            phi_a1->unk_0 = (s32) arg2->unk_0;
            phi_a1->unk_4 = (s32) arg2[1];
            phi_a1->unk_8 = (s32) arg2[2];
            phi_a1->unk_C = (s32) D_8090CF1C->x;
            phi_a1->unk_10 = (s32) D_8090CF1C->y;
            phi_a1->unk_14 = (s32) D_8090CF1C->z;
            phi_a1->unk_18 = (s32) sp20.unk_0;
            phi_a1->unk_1C = (s32) sp20.unk_4;
            phi_a1->unk_2A = 0xFF;
            phi_a1->unk_20 = (s32) sp20.unk_8;
            arg3 = arg3;
            arg1 = phi_a1;
            arg1->unk_25 = (s8) (u32) Rand_ZeroFloat(100.0f);
            arg1->unk_30 = arg3;
            arg1->unk_34 = (f32) (2.0f * arg3);
            return;
        }
        phi_a1 += 0x40;
        if ((s32) temp_v0 >= 0x5A) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return;
        }
        goto loop_3;
    }
}

void func_808FCDBC(void *arg0, void *arg1, f32 *arg2, f32 arg3, u8 arg4) {
    ? sp20;
    f32 temp_f0;
    s16 temp_v0;
    void *phi_a1;
    s16 phi_v0;

    sp20.unk_0 = (s32) D_8090CF4C.unk_0;
    sp20.unk_4 = (s32) D_8090CF4C.unk_4;
    sp20.unk_8 = (s32) D_8090CF4C.unk_8;
    phi_a1 = arg1;
    phi_v0 = 0;
    if ((arg0 == 0) || ((temp_f0 = arg0->unk_8, !(temp_f0 > 500.0f)) && !(temp_f0 < 0.0f))) {
loop_3:
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        if (phi_a1->unk_24 == 0) {
            phi_a1->unk_24 = 4U;
            phi_a1->unk_0 = (s32) arg2->unk_0;
            phi_a1->unk_4 = (s32) arg2[1];
            phi_a1->unk_8 = (s32) arg2[2];
            phi_a1->unk_C = (s32) sp20.unk_0;
            phi_a1->unk_10 = (s32) sp20.unk_4;
            phi_a1->unk_14 = (s32) sp20.unk_8;
            phi_a1->unk_18 = (s32) D_8090CF1C->x;
            phi_a1->unk_1C = (s32) D_8090CF1C->y;
            phi_a1->unk_20 = (s32) D_8090CF1C->z;
            arg1 = phi_a1;
            arg1->unk_25 = (s8) (u32) Rand_ZeroFloat(100.0f);
            arg1->unk_30 = arg3;
            arg1->unk_2C = (s16) arg4;
            return;
        }
        phi_a1 += 0x40;
        if ((s32) temp_v0 >= 0x5A) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return;
        }
        goto loop_3;
    }
}

void func_808FCF60(void *arg0, f32 *arg1, f32 *arg2) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    s16 temp_v0;
    void *phi_a3;
    s16 phi_v0;

    sp18 = 0.0f;
    sp1C = 0.0f;
    sp20 = 300.0f;
    phi_a3 = arg0 + 0x780;
    phi_v0 = 0x1E;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_a3->unk_24 == 0) {
        phi_a3->unk_24 = 5U;
        phi_a3->unk_0 = (s32) arg1->unk_0;
        phi_a3->unk_4 = (s32) arg1[1];
        phi_a3->unk_8 = (s32) arg1[2];
        phi_a3->unk_18 = (s32) D_8090CF1C->x;
        phi_a3->unk_1C = (s32) D_8090CF1C->y;
        phi_a3->unk_20 = (s32) D_8090CF1C->z;
        phi_a3->unk_34 = (f32) arg2->unk_0;
        phi_a3->unk_38 = (f32) arg2[1];
        phi_a3->unk_3C = (f32) arg2[2];
        arg0 = phi_a3;
        SysMatrix_InsertYRotation_f(arg2[1], 0);
        SysMatrix_RotateStateAroundXAxis(arg2->unk_0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp18, arg0 + 0xC);
        return;
    }
    phi_a3 += 0x40;
    if ((s32) temp_v0 >= 0x82) {
        return;
    }
    goto loop_1;
}

void func_808FD054(EnFishing *arg0, GlobalContext *arg1) {
    f32 sp84;
    ? sp80;
    s16 temp_s1;
    s32 temp_t1;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_v0;
    s16 phi_s1;
    ? *phi_s0;

    func_808FC770(1, 0x71AC, 0x263A);
    phi_s1 = 0;
    phi_s0 = &D_80911F78;
loop_1:
    temp_v0 = &D_8090CF58 + (phi_s1 * 8);
    temp_v1 = temp_v0->unk_0;
    if (temp_v1 != 0x23) {
        phi_s0->unk_30 = temp_v1;
        phi_s0->unk_0 = (f32) temp_v0->unk_2;
        phi_s0->unk_4 = (f32) temp_v0->unk_4;
        phi_s0->unk_C = 0.0f;
        phi_s0->unk_14 = 0.0f;
        phi_s0->unk_8 = (f32) temp_v0->unk_6;
        temp_v0_2 = phi_s0->unk_30;
        temp_t1 = (s32) Rand_ZeroFloat(100.0f);
        phi_s0->unk_38 = 800.0f;
        phi_s0->unk_32 = (s16) temp_t1;
        if (temp_v0_2 == 1) {
            phi_s0->unk_24 = (f32) ((func_808FC790() * 0.25f) + 0.75f);
            phi_s0->unk_14 = Rand_ZeroFloat(6.2831855f);
            if (D_809171C9 == 1) {
                phi_s0->unk_24 = (f32) (phi_s0->unk_24 * 0.6f);
            }
            phi_s0->unk_38 = 1200.0f;
        } else if (temp_v0_2 == 4) {
            phi_s0->unk_38 = 1200.0f;
            phi_s0->unk_24 = 0.08f;
            sp80.unk_0 = (f32) phi_s0->unk_0;
            sp80.unk_4 = (f32) phi_s0->unk_4;
            sp80.unk_8 = (f32) phi_s0->unk_8;
            sp84 += 50.0f;
            func_808FC6C0(phi_s1, D_809171C4 + 0x228, &sp80, phi_s0->unk_24 * 3.5f);
        } else if (temp_v0_2 == 2) {
            phi_s0->unk_24 = (f32) ((func_808FC790() * 0.3f) + 0.5f);
            phi_s0->unk_10 = Rand_ZeroFloat(6.2831855f);
            if (D_809171C9 == 1) {
                if ((phi_s1 & 3) != 0) {
                    phi_s0->unk_24 = (f32) (phi_s0->unk_24 * 0.6f);
                } else {
                    phi_s0->unk_30 = 0U;
                }
            }
        } else {
            phi_s0->unk_24 = (f32) ((func_808FC790() * 0.1f) + 0.3f);
            phi_s0->unk_10 = Rand_ZeroFloat(6.2831855f);
            phi_s0->unk_38 = 1000.0f;
            func_808FC6C0(phi_s1, D_809171C4 + 0x228, phi_s0, phi_s0->unk_24);
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s0 += 0x3C;
        if ((s32) temp_s1 < 0x8C) {
            goto loop_1;
        }
    }
}

void EnFishing_Init(Actor *thisx, GlobalContext *globalCtx) {
    ActorContext *sp5C;
    ActorContext *temp_a0;
    EnFishing *temp_v1;
    SkelAnime *temp_s0;
    SkelAnime *temp_s0_3;
    SkelAnime *temp_s0_4;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f4_2;
    f32 temp_f6;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s1_3;
    s16 temp_s1_4;
    s16 temp_v0;
    s32 temp_f4;
    s32 temp_v1_2;
    u32 temp_t4;
    u32 temp_t7;
    u32 temp_v1_3;
    u8 temp_t9;
    void *temp_s0_2;
    void *temp_v0_2;
    f32 phi_f6;
    f32 phi_f18;
    s16 phi_s1;
    s16 phi_s1_2;
    s32 phi_s1_3;
    f32 phi_f20;
    s32 phi_v0;
    s16 phi_s1_4;
    SkelAnime *phi_s0;
    f32 phi_f4;
    EnFishing *this = (EnFishing *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_8090D4D0);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    D_809171C9 = gSaveContext.linkAge;
    temp_v0 = this->actor.params;
    if ((s32) temp_v0 < 0x64) {
        D_809171C8 = 0;
        D_809171C4 = this;
        Collider_InitJntSph(globalCtx, &D_809171C4->unk_228);
        temp_v1 = D_809171C4;
        Collider_SetJntSph(globalCtx, &temp_v1->unk_228, (Actor *) this, &D_8090CF08, &temp_v1->unk_248);
        this->actor.params = 1;
        temp_s0 = &this->unk_1D0;
        SkelAnime_InitSV(globalCtx, temp_s0, &D_060085F8, &D_0600453C, NULL, NULL, 0);
        SkelAnime_ChangeAnimTransitionRepeat(temp_s0, &D_0600453C, 0.0f);
        this->actor.update = func_8090AB6C;
        this->actor.draw = func_8090C96C;
        this->actor.shape.rot.y = -0x6000;
        this->actor.world.pos.x = 160.0f;
        this->actor.world.pos.y = -2.0f;
        this->actor.world.pos.z = 1208.0f;
        Actor_SetScale((Actor *) this, 0.011f);
        this->actor.focus.pos.y = this->actor.world.pos.y;
        this->actor.focus.pos.x = this->actor.world.pos.x;
        this->actor.flags |= 9;
        this->actor.focus.pos.y += 75.0f;
        this->actor.focus.pos.z = this->actor.world.pos.z;
        if (D_809171C9 != 1) {
            if ((gSaveContext.roomInf[127][2] & 0x1000) != 0) {
                D_8090CD08 = 0;
            } else {
                D_8090CD08 = 1;
            }
        } else {
            D_8090CD08 = 2;
        }
        D_8090CD04 = 0x14;
        globalCtx->specialEffects = &D_80915138;
        gGameInfo->data[15] = 1;
        D_809171FC = 0;
        D_809171F6 = 0xA;
        func_801A89A8(0x100100FF);
        if (D_809171C9 == 1) {
            temp_v1_2 = gSaveContext.roomInf[127][2] & 0x7F;
            if (temp_v1_2 != 0) {
                temp_f6 = (f32) temp_v1_2;
                phi_f6 = temp_f6;
                if (temp_v1_2 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                D_809171CC = phi_f6;
            } else {
                D_809171CC = 40.0f;
            }
        } else {
            temp_v1_3 = gSaveContext.roomInf[127][2] & 0x7F000000;
            if (temp_v1_3 != 0) {
                temp_t4 = temp_v1_3 >> 0x18;
                temp_f18 = (f32) temp_t4;
                phi_f18 = temp_f18;
                if ((s32) temp_t4 < 0) {
                    phi_f18 = temp_f18 + 4294967296.0f;
                }
                D_809171CC = phi_f18;
            } else {
                D_809171CC = 45.0f;
            }
        }
        temp_t7 = (u32) (gSaveContext.roomInf[127][2] & 0xFF0000) >> 0x10;
        D_809171D1 = (u8) temp_t7;
        if ((temp_t7 & 7) == 7) {
            globalCtx->roomCtx.unk_7A = 0x5A;
            D_809171CA = 1;
        } else {
            globalCtx->roomCtx.unk_7A = 0x28;
            D_809171CA = 0;
        }
        phi_s1 = 0;
        phi_s1_2 = 0;
        phi_s1_3 = (s32) 0;
        phi_s1_4 = 0;
        if ((D_809171D1 & 7) == 6) {
            D_809171CB = 0x64;
        } else {
            D_809171CB = 0;
        }
        do {
            temp_s1 = phi_s1 + 1;
            (&D_80915138 + (phi_s1 << 6))->unk_24 = 0;
            phi_s1 = temp_s1;
        } while ((s32) temp_s1 < 0x82);
        do {
            temp_s1_2 = phi_s1_2 + 1;
            (&D_80911F78 + (phi_s1_2 * 0x3C))->unk_30 = 0;
            phi_s1_2 = temp_s1_2;
        } while ((s32) temp_s1_2 < 0x8C);
        D_80915128 = 0.7f;
        D_8091512C = 2.3f;
        D_80915130 = 4.6f;
        do {
            temp_s0_2 = (phi_s1_3 * 0x48) + &D_80914048;
            temp_s0_2->unk_0 = 1;
            if (phi_s1_3 < 0x15) {
                temp_f20 = __sinf(D_80915128) * 720.0f;
                temp_s0_2->unk_4 = temp_f20;
                temp_s0_2->unk_10 = temp_f20;
                temp_f20_2 = __cosf(D_80915128) * 720.0f;
                temp_s0_2->unk_C = temp_f20_2;
                phi_f20 = temp_f20_2;
            } else if (phi_s1_3 < 0x29) {
                temp_f20_3 = __sinf(D_8091512C) * 720.0f;
                temp_s0_2->unk_4 = temp_f20_3;
                temp_s0_2->unk_10 = temp_f20_3;
                temp_f20_4 = __cosf(D_8091512C) * 720.0f;
                temp_s0_2->unk_C = temp_f20_4;
                phi_f20 = temp_f20_4;
            } else {
                temp_f20_5 = __sinf(D_80915130) * 720.0f;
                temp_s0_2->unk_4 = temp_f20_5;
                temp_s0_2->unk_10 = temp_f20_5;
                temp_f20_6 = __cosf(D_80915130) * 720.0f;
                temp_s0_2->unk_C = temp_f20_6;
                phi_f20 = temp_f20_6;
            }
            temp_s0_2->unk_18 = phi_f20;
            temp_s0_2->unk_8 = -35.0f;
            temp_s0_2->unk_14 = -35.0f;
            temp_f4 = (s32) Rand_ZeroFloat(100.0f);
            temp_s0_2->unk_3C = 0;
            temp_s0_2->unk_3E = 0;
            temp_s0_2->unk_40 = 0;
            temp_s0_2->unk_2 = (s16) temp_f4;
            if ((D_809171C9 != 1) && (((phi_s1_3 >= 0xF) && (phi_s1_3 < 0x14)) || ((phi_s1_3 >= 0x23) && (phi_s1_3 < 0x28)) || ((phi_s1_3 >= 0x37) && (phi_s1_3 < 0x3C)))) {
                temp_s0_2->unk_0 = 0;
            }
            temp_s1_3 = phi_s1_3 + 1;
            phi_s1_3 = (s32) temp_s1_3;
        } while ((s32) temp_s1_3 < 0x3C);
        func_808FD054(this, globalCtx);
        temp_a0 = &globalCtx->actorCtx;
        sp5C = temp_a0;
        Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0xA8, 53.0f, -17.0f, 982.0f, (s16) 0, (s16) 0, (s16) 0, 0x300);
        Actor_Spawn(temp_a0, globalCtx, 0x79, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0xC8);
        if ((D_809171D1 & 3) == 3) {
            if (D_809171C9 != 1) {
                phi_v0 = 0x10;
            } else {
                phi_v0 = 0x11;
            }
        } else {
            phi_v0 = 0xF;
        }
        if (phi_v0 > 0) {
            do {
                temp_v0_2 = (phi_s1_4 * 0x10) + &D_8090D3C0;
                Actor_Spawn(sp5C, globalCtx, 0x79, (f32) temp_v0_2->unk_2, (f32) temp_v0_2->unk_4, (f32) temp_v0_2->unk_6, (s16) 0, (s16) (s32) Rand_ZeroFloat(65536.0f), (s16) 0, (s16) (phi_s1_4 + 0x64));
                temp_s1_4 = phi_s1_4 + 1;
                phi_s1_4 = temp_s1_4;
            } while ((s32) temp_s1_4 < phi_v0);
            return;
        }
        /* Duplicate return node #63. Try simplifying control flow for better match */
        return;
    }
    this->actor.bgCheckFlags |= 0x800;
    if (((s32) temp_v0 < 0x73) || (temp_v0 == 0xC8)) {
        temp_s0_4 = &this->unk_1D0;
        SkelAnime_InitSV(globalCtx, temp_s0_4, &D_060029C0, &D_0600007C, NULL, NULL, 0);
        SkelAnime_ChangeAnimTransitionRepeat(temp_s0_4, &D_0600007C, 0.0f);
        phi_s0 = temp_s0_4;
    } else {
        temp_s0_3 = &this->unk_1D0;
        SkelAnime_InitSV(globalCtx, temp_s0_3, &D_06011058, &D_0600CFE0, NULL, NULL, 0);
        SkelAnime_ChangeAnimTransitionRepeat(temp_s0_3, &D_0600CFE0, 0.0f);
        phi_s0 = temp_s0_3;
    }
    SkelAnime_FrameUpdateMatrix(phi_s0);
    if (this->actor.params == 0xC8) {
        this->unk_150 = 0x64;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 6U);
        this->actor.targetMode = 0;
        this->actor.flags |= 9;
        this->unk_214 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->unk_218);
        return;
    }
    this->unk_150 = 0xA;
    this->unk_152 = 0xA;
    this->unk_148 = *(&D_8090CD80 + (this->actor.params * 0x10));
    this->unk_1A0 = *(&D_8090CD8C + (this->actor.params * 0x10));
    temp_t9 = *(&D_8090CD88 + (this->actor.params * 0x10));
    temp_f4_2 = (f32) temp_t9;
    phi_f4 = temp_f4_2;
    if ((s32) temp_t9 < 0) {
        phi_f4 = temp_f4_2 + 4294967296.0f;
    }
    this->unk_1A4 = phi_f4;
    this->unk_1A4 += Rand_ZeroFloat(4.99999f);
    if ((this->unk_1A4 >= 65.0f) && (Rand_ZeroOne() < 0.05f)) {
        this->unk_1A4 += Rand_ZeroFloat(7.99999f);
    }
    if (D_809171C9 == 1) {
        this->unk_1A4 *= 0.73f;
    }
}

void EnFishing_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    GlobalContext *temp_a1;
    s16 temp_v0;
    EnFishing *this = (EnFishing *) thisx;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    SkelAnime_Free(&this->unk_1D0, temp_a1);
    temp_v0 = this->actor.params;
    if (temp_v0 == 0xC8) {
        LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk_214);
        return;
    }
    if (temp_v0 == 1) {
        Collider_DestroyJntSph(globalCtx, &this->unk_228);
    }
}

void func_808FDCDC(void *arg0, GlobalContext *arg1) {
    f32 sp94;
    f32 sp88;
    ? sp84;
    f32 sp7C;
    ? sp78;
    f32 sp64;
    ? sp60;
    MessageContext *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_s4;
    s16 temp_v0;
    s16 temp_v0_3;
    u8 temp_v1;
    void *temp_v0_2;
    void *phi_s0;
    f32 phi_f2;
    void *phi_v0;
    s32 phi_v0_2;
    s16 phi_s4;

    phi_s0 = arg0;
    phi_s4 = 0;
    do {
        temp_v1 = phi_s0->unk_24;
        if (temp_v1 != 0) {
            temp_f0 = phi_s0->unk_10;
            phi_s0->unk_0 = (f32) (phi_s0->unk_0 + phi_s0->unk_C);
            phi_s0->unk_4 = (f32) (phi_s0->unk_4 + temp_f0);
            phi_s0->unk_25 = (u8) (phi_s0->unk_25 + 1);
            phi_s0->unk_8 = (f32) (phi_s0->unk_8 + phi_s0->unk_14);
            phi_s0->unk_10 = (f32) (temp_f0 + phi_s0->unk_1C);
            if (temp_v1 == 1) {
                Math_ApproachF(phi_s0 + 0x30, phi_s0->unk_34, 0.2f, phi_s0->unk_38);
                if (phi_s0->unk_2C == 0) {
                    temp_v0 = phi_s0->unk_2E;
                    phi_s0->unk_2A = (s16) (phi_s0->unk_2A + 0x14);
                    if ((s32) phi_s0->unk_2A >= (s32) temp_v0) {
                        phi_s0->unk_2A = temp_v0;
                        phi_s0->unk_2C = (s16) (phi_s0->unk_2C + 1);
                    }
                } else {
                    phi_s0->unk_2A = (s16) (phi_s0->unk_2A - 8);
                    if ((s32) phi_s0->unk_2A <= 0) {
                        phi_s0->unk_24 = 0U;
                    }
                }
            } else if (temp_v1 == 3) {
                Math_ApproachF(phi_s0 + 0x30, phi_s0->unk_34, 0.1f, 0.1f);
                phi_s0->unk_2A = (s16) (phi_s0->unk_2A - 0xA);
                if (((f32) arg1->colCtx.colHeader->unk_28->unk_2 - 5.0f) < phi_s0->unk_4) {
                    phi_s0->unk_1C = 0.0f;
                    phi_s0->unk_10 = 0.0f;
                    phi_s0->unk_2A = (s16) (phi_s0->unk_2A - 5);
                }
                if ((s32) phi_s0->unk_2A <= 0) {
                    phi_s0->unk_24 = 0U;
                }
            } else if (temp_v1 == 4) {
                if (phi_s0->unk_2C == 0) {
                    phi_f2 = (f32) arg1->colCtx.colHeader->waterBoxes->unk_2;
                } else {
                    phi_f2 = 69.0f;
                }
                if (phi_f2 <= phi_s0->unk_4) {
                    phi_s0->unk_24 = 0U;
                    sp94 = phi_f2;
                    if (Rand_ZeroOne() < 0.3f) {
                        sp84.unk_0 = (f32) phi_s0->unk_0;
                        sp84.unk_4 = (f32) phi_s0->unk_4;
                        sp84.unk_8 = (f32) phi_s0->unk_8;
                        sp88 = phi_f2;
                        func_808FC964(NULL, arg1->specialEffects, (bitwise f32) &sp84, 20.0f, (s16) 60.0f, (s16) 0x96, 0x5A);
                    }
                }
            } else if (temp_v1 == 2) {
                if (phi_s0->unk_10 < -20.0f) {
                    phi_s0->unk_1C = 0.0f;
                    phi_s0->unk_10 = -20.0f;
                }
                if (phi_s0->unk_4 <= (f32) arg1->colCtx.colHeader->waterBoxes->ySurface) {
                    phi_s0->unk_24 = 0U;
                    if (Rand_ZeroOne() < 0.5f) {
                        sp78.unk_0 = (f32) phi_s0->unk_0;
                        sp78.unk_4 = (f32) phi_s0->unk_4;
                        sp78.unk_8 = (f32) phi_s0->unk_8;
                        sp7C = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
                        func_808FC964(NULL, arg1->specialEffects, (bitwise f32) &sp78, 40.0f, (s16) 110.0f, (s16) 0x96, 0x5A);
                    }
                }
            } else if (temp_v1 == 5) {
                temp_f14 = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
                if (phi_s0->unk_4 < temp_f14) {
                    temp_f2 = phi_s0->unk_0;
                    temp_f12 = phi_s0->unk_8;
                    temp_f16 = (temp_f2 * temp_f2) + (temp_f12 * temp_f12);
                    if (temp_f16 > 846400.0f) {
                        temp_f0_2 = sqrtf(temp_f16);
                        phi_s0->unk_25 = 2U;
                        phi_s0->unk_24 = 8U;
                        phi_s0->unk_4 = (f32) (((temp_f0_2 - 920.0f) * 0.11f) + temp_f14);
                        phi_s0->unk_30 = (f32) ((f32) (gGameInfo->data[1266] + 0x1E) * 0.001f);
                        phi_v0 = phi_s0 + 0xC;
                    } else {
                        phi_s0->unk_25 = 0U;
                        phi_s0->unk_4 = (f32) (temp_f14 + 3.0f);
                        phi_v0 = phi_s0 + 0xC;
                        if (Rand_ZeroOne() < 0.75f) {
                            phi_s0->unk_24 = 7U;
                            temp_v0_2 = phi_s0 + 0xC;
                            temp_v0_2->unk_0 = (s32) D_8090CF1C->x;
                            temp_v0_2->unk_4 = (s32) D_8090CF1C->y;
                            temp_v0_2->unk_8 = (s32) D_8090CF1C->z;
                            phi_s0->unk_30 = 0.030000001f;
                            phi_v0 = temp_v0_2;
                        } else {
                            phi_s0->unk_24 = 0U;
                        }
                    }
                    phi_v0->unk_0 = (f32) D_8090CF1C->x;
                    phi_v0->unk_4 = (f32) D_8090CF1C->y;
                    phi_v0->unk_8 = (f32) D_8090CF1C->z;
                }
            } else if ((s32) temp_v1 >= 7) {
                phi_s0->unk_30 = (f32) (phi_s0->unk_30 + ((f32) (gGameInfo->data[1266] + 0x1E) * 0.001f));
                if ((s32) phi_s0->unk_25 >= 6) {
                    phi_s0->unk_24 = 0U;
                }
            } else if (temp_v1 == 6) {
                phi_s0->unk_30 = 0.010000001f;
                Math_ApproachS(&D_809171EE, 0, 0x14, 0x64);
                Math_ApproachS(&D_809171EC, 0, 0x14, 0x64);
                Math_ApproachS(&D_809171F0, -0x4000, 0x14, 0x64);
                temp_f2_2 = phi_s0->unk_0;
                temp_f12_2 = phi_s0->unk_8;
                temp_f18 = phi_s0->unk_4;
                temp_f14_2 = (temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2);
                if (((((sqrtf(temp_f14_2) - 920.0f) * 0.147f) + (f32) arg1->colCtx.colHeader->waterBoxes->ySurface) - 10.0f) < temp_f18) {
                    phi_s0->unk_4 = (f32) (temp_f18 - 0.1f);
                }
                if ((phi_s0->unk_25 & 0xF) == 0) {
                    sp60.unk_0 = (f32) phi_s0->unk_0;
                    sp60.unk_4 = (f32) phi_s0->unk_4;
                    sp60.unk_8 = (f32) phi_s0->unk_8;
                    sp64 = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
                    func_808FC964((bitwise Vec3f *) temp_f12_2, (bitwise void *) temp_f14_2, 0.0f, arg1->specialEffects, (s16) &sp60, 0x41F00000, 0x43960000, 0x96, 0x5A);
                }
                temp_v0_3 = phi_s0->unk_2C;
                if ((s32) temp_v0_3 >= 0) {
                    phi_s0->unk_2C = (s16) (temp_v0_3 + 1);
                }
                phi_v0_2 = (s32) phi_s0->unk_2C;
                if (phi_s0->unk_2C == 0x1E) {
                    func_801518B0(arg1, 0x40B3U, NULL);
                    phi_v0_2 = (s32) phi_s0->unk_2C;
                }
                temp_s1 = &arg1->msgCtx;
                if ((phi_v0_2 >= 0x64) && (func_80152498(temp_s1) == 5) && ((func_80147624(arg1) != 0) || (func_80152498(temp_s1) == 0))) {
                    func_801477B4(arg1);
                    func_801159EC(-0x32);
                    phi_s0->unk_2C = -1;
                }
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s0 += 0x40;
        phi_s4 = temp_s4;
    } while ((s32) temp_s4 < 0x82);
}

void func_808FE3F8(void *arg0, GraphicsContext **arg1) {
    f32 sp120;
    void *sp114;
    Gfx *spF8;
    Gfx *spE4;
    Gfx *spD0;
    Gfx *spCC;
    Gfx *spB8;
    Gfx *spA8;
    Gfx *sp94;
    Gfx *sp84;
    ? *sp6C;
    ? *temp_s1;
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
    Gfx *temp_v0_2;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s16 temp_s3_4;
    s16 temp_s3_5;
    s16 temp_s3_6;
    s16 temp_s3_7;
    u32 temp_v1;
    void *phi_s1;
    s32 phi_s4;
    s16 phi_s3;
    void *phi_s1_2;
    s32 phi_s4_2;
    s16 phi_s3_2;
    void *phi_s1_3;
    s32 phi_s4_3;
    s16 phi_s3_3;
    void *phi_s1_4;
    s32 phi_s4_4;
    s16 phi_s3_4;
    ? *phi_s1_5;
    s32 phi_s4_5;
    s16 phi_s3_5;
    ? *phi_s1_6;
    s32 phi_s4_6;
    s16 phi_s3_6;
    ? *phi_s1_7;
    s32 phi_s4_7;
    s16 phi_s3_7;

    sp114 = arg0;
    temp_s0 = *arg1;
    SysMatrix_StatePush();
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    phi_s1 = arg0;
    phi_s4 = 0;
    phi_s3 = 0;
    phi_s4_2 = 0;
    phi_s3_2 = 0;
    phi_s4_3 = 0;
    phi_s3_3 = 0;
    phi_s4_4 = 0;
    phi_s3_4 = 0;
    phi_s4_5 = 0;
    phi_s4_6 = 0;
    phi_s4_7 = 0;
    do {
        if (phi_s1->unk_24 == 1) {
            if (phi_s4 == 0) {
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = &D_06008610;
                temp_v0_2->words.w0 = 0xDE000000;
                temp_v0_3 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w1 = 0x9B9B9B00;
                temp_v0_3->words.w0 = 0xFB000000;
                phi_s4 = (phi_s4 + 1) & 0xFF;
            }
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_4->words.w1 = (phi_s1->unk_2A & 0xFF) | ~0xFF;
            SysMatrix_InsertTranslation(phi_s1->unk_0, phi_s1->unk_4, phi_s1->unk_8, 0);
            temp_f12 = phi_s1->unk_30;
            Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            spF8 = temp_v0_5;
            spF8->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_6[1];
            temp_v0_6->words.w1 = (u32) &D_06008678;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s1 += 0x40;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x64);
    phi_s1_2 = sp114;
    do {
        if (phi_s1_2->unk_24 == 2) {
            sp6C = &D_06003680;
            if (phi_s4_2 == 0) {
                temp_v0_7 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_7[1];
                temp_v0_7->words.w1 = (u32) &D_06003610;
                temp_v0_7->words.w0 = 0xDE000000;
                temp_v0_8 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_8[1];
                temp_v0_8->words.w1 = 0xC8C8C800;
                temp_v0_8->words.w0 = 0xFB000000;
                phi_s4_2 = (phi_s4_2 + 1) & 0xFF;
            }
            temp_v0_9 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_9[1];
            temp_v0_9->words.w0 = 0xFA000000;
            temp_v0_9->words.w1 = (phi_s1_2->unk_2A & 0xFF) | 0xB4B4B400;
            SysMatrix_InsertTranslation(phi_s1_2->unk_0, phi_s1_2->unk_4, phi_s1_2->unk_8, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12_2 = phi_s1_2->unk_30;
            Matrix_Scale(temp_f12_2, temp_f12_2, 1.0f, 1);
            temp_v0_10 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_10[1];
            temp_v0_10->words.w0 = 0xDA380003;
            spE4 = temp_v0_10;
            spE4->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_11 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_11[1];
            temp_v0_11->words.w0 = 0xDE000000;
            temp_v0_11->words.w1 = (u32) sp6C;
        }
        temp_s3_2 = phi_s3_2 + 1;
        phi_s1_2 += 0x40;
        phi_s3_2 = temp_s3_2;
    } while ((s32) temp_s3_2 < 0x64);
    phi_s1_3 = sp114;
    do {
        if (phi_s1_3->unk_24 == 3) {
            sp6C = &D_06008970;
            if (phi_s4_3 == 0) {
                temp_v0_12 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_12[1];
                temp_v0_12->words.w1 = (u32) &D_060088C0;
                temp_v0_12->words.w0 = 0xDE000000;
                temp_v0_13 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = &temp_v0_13[1];
                temp_v0_13->words.w1 = 0x285A5080;
                temp_v0_13->words.w0 = 0xFB000000;
                phi_s4_3 = (phi_s4_3 + 1) & 0xFF;
            }
            temp_v0_14 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_14[1];
            temp_v0_14->words.w0 = 0xFA000000;
            temp_v0_14->words.w1 = (phi_s1_3->unk_2A & 0xFF) | 0x285A5000;
            temp_v0_15 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_15[1];
            temp_v0_15->words.w0 = 0xDB060020;
            temp_v1 = phi_s1_3->unk_25 + (phi_s3_3 * 3);
            spD0 = temp_v0_15;
            spD0->words.w1 = Gfx_TwoTexScroll(*arg1, 0, temp_v1, temp_v1 * 5, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s1_3->unk_0, phi_s1_3->unk_4, phi_s1_3->unk_8, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12_3 = phi_s1_3->unk_30;
            Matrix_Scale(temp_f12_3, temp_f12_3, 1.0f, 1);
            temp_v0_16 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_16[1];
            temp_v0_16->words.w0 = 0xDA380003;
            spCC = temp_v0_16;
            spCC->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_17 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_17[1];
            temp_v0_17->words.w0 = 0xDE000000;
            temp_v0_17->words.w1 = (u32) sp6C;
        }
        temp_s3_3 = phi_s3_3 + 1;
        phi_s1_3 += 0x40;
        phi_s3_3 = temp_s3_3;
    } while ((s32) temp_s3_3 < 0x64);
    phi_s1_4 = sp114;
    do {
        if (phi_s1_4->unk_24 == 4) {
            sp6C = &D_060034C0;
            if (phi_s4_4 == 0) {
                temp_v0_18 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_18[1];
                temp_v0_18->words.w1 = (u32) &D_06003460;
                temp_v0_18->words.w0 = 0xDE000000;
                temp_v0_19 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_19[1];
                temp_v0_19->words.w1 = 0x96969600;
                temp_v0_19->words.w0 = 0xFB000000;
                temp_v0_20 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_20[1];
                temp_v0_20->words.w1 = -1;
                temp_v0_20->words.w0 = 0xFA000000;
                phi_s4_4 = (phi_s4_4 + 1) & 0xFF;
            }
            SysMatrix_InsertTranslation(phi_s1_4->unk_0, phi_s1_4->unk_4, phi_s1_4->unk_8, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12_4 = phi_s1_4->unk_30;
            Matrix_Scale(temp_f12_4, temp_f12_4, 1.0f, 1);
            temp_v0_21 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_21[1];
            temp_v0_21->words.w0 = 0xDA380003;
            spB8 = temp_v0_21;
            spB8->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_22 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_22[1];
            temp_v0_22->words.w0 = 0xDE000000;
            temp_v0_22->words.w1 = (u32) sp6C;
        }
        temp_s3_4 = phi_s3_4 + 1;
        phi_s1_4 += 0x40;
        phi_s3_4 = temp_s3_4;
    } while ((s32) temp_s3_4 < 0x64);
    temp_s1 = sp114 + 0x780;
    sp6C = temp_s1;
    phi_s1_5 = temp_s1;
    phi_s3_5 = 0x1E;
    phi_s3_6 = 0x1E;
    phi_s3_7 = 0x1E;
    do {
        if (phi_s1_5->unk_24 == 5) {
            if (phi_s4_5 == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0x14U);
                temp_v0_23 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_23[1];
                temp_v0_23->words.w0 = 0xFCFFFFFF;
                temp_v0_23->words.w1 = 0xFFFDF6FB;
                temp_v0_24 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_24[1];
                temp_v0_24->words.w1 = 0x96FFFF1E;
                temp_v0_24->words.w0 = 0xFA000000;
                phi_s4_5 = (phi_s4_5 + 1) & 0xFF;
            }
            SysMatrix_InsertTranslation(phi_s1_5->unk_0, phi_s1_5->unk_4, phi_s1_5->unk_8, 0);
            SysMatrix_InsertYRotation_f(phi_s1_5->unk_38, 1);
            SysMatrix_RotateStateAroundXAxis(phi_s1_5->unk_34);
            SysMatrix_InsertZRotation_f(phi_s1_5->unk_3C, 1);
            Matrix_Scale(0.002f, 1.0f, 0.1f, 1);
            temp_v0_25 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_25[1];
            temp_v0_25->words.w0 = 0xDA380003;
            spA8 = temp_v0_25;
            spA8->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_26 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_26[1];
            temp_v0_26->words.w1 = (u32) &D_06003760;
            temp_v0_26->words.w0 = 0xDE000000;
        }
        temp_s3_5 = phi_s3_5 + 1;
        phi_s1_5 += 0x40;
        phi_s3_5 = temp_s3_5;
    } while ((s32) temp_s3_5 < 0x82);
    func_8012C2DC(*arg1);
    phi_s1_6 = sp6C;
    do {
        if (phi_s1_6->unk_24 == 7) {
            if (phi_s4_6 == 0) {
                temp_v0_27 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_27[1];
                temp_v0_27->words.w1 = (u32) &D_06008610;
                temp_v0_27->words.w0 = 0xDE000000;
                temp_v0_28 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_28[1];
                temp_v0_28->words.w1 = 0x9B9B9B00;
                temp_v0_28->words.w0 = 0xFB000000;
                temp_v0_29 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_29[1];
                temp_v0_29->words.w1 = -0x7E;
                temp_v0_29->words.w0 = 0xFA000000;
                phi_s4_6 = (phi_s4_6 + 1) & 0xFF;
            }
            SysMatrix_InsertTranslation(phi_s1_6->unk_0, phi_s1_6->unk_4, phi_s1_6->unk_8, 0);
            temp_f12_5 = phi_s1_6->unk_30;
            Matrix_Scale(temp_f12_5, 1.0f, temp_f12_5, 1);
            temp_v0_30 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_30[1];
            temp_v0_30->words.w0 = 0xDA380003;
            sp94 = temp_v0_30;
            sp94->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_31 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_31[1];
            temp_v0_31->words.w1 = (u32) &D_06008678;
            temp_v0_31->words.w0 = 0xDE000000;
        }
        temp_s3_6 = phi_s3_6 + 1;
        phi_s1_6 += 0x40;
        phi_s3_6 = temp_s3_6;
    } while ((s32) temp_s3_6 < 0x82);
    phi_s1_7 = sp6C;
    do {
        if (phi_s1_7->unk_24 == 8) {
            sp6C = &D_06003A18;
            if (phi_s4_7 == 0) {
                temp_v0_32 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_32[1];
                temp_v0_32->words.w1 = (u32) &D_060039A8;
                temp_v0_32->words.w0 = 0xDE000000;
                temp_v0_33 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = &temp_v0_33[1];
                temp_v0_33->words.w0 = 0xFA000000;
                temp_v0_33->words.w1 = ((gGameInfo->data[1267] + 0x50) & 0xFF) | ~0xFF;
                phi_s4_7 = (phi_s4_7 + 1) & 0xFF;
            }
            if (Rand_ZeroOne() < 0.5f) {
                sp120 = 0.0f;
            } else {
                sp120 = 3.1415927f;
            }
            SysMatrix_InsertTranslation(phi_s1_7->unk_0, phi_s1_7->unk_4, phi_s1_7->unk_8, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            SysMatrix_InsertYRotation_f(sp120, 1);
            temp_f12_6 = phi_s1_7->unk_30;
            Matrix_Scale(temp_f12_6, temp_f12_6, 1.0f, 1);
            temp_v0_34 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_34[1];
            temp_v0_34->words.w0 = 0xDA380003;
            sp84 = temp_v0_34;
            sp84->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_35 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_35[1];
            temp_v0_35->words.w0 = 0xDE000000;
            temp_v0_35->words.w1 = (u32) sp6C;
        }
        temp_s3_7 = phi_s3_7 + 1;
        phi_s1_7 += 0x40;
        phi_s3_7 = temp_s3_7;
    } while ((s32) temp_s3_7 < 0x82);
    if (sp114->unk_24 == 6) {
        SysMatrix_InsertTranslation(sp114->unk_0, sp114->unk_4, sp114->unk_8, 0);
        SysMatrix_InsertYRotation_f(((f32) (&D_809171EC)[1] * 3.1415927f) / 32768.0f, 1);
        SysMatrix_RotateStateAroundXAxis(((f32) D_809171EC.unk_0 * 3.1415927f) / 32768.0f);
        SysMatrix_InsertZRotation_f(((f32) (&D_809171EC)[2] * 3.1415927f) / 32768.0f, 1);
        temp_f12_7 = sp114->unk_30;
        Matrix_Scale(temp_f12_7, temp_f12_7, temp_f12_7, 1);
        SysMatrix_InsertTranslation(-1250.0f, 0.0f, 0.0f, 1);
        SysMatrix_RotateStateAroundXAxis(1.5707964f);
        temp_v0_36 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_36[1];
        temp_v0_36->words.w0 = 0xDA380003;
        temp_v0_36->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_37 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_37[1];
        temp_v0_37->words.w1 = (u32) &D_060074C8;
        temp_v0_37->words.w0 = 0xDE000000;
    }
    SysMatrix_StatePop();
}

void func_808FEE1C(GraphicsContext **arg0) {
    Gfx *sp48;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;
    s32 temp_v1;

    temp_s0 = arg0->unk_0;
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060024;
    temp_v1 = arg0[25104];
    sp48 = temp_v0;
    sp48->words.w1 = Gfx_TwoTexScroll(arg0->unk_0, 0, (u32) temp_v1, temp_v1 * 8, 0x20, 0x40, 1, temp_v1 * -2, 0U, 0x10, 0x10);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0xC3E1EB32;
    temp_v0_2->words.w0 = 0xFA000000;
    SysMatrix_InsertTranslation(670.0f, -24.0f, -600.0f, 0);
    Matrix_Scale(0.02f, 1.0f, 0.02f, 1);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp40 = temp_v0_3;
    sp40->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06003230;
    temp_v0_4->words.w0 = 0xDE000000;
}

s32 func_808FEF70(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f0 = arg0->unk_0;
    if ((((temp_f0 >= 110.0f) && (temp_f0 <= 150.0f) && (temp_f2 = arg0->unk_8, (temp_f2 <= 1400.0f)) && (temp_f2 >= 1160.0f)) || ((temp_f0 >= 110.0f) && (temp_f0 <= 210.0f) && (temp_f2_2 = arg0->unk_8, (temp_f2_2 <= 1200.0f)) && (temp_f2_2 >= 1160.0f))) && (arg0->unk_4 <= 42.0f)) {
        return 1;
    }
    return 0;
}

void func_808FF064(GlobalContext *arg0, Vec3f *arg1, ? *arg2, ? *arg3) {
    f32 spDC;
    f32 spCC;
    ? spC4;
    f32 spB8;
    f32 spA8;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    f32 *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_f4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_t0;
    f32 phi_f18;
    s32 phi_s1;
    Vec3f *phi_s0;
    f32 phi_f12;
    f32 phi_f2;
    s32 phi_s1_2;
    f32 phi_f16;
    void *phi_f12_2;
    f32 phi_f14;
    f32 phi_f16_2;
    void *phi_s2;
    f32 phi_f2_2;
    f32 phi_f2_3;

    spC4.unk_0 = (s32) D_8090D4D8.unk_0;
    spC4.unk_4 = (s32) D_8090D4D8.unk_4;
    spC4.unk_8 = (s32) D_8090D4D8.unk_8;
    phi_s1 = 0;
    if (D_8090CD24 != 0) {
        spA8.unk_0 = arg1->x;
        (&spA8)[1] = arg1->y;
        (&spA8)[2] = arg1->z;
        sp9C.unk_0 = arg2->unk_954;
        (&sp9C)[1] = arg2->unk_958;
        (&sp9C)[2] = arg2->unk_95C;
        temp_f26 = sp9C - spA8;
        temp_f12 = spA0 - spAC;
        temp_f14 = spA4 - spB0;
        sp94 = temp_f12;
        sp90 = temp_f14;
        temp_f18 = sqrtf((temp_f26 * temp_f26) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) * 0.97f;
        phi_f18 = temp_f18;
        if (temp_f18 > 1000.0f) {
            phi_f18 = 1000.0f;
        }
        sp98 = temp_f26;
        D_809101C0 = 200.0f - (phi_f18 * 200.0f * 0.001f);
    }
    temp_f4 = (s32) D_809101C0;
    spCC = 5.0f;
    do {
        if (temp_f4 >= phi_s1) {
            temp_t0 = arg2 + (phi_s1 * 0xC);
            temp_t0->unk_0 = (f32) arg1->x;
            temp_t0->unk_4 = (f32) arg1->y;
            temp_t0->unk_8 = (f32) arg1->z;
        } else if (D_8090CD24 != 0) {
            temp_s0 = (phi_s1 * 0xC) + arg2;
            temp_f20 = (f32) (phi_s1 - temp_f4) / (f32) (0xC9 - temp_f4);
            Math_ApproachF(temp_s0, (sp98 * temp_f20) + spA8, 1.0f, 20.0f);
            Math_ApproachF(temp_s0 + 4, (sp94 * temp_f20) + spAC, 1.0f, 20.0f);
            Math_ApproachF(temp_s0 + 8, (sp90 * temp_f20) + spB0, 1.0f, 20.0f);
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 < 0xC8);
    temp_v0 = temp_f4 + 1;
    phi_s1_2 = temp_v0;
    if (temp_v0 < 0xC8) {
        temp_v0_2 = temp_v0 * 0xC;
        temp_s0_2 = temp_v0_2 + arg2;
        phi_s0 = temp_s0_2;
        phi_f14 = temp_s0_2->unk_-C;
        phi_s2 = arg3 + temp_v0_2;
        do {
            temp_f0 = phi_s0->x;
            temp_f12_2 = phi_s0->z;
            temp_f16 = phi_s0->y;
            temp_f26_2 = temp_f0 - phi_f14;
            temp_f20_2 = 2.0f * D_809101C4;
            temp_f18_2 = (temp_f0 * temp_f0) + (temp_f12_2 * temp_f12_2);
            phi_f16 = temp_f16;
            if (temp_f18_2 > 846400.0f) {
                temp_f2 = (f32) arg0->colCtx.colHeader->unk_28->unk_2;
                phi_f12 = ((sqrtf(temp_f18_2) - 920.0f) * 0.11f) + temp_f2;
                phi_f2 = temp_f2;
            } else {
                temp_f2_2 = (f32) arg0->colCtx.colHeader->waterBoxes->unk_2;
                phi_f12 = temp_f2_2;
                phi_f2 = temp_f2_2;
            }
            phi_f12_2 = (bitwise void *) phi_f12;
            if (D_80917206 == 2) {
                if (temp_f16 < phi_f12) {
                    temp_f12_3 = ((sqrtf(temp_f18_2) - 920.0f) * 0.147f) + phi_f2;
                    phi_f12_2 = (bitwise void *) temp_f12_3;
                    if (temp_f12_3 < temp_f16) {
                        temp_f2_3 = (temp_f16 - temp_f12_3) * 0.05f;
                        phi_f2_2 = temp_f2_3;
                        if (temp_f2_3 > 0.29999998f) {
                            phi_f2_2 = 0.29999998f;
                        }
                        if (phi_s1_2 >= 0x64) {
                            phi_f16 = temp_f16 - (phi_f2_2 * ((f32) (phi_s1_2 - 0x64) * 0.02f));
                        }
                    }
                } else {
                    phi_f16 = temp_f16 - temp_f20_2;
                }
            } else if (phi_s1_2 >= 0xBF) {
                if (phi_f12 < temp_f16) {
                    temp_f2_4 = (temp_f16 - phi_f12) * 0.2f;
                    phi_f2_3 = temp_f2_4;
                    if (temp_f20_2 < temp_f2_4) {
                        phi_f2_3 = temp_f20_2;
                    }
                    phi_f16 = temp_f16 - phi_f2_3;
                }
            } else if (phi_f12 < temp_f16) {
                phi_f16 = temp_f16 - temp_f20_2;
            }
            spDC = phi_f16;
            phi_f16_2 = phi_f16;
            if (func_808FEF70(phi_f12_2, phi_f14, phi_s0) != 0) {
                phi_f16_2 = 42.0f;
            }
            temp_f20_3 = phi_s0->z - phi_s0->unk_-4;
            temp_f24 = phi_f16_2 - phi_s0->unk_-8;
            temp_f22 = Math_Acot2F(temp_f20_3, temp_f26_2);
            temp_f20_4 = -Math_Acot2F(sqrtf((temp_f26_2 * temp_f26_2) + (temp_f20_3 * temp_f20_3)), temp_f24);
            phi_s2->unk_-8 = temp_f22;
            phi_s2->unk_-C = temp_f20_4;
            SysMatrix_InsertYRotation_f(temp_f22, 0);
            SysMatrix_RotateStateAroundXAxis(temp_f20_4);
            SysMatrix_MultiplyVector3fByState((Vec3f *) &spC4, (Vec3f *) &spB8);
            temp_f0_2 = phi_s0->unk_-C + spB8;
            temp_s1_2 = phi_s1_2 + 1;
            temp_s0_3 = phi_s0 + 0xC;
            temp_s0_3->unk_-C = temp_f0_2;
            temp_s0_3->unk_-8 = (f32) (phi_s0->unk_-8 + spBC);
            temp_s0_3->unk_-4 = (f32) (phi_s0->unk_-4 + spC0);
            phi_s0 = temp_s0_3;
            phi_s1_2 = temp_s1_2;
            phi_f14 = temp_f0_2;
            phi_s2 += 0xC;
        } while (temp_s1_2 != 0xC8);
    }
}

void func_808FF5E0(? *arg0) {
    f32 sp78;
    ? sp70;
    f32 sp64;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;
    f32 phi_f20;
    f32 phi_f16;
    f32 phi_f18;
    s32 phi_s1;

    sp70.unk_0 = (s32) D_8090D4E4.unk_0;
    temp_s0 = arg0 + 0x948;
    sp70.unk_4 = (s32) D_8090D4E4.unk_4;
    sp70.unk_8 = (s32) D_8090D4E4.unk_8;
    sp78 = 5.0f;
    temp_s2 = (s32) D_809101C0;
    phi_s0 = temp_s0;
    phi_s1 = 0xC6;
    if (temp_s2 < 0xC6) {
        phi_f20 = temp_s0->unk_14;
        phi_f16 = temp_s0->unk_C;
        phi_f18 = temp_s0->unk_10;
        do {
            temp_f22 = phi_s0->unk_0 - phi_f16;
            temp_f24 = phi_s0->unk_8 - phi_f20;
            temp_f26 = phi_s0->unk_4 - phi_f18;
            temp_f20 = Math_Acot2F(temp_f24, temp_f22);
            temp_f22_2 = -Math_Acot2F(sqrtf((temp_f22 * temp_f22) + (temp_f24 * temp_f24)), temp_f26);
            SysMatrix_InsertYRotation_f(temp_f20, 0);
            SysMatrix_RotateStateAroundXAxis(temp_f22_2);
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp70, (Vec3f *) &sp64);
            temp_f0 = phi_s0->unk_C + sp64;
            temp_s1 = phi_s1 - 1;
            temp_s0_2 = phi_s0 - 0xC;
            temp_s0_2->unk_C = temp_f0;
            temp_f2 = phi_s0->unk_10 + sp68;
            temp_s0_2->unk_10 = temp_f2;
            temp_f12 = phi_s0->unk_14 + sp6C;
            temp_s0_2->unk_14 = temp_f12;
            phi_s0 = temp_s0_2;
            phi_f20 = temp_f12;
            phi_f16 = temp_f0;
            phi_f18 = temp_f2;
            phi_s1 = temp_s1;
        } while (temp_s2 != temp_s1);
    }
}

void func_808FF750(void *arg0, void *arg1, void *arg2, u8 arg3) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    ? sp98;
    f32 sp8C;
    void *sp88;
    GraphicsContext *sp84;
    Gfx *sp7C;
    Gfx *sp74;
    Vec3f *sp6C;
    ? sp2C;
    Gfx *sp28;
    f32 *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Vec3f *temp_a1;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 phi_f0;
    f32 *phi_a0;

    sp98.unk_0 = (s32) D_8090D4F0.unk_0;
    sp98.unk_4 = (s32) D_8090D4F0.unk_4;
    sp98.unk_8 = (s32) D_8090D4F0.unk_8;
    sp88 = arg0->unk_1CCC;
    sp84 = arg0->unk_0;
    SysMatrix_StatePush();
    if ((D_8090CD14 == 3) && (((f32) arg0->unk_830->unk_28->unk_2 < arg1->unk_4) || ((D_8090CD0C != 0) && (arg3 != 0)))) {
        phi_f0 = 0.0f;
    } else if (arg1->unk_4 < (f32) arg0->unk_830->unk_28->unk_2) {
        phi_f0 = -1.0f;
    } else {
        phi_f0 = -3.0f;
    }
    temp_f14 = arg2->unk_0 - arg1->unk_0;
    spB8 = (arg2->unk_4 - arg1->unk_4) + phi_f0;
    spBC = temp_f14;
    temp_f12 = arg2->unk_8 - arg1->unk_8;
    spB4 = temp_f12;
    spAC = Math_Acot2F(temp_f12, temp_f14);
    spB0 = -Math_Acot2F(sqrtf((spBC * spBC) + (spB4 * spB4)), spB8);
    SysMatrix_InsertYRotation_f(spAC, 0);
    SysMatrix_RotateStateAroundXAxis(spB0);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp98, (Vec3f *) &sp8C);
    arg2->unk_0 = (f32) (arg1->unk_0 + sp8C);
    arg2->unk_4 = (f32) (arg1->unk_4 + sp90);
    arg2->unk_8 = (f32) (arg1->unk_8 + sp94);
    SysMatrix_InsertTranslation(arg1->unk_0, arg1->unk_4, arg1->unk_8, 0);
    if ((sp88->unk_70 == 0.0f) && (temp_a0 = (arg3 * 4) + &D_80911E20, (D_809101B4 == 0.0f))) {
        sp20 = temp_a0;
        Math_ApproachF(temp_a0, spAC, 0.1f, 0.3f);
        phi_a0 = temp_a0;
    } else {
        temp_a0_2 = (arg3 * 4) + &D_80911E20;
        *temp_a0_2 = spAC;
        phi_a0 = temp_a0_2;
    }
    SysMatrix_InsertYRotation_f(*phi_a0, 1);
    SysMatrix_RotateStateAroundXAxis(spB0);
    Matrix_Scale(0.0039999997f, 0.0039999997f, 0.005f, 1);
    SysMatrix_InsertYRotation_f(3.1415927f, 1);
    temp_v0 = sp84->polyOpa.p;
    sp84->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp7C = temp_v0;
    sp7C->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v0_2 = sp84->polyOpa.p;
    sp84->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_06012160;
    temp_v0_2->words.w0 = 0xDE000000;
    sp20 = &D_06012160;
    SysMatrix_InsertZRotation_f(1.5707964f, 1);
    temp_v0_3 = sp84->polyOpa.p;
    sp84->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = &D_06012160;
    sp74 = temp_v0_3;
    sp74->words.w1 = Matrix_NewMtx(arg0->unk_0);
    temp_v0_4 = sp84->polyOpa.p;
    sp84->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06012160;
    temp_v0_4->words.w0 = 0xDE000000;
    if ((arg3 == 1) && (D_8090CD0C != 0)) {
        Matrix_Scale(2.0f, 2.0f, 2.0f, 1);
        SysMatrix_InsertTranslation(250.0f, 0.0f, -1400.0f, 1);
        SysMatrix_StatePush();
        if (D_8090CD10 != 0) {
            temp_a1 = arg0->unk_18870;
            sp6C = temp_a1;
            SysMatrix_MultiplyVector3fByState(D_8090CF1C, temp_a1);
            SysMatrix_CopyCurrentState((MtxF *) &sp2C);
            func_8018219C((MtxF *) &sp2C, (Vec3s *) &D_809171EC, 0);
            D_8090CD10 = 0;
            D_8090CD0C = 0;
            sp6C->unk_24 = 6;
            sp6C->unk_2C = 0;
            sp6C[1].x = D_8090CF1C->x;
            sp6C[1].y = D_8090CF1C->y;
            sp6C[1].z = D_8090CF1C->z;
            sp6C[2].x = D_8090CF1C->x;
            sp6C[2].y = D_8090CF1C->y;
            sp6C[2].z = D_8090CF1C->z;
        }
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(-1250.0f, 0.0f, 0.0f, 1);
        SysMatrix_RotateStateAroundXAxis(1.5707964f);
        temp_v0_5 = sp84->polyOpa.p;
        sp84->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDA380003;
        sp28 = temp_v0_5;
        sp28->words.w1 = Matrix_NewMtx(arg0->unk_0);
        temp_v0_6 = sp84->polyOpa.p;
        sp84->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = (u32) &D_060074C8;
        temp_v0_6->words.w0 = 0xDE000000;
    }
    SysMatrix_StatePop();
}

void func_808FFC44(GlobalContext *arg0) {
    f32 spC0;
    f32 spBC;
    ? spB4;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp90;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f28;
    f32 temp_f28_2;
    s32 temp_s1;
    s32 phi_s1;
    ? *phi_s0;
    f32 phi_f26;
    f32 phi_f16;
    f32 phi_f18;
    f32 phi_f2;
    f32 phi_f24;

    spB4.unk_0 = (s32) D_8090D4FC.unk_0;
    spB4.unk_4 = (s32) D_8090D4FC.unk_4;
    spB4.unk_8 = (s32) D_8090D4FC.unk_8;
    spBC = 0.85f;
    D_80911E30.unk_0 = (s32) D_80917208.x;
    D_80911E30.unk_4 = (f32) D_80917208.y;
    D_80911E30.unk_8 = (s32) D_80917208.z;
    if (D_8090CD54 != 0) {
        spC0 = -1.0f;
    } else if (D_80917208.y < (f32) arg0->colCtx.colHeader->unk_28->unk_2) {
        spC0 = 0.5f;
    } else {
        spC0 = -5.0f;
    }
    if (D_8090CD14 == 5) {
        SysMatrix_InsertYRotation_f((f32) arg0->actorCtx.actorList[2].first->unk_BE * 0.0000958738f, 0);
        temp_a0 = &sp9C;
        sp9C = 5.0f;
        spA0 = 0.0f;
        spA4 = 3.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp90);
    }
    phi_s1 = 1;
    phi_s0 = &D_80911E3C;
    phi_f26 = D_80911E3C.unk_-4;
    phi_f18 = D_80911E3C.unk_-C;
    phi_f24 = D_80911E3C.unk_-8;
    do {
        if ((phi_s1 < 0xA) && (D_8090CD14 == 5)) {
            temp_f0 = (f32) (0xA - phi_s1);
            phi_f16 = temp_f0 * sp98 * 0.1f;
            phi_f2 = temp_f0 * sp90 * 0.1f;
        } else {
            phi_f16 = 0.0f;
            phi_f2 = 0.0f;
        }
        temp_f20 = (phi_s0->unk_0 - phi_f18) + phi_f2;
        temp_f28 = (phi_s0->unk_4 - phi_f24) + spC0;
        temp_f22 = (phi_s0->unk_8 - phi_f26) + phi_f16;
        temp_f24 = Math_Acot2F(temp_f22, temp_f20);
        temp_f20_2 = -Math_Acot2F(sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22)), temp_f28);
        SysMatrix_InsertYRotation_f(temp_f24, 0);
        SysMatrix_RotateStateAroundXAxis(temp_f20_2);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spB4, (Vec3f *) &spA8);
        temp_f28_2 = phi_s0->unk_-C + spA8;
        temp_f22_2 = phi_s0->unk_-8 + spAC;
        temp_s1 = phi_s1 + 1;
        temp_f20_3 = phi_s0->unk_-4 + spB0;
        phi_s0->unk_0 = temp_f28_2;
        phi_s0->unk_4 = temp_f22_2;
        phi_s0->unk_8 = temp_f20_3;
        phi_s1 = temp_s1;
        phi_s0 += 0xC;
        phi_f26 = temp_f20_3;
        phi_f18 = temp_f28_2;
        phi_f24 = temp_f22_2;
    } while (temp_s1 != 0x14);
}

void func_808FFF3C(GlobalContext *arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    f32 temp_f12_2;
    s16 temp_s0;
    s16 temp_s0_2;
    void *temp_v0_2;
    void *temp_v0_6;
    s16 phi_s0;
    s16 phi_s0_2;

    temp_s2 = arg0->state.gfxCtx;
    func_808FFC44(arg0);
    if (D_8091720C < (f32) arg0->colCtx.colHeader->unk_28->unk_2) {
        func_8012C28C(arg0->state.gfxCtx);
        temp_v0 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDE000000;
        temp_v0->words.w1 = (u32) &D_0600B950;
        phi_s0 = 0x13;
        do {
            if ((phi_s0 + D_80911F20) < 0x14) {
                temp_v0_2 = &D_80911E30 + (phi_s0 * 0xC);
                SysMatrix_InsertTranslation(temp_v0_2->unk_0, temp_v0_2->unk_4, temp_v0_2->unk_8, 0);
                temp_f12 = *(&D_8090D508 + (phi_s0 * 4) + (D_80911F20 * 4)) * 0.04f;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
                temp_v0_3 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_3[1];
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                temp_v0_4 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_4[1];
                temp_v0_4->words.w1 = (u32) &D_0600B9C0;
                temp_v0_4->words.w0 = 0xDE000000;
            }
            temp_s0 = phi_s0 - 1;
            phi_s0 = temp_s0;
        } while ((s32) temp_s0 >= 0);
        return;
    }
    func_8012C2DC(arg0->state.gfxCtx);
    temp_v0_5 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_0600B950;
    phi_s0_2 = 0x13;
    do {
        if ((phi_s0_2 + D_80911F20) < 0x14) {
            temp_v0_6 = &D_80911E30 + (phi_s0_2 * 0xC);
            SysMatrix_InsertTranslation(temp_v0_6->unk_0, temp_v0_6->unk_4, temp_v0_6->unk_8, 0);
            temp_f12_2 = *(&D_8090D508 + (phi_s0_2 * 4) + (D_80911F20 * 4)) * 0.04f;
            Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
            SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
            temp_v0_7 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v0_7[1];
            temp_v0_7->words.w0 = 0xDA380003;
            temp_v0_7->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_8 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v0_8[1];
            temp_v0_8->words.w1 = (u32) &D_0600B9C0;
            temp_v0_8->words.w0 = 0xDE000000;
        }
        temp_s0_2 = phi_s0_2 - 1;
        phi_s0_2 = temp_s0_2;
    } while ((s32) temp_s0_2 >= 0);
}

/*
Failed to decompile function func_80900228:

Label L80900680 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80900A04(GlobalContext *arg0) {
    f32 spC0;
    f32 spBC;
    f32 spB8;
    void *spB0;
    Gfx *sp94;
    s32 sp34;
    f32 *sp30;
    ? *sp2C;
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
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    f32 *temp_v0_6;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    s16 temp_s1_2;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v1;
    u8 temp_v0;
    void *temp_s1;
    s16 phi_s1;
    s32 phi_s1_2;

    spB0 = arg0->actorCtx.actorList[2].first;
    temp_v0 = D_80911E28;
    temp_s0 = arg0->state.gfxCtx;
    if (temp_v0 != 0) {
        D_80911E28 = temp_v0 - 1;
        Math_ApproachF(&D_8090CD40, 35.0f, 1.0f, 100.0f);
        Math_ApproachF(&D_8090CD3C, -0.8f, 1.0f, 0.4f);
        Math_ApproachS(spB0 + 0xBC, -0xFA0, 2, 0x3A98);
    } else {
        phi_s1 = 0;
        if ((D_8090CD14 == 4) && (D_80917274 != 0)) {
            phi_s1 = (s16) (s32) (Math_SinS((s16) (D_809171FE * 0x6400)) * 1500.0f);
        } else {
            Math_ApproachZeroF(&D_8090CD40, 0.1f, 10.0f);
            Math_ApproachZeroF(&D_8090CD3C, 1.0f, 0.05f);
        }
        Math_ApproachS(spB0 + 0xBC, phi_s1, 5, 0x3E8);
    }
    temp_v0_2 = D_8090CD14;
    if ((temp_v0_2 == 3) || (temp_v0_2 == 4)) {
        temp_s1 = arg0 + 0x14;
        if ((arg0->state.input[0].rel.stick_x == 0) && (D_8090CD44 != 0)) {
            D_8090CD30 = 0.0f;
        }
        if ((temp_s1->unk_15 == 0) && (D_8090CD48 != 0)) {
            D_8090CD34 = 0.0f;
        }
        temp_f10 = spB0[8].projectedPos.x;
        spC0 = temp_f10;
        Math_SmoothStepToF(spB0 + 0xB0C, (f32) temp_s1->unk_15 * 0.02f, 0.3f, 5.0f, 0.0f);
        spC0 = spB0[8].projectedPos.x - temp_f10;
        temp_f12 = spB0[8].shape.feetPos[1].z;
        spBC = temp_f12;
        Math_SmoothStepToF(spB0 + 0xB08, (f32) temp_s1->unk_14 * 0.02f, 0.3f, 5.0f, 0.0f);
        temp_f2 = spB0[8].shape.feetPos[1].z;
        if (temp_f2 > 1.0f) {
            spB0[8].shape.feetPos[1].z = 1.0f;
        }
        if (spB0[8].projectedPos.x > 1.0f) {
            spB0[8].projectedPos.x = 1.0f;
        }
        if (spB0[8].shape.feetPos[1].z < -1.0f) {
            spB0[8].shape.feetPos[1].z = -1.0f;
        }
        if (spB0[8].projectedPos.x < -1.0f) {
            spB0[8].projectedPos.x = -1.0f;
        }
        Math_ApproachF(&D_8090CD28, (temp_f2 - temp_f12) * 70.0f * -0.01f, 1.0f, D_8090CD30);
        Math_ApproachF(&D_8090CD30, 1.0f, 1.0f, 0.1f);
        Math_ApproachF(&D_8090CD2C, spC0 * 70.0f * 0.01f, 1.0f, D_8090CD34);
        Math_ApproachF(&D_8090CD34, 1.0f, 1.0f, 0.1f);
        Math_ApproachZeroF(&D_8090CD38, 1.0f, 0.05f);
    } else {
        Math_ApproachZeroF(spB0 + 0xB0C, 1.0f, 0.1f);
        Math_ApproachZeroF(spB0 + 0xB08, 1.0f, 0.1f);
        Math_ApproachF(&D_8090CD2C, (Math_SinS((s16) (D_809171FE * 0xBB8)) * 0.025f) + -0.03f, 1.0f, 0.05f);
        Math_ApproachZeroF(&D_8090CD28, 1.0f, 0.05f);
        temp_v0_3 = D_80917204;
        if (((s32) temp_v0_3 >= 0x13) && ((s32) temp_v0_3 < 0x19)) {
            Math_ApproachF(&D_8090CD38, 0.8f, 1.0f, 0.2f);
        } else {
            Math_ApproachF(&D_8090CD38, 0.0f, 1.0f, 0.4f);
        }
    }
    func_8012C28C(arg0->state.gfxCtx);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_060113D0;
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xFA000000;
    temp_v0_5->words.w1 = 0xFF9B00FF;
    SysMatrix_InsertMatrix(spB0 + 0xCC4, 0);
    if (D_809171C9 != 1) {
        SysMatrix_InsertTranslation(0.0f, 400.0f, 0.0f, 1);
    } else {
        SysMatrix_InsertTranslation(0.0f, 230.0f, 0.0f, 1);
    }
    if (D_8090CD14 == 5) {
        SysMatrix_InsertYRotation_f(1.7592919f, 1);
    } else {
        SysMatrix_InsertYRotation_f(1.288053f, 1);
    }
    SysMatrix_RotateStateAroundXAxis(-0.6283185f);
    SysMatrix_InsertZRotation_f((spB0[8].shape.feetPos[1].z * 0.5f) + 0.4712389f, 1);
    SysMatrix_RotateStateAroundXAxis((D_8090CD40 + 20.0f) * 0.01f * 3.1415927f);
    Matrix_Scale(0.70000005f, 0.70000005f, 0.70000005f, 1);
    spB8 = ((((spB0[8].projectedPos.x - 1.0f) * -0.25f) + 0.5f) * D_8090CD3C) + (D_8090CD2C + D_8090CD38);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -1300.0f, 1);
    sp2C = &D_06011410;
    phi_s1_2 = 0;
    do {
        temp_v1 = phi_s1_2 * 4;
        temp_v0_6 = temp_v1 + &D_8090D5B0;
        sp30 = temp_v0_6;
        sp34 = temp_v1;
        SysMatrix_InsertYRotation_f(*temp_v0_6 * D_8090CD28 * 0.5f, 1);
        SysMatrix_RotateStateAroundXAxis(*temp_v0_6 * spB8 * 0.5f);
        SysMatrix_StatePush();
        temp_f12_2 = *(&D_8090D558 + sp34);
        Matrix_Scale(temp_f12_2, temp_f12_2, 0.52f, 1);
        temp_v0_7 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDA380003;
        sp94 = temp_v0_7;
        sp94->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
        if (phi_s1_2 < 5) {
            temp_v0_8 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_8[1];
            temp_v0_8->words.w1 = (u32) &D_06011170;
            temp_v0_8->words.w0 = 0xFD100000;
            temp_v0_9 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_9[1];
            temp_v0_9->words.w1 = 0x700C040;
            temp_v0_9->words.w0 = 0xF5100000;
            temp_v0_10 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_10[1];
            temp_v0_10->words.w1 = 0;
            temp_v0_10->words.w0 = 0xE6000000;
            temp_v0_11 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_11[1];
            temp_v0_11->words.w1 = 0x707F200;
            temp_v0_11->words.w0 = 0xF3000000;
            temp_v0_12 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_12[1];
            temp_v0_12->words.w1 = 0;
            temp_v0_12->words.w0 = 0xE7000000;
            temp_v0_13 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_13[1];
            temp_v0_13->words.w1 = 0xC040;
            temp_v0_13->words.w0 = 0xF5100800;
            temp_v0_14 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_14[1];
            temp_v0_14->words.w0 = 0xF2000000;
            temp_v0_14->words.w1 = 0x3C01C;
        } else if ((phi_s1_2 < 8) || ((phi_s1_2 & 1) == 0)) {
            temp_v0_22 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_22[1];
            temp_v0_22->words.w1 = (u32) &D_06011270;
            temp_v0_22->words.w0 = 0xFD100000;
            temp_v0_23 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_23[1];
            temp_v0_23->words.w1 = 0x700C040;
            temp_v0_23->words.w0 = 0xF5100000;
            temp_v0_24 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_24[1];
            temp_v0_24->words.w1 = 0;
            temp_v0_24->words.w0 = 0xE6000000;
            temp_v0_25 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_25[1];
            temp_v0_25->words.w1 = 0x707F200;
            temp_v0_25->words.w0 = 0xF3000000;
            temp_v0_26 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_26[1];
            temp_v0_26->words.w1 = 0;
            temp_v0_26->words.w0 = 0xE7000000;
            temp_v0_27 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_27[1];
            temp_v0_27->words.w1 = 0xC040;
            temp_v0_27->words.w0 = 0xF5100800;
            temp_v0_28 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_28[1];
            temp_v0_28->words.w0 = 0xF2000000;
            temp_v0_28->words.w1 = 0x3C01C;
        } else {
            temp_v0_15 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_15[1];
            temp_v0_15->words.w1 = (u32) &D_06011070;
            temp_v0_15->words.w0 = 0xFD100000;
            temp_v0_16 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_16[1];
            temp_v0_16->words.w1 = 0x700C040;
            temp_v0_16->words.w0 = 0xF5100000;
            temp_v0_17 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_17[1];
            temp_v0_17->words.w1 = 0;
            temp_v0_17->words.w0 = 0xE6000000;
            temp_v0_18 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_18[1];
            temp_v0_18->words.w1 = 0x707F200;
            temp_v0_18->words.w0 = 0xF3000000;
            temp_v0_19 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_19[1];
            temp_v0_19->words.w1 = 0;
            temp_v0_19->words.w0 = 0xE7000000;
            temp_v0_20 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_20[1];
            temp_v0_20->words.w1 = 0xC040;
            temp_v0_20->words.w0 = 0xF5100800;
            temp_v0_21 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = &temp_v0_21[1];
            temp_v0_21->words.w0 = 0xF2000000;
            temp_v0_21->words.w1 = 0x3C01C;
        }
        temp_v0_29 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_29[1];
        temp_v0_29->words.w0 = 0xDE000000;
        temp_v0_29->words.w1 = (u32) sp2C;
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(0.0f, 0.0f, 500.0f, 1);
        if (phi_s1_2 == 0x15) {
            SysMatrix_MultiplyVector3fByState(&D_8090D608, &D_809101D8);
        }
        temp_s1_2 = phi_s1_2 + 1;
        phi_s1_2 = (s32) temp_s1_2;
    } while ((s32) temp_s1_2 < 0x16);
}

void func_80901480(Actor *arg0, GlobalContext *arg1) {
    f32 spE4;
    f32 spE0;
    s16 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spC8;
    void *spC0;
    ? spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    ? sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp70;
    ?32 sp64;
    ? sp58;
    ? sp48;
    void *sp40;
    f32 sp38;
    f32 sp34;
    Input *temp_v0_14;
    Input *temp_v1;
    PosRot *temp_s0_4;
    f32 *temp_a0;
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
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f18_4;
    f32 temp_f18_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f8;
    f32 temp_f8_2;
    s16 temp_s0;
    s16 temp_s0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s16 temp_v0_9;
    s32 temp_cond;
    s32 temp_lo;
    s8 temp_v0_12;
    s8 temp_v0_13;
    s8 temp_v0_8;
    u16 temp_t6;
    u16 temp_v0_10;
    u16 temp_v0_16;
    u8 temp_v0_11;
    u8 temp_v0_15;
    u8 temp_v0_17;
    u8 temp_v0_6;
    void *temp_s0_2;
    void *temp_t2;
    void *temp_t4;
    void *temp_t7;
    s16 phi_s0;
    ? *phi_t0;
    f32 phi_f16;
    f32 phi_f18;
    u16 phi_v0;
    Vec3f *phi_v1;
    s16 phi_s0_2;
    f32 phi_f18_2;
    f32 phi_f16_2;
    f32 phi_f16_3;
    f32 phi_f16_4;
    ? *phi_t0_2;
    f32 phi_f0;
    Vec3f *phi_v1_2;
    f32 phi_f12;
    s32 phi_v0_2;
    f32 phi_f0_2;

    temp_v0 = D_80917200;
    spC0 = arg1->actorCtx.actorList[2].first;
    spB4.unk_0 = (?32) D_8090D620.unk_0;
    spB4.unk_4 = (f32) D_8090D620.unk_4;
    D_809171FE += 1;
    spB4.unk_8 = (?32) D_8090D620.unk_8;
    if (temp_v0 != 0) {
        D_80917200 = temp_v0 - 1;
    }
    temp_v0_2 = D_80917202;
    if (temp_v0_2 != 0) {
        D_80917202 = temp_v0_2 - 1;
    }
    temp_v0_3 = D_80917204;
    if (temp_v0_3 != 0) {
        D_80917204 = temp_v0_3 - 1;
    }
    temp_v0_4 = D_80917272;
    if (temp_v0_4 != 0) {
        D_80917272 = temp_v0_4 - 1;
    }
    temp_v0_5 = D_809101CC;
    if (temp_v0_5 != 0) {
        D_809101CC = temp_v0_5 - 1;
    }
    temp_v0_6 = D_8090CD24;
    if (temp_v0_6 != 0) {
        D_8090CD24 = temp_v0_6 - 1;
    }
    temp_v0_7 = D_809171F4;
    if (temp_v0_7 != 0) {
        D_809171F4 = temp_v0_7 - 1;
    }
    temp_v0_8 = D_80917264;
    if (temp_v0_8 != 0) {
        D_80917264 = temp_v0_8 - 1;
    }
    if (D_809171FC == 1) {
        D_809171FC = 2;
        D_809171D8 = 0;
        D_809171D6 = 0;
        D_80917206 = 0;
        D_8090CCEC = (u8) (u32) (Rand_ZeroFloat(3.999f) + 1.0f);
        D_809101C4 = 520.0f;
        D_809101C0 = 195.0f;
        D_8090CD14 = 0;
        D_80917206 = 0;
        D_809171FE = 0;
        D_80917200 = 0;
        D_80917202 = 0;
        D_80917204 = 0;
        D_80917270 = 0;
        D_80917264 = 0;
        D_809101CC = 0;
        D_80917258 = 0.0f;
        D_809101D0 = D_80917258;
        D_80917254 = D_809101D0;
        D_80917278.x = spB4.unk_0;
        D_80917278.y = spB4.unk_4;
        D_80917278.z = spB4.unk_8;
        phi_s0 = 0;
        do {
            temp_lo = phi_s0 * 0xC;
            temp_s0 = phi_s0 + 1;
            temp_t4 = &D_809101E8 + temp_lo;
            temp_t4->unk_0 = (f32) spB4.unk_0;
            temp_t7 = &D_80910B48 + temp_lo;
            temp_t2 = &D_809114A8 + temp_lo;
            temp_t4->unk_4 = (f32) spB4.unk_4;
            temp_t4->unk_8 = (f32) spB4.unk_8;
            temp_t7->unk_0 = (f32) spB4.unk_0;
            temp_t7->unk_4 = (f32) spB4.unk_4;
            temp_t7->unk_8 = (f32) spB4.unk_8;
            temp_t2->unk_0 = (f32) spB4.unk_0;
            temp_t2->unk_4 = (f32) spB4.unk_4;
            temp_t2->unk_8 = (f32) spB4.unk_8;
            phi_s0 = temp_s0;
        } while ((s32) temp_s0 < 0xC8);
    }
    SkinMatrix_Vec3fMtxFMultXYZW(arg1 + 0x187B0, &D_80917208, &D_8090D614, &D_80911F24);
    if (D_8090CD14 == 0) {
        Math_ApproachF(&D_80917258, -800.0f, 1.0f, 20.0f);
    } else {
        Math_ApproachF(&D_80917258, 300.0f, 1.0f, 20.0f);
    }
    temp_t6 = (u16) D_8090CD14;
    phi_t0 = &D_80910B48;
    phi_t0_2 = &D_80910B48;
    switch (temp_t6) {
    case 0:
        D_80911F20 = 0;
        Math_ApproachF(&D_809101C0, 195.0f, 1.0f, 1.0f);
        if ((spC0->unk_A6C * 0x10) < 0) {
            D_80917204 = 0;
            spC0->unk_B28 = 0;
        }
        temp_v0_9 = D_80917204;
        if (temp_v0_9 == 0) {
            if ((D_80917200 == 0) && (spC0->unk_B28 == 1)) {
                D_80917204 = 0x25;
                func_801477B4(arg1);
                return;
            }
            /* Duplicate return node #171. Try simplifying control flow for better match */
            return;
        }
        (&D_80917228)[1] = D_80910B48.unk_94C;
        D_80917228.unk_0 = D_80910B48.unk_948 + 3.1415927f;
        if (temp_v0_9 == 0x12) {
            D_8090CD14 = 1;
            D_80917208.x = D_809101D8.x;
            D_80917208.y = D_809101D8.y;
            D_80917208.z = D_809101D8.z;
            SysMatrix_InsertYRotation_f(((f32) spC0->shape.rot.y / 32768.0f) * 3.1415927f, 0);
            temp_a0 = &sp90;
            sp90 = 0.0f;
            sp94 = 0.0f;
            sp98 = 25.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, &D_80917238);
            D_80917248.unk_8 = 0.0f;
            D_80917238.y = 15.0f;
            D_80917248.unk_0 = (f32) D_80917248.unk_8;
            D_80917248.unk_4 = -1.0f;
            D_809101C4 = 0.0f;
            D_80917202 = 5;
            D_8091726C = 0.5f;
            D_80917268 = (u8) (u32) Rand_ZeroFloat(1.9f);
            D_8090CD1C = 500.0f;
            func_8019F1C0(&D_8090D614, 0x1818U);
            return;
        }
    default:
        return;
    case 1:
        temp_f0 = D_80917238.x;
        temp_f18 = D_8091720C;
        spE0 = temp_f18;
        D_8091720C += temp_f0;
        temp_f2 = D_80917238.y;
        D_8091720C = temp_f18 + temp_f2;
        temp_f12 = D_80917238.z;
        D_80917210 += temp_f12;
        D_80917238.x = temp_f0 + D_80917248.unk_0;
        D_80917238.y = temp_f2 + D_80917248.unk_4;
        D_80917238.z = temp_f12 + D_80917248.unk_8;
        if ((~(arg1->state.input[0].cur.button | 0xFFFF7FFF) == 0) || (D_8090CD0C != 0)) {
            D_80917238.x *= 0.9f;
            D_80917238.z *= 0.9f;
            if (D_8090CD0C == 0) {
                play_sound(0x103EU);
                phi_t0 = &D_80910B48;
            }
        }
        temp_f16 = D_8091720C;
        temp_f18_2 = D_8091720C;
        temp_f10 = D_809101D8.x;
        temp_f8 = D_809101D8.y;
        temp_f6 = D_809101D8.z;
        temp_f14 = temp_f16 - temp_f10;
        temp_f10_2 = D_80917210;
        temp_f12_2 = temp_f10_2 - temp_f6;
        sp38 = temp_f16;
        sp34 = temp_f10_2;
        phi_f18 = temp_f18_2;
        phi_v1 = &D_80917238;
        if (D_80917202 != 0) {
            (&D_80917228)[1] = phi_t0->unk_94C;
            D_80917228.unk_0 = phi_t0->unk_948 + 3.1415927f;
        } else {
            spD4 = temp_f18_2 - temp_f8;
            spD0 = temp_f12_2;
            spD8 = temp_f14;
            D_80917228.unk_0 = 0.0f;
            (&D_80917228)[1] = Math_Acot2F(temp_f12_2, temp_f14) + 3.1415927f;
            sp38 = D_8091720C;
            sp34 = D_80917210;
            phi_f18 = D_8091720C;
            phi_v1 = &D_80917238;
        }
        temp_f16_2 = sqrtf(((temp_f16 - temp_f10) * (temp_f16 - temp_f10)) + ((temp_f18_2 - temp_f8) * (temp_f18_2 - temp_f8)) + ((temp_f10_2 - temp_f6) * (temp_f10_2 - temp_f6)));
        phi_f16 = temp_f16_2;
        phi_f18_2 = phi_f18;
        if (temp_f16_2 > 1000.0f) {
            phi_f16 = 1000.0f;
        }
        temp_f6_2 = sp38 * sp38;
        D_809101C0 = 200.0f - (phi_f16 * 200.0f * 0.001f);
        temp_f10_3 = sp34 * sp34;
        temp_f12_3 = temp_f6_2 + temp_f10_3;
        if (temp_f12_3 > 846400.0f) {
            temp_s0_2 = arg0 + 0x24;
            if ((phi_f18 > 160.0f) || (sp38 < 80.0f) || (sp38 > 180.0f) || (sp34 > 1350.0f) || (sp34 < 1100.0f) || (phi_f18 < 45.0f)) {
                sp80.unk_0 = (f32) temp_s0_2->unk_0;
                sp80.unk_4 = (f32) temp_s0_2->unk_4;
                sp80.unk_8 = (f32) temp_s0_2->unk_8;
                sp48.unk_0 = (f32) D_80917208.x;
                sp48.unk_4 = (f32) D_80917208.y;
                sp48.unk_8 = (f32) D_80917208.z;
                temp_s0_2->unk_0 = (f32) sp48.unk_0;
                temp_s0_2->unk_4 = (f32) sp48.unk_4;
                temp_s0_2->unk_8 = (f32) sp48.unk_8;
                arg0->prevPos.x = sp48.unk_0;
                arg0->prevPos.y = sp48.unk_4;
                arg0->prevPos.z = sp48.unk_8;
                spC8 = temp_f12_3;
                Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 30.0f, 30.0f, 0x43U);
                temp_s0_2->unk_0 = (f32) sp80.unk_0;
                temp_s0_2->unk_4 = (f32) sp80.unk_4;
                temp_s0_2->unk_8 = (f32) sp80.unk_8;
                temp_v0_10 = arg0->bgCheckFlags;
                phi_v0 = temp_v0_10;
                if ((temp_v0_10 & 0x10) != 0) {
                    D_80917238.y = -0.5f;
                    phi_v0 = arg0->bgCheckFlags;
                }
                if ((phi_v0 & 8) != 0) {
                    if (D_80917238.y > 0.0f) {
                        D_80917238.y = 0.0f;
                    }
                    D_80917238.z = 0.0f;
                    D_80917238.x = D_80917238.z;
                }
            } else {
                spC8 = temp_f12_3;
                if (func_808FEF70((bitwise void *) temp_f12_3, temp_f16 - temp_f10, &D_80917208, arg0) != 0) {
                    D_8090CD14 = 3;
                    D_809101D0 = 0.0f;
                }
            }
            temp_f2_2 = ((sqrtf(temp_f6_2 + temp_f10_3) - 920.0f) * 0.11f) + (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
            if (D_8091720C <= temp_f2_2) {
                D_8091720C = temp_f2_2;
                D_80917238.z = 0.0f;
                D_80917238.y = D_80917238.z;
                D_80917238.x = D_80917238.y;
                D_8090CD14 = 3;
                D_809101D0 = 0.0f;
            } else {
                Math_ApproachF(&D_809101C4, 0.0f, 1.0f, 0.05f);
                func_8019F1C0(&D_8090D614, 0x30A4U);
            }
            sp38 = D_8091720C;
            sp34 = D_80917210;
            phi_f18_2 = D_8091720C;
        } else {
            temp_f0_2 = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
            if (phi_f18 <= temp_f0_2) {
                D_8090CD14 = 2;
                D_809101D0 = 0.0f;
                phi_v1->z = 0.0f;
                phi_v1->x = phi_v1->z;
                if (D_80917206 == 2) {
                    D_809171F2 = 0;
                } else {
                    D_809171F2 = 0xA;
                }
                if ((phi_f18 <= temp_f0_2) && (temp_f0_2 < spE0) && (temp_f0_2 == (f32) arg1->colCtx.colHeader->waterBoxes->ySurface)) {
                    D_80917264 = 0xA;
                    func_8019F1C0(&D_8090D614, 0x2817U);
                    D_80917248.unk_4 = 0.0f;
                    sp40 = arg1 + 0x18000;
                    D_80917238.y *= 0.2f;
                    phi_s0_2 = 0;
                    do {
                        sp7C = Rand_ZeroFloat(1.5f) + 0.5f;
                        temp_f0_3 = Rand_ZeroFloat(6.28f);
                        sp78 = temp_f0_3;
                        sp9C = __sinf(temp_f0_3) * sp7C;
                        spA4 = __cosf(sp78) * sp7C;
                        spA0 = Rand_ZeroFloat(3.0f) + 3.0f;
                        spA8.unk_0 = D_80917208.x;
                        (&spA8)[1] = D_80917208.y;
                        (&spA8)[2] = D_80917208.z;
                        spA8 += sp9C * 3.0f;
                        spAC = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
                        spB0 += spA4 * 3.0f;
                        func_808FCABC(NULL, sp40->unk_870, &spA8, &sp9C, Rand_ZeroFloat(0.02f) + 0.025f);
                        temp_s0_3 = phi_s0_2 + 1;
                        phi_s0_2 = temp_s0_3;
                    } while ((s32) temp_s0_3 < 0x32);
                    spA8.unk_0 = D_80917208.x;
                    (&spA8)[1] = D_80917208.y;
                    (&spA8)[2] = D_80917208.z;
                    spAC = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
                    func_808FC964(NULL, sp40->unk_870, (bitwise f32) &spA8, 100.0f, (s16) 800.0f, (s16) 0x96, 0x5A);
                    sp38 = D_8091720C;
                    sp34 = D_80917210;
                    phi_f18_2 = D_8091720C;
                }
            } else {
                Math_ApproachZeroF(&D_809101C4, 1.0f, 0.05f);
                func_8019F1C0(&D_8090D614, 0x30A4U);
                sp38 = D_8091720C;
                sp34 = D_80917210;
                phi_f18_2 = D_8091720C;
            }
        }
        D_80910B3C = sp38;
        D_80910B44 = phi_f18_2;
        D_80910B44 = sp34;
        D_809101BC = 1.0f;
        D_8091725C = 0.5f;
        return;
    case 2:
        temp_f18_3 = D_80917208.y;
        if (temp_f18_3 <= (f32) arg1->colCtx.colHeader->waterBoxes->ySurface) {
            D_80917208.y = temp_f18_3 + D_80917238.y;
            Math_ApproachZeroF(&D_8091723C, 1.0f, 1.0f);
            if (D_80917206 != 2) {
                Math_ApproachF(&D_8091720C, (f32) arg1->colCtx.colHeader->waterBoxes->ySurface, 0.5f, 1.0f);
            }
        }
        Math_ApproachF(&D_809101C4, 2.0f, 1.0f, 0.1f);
        temp_v0_11 = D_809171F2;
        if (temp_v0_11 == 0) {
            D_8090CD14 = 3;
            return;
        }
        D_809171F2 = temp_v0_11 - 1;
        return;
    case 3:
        D_80911F20 = 0;
        if (D_8090CD0C != 0) {
            temp_f0_4 = D_80917208.x;
            temp_f2_3 = D_80917208.z;
            if (((temp_f0_4 * temp_f0_4) + (temp_f2_3 * temp_f2_3)) < 250000.0f) {
                D_8090CD10 = 1;
            }
        }
        spC0->unk_B28 = 2;
        if (D_809101B4 < 3.0f) {
            Math_ApproachF(&D_80917228, -0.5235988f + (Math_SinS((s16) (D_809171FE * 0x1060)) * D_8091725C), 0.3f, D_80917260);
            Math_ApproachF(&D_80917260, 0.5f, 1.0f, 0.02f);
            Math_ApproachZeroF(&D_8091725C, 1.0f, 0.02f);
            phi_t0_2 = &D_80910B48;
        } else {
            D_80917260 = 0.0f;
        }
        spDC = 0x4000;
        temp_f14_2 = D_80917208.x;
        sp34 = D_80917208.z;
        temp_f2_4 = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
        spE4 = temp_f2_4;
        temp_f12_4 = (temp_f14_2 * temp_f14_2) + (sp34 * sp34);
        if (temp_f12_4 < 846400.0f) {
            temp_f18_4 = D_80917208.y;
            if (temp_f18_4 <= (spE4 + 4.0f)) {
                temp_v1 = arg1->state.input;
                phi_f16_2 = 0.0f;
                if (D_809101CC == 0) {
                    temp_v0_12 = temp_v1->rel.stick_x;
                    if (fabsf((f32) temp_v0_12) > 30.0f) {
                        phi_f0_2 = (f32) (temp_v0_12 - D_8090CD44) * 0.016666668f;
                        goto block_92;
                    }
                    temp_v0_13 = temp_v1->rel.stick_y;
                    if (fabsf((f32) temp_v0_13) > 30.0f) {
                        phi_f0_2 = (f32) (temp_v0_13 - D_8090CD48) * 0.016666668f;
block_92:
                        phi_f16_2 = fabsf(phi_f0_2);
                    }
                }
                temp_v0_14 = arg1->state.input;
                phi_f16_3 = phi_f16_2;
                if (phi_f16_2 > 1.0f) {
                    phi_f16_3 = 1.0f;
                }
                if (~(temp_v0_14->press.button | ~0x4000) == 0) {
                    phi_f16_3 = 0.5f;
                }
                phi_f16_4 = phi_f16_3;
                if ((D_8090CD0C != 0) && (phi_f16_3 > 0.3f)) {
                    phi_f16_4 = 0.3f;
                }
                if ((phi_f16_4 > 0.2f) && (D_809101B4 < 4.0f)) {
                    D_809101CC = 5;
                    if (phi_f16_4 > 0.8f) {
                        D_80917270 = 2;
                    } else {
                        D_80917270 = 1;
                    }
                    sp38 = temp_f14_2;
                    sp90 = spC0->world.pos.x - sp38;
                    sp70 = phi_f16_4;
                    sp98 = spC0->world.pos.z - sp34;
                    temp_f0_5 = Math_Acot2F(sp98, sp90);
                    temp_f2_5 = D_809101BC;
                    sp94 = temp_f0_5;
                    temp_f0_6 = fabsf(phi_f16_4);
                    D_809101B0 = (phi_f16_4 * temp_f2_5) + temp_f0_5;
                    D_809101BC = temp_f2_5 * -1.0f;
                    D_809101B4 = temp_f0_6 * 6.0f;
                    D_80917228.unk_0 = 0.0f;
                    D_8091725C = 0.5f;
                    D_809101C0 += temp_f0_6 * 7.5f;
                    func_8019FAD8(&D_8090D614, 0x28C3U, (phi_f16_4 * 1.999f * 0.25f) + 0.75f);
                    if (D_80917206 == 2) {
                        temp_f8_2 = 5.0f * phi_f16_4;
                        *D_8091727C = temp_f8_2;
                        D_80910B40 += temp_f8_2;
                        D_8091720C += temp_f8_2;
                    }
                } else if (~(temp_v0_14->cur.button | 0xFFFF7FFF) == 0) {
                    spDC = 0x500;
                    D_809101B0 = phi_t0_2->unk_94C + 3.1415927f;
                    D_80917228.unk_0 = 0.0f;
                    D_8091725C = 0.5f;
                    if (D_80917206 == 2) {
                        *D_8091727C = 0.2f;
                        D_80910B40 += 0.2f;
                        D_80917208.y = temp_f18_4 + 0.2f;
                    }
                }
            } else {
                temp_f0_7 = D_809101C0;
                if (temp_f0_7 > 150.0f) {
                    D_80917228.unk_0 = phi_t0_2->unk_948 + 3.1415927f;
                    D_809101B0 = phi_t0_2->unk_94C + 3.1415927f;
                    D_809101C0 = temp_f0_7 + 2.0f;
                }
            }
        } else {
            temp_f6_3 = ((sqrtf(temp_f12_4) - 920.0f) * 0.11f) + temp_f2_4;
            temp_cond = D_80917208.y <= temp_f6_3;
            spE4 = temp_f6_3;
            if (temp_cond) {
                D_80917208.y = temp_f6_3;
                spDC = 0x500;
                D_809101B0 = phi_t0_2->unk_94C + 3.1415927f;
                D_80917228.unk_0 = 0.0f;
                if (~(arg1->state.input[0].press.button | ~0x4000) == 0) {
                    D_809101C0 = D_809101C0 + 6.0f;
                    func_8019F1C0(&D_8090D614, 0x801U);
                }
            } else {
                temp_f0_8 = D_809101C0;
                if (temp_f0_8 > 150.0f) {
                    D_80917228.unk_0 = phi_t0_2->unk_948 + 3.1415927f;
                    D_809101B0 = phi_t0_2->unk_94C + 3.1415927f;
                    D_809101C0 = temp_f0_8 + 2.0f;
                }
            }
        }
        sp40 = arg1 + 0x14;
        Math_ApproachZeroF(&D_809101B4, 1.0f, 0.3f);
        Math_ApproachS(&D_809101B8, (s16) (s32) ((D_809101B0 * 32768.0f) / 3.1415927f), 3, spDC);
        sp90 = 0.0f;
        sp94 = 0.0f;
        (&D_80917228)[1] = ((f32) D_809101B8 / 32768.0f) * 3.1415927f;
        sp98 = D_809101B4;
        SysMatrix_InsertYRotation_f((&D_80917228)[1], 0);
        if (D_80917206 == 2) {
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp90, (Vec3f *) &sp64);
            D_80917278.x = sp64;
            D_80917278.z = sp6C;
            phi_f0 = 10.0f;
        } else {
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp90, &D_80917278);
            phi_f0 = 0.0f;
        }
        D_80917254 = 0.0f;
        temp_v0_15 = D_80917206;
        phi_v1_2 = &D_80917278;
        if ((temp_v0_15 == 1) && (~(sp40->unk_0 | 0xFFFF7FFF) == 0)) {
            D_80917278.y = -2.0f;
            if ((D_809171FE & 1) != 0) {
                D_80917254 = 0.5f;
            } else {
                D_80917254 = -0.5f;
            }
            phi_f12 = D_80910B40;
        } else {
            temp_f12_5 = D_80910B40;
            temp_f2_6 = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
            phi_f12 = temp_f12_5;
            if (temp_f12_5 < (temp_f2_6 + phi_f0)) {
                if (temp_v0_15 == 2) {
                    temp_s0_4 = &arg0->world;
                    sp58.unk_0 = (f32) temp_s0_4->pos.x;
                    sp58.unk_4 = (f32) temp_s0_4->pos.y;
                    sp58.unk_8 = (f32) temp_s0_4->pos.z;
                    sp48.unk_0 = (f32) D_80917208.x;
                    sp48.unk_4 = (f32) D_80917208.y;
                    sp48.unk_8 = (f32) D_80917208.z;
                    temp_s0_4->pos.x = sp48.unk_0;
                    temp_s0_4->pos.y = sp48.unk_4;
                    temp_s0_4->pos.z = sp48.unk_8;
                    arg0->prevPos.x = sp48.unk_0;
                    arg0->prevPos.y = sp48.unk_4;
                    arg0->prevPos.z = sp48.unk_8;
                    Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 30.0f, 30.0f, 0x44U);
                    temp_s0_4->pos.x = sp58.unk_0;
                    temp_s0_4->pos.y = sp58.unk_4;
                    temp_s0_4->pos.z = sp58.unk_8;
                    D_80917278.y += -0.5f;
                    phi_v1_2 = &D_80917278;
                    if (D_80917278.y < -1.0f) {
                        D_80917278.y = -1.0f;
                    }
                    temp_f0_9 = arg0->floorHeight + 5.0f;
                    if (D_80917208.y < temp_f0_9) {
                        D_80917208.y = temp_f0_9;
                        D_80910B40 = D_80917208.y;
                        D_80917278.y = 0.0f;
                    } else {
                        D_80917270 = 1;
                    }
                    phi_f12 = D_80910B40;
                } else {
                    D_80917278.y = fabsf(temp_f12_5 - temp_f2_6) * 0.2f;
                    if (D_80917278.y > 1.5f) {
                        D_80917278.y = 1.5f;
                    }
                }
            }
        }
        D_809101E8.unk_954 = (f32) (D_809101E8.unk_954 + phi_v1_2->x);
        D_809101E8.unk_958 = (f32) (phi_f12 + phi_v1_2->y);
        temp_f12_6 = D_809101E8.unk_958;
        D_809101E8.unk_95C = (f32) (D_809101E8.unk_95C + phi_v1_2->z);
        if ((spE4 + 6.0f) < temp_f12_6) {
            D_809101E8.unk_958 = (f32) (temp_f12_6 - 5.0f);
        }
        D_80917248.unk_4 = 0.0f;
        D_80917238.z = D_80917248.unk_4;
        D_80917238.y = D_80917238.z;
        D_80917238.x = D_80917238.y;
        temp_v0_16 = sp40->unk_0;
        if (~(temp_v0_16 | 0xFFFF7FFF) == 0) {
            if (~(temp_v0_16 | ~0x10) == 0) {
                D_809101C0 += 1.5f;
                play_sound(0x103EU);
                Math_ApproachF(&D_809101D0, 1000.0f, 1.0f, 2.0f);
            } else {
                D_809101C0 += D_8091726C;
                play_sound(0x103DU);
                Math_ApproachF(&D_809101D0, 1000.0f, 1.0f, 0.2f);
            }
            if (((f32) arg1->colCtx.colHeader->waterBoxes->ySurface + 4.0f) < D_80910B40) {
                Math_ApproachF(&D_809101C4, 3.0f, 1.0f, 0.2f);
            } else {
                Math_ApproachF(&D_809101C4, 1.0f, 1.0f, 0.2f);
            }
        } else {
            Math_ApproachF(&D_809101C4, 2.0f, 1.0f, 0.2f);
        }
        Math_ApproachF((f32 *) &D_80917208, D_80910B3C, 1.0f, D_809101D0);
        Math_ApproachF(&D_8091720C, D_80910B40, 1.0f, D_809101D0);
        Math_ApproachF(&D_80917210, D_80910B44, 1.0f, D_809101D0);
        if (D_809101B4 > 1.0f) {
            Math_ApproachF(&D_809101D0, 1000.0f, 1.0f, 1.0f);
        }
        Math_ApproachF(&D_809101D0, 1000.0f, 1.0f, 0.1f);
        if (D_809101C0 >= 195.0f) {
            D_809101C0 = 195.0f;
            D_8090CD14 = 0;
            D_809101C4 = 520.0f;
            D_8090CD4C = 3;
        }
        temp_f18_5 = D_80917208.y;
        temp_f2_7 = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
        if ((temp_f18_5 <= (temp_f2_7 + 4.0f)) && ((temp_f2_7 - 4.0f) <= temp_f18_5)) {
            phi_v0_2 = 0x3F;
            if ((~(sp40->unk_0 | 0xFFFF7FFF) == 0) || (D_809101B4 > 1.0f)) {
                phi_v0_2 = 1;
            }
            if ((D_809171FE & phi_v0_2) == 0) {
                spA8.unk_0 = D_80917208.x;
                (&spA8)[1] = D_80917208.y;
                (&spA8)[2] = D_80917208.z;
                spAC = (f32) arg1->colCtx.colHeader->waterBoxes->ySurface;
                func_808FC964(NULL, arg1->specialEffects, (bitwise f32) &spA8, 30.0f, (s16) 300.0f, (s16) 0x96, 0x5A);
                return;
            }
            /* Duplicate return node #171. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #171. Try simplifying control flow for better match */
        return;
    case 4:
        temp_v0_17 = arg0->unk_14F;
        if (temp_v0_17 != 0) {
            arg0->unk_14F = (u8) (temp_v0_17 - 1);
            D_809101C0 += D_8091726C;
        }
        if (~(arg1->state.input[0].cur.button | 0xFFFF7FFF) == 0) {
            temp_f0_10 = D_80917208.x;
            temp_f2_8 = D_80917208.z;
            if (((temp_f0_10 * temp_f0_10) + (temp_f2_8 * temp_f2_8)) > 846400.0f) {
                D_809101C0 += 1.0f;
            } else {
                D_809101C0 += D_8091726C;
            }
            play_sound(0x103DU);
        }
        if (((D_809171FE & 0x1F) == 0) && ((D_80917274 != 0) || (D_80917206 != 2))) {
            D_8090CD24 = 5;
        }
        Math_ApproachF(&D_809101C4, 0.0f, 1.0f, 0.2f);
        return;
    case 5:
        D_809101C8 = 0.0005000001f;
        D_809101E8.unk_954 = (f32) D_80917208.x;
        D_809101E8.unk_958 = (f32) D_80917208.y;
        D_809101E8.unk_95C = (f32) D_80917208.z;
        D_809101C4 = 2.0f;
        /* Duplicate return node #171. Try simplifying control flow for better match */
        return;
    }
}

s32 func_809033F0(EnFishing *arg0, EnFishing *arg1, s32 arg2) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 *temp_s1;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f24;
    s16 temp_s0;
    void *temp_s2;
    s32 phi_s6;
    f32 phi_f26;
    s16 phi_s0;

    if ((arg0->actor.world.pos.y < ((f32) arg1[1].unk_2E8->unk_28->unk_2 - 10.0f)) && ((arg2 & 0xFF) == 0)) {
        return 0;
    }
    temp_s2 = arg0 + 0x24;
    temp_s5 = &sp98;
    phi_s6 = 0x28;
    if (arg0->unk_1A4 >= 40.0f) {
        phi_f26 = 1.2f;
    } else {
        phi_s6 = 0x1E;
        phi_f26 = 1.0f;
    }
    phi_s0 = 0;
    if (phi_s6 > 0) {
        temp_s1 = &spA4;
        do {
            temp_f20 = (Rand_ZeroFloat(1.5f) + 0.5f) * phi_f26;
            temp_f0 = Rand_ZeroFloat(6.28f);
            temp_f24 = temp_f0;
            sp98 = __sinf(temp_f0) * temp_f20;
            spA0 = __cosf(temp_f24) * temp_f20;
            sp9C = (Rand_ZeroFloat(3.0f) + 3.0f) * phi_f26;
            temp_s1->unk_0 = temp_s2->unk_0;
            temp_s1[1] = temp_s2->unk_4;
            temp_s1[2] = temp_s2->unk_8;
            spA4 += sp98 * 3.0f;
            spAC += spA0 * 3.0f;
            spA8 = (f32) arg1[1].unk_2E8->unk_28->unk_2;
            func_808FCABC(arg0 + 0xEC, arg1[74].unk_1A0, temp_s1, temp_s5, (Rand_ZeroFloat(0.02f) + 0.025f) * phi_f26);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while ((s32) temp_s0 < phi_s6);
    }
    spA4.unk_0 = arg0->actor.world.pos.x;
    (&spA4)[1] = arg0->actor.world.pos.y;
    (&spA4)[2] = arg0->actor.world.pos.z;
    spA8 = (f32) arg1[1].unk_2E8->unk_28->unk_2;
    func_808FC964(arg0 + 0xEC, arg1[74].unk_1A0, (bitwise f32) &spA4, 100.0f, (s16) 800.0f, (s16) 0x96, 0x5A);
    arg0->unk_149 = 0x1E;
    return 1;
}

void func_809036BC(EnFishing *arg0, GlobalContext *arg1) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *temp_s1;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f4;
    s16 temp_s0;
    void *temp_s2;
    s32 phi_s6;
    f32 phi_f28;
    s16 phi_s0;

    temp_s2 = arg0 + 0x24;
    temp_s5 = &sp88;
    phi_s6 = 0x14;
    if (arg0->unk_1A4 >= 45.0f) {
        phi_s6 = 0x1E;
        phi_f28 = 0.5f;
    } else {
        phi_f28 = 0.3f;
    }
    phi_s0 = 0;
    if (phi_s6 > 0) {
        temp_s1 = &sp94;
        do {
            temp_f20 = (Rand_ZeroFloat(1.5f) + 0.5f) * phi_f28;
            temp_f0 = Rand_ZeroFloat(6.28f);
            temp_f22 = temp_f0;
            sp88 = __sinf(temp_f0) * temp_f20;
            sp90 = __cosf(temp_f22) * temp_f20;
            temp_f18 = Rand_ZeroFloat(2.0f) + 2.0f;
            sp8C = temp_f18;
            temp_s1->unk_0 = temp_s2->unk_0;
            temp_s1[1] = temp_s2->unk_4;
            temp_s1[2] = temp_s2->unk_8;
            temp_f4 = sp98 + (temp_f18 * 3.0f);
            sp94 += sp88 * 3.0f;
            sp98 = temp_f4;
            sp9C += sp90 * 3.0f;
            func_808FCABC(arg0 + 0xEC, arg1->specialEffects, temp_s1, temp_s5, (Rand_ZeroFloat(0.02f) + 0.025f) * phi_f28);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while ((s32) temp_s0 < phi_s6);
    }
}

void func_809038A4(EnFishing *arg0, u16 *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    ? sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v0;
    EnFishing *phi_a2;
    f32 phi_f2;

    temp_v0 = D_8090CD14;
    sp34 = D_80917208.x - arg0->actor.world.pos.x;
    temp_f18 = D_80917208.y - arg0->actor.world.pos.y;
    sp38 = temp_f18;
    temp_f8 = D_80917208.z - arg0->actor.world.pos.z;
    sp3C = temp_f8;
    temp_f10 = temp_f8 * temp_f8;
    temp_f6 = (sp34 * sp34) + (temp_f18 * temp_f18);
    temp_f0 = temp_f6 + temp_f10;
    phi_a2 = arg0;
    phi_f2 = temp_f0;
    if ((temp_v0 == 3) && (arg0->unk_19A == 0) && (D_8090CD0C == 0)) {
        temp_f16 = (f32) -(s32) arg0->actor.shape.rot.y;
        sp24 = temp_f0;
        arg0 = arg0;
        SysMatrix_InsertYRotation_f((temp_f16 / 32768.0f) * 3.1415927f, 0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp34, (Vec3f *) &sp28);
        phi_a2 = arg0;
        phi_f2 = temp_f0;
        if ((sp30 > 0.0f) || (arg0->unk_1A4 < 40.0f)) {
            if ((arg0->unk_150 == 7) && (temp_f0 < 40000.0f)) {
                arg0->unk_150 = 4;
                arg0->unk_1AC = D_80917208.x;
                arg0->unk_1B0 = D_80917208.y;
                arg0->unk_1A8 = 28672.0f;
                arg0->unk_180 = 5.0f;
                arg0->unk_1B4 = D_80917208.z;
            } else {
                if (((~(*arg1 | 0xFFFF7FFF) == 0) || (D_809101B4 > 1.0f)) && (temp_f0 < 14400.0f)) {
                    arg0->unk_150 = 2;
                    arg0->unk_156 = 0;
                    arg0->unk_172 = 0;
                    sp24 = temp_f0;
                    arg0 = arg0;
                    arg0->unk_176 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 100.0f);
                    arg0->unk_1A8 = 0.0f;
                    arg0->unk_1A0 = *(&D_8090CD8C + (arg0->actor.params * 0x10));
                }
                phi_a2 = arg0;
                phi_f2 = temp_f6 + temp_f10;
                if ((arg0->unk_174 == 0) && ((temp_f6 + temp_f10) < 4900.0f)) {
                    arg0->unk_150 = 2;
                    arg0->unk_156 = 0;
                    arg0->unk_172 = 0;
                    sp24 = temp_f6 + temp_f10;
                    arg0 = arg0;
                    arg0->unk_176 = (s16) (s32) (Rand_ZeroFloat(100.0f) + 100.0f);
                    arg0->unk_1A8 = 0.0f;
                    arg0->unk_1A0 = *(&D_8090CD8C + (arg0->actor.params * 0x10));
                    phi_a2 = arg0;
                    phi_f2 = temp_f6 + temp_f10;
                }
            }
        }
    } else if ((temp_v0 == 4) && (D_80917274 != 0) && (temp_f0 < 10000.0f) && ((s32) arg0->unk_150 >= 0xA)) {
        arg0->unk_152 = 0;
        arg0->unk_150 = 1;
        arg0->unk_19C = 0x3E8;
        arg0->unk_19A = 0x64;
        arg0->unk_174 = 0x32;
    }
    if ((D_80917206 != 2) && (D_80917264 != 0) && (phi_a2->unk_1A4 > 60.0f) && (phi_f2 < 900.0f) && ((s32) phi_a2->unk_150 >= 0xA)) {
        phi_a2->unk_152 = 0;
        phi_a2->unk_150 = 1;
        phi_a2->unk_19C = 0x3E8;
        phi_a2->unk_19A = 0x64;
        phi_a2->unk_174 = 0x32;
    }
}

void func_80903C60(Actor *arg0, s32 arg1) {
    f32 temp_f4;
    s32 temp_f6;
    s32 phi_v1;
    u16 phi_a1;

    if (arg0->unk_148 == 0) {
        temp_f4 = arg0[1].scale.z;
        temp_f6 = (s32) temp_f4;
        if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
            if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                phi_v1 = ((s32) (temp_f4 - 2.1474836e9f) | 0x80000000) & 0xFF;
            } else {
                goto block_4;
            }
        } else if (temp_f6 >= 0) {
            phi_v1 = temp_f6 & 0xFF;
        } else {
block_4:
            phi_v1 = -1 & 0xFF;
        }
    } else {
        phi_v1 = (u32) (2.0f * arg0[1].scale.z) & 0xFF;
    }
    if ((arg1 & 0xFF) == 0) {
        if (phi_v1 >= 0x32) {
            phi_a1 = 0x2889U;
        } else if (phi_v1 >= 0x28) {
            phi_a1 = 0x2817U;
        } else {
            phi_a1 = 0x2817U;
        }
    } else if (phi_v1 >= 0x32) {
        phi_a1 = 0x288AU;
    } else {
        phi_a1 = 0x2808U;
        if (phi_v1 >= 0x28) {

        }
    }
    Audio_PlayActorSound2(arg0, phi_a1);
}

void func_80903E20(Actor *arg0, GlobalContext *arg1) {
    u32 temp_v0;
    u32 temp_v0_2;
    u8 temp_v0_3;

    if (D_809171C9 == 1) {
        temp_v0 = gSaveContext.roomInf[127][2];
        if ((temp_v0 & 0x7F) != 0) {
            if ((temp_v0 & 0x80) != 0) {
                arg0->textId = 0x40B1;
            } else {
                arg0->textId = 0x4089;
            }
        } else {
            arg0->textId = 0x40AE;
        }
    } else {
        temp_v0_2 = gSaveContext.roomInf[127][2];
        if ((temp_v0_2 & 0x7F000000) != 0) {
            if (temp_v0_2 & 0x80000000) {
                arg0->textId = 0x40B1;
            } else {
                arg0->textId = 0x4089;
            }
        } else {
            arg0->textId = 0x40AE;
        }
    }
    if (arg0->unk_1CB == 0) {
        temp_v0_3 = arg0->unk_1CC;
        if (temp_v0_3 == 0) {
            arg0->flags |= 1;
            if (func_800B84D0(arg0, arg1) != 0) {
                D_8090CCF8 = (u16) (u32) D_809171CC;
                arg0->unk_1CB = 1U;
                return;
            }
            func_800B863C(arg0, arg1);
            return;
        }
        arg0->unk_1CC = (u8) (temp_v0_3 - 1);
        arg0->flags &= -2;
        return;
    }
    if (func_800B867C(arg0, arg1) != 0) {
        arg0->unk_1CB = 0U;
        arg0->unk_1CC = 0x14U;
    }
}

void EnFishing_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp136;
    s16 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    s16 spFE;
    s16 spFC;
    s16 spFA;
    s16 spF6;
    s16 spF4;
    s16 spF2;
    s16 spF0;
    s16 spEE;
    Actor *spE0;
    f32 spD8;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spBC;
    ? spB8;
    f32 spA4;
    u16 spA2;
    f32 sp88;
    ? sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s16 sp72;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp4C;
    PosRot *sp48;
    f32 *sp44;
    s16 *sp40;
    f32 *sp3C;
    Actor *temp_t0;
    Input *temp_t7;
    Input *temp_v1_5;
    MessageContext *temp_a0_6;
    MessageContext *temp_a0_7;
    SkelAnime *temp_a0_8;
    Vec3f *temp_a0_4;
    f32 *temp_a0_3;
    f32 *temp_a0_5;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_14;
    f32 temp_f0_15;
    f32 temp_f0_16;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f14_4;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f4;
    f32 temp_f8;
    s16 *temp_a0_2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_11;
    s16 temp_v0_16;
    s16 temp_v0_18;
    s16 temp_v0_20;
    s16 temp_v0_21;
    s16 temp_v0_22;
    s16 temp_v0_23;
    s16 temp_v0_26;
    s16 temp_v0_28;
    s16 temp_v0_2;
    s16 temp_v0_31;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s32 temp_f10_5;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_19;
    s8 temp_v0_17;
    u16 temp_v0_10;
    u16 temp_v0_13;
    u16 temp_v0_25;
    u8 temp_v0_12;
    u8 temp_v0_24;
    u8 temp_v0_27;
    u8 temp_v0_29;
    u8 temp_v0_30;
    u8 temp_v0_6;
    u8 temp_v1_4;
    void *temp_t1;
    void *temp_t3;
    void *temp_t5;
    void *temp_v1;
    s16 phi_v0;
    f32 phi_f0;
    f32 phi_f2;
    s16 phi_v0_2;
    s32 phi_v0_3;
    f32 phi_f2_2;
    f32 phi_f12;
    s32 phi_v0_4;
    s32 phi_v0_5;
    f32 phi_f2_3;
    f32 phi_f2_4;
    s32 phi_v0_6;
    f32 phi_f2_5;
    u16 phi_v0_7;
    s32 phi_a1;
    s16 phi_v1;
    s16 phi_a1_2;
    f32 phi_f2_6;
    f32 phi_f2_7;
    EnFishing *this = (EnFishing *) thisx;

    sp134 = 0xA;
    temp_t0 = globalCtx->actorCtx.actorList[2].first;
    this->actor.uncullZoneForward = 700.0f;
    this->actor.uncullZoneScale = 50.0f;
    if (this->unk_148 == 0) {
        sp118 = (temp_t0->speedXZ * 0.15f) + 0.25f;
    } else {
        sp118 = (temp_t0->speedXZ * 0.3f) + 0.25f;
    }
    if ((D_80917200 != 0) || (D_80911F44 != 0) || ((temp_t0->world.pos.z > 1150.0f) && (this->unk_150 != 0x64))) {
        this->actor.flags &= -2;
    } else {
        this->actor.flags |= 1;
        if (D_8090CD14 != 0) {
            temp_v0 = D_80917202;
            if (temp_v0 == 0) {
                this->actor.focus.pos.x = D_80917208.x;
                this->actor.focus.pos.y = D_80917208.y;
                this->actor.focus.pos.z = D_80917208.z;
            } else if (temp_v0 == 1) {
                D_8090CD4C = 1;
                D_80911F50 = 0.0f;
                D_809171DC = 2;
            }
        }
        this->actor.focus.pos.x = this->actor.world.pos.x;
        this->actor.focus.pos.y = this->actor.world.pos.y;
        this->actor.focus.pos.z = this->actor.world.pos.z;
    }
    this->unk_154 += 1;
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_7 = (u16) 0;
    do {
        temp_v1 = this + (phi_v0 * 2);
        temp_a0 = temp_v1->unk_172;
        if (temp_a0 != 0) {
            temp_v1->unk_172 = (s16) (temp_a0 - 1);
        }
        temp_v0_2 = phi_v0 + 1;
        phi_v0 = temp_v0_2;
    } while ((s32) temp_v0_2 < 4);
    temp_v0_3 = this->unk_19C;
    if (temp_v0_3 != 0) {
        this->unk_19C = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_19A;
    if (temp_v0_4 != 0) {
        this->unk_19A = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk_198;
    if (temp_v0_5 != 0) {
        this->unk_198 = temp_v0_5 - 1;
    }
    temp_v0_6 = this->unk_149;
    if (temp_v0_6 != 0) {
        this->unk_149 = temp_v0_6 - 1;
    }
    spE0 = temp_t0;
    Math_ApproachF(&this->unk_190, this->unk_188, 1.0f, 0.2f);
    if (this->unk_150 == 6) {
        Math_ApproachF(&this->unk_194, this->unk_18C, 0.2f, 200.0f);
    } else {
        phi_f0 = 1.0f;
        phi_f2 = 1.0f;
        if ((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface < this->actor.world.pos.y) {
            phi_f0 = 1.5f;
            phi_f2 = 3.0f;
        }
        Math_ApproachF(&this->unk_194, this->unk_18C * phi_f0, 1.0f, 500.0f * phi_f2);
    }
    temp_a0_2 = &this->unk_168;
    sp40 = temp_a0_2;
    Math_ApproachS(temp_a0_2, 0, 5, 0x1F4);
    if (this->unk_148 == 0) {
        Actor_SetScale((Actor *) this, this->unk_1A4 * 15.0f * 0.00001f);
        this->unk_184 += this->unk_190;
        this->unk_164 = (s16) (s32) ((f32) this->unk_166 + (__cosf(this->unk_184) * this->unk_194));
        this->unk_16E = (s16) (s32) ((f32) this->unk_166 + (__cosf(this->unk_184 + -1.2f) * this->unk_194 * 1.6f));
    } else {
        Actor_SetScale((Actor *) this, this->unk_1A4 * 65.0f * 0.000001f);
        temp_f0 = this->actor.scale.z * 1.1f;
        this->actor.scale.x = temp_f0;
        this->actor.scale.y = temp_f0;
        this->unk_184 += this->unk_190 * 0.8f;
        do {
            sp136 = phi_v0_2;
            temp_v0_7 = phi_v0_2 + 1;
            (this + (phi_v0_2 * 2))->unk_1C4 = (s16) (s32) ((f32) this->unk_166 + (2.0f * (__cosf(this->unk_184 + ((f32) phi_v0_2 * 2.1f)) * this->unk_194)));
            phi_v0_2 = temp_v0_7;
        } while ((s32) temp_v0_7 < 3);
        this->unk_164 = (s16) (s32) (2.0f * (this->unk_194 * __cosf(this->unk_184 + 0.4f)) * 0.6f);
    }
    temp_f14 = this->unk_1AC - this->actor.world.pos.x;
    sp12C = this->unk_1B0 - this->actor.world.pos.y;
    sp130 = temp_f14;
    temp_f12 = this->unk_1B4 - this->actor.world.pos.z;
    sp128 = temp_f12;
    spFC = Math_FAtan2F(temp_f12, temp_f14);
    temp_f2 = (sp130 * sp130) + (sp128 * sp128);
    temp_f12_2 = sqrtf(temp_f2);
    sp4C = temp_f2;
    temp_v0_8 = Math_FAtan2F(temp_f12_2, sp12C);
    spFE = temp_v0_8;
    sp124 = sqrtf(temp_f2 + (sp12C * sp12C));
    if (this->unk_198 != 0) {
        temp_v1_2 = this->unk_150;
        if ((temp_v1_2 != 2) && (temp_v1_2 != 3) && (temp_v1_2 != 4)) {
            temp_v1_3 = this->unk_154;
            if ((temp_v1_3 & 0x40) != 0) {
                spFC += 0x4000;
            } else {
                spFC += -0x4000;
            }
            if (((temp_v1_3 + 0x20) & 0x40) != 0) {
                spFE = temp_v0_8 + 0x2000;
            } else {
                spFE = temp_v0_8 - 0x2000;
            }
        }
    }
    temp_v0_9 = this->unk_150;
    if ((s32) temp_v0_9 >= 0xC) {
        if (temp_v0_9 != 0x64) {
            goto block_403;
        }
        func_80903E20((bitwise Actor *) sp12C, (GlobalContext *) this, globalCtx);
        this->actor.uncullZoneForward = 500.0f;
        this->actor.uncullZoneScale = 300.0f;
        Lights_PointNoGlowSetInfo(&this->unk_218, (s16) (s32) this->actor.world.pos.x, (s16) (s32) (this->actor.world.pos.y + 20.0f), (s16) (s32) (this->actor.world.pos.z - 50.0f), (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0xFF);
        this->unk_1A4 = D_809171CC;
        sp48 = globalCtx + 0x18000;
        sp104 = Math_SinS((s16) (globalCtx->gameplayFrames * 0x12C));
        sp108 = 2.0f * Math_SinS((s16) (sp48->unk_840 * 0xE6));
        this->actor.world.pos.x = 130.0f;
        temp_f2_2 = this->actor.projectedPos.z;
        this->actor.world.pos.y = 55.0f + sp104;
        this->actor.shape.rot.y = -0x8000;
        this->actor.world.pos.z = 1300.0f + sp108;
        if ((temp_f2_2 < 200.0f) && (temp_f2_2 > 0.0f)) {
            temp_f8 = randPlusMinusPoint5Scaled(5.0f) + 130.0f;
            spC8 = 40.0f;
            spC4 = temp_f8;
            spCC = randPlusMinusPoint5Scaled(5.0f) + 1280.0f;
            func_808FCDBC(NULL, sp48[108].pos.x, &spC4, Rand_ZeroFloat(0.02f) + 0.03f, (u8) 1);
        }
        Math_ApproachS(&this->unk_16A, (s16) (s32) ((Math_SinS((s16) (this->unk_154 << 0xB)) * 2500.0f) + 2500.0f), 2, 0x7D0);
        Math_ApproachS(&this->unk_16C, (s16) (s32) (Math_SinS((s16) (this->unk_154 * 0xA00)) * 1500.0f), 2, 0x7D0);
        this->unk_188 = 0.3f;
        this->unk_18C = 333.33334f;
        return;
    }
    switch (temp_v0_9) {
    case 10:
        this->unk_1AC = this->actor.home.pos.x;
        this->unk_1B0 = this->actor.home.pos.y;
        this->unk_1B4 = this->actor.home.pos.z;
        Math_ApproachF(&this->actor.speedXZ, 2.0f, 1.0f, 0.5f);
        Math_ApproachF(&this->unk_1A8, 4096.0f, 1.0f, 256.0f);
        if (sp124 < 40.0f) {
            this->unk_150 = 0xB;
            this->unk_188 = 0.4f;
            this->unk_18C = 500.0f;
        }
        func_809038A4(this, (u16 *) globalCtx->state.input);
        if (this->actor.xzDistToPlayer < (250.0f * sp118)) {
            this->unk_150 = 0;
            this->unk_19C = 0x3E8;
            this->unk_19A = 0xC8;
            this->unk_174 = 0x32;
            this->unk_152 = this->unk_150;
        }
        break;
    case 11:
        this->unk_1AC = this->actor.home.pos.x;
        this->unk_1B0 = this->actor.home.pos.y;
        this->unk_1B4 = this->actor.home.pos.z;
        Math_ApproachF(&this->actor.speedXZ, 0.0f, 1.0f, 0.05f);
        Math_ApproachF(&this->unk_1A8, 0.0f, 1.0f, 256.0f);
        if (sp124 >= 40.0f) {
            this->unk_150 = 0xA;
            this->unk_188 = 1.0f;
            this->unk_18C = 2000.0f;
        }
        func_809038A4(this, (u16 *) globalCtx->state.input);
        if (this->actor.xzDistToPlayer < (250.0f * sp118)) {
            this->unk_150 = 0;
            this->unk_19C = 0x3E8;
            this->unk_19A = 0xC8;
            this->unk_174 = 0x32;
            this->unk_152 = this->unk_150;
        }
        if (func_80152498(&globalCtx->msgCtx) == 0) {
            temp_v0_10 = gSaveContext.time;
            phi_v0_3 = (s32) temp_v0_10;
            if (((s32) temp_v0_10 >= 0xC000) && ((s32) temp_v0_10 < 0xC01C)) {
                this->unk_150 = 7;
                this->unk_178 = (s16) (s32) (Rand_ZeroFloat(150.0f) + 200.0f);
                phi_v0_3 = (s32) gSaveContext.time;
            }
            if ((phi_v0_3 >= 0x3AAA) && (phi_v0_3 < 0x3AC6)) {
                this->unk_150 = 7;
                this->unk_178 = (s16) (s32) (Rand_ZeroFloat(150.0f) + 200.0f);
            }
        }
        break;
    case 0:
        Math_ApproachF(&this->actor.speedXZ, 1.0f, 1.0f, 0.05f);
        Math_ApproachF(&this->unk_1A8, 0.0f, 1.0f, 256.0f);
        if (this->unk_172 == 0) {
            if (this->unk_19C == 0) {
                this->unk_152 = 0xA;
                this->unk_150 = this->unk_152;
            } else {
                this->unk_150 = 1;
                this->unk_172 = (s16) (s32) (Rand_ZeroFloat(30.0f) + 10.0f);
                this->unk_1AC = randPlusMinusPoint5Scaled(300.0f);
                this->unk_1B0 = ((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface - 50.0f) - Rand_ZeroFloat(50.0f);
                this->unk_1B4 = randPlusMinusPoint5Scaled(300.0f);
                this->unk_188 = 1.0f;
                this->unk_18C = 2000.0f;
            }
        }
        if (D_80917206 == 2) {
            func_809038A4(this, (u16 *) globalCtx->state.input);
        } else {
            this->actor.flags &= -2;
        }
        break;
    case 1:
        if (this->unk_148 == 1) {
            this->unk_150 = -1;
            this->unk_19C = 0x4E20;
            this->unk_19A = 0x4E20;
            this->unk_1AC = 0.0f;
            this->unk_1B0 = -140.0f;
            this->unk_1B4 = 0.0f;
        } else {
            temp_a0_3 = &this->unk_1A8;
            sp4C = (bitwise f32) temp_a0_3;
            Math_ApproachF(temp_a0_3, 4096.0f, 1.0f, 256.0f);
            if ((this->actor.xzDistToPlayer < (250.0f * sp118)) || (this->unk_174 != 0)) {
                Math_ApproachF(temp_a0_3, 8192.0f, 1.0f, 768.0f);
                Math_ApproachF(&this->actor.speedXZ, 4.2f, 1.0f, 0.75f);
                this->unk_172 = 0x14;
                this->unk_188 = 1.2f;
                this->unk_18C = 4000.0f;
            } else {
                this->unk_188 = 1.0f;
                this->unk_18C = 2000.0f;
                Math_ApproachF(&this->actor.speedXZ, 1.5f, 1.0f, 0.1f);
            }
            if ((this->unk_172 == 0) || (sp124 < 50.0f)) {
                this->unk_150 = 0;
                temp_f10 = Rand_ZeroFloat(30.0f) + 3.0f;
                this->unk_188 = 1.0f;
                this->unk_18C = 500.0f;
                this->unk_172 = (s16) (s32) temp_f10;
            }
            if (D_80917206 == 2) {
                func_809038A4(this, (u16 *) globalCtx->state.input);
            } else {
                this->actor.flags &= -2;
            }
        }
        break;
    case -1:
        Math_ApproachS(&this->unk_15E, 0, 0x14, 0x20);
        if ((this->actor.xzDistToPlayer < (250.0f * sp118)) || (this->unk_174 != 0)) {
            Math_ApproachF(&this->actor.speedXZ, 3.0f, 1.0f, 0.75f);
            this->unk_188 = 1.0f;
            this->unk_172 = 0x14;
            this->unk_18C = 4000.0f;
            Math_ApproachF(&this->unk_1A8, 4096.0f, 1.0f, 256.0f);
            if ((globalCtx->gameplayFrames & 0x1F) == 0) {
                this->unk_1AC = randPlusMinusPoint5Scaled(600.0f);
                this->unk_1B4 = randPlusMinusPoint5Scaled(600.0f);
                this->unk_1B0 = -120.0f;
            }
        } else if (sp124 > 50.0f) {
            this->unk_188 = 0.8f;
            this->unk_18C = 1500.0f;
            Math_ApproachF(&this->actor.speedXZ, 1.0f, 1.0f, 0.1f);
            Math_ApproachF(&this->unk_1A8, 2048.0f, 1.0f, 128.0f);
        } else {
            this->unk_188 = 0.4f;
            this->unk_18C = 500.0f;
            Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 0.02f);
            Math_ApproachF(&this->unk_1A8, 0.0f, 1.0f, 256.0f);
        }
        temp_v0_11 = this->unk_19C;
        if (temp_v0_11 == 0) {
            this->unk_150 = 0xA;
            this->unk_152 = 0xA;
        } else if (((temp_v0_11 & 0x7FF) == 0) && ((s32) temp_v0_11 < 0x3A98)) {
            this->actor.shape.rot.x = 0;
            this->unk_150 = -2;
            this->actor.world.rot.x = this->actor.shape.rot.x;
            this->unk_1B0 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface + 10.0f;
            this->unk_1AC = Rand_ZeroFloat(50.0f);
            this->unk_1B4 = Rand_ZeroFloat(50.0f);
        }
        this->actor.flags &= -2;
        break;
    case -2:
        if ((this->actor.xzDistToPlayer < (250.0f * sp118)) || (this->unk_174 != 0)) {
            this->unk_150 = -1;
            this->unk_1B0 = -120.0f;
        } else {
            this->unk_188 = 0.6f;
            this->unk_18C = 1000.0f;
            Math_ApproachS(&this->unk_15E, -0x1000, 0x14, 0x100);
            if (this->actor.world.pos.y < ((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface - 20.0f)) {
                Math_ApproachF(&this->actor.speedXZ, 0.5f, 1.0f, 0.1f);
                goto block_110;
            }
            Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 0.01f);
            if ((this->actor.speedXZ == 0.0f) || (((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface - 5.0f) < this->actor.world.pos.y)) {
                this->unk_1AC = Rand_ZeroFloat(300.0f);
                this->unk_1B4 = Rand_ZeroFloat(300.0f);
                this->unk_1B0 = this->actor.floorHeight + 10.0f;
                this->unk_150 = -0x19;
                this->unk_1A8 = 0.0f;
                spB8.unk_0 = (f32) this->unk_1B8;
                spB8.unk_4 = (f32) this->unk_1BC;
                temp_a0_4 = &this->actor.projectedPos;
                spB8.unk_8 = (f32) this->unk_1C0;
                sp48 = globalCtx + 0x18000;
                sp4C = (bitwise f32) temp_a0_4;
                spBC = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface;
                func_808FC964(temp_a0_4, globalCtx->specialEffects, (bitwise f32) &spB8, 10.0f, (s16) 300.0f, (s16) 0x96, 0x5A);
                func_808FC964(temp_a0_4, sp48[108].pos.x, (bitwise f32) &spB8, 30.0f, (s16) 400.0f, (s16) 0x96, 0x5A);
                Audio_PlayActorSound2((Actor *) this, 0x836U);
            } else {
block_110:
                Math_ApproachF(&this->unk_1A8, 2048.0f, 1.0f, 128.0f);
                this->actor.flags &= -2;
            }
        }
        break;
    case -25:
        if ((this->actor.xzDistToPlayer < (250.0f * sp118)) || (this->unk_174 != 0)) {
            this->unk_150 = -1;
            this->unk_1B0 = -120.0f;
        } else {
            Math_ApproachS(&this->unk_15E, 0x1000, 0x14, 0x6A);
            if (sp124 > 40.0f) {
                this->unk_188 = 0.7f;
                this->unk_18C = 1200.0f;
                Math_ApproachF(&this->actor.speedXZ, 0.5f, 1.0f, 0.01f);
                Math_ApproachF(&this->unk_1A8, 2048.0f, 1.0f, 128.0f);
            } else {
                this->unk_150 = -1;
            }
        }
        break;
    case 2:
        if (((this->actor.params + D_80917268) & 1) != 0) {
            sp10C = 10.0f;
        } else {
            sp10C = -10.0f;
        }
        sp110 = 0.0f;
        sp114 = 0.0f;
        SysMatrix_InsertYRotation_f(D_8091722C, 0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp10C, (Vec3f *) &sp100);
        this->unk_1AC = D_80917208.x + sp100;
        this->unk_1B4 = D_80917208.z + sp108;
        if (D_80917206 == 2) {
            this->unk_1B0 = D_80917208.y;
        } else if (this->unk_148 == 0) {
            this->unk_1B0 = D_80917208.y - 15.0f;
        } else {
            this->unk_1B0 = D_80917208.y - 5.0f;
        }
        temp_f0_2 = this->actor.floorHeight;
        if (this->unk_1B0 <= temp_f0_2) {
            this->unk_1B0 = temp_f0_2 + 3.0f;
        }
        if (D_80917206 != 2) {
            temp_f2_3 = this->unk_1B0;
            temp_f0_3 = this->actor.world.pos.y;
            if (temp_f2_3 < temp_f0_3) {
                Math_ApproachF(&this->actor.world.pos.y, temp_f2_3, 0.1f, (temp_f0_3 - temp_f2_3) * 0.1f);
            }
        }
        Math_ApproachF(&this->unk_1A8, 8192.0f, 1.0f, 384.0f);
        temp_t7 = globalCtx->state.input;
        sp4C = (bitwise f32) temp_t7;
        if (~(temp_t7->press.button | 0xFFFF7FFF) == 0) {
            this->unk_1A0 += 0.005f;
        }
        temp_v0_12 = D_80917270;
        if (temp_v0_12 != 0) {
            if (temp_v0_12 == 1) {
                this->unk_1A0 += 0.01f;
            } else {
                this->unk_1A0 += 0.05f;
            }
            D_80917270 = 0;
        }
        if (~(sp4C->unk_C | ~0x4000) == 0) {
            this->unk_1A0 += 0.008f;
        }
        if (sp124 < ((this->unk_1A4 * 0.5f) + 20.0f)) {
            if (this->unk_156 == 0) {
                this->unk_188 = 1.0f;
                this->unk_18C = 500.0f;
                this->unk_172 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 2.0f);
            }
            Math_ApproachF(&this->actor.speedXZ, -0.2f, 1.0f, 0.1f);
            this->unk_156 = 1;
        } else {
            if (this->unk_156 != 0) {
                this->unk_188 = 1.0f;
                this->unk_1A8 = 0.0f;
                this->unk_18C = 3000.0f;
            }
            Math_ApproachF(&this->actor.speedXZ, 3.0f, 1.0f, 0.15f);
            this->unk_156 = 0;
        }
        temp_f0_4 = this->unk_1A4;
        if (temp_f0_4 >= 60.0f) {
            phi_f2_6 = 0.3f;
        } else if (temp_f0_4 >= 45.0f) {
            phi_f2_6 = 0.6f;
        } else {
            phi_f2_6 = 1.0f;
        }
        temp_v0_13 = gSaveContext.time;
        phi_f2_2 = phi_f2_6;
        if (((s32) temp_v0_13 >= 0xB555) && ((s32) temp_v0_13 < 0xCAAB)) {
            phi_f2_2 = phi_f2_6 * 1.75f;
        } else if (((s32) temp_v0_13 >= 0x3555) && ((s32) temp_v0_13 < 0x4AAB)) {
            phi_f2_2 = phi_f2_6 * 1.5f;
        } else if (D_809171CA != 0) {
            phi_f2_2 = phi_f2_6 * 1.5f;
        } else if (((u32) D_8090CCD0 & 0xFF) != 0) {
            phi_f2_2 = phi_f2_6 * 3.0f;
        }
        temp_f0_5 = 0.03f * phi_f2_2;
        phi_f12 = temp_f0_5;
        if (D_80917206 == 2) {
            phi_f12 = temp_f0_5 * 5.0f;
        }
        if ((this->unk_172 == 1) || (sp120 = phi_f2_2, sp11C = phi_f12, (Rand_ZeroOne() < phi_f12))) {
            sp120 = phi_f2_2;
            if (Rand_ZeroOne() < (this->unk_1A0 * phi_f2_2)) {
                if (this->unk_148 == 0) {
                    this->unk_150 = 3;
                    this->unk_188 = 1.2f;
                    this->unk_18C = 5000.0f;
                    this->unk_172 = (s16) (s32) Rand_ZeroFloat(10.0f);
                } else {
                    this->unk_150 = -3;
                    this->unk_188 = 1.0f;
                    this->unk_172 = 0x28;
                    this->unk_18C = 3000.0f;
                }
                if (D_80917206 == 2) {
                    this->unk_180 = Rand_ZeroFloat(1.5f) + 3.0f;
                } else {
                    this->unk_180 = Rand_ZeroFloat(1.5f) + 4.5f;
                }
            }
        }
        if ((D_8090CD14 != 3) || (this->unk_176 == 0) || (temp_f2_4 = this->actor.world.pos.x, temp_f12_3 = this->actor.world.pos.z, (sqrtf((temp_f2_4 * temp_f2_4) + (temp_f12_3 * temp_f12_3)) > 800.0f))) {
            this->unk_150 = this->unk_152;
            this->unk_174 = (s16) (s32) (Rand_ZeroFloat(30.0f) + 50.0f);
            temp_f10_2 = Rand_ZeroFloat(10.0f) + 5.0f;
            this->unk_188 = 1.0f;
            this->unk_1A8 = 0.0f;
            this->unk_18C = 2000.0f;
            this->unk_172 = (s16) (s32) temp_f10_2;
        }
        if (this->actor.xzDistToPlayer < (100.0f * sp118)) {
            this->unk_150 = 0;
            this->unk_19C = 0x3E8;
            this->unk_19A = 0xC8;
            this->unk_174 = 0x32;
            this->unk_152 = this->unk_150;
        }
        break;
    case 3:
        this->unk_149 = 6;
        sp134 = 2;
        if ((((s32) spE0->world.pos.x + D_80917268) & 1) != 0) {
            sp10C = 30.0f;
        } else {
            sp10C = -30.0f;
        }
        sp114 = 30.0f;
        sp110 = 0.0f;
        SysMatrix_InsertYRotation_f(D_8091722C, 0);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp10C, (Vec3f *) &sp100);
        this->unk_1AC = D_80917208.x + sp100;
        this->unk_1B4 = D_80917208.z + sp108;
        this->unk_1A8 = 4096.0f;
        this->unk_1B0 = D_80917208.y - 10.0f;
        Math_ApproachF(&this->actor.speedXZ, this->unk_180 * 0.8f, 1.0f, 1.0f);
        if ((D_8090CD14 != 3) || (((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface + 5.0f) < D_80917208.y) || (temp_f2_5 = D_80917208.x, temp_f12_4 = D_80917208.z, (sqrtf((temp_f2_5 * temp_f2_5) + (temp_f12_4 * temp_f12_4)) > 800.0f))) {
            this->unk_172 = 0;
            this->unk_188 = 1.0f;
            this->unk_150 = this->unk_152;
            this->unk_18C = 2000.0f;
        } else if ((this->unk_172 == 0) || (sp124 < 30.0f)) {
            this->unk_150 = 4;
            this->unk_1AC = D_80917208.x;
            this->unk_1B0 = D_80917208.y;
            this->unk_1A8 = 16384.0f;
            this->unk_1B4 = D_80917208.z;
            this->unk_188 = 1.2f;
            this->unk_172 = 0x14;
            this->unk_18C = 5000.0f;
        }
        break;
    case 4:
        Math_ApproachF(&this->unk_1A8, 16384.0f, 1.0f, 4096.0f);
        Math_ApproachS(sp40, 0x4E20, 4, 0x1388);
        this->unk_149 = 0x32;
        sp134 = 2;
        this->unk_1AC = D_80917208.x;
        this->unk_1B0 = D_80917208.y;
        this->unk_1B4 = D_80917208.z;
        Math_ApproachF(&this->actor.speedXZ, this->unk_180, 1.0f, 1.0f);
        if ((D_8090CD14 != 3) || (this->unk_172 == 0) || (((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface + 5.0f) < D_80917208.y) || (temp_f2_6 = D_80917208.x, temp_f12_5 = D_80917208.z, (sqrtf((temp_f2_6 * temp_f2_6) + (temp_f12_5 * temp_f12_5)) > 800.0f))) {
            this->unk_172 = 0;
            this->unk_188 = 1.0f;
            this->unk_150 = this->unk_152;
            this->unk_18C = 2000.0f;
        } else if (sp124 < 10.0f) {
            if (func_809033F0((bitwise EnFishing *) temp_f12_5, this, (s32) globalCtx, 0) != 0) {
                func_80903C60((Actor *) this, 0);
            }
            this->unk_150 = 5;
            this->unk_188 = 1.2f;
            this->unk_174 = 0x96;
            this->unk_172 = 0;
            this->unk_176 = 0;
            this->unk_178 = 0x78;
            this->unk_18C = 5000.0f;
            D_8090CD14 = 4;
            D_809171F8 = this;
            D_8090CD1C = 500.0f - Rand_ZeroFloat(400.0f);
            if (D_80917206 == 2) {
                temp_f0_6 = this->unk_1A4;
                if (temp_f0_6 > 70.0f) {
                    phi_v0_4 = (s32) (Rand_ZeroFloat(20.0f) + 10.0f) << 0x10;
                } else if (temp_f0_6 > 60.0f) {
                    phi_v0_4 = (s32) (Rand_ZeroFloat(30.0f) + 20.0f) << 0x10;
                } else if (temp_f0_6 > 50.0f) {
                    phi_v0_4 = (s32) (Rand_ZeroFloat(30.0f) + 30.0f) << 0x10;
                } else {
                    phi_v0_4 = (s32) (Rand_ZeroFloat(40.0f) + 40.0f) << 0x10;
                }
                temp_v0_14 = phi_v0_4 >> 0x10;
                D_80917272 = (s16) temp_v0_14;
                D_809171F4 = (s16) temp_v0_14;
                func_8013EC44(0, 0x3C, (temp_v0_14 * 3) & 0xFF, 0xA);
            } else {
                temp_f0_7 = this->unk_1A4;
                if (temp_f0_7 > 70.0f) {
                    phi_v0_5 = (s32) (Rand_ZeroFloat(5.0f) + 10.0f) << 0x10;
                } else if (temp_f0_7 > 60.0f) {
                    phi_v0_5 = (s32) (Rand_ZeroFloat(5.0f) + 15.0f) << 0x10;
                } else if (temp_f0_7 > 50.0f) {
                    phi_v0_5 = (s32) (Rand_ZeroFloat(5.0f) + 17.0f) << 0x10;
                } else {
                    phi_v0_5 = (s32) (Rand_ZeroFloat(5.0f) + 25.0f) << 0x10;
                }
                temp_v0_15 = phi_v0_5 >> 0x10;
                D_80917272 = (s16) temp_v0_15;
                D_809171F4 = (s16) temp_v0_15;
                func_8013EC44(0, 0xB4, (temp_v0_15 * 3) & 0xFF, 0xA);
            }
            D_80917274 = 0;
            D_80917266 = 0x64;
            D_809171D4 = 0;
        }
        break;
    case -3:
        this->unk_149 = 0x32;
        this->unk_1AC = D_80917208.x;
        this->unk_1B0 = D_80917208.y;
        this->unk_1B4 = D_80917208.z;
        Math_ApproachF(&this->actor.speedXZ, 2.0f, 1.0f, 1.0f);
        if ((D_8090CD14 != 3) || (this->unk_172 == 0) || (temp_f16 = D_8091720C, temp_f14_2 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface, ((temp_f14_2 + 5.0f) < temp_f16)) || (temp_f2_7 = D_80917208.x, temp_f12_6 = D_80917210, (sqrtf((temp_f2_7 * temp_f2_7) + (temp_f12_6 * temp_f12_6)) > 800.0f))) {
            this->unk_172 = 0;
            this->unk_188 = 1.0f;
            this->unk_150 = this->unk_152;
            this->unk_18C = 2000.0f;
        } else if (sp124 < 10.0f) {
            if ((temp_f14_2 - 10.0f) < temp_f16) {
                Audio_PlayActorSound2((Actor *) this, 0x288AU);
                play_sound(0x836U);
            }
            func_809033F0(this, (EnFishing *) globalCtx, 0);
            this->unk_150 = 5;
            this->unk_188 = 1.2f;
            this->unk_174 = 0x96;
            this->unk_172 = 0;
            this->unk_176 = 0;
            this->unk_178 = 0x78;
            this->unk_18C = 5000.0f;
            D_8090CD14 = 4;
            D_809171F8 = this;
            if (D_80917206 == 2) {
                D_80917272 = 0x1E;
                D_809171F4 = 0x64;
                func_8013EC44(0, 0x3C, 0x5A, 0xA);
            } else {
                D_80917272 = 0x1E;
                D_809171F4 = 0x28;
                func_8013EC44(0, 0xB4, 0x5A, 0xA);
            }
            D_80917274 = 0;
            D_80917266 = 0x64;
            D_809171D4 = 0;
        }
        break;
    case 5:
        this->actor.uncullZoneForward = 1200.0f;
        this->actor.uncullZoneScale = 200.0f;
        D_809171D4 += 1;
        Math_ApproachS(sp40, 0x2AF8, 4, 0xBB8);
        D_809171F8 = this;
        Math_ApproachS(&spE0->shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 5, 0x500);
        temp_v1_4 = D_80917274;
        if (temp_v1_4 == 0) {
            temp_v0_16 = D_80911F20;
            if (((s32) temp_v0_16 < 0x14) && ((D_809171FE & 3) == 0)) {
                D_80911F20 = temp_v0_16 + 1;
            }
        }
        if (D_80917272 != 0) {
            temp_v1_5 = globalCtx->state.input;
            if ((temp_v1_4 == 0) && (((temp_v0_17 = temp_v1_5->rel.stick_y, (((s32) temp_v0_17 < -0x32) != 0)) && ((s32) D_8090CD48 >= -0x27)) || (~(temp_v1_5->press.button | 0xFFFF7FFF) == 0))) {
                if ((s32) temp_v0_17 < -0x32) {
                    temp_f0_8 = 40.0f - ((this->unk_1A4 - 30.0f) * 1.333333f);
                    if (temp_f0_8 > 0.0f) {
                        this->unk_14A = (u8) (u32) temp_f0_8;
                        this->unk_14C = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
                        this->unk_14E = 1;
                    }
                }
                this->unk_190 = 1.7f;
                this->unk_194 = 7000.0f;
                D_80917274 = 1;
                func_801A89A8(0x881A);
                D_809171F6 = 0;
                if (this->unk_148 == 1) {
                    phi_f2_3 = (this->unk_1A4 * 3.0f) + 120.0f;
                } else {
                    phi_f2_3 = (2.0f * this->unk_1A4) + 120.0f;
                }
                phi_f2_4 = phi_f2_3;
                if (phi_f2_3 > 255.0f) {
                    phi_f2_4 = 255.0f;
                }
                func_8013EC44(0, (u32) phi_f2_4 & 0xFF, 0x78, 5);
                D_809171F4 = 0x28;
                D_80911E28 = 0xA;
                play_sound(0x184AU);
            }
        }
        sp4C = (bitwise f32) globalCtx->state.input;
        if (this->actor.world.pos.y < (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface) {
            if ((s32) this->unk_174 >= 0x1F) {
                phi_v0_6 = 7;
            } else {
                phi_v0_6 = 0xF;
            }
            if ((this->unk_154 & phi_v0_6) == 0) {
                sp48 = (PosRot *) phi_v0_6;
                if ((Rand_ZeroOne() < 0.75f) && (D_809171F4 == 0)) {
                    temp_f0_9 = this->unk_1A4;
                    if (temp_f0_9 >= 70.0f) {
                        phi_f2_7 = 255.0f;
                    } else if (temp_f0_9 >= 60.0f) {
                        phi_f2_7 = 230.0f;
                    } else if (temp_f0_9 >= 50.0f) {
                        phi_f2_7 = 200.0f;
                    } else if (temp_f0_9 >= 40.0f) {
                        phi_f2_7 = 170.0f;
                    } else {
                        phi_f2_7 = 140.0f;
                    }
                    phi_f2_5 = phi_f2_7;
                    if (sp48 == 0xF) {
                        phi_f2_5 = phi_f2_7 * 0.75f;
                    }
                    spA4 = phi_f2_5;
                    func_8013EC44(0, (u32) phi_f2_5 & 0xFF, (u32) (Rand_ZeroFloat(5.0f) + 10.0f) & 0xFF, 5);
                }
            }
            temp_v0_18 = this->unk_174;
            if ((s32) temp_v0_18 >= 0x1F) {
                if (this->unk_172 == 0) {
                    sp10C = 0.0f;
                    sp110 = 0.0f;
                    sp114 = 200.0f;
loop_266:
                    spA2 = phi_v0_7;
                    SysMatrix_InsertYRotation_f(randPlusMinusPoint5Scaled(2.3561945f) + (((f32) (this->actor.yawTowardsPlayer + 0x8000) / 32768.0f) * 3.1415927f), 0);
                    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp10C, (Vec3f *) &sp100);
                    this->unk_1AC = this->actor.world.pos.x + sp100;
                    temp_f0_10 = this->unk_1AC;
                    this->unk_1B4 = this->actor.world.pos.z + sp108;
                    temp_f2_8 = this->unk_1B4;
                    if (!(((temp_f0_10 * temp_f0_10) + (temp_f2_8 * temp_f2_8)) < 562500.0f)) {
                        temp_v0_19 = (phi_v0_7 + 1) & 0xFFFF;
                        phi_v0_7 = (u16) temp_v0_19;
                        if (temp_v0_19 < 0x64) {
                            goto loop_266;
                        }
                    }
                    if ((Rand_ZeroOne() < 0.1f) && (this->unk_178 == 0)) {
                        temp_f0_11 = this->unk_1A4;
                        if (temp_f0_11 >= 60.0f) {
                            phi_a1 = 0xFF;
                        } else if (temp_f0_11 >= 50.0f) {
                            phi_a1 = 0xC8;
                        } else {
                            phi_a1 = 0xB4;
                        }
                        func_8013EC44(0, phi_a1, 0x5A, 2);
                        this->unk_172 = 0x14;
                        this->unk_174 = 0x64;
                        this->unk_176 = 0x14;
                        this->unk_178 = 0x64;
                        this->unk_1B0 = 300.0f;
                        D_809171F4 = 0x28;
                        D_80917266 = (s16) (s32) (Rand_ZeroFloat(30.0f) + 20.0f);
                    } else {
                        temp_f4 = Rand_ZeroFloat(10.0f) + 3.0f;
                        this->unk_176 = 0;
                        this->unk_172 = (s16) (s32) temp_f4;
                        this->unk_1B0 = -70.0f - Rand_ZeroFloat(150.0f);
                    }
                }
                if (this->unk_176 != 0) {
                    D_8091726C = 0.0f;
                    this->unk_188 = 1.6f;
                    this->unk_18C = 6000.0f;
                    Math_ApproachF(&this->actor.speedXZ, 7.5f, 1.0f, 1.0f);
                    Math_ApproachS(sp40, 0x4E20, 2, 0xFA0);
                } else {
                    if ((D_80917274 == 0) && (D_80917206 == 2)) {
                        this->unk_188 = 1.0f;
                        this->unk_18C = 2000.0f;
                        Math_ApproachF(&this->actor.speedXZ, 3.0f, 1.0f, 0.2f);
                    } else {
                        this->unk_188 = 1.4f;
                        this->unk_18C = 5000.0f;
                        Math_ApproachF(&this->actor.speedXZ, 5.0f, 1.0f, 0.5f);
                    }
                    if (this->unk_148 == 0) {
                        D_8091726C = 1.0f - (this->unk_1A4 * 0.00899f);
                    } else {
                        D_8091726C = 1.0f - (this->unk_1A4 * 0.00899f * 1.4f);
                    }
                }
            } else {
                if (((temp_v0_18 & 0xF) == 0) && (~(sp4C->unk_0 | 0xFFFF7FFF) == 0) && (!(this->unk_1A4 >= 60.0f) || ((s32) D_809171D4 >= 0x7D0))) {
                    this->unk_14A = (u8) (u32) (Rand_ZeroFloat(30.0f) + 15.0f);
                    this->unk_14C = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
                }
                this->unk_188 = 1.0f;
                this->unk_18C = 4500.0f;
                if (this->unk_148 == 0) {
                    D_8091726C = 1.3f - (this->unk_1A4 * 0.00899f);
                } else {
                    D_8091726C = 1.3f - (this->unk_1A4 * 0.00899f * 1.4f);
                }
                Math_ApproachF(&this->actor.speedXZ, 2.0f, 1.0f, 0.5f);
                if (this->unk_174 == 0) {
                    this->unk_14A = 0;
                    temp_v0_20 = D_809171D4;
                    if ((s32) temp_v0_20 < 0x7D0) {
                        this->unk_174 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 50.0f);
                    } else if ((s32) temp_v0_20 < 0xBB8) {
                        this->unk_174 = (s16) (s32) (Rand_ZeroFloat(20.0f) + 30.0f);
                    } else {
                        this->unk_174 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 25.0f);
                    }
                }
            }
        }
        if (D_809171C8 != 0) {
            D_8091726C = 0.0f;
        }
        if ((D_80917274 != 0) || (D_80917206 != 2)) {
            temp_v0_21 = D_809171FE;
            if (this->actor.speedXZ < 3.0f) {
                if ((temp_v0_21 & 8) != 0) {
                    sp100 = -0.8f;
                } else {
                    sp100 = -0.75f;
                }
            } else if ((temp_v0_21 & 4) != 0) {
                sp100 = -0.9f;
            } else {
                sp100 = -0.85f;
            }
            Math_ApproachF(&D_8090CD40, 35.0f, 0.1f, 3.5f);
            Math_ApproachF(&D_8090CD3C, sp100, 0.3f, 0.1f);
        }
        D_80910B3C.unk_0 = this->unk_1B8;
        (&D_80910B3C)[1] = this->unk_1BC;
        (&D_80910B3C)[2] = this->unk_1C0;
        temp_f2_9 = D_809101E8.unk_948;
        temp_f10_3 = D_809101E8.unk_954 - temp_f2_9;
        sp10C = temp_f10_3;
        sp110 = D_809101E8.unk_958 - D_809101E8.unk_94C;
        sp114 = D_809101E8.unk_95C - D_809101E8.unk_950;
        if (((temp_f10_3 * temp_f10_3) + (sp110 * sp110) + (sp114 * sp114)) > 400.0f) {
            Math_ApproachF((f32 *) &this->actor.world, temp_f2_9, 0.2f, 2.0f * (this->actor.speedXZ * 1.5f));
            Math_ApproachF(&this->actor.world.pos.y, D_809101E8.unk_94C, 0.2f, 2.0f * (this->actor.speedXZ * 1.5f) * 5.0f * 0.1f);
            Math_ApproachF(&this->actor.world.pos.z, D_809101E8.unk_950, 0.2f, 2.0f * (this->actor.speedXZ * 1.5f));
        }
        temp_v1_6 = D_80917272;
        phi_v1 = temp_v1_6;
        if ((~(sp4C->unk_0 | 0xFFFF7FFF) == 0) || ((s32) sp4C->unk_15 < -0x1E)) {
            temp_v0_23 = D_80917266;
            if ((s32) temp_v0_23 < 0x64) {
                D_80917266 = temp_v0_23 + 1;
            }
        } else {
            temp_v0_22 = D_80917266;
            if (temp_v0_22 != 0) {
                D_80917266 = temp_v0_22 - 1;
            }
        }
        if (((s32) D_8090CD14 >= 3) && ((D_809171C8 == 0) || ((s32) D_809171D4 < 0x33)) && ((s32) D_809171D4 < 0x1770) && ((temp_v1_6 != 0) || (D_80917274 != 0)) && (D_80917266 != 0)) {
            if (((D_809171FE & 0x7F) == 0) && (Rand_ZeroOne() < 0.05f) && (D_80917206 != 2)) {
                phi_v1 = D_80917272;
                goto block_331;
            }
            if (this->actor.xzDistToPlayer < 50.0f) {
                this->unk_150 = 6;
                this->unk_172 = 0x64;
                spE0->unk_B28 = 3;
                func_8013EC44(0, 1, 3, 1);
                D_809171D8 += 1;
                func_800EA0D4(globalCtx, &globalCtx->csCtx);
                D_8090CD4C = 0x64;
                D_80911F48 = 45.0f;
                D_8090CD14 = 5;
                this->unk_188 = 1.0f;
                this->unk_18C = 500.0f;
                this->unk_194 = 5000.0f;
                if (this->actor.world.pos.y <= (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface) {
                    func_80903C60((Actor *) this, 1);
                    func_809033F0(this, (EnFishing *) globalCtx, 1);
                }
            case 6:
                sp3C = &this->actor.world.pos.z;
                sp44 = &this->actor.world.pos.y;
                sp48 = &this->actor.world;
                Math_ApproachS(sp40, 0x2AF8, 2, 0xFA0);
                Math_ApproachF(&D_80911F48, 15.0f, 0.05f, 0.75f);
                sp10C = D_80911F48;
                if (D_809171C9 != 1) {
                    sp110 = 30.0f;
                    sp114 = 55.0f;
                } else {
                    sp110 = 10.0f;
                    sp114 = 50.0f;
                }
                SysMatrix_InsertYRotation_f(((f32) spE0->shape.rot.y / 32768.0f) * 3.1415927f, 0);
                SysMatrix_MultiplyVector3fByState((Vec3f *) &sp10C, &D_80911F28);
                D_80911F28.x += spE0->world.pos.x;
                D_80911F28.y += spE0->world.pos.y;
                D_80911F28.z += spE0->world.pos.z;
                D_80911F38.unk_0 = spE0->world.pos.x;
                (&D_80911F38)[1] = spE0->world.pos.y;
                (&D_80911F38)[2] = spE0->world.pos.z;
                if (D_809171C9 != 1) {
                    (&D_80911F38)[1] += 40.0f;
                } else {
                    (&D_80911F38)[1] += 25.0f;
                }
                if (this->unk_172 == 0x5A) {
                    func_801A89A8(0x8924);
                    D_8090CCFC = 0x28;
                    if (this->unk_148 == 0) {
                        D_8090CCF8 = (u16) (u32) this->unk_1A4;
                        temp_v0_25 = D_8090CCF8;
                        if ((s32) temp_v0_25 >= 0x4B) {
                            D_809171DA = 0x409F;
                        } else if ((s32) temp_v0_25 >= 0x32) {
                            D_809171DA = 0x4091;
                        } else {
                            D_809171DA = 0x4083;
                        }
                    } else {
                        D_8090CCF8 = (u16) (u32) (2.0f * this->unk_1A4);
                        D_809171DA = 0x4099;
                    }
                    this->unk_1CD = 0;
                }
                this->unk_158 = -0x4000;
                this->unk_166 = 0;
                temp_v0_26 = this->unk_166;
                this->actor.shape.rot.y = spE0->shape.rot.y + 0x5000;
                this->unk_15C = temp_v0_26;
                this->unk_15A = temp_v0_26;
                this->actor.shape.rot.z = temp_v0_26;
                this->actor.shape.rot.x = temp_v0_26;
                temp_a0_5 = &sp10C;
                sp10C = 4.0f;
                sp110 = -10.0f;
                sp114 = 5.0f;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_5, (Vec3f *) &sp100);
                Math_ApproachF((f32 *) sp48, (bitwise f32) spE0[9].draw + sp100, 1.0f, 6.0f);
                Math_ApproachF(sp44, (bitwise f32) spE0[9].overlayEntry + sp104, 1.0f, 6.0f);
                Math_ApproachF(sp3C, spE0->unk_CA8 + sp108, 1.0f, 6.0f);
                D_809101C0 = 188.0f;
                if ((s32) this->unk_172 < 0x33) {
                    temp_v0_27 = this->unk_1CD;
                    if (temp_v0_27 != 0) {
                        if (temp_v0_27 != 1) {

                        } else {
                            temp_a0_6 = &globalCtx->msgCtx;
                            sp4C = (bitwise f32) temp_a0_6;
                            if (((func_80152498(temp_a0_6) == 4) || (func_80152498(temp_a0_6) == 0)) && (func_80147624(globalCtx) != 0)) {
                                func_801477B4(globalCtx);
                                if (globalCtx->msgCtx.choiceIndex != 0) {
                                    temp_f0_12 = D_8090CCF0;
                                    D_8090CCF0 = this->unk_1A4;
                                    D_809171D2 = D_80917206;
                                    this->unk_1A4 = temp_f0_12;
                                    this->unk_148 = D_809171D0;
                                }
                                goto block_383;
                            }
                        }
                    } else {
                        temp_a0_7 = &globalCtx->msgCtx;
                        sp4C = (bitwise f32) temp_a0_7;
                        if (((func_80152498(temp_a0_7) == 4) || (func_80152498(temp_a0_7) == 0)) && (func_80147624(globalCtx) != 0)) {
                            func_801477B4(globalCtx);
                            if (globalCtx->msgCtx.choiceIndex == 0) {
                                temp_f0_13 = D_8090CCF0;
                                if (temp_f0_13 == 0.0f) {
                                    D_8090CCF0 = this->unk_1A4;
                                    D_809171D0 = this->unk_148;
                                    D_809171D2 = D_80917206;
                                    Actor_MarkForDeath((Actor *) this);
                                } else if ((this->unk_148 == 0) && (D_809171D0 == 0) && ((s32) (s16) (s32) this->unk_1A4 < (s32) (s16) (s32) temp_f0_13)) {
                                    this->unk_1CD = 1;
                                    this->unk_172 = 0x3C;
                                    func_801518B0(globalCtx, 0x4098U, NULL);
                                } else {
                                    D_8090CCF0 = this->unk_1A4;
                                    D_809171D0 = this->unk_148;
                                    D_809171D2 = D_80917206;
                                    this->unk_1A4 = temp_f0_13;
                                    this->unk_148 = D_809171D0;
                                }
                            }
                            if (this->unk_1CD == 0) {
block_383:
                                D_8090CD14 = 0;
                            }
                        }
                    }
                }
                if (D_8090CD14 == 0) {
                    if (this->actor.update != 0) {
                        this->unk_152 = 0;
                        this->unk_19C = 0x2710;
                        this->unk_19A = 0x1F4;
                        this->unk_174 = 0x32;
                        this->unk_172 = 0;
                        this->unk_188 = 1.0f;
                        temp_a0_8 = &this->unk_1D0;
                        this->unk_150 = this->unk_152;
                        this->unk_18C = 2000.0f;
                        sp4C = (bitwise f32) temp_a0_8;
                        SkelAnime_Free(temp_a0_8, globalCtx);
                        if (this->unk_148 == 0) {
                            SkelAnime_InitSV(globalCtx, (bitwise SkelAnime *) sp4C, &D_060029C0, &D_0600007C, NULL, NULL, 0);
                            SkelAnime_ChangeAnimTransitionRepeat((bitwise SkelAnime *) sp4C, &D_0600007C, 0.0f);
                        } else {
                            SkelAnime_InitSV(globalCtx, (bitwise SkelAnime *) sp4C, &D_06011058, &D_0600CFE0, NULL, NULL, 0);
                            SkelAnime_ChangeAnimTransitionRepeat((bitwise SkelAnime *) sp4C, &D_0600CFE0, 0.0f);
                        }
                    }
                    D_809101C4 = 520.0f;
                    D_809101C0 = 195.0f;
                    func_801A89A8(0x100A00FF);
                    D_809171F6 = 0x14;
                    D_8090CD4C = 3;
                }
            }
        } else {
block_331:
            if ((phi_v1 == 0) && (D_80917274 == 0)) {
                temp_v0_24 = D_809171C9;
                if (((temp_v0_24 != 1) || ((gSaveContext.roomInf[127][2] & 0x400) == 0)) && (temp_v0_24 != 1) && ((gSaveContext.roomInf[127][2] & 0x800) != 0)) {

                }
            } else {
                func_8013EC44(0, 1, 3, 1);
                func_801A89A8(0x100A00FF);
            }
            this->unk_152 = 0;
            this->unk_19C = 0x2710;
            this->unk_19A = 0x1F4;
            this->unk_174 = 0x32;
            this->unk_172 = 0;
            this->unk_188 = 1.0f;
            this->unk_150 = this->unk_152;
            this->unk_18C = 3000.0f;
            if (D_8090CD14 == 4) {
                D_8090CD14 = 3;
            }
            D_809171F6 = 0x32;
            D_8091726C = 0.5f;
            this->unk_14A = 0;
        }
        break;
    case 7:
        this->unk_149 = 0x32;
        sp134 = 5;
        temp_v0_28 = this->actor.params;
        this->unk_1A8 = 12288.0f;
        if ((s32) temp_v0_28 < 0x68) {
            temp_t3 = (temp_v0_28 * 0x48) - 0x1C1C + &D_80914048;
            this->unk_1AC = temp_t3->unk_0;
            this->unk_1B0 = temp_t3->unk_4;
            this->unk_1B4 = temp_t3->unk_8;
            D_8090CF18 = 1;
        } else if ((s32) temp_v0_28 < 0x6C) {
            temp_t1 = (temp_v0_28 * 0x48) - 0x179C + &D_80914048;
            this->unk_1AC = temp_t1->unk_0;
            this->unk_1B0 = temp_t1->unk_4;
            this->unk_1B4 = temp_t1->unk_8;
            D_8090CF18 = 2;
        } else {
            temp_t5 = (temp_v0_28 * 0x48) - 0x131C + &D_80914048;
            this->unk_1AC = temp_t5->unk_0;
            this->unk_1B0 = temp_t5->unk_4;
            this->unk_1B4 = temp_t5->unk_8;
            D_8090CF18 = 3;
        }
        Math_ApproachF(&this->actor.speedXZ, 5.0f, 1.0f, 1.0f);
        if (sp124 < 20.0f) {
            Math_ApproachS(sp40, 0x4E20, 2, 0xFA0);
            if ((this->unk_176 == 0) && (func_809033F0(this, (EnFishing *) globalCtx, 0) != 0)) {
                func_80903C60((Actor *) this, (u32) Rand_ZeroFloat(1.99f) & 0xFF);
                this->unk_176 = (s16) (s32) (Rand_ZeroFloat(20.0f) + 20.0f);
            }
        }
        if (this->unk_178 == 0) {
            this->unk_150 = 0xA;
            this->unk_152 = 0xA;
        } else {
            func_809038A4(this, (u16 *) globalCtx->state.input);
            if (this->actor.xzDistToPlayer < (100.0f * sp118)) {
                this->unk_150 = 0;
                this->unk_19C = 0x1F4;
                this->unk_19A = 0xC8;
                this->unk_174 = 0x32;
                this->unk_152 = this->unk_150;
            }
        }
        break;
    }
block_403:
    Math_ApproachS(&this->unk_16A, (s16) (s32) ((Math_SinS((s16) (this->unk_154 << 0xC)) * 5000.0f) + 5000.0f), 2, 0x7D0);
    if (this->unk_150 != 6) {
        if ((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface < this->actor.world.pos.y) {
            this->unk_188 = 1.5f;
            this->unk_18C = 5000.0f;
            Math_ApproachS(&this->unk_166, 0, 5, 0x7D0);
            spF4 = 3;
            spF0 = 3;
            spFA = 3;
            spF2 = 0x2000;
            spEE = 0x2000;
            this->unk_176 = 0;
            this->unk_17C -= 1.0f;
        } else {
            Math_ApproachZeroF(&this->unk_17C, 1.0f, 2.0f);
            temp_v1_7 = this->unk_150;
            if ((temp_v1_7 != -1) && (temp_v1_7 != -2) && (temp_v1_7 != -0x19)) {
                this->unk_15E = 0;
            }
            this->unk_162 = 0;
            this->unk_160 = this->unk_162;
            spF4 = 4;
            spF0 = 4;
            spFA = 4;
            spF2 = 0x2000;
            spEE = 0x2000;
            spF6 = (s16) (s32) ((f32) func_808FC8B8(&this->actor.world.rot.y, spFC, sp134, (s16) (s32) this->unk_1A8) * 3.0f);
            Math_ApproachS((s16 *) &this->actor.world.rot, spFE, sp134, (s16) (s32) (this->unk_1A8 * 0.5f));
            phi_a1_2 = spF6;
            if ((s32) spF6 >= 0x1F41) {
                phi_a1_2 = 0x1F40;
            } else if ((s32) spF6 < -0x1F40) {
                phi_a1_2 = -0x1F40;
            }
            if (this->actor.speedXZ >= 3.2f) {
                Math_ApproachS(&this->unk_166, phi_a1_2, 2, 0x4E20);
            } else {
                Math_ApproachS(&this->unk_166, phi_a1_2, 3, 0xBB8);
            }
            Actor_SetVelocityXYRotation((Actor *) this);
        }
        Actor_ApplyMovement((Actor *) this);
        temp_v0_29 = this->unk_14A;
        this->actor.world.pos.y += this->unk_17C * 1.5f;
        if (temp_v0_29 != 0) {
            this->unk_14A = temp_v0_29 - 1;
            this->unk_160 = this->unk_14C;
            if (this->unk_14E != 0) {
                spF0 = 5;
                spEE = 0x4000;
            } else {
                spF0 = 0xA;
                spEE = 0x800;
            }
            this->unk_15E = -0x500 - this->actor.shape.rot.x;
            spF4 = 5;
            spF2 = 0x4000;
        } else {
            this->unk_14E = 0;
        }
        Math_ApproachS(&this->unk_158, this->unk_15E, spF4, spF2);
        Math_ApproachS(&this->unk_15A, this->unk_160, spF0, spEE);
        Math_ApproachS(&this->unk_15C, this->unk_162, spFA, 0x2000);
        if (this->actor.speedXZ <= 0.5f) {
            Math_ApproachS((s16 *) &this->actor.shape, 0, 0xA, this->unk_170);
            Math_ApproachS(&this->unk_170, 0x500, 1, 0x20);
        } else {
            Math_ApproachS((s16 *) &this->actor.shape, (s16) ((s32) this->actor.world.rot.x * -1), 0xA, 0x1000);
            this->unk_170 = 0;
        }
        temp_v1_8 = this->unk_150;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        if ((temp_v1_8 != -1) && (temp_v1_8 != -2) && (temp_v1_8 != -0x19)) {
            temp_f0_14 = this->actor.world.pos.y;
            temp_f14_3 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface;
            if ((temp_f14_3 < temp_f0_14) && (this->actor.prevPos.y <= temp_f14_3)) {
                func_809033F0(this, (EnFishing *) globalCtx, 1);
                func_80903C60((Actor *) this, 1);
                this->unk_17C = this->actor.velocity.y;
                this->actor.velocity.y = 0.0f;
                this->unk_162 = (s16) (s32) randPlusMinusPoint5Scaled(32768.0f);
            } else if ((temp_f0_14 < temp_f14_3) && (temp_f14_3 <= this->actor.prevPos.y)) {
                if (this->unk_17C < -5.0f) {
                    this->unk_17C = -5.0f;
                }
                this->actor.world.rot.x = -0xFA0;
                func_809033F0(this, (EnFishing *) globalCtx, 1);
                this->unk_1CA = 0x14;
                func_80903C60((Actor *) this, 0);
            }
        }
        temp_f0_15 = this->actor.world.pos.y;
        temp_f14_4 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface;
        if ((temp_f0_15 < temp_f14_4) && ((temp_f14_4 - 10.0f) < temp_f0_15) && ((this->unk_154 & 1) == 0) && (this->actor.speedXZ > 0.0f)) {
            sp84.unk_0 = (f32) this->actor.world.pos.x;
            sp84.unk_4 = (f32) this->actor.world.pos.y;
            sp84.unk_8 = (f32) this->actor.world.pos.z;
            sp88 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface;
            func_808FC964(&this->actor.projectedPos, globalCtx->specialEffects, (bitwise f32) &sp84, 80.0f, (s16) 500.0f, (s16) 0x96, 0x5A);
        }
        if ((this->actor.speedXZ > 0.0f) || (this->unk_150 == 5)) {
            temp_f10_4 = this->unk_1A4;
            temp_f0_16 = temp_f10_4 * 0.1f;
            temp_f2_10 = this->actor.velocity.y;
            this->actor.world.pos.y -= temp_f0_16;
            this->actor.velocity.y = -1.0f;
            this->actor.prevPos.y -= temp_f0_16;
            if (gGameInfo->data[1338] == 0) {
                spD8 = temp_f0_16;
                sp80 = temp_f2_10;
                Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 30.0f, 100.0f, 0x45U);
            }
            this->actor.velocity.y = temp_f2_10;
            this->actor.world.pos.y += temp_f10_4 * 0.1f;
            this->actor.prevPos.y += temp_f10_4 * 0.1f;
            if ((this->actor.bgCheckFlags & 8) != 0) {
                this->unk_198 = 0x14;
            }
            if ((this->actor.bgCheckFlags & 1) != 0) {
                if ((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface < this->actor.world.pos.y) {
                    this->unk_17C = Rand_ZeroFloat(3.0f) + 3.0f;
                    this->actor.velocity.x = this->actor.world.pos.x * -0.003f;
                    this->actor.velocity.z = this->actor.world.pos.z * -0.003f;
                    Audio_PlayActorSound2((Actor *) this, 0x2869U);
                    func_809036BC(this, globalCtx);
                    if (Rand_ZeroOne() < 0.5f) {
                        this->unk_162 = 0x4000;
                    } else {
                        this->unk_162 = -0x4000;
                    }
                    if (Rand_ZeroOne() < 0.5f) {
                        this->unk_15E = 0;
                    } else {
                        this->unk_15E = (s32) randPlusMinusPoint5Scaled(32.0f) + 0x8000;
                    }
                    temp_f10_5 = (s32) randPlusMinusPoint5Scaled(16384.0f);
                    this->unk_188 = 1.0f;
                    this->unk_160 = (s16) temp_f10_5;
                    this->unk_18C = 5000.0f;
                    this->unk_194 = 5000.0f;
                } else {
                    this->unk_17C = 0.0f;
                    if ((this->unk_150 == 5) && ((this->unk_154 & 1) == 0)) {
                        sp4C = (bitwise f32) &this->actor.projectedPos;
                        sp48 = globalCtx + 0x18000;
                        sp74 = randPlusMinusPoint5Scaled(10.0f) + this->actor.world.pos.x;
                        sp7C = randPlusMinusPoint5Scaled(10.0f) + this->actor.world.pos.z;
                        sp78 = this->actor.floorHeight + 5.0f;
                        func_808FCC0C((bitwise void *) sp4C, (bitwise void *) sp48[108].pos.x, &sp74, (this->unk_1A4 * 0.005f) + 0.15f);
                    }
                }
            }
        }
    }
    temp_v0_30 = this->unk_1CA;
    if (temp_v0_30 != 0) {
        this->unk_1CA = temp_v0_30 - 1;
        sp4C = (bitwise f32) &this->actor.projectedPos;
        sp48 = globalCtx + 0x18000;
        sp72 = 0;
        sp60 = (this->unk_1A4 * 0.075f) + 10.0f;
        do {
            sp64 = randPlusMinusPoint5Scaled(sp60) + this->actor.world.pos.x;
            sp68 = randPlusMinusPoint5Scaled(sp60) + this->actor.world.pos.y;
            sp6C = randPlusMinusPoint5Scaled(sp60) + this->actor.world.pos.z;
            func_808FCDBC((bitwise void *) sp4C, (bitwise void *) sp48[108].pos.x, &sp64, Rand_ZeroFloat(0.035f) + 0.04f, (u8) 0);
            temp_v0_31 = sp72 + 1;
            sp72 = temp_v0_31;
        } while ((s32) temp_v0_31 < 2);
    }
}

s32 func_80908554(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xD) {
        arg4->z = (arg4->z - arg5->unk_168) + 0x2AF8;
    } else if ((arg1 == 2) || (arg1 == 3)) {
        arg4->y += arg5[1].unk20;
    } else if (arg1 == 4) {
        arg4->y += arg5->unk_16E;
    } else if (arg1 == 0xE) {
        arg4->y -= arg5->unk_16A;
    } else if (arg1 == 0xF) {
        arg4->y += arg5->unk_16A;
    } else if (arg1 == 8) {
        arg4->y += arg5->unk_16C;
    } else if (arg1 == 9) {
        arg4->y -= arg5->unk_16C;
    }
    return 0;
}

void func_80908674(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xD) {
        SysMatrix_MultiplyVector3fByState(&D_8090CD18, arg4 + 0x1B8);
    }
}

s32 func_809086B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 3) {
        arg4->y += arg5->unk_1C4;
    } else if (arg1 == 4) {
        arg4->y += arg5->unk_1C6;
    } else if (arg1 == 5) {
        arg4->y += arg5->unk_1C8;
    }
    return 0;
}

void func_80908734(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xB) {
        SysMatrix_MultiplyVector3fByState(&D_8090D62C, arg4 + 0x1B8);
    }
}

void EnFishing_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnFishing *this = (EnFishing *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    SysMatrix_InsertYRotation_f(((f32) (this->unk_15A + this->actor.shape.rot.y) / 32768.0f) * 3.1415927f, 1);
    SysMatrix_RotateStateAroundXAxis(((f32) (this->unk_158 + this->actor.shape.rot.x) / 32768.0f) * 3.1415927f);
    SysMatrix_InsertZRotation_f(((f32) (this->unk_15C + this->actor.shape.rot.z) / 32768.0f) * 3.1415927f, 1);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    if (this->unk_148 == 0) {
        SysMatrix_InsertYRotation_f(((f32) this->unk_164 * 0.0000958738f) - 1.5707964f, 1);
        SysMatrix_InsertTranslation(0.0f, 0.0f, (f32) this->unk_164 * 10.0f * 0.01f, 1);
        SkelAnime_DrawSV(globalCtx, this->unk_1D0.skeleton, this->unk_1D0.limbDrawTbl, (s32) this->unk_1D0.dListCount, func_80908554, func_80908674, (Actor *) this);
        return;
    }
    SysMatrix_InsertTranslation(0.0f, 0.0f, 3000.0f, 1);
    SysMatrix_InsertYRotation_f((f32) this->unk_164 * 0.0000958738f, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -3000.0f, 1);
    SysMatrix_InsertYRotation_f(-1.5707964f, 1);
    SkelAnime_DrawSV(globalCtx, this->unk_1D0.skeleton, this->unk_1D0.limbDrawTbl, (s32) this->unk_1D0.dListCount, func_809086B4, func_80908734, (Actor *) this);
}

void func_809089B8(Vec3f *arg0, void *arg1) {
    f32 sp1C;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f14 = arg0->x - arg1->unk_0;
    temp_f12 = arg0->z - arg1->unk_8;
    temp_f2 = sqrtf((temp_f14 * temp_f14) + (temp_f12 * temp_f12));
    if (temp_f2 <= 20.0f) {
        sp1C = temp_f2;
        arg0[1].y = Math_Acot2F(temp_f12, temp_f14);
        Math_ApproachF(arg0 + 0xC, (20.0f - temp_f2) * 0.03f, 0.2f, 0.2f);
    }
}

void func_80908A64(Vec3f *arg0, void *arg1, u8 arg2) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_cond;
    f32 phi_f0;

    temp_f14 = arg0->x - arg1->unk_0;
    temp_f12 = arg0->z - arg1->unk_8;
    temp_f0 = sqrtf((temp_f14 * temp_f14) + (temp_f12 * temp_f12));
    temp_cond = temp_f0 <= 40.0f;
    sp1C = temp_f0;
    if (temp_cond) {
        Math_ApproachS(arg0 + 0x28, Math_FAtan2F(temp_f12, temp_f14), 0xA, 0x300);
    }
    if ((arg2 != 0) && (sp1C <= 60.0f)) {
        phi_f0 = 1.0f;
        if ((s32) arg2 >= 0x15) {
            phi_f0 = 1.5f;
        }
        Math_ApproachF(arg0 + 0x2C, phi_f0, 0.1f, 0.2f);
    }
}

void func_80908B4C(GlobalContext *arg0) {
    f32 temp_f2;
    s16 temp_s4;
    s32 temp_s5;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    Vec3f *phi_s1;
    void *phi_s0;
    void *phi_s0_2;
    s16 phi_s4;

    temp_s5 = arg0->actorCtx.actorList[2].first;
    phi_s1 = (Vec3f *) &D_80911F78;
    phi_s4 = 0;
    do {
        if (phi_s1->unk_30 != 0) {
            phi_s1->unk_34 = 0;
            phi_s1->unk_32 = (s16) (phi_s1->unk_32 + 1);
            SkinMatrix_Vec3fMtxFMultXYZW(arg0 + 0x187B0, phi_s1, phi_s1 + 0x18, &D_80911F24);
            temp_f2 = phi_s1[2].z;
            if ((temp_f2 < phi_s1[4].z) && (fabsf(phi_s1[2].x) < (100.0f + temp_f2))) {
                phi_s1->unk_34 = 1;
            }
            if ((phi_s1[2].z < 500.0f) && (fabsf(phi_s1[2].x) < (100.0f + phi_s1[2].z))) {
                temp_v0 = phi_s1->unk_30;
                if (temp_v0 == 1) {
                    func_809089B8(phi_s1, temp_s5 + 0x24);
                    temp_s0 = arg0->actorCtx.actorList[4].first;
                    phi_s0 = temp_s0;
                    if (temp_s0 != 0) {
                        do {
                            if ((phi_s0->id != 0x79) || ((s32) phi_s0->params < 0x64)) {

                            } else {
                                func_809089B8(phi_s1, phi_s0 + 0x24);
                            }
                            temp_s0_2 = phi_s0->next;
                            phi_s0 = temp_s0_2;
                        } while (temp_s0_2 != 0);
                    }
                    Math_ApproachZeroF((f32 *) &phi_s1[1], 0.05f, 0.05f);
                } else if (temp_v0 == 2) {
                    func_80908A64(phi_s1, temp_s5 + 0x24, 0U);
                    temp_s0_3 = arg0->actorCtx.actorList[4].first;
                    phi_s0_2 = temp_s0_3;
                    if (temp_s0_3 != 0) {
                        do {
                            if ((phi_s0_2->id != 0x79) || ((s32) phi_s0_2->params < 0x64)) {

                            } else {
                                func_80908A64(phi_s1, phi_s0_2 + 0x24, phi_s0_2->unk_149);
                            }
                            temp_s0_4 = phi_s0_2->next;
                            phi_s0_2 = temp_s0_4;
                        } while (temp_s0_4 != 0);
                    }
                    Math_ApproachS((s16 *) &phi_s1[3].y, 0, 0x14, 0x50);
                    phi_s1->y = (Math_SinS((s16) (phi_s1->unk_32 << 0xC)) * phi_s1[3].z) + ((f32) arg0->colCtx.colHeader->unk_28->unk_2 + 2.0f);
                    Math_ApproachZeroF(&phi_s1[3].z, 0.1f, 0.02f);
                }
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s1 = &phi_s1[5];
        phi_s4 = temp_s4;
    } while ((s32) temp_s4 < 0x8C);
    if (D_80911F44 == 0) {
        CollisionCheck_SetOC(arg0, arg0 + 0x18884, (Collider *) &D_809171C4->unk_228);
    }
}

void func_80908E08(GraphicsContext **arg0) {
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
    GraphicsContext *temp_s2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s16 temp_s3_4;
    ? *phi_s0;
    s32 phi_s5;
    s16 phi_s3;
    ? *phi_s0_2;
    s32 phi_s5_2;
    s16 phi_s3_2;
    ? *phi_s0_3;
    s32 phi_s5_3;
    s16 phi_s3_3;
    ? *phi_s0_4;
    s32 phi_s5_4;
    s16 phi_s3_4;

    temp_s2 = *arg0;
    SysMatrix_StatePush();
    phi_s0 = &D_80911F78;
    phi_s5 = 0;
    phi_s3 = 0;
    phi_s5_2 = 0;
    phi_s3_2 = 0;
    phi_s5_3 = 0;
    phi_s3_3 = 0;
    phi_s5_4 = 0;
    phi_s3_4 = 0;
    do {
        if (phi_s0->unk_30 == 1) {
            if (phi_s5 == 0) {
                temp_v0 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = &D_06014030;
                temp_v0->words.w0 = 0xDE000000;
                phi_s5 = (phi_s5 + 1) & 0xFF;
            }
            if (phi_s0->unk_34 != 0) {
                SysMatrix_InsertTranslation(phi_s0->unk_0, phi_s0->unk_4, phi_s0->unk_8, 0);
                temp_f12 = phi_s0->unk_24;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                SysMatrix_InsertYRotation_f(phi_s0->unk_10, 1);
                SysMatrix_RotateStateAroundXAxis(phi_s0->unk_C);
                SysMatrix_InsertYRotation_f(phi_s0->unk_14, 1);
                temp_v0_2 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xDA380003;
                temp_v0_2->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_3 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = &temp_v0_3[1];
                temp_v0_3->words.w1 = (u32) &D_060140B0;
                temp_v0_3->words.w0 = 0xDE000000;
            }
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x3C;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x8C);
    phi_s0_2 = &D_80911F78;
    do {
        if (phi_s0_2->unk_30 == 4) {
            if (phi_s5_2 == 0) {
                temp_v0_4 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_4[1];
                temp_v0_4->words.w1 = (u32) &D_06013F50;
                temp_v0_4->words.w0 = 0xDE000000;
                phi_s5_2 = (phi_s5_2 + 1) & 0xFF;
            }
            if (phi_s0_2->unk_34 != 0) {
                SysMatrix_InsertTranslation(phi_s0_2->unk_0, phi_s0_2->unk_4, phi_s0_2->unk_8, 0);
                temp_f12_2 = phi_s0_2->unk_24;
                Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
                temp_v0_5 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_5[1];
                temp_v0_5->words.w0 = 0xDA380003;
                temp_v0_5->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_6 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_6[1];
                temp_v0_6->words.w1 = (u32) &D_06013FD0;
                temp_v0_6->words.w0 = 0xDE000000;
            }
        }
        temp_s3_2 = phi_s3_2 + 1;
        phi_s0_2 += 0x3C;
        phi_s3_2 = temp_s3_2;
    } while ((s32) temp_s3_2 < 0x8C);
    phi_s0_3 = &D_80911F78;
    do {
        if (phi_s0_3->unk_30 == 2) {
            if (phi_s5_3 == 0) {
                temp_v0_7 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = &temp_v0_7[1];
                temp_v0_7->words.w1 = (u32) &D_06013330;
                temp_v0_7->words.w0 = 0xDE000000;
                phi_s5_3 = (phi_s5_3 + 1) & 0xFF;
            }
            if (phi_s0_3->unk_34 != 0) {
                SysMatrix_InsertTranslation(phi_s0_3->unk_0, phi_s0_3->unk_4, phi_s0_3->unk_8, 0);
                temp_f12_3 = phi_s0_3->unk_24;
                Matrix_Scale(temp_f12_3, 1.0f, temp_f12_3, 1);
                SysMatrix_InsertYRotation_f((f32) phi_s0_3->unk_28 * 0.0000958738f, 1);
                SysMatrix_InsertTranslation(0.0f, 0.0f, 20.0f, 1);
                SysMatrix_InsertYRotation_f(phi_s0_3->unk_10, 1);
                temp_v0_8 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = &temp_v0_8[1];
                temp_v0_8->words.w0 = 0xDA380003;
                temp_v0_8->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_9 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = &temp_v0_9[1];
                temp_v0_9->words.w1 = (u32) &D_060133B0;
                temp_v0_9->words.w0 = 0xDE000000;
            }
        }
        temp_s3_3 = phi_s3_3 + 1;
        phi_s0_3 += 0x3C;
        phi_s3_3 = temp_s3_3;
    } while ((s32) temp_s3_3 < 0x8C);
    phi_s0_4 = &D_80911F78;
    do {
        if (phi_s0_4->unk_30 == 3) {
            if (phi_s5_4 == 0) {
                temp_v0_10 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_10[1];
                temp_v0_10->words.w1 = (u32) &D_06013590;
                temp_v0_10->words.w0 = 0xDE000000;
                phi_s5_4 = (phi_s5_4 + 1) & 0xFF;
            }
            if (phi_s0_4->unk_34 != 0) {
                SysMatrix_InsertTranslation(phi_s0_4->unk_0, phi_s0_4->unk_4, phi_s0_4->unk_8, 0);
                temp_f12_4 = phi_s0_4->unk_24;
                Matrix_Scale(temp_f12_4, temp_f12_4, temp_f12_4, 1);
                SysMatrix_InsertYRotation_f(phi_s0_4->unk_10, 1);
                temp_v0_11 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_11[1];
                temp_v0_11->words.w0 = 0xDA380003;
                temp_v0_11->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_12 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_12[1];
                temp_v0_12->words.w1 = (u32) &D_06013610;
                temp_v0_12->words.w0 = 0xDE000000;
            }
        }
        temp_s3_4 = phi_s3_4 + 1;
        phi_s0_4 += 0x3C;
        phi_s3_4 = temp_s3_4;
    } while ((s32) temp_s3_4 < 0x8C);
    SysMatrix_StatePop();
}

void func_80909234(GlobalContext *arg0) {
    s16 spF6;
    f32 spE8;
    f32 spE0;
    f32 spD8;
    f32 spD0;
    s16 spCE;
    s16 spCC;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp9C;
    ? sp98;
    void *sp78;
    Vec3f *temp_s4;
    Vec3f *temp_s5;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f22_5;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_s6;
    s32 temp_f10;
    void *temp_s1;
    Vec3f *phi_s2;
    ? *phi_s0;
    s32 phi_s6;
    s32 phi_s2_2;
    s16 phi_a1;
    s32 phi_s3;

    spF6 = 0;
    phi_s0 = &D_80914048;
    if ((D_80917264 != 0) || (phi_s2 = arg0->actorCtx.actorList[2].first + 0x24, (D_8090CD14 == 4))) {
        phi_s2 = &D_80917208;
    }
    temp_f4 = __sinf(D_80915128) * 720.0f;
    spA8 = -35.0f;
    spA4 = temp_f4;
    spAC = __cosf(D_80915128) * 720.0f;
    temp_f20 = phi_s2->x - spA4;
    temp_f22 = phi_s2->z - spAC;
    if (((temp_f20 * temp_f20) + (temp_f22 * temp_f22)) < 2500.0f) {
        D_80915128 += 0.3f;
        spF6 = 1;
    } else if (D_8090CF18 != 0) {
        D_80915128 += 0.05f;
        spA8 = (f32) arg0->colCtx.colHeader->unk_28->unk_2 - 5.0f;
    } else {
        Math_ApproachF(&D_80915128, 0.7f, 1.0f, 0.001f);
    }
    temp_f8 = __sinf(D_8091512C) * 720.0f;
    spB4 = -35.0f;
    spB0 = temp_f8;
    spB8 = __cosf(D_8091512C) * 720.0f;
    temp_f20_2 = phi_s2->x - spB0;
    temp_f22_2 = phi_s2->z - spB8;
    if (((temp_f20_2 * temp_f20_2) + (temp_f22_2 * temp_f22_2)) < 2500.0f) {
        spF6 |= 2;
        D_8091512C -= 0.3f;
    } else if (D_8090CF18 != 0) {
        D_8091512C -= 0.05f;
        spB4 = (f32) arg0->colCtx.colHeader->waterBoxes->unk_2 - 5.0f;
    } else {
        Math_ApproachF(&D_8091512C, 2.3f, 1.0f, 0.001f);
    }
    temp_f16 = __sinf(D_80915130) * 720.0f;
    spC0 = -35.0f;
    spBC = temp_f16;
    spC4 = __cosf(D_80915130) * 720.0f;
    temp_f20_3 = phi_s2->x - spBC;
    temp_f22_3 = phi_s2->z - spC4;
    if (((temp_f20_3 * temp_f20_3) + (temp_f22_3 * temp_f22_3)) < 2500.0f) {
        spF6 |= 4;
        D_80915130 -= 0.3f;
    } else if (D_8090CF18 != 0) {
        D_80915130 -= 0.05f;
        spC0 = (f32) arg0->colCtx.colHeader->waterBoxes->ySurface - 5.0f;
    } else {
        Math_ApproachF(&D_80915130, 4.6f, 1.0f, 0.001f);
    }
    if (D_809171C9 == 1) {
        spD0 = 0.8f;
    } else {
        spD0 = 1.0f;
    }
    phi_s6 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            temp_s4 = phi_s0 + 4;
            temp_s5 = phi_s0 + 0x1C;
            phi_s0->unk_2 = (s16) (phi_s0->unk_2 + 1);
            SkinMatrix_Vec3fMtxFMultXYZW(arg0 + 0x187B0, temp_s4, temp_s5, &D_80911F24);
            temp_f2 = phi_s0->unk_24;
            phi_s2_2 = 0;
            if ((temp_f2 < 400.0f) && (fabsf(phi_s0->unk_1C) < (100.0f + temp_f2))) {
                phi_s0->unk_44 = 1U;
            } else {
                phi_s0->unk_44 = 0U;
            }
            if (phi_s6 < 0x15) {
                phi_s3 = 1;
            } else {
                phi_s2_2 = 2;
                if (phi_s6 < 0x29) {
                    phi_s2_2 = 1;
                    phi_s3 = 2;
                } else {
                    phi_s3 = 4;
                }
            }
            temp_f20_4 = phi_s0->unk_10 - phi_s0->unk_4;
            spE8 = phi_s0->unk_14 - phi_s0->unk_8;
            temp_f22_4 = phi_s0->unk_18 - phi_s0->unk_C;
            spCC = Math_FAtan2F(temp_f22_4, temp_f20_4);
            temp_f12 = sqrtf((temp_f20_4 * temp_f20_4) + (temp_f22_4 * temp_f22_4));
            spE0 = temp_f12;
            spCE = Math_FAtan2F(temp_f12, spE8);
            if ((spE0 < 10.0f) || (((phi_s0->unk_2 & 0x1F) == 0) && (Rand_ZeroOne() > 0.5f))) {
                sp78 = arg0 + 0x18000;
                temp_s1 = (phi_s2_2 * 0xC) + &spA4;
                phi_s0->unk_14 = (f32) (randPlusMinusPoint5Scaled(10.0f) + temp_s1->unk_4);
                if (D_8090CF18 != 0) {
                    phi_s0->unk_10 = (f32) (randPlusMinusPoint5Scaled(200.0f) + temp_s1->unk_0);
                    phi_s0->unk_18 = (f32) (randPlusMinusPoint5Scaled(200.0f) + temp_s1->unk_8);
                } else {
                    phi_s0->unk_10 = (f32) (randPlusMinusPoint5Scaled(100.0f) + temp_s1->unk_0);
                    phi_s0->unk_18 = (f32) (randPlusMinusPoint5Scaled(100.0f) + temp_s1->unk_8);
                }
                sp98.unk_0 = (f32) temp_s4->x;
                sp98.unk_4 = (f32) temp_s4->y;
                sp98.unk_8 = (f32) temp_s4->z;
                sp9C = (f32) arg0->colCtx.colHeader->waterBoxes->ySurface;
                func_808FC964(temp_s5, sp78->unk_870, (bitwise f32) &sp98, 20.0f, (bitwise s16) (Rand_ZeroFloat(50.0f) + 100.0f), (s16) 0x96, 0x5A);
                if (phi_s0->unk_28 < 1.5f) {
                    phi_s0->unk_28 = 1.5f;
                }
                phi_s0->unk_34 = 1.5f;
                phi_s0->unk_38 = 1.0f;
            }
            temp_f10 = (s32) ((f32) func_808FC8B8(phi_s0 + 0x3E, spCC, 5, 0x4000) * 3.0f);
            phi_a1 = (s16) temp_f10;
            if ((s32) (s16) temp_f10 >= 0x1F41) {
                phi_a1 = 0x1F40;
            } else if ((s32) (s16) temp_f10 < -0x1F40) {
                phi_a1 = -0x1F40;
            }
            Math_ApproachS(phi_s0 + 0x42, phi_a1, 3, 0x1388);
            spD8 = (f32) phi_s0->unk_42 * -0.0001f;
            Math_ApproachS(phi_s0 + 0x3C, spCE, 5, 0x4000);
            if ((spF6 & phi_s3) != 0) {
                phi_s0->unk_38 = 1.0f;
                phi_s0->unk_28 = 6.0f;
                phi_s0->unk_34 = 2.0f;
            }
            if (D_8090CF18 != 0) {
                phi_s0->unk_38 = 1.0f;
                phi_s0->unk_28 = 4.0f;
                phi_s0->unk_34 = 2.0f;
            }
            Math_ApproachF(phi_s0 + 0x28, 0.75f, 1.0f, 0.05f);
            temp_f20_5 = phi_s0->unk_28 * spD0;
            temp_f22_5 = Math_CosS(phi_s0->unk_3C) * temp_f20_5;
            phi_s0->unk_4 = (f32) (phi_s0->unk_4 + (temp_f22_5 * Math_SinS(phi_s0->unk_3E)));
            phi_s0->unk_8 = (f32) (phi_s0->unk_8 + (temp_f20_5 * Math_SinS(phi_s0->unk_3C)));
            phi_s0->unk_C = (f32) (phi_s0->unk_C + (temp_f22_5 * Math_CosS(phi_s0->unk_3E)));
            if (phi_s0->unk_44 != 0) {
                Math_ApproachF(phi_s0 + 0x34, 1.0f, 1.0f, 0.1f);
                Math_ApproachF(phi_s0 + 0x38, 0.4f, 1.0f, 0.04f);
                phi_s0->unk_30 = (f32) (phi_s0->unk_30 + phi_s0->unk_34);
                phi_s0->unk_2C = (f32) ((__cosf(phi_s0->unk_30) * phi_s0->unk_38) + spD8);
            }
        }
        temp_s6 = phi_s6 + 1;
        phi_s0 += 0x48;
        phi_s6 = (s32) temp_s6;
    } while ((s32) temp_s6 < 0x3C);
    D_8090CF18 = 0;
}

void func_80909AD0(GraphicsContext **arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s2;
    s16 temp_s4;
    ? *phi_s1;
    s32 phi_s5;
    f32 phi_f20;
    s16 phi_s4;

    phi_s1 = &D_80914048;
    phi_s5 = 0;
    if (D_809171C9 == 1) {
        phi_f20 = 0.003325f;
    } else {
        phi_f20 = 0.00475f;
    }
    temp_s2 = *arg0;
    phi_s4 = 0;
    do {
        if (phi_s1->unk_0 != 0) {
            if (phi_s5 == 0) {
                temp_v0 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0 + 8;
                temp_v0->words.w1 = &D_0600C220;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0x9B9B9BFF;
                temp_v0_2->words.w0 = 0xFA000000;
                phi_s5 = (phi_s5 + 1) & 0xFF;
            }
            if (phi_s1->unk_44 != 0) {
                SysMatrix_InsertTranslation(phi_s1->unk_4, phi_s1->unk_8, phi_s1->unk_C, 0);
                SysMatrix_InsertYRotation_f(((f32) phi_s1->unk_3E * 3.1415927f) / 32768.0f, 1);
                SysMatrix_RotateStateAroundXAxis((-(f32) phi_s1->unk_3C * 3.1415927f) / 32768.0f);
                Matrix_Scale(phi_s1->unk_2C * phi_f20, phi_f20, phi_f20, 1);
                temp_v0_3 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_4 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = &temp_v0_4[1];
                temp_v0_4->words.w1 = (u32) &D_0600C298;
                temp_v0_4->words.w0 = 0xDE000000;
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s1 += 0x48;
        phi_s4 = temp_s4;
    } while ((s32) temp_s4 < 0x3C);
}

void func_80909CC0(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    MessageContext *sp20;
    MessageContext *temp_a0;
    MessageContext *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_v0_7;
    s32 temp_v1_4;
    s32 temp_v1_5;
    u16 temp_t7;
    u32 temp_t2;
    u32 temp_t3;
    u32 temp_t3_2;
    u32 temp_t3_3;
    u32 temp_t8;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u8 temp_a0_3;
    u8 temp_t1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_8;
    s16 phi_t3;

    temp_t7 = arg0->unk_154;
    switch (temp_t7) {
    case 0:
        if (D_809171FC == 0) {
            if (D_809171C9 != 1) {
                temp_v1 = gSaveContext.roomInf[127][2];
                if (((temp_v1 & 0x100) != 0) && ((temp_v1 & 0x200) == 0)) {
                    phi_t3 = 0x4093;
                    goto block_12;
                }
                arg0->textId = 0x407B;
            } else {
                arg0->textId = 0x407B;
            }
        } else if (D_8090CD0C == 0) {
            arg0->textId = 0x4084;
        } else {
            phi_t3 = 0x4097;
block_12:
            arg0->textId = phi_t3;
        }
        if (func_800B84D0(arg0, arg1) != 0) {
            if (D_809171FC == 0) {
                arg0->unk_154 = 1U;
                if (D_809171C9 != 1U) {
                    gSaveContext.roomInf[127][2] |= 0x200;
                    return;
                }
                gSaveContext.roomInf[127][2] |= 0x100;
                return;
            }
            arg0->unk_154 = 0xAU;
            return;
        }
        func_800B8614(arg0, arg1, 100.0f);
        return;
    case 1:
        if ((func_80152498(&arg1->msgCtx) == 4) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            temp_v0 = arg1->msgCtx.choiceIndex;
            if (temp_v0 != 0) {
                if (temp_v0 != 1) {
                    return;
                }
                func_80151938(arg1, 0x2DU);
                arg0->unk_154 = 3U;
                return;
            }
            if ((s32) gSaveContext.rupees >= 0x14) {
                func_801159EC(-0x14);
                if (func_8013EE04() == 0) {
                    arg0->textId = 0x407C;
                } else {
                    arg0->textId = 0x407D;
                }
                func_80151938(arg1, arg0->textId);
                arg0->unk_154 = 2U;
                return;
            }
            func_80151938(arg1, 0x407EU);
            arg0->unk_154 = 3U;
            return;
        }
    default:
        return;
    case 2:
        if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            func_80151938(arg1, 0x407FU);
            arg0->unk_154 = 4U;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 3:
        temp_a0 = &arg1->msgCtx;
        sp20 = temp_a0;
        if ((func_80152498(temp_a0) == 5) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            arg0->unk_154 = 0U;
        }
        if (func_80152498(sp20) == 6) {
            arg0->unk_154 = 0U;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 4:
        if ((func_80152498(&arg1->msgCtx) == 4) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            temp_v0_2 = arg1->msgCtx.choiceIndex;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {
                    return;
                }
                func_80151938(arg1, 0x407FU);
                return;
            }
            D_8090CCF8 = (u16) (u32) D_809171CC;
            func_80151938(arg1, 0x4080U);
            arg0->unk_154 = 5U;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 5:
        if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0) && (func_801477B4(arg1), arg1->interfaceCtx.unk_27E = 1, arg1->startPlayerFishing(arg1), D_809171FC = 1, D_8090CD04 = 0x14, arg0->unk_154 = 0U, temp_v1_2 = gSaveContext.roomInf[127][2], (((u32) (temp_v1_2 & 0xFF0000U) < 0xFF0000U) != 0))) {
            gSaveContext.roomInf[127][2] = temp_v1_2 + 0x10000;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 10:
        if (D_8090CD0C != 0) {
            if ((func_80152498(&arg1->msgCtx) == 4) && (func_80147624(arg1) != 0)) {
                func_801477B4(arg1);
                temp_v0_3 = arg1->msgCtx.choiceIndex;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        return;
                    }
                    arg0->unk_154 = 0U;
                    return;
                }
                func_80151938(arg1, 0x40B2U);
                D_8090CD08 = 1;
                D_8090CD0C = 0;
block_151:
                arg0->unk_154 = 0x14;
                /* Duplicate return node #152. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #152. Try simplifying control flow for better match */
            return;
        }
        if ((func_80152498(&arg1->msgCtx) == 4) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            temp_v0_4 = arg1->msgCtx.choiceIndex;
            if (temp_v0_4 != 0) {
                if (temp_v0_4 != 1) {
                    if (temp_v0_4 != 2) {
                        return;
                    }
                    if (D_809171D8 == 0) {
                        func_80151938(arg1, 0x4085U);
                    } else if (D_809171C9 == 1) {
                        func_80151938(arg1, 0x4092U);
                    }
                    arg0->unk_154 = 0x16U;
                    return;
                }
                if (D_8090CD00 >= 0x8CA1) {
                    D_8090CD00 = 0x7530;
                    func_80151938(arg1, 0x4088U);
                } else {
                    if (D_809171CA == 0) {
                        temp_v0_5 = D_809171D6;
                        if (temp_v0_5 == 0) {
                            D_809171D6 = temp_v0_5 + 1;
                        }
                    }
                    temp_v0_6 = D_809171D6;
                    if ((D_80917206 == 2) && (*(&D_8090D638 + (temp_v0_6 * 2)) == 0x408D)) {
                        func_80151938(arg1, 0x40AFU);
                    } else {
                        func_80151938(arg1, *(&D_8090D638 + (temp_v0_6 * 2)));
                    }
                    temp_t1 = D_809171D6 + 1;
                    D_809171D6 = temp_t1;
                    if (D_809171C9 != 1) {
                        if ((temp_t1 & 0xFF) >= 6) {
                            goto block_90;
                        }
                    } else if ((s32) D_809171D6 >= 4) {
block_90:
                        D_809171D6 = 0;
                    }
                }
                arg0->unk_154 = 0U;
                return;
            }
            temp_f0 = D_8090CCF0;
            if (temp_f0 == 0.0f) {
                arg0->textId = 0x408C;
                arg0->unk_154 = 0x14U;
            } else if (D_809171D0 == 0) {
                D_8090CCF8 = (u16) (u32) temp_f0;
                if ((s32) (s16) (s32) D_809171CC < (s32) (s16) (s32) temp_f0) {
                    if (D_809171D2 == 2) {
                        arg0->textId = 0x40B0;
                    } else {
                        arg0->textId = 0x4086;
                    }
                    arg0->unk_154 = 0xBU;
                } else {
                    arg0->textId = 0x408B;
                    arg0->unk_154 = 0x14U;
                }
            } else {
                arg0->textId = 0x409B;
                arg0->unk_154 = 0xBU;
            }
            func_80151938(arg1, arg0->textId);
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 11:
        temp_a0_2 = &arg1->msgCtx;
        sp20 = temp_a0_2;
        if (((func_80152498(temp_a0_2) == 5) || (func_80152498(sp20) == 0)) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            if (D_809171D0 == 0) {
                D_809171CC = D_8090CCF0;
                D_8090CCF0 = 0.0f;
                temp_a0_3 = D_809171C9;
                if (temp_a0_3 == 1) {
                    temp_f0_2 = D_809171CC;
                    temp_t3 = gSaveContext.roomInf[127][2] & ~0xFF;
                    gSaveContext.roomInf[127][2] = temp_t3;
                    temp_v0_7 = (s16) (s32) temp_f0_2 & 0x7F;
                    temp_v1_3 = temp_t3 | temp_v0_7;
                    gSaveContext.roomInf[127][2] = temp_v1_3;
                    temp_t8 = temp_v1_3 & 0xFFFFFF;
                    if ((f32) ((u32) (temp_v1_3 & 0x7F000000) >> 0x18) < temp_f0_2) {
                        gSaveContext.roomInf[127][2] = temp_t8;
                        temp_t3_2 = temp_t8 | (temp_v0_7 << 0x18);
                        gSaveContext.roomInf[127][2] = temp_t3_2;
                        if (D_809171D2 == 2) {
                            gSaveContext.roomInf[127][2] = temp_t3_2 | 0x80000000;
                        }
                    }
                    if (D_809171D2 == 2) {
                        gSaveContext.roomInf[127][2] |= 0x80;
                        arg0->unk_154 = 0U;
                        return;
                    }
                    goto block_109;
                }
                temp_t3_3 = gSaveContext.roomInf[127][2] & 0xFFFFFF;
                gSaveContext.roomInf[127][2] = temp_t3_3;
                temp_t2 = temp_t3_3 | (((s32) D_809171CC & 0x7F) << 0x18);
                gSaveContext.roomInf[127][2] = temp_t2;
                if (D_809171D2 == 2) {
                    gSaveContext.roomInf[127][2] = temp_t2 | 0x80000000;
                    arg0->unk_154 = 0U;
                    return;
                }
block_109:
                if (D_809171CC >= 60.0f) {
                    sp2C = 5;
                } else if (D_809171CC >= 50.0f) {
                    sp2C = 3;
                } else if (D_809171CC >= 40.0f) {
                    sp2C = 2;
                } else {
                    sp2C = 1;
                }
                if (temp_a0_3 == 1) {
                    if (D_809171CC >= 50.0f) {
                        temp_v1_4 = gSaveContext.roomInf[127][2];
                        if ((temp_v1_4 & 0x400) == 0) {
                            gSaveContext.roomInf[127][2] = temp_v1_4 | 0x400;
                            sp2C = 0xC;
                            D_8090CCEC = (u8) (u32) (Rand_ZeroFloat(3.999f) + 1.0f);
                        }
                    }
                } else if (D_809171CC >= 60.0f) {
                    temp_v1_5 = gSaveContext.roomInf[127][2];
                    if ((temp_v1_5 & 0x800) == 0) {
                        gSaveContext.roomInf[127][2] = temp_v1_5 | 0x800;
                        sp2C = 0x52;
                        D_8090CCEC = (u8) (u32) (Rand_ZeroFloat(3.999f) + 1.0f);
                    }
                }
                goto block_124;
            }
            sp2C = 5;
            D_8090CCF0 = 0.0f;
block_124:
            arg0->parent = NULL;
            func_800B8A1C(arg0, arg1, sp2C, 2000.0f, 1000.0f);
            arg0->unk_154 = 0x17U;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 20:
        if ((func_80152498(&arg1->msgCtx) == 5) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            arg0->unk_154 = 0U;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 21:
        if ((func_80152498(&arg1->msgCtx) == 4) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            temp_v0_8 = arg1->msgCtx.choiceIndex;
            if (temp_v0_8 != 0) {
                if (temp_v0_8 != 1) {
                    return;
                }
                if (D_809171D8 == 0) {
                    func_80151938(arg1, 0x4085U);
                } else if (D_809171C9 == 1) {
                    func_80151938(arg1, 0x4092U);
                }
                arg0->unk_154 = 0x16U;
                return;
            }
            arg0->unk_154 = 0U;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 22:
        if (func_80152498(&arg1->msgCtx) == 0) {
            arg0->unk_154 = 0U;
            if (D_8090CD0C != 0) {
                D_8090CD08 = 1;
                D_8090CD0C = 0;
            }
            D_809171FC = 0;
            arg1->interfaceCtx.unk_27E = 0;
            return;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    case 23:
        D_8090CCF4 = 0;
        if (Actor_HasParent(arg0, arg1) != 0) {
            arg0->unk_154 = 0x18U;
            return;
        }
        func_800B8A1C(arg0, arg1, 0x52, 2000.0f, 1000.0f);
        return;
    case 24:
        D_8090CCF4 = 0;
        if ((func_80152498(&arg1->msgCtx) == 6) && (func_80147624(arg1) != 0)) {
            if (D_809171D0 == 0) {
                arg0->unk_154 = 0U;
                return;
            }
            func_801518B0(arg1, 0x409CU, NULL);
            goto block_151;
        }
        /* Duplicate return node #152. Try simplifying control flow for better match */
        return;
    }
}

void func_8090AB6C(Actor *this, GlobalContext *globalCtx) {
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spEC;
    s16 spE8;
    f32 spE0;
    f32 spDC;
    Actor *spD4;
    Camera *spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    s16 sp9E;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s16 sp72;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    ? sp48;
    CutsceneContext *sp34;
    void *sp2C;
    void *sp28;
    Actor *temp_v0;
    Camera *temp_a0_7;
    Camera *temp_v0_11;
    Camera *temp_v0_12;
    Camera *temp_v0_13;
    Camera *temp_v0_14;
    Camera *temp_v0_8;
    MessageContext *temp_a0_6;
    f32 *temp_a0_2;
    f32 *temp_a0_3;
    f32 *temp_a0_4;
    f32 *temp_a0_5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    s16 *temp_a0;
    s16 temp_a1;
    s16 temp_v0_15;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1_4;
    s32 temp_f8;
    s8 temp_v0_10;
    s8 temp_v0_9;
    u16 temp_t2;
    u8 temp_t4;
    u8 temp_t9;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_7;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_v0_6;
    s32 phi_a1;
    Actor *phi_v0;
    s16 phi_a1_2;
    Actor *phi_a3;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;
    f32 phi_f12;
    Actor *phi_t0;
    Actor *phi_t0_2;
    f32 phi_f0;
    f32 phi_f2_4;
    Actor *phi_t0_3;
    u8 phi_v0_2;
    f32 phi_f2_5;
    f32 phi_f0_2;
    f32 phi_f2_6;
    s16 phi_v1;
    s16 phi_v1_2;
    f32 phi_f0_3;
    Actor *phi_v0_3;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_a0 = &spE8;
    spE8 = (s16) temp_v0->shape.shadowAlpha;
    temp_f0 = temp_v0->world.pos.x;
    temp_f2 = temp_v0->world.pos.z;
    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < 846400.0f) {
        spD4 = temp_v0;
        Math_ApproachS(&spE8, 0, 1, 0x28);
    } else {
        spD4 = temp_v0;
        Math_ApproachS(temp_a0, 0xC8, 1, 0x28);
    }
    spD4->shape.shadowAlpha = (u8) spE8;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) &this[1].yDistToWater);
    if ((D_8090CD04 != 0) || (func_80152498(&globalCtx->msgCtx) != 0)) {
        this->flags &= -2;
    } else {
        this->flags |= 0x21;
    }
    phi_v0_3 = this;
    if (!(this->xzDistToPlayer < 120.0f)) {
        phi_a1 = 0;
        if (func_80152498(&globalCtx->msgCtx) != 0) {
            phi_v0_3 = this;
            goto block_10;
        }
        phi_v0 = this;
    } else {
block_10:
        phi_a1 = (s32) (s16) (phi_v0_3->shape.rot.y - phi_v0_3->yawTowardsPlayer);
        phi_v0 = phi_v0_3;
    }
    phi_a1_2 = (s16) phi_a1;
    if (phi_a1 >= 0x2711) {
        phi_a1_2 = 0x2710;
    } else if (phi_a1 < -0x2710) {
        phi_a1_2 = -0x2710;
    }
    Math_ApproachS(phi_v0 + 0x15C, phi_a1_2, 3, 0x1388);
    sp28 = globalCtx + 0x18000;
    if (((globalCtx->gameplayFrames & 0x1F) == 0) && (Rand_ZeroOne() < 0.3f)) {
        this[1].home.rot.y = 4;
    }
    temp_v0_2 = this[1].home.rot.y;
    this[1].home.rot.x = *(&D_8090D644 + (temp_v0_2 * 2));
    if (temp_v0_2 != 0) {
        this[1].home.rot.y = temp_v0_2 - 1;
    }
    temp_v0_3 = D_8090CD04;
    if (temp_v0_3 != 0) {
        D_8090CD04 = temp_v0_3 - 1;
    }
    if ((D_8090CD0C == 0) && (D_80917206 != 2) && ((s32) D_8090CD14 > 0) && (D_8090CD08 == 1) && (D_8090CD04 == 0)) {
        temp_f2_2 = D_809171E0.x - D_8091720C;
        temp_f12 = D_809171E0.y - D_8091720C;
        temp_f14 = D_809171E0.z - D_80917210;
        if (sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 25.0f) {
            D_8090CD08 = 0;
            D_8090CD0C = 1;
            func_801518B0(globalCtx, 0x4087U, NULL);
        }
    }
    temp_v0_4 = D_8090CD08;
    phi_a3 = this;
    if (temp_v0_4 == 0) {
        gSaveContext.roomInf[127][2] = gSaveContext.roomInf[127][2] | 0x1000;
    } else if (temp_v0_4 == 1) {
        gSaveContext.roomInf[127][2] = gSaveContext.roomInf[127][2] & ~0x1000;
    }
    temp_v0_5 = D_8090CCFC;
    temp_t9 = temp_v0_5 - 1;
    if (temp_v0_5 != 0) {
        D_8090CCFC = temp_t9;
        if ((temp_t9 & 0xFF) == 0) {
            func_801518B0(globalCtx, D_809171DA, NULL);
            phi_a3 = this;
        }
    }
    func_80909CC0(phi_a3, globalCtx);
    D_809101C8 = 0.0015f;
    D_8090CD00 = D_8090CD00 + 1;
    if ((D_809171FC != 0) && (D_8090CCF4 != 0)) {
        func_80901480(this, globalCtx);
    }
    func_808FDCDC(sp28->unk_870, globalCtx);
    func_80908B4C(globalCtx);
    func_80909234(globalCtx);
    if ((D_809171FC != 0) && (D_8090CD4C == 0) && (spD4->world.pos.z > 1360.0f) && (fabsf(spD4->world.pos.x) < 25.0f)) {
        spD4->world.pos.z = 1360.0f;
        spD4->speedXZ = 0.0f;
        if (D_8090CD50 == 0) {
            D_8090CD4C = 0xA;
        }
    }
    temp_v1 = D_8090CCEC;
    if (temp_v1 != 0) {
        temp_v0_6 = (temp_v1 * 6) + &D_8090D65C;
        if ((fabsf(spD4->world.pos.x - (f32) temp_v0_6->unk_-6) < 25.0f) && (fabsf(spD4->world.pos.y - (f32) temp_v0_6->unk_-4) < 10.0f) && (fabsf(spD4->world.pos.z - (f32) temp_v0_6->unk_-2) < 25.0f)) {
            D_8090CCEC = 0;
            D_8090CD4C = 0x14;
            func_8013EC44(0, (s32) &D_8090CCEC, 0x96, 0xA, 0xA);
            play_sound(0x4807U);
            func_801A89A8(0x101400FF);
        }
    }
    temp_v0_7 = D_8090CD50;
    temp_v1_2 = D_8090CD4C;
    phi_t0 = spD4;
    phi_t0_2 = spD4;
    if (temp_v0_7 != 0) {
        D_8090CD50 = temp_v0_7 - 1;
    }
    if ((s32) temp_v1_2 >= 0x17) {
        if (temp_v1_2 != 0x64) {

        }
    } else {
        switch (temp_v1_2) {
        case 1:
            D_80911F44 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, D_80911F44, 7);
            temp_v0_8 = Play_GetCamera(globalCtx, 0);
            D_80911F2C = temp_v0_8->eye.x;
            D_80911F2C = temp_v0_8->eye.y;
            D_80911F30 = temp_v0_8->eye.z;
            D_80911F3C = temp_v0_8->at.x;
            D_80911F3C = temp_v0_8->at.y;
            D_80911F40 = temp_v0_8->at.z;
            D_8090CD4C = 2;
            Interface_ChangeAlpha(0xCU);
            D_80911F4C = 0.0f;
            /* fallthrough */
        case 2:
            ShrinkWindow_SetLetterboxTarget(0x1B);
            spEC = D_80917208.x - spD4->world.pos.x;
            spF4 = D_80917208.z - spD4->world.pos.z;
            spDC = sqrtf((spEC * spEC) + (spF4 * spF4));
            SysMatrix_InsertYRotation_f(Math_Acot2F(spF4, spEC), 0);
            temp_a0_2 = &sp104;
            sp104 = 0.0f;
            sp108 = 0.0f;
            sp10C = 100.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, (Vec3f *) &spEC);
            if (D_8090CD14 == 1) {
                phi_f2 = 0.2f;
            } else {
                phi_f2 = 0.1f;
            }
            temp_f4 = fabsf(spEC) * D_80911F4C;
            spE0 = phi_f2;
            Math_ApproachF(&D_80911F38, D_80917208.x, phi_f2, temp_f4);
            Math_ApproachF(&D_80911F3C, D_8091720C, phi_f2, 50.0f * D_80911F4C);
            Math_ApproachF(&D_80911F40, D_80917210, phi_f2, fabsf(spF4) * D_80911F4C);
            temp_a0_3 = &sp104;
            sp104 = 0.0f - D_80911F50;
            if (D_809171C9 != 1) {
                phi_f2_2 = 80.0f;
            } else {
                phi_f2_2 = 55.0f;
            }
            sp108 = phi_f2_2;
            sp10C = -80.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_3, (Vec3f *) &spF8);
            spF8 += spD4->world.pos.x;
            spFC += spD4->world.pos.y;
            sp100 += spD4->world.pos.z;
            Math_ApproachF(&D_80911F50, 30.0f, 0.1f, 0.4f);
            if (~(globalCtx->state.input[0].press.button | ~0x2000) == 0) {
                temp_v0_9 = D_809171DC;
                if (((s32) temp_v0_9 >= 0) && (D_80917272 == 0)) {
                    D_809171DC = temp_v0_9 + 1;
                    if ((s32) D_809171DC >= 4) {
                        D_809171DC = 0;
                    }
                    if ((D_809171DC == 0) || (D_809171DC == 3)) {
                        play_sound(0x4814U);
                    } else {
                        play_sound(0x4813U);
                    }
                }
            }
            temp_a0_4 = &sp104;
            if ((s32) D_8090CD14 >= 3) {
                if (spDC < 110.0f) {
                    D_809171DC = -1;
                } else if ((spDC > 300.0f) && ((s32) D_809171DC < 0)) {
                    D_809171DC = 0;
                }
            }
            temp_v0_10 = D_809171DC;
            if ((s32) temp_v0_10 > 0) {
                temp_f12_2 = sqrtf((spEC * spEC) + (spF4 * spF4)) * 0.001f;
                phi_f12 = temp_f12_2;
                if (temp_f12_2 > 1.0f) {
                    phi_f12 = 1.0f;
                }
                if (temp_v0_10 == 2) {
                    phi_f2_3 = 0.3f;
                } else {
                    phi_f2_3 = 0.1f;
                }
                temp_f0_2 = 0.4f + phi_f2_3 + (phi_f12 * 0.4f);
                D_809101C8 = 0.0005000001f;
                spFC += ((D_8091720C - spFC) * temp_f0_2) + 20.0f;
                spF8 += (D_8091720C - spF8) * temp_f0_2;
                sp100 += (D_80917210 - sp100) * temp_f0_2;
            }
            sp104 = 0.0f;
            sp108 = 0.0f;
            sp10C = 100.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_4, (Vec3f *) &spEC);
            Math_ApproachF((f32 *) &D_80911F28, spF8, 0.3f, fabsf(spEC) * D_80911F4C);
            Math_ApproachF(&D_80911F2C, spFC, 0.3f, 20.0f * D_80911F4C);
            Math_ApproachF(&D_80911F30, sp100, 0.3f, fabsf(spF4) * D_80911F4C);
block_115:
            phi_t0_2 = spD4;
            break;
        case 3:
            temp_v0_11 = Play_GetCamera(globalCtx, 0);
            temp_v0_11->eye.x = D_80911F28.x;
            temp_v0_11->eye.y = D_80911F28.y;
            temp_v0_11->eye.z = D_80911F28.z;
            temp_v0_11->eyeNext.x = D_80911F28.x;
            temp_v0_11->eyeNext.y = D_80911F28.y;
            temp_v0_11->eyeNext.z = D_80911F28.z;
            temp_v0_11->at.x = D_80911F38.unk_0;
            temp_v0_11->at.y = (&D_80911F38)[1];
            temp_v0_11->at.z = (&D_80911F38)[2];
            func_80169AFC(globalCtx, D_80911F44, 0);
            func_800EA0EC(globalCtx, &globalCtx->csCtx);
            D_8090CD4C = 0;
            D_80911F44 = 0;
            func_800F6834(globalCtx, 0);
            globalCtx->envCtx.unk_8C.fogNear = 0;
            spD4->unk_B28 = -5;
            D_80917200 = 5;
            goto block_115;
        case 10:
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            D_80911F44 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, D_80911F44, 7);
            func_800B7298(globalCtx, this, 4U);
            temp_v0_12 = Play_GetCamera(globalCtx, 0);
            D_80911F2C = temp_v0_12->eye.x;
            D_80911F2C = temp_v0_12->eye.y;
            D_80911F30 = temp_v0_12->eye.z;
            D_80911F3C = temp_v0_12->at.x;
            D_80911F3C = temp_v0_12->at.y;
            D_80911F40 = temp_v0_12->at.z;
            func_801518B0(globalCtx, 0x409EU, NULL);
            D_8090CD4C = 0xB;
            func_8013EC44(0, 0x96, 0xA, 0xA);
            phi_t0 = spD4;
            /* fallthrough */
        case 11:
            phi_t0->world.pos.z = 1360.0f;
            phi_t0->speedXZ = 0.0f;
            if (func_80152498(&globalCtx->msgCtx) == 0) {
                sp34 = &globalCtx->csCtx;
                temp_v0_13 = Play_GetCamera(globalCtx, 0);
                temp_v0_13->eye.x = D_80911F28.x;
                temp_v0_13->eye.y = D_80911F28.y;
                temp_v0_13->eye.z = D_80911F28.z;
                temp_v0_13->eyeNext.x = D_80911F28.x;
                temp_v0_13->eyeNext.y = D_80911F28.y;
                temp_v0_13->eyeNext.z = D_80911F28.z;
                temp_v0_13->at.x = D_80911F38.unk_0;
                temp_v0_13->at.y = (&D_80911F38)[1];
                temp_v0_13->at.z = (&D_80911F38)[2];
                func_80169AFC(globalCtx, D_80911F44, 0);
                func_800EA0EC(globalCtx, sp34);
                func_800B7298(globalCtx, this, 6U);
                D_8090CD4C = 0;
                D_80911F44 = 0;
                D_8090CD50 = 0x1E;
                func_800F6834(globalCtx, 0);
                globalCtx->envCtx.unk_8C.fogNear = 0;
            }
            goto block_115;
        case 20:
            func_800EA0D4(globalCtx, &globalCtx->csCtx);
            D_80911F44 = func_801694DC(globalCtx);
            func_80169590(globalCtx, 0, 1);
            func_80169590(globalCtx, D_80911F44, 7);
            func_800B7298(globalCtx, this, 4U);
            temp_v0_14 = Play_GetCamera(globalCtx, 0);
            D_80911F28.x = temp_v0_14->eye.x;
            D_80911F28.y = temp_v0_14->eye.y;
            D_80911F28.z = temp_v0_14->eye.z;
            D_80911F38.unk_0 = temp_v0_14->at.x;
            (&D_80911F38)[1] = temp_v0_14->at.y;
            (&D_80911F38)[2] = temp_v0_14->at.z;
            func_801518B0(globalCtx, 0x409AU, NULL);
            D_8090CD4C = 0x15;
            D_80911F48 = 45.0f;
            D_8090CD50 = 0xA;
            /* fallthrough */
        case 21:
            if ((D_8090CD50 == 0) && (func_80147624(globalCtx) != 0)) {
                D_8090CD4C = 0x16;
                D_8090CD50 = 0x28;
                D_80911F64 = 0.0f;
            }
            goto block_115;
        case 22:
            if (D_8090CD50 == 0x1E) {
                func_801A89A8(0x8922);
            }
            D_8090CD54 = 1;
            Math_ApproachF(&D_80911F64, 71.0f, 0.5f, 3.0f);
            SysMatrix_InsertYRotation_f(((f32) spD4->shape.rot.y / 32768.0f) * 3.1415927f, 0);
            temp_f2_3 = D_80911F64;
            sp104 = Math_SinS((s16) (sp28->unk_840 << 0xC));
            sp108 = temp_f2_3;
            sp10C = -5.0f;
            if (D_809171C9 == 1) {
                sp108 = temp_f2_3 - 20.0f;
            }
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp104, (Vec3f *) &spF8);
            D_80911F58.unk_0 = (f32) (spD4->world.pos.x + spF8);
            D_80911F58.unk_4 = (f32) (spD4->world.pos.y + spFC);
            D_80911F58.unk_8 = (f32) (spD4->world.pos.z + sp100);
            Math_ApproachF(&D_80911F48, 15.0f, 0.1f, 0.75f);
            temp_a0_5 = &sp104;
            sp104 = D_80911F48 - 15.0f;
            if (D_809171C9 != 1) {
                sp108 = 60.0f;
                sp10C = -30.0f;
            } else {
                sp108 = 40.0f;
                sp10C = -35.0f;
            }
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_5, &D_80911F28);
            D_80911F28.x += spD4->world.pos.x;
            D_80911F28.y += spD4->world.pos.y;
            temp_a0_6 = &globalCtx->msgCtx;
            D_80911F28.z += spD4->world.pos.z;
            D_80911F38.unk_0 = spD4->world.pos.x;
            (&D_80911F38)[1] = spD4->world.pos.y;
            (&D_80911F38)[2] = spD4->world.pos.z;
            if (D_809171C9 != 1) {
                (&D_80911F38)[1] += 62.0f;
            } else {
                (&D_80911F38)[1] += 40.0f;
            }
            if ((D_8090CD50 == 0) && ((sp34 = (CutsceneContext *) temp_a0_6, (func_80152498(temp_a0_6) == 4)) || (func_80152498(temp_a0_6) == 0)) && (func_80147624(globalCtx) != 0)) {
                spAC = Play_GetCamera(globalCtx, 0);
                func_801477B4(globalCtx);
                if (globalCtx->msgCtx.choiceIndex == 0) {
                    D_80917206 = 2;
                    D_809171D6 = 0;
                }
                spAC->eye.x = D_80911F28.x;
                spAC->eye.y = D_80911F28.y;
                spAC->eye.z = D_80911F28.z;
                spAC->eyeNext.x = D_80911F28.x;
                spAC->eyeNext.y = D_80911F28.y;
                spAC->eyeNext.z = D_80911F28.z;
                spAC->at.x = D_80911F38.unk_0;
                spAC->at.y = (&D_80911F38)[1];
                spAC->at.z = (&D_80911F38)[2];
                func_80169AFC(globalCtx, D_80911F44, 0);
                func_800EA0EC(globalCtx, &globalCtx->csCtx);
                func_800B7298(globalCtx, this, 6U);
                D_8090CD4C = 0;
                D_80911F44 = 0;
                spD4->unk_B28 = -5;
                D_80917200 = 5;
                D_8090CD54 = 0;
                D_809171F6 = 0x14;
                func_800F6834(globalCtx, 0);
                globalCtx->envCtx.unk_8C.fogNear = 0;
            }
            goto block_115;
        }
    }
    temp_a1 = D_80911F44;
    sp2C = globalCtx + 0x10000;
    if (temp_a1 != 0) {
        Play_CameraSetAtEye(globalCtx, temp_a1, (Vec3f *) &D_80911F38, &D_80911F28);
        Math_ApproachF(&D_80911F4C, 1.0f, 1.0f, 0.02f);
        if (D_80911F2C <= ((f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface + 1.0f)) {
            func_800F6834(globalCtx, 1);
            if (D_809171CA != 0) {
                globalCtx->envCtx.unk_8C.fogNear = -0xB2;
            } else {
                globalCtx->envCtx.unk_8C.fogNear = -0x2E;
            }
        } else {
            func_800F6834(globalCtx, 0);
            globalCtx->envCtx.unk_8C.fogNear = 0;
        }
        phi_t0_2 = spD4;
    }
    temp_f0_3 = phi_t0_2->floorHeight;
    temp_f2_4 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface;
    phi_f0 = temp_f0_3;
    phi_f2_4 = temp_f2_4;
    phi_t0_3 = phi_t0_2;
    if ((temp_f0_3 < (temp_f2_4 - 3.0f)) && (phi_t0_2->world.pos.y < (temp_f0_3 + 3.0f)) && (phi_t0_2->speedXZ > 1.0f) && ((sp28->unk_840 & 1) == 0)) {
        spA0 = randPlusMinusPoint5Scaled(20.0f) + spD4->world.pos.x;
        spA8 = randPlusMinusPoint5Scaled(20.0f) + spD4->world.pos.z;
        spA4 = spD4->floorHeight + 5.0f;
        func_808FCC0C(NULL, sp28->unk_870, &spA0, 0.5f);
        phi_f0 = spD4->floorHeight;
        phi_f2_4 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface;
        phi_t0_3 = spD4;
    }
    if ((phi_f0 < phi_f2_4) && ((phi_f2_4 - 10.0f) < phi_f0) && (phi_t0_3->speedXZ >= 4.0f) && ((sp28->unk_840 & 3) == 0)) {
        sp9E = 0;
        sp34 = phi_t0_3 + 0x24;
        do {
            sp80 = Rand_ZeroFloat(1.5f) + 1.5f;
            temp_f0_4 = Rand_ZeroFloat(6.28f);
            sp7C = temp_f0_4;
            sp84 = __sinf(temp_f0_4) * sp80;
            temp_f4_2 = __cosf(sp7C) * sp80;
            sp8C = temp_f4_2;
            sp88 = Rand_ZeroFloat(3.0f) + 2.0f;
            sp90.unk_0 = sp34->unk_0;
            (&sp90)[1] = sp34->segment;
            (&sp90)[2] = sp34->unk_8;
            temp_f4_3 = temp_f4_2;
            sp90 += 2.0f * sp84;
            sp94 = (f32) globalCtx->colCtx.colHeader->waterBoxes->ySurface;
            sp98 += 2.0f * temp_f4_3;
            func_808FCABC(NULL, sp28->unk_870, &sp90, &sp84, Rand_ZeroFloat(0.01f) + 0.020000001f);
            temp_v0_15 = sp9E + 1;
            sp9E = temp_v0_15;
        } while ((s32) temp_v0_15 < 0xA);
    }
    temp_v1_3 = D_809171CB;
    phi_v0_2 = temp_v1_3;
    if ((s32) temp_v1_3 >= 2) {
        temp_t4 = temp_v1_3 - 1;
        D_809171CB = temp_t4;
        phi_v0_2 = temp_t4 & 0xFF;
    }
    if ((phi_v0_2 == 1) && (func_80152498(&globalCtx->msgCtx) == 0) && ((D_8090CD00 & 0xFFF) == 0xFFF)) {
        D_809171CB = 0xC8;
        if (Rand_ZeroOne() < 0.5f) {
            D_8090CCD4 = (u8) (u32) (Rand_ZeroFloat(10.0f) + 5.0f);
            globalCtx->envCtx.unk_E1 = 1;
        } else {
            D_8090CCD4 = 0;
            globalCtx->envCtx.unk_E1 = 2;
        }
    }
    Math_ApproachF(&D_8090CCD0, (f32) D_8090CCD4, 1.0f, 0.05f);
    temp_f0_5 = D_8090CCD0;
    phi_f0_2 = temp_f0_5;
    if (temp_f0_5 > 0.0f) {
        temp_f2_5 = (temp_f0_5 * 0.03f) + 0.8f;
        phi_f2_5 = temp_f2_5;
        if (temp_f2_5 > 1.2f) {
            phi_f2_5 = 1.2f;
        }
        Math_ApproachF(&D_8090CCE8, phi_f2_5, 1.0f, 0.01f);
        phi_f0_2 = D_8090CCD0;
    }
    temp_f2_6 = (10.0f - phi_f0_2) * 150.1f;
    phi_f2_6 = temp_f2_6;
    if (temp_f2_6 < 0.0f) {
        phi_f2_6 = 0.0f;
    }
    Math_ApproachF(&D_8090CCE4, phi_f2_6, 1.0f, 5.0f);
    if (D_8090CCDC.z < 1500.0f) {
        func_8019FAD8(&D_8090CCDC, 0x20DAU, D_8090CCE8);
    }
    if (D_8090CCD4 != 0) {
        Math_ApproachF(&D_8090CCD8, -200.0f, 1.0f, 2.0f);
    } else {
        Math_ApproachZeroF(&D_8090CCD8, 1.0f, 2.0f);
    }
    temp_f8 = (s32) D_8090CCD8;
    sp2C->unk_709A = (s16) temp_f8;
    sp2C->unk_7098 = (s16) temp_f8;
    sp2C->unk_7096 = (s16) temp_f8;
    if (((u32) D_8090CCD0 & 0xFF) > 0) {
        temp_a0_7 = Play_GetCamera(globalCtx, 0);
        sp54 = 1.6707964f;
        sp58 = 1.0f;
        sp5C = ((f32) func_800DFC68(temp_a0_7) * -0.0000958738f) + sp58;
        phi_v1 = 0;
        if (((u32) D_8090CCD0 & 0xFF) > 0) {
            do {
                sp72 = phi_v1;
                sp60 = randPlusMinusPoint5Scaled(700.0f) + globalCtx->view.eye.x;
                sp64 = (Rand_ZeroFloat(100.0f) + 150.0f) - 170.0f;
                sp68 = randPlusMinusPoint5Scaled(700.0f) + globalCtx->view.eye.z;
                phi_v1_2 = phi_v1;
                if (sp68 < 1160.0f) {
                    sp72 = phi_v1;
                    SkinMatrix_Vec3fMtxFMultXYZW(&globalCtx->projectionMatrix, (Vec3f *) &sp60, (Vec3f *) &sp48, &D_80911F24);
                    if (sp50 < 0.0f) {
                        phi_v1_2 = (s16) (phi_v1 - 1);
                    } else {
                        sp72 = phi_v1;
                        func_808FCF60(sp28->unk_870, &sp60, &sp54);
                        phi_v1_2 = phi_v1;
                    }
                }
                temp_v1_4 = phi_v1_2 + 1;
                phi_v1 = temp_v1_4;
            } while ((s32) temp_v1_4 < ((u32) D_8090CCD0 & 0xFF));
        }
    }
    SkinMatrix_Vec3fMtxFMultXYZW(&globalCtx->projectionMatrix, &D_8090D650, &D_809171B8, &D_80911F24);
    func_8019F1C0(&D_809171B8, 0x2028U);
    if (gSaveContext.language == 0) {
        gSaveContext.minigameScore = D_8090CCF8;
        return;
    }
    temp_t2 = D_8090CCF8;
    temp_f0_6 = (f32) temp_t2;
    phi_f0_3 = temp_f0_6;
    if ((s32) temp_t2 < 0) {
        phi_f0_3 = temp_f0_6 + 4294967296.0f;
    }
    gSaveContext.minigameScore = (u16) (u32) ((phi_f0_3 * phi_f0_3 * 0.0036f) + 0.5f);
}

s32 func_8090C884(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5) {
    if (arg1 == 8) {
        *arg4 -= arg5[1].home.rot.z;
    }
    return 0;
}

void func_8090C8BC(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {
    void *sp1C;
    u8 temp_v0;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;

    if (arg1 == 8) {
        temp_a2 = *arg0;
        sp1C = temp_a2;
        SysMatrix_MultiplyVector3fByState(D_8090CF1C, &D_809171E0);
        temp_v0 = D_8090CD08;
        if (temp_v0 == 1) {
            temp_v1 = temp_a2->unk_2B0;
            temp_a2->unk_2B0 = (void *) (temp_v1 + 8);
            temp_v1->unk_4 = &D_060074C8;
            temp_v1->unk_0 = 0xDE000000;
            return;
        }
        if (temp_v0 == 2) {
            temp_v1_2 = temp_a2->unk_2B0;
            temp_a2->unk_2B0 = (void *) (temp_v1_2 + 8);
            temp_v1_2->unk_4 = &D_06007350;
            temp_v1_2->unk_0 = 0xDE000000;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_8090C96C(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    Input *temp_v0_3;
    f32 temp_f2;
    s16 temp_v0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_f2 = this->projectedPos.z;
    if ((temp_f2 < 1500.0f) && (fabsf(this->projectedPos.x) < (100.0f + temp_f2))) {
        temp_v0 = sp40->polyOpa.p;
        sp40->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060020;
        sp38 = temp_v0;
        sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_8090D674 + (this[1].home.rot.x * 4)));
        SkelAnime_DrawSV(globalCtx, this->unk_1D4, (bitwise Vec3s *) this[1].colChkInfo.displacement.z, (s32) this->unk_1D2, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_8090C884, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_8090C8BC, this);
    }
    func_80908E08((GraphicsContext **) globalCtx);
    func_808FE3F8(globalCtx->specialEffects, (GraphicsContext **) globalCtx);
    func_80909AD0((GraphicsContext **) globalCtx);
    func_808FEE1C((GraphicsContext **) globalCtx);
    temp_v0_2 = D_809171F6;
    if (temp_v0_2 != 0) {
        D_809171F6 = temp_v0_2 - 1;
        if (D_809171F6 == 0) {
            if (D_809171C9 != 1) {
                func_801A89A8(0x8019);
            } else {
                func_801A89A8(0x8027);
            }
            if (D_809171C9 != 1) {
                func_801A89A8(0x8019);
            } else {
                func_801A89A8(0x8027);
            }
        }
    }
    if ((D_809171FC != 0) && (D_8090CCF4 != 0)) {
        func_80900A04(globalCtx);
        func_808FF5E0(&D_809101E8);
        func_808FF064(globalCtx, &D_809101D8, &D_809101E8, &D_80910B48, &D_809114A8);
        func_80900228(globalCtx, &D_809101E8, &D_80910B48);
        temp_v0_3 = globalCtx->state.input;
        D_8090CD44 = (s16) temp_v0_3->rel.stick_x;
        D_8090CD48 = (s16) temp_v0_3->rel.stick_y;
    }
    D_8090CCF4 = 1;
    SysMatrix_InsertTranslation(130.0f, 40.0f, 1300.0f, 0);
    Matrix_Scale(0.08f, 0.12f, 0.14f, 1);
    temp_v0_4 = sp40->polyOpa.p;
    sp40->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDA380003;
    sp34 = temp_v0_4;
    sp34->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = sp40->polyXlu.p;
    sp40->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDA380003;
    sp30 = temp_v0_5;
    sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_6 = sp40->polyOpa.p;
    sp40->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = (u32) &D_060153D0;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_7 = sp40->polyXlu.p;
    sp40->polyXlu.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = (u32) &D_06015470;
    temp_v0_7->words.w0 = 0xDE000000;
    if ((D_809171FC != 0) && (D_80917206 == 2)) {
        func_808FFF3C(globalCtx);
    }
}
