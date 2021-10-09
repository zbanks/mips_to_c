typedef struct EnKanban {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x4];
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ char pad_149[0x1];
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ u8 unk_14C;                         /* inferred */
    /* 0x14D */ char pad_14D[0x1];
    /* 0x14E */ u16 unk_14E;                        /* inferred */
    /* 0x150 */ u8 unk_150;                         /* inferred */
    /* 0x151 */ char pad_151[0x1];
    /* 0x152 */ s16 unk_152;                        /* inferred */
    /* 0x154 */ f32 unk_154;                        /* inferred */
    /* 0x158 */ f32 unk_158;                        /* inferred */
    /* 0x15C */ f32 unk_15C;                        /* inferred */
    /* 0x160 */ s16 unk_160;                        /* inferred */
    /* 0x162 */ char pad_162[0x2];
    /* 0x164 */ s16 unk_164;                        /* inferred */
    /* 0x166 */ s16 unk_166;                        /* inferred */
    /* 0x168 */ s16 unk_168;                        /* inferred */
    /* 0x16A */ s16 unk_16A;                        /* inferred */
    /* 0x16C */ s8 unk_16C;                         /* inferred */
    /* 0x16D */ s8 unk_16D;                         /* inferred */
    /* 0x16E */ s16 unk_16E;                        /* inferred */
    /* 0x170 */ s16 unk_170;                        /* inferred */
    /* 0x172 */ u8 unk_172;                         /* inferred */
    /* 0x173 */ char pad_173[0x1];
    /* 0x174 */ f32 unk_174;                        /* inferred */
    /* 0x178 */ f32 unk_178;                        /* inferred */
    /* 0x17C */ s16 unk_17C;                        /* inferred */
    /* 0x17E */ char pad_17E[0x2];
    /* 0x180 */ f32 unk_180;                        /* inferred */
    /* 0x184 */ char pad_184[0x4];
    /* 0x188 */ f32 unk_188;                        /* inferred */
    /* 0x18C */ u8 unk_18C;                         /* inferred */
    /* 0x18D */ u8 unk_18D;                         /* inferred */
    /* 0x18E */ s16 unk_18E;                        /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ s16 unk_192;                        /* inferred */
    /* 0x194 */ char pad_194[0x2];
    /* 0x196 */ u8 unk_196;                         /* inferred */
    /* 0x197 */ s8 unk_197;                         /* inferred */
    /* 0x198 */ s8 unk_198;                         /* inferred */
    /* 0x199 */ u8 unk_199;                         /* inferred */
    /* 0x19A */ u8 unk_19A;                         /* inferred */
    /* 0x19B */ char pad_19B[0x1];
    /* 0x19C */ Actor *unk_19C;                     /* inferred */
    /* 0x1A0 */ s16 unk_1A0;                        /* inferred */
    /* 0x1A2 */ char pad_1A2[0x2];
    /* 0x1A4 */ ColliderCylinder unk_1A4;           /* inferred */
} EnKanban;                                         /* size = 0x1F0 */

struct _mips2c_stack_EnKanban_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnKanban_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x10];                   /* maybe part of sp2C[5]? */
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x18];                   /* maybe part of sp40[7]? */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ char pad_60[0x8];                    /* maybe part of sp5C[3]? */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad_6C[0x10];                   /* maybe part of sp68[5]? */
    /* 0x7C */ Actor *sp7C;                         /* inferred */
    /* 0x80 */ char pad_80[0x8];                    /* maybe part of sp7C[3]? */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

struct _mips2c_stack_EnKanban_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnKanban_Update {
    /* 0x000 */ char pad_0[0x50];
    /* 0x050 */ ActorShape *sp50;                   /* inferred */
    /* 0x054 */ CollisionCheckContext *sp54;        /* inferred */
    /* 0x058 */ char pad_58[0xA];                   /* maybe part of sp54[3]? */
    /* 0x062 */ s16 sp62;                           /* inferred */
    /* 0x064 */ s16 sp64;                           /* inferred */
    /* 0x066 */ s16 sp66;                           /* inferred */
    /* 0x068 */ f32 sp68;                           /* inferred */
    /* 0x06C */ f32 sp6C;                           /* inferred */
    /* 0x070 */ f32 sp70;                           /* inferred */
    /* 0x074 */ f32 sp74;                           /* inferred */
    /* 0x078 */ char pad_78[0x10];                  /* maybe part of sp74[5]? */
    /* 0x088 */ f32 sp88;                           /* inferred */
    /* 0x08C */ char pad_8C[0xC];                   /* maybe part of sp88[4]? */
    /* 0x098 */ s32 sp98;                           /* inferred */
    /* 0x09C */ s32 sp9C;                           /* inferred */
    /* 0x0A0 */ f32 spA0;                           /* inferred */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ f32 spA8;                           /* inferred */
    /* 0x0AC */ f32 spAC;                           /* inferred */
    /* 0x0B0 */ f32 spB0;                           /* inferred */
    /* 0x0B4 */ f32 spB4;                           /* inferred */
    /* 0x0B8 */ ? spB8;                             /* inferred */
    /* 0x0B8 */ char pad_B8[0x10];
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ char pad_CC[0x4];
    /* 0x0D0 */ f32 spD0;                           /* inferred */
    /* 0x0D4 */ char pad_D4[0x8];                   /* maybe part of spD0[3]? */
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ char pad_EC[0x2];
    /* 0x0EE */ s16 spEE;                           /* inferred */
    /* 0x0F0 */ ColliderInfo *spF0;                 /* inferred */
    /* 0x0F4 */ char pad_F4[0x8];                   /* maybe part of spF0[3]? */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ Actor *sp108;                       /* inferred */
    /* 0x10C */ char pad_10C[0x13];                 /* maybe part of sp108[5]? */
    /* 0x11F */ u8 sp11F;                           /* inferred */
};                                                  /* size = 0x120 */

struct _mips2c_stack_func_80954960 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80954BE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80954960(EnKanban *arg0);                 /* static */
void func_80954BE8(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_0405AED0;
extern ? D_06000C30;
extern ? D_06001630;
static ColliderCylinderInit D_80957300 = {
    {0xA, 0x11, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF3CFFFFF, 0, 0}, 1, 1, 1},
    {0x14, 0x32, 5, {0, 0, 0}},
};
static u16 D_8095732C = 1;
static u16 D_8095732E = 2;
static u16 D_80957330 = 4;
static ? D_80957332;                                /* unable to generate initializer */
static ? D_80957344;                                /* unable to generate initializer */
static ? D_80957428;                                /* unable to generate initializer */
static ? D_8095750C;                                /* unable to generate initializer */
static ? D_80957530;                                /* unable to generate initializer */
static ? D_8095753C;                                /* unable to generate initializer */
static s32 D_80957548 = 0xB98C46FF;
static s32 D_8095754C = 0xFFFFFFFF;
static u32 D_80957550 = 0x6000CB0;
static u32 D_80957554 = 0x6000DB8;
static u32 D_80957558[9] = {
    0x6000E78,
    0x6000F38,
    0x6000FF8,
    0x60010B8,
    0x60011C0,
    0x60012C8,
    0x60013D0,
    0x6001488,
    0x6001540,
};
static u16 D_8095757C[1024] = {
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
    0x100,
    0x100,
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
    0x100,
    0x100,
    0x100,
    0x100,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x100,
    0x100,
    0x100,
    0x100,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x100,
    0x100,
    0x100,
    0x100,
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
    0x101,
    0x101,
    0x140,
    0x140,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    2,
    2,
    2,
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
    0x101,
    0x101,
    0x140,
    0x140,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    8,
    8,
    8,
    2,
    2,
    2,
    2,
    2,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0x101,
    0x101,
    0x140,
    0x140,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    8,
    8,
    8,
    8,
    8,
    8,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    1,
    1,
    1,
    1,
    1,
    0x101,
    0x101,
    0x140,
    0x140,
    0x40,
    0x40,
    0x40,
    0x40,
    0x40,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    1,
    1,
    0x101,
    0x101,
    0x140,
    0x140,
    0x40,
    0x40,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    0x102,
    0x301,
    0x340,
    0x108,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    8,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    0x204,
    0x220,
    0x280,
    0x210,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    0x20,
    0x20,
    0x220,
    0x220,
    0x280,
    0x280,
    0x80,
    0x80,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x220,
    0x220,
    0x280,
    0x280,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    4,
    4,
    4,
    4,
    4,
    4,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x220,
    0x220,
    0x280,
    0x280,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    4,
    4,
    4,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x220,
    0x220,
    0x280,
    0x280,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x10,
    0x10,
    0x10,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x220,
    0x620,
    0x680,
    0x280,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
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
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x400,
    0x400,
    0x400,
    0x400,
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
};
static ? D_80957D7C;                                /* unable to generate initializer */
static ? D_80957DE0;                                /* unable to generate initializer */

void func_80954960(EnKanban *arg0) {
    f32 sp1C;
    f32 sp18;
    f32 temp_f16;
    void *temp_v0;

    temp_v0 = arg0->actor.floorPoly;
    if (temp_v0 != 0) {
        sp1C = (f32) temp_v0->normal.x * 0.00003051851f;
        temp_f16 = (f32) temp_v0->normal.y * 0.00003051851f;
        sp18 = temp_f16;
        arg0->unk_180 = -func_80086B30(-((f32) temp_v0->normal.z * 0.00003051851f) * temp_f16, 1.0f);
        arg0->unk_188 = func_80086B30(-sp1C * temp_f16, 1.0f);
    }
}

void EnKanban_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    EnKanban *this = (EnKanban *) thisx;

    Actor_SetScale((Actor *) this, 0.01f);
    if (this->actor.params != -0x23) {
        this->actor.targetMode = 0;
        this->actor.flags |= 1;
        temp_a1 = &this->unk_1A4;
        this->unk_19A = (u8) (u32) Rand_ZeroFloat(1.9f);
        sp28 = temp_a1;
        Collider_InitCylinder(globalCtx, temp_a1);
        Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80957300);
        temp_v0 = this->actor.params;
        if (temp_v0 == 0x300) {
            if (gSaveContext.linkAge == 1) {
                this->actor.textId = 0x409D;
            } else {
                this->actor.textId = 0x4090;
            }
        } else {
            this->actor.textId = temp_v0 | 0x300;
        }
        this->unk_16E = 1;
        this->unk_14E = 0xFFFF;
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 50.0f, 4U);
        func_80954960(this);
    }
}

void EnKanban_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKanban *this = (EnKanban *) thisx;
    if (this->unk_14C == 0) {
        Collider_DestroyCylinder(globalCtx, &this->unk_1A4);
    }
}

void func_80954BE8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    u8 temp_v0;
    s32 phi_v1;

    if (arg0->unk_194 == 0) {
        temp_v0 = arg0->unk_195;
        if (temp_v0 == 0) {
            temp_v0_2 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
            phi_v1 = (s32) temp_v0_2;
            if ((s32) temp_v0_2 < 0) {
                phi_v1 = -(s32) temp_v0_2;
            }
            if (phi_v1 < 0x2800) {
                if (func_800B84D0(arg0, arg1) != 0) {
                    arg0->unk_194 = 1U;
                    return;
                }
                func_800B8614(arg0, arg1, 68.0f);
                return;
            }
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        arg0->unk_195 = (u8) (temp_v0 - 1);
        return;
    }
    if (func_800B867C(arg0, arg1) != 0) {
        arg0->unk_194 = 0U;
        arg0->unk_195 = 0x14U;
    }
}

void EnKanban_Update(Actor *thisx, GlobalContext *globalCtx) {
    u8 sp11F;
    Actor *sp108;
    f32 spFC;
    ColliderInfo *spF0;
    s16 spEE;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spC8;
    ? spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp88;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    CollisionCheckContext *sp54;
    ActorShape *sp50;
    Actor *temp_s0;
    Actor *temp_s0_10;
    Actor *temp_s0_8;
    Actor *temp_s0_9;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    ColliderCylinder *temp_s0_2;
    ColliderInfo *temp_t2;
    CollisionCheckContext *temp_a1_2;
    PosRot *temp_s0_5;
    f32 *temp_s0_7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_s0_6;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_16;
    s16 temp_v0_21;
    s16 temp_v0_22;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_7;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0_4;
    s32 temp_t1_2;
    s32 temp_t5_2;
    s32 temp_v0_8;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s8 temp_v0_20;
    u16 temp_s0_3;
    u16 temp_t5;
    u16 temp_t7;
    u16 temp_v0_17;
    u16 temp_v0_9;
    u32 temp_t9;
    u32 temp_v0_11;
    u32 temp_v0_18;
    u32 temp_v0_5;
    u8 temp_t1;
    u8 temp_t2_2;
    u8 temp_t3;
    u8 temp_t9_2;
    u8 temp_v0_19;
    u8 temp_v0_23;
    u8 temp_v0_24;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_a0_2;
    void *temp_v0_10;
    s16 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    u8 phi_t3;
    f32 phi_f10;
    f32 phi_f4;
    f32 phi_f4_2;
    f32 phi_f6;
    s16 phi_s0;
    s16 phi_v0_4;
    f32 phi_f0;
    s32 phi_v0_5;
    s16 phi_v0_6;
    f32 phi_f0_2;
    s32 phi_v1;
    Actor *phi_s0_2;
    f32 phi_f18;
    EnKanban *this = (EnKanban *) thisx;

    sp11F = 0;
    sp108 = globalCtx->actorCtx.actorList[2].first;
    temp_t1 = this->unk_14C;
    this->unk_148 += 1;
    switch (temp_t1) {
    case 0:
        temp_v0 = this->unk_152;
        if (temp_v0 != 0) {
            this->unk_152 = temp_v0 - 1;
        }
        temp_v0_2 = this->unk_192;
        if (temp_v0_2 != 0) {
            this->unk_192 = temp_v0_2 - 1;
        }
        temp_v1 = this->unk_1A0;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk_1A0 = temp_v1 - 1;
            phi_v0 = this->unk_1A0;
        }
        if (phi_v0 == 0) {
            this->unk_19C = NULL;
        }
        if (this->unk_192 == 1) {
            this->actor.flags &= -2;
        }
        if (this->unk_14E == 0xFFFF) {
            func_80954BE8((Actor *) this, globalCtx);
        }
        if ((this->unk_152 == 0) && (temp_v1_2 = this->unk_1A4.base.acFlags, ((temp_v1_2 & 2) != 0)) && (temp_v0_3 = this->unk_1A4.base.ac, this->unk_1A4.base.acFlags = temp_v1_2 & 0xFFFD, (temp_v0_3 != this->unk_19C)) && (this->unk_19C = temp_v0_3, this->unk_1A0 = 3, this->unk_152 = 6, temp_v0_4 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0xA8, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, -0x23), temp_s0 = temp_v0_4, (temp_v0_4 != 0))) {
            temp_t2 = this->unk_1A4.info.acHitInfo;
            spF0 = temp_t2;
            temp_v0_5 = temp_t2->toucher.dmgFlags;
            temp_t0 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
            if ((temp_v0_5 & 0x200) != 0) {
                this->unk_18C = *(&D_8095750C + sp108->unk_ADA);
            } else if ((temp_v0_5 & 0x10) != 0) {
                temp_v0_6 = this->unk_19A;
                temp_v1_3 = this->unk_199;
                this->unk_152 = 0;
                this->unk_18C = temp_v0_6 + 3;
                this->unk_19A = 1 - temp_v0_6;
                if (temp_v1_3 == 0) {
                    this->unk_199 = temp_v1_3 + 1;
                    spEE = temp_t0;
                    Item_DropCollectibleRandom(globalCtx, NULL, (Vec3f *) &this->actor.focus, 0x60);
                }
            } else {
                this->unk_18C = 0;
            }
            if ((s32) temp_t0 < 0) {
                phi_v0_2 = -(s32) temp_t0;
            } else {
                phi_v0_2 = (s32) temp_t0;
            }
            if ((phi_v0_2 >= 0x4001) && ((spF0->toucher.dmgFlags & 0x10) == 0)) {
                temp_v0_7 = this->unk_18C;
                if (temp_v0_7 == 4) {
                    this->unk_18C = 3;
                } else if (temp_v0_7 == 1) {
                    this->unk_18C = 5;
                }
            }
            temp_t7 = *(&D_80957530 + (this->unk_18C * 2)) & this->unk_14E;
            temp_s0->unk_14E = temp_t7;
            phi_v0_3 = 0;
            if ((temp_t7 & 0xFFFF) == 0) {
                Actor_MarkForDeath(temp_s0);
                return;
            }
            temp_s0->unk_150 = 0U;
            do {
                temp_v0_8 = (phi_v0_3 + 1) & 0xFF;
                phi_v0_3 = temp_v0_8;
                if ((*(&D_8095732C + (phi_v0_3 * 2)) & temp_s0->unk_14E) != 0) {
                    temp_s0->unk_150 = (u8) (temp_s0->unk_150 + 1);
                }
            } while (temp_v0_8 < 0xB);
            temp_t5 = this->unk_14E & ~*(&D_80957530 + (this->unk_18C * 2));
            this->unk_14E = temp_t5;
            if ((temp_t5 & 0x3FF) == 0) {
                this->unk_192 = 0xA;
            }
            temp_v0_9 = temp_s0->unk_14E;
            temp_a0 = temp_v0_9 & 1;
            if ((temp_a0 != 0) && ((temp_v0_9 & 0x80) != 0)) {
                temp_s0->unk_18D = 0U;
            } else {
                temp_a3 = temp_v0_9 & 2;
                if ((temp_a3 != 0) && ((temp_v0_9 & 8) != 0)) {
                    temp_s0->unk_18D = 1U;
                } else {
                    temp_a1 = temp_v0_9 & 4;
                    if ((temp_a1 != 0) && (phi_t3 = 2U, ((temp_v0_9 & 0x10) != 0))) {
                        goto block_89;
                    }
                    temp_a2 = temp_v0_9 & 0x40;
                    if ((temp_a2 != 0) && ((temp_v0_9 & 0x80) != 0)) {
                        temp_s0->unk_18D = 3U;
                    } else if ((temp_a0 != 0) && ((temp_v0_9 & 0x20) != 0)) {
                        temp_s0->unk_18D = 4U;
                    } else if ((temp_a0 != 0) && (temp_a3 != 0)) {
                        temp_s0->unk_18D = 5U;
                    } else if ((temp_a2 != 0) && ((temp_v0_9 & 8) != 0)) {
                        temp_s0->unk_18D = 6U;
                    } else {
                        if ((temp_a1 != 0) && (phi_t3 = 7U, ((temp_v0_9 & 0x20) != 0))) {
                            goto block_89;
                        }
                        temp_v1_4 = temp_v0_9 & 0x10;
                        if ((temp_v1_4 != 0) && ((temp_v0_9 & 0x80) != 0)) {
                            temp_s0->unk_18D = 8U;
                        } else if (temp_a0 != 0) {
                            temp_s0->unk_18D = 9U;
                        } else if (temp_a3 != 0) {
                            temp_s0->unk_18D = 0xAU;
                        } else if (temp_a1 != 0) {
                            temp_s0->unk_18D = 0xBU;
                        } else if ((temp_v0_9 & 0x20) != 0) {
                            temp_s0->unk_18D = 0xCU;
                        } else if (temp_a2 != 0) {
                            temp_s0->unk_18D = 0xDU;
                        } else if ((temp_v0_9 & 8) != 0) {
                            temp_s0->unk_18D = 0xEU;
                        } else if (temp_v1_4 != 0) {
                            temp_s0->unk_18D = 0xFU;
                        } else if ((temp_v0_9 & 0x80) != 0) {
                            temp_s0->unk_18D = 0x10U;
                        } else if ((temp_v0_9 & 0x100) != 0) {
                            temp_s0->unk_18D = 0x11U;
                        } else {
                            phi_t3 = 0x64U;
                            if ((temp_v0_9 & 0x200) != 0) {
                                temp_s0->unk_18D = 0x12U;
                            } else {
block_89:
                                temp_s0->unk_18D = phi_t3;
                            }
                        }
                    }
                }
            }
            if (temp_s0->unk_18D == 0x64) {
                temp_s0->unk_18D = 0U;
            }
            Matrix_RotateY(this->actor.shape.rot.y, 0U);
            SysMatrix_MultiplyVector3fByState((temp_s0->unk_18D * 0xC) + &D_80957344, (Vec3f *) &spFC);
            temp_s0->world.pos.x += spFC;
            temp_v1_5 = temp_s0->unk_18D * 0xC;
            temp_v0_10 = temp_v1_5 + &D_80957344;
            temp_s0->world.pos.y += sp100;
            temp_a0_2 = temp_v1_5 + &D_80957428;
            temp_s0->world.pos.z += sp104;
            temp_s0->unk_154 = (f32) (-temp_v0_10->unk_0 / this->actor.scale.x);
            temp_s0->unk_158 = (f32) (-temp_v0_10->unk_4 / this->actor.scale.x);
            temp_s0->unk_15C = (f32) (-temp_v0_10->unk_8 / this->actor.scale.x);
            temp_s0->unk_174 = (f32) temp_a0_2->unk_0;
            temp_s0->unk_14C = 1;
            temp_s0->gravity = -1.0f;
            temp_s0->unk_178 = (f32) temp_a0_2->unk_4;
            temp_s0->world.rot.y = (s32) randPlusMinusPoint5Scaled(16384.0f) + this->actor.yawTowardsPlayer + 0x8000;
            temp_v0_11 = spF0->toucher.dmgFlags;
            if (((temp_v0_11 & 0x10) != 0) || ((temp_v0_11 & 8) != 0) || (temp_v0_11 & 0x80000000)) {
                temp_s0->velocity.y = Rand_ZeroFloat(3.0f) + 6.0f;
                phi_f10 = Rand_ZeroFloat(4.0f) + 6.0f;
            } else {
                temp_s0->velocity.y = Rand_ZeroFloat(2.0f) + 3.0f;
                phi_f10 = Rand_ZeroFloat(2.0f) + 3.0f;
            }
            temp_s0->speedXZ = phi_f10;
            if ((s32) temp_s0->unk_150 >= 4) {
                temp_s0->unk_16E = (s16) (s32) (Rand_ZeroFloat(10.0f) + 6.0f);
                temp_s0->unk_170 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 6.0f);
            } else {
                temp_s0->unk_16E = (s16) (s32) (Rand_ZeroFloat(7.0f) + 3.0f);
                temp_s0->unk_170 = (s16) (s32) (Rand_ZeroFloat(7.0f) + 3.0f);
            }
            temp_s0->unk_168 = (s16) (s32) randPlusMinusPoint5Scaled(6144.0f);
            if (Rand_ZeroOne() < 0.5f) {
                temp_s0->unk_17C = 1;
            } else {
                temp_s0->unk_17C = -1;
            }
            temp_s0->unk_14A = 0x64;
            temp_t9 = temp_s0->flags & ~1;
            temp_s0->flags = temp_t9;
            temp_s0->flags = temp_t9 | 0x2000000;
            this->unk_18E = 5;
            Audio_PlayActorSound2((Actor *) this, 0x1811U);
            goto block_104;
        }
block_104:
        this->actor.focus.pos.y = this->actor.world.pos.y;
        this->actor.focus.pos.x = this->actor.world.pos.x;
        temp_s0_2 = &this->unk_1A4;
        this->actor.focus.pos.y += 44.0f;
        this->actor.focus.pos.z = this->actor.world.pos.z;
        Collider_UpdateCylinder((Actor *) this, temp_s0_2);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp54 = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) temp_s0_2);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) temp_s0_2);
        if (this->actor.xzDistToPlayer > 500.0f) {
            this->unk_14E = 0xFFFF;
            this->actor.flags |= 1;
        }
        temp_v0_12 = this->unk_18E;
        if (temp_v0_12 != 0) {
            if ((s32) temp_v0_12 >= 5) {
                this->unk_190 += 0xFF;
                if ((s32) this->unk_190 >= 0x100) {
                    this->unk_190 = 0xFF;
                }
            } else {
                this->unk_190 += -0x41;
                if ((s32) this->unk_190 < 0) {
                    this->unk_190 = 0;
                }
            }
            this->unk_18E += -1;
            return;
        }
    default:
        return;
    case 1:
    case 2:
        if (this->unk_198 != 0) {
            this->actor.velocity.y = -2.0f;
            Actor_ApplyMovement((Actor *) this);
        } else {
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        }
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 10.0f, 50.0f, 5U);
        spE8 = this->actor.world.pos.x;
        temp_f0 = this->actor.world.pos.y;
        spE4 = temp_f0;
        temp_f2 = this->actor.world.pos.z;
        spE0 = temp_f2;
        temp_f8 = this->actor.yDistToWater;
        temp_s0_3 = this->actor.bgCheckFlags;
        spDC = temp_f8;
        this->actor.world.pos.z = temp_f2 + (((temp_f0 - this->actor.floorHeight) * -50.0f) / 100.0f);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 50.0f, 4U);
        func_80954960(this);
        this->actor.world.pos.x = spE8;
        this->actor.world.pos.y = spE4;
        this->actor.bgCheckFlags = temp_s0_3;
        this->actor.world.pos.z = spE0;
        this->actor.yDistToWater = temp_f8;
        temp_s0_4 = this->actor.bgCheckFlags & 1 & 0xFF;
        if (this->unk_16C != 0) {
            temp_v0_13 = this->unk_166;
            this->unk_160 += temp_v0_13;
            this->unk_166 = temp_v0_13 - 0x800;
            if (((s32) this->unk_160 <= 0) && (temp_s0_4 != 0)) {
                this->unk_160 = 0;
                goto block_123;
            }
        } else {
            temp_v0_14 = this->unk_166;
            this->unk_160 -= temp_v0_14;
            this->unk_166 = temp_v0_14 - 0x800;
            if (((s32) this->unk_160 >= 0) && (temp_s0_4 != 0)) {
                this->unk_160 = 0;
block_123:
                this->unk_166 = 0;
            }
        }
        if ((s32) this->unk_166 < -0xC00) {
            this->unk_166 = -0xC00;
        }
        if (this->unk_16D != 0) {
            temp_v0_15 = this->unk_16A;
            this->unk_164 += temp_v0_15;
            this->unk_16A = temp_v0_15 - 0x800;
            if (((s32) this->unk_164 <= 0) && (temp_s0_4 != 0)) {
                this->unk_164 = 0;
                goto block_133;
            }
        } else {
            temp_v0_16 = this->unk_16A;
            this->unk_164 -= temp_v0_16;
            this->unk_16A = temp_v0_16 - 0x800;
            if (((s32) this->unk_164 >= 0) && (temp_s0_4 != 0)) {
                this->unk_164 = 0;
block_133:
                this->unk_16A = 0;
            }
        }
        if ((s32) this->unk_16A < -0xC00) {
            this->unk_16A = -0xC00;
        }
        temp_v0_17 = this->actor.bgCheckFlags;
        if ((temp_v0_17 & 8) != 0) {
            if ((temp_v0_17 & 1) == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x28B4U);
            }
            this->actor.speedXZ *= -0.5f;
        }
        if ((this->actor.bgCheckFlags & 0x40) != 0) {
            this->unk_14C = 4;
            Audio_PlayActorSound2((Actor *) this, 0x2817U);
            this->unk_170 = 0;
            temp_s0_5 = &this->actor.world;
            this->unk_16E = this->unk_170;
            this->actor.world.pos.y += this->actor.yDistToWater;
            EffectSsGSplash_Spawn(globalCtx, (Vec3f *) temp_s0_5, NULL, NULL, (s16) 0, (s16) ((this->unk_150 * 0x14) + 0x12C));
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) temp_s0_5, 0x96, 0x28A, (s16) 0);
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) temp_s0_5, 0x12C, 0x320, (s16) 5);
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = 0.0f;
            return;
        }
        if (temp_s0_4 != 0) {
            temp_v0_18 = func_800C99D4(&globalCtx->colCtx, this->actor.floorPoly, (s32) this->actor.floorBgId);
            if ((temp_v0_18 == 0xF) || (temp_v0_18 == 0xE)) {
                this->unk_197 = 1;
            } else if (temp_v0_18 == 5) {
                this->unk_197 = -1;
            }
            temp_v0_19 = this->unk_172;
            if ((s32) temp_v0_19 <= 0) {
                this->unk_172 = temp_v0_19 + 1;
                if (this->unk_197 != 0) {
                    this->actor.velocity.y = 0.0f;
                } else {
                    this->actor.velocity.y *= -0.3f;
                    this->actor.world.rot.y += (s32) randPlusMinusPoint5Scaled(16384.0f);
                }
                sp11F = 1;
            } else {
                this->actor.velocity.y = 0.0f;
            }
            temp_v0_20 = this->unk_197;
            if (temp_v0_20 != 0) {
                if ((s32) temp_v0_20 > 0) {
                    this->actor.speedXZ = 0.0f;
                    goto block_164;
                }
                if ((this->unk_180 > 0.1f) || (this->unk_188 > 0.1f)) {
                    this->unk_14A = 0xA;
                    if ((this->actor.bgCheckFlags & 8) != 0) {
                        this->unk_14C = 3;
                        this->actor.speedXZ = 0.0f;
                    } else {
                        SysMatrix_SetStateXRotation(this->unk_180);
                        SysMatrix_InsertZRotation_f(this->unk_188, 1);
                        SysMatrix_GetStateTranslationAndScaledY((f32) gGameInfo->data[1268] + 10.0f, (Vec3f *) &spC8);
                        Math_ApproachF((f32 *) &this->actor.velocity, spC8, 0.5f, ((f32) gGameInfo->data[1269] * 0.01f) + 0.1f);
                        Math_ApproachF(&this->actor.velocity.z, spD0, 0.5f, ((f32) gGameInfo->data[1269] * 0.01f) + 0.3f);
                        temp_f2_2 = this->actor.velocity.x;
                        temp_f12 = this->actor.velocity.z;
                        this->actor.world.rot.y = Math_Atan2S(spC8, spD0);
                        this->unk_198 = 1;
                        this->actor.speedXZ = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12 * temp_f12));
                        goto block_164;
                    }
                } else {
                    this->unk_198 = 0;
                    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 0.1f);
                    goto block_164;
                }
            } else {
                this->actor.speedXZ *= 0.7f;
block_164:
                if (this->unk_160 == 0) {
                    temp_v0_21 = this->unk_16E;
                    if (temp_v0_21 != 0) {
                        sp11F = 1;
                        if (this->unk_197 != 0) {
                            this->unk_160 = 0;
                            this->unk_16E = 0;
                        } else {
                            this->unk_166 = temp_v0_21 << 9;
                            if (temp_v0_21 != 0) {
                                this->unk_16E = temp_v0_21 - 5;
                                if ((s32) this->unk_16E <= 0) {
                                    this->unk_16E = 0;
                                }
                            }
                            if (Rand_ZeroOne() < 0.5f) {
                                this->unk_16C = 1;
                            } else {
                                this->unk_16C = 0;
                            }
                        }
                    }
                }
                if (this->unk_164 == 0) {
                    temp_v0_22 = this->unk_170;
                    if (temp_v0_22 != 0) {
                        sp11F = 1;
                        if (this->unk_197 != 0) {
                            this->unk_164 = 0;
                            this->unk_170 = 0;
                        } else {
                            this->unk_16A = temp_v0_22 << 9;
                            if (temp_v0_22 != 0) {
                                this->unk_170 = temp_v0_22 - 5;
                                if ((s32) this->unk_170 <= 0) {
                                    this->unk_170 = 0;
                                }
                            }
                            if (Rand_ZeroOne() < 0.5f) {
                                this->unk_16D = 1;
                            } else {
                                this->unk_16D = 0;
                            }
                        }
                    }
                }
                Math_ApproachS((s16 *) &this->actor.shape, (s16) (this->unk_17C << 0xE), 1, 0x2000);
                goto block_186;
            }
        } else {
            this->actor.shape.rot.y += this->unk_168;
            this->actor.shape.rot.x += this->unk_17C * 0x7D0;
block_186:
            if (sp11F != 0) {
                if ((s32) this->unk_197 > 0) {
                    Audio_PlayActorSound2((Actor *) this, 0x80EU);
                } else {
                    Audio_PlayActorSound2((Actor *) this, 0x28B4U);
                }
            }
            if ((sp11F != 0) && ((s32) this->unk_197 >= 0)) {
                spB8.unk_0 = (s32) D_8095753C.unk_0;
                spB8.unk_4 = (s32) D_8095753C.unk_4;
                spB8.unk_8 = (s32) D_8095753C.unk_8;
                if (this->unk_197 != 0) {
                    sp9C = D_8095754C;
                    sp98 = D_8095754C;
                } else {
                    sp9C = D_80957548;
                    sp98 = D_80957548;
                }
                spAC = 0.0f;
                spB0 = 0.1f;
                spB4 = 0.0f;
                spA4 = this->actor.floorHeight + 3.0f;
                temp_t9_2 = this->unk_150;
                temp_f4 = (f32) temp_t9_2;
                phi_f4 = temp_f4;
                if ((s32) temp_t9_2 < 0) {
                    phi_f4 = temp_f4 + 4294967296.0f;
                }
                temp_v1_6 = (s16) (s32) (phi_f4 * 0.5f) + 3;
                phi_s0 = 0;
                if (temp_v1_6 > 0) {
                    sp54 = (CollisionCheckContext *) temp_v1_6;
                    do {
                        temp_t3 = this->unk_150;
                        temp_f4_2 = (f32) temp_t3;
                        phi_f4_2 = temp_f4_2;
                        if ((s32) temp_t3 < 0) {
                            phi_f4_2 = temp_f4_2 + 4294967296.0f;
                        }
                        spA0 = randPlusMinusPoint5Scaled((phi_f4_2 * 0.5f) + 20.0f) + this->actor.world.pos.x;
                        temp_t2_2 = this->unk_150;
                        temp_f6 = (f32) temp_t2_2;
                        phi_f6 = temp_f6;
                        if ((s32) temp_t2_2 < 0) {
                            phi_f6 = temp_f6 + 4294967296.0f;
                        }
                        spA8 = randPlusMinusPoint5Scaled((phi_f6 * 0.5f) + 20.0f) + this->actor.world.pos.z;
                        func_800B0F18(globalCtx, (Vec3f *) &spA0, (Vec3f *) &spB8, (Vec3f *) &spAC, (Color_RGBA8 *) &sp9C, (Color_RGBA8 *) &sp98, (s16) 0x64, (s16) 5, (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
                        temp_s0_6 = phi_s0 + 1;
                        phi_s0 = temp_s0_6;
                    } while ((s32) temp_s0_6 < (s32) sp54);
                }
            }
            temp_v1_7 = this->unk_14A;
            if (temp_v1_7 == 0) {
                phi_v0_4 = 0;
            } else {
                this->unk_14A = temp_v1_7 - 1;
                phi_v0_4 = this->unk_14A;
            }
            if (phi_v0_4 == 0) {
                this->unk_14C = 3;
            }
        }
    case 3:
    case 4:
        if (this->actor.parent->unk_14E == 0xFFFF) {
            Actor_MarkForDeath((Actor *) this);
        }
        phi_f0 = 0.0f;
        if ((s32) this->unk_197 > 0) {
            phi_f0 = -150.0f;
        }
        Math_ApproachF(&this->actor.shape.yOffset, 100.0f + phi_f0, 1.0f, 5.0f);
        if (this->unk_14C == 4) {
            temp_f0_2 = sp108->speedXZ;
            sp50 = &this->actor.shape;
            if ((temp_f0_2 > 0.0f) && (sp108->world.pos.y < this->actor.world.pos.y) && (this->actor.xyzDistToPlayerSq < 2500.0f)) {
                Math_ApproachF(&this->actor.speedXZ, temp_f0_2, 1.0f, 0.2f);
                if (this->actor.speedXZ > 1.0f) {
                    this->actor.speedXZ = 1.0f;
                }
                if (Math_SmoothStepToS(&this->actor.world.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 1, 0x1000, (s16) 0) > 0) {
                    this->unk_168 = (s16) (s32) (this->actor.speedXZ * 1000.0f);
                } else {
                    this->unk_168 = (s16) (s32) (this->actor.speedXZ * -1000.0f);
                }
            }
            if ((this->actor.bgCheckFlags & 1) != 0) {
                this->actor.speedXZ = 0.0f;
            }
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            temp_s0_7 = &this->actor.speedXZ;
            if (this->actor.speedXZ != 0.0f) {
                Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 50.0f, 5U);
                if ((this->actor.bgCheckFlags & 8) != 0) {
                    this->actor.speedXZ *= -0.5f;
                    if ((s32) this->unk_168 > 0) {
                        this->unk_168 = -0x7D0;
                    } else {
                        this->unk_168 = 0x7D0;
                    }
                }
                Math_ApproachZeroF(temp_s0_7, 1.0f, 0.15f);
            }
            this->actor.shape.rot.y += this->unk_168;
            Math_ApproachS(&this->unk_168, 0, 1, 0x3A);
            Math_ApproachS((s16 *) sp50, (s16) (this->unk_17C << 0xE), 2, 0x1000);
            Math_ApproachS(&this->unk_160, (s16) (s32) (Math_SinS((s16) (this->unk_148 * 0x9C4)) * 500.0f), 2, 0x1000);
            Math_ApproachS(&this->unk_164, (s16) (s32) (Math_CosS((s16) (this->unk_148 * 0xBB8)) * 500.0f), 2, 0x1000);
            Math_ApproachZeroF(&this->unk_180, 0.5f, 0.2f);
            Math_ApproachZeroF(&this->unk_188, 0.5f, 0.2f);
            temp_f2_3 = fabsf(this->actor.speedXZ);
            if (temp_f2_3 > 1.0f) {
                phi_v0_5 = 0;
            } else {
                phi_v0_5 = 7;
                if (temp_f2_3 > 0.5f) {
                    phi_v0_5 = 3;
                }
            }
            if ((this->unk_148 & phi_v0_5) == 0) {
                temp_v0_23 = this->unk_150;
                if ((s32) temp_v0_23 < 3) {
                    phi_v0_6 = 0;
                } else {
                    phi_v0_6 = 0xC8;
                    if ((s32) temp_v0_23 < 6) {
                        phi_v0_6 = 0x64;
                    }
                }
                EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &this->actor.world, phi_v0_6, (s16) (phi_v0_6 + 0x1F4), (s16) 0);
            }
        } else if (globalCtx->actorCtx.unk2 != 0) {
            temp_f2_4 = this->actor.xyzDistToPlayerSq;
            if (temp_f2_4 < 10000.0f) {
                sp88 = (100.0f - sqrtf(temp_f2_4)) * 0.05f;
                this->unk_14C = 1;
                this->actor.gravity = -1.0f;
                this->actor.world.rot.y = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
                if ((s32) this->unk_150 >= 4) {
                    this->unk_16E = (s16) (s32) (Rand_ZeroFloat(10.0f) + 6.0f);
                    this->unk_170 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 6.0f);
                    this->actor.velocity.y = 2.0f + sp88;
                    phi_f0_2 = Rand_ZeroFloat(1.0f);
                } else {
                    this->unk_16E = (s16) (s32) (Rand_ZeroFloat(7.0f) + 3.0f);
                    this->unk_170 = (s16) (s32) (Rand_ZeroFloat(7.0f) + 3.0f);
                    this->actor.velocity.y = 3.0f + sp88;
                    phi_f0_2 = Rand_ZeroFloat(1.5f);
                }
                this->actor.speedXZ = phi_f0_2;
                this->unk_168 = (s16) (s32) randPlusMinusPoint5Scaled(6144.0f);
                if (Rand_ZeroOne() < 0.5f) {
                    this->unk_17C = 1;
                } else {
                    this->unk_17C = -1;
                }
                this->unk_14A = 0x46;
            }
        }
        if (this->unk_16E == 0) {
            temp_s0_8 = globalCtx->actorCtx.actorList[3].first;
            phi_s0_2 = temp_s0_8;
            if (temp_s0_8 != 0) {
                phi_v1 = 1;
                phi_f18 = 100.0f;
                phi_v1 = 1;
                phi_f18 = 100.0f;
                do {
                    if (phi_v1 != phi_s0_2->params) {

                    } else {
                        temp_f12_2 = this->actor.world.pos.x - phi_s0_2->world.pos.x;
                        temp_f2_5 = this->actor.world.pos.y - phi_s0_2->world.pos.y;
                        temp_f14 = this->actor.world.pos.z - phi_s0_2->world.pos.z;
                        temp_f16 = sqrtf((temp_f12_2 * temp_f12_2) + (temp_f2_5 * temp_f2_5) + (temp_f14 * temp_f14));
                        if (temp_f16 < phi_f18) {
                            sp74 = (phi_f18 - temp_f16) * 0.05f;
                            this->unk_14C = 1;
                            this->actor.gravity = -1.0f;
                            this->actor.world.rot.y = Math_Atan2S(temp_f12_2, temp_f14);
                            if ((s32) this->unk_150 >= 4) {
                                this->unk_16E = (s16) (s32) (Rand_ZeroFloat(10.0f) + 6.0f);
                                temp_t1_2 = (s32) (Rand_ZeroFloat(10.0f) + 6.0f);
                                this->actor.velocity.y = 2.5f + sp74;
                                this->unk_170 = (s16) temp_t1_2;
                                this->actor.speedXZ = 3.0f + sp74;
                            } else {
                                this->unk_16E = (s16) (s32) (Rand_ZeroFloat(7.0f) + 3.0f);
                                temp_t5_2 = (s32) (Rand_ZeroFloat(7.0f) + 3.0f);
                                this->actor.velocity.y = 5.0f + sp74;
                                this->unk_170 = (s16) temp_t5_2;
                                this->actor.speedXZ = 4.0f + sp74;
                            }
                            this->unk_168 = (s16) (s32) randPlusMinusPoint5Scaled(6144.0f);
                            if (Rand_ZeroOne() < 0.5f) {
                                this->unk_17C = 1;
                            } else {
                                this->unk_17C = -1;
                            }
                            this->unk_14A = 0x46;
                        }
                    }
                    temp_s0_9 = phi_s0_2->next;
                    phi_s0_2 = temp_s0_9;
                } while (temp_s0_9 != 0);
            }
        }
        temp_v0_24 = this->unk_196;
        if (temp_v0_24 != 0) {
            if (temp_v0_24 != 1) {
                return;
            }
            if ((globalCtx->msgCtx.unk1202A == 4) && (globalCtx->msgCtx.unk1202E == 7)) {
                this->unk_14C = 5;
                this->unk_16E = 1;
                play_sound(0x4807U);
                return;
            }
            /* Duplicate return node #278. Try simplifying control flow for better match */
            return;
        }
        if (globalCtx->msgCtx.unk1202A == 1) {
            this->unk_196 = 1;
            return;
        }
        /* Duplicate return node #278. Try simplifying control flow for better match */
        return;
    case 5:
        temp_s0_10 = this->actor.parent;
        temp_s0_10->unk_152 = 5;
        if (temp_s0_10->unk_14E == 0xFFFF) {
            Actor_MarkForDeath((Actor *) this);
        }
        Matrix_RotateY(temp_s0_10->shape.rot.y, 0U);
        SysMatrix_MultiplyVector3fByState((this->unk_18D * 0xC) + &D_80957344, (Vec3f *) &spFC);
        sp70 = Math_SmoothStepToF((f32 *) &this->actor.world, temp_s0_10->world.pos.x + spFC, 1.0f, 3.0f, 0.0f);
        sp6C = Math_SmoothStepToF(&this->actor.world.pos.y, temp_s0_10->world.pos.y + sp100, 1.0f, 3.0f, 0.0f);
        sp68 = Math_SmoothStepToF(&this->actor.world.pos.z, temp_s0_10->world.pos.z + sp104, 1.0f, 3.0f, 0.0f);
        sp66 = Math_SmoothStepToS((s16 *) &this->actor.shape, temp_s0_10->shape.rot.x, 1, 0x200, (s16) 0);
        sp64 = Math_SmoothStepToS(&this->actor.shape.rot.y, temp_s0_10->shape.rot.y, 1, 0x200, (s16) 0);
        sp62 = Math_SmoothStepToS(&this->actor.shape.rot.z, temp_s0_10->shape.rot.z, 1, 0x200, (s16) 0);
        Math_ApproachS(&this->unk_160, 0, 1, 0x200);
        Math_ApproachS(&this->unk_164, 0, 1, 0x200);
        Math_ApproachZeroF(&this->unk_180, 1.0f, 0.05f);
        Math_ApproachZeroF(&this->unk_188, 1.0f, 0.05f);
        Math_ApproachZeroF(&this->actor.shape.yOffset, 1.0f, 2.0f);
        if (((sp70 + sp6C + sp68) == 0.0f) && ((sp66 + sp64 + sp62 + this->unk_160 + this->unk_164) == 0) && (this->unk_180 == 0.0f) && (this->unk_188 == 0.0f)) {
            temp_s0_10->unk_14E = (u16) (temp_s0_10->unk_14E | this->unk_14E);
            temp_s0_10->flags |= 1;
            Actor_MarkForDeath((Actor *) this);
        }
        /* Duplicate return node #278. Try simplifying control flow for better match */
        return;
    }
}

void EnKanban_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp88;
    Actor *sp7C;
    Gfx *sp68;
    Gfx *sp5C;
    Gfx *sp40;
    Gfx *sp2C;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
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
    Gfx *temp_v0_27;
    Gfx *temp_v0_29;
    Gfx *temp_v0_2;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a1;
    s32 temp_a1_2;
    u16 *temp_v0_30;
    u16 temp_a0_3;
    u16 temp_v0_26;
    u8 temp_v0_11;
    u8 temp_v0_28;
    f32 phi_f2;
    u16 phi_a0;
    ? *phi_a3;
    s32 phi_a1;
    u16 phi_a0_2;
    u16 phi_a0_3;
    f32 phi_f0;
    u16 phi_a0_4;
    ? *phi_a3_2;
    s32 phi_a1_2;
    u16 phi_a0_5;
    u16 phi_a0_6;
    f32 phi_f0_2;
    f32 phi_f0_3;
    f32 phi_f2_2;
    u16 *phi_v0;
    Gfx *phi_v1;
    u32 phi_v0_2;
    EnKanban *this = (EnKanban *) thisx;

    sp7C = globalCtx->actorCtx.actorList[2].first;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_a0->polyOpa.d - 0x400;
    temp_a0->polyOpa.d = temp_v0;
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp20 = temp_v0;
    temp_s1 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000C30;
    temp_v0_2->words.w0 = 0xDE000000;
    if (this->unk_14C != 0) {
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        SysMatrix_RotateStateAroundXAxis(this->unk_180);
        SysMatrix_InsertZRotation_f(this->unk_188, 1);
        SysMatrix_InsertTranslation(0.0f, this->actor.shape.yOffset, 0.0f, 1);
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
        temp_f2 = fabsf(Math_SinS(this->unk_160) * this->unk_178);
        sp88 = temp_f2;
        temp_f0 = fabsf(Math_SinS(this->unk_164) * this->unk_174);
        phi_f2 = temp_f2;
        if (temp_f2 < temp_f0) {
            phi_f2 = temp_f0;
        }
        SysMatrix_InsertTranslation(0.0f, 0.0f, phi_f2 * -(f32) this->unk_17C, 1);
        SysMatrix_InsertXRotation_s(this->unk_160, 1);
        Matrix_RotateY(this->unk_164, 1U);
        SysMatrix_InsertTranslation(this->unk_154, this->unk_158, this->unk_15C - 100.0f, 1);
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp68 = temp_v0_3;
        sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        phi_a1 = 3;
        if ((D_8095732C & this->unk_14E) != 0) {
            temp_v0_4 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDE000000;
            temp_v0_4->words.w1 = D_80957550;
        }
        phi_a0 = this->unk_14E;
        phi_a3 = &D_80957332;
        if ((D_8095732E & this->unk_14E) != 0) {
            temp_v0_5 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_5->words.w1 = D_80957554;
            phi_a0 = this->unk_14E;
        }
        if ((D_80957330 & phi_a0) != 0) {
            temp_v0_6 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = *D_80957558;
        }
        do {
            if ((phi_a3->unk_0 & this->unk_14E) != 0) {
                temp_v0_7 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_7 + 8;
                temp_v0_7->words.w0 = 0xDE000000;
                temp_v0_7->words.w1 = *(&D_80957550 + (phi_a1 * 4));
            }
            phi_a0_2 = this->unk_14E;
            if ((phi_a3->unk_2 & this->unk_14E) != 0) {
                temp_v0_8 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_8 + 8;
                temp_v0_8->words.w0 = 0xDE000000;
                temp_v0_8->words.w1 = (&D_80957550 + (phi_a1 * 4))->unk_4;
                phi_a0_2 = this->unk_14E;
            }
            phi_a0_3 = phi_a0_2;
            if ((phi_a3->unk_4 & phi_a0_2) != 0) {
                temp_v0_9 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xDE000000;
                temp_v0_9->words.w1 = (&D_80957550 + (phi_a1 * 4))->unk_8;
                phi_a0_3 = this->unk_14E;
            }
            if ((phi_a3->unk_6 & phi_a0_3) != 0) {
                temp_v0_10 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_10 + 8;
                temp_v0_10->words.w0 = 0xDE000000;
                temp_v0_10->words.w1 = (&D_80957550 + (phi_a1 * 4))->unk_C;
            }
            temp_a1 = phi_a1 + 4;
            phi_a3 += 8;
            phi_a1 = temp_a1;
        } while (temp_a1 != 0xB);
    } else {
        temp_v0_11 = sp7C->unk_14B;
        phi_f0 = 0.0f;
        phi_f0_2 = 0.0f;
        if ((temp_v0_11 == 4) || (temp_v0_11 == 3)) {
            phi_f0 = -15.0f;
        }
        this->actor.world.pos.y = this->actor.home.pos.y + phi_f0;
        SysMatrix_InsertTranslation(0.0f, 0.0f, -100.0f, 1);
        temp_v0_12 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xDA380003;
        sp5C = temp_v0_12;
        sp5C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_a0_3 = this->unk_14E;
        phi_a1_2 = 3;
        if (temp_a0_3 == 0xFFFF) {
            temp_v0_13 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_13 + 8;
            temp_v0_13->words.w1 = (u32) &D_0405AED0;
            temp_v0_13->words.w0 = 0xDE000000;
        } else {
            phi_a3_2 = &D_80957332;
            if ((D_8095732C & temp_a0_3) != 0) {
                temp_v0_14 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_14 + 8;
                temp_v0_14->words.w0 = 0xDE000000;
                temp_v0_14->words.w1 = D_80957550;
            }
            phi_a0_4 = this->unk_14E;
            if ((D_8095732E & this->unk_14E) != 0) {
                temp_v0_15 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_15 + 8;
                temp_v0_15->words.w0 = 0xDE000000;
                temp_v0_15->words.w1 = D_80957554;
                phi_a0_4 = this->unk_14E;
            }
            if ((D_80957330 & phi_a0_4) != 0) {
                temp_v0_16 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_16 + 8;
                temp_v0_16->words.w0 = 0xDE000000;
                temp_v0_16->words.w1 = *D_80957558;
            }
            do {
                if ((phi_a3_2->unk_0 & this->unk_14E) != 0) {
                    temp_v0_17 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_17 + 8;
                    temp_v0_17->words.w0 = 0xDE000000;
                    temp_v0_17->words.w1 = *(&D_80957550 + (phi_a1_2 * 4));
                }
                phi_a0_5 = this->unk_14E;
                if ((phi_a3_2->unk_2 & this->unk_14E) != 0) {
                    temp_v0_18 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_18 + 8;
                    temp_v0_18->words.w0 = 0xDE000000;
                    temp_v0_18->words.w1 = (&D_80957550 + (phi_a1_2 * 4))->unk_4;
                    phi_a0_5 = this->unk_14E;
                }
                phi_a0_6 = phi_a0_5;
                if ((phi_a3_2->unk_4 & phi_a0_5) != 0) {
                    temp_v0_19 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_19 + 8;
                    temp_v0_19->words.w0 = 0xDE000000;
                    temp_v0_19->words.w1 = (&D_80957550 + (phi_a1_2 * 4))->unk_8;
                    phi_a0_6 = this->unk_14E;
                }
                if ((phi_a3_2->unk_6 & phi_a0_6) != 0) {
                    temp_v0_20 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_20 + 8;
                    temp_v0_20->words.w0 = 0xDE000000;
                    temp_v0_20->words.w1 = (&D_80957550 + (phi_a1_2 * 4))->unk_C;
                }
                temp_a1_2 = phi_a1_2 + 4;
                phi_a3_2 += 8;
                phi_a1_2 = temp_a1_2;
            } while (temp_a1_2 != 0xB);
        }
        if (this->unk_190 != 0) {
            if (this->unk_18C == 0) {
                phi_f0_2 = -1200.0f;
            }
            SysMatrix_InsertTranslation(0.0f, 4400.0f + phi_f0_2, 200.0f, 1);
            SysMatrix_InsertZRotation_f(*(&D_80957D7C + (this->unk_18C * 4)), 1);
            Matrix_Scale(0.0f, 10.0f, 2.0f, 1);
            temp_v0_21 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_21 + 8;
            temp_v0_21->words.w1 = 0;
            temp_v0_21->words.w0 = 0xE7000000;
            temp_v0_22 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_22 + 8;
            temp_v0_22->words.w0 = 0xFA000000;
            temp_v0_22->words.w1 = (this->unk_190 & 0xFF) | ~0xFF;
            temp_v0_23 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_23 + 8;
            temp_v0_23->words.w1 = -0x6A00;
            temp_v0_23->words.w0 = 0xFB000000;
            temp_v0_24 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_24 + 8;
            temp_v0_24->words.w0 = 0xDA380003;
            sp40 = temp_v0_24;
            sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_25 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_25 + 8;
            temp_v0_25->words.w1 = (u32) &D_06001630;
            temp_v0_25->words.w0 = 0xDE000000;
        }
    }
    temp_f2_2 = this->actor.projectedPos.z;
    if ((temp_f2_2 <= 400.0f) && (temp_f2_2 > 0.0f) && (this->actor.floorHeight > -3000.0f) && ((this->unk_16E != 0) || (this->unk_170 != 0))) {
        temp_v0_26 = gSaveContext.time;
        phi_v0_2 = (u32) temp_v0_26;
        if ((s32) temp_v0_26 >= 0x8000) {
            phi_v0_2 = (0xFFFF - temp_v0_26) & 0xFFFF;
        }
        temp_f0_2 = ((f32) phi_v0_2 * 0.00275f) + 10.0f;
        phi_f0_3 = temp_f0_2;
        if (temp_f2_2 > 300.0f) {
            phi_f0_3 = temp_f0_2 * ((400.0f - temp_f2_2) * 0.01f);
        }
        temp_v0_27 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_27 + 8;
        temp_v0_27->words.w1 = (s32) phi_f0_3 & 0xFF;
        temp_v0_27->words.w0 = 0xFA000000;
        temp_v0_28 = sp7C->unk_14B;
        if ((temp_v0_28 == 4) || (temp_v0_28 == 3)) {
            phi_f2_2 = 0.0f;
        } else {
            phi_f2_2 = ((this->actor.world.pos.y - this->actor.floorHeight) * -50.0f) / 100.0f;
        }
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.floorHeight, this->actor.world.pos.z + phi_f2_2, 0);
        SysMatrix_RotateStateAroundXAxis(this->unk_180);
        SysMatrix_InsertZRotation_f(this->unk_188, 1);
        Matrix_Scale(this->actor.scale.x, 0.0f, this->actor.scale.z, 1);
        if (this->unk_14C == 0) {
            SysMatrix_RotateStateAroundXAxis(-0.62831855f);
        }
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
        SysMatrix_InsertXRotation_s(this->unk_160, 1);
        Matrix_RotateY(this->unk_164, 1U);
        SysMatrix_InsertTranslation(this->unk_154, this->unk_158, this->unk_15C, 1);
        temp_v0_29 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_29 + 8;
        temp_v0_29->words.w0 = 0xDA380003;
        sp2C = temp_v0_29;
        sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        phi_v0 = D_8095757C;
        phi_v1 = sp20;
        do {
            temp_v0_30 = phi_v0 + 2;
            phi_v0 = temp_v0_30;
            if ((*phi_v0 & this->unk_14E) != 0) {
                phi_v1->texture.cmd = 0xFF;
            } else {
                phi_v1->texture.cmd = 0;
            }
            phi_v1 += 1;
        } while (temp_v0_30 != &D_80957D7C);
        temp_v0_31 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_31 + 8;
        temp_v0_31->words.w0 = 0xDB060020;
        temp_v0_31->words.w1 = Lib_SegmentedToVirtual((void *) sp20);
        temp_v0_32 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_32 + 8;
        temp_v0_32->words.w1 = (u32) &D_80957DE0;
        temp_v0_32->words.w0 = 0xDE000000;
    }
}
