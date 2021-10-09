typedef struct GameState {
    /* 0x00 */ GraphicsContext *gfxCtx;
    /* 0x04 */ void (*main)(GameState *);
    /* 0x08 */ void (*destroy)(GameState *);
    /* 0x0C */ void (*nextGameStateInit)(GameState *);
    /* 0x10 */ u32 nextGameStateSize;
    /* 0x14 */ Input input[4];
    /* 0x74 */ TwoHeadArena heap;
    /* 0x84 */ GameAlloc alloc;
    /* 0x98 */ char pad98[0x3];
    /* 0x9B */ u8 running;
    /* 0x9C */ u32 frames;
    /* 0xA0 */ char padA0[0x2];
    /* 0xA2 */ u8 framerateDivisor;
    /* 0xA3 */ u8 unkA3;                            /* inferred */
} GameState;                                        /* size = 0xA4 */

typedef struct {
    /* 0x00000 */ View view;
    /* 0x00168 */ Font font;
    /* 0x11EF4 */ char pad11EF4[0x4];
    /* 0x11EF8 */ void *unk11EF8;                   /* inferred */
    /* 0x11EFC */ char pad11EFC[0x8];               /* maybe part of unk11EF8[3]? */
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ u16 unk11F06;                     /* inferred */
    /* 0x11F08 */ char pad11F08[0x2];
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad11F0B[0x1];
    /* 0x11F0C */ u8 unk11F0C;                      /* inferred */
    /* 0x11F0D */ char pad11F0D[0x3];               /* maybe part of unk11F0C[4]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ u16 unk11F14;                     /* inferred */
    /* 0x11F16 */ u16 unk11F16;                     /* inferred */
    /* 0x11F18 */ char pad11F18[0x2];
    /* 0x11F1A */ s16 unk11F1A;                     /* inferred */
    /* 0x11F1C */ s16 unk11F1C;                     /* inferred */
    /* 0x11F1E */ s16 unk11F1E;                     /* inferred */
    /* 0x11F20 */ char pad11F20[0x2];
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad11F23[0xC9];              /* maybe part of unk11F22[202]? */
    /* 0x11FEC */ u16 unk11FEC;                     /* inferred */
    /* 0x11FEE */ u16 unk11FEE;                     /* inferred */
    /* 0x11FF0 */ u16 unk11FF0;                     /* inferred */
    /* 0x11FF2 */ u16 unk11FF2;                     /* inferred */
    /* 0x11FF4 */ s16 unk11FF4;                     /* inferred */
    /* 0x11FF6 */ s16 unk11FF6;                     /* inferred */
    /* 0x11FF8 */ s16 unk11FF8;                     /* inferred */
    /* 0x11FFA */ s16 unk11FFA;                     /* inferred */
    /* 0x11FFC */ s16 unk11FFC;                     /* inferred */
    /* 0x11FFE */ char pad11FFE[0x14];              /* maybe part of unk11FFC[11]? */
    /* 0x12012 */ s16 unk12012;                     /* inferred */
    /* 0x12014 */ s16 unk12014;                     /* inferred */
    /* 0x12016 */ s16 unk12016;                     /* inferred */
    /* 0x12018 */ s16 unk12018;                     /* inferred */
    /* 0x1201A */ s16 unk1201A;                     /* inferred */
    /* 0x1201C */ s16 unk1201C;                     /* inferred */
    /* 0x1201E */ s16 unk1201E;                     /* inferred */
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ u8 unk12022;                      /* inferred */
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ u16 unk12024;                     /* inferred */
    /* 0x12026 */ s16 unk12026;                     /* inferred */
    /* 0x12028 */ char pad12028[0x2];
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ u16 unk1202C;                     /* inferred */
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad12030[0xA];               /* maybe part of unk1202E[6]? */
    /* 0x1203A */ s16 unk1203A;                     /* inferred */
    /* 0x1203C */ s16 unk1203C;                     /* inferred */
    /* 0x1203E */ char pad1203E[0x2];
    /* 0x12040 */ Actor *unk12040;                  /* inferred */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ s16 unk12046;                     /* inferred */
    /* 0x12048 */ char pad12048[0x2];
    /* 0x1204A */ s16 unk1204A;                     /* inferred */
    /* 0x1204C */ s16 unk1204C;                     /* inferred */
    /* 0x1204E */ s16 unk1204E;                     /* inferred */
    /* 0x12050 */ s16 unk12050;                     /* inferred */
    /* 0x12052 */ s16 unk12052;                     /* inferred */
    /* 0x12054 */ char pad12054[0x14];              /* maybe part of unk12052[11]? */
    /* 0x12068 */ s16 unk12068;                     /* inferred */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad12070[0x8];               /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad12080[0x4];
    /* 0x12084 */ ? *unk12084;                      /* inferred */
    /* 0x12088 */ char pad12088[0x4];
    /* 0x1208C */ ? *unk1208C;                      /* inferred */
    /* 0x12090 */ s16 unk12090;                     /* inferred */
    /* 0x12092 */ s16 unk12092;                     /* inferred */
    /* 0x12094 */ u8 unk12094;                      /* inferred */
    /* 0x12095 */ char pad12095[0x3];               /* maybe part of unk12094[4]? */
    /* 0x12098 */ f32 unk12098;                     /* inferred */
    /* 0x1209C */ s16 unk1209C;                     /* inferred */
    /* 0x1209E */ char pad1209E[0x2];
    /* 0x120A0 */ s32 unk120A0;                     /* inferred */
    /* 0x120A4 */ s16 unk120A4;                     /* inferred */
    /* 0x120A6 */ s16 unk120A6;                     /* inferred */
    /* 0x120A8 */ s16 unk120A8;                     /* inferred */
    /* 0x120AA */ char pad120AA[0x2];
    /* 0x120AC */ s16 unk120AC;                     /* inferred */
    /* 0x120AE */ char pad120AE[0x2];
    /* 0x120B0 */ s8 unk120B0;                      /* inferred */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad120B2[0xA];               /* maybe part of unk120B1[11]? */
    /* 0x120BC */ u16 unk120BC;                     /* inferred */
    /* 0x120BE */ s16 unk120BE;                     /* inferred */
    /* 0x120C0 */ s16 unk120C0;                     /* inferred */
    /* 0x120C2 */ s16 unk120C2;                     /* inferred */
    /* 0x120C4 */ s32 unk120C4;                     /* inferred */
    /* 0x120C8 */ s16 unk120C8;                     /* inferred */
    /* 0x120CA */ s16 unk120CA;                     /* inferred */
    /* 0x120CC */ s16 unk120CC;                     /* inferred */
    /* 0x120CE */ s16 unk120CE;                     /* inferred */
    /* 0x120D0 */ s16 unk120D0;                     /* inferred */
    /* 0x120D2 */ s16 unk120D2;                     /* inferred */
    /* 0x120D4 */ s16 unk120D4;                     /* inferred */
    /* 0x120D6 */ s16 unk120D6;                     /* inferred */
    /* 0x120D8 */ char pad120D8[0x8];               /* maybe part of unk120D6[5]? */
} MessageContext;                                   /* size = 0x120E0 */

struct _mips2c_stack_Message_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ Font *sp28;                          /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80147520 {};              /* size 0x0 */

struct _mips2c_stack_func_80147564 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80147624 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Input *sp1C;                         /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80147734 {};              /* size 0x0 */

struct _mips2c_stack_func_801477B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80147818 {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad14[0x8];                     /* maybe part of sp10[3]? */
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x48];                    /* maybe part of sp1C[19]? */
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ char pad6A[0xE];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80147F18 {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad14[0x30];                    /* maybe part of sp10[13]? */
    /* 0x44 */ s16 sp44;                            /* inferred */
    /* 0x46 */ char pad46[0xA];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80148558 {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ s32 sp4;                             /* inferred */
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad14[0x30];                    /* maybe part of sp10[13]? */
    /* 0x44 */ s16 sp44;                            /* inferred */
    /* 0x46 */ char pad46[0xA];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80148B98 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80148CBC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80148D64 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80149048 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801491DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80149454 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801496C8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8014995C {};              /* size 0x0 */

struct _mips2c_stack_func_80149C18 {};              /* size 0x0 */

struct _mips2c_stack_func_80149EBC {};              /* size 0x0 */

struct _mips2c_stack_func_80149F74 {
    /* 0x000 */ char pad0[0x1C];
    /* 0x01C */ void *sp1C;                         /* inferred */
    /* 0x020 */ char pad20[0x170];                  /* maybe part of sp1C[93]? */
    /* 0x190 */ u32 *sp190;                         /* inferred */
    /* 0x194 */ char pad194[0x4];
};                                                  /* size = 0x198 */

struct _mips2c_stack_func_8014AAD0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8014ADBC {
    /* 0x000 */ char pad0[0x44];
    /* 0x044 */ void *sp44;                         /* inferred */
    /* 0x048 */ char pad48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x050 */ s32 sp50;                           /* inferred */
    /* 0x054 */ char pad54[0x4];
    /* 0x058 */ void *sp58;                         /* inferred */
    /* 0x05C */ Font *sp5C;                         /* inferred */
    /* 0x060 */ char pad60[0xCA];                   /* maybe part of sp5C[51]? */
    /* 0x12A */ s16 sp12A;                          /* inferred */
    /* 0x12C */ s16 sp12C;                          /* inferred */
    /* 0x12E */ s16 sp12E;                          /* inferred */
    /* 0x130 */ s16 sp130;                          /* inferred */
    /* 0x132 */ char pad132[0x2];
    /* 0x134 */ u32 *sp134;                         /* inferred */
    /* 0x138 */ u16 sp138;                          /* inferred */
    /* 0x13A */ char pad13A[0xE];
};                                                  /* size = 0x148 */

struct _mips2c_stack_func_8014C70C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8014CC14 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8014CCB4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ MessageContext *sp24;                /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8014CDF0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8014CFDC {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x18];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8014D304 {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ s16 sp56;                            /* inferred */
    /* 0x58 */ s16 sp58;                            /* inferred */
    /* 0x5A */ s16 sp5A;                            /* inferred */
    /* 0x5C */ char pad5C[0x4];                     /* maybe part of sp5A[3]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_8014D62C {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8014D7B4 {
    /* 0x00 */ char pad0[0x74];
    /* 0x74 */ void *sp74;                          /* inferred */
    /* 0x78 */ char pad78[0x4];
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ char pad80[0x18];                    /* maybe part of sp7C[7]? */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ u32 sp9C;                            /* inferred */
    /* 0xA0 */ char padA0[0xC];                     /* maybe part of sp9C[4]? */
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char padAC[0x14];
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ char padC4[0x4];
    /* 0xC8 */ s32 spC8;                            /* inferred */
    /* 0xCC */ char padCC[0x6];                     /* maybe part of spC8[2]? */
    /* 0xD2 */ s16 spD2;                            /* inferred */
    /* 0xD4 */ s16 spD4;                            /* inferred */
    /* 0xD6 */ s16 spD6;                            /* inferred */
    /* 0xD8 */ s16 spD8;                            /* inferred */
    /* 0xDA */ s16 spDA;                            /* inferred */
    /* 0xDC */ char padDC[0x4];                     /* maybe part of spDA[3]? */
    /* 0xE0 */ s16 spE0;                            /* inferred */
    /* 0xE2 */ char padE2[0x8];                     /* maybe part of spE0[5]? */
    /* 0xEA */ s16 spEA;                            /* inferred */
    /* 0xEC */ void *spEC;                          /* inferred */
    /* 0xF0 */ void *spF0;                          /* inferred */
    /* 0xF4 */ char padF4[0x4];
};                                                  /* size = 0xF8 */

struct _mips2c_stack_func_80150A84 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s16 *sp1C;                           /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80150D08 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ Font *sp24;                          /* inferred */
    /* 0x28 */ MessageContext *sp28;                /* inferred */
    /* 0x2C */ char pad2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_801514B0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Font *sp2C;                          /* inferred */
    /* 0x30 */ char pad30[0x18];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_801518B0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80151938 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ MessageContext *sp24;                /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80151A68 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80151BB4 {};              /* size 0x0 */

struct _mips2c_stack_func_80151C9C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80151DA4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x10];                    /* maybe part of sp28[5]? */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80152434 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80152464 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80152498 {};              /* size 0x0 */

struct _mips2c_stack_func_8015268C {};              /* size 0x0 */

struct _mips2c_stack_func_80152C64 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80152CAC {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80152EC0 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80152FB8 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ char pad4[0x4];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ char padC[0x4];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad14[0x4];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80153750 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad28[0x78];                    /* maybe part of sp24[31]? */
    /* 0xA0 */ Gfx *spA0;                           /* inferred */
    /* 0xA4 */ char padA4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80153E7C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80153EF0 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ Gfx *sp70;                           /* inferred */
    /* 0x74 */ char pad74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_801541D4 {
    /* 0x00 */ char pad0[0x78];
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x6];                     /* maybe part of sp78[2]? */
    /* 0x82 */ u16 sp82;                            /* inferred */
    /* 0x84 */ Gfx *sp84;                           /* inferred */
    /* 0x88 */ char pad88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80156758 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8015680C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ PauseContext *sp2C;                  /* inferred */
    /* 0x30 */ MessageContext *sp30;                /* inferred */
    /* 0x34 */ char pad34[0xA];                     /* maybe part of sp30[3]? */
    /* 0x3E */ u16 sp3E;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ s16 sp4C;                            /* inferred */
    /* 0x4E */ char pad4E[0x2];
    /* 0x50 */ s16 sp50;                            /* inferred */
    /* 0x52 */ char pad52[0x16];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_801586A4 {};              /* size 0x0 */

s32 ShrinkWindow_GetLetterboxTarget();              /* extern */
s32 func_8010A0A4(GlobalContext *, u16, s32, s16 *); /* extern */
? func_8014546C(SramContext *);                     /* extern */
? func_80147008(PauseContext *, s32, s32);          /* extern */
? func_80147138(PauseContext *, s32, s32);          /* extern */
? func_8015966C(GlobalContext *, Gfx **, u16, GameInfo **); /* extern */
? func_8015B198(GlobalContext *);                   /* extern */
? func_8015E750(GlobalContext *, s32, u16, SaveContext *); /* extern */
? func_8015F8A8(GlobalContext *);                   /* extern */
? func_80178E3C(u8 *, u16, s32, ?);                 /* extern */
? func_8019B378();                                  /* extern */
? func_8019B38C(s32, SaveContext *, s16);           /* extern */
? func_8019B3D0(s32, ?);                            /* extern */
? func_8019B4B8(s32);                               /* extern */
? func_8019B544(s32, SaveContext *, s16);           /* extern */
s32 func_8019B5AC();                                /* extern */
? func_8019C268();                                  /* extern */
? func_8019C2E4(?, ?);                              /* extern */
? func_8019C300(u8, s32, GlobalContext *);          /* extern */
? func_8019C398(s8, ?);                             /* extern */
? func_8019CD08(?, u8 *, s32);                      /* extern */
s32 func_8019CF6C(u32, u16, s32, SaveContext *);    /* extern */
s32 func_8019CF78(GameInfo **);                     /* extern */
s32 func_8019CF9C(GameInfo **);                     /* extern */
? func_801A3000(u16, u8, u16);                      /* extern */
? func_801A3AEC(?);                                 /* extern */
? func_801A3FB4(?);                                 /* extern */
void func_80147520(s16 *);                          /* static */
void func_80147818(GlobalContext *arg0, Gfx **arg1, s16 arg2, s16 arg3); /* static */
void func_80147F18(GlobalContext *arg0, Gfx **arg1, s16 arg2, s16 arg3); /* static */
void func_80148558(GlobalContext *arg0, Gfx **arg1, s16 arg2, s16 arg3); /* static */
void func_80148CBC(GlobalContext *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80148D64(GlobalContext *arg0);            /* static */
void func_80149048(GlobalContext *arg0);            /* static */
void func_801491DC(GlobalContext *arg0);            /* static */
void func_80149454(GlobalContext *arg0);            /* static */
void func_801496C8(GlobalContext *arg0);            /* static */
void func_8014995C(GlobalContext *arg0, void *arg1, u32 **arg2, s32); /* static */
void func_80149C18(GlobalContext *arg0, s32, SaveContext *); /* static */
void func_80149EBC(GlobalContext *arg0, s16 arg1, u16, SaveContext *); /* static */
void func_8014AAD0(GlobalContext *arg0);            /* static */
void func_8014C70C(GlobalContext *arg0, u16 arg1, s16 arg2, void *); /* static */
void func_8014CC14(GlobalContext *arg0, u16 arg1, s32 *arg2, f32 *arg3, s16 arg4); /* static */
void func_8014CCB4(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3); /* static */
void func_8014CDF0(s32 arg0, u32 arg1, ? *arg2, s16); /* static */
void func_8014CFDC(GlobalContext *arg0);            /* static */
void func_8014D304(GlobalContext *arg0, s32 arg1, s32 *arg2, f32 *arg3, s16 *arg4); /* static */
void func_8014D62C(GlobalContext *arg0, s32 *arg1, f32 *arg2, s16 *arg3); /* static */
void func_8014D7B4(GlobalContext *arg0, s32, s32);  /* static */
void func_80150A84(GlobalContext *arg0);            /* static */
void func_801514B0(GlobalContext *arg0, s32 arg1, u8 arg2); /* static */
s32 func_80151C9C(GlobalContext *arg0, s32, s32, s16 *); /* static */
void func_80151DA4(GlobalContext *arg0, u16 arg1);  /* static */
void func_80152464(void *arg0, s32 arg1);           /* static */
void func_8015268C(GlobalContext *arg0, Gfx **arg1); /* static */
void func_80152C64(View *arg0);                     /* static */
void func_80152CAC(GlobalContext *arg0);            /* static */
void func_80152EC0(GlobalContext *arg0);            /* static */
void func_80152FB8(GameInfo **);                    /* static */
void func_80153750(GlobalContext *arg0, Gfx **arg1); /* static */
void func_80153E7C(GlobalContext *arg0, void *arg1, s32); /* static */
void func_80153EF0(GlobalContext *arg0, Gfx **arg1); /* static */
void func_801541D4(GlobalContext *arg0, Gfx **arg1); /* static */
void func_80156758(GlobalContext *arg0);            /* static */
extern ? D_02000400;
extern ? D_02000E60;
extern ? D_020029A0;
extern ? D_02002AA0;
extern ? D_0200B998;
static s32 D_801BDAA4 = 0;
static ? D_801C67C8;                                /* unable to generate initializer */
static ? D_801C6818;                                /* unable to generate initializer */
static ? D_801C6840;                                /* unable to generate initializer */
static ? D_801C6850;                                /* unable to generate initializer */
static u8 D_801C6A70 = 0;
static s16 D_801C6A74 = 0;
static s16 D_801C6A78 = 0;
static s16 D_801C6A7C = 0xFF;
static s16 D_801C6A80 = 0;
static s16 D_801C6A84 = 0;
static s16 D_801C6A88 = 0;
static s16 D_801C6A8C = 0xC;
static s16 D_801C6A90 = 1;
static s16 D_801C6A94 = 0;
static ? D_801C6AB8;                                /* unable to generate initializer */
static ? D_801C6B28;                                /* unable to generate initializer */
static ? D_801C6B98;                                /* unable to generate initializer */
static ? D_801CFB08;                                /* unable to generate initializer */
static s16 D_801CFC78 = 0;
static ? D_801CFC7A;                                /* unable to generate initializer */
static ? D_801CFC7C;                                /* unable to generate initializer */
static ? D_801CFC7E;                                /* unable to generate initializer */
static ? D_801CFC84;                                /* unable to generate initializer */
static ? D_801CFC88;                                /* unable to generate initializer */
static ? D_801CFC8C;                                /* unable to generate initializer */
static ? D_801CFC8E;                                /* unable to generate initializer */
static ? D_801CFC92;                                /* unable to generate initializer */
static u8 D_801CFC98 = 0;
static ? D_801CFCA4;                                /* unable to generate initializer */
static ? D_801CFCB8;                                /* unable to generate initializer */
static ? D_801CFCD8;                                /* unable to generate initializer */
static ? D_801CFCE4;                                /* unable to generate initializer */
static s16 D_801CFCF0 = 0;
static s16 D_801CFCF4 = 0x50;
static s16 D_801CFCF8 = 0xC8;
static s16 D_801CFCFC = 0xC;
static s16 D_801CFD00 = 0;
static s16 D_801CFD04 = 0;
static s16 D_801CFD08 = 0;
static s16 D_801CFD0C = 0;
static ? D_801CFD10;                                /* unable to generate initializer */
static ? D_801CFD1C;                                /* unable to generate initializer */
static s16 D_801CFD28 = 0;
static s16 D_801CFD2C = 0x50;
static s16 D_801CFD30 = 0xC8;
static s16 D_801CFD34 = 0xC;
static s16 D_801CFD38 = 0;
static s16 D_801CFD3C = 0;
static s16 D_801CFD40 = 0;
static s16 D_801CFD44 = 0;
static ? D_801CFD48;                                /* unable to generate initializer */
static ? D_801CFD54;                                /* unable to generate initializer */
static s16 D_801CFD60 = 0;
static s16 D_801CFD64 = 0x50;
static s16 D_801CFD68 = 0xC8;
static s16 D_801CFD6C = 0xC;
static s16 D_801CFD70 = 0;
static s16 D_801CFD74 = 0;
static s16 D_801CFD78 = 0;
static s16 D_801CFD7C = 0;
static s16 D_801CFD80 = 0;
static s16 D_801CFD84 = 0;
static s16 D_801CFD88 = 0;
static s16 D_801CFD8C = 0;
static s16 D_801CFD90 = 0;
static s16 D_801CFD98 = 0x40;
static s16 D_801CFD9C = 0x400;
static s16 D_801CFDA0 = 0x400;
static ? D_801CFDA4;                                /* unable to generate initializer */
static ? D_801CFDC8;                                /* unable to generate initializer */
static ? D_801CFDEC;                                /* unable to generate initializer */
static ? D_801CFE04;                                /* unable to generate initializer */
static ? D_801CFE1C;                                /* unable to generate initializer */
static ? D_801CFE34;                                /* unable to generate initializer */
static ? D_801CFE4C;                                /* unable to generate initializer */
static ? D_801CFE5C;                                /* unable to generate initializer */
static ? D_801CFE68;                                /* unable to generate initializer */
static ? D_801CFE74;                                /* unable to generate initializer */
static ? D_801CFEA4;                                /* unable to generate initializer */
static ? D_801CFED4;                                /* unable to generate initializer */
static ? D_801CFF04;                                /* unable to generate initializer */
static ? D_801CFF34;                                /* unable to generate initializer */
static ? D_801CFF64;                                /* unable to generate initializer */
static ? D_801CFF70;                                /* unable to generate initializer */
static ? D_801CFF7C;                                /* unable to generate initializer */
static ? D_801CFF88;                                /* unable to generate initializer */
static ? D_801CFF94;                                /* unable to generate initializer */
static ? D_801D0188;                                /* unable to generate initializer */
static ? D_801D023A;                                /* unable to generate initializer */
static ? D_801D0250;                                /* unable to generate initializer */
static ? D_801D0268;                                /* unable to generate initializer */
static ? D_801D027C;                                /* unable to generate initializer */
static ? D_801D0284;                                /* unable to generate initializer */
static ? D_801D028C;                                /* unable to generate initializer */
static ? D_801D02C0;                                /* unable to generate initializer */
static ? D_801D02D8;                                /* unable to generate initializer */
static ? D_801D02F8;                                /* unable to generate initializer */
static ? D_801D0334;                                /* unable to generate initializer */
static ? D_801D0340;                                /* unable to generate initializer */
static ? D_801D034C;                                /* unable to generate initializer */
static ? D_801D0358;                                /* unable to generate initializer */
static ? D_801D0364;                                /* unable to generate initializer */
static ? D_801D0378;                                /* unable to generate initializer */
static ? D_801D03A4;                                /* unable to generate initializer */
static ? D_801D03A8;                                /* unable to generate initializer */
static ? D_801D03C8;                                /* unable to generate initializer */
static ? D_801D03E8;                                /* unable to generate initializer */
static ? D_801D0408;                                /* unable to generate initializer */
static ? D_801D0428;                                /* unable to generate initializer */
static ? D_801D045A;                                /* unable to generate initializer */
static ? D_801D0462;                                /* unable to generate initializer */
static u8 D_801D0468 = 0;
static void D_801D7E04;                             /* unable to generate initializer */
static ? D_801D8A48;                                /* unable to generate initializer */
static s32 D_801F6B00;
static s32 D_801F6B04;
static s32 D_801F6B08;
static s16 D_801F6B0C;
static s16 D_801F6B0E;
static s16 D_801F6B10;
static s16 D_801F6B12;
static s16 D_801F6B14;
static s16 D_801F6B16;
static s16 D_801F6B18;
static s16 D_801F6B1A;
static s16 D_801F6B1C;
static s16 D_801F6B1E;
static s16 D_801F6B20;
static s16 D_801F6B22;
static ? D_801E201C;                                /* unable to generate initializer; const */
void *D_801CFD94 = (void *)0x1000000;
s8 D_801D039C[8] = {0x35, 0x5C, 0x5D, 0x5E, 0x35, 0, 0, 0};
void *D_801D88A0 = &D_801D7E04;
EffSparkParams D_801EF0C8;
u32 gBitFlags[32] = {
    1,
    2,
    4,
    8,
    0x10,
    0x20,
    0x40,
    0x80,
    0x100,
    0x200,
    0x400,
    0x800,
    0x1000,
    0x2000,
    0x4000,
    0x8000,
    0x10000,
    0x20000,
    0x40000,
    0x80000,
    0x100000,
    0x200000,
    0x400000,
    0x800000,
    0x1000000,
    0x2000000,
    0x4000000,
    0x8000000,
    0x10000000,
    0x20000000,
    0x40000000,
    0x80000000,
};
GameInfo *gGameInfo;
s16 gItemPrices[50] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x14,
    0x14,
    0x14,
    0x14,
    0,
    0x14,
    5,
    0x14,
    0x14,
    0x32,
    0x32,
    0xC8,
    0x14,
    0x14,
    0x14,
    0xC8,
    5,
    0,
    0xC8,
    0x14,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
SaveContext gSaveContext;

void func_80147520(void) {
    s16 temp_v0;

    D_801CFC98 = 0xFF;
    D_801CFCA4.unk10 = 0;
    temp_v0 = D_801CFCA4.unk10;
    D_801CFCA4.unkE = temp_v0;
    D_801CFCA4.unkC = temp_v0;
    D_801CFCA4.unkA = temp_v0;
    D_801CFCA4.unk8 = temp_v0;
    D_801CFCA4.unk6 = temp_v0;
    D_801CFCA4.unk4 = temp_v0;
    D_801CFCA4.unk2 = temp_v0;
    D_801CFCA4.unk0 = temp_v0;
}

void func_80147564(GlobalContext *globalCtx) {
    globalCtx->msgCtx.unk1204A = 0xBD;
    globalCtx->msgCtx.unk1204C = 0xB8;
    globalCtx->msgCtx.unk1204E = 0xB3;
    globalCtx->msgCtx.unk12050 = 0xAE;
    globalCtx->msgCtx.unk12052 = 0xA9;
    func_80147520();
    D_801F6B0C = 0x50;
    D_801F6B10 = 0x96;
    D_801F6B0E = 0xFF;
    D_801F6B12 = 0xA;
    D_801F6B16 = 0xA;
    D_801F6B14 = 0xA;
    D_801F6B18 = 0xFF;
    D_801F6B1C = 0xFF;
    D_801F6B1A = 0x32;
    D_801F6B1E = 0xA;
    D_801F6B22 = 0xA;
    D_801F6B20 = 0xA;
}

u32 func_80147624(GlobalContext *globalCtx) {
    Input *sp1C;
    Input *temp_v0;
    Input *temp_v0_2;
    u16 temp_v1;
    u16 temp_v1_2;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_v0_3;
    u32 phi_a0;
    u16 phi_v1;
    u32 phi_v0;
    u32 phi_a0_2;

    temp_v0 = globalCtx->state.input;
    if ((globalCtx->msgCtx.unk12020 == 0x10) || (globalCtx->msgCtx.unk12020 == 0x11)) {
        temp_a0_2 = ~(temp_v0->press.button | 0xFFFF7FFF) == 0;
        phi_a0_2 = temp_a0_2;
        if (temp_a0_2 != 0) {
            sp1C = temp_v0;
            play_sound(0x4818U);
            phi_a0_2 = ~(temp_v0->press.button | 0xFFFF7FFF) == 0;
        }
        return phi_a0_2;
    }
    temp_v0_2 = globalCtx->state.input;
    temp_v1 = temp_v0_2->press.button;
    temp_a0 = ~(temp_v1 | 0xFFFF7FFF) == 0;
    phi_a0 = temp_a0;
    phi_v1 = temp_v1;
    if ((temp_a0 != 0) || (~(temp_v1 | ~0x4000) == 0) || (~(temp_v1 | ~8) == 0)) {
        sp1C = temp_v0_2;
        play_sound(0x4818U);
        temp_v1_2 = temp_v0_2->press.button;
        phi_a0 = ~(temp_v1_2 | 0xFFFF7FFF) == 0;
        phi_v1 = temp_v1_2;
    }
    phi_v0 = phi_a0;
    if (phi_a0 == 0) {
        temp_v0_3 = ~(phi_v1 | ~0x4000) == 0;
        phi_v0 = temp_v0_3;
        if (temp_v0_3 == 0) {
            phi_v0 = ~(phi_v1 | ~8) == 0;
        }
    }
    return phi_v0;
}

u32 func_80147734(GlobalContext *globalCtx) {
    u16 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 phi_v0;

    if ((globalCtx->msgCtx.unk12020 == 0x10) || (globalCtx->msgCtx.unk12020 == 0x11)) {
        return ~(globalCtx->state.input[0].press.button | 0xFFFF7FFF) == 0;
    }
    temp_v1 = globalCtx->state.input[0].press.button;
    temp_v0 = ~(temp_v1 | 0xFFFF7FFF) == 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        temp_v0_2 = ~(temp_v1 | ~0x4000) == 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            phi_v0 = ~(temp_v1 | ~8) == 0;
        }
    }
    return phi_v0;
}

void func_801477B4(GlobalContext *globalCtx) {
    MessageContext *temp_v0;

    temp_v0 = &globalCtx->msgCtx;
    if (globalCtx->msgCtx.unk11F10 != 0) {
        temp_v0->unk12023 = 2;
        temp_v0->unk11F22 = 0x43;
        temp_v0->unk12020 = 0;
        play_sound(0U);
    }
}

void func_80147818(GlobalContext *arg0, Gfx **arg1, s16 arg2, s16 arg3) {
    s16 sp68;
    void *sp1C;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 sp4;
    Gfx *temp_v0;
    Gfx *temp_v0_5;
    s16 temp_a1;
    s16 temp_a3_3;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_t1_3;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t5;
    s16 temp_t8;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t1_2;
    s32 temp_t7;
    void *temp_a0;
    void *temp_a1_3;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    s32 phi_v1;
    s32 phi_a1;
    s16 phi_a3;
    s32 phi_t1;
    s16 phi_t5;
    s16 phi_t1_2;
    s16 phi_t2;
    Gfx *phi_v0;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_t5_2;
    s32 phi_t1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;

    temp_v0 = *arg1;
    sp1C = arg0 + 0x10000;
    if (arg0->msgCtx.unk12090 == 0) {
        temp_a1 = D_801CFCF0;
        temp_a2 = D_801CFD00 * 6;
        temp_a0 = temp_a2 + &D_801CFCD8;
        temp_t3 = temp_a0->unk0;
        temp_a3 = temp_a1 - temp_t3;
        if (temp_a3 < 0) {
            phi_v1_2 = -temp_a3;
        } else {
            phi_v1_2 = temp_a3;
        }
        temp_t0 = D_801CFCFC;
        temp_t1 = D_801CFCF4;
        temp_t4 = temp_a0->unk2;
        temp_lo = phi_v1_2 / (s32) temp_t0;
        temp_a3_2 = temp_t1 - temp_t4;
        if (temp_a3_2 < 0) {
            phi_v1 = -temp_a3_2;
        } else {
            phi_v1 = temp_a3_2;
        }
        temp_a3_3 = D_801CFCF8;
        temp_t2 = temp_a0->unk4;
        temp_t7 = temp_a3_3 - temp_t2;
        sp68 = (s16) (phi_v1 / (s32) temp_t0);
        sp4 = temp_t7;
        if (temp_t7 < 0) {
            phi_v1_3 = -temp_t7;
        } else {
            phi_v1_3 = sp4;
        }
        if ((s32) temp_a1 >= (s32) temp_t3) {
            phi_a1 = (temp_a1 - (s16) temp_lo) << 0x10;
        } else {
            phi_a1 = (temp_a1 + (s16) temp_lo) << 0x10;
        }
        temp_a1_2 = phi_a1 >> 0x10;
        if ((s32) temp_t1 >= (s32) temp_t4) {
            phi_t1 = (temp_t1 - sp68) << 0x10;
        } else {
            phi_t1 = (temp_t1 + sp68) << 0x10;
        }
        temp_t1_2 = phi_t1 >> 0x10;
        if ((s32) temp_a3_3 >= (s32) temp_t2) {
            D_801CFCF0 = (s16) temp_a1_2;
            phi_a3 = (s16) (temp_a3_3 - (s16) (phi_v1_3 / (s32) temp_t0));
        } else {
            D_801CFCF0 = (s16) temp_a1_2;
            phi_a3 = (s16) (temp_a3_3 + (s16) (phi_v1_3 / (s32) temp_t0));
        }
        sp10 = (s32) temp_t3;
        temp_a1_3 = temp_a2 + &D_801CFCE4;
        temp_t5 = D_801CFD04;
        temp_t8 = temp_a1_3->unk0;
        temp_a0_2 = temp_t5 - temp_t8;
        sp4 = (s32) temp_t8;
        if (temp_a0_2 < 0) {
            D_801CFCF8 = phi_a3;
            D_801CFCF4 = (s16) temp_t1_2;
            sp8 = (s32) temp_t2;
            phi_v1_4 = -temp_a0_2;
        } else {
            D_801CFCF8 = phi_a3;
            D_801CFCF4 = (s16) temp_t1_2;
            sp8 = (s32) temp_t2;
            phi_v1_4 = temp_a0_2;
        }
        spC = (s32) temp_t4;
        temp_lo_2 = phi_v1_4 / (s32) temp_t0;
        temp_t1_3 = D_801CFD08;
        temp_t3_2 = temp_a1_3->unk2;
        temp_a0_3 = temp_t1_3 - temp_t3_2;
        if (temp_a0_3 < 0) {
            phi_v1_5 = -temp_a0_3;
        } else {
            phi_v1_5 = temp_a0_3;
        }
        temp_lo_3 = phi_v1_5 / (s32) temp_t0;
        temp_t2_2 = D_801CFD0C;
        temp_t4_2 = temp_a1_3->unk4;
        temp_a0_4 = temp_t2_2 - temp_t4_2;
        if (temp_a0_4 < 0) {
            phi_v1_6 = -temp_a0_4;
        } else {
            phi_v1_6 = temp_a0_4;
        }
        if ((s32) temp_t5 >= sp4) {
            phi_t5_2 = (temp_t5 - (s16) temp_lo_2) << 0x10;
        } else {
            phi_t5_2 = (temp_t5 + (s16) temp_lo_2) << 0x10;
        }
        phi_t5 = (s16) (phi_t5_2 >> 0x10);
        if ((s32) temp_t1_3 >= (s32) temp_t3_2) {
            phi_t1_3 = (temp_t1_3 - (s16) temp_lo_3) << 0x10;
        } else {
            phi_t1_3 = (temp_t1_3 + (s16) temp_lo_3) << 0x10;
        }
        phi_t1_2 = (s16) (phi_t1_3 >> 0x10);
        if ((s32) temp_t2_2 >= (s32) temp_t4_2) {
            phi_t2 = (s16) (temp_t2_2 - (s16) (phi_v1_6 / (s32) temp_t0));
        } else {
            phi_t2 = (s16) (temp_t2_2 + (s16) (phi_v1_6 / (s32) temp_t0));
        }
        temp_t0_2 = temp_t0 - 1;
        D_801CFCFC = temp_t0_2;
        if (temp_t0_2 == 0) {
            D_801CFCF0 = (s16) sp10;
            D_801CFCF4 = (s16) spC;
            D_801CFCF8 = (s16) sp8;
            D_801CFD00 = D_801CFD00 ^ 1;
            D_801CFCFC = 0xC;
            phi_t5 = (s16) sp4;
            phi_t1_2 = temp_t3_2;
            phi_t2 = temp_t4_2;
        }
        temp_v0->words.w0 = 0xE7000000;
        temp_v0->words.w1 = 0;
        temp_v0_2 = temp_v0 + 8;
        temp_v0_2->unk0 = 0xFC309661;
        temp_v0_2->unk4 = 0x552EFF7F;
        temp_v0_3 = temp_v0_2 + 8;
        temp_v0_3->unk0 = 0xFA000000;
        temp_v0_4 = temp_v0_3 + 8;
        temp_v0_3->unk4 = (s32) ((D_801CFCF0 << 0x18) | ((D_801CFCF4 & 0xFF) << 0x10) | ((D_801CFCF8 & 0xFF) << 8) | 0xFF);
        temp_v0_4->unk0 = 0xFB000000;
        temp_v0_4->unk4 = (s32) ((phi_t5 << 0x18) | ((phi_t1_2 & 0xFF) << 0x10) | ((phi_t2 & 0xFF) << 8) | 0xFF);
        temp_v0_5 = temp_v0_4 + 8;
        D_801CFD08 = phi_t1_2;
        D_801CFD0C = phi_t2;
        D_801CFD04 = phi_t5;
        phi_v0 = temp_v0_5;
        if (sp1C->unk6F20 == 0) {
            temp_v0_5->words.w0 = 0xFD900000;
            temp_v0_6 = temp_v0_5 + 8;
            temp_v0_5->words.w1 = arg0 + 0xC270;
            temp_v0_6->unk0 = 0xF5900000;
            temp_v0_6->unk4 = 0x7080200;
            temp_v0_7 = temp_v0_6 + 8;
            temp_v0_7->unk0 = 0xE6000000;
            temp_v0_7->unk4 = 0;
            temp_v0_8 = temp_v0_7 + 8;
            temp_v0_8->unk0 = 0xF3000000;
            temp_v0_8->unk4 = 0x703F800;
            temp_v0_9 = temp_v0_8 + 8;
            temp_v0_9->unk0 = 0xE7000000U;
            temp_v0_9->unk4 = 0;
            temp_v0_10 = temp_v0_9 + 8;
            temp_v0_10->unk0 = 0xF5800200;
            temp_v0_10->unk4 = 0x80200;
            temp_v0_11 = temp_v0_10 + 8;
            temp_v0_11->unk0 = 0xF2000000;
            temp_v0_11->unk4 = 0x3C03C;
            temp_v0_12 = temp_v0_11 + 8;
            temp_a0_5 = D_801F6B00;
            temp_v0_12->unk0 = (s32) (((((arg2 + temp_a0_5) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg3 + temp_a0_5) * 4) & 0xFFF));
            temp_v0_12->unk4 = (s32) ((((arg2 * 4) & 0xFFF) << 0xC) | ((arg3 * 4) & 0xFFF));
            temp_v0_13 = temp_v0_12 + 8;
            temp_v0_13->unk0 = 0xE1000000;
            temp_v0_13->unk4 = 0;
            temp_v0_14 = temp_v0_13 + 8;
            temp_v0_14->unk0 = 0xF1000000;
            temp_a0_6 = D_801F6B04 & 0xFFFF;
            temp_v0_14->unk4 = (s32) ((temp_a0_6 << 0x10) | temp_a0_6);
            phi_v0 = temp_v0_14 + 8;
        }
        temp_v1 = arg0 + 0x4908;
        temp_v1->unk12023 = (s8) (temp_v1->unk12023 + 1);
        *arg1 = phi_v0;
    }
}

void func_80147F18(GlobalContext *arg0, Gfx **arg1, s16 arg2, s16 arg3) {
    s16 sp44;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 sp4;
    Gfx *temp_t0;
    s16 temp_a0;
    s16 temp_a2_3;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t1;
    s16 temp_t1_3;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t5;
    s16 temp_t6;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t1_2;
    s32 temp_t7;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    void *temp_a0_3;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *temp_t0_7;
    void *temp_v0;
    void *temp_v1;
    s32 phi_v0;
    s32 phi_a0;
    s16 phi_a2;
    s32 phi_t1;
    s16 phi_t3;
    s16 phi_t4;
    s16 phi_t5;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s32 phi_v0_6;

    temp_t0 = *arg1;
    if (arg0->msgCtx.unk12090 == 0) {
        temp_a1 = D_801CFD38 * 6;
        temp_v1 = temp_a1 + &D_801CFD10;
        temp_a0 = D_801CFD28;
        temp_t3 = temp_v1->unk0;
        temp_a2 = temp_a0 - temp_t3;
        if (temp_a2 < 0) {
            phi_v0_2 = -temp_a2;
        } else {
            phi_v0_2 = temp_a2;
        }
        temp_a3 = D_801CFD34;
        temp_t1 = D_801CFD2C;
        temp_t4 = temp_v1->unk2;
        temp_lo = phi_v0_2 / (s32) temp_a3;
        temp_a2_2 = temp_t1 - temp_t4;
        if (temp_a2_2 < 0) {
            phi_v0 = -temp_a2_2;
        } else {
            phi_v0 = temp_a2_2;
        }
        temp_a2_3 = D_801CFD30;
        temp_t2 = temp_v1->unk4;
        temp_t7 = temp_a2_3 - temp_t2;
        sp44 = (s16) (phi_v0 / (s32) temp_a3);
        sp4 = temp_t7;
        if (temp_t7 < 0) {
            phi_v0_3 = -temp_t7;
        } else {
            phi_v0_3 = sp4;
        }
        if ((s32) temp_a0 >= (s32) temp_t3) {
            phi_a0 = (temp_a0 - (s16) temp_lo) << 0x10;
        } else {
            phi_a0 = (temp_a0 + (s16) temp_lo) << 0x10;
        }
        temp_a0_2 = phi_a0 >> 0x10;
        if ((s32) temp_t1 >= (s32) temp_t4) {
            phi_t1 = (temp_t1 - sp44) << 0x10;
        } else {
            phi_t1 = (temp_t1 + sp44) << 0x10;
        }
        temp_t1_2 = phi_t1 >> 0x10;
        if ((s32) temp_a2_3 >= (s32) temp_t2) {
            D_801CFD28 = (s16) temp_a0_2;
            phi_a2 = (s16) (temp_a2_3 - (s16) (phi_v0_3 / (s32) temp_a3));
        } else {
            D_801CFD28 = (s16) temp_a0_2;
            phi_a2 = (s16) (temp_a2_3 + (s16) (phi_v0_3 / (s32) temp_a3));
        }
        sp10 = (s32) temp_t3;
        temp_a0_3 = temp_a1 + &D_801CFD1C;
        temp_t3_2 = D_801CFD3C;
        temp_t6 = temp_a0_3->unk0;
        temp_v1_2 = temp_t3_2 - temp_t6;
        sp4 = (s32) temp_t6;
        if (temp_v1_2 < 0) {
            D_801CFD30 = phi_a2;
            D_801CFD2C = (s16) temp_t1_2;
            sp8 = (s32) temp_t2;
            phi_v0_4 = -temp_v1_2;
        } else {
            D_801CFD30 = phi_a2;
            D_801CFD2C = (s16) temp_t1_2;
            sp8 = (s32) temp_t2;
            phi_v0_4 = temp_v1_2;
        }
        spC = (s32) temp_t4;
        temp_lo_2 = phi_v0_4 / (s32) temp_a3;
        temp_t4_2 = D_801CFD40;
        temp_t1_3 = temp_a0_3->unk2;
        temp_v1_3 = temp_t4_2 - temp_t1_3;
        if (temp_v1_3 < 0) {
            phi_v0_5 = -temp_v1_3;
        } else {
            phi_v0_5 = temp_v1_3;
        }
        temp_lo_3 = phi_v0_5 / (s32) temp_a3;
        temp_t5 = D_801CFD44;
        temp_t2_2 = temp_a0_3->unk4;
        temp_v1_4 = temp_t5 - temp_t2_2;
        if (temp_v1_4 < 0) {
            phi_v0_6 = -temp_v1_4;
        } else {
            phi_v0_6 = temp_v1_4;
        }
        if ((s32) temp_t3_2 >= sp4) {
            phi_t3 = (s16) (temp_t3_2 - (s16) temp_lo_2);
        } else {
            phi_t3 = (s16) (temp_t3_2 + (s16) temp_lo_2);
        }
        D_801CFD3C = phi_t3;
        if ((s32) temp_t4_2 >= (s32) temp_t1_3) {
            phi_t4 = (s16) (temp_t4_2 - (s16) temp_lo_3);
        } else {
            phi_t4 = (s16) (temp_t4_2 + (s16) temp_lo_3);
        }
        D_801CFD40 = phi_t4;
        if ((s32) temp_t5 >= (s32) temp_t2_2) {
            phi_t5 = (s16) (temp_t5 - (s16) (phi_v0_6 / (s32) temp_a3));
        } else {
            phi_t5 = (s16) (temp_t5 + (s16) (phi_v0_6 / (s32) temp_a3));
        }
        D_801CFD44 = phi_t5;
        temp_a3_2 = temp_a3 - 1;
        D_801CFD34 = temp_a3_2;
        if (temp_a3_2 == 0) {
            D_801CFD28 = (s16) sp10;
            D_801CFD2C = (s16) spC;
            D_801CFD30 = (s16) sp8;
            D_801CFD38 = D_801CFD38 ^ 1;
            D_801CFD34 = 0xC;
            D_801CFD3C = (s16) sp4;
            D_801CFD40 = temp_t1_3;
            D_801CFD44 = temp_t2_2;
        }
        temp_t0->words.w0 = 0xE7000000;
        temp_t0->words.w1 = 0;
        temp_t0_2 = temp_t0 + 8;
        temp_t0_2->unk0 = 0xE200001C;
        temp_t0_2->unk4 = 0x504240;
        temp_t0_3 = temp_t0_2 + 8;
        temp_t0_3->unk0 = 0xFCFFFFFF;
        temp_t0_3->unk4 = 0xFFFDF6FB;
        temp_t0_4 = temp_t0_3 + 8;
        temp_t0_4->unk0 = 0xFA000000;
        temp_t0_5 = temp_t0_4 + 8;
        temp_t0_4->unk4 = (s32) ((D_801CFD28 << 0x18) | ((D_801CFD2C & 0xFF) << 0x10) | ((D_801CFD30 & 0xFF) << 8) | 0x78);
        temp_t0_5->unk0 = (s32) ((((arg2 + 0x11) & 0x3FF) << 0xE) | 0xF6000000 | (((arg3 + 0xB) & 0x3FF) * 4));
        temp_t0_5->unk4 = (s32) ((((arg2 + 3) & 0x3FF) << 0xE) | ((arg3 & 0x3FF) * 4));
        temp_t0_6 = temp_t0_5 + 8;
        temp_t0_6->unk0 = (s32) ((((arg2 + 0xE) & 0x3FF) << 0xE) | 0xF6000000 | (((arg3 + 0xD) & 0x3FF) * 4));
        temp_t0_6->unk4 = (s32) ((((arg2 + 6) & 0x3FF) << 0xE) | (((arg3 - 2) & 0x3FF) * 4));
        temp_t0_7 = temp_t0_6 + 8;
        temp_t0_7->unk0 = 0xE7000000U;
        temp_t0_7->unk4 = 0;
        temp_v0 = arg0 + 0x4908;
        temp_v0->unk12023 = (s8) (temp_v0->unk12023 + 1);
        *arg1 = temp_t0_7 + 8;
    }
}

void func_80148558(GlobalContext *arg0, Gfx **arg1, s16 arg2, s16 arg3) {
    s16 sp44;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 sp4;
    Gfx *temp_t0;
    s16 temp_a0;
    s16 temp_a2_3;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t1;
    s16 temp_t1_3;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t5;
    s16 temp_t6;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t1_2;
    s32 temp_t7;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    void *temp_a0_3;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *temp_t0_7;
    void *temp_v0;
    void *temp_v1;
    s32 phi_v0;
    s32 phi_a0;
    s16 phi_a2;
    s32 phi_t1;
    s16 phi_t3;
    s16 phi_t4;
    s16 phi_t5;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s32 phi_v0_6;

    temp_t0 = *arg1;
    if (arg0->msgCtx.unk12090 == 0) {
        temp_a1 = D_801CFD70 * 6;
        temp_v1 = temp_a1 + &D_801CFD48;
        temp_a0 = D_801CFD60;
        temp_t3 = temp_v1->unk0;
        temp_a2 = temp_a0 - temp_t3;
        if (temp_a2 < 0) {
            phi_v0_2 = -temp_a2;
        } else {
            phi_v0_2 = temp_a2;
        }
        temp_a3 = D_801CFD6C;
        temp_t1 = D_801CFD64;
        temp_t4 = temp_v1->unk2;
        temp_lo = phi_v0_2 / (s32) temp_a3;
        temp_a2_2 = temp_t1 - temp_t4;
        if (temp_a2_2 < 0) {
            phi_v0 = -temp_a2_2;
        } else {
            phi_v0 = temp_a2_2;
        }
        temp_a2_3 = D_801CFD68;
        temp_t2 = temp_v1->unk4;
        temp_t7 = temp_a2_3 - temp_t2;
        sp44 = (s16) (phi_v0 / (s32) temp_a3);
        sp4 = temp_t7;
        if (temp_t7 < 0) {
            phi_v0_3 = -temp_t7;
        } else {
            phi_v0_3 = sp4;
        }
        if ((s32) temp_a0 >= (s32) temp_t3) {
            phi_a0 = (temp_a0 - (s16) temp_lo) << 0x10;
        } else {
            phi_a0 = (temp_a0 + (s16) temp_lo) << 0x10;
        }
        temp_a0_2 = phi_a0 >> 0x10;
        if ((s32) temp_t1 >= (s32) temp_t4) {
            phi_t1 = (temp_t1 - sp44) << 0x10;
        } else {
            phi_t1 = (temp_t1 + sp44) << 0x10;
        }
        temp_t1_2 = phi_t1 >> 0x10;
        if ((s32) temp_a2_3 >= (s32) temp_t2) {
            D_801CFD60 = (s16) temp_a0_2;
            phi_a2 = (s16) (temp_a2_3 - (s16) (phi_v0_3 / (s32) temp_a3));
        } else {
            D_801CFD60 = (s16) temp_a0_2;
            phi_a2 = (s16) (temp_a2_3 + (s16) (phi_v0_3 / (s32) temp_a3));
        }
        sp10 = (s32) temp_t3;
        temp_a0_3 = temp_a1 + &D_801CFD54;
        temp_t3_2 = D_801CFD74;
        temp_t6 = temp_a0_3->unk0;
        temp_v1_2 = temp_t3_2 - temp_t6;
        sp4 = (s32) temp_t6;
        if (temp_v1_2 < 0) {
            D_801CFD68 = phi_a2;
            D_801CFD64 = (s16) temp_t1_2;
            sp8 = (s32) temp_t2;
            phi_v0_4 = -temp_v1_2;
        } else {
            D_801CFD68 = phi_a2;
            D_801CFD64 = (s16) temp_t1_2;
            sp8 = (s32) temp_t2;
            phi_v0_4 = temp_v1_2;
        }
        spC = (s32) temp_t4;
        temp_lo_2 = phi_v0_4 / (s32) temp_a3;
        temp_t4_2 = D_801CFD78;
        temp_t1_3 = temp_a0_3->unk2;
        temp_v1_3 = temp_t4_2 - temp_t1_3;
        if (temp_v1_3 < 0) {
            phi_v0_5 = -temp_v1_3;
        } else {
            phi_v0_5 = temp_v1_3;
        }
        temp_lo_3 = phi_v0_5 / (s32) temp_a3;
        temp_t5 = D_801CFD7C;
        temp_t2_2 = temp_a0_3->unk4;
        temp_v1_4 = temp_t5 - temp_t2_2;
        if (temp_v1_4 < 0) {
            phi_v0_6 = -temp_v1_4;
        } else {
            phi_v0_6 = temp_v1_4;
        }
        if ((s32) temp_t3_2 >= sp4) {
            phi_t3 = (s16) (temp_t3_2 - (s16) temp_lo_2);
        } else {
            phi_t3 = (s16) (temp_t3_2 + (s16) temp_lo_2);
        }
        D_801CFD74 = phi_t3;
        if ((s32) temp_t4_2 >= (s32) temp_t1_3) {
            phi_t4 = (s16) (temp_t4_2 - (s16) temp_lo_3);
        } else {
            phi_t4 = (s16) (temp_t4_2 + (s16) temp_lo_3);
        }
        D_801CFD78 = phi_t4;
        if ((s32) temp_t5 >= (s32) temp_t2_2) {
            phi_t5 = (s16) (temp_t5 - (s16) (phi_v0_6 / (s32) temp_a3));
        } else {
            phi_t5 = (s16) (temp_t5 + (s16) (phi_v0_6 / (s32) temp_a3));
        }
        D_801CFD7C = phi_t5;
        temp_a3_2 = temp_a3 - 1;
        D_801CFD6C = temp_a3_2;
        if (temp_a3_2 == 0) {
            D_801CFD60 = (s16) sp10;
            D_801CFD64 = (s16) spC;
            D_801CFD68 = (s16) sp8;
            D_801CFD70 = D_801CFD70 ^ 1;
            D_801CFD6C = 0xC;
            D_801CFD74 = (s16) sp4;
            D_801CFD78 = temp_t1_3;
            D_801CFD7C = temp_t2_2;
        }
        temp_t0->words.w0 = 0xE7000000;
        temp_t0->words.w1 = 0;
        temp_t0_2 = temp_t0 + 8;
        temp_t0_2->unk0 = 0xE200001C;
        temp_t0_2->unk4 = 0x504240;
        temp_t0_3 = temp_t0_2 + 8;
        temp_t0_3->unk0 = 0xFCFFFFFF;
        temp_t0_3->unk4 = 0xFFFDF6FB;
        temp_t0_4 = temp_t0_3 + 8;
        temp_t0_4->unk0 = 0xFA000000;
        temp_t0_5 = temp_t0_4 + 8;
        temp_t0_4->unk4 = (s32) ((D_801CFD60 << 0x18) | ((D_801CFD64 & 0xFF) << 0x10) | ((D_801CFD68 & 0xFF) << 8) | 0x78);
        temp_t0_5->unk0 = (s32) ((((arg2 + 0x1D) & 0x3FF) << 0xE) | 0xF6000000 | (((arg3 + 0xB) & 0x3FF) * 4));
        temp_t0_5->unk4 = (s32) ((((arg2 + 3) & 0x3FF) << 0xE) | ((arg3 & 0x3FF) * 4));
        temp_t0_6 = temp_t0_5 + 8;
        temp_t0_6->unk0 = (s32) ((((arg2 + 0x1A) & 0x3FF) << 0xE) | 0xF6000000 | (((arg3 + 0xD) & 0x3FF) * 4));
        temp_t0_6->unk4 = (s32) ((((arg2 + 6) & 0x3FF) << 0xE) | (((arg3 - 2) & 0x3FF) * 4));
        temp_t0_7 = temp_t0_6 + 8;
        temp_t0_7->unk0 = 0xE7000000U;
        temp_t0_7->unk4 = 0;
        temp_v0 = arg0 + 0x4908;
        temp_v0->unk12023 = (s8) (temp_v0->unk12023 + 1);
        *arg1 = temp_t0_7 + 8;
    }
}

void func_80148B98(GlobalContext *globalCtx, u8 bParm2) {
    MessageContext *temp_v0;
    MessageContext *temp_v0_3;
    s32 temp_a1;
    s8 temp_v0_2;
    s32 phi_v1;

    temp_a1 = bParm2 & 0xFF;
    if (((s32) globalCtx->state.input[0].rel.stick_y >= 0x1E) && (temp_v0 = &globalCtx->msgCtx, (D_801CFD80 == 0))) {
        D_801CFD80 = 1;
        temp_v0->choiceIndex += -1;
        if ((s32) temp_v0->choiceIndex >= 0x81) {
            temp_v0->choiceIndex = 0;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    temp_v0_2 = globalCtx->state.input[0].rel.stick_y;
    if (((s32) temp_v0_2 < -0x1D) && (D_801CFD80 == 0)) {
        D_801CFD80 = 1;
        temp_v0_3 = &globalCtx->msgCtx;
        temp_v0_3->choiceIndex += 1;
        if (temp_a1 < (s32) temp_v0_3->choiceIndex) {
            temp_v0_3->choiceIndex = (u8) temp_a1;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    phi_v1 = (s32) temp_v0_2;
    if ((s32) temp_v0_2 < 0) {
        phi_v1 = -(s32) temp_v0_2;
    }
    if (phi_v1 < 0x1E) {
        D_801CFD80 = 0;
    }
}

void func_80148CBC(GlobalContext *arg0, GlobalContext *arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v1;

    arg0->msgCtx.unk11FF4 = 0x30;
    if ((arg2 & 0xFF) == 1) {
        temp_v0 = arg0 + 0x4908;
        temp_v0->unk11FF6 = (s16) (temp_v0 + (temp_v0->unk12021 * 2))->unk12000;
        phi_v1 = temp_v0 + 0x10000;
    } else {
        temp_v0_2 = arg0 + 0x4908;
        temp_v0_2->unk11FF6 = (s16) (temp_v0_2 + (temp_v0_2->unk12021 * 2))->unk11FFE;
        phi_v1 = temp_v0_2 + 0x10000;
    }
    func_80147818(arg1, (Gfx **) phi_v1->unk1FF4, phi_v1->unk1FF6);
}

void func_80148D64(GlobalContext *arg0) {
    void *sp20;
    s16 temp_v0;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_t1;
    void *temp_t2;
    void *temp_t6;
    void *temp_t7;
    u8 phi_a1;
    u8 phi_a1_2;
    void *phi_a3;
    void *phi_s0;

    temp_a3 = arg0 + 0x4908;
    phi_a3 = temp_a3;
    phi_s0 = temp_a3 + 0x10000;
    if ((s32) arg0->msgCtx.unk120A6 < -0x1D) {
        temp_a3_2 = arg0 + 0x4908;
        temp_t2 = temp_a3_2 + temp_a3_2->unk120C0 + temp_a3_2->unk120C2;
        temp_t2->unk11F24 = (u8) (temp_t2->unk11F24 - 1);
        temp_t7 = temp_a3_2 + temp_a3_2->unk120C0 + temp_a3_2->unk120C2;
        temp_a1 = temp_t7->unk11F24;
        phi_a1 = temp_a1;
        phi_s0 = temp_a3_2 + 0x10000;
        if ((s32) temp_a1 < 0x30) {
            temp_t7->unk11F24 = 0x39U;
            phi_a1 = (temp_a3_2 + temp_a3_2->unk120C0 + temp_a3_2->unk120C2)->unk11F24;
        }
        sp20 = temp_a3_2;
        Font_LoadCharNES(arg0, phi_a1, temp_a3_2->unk120C4 + (temp_a3_2->unk120C2 << 7));
        play_sound(0x482FU);
        phi_a3 = temp_a3_2;
    } else if ((s32) temp_a3->unk120A6 >= 0x1E) {
        temp_t1 = temp_a3 + temp_a3->unk120C0 + temp_a3->unk120C2;
        temp_t1->unk11F24 = (u8) (temp_t1->unk11F24 + 1);
        temp_t6 = temp_a3 + temp_a3->unk120C0 + temp_a3->unk120C2;
        temp_a1_2 = temp_t6->unk11F24;
        phi_a1_2 = temp_a1_2;
        if ((s32) temp_a1_2 >= 0x3A) {
            temp_t6->unk11F24 = 0x30U;
            phi_a1_2 = (temp_a3 + temp_a3->unk120C0 + temp_a3->unk120C2)->unk11F24;
        }
        sp20 = temp_a3;
        Font_LoadCharNES(arg0, phi_a1_2, temp_a3->unk120C4 + (temp_a3->unk120C2 << 7));
        play_sound(0x482FU);
        phi_a3 = temp_a3;
    } else {
        temp_v0 = temp_a3->unk120A4;
        if (((s32) temp_v0 >= 0x1E) && (D_801CFD84 == 0)) {
            D_801CFD84 = 1;
            temp_a3->unk120C2 = (s16) (temp_a3->unk120C2 + 1);
            if ((s32) temp_a3->unk120C2 >= 3) {
                temp_a3->unk120C2 = 2;
            } else {
                sp20 = temp_a3;
                play_sound(0x4809U);
                phi_a3 = temp_a3;
            }
        } else if (((s32) temp_v0 < -0x1D) && (D_801CFD84 == 0)) {
            D_801CFD84 = 1;
            temp_a3->unk120C2 = (s16) (temp_a3->unk120C2 - 1);
            if ((s32) temp_a3->unk120C2 < 0) {
                temp_a3->unk120C2 = 0;
            } else {
                sp20 = temp_a3;
                play_sound(0x4809U);
                phi_a3 = temp_a3;
            }
        } else {
            D_801CFD84 = 0;
        }
    }
    phi_a3->unk12078 = (s32) (((phi_a3 + phi_s0->unk20C0 + 0x10000)->unk1F24 * 0x64) - 0x12C0);
    phi_a3->unk12078 = (s32) ((phi_s0->unk2078 + ((phi_a3 + phi_s0->unk20C0 + 0x10000)->unk1F25 * 0xA)) - 0x1E0);
    phi_a3->unk12078 = (s32) ((phi_s0->unk2078 + (phi_a3 + phi_s0->unk20C0 + 0x10000)->unk1F26) - 0x30);
}

void func_80149048(GlobalContext *arg0) {
    void *sp20;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_s0;
    void *temp_t1;
    void *temp_t2;
    void *temp_t6;
    void *temp_t7;
    u8 phi_a1;
    u8 phi_a1_2;
    void *phi_a3;
    void *phi_s0;

    temp_a3 = arg0 + 0x4908;
    temp_s0 = temp_a3 + 0x10000;
    phi_a3 = temp_a3;
    phi_s0 = temp_s0;
    phi_s0 = temp_s0;
    if ((s32) arg0->msgCtx.unk120A6 < -0x1D) {
        temp_a3_2 = arg0 + 0x4908;
        temp_t2 = temp_a3_2 + temp_a3_2->unk120C0 + temp_a3_2->unk120C2;
        temp_t2->unk11F24 = (u8) (temp_t2->unk11F24 - 1);
        temp_t7 = temp_a3_2 + temp_a3_2->unk120C0 + temp_a3_2->unk120C2;
        temp_a1 = temp_t7->unk11F24;
        phi_a1 = temp_a1;
        phi_s0 = temp_a3_2 + 0x10000;
        if ((s32) temp_a1 < 0x30) {
            temp_t7->unk11F24 = 0x39U;
            phi_a1 = (temp_a3_2 + temp_a3_2->unk120C0 + temp_a3_2->unk120C2)->unk11F24;
        }
        sp20 = temp_a3_2;
        Font_LoadCharNES(arg0, phi_a1, temp_a3_2->unk120C4 + (temp_a3_2->unk120C2 << 7));
        play_sound(0x482FU);
        phi_a3 = temp_a3_2;
        goto block_8;
    }
    if ((s32) temp_a3->unk120A6 >= 0x1E) {
        temp_t1 = temp_a3 + temp_a3->unk120C0 + temp_a3->unk120C2;
        temp_t1->unk11F24 = (u8) (temp_t1->unk11F24 + 1);
        temp_t6 = temp_a3 + temp_a3->unk120C0 + temp_a3->unk120C2;
        temp_a1_2 = temp_t6->unk11F24;
        phi_a1_2 = temp_a1_2;
        if ((s32) temp_a1_2 >= 0x3A) {
            temp_t6->unk11F24 = 0x30U;
            phi_a1_2 = (temp_a3 + temp_a3->unk120C0 + temp_a3->unk120C2)->unk11F24;
        }
        sp20 = temp_a3;
        Font_LoadCharNES(arg0, phi_a1_2, temp_a3->unk120C4 + (temp_a3->unk120C2 << 7));
        play_sound(0x482FU);
        phi_a3 = temp_a3;
block_8:
    }
    phi_a3->unk12078 = (s32) (((phi_a3 + phi_s0->unk20C0 + 0x10000)->unk1F24 * 0xA) - 0x1E0);
}

void func_801491DC(GlobalContext *arg0) {
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_v0;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t3;
    void *temp_t6;
    void *temp_t7;
    void *temp_t9;
    s16 phi_t2;
    s16 phi_t2_2;

    temp_t0 = arg0 + 0x4908;
    if ((s32) arg0->msgCtx.unk120A6 < -0x1D) {
        temp_t0_2 = arg0 + 0x4908;
        temp_t3 = temp_t0_2 + (temp_t0_2->unk120C2 * 2);
        temp_t3->unk12054 = (s16) (temp_t3->unk12054 - 1);
        temp_t7 = temp_t0_2 + (temp_t0_2->unk120C2 * 2);
        temp_t2 = temp_t7->unk12054;
        phi_t2 = temp_t2;
        if ((s32) temp_t2 <= 0) {
            temp_t7->unk12054 = 5;
            phi_t2 = (temp_t0_2 + (temp_t0_2->unk120C2 * 2))->unk12054;
        }
        (temp_t0_2 + temp_t0_2->unk120C0 + temp_t0_2->unk120C2)->unk11F24 = (s8) (phi_t2 + 0x30);
        temp_a3 = temp_t0_2->unk120C2;
        Font_LoadCharNES(arg0, (temp_t0_2 + temp_t0_2->unk120C0 + temp_a3)->unk11F24, temp_t0_2->unk120C4 + (temp_a3 << 7));
        play_sound(0x482FU);
        return;
    }
    if ((s32) temp_t0->unk120A6 >= 0x1E) {
        temp_t6 = temp_t0 + (temp_t0->unk120C2 * 2);
        temp_t6->unk12054 = (s16) (temp_t6->unk12054 + 1);
        temp_t9 = temp_t0 + (temp_t0->unk120C2 * 2);
        temp_t2_2 = temp_t9->unk12054;
        phi_t2_2 = temp_t2_2;
        if ((s32) temp_t2_2 >= 6) {
            temp_t9->unk12054 = 1;
            phi_t2_2 = (temp_t0 + (temp_t0->unk120C2 * 2))->unk12054;
        }
        (temp_t0 + temp_t0->unk120C0 + temp_t0->unk120C2)->unk11F24 = (s8) (phi_t2_2 + 0x30);
        temp_a3_2 = temp_t0->unk120C2;
        Font_LoadCharNES(arg0, (temp_t0 + temp_t0->unk120C0 + temp_a3_2)->unk11F24, temp_t0->unk120C4 + (temp_a3_2 << 7));
        play_sound(0x482FU);
        return;
    }
    temp_v0 = temp_t0->unk120A4;
    if (((s32) temp_v0 >= 0x1E) && (D_801CFD88 == 0)) {
        D_801CFD88 = 1;
        temp_t0->unk120C2 = (s16) (temp_t0->unk120C2 + 1);
        if ((s32) temp_t0->unk120C2 >= 5) {
            temp_t0->unk120C2 = 4;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    if (((s32) temp_v0 < -0x1D) && (D_801CFD88 == 0)) {
        D_801CFD88 = 1;
        temp_t0->unk120C2 = (s16) (temp_t0->unk120C2 - 1);
        if ((s32) temp_t0->unk120C2 < 0) {
            temp_t0->unk120C2 = 0;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    D_801CFD88 = 0;
}

void func_80149454(GlobalContext *arg0) {
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_v0;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t3;
    void *temp_t6;
    void *temp_t7;
    void *temp_t9;
    s16 phi_t2;
    s16 phi_t2_2;

    temp_t0 = arg0 + 0x4908;
    if ((s32) arg0->msgCtx.unk120A6 < -0x1D) {
        temp_t0_2 = arg0 + 0x4908;
        temp_t3 = temp_t0_2 + (temp_t0_2->unk120C2 * 2);
        temp_t3->unk12054 = (s16) (temp_t3->unk12054 - 1);
        temp_t7 = temp_t0_2 + (temp_t0_2->unk120C2 * 2);
        temp_t2 = temp_t7->unk12054;
        phi_t2 = temp_t2;
        if ((s32) temp_t2 < 0) {
            temp_t7->unk12054 = 9;
            phi_t2 = (temp_t0_2 + (temp_t0_2->unk120C2 * 2))->unk12054;
        }
        (temp_t0_2 + temp_t0_2->unk120C0 + temp_t0_2->unk120C2)->unk11F24 = (s8) (phi_t2 + 0x30);
        temp_a3 = temp_t0_2->unk120C2;
        Font_LoadCharNES(arg0, (temp_t0_2 + temp_t0_2->unk120C0 + temp_a3)->unk11F24, temp_t0_2->unk120C4 + (temp_a3 << 7));
        play_sound(0x482FU);
        return;
    }
    if ((s32) temp_t0->unk120A6 >= 0x1E) {
        temp_t6 = temp_t0 + (temp_t0->unk120C2 * 2);
        temp_t6->unk12054 = (s16) (temp_t6->unk12054 + 1);
        temp_t9 = temp_t0 + (temp_t0->unk120C2 * 2);
        temp_t2_2 = temp_t9->unk12054;
        phi_t2_2 = temp_t2_2;
        if ((s32) temp_t2_2 >= 0xA) {
            temp_t9->unk12054 = 0;
            phi_t2_2 = (temp_t0 + (temp_t0->unk120C2 * 2))->unk12054;
        }
        (temp_t0 + temp_t0->unk120C0 + temp_t0->unk120C2)->unk11F24 = (s8) (phi_t2_2 + 0x30);
        temp_a3_2 = temp_t0->unk120C2;
        Font_LoadCharNES(arg0, (temp_t0 + temp_t0->unk120C0 + temp_a3_2)->unk11F24, temp_t0->unk120C4 + (temp_a3_2 << 7));
        play_sound(0x482FU);
        return;
    }
    temp_v0 = temp_t0->unk120A4;
    if (((s32) temp_v0 >= 0x1E) && (D_801CFD8C == 0)) {
        D_801CFD8C = 1;
        temp_t0->unk120C2 = (s16) (temp_t0->unk120C2 + 1);
        if ((s32) temp_t0->unk120C2 >= 3) {
            temp_t0->unk120C2 = 2;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    if (((s32) temp_v0 < -0x1D) && (D_801CFD8C == 0)) {
        D_801CFD8C = 1;
        temp_t0->unk120C2 = (s16) (temp_t0->unk120C2 - 1);
        if ((s32) temp_t0->unk120C2 < 0) {
            temp_t0->unk120C2 = 0;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    D_801CFD8C = 0;
}

void func_801496C8(GlobalContext *arg0) {
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t0_4;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_t3;
    void *temp_t6;
    void *temp_t7;
    void *temp_t9;
    s16 phi_t2;
    s32 phi_t0;
    s16 phi_t2_2;
    s32 phi_t0_2;

    temp_a3 = arg0 + 0x4908;
    if ((s32) arg0->msgCtx.unk120A6 < -0x1D) {
        temp_a3_2 = arg0 + 0x4908;
        temp_t3 = temp_a3_2 + (temp_a3_2->unk120C2 * 2);
        temp_t3->unk12054 = (s16) (temp_t3->unk12054 - 1);
        temp_t0 = temp_a3_2->unk120C2 * 2;
        temp_t6 = temp_a3_2 + temp_t0;
        temp_t2 = temp_t6->unk12054;
        phi_t2 = temp_t2;
        phi_t0 = temp_t0;
        if ((s32) temp_t2 < 0) {
            temp_t6->unk12054 = 3;
            temp_t0_2 = temp_a3_2->unk120C2 * 2;
            phi_t2 = (temp_a3_2 + temp_t0_2)->unk12054;
            phi_t0 = temp_t0_2;
        }
        (temp_a3_2 + (temp_a3_2->unk120C0 * 2) + phi_t0)->unk11F24 = (s16) (phi_t2 + 0x824F);
        temp_v0 = temp_a3_2->unk120C2;
        Font_LoadChar(arg0, (temp_a3_2 + (temp_a3_2->unk120C0 * 2) + (temp_v0 * 2))->unk11F24, temp_a3_2->unk120C4 + (temp_v0 << 7));
        play_sound(0x482FU);
        return;
    }
    if ((s32) temp_a3->unk120A6 >= 0x1E) {
        temp_t7 = temp_a3 + (temp_a3->unk120C2 * 2);
        temp_t7->unk12054 = (s16) (temp_t7->unk12054 + 1);
        temp_t0_3 = temp_a3->unk120C2 * 2;
        temp_t9 = temp_a3 + temp_t0_3;
        temp_t2_2 = temp_t9->unk12054;
        phi_t2_2 = temp_t2_2;
        phi_t0_2 = temp_t0_3;
        if ((s32) temp_t2_2 >= 4) {
            temp_t9->unk12054 = 0;
            temp_t0_4 = temp_a3->unk120C2 * 2;
            phi_t2_2 = (temp_a3 + temp_t0_4)->unk12054;
            phi_t0_2 = temp_t0_4;
        }
        (temp_a3 + (temp_a3->unk120C0 * 2) + phi_t0_2)->unk11F24 = (s16) (phi_t2_2 + 0x824F);
        temp_v0_2 = temp_a3->unk120C2;
        Font_LoadChar(arg0, (temp_a3 + (temp_a3->unk120C0 * 2) + (temp_v0_2 * 2))->unk11F24, temp_a3->unk120C4 + (temp_v0_2 << 7));
        play_sound(0x482FU);
        return;
    }
    temp_v0_3 = temp_a3->unk120A4;
    if (((s32) temp_v0_3 >= 0x1E) && (D_801CFD90 == 0)) {
        D_801CFD90 = 1;
        temp_a3->unk120C2 = (s16) (temp_a3->unk120C2 + 1);
        if ((s32) temp_a3->unk120C2 >= 6) {
            temp_a3->unk120C2 = 5;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    if (((s32) temp_v0_3 < -0x1D) && (D_801CFD90 == 0)) {
        D_801CFD90 = 1;
        temp_a3->unk120C2 = (s16) (temp_a3->unk120C2 - 1);
        if ((s32) temp_a3->unk120C2 < 0) {
            temp_a3->unk120C2 = 0;
            return;
        }
        play_sound(0x4809U);
        return;
    }
    D_801CFD90 = 0;
}

void func_8014995C(GlobalContext *arg0, void *arg1, u32 **arg2) {
    s16 temp_t0;
    s16 temp_t1;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    u32 *temp_v0;
    u8 temp_t3;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *phi_v0;

    temp_v0 = *arg2;
    temp_t0 = arg0->msgCtx.unk11FF4;
    temp_t1 = arg0->msgCtx.unk11FF6;
    temp_v0->unk0 = 0xE7000000;
    temp_v0->unk4 = 0;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk0 = 0xFD900000;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_2->unk4 = arg1;
    temp_v0_3->unk4 = 0x7080200;
    temp_v0_3->unk0 = 0xF5900000;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->unk0 = 0xE6000000;
    temp_v0_4->unk4 = 0;
    temp_v0_5 = temp_v0_4 + 8;
    temp_v0_5->unk0 = 0xF3000000;
    temp_v0_5->unk4 = 0x703F800;
    temp_v0_6 = temp_v0_5 + 8;
    temp_v0_6->unk0 = 0xE7000000U;
    temp_v0_6->unk4 = 0;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk0 = 0xF5800200;
    temp_v0_7->unk4 = 0x80200;
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_8->unk0 = 0xF2000000;
    temp_v0_8->unk4 = 0x3C03C;
    temp_v0_9 = temp_v0_8 + 8;
    temp_t3 = arg0->msgCtx.unk11F0A;
    temp_v1 = arg0 + 0x10000 + 0x4908;
    phi_v0 = temp_v0_9;
    if ((temp_t3 != 5) && (temp_t3 != 0xD) && (arg0->pauseCtx.unk_1F0 == 0)) {
        temp_v0_9->unk0 = 0xFA000000;
        temp_v0_10 = temp_v0_9 + 8;
        temp_v0_9->unk4 = (s32) (temp_v1->unk201E & 0xFF);
        temp_a3 = D_801F6B00;
        temp_v0_11 = temp_v0_10 + 8;
        temp_v0_10->unk0 = (s32) (((((temp_t0 + temp_a3 + 1) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_t1 + temp_a3 + 1) * 4) & 0xFFF));
        temp_v0_10->unk4 = (s32) (((((temp_t0 + 1) * 4) & 0xFFF) << 0xC) | (((temp_t1 + 1) * 4) & 0xFFF));
        temp_v0_11->unk0 = 0xE1000000;
        temp_v0_11->unk4 = 0;
        temp_v0_12 = temp_v0_11 + 8;
        temp_v0_12->unk0 = 0xF1000000;
        temp_v0_13 = temp_v0_12 + 8;
        temp_a3_2 = D_801F6B04 & 0xFFFF;
        temp_v0_12->unk4 = (s32) ((temp_a3_2 << 0x10) | temp_a3_2);
        temp_v0_13->unk0 = 0xE7000000U;
        temp_v0_13->unk4 = 0;
        phi_v0 = temp_v0_13 + 8;
    }
    phi_v0->unk0 = 0xFA000000;
    temp_v0_14 = phi_v0 + 8;
    phi_v0->unk4 = (s32) ((temp_v1->unk2018 << 0x18) | ((temp_v1->unk201A & 0xFF) << 0x10) | ((temp_v1->unk201C & 0xFF) << 8) | (temp_v1->unk201E & 0xFF));
    temp_a3_3 = D_801F6B00;
    temp_v0_14->unk0 = (s32) (((((temp_t0 + temp_a3_3) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_t1 + temp_a3_3) * 4) & 0xFFF));
    temp_v0_14->unk4 = (s32) ((((temp_t0 * 4) & 0xFFF) << 0xC) | ((temp_t1 * 4) & 0xFFF));
    temp_v0_15 = temp_v0_14 + 8;
    temp_v0_15->unk0 = 0xE1000000;
    temp_v0_15->unk4 = 0;
    temp_v0_16 = temp_v0_15 + 8;
    temp_v0_16->unk0 = 0xF1000000;
    temp_a3_4 = D_801F6B04 & 0xFFFF;
    temp_v0_16->unk4 = (s32) ((temp_a3_4 << 0x10) | temp_a3_4);
    *arg2 = temp_v0_16 + 8;
}

void func_80149C18(GlobalContext *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_a1;
    void *phi_v0;

    if (arg0->pauseCtx.unk_1F0 == 0) {
        temp_v0 = arg0 + 0x4908;
        D_801CFD94 = (s16) (s32) (*(&D_801CFDA4 + (temp_v0->unk12023 * 4)) * 256.0f);
        D_801CFD9C = (s16) (s32) (1024.0f / *(&D_801CFDA4 + (temp_v0->unk12023 * 4)));
        D_801CFD98 = (s16) (s32) (*(&D_801CFDC8 + (temp_v0->unk12023 * 4)) * 64.0f);
        D_801CFDA0 = (s16) (s32) (1024.0f / *(&D_801CFDC8 + (temp_v0->unk12023 * 4)));
        temp_v0->unk1206A = (s16) (temp_v0->unk12006 + ((s32) (0x40 - D_801CFD98) / 2));
        temp_v0->unk1203C = (s16) (temp_v0->unk1203C + ((s32) temp_v0->unk1203A / 8));
        temp_v0->unk12023 = (s8) (temp_v0->unk12023 + 1);
        phi_a1 = temp_v0 + 0x10000;
        phi_v0 = temp_v0;
    } else {
        temp_v0_2 = arg0 + 0x4908;
        temp_v0_2->unk12023 = 8;
        D_801CFD94 = 0x200;
        D_801CFD9C = 0x200;
        D_801CFD98 = 0x59;
        D_801CFDA0 = 0x2DB;
        temp_v0_2->unk1206A = (s16) (temp_v0_2->unk12006 + ((s32) (0x5A - D_801CFD98) / 2));
        phi_a1 = temp_v0_2 + 0x10000;
        phi_v0 = temp_v0_2;
    }
    if (phi_a1->unk2023 == 8) {
        phi_v0->unk12068 = (s16) phi_a1->unk2004;
        phi_v0->unk1206A = (s16) phi_a1->unk2006;
        phi_v0->unk11F22 = 3;
        phi_v0->unk1203C = (s16) phi_a1->unk203A;
    }
    if (arg0->pauseCtx.unk_1F0 == 0) {
        phi_v0->unk12068 = (s16) (phi_a1->unk2004 + ((s32) (0x100 - D_801CFD94) / 2));
        return;
    }
    phi_v0->unk12068 = (s16) (phi_a1->unk2004 + ((s32) (0x200 - D_801CFD94) / 2));
}

void func_80149EBC(GlobalContext *arg0, s16 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    u16 temp_v0;
    u16 temp_v0_3;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    u16 phi_v0;
    void *phi_v1;

    temp_v1 = arg0->msgCtx.unk12080;
    temp_v0 = temp_v1->unk0;
    temp_a2 = temp_v1->unk4;
    phi_v0 = temp_v0;
    phi_v1 = temp_v1;
    if (temp_v0 != 0xFFFF) {
loop_1:
        if ((arg1 & 0xFFFF) == phi_v0) {
            temp_a1 = phi_v1->unk4;
            temp_v0_2 = arg0 + 0x4A70;
            temp_v0_2->unk11D80 = (s32) (temp_a1 - temp_a2);
            temp_v0_2->unk11D84 = (s32) (phi_v1->unkC - temp_a1);
            return;
        }
        temp_v0_3 = phi_v1->unk8;
        phi_v0 = temp_v0_3;
        phi_v1 += 8;
        if (temp_v0_3 == 0xFFFF) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            temp_v1_2 = arg0->msgCtx.unk12080;
            temp_v0_4 = arg0 + 0x4A70;
            temp_a1_2 = temp_v1_2->unk4;
            temp_v0_4->unk11D80 = (s32) (temp_a1_2 - temp_a2);
            temp_v0_4->unk11D84 = (s32) (temp_v1_2->unkC - temp_a1_2);
            return;
        }
        goto loop_1;
    }
    temp_v1_2 = arg0->msgCtx.unk12080;
    temp_v0_4 = arg0 + 0x4A70;
    temp_a1_2 = temp_v1_2->unk4;
    temp_v0_4->unk11D80 = (s32) (temp_a1_2 - temp_a2);
    temp_v0_4->unk11D84 = (s32) (temp_v1_2->unkC - temp_a1_2);
}

void func_80149F74(GlobalContext *globalCtx, u32 **ppuParm2) {
    u32 *sp190;
    void *sp1C;
    s32 temp_a0;
    s32 temp_v1_5;
    u16 temp_v1;
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
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
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
    void *temp_v0_50;
    void *temp_v0_51;
    void *temp_v0_52;
    void *temp_v0_53;
    void *temp_v0_54;
    void *temp_v0_55;
    void *temp_v0_56;
    void *temp_v0_57;
    void *temp_v0_58;
    void *temp_v0_59;
    void *temp_v0_5;
    void *temp_v0_60;
    void *temp_v0_61;
    void *temp_v0_62;
    void *temp_v0_63;
    void *temp_v0_64;
    void *temp_v0_65;
    void *temp_v0_66;
    void *temp_v0_67;
    void *temp_v0_68;
    void *temp_v0_69;
    void *temp_v0_6;
    void *temp_v0_70;
    void *temp_v0_71;
    void *temp_v0_72;
    void *temp_v0_73;
    void *temp_v0_74;
    void *temp_v0_75;
    void *temp_v0_76;
    void *temp_v0_77;
    void *temp_v0_78;
    void *temp_v0_79;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *phi_v0;

    sp1C = globalCtx + 0x10000;
    globalCtx->msgCtx.unk12016 = globalCtx->msgCtx.unk12014;
    if (sp1C->unk682A == 6) {
        sp190 = *ppuParm2;
        globalCtx = globalCtx;
        play_sound(0U);
    }
    **ppuParm2 = 0xE7000000;
    (*ppuParm2)->unk4 = 0;
    temp_v0 = *ppuParm2 + 8;
    temp_v0->unk0 = 0xFC119623;
    temp_v0->unk4 = 0xFF2FFFFF;
    temp_v0_2 = temp_v0 + 8;
    temp_t2 = globalCtx + 0x4908;
    temp_v0_2->unk0 = 0xFA000000U;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_2->unk4 = (s32) ((temp_t2->unk1201E & 0xFF) | ~0xFF);
    temp_v1 = temp_t2->unk11F16;
    if (temp_v1 == 0x83) {
        temp_v0_3->unk0 = 0xE7000000U;
        temp_v0_3->unk4 = 0;
        temp_v0_4 = temp_v0_3 + 8;
        temp_v0_4->unk0 = 0xFA000000U;
        temp_v0_5 = temp_v0_4 + 8;
        temp_v0_4->unk4 = (s32) ((temp_t2->unk1201E & 0xFF) | 0xFF000000);
        temp_v0_5->unk0 = 0xFB000000;
        temp_v0_5->unk4 = 0x5000FF;
        temp_v0_6 = temp_v0_5 + 8;
        temp_v0_6->unk0 = 0xFD700000;
        temp_v0_6->unk4 = &D_02000400;
        temp_v0_7 = temp_v0_6 + 8;
        temp_v0_7->unk0 = 0xF5700000;
        temp_v0_7->unk4 = 0x7000000;
        temp_v0_8 = temp_v0_7 + 8;
        temp_v0_8->unk0 = 0xE6000000;
        temp_v0_8->unk4 = 0;
        temp_v0_9 = temp_v0_8 + 8;
        temp_v0_9->unk4 = 0x707F400;
        temp_v0_9->unk0 = 0xF3000000;
        temp_v0_10 = temp_v0_9 + 8;
        temp_v0_10->unk0 = 0xE7000000U;
        temp_v0_10->unk4 = 0;
        temp_v0_11 = temp_v0_10 + 8;
        temp_v0_11->unk0 = 0xF5680400;
        temp_v0_11->unk4 = 0;
        temp_v0_12 = temp_v0_11 + 8;
        temp_v0_12->unk4 = 0x3C03C;
        temp_v0_12->unk0 = 0xF2000000;
        phi_v0 = temp_v0_12 + 8;
    } else if (((s32) temp_v1 >= 0x84) && ((s32) temp_v1 < 0x8B)) {
        temp_v0_3->unk0 = 0xE7000000U;
        temp_v0_3->unk4 = 0;
        temp_v0_13 = temp_v0_3 + 8;
        temp_v0_13->unk0 = 0xFA000000U;
        temp_v1_2 = ((temp_v1 - 0x84) * 3) + &D_801CFDEC;
        temp_v0_14 = temp_v0_13 + 8;
        temp_v0_15 = temp_v0_14 + 8;
        temp_v0_13->unk4 = (s32) ((temp_v1_2->unk2 << 8) | (temp_v1_2->unk0 << 0x18) | (temp_v1_2->unk1 << 0x10) | (temp_t2->unk1201E & 0xFF));
        temp_v0_14->unk0 = 0xFB000000;
        temp_v0_14->unk4 = 0x5000FF;
        temp_v0_15->unk0 = 0xFD700000;
        temp_v0_15->unk4 = &D_02000E60;
        temp_v0_16 = temp_v0_15 + 8;
        temp_v0_16->unk0 = 0xF5700000;
        temp_v0_16->unk4 = 0x7000000;
        temp_v0_17 = temp_v0_16 + 8;
        temp_v0_17->unk0 = 0xE6000000;
        temp_v0_17->unk4 = 0;
        temp_v0_18 = temp_v0_17 + 8;
        temp_v0_18->unk4 = 0x707F400;
        temp_v0_18->unk0 = 0xF3000000;
        temp_v0_19 = temp_v0_18 + 8;
        temp_v0_19->unk0 = 0xE7000000U;
        temp_v0_19->unk4 = 0;
        temp_v0_20 = temp_v0_19 + 8;
        temp_v0_20->unk0 = 0xF5680400;
        temp_v0_20->unk4 = 0;
        temp_v0_21 = temp_v0_20 + 8;
        temp_v0_21->unk4 = 0x3C03C;
        temp_v0_21->unk0 = 0xF2000000;
        phi_v0 = temp_v0_21 + 8;
    } else if (temp_v1 == 0x77) {
        temp_t2->unk12016 = 0x18;
        temp_v0_3->unk0 = 0xE7000000U;
        temp_v0_3->unk4 = 0;
        temp_v0_22 = temp_v0_3 + 8;
        temp_v0_22->unk0 = 0xFA000000U;
        temp_v0_23 = temp_v0_22 + 8;
        temp_v1_3 = (gSaveContext.unk_48C8 * 3) + &D_801CFE5C;
        temp_v0_22->unk4 = (s32) ((temp_v1_3->unk2 << 8) | (temp_v1_3->unk0 << 0x18) | (temp_v1_3->unk1 << 0x10) | (temp_t2->unk1201E & 0xFF));
        temp_v0_23->unk0 = 0xFB000000;
        temp_v0_24 = temp_v0_23 + 8;
        temp_v1_4 = (gSaveContext.unk_48C8 * 3) + &D_801CFE68;
        temp_v0_25 = temp_v0_24 + 8;
        temp_v0_23->unk4 = (s32) ((temp_v1_4->unk2 << 8) | (temp_v1_4->unk0 << 0x18) | (temp_v1_4->unk1 << 0x10));
        temp_v0_24->unk0 = 0xFD900000;
        temp_v0_24->unk4 = &D_0200B998;
        temp_v0_25->unk0 = 0xF5900000;
        temp_v0_25->unk4 = 0x7000000;
        temp_v0_26 = temp_v0_25 + 8;
        temp_v0_26->unk0 = 0xE6000000;
        temp_v0_26->unk4 = 0;
        temp_v0_27 = temp_v0_26 + 8;
        temp_v0_27->unk4 = 0x70BF400;
        temp_v0_27->unk0 = 0xF3000000;
        temp_v0_28 = temp_v0_27 + 8;
        temp_v0_28->unk0 = 0xE7000000U;
        temp_v0_28->unk4 = 0;
        temp_v0_29 = temp_v0_28 + 8;
        temp_v0_29->unk0 = 0xF5800400;
        temp_v0_29->unk4 = 0;
        temp_v0_30 = temp_v0_29 + 8;
        temp_v0_30->unk0 = 0xF2000000;
        temp_v0_30->unk4 = 0x7C05C;
        temp_v0_31 = temp_v0_30 + 8;
        temp_v0_32 = temp_v0_31 + 8;
        temp_v0_31->unk0 = (s32) (((((temp_t2->unk12010 + temp_t2->unk12014) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_t2->unk12012 + temp_t2->unk12016) * 4) & 0xFFF));
        temp_v0_31->unk4 = (s32) ((((temp_t2->unk12010 * 4) & 0xFFF) << 0xC) | ((temp_t2->unk12012 * 4) & 0xFFF));
        temp_v0_32->unk0 = 0xE1000000;
        temp_v0_32->unk4 = 0;
        temp_v0_33 = temp_v0_32 + 8;
        temp_v0_33->unk0 = 0xF1000000;
        temp_v0_33->unk4 = 0x4000400;
        temp_v0_34 = temp_v0_33 + 8;
        temp_v0_34->unk0 = 0xFA000000U;
        temp_v0_35 = temp_v0_34 + 8;
        temp_v0_34->unk4 = (s32) ((temp_t2->unk1201E & 0xFF) | ~0xFF);
        temp_v0_35->unk0 = 0xFD180000;
        temp_v0_36 = temp_v0_35 + 8;
        temp_v0_35->unk4 = (s32) *(&D_801CFE4C + (gSaveContext.unk_48C8 * 4));
        temp_v0_36->unk0 = 0xF5180000;
        temp_v0_36->unk4 = 0x7000000;
        temp_v0_37 = temp_v0_36 + 8;
        temp_v0_37->unk0 = 0xE6000000;
        temp_v0_37->unk4 = 0;
        temp_v0_38 = temp_v0_37 + 8;
        temp_v0_38->unk4 = 0x72FF080;
        temp_v0_38->unk0 = 0xF3000000;
        temp_v0_39 = temp_v0_38 + 8;
        temp_v0_39->unk0 = 0xE7000000U;
        temp_v0_39->unk4 = 0;
        temp_v0_40 = temp_v0_39 + 8;
        temp_v0_40->unk0 = 0xF5181000;
        temp_v0_40->unk4 = 0;
        temp_v0_41 = temp_v0_40 + 8;
        temp_v0_41->unk0 = 0xF2000000;
        temp_v0_41->unk4 = 0x7C05C;
        phi_v0 = temp_v0_41 + 8;
    } else if (((s32) temp_v1 >= 0x61) && ((s32) temp_v1 < 0x6D)) {
        temp_v1_5 = (temp_v1 - 0x61) * 2;
        temp_v0_3->unk0 = 0xFA000000U;
        temp_v0_42 = temp_v0_3 + 8;
        temp_v0_3->unk4 = (s32) (((*(&D_801CFE34 + temp_v1_5) & 0xFF) << 8) | (*(&D_801CFE04 + temp_v1_5) << 0x18) | ((*(&D_801CFE1C + temp_v1_5) & 0xFF) << 0x10) | (temp_t2->unk1201E & 0xFF));
        temp_v0_42->unk0 = 0xFD700000;
        temp_v0_43 = temp_v0_42 + 8;
        temp_v0_42->unk4 = (s32) (temp_t2->unk11EF8 + 0x1000);
        temp_v0_43->unk0 = 0xF5700000;
        temp_v0_43->unk4 = 0x7000000;
        temp_v0_44 = temp_v0_43 + 8;
        temp_v0_44->unk0 = 0xE6000000;
        temp_v0_44->unk4 = 0;
        temp_v0_45 = temp_v0_44 + 8;
        temp_v0_45->unk4 = 0x70BF400;
        temp_v0_45->unk0 = 0xF3000000;
        temp_v0_46 = temp_v0_45 + 8;
        temp_v0_46->unk0 = 0xE7000000U;
        temp_v0_46->unk4 = 0;
        temp_v0_47 = temp_v0_46 + 8;
        temp_v0_47->unk0 = 0xF5680400;
        temp_v0_47->unk4 = 0;
        temp_v0_48 = temp_v0_47 + 8;
        temp_v0_48->unk4 = 0x3C05C;
        temp_v0_48->unk0 = 0xF2000000;
        temp_t2->unk12016 = 0x18;
        phi_v0 = temp_v0_48 + 8;
    } else if (temp_v1 == 0xCC) {
        temp_v0_3->unk0 = 0xE7000000U;
        temp_v0_3->unk4 = 0;
        temp_v0_49 = temp_v0_3 + 8;
        temp_v0_49->unk0 = 0xFA000000U;
        temp_v0_50 = temp_v0_49 + 8;
        temp_v0_49->unk4 = (s32) ((temp_t2->unk1201E & 0xFF) | 0xFFFF0000);
        temp_v0_50->unk4 = 0xFF;
        temp_v0_50->unk0 = 0xFB000000;
        temp_v0_51 = temp_v0_50 + 8;
        temp_v0_51->unk0 = 0xFD700000;
        temp_v0_52 = temp_v0_51 + 8;
        temp_v0_51->unk4 = (s32) (temp_t2->unk11EF8 + 0x1000);
        temp_v0_52->unk0 = 0xF5700000;
        temp_v0_52->unk4 = 0x7000000;
        temp_v0_53 = temp_v0_52 + 8;
        temp_v0_53->unk0 = 0xE6000000;
        temp_v0_53->unk4 = 0;
        temp_v0_54 = temp_v0_53 + 8;
        temp_v0_54->unk4 = 0x71FF200;
        temp_v0_54->unk0 = 0xF3000000;
        temp_v0_55 = temp_v0_54 + 8;
        temp_v0_55->unk0 = 0xE7000000U;
        temp_v0_55->unk4 = 0;
        temp_v0_56 = temp_v0_55 + 8;
        temp_v0_56->unk0 = 0xF5680800;
        temp_v0_56->unk4 = 0;
        temp_v0_57 = temp_v0_56 + 8;
        temp_v0_57->unk4 = 0x7C07C;
        temp_v0_57->unk0 = 0xF2000000;
        phi_v0 = temp_v0_57 + 8;
    } else if ((s32) temp_v1 >= 0xB8) {
        temp_v0_3->unk0 = 0xFD100000U;
        temp_v0_58 = temp_v0_3 + 8;
        temp_v0_3->unk4 = (s32) (temp_t2->unk11EF8 + 0x1000);
        temp_v0_58->unk0 = 0xF5100000;
        temp_v0_58->unk4 = 0x7000000;
        temp_v0_59 = temp_v0_58 + 8;
        temp_v0_59->unk0 = 0xE6000000;
        temp_v0_59->unk4 = 0;
        temp_v0_60 = temp_v0_59 + 8;
        temp_v0_60->unk4 = 0x73FF100;
        temp_v0_60->unk0 = 0xF3000000;
        temp_v0_61 = temp_v0_60 + 8;
        temp_v0_61->unk0 = 0xE7000000U;
        temp_v0_61->unk4 = 0;
        temp_v0_62 = temp_v0_61 + 8;
        temp_v0_62->unk0 = 0xF5101000;
        temp_v0_62->unk4 = 0;
        temp_v0_63 = temp_v0_62 + 8;
        temp_v0_63->unk4 = 0x7C07C;
        temp_v0_63->unk0 = 0xF2000000;
        phi_v0 = temp_v0_63 + 8;
    } else if ((s32) temp_v1 >= 0x6E) {
        temp_v0_3->unk0 = 0xFD180000U;
        temp_v0_64 = temp_v0_3 + 8;
        temp_v0_3->unk4 = (s32) (temp_t2->unk11EF8 + 0x1000);
        temp_v0_64->unk0 = 0xF5180000;
        temp_v0_64->unk4 = 0x7000000;
        temp_v0_65 = temp_v0_64 + 8;
        temp_v0_65->unk0 = 0xE6000000;
        temp_v0_65->unk4 = 0;
        temp_v0_66 = temp_v0_65 + 8;
        temp_v0_66->unk4 = 0x723F0AB;
        temp_v0_66->unk0 = 0xF3000000;
        temp_v0_67 = temp_v0_66 + 8;
        temp_v0_67->unk0 = 0xE7000000U;
        temp_v0_67->unk4 = 0;
        temp_v0_68 = temp_v0_67 + 8;
        temp_v0_68->unk0 = 0xF5180C00;
        temp_v0_68->unk4 = 0;
        temp_v0_69 = temp_v0_68 + 8;
        temp_v0_69->unk4 = 0x5C05C;
        temp_v0_69->unk0 = 0xF2000000;
        phi_v0 = temp_v0_69 + 8;
    } else {
        temp_t2->unk12016 = (s16) temp_t2->unk12014;
        temp_v0_3->unk0 = 0xFD180000U;
        temp_v0_70 = temp_v0_3 + 8;
        temp_v0_3->unk4 = (s32) (temp_t2->unk11EF8 + 0x1000);
        temp_v0_70->unk0 = 0xF5180000;
        temp_v0_70->unk4 = 0x7000000;
        temp_v0_71 = temp_v0_70 + 8;
        temp_v0_71->unk0 = 0xE6000000;
        temp_v0_71->unk4 = 0;
        temp_v0_72 = temp_v0_71 + 8;
        temp_v0_72->unk4 = 0x73FF080;
        temp_v0_72->unk0 = 0xF3000000;
        temp_v0_73 = temp_v0_72 + 8;
        temp_v0_73->unk0 = 0xE7000000U;
        temp_v0_73->unk4 = 0;
        temp_v0_74 = temp_v0_73 + 8;
        temp_v0_74->unk0 = 0xF5181000;
        temp_v0_74->unk4 = 0;
        temp_v0_75 = temp_v0_74 + 8;
        temp_v0_75->unk4 = 0x7C07C;
        temp_v0_75->unk0 = 0xF2000000;
        phi_v0 = temp_v0_75 + 8;
    }
    temp_v0_76 = phi_v0 + 8;
    phi_v0->unk0 = (s32) (((((temp_t2->unk12010 + temp_t2->unk12014) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_t2->unk12012 + temp_t2->unk12016) * 4) & 0xFFF));
    phi_v0->unk4 = (s32) ((((temp_t2->unk12010 * 4) & 0xFFF) << 0xC) | ((temp_t2->unk12012 * 4) & 0xFFF));
    temp_v0_76->unk0 = 0xE1000000;
    temp_v0_76->unk4 = 0;
    temp_v0_77 = temp_v0_76 + 8;
    temp_v0_77->unk0 = 0xF1000000;
    temp_v0_78 = temp_v0_77 + 8;
    temp_a0 = D_801F6B08 & 0xFFFF;
    temp_v0_77->unk4 = (s32) ((temp_a0 << 0x10) | temp_a0);
    temp_v0_78->unk0 = 0xE7000000U;
    temp_v0_78->unk4 = 0;
    temp_v0_79 = temp_v0_78 + 8;
    temp_v0_79->unk0 = 0xFCFF97FF;
    temp_v0_79->unk4 = 0xFF2DFEFF;
    if (sp1C->unk6F20 == 0) {
        temp_t2->unk11FF4 = (s16) (temp_t2->unk11FF4 + 0x10);
    } else {
        temp_t2->unk11FF4 = (s16) (temp_t2->unk11FF4 + 0x32);
    }
    *ppuParm2 = temp_v0_79 + 8;
}

void func_8014AAD0(GlobalContext *arg0) {
    void *sp20;
    void *sp1C;
    GlobalContext *temp_a2;
    u16 temp_v0;
    void *temp_v1;

    temp_a2 = arg0;
    temp_v1 = temp_a2 + 0x4908;
    if (temp_a2->msgCtx.unk11F22 == 6) {
        temp_a2->msgCtx.unk1202A = 1;
        sp1C = temp_v1 + 0x10000;
        temp_v0 = temp_v1->unk1202C;
        if (temp_v0 == 0x33) {
            temp_v1->unk11F22 = 0x27;
            return;
        }
        if (temp_v0 == 0x34) {
            sp20 = temp_v1;
            arg0 = temp_a2;
            func_8019C300(1U, 0x10000, temp_a2);
            func_8019C300(1U);
            temp_v1->unk11F00 = func_8019CF9C();
            sp1C->unk1F00->unk2 = 0;
            D_801C6A78 = 0;
            D_801C6A74 = D_801C6A78;
            func_80147564(arg0);
            temp_v1->unk12023 = 3;
            temp_v1->unk11F22 = 0x29;
            func_8019C398(0x19, 1);
            return;
        }
        if (temp_v0 == 0x35) {
            temp_v1->unk11F22 = 0x2A;
            return;
        }
        if (temp_v0 == 0x36) {
            sp20 = temp_v1;
            arg0 = temp_a2;
            func_8019C300(1U, 0x10000, temp_a2);
            func_8019C300(1U);
            temp_v1->unk11F00 = func_8019CF9C();
            sp1C->unk1F00->unk2 = 0;
            D_801C6A78 = 0;
            D_801C6A74 = D_801C6A78;
            func_80147564(arg0);
            temp_v1->unk12023 = 3;
            temp_v1->unk11F22 = 0x2E;
            func_8019C398(0x17, 1);
            return;
        }
        if (temp_v0 == 0x37) {
            temp_v1->unk11F22 = 0x2F;
            return;
        }
        if (temp_v0 == 0x3A) {
            temp_v1->unk11F22 = 0x32;
            return;
        }
        if (((s32) temp_v0 >= 0x47) && ((s32) temp_v0 < 0x52)) {
            temp_v1->unk11F22 = 0x35;
            return;
        }
        if ((((s32) temp_v0 >= 2) && ((s32) temp_v0 < 0x11)) || (temp_v0 == 0x3B) || (temp_v0 == 0x3C) || (temp_v0 == 0x3D) || (temp_v0 == 0x3E) || (temp_v0 == 0x3F) || (temp_v0 == 0x40)) {
            temp_v1->unk11F22 = 0xB;
            return;
        }
        if ((temp_v0 == 0x41) || (temp_v0 == 0x42) || (temp_v0 == 0x43) || (temp_v0 == 0x44) || (temp_v0 == 0x45) || (temp_v0 == 0x46)) {
            temp_v1->unk11F22 = 0xC;
            return;
        }
        if ((temp_v0 == 0) || (temp_v0 == 1) || ((s32) temp_v0 >= 0x28)) {
            temp_v1->unk11F22 = 0xA;
            return;
        }
        temp_v1->unk11F22 = 0xC;
        /* Duplicate return node #37. Try simplifying control flow for better match */
    }
}

void func_8014ADBC(GlobalContext *globalCtx, void *puParm2) {
    u16 sp138;
    u32 *sp134;
    s16 sp130;
    s16 sp12E;
    s16 sp12C;
    s16 sp12A;
    Font *sp5C;
    void *sp58;
    s32 sp50;
    void *sp44;
    Font *temp_v0_20;
    MessageContext *temp_s1;
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s5;
    s32 temp_t5_7;
    s32 temp_v1_2;
    u16 temp_v0;
    u16 temp_v0_11;
    u16 temp_v0_17;
    u16 temp_v0_18;
    u16 temp_v0_23;
    u16 temp_v0_3;
    u32 *temp_t1;
    u32 *temp_t1_2;
    u32 *temp_t1_3;
    u32 *temp_t1_4;
    u32 *temp_t2;
    u32 *temp_t2_2;
    u32 *temp_t2_3;
    u32 *temp_t2_4;
    u32 *temp_t2_5;
    u32 *temp_t3;
    u32 *temp_t4;
    u32 *temp_t4_2;
    u32 *temp_t4_3;
    u32 *temp_t4_4;
    u32 *temp_t4_5;
    u32 *temp_t4_6;
    u32 *temp_t5;
    u32 *temp_t5_2;
    u32 *temp_t5_3;
    u32 *temp_t5_4;
    u32 *temp_t5_5;
    u32 *temp_t6;
    u32 *temp_t6_2;
    u32 *temp_t6_3;
    u32 *temp_t6_4;
    u32 *temp_t6_5;
    u32 *temp_t6_6;
    u32 *temp_t6_7;
    u32 *temp_t7;
    u32 *temp_t7_2;
    u32 *temp_t8;
    u32 *temp_t8_2;
    u32 *temp_t8_3;
    u32 *temp_t8_4;
    u32 *temp_t8_5;
    u32 *temp_t8_6;
    u32 *temp_t8_7;
    u32 *temp_t9_2;
    u32 *temp_t9_3;
    u32 *temp_t9_4;
    u32 *temp_t9_5;
    u32 *temp_t9_6;
    u32 *temp_t9_7;
    u32 *temp_v0_12;
    u32 *temp_v0_13;
    u32 *temp_v0_14;
    u32 *temp_v0_15;
    u32 temp_t5_6;
    u8 temp_v0_16;
    u8 temp_v0_19;
    u8 temp_v0_22;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v0_7;
    void *temp_t9;
    void *temp_v0_10;
    void *temp_v0_21;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_8;
    void *temp_v0_9;
    s32 phi_s5;
    void *phi_at;
    s32 phi_v1;
    s16 phi_t9;
    void *phi_at_2;
    s32 phi_s5_2;
    s32 phi_v0;
    s32 phi_s5_3;
    void *phi_s2;

    temp_s1 = &globalCtx->msgCtx;
    sp134 = *puParm2;
    globalCtx->msgCtx.unk11FF4 = globalCtx->msgCtx.unk11F1A + globalCtx->msgCtx.unk11FF8;
    globalCtx->msgCtx.unk11FF6 = globalCtx->msgCtx.unk11FFA;
    sp130 = 0;
    if (globalCtx->msgCtx.unk11F16 != 0x270F) {
        sp58 = globalCtx + 0x10000;
        func_80149F74(globalCtx, &sp134);
    }
    temp_s1->unk12018 = temp_s1->unk120C8;
    temp_s1->unk1201A = temp_s1->unk120CA;
    temp_s1->unk1201C = temp_s1->unk120CC;
    sp138 = 0;
    phi_s5 = 0;
    phi_s5_3 = 0;
    if ((s32) temp_s1->unk11FEE > 0) {
        sp58 = globalCtx + 0x10000;
loop_4:
        temp_t9 = temp_s1 + (phi_s5 * 2);
        temp_v0 = temp_t9->unk11F24;
        phi_s5_2 = phi_s5;
        phi_s5_2 = phi_s5;
        phi_s5_2 = phi_s5;
        if ((s32) temp_v0 >= 0x241) {
            if ((s32) temp_v0 >= 0x501) {
                switch (temp_v0) {                  /* switch 1 */
                case 8192:                          /* switch 1 */
                    phi_s2 = temp_s1 + 0x10000;
                    if ((sp58->unk6F20 != 0) || (temp_v0_2 = temp_s1->unk11F0A, (temp_v0_2 == 0xD))) {
                        temp_s1->unk10000 = 0;
                        temp_s1->unk1201A = temp_s1->unk1201C;
                        phi_at = temp_s1 + 0x10000;
                    } else if (temp_v0_2 == 5) {
                        temp_s1->unk1201C = 0;
                        temp_s1->unk1201A = temp_s1->unk1201C;
                        phi_at = temp_s1 + 0x10000;
                    } else {
                        temp_s1->unk1201C = 0xFF;
                        temp_s1->unk1201A = temp_s1->unk1201C;
                        phi_at = temp_s1 + 0x10000;
                    }
                    phi_at->unk2018 = temp_s1->unk1201C;
                    temp_v0_3 = temp_s1->unk11FEE;
                    if (temp_v0_3 == (phi_s5 + 1)) {
                        temp_s1->unk11FEE = temp_v0_3 + 1;
                    }
                    break;
                case 8193:                          /* switch 1 */
                case 8194:                          /* switch 1 */
                case 8195:                          /* switch 1 */
                case 8196:                          /* switch 1 */
                case 8197:                          /* switch 1 */
                case 8198:                          /* switch 1 */
                case 8199:                          /* switch 1 */
                case 8200:                          /* switch 1 */
                    temp_v0_4 = temp_s1->unk11F22;
                    phi_s2 = temp_s1 + 0x10000;
                    if (((s32) temp_v0_4 >= 0x4A) && ((s32) temp_v0_4 < 0x4D) && (temp_v0 == 0x2002)) {
                        temp_s1->unk11FEE = temp_s1->unk11FF0;
                        if (temp_s1->unk120D6 != 0) {
                            temp_s1->unk120D4 += 0x19;
                            if ((s32) temp_s1->unk120D4 >= 0x64) {
                                temp_s1->unk120D6 = 0;
                                goto block_35;
                            }
                        } else {
                            temp_s1->unk120D4 += -0x19;
                            if ((s32) temp_s1->unk120D4 < -0x63) {
                                temp_s1->unk120D6 = 1;
block_35:
                            }
                        }
                        temp_v0_5 = ((s16) (temp_v0 - 0x2001) * 6) + &D_801CFE74;
                        temp_a0 = temp_v0_5->unk0 + temp_s1->unk120D4;
                        if (temp_a0 < 0) {
                            temp_s1->unk12018 = 0;
                        } else {
                            temp_s1->unk12018 = (s16) temp_a0;
                        }
                        temp_v1 = temp_v0_5->unk2;
                        temp_a0_2 = temp_v1 + temp_s1->unk120D4;
                        if (temp_a0_2 >= 0xFF) {
                            temp_s1->unk1201A = temp_v1;
                        } else {
                            temp_s1->unk1201A = (s16) temp_a0_2;
                        }
                        temp_v1_2 = temp_v0_5->unk4 + temp_s1->unk120D4;
                        if (temp_v1_2 < 0) {
                            temp_s1->unk1201C = 0;
                        } else {
                            temp_s1->unk1201C = (s16) temp_v1_2;
                        }
                    } else if (sp58->unk6F20 != 0) {
                        temp_v0_6 = ((s16) (temp_v0 - 0x2001) * 6) + &D_801CFF34;
                        temp_s1->unk12018 = temp_v0_6->unk0;
                        temp_s1->unk1201A = temp_v0_6->unk2;
                        temp_s1->unk1201C = temp_v0_6->unk4;
                    } else {
                        temp_v0_7 = temp_s1->unk11F0A;
                        if (temp_v0_7 == 1) {
                            temp_v0_8 = ((s16) (temp_v0 - 0x2001) * 6) + &D_801CFE74;
                            temp_s1->unk12018 = temp_v0_8->unk0;
                            temp_s1->unk1201A = temp_v0_8->unk2;
                            temp_s1->unk1201C = temp_v0_8->unk4;
                        } else if (temp_v0_7 == 0xD) {
                            temp_v0_9 = ((s16) (temp_v0 - 0x2001) * 6) + &D_801CFF04;
                            temp_s1->unk12018 = temp_v0_9->unk0;
                            temp_s1->unk1201A = temp_v0_9->unk2;
                            temp_s1->unk1201C = temp_v0_9->unk4;
                        } else {
                            temp_v0_10 = ((s16) (temp_v0 - 0x2001) * 6) + &D_801CFEA4;
                            temp_s1->unk12018 = temp_v0_10->unk0;
                            temp_s1->unk1201A = temp_v0_10->unk2;
                            temp_s1->unk1201C = temp_v0_10->unk4;
                        }
                    }
                    temp_v0_11 = temp_s1->unk11FEE;
                    if (temp_v0_11 == (phi_s5 + 1)) {
                        temp_s1->unk11FEE = temp_v0_11 + 1;
                    }
                    break;
                }
                goto block_192;
            }
            if (temp_v0 != 0x500) {
                goto block_157;
            }
            goto block_137;
        }
        if ((s32) temp_v0 >= 0x137) {
            switch (temp_v0) {                      /* switch 2 */
            case 513:                               /* switch 2 */
                temp_s1->unk11FF4 = 0x2D;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    play_sound(0U);
                }
                temp_t2 = sp134;
                sp134 = temp_t2 + 8;
                temp_t2->unk4 = 0;
                temp_t2->unk0 = 0xE7000000;
                temp_t5 = sp134;
                sp134 = temp_t5 + 8;
                temp_t5->unk0 = 0xFC119623;
                temp_t5->unk4 = 0xFF2FFFFF;
                temp_t9_2 = sp134;
                sp134 = temp_t9_2 + 8;
                temp_t9_2->unk0 = 0xFA000000;
                temp_t9_2->unk4 = (s32) (temp_s1->unk1201E & 0xFF);
                temp_t5_2 = sp134;
                sp134 = temp_t5_2 + 8;
                temp_t5_2->unk0 = 0xFD900000;
                temp_t5_2->unk4 = (s32) (temp_s1->unk11EF8 + 0x1000);
                temp_t1 = sp134;
                sp134 = temp_t1 + 8;
                temp_t1->unk4 = 0x7000000;
                temp_t1->unk0 = 0xF5900000;
                temp_t5_3 = sp134;
                sp134 = temp_t5_3 + 8;
                temp_t5_3->unk4 = 0;
                temp_t5_3->unk0 = 0xE6000000;
                temp_t8 = sp134;
                sp134 = temp_t8 + 8;
                temp_t8->unk4 = 0x747F156;
                temp_t8->unk0 = 0xF3000000;
                temp_t3 = sp134;
                sp134 = temp_t3 + 8;
                temp_t3->unk4 = 0;
                temp_t3->unk0 = 0xE7000000;
                temp_t6 = sp134;
                sp134 = temp_t6 + 8;
                temp_t6->unk4 = 0;
                temp_t6->unk0 = 0xF5800C00;
                temp_t9_3 = sp134;
                sp134 = temp_t9_3 + 8;
                temp_t9_3->unk4 = 0x17C0BC;
                temp_t9_3->unk0 = 0xF2000000;
                temp_v0_12 = sp134;
                sp134 = temp_v0_12 + 8;
                temp_v0_12->unk0 = ((((temp_s1->unk11FF4 + 0x60) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_s1->unk12012 + 0x31) * 4) & 0xFFF);
                temp_v0_12->unk4 = (s32) ((((temp_s1->unk11FF4 * 4) & 0xFFF) << 0xC) | (((temp_s1->unk12012 + 1) * 4) & 0xFFF));
                temp_t8_2 = sp134;
                sp134 = temp_t8_2 + 8;
                temp_t8_2->unk0 = 0xE1000000;
                temp_t8_2->unk4 = 0;
                temp_t4 = sp134;
                sp134 = temp_t4 + 8;
                temp_t4->unk0 = 0xF1000000;
                temp_t4->unk4 = 0x4000400;
                temp_t6_2 = sp134;
                sp134 = temp_t6_2 + 8;
                temp_t6_2->unk0 = 0xFD900000;
                temp_t6_2->unk4 = (s32) (temp_s1->unk11EF8 + 0x1900);
                temp_t4_2 = sp134;
                sp134 = temp_t4_2 + 8;
                temp_t4_2->unk4 = 0x7000000;
                temp_t4_2->unk0 = 0xF5900000;
                temp_t6_3 = sp134;
                sp134 = temp_t6_3 + 8;
                temp_t6_3->unk4 = 0;
                temp_t6_3->unk0 = 0xE6000000;
                temp_t9_4 = sp134;
                sp134 = temp_t9_4 + 8;
                temp_t9_4->unk4 = 0x747F156;
                temp_t9_4->unk0 = 0xF3000000;
                temp_t2_2 = sp134;
                sp134 = temp_t2_2 + 8;
                temp_t2_2->unk4 = 0;
                temp_t2_2->unk0 = 0xE7000000;
                temp_t7 = sp134;
                sp134 = temp_t7 + 8;
                temp_t7->unk4 = 0;
                temp_t7->unk0 = 0xF5800C00;
                temp_t1_2 = sp134;
                sp134 = temp_t1_2 + 8;
                temp_t1_2->unk4 = 0x17C0BC;
                temp_t1_2->unk0 = 0xF2000000;
                temp_v0_13 = sp134;
                sp134 = temp_v0_13 + 8;
                temp_v0_13->unk0 = ((((temp_s1->unk11FF4 + 0xC1) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_s1->unk12012 + 0x31) * 4) & 0xFFF);
                temp_v0_13->unk4 = (s32) (((((temp_s1->unk11FF4 + 0x60) * 4) & 0xFFF) << 0xC) | (((temp_s1->unk12012 + 1) * 4) & 0xFFF));
                temp_t1_3 = sp134;
                sp134 = temp_t1_3 + 8;
                temp_t1_3->unk0 = 0xE1000000;
                temp_t1_3->unk4 = 0;
                temp_t6_4 = sp134;
                sp134 = temp_t6_4 + 8;
                temp_t6_4->unk0 = 0xF1000000;
                temp_t6_4->unk4 = 0x4000400;
                temp_t8_3 = sp134;
                sp134 = temp_t8_3 + 8;
                temp_t8_3->unk4 = 0;
                temp_t8_3->unk0 = 0xE7000000;
                temp_t4_3 = sp134;
                sp134 = temp_t4_3 + 8;
                temp_t4_3->unk0 = 0xFA000000;
                temp_t4_3->unk4 = (s32) ((temp_s1->unk1201E & 0xFF) | 0xFF3C0000);
                temp_t8_4 = sp134;
                sp134 = temp_t8_4 + 8;
                temp_t8_4->unk0 = 0xFD900000;
                temp_t8_4->unk4 = (s32) (temp_s1->unk11EF8 + 0x1000);
                temp_t6_5 = sp134;
                sp134 = temp_t6_5 + 8;
                temp_t6_5->unk4 = 0x7000000;
                temp_t6_5->unk0 = 0xF5900000;
                temp_t8_5 = sp134;
                sp134 = temp_t8_5 + 8;
                temp_t8_5->unk4 = 0;
                temp_t8_5->unk0 = 0xE6000000;
                temp_t4_4 = sp134;
                sp134 = temp_t4_4 + 8;
                temp_t4_4->unk4 = 0x747F156;
                temp_t4_4->unk0 = 0xF3000000;
                temp_t7_2 = sp134;
                sp134 = temp_t7_2 + 8;
                temp_t7_2->unk4 = 0;
                temp_t7_2->unk0 = 0xE7000000;
                temp_t9_5 = sp134;
                sp134 = temp_t9_5 + 8;
                temp_t9_5->unk4 = 0;
                temp_t9_5->unk0 = 0xF5800C00;
                temp_t2_3 = sp134;
                sp134 = temp_t2_3 + 8;
                temp_t2_3->unk4 = 0x17C0BC;
                temp_t2_3->unk0 = 0xF2000000;
                temp_v0_14 = sp134;
                sp134 = temp_v0_14 + 8;
                temp_v0_14->unk0 = ((((temp_s1->unk11FF4 + 0x60) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_s1->unk12012 + 0x30) * 4) & 0xFFF);
                temp_v0_14->unk4 = (s32) ((((temp_s1->unk11FF4 * 4) & 0xFFF) << 0xC) | ((temp_s1->unk12012 * 4) & 0xFFF));
                temp_t1_4 = sp134;
                sp134 = temp_t1_4 + 8;
                temp_t1_4->unk0 = 0xE1000000;
                temp_t1_4->unk4 = 0;
                temp_t6_6 = sp134;
                sp134 = temp_t6_6 + 8;
                temp_t6_6->unk0 = 0xF1000000;
                temp_t6_6->unk4 = 0x4000400;
                temp_t5_4 = sp134;
                sp134 = temp_t5_4 + 8;
                temp_t5_4->unk0 = 0xFD900000;
                temp_t5_4->unk4 = (s32) (temp_s1->unk11EF8 + 0x1900);
                temp_t6_7 = sp134;
                sp134 = temp_t6_7 + 8;
                temp_t6_7->unk4 = 0x7000000;
                temp_t6_7->unk0 = 0xF5900000;
                temp_t5_5 = sp134;
                sp134 = temp_t5_5 + 8;
                temp_t5_5->unk4 = 0;
                temp_t5_5->unk0 = 0xE6000000;
                temp_t4_5 = sp134;
                sp134 = temp_t4_5 + 8;
                temp_t4_5->unk4 = 0x747F156;
                temp_t4_5->unk0 = 0xF3000000;
                temp_t8_6 = sp134;
                sp134 = temp_t8_6 + 8;
                temp_t8_6->unk4 = 0;
                temp_t8_6->unk0 = 0xE7000000;
                temp_t9_6 = sp134;
                sp134 = temp_t9_6 + 8;
                temp_t9_6->unk4 = 0;
                temp_t9_6->unk0 = 0xF5800C00;
                temp_t2_4 = sp134;
                sp134 = temp_t2_4 + 8;
                temp_t2_4->unk4 = 0x17C0BC;
                temp_t2_4->unk0 = 0xF2000000;
                temp_v0_15 = sp134;
                sp134 = temp_v0_15 + 8;
                temp_v0_15->unk0 = ((((temp_s1->unk11FF4 + 0xC0) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_s1->unk12012 + 0x30) * 4) & 0xFFF);
                temp_v0_15->unk4 = (s32) (((((temp_s1->unk11FF4 + 0x60) * 4) & 0xFFF) << 0xC) | ((temp_s1->unk12012 * 4) & 0xFFF));
                temp_t4_6 = sp134;
                sp134 = temp_t4_6 + 8;
                temp_t4_6->unk0 = 0xE1000000;
                temp_t4_6->unk4 = 0;
                temp_t8_7 = sp134;
                sp134 = temp_t8_7 + 8;
                temp_t8_7->unk0 = 0xF1000000;
                temp_t8_7->unk4 = 0x4000400;
                temp_t9_7 = sp134;
                sp134 = temp_t9_7 + 8;
                temp_t9_7->unk4 = 0;
                temp_t9_7->unk0 = 0xE7000000;
                temp_t2_5 = sp134;
                sp134 = temp_t2_5 + 8;
                temp_t2_5->unk0 = 0xFCFF97FF;
                temp_t2_5->unk4 = 0xFF2DFEFF;
                temp_s1->unk11FF4 += 0x20;
                goto block_192;
            case 514:                               /* switch 2 */
                temp_s1->unk12020 = 0x10;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    temp_s1->unk11F06 = temp_s1->unk11F04;
                    temp_s1->unk12023 = 4;
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 2U);
                }
                goto block_192;
            case 515:                               /* switch 2 */
                temp_s1->unk12020 = 0x11;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    temp_s1->unk11F06 = temp_s1->unk11F04;
                    temp_s1->unk12023 = 4;
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 2U);
                }
                goto block_192;
            case 524:                               /* switch 2 */
                temp_s1->unk12020 = 0x60;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                }
                goto block_192;
            case 544:                               /* switch 2 */
                temp_s1->unk12020 = 0x61;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                }
                goto block_192;
            case 545:                               /* switch 2 */
                temp_s1->unk12020 = 0x62;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                }
                goto block_192;
            case 546:                               /* switch 2 */
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    temp_s1->unk11F22 = 0x42;
                    temp_s1->unk12020 = 0x41;
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 0U);
                    play_sound(0x482EU);
                }
                goto block_192;
            case 549:                               /* switch 2 */
                temp_s1->unk12020 = 0x63;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_s1->unk11F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                }
                goto block_192;
            case 576:                               /* switch 2 */
block_137:
                if (temp_s1->unk11F22 == 6) {
                    if (temp_s1->unk11F0A == 3) {
                        func_8014AAD0(globalCtx);
                        *puParm2 = sp134;
                        return;
                    }
                    temp_s1->unk11F22 = 0x42;
                    if (temp_s1->unk12020 == 0) {
                        sp5C = &globalCtx->msgCtx.font;
                        sp50 = (s32) temp_v0;
                        play_sound(0x482EU);
                        if (temp_v0 == 0x500) {
                            Font_LoadMessageBoxEndIcon(sp5C, 1U);
                        } else {
                            Font_LoadMessageBoxEndIcon(sp5C, 0U);
                        }
                        if (globalCtx->csCtx.state == 0) {
                            func_8011552C(globalCtx, 3);
                        }
                    } else {
                        play_sound(0U);
                    }
                    goto block_147;
                }
block_147:
                *puParm2 = sp134;
                return;
            case 560:                               /* switch 2 */
                if (temp_s1->unk11F22 == 6) {
                    temp_s1->unk11F22 = 0x42;
                    temp_s1->unk12020 = 0x42;
                    Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                    play_sound(0x482EU);
                }
                *puParm2 = sp134;
                return;
            }
        } else {
            temp_t5_6 = temp_v0 - 9;
            if ((s32) temp_v0 >= 0x21) {
                switch (temp_v0) {                  /* switch 3 */
                case 257:                           /* switch 3 */
                    phi_s2 = temp_s1 + 0x10000;
                    if ((temp_s1->unk11FEE == (phi_s5 + 1)) && ((temp_v0_16 = temp_s1->unk11F22, phi_v1 = phi_s5 & 0xFFFF, (temp_v0_16 == 6)) || (((s32) temp_v0_16 >= 0xA) && ((s32) temp_v0_16 < 0x27)))) {
loop_76:
                        temp_v0_17 = (temp_s1 + (phi_v1 * 2))->unk11F24;
                        if ((temp_v0_17 != 0x102) && (temp_v0_17 != 0x104) && (temp_v0_17 != 0x103) && (temp_v0_17 != 0x230) && (temp_v0_17 != 9) && (temp_v0_17 != 0xB)) {
                            phi_v1 = (phi_v1 + 1) & 0xFFFF;
                            goto loop_76;
                        }
                        temp_t5_7 = phi_v1 - 1;
                        temp_s1->unk11FEE = temp_t5_7 + 1;
                        phi_s5_2 = temp_t5_7 & 0xFFFF;
                    }
                    goto block_192;
                case 258:                           /* switch 3 */
                    phi_v0 = (s32) temp_s1->unk11FEE;
                    goto block_193;
                case 272:                           /* switch 3 */
                    if (temp_s1->unk11F22 == 6) {
                        temp_s1->unk12023 = (s8) (temp_s1 + (((phi_s5 + 1) & 0xFFFF) * 2))->unk11F24;
                        temp_s1->unk11F22 = 8;
                    }
                    *puParm2 = sp134;
                    return;
                case 273:                           /* switch 3 */
                    if (temp_s1->unk11F22 == 6) {
                        temp_s1->unk11F22 = 0x42;
                        if (temp_s1->unk11F0C == 3) {
                            temp_s1->unk12020 = 0x55;
                        } else {
                            temp_s1->unk12020 = 0x50;
                        }
                        temp_s1->unk12023 = (s8) (temp_s1 + (((phi_s5 + 1) & 0xFFFF) * 2))->unk11F24;
                        Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                        if (globalCtx->csCtx.state == 0) {
                            func_8011552C(globalCtx, 3);
                        }
                    }
                    *puParm2 = sp134;
                    return;
                case 274:                           /* switch 3 */
                    if (temp_s1->unk11F22 == 6) {
                        temp_s1->unk11F22 = 0x42;
                        temp_s1->unk12020 = 0x52;
                        temp_s1->unk12023 = (s8) (temp_s1 + (((phi_s5 + 1) & 0xFFFF) * 2))->unk11F24;
                        Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 1U);
                        if (globalCtx->csCtx.state == 0) {
                            func_8011552C(globalCtx, 3);
                        }
                    }
                    *puParm2 = sp134;
                    return;
                case 288:                           /* switch 3 */
                    temp_a1 = phi_s5 + 1;
                    phi_s2 = temp_s1 + 0x10000;
                    if ((temp_s1->unk11FEE == temp_a1) && (temp_s1->unk11F22 == 6)) {
                        sp50 = temp_a1;
                        play_sound((temp_s1 + (phi_s5 * 2))->unk11F26);
                    }
                    if (temp_s1->unk11FEE == (phi_s5 + 1)) {
                        temp_s1->unk11FEE += 1;
                    }
                    phi_s5_2 = (phi_s5 + 1) & 0xFFFF;
                    goto block_192;
                case 296:                           /* switch 3 */
                    phi_s2 = temp_s1 + 0x10000;
                    if ((temp_s1->unk11FEE == (phi_s5 + 1)) && (temp_s1->unk11F22 == 6)) {
                        temp_s1->unk11F22 = 9;
                        temp_s1->unk12024 = (temp_s1 + (phi_s5 * 2))->unk11F26;
                    }
                    phi_s5_2 = (phi_s5 + 1) & 0xFFFF;
                    goto block_192;
                case 304:                           /* switch 3 */
                case 305:                           /* switch 3 */
                case 306:                           /* switch 3 */
                case 307:                           /* switch 3 */
                case 308:                           /* switch 3 */
                case 309:                           /* switch 3 */
                case 310:                           /* switch 3 */
                    temp_s1->unk12026 = temp_v0 - 0x130;
                    temp_v0_18 = temp_s1->unk11FEE;
                    phi_s2 = temp_s1 + 0x10000;
                    if (temp_v0_18 == (phi_s5 + 1)) {
                        temp_s1->unk11FEE = temp_v0_18 + 1;
                    }
                    goto block_192;
                case 260:                           /* switch 3 */
                    if (temp_s1->unk11F22 == 6) {
                        play_sound(0U);
                        temp_s1->unk11F22 = 0x42;
                        temp_s1->unk12020 = 0x30;
                    }
                    *puParm2 = sp134;
                    return;
                case 259:                           /* switch 3 */
                    if (temp_s1->unk11F22 == 6) {
                        temp_s1->unk11F22 = 0x42;
                        temp_s1->unk12020 = 0x40;
                        Font_LoadMessageBoxEndIcon(&globalCtx->msgCtx.font, 0U);
                        play_sound(0x482EU);
                    }
                    *puParm2 = sp134;
                    return;
                }
            } else if (temp_t5_6 < 0x18U) {
                switch (*(&D_801E201C + (temp_t5_6 * 4))) { /* switch 4; unable to parse jump table */
                case 23:                            /* switch 4 */
                    temp_s1->unk11FF4 += 6;
                    phi_v0 = (s32) temp_s1->unk11FEE;
                    goto block_193;
                case 1:                             /* switch 4 */
                    temp_s1->unk11FF6 += temp_s1->unk11FFC;
                    /* fallthrough */
                case 3:                             /* switch 4 */
                    temp_v1_3 = sp130 + 1;
                    temp_s1->unk11FF4 = (temp_s1 + (temp_v1_3 * 2))->unk11F1A + temp_s1->unk11FF8;
                    temp_v0_19 = temp_s1->unk12022;
                    sp130 = temp_v1_3;
                    phi_s2 = temp_s1 + 0x10000;
                    if (temp_v0_19 == 1) {
                        if (sp58->unk6F20 == 0) {
                            temp_s1->unk11FF4 += 0x20;
                        } else {
                            temp_s1->unk11FF4 += 0x39;
                        }
                    } else if (temp_v0_19 == 2) {
                        if (sp58->unk6F20 == 0) {
                            temp_s1->unk11FF4 += 0x16;
                        } else {
                            temp_s1->unk11FF4 += 0x39;
                        }
                    }
                    goto block_192;
                case 0:                             /* switch 4 */
                case 2:                             /* switch 4 */
                    if (temp_s1->unk11F22 == 6) {
                        if (temp_s1->unk12094 == 0) {
                            sp5C = &globalCtx->msgCtx.font;
                            play_sound(0U);
                            temp_s1->unk11F22 = 0x41;
                            Font_LoadMessageBoxEndIcon(sp5C, 0U);
                        } else {
                            temp_s1->unk11F22 = 4;
                            temp_s1->unk11FF2 = 0;
                            temp_s1->unk11FEC += 1;
                        }
                        temp_s1->unk120CE = temp_s1->unk12018;
                        temp_s1->unk120D0 = temp_s1->unk1201A;
                        temp_s1->unk120D2 = temp_s1->unk1201C;
                    }
                    *puParm2 = sp134;
                    return;
                }
            } else {
            case 4:                                 /* switch 4 */
            case 5:                                 /* switch 4 */
            case 6:                                 /* switch 4 */
            case 7:                                 /* switch 4 */
            case 8:                                 /* switch 4 */
            case 9:                                 /* switch 4 */
            case 10:                                /* switch 4 */
            case 11:                                /* switch 4 */
            case 12:                                /* switch 4 */
            case 13:                                /* switch 4 */
            case 14:                                /* switch 4 */
            case 15:                                /* switch 4 */
            case 16:                                /* switch 4 */
            case 17:                                /* switch 4 */
            case 18:                                /* switch 4 */
            case 19:                                /* switch 4 */
            case 20:                                /* switch 4 */
            case 21:                                /* switch 4 */
            case 22:                                /* switch 4 */
            default:                                /* switch 3 */
            default:                                /* switch 2 */
            default:                                /* switch 1 */
block_157:
                temp_v0_20 = &globalCtx->msgCtx.font;
                sp5C = temp_v0_20;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_v0 != 0x8145) {
                    if ((temp_v0 != 0x8148) && (temp_v0 != 0x8149)) {
                        if ((temp_v0 != 0x8169) && (temp_v0 != 0x8175)) {

                        } else {
                            temp_s1->unk11FF4 -= (s32) (6.0f * temp_s1->unk12098);
                        }
                    } else {
                        temp_s1->unk11FF4 -= (s32) (2.0f * temp_s1->unk12098);
                    }
                } else {
                    temp_s1->unk11FF4 -= (s32) (3.0f * temp_s1->unk12098);
                }
                if ((temp_s1->unk11F22 == 6) && (temp_s1->unk11FEE == (phi_s5 + 1))) {
                    sp44 = temp_v0_20 + 0x10000;
                    sp50 = (s32) temp_v0;
                    play_sound(0U);
                }
                if (((s32) temp_t9->unk11F24 >= 0x839F) && ((s32) temp_t9->unk11F24 < 0x83AB)) {
                    temp_v0_21 = (s32) temp_t9->unk11F24 + 0xFFFF0000 + &D_801CFF64;
                    sp12E = temp_s1->unk12018;
                    sp12C = temp_s1->unk1201A;
                    sp12A = temp_s1->unk1201C;
                    temp_s1->unk12018 = *(&D_801CFED4 + (temp_v0_21->unk7C61 * 6));
                    temp_s1->unk1201A = (&D_801CFED4 + (temp_v0_21->unk7C61 * 6))->unk2;
                    temp_s1->unk1201C = (&D_801CFED4 + (temp_v0_21->unk7C61 * 6))->unk4;
                    sp50 = (s32) temp_t9->unk11F24;
                    func_8014995C(globalCtx, sp5C + ((temp_v0_20 + 0x10000)->unk1D88 * 0x3C00) + sp138, &sp134, (s32) temp_t9->unk11F24);
                    temp_s1->unk12018 = sp12E;
                    temp_s1->unk1201A = sp12C;
                    temp_s1->unk1201C = sp12A;
                } else {
                    sp50 = (s32) temp_t9->unk11F24;
                    func_8014995C(globalCtx, sp5C + ((temp_v0_20 + 0x10000)->unk1D88 * 0x3C00) + sp138, &sp134, (s32) temp_t9->unk11F24);
                }
                sp138 += 0x80;
                if (((s32) temp_t9->unk11F24 != 0x8141) && ((s32) temp_t9->unk11F24 != 0x8142)) {
                    if ((s32) temp_t9->unk11F24 != 0x8144) {
                        if ((s32) temp_t9->unk11F24 != 0x8145) {
                            if ((s32) temp_t9->unk11F24 != 0x8168) {
                                if (((s32) temp_t9->unk11F24 != 0x816A) && ((s32) temp_t9->unk11F24 != 0x8176)) {
                                    if ((s32) temp_t9->unk11F24 != 0x8194) {
                                        temp_v0_22 = temp_s1->unk11F22;
                                        if (((s32) temp_v0_22 >= 0x45) && ((s32) temp_v0_22 < 0x4A)) {
                                            temp_s1->unk11FF4 += (s32) ((16.0f * temp_s1->unk12098) - 1.0f);
                                        } else {
                                            phi_t9 = temp_s1->unk11FF4 + (s32) (16.0f * temp_s1->unk12098);
                                            phi_at_2 = temp_s1 + 0x10000;
                                            goto block_191;
                                        }
                                    } else {
                                        phi_t9 = temp_s1->unk11FF4 + (s32) (14.0f * temp_s1->unk12098);
                                        phi_at_2 = temp_s1 + 0x10000;
                                        goto block_191;
                                    }
                                } else {
                                    temp_s1->unk11FF4 += (s32) (10.0f * temp_s1->unk12098);
                                }
                            } else {
                                goto block_184;
                            }
                        } else {
                            temp_s1->unk11FF4 += (s32) (15.0f * temp_s1->unk12098);
                        }
                    } else {
                        phi_t9 = temp_s1->unk11FF4 + (s32) (8.0f * temp_s1->unk12098);
                        phi_at_2 = temp_s1 + 0x10000;
block_191:
                        phi_at_2->unk1FF4 = phi_t9;
                    }
                } else {
block_184:
                    temp_s1->unk11FF4 += (s32) (12.0f * temp_s1->unk12098);
                }
block_192:
                phi_v0 = (s32) phi_s2->unk1FEE;
block_193:
                temp_s5 = (phi_s5_2 + 1) & 0xFFFF;
                phi_s5 = temp_s5;
                phi_s5_3 = temp_s5;
                if (temp_s5 >= phi_v0) {
                    goto block_194;
                }
                goto loop_4;
            }
        }
    } else {
block_194:
        temp_v0_23 = temp_s1->unk12024;
        if (temp_v0_23 == 0) {
            temp_s1->unk11FEE = phi_s5_3 + 1;
            temp_s1->unk12024 = 0;
            if (temp_s1->unk11F22 == 9) {
                temp_s1->unk11F22 = 6;
            }
        } else {
            temp_s1->unk12024 = temp_v0_23 - 1;
        }
        *puParm2 = sp134;
    }
}

void func_8014C70C(GlobalContext *arg0, u16 arg1, s16 arg2) {
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    if (arg1 == 0x83) {
        temp_v0 = arg0 + 0x4908;
        temp_v0->unk12010 = (s16) (temp_v0->unk11FF8 - *(&D_801CFF88 + (gSaveContext.language * 2)));
        temp_v0->unk12012 = (s16) (arg2 + 0xA);
        temp_v0->unk12014 = 0x10;
    } else if (((s32) arg1 >= 0x84) && ((s32) arg1 < 0x8B)) {
        temp_v0_2 = arg0 + 0x4908;
        temp_v0_2->unk12010 = (s16) (temp_v0_2->unk11FF8 - *(&D_801CFF88 + (gSaveContext.language * 2)));
        temp_v0_2->unk12012 = (s16) (arg2 + 0xA);
        temp_v0_2->unk12014 = 0x10;
    } else if (arg1 == 0x77) {
        temp_v0_3 = arg0 + 0x4908;
        temp_v0_3->unk12010 = (s16) (temp_v0_3->unk11FF8 - *(&D_801CFF70 + (gSaveContext.language * 2)));
        temp_v0_3->unk12012 = (s16) (arg2 + 0xA);
        temp_v0_3->unk12014 = 0x20;
    } else if (((s32) arg1 >= 0x61) && ((s32) arg1 < 0x6D)) {
        temp_v0_4 = arg0 + 0x4908;
        temp_v0_4->unk12010 = (s16) (temp_v0_4->unk11FF8 - *(&D_801CFF88 + (gSaveContext.language * 2)));
        temp_v0_4->unk12012 = (s16) (arg2 + 0xA);
        temp_v0_4->unk12014 = 0x10;
        func_80178E3C(_icon_item_static_testSegmentRomStart, 0x61U, temp_v0_4->unk11EF8 + 0x1000, 0x180);
    } else if (arg1 == 0x6D) {
        temp_v0_5 = arg0 + 0x4908;
        temp_v0_5->unk12010 = (s16) (temp_v0_5->unk11FF8 - *(&D_801CFF70 + (gSaveContext.language * 2)));
        temp_v0_5->unk12012 = (s16) (arg2 + 6);
        temp_v0_5->unk12014 = 0x20;
        func_80178E3C(_icon_item_static_testSegmentRomStart, 0x61U, temp_v0_5->unk11EF8 + 0x1000, 0x1000);
    } else if ((s32) arg1 < 0x61) {
        temp_v0_6 = arg0 + 0x4908;
        temp_v0_6->unk12010 = (s16) (temp_v0_6->unk11FF8 - *(&D_801CFF70 + (gSaveContext.language * 2)));
        temp_v0_6->unk12012 = (s16) (arg2 + 6);
        temp_v0_6->unk12014 = 0x20;
        func_80178E3C(_icon_item_static_testSegmentRomStart, arg1, temp_v0_6->unk11EF8 + 0x1000, 0x1000);
    } else if (arg1 == 0xCC) {
        temp_v0_7 = arg0 + 0x4908;
        temp_v0_7->unk12010 = (s16) (temp_v0_7->unk11FF8 - *(&D_801CFF70 + (gSaveContext.language * 2)));
        temp_v0_7->unk12012 = (s16) (arg2 + 8);
        temp_v0_7->unk12014 = 0x20;
        func_80178E3C(_schedule_dma_static_testSegmentRomStart, 0x15U, temp_v0_7->unk11EF8 + 0x1000, 0x400);
    } else if ((s32) arg1 >= 0xB8) {
        temp_v0_8 = arg0 + 0x4908;
        temp_v0_8->unk12010 = (s16) (temp_v0_8->unk11FF8 - *(&D_801CFF70 + (gSaveContext.language * 2)));
        temp_v0_8->unk12012 = (s16) (arg2 + 8);
        temp_v0_8->unk12014 = 0x20;
        func_80178E3C(_schedule_dma_static_testSegmentRomStart, arg1 - 0xB8, temp_v0_8->unk11EF8 + 0x1000, 0x800);
    } else {
        temp_v0_9 = arg0 + 0x4908;
        if ((s32) arg1 >= 0x6E) {
            temp_v0_9->unk12010 = (s16) (temp_v0_9->unk11FF8 - *(&D_801CFF7C + (gSaveContext.language * 2)));
            temp_v0_9->unk12012 = (s16) (arg2 + 0xA);
            temp_v0_9->unk12014 = 0x18;
            func_80178E3C(_icon_item_24_static_testSegmentRomStart, arg1 - 0x6E, temp_v0_9->unk11EF8 + 0x1000, 0x900);
        }
    }
    temp_v0_10 = arg0 + 0x4908;
    if (arg0->pauseCtx.unk_1F0 != 0) {
        temp_v0_10->unk12010 = (s16) (s32) (((f32) temp_v0_10->unk12010 * 1.4f) + 2.0f);
        temp_v0_10->unk12014 = (s16) (s32) ((f32) temp_v0_10->unk12014 * 1.4f);
    }
    temp_v0_10->unk12022 = 1;
}

void func_8014CC14(GlobalContext *arg0, u16 arg1, s32 *arg2, f32 *arg3, s16 arg4) {
    s32 sp20;
    f32 sp1C;
    MessageContext *temp_v0;
    f32 temp_f0;
    s32 temp_a2;

    temp_a2 = *arg2;
    temp_f0 = *arg3;
    sp20 = temp_a2;
    sp1C = temp_f0;
    Font_LoadChar(arg0, arg1, temp_a2);
    temp_v0 = &arg0->msgCtx;
    (temp_v0 + (arg4 * 2))->unk11F24 = arg1;
    *arg2 = temp_a2 + 0x80;
    *arg3 = temp_f0 + (16.0f * temp_v0->unk12098);
}

void func_8014CCB4(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3) {
    f32 sp28;
    MessageContext *sp24;
    MessageContext *temp_v0;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s1_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;

    temp_s0 = *arg2;
    temp_s1 = *arg1;
    sp28 = *arg3;
    Font_LoadChar(arg0, 0x838BU, temp_s0);
    temp_v0 = &arg0->msgCtx;
    temp_s1_2 = temp_s1 + 1;
    temp_s0_2 = temp_s0 + 0x80;
    (temp_v0 + (temp_s1 * 2))->unk11F24 = 0x838B;
    sp24 = temp_v0;
    Font_LoadChar(arg0, 0x8373U, temp_s0_2);
    temp_s1_3 = temp_s1_2 + 1;
    temp_s0_3 = temp_s0_2 + 0x80;
    (temp_v0 + (temp_s1_2 * 2))->unk11F24 = 0x8373;
    Font_LoadChar(arg0, 0x815CU, temp_s0_3);
    (temp_v0 + (temp_s1_3 * 2))->unk11F24 = 0x815C;
    *arg1 = temp_s1_3;
    *arg2 = temp_s0_3 + 0x80;
    *arg3 = sp28 + (16.0f * temp_v0->unk12098 * 3.0f);
}

void func_8014CDF0(s32 arg0, u32 arg1, ? *arg2) {
    u32 sp24;
    s32 sp20;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t8;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_t7;

    sp20 = arg0;
    sp24 = arg1;
    arg2->unk0 = (s16) (u32) __ull_div((u64) arg0, (u64) arg1, 0U, 0x8CA0U);
    temp_t2 = arg2->unk0 * 0x8CA0;
    temp_a0 = (sp20 - (temp_t2 >> 0x1F)) - (sp24 < (u32) temp_t2);
    temp_a1 = sp24 - temp_t2;
    sp24 = temp_a1;
    sp20 = temp_a0;
    arg2->unk2 = (s16) (u32) __ull_div((u64) temp_a0, (u64) temp_a1, 0U, 0x1770U);
    temp_t0 = arg2->unk2 * 0x1770;
    temp_t6 = (sp20 - (temp_t0 >> 0x1F)) - (sp24 < (u32) temp_t0);
    sp24 -= temp_t0;
    sp20 = temp_t6;
    arg2->unk4 = 0x135B;
    arg2->unk6 = (s16) (u32) __ull_div((u64) sp20, (u64) sp24, 0U, 0x3E8U);
    temp_t8 = arg2->unk6 * 0x3E8;
    temp_a0_2 = (sp20 - (temp_t8 >> 0x1F)) - (sp24 < (u32) temp_t8);
    temp_a1_2 = sp24 - temp_t8;
    sp24 = temp_a1_2;
    sp20 = temp_a0_2;
    arg2->unk8 = (s16) (u32) __ull_div((u64) temp_a0_2, (u64) temp_a1_2, 0U, 0x64U);
    temp_t2_2 = arg2->unk8 * 0x64;
    temp_t6_2 = (sp20 - (temp_t2_2 >> 0x1F)) - (sp24 < (u32) temp_t2_2);
    sp24 -= temp_t2_2;
    sp20 = temp_t6_2;
    arg2->unkA = 0x1313;
    arg2->unkC = (s16) (u32) __ull_div((u64) sp20, (u64) sp24, 0U, 0xAU);
    temp_t0_2 = arg2->unkC * 0xA;
    temp_t6_3 = (sp20 - (temp_t0_2 >> 0x1F)) - (sp24 < (u32) temp_t0_2);
    temp_t7 = sp24 - temp_t0_2;
    sp24 = temp_t7;
    sp20 = temp_t6_3;
    arg2->unkE = (s16) temp_t7;
}

void func_8014CFDC(GlobalContext *arg0) {
    s32 sp1C;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    u16 temp_t2;
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v0_3;
    void *temp_a0;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t1_4;
    void *temp_v1;

    temp_v1 = arg0 + 0x4908;
    if (arg0->msgCtx.unk11FEC == 0) {
        temp_v0 = temp_v1->unk11FEC;
        temp_a0 = arg0 + 0x4A70;
        if ((temp_a0 + temp_v0)->unk11882 != 0xFE) {
            temp_v1->unk11F18 = 0;
            temp_v0_2 = temp_v1->unk11F04;
            if ((temp_v0_2 == 0x176F) || (temp_v0_2 == 0x1770) || (temp_v0_2 == 0x1771)) {
                temp_v1->unk11F16 = 0;
                temp_v1->unk11FEC = (s16) (temp_v1->unk11FEC + 2);
            } else {
                temp_v1->unk11FEC = (s16) (temp_v1->unk11FEC + 2);
                temp_v0_3 = (temp_a0 + temp_v1->unk11FEC)->unk11880;
                if (((s32) temp_v0_3 < 0xC8) || ((s32) temp_v0_3 >= 0xD8)) {
                    temp_v1->unk11F16 = (s16) *(&D_801CFF94 + (temp_v0_3 * 2));
                } else {
                    temp_v1->unk11F16 = 0xFE;
                }
            }
        } else {
            temp_v1->unk11FEC = (s16) (temp_v0 + 2);
            temp_v1->unk11F16 = (s16) (temp_a0 + temp_v1->unk11FEC)->unk11880;
        }
        temp_v0_4 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_t1 = temp_a0 + temp_v0_4 + 0x10000;
        temp_v1->unk11FEC = temp_v0_4;
        temp_v1->unk11F14 = (s16) (temp_t1->unk1880 << 8);
        temp_v0_5 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_v1->unk11FEC = temp_v0_5;
        temp_v1->unk11F14 = (s16) (temp_v1->unk11F14 | (temp_a0 + temp_v0_5)->unk11880);
        temp_v0_6 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_t1_2 = temp_a0 + temp_v0_6 + 0x10000;
        temp_v1->unk11FEC = temp_v0_6;
        temp_v1->unk1206C = (s32) (temp_t1_2->unk1880 << 8);
        temp_v0_7 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_v1->unk11FEC = temp_v0_7;
        temp_v1->unk1206C = (s32) (temp_v1->unk1206C | (temp_a0 + temp_v0_7)->unk11880);
        temp_v0_8 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_t1_3 = temp_a0 + temp_v0_8 + 0x10000;
        temp_v1->unk11FEC = temp_v0_8;
        temp_v1->unk12070 = (s32) (temp_t1_3->unk1880 << 8);
        temp_v0_9 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_v1->unk11FEC = temp_v0_9;
        temp_v1->unk12070 = (s32) (temp_v1->unk12070 | (temp_a0 + temp_v0_9)->unk11880);
        temp_v0_10 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_t1_4 = temp_a0 + temp_v0_10 + 0x10000;
        temp_v1->unk11FEC = temp_v0_10;
        temp_v1->unk12074 = (s32) (temp_t1_4->unk1880 << 8);
        temp_v0_11 = (temp_v1->unk11FEC + 1) & 0xFFFF;
        temp_v1->unk11FEC = temp_v0_11;
        temp_v1->unk12074 = (s32) (temp_v1->unk12074 | (temp_a0 + temp_v0_11)->unk11880);
        temp_v1->unk11FEC = (s16) (temp_v1->unk11FEC + 1);
        temp_t2 = temp_v1->unk11F16;
        sp1C = (s32) temp_t2;
        if (temp_t2 != 0xFE) {
            func_8014C70C(arg0, unksp1E, (s16) (temp_v1->unk1206A + 0xA), temp_v1 + 0x10000);
        }
    }
}

void func_8014D304(GlobalContext *arg0, s32 arg1, s32 *arg2, f32 *arg3, s16 *arg4) {
    f32 sp60;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    f32 temp_f0;
    s16 *temp_s2;
    s16 temp_s1;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_f6;
    s32 temp_hi;
    s32 temp_s0;
    s32 temp_s0_2;
    void *temp_s4;
    u32 phi_a0;
    s16 phi_v0;
    s16 phi_v1;
    s16 phi_v0_2;
    s16 phi_v1_2;
    s16 phi_s1;
    s32 phi_s0;
    s16 phi_s3;
    s16 phi_s3_2;
    s32 phi_s0_2;

    sp60 = *arg3;
    phi_s0 = *arg2;
    phi_s3 = *arg4;
    if ((arg1 & 0xFFFF) == 0x20F) {
        phi_a0 = (-(s32) (((s32) gSaveContext.day % 5) << 0x10) - ((gSaveContext.time - 0x4000) & 0xFFFF)) + 0x40000;
    } else {
        phi_a0 = 0x10000 - ((gSaveContext.time - 0x4000) & 0xFFFF);
    }
    temp_f0 = (f32) phi_a0 * 0.021972656f;
    sp54 = 0;
    temp_s4 = arg0 + 0x4908;
    temp_f6 = (s32) (temp_f0 / 60.0f);
    sp56 = (s16) temp_f6;
    phi_v0 = (s16) temp_f6;
    phi_v1 = 0;
    phi_v1_2 = 0;
    phi_s1 = 0;
    if ((s32) (s16) temp_f6 >= 0xA) {
        do {
            temp_v0 = phi_v0 - 0xA;
            temp_v1 = phi_v1 + 1;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
        } while ((s32) temp_v0 >= 0xA);
        sp54 = temp_v1;
        sp56 = temp_v0;
    }
    temp_hi = (s32) temp_f0 % 0x3C;
    sp5A = (s16) temp_hi;
    sp58 = 0;
    phi_v0_2 = (s16) temp_hi;
    if ((s32) (s16) temp_hi >= 0xA) {
        do {
            temp_v0_2 = phi_v0_2 - 0xA;
            temp_v1_2 = phi_v1_2 + 1;
            phi_v0_2 = temp_v0_2;
            phi_v1_2 = temp_v1_2;
        } while ((s32) temp_v0_2 >= 0xA);
        sp58 = temp_v1_2;
        sp5A = temp_v0_2;
    }
    do {
        temp_s2 = &(&sp54)[phi_s1];
        Font_LoadChar(arg0, (*temp_s2 + 0x824F) & 0xFFFF, phi_s0);
        temp_s3 = phi_s3 + 1;
        temp_s0 = phi_s0 + 0x80;
        (temp_s4 + (phi_s3 * 2))->unk11F24 = (s16) (*temp_s2 + 0x824F);
        phi_s3_2 = temp_s3;
        phi_s0_2 = temp_s0;
        if (phi_s1 == 1) {
            Font_LoadChar(arg0, 0x8E9EU, temp_s0);
            temp_s3_2 = temp_s3 + 1;
            temp_s0_2 = temp_s0 + 0x80;
            (temp_s4 + (temp_s3 * 2))->unk11F24 = 0x8E9E;
            Font_LoadChar(arg0, 0x8AD4U, temp_s0_2);
            (temp_s4 + (temp_s3_2 * 2))->unk11F24 = 0x8E9E;
            phi_s3_2 = (s16) (temp_s3_2 + 1);
            phi_s0_2 = temp_s0_2 + 0x80;
        } else if (phi_s1 == 3) {
            Font_LoadChar(arg0, 0x95AAU, temp_s0);
            (temp_s4 + (temp_s3 * 2))->unk11F24 = 0x95AA;
            phi_s0_2 = temp_s0 + 0x80;
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s0 = phi_s0_2;
        phi_s3 = phi_s3_2;
    } while ((s32) temp_s1 < 4);
    sp60 += 7.0f * (16.0f * temp_s4->unk12098);
    *arg4 = phi_s3_2;
    *arg2 = phi_s0_2;
    *arg3 = sp60;
}

void func_8014D62C(GlobalContext *arg0, s32 *arg1, f32 *arg2, s16 *arg3) {
    f32 sp3C;
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s6;
    s32 temp_s2;
    s32 temp_s2_2;
    u16 *temp_v0;
    s16 phi_v0;
    s16 phi_s0;
    s16 phi_s1;
    s32 phi_s2;
    s16 phi_s1_2;
    s32 phi_s2_2;

    temp_s1 = *arg3;
    temp_s2 = *arg1;
    sp3C = *arg2;
    if ((func_8010A0A4(arg0) != 0) || (arg0->sceneNum == 0x4F)) {
        phi_v0 = 0xA;
    } else {
        phi_v0 = arg0->pauseCtx.unk_238[4];
    }
    temp_s6 = *(&D_801D0250 + (phi_v0 * 2));
    phi_s0 = 0;
    phi_s1_2 = temp_s1;
    phi_s2_2 = temp_s2;
    if ((s32) temp_s6 > 0) {
        phi_s1 = temp_s1;
        phi_s2 = temp_s2;
        do {
            temp_v0 = (phi_v0 * 0x12) + &D_801D0188 + (phi_s0 * 2);
            (arg0 + 0x4908 + (phi_s1 * 2))->unk11F24 = (u16) *temp_v0;
            Font_LoadChar(arg0, *temp_v0, phi_s2);
            temp_s0 = phi_s0 + 1;
            temp_s1_2 = phi_s1 + 1;
            temp_s2_2 = phi_s2 + 0x80;
            phi_s0 = temp_s0;
            phi_s1 = temp_s1_2;
            phi_s2 = temp_s2_2;
            phi_s1_2 = temp_s1_2;
            phi_s2_2 = temp_s2_2;
        } while ((s32) temp_s0 < (s32) temp_s6);
    }
    *arg3 = phi_s1_2 - 1;
    *arg1 = phi_s2_2;
    *arg2 = sp3C + ((f32) (temp_s6 - 1) * (16.0f * arg0->msgCtx.unk12098));
}

void func_8014D7B4(GlobalContext *arg0) {
    void *spF0;
    void *spEC;
    s16 spEA;
    s16 spE0;
    s16 spDA;
    s16 spD8;
    s16 spD6;
    s16 spD4;
    s16 spD2;
    s32 spC8;
    f32 spC0;
    ? spAC;
    u32 sp9C;
    s32 sp98;
    s32 sp7C;
    void *sp74;
    f32 temp_f0;
    s16 *temp_s0_13;
    s16 *temp_s0_14;
    s16 *temp_s0_15;
    s16 *temp_s0_16;
    s16 *temp_s0_2;
    s16 *temp_s0_3;
    s16 *temp_s0_4;
    s16 *temp_s0_5;
    s16 *temp_s0_6;
    s16 *temp_s0_7;
    s16 *temp_s0_8;
    s16 *temp_s0_9;
    s16 *temp_s5;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_a3_10;
    s16 temp_a3_11;
    s16 temp_a3_12;
    s16 temp_a3_13;
    s16 temp_a3_14;
    s16 temp_a3_15;
    s16 temp_a3_16;
    s16 temp_a3_17;
    s16 temp_a3_18;
    s16 temp_a3_19;
    s16 temp_a3_20;
    s16 temp_a3_21;
    s16 temp_a3_23;
    s16 temp_a3_24;
    s16 temp_a3_25;
    s16 temp_a3_27;
    s16 temp_a3_28;
    s16 temp_a3_29;
    s16 temp_a3_2;
    s16 temp_a3_30;
    s16 temp_a3_31;
    s16 temp_a3_32;
    s16 temp_a3_33;
    s16 temp_a3_34;
    s16 temp_a3_35;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_a3_5;
    s16 temp_a3_6;
    s16 temp_a3_7;
    s16 temp_a3_8;
    s16 temp_a3_9;
    s16 temp_s0_10;
    s16 temp_s0_11;
    s16 temp_s0_12;
    s16 temp_s1;
    s16 temp_s1_10;
    s16 temp_s1_11;
    s16 temp_s1_12;
    s16 temp_s1_13;
    s16 temp_s1_14;
    s16 temp_s1_15;
    s16 temp_s1_16;
    s16 temp_s1_17;
    s16 temp_s1_18;
    s16 temp_s1_19;
    s16 temp_s1_20;
    s16 temp_s1_21;
    s16 temp_s1_22;
    s16 temp_s1_23;
    s16 temp_s1_24;
    s16 temp_s1_25;
    s16 temp_s1_26;
    s16 temp_s1_27;
    s16 temp_s1_28;
    s16 temp_s1_29;
    s16 temp_s1_2;
    s16 temp_s1_30;
    s16 temp_s1_3;
    s16 temp_s1_4;
    s16 temp_s1_5;
    s16 temp_s1_6;
    s16 temp_s1_7;
    s16 temp_s1_8;
    s16 temp_s1_9;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t2_3;
    s16 temp_t2_4;
    s16 temp_t2_5;
    s16 temp_t3;
    s16 temp_t3_3;
    s16 temp_t3_4;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t5_3;
    s16 temp_t6_2;
    s16 temp_t6_3;
    s16 temp_t7;
    s16 temp_t7_2;
    s16 temp_t7_3;
    s16 temp_t8;
    s16 temp_t8_2;
    s16 temp_t9;
    s16 temp_t9_4;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_15;
    s16 temp_v0_2;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s32 temp_a0;
    s32 temp_a0_5;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_hi;
    s32 temp_t3_2;
    s32 temp_t5_4;
    s32 temp_t6;
    s8 temp_a0_2;
    u16 *temp_v0_4;
    u16 temp_s0;
    u16 temp_t9_2;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_a3_22;
    u32 temp_a3_26;
    u32 temp_v0_12;
    u32 temp_v0_3;
    u8 temp_v0_13;
    u8 temp_v0_14;
    u8 temp_v0_16;
    u8 temp_v0_5;
    u8 temp_v0_9;
    void *temp_s2;
    void *temp_s7;
    void *temp_t4_2;
    void *temp_t6_4;
    void *temp_t8_3;
    void *temp_t9_3;
    void *temp_v1;
    void *temp_v1_4;
    void *temp_v1_5;
    s16 phi_a2;
    s32 phi_a2_2;
    s16 phi_s1;
    s16 phi_v0;
    s16 phi_s1_2;
    s32 phi_s3;
    s16 phi_a3;
    s16 phi_s1_3;
    s16 phi_a3_2;
    s32 phi_a3_3;
    s32 phi_a3_4;
    s32 phi_a3_5;
    s32 phi_a3_6;
    s16 phi_s1_4;
    s32 phi_s3_2;
    s16 phi_s1_5;
    s16 phi_s1_6;
    s32 phi_s3_3;
    s16 phi_a3_7;
    s16 phi_a3_8;
    s32 phi_a3_9;
    s32 phi_a3_10;
    s16 phi_s1_7;
    s32 phi_s3_4;
    s16 phi_s1_8;
    s32 phi_s3_5;
    s16 phi_s1_9;
    s32 phi_s3_6;
    s16 phi_a3_11;
    s16 phi_s1_10;
    s16 phi_a3_12;
    s32 phi_a3_13;
    s32 phi_a3_14;
    s32 phi_a3_15;
    s32 phi_a3_16;
    s16 phi_s1_11;
    s16 phi_a3_17;
    s16 phi_a3_18;
    s32 phi_s3_7;
    s16 phi_s1_12;
    s16 phi_s1_13;
    s8 phi_s3_8;
    s16 phi_s1_14;
    s16 phi_s1_15;
    s16 phi_s1_16;
    s16 phi_s1_17;
    s32 phi_s3_9;
    s16 phi_a3_19;
    s32 phi_a3_20;
    s32 phi_a3_21;
    s32 phi_a3_22;
    s32 phi_a3_23;
    s16 phi_s1_18;
    s32 phi_s3_10;
    u8 *phi_v0_2;
    s16 phi_a3_24;
    s32 phi_a3_25;
    s32 phi_a3_26;
    s32 phi_a3_27;
    s32 phi_a3_28;
    s16 phi_s1_19;
    s32 phi_s3_11;
    s16 phi_s1_20;
    s16 phi_s1_21;
    s32 phi_s3_12;
    s16 phi_a3_29;
    s32 phi_a3_30;
    s32 phi_a3_31;
    s32 phi_a3_32;
    s32 phi_a3_33;
    s16 phi_s1_22;
    s32 phi_s3_13;
    s16 phi_a3_34;
    s32 phi_a3_35;
    s32 phi_a3_36;
    s32 phi_a3_37;
    s32 phi_a3_38;
    s16 phi_s1_23;
    s32 phi_s3_14;
    s16 phi_s1_24;
    u16 phi_v1;
    s16 phi_a2_3;
    s32 phi_a2_4;
    s16 phi_s1_25;
    s16 phi_v0_3;
    f32 phi_f6;
    s16 phi_a3_39;
    s32 phi_a3_40;
    s32 phi_a3_41;
    s16 phi_s1_26;
    s16 phi_s1_27;
    s32 phi_s3_15;
    f32 phi_f20;
    s32 phi_v0_4;
    s16 phi_a0;
    s16 phi_a3_42;
    s32 phi_a3_43;
    s32 phi_a3_44;
    s32 phi_a3_45;
    s32 phi_a3_46;
    s16 phi_s1_28;
    s16 phi_a3_47;
    s16 phi_a3_48;
    s32 phi_s3_16;
    s16 phi_s1_29;
    s16 phi_s1_30;
    s32 phi_s3_17;
    u8 phi_v1_2;
    f32 phi_f20_2;
    s16 phi_a0_2;
    s32 phi_a0_3;

    temp_s2 = arg0 + 0x4A70;
    spF0 = temp_s2;
    spEC = arg0->actorCtx.actorList[2].first;
    arg0->msgCtx.unk12024 = 0;
    arg0->msgCtx.unk12026 = arg0->msgCtx.unk12024;
    arg0->msgCtx.unk1209C = 0;
    spC0 = 0.0f;
    arg0->msgCtx.font.unk_11D88 = (arg0->msgCtx.font.unk_11D88 ^ 1) & 1;
    temp_s7 = arg0 + 0x4908;
    if ((gSaveContext.language == 0) && (temp_s7->unk12090 == 0)) {
        spD2 = 0;
        spE0 = 0;
        spEA = 0;
        spC8 = 0;
        sp74 = temp_s7 + 0x10000;
        func_8014CFDC(arg0);
        temp_s5 = &spD4;
loop_3:
        temp_s0 = (temp_s2 + (sp74->unk1FEC * 2))->unk11880;
        (temp_s7 + (spEA * 2))->unk11F24 = temp_s0;
        if (temp_s0 != 9) {
            temp_a3 = spDA;
            phi_a3_11 = temp_a3;
            if (temp_s0 != 0xB) {
                spDA = temp_a3;
                if (temp_s0 != 0x110) {
                    spDA = temp_a3;
                    if (temp_s0 != 0x111) {
                        spDA = temp_a3;
                        if (temp_s0 != 0x112) {
                            spDA = temp_a3;
                            if (temp_s0 != 0x103) {
                                spDA = temp_a3;
                                if (temp_s0 != 0x230) {
                                    spDA = temp_a3;
                                    if (temp_s0 != 0x500) {
                                        spDA = temp_a3;
                                        if (temp_s0 != 0x240) {
                                            if (temp_s0 == 0x104) {
                                                spDA = temp_a3;
                                            } else {
                                                phi_a2 = 8;
                                                phi_a2_3 = 8;
                                                if (temp_s0 == 0x100) {
                                                    phi_s1 = 0;
loop_46:
                                                    phi_a2_2 = (s32) phi_a2;
                                                    if (*(&gSaveContext + 0x2B + phi_a2) == 0x3E) {
                                                        temp_a2 = phi_a2 - 1;
                                                        phi_a2 = temp_a2;
                                                        phi_a2_2 = (s32) temp_a2;
                                                        if ((s32) temp_a2 > 0) {
                                                            goto loop_46;
                                                        }
                                                    }
                                                    spDA = temp_a3;
                                                    if (phi_a2_2 > 0) {
                                                        spDA = temp_a3;
                                                        do {
                                                            (temp_s7 + (spEA * 2) + (phi_s1 * 2))->unk11F24 = 0x100;
                                                            phi_v0 = 0;
loop_51:
                                                            temp_v1 = phi_v0 + (temp_s2 + ((u8) gSaveContext.playerName[phi_s1] << 7) + 0x7880);
                                                            *(temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0) = temp_v1->unk0;
                                                            (temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0)->unk1 = (u8) temp_v1->unk1;
                                                            (temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0)->unk2 = (u8) temp_v1->unk2;
                                                            temp_v0 = phi_v0 + 4;
                                                            (temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0)->unk3 = (u8) temp_v1->unk3;
                                                            temp_a3_2 = spDA;
                                                            phi_v0 = temp_v0;
                                                            if ((s32) temp_v0 < 0x80) {
                                                                goto loop_51;
                                                            }
                                                            temp_s1 = phi_s1 + 1;
                                                            spDA = temp_a3_2;
                                                            spC8 += 0x80;
                                                            phi_s1 = temp_s1;
                                                        } while ((s32) temp_s1 < phi_a2_2);
                                                        spDA = temp_a3_2;
                                                    }
                                                    spEA = (spEA + phi_a2_2) - 1;
                                                    spC0 += (f32) phi_a2_2 * (16.0f * sp74->unk2098);
                                                } else if (temp_s0 == 0x201) {
                                                    spDA = temp_a3;
                                                    spD2 = 2;
                                                    spE0 = 2;
                                                    DmaMgr_SendRequest0(sp74->unk1EF8 + 0x1000, (u32) _message_texture_staticSegmentRomStart, 0x900U);
                                                    DmaMgr_SendRequest0(sp74->unk1EF8 + 0x1900, (u32) (_message_texture_staticSegmentRomStart + 0x900), 0x900U);
                                                    temp_s7->unk12012 = (s16) (sp74->unk206A + 8);
                                                    temp_s7->unk11F18 = 1;
                                                    temp_s7->unk12010 = (s16) gGameInfo->data[1391];
                                                } else if (temp_s0 == 0x202) {
                                                    spDA = temp_a3;
                                                    temp_s7->unk11F18 = 1;
                                                    temp_s7->unk12022 = 2;
                                                } else if (temp_s0 == 0x203) {
                                                    spDA = temp_a3;
                                                    temp_s7->unk11F18 = 1;
                                                    temp_s7->unk12022 = 3;
                                                    temp_s7->unk11FF8 = (s16) (sp74->unk1FF8 + 0x16);
                                                } else if (temp_s0 == 0x204) {
                                                    temp_a0 = (&gSaveContext.pictoPhoto[924])[temp_s0];
                                                    temp_a1 = *(&gSaveContext + 0x2DC4 + (temp_s0 * 8));
                                                    spDA = temp_a3;
                                                    sp98 = temp_a0;
                                                    sp9C = temp_a1;
                                                    func_8014CDF0(temp_a0, temp_a1, &spAC, temp_a3);
                                                    phi_s1_2 = 0;
                                                    phi_s3 = 0;
                                                    do {
                                                        if ((phi_s1_2 == 1) || ((sp + (phi_s1_2 * 2))->unkB2 != 0)) {
                                                            phi_s3 = 1;
                                                        }
                                                        if (phi_s3 != 0) {
                                                            func_8014CC14(arg0, ((sp + (phi_s1_2 * 2))->unkB2 + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                            spEA += 1;
                                                        }
                                                        temp_s1_2 = phi_s1_2 + 1;
                                                        phi_s1_2 = temp_s1_2;
                                                    } while ((s32) temp_s1_2 < 5);
                                                    spEA += -1;
                                                } else {
                                                    spDA = temp_a3;
                                                    if ((temp_s0 != 0x205) && (spDA = temp_a3, (temp_s0 != 0x206)) && (spDA = temp_a3, (temp_s0 != 0x207)) && (spDA = temp_a3, (temp_s0 != 0x208))) {
                                                        if (temp_s0 == 0x209) {
                                                            spDA = temp_a3;
                                                            goto block_76;
                                                        }
                                                        if (temp_s0 == 0x20A) {
                                                            spD4 = 0;
                                                            temp_f0 = (f32) gSaveContext.time * 0.021972656f;
                                                            temp_f16 = (s32) (temp_f0 / 60.0f);
                                                            spD6 = (s16) temp_f16;
                                                            phi_s1_3 = 0;
                                                            if ((s32) (s16) temp_f16 >= 0xA) {
                                                                do {
                                                                    temp_t3 = spD6 - 0xA;
                                                                    spD4 += 1;
                                                                    spD6 = temp_t3;
                                                                } while ((s32) temp_t3 >= 0xA);
                                                            }
                                                            spD8 = 0;
                                                            temp_hi = (s32) temp_f0 % 0x3C;
                                                            spDA = (s16) temp_hi;
                                                            phi_a3 = (s16) temp_hi;
                                                            if ((s32) (s16) temp_hi >= 0xA) {
                                                                do {
                                                                    temp_a3_3 = phi_a3 - 0xA;
                                                                    spD8 += 1;
                                                                    phi_a3 = temp_a3_3;
                                                                } while ((s32) temp_a3_3 >= 0xA);
                                                                spDA = temp_a3_3;
                                                            }
                                                            do {
                                                                temp_s0_2 = &temp_s5[phi_s1_3];
                                                                Font_LoadChar(arg0, (*temp_s0_2 + 0x824F) & 0xFFFF, spC8);
                                                                spC8 += 0x80;
                                                                (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_2 + 0x824F);
                                                                spEA += 1;
                                                                if (phi_s1_3 == 1) {
                                                                    Font_LoadChar(arg0, 0x8E9EU, spC8);
                                                                    spC8 += 0x80;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = 0x8E9E;
                                                                    spEA += 1;
                                                                } else if (phi_s1_3 == 3) {
                                                                    Font_LoadChar(arg0, 0x95AAU, spC8);
                                                                    spC8 += 0x80;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = 0x95AA;
                                                                }
                                                                temp_s1_3 = phi_s1_3 + 1;
                                                                phi_s1_3 = temp_s1_3;
                                                            } while ((s32) temp_s1_3 < 4);
                                                            spC0 += 6.0f * (16.0f * sp74->unk2098);
                                                        } else if (temp_s0 == 0x20B) {
                                                            spDA = temp_a3;
                                                            spD8 = 0;
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            temp_v0_2 = Actor_GetAllChestFlag(arg0);
                                                            phi_a3_2 = temp_v0_2;
                                                            phi_a3_3 = (s32) temp_v0_2;
                                                            phi_s1_4 = 0;
                                                            phi_s3_2 = 0;
                                                            if ((s32) temp_v0_2 >= 0x3E8) {
                                                                do {
                                                                    temp_a3_4 = phi_a3_2 - 0x3E8;
                                                                    spD4 += 1;
                                                                    phi_a3_2 = temp_a3_4;
                                                                    phi_a3_3 = (s32) temp_a3_4;
                                                                } while ((s32) temp_a3_4 >= 0x3E8);
                                                            }
                                                            phi_a3_4 = phi_a3_3;
                                                            phi_a3_5 = phi_a3_3;
                                                            if (phi_a3_3 >= 0x64) {
                                                                do {
                                                                    temp_a3_5 = phi_a3_4 - 0x64;
                                                                    spD6 += 1;
                                                                    phi_a3_4 = (s32) temp_a3_5;
                                                                    phi_a3_5 = (s32) temp_a3_5;
                                                                } while ((s32) temp_a3_5 >= 0x64);
                                                            }
                                                            spDA = (s16) phi_a3_5;
                                                            phi_a3_6 = phi_a3_5;
                                                            if (phi_a3_5 >= 0xA) {
                                                                do {
                                                                    temp_a3_6 = phi_a3_6 - 0xA;
                                                                    spD8 += 1;
                                                                    phi_a3_6 = (s32) temp_a3_6;
                                                                } while ((s32) temp_a3_6 >= 0xA);
                                                                spDA = temp_a3_6;
                                                            }
                                                            do {
                                                                if ((phi_s1_4 == 3) || (temp_s5[phi_s1_4] != 0)) {
                                                                    phi_s3_2 = 1;
                                                                }
                                                                if (phi_s3_2 != 0) {
                                                                    temp_s0_3 = &temp_s5[phi_s1_4];
                                                                    Font_LoadChar(arg0, (*temp_s0_3 + 0x824F) & 0xFFFF, spC8);
                                                                    spC8 += 0x80;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_3 + 0x824F);
                                                                    spEA += 1;
                                                                    spC0 += 16.0f * sp74->unk2098;
                                                                }
                                                                temp_s1_4 = phi_s1_4 + 1;
                                                                phi_s1_4 = temp_s1_4;
                                                            } while ((s32) temp_s1_4 < 4);
                                                            func_8014CC14(arg0, 0x9543U, &spC8, &spC0, (s16) (s32) spEA);
                                                        } else if (temp_s0 == 0x20C) {
                                                            spDA = temp_a3;
                                                            spEA += 1;
                                                            temp_s7->unk120BE = spD2;
                                                            temp_s7->unk120C0 = spEA;
                                                            temp_s7->unk120C2 = 2;
                                                            temp_s7->unk12078 = 0;
                                                            temp_s7->unk120C4 = spC8;
                                                            spD4 = 0;
                                                            spD6 = 0;
                                                            spD8 = 0;
                                                            phi_s1_5 = 0;
                                                            do {
                                                                func_8014CC14(arg0, (temp_s5[phi_s1_5] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                temp_s1_5 = phi_s1_5 + 1;
                                                                spEA += 1;
                                                                phi_s1_5 = temp_s1_5;
                                                            } while ((s32) temp_s1_5 < 3);
                                                            func_8014CCB4(arg0, &spEA, &spC8, &spC0);
                                                        } else if (temp_s0 == 0x20D) {
                                                            spDA = temp_a3;
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            temp_t3_2 = sp74->unk2078;
                                                            spD8 = (s16) temp_t3_2;
                                                            phi_s1_6 = 0;
                                                            phi_s3_3 = 0;
                                                            if ((s32) (s16) temp_t3_2 >= 0x64) {
                                                                do {
                                                                    temp_t5 = spD8 - 0x64;
                                                                    spD4 += 1;
                                                                    spD8 = temp_t5;
                                                                } while ((s32) temp_t5 >= 0x64);
                                                            }
                                                            if ((s32) spD8 >= 0xA) {
                                                                do {
                                                                    temp_t4 = spD8 - 0xA;
                                                                    spD6 += 1;
                                                                    spD8 = temp_t4;
                                                                } while ((s32) temp_t4 >= 0xA);
                                                            }
                                                            do {
                                                                if ((phi_s1_6 == 2) || (temp_s5[phi_s1_6] != 0)) {
                                                                    phi_s3_3 = 1;
                                                                }
                                                                if (phi_s3_3 != 0) {
                                                                    func_8014CC14(arg0, (temp_s5[phi_s1_6] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                    spEA += 1;
                                                                }
                                                                temp_s1_6 = phi_s1_6 + 1;
                                                                phi_s1_6 = temp_s1_6;
                                                            } while ((s32) temp_s1_6 < 3);
                                                            func_8014CCB4(arg0, &spEA, &spC8, &spC0);
                                                        } else if (temp_s0 == 0x20E) {
                                                            spDA = temp_a3;
                                                            spD8 = 0;
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            temp_t6 = sp74->unk207C;
                                                            spDA = (s16) temp_t6;
                                                            phi_s1_7 = 0;
                                                            phi_s3_4 = 0;
                                                            if ((s32) (s16) temp_t6 >= 0x3E8) {
                                                                phi_a3_7 = (s16) temp_t6;
                                                                do {
                                                                    temp_a3_7 = phi_a3_7 - 0x3E8;
                                                                    spD4 += 1;
                                                                    phi_a3_7 = temp_a3_7;
                                                                } while ((s32) temp_a3_7 >= 0x3E8);
                                                                spDA = temp_a3_7;
                                                            }
                                                            phi_a3_8 = spDA;
                                                            phi_a3_9 = (s32) spDA;
                                                            if ((s32) spDA >= 0x64) {
                                                                do {
                                                                    temp_a3_8 = phi_a3_8 - 0x64;
                                                                    spD6 += 1;
                                                                    phi_a3_8 = temp_a3_8;
                                                                    phi_a3_9 = (s32) temp_a3_8;
                                                                } while ((s32) temp_a3_8 >= 0x64);
                                                            }
                                                            spDA = (s16) phi_a3_9;
                                                            phi_a3_10 = phi_a3_9;
                                                            if (phi_a3_9 >= 0xA) {
                                                                do {
                                                                    temp_a3_9 = phi_a3_10 - 0xA;
                                                                    spD8 += 1;
                                                                    phi_a3_10 = (s32) temp_a3_9;
                                                                } while ((s32) temp_a3_9 >= 0xA);
                                                                spDA = temp_a3_9;
                                                            }
                                                            do {
                                                                if ((phi_s1_7 == 3) || (temp_s5[phi_s1_7] != 0)) {
                                                                    phi_s3_4 = 1;
                                                                }
                                                                if (phi_s3_4 != 0) {
                                                                    func_8014CC14(arg0, (temp_s5[phi_s1_7] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                    spEA += 1;
                                                                }
                                                                temp_s1_7 = phi_s1_7 + 1;
                                                                phi_s1_7 = temp_s1_7;
                                                            } while ((s32) temp_s1_7 < 4);
                                                            func_8014CCB4(arg0, &spEA, &spC8, &spC0);
                                                        } else if (temp_s0 == 0x20F) {
                                                            spDA = temp_a3;
                                                            func_8014D304(arg0, temp_s0 & 0xFFFF, &spC8, &spC0, &spEA);
                                                        } else if (temp_s0 == 0x21C) {
                                                            spDA = temp_a3;
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            spD8 = (s16) gSaveContext.inventory.strayFairies[gSaveContext.unk_48C8];
                                                            phi_s1_8 = 0;
                                                            phi_s3_5 = 0;
                                                            if ((s32) spD8 >= 0x64) {
                                                                do {
                                                                    temp_t9 = spD8 - 0x64;
                                                                    spD4 += 1;
                                                                    spD8 = temp_t9;
                                                                } while ((s32) temp_t9 >= 0x64);
                                                            }
                                                            if ((s32) spD8 >= 0xA) {
                                                                do {
                                                                    temp_t2 = spD8 - 0xA;
                                                                    spD6 += 1;
                                                                    spD8 = temp_t2;
                                                                } while ((s32) temp_t2 >= 0xA);
                                                            }
                                                            do {
                                                                if ((phi_s1_8 == 2) || (temp_s5[phi_s1_8] != 0)) {
                                                                    phi_s3_5 = 1;
                                                                }
                                                                if (phi_s3_5 != 0) {
                                                                    func_8014CC14(arg0, (temp_s5[phi_s1_8] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                    spEA += 1;
                                                                }
                                                                temp_s1_8 = phi_s1_8 + 1;
                                                                phi_s1_8 = temp_s1_8;
                                                            } while ((s32) temp_s1_8 < 3);
                                                            func_8014CC14(arg0, 0x906CU, &spC8, &spC0, (s16) (s32) spEA);
                                                            temp_t3_3 = spEA + 1;
                                                            temp_t2_2 = temp_t3_3;
                                                            spEA = temp_t3_3;
                                                            func_8014CC14(arg0, 0x96DAU, &spC8, &spC0, (s16) (s32) temp_t2_2);
                                                        } else if (temp_s0 == 0x21D) {
                                                            spDA = temp_a3;
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            spD8 = func_8012F22C(arg0->sceneNum);
                                                            phi_s1_9 = 0;
                                                            phi_s3_6 = 0;
                                                            if ((s32) spD8 >= 0x64) {
                                                                do {
                                                                    temp_t8 = spD8 - 0x64;
                                                                    spD4 += 1;
                                                                    spD8 = temp_t8;
                                                                } while ((s32) temp_t8 >= 0x64);
                                                            }
                                                            if ((s32) spD8 >= 0xA) {
                                                                do {
                                                                    temp_t5_2 = spD8 - 0xA;
                                                                    spD6 += 1;
                                                                    spD8 = temp_t5_2;
                                                                } while ((s32) temp_t5_2 >= 0xA);
                                                            }
                                                            do {
                                                                if ((phi_s1_9 == 2) || (temp_s5[phi_s1_9] != 0)) {
                                                                    phi_s3_6 = 1;
                                                                }
                                                                if (phi_s3_6 != 0) {
                                                                    func_8014CC14(arg0, (temp_s5[phi_s1_9] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                    spEA += 1;
                                                                }
                                                                temp_s1_9 = phi_s1_9 + 1;
                                                                phi_s1_9 = temp_s1_9;
                                                            } while ((s32) temp_s1_9 < 3);
                                                            func_8014CC14(arg0, 0x9543U, &spC8, &spC0, (s16) (s32) spEA);
                                                        } else if (temp_s0 == 0x21E) {
                                                            temp_t9_2 = gSaveContext.minigameScore;
                                                            spD4 = 0;
                                                            spD6 = (s16) temp_t9_2;
                                                            phi_s1_10 = 0;
                                                            if ((s32) (s16) temp_t9_2 >= 0xA) {
                                                                do {
                                                                    temp_t7 = spD6 - 0xA;
                                                                    spD4 += 1;
                                                                    spD6 = temp_t7;
                                                                } while ((s32) temp_t7 >= 0xA);
                                                            }
                                                            do {
                                                                spDA = phi_a3_11;
                                                                if ((phi_s1_10 == 1) || (temp_s5[phi_s1_10] != 0)) {
                                                                    func_8014CC14(arg0, (temp_s5[phi_s1_10] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                    spEA += 1;
                                                                }
                                                                temp_s1_10 = phi_s1_10 + 1;
                                                                phi_a3_11 = spDA;
                                                                phi_s1_10 = temp_s1_10;
                                                            } while ((s32) temp_s1_10 < 2);
                                                            spDA = spDA;
                                                            spEA += -1;
                                                        } else if (temp_s0 == 0x21F) {
                                                            temp_a3_10 = (s16) gSaveContext.minigameScore;
                                                            spD8 = 0;
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            phi_a3_12 = temp_a3_10;
                                                            phi_a3_13 = (s32) temp_a3_10;
                                                            phi_s1_11 = 0;
                                                            phi_s3_7 = 0;
                                                            if ((s32) temp_a3_10 >= 0x3E8) {
                                                                do {
                                                                    temp_a3_11 = phi_a3_12 - 0x3E8;
                                                                    spD4 += 1;
                                                                    phi_a3_12 = temp_a3_11;
                                                                    phi_a3_13 = (s32) temp_a3_11;
                                                                } while ((s32) temp_a3_11 >= 0x3E8);
                                                            }
                                                            phi_a3_14 = phi_a3_13;
                                                            phi_a3_15 = phi_a3_13;
                                                            if (phi_a3_13 >= 0x64) {
                                                                do {
                                                                    temp_a3_12 = phi_a3_14 - 0x64;
                                                                    spD6 += 1;
                                                                    phi_a3_14 = (s32) temp_a3_12;
                                                                    phi_a3_15 = (s32) temp_a3_12;
                                                                } while ((s32) temp_a3_12 >= 0x64);
                                                            }
                                                            phi_a3_16 = phi_a3_15;
                                                            phi_a3_17 = (s16) phi_a3_15;
                                                            if (phi_a3_15 >= 0xA) {
                                                                do {
                                                                    temp_a3_13 = phi_a3_16 - 0xA;
                                                                    spD8 += 1;
                                                                    phi_a3_16 = (s32) temp_a3_13;
                                                                    phi_a3_17 = temp_a3_13;
                                                                } while ((s32) temp_a3_13 >= 0xA);
                                                            }
                                                            do {
                                                                phi_a3_18 = phi_a3_17;
                                                                if (phi_s1_11 != 3) {
                                                                    spDA = phi_a3_17;
                                                                    if (temp_s5[phi_s1_11] != 0) {
                                                                        phi_a3_18 = spDA;
                                                                        goto block_190;
                                                                    }
                                                                } else {
block_190:
                                                                    spDA = phi_a3_18;
                                                                    phi_s3_7 = 1;
                                                                }
                                                                if (phi_s3_7 != 0) {
                                                                    func_8014CC14(arg0, (temp_s5[phi_s1_11] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                    spEA += 1;
                                                                }
                                                                temp_s1_11 = phi_s1_11 + 1;
                                                                phi_s1_11 = temp_s1_11;
                                                                phi_a3_17 = spDA;
                                                            } while ((s32) temp_s1_11 < 4);
                                                            spDA = spDA;
                                                            spEA += -1;
                                                        } else if (temp_s0 == 0x220) {
                                                            spDA = temp_a3;
                                                            spEA += 1;
                                                            temp_s7->unk120BE = spD2;
                                                            temp_s7->unk120C0 = spEA;
                                                            temp_s7->unk120C2 = 0;
                                                            temp_s7->unk12078 = 0;
                                                            temp_s7->unk120C4 = spC8;
                                                            spD4 = 0;
                                                            spD6 = 0;
                                                            spD8 = 0;
                                                            phi_s1_12 = 0;
                                                            do {
                                                                func_8014CC14(arg0, (temp_s5[phi_s1_12] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                temp_s1_12 = phi_s1_12 + 1;
                                                                spEA += 1;
                                                                phi_s1_12 = temp_s1_12;
                                                            } while ((s32) temp_s1_12 < 2);
                                                            func_8014CCB4(arg0, &spEA, &spC8, &spC0);
                                                        } else if (temp_s0 == 0x221) {
                                                            spDA = temp_a3;
                                                            spEA += 1;
                                                            temp_s7->unk120BE = spD2;
                                                            temp_s7->unk120C0 = spEA;
                                                            temp_s7->unk120C2 = 0;
                                                            temp_s7->unk12078 = 0;
                                                            temp_s7->unk120C4 = spC8;
                                                            phi_s1_13 = 0;
                                                            do {
                                                                (temp_s7 + (phi_s1_13 * 2))->unk12054 = 1;
                                                                func_8014CC14(arg0, 0x8250U, &spC8, &spC0, (s16) (s32) spEA);
                                                                temp_s1_13 = phi_s1_13 + 1;
                                                                spEA += 1;
                                                                phi_s1_13 = temp_s1_13;
                                                            } while ((s32) temp_s1_13 < 5);
                                                            spEA += -1;
                                                        } else if (temp_s0 == 0x223) {
                                                            temp_v0_3 = gSaveContext.unk_14;
                                                            spDA = temp_a3;
                                                            phi_s1_14 = 0;
                                                            if (temp_v0_3 == 0x12) {
                                                                phi_s3_8 = 0;
                                                            } else if (temp_v0_3 == 0) {
                                                                phi_s3_8 = 1;
                                                            } else {
                                                                phi_s3_8 = 2;
                                                            }
                                                            do {
                                                                temp_v0_4 = (phi_s3_8 * 6) + &D_801D0268 + (phi_s1_14 * 2);
                                                                (temp_s7 + (spEA * 2))->unk11F24 = (u16) *temp_v0_4;
                                                                Font_LoadChar(arg0, *temp_v0_4, spC8);
                                                                temp_s1_14 = phi_s1_14 + 1;
                                                                spEA += 1;
                                                                spC8 += 0x80;
                                                                phi_s1_14 = temp_s1_14;
                                                            } while ((s32) temp_s1_14 < 3);
                                                            spEA += -1;
                                                            spC0 += 3.0f * (16.0f * sp74->unk2098);
                                                            temp_s7->unk12021 = phi_s3_8;
                                                        } else if (temp_s0 == 0x224) {
                                                            spDA = temp_a3;
                                                            func_8014D62C(arg0, &spC8, &spC0, &spEA);
                                                        } else if (temp_s0 == 0x225) {
                                                            spDA = temp_a3;
                                                            spEA += 1;
                                                            temp_s7->unk120BE = spD2;
                                                            temp_s7->unk120C0 = spEA;
                                                            temp_s7->unk120C2 = 0;
                                                            temp_s7->unk12078 = 0;
                                                            temp_s7->unk120C4 = spC8;
                                                            phi_s1_15 = 0;
                                                            do {
                                                                (temp_s7 + (phi_s1_15 * 2))->unk12054 = 1;
                                                                Font_LoadChar(arg0, 0x8250U, spC8);
                                                                spC8 += 0x80;
                                                                (temp_s7 + (spEA * 2))->unk11F24 = 0x8250;
                                                                temp_s1_15 = phi_s1_15 + 1;
                                                                spEA += 1;
                                                                spC0 += 16.0f * sp74->unk2098;
                                                                phi_s1_15 = temp_s1_15;
                                                            } while ((s32) temp_s1_15 < 3);
                                                            spEA += -1;
                                                        } else if (temp_s0 == 0x226) {
                                                            spDA = temp_a3;
                                                            phi_s1_16 = 0;
                                                            do {
                                                                (temp_s7 + (spEA * 2))->unk11F24 = (u16) *(&D_801D027C + (gSaveContext.spiderHouseMaskOrder[phi_s1_16] * 2));
                                                                temp_t8_2 = spEA + 1;
                                                                temp_t5_3 = temp_t8_2;
                                                                spEA = temp_t8_2;
                                                                func_8014CC14(arg0, (phi_s1_16 + 0x8250) & 0xFFFF, &spC8, &spC0, (s16) (s32) temp_t5_3);
                                                                temp_s1_16 = phi_s1_16 + 1;
                                                                spEA += 1;
                                                                phi_s1_16 = temp_s1_16;
                                                            } while ((s32) temp_s1_16 < 6);
                                                            (temp_s7 + (spEA * 2))->unk11F24 = 0x2000;
                                                        } else if (((s32) temp_s0 >= 0x227) && ((s32) temp_s0 < 0x22B)) {
                                                            spDA = temp_a3;
                                                            temp_t2_3 = 0xF - *(&D_801EF0C8 + 0x455 + temp_s0);
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            spD8 = temp_t2_3;
                                                            phi_s1_17 = 0;
                                                            phi_s3_9 = 0;
                                                            if ((s32) temp_t2_3 >= 0x64) {
                                                                do {
                                                                    temp_t7_2 = spD8 - 0x64;
                                                                    spD4 += 1;
                                                                    spD8 = temp_t7_2;
                                                                } while ((s32) temp_t7_2 >= 0x64);
                                                            }
                                                            if ((s32) spD8 >= 0xA) {
                                                                do {
                                                                    temp_t6_2 = spD8 - 0xA;
                                                                    spD6 += 1;
                                                                    spD8 = temp_t6_2;
                                                                } while ((s32) temp_t6_2 >= 0xA);
                                                            }
                                                            do {
                                                                if ((phi_s1_17 == 2) || (temp_s5[phi_s1_17] != 0)) {
                                                                    phi_s3_9 = 1;
                                                                }
                                                                if (phi_s3_9 != 0) {
                                                                    temp_s0_4 = &temp_s5[phi_s1_17];
                                                                    Font_LoadChar(arg0, (*temp_s0_4 + 0x824F) & 0xFFFF, spC8);
                                                                    spC8 += 0x80;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_4 + 0x824F);
                                                                    spEA += 1;
                                                                    spC0 += 16.0f * sp74->unk2098;
                                                                }
                                                                temp_s1_17 = phi_s1_17 + 1;
                                                                phi_s1_17 = temp_s1_17;
                                                            } while ((s32) temp_s1_17 < 3);
                                                            func_8014CC14(arg0, 0x906CU, &spC8, &spC0, (s16) (s32) spEA);
                                                        } else if (temp_s0 == 0x22B) {
                                                            temp_a3_14 = (s16) gSaveContext.minigameScore;
                                                            spD8 = 0;
                                                            spD6 = 0;
                                                            spD4 = 0;
                                                            phi_a3_19 = temp_a3_14;
                                                            phi_a3_20 = (s32) temp_a3_14;
                                                            phi_s1_18 = 0;
                                                            phi_s3_10 = 0;
                                                            if ((s32) temp_a3_14 >= 0x3E8) {
                                                                do {
                                                                    temp_a3_15 = phi_a3_19 - 0x3E8;
                                                                    spD4 += 1;
                                                                    phi_a3_19 = temp_a3_15;
                                                                    phi_a3_20 = (s32) temp_a3_15;
                                                                } while ((s32) temp_a3_15 >= 0x3E8);
                                                            }
                                                            phi_a3_21 = phi_a3_20;
                                                            phi_a3_22 = phi_a3_20;
                                                            if (phi_a3_20 >= 0x64) {
                                                                do {
                                                                    temp_a3_16 = phi_a3_21 - 0x64;
                                                                    spD6 += 1;
                                                                    phi_a3_21 = (s32) temp_a3_16;
                                                                    phi_a3_22 = (s32) temp_a3_16;
                                                                } while ((s32) temp_a3_16 >= 0x64);
                                                            }
                                                            spDA = (s16) phi_a3_22;
                                                            phi_a3_23 = phi_a3_22;
                                                            if (phi_a3_22 >= 0xA) {
                                                                do {
                                                                    temp_a3_17 = phi_a3_23 - 0xA;
                                                                    spD8 += 1;
                                                                    phi_a3_23 = (s32) temp_a3_17;
                                                                } while ((s32) temp_a3_17 >= 0xA);
                                                                spDA = temp_a3_17;
                                                            }
                                                            do {
                                                                if ((phi_s1_18 == 3) || (temp_s5[phi_s1_18] != 0)) {
                                                                    phi_s3_10 = 1;
                                                                }
                                                                if (phi_s3_10 != 0) {
                                                                    temp_s0_5 = &temp_s5[phi_s1_18];
                                                                    Font_LoadChar(arg0, (*temp_s0_5 + 0x824F) & 0xFFFF, spC8);
                                                                    spC8 += 0x80;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_5 + 0x824F);
                                                                    spEA += 1;
                                                                    spC0 += 16.0f * sp74->unk2098;
                                                                }
                                                                temp_s1_18 = phi_s1_18 + 1;
                                                                phi_s1_18 = temp_s1_18;
                                                            } while ((s32) temp_s1_18 < 4);
                                                            func_8014CC14(arg0, 0x94ADU, &spC8, &spC0, (s16) (s32) spEA);
                                                        } else {
                                                            spDA = temp_a3;
                                                            if (temp_s0 != 0x22C) {
                                                                if (temp_s0 == 0x22D) {
                                                                    spDA = temp_a3;
                                                                    goto block_253;
                                                                }
                                                                if (temp_s0 == 0x22E) {
                                                                    spDA = temp_a3;
                                                                    spD8 = 0;
                                                                    spD6 = 0;
                                                                    spD4 = 0;
                                                                    temp_a0_2 = spEC->unk146;
                                                                    phi_s1_19 = 0;
                                                                    phi_s3_11 = 0;
                                                                    if (temp_a0_2 == 0) {
                                                                        temp_v0_5 = gSaveContext.playerForm;
                                                                        if (temp_v0_5 == 4) {
                                                                            phi_v1_2 = 0U;
                                                                        } else {
                                                                            phi_v1_2 = temp_v0_5;
                                                                        }
                                                                        phi_v0_2 = &gSaveContext.equips.buttonItems[0][(phi_v1_2 * 4) + temp_a0_2];
                                                                    } else {
                                                                        phi_v0_2 = &gSaveContext.equips.buttonItems[0][temp_a0_2];
                                                                    }
                                                                    temp_a3_18 = gItemPrices[*phi_v0_2 & 0xFF];
                                                                    phi_a3_24 = temp_a3_18;
                                                                    phi_a3_25 = (s32) temp_a3_18;
                                                                    if ((s32) temp_a3_18 >= 0x3E8) {
                                                                        do {
                                                                            temp_a3_19 = phi_a3_24 - 0x3E8;
                                                                            spD4 += 1;
                                                                            phi_a3_24 = temp_a3_19;
                                                                            phi_a3_25 = (s32) temp_a3_19;
                                                                        } while ((s32) temp_a3_19 >= 0x3E8);
                                                                    }
                                                                    phi_a3_26 = phi_a3_25;
                                                                    phi_a3_27 = phi_a3_25;
                                                                    if (phi_a3_25 >= 0x64) {
                                                                        do {
                                                                            temp_a3_20 = phi_a3_26 - 0x64;
                                                                            spD6 += 1;
                                                                            phi_a3_26 = (s32) temp_a3_20;
                                                                            phi_a3_27 = (s32) temp_a3_20;
                                                                        } while ((s32) temp_a3_20 >= 0x64);
                                                                    }
                                                                    spDA = (s16) phi_a3_27;
                                                                    phi_a3_28 = phi_a3_27;
                                                                    if (phi_a3_27 >= 0xA) {
                                                                        do {
                                                                            temp_a3_21 = phi_a3_28 - 0xA;
                                                                            spD8 += 1;
                                                                            phi_a3_28 = (s32) temp_a3_21;
                                                                        } while ((s32) temp_a3_21 >= 0xA);
                                                                        spDA = temp_a3_21;
                                                                    }
                                                                    do {
                                                                        if ((phi_s1_19 == 3) || (temp_s5[phi_s1_19] != 0)) {
                                                                            phi_s3_11 = 1;
                                                                        }
                                                                        if (phi_s3_11 != 0) {
                                                                            temp_s0_6 = &temp_s5[phi_s1_19];
                                                                            Font_LoadChar(arg0, (*temp_s0_6 + 0x824F) & 0xFFFF, spC8);
                                                                            spC8 += 0x80;
                                                                            (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_6 + 0x824F);
                                                                            spEA += 1;
                                                                            spC0 += 16.0f * sp74->unk2098;
                                                                        }
                                                                        temp_s1_19 = phi_s1_19 + 1;
                                                                        phi_s1_19 = temp_s1_19;
                                                                    } while ((s32) temp_s1_19 < 4);
                                                                    func_8014CCB4(arg0, &spEA, &spC8, &spC0);
                                                                } else if (temp_s0 == 0x22F) {
                                                                    spDA = temp_a3;
                                                                    phi_s1_20 = 0;
                                                                    do {
                                                                        temp_s0_7 = &temp_s5[phi_s1_20];
                                                                        *temp_s0_7 = (s16) gSaveContext.bomberCode[phi_s1_20];
                                                                        Font_LoadChar(arg0, (*temp_s0_7 + 0x824F) & 0xFFFF, spC8);
                                                                        temp_s1_20 = phi_s1_20 + 1;
                                                                        spC8 += 0x80;
                                                                        (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_7 + 0x824F);
                                                                        spEA += 1;
                                                                        spC0 += 16.0f * sp74->unk2098;
                                                                        phi_s1_20 = temp_s1_20;
                                                                    } while ((s32) temp_s1_20 < 5);
                                                                    spEA += -1;
                                                                } else if (((s32) temp_s0 >= 0x231) && (temp_t3_4 = temp_s0 - 0x231, (((s32) temp_s0 < 0x237) != 0))) {
                                                                    spDA = temp_a3;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = (u16) *(&D_801D027C + (gSaveContext.spiderHouseMaskOrder[temp_t3_4] * 2));
                                                                    temp_t6_3 = spEA + 1;
                                                                    temp_t7_3 = temp_t6_3;
                                                                    spEA = temp_t6_3;
                                                                    func_8014CC14(arg0, *(&D_801D0284 + (gSaveContext.spiderHouseMaskOrder[temp_t3_4] * 2)), &spC8, &spC0, (s16) (s32) temp_t7_3);
                                                                    temp_t2_4 = spEA + 1;
                                                                    temp_t9_3 = temp_s7 + (temp_t2_4 * 2);
                                                                    spEA = temp_t2_4;
                                                                    temp_t9_3->unk11F24 = 0x2000;
                                                                } else if (temp_s0 == 0x237) {
                                                                    spDA = temp_a3;
                                                                    spD4 = 0;
                                                                    temp_f10 = (s32) (((f32) ((-(s32) (((s32) gSaveContext.day % 5) << 0x10) - ((gSaveContext.time - 0x4000) & 0xFFFF)) + 0x40000) * 0.021972656f) / 60.0f);
                                                                    spD6 = (s16) temp_f10;
                                                                    phi_s1_21 = 0;
                                                                    phi_s3_12 = 0;
                                                                    if ((s32) (s16) temp_f10 >= 0xA) {
                                                                        do {
                                                                            temp_t9_4 = spD6 - 0xA;
                                                                            spD4 += 1;
                                                                            spD6 = temp_t9_4;
                                                                        } while ((s32) temp_t9_4 >= 0xA);
                                                                    }
                                                                    do {
                                                                        if ((phi_s1_21 == 1) || (temp_s5[phi_s1_21] != 0)) {
                                                                            phi_s3_12 = 1;
                                                                        }
                                                                        if (phi_s3_12 != 0) {
                                                                            func_8014CC14(arg0, (temp_s5[phi_s1_21] + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                            spEA += 1;
                                                                        }
                                                                        temp_s1_21 = phi_s1_21 + 1;
                                                                        phi_s1_21 = temp_s1_21;
                                                                    } while ((s32) temp_s1_21 < 2);
                                                                    Font_LoadChar(arg0, 0x8E9EU, spC8);
                                                                    temp_t5_4 = spC8 + 0x80;
                                                                    spC8 = temp_t5_4;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = 0x8E9E;
                                                                    spEA += 1;
                                                                    Font_LoadChar(arg0, 0x8AD4U, spC8);
                                                                    spC8 = temp_t5_4 + 0x80;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = 0x8E9E;
                                                                    spC0 += 2.0f * (16.0f * sp74->unk2098);
                                                                } else if (temp_s0 == 0x238) {
                                                                    spDA = temp_a3;
                                                                    func_8014D304(arg0, temp_s0 & 0xFFFF, &spC8, &spC0, &spEA);
                                                                } else {
                                                                    spDA = temp_a3;
                                                                    if ((temp_s0 != 0x300) && (spDA = temp_a3, (temp_s0 != 0x301)) && (spDA = temp_a3, (temp_s0 != 0x302))) {
                                                                        if (temp_s0 == 0x308) {
                                                                            spDA = temp_a3;
                                                                            goto block_303;
                                                                        }
                                                                        spDA = temp_a3;
                                                                        if ((temp_s0 != 0x307) && (spDA = temp_a3, (temp_s0 != 0x309)) && (spDA = temp_a3, (temp_s0 != 0x30A)) && (spDA = temp_a3, (temp_s0 != 0x30B))) {
                                                                            if (temp_s0 == 0x30C) {
                                                                                spDA = temp_a3;
                                                                                goto block_334;
                                                                            }
                                                                            if ((temp_s0 == 0x303) || (temp_s0 == 0x304) || (temp_s0 == 0x305)) {
                                                                                temp_a0_4 = *(&gSaveContext + 0x2DE + ((temp_s0 & 0xFFFF) * 4));
                                                                                spD8 = 0;
                                                                                spD6 = 0;
                                                                                spD4 = 0;
                                                                                phi_a3_39 = temp_a0_4;
                                                                                phi_a3_40 = (s32) temp_a0_4;
                                                                                phi_s1_26 = 0;
                                                                                if ((s32) temp_a0_4 >= 0x3C) {
                                                                                    do {
                                                                                        temp_t2_5 = spD6 + 1;
                                                                                        spD6 = temp_t2_5;
                                                                                        if ((s32) temp_t2_5 >= 0xA) {
                                                                                            spD6 = temp_t2_5 - 0xA;
                                                                                            spD4 += 1;
                                                                                        }
                                                                                        temp_a3_31 = phi_a3_39 - 0x3C;
                                                                                        phi_a3_39 = temp_a3_31;
                                                                                        phi_a3_40 = (s32) temp_a3_31;
                                                                                    } while ((s32) temp_a3_31 >= 0x3C);
                                                                                }
                                                                                spDA = (s16) phi_a3_40;
                                                                                phi_a3_41 = phi_a3_40;
                                                                                if (phi_a3_40 >= 0xA) {
                                                                                    do {
                                                                                        temp_a3_32 = phi_a3_41 - 0xA;
                                                                                        spD8 += 1;
                                                                                        phi_a3_41 = (s32) temp_a3_32;
                                                                                    } while ((s32) temp_a3_32 >= 0xA);
                                                                                    spDA = temp_a3_32;
                                                                                }
                                                                                do {
                                                                                    temp_s0_13 = &temp_s5[phi_s1_26];
                                                                                    Font_LoadChar(arg0, (*temp_s0_13 + 0x824F) & 0xFFFF, spC8);
                                                                                    spC8 += 0x80;
                                                                                    (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_13 + 0x824F);
                                                                                    spEA += 1;
                                                                                    if (phi_s1_26 == 1) {
                                                                                        Font_LoadChar(arg0, 0x95AAU, spC8);
                                                                                        spC8 += 0x80;
                                                                                        (temp_s7 + (spEA * 2))->unk11F24 = 0x95AA;
                                                                                        spEA += 1;
                                                                                    } else if (phi_s1_26 == 3) {
                                                                                        Font_LoadChar(arg0, 0x9562U, spC8);
                                                                                        spC8 += 0x80;
                                                                                        (temp_s7 + (spEA * 2))->unk11F24 = 0x9562;
                                                                                    }
                                                                                    temp_s1_26 = phi_s1_26 + 1;
                                                                                    phi_s1_26 = temp_s1_26;
                                                                                } while ((s32) temp_s1_26 < 4);
                                                                                spC0 += 4.0f * (16.0f * sp74->unk2098);
                                                                            } else if (temp_s0 == 0x306) {
                                                                                temp_a3_22 = gSaveContext.roomInf[127][6];
                                                                                spD8 = 0;
                                                                                spD6 = 0;
                                                                                spD4 = 0;
                                                                                phi_a3_29 = (s16) temp_a3_22;
                                                                                phi_a3_30 = (s32) (s16) temp_a3_22;
                                                                                phi_s1_22 = 0;
                                                                                phi_s3_13 = 0;
                                                                                if ((s32) (s16) temp_a3_22 >= 0x3E8) {
                                                                                    do {
                                                                                        temp_a3_23 = phi_a3_29 - 0x3E8;
                                                                                        spD4 += 1;
                                                                                        phi_a3_29 = temp_a3_23;
                                                                                        phi_a3_30 = (s32) temp_a3_23;
                                                                                    } while ((s32) temp_a3_23 >= 0x3E8);
                                                                                }
                                                                                phi_a3_31 = phi_a3_30;
                                                                                phi_a3_32 = phi_a3_30;
                                                                                if (phi_a3_30 >= 0x64) {
                                                                                    do {
                                                                                        temp_a3_24 = phi_a3_31 - 0x64;
                                                                                        spD6 += 1;
                                                                                        phi_a3_31 = (s32) temp_a3_24;
                                                                                        phi_a3_32 = (s32) temp_a3_24;
                                                                                    } while ((s32) temp_a3_24 >= 0x64);
                                                                                }
                                                                                spDA = (s16) phi_a3_32;
                                                                                phi_a3_33 = phi_a3_32;
                                                                                if (phi_a3_32 >= 0xA) {
                                                                                    do {
                                                                                        temp_a3_25 = phi_a3_33 - 0xA;
                                                                                        spD8 += 1;
                                                                                        phi_a3_33 = (s32) temp_a3_25;
                                                                                    } while ((s32) temp_a3_25 >= 0xA);
                                                                                    spDA = temp_a3_25;
                                                                                }
                                                                                do {
                                                                                    if ((phi_s1_22 == 3) || (temp_s5[phi_s1_22] != 0)) {
                                                                                        phi_s3_13 = 1;
                                                                                    }
                                                                                    if (phi_s3_13 != 0) {
                                                                                        temp_s0_8 = &temp_s5[phi_s1_22];
                                                                                        Font_LoadChar(arg0, (*temp_s0_8 + 0x824F) & 0xFFFF, spC8);
                                                                                        spC8 += 0x80;
                                                                                        (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_8 + 0x824F);
                                                                                        spEA += 1;
                                                                                        spC0 += 16.0f * sp74->unk2098;
                                                                                    }
                                                                                    temp_s1_22 = phi_s1_22 + 1;
                                                                                    phi_s1_22 = temp_s1_22;
                                                                                } while ((s32) temp_s1_22 < 4);
                                                                                func_8014CC14(arg0, 0x9543U, &spC8, &spC0, (s16) (s32) spEA);
                                                                            } else {
                                                                                if ((temp_s0 == 0x30D) || (temp_s0 == 0x30E) || (temp_s0 == 0x30F)) {
                                                                                    temp_a0_3 = temp_s0 - 0x30D;
                                                                                    phi_s1_25 = 0;
loop_384:
                                                                                    phi_a2_4 = (s32) phi_a2_3;
                                                                                    if (((temp_a0_3 * 8) + &gSaveContext + phi_a2_3)->unkDD == 0x3E) {
                                                                                        temp_a2_2 = phi_a2_3 - 1;
                                                                                        phi_a2_3 = temp_a2_2;
                                                                                        phi_a2_4 = (s32) temp_a2_2;
                                                                                        if ((s32) temp_a2_2 > 0) {
                                                                                            goto loop_384;
                                                                                        }
                                                                                    }
                                                                                    spDA = temp_a3;
                                                                                    if (phi_a2_4 > 0) {
                                                                                        spDA = temp_a3;
                                                                                        do {
                                                                                            (temp_s7 + (spEA * 2) + (phi_s1_25 * 2))->unk11F24 = 0x30D;
                                                                                            phi_v0_3 = 0;
loop_389:
                                                                                            temp_v1_4 = phi_v0_3 + (temp_s2 + (((temp_a0_3 * 8) + &gSaveContext + phi_s1_25)->unkDE << 7) + 0x7880);
                                                                                            *(temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0_3) = temp_v1_4->unk0;
                                                                                            (temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0_3)->unk1 = (u8) temp_v1_4->unk1;
                                                                                            (temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0_3)->unk2 = (u8) temp_v1_4->unk2;
                                                                                            temp_v0_11 = phi_v0_3 + 4;
                                                                                            (temp_s2 + (temp_s2->unk11D88 * 0x3C00) + spC8 + phi_v0_3)->unk3 = (u8) temp_v1_4->unk3;
                                                                                            temp_a3_30 = spDA;
                                                                                            phi_v0_3 = temp_v0_11;
                                                                                            if ((s32) temp_v0_11 < 0x80) {
                                                                                                goto loop_389;
                                                                                            }
                                                                                            temp_s1_25 = phi_s1_25 + 1;
                                                                                            spDA = temp_a3_30;
                                                                                            spC8 += 0x80;
                                                                                            phi_s1_25 = temp_s1_25;
                                                                                        } while ((s32) temp_s1_25 < phi_a2_4);
                                                                                        spDA = temp_a3_30;
                                                                                    }
                                                                                    spEA = (spEA + phi_a2_4) - 1;
                                                                                    phi_f6 = spC0 + ((f32) phi_a2_4 * (16.0f * sp74->unk2098));
                                                                                    goto block_468;
                                                                                }
                                                                                if (temp_s0 == 0x310) {
                                                                                    spD8 = 0;
                                                                                    temp_a3_26 = (u32) (gSaveContext.roomInf[127][3] & 0xFFFF0000) >> 0x10;
                                                                                    spD6 = 0;
                                                                                    spD4 = 0;
                                                                                    phi_a3_34 = (s16) temp_a3_26;
                                                                                    phi_a3_35 = (s32) (s16) temp_a3_26;
                                                                                    phi_s1_23 = 0;
                                                                                    phi_s3_14 = 0;
                                                                                    if ((s32) (s16) temp_a3_26 >= 0x3E8) {
                                                                                        do {
                                                                                            temp_a3_27 = phi_a3_34 - 0x3E8;
                                                                                            spD4 += 1;
                                                                                            phi_a3_34 = temp_a3_27;
                                                                                            phi_a3_35 = (s32) temp_a3_27;
                                                                                        } while ((s32) temp_a3_27 >= 0x3E8);
                                                                                    }
                                                                                    phi_a3_36 = phi_a3_35;
                                                                                    phi_a3_37 = phi_a3_35;
                                                                                    if (phi_a3_35 >= 0x64) {
                                                                                        do {
                                                                                            temp_a3_28 = phi_a3_36 - 0x64;
                                                                                            spD6 += 1;
                                                                                            phi_a3_36 = (s32) temp_a3_28;
                                                                                            phi_a3_37 = (s32) temp_a3_28;
                                                                                        } while ((s32) temp_a3_28 >= 0x64);
                                                                                    }
                                                                                    spDA = (s16) phi_a3_37;
                                                                                    phi_a3_38 = phi_a3_37;
                                                                                    if (phi_a3_37 >= 0xA) {
                                                                                        do {
                                                                                            temp_a3_29 = phi_a3_38 - 0xA;
                                                                                            spD8 += 1;
                                                                                            phi_a3_38 = (s32) temp_a3_29;
                                                                                        } while ((s32) temp_a3_29 >= 0xA);
                                                                                        spDA = temp_a3_29;
                                                                                    }
                                                                                    do {
                                                                                        if ((phi_s1_23 == 3) || (temp_s5[phi_s1_23] != 0)) {
                                                                                            phi_s3_14 = 1;
                                                                                        }
                                                                                        if (phi_s3_14 != 0) {
                                                                                            temp_s0_9 = &temp_s5[phi_s1_23];
                                                                                            Font_LoadChar(arg0, (*temp_s0_9 + 0x824F) & 0xFFFF, spC8);
                                                                                            spC8 += 0x80;
                                                                                            (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_9 + 0x824F);
                                                                                            spEA += 1;
                                                                                            spC0 += 16.0f * sp74->unk2098;
                                                                                        }
                                                                                        temp_s1_23 = phi_s1_23 + 1;
                                                                                        phi_s1_23 = temp_s1_23;
                                                                                    } while ((s32) temp_s1_23 < 4);
                                                                                    func_8014CC14(arg0, 0x94ADU, &spC8, &spC0, (s16) (s32) spEA);
                                                                                } else if (temp_s0 == 0x1F) {
                                                                                    spDA = temp_a3;
                                                                                    spEA += -1;
                                                                                    temp_v1_2 = sp74->unk1FEC;
                                                                                    phi_s1_24 = 0;
                                                                                    phi_v1 = temp_v1_2;
                                                                                    if ((s32) (temp_s2 + (temp_v1_2 * 2))->unk11882 > 0) {
                                                                                        do {
                                                                                            temp_s1_24 = phi_s1_24 + 1;
                                                                                            temp_v0_6 = spEA + 1;
                                                                                            temp_t8_3 = temp_s7 + (temp_v0_6 * 2) + 0x10000;
                                                                                            spEA = temp_v0_6;
                                                                                            temp_t8_3->unk1F24 = 0x20;
                                                                                            spC0 += 6.0f;
                                                                                            temp_v1_3 = sp74->unk1FEC;
                                                                                            phi_s1_24 = temp_s1_24;
                                                                                            phi_v1 = temp_v1_3;
                                                                                        } while ((s32) temp_s1_24 < (s32) (spF0 + (temp_v1_3 * 2))->unk11882);
                                                                                    }
                                                                                    temp_s7->unk11FEC = (s16) (phi_v1 + 1);
                                                                                } else {
                                                                                    spDA = temp_a3;
                                                                                    if (temp_s0 != 0xC) {
                                                                                        if (temp_s0 == 0xA) {
                                                                                            spDA = temp_a3;
                                                                                            goto block_416;
                                                                                        }
                                                                                        if ((temp_s0 == 0x101) || (temp_s0 == 0x102) || (temp_s0 == 0x104) || (((s32) temp_s0 >= 0x130) && ((s32) temp_s0 < 0x137))) {
                                                                                            spDA = temp_a3;
                                                                                        } else if (temp_s0 == 0x111) {
                                                                                            spDA = temp_a3;
                                                                                            temp_s7->unk1209C = 1;
                                                                                            temp_v0_7 = spEA + 1;
                                                                                            spEA = temp_v0_7;
                                                                                            temp_s0_10 = (sp74->unk1FEC + 1) & 0xFFFF;
                                                                                            temp_s7->unk11FEC = temp_s0_10;
                                                                                            (temp_s7 + (temp_v0_7 * 2))->unk11F24 = (s16) ((temp_s2 + (temp_s0_10 * 2))->unk11880 & 0xFF);
                                                                                        } else if (temp_s0 == 0x120) {
                                                                                            spDA = temp_a3;
                                                                                            temp_v0_8 = spEA + 1;
                                                                                            spEA = temp_v0_8;
                                                                                            temp_s0_11 = (sp74->unk1FEC + 1) & 0xFFFF;
                                                                                            temp_s7->unk11FEC = temp_s0_11;
                                                                                            (temp_s7 + (temp_v0_8 * 2))->unk11F24 = (u16) (temp_s2 + (temp_s0_11 * 2))->unk11880;
                                                                                            if ((sp74->unk2094 != 0) || (temp_v0_9 = sp74->unk1F0A, (temp_v0_9 == 1)) || (temp_v0_9 == 3) || (temp_v0_9 == 6) || (temp_v0_9 == 8) || (temp_v0_9 == 9) || (temp_v0_9 == 0xB) || (sp74->unk1F0C == 3)) {
                                                                                                play_sound((temp_s7 + (spEA * 2))->unk11F24);
                                                                                            }
                                                                                        } else if (temp_s0 == 0x128) {
                                                                                            spDA = temp_a3;
                                                                                            temp_v0_10 = spEA + 1;
                                                                                            spEA = temp_v0_10;
                                                                                            temp_s0_12 = (sp74->unk1FEC + 1) & 0xFFFF;
                                                                                            temp_s7->unk11FEC = temp_s0_12;
                                                                                            (temp_s7 + (temp_v0_10 * 2))->unk11F24 = (u16) (temp_s2 + (temp_s0_12 * 2))->unk11880;
                                                                                        } else if (temp_s0 != 0x20) {
                                                                                            spDA = temp_a3;
                                                                                            if ((s32) temp_s0 >= 0x2000) {
                                                                                                if ((s32) temp_s0 >= 0x2009) {
                                                                                                    spDA = temp_a3;
                                                                                                    goto block_446;
                                                                                                }
                                                                                                goto block_466;
                                                                                            }
block_446:
                                                                                            sp7C = (s32) temp_s0;
                                                                                            Font_LoadChar(arg0, temp_s0 & 0xFFFF, spC8);
                                                                                            spC8 += 0x80;
                                                                                            if ((temp_s0 == 0x8169) || (temp_s0 == 0x8175)) {
                                                                                                spC0 += 10.0f * sp74->unk2098;
                                                                                            } else {
                                                                                                if (temp_s0 == 0x8145) {
                                                                                                    phi_f6 = spC0 + (12.0f * sp74->unk2098);
                                                                                                    goto block_468;
                                                                                                }
                                                                                                if ((temp_s0 == 0x8148) || (temp_s0 == 0x8149)) {
                                                                                                    spC0 += 14.0f * sp74->unk2098;
                                                                                                } else if (temp_s0 == 0x8144) {
                                                                                                    spC0 += 8.0f * sp74->unk2098;
                                                                                                } else if ((temp_s0 == 0x816A) || (temp_s0 == 0x8176)) {
                                                                                                    spC0 += 10.0f * sp74->unk2098;
                                                                                                } else if ((temp_s0 == 0x8141) || (temp_s0 == 0x8142) || (temp_s0 == 0x8168)) {
                                                                                                    spC0 += 12.0f * sp74->unk2098;
                                                                                                } else {
                                                                                                    if (temp_s0 == 0x8194) {
                                                                                                        phi_f6 = spC0 + (14.0f * sp74->unk2098);
                                                                                                        goto block_468;
                                                                                                    }
                                                                                                    spC0 += 16.0f * sp74->unk2098;
                                                                                                }
                                                                                            }
                                                                                        } else {
block_466:
                                                                                            spDA = temp_a3;
                                                                                            if (temp_s0 == 0x20) {
                                                                                                spDA = temp_a3;
                                                                                                phi_f6 = spC0 + 6.0f;
block_468:
                                                                                                spC0 = phi_f6;
                                                                                            }
                                                                                        }
                                                                                    } else {
block_416:
                                                                                        temp_t6_4 = temp_s7 + (spD2 * 2);
                                                                                        temp_t6_4->unk11F1A = 0;
                                                                                        if (sp74->unk1F18 == 0) {
                                                                                            temp_t6_4->unk11F1A = (s16) (s32) (((sp74->unk2098 * 16.0f * 16.0f) - spC0) * 0.5f);
                                                                                        }
                                                                                        spD2 += 1;
                                                                                        spC0 = 0.0f;
                                                                                        if (temp_s0 == 0xA) {
                                                                                            spE0 += 1;
                                                                                        }
                                                                                        spDA = spDA;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
block_334:
                                                                            phi_s1_27 = 0;
                                                                            phi_s3_15 = 0;
                                                                            phi_f20_2 = 8.0f;
                                                                            if (temp_s0 == 0x307) {
                                                                                func_8014CDF0(0, gSaveContext.roomInf[127][1], &spAC, temp_a3);
                                                                            } else if (temp_s0 == 0x309) {
                                                                                func_8014CDF0(0, gSaveContext.roomInf[127][4], &spAC, temp_a3);
                                                                            } else {
                                                                                func_8014CDF0(0, (&gSaveContext.roomInf[11][6])[temp_s0], &spAC, temp_a3);
                                                                            }
                                                                            do {
                                                                                phi_f20 = phi_f20_2;
                                                                                if ((phi_s1_27 == 4) || ((phi_s1_27 != 2) && (phi_s1_27 != 5) && ((sp + (phi_s1_27 * 2))->unkAC != 0))) {
                                                                                    phi_s3_15 = 1;
                                                                                }
                                                                                if (phi_s3_15 != 0) {
                                                                                    temp_s0_14 = (phi_s1_27 * 2) + &spAC;
                                                                                    Font_LoadChar(arg0, (*temp_s0_14 + 0x824F) & 0xFFFF, spC8);
                                                                                    spC8 += 0x80;
                                                                                    (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_14 + 0x824F);
                                                                                    spEA += 1;
                                                                                } else {
                                                                                    phi_f20 = phi_f20_2 - 1.0f;
                                                                                }
                                                                                temp_s1_27 = phi_s1_27 + 1;
                                                                                phi_s1_27 = temp_s1_27;
                                                                                phi_f20_2 = phi_f20;
                                                                            } while ((s32) temp_s1_27 < 8);
                                                                            spEA += -1;
                                                                            spC0 += phi_f20 * (16.0f * sp74->unk2098);
                                                                        }
                                                                    } else {
block_303:
                                                                        phi_s1_28 = 0;
                                                                        phi_s3_16 = 0;
                                                                        if (temp_s0 == 0x308) {
                                                                            phi_a0_2 = (s16) gSaveContext.roomInf[127][3];
                                                                        } else {
                                                                            phi_a0_2 = *(&gSaveContext + 0x2DE + (temp_s0 * 4));
                                                                        }
                                                                        phi_a0 = phi_a0_2;
                                                                        if (temp_s0 == 0x302) {
                                                                            if (gSaveContext.linkAge != 0) {
                                                                                phi_v0_4 = 5;
                                                                            } else {
                                                                                phi_v0_4 = 0x11;
                                                                            }
                                                                            if (phi_v0_4 == 5) {
                                                                                phi_a0_3 = (phi_a0_2 & 0x7F) << 0x10;
                                                                            } else {
                                                                                phi_a0_3 = ((s16) ((u32) (gSaveContext.roomInf[127][(temp_s2 + (sp74->unk1FEC * 2))->unk11880] & 0xFF000000) >> 0x18) & 0x7F) << 0x10;
                                                                            }
                                                                            phi_a0 = (s16) (phi_a0_3 >> 0x10);
                                                                        }
                                                                        spD8 = 0;
                                                                        spD6 = 0;
                                                                        spD4 = 0;
                                                                        phi_a3_42 = phi_a0;
                                                                        phi_a3_43 = (s32) phi_a0;
                                                                        if ((s32) phi_a0 >= 0x3E8) {
                                                                            do {
                                                                                temp_a3_33 = phi_a3_42 - 0x3E8;
                                                                                spD4 += 1;
                                                                                phi_a3_42 = temp_a3_33;
                                                                                phi_a3_43 = (s32) temp_a3_33;
                                                                            } while ((s32) temp_a3_33 >= 0x3E8);
                                                                        }
                                                                        phi_a3_44 = phi_a3_43;
                                                                        phi_a3_45 = phi_a3_43;
                                                                        if (phi_a3_43 >= 0x64) {
                                                                            do {
                                                                                temp_a3_34 = phi_a3_44 - 0x64;
                                                                                spD6 += 1;
                                                                                phi_a3_44 = (s32) temp_a3_34;
                                                                                phi_a3_45 = (s32) temp_a3_34;
                                                                            } while ((s32) temp_a3_34 >= 0x64);
                                                                        }
                                                                        phi_a3_46 = phi_a3_45;
                                                                        phi_a3_47 = (s16) phi_a3_45;
                                                                        if (phi_a3_45 >= 0xA) {
                                                                            do {
                                                                                temp_a3_35 = phi_a3_46 - 0xA;
                                                                                spD8 += 1;
                                                                                phi_a3_46 = (s32) temp_a3_35;
                                                                                phi_a3_47 = temp_a3_35;
                                                                            } while ((s32) temp_a3_35 >= 0xA);
                                                                        }
                                                                        do {
                                                                            phi_a3_48 = phi_a3_47;
                                                                            if (phi_s1_28 != 3) {
                                                                                spDA = phi_a3_47;
                                                                                if (temp_s5[phi_s1_28] != 0) {
                                                                                    phi_a3_48 = spDA;
                                                                                    goto block_323;
                                                                                }
                                                                            } else {
block_323:
                                                                                spDA = phi_a3_48;
                                                                                phi_s3_16 = 1;
                                                                            }
                                                                            if (phi_s3_16 != 0) {
                                                                                temp_s0_15 = &temp_s5[phi_s1_28];
                                                                                Font_LoadChar(arg0, (*temp_s0_15 + 0x824F) & 0xFFFF, spC8);
                                                                                spC8 += 0x80;
                                                                                (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_15 + 0x824F);
                                                                                spEA += 1;
                                                                                spC0 += 16.0f * sp74->unk2098;
                                                                            }
                                                                            temp_s1_28 = phi_s1_28 + 1;
                                                                            phi_s1_28 = temp_s1_28;
                                                                            phi_a3_47 = spDA;
                                                                        } while ((s32) temp_s1_28 < 4);
                                                                        spDA = spDA;
                                                                        spEA += -1;
                                                                    }
                                                                }
                                                            } else {
block_253:
                                                                phi_s1_29 = 0;
                                                                if (temp_s0 == 0x22C) {
                                                                    temp_v1_5 = (((s32) gSaveContext.day % 5) * 3) + &gSaveContext;
                                                                    spD4 = (s16) temp_v1_5->unkFE9;
                                                                    spD6 = (s16) temp_v1_5->unkFEA;
                                                                    spD8 = (s16) temp_v1_5->unkFEB;
                                                                } else {
                                                                    temp_v0_12 = gSaveContext.roomInf[127][5];
                                                                    spD4 = (s16) ((u32) (temp_v0_12 & 0xF00) >> 8);
                                                                    spD6 = (s16) ((u32) (temp_v0_12 & 0xF0) >> 4);
                                                                    spD8 = temp_v0_12 & 0xF;
                                                                }
                                                                do {
                                                                    temp_s0_16 = &temp_s5[phi_s1_29];
                                                                    Font_LoadChar(arg0, (*temp_s0_16 + 0x824F) & 0xFFFF, spC8);
                                                                    temp_s1_29 = phi_s1_29 + 1;
                                                                    spC8 += 0x80;
                                                                    (temp_s7 + (spEA * 2))->unk11F24 = (s16) (*temp_s0_16 + 0x824F);
                                                                    spEA += 1;
                                                                    spC0 += 16.0f * sp74->unk2098;
                                                                    phi_s1_29 = temp_s1_29;
                                                                } while ((s32) temp_s1_29 < 3);
                                                                spEA += -1;
                                                            }
                                                        }
                                                    } else {
block_76:
                                                        temp_a0_5 = (&gSaveContext.pictoPhoto[924])[temp_s0];
                                                        temp_a1_2 = *(&gSaveContext + 0x2DC4 + (temp_s0 * 8));
                                                        sp98 = temp_a0_5;
                                                        sp9C = temp_a1_2;
                                                        func_8014CDF0(temp_a0_5, temp_a1_2, &spAC, temp_a3);
                                                        phi_s1_30 = 0;
                                                        phi_s3_17 = 0;
                                                        do {
                                                            if ((phi_s1_30 == 4) || ((phi_s1_30 != 2) && (phi_s1_30 != 5) && ((sp + (phi_s1_30 * 2))->unkAC != 0))) {
                                                                phi_s3_17 = 1;
                                                            }
                                                            if (phi_s3_17 != 0) {
                                                                func_8014CC14(arg0, ((sp + (phi_s1_30 * 2))->unkAC + 0x824F) & 0xFFFF, &spC8, &spC0, (s16) (s32) spEA);
                                                                spEA += 1;
                                                            }
                                                            temp_s1_30 = phi_s1_30 + 1;
                                                            phi_s1_30 = temp_s1_30;
                                                        } while ((s32) temp_s1_30 < 8);
                                                        spEA += -1;
                                                    }
                                                }
                                                spEA += 1;
                                                temp_s7->unk11FEC = (s16) (sp74->unk1FEC + 1);
                                                goto loop_3;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        temp_s7->unk11F22 = 6;
        temp_s7->unk11FEE = 1;
        temp_s7->unk11FFA = (s16) (sp74->unk206A + 6);
        temp_t4_2 = temp_s7 + (spD2 * 2);
        temp_t4_2->unk11F1A = 0;
        if (sp74->unk1F18 == 0) {
            temp_t4_2->unk11F1A = (s16) ((s32) (s16) (s32) ((sp74->unk2098 * 16.0f * 16.0f) - spC0) / 2);
        }
        spC0 = 0.0f;
        if (temp_s0 == 0xB) {
            temp_v0_13 = sp74->unk1F0A;
            if ((temp_v0_13 != 3) && (temp_v0_13 != 4)) {
                if ((s32) spE0 < 2) {
                    temp_s7->unk11FFA = (s16) (sp74->unk206A + 0x16);
                } else if (spE0 == 2) {
                    temp_s7->unk11FFA = (s16) (sp74->unk206A + 0xE);
                }
            }
        } else {
            temp_v0_14 = sp74->unk1F0A;
            if ((temp_v0_14 != 3) && (temp_v0_14 != 4)) {
                if (spE0 == 0) {
                    temp_s7->unk11FFA = (s16) (sp74->unk206A + 0x16);
                } else if (spE0 == 1) {
                    temp_s7->unk11FFA = (s16) (sp74->unk206A + 0xE);
                }
            }
        }
        if ((temp_s0 == 0x110) || (temp_s0 == 0x111) || (temp_s0 == 0x112)) {
            temp_v0_15 = spEA + 1;
            spEA = temp_v0_15;
            (temp_s7 + (temp_v0_15 * 2))->unk11F24 = (u16) (temp_s2 + (sp74->unk1FEC * 2))->unk11882;
            temp_s7->unk11FEC = (s16) (sp74->unk1FEC + 2);
        }
        temp_s7->unk11FF0 = spEA;
        if ((sp74->unk2094 != 0) || (temp_v0_16 = sp74->unk1F0A, (temp_v0_16 == 1)) || (temp_v0_16 == 3) || (temp_v0_16 == 6) || (temp_v0_16 == 8) || (temp_v0_16 == 9) || (temp_v0_16 == 0xB) || (sp74->unk1F0C == 3)) {
            temp_s7->unk11FEE = (u16) sp74->unk1FF0;
        }
        temp_s7->unk120C8 = (s16) sp74->unk20CE;
        temp_s7->unk120CA = (s16) sp74->unk20D0;
        temp_s7->unk120CC = (s16) sp74->unk20D2;
        return;
    }
    if (arg0->msgCtx.unk12090 != 0) {
        func_8015F8A8(arg0);
        return;
    }
    func_8015B198(arg0);
}

void func_80150A84(GlobalContext *arg0) {
    void *sp24;
    s32 sp20;
    s16 *sp1C;
    s16 *temp_v1;
    s16 temp_t0;
    void *temp_v0;
    void *phi_at;

    temp_v1 = (arg0->msgCtx.unk11F0A * 2) + &D_801CFC78;
    temp_t0 = *temp_v1;
    temp_v0 = arg0 + 0x4908;
    if (temp_t0 != 0xE) {
        sp20 = arg0 + 0x10000;
        sp1C = temp_v1;
        sp24 = temp_v0;
        DmaMgr_SendRequest0(temp_v0->unk11EF8, (u32) ((temp_t0 << 0xC) + _message_staticSegmentRomStart), 0x1000U);
        if (arg0->pauseCtx.unk_1F0 == 0) {
            if ((temp_v1 == &D_801CFC78) || (temp_v1 == &D_801CFC84) || (temp_v1 == &D_801CFC8C) || (temp_v1 == &D_801CFC8E)) {
                temp_v0->unk12034 = 0;
                temp_v0->unk12036 = 0;
                phi_at = temp_v0 + 0x10000;
                goto block_15;
            }
            if (temp_v1 == &D_801CFC7A) {
                temp_v0->unk12034 = 0x46;
                temp_v0->unk12036 = 0x32;
                temp_v0->unk12038 = 0x1E;
            } else if ((temp_v1 == &D_801CFC7C) || (temp_v1 == &D_801CFC88)) {
                temp_v0->unk12034 = 0;
                temp_v0->unk12036 = 0xA;
                temp_v0->unk12038 = 0x32;
            } else if (temp_v1 == &D_801CFC92) {
                temp_v0->unk12034 = 0xFF;
                temp_v0->unk12036 = 0xFF;
                temp_v0->unk12038 = 0xC3;
            } else {
                temp_v0->unk12034 = 0xFF;
                temp_v0->unk12036 = 0;
                phi_at = temp_v0 + 0x10000;
block_15:
                phi_at->unk2038 = 0;
            }
            if (temp_v1 == &D_801CFC7A) {
                temp_v0->unk1203A = 0xE6;
            } else if (temp_v1 == &D_801CFC7E) {
                temp_v0->unk1203A = 0xB4;
            } else if (temp_v1 == &D_801CFC92) {
                temp_v0->unk1203A = 0xDC;
            } else {
                temp_v0->unk1203A = 0xAA;
            }
        } else {
            temp_v0->unk12034 = 0xFF;
            temp_v0->unk12036 = 0xFF;
            temp_v0->unk12038 = 0xFF;
            temp_v0->unk1203A = 0xFF;
        }
        temp_v0->unk1203C = 0;
    }
}

void func_80150D08(GlobalContext *globalCtx, u32 uParm2) {
    MessageContext *sp28;
    Font *sp24;
    void *sp20;
    s32 sp1C;
    void *sp18;
    Font *temp_a3;
    Font *temp_a3_2;
    Font *temp_a3_3;
    MessageContext *temp_v1;
    u16 temp_a2;
    u16 temp_a2_2;
    u16 temp_v0_2;
    u32 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u16 phi_t1;
    u16 phi_a2;
    s32 phi_t1_2;
    SaveContext *phi_a3;
    f32 phi_f0;
    u16 phi_a2_2;
    Font *phi_a3_2;
    void *phi_at;

    temp_a2 = uParm2 & 0xFFFF;
    sp20 = globalCtx + 0x10000;
    phi_t1 = temp_a2;
    phi_a2 = temp_a2;
    if (globalCtx->msgCtx.unk11F22 == 0) {
        gSaveContext.unk_3F26 = gSaveContext.unk_3F22;
    }
    if (temp_a2 == 0xFF) {
        (u16) uParm2 = temp_a2;
        sp1C = (s32) temp_a2;
        func_80115844(globalCtx, 0x12);
        globalCtx->msgCtx.unk120BC = gSaveContext.unk_3F22;
        Interface_ChangeAlpha(0x10U);
        gSaveContext.unk_06 = 0x14;
        phi_t1 = temp_a2;
        phi_a2 = (u16) uParm2;
    } else if ((temp_a2 == 0x579) || (temp_a2 == 0x8D8)) {
        (u16) uParm2 = temp_a2;
        sp1C = (s32) temp_a2;
        Interface_ChangeAlpha(5U);
        phi_t1 = temp_a2;
        phi_a2 = (u16) uParm2;
    } else if (((temp_a2 == 0x28) || (temp_a2 == 0x29) || (temp_a2 == 0x2A)) && (globalCtx->actorCtx.actorList[2].first->unk14B == 3)) {
        phi_t1 = 0xC9U;
        phi_a2 = 0xC9U;
    } else if (temp_a2 == 0x11) {
        if (gSaveContext.inventory.strayFairies[gSaveContext.unk_48C8] == 0xF) {
            phi_t1 = 0xF3U;
            phi_a2 = 0xF3U;
        }
    } else if ((temp_a2 == 0x92) && (globalCtx->sceneNum == 0x6A)) {
        phi_t1 = 0xCDU;
        phi_a2 = 0xCDU;
    }
    temp_v1 = &globalCtx->msgCtx;
    phi_t1_2 = (s32) phi_t1;
    phi_a3 = &gSaveContext;
    if (phi_t1 == 0xC) {
        temp_v0 = (u32) (gSaveContext.inventory.questItems & 0xF0000000) >> 0x1C;
        if (temp_v0 != 0) {
            temp_a2_2 = (temp_v0 + 0xC4) & 0xFFFF;
            phi_a2 = temp_a2_2;
            phi_t1_2 = (s32) temp_a2_2;
        }
    }
    temp_v1->unk11F04 = phi_a2;
    temp_v0_2 = temp_v1->unk11F04;
    phi_a2_2 = phi_a2;
    if ((temp_v0_2 == 0xC) || (temp_v0_2 == 0xD) || (temp_v0_2 == 0xC5) || (temp_v0_2 == 0xC6) || (temp_v0_2 == 0xC7)) {
        sp28 = temp_v1;
        (u16) uParm2 = phi_a2;
        sp18 = temp_v1 + 0x10000;
        sp1C = phi_t1_2;
        Interface_ChangeAlpha(5U);
        phi_a3 = &gSaveContext;
        phi_a2_2 = (u16) uParm2;
    }
    globalCtx->msgCtx.unk12092 = 0;
    D_801C6A70 = 0;
    globalCtx->msgCtx.unk12094 = 0;
    globalCtx->msgCtx.unk12090 = 0;
    phi_f0 = 1.0f;
    if (sp20->unk6F20 != 0) {
        if (phi_a3->language == 0) {
            globalCtx->msgCtx.unk12098 = 1.4f;
            globalCtx->msgCtx.unk11FFC = 0x1E;
            globalCtx->msgCtx.unk11FF8 = 0x32;
            phi_f0 = 1.4f;
        } else {
            globalCtx->msgCtx.unk12098 = 1.4f;
            globalCtx->msgCtx.unk11FFC = 0x16;
            globalCtx->msgCtx.unk11FF8 = 0x32;
            phi_f0 = 1.4f;
        }
    } else if (phi_t1_2 >= 0x4E20) {
        globalCtx->msgCtx.unk12090 = 1;
        globalCtx->msgCtx.unk12098 = 0.85f;
        globalCtx->msgCtx.unk11FFC = 6;
        globalCtx->msgCtx.unk11FF8 = 0x14;
    } else if (phi_a3->language == 0) {
        globalCtx->msgCtx.unk12098 = 0.88f;
        globalCtx->msgCtx.unk11FFC = 0x12;
        globalCtx->msgCtx.unk11FF8 = 0x32;
    } else {
        globalCtx->msgCtx.unk12098 = 0.75f;
        globalCtx->msgCtx.unk11FFC = 0xC;
        globalCtx->msgCtx.unk11FF8 = 0x41;
    }
    D_801F6B00 = (s32) ((temp_v1 + 0x10000)->unk2098 * 16.0f);
    D_801F6B04 = (s32) (1024.0f / (temp_v1 + 0x10000)->unk2098);
    D_801F6B08 = (s32) (1024.0f / phi_f0);
    if ((temp_v1 + 0x10000)->unk2090 != 0) {
        sp28 = &globalCtx->msgCtx;
        sp18 = temp_v1 + 0x10000;
        sp1C = phi_t1_2;
        func_8015E750(globalCtx, phi_a2_2 & 0xFFFF, phi_a2_2, phi_a3);
        temp_a3 = &globalCtx->msgCtx.font;
        globalCtx->msgCtx.unk11F10 = (s32) temp_a3->messageEnd;
        sp24 = temp_a3;
        DmaMgr_SendRequest0((void *) &temp_a3->msgBuf, (u32) &temp_a3->messageStart[_staff_message_data_staticSegmentRomStart], (u32) temp_a3->messageEnd);
        phi_a3_2 = temp_a3;
    } else if (phi_a3->language == 0) {
        sp28 = &globalCtx->msgCtx;
        sp18 = temp_v1 + 0x10000;
        sp1C = phi_t1_2;
        func_80149EBC(globalCtx, phi_a2_2 & 0xFFFF, phi_a2_2, phi_a3);
        temp_a3_2 = &globalCtx->msgCtx.font;
        globalCtx->msgCtx.unk11F10 = (s32) temp_a3_2->messageEnd;
        sp24 = temp_a3_2;
        DmaMgr_SendRequest0((void *) &temp_a3_2->msgBuf, (u32) &temp_a3_2->messageStart[_message_data_staticSegmentRomStart], (u32) temp_a3_2->messageEnd);
        phi_a3_2 = temp_a3_2;
    } else {
        sp28 = &globalCtx->msgCtx;
        sp18 = temp_v1 + 0x10000;
        sp1C = phi_t1_2;
        func_801588D0(globalCtx, phi_a2_2 & 0xFFFF);
        temp_a3_3 = &globalCtx->msgCtx.font;
        globalCtx->msgCtx.unk11F10 = (s32) temp_a3_3->messageEnd;
        sp24 = temp_a3_3;
        DmaMgr_SendRequest0((void *) &temp_a3_3->msgBuf, (u32) &temp_a3_3->messageStart[_message_data_staticSegmentRomStart], (u32) temp_a3_3->messageEnd);
        phi_a3_2 = temp_a3_3;
    }
    globalCtx->msgCtx.unk12022 = 0;
    globalCtx->msgCtx.unk11FF2 = 0;
    globalCtx->msgCtx.unk12020 = 0;
    globalCtx->msgCtx.unk11FEE = 0;
    globalCtx->msgCtx.unk11FEC = 0;
    globalCtx->msgCtx.unk11FF0 = 0;
    globalCtx->msgCtx.unk11F08 = (phi_a3_2 + (temp_v1 + 0x10000)->unk1FEC)->unk11880 << 8;
    globalCtx->msgCtx.unk11F08 = (temp_v1 + 0x10000)->unk1F08 | (phi_a3_2 + (temp_v1 + 0x10000)->unk1FEC)->unk11881;
    globalCtx->msgCtx.unk11F18 = (s8) ((s32) ((temp_v1 + 0x10000)->unk1F08 & 0xF000) >> 0xC);
    globalCtx->msgCtx.unk11F0A = (u8) ((s32) ((temp_v1 + 0x10000)->unk1F08 & 0xF00) >> 8);
    globalCtx->msgCtx.unk11F0B = (s8) ((s32) ((temp_v1 + 0x10000)->unk1F08 & 0xF0) >> 4);
    globalCtx->msgCtx.unk11F0C = (temp_v1 + 0x10000)->unk1F08 & 0xF;
    temp_v0_3 = (temp_v1 + 0x10000)->unk1F0C;
    if ((temp_v0_3 == 1) || (temp_v0_3 == 3)) {
        globalCtx->msgCtx.unk11FF2 = 1;
    }
    globalCtx->msgCtx.unk11F16 = 0xFE;
    temp_v0_4 = (temp_v1 + 0x10000)->unk1F0A;
    if ((temp_v0_4 == 5) || (temp_v0_4 == 0xD) || (sp20->unk6F20 != 0)) {
        globalCtx->msgCtx.unk120D2 = 0;
        globalCtx->msgCtx.unk120D0 = (temp_v1 + 0x10000)->unk20D2;
        phi_at = &globalCtx->msgCtx + 0x10000;
    } else {
        globalCtx->msgCtx.unk120D2 = 0xFF;
        globalCtx->msgCtx.unk120D0 = (temp_v1 + 0x10000)->unk20D2;
        phi_at = &globalCtx->msgCtx + 0x10000;
    }
    phi_at->unk20CE = (temp_v1 + 0x10000)->unk20D2;
    globalCtx->msgCtx.choiceIndex = 0;
    if ((temp_v1 + 0x10000)->unk1F0C != 3) {
        globalCtx->msgCtx.unk1201E = 0xFF;
    } else {
        globalCtx->msgCtx.unk1201E = 0;
    }
    if (sp1C == 0x1467) {
        sp1C = sp1C;
        func_80151BB4(globalCtx, 2U);
    }
    if (sp1C == 0x2955) {
        func_80151BB4(globalCtx, 1U);
        func_80151BB4(globalCtx, 2U);
        func_80151BB4(globalCtx, 0x32U);
    }
}

void func_801514B0(GlobalContext *arg0, s32 arg1, u8 arg2) {
    Font *sp2C;
    Font *temp_v1;
    Font *temp_v1_2;
    s16 temp_a1;
    s16 temp_v0;
    void *temp_s0;
    s16 phi_a1;

    temp_a1 = arg1 & 0xFFFF;
    arg0->msgCtx.unk1202C = 0xFFFF;
    temp_s0 = arg0 + 0x4908;
    phi_a1 = temp_a1;
    if (arg0->msgCtx.unk11F22 == 0) {
        gSaveContext.unk_3F26 = gSaveContext.unk_3F22;
    }
    temp_s0->unk12092 = 0;
    D_801C6A70 = 0;
    temp_s0->unk12094 = 0;
    temp_s0->unk12090 = 0;
    if (gSaveContext.language == 0) {
        temp_s0->unk12098 = 0.88f;
        temp_s0->unk11FFC = 0x12;
        temp_s0->unk11FF8 = 0x32;
    } else {
        temp_s0->unk12098 = 0.75f;
        temp_s0->unk11FFC = 0xC;
        temp_s0->unk11FF8 = 0x41;
    }
    D_801F6B00 = (s32) (temp_s0->unk12098 * 16.0f);
    D_801F6B04 = (s32) (1024.0f / temp_s0->unk12098);
    D_801F6B08 = (s32) (1024.0f / 1.0f);
    if ((temp_a1 == 0x1709) && (arg0->actorCtx.actorList[2].first->unk14B == 3)) {
        phi_a1 = 0x1705;
    }
    temp_s0->unk11F04 = phi_a1;
    if (gSaveContext.language == 0) {
        func_80149EBC(arg0, phi_a1, 0x10000U);
        temp_v1 = &arg0->msgCtx.font;
        temp_s0->unk11F10 = (u8 *) temp_v1->messageEnd;
        sp2C = temp_v1;
        DmaMgr_SendRequest0((void *) &temp_v1->msgBuf, (u32) &temp_v1->messageStart[_message_data_staticSegmentRomStart], (u32) temp_v1->messageEnd);
    } else {
        func_801588D0(arg0, phi_a1);
        temp_v1_2 = &arg0->msgCtx.font;
        temp_s0->unk11F10 = (u8 *) temp_v1_2->messageEnd;
        sp2C = temp_v1_2;
        DmaMgr_SendRequest0((void *) &temp_v1_2->msgBuf, (u32) &temp_v1_2->messageStart[_message_data_staticSegmentRomStart], (u32) temp_v1_2->messageEnd);
    }
    temp_s0->unk12022 = 0;
    temp_s0->unk11FF2 = 0;
    temp_s0->unk12020 = 0;
    temp_s0->unk11FEE = 0;
    temp_s0->unk11FEC = 0;
    temp_s0->unk11FF0 = 0;
    temp_s0->unk11F08 = (u16) sp2C->msgBuf.wchar[temp_s0->unk11FEC];
    temp_s0->unk11F18 = (s8) ((s32) (temp_s0->unk11F08 & 0xF000) >> 0xC);
    temp_s0->unk11F0A = 9;
    temp_s0->unk11F0B = arg2;
    temp_s0->unk11F0C = (s8) (temp_s0->unk11F08 & 0xF);
    temp_s0->unk11FF2 = 1;
    DmaMgr_SendRequest0(temp_s0->unk11EF8, (u32) ((D_801CFC78 << 0xC) + _message_staticSegmentRomStart), 0x1000U);
    temp_s0->unk12034 = 0;
    temp_s0->unk12036 = 0;
    temp_s0->unk12038 = 0;
    temp_s0->unk1203A = 0xE6;
    temp_s0->unk1203C = 0;
    temp_s0->unk1201E = 0xFF;
    temp_s0->unk12040 = 0;
    temp_s0->unk11F22 = 1;
    temp_s0->unk12023 = 0;
    temp_s0->unk12024 = 0;
    arg0->msgCtx.unk1202A = 0;
    temp_s0->unk120D2 = 0xFF;
    temp_v0 = temp_s0->unk120D2;
    temp_s0->unk120D0 = temp_v0;
    temp_s0->unk120CE = temp_v0;
}

void func_801518B0(GlobalContext *globalCtx, u16 textId, Actor *Actor) {
    MessageContext *temp_v0;

    globalCtx->msgCtx.unk1202C = 0xFFFF;
    func_80150D08(globalCtx, textId & 0xFFFF);
    temp_v0 = &globalCtx->msgCtx;
    temp_v0->unk12040 = Actor;
    temp_v0->unk11F22 = 1;
    temp_v0->unk12023 = 0;
    temp_v0->unk12024 = 0;
    globalCtx->msgCtx.unk1202A = 0;
}

void func_80151938(GlobalContext *globalCtx, u16 textId) {
    MessageContext *sp24;
    MessageContext *temp_v0;
    MessageContext *phi_v0;

    globalCtx->msgCtx.unk11F10 = 0;
    func_80150D08(globalCtx, (u32) textId);
    func_80150A84(globalCtx);
    temp_v0 = &globalCtx->msgCtx;
    temp_v0->unk11F22 = 5;
    temp_v0->unk12023 = 8;
    temp_v0->unk12024 = 0;
    phi_v0 = temp_v0;
    if (globalCtx->interfaceCtx.unk_222 == 0) {
        if (textId != 0x1B93) {
            sp24 = temp_v0;
            func_8011552C(globalCtx, 0x10);
            goto block_5;
        }
        if (textId != 0xF8) {
            sp24 = temp_v0;
            func_8011552C(globalCtx, 6);
block_5:
            phi_v0 = sp24;
        }
    }
    phi_v0->unk1203C = phi_v0->unk1203A;
    if (globalCtx->pauseCtx.unk_1F0 != 0) {
        phi_v0->unk12004 = 0x22;
        phi_v0->unk12006 = 0x15E;
        sp24 = phi_v0;
        func_80149C18(globalCtx);
        phi_v0->unk12023 = 1;
    }
}

void func_80151A68(GlobalContext *globalCtx, u16 param_2) {
    MessageContext *temp_v0;
    s16 temp_a1;
    s16 temp_a1_2;
    u16 temp_a0;

    globalCtx->msgCtx.unk11F10 = 0;
    func_80150D08(globalCtx, param_2 & 0xFFFF);
    func_80150A84(globalCtx);
    func_8015B198(globalCtx);
    temp_v0 = &globalCtx->msgCtx;
    temp_v0->unk11F22 = 0x45;
    temp_v0->unk12024 = 0;
    temp_v0->unk1201E = 0;
    temp_a1 = temp_v0->unk1201E;
    temp_v0->unk1203A = temp_a1;
    temp_v0->unk1203C = temp_a1;
    temp_v0->unk12023 = 0x1E;
    temp_a0 = temp_v0->unk11F04;
    if (((s32) temp_a0 >= 0x1BB2) && ((s32) temp_a0 < 0x1BB7)) {
        gGameInfo->data[1418] = 0x6A;
        gGameInfo->data[1419] = 0;
        gGameInfo->data[1421] = 0x58;
        gGameInfo->data[1420] = 0x44;
        return;
    }
    gGameInfo->data[1418] = 0x42;
    gGameInfo->data[1419] = 0x1E;
    gGameInfo->data[1421] = 0x3C;
    gGameInfo->data[1420] = 0x1C;
    temp_v0->unk11F1E = 0;
    temp_a1_2 = temp_v0->unk11F1E;
    temp_v0->unk11F1C = temp_a1_2;
    temp_v0->unk11F1A = temp_a1_2;
    Interface_ChangeAlpha(1U);
}

void func_80151BB4(GlobalContext *globalCtx, u32 uParm2) {
    MessageContext *temp_v0_2;
    MessageContext *temp_v0_4;
    s32 temp_a1;
    u16 temp_v0;
    u16 temp_v0_3;

    temp_a1 = uParm2 & 0xFF;
    if ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) != 0) {
        temp_v0 = *(&D_801C6B28 + (temp_a1 * 2));
        temp_v0_2 = &globalCtx->msgCtx;
        if ((temp_v0 & 0xFF & gSaveContext.weekEventReg[(s32) temp_v0 >> 8]) == 0) {
            (temp_v0_2 + temp_v0_2->unk120B1)->unk120B2 = (s8) temp_a1;
            temp_v0_2->unk120B1 += 1;
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    if (temp_a1 >= 0x14) {
        temp_v0_3 = *(&D_801C6B28 + (temp_a1 * 2));
        temp_v0_4 = &globalCtx->msgCtx;
        if ((temp_v0_3 & 0xFF & gSaveContext.weekEventReg[(s32) temp_v0_3 >> 8]) == 0) {
            (temp_v0_4 + temp_v0_4->unk120B1)->unk120B2 = (s8) temp_a1;
            temp_v0_4->unk120B1 += 1;
        }
    }
}

s32 func_80151C9C(GlobalContext *arg0) {
    s32 temp_a2;
    s32 temp_t8;
    u16 temp_s0;
    u16 temp_v0;
    u8 temp_a1;
    void *temp_a3;

    temp_a3 = arg0 + 0x4908;
loop_1:
    if (temp_a3->unk120B1 == 0) {
        return 0;
    }
    temp_a3->unk120B1 = (s8) (temp_a3->unk120B1 - 1);
    temp_v0 = *(&D_801C6B28 + ((temp_a3 + temp_a3->unk120B1)->unk120B2 * 2));
    temp_t8 = (s32) temp_v0 >> 8;
    temp_a1 = gSaveContext.weekEventReg[temp_t8];
    temp_a2 = temp_v0 & 0xFF;
    if (((temp_a2 & temp_a1) == 0) && (gSaveContext.weekEventReg[temp_t8] = temp_a2 | temp_a1, temp_s0 = *(&D_801C6AB8 + ((temp_a3 + temp_a3->unk120B1)->unk120B2 * 2)), (temp_s0 != 0)) && ((gBitFlags->unk48 & gSaveContext.inventory.questItems) != 0)) {
        func_80151938(arg0, temp_s0 & 0xFFFF);
        play_sound(0x4855U);
        return 1;
    }
    goto loop_1;
}

void func_80151DA4(GlobalContext *arg0, u16 arg1) {
    s16 sp42;
    s16 sp40;
    s32 sp3C;
    s32 sp28;
    void *sp24;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u32 temp_v0;
    u32 temp_v0_2;
    void *temp_s0;
    void *temp_s0_2;
    u32 *phi_v1;
    u32 phi_v0;
    u32 phi_a0;
    u16 phi_a1;
    s16 phi_v0_2;
    s32 phi_a2;

    arg0->msgCtx.unk120A0 = 0;
    temp_v0 = arg0->msgCtx.unk120A0;
    phi_v0 = temp_v0;
    phi_a1 = arg1;
    if (temp_v0 < 0xCU) {
        phi_v1 = &gBitFlags[temp_v0];
        phi_a1 = (u16) &D_801D02C0;
        do {
            temp_s0 = arg0 + 0x4908;
            if ((phi_v1->unk18 & gSaveContext.inventory.questItems) != 0) {
                temp_s0->unk120A0 = (s32) (*(&D_801D02C0 + (phi_v0 * 2)) | temp_s0->unk120A0);
            }
            temp_v0_2 = phi_v0 + 1;
            phi_v1 += 4;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 < 0xCU);
    }
    temp_s0_2 = arg0 + 0x4908;
    if ((gBitFlags->unk30 & gSaveContext.inventory.questItems) != 0) {
        temp_s0_2->unk120A0 = (s32) (temp_s0_2->unk120A0 | 0x3000);
    }
    phi_a0 = gSaveContext.inventory.questItems;
    if ((gBitFlags->unk60 & gSaveContext.inventory.questItems) != 0) {
        temp_s0_2->unk120A0 = (s32) (temp_s0_2->unk120A0 | 0x4000);
        phi_a0 = gSaveContext.inventory.questItems;
    }
    if ((gBitFlags->unk1C & phi_a0) != 0) {
        temp_s0_2->unk120A0 = (s32) (temp_s0_2->unk120A0 & 0xBFFF);
    }
    if (gSaveContext.unk_F65 != 0) {
        temp_s0_2->unk120A0 = (s32) (temp_s0_2->unk120A0 | 0x400000);
    }
    if ((gSaveContext.eventInf[3] & 2) != 0) {
        temp_s0_2->unk120A0 = (s32) (temp_s0_2->unk120A0 | 0x800000);
    }
    sp24 = temp_s0_2 + 0x10000;
    temp_s0_2->unk11F00 = func_8019CF6C(phi_a0, phi_a1, 0x10000, &gSaveContext);
    if ((arg1 == 0x41) || (arg1 == 0x42)) {
        D_801CFCA4.unk6 = 0xFF;
        temp_v0_3 = D_801CFCA4.unk6;
        D_801CFCA4.unk4 = temp_v0_3;
        D_801CFCA4.unk2 = temp_v0_3;
        D_801CFCA4.unk0 = temp_v0_3;
    } else {
        sp24->unk1F00->unk2 = 0;
        D_801C6A74 = 0;
        D_801C6A78 = 0;
        sp28 = (s32) arg1;
        func_80147564(arg0);
    }
    D_801C6A7C = 0xFF;
    temp_s0_2->unk1202E = 0xFF;
    temp_s0_2->unk12048 = (s8) 0xFF;
    sp40 = 0;
    temp_s0_2->unk1202C = arg1;
    if (((s32) arg1 >= 0x47) && ((s32) arg1 < 0x52)) {
        sp28 = (s32) arg1;
        func_80150D08(arg0, 0x1B59U);
        func_80150A84(arg0);
    } else if (((s32) arg1 == 0x3B) || ((s32) arg1 == 0x3C)) {
        sp40 = 1;
        sp28 = (s32) arg1;
        func_80150D08(arg0, (u32) *(&D_801D023A + ((s32) arg1 * 2)));
        func_80150A84(arg0);
    } else if (((s32) arg1 >= 0x3D) && ((s32) arg1 < 0x43)) {
        sp40 = 1;
        sp28 = (s32) arg1;
        func_80150D08(arg0, (u32) *(&D_801D023A + ((s32) arg1 * 2)));
        func_80150A84(arg0);
    } else if (((s32) arg1 >= 0x43) && ((s32) arg1 < 0x47)) {
        sp40 = 1;
        sp28 = (s32) arg1;
        func_80150D08(arg0, 0x1B59U);
        func_80150A84(arg0);
    } else if (((s32) arg1 == 1) || ((s32) arg1 >= 0x28)) {
        if (((s32) arg1 >= 0x28) && ((s32) arg1 < 0x2D)) {
            sp28 = (s32) arg1;
            play_sound(0x4807U);
        }
        if ((s32) arg1 == 0x36) {
            sp28 = (s32) arg1;
            func_80150D08(arg0, 0x1B5BU);
            func_80150A84(arg0);
        } else {
            sp28 = (s32) arg1;
            func_80150D08(arg0, 0x1B5AU);
            func_80150A84(arg0);
        }
    } else {
        sp40 = 1;
        if ((s32) arg1 >= 0x12) {
            sp28 = (s32) arg1;
            func_80150D08(arg0, 0x1B59U);
            func_80150A84(arg0);
        } else {
            sp28 = (s32) arg1;
            func_80150D08(arg0, (u32) *(&D_801D028C + (arg1 * 2)));
            func_80150A84(arg0);
        }
    }
    temp_s0_2->unk12040 = 0;
    temp_s0_2->unk12024 = 0;
    arg0->msgCtx.unk1202A = 0;
    temp_s0_2->unk12004 = 0x22;
    temp_s0_2->unk12006 = 0x8E;
    temp_s0_2->unk12023 = 8;
    sp28 = sp28;
    func_80149C18(arg0);
    temp_s0_2->unk12068 = 0x22;
    temp_s0_2->unk1206A = 0x8E;
    temp_s0_2->unk1200C = 0x200;
    temp_s0_2->unk1200E = 0x200;
    temp_s0_2->unk12008 = 0x100;
    temp_s0_2->unk1200A = 0x40;
    temp_s0_2->unk11F22 = 5;
    temp_s0_2->unk1203C = (s16) sp24->unk203A;
    temp_s0_2->unk1203C = (s16) sp24->unk203A;
    if (sp40 == 0) {
        sp28 = sp28;
        func_80115844(arg0, 0x12);
        sp40 = (s16) gSaveContext.unk_3F22;
        Interface_ChangeAlpha(0xAU);
        gSaveContext.unk_3F22 = (u16) sp40;
    }
    if ((sp28 == 1) || (sp28 == 0x38)) {
        temp_s0_2->unk11F22 = 0xA;
        temp_s0_2->unk11F0A = 0xE;
    } else if (sp28 == 0x3A) {
        temp_s0_2->unk11F22 = 0x32;
    } else if (sp28 == 0x37) {
        temp_s0_2->unk11F22 = 0x2F;
        temp_s0_2->unk11F0A = 2;
    } else if (sp28 == 0x34) {
        func_8019C300(1U);
        func_8019C300(1U);
        temp_s0_2->unk11F00 = func_8019CF9C();
        sp24->unk1F00->unk2 = 0;
        D_801C6A78 = 0;
        D_801C6A74 = D_801C6A78;
        func_80147564(arg0);
        temp_s0_2->unk11F22 = 0x29;
        func_8019C398(0x19, 1);
        gSaveContext.unk_3F22 = 0;
        Interface_ChangeAlpha(1U);
    }
    phi_v0_2 = 0;
    phi_a2 = 0;
    do {
        sp42 = phi_v0_2;
        sp3C = phi_a2;
        Font_LoadChar(arg0, 0x8140U, phi_a2);
        temp_v0_4 = phi_v0_2 + 1;
        phi_v0_2 = temp_v0_4;
        phi_a2 += 0x80;
    } while ((s32) temp_v0_4 < 0x30);
    temp_s0_2->unk12023 = 3;
}

void func_80152434(GlobalContext *globalCtx, u16 arg2) {
    globalCtx->msgCtx.unk12046 = 0;
    func_80151DA4((GlobalContext *) (arg2 & 0xFFFF));
}

void func_80152464(void *arg0, s32 arg1) {
    arg0->unk1694E = 1;
    func_80151DA4((GlobalContext *) (arg1 & 0xFFFF));
}

u8 func_80152498(MessageContext *msgCtx) {
    u8 temp_v1;
    u8 temp_v1_2;

    if (msgCtx->unk11F10 == 0) {
        return 0U;
    }
    temp_v1 = msgCtx->unk11F22;
    if (temp_v1 == 0x42) {
        if (msgCtx->unk11F14 != 0xFFFF) {
            return 1U;
        }
        temp_v1_2 = msgCtx->unk12020;
        if ((temp_v1_2 == 0x10) || (temp_v1_2 == 0x11)) {
            return 4U;
        }
        if ((temp_v1_2 == 0x40) || (temp_v1_2 == 0x42) || (temp_v1_2 == 0x30)) {
            return 5U;
        }
        if (temp_v1_2 == 0x41) {
            return 0x10U;
        }
        if (((s32) temp_v1_2 >= 0x50) && ((s32) temp_v1_2 < 0x58)) {
            return 3U;
        }
        if ((temp_v1_2 == 0x60) || (temp_v1_2 == 0x61)) {
            return 0xEU;
        }
        if (temp_v1_2 == 0x62) {
            return 0xFU;
        }
        if (temp_v1_2 == 0x63) {
            return 0x11U;
        }
        if (temp_v1_2 == 0x12) {
            return 0x12U;
        }
        return 6U;
    }
    if (temp_v1 == 0x41) {
        return 0xAU;
    }
    if (temp_v1 == 0x1B) {
        return 7U;
    }
    if ((msgCtx->unk1202A == 3) || (temp_v1 == 0x37)) {
        return 8U;
    }
    if (temp_v1 == 0x20) {
        return 9U;
    }
    if ((temp_v1 == 0x21) || (temp_v1 == 0x3A)) {
        return 0xBU;
    }
    if (temp_v1 == 0x3D) {
        return 0xCU;
    }
    if (temp_v1 == 0x40) {
        return 0xDU;
    }
    if ((temp_v1 == 0x43) && ((u8) msgCtx->unk12023 == 1) && (msgCtx->unk120B1 == 0)) {
        return 2U;
    }
    return 3U;
}

void func_8015268C(GlobalContext *arg0, Gfx **arg1) {
    Gfx *temp_v0;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_a3_2;
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
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
    void *temp_v0_28;
    void *temp_v0_29;
    void *temp_v0_2;
    void *temp_v0_30;
    void *temp_v0_31;
    void *temp_v0_32;
    void *temp_v0_33;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *phi_v0;
    void *phi_v0_2;
    void *phi_v0_3;
    Gfx *phi_v0_4;
    Gfx *phi_v0_5;

    temp_v0 = *arg1;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0->words.w1 = 0;
    temp_v0_2 = temp_v0 + 8;
    temp_v1 = arg0 + 0x14908;
    temp_a3 = temp_v1->unk1F0A;
    phi_v0 = temp_v0_2;
    if ((temp_a3 == 0) || (temp_a3 == 2) || (temp_a3 == 9) || (temp_a3 == 0xA)) {
        temp_v0_2->unk0 = 0xE200001C;
        temp_v0_2->unk4 = 0x504340;
        phi_v0 = temp_v0_2 + 8;
    } else if (temp_a3 == 3) {
        temp_v0_2->unk4 = 1;
        temp_v0_2->unk0 = 0xE2001E01;
        temp_v0_3 = temp_v0_2 + 8;
        temp_v0_3->unk0 = 0xE200001C;
        temp_v0_3->unk4 = 0x504240;
        phi_v0 = temp_v0_3 + 8;
    }
    phi_v0->unk0 = 0xFA000000;
    temp_v0_4 = phi_v0 + 8;
    phi_v0->unk4 = (s32) ((temp_v1->unk2034 << 0x18) | ((temp_v1->unk2036 & 0xFF) << 0x10) | ((temp_v1->unk2038 & 0xFF) << 8) | (temp_v1->unk203C & 0xFF));
    temp_a3_2 = temp_v1->unk1F0A;
    if ((temp_a3_2 == 0) || (temp_a3_2 == 2) || (temp_a3_2 == 6) || (temp_a3_2 == 8) || (temp_a3_2 == 9) || (temp_a3_2 == 0xA)) {
        temp_v0_4->unk0 = 0xFD900000U;
        temp_v0_12 = temp_v0_4 + 8;
        temp_v0_4->unk4 = (s32) temp_v1->unk1EF8;
        temp_v0_12->unk4 = 0x7000170;
        temp_v0_12->unk0 = 0xF5900000;
        temp_v0_13 = temp_v0_12 + 8;
        temp_v0_13->unk0 = 0xE6000000;
        temp_v0_13->unk4 = 0;
        temp_v0_14 = temp_v0_13 + 8;
        temp_v0_14->unk4 = 0x77FF100;
        temp_v0_14->unk0 = 0xF3000000;
        temp_v0_15 = temp_v0_14 + 8;
        temp_v0_15->unk0 = 0xE7000000U;
        temp_v0_15->unk4 = 0;
        temp_v0_16 = temp_v0_15 + 8;
        temp_v0_16->unk4 = 0x170;
        temp_v0_16->unk0 = 0xF5801000;
        temp_v0_17 = temp_v0_16 + 8;
        temp_v0_17->unk4 = 0x1FC0FC;
        temp_v0_17->unk0 = 0xF2000000;
        phi_v0_3 = temp_v0_17 + 8;
    } else {
        temp_v0_4->unk0 = 0xE7000000U;
        temp_v0_4->unk4 = 0;
        temp_v0_5 = temp_v0_4 + 8;
        temp_a2 = temp_v1->unk1F0A;
        if (temp_a2 == 3) {
            temp_v0_5->unk4 = 0xFF;
            temp_v0_5->unk0 = 0xFB000000;
            phi_v0_2 = temp_v0_5 + 8;
        } else if (temp_a2 == 0xD) {
            temp_v0_5->unk0 = 0xFB000000;
            temp_v0_5->unk4 = 0x14000AFF;
            phi_v0_2 = temp_v0_5 + 8;
        } else {
            temp_v0_5->unk4 = 0x321400FF;
            temp_v0_5->unk0 = 0xFB000000;
            phi_v0_2 = temp_v0_5 + 8;
        }
        phi_v0_2->unk0 = 0xFD700000;
        temp_v0_6 = phi_v0_2 + 8;
        phi_v0_2->unk4 = (s32) temp_v1->unk1EF8;
        temp_v0_6->unk4 = 0x7040170;
        temp_v0_6->unk0 = 0xF5700000;
        temp_v0_7 = temp_v0_6 + 8;
        temp_v0_7->unk0 = 0xE6000000;
        temp_v0_7->unk4 = 0;
        temp_v0_8 = temp_v0_7 + 8;
        temp_v0_8->unk4 = 0x77FF100;
        temp_v0_8->unk0 = 0xF3000000;
        temp_v0_9 = temp_v0_8 + 8;
        temp_v0_9->unk0 = 0xE7000000U;
        temp_v0_9->unk4 = 0;
        temp_v0_10 = temp_v0_9 + 8;
        temp_v0_10->unk0 = 0xF5601000;
        temp_v0_10->unk4 = 0x40170;
        temp_v0_11 = temp_v0_10 + 8;
        temp_v0_11->unk4 = 0x1FC0FC;
        temp_v0_11->unk0 = 0xF2000000;
        phi_v0_3 = temp_v0_11 + 8;
    }
    if (temp_v1->unk1F0A == 0xA) {
        phi_v0_3->unk0 = (s32) (((((temp_v1->unk2068 + temp_v1->unk2008) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_v1->unk206A + 0x36) * 4) & 0xFFF));
        temp_v0_18 = phi_v0_3 + 8;
        phi_v0_3->unk4 = (s32) ((((temp_v1->unk2068 * 4) & 0xFFF) << 0xC) | (((temp_v1->unk206A + 0x16) * 4) & 0xFFF));
        temp_v0_18->unk4 = 6;
        temp_v0_18->unk0 = 0xE1000000;
        temp_v0_19 = temp_v0_18 + 8;
        temp_v0_19->unk0 = 0xF1000000;
        temp_v0_19->unk4 = (s32) ((temp_v1->unk200C << 0x11) | 0x800);
        phi_v0_4 = temp_v0_19 + 8;
    } else {
        temp_v0_20 = phi_v0_3 + 8;
        phi_v0_3->unk0 = (s32) (((((temp_v1->unk2068 + D_801CFD94) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_v1->unk206A + D_801CFD98) * 4) & 0xFFF));
        phi_v0_3->unk4 = (s32) ((((temp_v1->unk2068 * 4) & 0xFFF) << 0xC) | ((temp_v1->unk206A * 4) & 0xFFF));
        temp_v0_20->unk0 = 0xE1000000;
        temp_v0_20->unk4 = 0;
        temp_v0_21 = temp_v0_20 + 8;
        temp_v0_21->unk0 = 0xF1000000;
        temp_v0_21->unk4 = (s32) ((D_801CFD9C << 0x10) | (D_801CFDA0 & 0xFFFF));
        phi_v0_4 = temp_v0_21 + 8;
    }
    phi_v0_5 = phi_v0_4;
    if (temp_v1->unk1F0A == 3) {
        temp_v0_22 = phi_v0_4 + 8;
        phi_v0_4->words.w0 = 0xE7000000;
        phi_v0_4->words.w1 = 0;
        temp_v0_22->unk4 = 0xFF2FFFFF;
        temp_v0_22->unk0 = 0xFC6196C3;
        temp_v0_23 = temp_v0_22 + 8;
        temp_v0_23->unk4 = 0xFF6400FF;
        temp_v0_23->unk0 = 0xFA000000;
        temp_v0_24 = temp_v0_23 + 8;
        temp_v0_24->unk0 = 0xFD900000;
        temp_v0_24->unk4 = &D_020029A0;
        temp_v0_25 = temp_v0_24 + 8;
        temp_v0_25->unk0 = 0xF5900000;
        temp_v0_25->unk4 = 0x7040100;
        temp_v0_26 = temp_v0_25 + 8;
        temp_v0_26->unk0 = 0xE6000000;
        temp_v0_26->unk4 = 0;
        temp_v0_27 = temp_v0_26 + 8;
        temp_v0_27->unk4 = 0x707F800;
        temp_v0_27->unk0 = 0xF3000000;
        temp_v0_28 = temp_v0_27 + 8;
        temp_v0_28->unk0 = 0xE7000000U;
        temp_v0_28->unk4 = 0;
        temp_v0_29 = temp_v0_28 + 8;
        temp_v0_29->unk0 = 0xF5800200;
        temp_v0_29->unk4 = 0x40100;
        temp_v0_30 = temp_v0_29 + 8;
        temp_v0_30->unk4 = 0x3C07C;
        temp_v0_30->unk0 = 0xF2000000;
        temp_v0_31 = temp_v0_30 + 8;
        temp_v0_31->unk0 = 0xE4178318;
        temp_v0_31->unk4 = 0x138298;
        temp_v0_32 = temp_v0_31 + 8;
        temp_v0_32->unk0 = 0xE1000000;
        temp_v0_32->unk4 = 0;
        temp_v0_33 = temp_v0_32 + 8;
        temp_v0_33->unk4 = 0x4000400;
        temp_v0_33->unk0 = 0xF1000000;
        phi_v0_5 = temp_v0_33 + 8;
    }
    *arg1 = phi_v0_5;
}

void func_80152C64(View *arg0) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;

    sp24 = 0x140;
    sp1C = 0xF0;
    sp18 = 0;
    sp20 = 0;
    View_SetViewport(arg0, (Viewport *) &sp18);
    func_8013FBC8(arg0);
}

void func_80152CAC(GlobalContext *arg0) {
    void *sp18;
    GlobalContext *temp_a1;
    u16 temp_v0;
    u16 temp_v0_2;

    temp_a1 = arg0;
    if (temp_a1->msgCtx.unk1202C == 2) {
        arg0 = temp_a1;
        func_8019C300(0xAU, (s32) temp_a1);
        sp18 = arg0 + 0x14908;
    } else {
        sp18 = temp_a1 + 0x10000 + 0x4908;
        temp_v0 = temp_a1->msgCtx.unk1202C;
        if (temp_v0 == 9) {
            func_8019C300(0xDU, (s32) temp_a1);
        } else if (temp_v0 == 7) {
            func_8019C300(6U, (s32) temp_a1);
        } else if (temp_v0 == 0xA) {
            func_8019C300(2U, (s32) temp_a1);
        } else if (temp_v0 == 0xC) {
            func_8019C300(1U, (s32) temp_a1);
        } else if (temp_v0 == 3) {
            func_8019C300(0xFU, (s32) temp_a1);
        } else if (temp_v0 == 0x10) {
            func_8019C300(0xCU, (s32) temp_a1);
        } else if (temp_v0 == 6) {
            func_8019C300(6U, (s32) temp_a1);
        } else if (temp_v0 == 5) {
            func_8019C300(5U, (s32) temp_a1);
        } else {
            func_8019C300(1U, (s32) temp_a1);
        }
    }
    temp_v0_2 = sp18->unk202C;
    if ((temp_v0_2 == 0x3B) || (temp_v0_2 == 0x3C)) {
        func_8019C300(0xCU);
        func_8019C398(0xF, 0x83);
        return;
    }
    if ((temp_v0_2 == 0x3D) || (temp_v0_2 == 0x3E)) {
        func_8019C300(0xEU);
        func_8019C398((s8) (sp18->unk202C - 0x29), 0x84);
        return;
    }
    if ((temp_v0_2 == 0x3F) || (temp_v0_2 == 0x40)) {
        func_8019C300(8U);
        func_8019C398((s8) (sp18->unk202C - 0x2B), 0x44);
        return;
    }
    func_8019C398((s8) (temp_v0_2 - 1), 2);
}

void func_80152EC0(GlobalContext *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_a2;
    void *temp_v1;

    temp_a2 = arg0 + 0x4908;
    temp_v0 = temp_a2->unk12028;
    temp_v1 = arg0->actorCtx.actorList[2].first;
    if (((s32) temp_v0 < 0x17) && (temp_v0 != 0xE) && ((temp_v0_2 = temp_a2->unk1202C, (((s32) temp_v0_2 < 0x43) != 0)) || ((s32) temp_v0_2 >= 0x47))) {
        temp_a2->unk120B0 = 1;
        temp_v0_3 = temp_a2->unk12028;
        if (temp_v0_3 != 0x16) {
            Actor_Spawn(arg0 + 0x1CA0, arg0, *(&D_801D02D8 + (temp_v0_3 * 2)), temp_v1->world.pos.x, temp_v1->world.pos.y, temp_v1->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) *(&D_801D02F8 + (temp_v0_3 * 4)));
            return;
        }
        Actor_Spawn(arg0 + 0x1CA0, arg0, 0xF6, temp_v1->world.pos.x, temp_v1->world.pos.y, temp_v1->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80152FB8(void) {
    s32 sp44;
    s32 sp40;
    s32 sp38;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp18;
    s32 sp10;
    s32 sp8;
    s32 sp0;
    s16 temp_a0;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_a2_4;
    s16 temp_a2_5;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_a3_5;
    s16 temp_t0;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t4_3;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t6;
    s16 temp_t6_2;
    s16 temp_t7_2;
    s16 temp_t9;
    s16 temp_t9_2;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_t3;
    s32 temp_t7;
    s32 temp_v1_10;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v1;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s32 phi_v0_6;
    s32 phi_v0_7;
    s32 phi_v0_8;
    s32 phi_v0_9;
    s32 phi_v0_10;
    s32 phi_v0_11;
    s32 phi_v0_12;

    temp_t6 = D_801C6A90;
    temp_t7 = temp_t6 * 6;
    temp_v1 = temp_t7 + &D_801D0334;
    temp_a0 = D_801F6B0C;
    temp_a3 = temp_v1->unk0;
    sp40 = temp_t7;
    temp_a1 = temp_a0 - temp_a3;
    sp44 = (s32) temp_t6;
    if (temp_a1 < 0) {
        phi_v0 = -temp_a1;
    } else {
        phi_v0 = temp_a1;
    }
    temp_t0 = D_801C6A8C;
    D_801C6A80 = (s16) (phi_v0 / (s32) temp_t0);
    temp_a1_2 = D_801F6B10;
    temp_t4 = temp_v1->unk2;
    temp_a2 = temp_a1_2 - temp_t4;
    if (temp_a2 < 0) {
        phi_v0_2 = -temp_a2;
    } else {
        phi_v0_2 = temp_a2;
    }
    D_801C6A84 = (s16) (phi_v0_2 / (s32) temp_t0);
    temp_t5 = D_801F6B0E;
    temp_a2_2 = temp_v1->unk4;
    temp_t3 = temp_t5 - temp_a2_2;
    if (temp_t3 < 0) {
        phi_v0_3 = -temp_t3;
    } else {
        phi_v0_3 = temp_t3;
    }
    D_801C6A88 = (s16) (phi_v0_3 / (s32) temp_t0);
    if ((s32) temp_a0 >= (s32) temp_a3) {
        D_801F6B0C = temp_a0 - D_801C6A80;
    } else {
        D_801F6B0C = temp_a0 + D_801C6A80;
    }
    if ((s32) temp_a1_2 >= (s32) temp_t4) {
        D_801F6B10 = temp_a1_2 - D_801C6A84;
    } else {
        D_801F6B10 = temp_a1_2 + D_801C6A84;
    }
    if ((s32) temp_t5 >= (s32) temp_a2_2) {
        D_801F6B0E = temp_t5 - D_801C6A88;
    } else {
        D_801F6B0E = temp_t5 + D_801C6A88;
    }
    temp_a0_2 = sp40 + &D_801D0340;
    temp_t6_2 = temp_a0_2->unk0;
    temp_a1_3 = D_801F6B12;
    sp30 = (s32) temp_t6_2;
    temp_v1_2 = temp_a1_3 - temp_t6_2;
    if (temp_v1_2 < 0) {
        sp24 = (s32) temp_a2_2;
        sp38 = (s32) temp_a3;
        phi_v0_4 = -temp_v1_2;
    } else {
        sp24 = (s32) temp_a2_2;
        sp38 = (s32) temp_a3;
        phi_v0_4 = temp_v1_2;
    }
    sp2C = (s32) temp_t4;
    D_801C6A80 = (s16) (phi_v0_4 / (s32) temp_t0);
    temp_a2_3 = D_801F6B16;
    temp_t9 = temp_a0_2->unk2;
    temp_v1_3 = temp_a2_3 - temp_t9;
    sp20 = (s32) temp_t9;
    if (temp_v1_3 < 0) {
        phi_v0_5 = -temp_v1_3;
    } else {
        phi_v0_5 = temp_v1_3;
    }
    D_801C6A84 = (s16) (phi_v0_5 / (s32) temp_t0);
    temp_a3_2 = D_801F6B14;
    temp_t4_2 = temp_a0_2->unk4;
    temp_v1_4 = temp_a3_2 - temp_t4_2;
    sp18 = (s32) temp_t4_2;
    if (temp_v1_4 < 0) {
        phi_v0_6 = -temp_v1_4;
    } else {
        phi_v0_6 = temp_v1_4;
    }
    D_801C6A88 = (s16) (phi_v0_6 / (s32) temp_t0);
    temp_t4_3 = D_801F6B1E;
    if ((s32) temp_t4_3 >= sp30) {
        D_801F6B12 = temp_a1_3 - D_801C6A80;
    } else {
        D_801F6B12 = temp_a1_3 + D_801C6A80;
    }
    temp_t5_2 = D_801F6B22;
    if ((s32) temp_t5_2 >= sp20) {
        D_801F6B16 = temp_a2_3 - D_801C6A84;
    } else {
        D_801F6B16 = temp_a2_3 + D_801C6A84;
    }
    temp_t7_2 = D_801F6B20;
    sp28 = (s32) temp_t7_2;
    if ((s32) temp_t7_2 >= sp18) {
        D_801F6B14 = temp_a3_2 - D_801C6A88;
    } else {
        D_801F6B14 = temp_a3_2 + D_801C6A88;
    }
    temp_a0_3 = sp40 + &D_801D034C;
    temp_v0 = temp_a0_3->unk0;
    temp_a1_4 = D_801F6B18;
    sp10 = (s32) temp_v0;
    temp_v1_5 = temp_a1_4 - temp_v0;
    if (temp_v1_5 < 0) {
        phi_v0_7 = -temp_v1_5;
    } else {
        phi_v0_7 = temp_v1_5;
    }
    D_801C6A80 = (s16) (phi_v0_7 / (s32) temp_t0);
    temp_a2_4 = D_801F6B1C;
    temp_a3_3 = temp_a0_3->unk2;
    temp_v1_6 = temp_a2_4 - temp_a3_3;
    sp8 = (s32) temp_a3_3;
    if (temp_v1_6 < 0) {
        phi_v0_8 = -temp_v1_6;
    } else {
        phi_v0_8 = temp_v1_6;
    }
    D_801C6A84 = (s16) (phi_v0_8 / (s32) temp_t0);
    temp_a3_4 = D_801F6B1A;
    temp_t9_2 = temp_a0_3->unk4;
    temp_v1_7 = temp_a3_4 - temp_t9_2;
    sp0 = (s32) temp_t9_2;
    if (temp_v1_7 < 0) {
        phi_v0_9 = -temp_v1_7;
    } else {
        phi_v0_9 = temp_v1_7;
    }
    D_801C6A88 = (s16) (phi_v0_9 / (s32) temp_t0);
    if ((s32) temp_a1_4 >= sp10) {
        D_801F6B18 = temp_a1_4 - D_801C6A80;
    } else {
        D_801F6B18 = temp_a1_4 + D_801C6A80;
    }
    if ((s32) temp_a2_4 >= sp8) {
        D_801F6B1C = temp_a2_4 - D_801C6A84;
    } else {
        D_801F6B1C = temp_a2_4 + D_801C6A84;
    }
    if ((s32) temp_a3_4 >= sp0) {
        D_801F6B1A = temp_a3_4 - D_801C6A88;
    } else {
        D_801F6B1A = temp_a3_4 + D_801C6A88;
    }
    temp_a0_4 = sp40 + &D_801D0358;
    temp_a3_5 = temp_a0_4->unk0;
    temp_v1_8 = temp_t4_3 - temp_a3_5;
    phi_v0_10 = temp_v1_8;
    if (temp_v1_8 < 0) {
        phi_v0_10 = -temp_v1_8;
    }
    temp_a1_5 = temp_a0_4->unk2;
    D_801C6A80 = (s16) (phi_v0_10 / (s32) temp_t0);
    temp_v1_9 = temp_t5_2 - temp_a1_5;
    phi_v0_11 = temp_v1_9;
    if (temp_v1_9 < 0) {
        phi_v0_11 = -temp_v1_9;
    }
    temp_a2_5 = temp_a0_4->unk4;
    D_801C6A84 = (s16) (phi_v0_11 / (s32) temp_t0);
    temp_v1_10 = sp28 - temp_a2_5;
    phi_v0_12 = temp_v1_10;
    if (temp_v1_10 < 0) {
        phi_v0_12 = -temp_v1_10;
    }
    D_801C6A88 = (s16) (phi_v0_12 / (s32) temp_t0);
    if ((s32) temp_t4_3 >= (s32) temp_a3_5) {
        D_801F6B1E = temp_t4_3 - D_801C6A80;
    } else {
        D_801F6B1E = temp_t4_3 + D_801C6A80;
    }
    if ((s32) temp_t5_2 >= (s32) temp_a1_5) {
        D_801F6B22 = temp_t5_2 - D_801C6A84;
    } else {
        D_801F6B22 = temp_t5_2 + D_801C6A84;
    }
    if (sp28 >= (s32) temp_a2_5) {
        D_801F6B20 = sp28 - D_801C6A88;
    } else {
        D_801F6B20 = sp28 + D_801C6A88;
    }
    D_801C6A8C = temp_t0 - 1;
    if (D_801C6A8C == 0) {
        D_801F6B0C = (s16) sp38;
        D_801F6B10 = (s16) sp2C;
        D_801F6B0E = (s16) sp24;
        D_801F6B12 = (s16) sp30;
        D_801F6B16 = (s16) sp20;
        D_801F6B14 = (s16) sp18;
        D_801F6B18 = (s16) sp10;
        D_801F6B1C = (s16) sp8;
        D_801F6B1A = (s16) sp0;
        D_801F6B1E = temp_a3_5;
        D_801F6B22 = temp_a1_5;
        D_801F6B20 = temp_a2_5;
        D_801C6A8C = 3;
        D_801C6A90 = sp44 ^ 1;
    }
}

void func_80153750(GlobalContext *arg0, Gfx **arg1) {
    Gfx *spA0;
    void *sp24;
    void *sp1C;
    Gfx *temp_t6;
    Gfx *temp_t6_10;
    Gfx *temp_t6_2;
    Gfx *temp_t6_3;
    Gfx *temp_t6_4;
    Gfx *temp_t6_5;
    Gfx *temp_t6_6;
    Gfx *temp_t6_7;
    Gfx *temp_t6_8;
    Gfx *temp_t6_9;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t7_3;
    Gfx *temp_t7_4;
    Gfx *temp_t7_5;
    Gfx *temp_t8;
    Gfx *temp_t8_2;
    Gfx *temp_t8_3;
    Gfx *temp_t8_4;
    Gfx *temp_t9;
    Gfx *temp_t9_2;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    s16 *temp_v1;
    s16 temp_v0_6;
    s32 temp_a1;
    s32 temp_a1_2;
    u16 temp_v0;
    u16 temp_v0_3;
    u8 *temp_a0;
    u8 temp_v0_2;
    void *temp_t1;
    s32 phi_a1;
    s32 phi_a3;
    s32 phi_a1_2;
    s32 phi_a3_2;

    temp_t1 = arg0 + 0x4908;
    spA0 = *arg1;
    if (((s32) arg0->msgCtx.unk11F22 >= 0xD) && ((s32) temp_t1->unk11F22 < 0x41)) {
        temp_v0 = temp_t1->unk1202C;
        if ((temp_v0 != 1) && (temp_v0 != 0x38)) {
            sp1C = temp_t1 + 0x10000;
            sp24 = temp_t1;
            func_8012C680(&spA0);
            temp_t7 = spA0;
            spA0 = temp_t7 + 8;
            temp_t7->words.w0 = 0xFC309661;
            temp_t7->words.w1 = 0x552EFF7F;
            temp_v0_2 = sp1C->unk1F22;
            if ((temp_v0_2 == 0x1C) || (temp_v0_2 == 0x36)) {
                temp_v0_3 = sp1C->unk202C;
                if ((temp_v0_3 != 0x41) && (temp_v0_3 != 0x42)) {
                    if ((s32) temp_v0_3 >= 0x47) {
                        D_801C6A84 = temp_v0_3 - 0x47;
                    } else if ((temp_v0_3 == 0x41) || (temp_v0_3 == 0x42)) {
                        D_801C6A84 = temp_v0_3 - 0x2E;
                    } else if (((s32) temp_v0_3 >= 0x43) && ((s32) temp_v0_3 < 0x47)) {
                        D_801C6A84 = temp_v0_3 - 0x34;
                    } else {
                        D_801C6A84 = temp_v0_3 - 0x12;
                    }
                    D_801C6A80 = (s16) *(&D_801D8A48 + (D_801C6A84 * 9));
                    phi_a1 = 0;
                    phi_a3 = 0x62;
                    if ((s32) D_801C6A80 > 0) {
                        do {
                            temp_t6 = spA0;
                            spA0 = temp_t6 + 8;
                            temp_t6->words.w1 = 0;
                            temp_t6->words.w0 = 0xE7000000;
                            temp_t8 = spA0;
                            spA0 = temp_t8 + 8;
                            temp_t8->words.w1 = 0x96969696;
                            temp_t8->words.w0 = 0xFA000000;
                            temp_t6_2 = spA0;
                            spA0 = temp_t6_2 + 8;
                            temp_t6_2->words.w1 = 0xA0A0A00;
                            temp_t6_2->words.w0 = 0xFB000000;
                            temp_v0_4 = spA0;
                            spA0 = temp_v0_4 + 8;
                            temp_v0_4->words.w0 = 0xFD700000;
                            temp_v0_4->words.w1 = *(&D_801D0364 + ((&D_801D8A48 + (D_801C6A84 * 9) + phi_a1)->unk1 * 4));
                            temp_t6_3 = spA0;
                            spA0 = temp_t6_3 + 8;
                            temp_t6_3->words.w1 = 0x7000000;
                            temp_t6_3->words.w0 = 0xF5700000;
                            temp_t6_4 = spA0;
                            spA0 = temp_t6_4 + 8;
                            temp_t6_4->words.w1 = 0;
                            temp_t6_4->words.w0 = 0xE6000000;
                            temp_t9 = spA0;
                            spA0 = temp_t9 + 8;
                            temp_t9->words.w0 = 0xF3000000;
                            temp_t9->words.w1 = 0x707F400;
                            temp_t9_2 = spA0;
                            spA0 = temp_t9_2 + 8;
                            temp_t9_2->words.w1 = 0;
                            temp_t9_2->words.w0 = 0xE7000000;
                            temp_t7_2 = spA0;
                            spA0 = temp_t7_2 + 8;
                            temp_t7_2->words.w1 = 0;
                            temp_t7_2->words.w0 = 0xF5680400;
                            temp_t6_5 = spA0;
                            spA0 = temp_t6_5 + 8;
                            temp_t6_5->words.w0 = 0xF2000000;
                            temp_t6_5->words.w1 = 0x3C03C;
                            temp_v0_5 = spA0;
                            temp_t7_3 = temp_v0_5 + 8;
                            spA0 = temp_t7_3;
                            temp_v0_5->words.w0 = ((((temp_t1 + ((&D_801D8A48 + (D_801C6A84 * 9) + phi_a1)->unk1 * 2))->unk1204A + 0x10) * 4) & 0xFFF) | 0xE4000000 | ((((phi_a3 + 0x10) * 4) & 0xFFF) << 0xC);
                            temp_v0_5->words.w1 = (((temp_t1 + ((&D_801D8A48 + (D_801C6A84 * 9) + phi_a1)->unk1 * 2))->unk1204A * 4) & 0xFFF) | (((phi_a3 * 4) & 0xFFF) << 0xC);
                            spA0 = temp_t7_3 + 8;
                            temp_t7_3->words.w0 = 0xE1000000;
                            temp_t7_3->words.w1 = 0;
                            temp_t6_6 = spA0;
                            spA0 = temp_t6_6 + 8;
                            temp_t6_6->words.w0 = 0xF1000000;
                            temp_t6_6->words.w1 = 0x4000400;
                            temp_a1 = (phi_a1 + 1) & 0xFFFF;
                            phi_a1 = temp_a1;
                            phi_a3 = (phi_a3 + 0x12) & 0xFFFF;
                        } while (temp_a1 < (s32) D_801C6A80);
                    }
                }
            }
            phi_a3_2 = 0x62;
            if (sp1C->unk1F22 != 0x27) {
                phi_a1_2 = 0;
loop_22:
                temp_a0 = &(&D_801CFC98)[phi_a1_2];
                temp_v1 = &D_801CFCA4 + (phi_a1_2 * 2);
                if (*temp_a0 != 0xFF) {
                    temp_v0_6 = *temp_v1;
                    temp_a1_2 = (phi_a1_2 + 1) & 0xFFFF;
                    phi_a1_2 = temp_a1_2;
                    if (temp_v0_6 != 0xFF) {
                        *temp_v1 = temp_v0_6 + 0x32;
                        if ((s32) *temp_v1 >= 0xFF) {
                            *temp_v1 = 0xFF;
                        }
                    }
                    temp_t8_2 = spA0;
                    spA0 = temp_t8_2 + 8;
                    temp_t8_2->words.w1 = 0;
                    temp_t8_2->words.w0 = 0xE7000000;
                    temp_v0_7 = spA0;
                    if (*temp_a0 == 0) {
                        temp_v0_8 = spA0;
                        spA0 = temp_v0_8 + 8;
                        temp_v0_8->words.w0 = 0xFA000000;
                        temp_v0_8->words.w1 = (*temp_v1 & 0xFF) | (D_801F6B0C << 0x18) | ((D_801F6B10 & 0xFF) << 0x10) | ((D_801F6B0E & 0xFF) << 8);
                        temp_v0_9 = spA0;
                        spA0 = temp_v0_9 + 8;
                        temp_v0_9->words.w0 = 0xFB000000;
                        temp_v0_9->words.w1 = (D_801F6B12 << 0x18) | ((D_801F6B16 & 0xFF) << 0x10) | ((D_801F6B14 & 0xFF) << 8);
                    } else {
                        spA0 = temp_v0_7 + 8;
                        temp_v0_7->words.w0 = 0xFA000000;
                        temp_v0_7->words.w1 = (*temp_v1 & 0xFF) | (D_801F6B18 << 0x18) | ((D_801F6B1C & 0xFF) << 0x10) | ((D_801F6B1A & 0xFF) << 8);
                        temp_v0_10 = spA0;
                        spA0 = temp_v0_10 + 8;
                        temp_v0_10->words.w0 = 0xFB000000;
                        temp_v0_10->words.w1 = (D_801F6B1E << 0x18) | ((D_801F6B22 & 0xFF) << 0x10) | ((D_801F6B20 & 0xFF) << 8);
                    }
                    temp_v0_11 = spA0;
                    spA0 = temp_v0_11 + 8;
                    temp_v0_11->words.w0 = 0xFD700000;
                    temp_v0_11->words.w1 = *(&D_801D0364 + (*temp_a0 * 4));
                    temp_t6_7 = spA0;
                    spA0 = temp_t6_7 + 8;
                    temp_t6_7->words.w1 = 0x7000000;
                    temp_t6_7->words.w0 = 0xF5700000;
                    temp_t6_8 = spA0;
                    spA0 = temp_t6_8 + 8;
                    temp_t6_8->words.w1 = 0;
                    temp_t6_8->words.w0 = 0xE6000000;
                    temp_t8_3 = spA0;
                    spA0 = temp_t8_3 + 8;
                    temp_t8_3->words.w0 = 0xF3000000;
                    temp_t8_3->words.w1 = 0x707F400;
                    temp_t8_4 = spA0;
                    spA0 = temp_t8_4 + 8;
                    temp_t8_4->words.w1 = 0;
                    temp_t8_4->words.w0 = 0xE7000000;
                    temp_t7_4 = spA0;
                    spA0 = temp_t7_4 + 8;
                    temp_t7_4->words.w1 = 0;
                    temp_t7_4->words.w0 = 0xF5680400;
                    temp_t6_9 = spA0;
                    spA0 = temp_t6_9 + 8;
                    temp_t6_9->words.w0 = 0xF2000000;
                    temp_t6_9->words.w1 = 0x3C03C;
                    temp_v0_12 = spA0;
                    temp_t7_5 = temp_v0_12 + 8;
                    spA0 = temp_t7_5;
                    temp_v0_12->words.w0 = ((((temp_t1 + (*temp_a0 * 2))->unk1204A + 0x10) * 4) & 0xFFF) | 0xE4000000 | ((((phi_a3_2 + 0x10) * 4) & 0xFFF) << 0xC);
                    temp_v0_12->words.w1 = (((temp_t1 + (*temp_a0 * 2))->unk1204A * 4) & 0xFFF) | (((phi_a3_2 * 4) & 0xFFF) << 0xC);
                    spA0 = temp_t7_5 + 8;
                    temp_t7_5->words.w0 = 0xE1000000;
                    temp_t7_5->words.w1 = 0;
                    temp_t6_10 = spA0;
                    spA0 = temp_t6_10 + 8;
                    temp_t6_10->words.w0 = 0xF1000000;
                    temp_t6_10->words.w1 = 0x4000400;
                    phi_a3_2 = (phi_a3_2 + 0x12) & 0xFFFF;
                    if (temp_a1_2 < 8) {
                        goto loop_22;
                    }
                }
            }
        }
    }
    *arg1 = spA0;
}

void func_80153E7C(GlobalContext *arg0, void *arg1) {
    if ((gSaveContext.language == 0) && (arg0->msgCtx.unk12090 == 0)) {
        func_8014ADBC(arg0, arg1);
        return;
    }
    if (arg0->msgCtx.unk12090 != 0) {
        func_8015E7EC(arg0, arg1);
        return;
    }
    func_8015966C(NULL);
}

void func_80153EF0(GlobalContext *arg0, Gfx **arg1) {
    Gfx *sp70;
    GameInfo *temp_v1;
    Gfx **temp_a0;
    Gfx *temp_t1;
    Gfx *temp_t2;
    Gfx *temp_t2_2;
    Gfx *temp_t2_3;
    Gfx *temp_t3;
    Gfx *temp_t3_2;
    Gfx *temp_t4;
    Gfx *temp_t5;
    Gfx *temp_t5_2;
    Gfx *temp_t6;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t7_3;
    Gfx *temp_t8;
    Gfx *temp_t9;
    Gfx *temp_t9_2;
    Gfx *temp_t9_3;
    Gfx *temp_v0;
    u16 temp_v0_2;
    void *temp_t0;

    temp_a0 = &sp70;
    sp70 = *arg1;
    func_8012C680(temp_a0);
    temp_t8 = sp70;
    sp70 = temp_t8 + 8;
    temp_t8->words.w0 = 0xFC309661;
    temp_t8->words.w1 = 0x552EFF7F;
    temp_t3 = sp70;
    sp70 = temp_t3 + 8;
    temp_t3->words.w1 = 0x2000;
    temp_t3->words.w0 = 0xE3001201;
    temp_t7 = sp70;
    sp70 = temp_t7 + 8;
    temp_t7->words.w1 = 0x10;
    temp_t7->words.w0 = 0xE3001A01;
    temp_t2 = sp70;
    sp70 = temp_t2 + 8;
    temp_t2->words.w0 = 0xFA000000;
    temp_t0 = arg0 + 0x4908;
    temp_t2->words.w1 = temp_t0->unk1203C & 0xFF;
    temp_t7_2 = sp70;
    sp70 = temp_t7_2 + 8;
    temp_t7_2->words.w1 = 0x8C28A0FF;
    temp_t7_2->words.w0 = 0xFB000000;
    temp_t1 = sp70;
    sp70 = temp_t1 + 8;
    temp_t1->words.w1 = (u32) &D_02002AA0;
    temp_t1->words.w0 = 0xFD900000;
    temp_t5 = sp70;
    sp70 = temp_t5 + 8;
    temp_t5->words.w0 = 0xF5900000;
    temp_t5->words.w1 = 0x7000060;
    temp_t9 = sp70;
    sp70 = temp_t9 + 8;
    temp_t9->words.w1 = 0;
    temp_t9->words.w0 = 0xE6000000;
    temp_t3_2 = sp70;
    sp70 = temp_t3_2 + 8;
    temp_t3_2->words.w1 = 0x701F100;
    temp_t3_2->words.w0 = 0xF3000000;
    temp_t7_3 = sp70;
    sp70 = temp_t7_3 + 8;
    temp_t7_3->words.w1 = 0;
    temp_t7_3->words.w0 = 0xE7000000;
    temp_t9_2 = sp70;
    sp70 = temp_t9_2 + 8;
    temp_t9_2->words.w1 = 0x60;
    temp_t9_2->words.w0 = 0xF5881000;
    temp_t4 = sp70;
    sp70 = temp_t4 + 8;
    temp_t4->words.w1 = 0xFC000;
    temp_t4->words.w0 = 0xF2000000;
    temp_v0 = sp70;
    temp_v1 = gGameInfo;
    sp70 = temp_v0 + 8;
    temp_v0->words.w0 = (((temp_v1->data[1420] + temp_v1->data[1421]) * 4) & 0xFFF) | 0xE4500000;
    temp_v0->words.w1 = (gGameInfo->data[1421] * 4) & 0xFFF;
    temp_t2_2 = sp70;
    sp70 = temp_t2_2 + 8;
    temp_t2_2->words.w1 = 0;
    temp_t2_2->words.w0 = 0xE1000000;
    temp_t5_2 = sp70;
    sp70 = temp_t5_2 + 8;
    temp_t5_2->words.w1 = 0xCC0400;
    temp_t5_2->words.w0 = 0xF1000000;
    temp_t9_3 = sp70;
    sp70 = temp_t9_3 + 8;
    temp_t9_3->words.w1 = 0;
    temp_t9_3->words.w0 = 0xE7000000;
    temp_t2_3 = sp70;
    sp70 = temp_t2_3 + 8;
    temp_t2_3->words.w1 = 0xFF2DFEFF;
    temp_t2_3->words.w0 = 0xFCFF97FF;
    temp_t6 = sp70;
    sp70 = temp_t6 + 8;
    temp_t6->words.w1 = 0xFF;
    temp_t6->words.w0 = 0xFB000000;
    temp_v0_2 = temp_t0->unk11F04;
    if (((s32) temp_v0_2 < 0x1BB2) || ((s32) temp_v0_2 >= 0x1BB7)) {
        temp_t0->unk11FF8 = (s16) gGameInfo->data[1419];
    }
    temp_t0->unk11FFA = (s16) gGameInfo->data[1418];
    func_8015966C(arg0, &sp70, 0U, &gGameInfo);
    *arg1 = sp70;
}

void func_801541D4(GlobalContext *arg0, Gfx **arg1) {
    Gfx *sp84;
    u16 sp82;
    s32 sp78;
    GameInfo *temp_v1;
    Gfx *temp_t2;
    Gfx *temp_t2_2;
    Gfx *temp_t3;
    Gfx *temp_t5;
    Gfx *temp_t5_2;
    Gfx *temp_t5_3;
    Gfx *temp_t6;
    Gfx *temp_t7;
    Gfx *temp_t7_3;
    Gfx *temp_t8;
    Gfx *temp_t9;
    View *temp_s0;
    s16 temp_a2_5;
    s16 temp_a2_6;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_v0_20;
    s16 temp_v0_30;
    s16 temp_v0_31;
    s16 temp_v0_32;
    s16 temp_v0_33;
    s16 temp_v0_34;
    s16 temp_v0_35;
    s32 temp_a2;
    s32 temp_v0_29;
    s32 temp_v1_10;
    s32 temp_v1_20;
    s32 temp_v1_22;
    s32 temp_v1_24;
    s32 temp_v1_27;
    s32 temp_v1_2;
    u16 temp_a2_2;
    u16 temp_v0_19;
    u16 temp_v0_21;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v1_11;
    u16 temp_v1_12;
    u16 temp_v1_13;
    u16 temp_v1_16;
    u16 temp_v1_17;
    u16 temp_v1_18;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 temp_v1_5;
    u16 temp_v1_6;
    u16 temp_v1_8;
    u16 temp_v1_9;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a1_4;
    u8 *temp_a1_5;
    u8 *temp_a1_6;
    u8 *temp_a1_7;
    u8 temp_a2_3;
    u8 temp_a2_4;
    u8 temp_a2_7;
    u8 temp_t7_2;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_12;
    u8 temp_v0_13;
    u8 temp_v0_14;
    u8 temp_v0_15;
    u8 temp_v0_16;
    u8 temp_v0_17;
    u8 temp_v0_18;
    u8 temp_v0_22;
    u8 temp_v0_23;
    u8 temp_v0_24;
    u8 temp_v0_25;
    u8 temp_v0_26;
    u8 temp_v0_27;
    u8 temp_v0_28;
    u8 temp_v0_2;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 temp_v1_14;
    u8 temp_v1_15;
    u8 temp_v1_19;
    u8 temp_v1_21;
    u8 temp_v1_23;
    u8 temp_v1_25;
    u8 temp_v1_26;
    u8 temp_v1_28;
    u8 temp_v1_7;
    void *temp_t3_2;
    void *temp_t6_2;
    u16 phi_v1;
    s32 phi_a2;
    u8 phi_v1_2;
    u8 phi_v1_3;
    u8 phi_v1_4;
    u8 phi_v1_5;
    u8 phi_v1_6;
    u8 phi_a2_2;
    u8 *phi_a1;
    u8 phi_v1_7;
    s32 phi_v1_8;
    u8 phi_v1_9;
    u8 phi_v1_10;
    u8 phi_v1_11;
    s32 phi_v0;
    s32 phi_v1_12;
    s32 phi_v0_2;
    s32 phi_v1_13;
    s32 phi_a1_2;
    u8 phi_v1_14;
    s32 phi_v1_15;
    s32 phi_v1_16;
    s8 phi_t6;
    void *phi_at;

    sp84 = *arg1;
    temp_t8 = sp84;
    sp84 = temp_t8 + 8;
    temp_t8->words.w0 = 0xDB060008;
    temp_t8->words.w1 = arg0->interfaceCtx.parameterSegment;
    temp_t5 = sp84;
    sp84 = temp_t5 + 8;
    temp_s0 = arg0 + 0x4908;
    temp_t5->words.w0 = 0xDB06001C;
    temp_t5->words.w1 = temp_s0->unk11EF8;
    if (temp_s0->unk11F10 != 0) {
        if (temp_s0->unk12090 == 0) {
            func_80152C64(temp_s0);
            func_8012C680(&sp84);
            if (temp_s0->unk1202C != 0x37) {
                temp_v0 = temp_s0->unk11F22;
                if ((temp_v0 != 0x18) && (temp_v0 != 0x39) && (temp_v0 != 0x3C) && (temp_v0 != 0x3F) && (temp_v0 != 0x3A) && (temp_v0 != 0x3D) && (temp_v0 != 0x40) && ((((s32) temp_v0 >= 2) && ((s32) temp_v0 < 0x43)) || (((s32) temp_v0 >= 0x4A) && ((s32) temp_v0 < 0x50))) && ((&D_801CFC78)[temp_s0->unk11F0A] != 0xE)) {
                    func_8015268C(arg0, &sp84);
                }
            }
        }
        func_8012C680(&sp84);
        temp_t7 = sp84;
        sp84 = temp_t7 + 8;
        temp_t7->words.w1 = 0;
        temp_t7->words.w0 = 0xE2001E01;
        temp_t2 = sp84;
        sp84 = temp_t2 + 8;
        temp_t2->words.w0 = 0xFCFF97FF;
        temp_t2->words.w1 = 0xFF2DFEFF;
        temp_v1 = gGameInfo;
        temp_v0_2 = temp_s0->unk11F22;
        if (temp_v0_2 != temp_v1->data[576]) {
            temp_v1->data[576] = (s16) temp_v0_2;
            gGameInfo->data[577] = (s16) temp_s0->unk1202C;
        }
        switch (temp_s0->unk11F22) {                /* switch 1 */
        case 5:                                     /* switch 1 */
            phi_v1 = 0U;
            if (temp_s0->unk12023 == 1) {
                phi_a2 = 0;
                do {
                    sp82 = phi_v1;
                    sp78 = phi_a2;
                    Font_LoadChar(arg0, 0x8140U, phi_a2);
                    temp_v1_2 = (phi_v1 + 1) & 0xFFFF;
                    temp_a2 = phi_a2 + 0x80;
                    phi_v1 = (u16) temp_v1_2;
                    phi_a2 = temp_a2;
                } while (temp_v1_2 < 0x30);
                func_80153E7C(arg0, (void *) &sp84, temp_a2);
            } else {
                temp_t3 = sp84;
                sp84 = temp_t3 + 8;
                temp_t3->words.w1 = 0;
                temp_t3->words.w0 = 0xE7000000;
                temp_t6 = sp84;
                sp84 = temp_t6 + 8;
                temp_t6->words.w0 = 0xE200001C;
                temp_t6->words.w1 = 0x504340;
                temp_t2_2 = sp84;
                sp84 = temp_t2_2 + 8;
                temp_t2_2->words.w1 = 0;
                temp_t2_2->words.w0 = 0xFA000000;
                temp_t5_2 = sp84;
                sp84 = temp_t5_2 + 8;
                temp_t5_2->words.w1 = 0xFF;
                temp_t5_2->words.w0 = 0xFB000000;
            }
            break;
        case 6:                                     /* switch 1 */
        case 8:                                     /* switch 1 */
        case 9:                                     /* switch 1 */
            if ((gSaveContext.language == 0) && (temp_s0->unk12090 == 0)) {
                temp_v0_3 = temp_s0->unk12026;
                if (temp_v0_3 != 0) {
                    temp_s0->unk11FEE = (s16) (temp_s0->unk11FEE + temp_v0_3);
                }
                func_8015966C(arg0, &sp84, 0U);
                if (temp_s0->unk11F22 == 6) {
                    func_8015966C(arg0, &sp84, temp_s0->unk11FEE);
                }
            } else if (temp_s0->unk12090 != 0) {
                func_8015E7EC(arg0, (void *) &sp84);
            } else {
                temp_v0_4 = temp_s0->unk12026;
                if (temp_v0_4 != 0) {
                    temp_s0->unk11FEE = (s16) (temp_s0->unk11FEE + temp_v0_4);
                }
                func_8015966C(arg0, &sp84, 0U);
                if (temp_s0->unk11F22 == 6) {
                    func_8015966C(arg0, &sp84, temp_s0->unk11FEE);
                }
            }
            break;
        case 74:                                    /* switch 1 */
        case 75:                                    /* switch 1 */
        case 76:                                    /* switch 1 */
        case 77:                                    /* switch 1 */
        case 78:                                    /* switch 1 */
        case 79:                                    /* switch 1 */
            func_8015966C(arg0, &sp84, 0U);
            break;
        case 7:                                     /* switch 1 */
        case 65:                                    /* switch 1 */
            func_80153E7C(arg0, (void *) &sp84);
            func_80147818(arg0, &sp84, 0x9E, (s16) (*(&D_801D03A8 + (temp_s0->unk11F0A * 2)) + temp_s0->unk12006));
            break;
        case 10:                                    /* switch 1 */
        case 11:                                    /* switch 1 */
        case 12:                                    /* switch 1 */
        case 50:                                    /* switch 1 */
            func_8019C300(1U);
            temp_s0->unk11F00 = func_8019CF78();
            arg0->msgCtx.unk1202A = 1;
            temp_v1_3 = temp_s0->unk1202C;
            if ((temp_v1_3 != 0x41) && (temp_v1_3 != 0x42)) {
                temp_s0->unk11F00->unk2 = 0U;
                D_801C6A74 = 0;
                func_80147564(arg0);
            }
            D_801C6A90 = 1;
            D_801C6A8C = 3;
            temp_v0_5 = temp_s0->unk11F22;
            if (temp_v0_5 == 0xA) {
                temp_v1_4 = temp_s0->unk1202C;
                if ((temp_v1_4 == 0) || (temp_v1_4 == 1) || (temp_v1_4 == 0x35) || (temp_v1_4 == 0x38) || ((s32) temp_v1_4 >= 0x28)) {
                    if ((temp_v1_4 == 1) || (temp_v1_4 == 0x38)) {
                        if ((gSaveContext.weekEventReg[52] & 0x10) == 0) {
                            func_8019B544(temp_s0->unk120A0 | 0xC0000000, &gSaveContext, 1);
                        } else if ((gSaveContext.eventInf[3] & 2) != 0) {
                            temp_v0_6 = gSaveContext.playerForm;
                            if (temp_v0_6 == 4) {
                                phi_v1_2 = 0U;
                            } else {
                                phi_v1_2 = temp_v0_6;
                            }
                            func_8019C300(*(&D_801D03A4 + phi_v1_2), (s32) &gSaveContext, (GlobalContext *) 1);
                            func_8019B544(0x80800000);
                        } else {
                            func_8019B38C((temp_s0->unk120A0 + 0x80000) | 0xC0000000, &gSaveContext, 1);
                            temp_v0_7 = gSaveContext.playerForm;
                            if (temp_v0_7 == 4) {
                                phi_v1_3 = 0U;
                            } else {
                                phi_v1_3 = temp_v0_7;
                            }
                            func_8019C300(*(&D_801D03A4 + phi_v1_3));
                        }
                    } else {
                        func_8019B544(temp_s0->unk120A0, &gSaveContext, 1);
                    }
                } else {
                    func_8019B544((1 << temp_v1_4) | 0x80000000);
                }
                temp_s0->unk11F22 = 0xD;
                if ((gSaveContext.eventInf[2] & 0x10) != 0) {
                    func_8019C300(0xBU, (s32) &gSaveContext);
                } else if ((gSaveContext.weekEventReg[41] & 0x20) == 0) {
                    temp_v0_8 = gSaveContext.playerForm;
                    if (temp_v0_8 == 4) {
                        phi_v1_4 = 0U;
                    } else {
                        phi_v1_4 = temp_v0_8;
                    }
                    func_8019C300(*(&D_801D03A4 + phi_v1_4), (s32) &gSaveContext);
                    if (gSaveContext.playerForm == 4) {

                    } else {
                        goto block_72;
                    }
                } else {
                    func_8019C300(0x10U, (s32) &gSaveContext);
block_72:
                }
                goto block_94;
            }
            if (temp_v0_5 == 0xB) {
                temp_s0->unk12023 = 0x14;
                temp_s0->unk11F22 = 0x19;
            } else {
                if (temp_v0_5 == 0x32) {
                    temp_v0_9 = gSaveContext.playerForm;
                    if (temp_v0_9 == 4) {
                        phi_v1_5 = 0U;
                    } else {
                        phi_v1_5 = temp_v0_9;
                    }
                    func_8019C300(*(&D_801D03A4 + phi_v1_5));
                    func_8019B544(0x80800000);
                    temp_s0->unk11F22 = 0x33;
                } else {
                    if ((gSaveContext.eventInf[2] & 0x10) != 0) {
                        func_8019C300(0xBU);
                    } else {
                        temp_v0_10 = gSaveContext.playerForm;
                        if (temp_v0_10 == 4) {
                            phi_v1_6 = 0U;
                        } else {
                            phi_v1_6 = temp_v0_10;
                        }
                        func_8019C300(*(&D_801D03A4 + phi_v1_6));
                    }
                    temp_v1_5 = temp_s0->unk1202C;
                    if ((temp_v1_5 == 0x41) || (temp_v1_5 == 0x42)) {
                        func_8019B3D0((1 << (temp_v1_5 + 0x12)) | 0x80000000, 4);
                        temp_s0->unk11F22 = 0x1C;
                    } else {
                        if (((s32) temp_v1_5 >= 0x43) && ((s32) temp_v1_5 < 0x47)) {
                            func_8019B544((1 << (temp_v1_5 + 0xC)) | 0x80000000);
                        } else {
                            func_8019B544((1 << (temp_v1_5 + 0xE)) | 0x80000000);
                        }
                        temp_s0->unk11F22 = 0x1C;
                    }
                }
block_94:
            }
            temp_v1_6 = temp_s0->unk1202C;
            if (((s32) 1 != temp_v1_6) && (temp_v1_6 != 0x38)) {
                func_80153E7C(arg0, (void *) &sp84, (s32) 1);
            }
            break;
        case 13:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF78(&gGameInfo);
            temp_a1 = temp_s0->unk11F00;
            temp_v1_7 = temp_a1->unk2;
            phi_a1 = temp_a1;
            if (temp_v1_7 != 0) {
                phi_a2_2 = temp_v1_7;
                if ((temp_v1_7 == 1) && (D_801C6A74 == 8)) {
                    D_801C6A74 = 0;
                    phi_a2_2 = temp_s0->unk11F00->unk2;
                }
                phi_a1 = temp_s0->unk11F00;
                if (phi_a2_2 == (D_801C6A74 + 1)) {
                    temp_v0_11 = temp_s0->unk11F00->unk0;
                    (&D_801CFC98)[phi_a2_2].unk-1 = temp_v0_11;
                    temp_s0->unk12048 = temp_v0_11;
                    (&D_801CFC98)[temp_s0->unk11F00->unk2] = 0xFF;
                    D_801C6A74 += 1;
                    phi_a1 = temp_s0->unk11F00;
                }
            }
            temp_s0->unk12028 = (s16) phi_a1->unk1;
            temp_v0_12 = temp_s0->unk11F00->unk1;
            if ((s32) temp_v0_12 < 0x17) {
                if (temp_v0_12 == 0x13) {
                    func_8019C268();
                    func_8019B544(0x80100000);
                } else if (temp_v0_12 == 0x14) {
                    play_sound(0x4802U);
                    func_8019C2E4(0, 0x14);
                    func_801477B4(arg0);
                    arg0->msgCtx.unk1202A = 0x2A;
                } else if ((temp_v0_12 == 0x16) || (temp_v0_12 == 0xC) || (temp_v0_12 == 0xD) || (temp_v0_12 == 0xE) || (((gBitFlags + 0x18)[temp_v0_12] & gSaveContext.inventory.questItems) != 0)) {
                    D_801C6A7C = (s16) temp_v0_12;
                    temp_s0->unk1202E = (s16) temp_s0->unk11F00->unk1;
                    temp_s0->unk12028 = (s16) temp_s0->unk11F00->unk1;
                    temp_s0->unk11F22 = 0xE;
                    temp_s0->unk12023 = 0x14;
                    temp_v1_8 = temp_s0->unk1202C;
                    if (temp_v1_8 == 0x38) {
                        temp_v0_13 = temp_s0->unk11F00->unk1;
                        if (((s32) temp_v0_13 < 6) || (temp_v0_13 == 0x16)) {
                            func_8019C300(0U, (s32) phi_a1);
                            play_sound(0x4827U);
                            temp_s0->unk11F22 = 0xA;
                        } else {
                            func_80151938(arg0, 0x1B5BU);
                            temp_s0->unk11F22 = 0x12;
                            temp_s0->unk11F0A = 3;
                            temp_s0->unk12023 = 0xA;
                            play_sound(0x4807U);
                            Interface_ChangeAlpha(1U);
                        }
                    } else if (temp_v1_8 == 0x31) {
                        if ((s32) temp_s0->unk11F00->unk1 < 0xB) {
                            func_8019C300(0U, (s32) phi_a1);
                            play_sound(0x4827U);
                            temp_s0->unk12023 = 0xA;
                            temp_s0->unk11F22 = 0xF;
                        } else {
                            func_80151938(arg0, 0x1B5BU);
                            temp_s0->unk11F22 = 0x12;
                            temp_s0->unk11F0A = 3;
                            temp_s0->unk12023 = 0xA;
                            play_sound(0x4807U);
                            Interface_ChangeAlpha(1U);
                        }
                    } else if (temp_v1_8 == 1) {
                        func_80151938(arg0, 0x1B5BU);
                        temp_s0->unk11F22 = 0x12;
                        temp_s0->unk11F0A = 3;
                        temp_s0->unk12023 = 0xA;
                        play_sound(0x4807U);
                    } else {
                        play_sound(0x4807U);
                    }
                    Interface_ChangeAlpha(1U);
                } else {
                    func_8019C300(0U, (s32) phi_a1);
                    play_sound(0x4827U);
                    temp_s0->unk11F22 = 0xA;
                }
            } else if (temp_v0_12 == 0x17) {
                func_801477B4(arg0);
                arg0->msgCtx.unk1202A = 4;
                gSaveContext.eventInf[3] = gSaveContext.eventInf[3] | 4;
                play_sound(0x4802U);
                func_8019C2E4(0, 0x14);
            } else if (temp_v0_12 == 0xFF) {
                if ((gSaveContext.weekEventReg[52] & 0x10) == 0) {
                    func_8019C300(0U, (s32) phi_a1);
                    play_sound(0x4827U);
                    temp_s0->unk12023 = 0xA;
                    temp_s0->unk11F22 = 0xF;
                } else {
                    func_8019B378();
                    temp_v0_14 = gSaveContext.playerForm;
                    if (temp_v0_14 == 4) {
                        phi_v1_7 = 0U;
                    } else {
                        phi_v1_7 = temp_v0_14;
                    }
                    func_8019C300(*(&D_801D03A4 + phi_v1_7));
                    func_8019B38C((temp_s0->unk120A0 + 0x80000) | 0xC0000000);
                }
            }
            temp_v1_9 = temp_s0->unk1202C;
            if ((temp_v1_9 != 1) && (temp_v1_9 != 0x38)) {
                func_80153E7C(arg0, (void *) &sp84);
            }
            break;
        case 14:                                    /* switch 1 */
        case 29:                                    /* switch 1 */
        case 34:                                    /* switch 1 */
        case 45:                                    /* switch 1 */
        case 52:                                    /* switch 1 */
            func_80152FB8(&gGameInfo);
            temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
            if (temp_s0->unk12023 == 0) {
                func_8019C300(0U);
                temp_v0_15 = temp_s0->unk11F22;
                if (temp_v0_15 == 0xE) {
                    func_80151938(arg0, 0x1B5BU);
                    temp_s0->unk11F22 = 0x12;
                    temp_s0->unk11F0A = 3;
                    temp_s0->unk12023 = 1;
                } else if (temp_v0_15 == 0x1D) {
                    func_80151938(arg0, 0x1B5BU);
                    temp_s0->unk11F22 = 0x12;
                    temp_s0->unk11F0A = 3;
                    temp_s0->unk12023 = 1;
                } else if (temp_v0_15 == 0x22) {
                    temp_s0->unk11F22 = 0x23;
                    arg0->msgCtx.unk1202A = 3;
                    temp_s0->unk11F0A = 0;
                } else if (temp_v0_15 == 0x34) {
                    if (temp_s0->unk12028 == 0x17) {
                        func_801477B4(arg0);
                        arg0->msgCtx.unk1202A = 3;
                        play_sound(0x4802U);
                    } else {
                        func_801477B4(arg0);
                        arg0->msgCtx.unk1202A = 4;
                    }
                } else {
                    func_801477B4(arg0);
                    arg0->msgCtx.unk1202A = 3;
                }
            }
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 15:                                    /* switch 1 */
        case 30:                                    /* switch 1 */
            func_80153E7C(arg0, (void *) &sp84);
            /* fallthrough */
        case 16:                                    /* switch 1 */
            temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
            if (temp_s0->unk12023 == 0) {
                D_801C6A94 = 1;
                if (temp_s0->unk11F22 == 0x1E) {
                    func_80151938(arg0, 0x1B89U);
                    func_8014D7B4(arg0);
                    temp_s0->unk11F22 = 0x1F;
                } else {
                    temp_s0->unk11F22 = 0x11;
                }
            }
            break;
        case 17:                                    /* switch 1 */
        case 31:                                    /* switch 1 */
            phi_v1_8 = 0;
            do {
                temp_t6_2 = temp_s0 + (phi_v1_8 * 2);
                temp_v1_10 = (phi_v1_8 + 1) & 0xFFFF;
                temp_t6_2->unk1204A = (s16) (temp_t6_2->unk1204A + D_801C6A94);
                phi_v1_8 = temp_v1_10;
            } while (temp_v1_10 < 5);
            D_801C6A94 *= 2;
            if ((s32) D_801C6A94 >= 0x226) {
                func_80147520(&D_801C6A94);
                if (temp_s0->unk11F22 == 0x1F) {
                    temp_s0->unk11F22 = 0x20;
                    temp_s0->unk12023 = 0xA;
                } else {
                    temp_s0->unk11F22 = 0xA;
                }
                func_8019C300(0U);
            }
            break;
        case 18:                                    /* switch 1 */
            temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
            if (temp_s0->unk12023 == 0) {
                func_8019C300(0U);
                func_8014D7B4(arg0);
                temp_s0->unk11F22 = 0x13;
                temp_s0->unk11F00 = func_8019CF78();
                temp_s0->unk11F00->unk2 = 0U;
                D_801C6A74 = 0;
                func_80147564(arg0);
                func_80152EC0(arg0);
            }
            break;
        case 19:                                    /* switch 1 */
            func_80153E7C(arg0, (void *) &sp84);
            func_8019C300(1U);
            temp_v1_11 = temp_s0->unk1202C;
            if (((s32) temp_v1_11 >= 0x43) && ((s32) temp_v1_11 < 0x47)) {
                temp_v0_16 = gSaveContext.playerForm;
                if (temp_v0_16 == 4) {
                    phi_v1_9 = 0U;
                } else {
                    phi_v1_9 = temp_v0_16;
                }
                func_8019C300(*(&D_801D03A4 + phi_v1_9));
                func_8019C398((s8) (temp_s0->unk1202C - 0x33), 1);
            } else {
                temp_v0_17 = gSaveContext.playerForm;
                if (temp_v0_17 == 4) {
                    phi_v1_10 = 0U;
                } else {
                    phi_v1_10 = temp_v0_17;
                }
                func_8019C300(*(&D_801D03A4 + phi_v1_10));
                func_8019C398((s8) (temp_s0->unk12029 + 1), 1);
                temp_a2_2 = temp_s0->unk12028;
                if (temp_a2_2 != 0x16) {
                    temp_v0_18 = gSaveContext.playerForm;
                    if (temp_v0_18 == 4) {
                        phi_v1_11 = 0U;
                    } else {
                        phi_v1_11 = temp_v0_18;
                    }
                    func_801A3000(*(&D_801D0378 + (temp_a2_2 * 2)), (u8) D_801D039C[phi_v1_11], temp_a2_2);
                    func_801A5BD0(0x20);
                }
            }
            arg0->msgCtx.unk1202A = 1;
            if (temp_s0->unk1202C == 1) {
                temp_s0->unk1202C = 0x32;
            }
            if (temp_s0->unk1202C == 0x38) {
                temp_s0->unk1202C = 0x39;
            }
            D_801C6A74 = 0;
            temp_s0->unk11F22 = 0x14;
            break;
        case 21:                                    /* switch 1 */
            temp_v0_19 = temp_s0->unk12028;
            if (temp_v0_19 == 0x16) {
                func_80151938(arg0, 0x1B6BU);
            } else {
                func_80151938(arg0, (temp_v0_19 + 0x1B72) & 0xFFFF);
            }
            func_8014D7B4(arg0);
            temp_s0->unk11F22 = 0x16;
            temp_s0->unk12023 = 0x14;
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 22:                                    /* switch 1 */
            temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
            if (temp_s0->unk12023 == 0) {
                temp_s0->unk11F22 = 0x17;
            }
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 23:                                    /* switch 1 */
            func_8019C300(0U);
            func_80147564(arg0);
            temp_s0->unk11F22 = 0x18;
            temp_s0->unk12023 = 2;
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 24:                                    /* switch 1 */
            temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
            if (temp_s0->unk12023 == 0) {
                func_801477B4(arg0);
                if (temp_s0->unk12028 == 8) {
                    D_801BDAA4 = 1;
                }
                temp_v1_12 = temp_s0->unk1202C;
                if (temp_v1_12 == 0x32) {
                    if (D_801C6A7C == 3) {
                        temp_v0_20 = arg0->sceneNum;
                        if ((temp_v0_20 == 0x58) || (temp_v0_20 == 0x59) || (temp_v0_20 == 0x53) || (temp_v0_20 == 0x1D) || (temp_v0_20 == 0x56) || (temp_v0_20 == 0x13) || (temp_v0_20 == 0x16) || (temp_v0_20 == 0x18) || (temp_v0_20 == 0x36) || (temp_v0_20 == 0x60) || (temp_v0_20 == 0x4B) || (temp_v0_20 == 0x51)) {
                            arg0->msgCtx.unk1202A = 3;
                        } else {
                            D_801C6A7C = 0xFF;
                            func_801518B0(arg0, 0x1B95U, NULL);
                            arg0->msgCtx.unk1202A = 0x27;
                        }
                    } else {
                        arg0->msgCtx.unk1202A = 3;
                        if (temp_s0->unk12028 == 0x16) {
                            arg0->msgCtx.unk1202A = 0xD;
                        }
                    }
                } else {
                    temp_v0_21 = temp_s0->unk12028;
                    if ((s32) temp_v1_12 >= 0x22) {
                        if (temp_v1_12 == (temp_v0_21 + 0x22)) {
                            arg0->msgCtx.unk1202A = 3;
                        } else {
                            arg0->msgCtx.unk1202A = temp_v0_21 - 1;
                        }
                    } else if (temp_v1_12 == (temp_v0_21 + 0x12)) {
                        arg0->msgCtx.unk1202A = 3;
                    } else {
                        arg0->msgCtx.unk1202A = 4;
                    }
                }
            }
            break;
        case 25:                                    /* switch 1 */
            temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
            if (temp_s0->unk12023 == 0) {
                func_80152CAC(arg0);
                D_801C6A74 = 0;
                temp_s0->unk11F22 = 0x1A;
            }
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 20:                                    /* switch 1 */
        case 26:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF9C(&gGameInfo);
            temp_a1_2 = temp_s0->unk11F00;
            if (temp_a1_2->unk1 == 0) {
                temp_v1_13 = temp_s0->unk1202C;
                if ((temp_v1_13 == 0x3F) || (temp_v1_13 == 0x40)) {
                    func_8019C300(0U, (s32) temp_a1_2);
                }
                if (((s32) temp_s0->unk1202C >= 0x43) && ((s32) temp_s0->unk1202C < 0x47)) {
                    func_8019C300(0U);
                    func_801477B4(arg0);
                    arg0->msgCtx.unk1202A = 4;
                } else if (temp_s0->unk11F22 == 0x14) {
                    temp_s0->unk11F22 = 0x15;
                } else {
                    temp_s0->unk11F22 = 0x1B;
                }
            } else {
                if ((D_801C6A74 != 0) && (temp_a1_2->unk2 == 1)) {
                    D_801C6A74 = 0;
                }
                temp_v1_14 = temp_s0->unk11F00->unk2;
                if ((temp_v1_14 != 0) && (temp_v1_14 == (D_801C6A74 + 1))) {
                    temp_v0_22 = temp_s0->unk11F00->unk0;
                    (&D_801CFC98)[temp_v1_14].unk-1 = temp_v0_22;
                    temp_s0->unk12048 = temp_v0_22;
                    (&D_801CFC98)[temp_s0->unk11F00->unk2] = 0xFF;
                    D_801C6A74 += 1;
                }
            }
            /* fallthrough */
        case 27:                                    /* switch 1 */
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 28:                                    /* switch 1 */
        case 51:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF78(&gGameInfo);
            temp_a1_3 = temp_s0->unk11F00;
            temp_v1_15 = temp_a1_3->unk2;
            if ((temp_v1_15 != 0) && (temp_v1_15 == (D_801C6A74 + 1))) {
                temp_v0_23 = temp_a1_3->unk0;
                (&D_801CFC98)[temp_v1_15].unk-1 = temp_v0_23;
                temp_s0->unk12048 = temp_v0_23;
                (&D_801CFC98)[temp_s0->unk11F00->unk2] = 0xFF;
                D_801C6A74 += 1;
            }
            temp_a2_3 = temp_s0->unk11F00->unk1;
            if ((s32) temp_a2_3 < 0x17) {
                temp_v1_16 = temp_s0->unk1202C;
                if ((temp_v1_16 == 0x41) || (temp_v1_16 == 0x42)) {
                    temp_s0->unk12028 = (s16) temp_a2_3;
                    temp_s0->unk11F22 = 0x22;
                } else {
                    temp_s0->unk12028 = (s16) temp_a2_3;
                    temp_s0->unk11F22 = 0x1D;
                    temp_a2_4 = temp_s0->unk11F00->unk1;
                    if (temp_a2_4 == 0xE) {
                        Item_Give(arg0, 0x73U);
                    } else {
                        temp_v1_17 = temp_s0->unk1202C;
                        if ((((s32) temp_v1_17 < 0x43) || ((s32) temp_v1_17 >= 0x47)) && (temp_a2_4 != 2)) {
                            Item_Give(arg0, (*(&D_801CFCB8 + (temp_a2_4 * 2)) + 0x61) & 0xFF);
                        }
                    }
                }
                temp_s0->unk12023 = 0x14;
                play_sound(0x4807U);
            } else if (temp_a2_3 == 0x17) {
                temp_s0->unk12028 = (s16) temp_a2_3;
                temp_s0->unk11F22 = 0x34;
                Item_Give(arg0, (*(&D_801CFCB8 + (temp_s0->unk11F00->unk1 * 2)) + 0x61) & 0xFF);
                temp_s0->unk12023 = 0x14;
                func_8019C2E4(0, 0x14);
                play_sound(0x4807U);
            } else if (temp_a2_3 == 0xFF) {
                play_sound(0x4827U);
                temp_s0->unk12023 = 0xA;
                if (temp_s0->unk11F22 == 0x1C) {
                    temp_s0->unk11F22 = 0x1E;
                } else {
                    func_8019C300(0U);
                    arg0->msgCtx.unk1202A = 4;
                    func_801477B4(arg0);
                }
            }
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 32:                                    /* switch 1 */
            func_80153E7C(arg0, (void *) &sp84);
            temp_v1_18 = temp_s0->unk1202C;
            if ((temp_v1_18 == 0x41) || (temp_v1_18 == 0x42)) {
                temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
                if (temp_s0->unk12023 == 0) {
                    temp_s0->unk11F22 = 0x21;
                    temp_s0->unk11F0A = 0;
                }
            }
            break;
        case 39:                                    /* switch 1 */
            func_8019CD08(1);
            func_8019C300(1U);
            temp_s0->unk11F00 = func_8019CF6C();
            temp_s0->unk11F00->unk2 = 0U;
            D_801C6A74 = 0;
            D_801C6A78 = 0;
            func_80147564(arg0);
            temp_s0->unk11F22 = 0x28;
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 40:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF6C((u32) &gGameInfo);
            temp_v1_19 = temp_s0->unk11F00->unk2;
            if ((temp_v1_19 != 0) && (temp_v1_19 == (D_801C6A74 + 1))) {
                temp_a2_5 = D_801C6A78;
                if ((s32) temp_a2_5 >= 8) {
                    phi_v0 = (temp_a2_5 - 8) & 0xFFFF;
                    phi_v1_12 = 0;
                    do {
                        temp_v1_20 = (phi_v1_12 + 1) & 0xFFFF;
                        (&D_801CFC98)[phi_v0].unk0 = (&D_801CFC98)[phi_v0].unk1;
                        phi_v0 = (phi_v0 + 1) & 0xFFFF;
                        phi_v1_12 = temp_v1_20;
                    } while (temp_v1_20 < 8);
                    D_801C6A78 = temp_a2_5 - 1;
                }
                temp_v0_24 = temp_s0->unk11F00->unk0;
                (&D_801CFC98)[D_801C6A78] = temp_v0_24;
                temp_s0->unk12048 = temp_v0_24;
                D_801C6A78 += 1;
                (&D_801CFC98)[D_801C6A78] = 0xFF;
                D_801C6A74 += 1;
                if (temp_s0->unk11F00->unk2 == 8) {
                    D_801C6A74 = 0;
                }
            }
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 41:                                    /* switch 1 */
        case 46:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF9C(&gGameInfo);
            temp_a1_4 = temp_s0->unk11F00;
            temp_v1_21 = temp_a1_4->unk2;
            phi_a1_2 = (s32) temp_a1_4;
            if (temp_v1_21 != 0) {
                temp_a3 = D_801C6A74;
                if (temp_v1_21 == (temp_a3 + 1)) {
                    temp_a2_6 = D_801C6A78;
                    if ((s32) temp_a2_6 >= 8) {
                        phi_v0_2 = (temp_a2_6 - 8) & 0xFFFF;
                        phi_v1_13 = 0;
                        do {
                            temp_v1_22 = (phi_v1_13 + 1) & 0xFFFF;
                            (&D_801CFC98)[phi_v0_2].unk0 = (&D_801CFC98)[phi_v0_2].unk1;
                            phi_v0_2 = (phi_v0_2 + 1) & 0xFFFF;
                            phi_v1_13 = temp_v1_22;
                        } while (temp_v1_22 < 8);
                        D_801C6A78 = temp_a2_6 - 1;
                    }
                    (&D_801CFC98)[D_801C6A78] = temp_s0->unk11F00->unk0;
                    D_801C6A78 += 1;
                    (&D_801CFC98)[D_801C6A78] = 0xFF;
                    D_801C6A74 = temp_a3 + 1;
                    phi_a1_2 = (s32) temp_s0->unk11F00;
                    if (temp_s0->unk11F00->unk2 == 8) {
                        D_801C6A74 = 0;
                        D_801C6A78 = D_801C6A74;
                    }
                }
            }
            temp_v0_25 = temp_s0->unk12023;
            if (temp_v0_25 == 0) {
                if (temp_s0->unk11F00->unk1 == 0) {
                    func_8019C300(0U, phi_a1_2);
                    arg0->msgCtx.unk1202A = 0x11;
                    func_801477B4(arg0);
                }
            } else {
                temp_s0->unk12023 = (s8) (temp_v0_25 - 1);
            }
            break;
        case 42:                                    /* switch 1 */
            func_8019CD08(2);
            temp_v0_26 = gSaveContext.playerForm;
            if (temp_v0_26 == 4) {
                phi_v1_14 = 0U;
            } else {
                phi_v1_14 = temp_v0_26;
            }
            func_8019C300(*(&D_801D03A4 + phi_v1_14));
            temp_s0->unk11F22 = 0x2B;
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 43:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF6C((u32) &gGameInfo);
            temp_a1_5 = temp_s0->unk11F00;
            temp_v1_23 = temp_a1_5->unk2;
            if (temp_v1_23 != 0) {
                temp_a3_2 = D_801C6A74;
                if (temp_v1_23 == (temp_a3_2 + 1)) {
                    temp_v0_27 = temp_a1_5->unk0;
                    (&D_801CFC98)[temp_a3_2] = temp_v0_27;
                    temp_s0->unk12048 = temp_v0_27;
                    D_801C6A74 += 1;
                    (&D_801CFC98)[D_801C6A74] = 0xFF;
                }
            }
            temp_v0_28 = temp_s0->unk11F00->unk1;
            if (temp_v0_28 == 0) {
                temp_s0->unk12023 = 0x14;
                gSaveContext.unk_F65 = 1;
                temp_s0->unk11F22 = 0x2D;
                play_sound(0x4807U);
                Lib_MemCpy((void *) gSaveContext.unk_F66, D_801D88A0, 0x80U);
                phi_v1_15 = 0;
                do {
                    temp_v1_24 = (phi_v1_15 + 1) & 0xFFFF;
                    phi_v1_15 = temp_v1_24;
                } while (temp_v1_24 < 0x80);
            } else if (temp_v0_28 == 0xFF) {
                func_8019CD08(0, temp_s0->unk11F00);
                play_sound(0x4827U);
                func_801477B4(arg0);
                temp_s0->unk11F22 = 0x2C;
            }
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 44:                                    /* switch 1 */
            func_8019C300(0U);
            func_801518B0(arg0, 0x1647U, NULL);
            arg0->msgCtx.unk1202A = 4;
            break;
        case 47:                                    /* switch 1 */
            func_8019C300(1U);
            temp_s0->unk11F00 = func_8019CF78();
            temp_s0->unk11F00->unk2 = 0U;
            D_801C6A74 = 0;
            arg0->msgCtx.unk1202A = 1;
            func_80147564(arg0);
            func_8019B544(temp_s0->unk120A0 | 0xC0000000);
            temp_s0->unk11F22 = 0x30;
            break;
        case 48:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF78(&gGameInfo);
            temp_a1_6 = temp_s0->unk11F00;
            temp_v1_25 = temp_a1_6->unk2;
            if ((temp_v1_25 != 0) && (temp_v1_25 == (D_801C6A74 + 1))) {
                temp_s0->unk12048 = (u8) temp_a1_6->unk0;
                temp_s0->unk11F00->unk2 = 0U;
                D_801C6A74 = 0;
                func_80147564(arg0);
                temp_s0->unk11F22 = 0x31;
            }
            break;
        case 53:                                    /* switch 1 */
            func_8019C300(1U);
            func_8019C300(1U);
            temp_s0->unk11F00 = func_8019CF78();
            temp_s0->unk11F00->unk2 = 0U;
            D_801C6A74 = 0;
            arg0->msgCtx.unk1202A = 1;
            func_80147564(arg0);
            D_801C6A90 = 1;
            D_801C6A8C = 3;
            func_8019B4B8((1 << ((temp_s0->unk1202C - 0x47) & 0xFFFF)) | 0x80000000);
            temp_s0->unk11F22 = 0x36;
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 54:                                    /* switch 1 */
            temp_s0->unk11F00 = func_8019CF78(&gGameInfo);
            temp_a1_7 = temp_s0->unk11F00;
            temp_v1_26 = temp_a1_7->unk2;
            if (temp_v1_26 != 0) {
                temp_a3_3 = D_801C6A74;
                if (temp_v1_26 == (temp_a3_3 + 1)) {
                    (&D_801CFC98)[temp_v1_26].unk-1 = (u8) temp_a1_7->unk0;
                    (&D_801CFC98)[temp_s0->unk11F00->unk2] = 0xFF;
                    D_801C6A74 = temp_a3_3 + 1;
                }
            }
            temp_a2_7 = temp_s0->unk11F00->unk1;
            if ((s32) temp_a2_7 < 0x17) {
                temp_s0->unk12028 = (s16) temp_a2_7;
                temp_s0->unk11F22 = 0x37;
                Item_Give(arg0, (*(&D_801CFCB8 + (temp_s0->unk11F00->unk1 * 2)) + 0x61) & 0xFF);
                temp_s0->unk12023 = 0x14;
                play_sound(0x4807U);
            } else if (temp_a2_7 == 0xFF) {
                temp_v0_29 = func_8019B5AC();
                if (temp_v0_29 == 2) {
                    play_sound(0x4827U);
                    D_801C6A94 = 1;
                    temp_s0->unk11F22 = 0x3B;
                } else if ((temp_v0_29 & 0xFF) == 3) {
                    play_sound(0x4827U);
                    D_801C6A94 = 1;
                    temp_s0->unk11F22 = 0x3E;
                } else {
                    play_sound(0x4827U);
                    D_801C6A94 = 1;
                    temp_s0->unk11F22 = 0x38;
                }
            }
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 55:                                    /* switch 1 */
            func_80152FB8(&gGameInfo);
            func_80153E7C(arg0, (void *) &sp84);
            break;
        case 56:                                    /* switch 1 */
        case 59:                                    /* switch 1 */
        case 62:                                    /* switch 1 */
            phi_v1_16 = 0;
            do {
                temp_t3_2 = temp_s0 + (phi_v1_16 * 2);
                temp_v1_27 = (phi_v1_16 + 1) & 0xFFFF;
                temp_t3_2->unk1204A = (s16) (temp_t3_2->unk1204A + D_801C6A94);
                phi_v1_16 = temp_v1_27;
            } while (temp_v1_27 < 5);
            D_801C6A94 *= 2;
            if ((s32) D_801C6A94 >= 0x226) {
                func_80147520(&D_801C6A94);
                temp_s0->unk11F0A = 0;
                temp_s0->unk12038 = 0;
                temp_v0_30 = temp_s0->unk12038;
                temp_s0->unk12036 = temp_v0_30;
                temp_s0->unk12034 = temp_v0_30;
                temp_s0->unk12023 = 3;
                temp_s0->unk11F22 = (s8) (temp_s0->unk11F22 + 1);
            }
            break;
        case 57:                                    /* switch 1 */
        case 60:                                    /* switch 1 */
        case 63:                                    /* switch 1 */
            temp_s0->unk12023 = (s8) (temp_s0->unk12023 - 1);
            if (temp_s0->unk12023 == 0) {
                phi_t6 = temp_s0->unk11F22 + 1;
                phi_at = temp_s0 + 0x10000;
block_351:
                phi_at->unk1F22 = phi_t6;
            }
            break;
        case 66:                                    /* switch 1 */
            temp_t7_2 = temp_s0->unk12020;
            switch (temp_t7_2) {                    /* switch 2 */
            case 96:                                /* switch 2 */
                temp_v0_31 = temp_s0->unk120BE;
                func_80147F18(arg0, &sp84, (s16) (((temp_s0 + (temp_v0_31 * 2))->unk11F1A + (s32) (16.0f * temp_s0->unk12098 * (f32) (temp_s0->unk120C2 + 5))) - 1), (s16) (temp_s0->unk11FFA + (temp_s0->unk11FFC * temp_v0_31)));
                func_80148D64(arg0);
                break;
            case 97:                                /* switch 2 */
                temp_v0_32 = temp_s0->unk120BE;
                func_80148558(arg0, &sp84, (s16) (((temp_s0 + (temp_v0_32 * 2))->unk11F1A + (s32) (16.0f * temp_s0->unk12098 * 5.0f)) - 1), (s16) (temp_s0->unk11FFA + (temp_s0->unk11FFC * temp_v0_32)));
                func_80149048(arg0);
                break;
            case 98:                                /* switch 2 */
                temp_v0_33 = temp_s0->unk120BE;
                func_80147F18(arg0, &sp84, (s16) (((temp_s0 + (temp_v0_33 * 2))->unk11F1A + (s32) (16.0f * temp_s0->unk12098 * (f32) (temp_s0->unk120C2 + 5))) - 1), (s16) (temp_s0->unk11FFA + (temp_s0->unk11FFC * temp_v0_33)));
                func_801491DC(arg0);
                break;
            case 99:                                /* switch 2 */
                temp_v0_34 = temp_s0->unk120BE;
                func_80147F18(arg0, &sp84, (s16) (((temp_s0 + (temp_v0_34 * 2))->unk11F1A + (s32) (16.0f * temp_s0->unk12098 * (f32) (temp_s0->unk120C2 + 5))) - 1), (s16) (temp_s0->unk11FFA + (temp_s0->unk11FFC * temp_v0_34)));
                func_80149454(arg0);
                break;
            case 100:                               /* switch 2 */
                temp_v0_35 = temp_s0->unk120BE;
                func_80147F18(arg0, &sp84, (s16) (((temp_s0 + (temp_v0_35 * 2))->unk11F1A + (s32) (16.0f * temp_s0->unk12098 * (f32) (temp_s0->unk120C2 + 4))) - 6), (s16) (temp_s0->unk11FFA + (temp_s0->unk11FFC * temp_v0_35)));
                func_801496C8(arg0);
                break;
            }
            temp_t5_3 = sp84;
            sp84 = temp_t5_3 + 8;
            temp_t5_3->words.w1 = 0;
            temp_t5_3->words.w0 = 0xE7000000;
            temp_t9 = sp84;
            sp84 = temp_t9 + 8;
            temp_t9->words.w0 = 0xFCFF97FF;
            temp_t9->words.w1 = 0xFF2DFEFF;
            temp_t7_3 = sp84;
            sp84 = temp_t7_3 + 8;
            temp_t7_3->words.w1 = 0xFF;
            temp_t7_3->words.w0 = 0xFB000000;
            func_80153E7C(arg0, (void *) &sp84);
            temp_v1_28 = temp_s0->unk12020;
            if ((s32) temp_v1_28 >= 0x12) {
                if ((s32) temp_v1_28 >= 0x13) {
                    switch (temp_v1_28) {           /* switch 3 */
                    case 66:                        /* switch 3 */
                        func_80147818(arg0, &sp84, 0x9E, (s16) (*(&D_801D03A8 + (temp_s0->unk11F0A * 2)) + temp_s0->unk12006));
                        break;
                    }
                } else {
                    if (temp_v1_28 != 0x12) {
                        goto block_347;
                    }
                    func_80148CBC(arg0, (GlobalContext *) &sp84, 1);
                }
            } else if (temp_v1_28 != 0x10) {
                if (temp_v1_28 != 0x11) {
                default:                            /* switch 3 */
block_347:
                    func_80147818(arg0, &sp84, 0x9E, (s16) (*(&D_801D03A8 + (temp_s0->unk11F0A * 2)) + temp_s0->unk12006));
                } else {
                    func_80148CBC(arg0, (GlobalContext *) &sp84, 2);
                }
            } else {
                func_80148CBC(arg0, (GlobalContext *) &sp84, 1);
            }
            break;
        case 69:                                    /* switch 1 */
        case 70:                                    /* switch 1 */
        case 71:                                    /* switch 1 */
        case 72:                                    /* switch 1 */
        case 73:                                    /* switch 1 */
            func_80153EF0(arg0, &sp84);
            break;
        default:                                    /* switch 1 */
            phi_t6 = 6;
            phi_at = temp_s0 + 0x10000;
            goto block_351;
        }
    }
    func_80153750(arg0, &sp84);
    *arg1 = sp84;
}

void func_80156758(GlobalContext *arg0) {
    Gfx *sp3C;
    Gfx *sp38;
    Gfx *temp_a0;
    Gfx *temp_t1;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = arg0->state.gfxCtx;
    temp_a0 = temp_s0->polyOpa.p;
    sp38 = temp_a0;
    sp3C = Graph_GfxPlusOne(temp_a0);
    temp_v1 = temp_s0->overlay.p;
    temp_s0->overlay.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = sp3C;
    if ((arg0->msgCtx.unk11F04 != 0x5E6) || (func_801690CC(arg0) == 0)) {
        func_801541D4(arg0, &sp3C);
    }
    temp_t1 = sp3C;
    sp3C = temp_t1 + 8;
    temp_t1->words.w1 = 0;
    temp_t1->words.w0 = 0xDF000000;
    Graph_BranchDlist(sp38, sp3C);
    temp_s0->polyOpa.p = sp3C;
}

void func_8015680C(GlobalContext *globalCtx) {
    s16 sp50;
    s16 sp4C;
    s16 sp4A;
    s32 sp44;
    s32 sp40;
    u16 sp3E;
    MessageContext *sp30;
    PauseContext *sp2C;
    void *sp28;
    void *sp20;
    Input *temp_v1_5;
    MessageContext *temp_t5;
    MessageContext *temp_t5_2;
    PauseContext *temp_v0_16;
    PauseContext *temp_v0_20;
    SramContext *temp_a0_5;
    SramContext *temp_a0_6;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_22;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_v0_21;
    s32 temp_v0_25;
    s32 temp_v0_26;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_10;
    s32 temp_v1_7;
    s32 temp_v1_9;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_t7;
    u16 temp_v0_13;
    u16 temp_v0_14;
    u16 temp_v0_15;
    u16 temp_v0_17;
    u16 temp_v0_18;
    u16 temp_v0_19;
    u16 temp_v0_23;
    u16 temp_v0_24;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_6;
    u16 temp_v1_8;
    u8 temp_a0_2;
    u8 temp_t8;
    u8 temp_t9;
    u8 temp_v0_12;
    u8 temp_v1;
    u8 temp_v1_4;
    void *temp_t0;
    void *phi_ra;
    s32 phi_v1;
    s32 phi_a1;
    s16 phi_t8;
    void *phi_at;
    s32 phi_v0;
    s32 phi_t0;
    s16 *phi_a3;
    u8 phi_v1_2;
    void *phi_t0_2;
    void *phi_ra_2;
    MessageContext *phi_t5;
    s16 *phi_a3_2;
    void *phi_ra_3;

    globalCtx->msgCtx.unk120A4 = (s16) globalCtx->state.input[0].rel.stick_x;
    temp_t0 = globalCtx + 0x10000;
    globalCtx->msgCtx.unk120A6 = (s16) globalCtx->state.input[0].rel.stick_y;
    temp_t5 = &globalCtx->msgCtx;
    phi_ra = temp_t5 + 0x10000;
    phi_a1 = 0;
    phi_t0_2 = temp_t0;
    phi_t0_2 = temp_t0;
    if ((s32) globalCtx->msgCtx.unk120A4 < -0x1E) {
        temp_t5_2 = &globalCtx->msgCtx;
        phi_ra = temp_t5_2 + 0x10000;
        if (temp_t5_2->unk120A8 == -1) {
            temp_t5_2->unk120AC += -1;
            if ((s32) temp_t5_2->unk120AC < 0) {
                temp_t5_2->unk120AC = 2;
            } else {
                temp_t5_2->unk120A4 = 0;
            }
        } else {
            temp_t5_2->unk120AC = 0xA;
            temp_t5_2->unk120A8 = -1;
        }
    } else if ((s32) temp_t5->unk120A4 >= 0x1F) {
        if (temp_t5->unk120A8 == 1) {
            temp_t5->unk120AC += -1;
            if ((s32) temp_t5->unk120AC < 0) {
                temp_t5->unk120AC = 2;
            } else {
                temp_t5->unk120A4 = 0;
            }
        } else {
            temp_t5->unk120AC = 0xA;
            temp_t5->unk120A8 = 1;
        }
    } else {
        temp_t5->unk120A8 = 0;
    }
    temp_v0 = phi_ra->unk20A6;
    phi_ra_2 = phi_ra;
    phi_t5 = &globalCtx->msgCtx;
    phi_ra_3 = phi_ra;
    phi_t5 = &globalCtx->msgCtx;
    if ((s32) temp_v0 < -0x1E) {
        if (phi_ra->unk20AA == -1) {
            globalCtx->msgCtx.unk120AE = phi_ra->unk20AE - 1;
            if ((s32) phi_ra->unk20AE < 0) {
                globalCtx->msgCtx.unk120AE = 2;
            } else {
                globalCtx->msgCtx.unk120A6 = 0;
            }
        } else {
            globalCtx->msgCtx.unk120AE = 0xA;
            globalCtx->msgCtx.unk120AA = -1;
        }
    } else if ((s32) temp_v0 >= 0x1F) {
        if (phi_ra->unk20AA == 1) {
            globalCtx->msgCtx.unk120AE = phi_ra->unk20AE - 1;
            if ((s32) phi_ra->unk20AE < 0) {
                globalCtx->msgCtx.unk120AE = 2;
            } else {
                globalCtx->msgCtx.unk120A6 = 0;
            }
        } else {
            globalCtx->msgCtx.unk120AE = 0xA;
            globalCtx->msgCtx.unk120AA = 1;
        }
    } else {
        globalCtx->msgCtx.unk120AA = 0;
    }
    if (phi_ra->unk1F10 != 0) {
        temp_t9 = phi_ra->unk1F22;
        switch (temp_t9) {
        case 1:
            temp_t8 = D_801C6A70 + 1;
            temp_a0 = temp_t8 & 0xFF;
            D_801C6A70 = temp_t8;
            phi_v1 = 0;
            if ((temp_a0 >= 4) || ((phi_ra->unk2040 == 0) && (temp_a0 >= 2))) {
                phi_v1 = 1;
            }
            if (phi_v1 != 0) {
                if (phi_ra->unk2040 != 0) {
                    sp20 = phi_ra;
                    sp30 = &globalCtx->msgCtx;
                    func_800B8898(globalCtx, globalCtx->actorCtx.actorList[2].first, &sp50, &sp4C);
                    func_800B8898(globalCtx, phi_ra->unk2040, &sp50, &sp4A);
                    if ((s32) sp4C >= (s32) sp4A) {
                        phi_a1 = (s32) (s16) (((s32) (sp4C - sp4A) / 2) + sp4A);
                    } else {
                        phi_a1 = (s32) (s16) (((s32) (sp4A - sp4C) / 2) + sp4C);
                    }
                } else {
                    globalCtx->msgCtx.unk12068 = phi_ra->unk2004;
                    globalCtx->msgCtx.unk1206A = phi_ra->unk2006;
                }
                temp_a0_2 = phi_ra->unk1F0B;
                temp_v1 = phi_ra->unk1F0A;
                if (temp_a0_2 == 0) {
                    temp_v0_2 = globalCtx->sceneNum;
                    if ((temp_v0_2 == 4) || (temp_v0_2 == 5) || (temp_v0_2 == 6)) {
                        if (phi_a1 < 0x64) {
                            temp_v0_5 = temp_v1 * 2;
                            globalCtx->msgCtx.unk12006 = *(&D_801D03E8 + temp_v0_5);
                            phi_v0 = temp_v0_5;
                            phi_t0 = 5;
                        } else {
                            temp_v0_6 = temp_v1 * 2;
                            globalCtx->msgCtx.unk12006 = *(&D_801D0408 + temp_v0_6);
                            phi_v0 = temp_v0_6;
                            phi_t0 = 5;
                        }
                    } else {
                        temp_v0_3 = temp_v1 * 2;
                        phi_v0 = temp_v0_3;
                        if (phi_a1 < 0xA0) {
                            temp_v0_4 = temp_v1 * 2;
                            globalCtx->msgCtx.unk12006 = *(&D_801D03E8 + temp_v0_4);
                            phi_v0 = temp_v0_4;
                            phi_t0 = 5;
                        } else {
                            phi_t8 = *(&D_801D0408 + temp_v0_3);
                            phi_at = &globalCtx->msgCtx + 0x10000;
                            goto block_56;
                        }
                    }
                } else if (temp_a0_2 == 1) {
                    temp_v0_7 = temp_v1 * 2;
                    globalCtx->msgCtx.unk12006 = *(&D_801D0408 + temp_v0_7);
                    phi_v0 = temp_v0_7;
                    phi_t0 = 5;
                } else if (temp_a0_2 == 2) {
                    temp_v0_8 = temp_v1 * 2;
                    globalCtx->msgCtx.unk12006 = *(&D_801D0428 + temp_v0_8);
                    phi_v0 = temp_v0_8;
                    phi_t0 = 5;
                } else if (temp_a0_2 == 7) {
                    globalCtx->msgCtx.unk12006 = 0x9E;
                    phi_v0 = temp_v1 * 2;
                    phi_t0 = 5;
                } else {
                    temp_v0_9 = temp_v1 * 2;
                    phi_t8 = *(&D_801D03E8 + temp_v0_9);
                    phi_at = &globalCtx->msgCtx + 0x10000;
                    phi_v0 = temp_v0_9;
block_56:
                    phi_at->unk2006 = phi_t8;
                    phi_t0 = 5;
                }
                globalCtx->msgCtx.unk12004 = *(&D_801D03C8 + phi_v0);
                if ((gSaveContext.language == 0) && (phi_ra->unk2090 == 0)) {
                    temp_v0_10 = phi_ra->unk2006;
                    phi_ra->unk1FFE = (s16) (temp_v0_10 + 7);
                    phi_ra->unk2000 = (s16) (temp_v0_10 + 0x19);
                    phi_ra->unk2002 = (s16) (temp_v0_10 + 0x2B);
                } else {
                    temp_v0_11 = phi_ra->unk2006;
                    phi_ra->unk1FFE = (s16) (temp_v0_11 + 0x14);
                    phi_ra->unk2000 = (s16) (temp_v0_11 + 0x20);
                    phi_ra->unk2002 = (s16) (temp_v0_11 + 0x2C);
                }
                temp_v0_12 = phi_ra->unk1F0A;
                if ((temp_v0_12 == 4) || (phi_t0 == temp_v0_12)) {
                    globalCtx->msgCtx.unk11F22 = 3;
                    globalCtx->msgCtx.unk12068 = phi_ra->unk2004;
                    globalCtx->msgCtx.unk1206A = phi_ra->unk2006;
                    globalCtx->msgCtx.unk12008 = 0x100;
                    globalCtx->msgCtx.unk1200A = 0x40;
                    globalCtx->msgCtx.unk1200C = 0x200;
                    globalCtx->msgCtx.unk1200E = 0x200;
                    return;
                }
                sp30 = &globalCtx->msgCtx;
                func_80149C18(globalCtx, phi_a1, &gSaveContext);
                func_801A3FB4(0);
                globalCtx->msgCtx.unk12023 = 0;
                globalCtx->msgCtx.unk11F22 = 2;
                if (globalCtx->pauseCtx.unk_2B9 == 0) {
                    func_80150A84(globalCtx);
                    return;
                }
                /* Duplicate return node #352. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 2:
            func_80149C18(globalCtx, 0, (SaveContext *) 0x10000);
            return;
        case 3:
            globalCtx->msgCtx.unk11F22 = 4;
            if (globalCtx->pauseCtx.unk_2B9 == 0) {
                temp_v0_13 = phi_ra->unk1F04;
                if (temp_v0_13 == 0xFF) {
                    func_8011552C(globalCtx, 0x12);
                    return;
                }
                if (temp_v0_13 != 0xF8) {
                    func_8011552C(globalCtx, 0x10);
                    return;
                }
                /* Duplicate return node #352. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 4:
            sp20 = phi_ra;
            sp30 = &globalCtx->msgCtx;
            func_8014D7B4(globalCtx, 0, 0x10000);
            if (phi_ra->unk209C != 0) {
                sp20 = phi_ra;
                sp30 = &globalCtx->msgCtx;
                Interface_ChangeAlpha(1U);
            }
            if (D_801D0468 != 0) {
                globalCtx->msgCtx.unk11FEE = phi_ra->unk1FF0;
                D_801D0468 = 0;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 5:
            globalCtx->msgCtx.unk12023 = phi_ra->unk2023 - 1;
            if (phi_ra->unk2023 == 0) {
                func_8014D7B4(globalCtx, 0, 0x10000);
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 6:
            if (phi_ra->unk1F0A != 4) {
                temp_v0_14 = globalCtx->state.input[0].press.button;
                if ((~(temp_v0_14 | ~0x4000) == 0) && (phi_ra->unk1FF2 == 0)) {
                    globalCtx->msgCtx.unk12094 = 1;
                    globalCtx->msgCtx.unk11FEE = phi_ra->unk1FF0;
                    return;
                }
                if ((~(temp_v0_14 | 0xFFFF7FFF) == 0) && (phi_ra->unk1FF2 == 0)) {
loop_85:
                    temp_a0_3 = phi_ra->unk1FEE;
                    temp_v1_2 = (&globalCtx->msgCtx + (temp_a0_3 * 2))->unk11F24;
                    if ((temp_v1_2 != 0x10) && (temp_v1_2 != 0x12) && (temp_v1_2 != 0x1B) && (temp_v1_2 != 0x1C) && (temp_v1_2 != 0x1D) && (temp_v1_2 != 0x19) && (temp_v1_2 != 0xE0) && (temp_v1_2 != 0xBF) && (temp_v1_2 != 0x15) && (temp_v1_2 != 0x1A)) {
                        globalCtx->msgCtx.unk11FEE = temp_a0_3 + 1;
                        goto loop_85;
                    }
                }
                /* Duplicate return node #352. Try simplifying control flow for better match */
                return;
            }
            if ((~(globalCtx->state.input[0].press.button | 0xFFFF7FFF) == 0) && (phi_ra->unk1FF2 == 0)) {
loop_99:
                temp_a0_4 = phi_ra->unk1FEE;
                temp_v1_3 = (&globalCtx->msgCtx + (temp_a0_4 * 2))->unk11F24;
                if ((temp_v1_3 != 0x10) && (temp_v1_3 != 0x12) && (temp_v1_3 != 0x1B) && (temp_v1_3 != 0x1C) && (temp_v1_3 != 0x1D) && (temp_v1_3 != 0x19) && (temp_v1_3 != 0xE0) && (temp_v1_3 != 0xBF) && (temp_v1_3 != 0x15) && (temp_v1_3 != 0x1A)) {
                    globalCtx->msgCtx.unk11FEE = temp_a0_4 + 1;
                    goto loop_99;
                }
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 7:
            sp20 = phi_ra;
            sp30 = &globalCtx->msgCtx;
            if (func_80147624(globalCtx) != 0) {
                globalCtx->msgCtx.unk11F22 = 6;
                globalCtx->msgCtx.unk11FEE = phi_ra->unk1FEE + 1;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 8:
            globalCtx->msgCtx.unk12023 = phi_ra->unk2023 - 1;
            if (phi_ra->unk2023 == 0) {
                globalCtx->msgCtx.unk11F22 = 4;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 65:
            sp20 = phi_ra;
            sp30 = &globalCtx->msgCtx;
            if (func_80147624(globalCtx) != 0) {
                globalCtx->msgCtx.unk11F22 = 4;
                globalCtx->msgCtx.unk11FEC = phi_ra->unk1FEC + 1;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 66:
            temp_v1_4 = phi_ra->unk2020;
            phi_v1_2 = temp_v1_4;
            if ((temp_v1_4 == 0x50) || (temp_v1_4 == 0x52)) {
                globalCtx->msgCtx.unk12023 = phi_ra->unk2023 - 1;
                if ((phi_ra->unk2023 == 0) || ((phi_ra->unk2020 == 0x52) && (sp20 = phi_ra, (func_80147624(globalCtx) != 0)))) {
                    if (phi_ra->unk1F14 != 0xFFFF) {
                        sp20 = phi_ra;
                        play_sound(0x4818U);
                        func_80151938(globalCtx, phi_ra->unk1F14);
                        return;
                    }
                    if (phi_ra->unk20B1 != 0) {
                        if (func_80151C9C(globalCtx) == 0) {
                            func_801477B4(globalCtx);
                            return;
                        }
                        /* Duplicate return node #352. Try simplifying control flow for better match */
                        return;
                    }
                    func_801477B4(globalCtx);
                    return;
                }
                /* Duplicate return node #352. Try simplifying control flow for better match */
                return;
            }
            if ((temp_v1_4 != 0x30) && (temp_v1_4 != 0x40) && (temp_v1_4 != 0x42) && (phi_a3 = (s16 *)0x10, phi_a3 = (s16 *)0x10, (temp_v1_4 != 0x41))) {
                if (temp_v1_4 != (s16 *)0x10) {
                    if (temp_v1_4 != 0x11) {
                        if (temp_v1_4 != 0x12) {
                            if (temp_v1_4 != 0x55) {
                                if (temp_v1_4 != 0x56) {
                                    if (temp_v1_4 != 0x57) {
                                        goto block_157;
                                    }
                                    globalCtx->msgCtx.unk1201E = phi_ra->unk201E - 0x14;
                                    if ((s32) phi_ra->unk201E <= 0) {
                                        globalCtx->msgCtx.unk1201E = 0;
                                        if (phi_ra->unk1F14 != 0xFFFF) {
                                            sp20 = phi_ra;
                                            play_sound(0x4818U);
                                            func_80151938(globalCtx, phi_ra->unk1F14);
                                            return;
                                        }
                                        if (phi_ra->unk20B1 != 0) {
                                            sp20 = phi_ra;
                                            sp28 = temp_t0;
                                            sp30 = &globalCtx->msgCtx;
                                            if (func_80151C9C(globalCtx, 0, 0x10000, (s16 *)0x10) == 0) {
                                                func_801477B4(globalCtx);
                                                return;
                                            }
                                            goto block_151;
                                        }
                                        func_801477B4(globalCtx);
                                        return;
                                    }
block_151:
                                    phi_a3 = (s16 *)0x10;
                                    phi_ra_3 = phi_ra;
                                    phi_t0_2 = globalCtx + 0x10000;
                                    phi_t5 = &globalCtx->msgCtx;
                                    goto block_156;
                                }
                                globalCtx->msgCtx.unk12023 = phi_ra->unk2023 - 1;
                                if (phi_ra->unk2023 == 0) {
                                    globalCtx->msgCtx.unk12020 = 0x57;
                                }
                                goto block_156;
                            }
                            globalCtx->msgCtx.unk1201E = phi_ra->unk201E + 0x14;
                            if ((s32) phi_ra->unk201E >= 0xFF) {
                                globalCtx->msgCtx.unk1201E = 0xFF;
                                globalCtx->msgCtx.unk12020 = 0x56;
                            }
                            goto block_156;
                        }
                        sp20 = phi_ra;
                        sp28 = temp_t0;
                        sp30 = &globalCtx->msgCtx;
                        func_80148B98(globalCtx, 1U);
                        phi_ra_3 = phi_ra;
                        phi_t0_2 = temp_t0;
                        phi_t5 = &globalCtx->msgCtx;
                        goto block_156;
                    }
                    sp20 = phi_ra;
                    sp28 = temp_t0;
                    sp30 = &globalCtx->msgCtx;
                    func_80148B98(globalCtx, 2U);
                    phi_ra_3 = phi_ra;
                    phi_t0_2 = temp_t0;
                    phi_t5 = &globalCtx->msgCtx;
                    goto block_156;
                }
                sp20 = phi_ra;
                sp28 = temp_t0;
                sp30 = &globalCtx->msgCtx;
                func_80148B98(globalCtx, 1U);
                phi_ra_3 = phi_ra;
                phi_t0_2 = temp_t0;
                phi_t5 = &globalCtx->msgCtx;
block_156:
                phi_v1_2 = phi_ra_3->unk2020;
                phi_ra_2 = phi_ra_3;
block_157:
                if ((phi_a3 == phi_v1_2) && (phi_t0_2->unk6932 == 1)) {
                    sp20 = phi_ra_2;
                    if (func_80147624(globalCtx) != 0) {
                        if (phi_ra_2->unk2021 == 0) {
                            globalCtx->msgCtx.unk1202A = 2;
                        } else {
                            globalCtx->msgCtx.unk1202A = 4;
                        }
                        func_801477B4(globalCtx);
                        return;
                    }
                    /* Duplicate return node #352. Try simplifying control flow for better match */
                    return;
                }
                if ((phi_a3 == phi_v1_2) && (phi_t0_2->unk6932 == 0x12)) {
                    sp20 = phi_ra_2;
                    sp30 = phi_t5;
                    if (func_80147624(globalCtx) != 0) {
                        if (phi_ra_2->unk2021 == 0) {
                            sp20 = phi_ra_2;
                            sp30 = phi_t5;
                            func_8019F208();
                            phi_t5->unk11F22 = 0x4A;
                            phi_t5->unk11FF0 = phi_ra_2->unk1FF0 - 3;
                            phi_t5->unk120D6 = 0;
                            phi_t5->unk120D4 = 0;
                            return;
                        }
                        func_8019F230();
                        globalCtx->msgCtx.unk1202A = 4;
                        func_801477B4(globalCtx);
                        return;
                    }
                    /* Duplicate return node #352. Try simplifying control flow for better match */
                    return;
                }
                if ((phi_a3 == phi_v1_2) && (phi_t0_2->unk6932 == 0x13)) {
                    sp20 = phi_ra_2;
                    if (func_80147624(globalCtx) != 0) {
                        if (phi_ra_2->unk2021 == 0) {
                            func_8019F208();
                            if (gSaveContext.unk_14 == 0) {
                                globalCtx->msgCtx.unk1202A = 0x19;
                                gSaveContext.unk_14 = -2;
                            } else {
                                globalCtx->msgCtx.unk1202A = 0x18;
                                gSaveContext.unk_14 = 0;
                            }
                            func_801477B4(globalCtx);
                            return;
                        }
                        func_8019F230();
                        globalCtx->msgCtx.unk1202A = 4;
                        func_801477B4(globalCtx);
                        return;
                    }
                    /* Duplicate return node #352. Try simplifying control flow for better match */
                    return;
                }
                if ((phi_a3 == phi_v1_2) && (phi_t0_2->unk6932 == 0x15)) {
                    sp20 = phi_ra_2;
                    if (func_80147624(globalCtx) != 0) {
                        if (phi_ra_2->unk2021 == 0) {
                            func_8019F208();
                            if (gSaveContext.isNight != 0) {
                                gSaveContext.time = 0x4000;
                            } else {
                                gSaveContext.time = 0xC000;
                            }
                            globalCtx->msgCtx.unk1202A = 0x1A;
                            gSaveContext.unk_3DD0[3] = 0;
                        } else {
                            func_8019F230();
                            globalCtx->msgCtx.unk1202A = 4;
                        }
                        func_801477B4(globalCtx);
                        return;
                    }
                    /* Duplicate return node #352. Try simplifying control flow for better match */
                    return;
                }
                if ((phi_a3 != phi_v1_2) || (globalCtx->pauseCtx.state != 0x18)) {
                    if ((phi_a3 == phi_v1_2) && (phi_t0_2->unk6932 == 0x1B)) {
                        sp20 = phi_ra_2;
                        if (func_80147624(globalCtx) != 0) {
                            if (phi_ra_2->unk2021 == 0) {
                                func_8019F208();
                                globalCtx->msgCtx.unk1202A = 0x26;
                            } else {
                                func_8019F230();
                                globalCtx->msgCtx.unk1202A = 4;
                            }
                            func_801477B4(globalCtx);
                            return;
                        }
                        /* Duplicate return node #352. Try simplifying control flow for better match */
                        return;
                    }
                    if ((phi_v1_2 == 0x60) || (phi_v1_2 == 0x61) || (phi_a3 == phi_v1_2) || (phi_v1_2 == 0x11) || (phi_v1_2 == 0x50) || (phi_v1_2 == 0x52) || (phi_v1_2 == 0x55) || (phi_v1_2 == 0x56) || (phi_v1_2 == 0x57) || (phi_v1_2 == 0x62)) {
                        if (phi_v1_2 == 0x50) {
                            return;
                        }
                        /* Duplicate return node #352. Try simplifying control flow for better match */
                        return;
                    }
                    temp_v1_5 = globalCtx->state.input;
                    if (globalCtx->pauseCtx.unk_2B9 != 0) {
                        if ((temp_v1_5->rel.stick_x != 0) || (temp_v1_5->rel.stick_y != 0) || (temp_v0_15 = temp_v1_5->press.button, (~(temp_v0_15 | 0xFFFF7FFF) == 0)) || (~(temp_v0_15 | ~0x4000) == 0) || (~(temp_v0_15 | ~0x1000) == 0)) {
                            play_sound(0x4808U);
                            func_801477B4(globalCtx);
                            return;
                        }
                        /* Duplicate return node #352. Try simplifying control flow for better match */
                        return;
                    }
                    if (phi_t0_2->unk6932 == 0x27) {
                        if (func_80147734(globalCtx) != 0) {
                            play_sound(0x4808U);
                            func_801477B4(globalCtx);
                            globalCtx->msgCtx.unk1202A = 4;
                            return;
                        }
                        /* Duplicate return node #352. Try simplifying control flow for better match */
                        return;
                    }
                    if ((phi_ra_2->unk1F04 != 0x2790) && (sp20 = phi_ra_2, (func_80147734(globalCtx) != 0))) {
                        if (phi_ra_2->unk1F14 != 0xFFFF) {
                            sp20 = phi_ra_2;
                            play_sound(0x4818U);
                            func_80151938(globalCtx, phi_ra_2->unk1F14);
                            return;
                        }
                        if ((phi_ra_2->unk20B1 == 0) || (sp20 = phi_ra_2, (func_80151C9C(globalCtx) != 1))) {
                            if (phi_ra_2->unk1F04 == 0x579) {
                                gSaveContext.unk_3F22 = 0;
                            }
                            play_sound(0x4808U);
                            func_801477B4(globalCtx);
                            return;
                        }
                        /* Duplicate return node #352. Try simplifying control flow for better match */
                        return;
                    }
                    /* Duplicate return node #352. Try simplifying control flow for better match */
                    return;
                }
                /* Duplicate return node #352. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 67:
            globalCtx->msgCtx.unk12023 = phi_ra->unk2023 - 1;
            if (phi_ra->unk2023 == 0) {
                if (D_801C6A7C == 9) {
                    if (globalCtx->interfaceCtx.restrictions.songOfSoaring == 0) {
                        sp20 = phi_ra;
                        sp30 = &globalCtx->msgCtx;
                        if ((func_8010A0A4(globalCtx, 0x1B95U, 0x10000, &D_801C6A7C) != 0) || (globalCtx->sceneNum == 0x4F)) {
                            func_801518B0(globalCtx, 0x1B93U, NULL);
                            globalCtx->msgCtx.unk1202A = 0x1B;
                            D_801C6A7C = 0xFF;
                            return;
                        }
                        if (phi_ra->unk20B0 == 0) {
                            if (gSaveContext.owlActivationFlags != 0) {
                                temp_v0_16 = &globalCtx->pauseCtx;
                                temp_t7 = temp_v0_16->pageIndex;
                                temp_v0_16->pageIndex = 0;
                                temp_v0_16->state = 0x13;
                                temp_v0_16->unk_2C8 = temp_t7;
                                temp_v0_16->unk_2CA = temp_v0_16->unk_238[4];
                                sp2C = temp_v0_16;
                                func_800F4A10(globalCtx);
                                temp_v0_16->pageIndex = 1;
                                D_801C6A7C = 0xFF;
                                func_801477B4(globalCtx);
                                globalCtx->msgCtx.unk1202A = 4;
                                gSaveContext.unk_3F26 = 0x15;
                                func_80115844(globalCtx, 0x12);
                                Game_SetFramerateDivisor((GameState *) globalCtx, 2);
                                if (ShrinkWindow_GetLetterboxTarget() != 0) {
                                    ShrinkWindow_SetLetterboxTarget(0);
                                }
                                func_801A3AEC(1);
                                return;
                            }
                            D_801C6A7C = 0xFF;
                            func_801518B0(globalCtx, 0xFBU, NULL);
                            globalCtx->msgCtx.unk1202A = 0x27;
                            return;
                        }
                        globalCtx->msgCtx.unk12023 = 1;
                        return;
                    }
                    D_801C6A7C = 0xFF;
                    func_801518B0(globalCtx, 0x1B95U, NULL);
                    globalCtx->msgCtx.unk1202A = 0x27;
                    return;
                }
                temp_v0_17 = phi_ra->unk1F04;
                if ((temp_v0_17 == 0xC) || (temp_v0_17 == 0xD) || (temp_v0_17 == 0xC5) || (temp_v0_17 == 0xC6) || (temp_v0_17 == 0xC7) || (temp_v0_17 == 0x2165) || (temp_v0_17 == 0x2166) || (temp_v0_17 == 0x2167) || (temp_v0_17 == 0x2168)) {
                    gSaveContext.healthAccumulator = 0x140;
                }
                if ((globalCtx->csCtx.state == 0) && (gSaveContext.cutscene < 0xFFF0) && ((globalCtx->activeCamera == 0) || ((globalCtx->sceneLoadFlag == 0) && (globalCtx->unk_18B4A == 0))) && (globalCtx->msgCtx.unk1202A == 4)) {
                    temp_v0_18 = gSaveContext.unk_3F26;
                    if ((temp_v0_18 == 0) || (temp_v0_18 == 1) || (temp_v0_18 == 2)) {
                        gSaveContext.unk_3F26 = 0x32;
                    }
                    gSaveContext.unk_3F22 = 0;
                }
                temp_v0_19 = phi_ra->unk1F04;
                if (((s32) temp_v0_19 >= 0x1BB2) && ((s32) temp_v0_19 < 0x1BB7) && ((globalCtx->actorCtx.unk5 & 2) != 0)) {
                    func_801518B0(globalCtx, 0x5E6U, NULL);
                    return;
                }
                if (phi_ra->unk20B1 != 0) {
                    sp30 = &globalCtx->msgCtx;
                    if (func_80151C9C(globalCtx, 0, (s32) &gSaveContext, &D_801C6A7C) == 0) {
                        globalCtx->msgCtx.unk12023 = 1;
                        return;
                    }
                    /* Duplicate return node #352. Try simplifying control flow for better match */
                    return;
                }
                globalCtx->msgCtx.unk11F10 = 0;
                globalCtx->msgCtx.unk11F22 = 0;
                globalCtx->msgCtx.unk11F04 = 0;
                globalCtx->msgCtx.unk12023 = 0;
                temp_v0_20 = &globalCtx->pauseCtx;
                gGameInfo->data[1375] = 0;
                if (temp_v0_20->unk_2B9 != 0) {
                    sp20 = phi_ra;
                    sp2C = temp_v0_20;
                    sp28 = temp_t0;
                    sp30 = &globalCtx->msgCtx;
                    func_8011552C(globalCtx, 0x15);
                    temp_v0_20->unk_2B9 = 0;
                }
                phi_a3_2 = &D_801C6A7C;
                if (phi_ra->unk2020 == 0x30) {
                    globalCtx->msgCtx.unk12020 = 0;
                    globalCtx->msgCtx.unk1202A = 2;
                } else {
                    globalCtx->msgCtx.unk12020 = 0;
                }
                temp_v0_21 = gSaveContext.inventory.questItems;
                if ((temp_v0_21 & 0xF0000000) == 0x40000000) {
                    gSaveContext.inventory.questItems = temp_v0_21 ^ 0x40000000;
                    gSaveContext.healthCapacity += 0x10;
                    gSaveContext.health += 0x10;
                }
                temp_v1_6 = phi_ra->unk202C;
                if (temp_v1_6 != 0x39) {
                    temp_v0_22 = D_801C6A7C;
                    if (temp_v0_22 == 6) {
                        if (globalCtx->interfaceCtx.restrictions.unk_312 == 0) {
                            func_801518B0(globalCtx, 0x1B8AU, NULL);
                            globalCtx->msgCtx.unk1202A = 0x12;
                            phi_a3_2 = &D_801C6A7C;
                        } else {
                            D_801C6A7C = 0xFF;
                            func_801518B0(globalCtx, 0x1B95U, NULL);
                            globalCtx->msgCtx.unk1202A = 0x27;
                            phi_a3_2 = &D_801C6A7C;
                        }
                    } else if (temp_v0_22 == 0xC) {
                        if (globalCtx->interfaceCtx.restrictions.unk_314 == 0) {
                            if (gGameInfo->data[15] != 0) {
                                if (gSaveContext.unk_14 == 0) {
                                    func_801518B0(globalCtx, 0x1B8CU, NULL);
                                } else {
                                    func_801518B0(globalCtx, 0x1B8DU, NULL);
                                }
                                globalCtx->msgCtx.unk1202A = 0x13;
                                phi_a3_2 = &D_801C6A7C;
                            } else {
                                func_801518B0(globalCtx, 0x1B8BU, NULL);
                                globalCtx->msgCtx.unk1202A = 4;
                                phi_a3_2 = &D_801C6A7C;
                            }
                        } else {
                            D_801C6A7C = 0xFF;
                            func_801518B0(globalCtx, 0x1B95U, NULL);
                            globalCtx->msgCtx.unk1202A = 0x27;
                            phi_a3_2 = &D_801C6A7C;
                        }
                    } else if (temp_v0_22 == 0xD) {
                        if (globalCtx->interfaceCtx.restrictions.unk_313 == 0) {
                            temp_v1_7 = gSaveContext.day;
                            if (((temp_v1_7 % 5) != 3) || (gSaveContext.isNight == 0)) {
                                if (gSaveContext.isNight != 0) {
                                    func_801518B0(globalCtx, *(&D_801D0462 + ((temp_v1_7 % 5) * 2)), NULL);
                                } else {
                                    func_801518B0(globalCtx, *(&D_801D045A + ((temp_v1_7 % 5) * 2)), NULL);
                                }
                                globalCtx->msgCtx.unk1202A = 0x15;
                                phi_a3_2 = &D_801C6A7C;
                            } else {
                                func_801518B0(globalCtx, 0x1B94U, NULL);
                                globalCtx->msgCtx.unk1202A = 4;
                                phi_a3_2 = &D_801C6A7C;
                            }
                        } else {
                            D_801C6A7C = 0xFF;
                            func_801518B0(globalCtx, 0x1B95U, NULL);
                            globalCtx->msgCtx.unk1202A = 0x27;
                            phi_a3_2 = &D_801C6A7C;
                        }
                    } else if ((temp_v1_6 == 0x32) && ((temp_v0_23 = (globalCtx + 0x10000)->unk6932, (temp_v0_23 == 1)) || (temp_v0_23 == 3) || (temp_v0_23 == 0xD) || (temp_v0_23 == 0x2A))) {
                        globalCtx->msgCtx.unk1202A = 4;
                        if (phi_ra->unk202E == 9) {
                            globalCtx->msgCtx.unk1202A = 1;
                        }
                    }
                    *phi_a3_2 = 0xFF;
                    return;
                }
                /* Duplicate return node #352. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 13:
            if (~(globalCtx->state.input[0].press.button | ~0x4000) == 0) {
                func_8019C300(0U, 0, (GlobalContext *) 0x10000);
                globalCtx->msgCtx.unk1202A = 4;
                func_801477B4(globalCtx);
                return;
            }
            globalCtx->msgCtx.unk12048 = 0xFF;
            return;
        case 32:
            temp_v1_8 = phi_ra->unk202C;
            if ((temp_v1_8 != 0x41) && (temp_v1_8 != 0x42) && (sp20 = phi_ra, (func_80147624(globalCtx) != 0))) {
                func_80152434(globalCtx, phi_ra->unk202C);
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 43:
            if (~(globalCtx->state.input[0].press.button | ~0x4000) == 0) {
                sp30 = &globalCtx->msgCtx;
                func_8019CD08(0, (u8 *) 0, 0x10000);
                play_sound(0x4827U);
                func_801477B4(globalCtx);
                globalCtx->msgCtx.unk11F22 = 0x2C;
                return;
            }
            globalCtx->msgCtx.unk12048 = 0xFF;
            return;
        case 69:
            globalCtx->msgCtx.unk1203C = phi_ra->unk203C + gGameInfo->data[1417];
            if ((s32) phi_ra->unk203C >= 0xFF) {
                globalCtx->msgCtx.unk1203C = 0xFF;
                globalCtx->msgCtx.unk11F22 = 0x46;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 70:
            globalCtx->msgCtx.unk1201E = phi_ra->unk201E + gGameInfo->data[1417];
            if ((s32) phi_ra->unk201E >= 0xFF) {
                globalCtx->msgCtx.unk1201E = 0xFF;
                globalCtx->msgCtx.unk11F22 = 0x47;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 71:
            globalCtx->msgCtx.unk12023 = phi_ra->unk2023 - 1;
            if (phi_ra->unk2023 == 0) {
                globalCtx->msgCtx.unk11F22 = 0x48;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 72:
            globalCtx->msgCtx.unk1201E = phi_ra->unk201E - gGameInfo->data[1414];
            if ((s32) phi_ra->unk201E <= 0) {
                globalCtx->msgCtx.unk1201E = 0;
                globalCtx->msgCtx.unk11F22 = 0x49;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 73:
            globalCtx->msgCtx.unk1203C = phi_ra->unk203C - gGameInfo->data[1414];
            if ((s32) phi_ra->unk203C <= 0) {
                temp_v0_24 = phi_ra->unk1F04;
                if (((s32) temp_v0_24 >= 0x1BB2) && ((s32) temp_v0_24 < 0x1BB7) && ((globalCtx->actorCtx.unk5 & 2) != 0)) {
                    func_801518B0(globalCtx, 0x5E6U, NULL);
                    Interface_ChangeAlpha(2U);
                    return;
                }
                if ((s32) temp_v0_24 >= 0x100) {

                }
                globalCtx->msgCtx.unk1203C = 0;
                globalCtx->msgCtx.unk11F10 = 0;
                globalCtx->msgCtx.unk11F22 = 0;
                globalCtx->msgCtx.unk11F04 = 0;
                globalCtx->msgCtx.unk12023 = 0;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        case 74:
            globalCtx->state.unkA3 = 1;
            sp30 = &globalCtx->msgCtx;
            sp44 = gSaveContext.cutscene;
            sp3E = gSaveContext.time;
            sp40 = gSaveContext.day;
            func_80143B0C(globalCtx);
            temp_a0_5 = &globalCtx->sramCtx;
            gSaveContext.unk_3DD0[3] = 0;
            sp2C = (PauseContext *) temp_a0_5;
            func_8014546C(temp_a0_5);
            temp_v0_25 = gSaveContext.fileNum;
            gSaveContext.day = sp40;
            gSaveContext.time = sp3E;
            gSaveContext.cutscene = sp44;
            if (temp_v0_25 != 0xFF) {
                temp_v1_9 = temp_v0_25 * 8;
                sp30 = &globalCtx->msgCtx;
                func_80147008(sp2C, *(&D_801C67C8 + temp_v1_9), *(&D_801C6818 + temp_v1_9));
                func_80147020((SramContext *) sp2C);
            }
            globalCtx->msgCtx.unk11F22 = 0x4B;
            return;
        case 75:
            if (gSaveContext.fileNum != 0xFF) {
                globalCtx->state.unkA3 = 1;
                if (globalCtx->sramCtx.status == 0) {
                    globalCtx->msgCtx.unk1202A = 0x16;
                    globalCtx->msgCtx.unk11F22 = 0x4C;
                    return;
                }
                /* Duplicate return node #352. Try simplifying control flow for better match */
                return;
            }
            globalCtx->msgCtx.unk1202A = 0x16;
            globalCtx->msgCtx.unk11F22 = 0x4C;
            return;
        case 77:
            globalCtx->state.unkA3 = 1;
            gSaveContext.isOwlSave = 1;
            sp30 = &globalCtx->msgCtx;
            func_80169D40(globalCtx);
            temp_a0_6 = &globalCtx->sramCtx;
            sp2C = (PauseContext *) temp_a0_6;
            func_8014546C(temp_a0_6);
            temp_v0_26 = gSaveContext.fileNum;
            if (temp_v0_26 != 0xFF) {
                temp_v1_10 = temp_v0_26 * 8;
                sp30 = &globalCtx->msgCtx;
                func_80147138(sp2C, *(&D_801C6840 + temp_v1_10), *(&D_801C6850 + temp_v1_10));
                func_80147150((SramContext *) sp2C);
            }
            globalCtx->msgCtx.unk11F22 = 0x4E;
            return;
        case 78:
            if (gSaveContext.fileNum != 0xFF) {
                globalCtx->state.unkA3 = 1;
                if (globalCtx->sramCtx.status == 0) {
                    globalCtx->msgCtx.unk1202A = 0x16;
                    globalCtx->msgCtx.unk11F22 = 0x4F;
                }
            } else {
                globalCtx->msgCtx.unk1202A = 0x16;
                globalCtx->msgCtx.unk11F22 = 0x4F;
            }
            if (phi_ra->unk1F22 == 0x4F) {
                gSaveContext.gameMode = 4;
                globalCtx->sceneLoadFlag = 0x14;
                globalCtx->unk_1887F = 2;
                globalCtx->nextEntranceIndex = 0x1C00;
                gSaveContext.cutscene = 0;
                gSaveContext.sceneSetupIndex = 0;
                return;
            }
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        default:
            globalCtx->msgCtx.unk12048 = 0xFF;
            /* Duplicate return node #352. Try simplifying control flow for better match */
            return;
        }
    } else {
    case 9:
    case 68:
    case 76:
    case 79:
    }
}

void func_801586A4(GlobalContext *globalCtx) {
    globalCtx->msgCtx.unk12084 = &D_801C6B98;
    globalCtx->msgCtx.unk1208C = &D_801CFB08;
}

void Message_Init(GlobalContext *globalCtx) {
    Font *sp28;
    void *sp24;
    Font *temp_a0;
    MessageContext *temp_s0;

    func_801586A4(globalCtx);
    globalCtx->msgCtx.unk1202A = 0;
    temp_s0 = &globalCtx->msgCtx;
    temp_s0->unk11F22 = 0;
    temp_s0->unk11F10 = 0;
    temp_s0->unk11F04 = 0;
    temp_s0->unk12020 = 0;
    temp_s0->choiceIndex = 0;
    temp_s0->unk11FF2 = 0;
    temp_s0->unk1202C = temp_s0->unk11FF2;
    temp_s0->unk1201E = 0xFF;
    sp24 = temp_s0 + 0x10000;
    View_Init((View *) temp_s0, globalCtx->state.gfxCtx);
    temp_s0->unk11EF8 = THA_AllocEndAlign16(&globalCtx->state.heap, 0x13C00U);
    temp_a0 = &globalCtx->msgCtx.font;
    sp28 = temp_a0;
    Font_LoadOrderedFont(temp_a0);
    temp_a0->unk_11D88 = 0;
    temp_s0->unk12092 = 0;
    temp_s0->unk12090 = sp24->unk2092;
    temp_s0->unk12094 = 0;
    temp_s0->unk1209C = 0;
    temp_s0->unk120A0 = 0;
    temp_s0->unk12068 = 0x34;
    temp_s0->unk1206A = 0x24;
    temp_s0->unk120B0 = 0;
    temp_s0->unk120BE = 0;
    temp_s0->unk120C0 = 0;
    temp_s0->unk120C2 = 0;
    temp_s0->unk120C4 = 0;
    temp_s0->unk120C8 = 0;
    temp_s0->unk120CA = 0;
    temp_s0->unk120CC = 0;
    temp_s0->unk120CE = 0;
    temp_s0->unk120D0 = 0;
    temp_s0->unk120D2 = 0;
    temp_s0->unk120D4 = 0;
    temp_s0->unk120D6 = 0;
}
