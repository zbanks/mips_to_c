typedef struct Boss02 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ char pad145[0x1];
    /* 0x0146 */ s16 unk146;                        /* inferred */
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ char pad14A[0x2];
    /* 0x014C */ s16 unk14C;                        /* inferred */
    /* 0x014E */ s16 unk14E;                        /* inferred */
    /* 0x0150 */ s16 unk150;                        /* inferred */
    /* 0x0152 */ s16 unk152;                        /* inferred */
    /* 0x0154 */ s16 unk154;                        /* inferred */
    /* 0x0156 */ s16 unk156;                        /* inferred */
    /* 0x0158 */ s16 unk158;                        /* inferred */
    /* 0x015A */ s16 unk15A;                        /* inferred */
    /* 0x015C */ u8 unk15C;                         /* inferred */
    /* 0x015D */ char pad15D[0x7];                  /* maybe part of unk15C[8]? */
    /* 0x0164 */ f32 unk164;                        /* inferred */
    /* 0x0168 */ f32 unk168;                        /* inferred */
    /* 0x016C */ s16 unk16C;                        /* inferred */
    /* 0x016E */ char pad16E[0x2];
    /* 0x0170 */ f32 unk170;                        /* inferred */
    /* 0x0174 */ f32 unk174;                        /* inferred */
    /* 0x0178 */ f32 unk178;                        /* inferred */
    /* 0x017C */ f32 unk17C;                        /* inferred */
    /* 0x0180 */ f32 unk180;                        /* inferred */
    /* 0x0184 */ f32 unk184;                        /* inferred */
    /* 0x0188 */ f32 unk188;                        /* inferred */
    /* 0x018C */ f32 unk18C;                        /* inferred */
    /* 0x0190 */ s32 unk190;                        /* inferred */
    /* 0x0194 */ s8 unk194;                         /* inferred */
    /* 0x0195 */ u8 unk195;                         /* inferred */
    /* 0x0196 */ s16 unk196;                        /* inferred */
    /* 0x0198 */ s16 unk198;                        /* inferred */
    /* 0x019A */ s16 unk19A;                        /* inferred */
    /* 0x019C */ f32 unk19C;                        /* inferred */
    /* 0x01A0 */ f32 unk1A0;                        /* inferred */
    /* 0x01A4 */ s16 unk1A4;                        /* inferred */
    /* 0x01A6 */ char pad1A6[0x2];
    /* 0x01A8 */ f32 unk1A8;                        /* inferred */
    /* 0x01AC */ f32 unk1AC;                        /* inferred */
    /* 0x01B0 */ f32 unk1B0;                        /* inferred */
    /* 0x01B4 */ f32 unk1B4;                        /* inferred */
    /* 0x01B8 */ f32 unk1B8;                        /* inferred */
    /* 0x01BC */ char pad1BC[0x12C0];               /* maybe part of unk1B8[1201]? */
    /* 0x147C */ Vec3f unk147C;                     /* inferred */
    /* 0x1488 */ Vec3f unk1488;                     /* inferred */
    /* 0x1494 */ char pad1494[0xFC];                /* maybe part of unk1488[22]? */
    /* 0x1590 */ SkelAnime unk1590;                 /* inferred */
    /* 0x15D4 */ Vec3s unk15D4;                     /* inferred */
    /* 0x15DA */ char pad15DA[0x48];                /* maybe part of unk15D4[13]? */
    /* 0x1622 */ Vec3s unk1622;                     /* inferred */
    /* 0x1628 */ char pad1628[0x48];                /* maybe part of unk1622[13]? */
    /* 0x1670 */ void (*actionFunc)(Boss02 *, GlobalContext *);
    /* 0x1674 */ Actor *unk1674;                    /* inferred */
    /* 0x1678 */ s32 unk1678;                       /* inferred */
    /* 0x167C */ Vec3f unk167C;                     /* inferred */
    /* 0x1688 */ ColliderJntSph unk1688;            /* inferred */
    /* 0x16A8 */ ColliderJntSphElement unk16A8;     /* inferred */
    /* 0x16E8 */ char pad16E8[0x540];               /* maybe part of unk16A8[22]? */
    /* 0x1C28 */ ColliderJntSph unk1C28;            /* inferred */
    /* 0x1C48 */ ColliderJntSphElement unk1C48;     /* inferred */
    /* 0x1C88 */ char pad1C88[0x40];
    /* 0x1CC8 */ ColliderCylinder unk1CC8;          /* inferred */
    /* 0x1D14 */ char pad1D14[0x4];
    /* 0x1D18 */ s16 unk1D18;                       /* inferred */
    /* 0x1D1A */ s16 unk1D1A;                       /* inferred */
    /* 0x1D1C */ s32 unk1D1C;                       /* inferred */
    /* 0x1D20 */ s16 unk1D20;                       /* inferred */
    /* 0x1D22 */ char pad1D22[0x1A];                /* maybe part of unk1D20[14]? */
    /* 0x1D3C */ f32 unk1D3C;                       /* inferred */
    /* 0x1D40 */ f32 unk1D40;                       /* inferred */
    /* 0x1D44 */ f32 unk1D44;                       /* inferred */
    /* 0x1D48 */ char pad1D48[0x14];                /* maybe part of unk1D44[6]? */
    /* 0x1D5C */ f32 unk1D5C;                       /* inferred */
    /* 0x1D60 */ char pad1D60[0x10];                /* maybe part of unk1D5C[5]? */
    /* 0x1D70 */ f32 unk1D70;                       /* inferred */
    /* 0x1D74 */ char pad1D74[0xA];                 /* maybe part of unk1D70[3]? */
    /* 0x1D7E */ s16 unk1D7E;                       /* inferred */
} Boss02;                                           /* size = 0x1D80 */

struct _mips2c_stack_Boss02_Destroy {};             /* size 0x0 */

struct _mips2c_stack_Boss02_Draw {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ f32 *sp54;                           /* inferred */
    /* 0x58 */ Vec3f *sp58;                         /* inferred */
    /* 0x5C */ Vec3f *sp5C;                         /* inferred */
    /* 0x60 */ ColliderJntSph *sp60;                /* inferred */
    /* 0x64 */ char pad64[0x4];
    /* 0x68 */ ColliderJntSph *sp68;                /* inferred */
    /* 0x6C */ char pad6C[0x2C];                    /* maybe part of sp68[12]? */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char padB0[0x20];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_Boss02_Init {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ ActorContext *sp4C;                  /* inferred */
    /* 0x50 */ char pad50[0x10];
};                                                  /* size = 0x60 */

struct _mips2c_stack_Boss02_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderJntSph *sp24;                /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad2C[0x10];                    /* maybe part of sp28[5]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809DA1D0 {};              /* size 0x0 */

struct _mips2c_stack_func_809DA22C {};              /* size 0x0 */

struct _mips2c_stack_func_809DA24C {};              /* size 0x0 */

struct _mips2c_stack_func_809DA264 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809DA344 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809DA460 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809DA50C {};              /* size 0x0 */

struct _mips2c_stack_func_809DAA74 {};              /* size 0x0 */

struct _mips2c_stack_func_809DAA98 {};              /* size 0x0 */

struct _mips2c_stack_func_809DAAA8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809DAB78 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ f32 *sp50;                           /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0xC];                     /* maybe part of sp54[4]? */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0x4];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[0x4];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad88[0x4];
    /* 0x8C */ ? sp8C;                              /* inferred */
    /* 0x8C */ char pad8C[0x4];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0x4];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char padA8[0x4];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ Actor *spB0;                         /* inferred */
    /* 0xB4 */ char padB4[0x10];                    /* maybe part of spB0[5]? */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ ? spDC;                              /* inferred */
    /* 0xDC */ char padDC[0x4];
    /* 0xE0 */ Actor *spE0;                         /* inferred */
    /* 0xE4 */ char padE4[0x4];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_809DBFB4 {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809DC218 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809DC78C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809DD0A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809DD0CC {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809DD2F8 {
    /* 0x00 */ char pad0[0x6C];
    /* 0x6C */ void *sp6C;                          /* inferred */
    /* 0x70 */ char pad70[0x4];
    /* 0x74 */ Gfx *sp74;                           /* inferred */
    /* 0x78 */ Gfx *sp78;                           /* inferred */
    /* 0x7C */ char pad7C[0x10];                    /* maybe part of sp78[5]? */
    /* 0x8C */ Gfx *sp8C;                           /* inferred */
    /* 0x90 */ char pad90[0x10];                    /* maybe part of sp8C[5]? */
    /* 0xA0 */ Gfx *spA0;                           /* inferred */
    /* 0xA4 */ char padA4[0xC];                     /* maybe part of spA0[4]? */
    /* 0xB0 */ Gfx *spB0;                           /* inferred */
    /* 0xB4 */ Gfx *spB4;                           /* inferred */
    /* 0xB8 */ char padB8[0x20];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_809DD934 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ CutsceneContext *sp40;               /* inferred */
    /* 0x44 */ char pad44[0x13];                    /* maybe part of sp40[5]? */
    /* 0x57 */ u8 sp57;                             /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809DEAC4 {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ ActorContext *sp48;                  /* inferred */
    /* 0x4C */ char pad4C[0xC];                     /* maybe part of sp48[4]? */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x4];
    /* 0x68 */ Boss02 *sp68;                        /* inferred */
    /* 0x6C */ Player *sp6C;                        /* inferred */
};                                                  /* size = 0x70 */

f32 func_800C3FA0(CollisionContext *, ? *, f32 *, Actor *); /* extern */
f32 func_800C40B4(f32 *, ? *, ? *, f32 *);          /* extern */
? func_8013EC44(?, ?, ?, ?);                        /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_8016981C(GlobalContext *, s16, void *, ? *, CutsceneContext *); /* extern */
void func_809DA1D0(GlobalContext *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, ?, s32); /* static */
void func_809DA22C(GlobalContext *arg0, s32 arg1, GlobalContext *, s32); /* static */
void func_809DA24C(GlobalContext *arg0, s32, GlobalContext *, s32); /* static */
void func_809DA264(void *arg0, f32 *arg1, f32 arg2); /* static */
void func_809DA344(void *arg0, f32 *arg1);          /* static */
void func_809DA460(void *arg0, void *arg1);         /* static */
void func_809DA50C(s32 arg0, ColliderJntSph *arg1, Vec3f *arg2); /* static */
void func_809DAA74(Boss02 *arg0, GlobalContext *arg1); /* static */
void func_809DAAA8(Boss02 *arg0, GlobalContext *arg1); /* static */
void func_809DBFB4(Actor *arg0, GlobalContext *arg1); /* static */
void func_809DC218(Actor *this, GlobalContext *globalCtx); /* static */
void func_809DC78C(Actor *this, GlobalContext *globalCtx); /* static */
void func_809DD0A8(Actor *this, GlobalContext *globalCtx); /* static */
void func_809DD0CC(GlobalContext *arg0);            /* static */
void func_809DD2F8(GlobalContext *arg0);            /* static */
void func_809DD934(Actor *arg0, GlobalContext *arg1); /* static */
void func_809DEAC4(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_04023428;
extern ? D_06000230;
extern ? D_060002E0;
extern void D_060003A0;
extern void D_060041A0;
extern void D_06008650;
extern SkeletonHeader D_06009B10;
extern AnimationHeader D_06009C78;
extern s8 D_801F4E30;
static DamageTable D_809DF550 = {
    {
        0,
        0xF1,
        0,
        0xF1,
        0,
        0xF1,
        0,
        0,
        0xF2,
        0xF1,
        0xF0,
        0x25,
        0x31,
        0x42,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0xF2,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static DamageTable D_809DF570 = {
    {
        0,
        0xF1,
        0,
        0xF1,
        0,
        0xF1,
        0,
        0,
        0xF2,
        0xF1,
        0xF0,
        0x21,
        0x35,
        0x42,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0xF2,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static f32 D_809DF5B0 = 1.0f;
static ? D_809DF5B6;                                /* unable to generate initializer */
static ? D_809DF5E6;                                /* unable to generate initializer */
static ColliderJntSphElementInit D_809DF614[22] = {
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {1, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {2, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {3, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {4, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {5, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {6, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {7, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {8, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {9, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0xA, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0xB, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0xC, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0xD, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0xE, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0xF, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x10, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x11, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x12, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x13, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x14, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x15, {{0, 0, 0}, 0x55}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x82}, 0x64},
    },
};
static ColliderJntSphInit D_809DF92C = {{9, 0x11, 0xD, 9, 0x10, 0}, 0x16, &D_809DF614};
static ColliderJntSphElementInit D_809DF93C[2] = {
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0, {{0, 0, 0}, 0x82}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x16, {{0, 0, 0}, 0x6E}, 0x64},
    },
};
static ColliderJntSphInit D_809DF984 = {{0, 0x11, 9, 9, 0x10, 0}, 2, &D_809DF93C};
static ColliderCylinderInit D_809DF994 = {
    {9, 0x11, 0xD, 0x39, 0x10, 1},
    {2, {0xF7CFFFFF, 4, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0x96, 0xC8, 0, {0, 0, 0}},
};
static ? D_809DF9C0;                                /* unable to generate initializer */
static ? D_809DFA2C;                                /* unable to generate initializer */
static Color_RGBA8 D_809DFA98 = {0xB9, 0x8C, 0x46, 0xFF};
static ? D_809DFA9C;                                /* unable to generate initializer */
static Vec3f D_809DFAF4 = {-10000.0f, -100000.0f, -100000.0f};
static u8 D_809E0420;
static u8 D_809E0421;
static u8 D_809E0422;
static Boss02 *D_809E0424;
static Actor *D_809E0428;
static Boss02 *D_809E042C;
static u8 D_809E0430;
static Actor *D_809E0434;
static void D_809E0438;
static f32 D_809DFB20[2] = {3.1415927f, 3.1415927f}; /* const */
static f32 D_809DFCA0[4] = {0.1f, 0.1f, 0.1f, 0.1f}; /* const */
static f32 D_809DFCB0[5] = {0.1f, 0.1f, 0.1f, 0.1f, 0.1f}; /* const */
static f32 D_809DFCD0[8] = {0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f}; /* const */
static f32 D_809DFCF0[3] = {0.01f, 0.1f, 0.1f};     /* const */
static f32 D_809DFD10[2] = {3150.0f, 0.1f};         /* const */

void func_809DA1D0(GlobalContext *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    gGameInfo->data[544] = 1;
    gGameInfo->data[545] = arg1 & 0xFF;
    gGameInfo->data[546] = arg2 & 0xFF;
    gGameInfo->data[547] = arg3 & 0xFF;
    gGameInfo->data[548] = (s16) arg4;
}

void func_809DA22C(GlobalContext *arg0, s32 arg1) {
    gGameInfo->data[548] = arg1 & 0xFF;
}

void func_809DA24C(GlobalContext *arg0) {
    gGameInfo->data[544] = 0;
}

void func_809DA264(void *arg0, f32 *arg1, f32 arg2) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk24 == 0) {
        phi_s0->unk24 = 1U;
        phi_s0->unk0 = (s32) arg1->unk0;
        phi_s0->unk4 = (s32) arg1->unk4;
        phi_s0->unk8 = (s32) arg1->unk8;
        phi_s0->unkC = randPlusMinusPoint5Scaled(30.0f);
        phi_s0->unk10 = (f32) (Rand_ZeroFloat(7.0f) + 7.0f);
        phi_s0->unk14 = randPlusMinusPoint5Scaled(30.0f);
        phi_s0->unk2C = 0xFF;
        phi_s0->unk26 = 0;
        phi_s0->unk38 = (f32) (2.0f * arg2);
        phi_s0->unk34 = arg2;
        phi_s0->unk1C = -0.3f;
        phi_s0->unk20 = 0.0f;
        phi_s0->unk18 = 0.0f;
        return;
    }
    phi_s0 += 0x3C;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_809DA344(void *arg0, f32 *arg1) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk24 == 0) {
        phi_s0->unk24 = 3U;
        phi_s0->unk0 = (s32) arg1->unk0;
        phi_s0->unk4 = (s32) arg1->unk4;
        phi_s0->unk8 = (s32) arg1->unk8;
        phi_s0->unk26 = (s16) (s32) Rand_ZeroFloat(20.0f);
        phi_s0->unkC = randPlusMinusPoint5Scaled(50.0f);
        phi_s0->unk10 = randPlusMinusPoint5Scaled(50.0f);
        phi_s0->unk14 = randPlusMinusPoint5Scaled(50.0f);
        phi_s0->unk20 = 0.0f;
        phi_s0->unk18 = 0.0f;
        phi_s0->unk1C = -1.5f;
        phi_s0->unk34 = (f32) (Rand_ZeroFloat(0.04f) + 0.02f);
        phi_s0->unk30 = (s16) (s32) Rand_ZeroFloat(32767.0f);
        phi_s0->unk2E = (s16) (s32) Rand_ZeroFloat(32767.0f);
        return;
    }
    phi_s0 += 0x3C;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_809DA460(void *arg0, void *arg1) {
    s16 temp_v0;
    u8 temp_v1;
    void *phi_a2;
    s16 phi_v0;

    phi_a2 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v1 = phi_a2->unk24;
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if ((temp_v1 == 0) || (temp_v1 == 3)) {
        phi_a2->unk24 = 4U;
        phi_a2->unk0 = (s32) arg1->unk0;
        phi_a2->unk4 = (s32) arg1->unk4;
        phi_a2->unk8 = (s32) arg1->unk8;
        arg0 = phi_a2;
        Math_Vec3f_Copy(phi_a2 + 0xC, &D_801D15B0);
        Math_Vec3f_Copy(arg0 + 0x18, &D_801D15B0);
        arg0->unk2C = 0xFF;
        arg0->unk34 = 0.0f;
        return;
    }
    phi_a2 += 0x3C;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void func_809DA50C(s32 arg0, ColliderJntSph *arg1, Vec3f *arg2) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 << 6;
    (arg1->elements + temp_v0)->unk30 = (s16) (s32) arg2->x;
    (arg1->elements + temp_v0)->unk32 = (s16) (s32) arg2->y;
    (arg1->elements + temp_v0)->unk34 = (s16) (s32) arg2->z;
    temp_v1 = arg1->elements + temp_v0;
    temp_v1->unk36 = (s16) (s32) (temp_v1->unk38 * (f32) temp_v1->unk2E * D_809DF5B0);
}

void Boss02_Init(Boss02 *this, GlobalContext *globalCtx) {
    ActorContext *sp4C;
    ActorContext *temp_a0;
    Boss02 *temp_v0_3;
    GameInfo *temp_v0_2;
    s16 temp_v0;
    s32 temp_f6;
    s32 temp_v1;
    GameInfo *phi_v0;
    Boss02 *phi_v0_2;
    s32 phi_v1;
    Boss02 *this = (Boss02 *) thisx;

    if ((gSaveContext.weekEventReg[52] & 0x20) != 0) {
        temp_a0 = &globalCtx->actorCtx;
        if (this->actor.params == 0) {
            sp4C = temp_a0;
            D_809E0434 = Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x38, 0.0f, 60.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 1);
            Actor_Spawn(temp_a0, globalCtx, 0x3A, 0.0f, 30.0f, -150.0f, (s16) 0, (s16) 1, (s16) 0, (s16) 0);
        }
    }
    temp_v0 = this->actor.params;
    this->actor.targetMode = 0xA;
    this->unk1D3C = 0.0f;
    this->unk1D44 = 0.0f;
    this->unk1D40 = 1.0f;
    if (temp_v0 == 0xC8) {
        D_809E042C = this;
        globalCtx->specialEffects = &D_809E0438;
        this->actor.update = func_809DC78C;
        this->actor.draw = func_809DD0A8;
        this->actor.flags &= -2;
        this->unk1D70 = 0.01f;
        if ((gGameInfo->data[1312] != 0) || ((gSaveContext.eventInf[5] & 0x20) != 0) || (D_809E0434 != 0)) {
            this->unk1D20 = 0;
            temp_v0_2 = gGameInfo;
            D_809E0430 = temp_v0_2->data[1263] + 0x14;
            phi_v0 = temp_v0_2;
        } else {
            this->unk1D20 = 1;
            phi_v0 = gGameInfo;
        }
        phi_v0->data[1385] = phi_v0->data[1262] + 0x14;
        this->unk1AC = 1.0f;
        Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x268, 0.0f, 1000.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 0);
        return;
    }
    if (temp_v0 == 0x64) {
        this->actor.update = func_809DC218;
        this->actor.draw = NULL;
        this->actor.hintId = 0x2E;
        return;
    }
    sp4C = &globalCtx->actorCtx;
    if (temp_v0 != 0x23) {
        this->actor.params = 0;
        Actor_Spawn(sp4C, globalCtx, 0x12A, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0xC8);
        D_809E0424 = this;
        D_809E0428 = Actor_Spawn(sp4C, globalCtx, 0x12A, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.world.rot.x, (s16) (s32) this->actor.world.rot.y, (s16) (s32) this->actor.world.rot.z, (s16) 0x23);
        D_809E0424->actor.colChkInfo.damageTable = &D_809DF570;
        D_809E0428->colChkInfo.damageTable = &D_809DF550;
        D_809E0424->unk1674 = D_809E0428;
        D_809E0428->unk1674 = (Boss02 *) D_809E0424;
    }
    this->actor.colChkInfo.mass = 0xFE;
    this->actor.colChkInfo.health = 0x14;
    Actor_SetScale((Actor *) this, 0.01f);
    SkelAnime_Init(globalCtx, &this->unk1590, &D_06009B10, &D_06009C78, &this->unk15D4, &this->unk1622, 0xD);
    Collider_InitAndSetJntSph(globalCtx, &this->unk1688, (Actor *) this, &D_809DF92C, &this->unk16A8);
    Collider_InitAndSetJntSph(globalCtx, &this->unk1C28, (Actor *) this, &D_809DF984, &this->unk1C48);
    Collider_InitAndSetCylinder(globalCtx, &this->unk1CC8, (Actor *) this, &D_809DF994);
    if (D_809E0434 != 0) {
        func_809DAA74(this, globalCtx);
    } else {
        func_809DAAA8(this, globalCtx);
    }
    phi_v0_2 = this;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        temp_v0_3 = phi_v0_2 + 0x30;
        temp_v0_3->unk18C = this->actor.world.pos.x;
        temp_v0_3->unk190 = this->actor.world.pos.y;
        temp_v0_3->unk194 = (f32) this->actor.world.pos.z;
        temp_v0_3->unk198 = (f32) this->actor.world.pos.x;
        temp_v0_3->unk19C = this->actor.world.pos.y;
        temp_v0_3->unk1A0 = this->actor.world.pos.z;
        temp_v0_3->unk1A4 = (f32) this->actor.world.pos.x;
        temp_v0_3->unk1A8 = this->actor.world.pos.y;
        temp_v0_3->unk1AC = this->actor.world.pos.z;
        temp_v0_3->unk1B0 = this->actor.world.pos.x;
        temp_v0_3->unk1B4 = this->actor.world.pos.y;
        temp_v0_3->unk1B8 = this->actor.world.pos.z;
        phi_v0_2 = temp_v0_3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0xC8);
    temp_f6 = (s32) Rand_ZeroFloat(1000.0f);
    this->unk1678 = 0x16;
    this->unk14C = (s16) temp_f6;
    Actor_SpawnAsChild(sp4C, (Actor *) this, globalCtx, 0x12A, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 0x64);
}

void Boss02_Destroy(Boss02 *this, GlobalContext *globalCtx) {
    Boss02 *this = (Boss02 *) thisx;

}

void func_809DAA74(Boss02 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809DAA98;
    arg0->actor.world.pos.y = -3000.0f;
}

void func_809DAA98(Boss02 *this, GlobalContext *globalCtx) {

}

void func_809DAAA8(Boss02 *arg0, GlobalContext *arg1) {
    Boss02 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809DAB78;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x1590, &D_06009C78, 0.0f);
    if (D_809E042C->unk1D20 != 0) {
        arg0->unk144 = 0xA;
    } else {
        arg0->unk144 = 0x64;
        arg0->unk1A8 = 25.0f;
        D_809E042C->unk1D7E = 0x64;
        arg0->actor.world.pos.x = 0.0f;
        if (arg0 == D_809E0424) {
            arg0->actor.world.pos.z = -1000.0f;
        } else {
            arg0->actor.world.pos.z = 1400.0f;
        }
    }
    arg0->actor.world.pos.y = -500.0f;
}

void func_809DAB78(Boss02 *this, GlobalContext *globalCtx) {
    Actor *spE0;
    ? spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Actor *spB0;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp90;
    ? sp8C;
    ? sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp74;
    ? sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp54;
    f32 *sp50;
    void *sp4C;
    ColliderCylinder *temp_s0_2;
    ColliderCylinder *temp_s0_6;
    CollisionCheckContext *temp_s1;
    f32 *temp_v0_7;
    f32 *temp_v0_8;
    f32 *temp_v0_9;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_s0;
    s16 temp_s2;
    s16 temp_v0_6;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_t3;
    u8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    f32 phi_f6;
    s32 phi_v0;
    f32 phi_f16;
    f32 phi_f18;
    f32 phi_f2;
    s32 phi_s0;
    f32 phi_f16_2;
    f32 phi_f2_2;
    s32 phi_s0_2;
    s32 phi_s0_3;

    spE0 = globalCtx->actorCtx.actorList[2].first;
    spB0 = this->unk1674;
    temp_f16 = this->unk1B0 - this->actor.world.pos.x;
    spC8 = this->unk1B4 - this->actor.world.pos.y;
    temp_v0 = this->unk144;
    temp_f18 = this->unk1B8 - this->actor.world.pos.z;
    phi_f16 = temp_f16;
    phi_f18 = temp_f18;
    if ((temp_v0 != 0xA) && ((s32) temp_v0 < 0x15)) {
        spCC = temp_f16;
        spC4 = temp_f18;
        SkelAnime_FrameUpdateMatrix(&this->unk1590);
        temp_s0 = Math_Atan2S(spCC, spC4);
        temp_s2 = Math_Atan2S(spC8, sqrtf((spCC * spCC) + (spC4 * spC4)));
        Math_ApproachS(&this->actor.world.rot.y, temp_s0, 0x14, (s16) (s32) this->unk164);
        Math_ApproachS((s16 *) &this->actor.shape, temp_s2, 0x14, (s16) (s32) this->unk164);
        Math_ApproachS(&this->unk198, this->unk19A, 1, 0x20);
        this->unk196 += this->unk198;
        Math_ApproachF(&this->unk19C, this->unk1A0, 0.1f, 100.0f);
        this->unk1A4 = (s16) (s32) (Math_SinS(this->unk196) * this->unk19C);
        this->actor.world.rot.x = this->actor.shape.rot.x + this->unk1A4;
        if (((this->unk14C & 0x1F) == 0) && (D_809E042C->unk1D20 == 0)) {
            this->unk1A0 = Rand_ZeroFloat(4096.0f) + 2048.0f;
            this->unk19A = (s16) (s32) (Rand_ZeroFloat(1024.0f) + 512.0f);
        }
        if (this->unk195 != 0) {
            Math_ApproachF(&this->unk164, this->unk168 * 1.25f, 1.0f, 62.5f);
        } else {
            Math_ApproachF(&this->unk164, this->unk168, 1.0f, 50.0f);
        }
        this->unk168 = 2000.0f;
        if (this->unk195 != 0) {
            this->unk1590.animPlaybackSpeed = 2.0f;
            phi_f6 = this->unk1A8 * D_809DF5B0 * 1.25f;
        } else {
            phi_f6 = this->unk1A8 * D_809DF5B0;
        }
        this->actor.speedXZ = phi_f6;
        Actor_SetVelocityXYRotation((Actor *) this);
        Actor_ApplyMovement((Actor *) this);
        spD0.unk0 = this->actor.world.pos.x;
        spD0.unk4 = (f32) this->actor.world.pos.y;
        spD0.unk8 = (f32) this->actor.world.pos.z;
        if (D_809E0422 != 0) {
            spD4 = 5000.0f;
        } else {
            spD4 = 2000.0f;
        }
        temp_f0 = func_800C3FA0(&globalCtx->colCtx, &spDC, &spD0);
        temp_f2 = this->unk180;
        if (((temp_f2 < temp_f0) && (temp_f0 <= this->unk18C)) || ((temp_f0 < temp_f2) && (this->unk18C <= temp_f0))) {
            this->unk170 = this->unk17C;
            this->unk174 = this->unk180;
            this->unk174 = temp_f0;
            this->unk16C = 0x78;
            this->unk178 = this->unk184;
            Audio_PlayActorSound2((Actor *) this, 0x3819U);
        }
        this->actor.flags &= -2;
        if (this->unk195 != 0) {
            this->actor.world.rot.z = (s16) (s32) (Math_SinS((s16) (this->unk14C * 0x1200)) * 3584.0f);
        } else {
            this->actor.world.rot.z = (s16) (s32) (Math_SinS((s16) (this->unk14C * 0xC00)) * 3584.0f);
        }
        this->unk14E += 1;
        if ((s32) this->unk14E >= 0xC8) {
            this->unk14E = 0;
        }
        (this + (this->unk14E * 0xC))->unk1BC = (f32) this->actor.world.pos.x;
        (this + (this->unk14E * 0xC))->unk1C0 = (f32) this->actor.world.pos.y;
        (this + (this->unk14E * 0xC))->unk1C4 = (f32) this->actor.world.pos.z;
        (this + (this->unk14E * 0xC))->unkB1C = (f32) (((f32) this->actor.world.rot.x / 32768.0f) * 3.1415927f);
        (this + (this->unk14E * 0xC))->unkB20 = (f32) (((f32) this->actor.world.rot.y / 32768.0f) * 3.1415927f);
        (this + (this->unk14E * 0xC))->unkB24 = (f32) (((f32) this->actor.world.rot.z / 32768.0f) * 3.1415927f);
        phi_f16 = spCC;
        phi_f18 = spC4;
    }
    phi_v0 = (s32) this->unk144;
    if (((s32) this->unk144 < 0xA) && ((s32) spB0->unk144 >= 0x14)) {
        this->unk1B4 = -1000.0f * D_809DF5B0;
        phi_v0 = 3U & 0xFF;
        if (D_809E0422 != 0) {
            this->unk1B4 += 3150.0f;
        }
        this->unk144 = 3;
        this->unk146 = 0x32;
    }
    if (phi_v0 >= 0x18) {
        if (phi_v0 != 0x64) {
            return;
        }
        goto block_42;
    }
    switch (phi_v0) {
    case 0:
        if ((this->actor.params == 0) && (Rand_ZeroOne() < 0.75f)) {
            this->actor.world.pos.x = spE0->world.pos.x;
            this->actor.world.pos.z = spE0->world.pos.z;
            this->actor.world.pos.y = spE0->world.pos.y - (600.0f * D_809DF5B0);
        } else {
            this->actor.world.pos.x = randPlusMinusPoint5Scaled(5000.0f * D_809DF5B0);
            this->actor.world.pos.z = randPlusMinusPoint5Scaled(5000.0f * D_809DF5B0);
            this->actor.world.pos.y = -500.0f * D_809DF5B0;
            if (D_809E0422 != 0) {
                this->actor.world.pos.y += 3150.0f;
            }
        }
        temp_f12 = 500.0f * D_809DF5B0;
        if (!(fabsf(this->actor.world.pos.x) < temp_f12) || !(fabsf(this->actor.world.pos.z) < temp_f12)) {
block_42:
            this->actor.shape.rot.x = 0x4000;
            this->unk1B0 = this->actor.world.pos.x;
            this->unk146 = 0x64;
            this->unk144 = 1;
            this->unk1B8 = this->actor.world.pos.z;
            this->unk1B4 = this->actor.world.pos.y + (1000.0f * D_809DF5B0);
        case 1:
            if (this->unk146 == 0) {
                if (Rand_ZeroOne() < 0.3f) {
                    this->unk144 = 5;
                    this->unk146 = 0x96;
                } else {
                    this->unk144 = 2;
                    this->unk1B0 = randPlusMinusPoint5Scaled(3000.0f * D_809DF5B0);
                    this->unk1B8 = randPlusMinusPoint5Scaled(3000.0f * D_809DF5B0);
                    temp_f12_2 = 500.0f * D_809DF5B0;
                    if ((fabsf(this->unk1B0) < temp_f12_2) && (fabsf(this->unk1B8) < temp_f12_2)) {
                        this->unk1B0 = 500.0f;
                        this->unk1B8 = 500.0f;
                    }
                    this->unk1B4 = Rand_ZeroFloat(800.0f * D_809DF5B0) + (200.0f * D_809DF5B0);
                    if (D_809E0422 != 0) {
                        this->unk1B4 += 3150.0f;
                    }
                }
                this->unk164 = 0.0f;
                return;
            }
            /* Duplicate return node #111. Try simplifying control flow for better match */
            return;
        }
    default:
        return;
    case 2:
        if (this->unk195 != 0) {
            phi_f2 = 700.0f;
        } else {
            phi_f2 = 500.0f;
        }
        if (sqrtf((phi_f16 * phi_f16) + (spC8 * spC8) + (phi_f18 * phi_f18)) < (phi_f2 * D_809DF5B0)) {
            this->unk144 = 3;
            this->unk1B4 = -3000.0f * D_809DF5B0;
            if (D_809E0422 != 0) {
                this->unk1B4 += 3150.0f;
            }
            this->unk146 = 0x96;
            this->unk164 = 0.0f;
            return;
        }
        /* Duplicate return node #111. Try simplifying control flow for better match */
        return;
    case 3:
        if (this->unk146 == 0) {
            this->unk144 = 0;
            return;
        }
        /* Duplicate return node #111. Try simplifying control flow for better match */
        return;
    case 5:
        this->unk1B0 = spE0->world.pos.x;
        this->unk1B4 = spE0->world.pos.y + (100.0f * D_809DF5B0);
        this->unk1B8 = spE0->world.pos.z;
        if (this->unk146 == 0) {
            this->unk144 = 3;
            this->unk1B0 = randPlusMinusPoint5Scaled(500.0f * D_809DF5B0) + this->actor.world.pos.x;
            this->unk1B4 = -3000.0f * D_809DF5B0;
            if (D_809E0422 != 0) {
                this->unk1B4 += 3150.0f;
            }
            temp_f4 = randPlusMinusPoint5Scaled(500.0f * D_809DF5B0) + this->actor.world.pos.z;
            this->unk146 = 0x96;
            this->unk164 = 0.0f;
            this->unk1B8 = temp_f4;
            return;
        }
        /* Duplicate return node #111. Try simplifying control flow for better match */
        return;
    case 10:
        if (this->unk1678 != 0) {
            this->unk19A = 0x500;
            this->unk1A0 = 4608.0f;
            return;
        }
        temp_s0_2 = &this->unk1CC8;
        this->unk1CC8.dim.radius = (s16) (s32) (150.0f * D_809DF5B0);
        this->unk1CC8.dim.yShift = 0;
        this->unk1CC8.dim.height = (s16) (s32) (200.0f * D_809DF5B0);
        Collider_UpdateCylinder((Actor *) this, temp_s0_2);
        temp_s1 = &globalCtx->colChkCtx;
        CollisionCheck_SetOC(globalCtx, temp_s1, (Collider *) temp_s0_2);
        CollisionCheck_SetAC(globalCtx, temp_s1, (Collider *) temp_s0_2);
        return;
    case 11:
        if (this == D_809E0424) {
            temp_v0_2 = (this->unk1D1A * 0xC) + &D_809DF9C0;
            this->unk1B0 = temp_v0_2->unk0;
            this->unk1B4 = temp_v0_2->unk4;
            this->unk1B8 = temp_v0_2->unk8;
        } else {
            temp_v0_3 = (this->unk1D1A * 0xC) + &D_809DFA2C;
            this->unk1B0 = temp_v0_3->unk0;
            this->unk1B4 = temp_v0_3->unk4;
            this->unk1B8 = temp_v0_3->unk8;
        }
        this->actor.shape.rot.x = 0x4000;
        this->unk144 = 0xC;
        this->actor.world.pos.y = -200.0f;
        this->actor.world.pos.x = this->unk1B0;
        this->actor.world.pos.z = this->unk1B8;
        this->unk1A8 = 25.0f;
        return;
    case 12:
        if (sqrtf((phi_f16 * phi_f16) + (spC8 * spC8) + (phi_f18 * phi_f18)) < 500.0f) {
            this->unk1D1A += 1;
            this->unk164 = 0.0f;
            if ((s32) this->unk1D1A >= 9) {
                this->unk1D1A = 8;
            }
            if (this == D_809E0424) {
                temp_v0_4 = (this->unk1D1A * 0xC) + &D_809DF9C0;
                this->unk1B0 = temp_v0_4->unk0;
                this->unk1B4 = temp_v0_4->unk4;
                this->unk1B8 = temp_v0_4->unk8;
                return;
            }
            temp_v0_5 = (this->unk1D1A * 0xC) + &D_809DFA2C;
            this->unk1B0 = temp_v0_5->unk0;
            this->unk1B4 = temp_v0_5->unk4;
            this->unk1B8 = temp_v0_5->unk8;
            return;
        }
        /* Duplicate return node #111. Try simplifying control flow for better match */
        return;
    case 20:
        this->unk152 = 0xF;
        if ((s32) (s16) (gGameInfo->data[2471] + 0x8C) < (s32) this->unk148) {
            if (this->unk146 == 0) {
                Matrix_RotateY(Math_Atan2S(-spE0->world.pos.x, -spE0->world.pos.z), 0U);
                SysMatrix_GetStateTranslationAndScaledZ(1500.0f * D_809DF5B0, (Vec3f *) &spA4);
                this->unk146 = 0x32;
                this->unk1B0 = spE0->world.pos.x + spA4;
                this->unk1B4 = randPlusMinusPoint5Scaled(500.0f * D_809DF5B0) + (600.0f * D_809DF5B0);
                if (D_809E0422 != 0) {
                    this->unk1B4 += 3150.0f;
                }
                this->unk1B8 = spE0->world.pos.z + spAC;
            }
            this->unk168 = 3000.0f;
        } else {
            this->unk1B4 += 10.0f * D_809DF5B0;
            this->unk168 = 5000.0f;
        }
        temp_v0_6 = this->unk148;
        this->unk19A = 0x1000;
        this->unk1A8 = 25.0f;
        this->unk1A0 = 6144.0f;
        if (temp_v0_6 == 0) {
            this->unk15C = 1;
            this->unk144 = 0x15;
            this->unk146 = 0x14;
            this->unk152 = 0;
            D_809E042C->unk1D20 = 0x66;
            D_809E042C->unk1D5C = 0.0f;
            play_sound(0x3A0EU);
            return;
        }
        if (((temp_v0_6 & 0xF) == 0) && (Rand_ZeroOne() < 0.5f)) {
            Audio_PlayActorSound2((Actor *) this, 0x381AU);
            return;
        }
        /* Duplicate return node #111. Try simplifying control flow for better match */
        return;
    case 21:
        this->unk1A8 = 0.0f;
        this->actor.speedXZ = 0.0f;
        if (this->unk146 == 0) {
            this->unk146 = 3;
            sp4C = globalCtx + 0x18000;
            phi_s0 = 0;
            do {
                func_809DA344(sp4C->unk870, this + (this->unk1678 * 0xC) + 0x147C);
                temp_s0_3 = phi_s0 + 1;
                phi_s0 = temp_s0_3;
            } while (temp_s0_3 != 0x23);
            func_809DA460(sp4C->unk870, this + (this->unk1678 * 0xC) + 0x147C);
            play_sound(0x2802U);
            temp_t3 = this->unk1678 - 1;
            this->unk1678 = temp_t3;
            if (temp_t3 <= 0) {
                this->unk144 = 0x16;
                this->actor.velocity.y = 0.0f;
                this->actor.gravity = -1.0f * D_809DF5B0;
                this->actor.minVelocityY = -1000.0f * D_809DF5B0;
                this->unk164 = randPlusMinusPoint5Scaled(0.05f);
                temp_f8 = spE0->world.pos.z - this->actor.world.pos.z;
                temp_f2_2 = D_809DF5B0;
                temp_f18_2 = spE0->world.pos.x - this->actor.world.pos.x;
                spC4 = temp_f8;
                temp_f16_2 = 400.0f * temp_f2_2;
                phi_f16_2 = temp_f16_2;
                phi_f2_2 = temp_f2_2;
                if (sqrtf((temp_f18_2 * temp_f18_2) + (temp_f8 * temp_f8)) < temp_f16_2) {
                    this->actor.speedXZ = 15.0f * temp_f2_2;
                    temp_f2_3 = D_809DF5B0;
                    phi_f16_2 = 400.0f * temp_f2_3;
                    phi_f2_2 = temp_f2_3;
                }
                spC4 = this->actor.world.pos.z;
                if (sqrtf((this->actor.world.pos.x * this->actor.world.pos.x) + (spC4 * spC4)) < phi_f16_2) {
                    this->actor.speedXZ = 15.0f * phi_f2_2;
                }
                if ((s32) spB0->unk144 >= 0xA) {
                    func_801A89A8(0x8021);
                }
                Audio_PlayActorSound2((Actor *) this, 0x3A1DU);
                return;
            }
            /* Duplicate return node #111. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #111. Try simplifying control flow for better match */
        return;
    case 22:
        temp_v0_7 = this + (((s32) (this->unk14E + 0xC4) % 0xC8) * 0xC);
        sp50 = temp_v0_7;
        Math_Vec3f_Copy(temp_v0_7 + 0x1BC, (Vec3f *) &this->actor.world);
        temp_v0_7->unkB20 = (f32) (temp_v0_7->unkB20 + this->unk164);
        Math_ApproachF(temp_v0_7 + 0xB1C, -1.5707964f, 0.1f, 0.07f);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 150.0f, 100.0f, 4U);
        temp_v0_8 = &this->unk170;
        if ((this->actor.bgCheckFlags & 1) != 0) {
            this->unk144 = 0x17;
            this->actor.speedXZ = 0.0f;
            temp_v0_8->unk0 = this->unk17C;
            temp_v0_8->unk4 = (f32) this->unk180;
            temp_v0_8->unk8 = (f32) this->unk184;
            this->unk16C = 0x1E;
            this->unk174 = this->actor.floorHeight;
            D_809E042C->unk1D20 = 0x67;
            D_809E042C->unk1D1C = 0;
            D_809E042C->unk146 = 0xF;
            D_809E042C->unk150 = 0;
            sp50 = temp_v0_8;
            play_sound(0x282EU);
            sp4C = globalCtx + 0x18000;
            phi_s0_2 = 0;
            do {
                func_809DA344(sp4C->unk870, sp50);
                temp_s0_4 = phi_s0_2 + 1;
                phi_s0_2 = temp_s0_4;
            } while (temp_s0_4 != 0x1E);
            this->unk146 = 0xA;
        }
block_110:
        temp_s0_6 = &this->unk1CC8;
        this->unk1CC8.dim.radius = (s16) (s32) (150.0f * D_809DF5B0);
        this->unk1CC8.dim.yShift = 0;
        this->unk1CC8.dim.height = (s16) (s32) (200.0f * D_809DF5B0);
        Collider_UpdateCylinder((Actor *) this, temp_s0_6);
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_s0_6);
        /* Duplicate return node #111. Try simplifying control flow for better match */
        return;
    case 23:
        temp_v0_9 = this + (((s32) (this->unk14E + 0xC4) % 0xC8) * 0xC);
        sp50 = temp_v0_9;
        Math_Vec3f_Copy(temp_v0_9 + 0x1BC, (Vec3f *) &this->actor.world);
        Math_ApproachF(temp_v0_9 + 0xB1C, -1.5707964f, 0.05f, 0.07f);
        if ((this->unk146 & 1) != 0) {
            sp50 = (f32 *) &globalCtx->colCtx;
            sp9C = Rand_ZeroFloat(3.1415927f);
            phi_s0_3 = 0;
            do {
                SysMatrix_InsertYRotation_f(((2.0f * ((f32) phi_s0_3 * 3.1415927f)) / 15.0f) + sp9C, 0);
                SysMatrix_GetStateTranslationAndScaledZ((f32) (0xA - this->unk146) * (D_809DF5B0 * 300.0f) * 0.1f, (Vec3f *) &sp90);
                spD0 = this->unk170 + sp90;
                spD4 = this->unk174 + (1000.0f * D_809DF5B0);
                spD8 = this->unk178 + sp98;
                if (func_800C40B4(sp50, &sp8C, &sp88, &spD0) != -32000.0f) {
                    spA0 = func_800C3FA0((CollisionContext *) sp50, &sp8C, &spD0);
                    SysMatrix_GetStateTranslationAndScaledZ(5.0f * D_809DF5B0, (Vec3f *) &sp70);
                    temp_f2_4 = D_809DF5B0;
                    sp74 = 2.0f * temp_f2_4;
                    sp68 = 0.3f * temp_f2_4;
                    sp6C = 0.0f;
                    sp64 = 0.0f;
                    sp7C = spD0;
                    sp80 = spA0;
                    sp84 = spD8;
                    sp54 = Rand_ZeroFloat(500.0f);
                    temp_f2_5 = D_809DF5B0;
                    func_800B0F18(globalCtx, (Vec3f *) &sp7C, (Vec3f *) &sp70, (Vec3f *) &sp64, &D_809DFA98, &D_809DFA98, (s16) (s32) ((sp54 + 1200.0f) * temp_f2_5), (s16) (s32) (20.0f * temp_f2_5), (s16) (s32) (Rand_ZeroFloat(5.0f) + 14.0f));
                }
                temp_s0_5 = phi_s0_3 + 1;
                phi_s0_3 = temp_s0_5;
            } while (temp_s0_5 != 0xF);
        }
        goto block_110;
    }
}

void func_809DBFB4(Actor *arg0, GlobalContext *arg1) {
    s32 temp_s1;
    u8 temp_v1;
    void *temp_s6;
    void *temp_v0;
    s32 phi_v0;
    s32 phi_s2;
    s32 phi_s1;

    temp_s6 = arg0->unk1674;
    if (arg0->unk154 == 0) {
        phi_v0 = 1;
        if (D_809E0422 != 0) {
            phi_v0 = 0;
        }
        phi_s1 = phi_v0;
        if (phi_v0 < 2) {
            phi_s2 = phi_v0 << 6;
            do {
                temp_v0 = arg0->unk1C44 + phi_s2;
                temp_v1 = temp_v0->unk16;
                if ((temp_v1 & 2) != 0) {
                    temp_v0->unk16 = (u8) (temp_v1 & ~2);
                    arg0->unk154 = 0xF;
                    arg0->unk156 = 0xF;
                    if (phi_s1 == 0) {
                        Audio_PlayActorSound2(arg0, 0x381AU);
                        arg0->unk15C = 1;
                    } else {
                        func_8019F1C0(arg0 + 0x167C, 0x381AU);
                        arg0->unk15C = 0xA;
                    }
                    if (D_809E0422 != 0) {
                        arg0->unk152 = 0xF;
                    } else {
                        arg0->unk152 = 0xC;
                    }
                    if ((s32) temp_s6->unk144 < 0x14) {
                        arg0->colChkInfo.health -= arg0->colChkInfo.damage;
                        if ((s32) (s8) arg0->colChkInfo.health <= 0) {
                            Actor_MarkForDeath(arg0->child);
                            arg0->child = NULL;
                            Enemy_StartFinishingBlow(arg1, arg0);
                            arg0->unk15AC = 2.0f;
                            arg0->unk144 = 0x14;
                            if ((s32) temp_s6->unk144 >= 0xA) {
                                func_801A89A8(0x100100FF);
                            } else {
                                temp_s6->unk195 = 1;
                            }
                            arg0->unk146 = 0;
                            arg0->shape.rot.x = 0x4000;
                            arg0->unk148 = (s16) (gGameInfo->data[2470] + 0xAA);
                            if (D_809E0422 == 0) {
                                if (arg0->world.pos.y < -200.0f) {
                                    arg0->world.pos.y = -200.0f;
                                }
                            } else if (arg0->world.pos.y < 3130.0f) {
                                arg0->world.pos.y = 3130.0f;
                            }
                            D_809E042C->unk1D20 = 0x64;
                            if (arg0 == D_809E0424) {
                                D_809E042C->unk194 = 0;
                            } else {
                                D_809E042C->unk194 = 1;
                            }
                        }
                    }
                }
                temp_s1 = phi_s1 + 1;
                phi_s2 += 0x40;
                phi_s1 = temp_s1;
            } while (temp_s1 != 2);
        }
    }
}

void func_809DC218(Actor *this, GlobalContext *globalCtx) {
    f32 sp28;
    f32 sp24;
    ? sp20;
    Actor *temp_a3;
    PosRot *temp_v0;

    temp_a3 = this;
    temp_v0 = &temp_a3->world;
    temp_a3->unk14C = (s16) (temp_a3->unk14C + 1);
    if (((temp_a3->unk14C + temp_a3->params) & 1) != 0) {
        sp24.unk0 = temp_v0->pos.x;
        sp24.unk4 = (f32) temp_v0->pos.y;
        sp24.unk8 = (f32) temp_v0->pos.z;
        temp_a3->focus.pos.x = temp_v0->pos.x;
        temp_a3->focus.pos.y = temp_v0->pos.y;
        temp_a3->focus.pos.z = temp_v0->pos.z;
        if (D_809E0422 != 0) {
            sp28 = 5000.0f;
        } else {
            sp28 = 2000.0f;
        }
        this = temp_a3;
        if ((this->focus.pos.y < func_800C3FA0(&globalCtx->colCtx, &sp20, &sp24, temp_a3)) || (D_809E0422 != 0)) {
            this->flags &= -2;
            return;
        }
        this->flags |= 1;
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void Boss02_Update(Boss02 *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    CollisionCheckContext *sp28;
    ColliderJntSph *sp24;
    ColliderJntSph *temp_a2;
    ColliderJntSph *temp_a2_2;
    CollisionCheckContext *temp_a1;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    void *temp_v1;
    s16 phi_v0;
    s16 phi_t5;
    Boss02 *this = (Boss02 *) thisx;

    if (D_809E0422 == 0) {
        Actor_SetScale((Actor *) this, 0.6f);
    } else {
        Actor_SetScale((Actor *) this, 0.060000002f);
    }
    phi_v0 = 0;
    if (D_809E042C->unk1D18 == 0) {
        do {
            temp_v1 = this + (phi_v0 * 2);
            temp_a0 = temp_v1->unk146;
            temp_v0 = phi_v0 + 1;
            phi_v0 = temp_v0;
            if (temp_a0 != 0) {
                temp_v1->unk146 = (s16) (temp_a0 - 1);
            }
        } while ((s32) temp_v0 < 3);
        temp_v0_2 = this->unk16C;
        if (temp_v0_2 != 0) {
            this->unk16C = temp_v0_2 - 1;
        }
        temp_v0_3 = this->unk154;
        if (temp_v0_3 != 0) {
            this->unk154 = temp_v0_3 - 1;
        }
        temp_v0_4 = this->unk156;
        if (temp_v0_4 != 0) {
            this->unk156 = temp_v0_4 - 1;
        }
        temp_v0_5 = this->unk152;
        if (temp_v0_5 != 0) {
            this->unk152 = temp_v0_5 - 1;
        }
        this->unk14C += 1;
        this->actionFunc(this, globalCtx);
        temp_v0_6 = this->unk16C;
        if (temp_v0_6 != 0) {
            if ((temp_v0_6 == 0x3C) && ((s32) this->unk144 < 0x14)) {
                Audio_PlayActorSound2((Actor *) this, 0x3819U);
            }
            Audio_PlayActorSound2((Actor *) this, 0x3018U);
            if ((s32) this->unk144 >= 0x15) {
                sp3C = randPlusMinusPoint5Scaled(100.0f * D_809DF5B0) + this->unk170;
                sp40 = randPlusMinusPoint5Scaled(50.0f * D_809DF5B0) + this->unk174;
                sp44 = randPlusMinusPoint5Scaled(100.0f * D_809DF5B0) + this->unk178;
                func_809DA264(globalCtx->specialEffects, &sp3C, Rand_ZeroFloat(3.0f) + 6.0f);
            }
            if ((this->unk14C & 1) == 0) {
                sp28 = globalCtx + 0x18000;
                sp3C = randPlusMinusPoint5Scaled(100.0f * D_809DF5B0) + this->unk170;
                sp40 = randPlusMinusPoint5Scaled(50.0f * D_809DF5B0) + this->unk174;
                sp44 = randPlusMinusPoint5Scaled(100.0f * D_809DF5B0) + this->unk178;
                func_809DA264(sp28->unk870, &sp3C, Rand_ZeroFloat(3.0f) + 6.0f);
            }
        }
        temp_v0_7 = this->unk144;
        if (((s32) temp_v0_7 < 0x14) && (temp_v0_7 != 0xA)) {
            func_809DBFB4((Actor *) this, globalCtx);
            temp_a2 = &this->unk1688;
            temp_a1 = &globalCtx->colChkCtx;
            sp28 = temp_a1;
            sp24 = temp_a2;
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
            CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2);
            CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
            temp_a2_2 = &this->unk1C28;
            sp24 = temp_a2_2;
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2_2);
            CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2_2);
            CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2_2);
        }
        temp_v0_8 = this->unk15C;
        switch (temp_v0_8) {
        case 1:
            this->unk15A = 0;
            this->unk15C = temp_v0_8 + 1;
            this->unk158 = this->unk15A;
            /* fallthrough */
        case 2:
            this->unk15A += 2;
            if ((s32) this->unk15A >= 0x15) {
                this->unk15C += 1;
            }
            phi_t5 = this->unk156 | 4;
block_42:
            this->unk156 = phi_t5;
            /* Duplicate return node #43. Try simplifying control flow for better match */
            return;
        case 3:
            this->unk158 += 2;
            if ((s32) this->unk158 >= 0x15) {
                this->unk15C = 0;
            }
            this->unk156 |= 4;
            return;
        case 10:
            this->unk15A = 0x15;
            this->unk15C = temp_v0_8 + 1;
            this->unk158 = this->unk15A;
            /* fallthrough */
        case 11:
            this->unk158 += -2;
            if ((s32) this->unk158 <= 0) {
                this->unk158 = 0;
                this->unk15C += 1;
            }
            this->unk156 |= 4;
            return;
        case 12:
            this->unk15A += -2;
            if ((s32) this->unk15A <= 0) {
                this->unk15A = 0;
                this->unk15C = 0;
            }
            phi_t5 = this->unk156 | 4;
            goto block_42;
        }
    } else {
    default:
    }
}

void func_809DC78C(Actor *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u8 temp_t2;
    u8 temp_v0_2;
    void *phi_at;

    this->unk1AC = (f32) D_809DF5B0;
    globalCtx->envCtx.unk_EA = 0xD;
    if (D_809E0434 != 0) {
        this->unk1D74 = (f32) ((f32) gGameInfo->data[1271] + -15.0f);
        D_801F4E30 = 0;
        globalCtx->envCtx.unk_C3 = 1;
        phi_at = globalCtx + 0x20000;
        goto block_5;
    }
    if (D_809E0422 == 0) {
        this->unk1D74 = 0.0f;
        D_801F4E30 = (s8) this->unk1D7C;
        globalCtx->envCtx.unk_C3 = 0;
        globalCtx->skyboxId = 2;
    } else {
        this->unk1D74 = (f32) ((f32) gGameInfo->data[1271] + -15.0f);
        D_801F4E30 = (s8) (u32) ((((f32) gGameInfo->data[1272] * 0.1f) + 1.0f) * (f32) this->unk1D7C);
        globalCtx->envCtx.unk_C3 = 1;
        phi_at = globalCtx + 0x20000;
block_5:
        phi_at->unk-778C = 1U;
    }
    Math_ApproachS(this + 0x1D7C, this->unk1D7E, 1, 3);
    temp_v0 = this->unk146;
    if (temp_v0 != 0) {
        this->unk146 = (s16) (temp_v0 - 1);
    }
    if (D_809E0434 == 0) {
        temp_v0_2 = D_809E0430;
        temp_t2 = temp_v0_2 - 1;
        if (temp_v0_2 != 0) {
            D_809E0430 = temp_t2;
            if ((temp_t2 & 0xFF) == 0) {
                func_801A89A8(0x801B);
            }
        }
    }
    func_809DD0CC(globalCtx);
    func_809DEAC4(this, globalCtx);
    func_809DD934(this, globalCtx);
}

void Boss02_Draw(Boss02 *this, GlobalContext *globalCtx) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    ColliderJntSph *sp68;
    ColliderJntSph *sp60;
    Vec3f *sp5C;
    Vec3f *sp58;
    f32 *sp54;
    Actor *temp_v1;
    Gfx *temp_s2;
    Gfx *temp_s7;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s4;
    MtxF *temp_s0_4;
    Vec3f *temp_a1;
    f32 *temp_s0_2;
    s32 temp_s2_2;
    void *temp_s0;
    void *temp_s0_3;
    f32 phi_f6;
    s32 phi_s2;
    s32 phi_v0;
    RSPMatrix *phi_s7;
    f32 phi_f12;
    Vec3f *phi_s3;
    s32 phi_s5;
    Boss02 *this = (Boss02 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0->polyOpa.d - 0x5C0;
    temp_s7 = temp_s2;
    temp_a0->polyOpa.d = temp_s2;
    temp_a0_2 = globalCtx->state.gfxCtx;
    temp_s4 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    if (this->actor.params == 0) {
        temp_v0 = temp_s4->polyOpa.p;
        temp_s4->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_v0->words.w1 = Lib_SegmentedToVirtual(&D_060003A0);
    } else {
        temp_v0_2 = temp_s4->polyOpa.p;
        temp_s4->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060020;
        temp_v0_2->words.w1 = Lib_SegmentedToVirtual(&D_060041A0);
    }
    temp_v0_3 = temp_s4->polyOpa.p;
    temp_s4->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) temp_s2;
    temp_v0_3->words.w0 = 0xDB060034;
    if (D_809E0422 == 0) {
        sp98 = -500.0f;
    } else {
        sp98 = 3100.0f;
    }
    sp9C = (f32) this->unk152 * 0.7853982f * 0.06666667f;
    if ((s32) this->unk144 < 0x14) {
        spAC = Math_SinS((s16) (this->unk14C * 0x2200)) * sp9C * 0.5f;
        phi_f6 = Math_CosS((s16) (this->unk14C * 0x3200)) * sp9C;
    } else {
        spAC = Math_SinS((s16) (this->unk14C << 0xC)) * sp9C * 0.5f;
        phi_f6 = Math_CosS((s16) (this->unk14C * 0x1500)) * sp9C;
    }
    spA8 = phi_f6;
    temp_s0 = this + (((s32) (this->unk14E + 0xC4) % 0xC8) * 0xC);
    SysMatrix_InsertTranslation(temp_s0->unk1BC, temp_s0->unk1C0, temp_s0->unk1C4, 0);
    SysMatrix_InsertYRotation_f(temp_s0->unkB20 + spA8, 1);
    SysMatrix_RotateStateAroundXAxis(spAC - temp_s0->unkB1C);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 250.0f, 1);
    temp_a1 = &this->unk147C;
    sp5C = temp_a1;
    SysMatrix_GetStateTranslationAndScaledZ(150.0f, temp_a1);
    temp_s0_2 = &this->unk17C;
    this->unk188 = temp_s0_2->unk0;
    this->unk18C = temp_s0_2->unk4;
    this->unk190 = temp_s0_2->unk8;
    SysMatrix_GetStateTranslationAndScaledZ(300.0f, (Vec3f *) temp_s0_2);
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, (Vec3f *) temp_s0_2);
    if (((this->unk156 & 1) != 0) && (this->unk158 == 0)) {
        temp_s4->polyOpa.p = Gfx_SetFog(temp_s4->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    SkelAnime_Draw(globalCtx, this->unk1590.skeleton, this->unk1590.limbDrawTbl, NULL, NULL, (Actor *) this);
    temp_s4->polyOpa.p = func_801660B8(globalCtx, temp_s4->polyOpa.p);
    sp60 = &this->unk1C28;
    sp68 = &this->unk1688;
    spA4 = 0.0f;
    spA0 = 0.0f;
    phi_s2 = 0;
    phi_s7 = (RSPMatrix *) temp_s7;
    phi_s3 = &this->unk1488;
    phi_s5 = 0;
    do {
        if (this->unk195 != 0) {
            phi_v0 = (s32) (*(&D_809DF5E6 + phi_s5) + this->unk14E) % 0xC8;
        } else {
            phi_v0 = (s32) (*(&D_809DF5B6 + phi_s5) + this->unk14E) % 0xC8;
        }
        if ((phi_s2 == 0x15) && ((s32) this->unk144 < 0x14)) {
            spA4 = spAC;
            spA0 = spA8;
        }
        temp_s0_3 = this + (phi_v0 * 0xC);
        SysMatrix_InsertTranslation(temp_s0_3->unk1BC, temp_s0_3->unk1C0, temp_s0_3->unk1C4, 0);
        SysMatrix_InsertYRotation_f(temp_s0_3->unkB20 + spA0, 1);
        SysMatrix_RotateStateAroundXAxis(spA4 - temp_s0_3->unkB1C);
        SysMatrix_InsertZRotation_f(temp_s0_3->unkB24, 1);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        SysMatrix_InsertYRotation_f(1.5707964f, 1);
        SysMatrix_RotateStateAroundXAxis(-1.5707964f);
        SysMatrix_GetStateAsRSPMatrix(phi_s7);
        temp_v0_4 = temp_s4->polyOpa.p;
        temp_s4->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) phi_s7;
        temp_v0_4->words.w0 = 0xDA380003;
        if (((this->unk156 & 1) != 0) && (phi_s2 >= (s32) this->unk158) && ((s32) this->unk15A >= phi_s2)) {
            temp_s4->polyOpa.p = Gfx_SetFog(temp_s4->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
        }
        if (phi_s2 < this->unk1678) {
            if (sp98 < temp_s0_3->unk1C0) {
                temp_v0_5 = temp_s4->polyOpa.p;
                temp_s4->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDE000000;
                temp_v0_5->words.w1 = *((phi_s2 * 4) + &D_809DFA9C);
            }
            temp_s4->polyOpa.p = func_801660B8(globalCtx, temp_s4->polyOpa.p);
        }
        if (phi_s2 == 0x15) {
            phi_f12 = 600.0f;
        } else {
            phi_f12 = 200.0f;
        }
        SysMatrix_GetStateTranslationAndScaledX(phi_f12, phi_s3);
        if (phi_s2 == 0x15) {
            temp_v1 = this->actor.child;
            sp54 = &this->actor.projectedW;
            sp58 = &this->unk167C;
            temp_s0_4 = &globalCtx->projectionMatrix;
            if (temp_v1 != 0) {
                SysMatrix_GetStateTranslationAndScaledX(500.0f, (Vec3f *) &temp_v1->world);
            }
            func_809DA50C(1, sp60, phi_s3);
            SkinMatrix_Vec3fMtxFMultXYZW(temp_s0_4, phi_s3, sp58, sp54);
        } else {
            func_809DA50C(phi_s2, sp68, phi_s3);
        }
        temp_s2_2 = phi_s2 + 1;
        phi_s2 = temp_s2_2;
        phi_s7 += 0x40;
        phi_s3 += 0xC;
        phi_s5 += 2;
    } while (temp_s2_2 != 0x16);
    if (D_809E0422 == 0) {
        func_809DA50C(0, sp60, &D_809DFAF4);
        func_809DA50C(0x15, sp68, sp5C);
        return;
    }
    func_809DA50C(0, sp60, sp5C);
    func_809DA50C(0x15, sp68, &D_809DFAF4);
}

void func_809DD0A8(Actor *this, GlobalContext *globalCtx) {
    func_809DD2F8(globalCtx);
}

void func_809DD0CC(GlobalContext *arg0) {
    f32 temp_f0;
    s16 temp_s1;
    u8 temp_v1;
    void *phi_s0;
    f32 phi_f22;
    s16 phi_s1;

    phi_s0 = arg0->specialEffects;
    if (D_809E0422 == 0) {
        phi_f22 = 0.0f;
    } else {
        phi_f22 = 3150.0f;
    }
    phi_s1 = 0;
    do {
        temp_v1 = phi_s0->unk24;
        if (temp_v1 != 0) {
            phi_s0->unk26 = (s16) (phi_s0->unk26 + 1);
            temp_f0 = phi_s0->unk10;
            phi_s0->unk0 = (f32) (phi_s0->unk0 + (phi_s0->unkC * D_809DF5B0));
            phi_s0->unk4 = (f32) (phi_s0->unk4 + (temp_f0 * D_809DF5B0));
            phi_s0->unk10 = (f32) (temp_f0 + phi_s0->unk1C);
            phi_s0->unk8 = (f32) (phi_s0->unk8 + (phi_s0->unk14 * D_809DF5B0));
            if ((s32) temp_v1 < 3) {
                Math_ApproachF(phi_s0 + 0x34, phi_s0->unk38, 0.1f, 0.1f);
                if (phi_s0->unk24 == 2) {
                    phi_s0->unk2C = (s16) (phi_s0->unk2C - 0x12);
                } else {
                    phi_s0->unk2C = (s16) (phi_s0->unk2C - 0xF);
                }
                if ((s32) phi_s0->unk2C <= 0) {
                    goto block_17;
                }
            } else if (temp_v1 == 3) {
                phi_s0->unk2E = (s16) (phi_s0->unk2E + 0x1000);
                phi_s0->unk30 = (s16) (phi_s0->unk30 + 0x1500);
                if ((phi_s0->unk4 < phi_f22) || ((s32) phi_s0->unk26 >= 0x33)) {
                    goto block_17;
                }
            } else if (temp_v1 == 4) {
                Math_ApproachF(phi_s0 + 0x34, 80.0f, 0.2f, 20.0f);
                phi_s0->unk2C = (s16) (phi_s0->unk2C - 0xF);
                if ((s32) phi_s0->unk2C <= 0) {
block_17:
                    phi_s0->unk24 = 0U;
                }
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x3C;
        phi_s1 = temp_s1;
    } while ((s32) temp_s1 < 0x96);
}

void func_809DD2F8(GlobalContext *arg0) {
    Gfx *spB4;
    Gfx *spB0;
    Gfx *spA0;
    Gfx *sp8C;
    Gfx *sp78;
    Gfx *sp74;
    void *sp6C;
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
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    s16 temp_s2;
    s16 temp_s2_2;
    s16 temp_s2_3;
    s16 temp_s2_4;
    s16 temp_v0_3;
    u32 temp_v1;
    u32 temp_v1_2;
    void *temp_s1;
    void *phi_s1;
    s32 phi_s4;
    s32 phi_a0;
    s16 phi_s2;
    void *phi_s1_2;
    s32 phi_s4_2;
    s16 phi_s2_2;
    void *phi_s1_3;
    s16 phi_s2_3;
    void *phi_s1_4;
    s32 phi_s4_3;
    s16 phi_s2_4;

    temp_s1 = arg0->specialEffects;
    temp_a0 = arg0->state.gfxCtx;
    sp6C = arg0 + 0x18000;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(arg0->state.gfxCtx);
    phi_s1 = temp_s1;
    phi_s4 = 0;
    phi_s2 = 0;
    phi_s4_2 = 0;
    phi_s2_2 = 0;
    phi_s2_3 = 0;
    phi_s4_3 = 0;
    phi_s2_4 = 0;
    do {
        if (phi_s1->unk24 == 1) {
            if (phi_s4 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_06000230;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0xB98C4680;
                temp_v0_2->words.w0 = 0xFB000000;
                phi_s4 = (phi_s4 + 1) & 0xFF;
            }
            temp_v0_3 = phi_s1->unk2C;
            phi_a0 = temp_v0_3 & 0xFF;
            if ((s32) temp_v0_3 >= 0x100) {
                phi_a0 = 0xFF;
            }
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (phi_a0 & 0xFF) | 0xB98C4600;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDB060020;
            temp_v1 = phi_s1->unk26 + (phi_s2 * 3);
            spB4 = temp_v0_5;
            spB4->words.w1 = Gfx_TwoTexScroll(arg0->state.gfxCtx, 0, temp_v1, temp_v1 * 5, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s1->unk0, phi_s1->unk4, phi_s1->unk8, 0);
            SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
            temp_f12 = phi_s1->unk34 * D_809DF5B0;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            spB0 = temp_v0_6;
            spB0->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_060002E0;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s2 = phi_s2 + 1;
        phi_s1 += 0x3C;
        phi_s2 = temp_s2;
    } while ((s32) temp_s2 < 0x96);
    phi_s1_2 = sp6C->unk870;
    do {
        if (phi_s1_2->unk24 == 3) {
            if (phi_s4_2 == 0) {
                temp_v0_8 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_8 + 8;
                temp_v0_8->words.w1 = 0xFF8FFFFF;
                temp_v0_8->words.w0 = 0xFC41C683;
                temp_v0_9 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xFA000001;
                temp_v0_9->words.w1 = 0x646478FF;
                phi_s4_2 = (phi_s4_2 + 1) & 0xFF;
            }
            SysMatrix_InsertTranslation(phi_s1_2->unk0, phi_s1_2->unk4, phi_s1_2->unk8, 0);
            Matrix_RotateY(phi_s1_2->unk30, 1U);
            SysMatrix_InsertXRotation_s(phi_s1_2->unk2E, 1);
            temp_f12_2 = phi_s1_2->unk34 * D_809DF5B0;
            Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
            temp_v0_10 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0xDA380003;
            spA0 = temp_v0_10;
            spA0->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_11 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_11 + 8;
            temp_v0_11->words.w1 = (u32) &D_0401A620;
            temp_v0_11->words.w0 = 0xDE000000;
        }
        temp_s2_2 = phi_s2_2 + 1;
        phi_s1_2 += 0x3C;
        phi_s2_2 = temp_s2_2;
    } while ((s32) temp_s2_2 < 0x96);
    phi_s1_3 = sp6C->unk870;
    do {
        if (phi_s1_3->unk24 == 4) {
            temp_v0_12 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = (u32) &D_04023348;
            temp_v0_12->words.w0 = 0xDE000000;
            temp_v0_13 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_13 + 8;
            temp_v0_13->words.w1 = 0xFF000080;
            temp_v0_13->words.w0 = 0xFB000000;
            temp_v0_14 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_14 + 8;
            temp_v0_14->words.w0 = 0xFA000000;
            temp_v0_14->words.w1 = phi_s1_3->unk2D | ~0x37FF;
            SysMatrix_InsertTranslation(phi_s1_3->unk0, phi_s1_3->unk4, phi_s1_3->unk8, 0);
            SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
            temp_f12_3 = phi_s1_3->unk34 * D_809DF5B0;
            Matrix_Scale(temp_f12_3, temp_f12_3, 1.0f, 1);
            temp_v0_15 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_15 + 8;
            temp_v0_15->words.w0 = 0xDA380003;
            sp8C = temp_v0_15;
            sp8C->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_16 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_16 + 8;
            temp_v0_16->words.w1 = (u32) &D_04023428;
            temp_v0_16->words.w0 = 0xDE000000;
        }
        temp_s2_3 = phi_s2_3 + 1;
        phi_s1_3 += 0x3C;
        phi_s2_3 = temp_s2_3;
    } while ((s32) temp_s2_3 < 0x96);
    phi_s1_4 = sp6C->unk870;
    do {
        if (phi_s1_4->unk24 == 2) {
            if (phi_s4_3 == 0) {
                temp_v0_17 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_17 + 8;
                temp_v0_17->words.w1 = (u32) &D_06000230;
                temp_v0_17->words.w0 = 0xDE000000;
                temp_v0_18 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_18 + 8;
                temp_v0_18->words.w1 = 0x1E1E1E80;
                temp_v0_18->words.w0 = 0xFB000000;
                phi_s4_3 = (phi_s4_3 + 1) & 0xFF;
            }
            temp_v0_19 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_19 + 8;
            temp_v0_19->words.w0 = 0xFA000000;
            temp_v0_19->words.w1 = phi_s1_4->unk2D | 0x1E1E1E00;
            temp_v0_20 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_20 + 8;
            temp_v0_20->words.w0 = 0xDB060020;
            temp_v1_2 = phi_s1_4->unk26 + (phi_s2_4 * 3);
            sp78 = temp_v0_20;
            sp78->words.w1 = Gfx_TwoTexScroll(arg0->state.gfxCtx, 0, temp_v1_2, temp_v1_2 * 5, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s1_4->unk0, phi_s1_4->unk4, phi_s1_4->unk8, 0);
            SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
            temp_f12_4 = phi_s1_4->unk34 * D_809DF5B0;
            Matrix_Scale(temp_f12_4, temp_f12_4, 1.0f, 1);
            temp_v0_21 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_21 + 8;
            temp_v0_21->words.w0 = 0xDA380003;
            sp74 = temp_v0_21;
            sp74->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            temp_v0_22 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_22 + 8;
            temp_v0_22->words.w1 = (u32) &D_060002E0;
            temp_v0_22->words.w0 = 0xDE000000;
        }
        temp_s2_4 = phi_s2_4 + 1;
        phi_s1_4 += 0x3C;
        phi_s2_4 = temp_s2_4;
    } while ((s32) temp_s2_4 < 0x96);
}

void func_809DD934(Actor *arg0, GlobalContext *arg1) {
    f32 sp58;
    u8 sp57;
    CutsceneContext *sp40;
    Actor *temp_a0_5;
    Actor *temp_a0_6;
    Actor *temp_a0_7;
    Actor *temp_a0_8;
    Actor *temp_s1;
    Actor *temp_v0_27;
    Actor *temp_v0_2;
    Actor *temp_v1_10;
    Actor *temp_v1_11;
    Actor *temp_v1_12;
    Actor *temp_v1_13;
    Actor *temp_v1_14;
    Actor *temp_v1_15;
    Actor *temp_v1_16;
    Actor *temp_v1_17;
    Actor *temp_v1_18;
    Actor *temp_v1_19;
    Actor *temp_v1_20;
    Actor *temp_v1_21;
    Actor *temp_v1_22;
    Actor *temp_v1_23;
    Actor *temp_v1_24;
    Actor *temp_v1_25;
    Actor *temp_v1_26;
    Actor *temp_v1_27;
    Actor *temp_v1_28;
    Actor *temp_v1_29;
    Actor *temp_v1_2;
    Actor *temp_v1_30;
    Actor *temp_v1_31;
    Actor *temp_v1_32;
    Actor *temp_v1_33;
    Actor *temp_v1_3;
    Actor *temp_v1_4;
    Actor *temp_v1_5;
    Actor *temp_v1_6;
    Actor *temp_v1_7;
    Actor *temp_v1_8;
    Actor *temp_v1_9;
    Boss02 *temp_v0_10;
    Boss02 *temp_v0_15;
    Boss02 *temp_v0_16;
    Boss02 *temp_v0_17;
    Boss02 *temp_v0_18;
    Boss02 *temp_v0_19;
    Boss02 *temp_v0_20;
    Boss02 *temp_v0_21;
    Boss02 *temp_v0_22;
    Boss02 *temp_v0_28;
    Boss02 *temp_v0_29;
    Boss02 *temp_v0_30;
    Boss02 *temp_v0_31;
    Boss02 *temp_v0_32;
    Boss02 *temp_v0_33;
    Boss02 *temp_v0_34;
    Boss02 *temp_v0_35;
    Boss02 *temp_v0_3;
    Boss02 *temp_v0_40;
    Boss02 *temp_v0_41;
    Boss02 *temp_v0_42;
    Boss02 *temp_v0_43;
    Boss02 *temp_v0_44;
    Boss02 *temp_v0_45;
    Boss02 *temp_v0_46;
    Boss02 *temp_v0_47;
    Boss02 *temp_v0_4;
    Boss02 *temp_v0_5;
    Boss02 *temp_v0_6;
    Boss02 *temp_v0_7;
    Boss02 *temp_v0_8;
    Boss02 *temp_v0_9;
    CutsceneContext *temp_a1;
    PosRot *temp_v0_52;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_v0_54;
    s16 temp_v0_56;
    s16 temp_v1;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    u32 temp_v0;
    u8 temp_t3;
    u8 temp_v0_53;
    u8 temp_v0_55;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_36;
    void *temp_v0_37;
    void *temp_v0_38;
    void *temp_v0_39;
    void *temp_v0_48;
    void *temp_v0_49;
    void *temp_v0_50;
    void *temp_v0_51;
    u32 phi_v0;
    f32 phi_f12;
    u32 phi_v0_2;
    u32 phi_v0_3;
    s16 phi_a0;
    s16 phi_a0_2;
    s16 phi_a0_3;
    s16 phi_a0_4;
    Actor *phi_a0_5;
    f32 phi_f0;
    Actor *phi_a0_6;
    f32 phi_f0_2;
    GlobalContext *phi_f12_2;
    s32 phi_f14;
    s16 phi_v1;
    s16 phi_v1_2;
    f32 phi_f2;

    temp_s1 = arg1->actorCtx.actorList[2].first;
    sp57 = 0;
    temp_v1 = arg0->unk1D18;
    arg0->unk1D14 = (u32) (arg0->unk1D14 + 1);
    switch (temp_v1) {
    case 0:
        if ((temp_s1->unkA6C & 0x100) != 0) {
            func_800EA0D4(arg1, arg1 + 0x1F24);
            arg0->unk1D22 = func_801694DC(arg1);
            func_80169590(arg1, 0, 1);
            func_80169590(arg1, arg0->unk1D22, 7);
            func_8016566C(0x96);
            arg0->unk1D14 = 0U;
            arg0->unk1D5C = 0.0f;
            arg0->unk1D58 = 0.0f;
            if (D_809E0422 == 0) {
                arg0->unk1D18 = 1;
                arg0->unk1D68 = 10.0f;
                arg0->unk1D64 = 60.0f;
                arg0->unk1D6C = 23.0f;
                arg0->unk1D70 = 0.01f;
                arg0->unk1D74 = 0.0f;
                phi_v0 = 0U;
block_10:
                if (phi_v0 >= 0x32U) {
                    if (phi_v0 == (gGameInfo->data[2443] + 0x3C)) {
                        play_sound(0x9C5U);
                    }
                    Math_ApproachF(arg0 + 0x1D64, 200.0f, 0.1f, arg0->unk1D5C * 640.0f);
                    Math_ApproachF(arg0 + 0x1D6C, 273.0f, 0.1f, arg0->unk1D5C * 150.0f);
                    Math_ApproachF(arg0 + 0x1D70, 0.1f, 0.2f, arg0->unk1D5C * 0.1f);
                    Math_ApproachF(arg0 + 0x1D74, -100.0f, 1.0f, arg0->unk1D5C * 100.0f);
                    Math_ApproachF(arg0 + 0x1D5C, 1.0f, 1.0f, 0.001f);
                } else {
                    Math_ApproachF(arg0 + 0x1D64, 30.0f, 0.1f, 1.0f);
                }
                if ((u32) arg0->unk1D14 >= 0x33U) {
                    Math_ApproachZeroF(arg0 + 0x1D58, 1.0f, 0.06f);
                } else {
                    Math_ApproachF(arg0 + 0x1D58, 0.4f, 1.0f, 0.02f);
                }
                if (arg0->unk1D14 == 0x6B) {
                    arg0->unk1D78 = 1U;
                }
                if (arg0->unk1D14 >= 0x79U) {
                    sp57 = 1;
                    D_809E0420 = 1;
                    goto block_38;
                }
            } else {
                arg0->unk1D18 = 0xA;
                arg0->unk1D68 = 10.0f;
                arg0->unk1D64 = 200.0f;
                arg0->unk1D70 = 0.1f;
                arg0->unk1D6C = 273.0f;
                arg0->unk1D74 = -100.0f;
                sp57 = 1;
block_29:
                phi_f12 = 0.1f;
                phi_v0_2 = arg0->unk1D14;
                if (arg0->unk1D14 != 0) {
                    if (arg0->unk1D14 == (gGameInfo->data[2444] + 0xA)) {
                        play_sound(0x9C6U);
                        phi_f12 = 0.1f;
                    }
                    Math_ApproachF(arg0 + 0x1D64, 60.0f, phi_f12, arg0->unk1D5C * 640.0f);
                    Math_ApproachF(arg0 + 0x1D6C, 23.0f, 0.1f, arg0->unk1D5C * 150.0f);
                    Math_ApproachF(arg0 + 0x1D70, 0.01f, 0.1f, 0.003f);
                    Math_ApproachF(arg0 + 0x1D74, 0.0f, 1.0f, arg0->unk1D5C * 100.0f);
                    Math_ApproachF(arg0 + 0x1D5C, 2.0f, 1.0f, 0.01f);
                    phi_v0_2 = arg0->unk1D14;
                }
                phi_v0_3 = phi_v0_2;
                if (phi_v0_2 == 0x2A) {
                    arg0->unk1D78 = 1U;
                    phi_v0_3 = arg0->unk1D14;
                }
                if (phi_v0_3 >= 0x33U) {
                    D_809E0421 = 1;
                case 20:
block_38:
                    arg0->unk1D18 = 0;
                    sp40 = &arg1->csCtx;
                    func_80169AFC(arg1, arg0->unk1D22, 0);
                    arg0->unk1D22 = 0;
                    func_800EA0EC(arg1, sp40);
                    arg0->flags |= 1;
                    temp_s1->unkA6C = (s32) (temp_s1->unkA6C & ~0x100);
                    arg0->unk1D70 = 0.01f;
                    func_80165690();
                }
            }
        }
        break;
    case 1:
        temp_v0 = arg0->unk1D14;
        phi_v0 = temp_v0;
        if ((temp_v0 < 0x50U) && (D_809E0420 != 0) && ((arg1->state.input[0].press.button & 0xC00F) != 0)) {
            arg0->unk1D18 = (s16) (temp_v1 + 1);
            arg0->unk1D78 = 1U;
            arg0->unk1D14 = 0U;
        } else {
            goto block_10;
        }
        break;
    case 2:
        if ((u32) arg0->unk1D14 >= 8U) {
            sp57 = 1;
            goto block_38;
        }
        break;
    case 10:
        if (((u32) arg0->unk1D14 < 0x1EU) && (D_809E0421 != 0) && ((arg1->state.input[0].press.button & 0xC00F) != 0)) {
            arg0->unk1D18 = (s16) (temp_v1 + 1);
            arg0->unk1D78 = 1U;
            arg0->unk1D14 = 0U;
        } else {
            goto block_29;
        }
        break;
    case 11:
        if ((u32) arg0->unk1D14 >= 8U) {
            goto block_38;
        }
        break;
    }
    if (temp_s1->unk14B == 0) {
        Actor_SetScale(temp_s1, arg0->unk1D70 * 1.5f);
    } else {
        Actor_SetScale(temp_s1, arg0->unk1D70);
    }
    arg1->envCtx.unk_8C.fogNear = (s16) (s32) arg0->unk1D74;
    phi_f12_2 = (bitwise GlobalContext *) 0.1f;
    phi_f14 = (bitwise s32) 10.0f;
    if (sp57 != 0) {
        temp_t3 = 1 - D_809E0422;
        D_809E0422 = temp_t3;
        if ((temp_t3 & 0xFF) == 0) {
            D_809DF5B0 = 1.0f;
        } else {
            D_809DF5B0 = 0.1f;
        }
        arg0->unk1AC = (f32) D_809DF5B0;
        if (D_809E0422 == 0) {
            temp_v0_2 = D_809E0434;
            if (temp_v0_2 != 0) {
                temp_v0_2->unk203 = 0;
                D_809E0434->unk204 = 1.0f;
                D_809E0434->world.pos.y = 60.0f;
            }
            temp_s1->world.pos.y -= 3150.0f;
            temp_s1->world.pos.x *= 10.0f;
            temp_s1->world.pos.y *= 10.0f;
            temp_s1->world.pos.z *= 10.0f;
            temp_s1->unkB68 = (s16) (s32) temp_s1->world.pos.y;
            if (D_809E0434 != 0) {
                temp_f16 = temp_s1->world.pos.z;
                temp_f0 = temp_s1->world.pos.x;
                if (((temp_f16 * temp_f16) + (temp_f0 * temp_f0)) < 3600.0f) {
                    temp_s1->world.pos.z = 60.0f;
                    temp_s1->world.pos.x = 60.0f;
                }
            }
            temp_v0_3 = D_809E0424;
            temp_v0_3->actor.world.pos.x *= 10.0f;
            temp_v0_4 = D_809E0424;
            temp_v0_4->actor.world.pos.y -= 3150.0f;
            temp_v0_5 = D_809E0424;
            temp_v0_5->actor.world.pos.y *= 10.0f;
            temp_v0_6 = D_809E0424;
            temp_v0_6->actor.world.pos.z *= 10.0f;
            temp_v0_7 = D_809E0424;
            temp_v0_7->unk170 *= 10.0f;
            temp_v0_8 = D_809E0424;
            temp_v0_8->unk174 -= 3150.0f;
            temp_v0_9 = D_809E0424;
            temp_v0_9->unk174 *= 10.0f;
            temp_v0_10 = D_809E0424;
            temp_v0_10->unk178 *= 10.0f;
            phi_a0 = 0;
            phi_a0_2 = 0;
            do {
                temp_lo = phi_a0 * 0xC;
                temp_a0 = phi_a0 + 1;
                temp_v0_11 = D_809E0424 + temp_lo;
                temp_v0_11->unk1BC = (f32) (temp_v0_11->unk1BC * 10.0f);
                temp_v0_12 = D_809E0424 + temp_lo;
                temp_v0_12->unk1C0 = (f32) (temp_v0_12->unk1C0 - 3150.0f);
                temp_v0_13 = D_809E0424 + temp_lo;
                temp_v0_13->unk1C0 = (f32) (temp_v0_13->unk1C0 * 10.0f);
                temp_v0_14 = D_809E0424 + temp_lo;
                temp_v0_14->unk1C4 = (f32) (temp_v0_14->unk1C4 * 10.0f);
                phi_a0 = temp_a0;
            } while ((s32) temp_a0 < 0xC8);
            temp_v0_15 = D_809E0424;
            temp_v0_15->unk1B0 *= 10.0f;
            temp_v0_16 = D_809E0424;
            temp_v0_16->unk1B4 -= 3150.0f;
            temp_v0_17 = D_809E0424;
            temp_v0_17->unk1B4 *= 10.0f;
            temp_v0_18 = D_809E0424;
            temp_v0_18->unk1B8 *= 10.0f;
            temp_v0_19 = D_809E0424;
            temp_v0_19->unk180 -= 3150.0f;
            temp_v0_20 = D_809E0424;
            temp_v0_20->unk180 *= 10.0f;
            temp_v0_21 = D_809E0424;
            temp_v0_21->unk18C -= 3150.0f;
            temp_v0_22 = D_809E0424;
            temp_v0_22->unk18C *= 10.0f;
            temp_v1_2 = D_809E0428;
            temp_v1_2->world.pos.x *= 10.0f;
            temp_v1_3 = D_809E0428;
            temp_v1_3->world.pos.y -= 3150.0f;
            temp_v1_4 = D_809E0428;
            temp_v1_4->world.pos.y *= 10.0f;
            temp_v1_5 = D_809E0428;
            temp_v1_5->world.pos.z *= 10.0f;
            temp_v1_6 = D_809E0428;
            temp_v1_6->unk170 = (f32) (temp_v1_6->unk170 * 10.0f);
            temp_v1_7 = D_809E0428;
            temp_v1_7->unk174 = (f32) (temp_v1_7->unk174 - 3150.0f);
            temp_v1_8 = D_809E0428;
            temp_v1_8->unk174 = (f32) (temp_v1_8->unk174 * 10.0f);
            temp_v1_9 = D_809E0428;
            temp_v1_9->unk178 = (f32) (temp_v1_9->unk178 * 10.0f);
            do {
                temp_lo_2 = phi_a0_2 * 0xC;
                temp_a0_2 = phi_a0_2 + 1;
                temp_v0_23 = D_809E0428 + temp_lo_2;
                temp_v0_23->unk1BC = (f32) (temp_v0_23->unk1BC * 10.0f);
                temp_v0_24 = D_809E0428 + temp_lo_2;
                temp_v0_24->unk1C0 = (f32) (temp_v0_24->unk1C0 - 3150.0f);
                temp_v0_25 = D_809E0428 + temp_lo_2;
                temp_v0_25->unk1C0 = (f32) (temp_v0_25->unk1C0 * 10.0f);
                temp_v0_26 = D_809E0428 + temp_lo_2;
                temp_v0_26->unk1C4 = (f32) (temp_v0_26->unk1C4 * 10.0f);
                phi_a0_2 = temp_a0_2;
            } while ((s32) temp_a0_2 < 0xC8);
            temp_v1_10 = D_809E0428;
            temp_v1_10->unk1B0 = (f32) (temp_v1_10->unk1B0 * 10.0f);
            temp_v1_11 = D_809E0428;
            temp_v1_11->unk1B4 = (f32) (temp_v1_11->unk1B4 - 3150.0f);
            temp_v1_12 = D_809E0428;
            temp_v1_12->unk1B4 = (f32) (temp_v1_12->unk1B4 * 10.0f);
            temp_v1_13 = D_809E0428;
            temp_v1_13->unk1B8 = (f32) (temp_v1_13->unk1B8 * 10.0f);
            temp_v1_14 = D_809E0428;
            temp_v1_14->unk180 = (f32) (temp_v1_14->unk180 - 3150.0f);
            temp_v1_15 = D_809E0428;
            temp_v1_15->unk180 = (f32) (temp_v1_15->unk180 * 10.0f);
            temp_v1_16 = D_809E0428;
            temp_v1_16->unk18C = (f32) (temp_v1_16->unk18C - 3150.0f);
            temp_v1_17 = D_809E0428;
            temp_v1_17->unk18C = (f32) (temp_v1_17->unk18C * 10.0f);
        } else {
            temp_v0_27 = D_809E0434;
            if (temp_v0_27 != 0) {
                temp_v0_27->unk203 = 1;
                D_809E0434->unk204 = 0.1f;
                D_809E0434->world.pos.y = 3155.0f;
            }
            temp_s1->world.pos.x *= 0.1f;
            temp_s1->world.pos.y *= 0.1f;
            temp_s1->world.pos.y += 3150.0f;
            temp_s1->world.pos.z *= 0.1f;
            temp_s1->unkB68 = (s16) (s32) temp_s1->world.pos.y;
            temp_v0_28 = D_809E0424;
            temp_v0_28->actor.world.pos.x *= 0.1f;
            temp_v0_29 = D_809E0424;
            temp_v0_29->actor.world.pos.y *= 0.1f;
            temp_v0_30 = D_809E0424;
            temp_v0_30->actor.world.pos.y += 3150.0f;
            temp_v0_31 = D_809E0424;
            temp_v0_31->actor.world.pos.z *= 0.1f;
            temp_v0_32 = D_809E0424;
            temp_v0_32->unk170 *= 0.1f;
            temp_v0_33 = D_809E0424;
            temp_v0_33->unk174 *= 0.1f;
            temp_v0_34 = D_809E0424;
            temp_v0_34->unk174 += 3150.0f;
            temp_v0_35 = D_809E0424;
            temp_v0_35->unk178 *= 0.1f;
            phi_a0_3 = 0;
            phi_a0_4 = 0;
            do {
                temp_lo_3 = phi_a0_3 * 0xC;
                temp_a0_3 = phi_a0_3 + 1;
                temp_v0_36 = D_809E0424 + temp_lo_3;
                temp_v0_36->unk1BC = (f32) (temp_v0_36->unk1BC * 0.1f);
                temp_v0_37 = D_809E0424 + temp_lo_3;
                temp_v0_37->unk1C0 = (f32) (temp_v0_37->unk1C0 * 0.1f);
                temp_v0_38 = D_809E0424 + temp_lo_3;
                temp_v0_38->unk1C0 = (f32) (temp_v0_38->unk1C0 + 3150.0f);
                temp_v0_39 = D_809E0424 + temp_lo_3;
                temp_v0_39->unk1C4 = (f32) (temp_v0_39->unk1C4 * 0.1f);
                phi_a0_3 = temp_a0_3;
            } while ((s32) temp_a0_3 < 0xC8);
            temp_v0_40 = D_809E0424;
            temp_v0_40->unk1B0 *= 0.1f;
            temp_v0_41 = D_809E0424;
            temp_v0_41->unk1B4 *= 0.1f;
            temp_v0_42 = D_809E0424;
            temp_v0_42->unk1B4 += 3150.0f;
            temp_v0_43 = D_809E0424;
            temp_v0_43->unk1B8 *= 0.1f;
            temp_v0_44 = D_809E0424;
            temp_v0_44->unk180 *= 0.1f;
            temp_v0_45 = D_809E0424;
            temp_v0_45->unk180 += 3150.0f;
            temp_v0_46 = D_809E0424;
            temp_v0_46->unk18C *= 0.1f;
            temp_v0_47 = D_809E0424;
            temp_v0_47->unk18C += 3150.0f;
            temp_v1_18 = D_809E0428;
            temp_v1_18->world.pos.x *= 0.1f;
            temp_v1_19 = D_809E0428;
            temp_v1_19->world.pos.y *= 0.1f;
            temp_v1_20 = D_809E0428;
            temp_v1_20->world.pos.y += 3150.0f;
            temp_v1_21 = D_809E0428;
            temp_v1_21->world.pos.z *= 0.1f;
            temp_v1_22 = D_809E0428;
            temp_v1_22->unk170 = (f32) (temp_v1_22->unk170 * 0.1f);
            temp_v1_23 = D_809E0428;
            temp_v1_23->unk174 = (f32) (temp_v1_23->unk174 * 0.1f);
            temp_v1_24 = D_809E0428;
            temp_v1_24->unk174 = (f32) (temp_v1_24->unk174 + 3150.0f);
            temp_v1_25 = D_809E0428;
            temp_v1_25->unk178 = (f32) (temp_v1_25->unk178 * 0.1f);
            do {
                temp_lo_4 = phi_a0_4 * 0xC;
                temp_a0_4 = phi_a0_4 + 1;
                temp_v0_48 = D_809E0428 + temp_lo_4;
                temp_v0_48->unk1BC = (f32) (temp_v0_48->unk1BC * 0.1f);
                temp_v0_49 = D_809E0428 + temp_lo_4;
                temp_v0_49->unk1C0 = (f32) (temp_v0_49->unk1C0 * 0.1f);
                temp_v0_50 = D_809E0428 + temp_lo_4;
                temp_v0_50->unk1C0 = (f32) (temp_v0_50->unk1C0 + 3150.0f);
                temp_v0_51 = D_809E0428 + temp_lo_4;
                temp_v0_51->unk1C4 = (f32) (temp_v0_51->unk1C4 * 0.1f);
                phi_a0_4 = temp_a0_4;
            } while ((s32) temp_a0_4 < 0xC8);
            temp_v1_26 = D_809E0428;
            temp_v1_26->unk1B0 = (f32) (temp_v1_26->unk1B0 * 0.1f);
            temp_v1_27 = D_809E0428;
            temp_v1_27->unk1B4 = (f32) (temp_v1_27->unk1B4 * 0.1f);
            temp_v1_28 = D_809E0428;
            temp_v1_28->unk1B4 = (f32) (temp_v1_28->unk1B4 + 3150.0f);
            temp_v1_29 = D_809E0428;
            temp_v1_29->unk1B8 = (f32) (temp_v1_29->unk1B8 * 0.1f);
            temp_v1_30 = D_809E0428;
            temp_v1_30->unk180 = (f32) (temp_v1_30->unk180 * 0.1f);
            temp_v1_31 = D_809E0428;
            temp_v1_31->unk180 = (f32) (temp_v1_31->unk180 + 3150.0f);
            temp_v1_32 = D_809E0428;
            temp_v1_32->unk18C = (f32) (temp_v1_32->unk18C * 0.1f);
            temp_v1_33 = D_809E0428;
            temp_v1_33->unk18C = (f32) (temp_v1_33->unk18C + 3150.0f);
        }
        temp_v0_52 = &temp_s1->world;
        temp_s1->home.pos.x = temp_v0_52->pos.x;
        temp_s1->home.pos.y = temp_v0_52->pos.y;
        temp_s1->home.pos.z = temp_v0_52->pos.z;
        temp_s1->prevPos.x = temp_v0_52->pos.x;
        temp_s1->prevPos.y = temp_v0_52->pos.y;
        temp_s1->prevPos.z = temp_v0_52->pos.z;
        temp_a0_5 = arg1->actorCtx.actorList[1].first;
        phi_a0_5 = temp_a0_5;
        phi_f2 = 3150.0f;
        if (temp_a0_5 != 0) {
loop_65:
            if (phi_a0_5->id == 0x227) {
                Actor_MarkForDeath(phi_a0_5);
                phi_f2 = 3150.0f;
            } else {
                temp_a0_6 = phi_a0_5->next;
                phi_a0_5 = temp_a0_6;
                if (temp_a0_6 != 0) {
                    goto loop_65;
                }
            }
        }
        temp_v0_53 = D_809E0422;
        if (temp_v0_53 != 0) {
            phi_f0 = phi_f2;
        } else {
            phi_f0 = 0.0f;
        }
        Actor_Spawn(&arg1->actorCtx, arg1, 0x227, 0.0f, phi_f0, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) temp_v0_53);
        temp_a0_7 = arg1->actorCtx.actorList[9].first;
        phi_a0_6 = temp_a0_7;
        phi_f12_2 = (bitwise GlobalContext *) 0.1f;
        phi_f14 = (bitwise s32) 10.0f;
        if (temp_a0_7 != 0) {
            do {
                temp_v0_54 = phi_a0_6->id;
                if ((temp_v0_54 == 0x268) || (temp_v0_54 == 0x3A)) {
                    if (D_809E0422 == 0) {
                        phi_a0_6->world.pos.y -= 3150.0f;
                        phi_a0_6->floorHeight -= 3150.0f;
                        phi_a0_6->world.pos.y *= 10.0f;
                        phi_a0_6->floorHeight *= 10.0f;
                        phi_f0_2 = 10.0f;
                    } else {
                        phi_a0_6->world.pos.y *= 0.1f;
                        phi_a0_6->floorHeight *= 0.1f;
                        phi_a0_6->world.pos.y += 3150.0f;
                        phi_a0_6->floorHeight += 3150.0f;
                        phi_f0_2 = 0.1f;
                    }
                    phi_a0_6->world.pos.x *= phi_f0_2;
                    phi_a0_6->world.pos.z *= phi_f0_2;
                    phi_a0_6->speedXZ *= phi_f0_2;
                    phi_a0_6->velocity.x *= phi_f0_2;
                    phi_a0_6->velocity.y *= phi_f0_2;
                    phi_a0_6->velocity.z *= phi_f0_2;
                    phi_a0_6->gravity *= phi_f0_2;
                    phi_a0_6->minVelocityY *= phi_f0_2;
                    phi_a0_6->scale.x *= phi_f0_2;
                    phi_a0_6->scale.y *= phi_f0_2;
                    phi_a0_6->scale.z *= phi_f0_2;
                    if (phi_a0_6->id == 0x3A) {
                        phi_a0_6->unk168 = (f32) (phi_a0_6->unk168 * phi_f0_2);
                    }
                }
                temp_a0_8 = phi_a0_6->next;
                phi_a0_6 = temp_a0_8;
            } while (temp_a0_8 != 0);
        }
    }
    temp_v0_55 = arg0->unk1D78;
    if (temp_v0_55 != 0) {
        if (temp_v0_55 != 1) {
            if (temp_v0_55 != 2) {
                if (temp_v0_55 != 3) {

                } else {
                    arg0->unk1D7A = (s16) (arg0->unk1D7A - 0x28);
                    temp_v0_56 = arg0->unk1D7A;
                    if ((s32) temp_v0_56 <= 0) {
                        arg0->unk1D7A = 0;
                        arg0->unk1D78 = 0U;
                        func_809DA24C(phi_f12_2, phi_f14, arg1, 0xFF);
                    } else {
                        phi_v1 = temp_v0_56;
                        if ((s32) temp_v0_56 >= 0x100) {
                            phi_v1 = 0xFF;
                        }
                        func_809DA22C(phi_f12_2, phi_f14, arg1, phi_v1 & 0xFF);
                    }
                }
            } else {
                goto block_87;
            }
        } else {
            arg0->unk1D7A = 0;
            func_809DA1D0(phi_f12_2, phi_f14, (s32) arg1, 0xFF, 0xFFU, 0xFF, 0);
            arg0->unk1D78 = 2U;
            play_sound(0x484FU);
block_87:
            arg0->unk1D7A = (s16) (arg0->unk1D7A + 0x28);
            if ((s32) arg0->unk1D7A >= 0x190) {
                arg0->unk1D78 = 3U;
            }
            phi_v1_2 = arg0->unk1D7A;
            if ((s32) arg0->unk1D7A >= 0x100) {
                phi_v1_2 = 0xFF;
            }
            func_809DA22C(arg1, phi_v1_2 & 0xFF);
        }
    }
    if ((arg0->unk1D18 != 0) && (arg0->unk1D22 != 0)) {
        Matrix_RotateY(temp_s1->shape.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(arg0->unk1D64, (Vec3f *) &sp58);
        arg0->unk1D24 = (f32) (temp_s1->world.pos.x + sp58);
        arg0->unk1D28 = (f32) (temp_s1->world.pos.y + sp5C + arg0->unk1D68);
        arg0->unk1D2C = (f32) (temp_s1->world.pos.z + sp60);
        arg0->unk1D30 = (f32) temp_s1->world.pos.x;
        arg0->unk1D34 = (f32) (temp_s1->world.pos.y + arg0->unk1D6C);
        arg0->unk1D38 = (f32) temp_s1->world.pos.z;
        temp_f12 = Math_SinS((s16) (arg0->unk1D14 * 0x5E8)) * arg0->unk1D58;
        arg0->unk1D54 = temp_f12;
        SysMatrix_InsertZRotation_f(temp_f12, 1);
        temp_a1 = arg0 + 0x1D3C;
        sp40 = temp_a1;
        SysMatrix_GetStateTranslationAndScaledY(1.0f, (Vec3f *) temp_a1);
        func_8016981C(arg1, arg0->unk1D22, arg0 + 0x1D30, arg0 + 0x1D24, sp40);
        ShrinkWindow_SetLetterboxTarget(0x1B);
    }
}

void func_809DEAC4(Actor *arg0, GlobalContext *arg1) {
    Player *sp6C;
    Boss02 *sp68;
    f32 sp60;
    ? sp5C;
    f32 sp58;
    ActorContext *sp48;
    Actor *temp_v0;
    ActorContext *temp_a0;
    ActorContext *temp_a0_2;
    GameInfo *temp_v0_2;
    f32 temp_f0;
    s16 temp_v1;
    u32 temp_v1_2;
    void *temp_t5;
    ActorContext *phi_a0;
    f32 phi_f0;
    u32 phi_v1;
    GameInfo *phi_v0;
    u32 phi_v1_2;
    u32 phi_v1_3;
    u32 phi_v1_4;
    u32 phi_v1_5;
    u32 phi_v1_6;

    sp58 = 0.0f;
    sp6C = arg1->actorCtx.actorList[2].first;
    arg0->unk1D1C = (u32) (arg0->unk1D1C + 1);
    if (arg0->unk194 == 0) {
        sp68 = D_809E0424;
    } else {
        sp68 = (Boss02 *) D_809E0428;
    }
    temp_v1 = arg0->unk1D20;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 0xA) {
                    if (temp_v1 != 0x64) {
                        if ((temp_v1 != 0x65) && (temp_v1 != 0x66)) {
                            if (temp_v1 != 0x67) {

                            } else {
                                arg0->unk150 = (s16) (arg0->unk150 + 0x4000);
                                sp58 = (f32) arg0->unk146 * Math_SinS(arg0->unk150) * 1.5f;
                                if (arg0->unk1D1C == 0x1E) {
                                    func_80169AFC(arg1, arg0->unk1D22, 0);
                                    arg0->unk1D22 = 0;
                                    func_800EA0EC(arg1, &arg1->csCtx);
                                    func_800B7298(arg1, arg0, 6U);
                                    arg0->unk1D20 = 0;
                                    arg0->flags |= 1;
                                    sp68->unk144 = 0xA;
                                    if (((s32) D_809E0424->unk144 >= 0xA) && ((s32) D_809E0428->unk144 >= 0xA)) {
                                        arg0->unk1D7E = 0;
                                        temp_a0 = &arg1->actorCtx;
                                        if (D_809E0422 == 0) {
                                            temp_a0_2 = &arg1->actorCtx;
                                            sp48 = temp_a0_2;
                                            Actor_Spawn(temp_a0_2, arg1, 0x3A, 0.0f, 30.0f, -150.0f, (s16) 0, (s16) 1, (s16) 0, (s16) 0);
                                            phi_a0 = temp_a0_2;
                                            phi_f0 = 60.0f;
                                        } else {
                                            sp48 = temp_a0;
                                            Actor_Spawn(temp_a0, arg1, 0x3A, 0.0f, 3153.0f, -15.0f, (s16) 0, (s16) 1, (s16) 0, (s16) 0x23);
                                            phi_a0 = temp_a0;
                                            phi_f0 = 3155.0f;
                                        }
                                        temp_v0 = Actor_SpawnAsChild(phi_a0, arg0, arg1, 0x38, 0.0f, phi_f0, 0.0f, (s16) 0, (s16) 0, (s16) 0, 1);
                                        D_809E0434 = temp_v0;
                                        if (D_809E0422 == 0) {
                                            temp_v0->unk203 = 0;
                                            D_809E0434->unk204 = 1.0f;
                                        } else {
                                            D_809E0434->unk203 = 1;
                                            D_809E0434->unk204 = 0.1f;
                                        }
                                    }
                                }
                                goto block_47;
                            }
                        } else {
                            goto block_47;
                        }
                    } else if (ActorCutscene_GetCurrentIndex() == -1) {
                        func_800EA0D4(arg1, &arg1->csCtx);
                        arg0->unk1D22 = func_801694DC(arg1);
                        func_80169590(arg1, 0, 1);
                        func_80169590(arg1, arg0->unk1D22, 7);
                        arg0->unk1D20 = 0x65;
                        arg0->unk1D1C = 0U;
                        arg0->unk1D5C = 1.0f;
                        arg0->unk1D30 = (f32) sp68->actor.world.pos.x;
                        arg0->unk1D34 = (f32) sp68->actor.world.pos.y;
                        arg0->unk1D38 = (f32) sp68->actor.world.pos.z;
block_47:
                        if ((arg0->unk1D20 == 0x65) || (arg0->unk1D20 == 0x67)) {
                            arg0->unk1D48 = (f32) sp68->actor.world.pos.x;
                            arg0->unk1D4C = (f32) sp68->actor.world.pos.y;
                            arg0->unk1D50 = (f32) sp68->actor.world.pos.z;
                        } else {
                            temp_t5 = sp68 + (sp68->unk1678 * 0xC);
                            arg0->unk1D48 = (f32) temp_t5->unk147C;
                            arg0->unk1D4C = (f32) temp_t5->unk1480;
                            arg0->unk1D50 = (f32) temp_t5->unk1484;
                        }
                        arg0->unk1D24 = (f32) sp6C->actor.world.pos.x;
                        arg0->unk1D28 = (f32) (sp6C->actor.world.pos.y + 100.0f);
                        if (D_809E0422 == 0) {
                            if (arg0->unk1D28 < 100.0f) {
                                arg0->unk1D28 = 100.0f;
                            }
                        } else if (arg0->unk1D28 < 3160.0f) {
                            arg0->unk1D28 = 3160.0f;
                        }
                        temp_f0 = 100.0f * D_809DF5B0;
                        if (arg0->unk1D4C < temp_f0) {
                            arg0->unk1D4C = temp_f0;
                        }
                        arg0->unk1D2C = (f32) sp6C->actor.world.pos.z;
                        Math_ApproachF(arg0 + 0x1D30, arg0->unk1D48, 0.3f, arg0->unk1D5C * 500.0f);
                        Math_ApproachF(arg0 + 0x1D34, arg0->unk1D4C, 0.3f, arg0->unk1D5C * 500.0f);
                        Math_ApproachF(arg0 + 0x1D38, arg0->unk1D50, 0.3f, arg0->unk1D5C * 500.0f);
                        Math_ApproachF(arg0 + 0x1D5C, 1.0f, 1.0f, 0.02f);
                    }
                } else {
                    if ((u32) arg0->unk1D1C < 0x136U) {
                        arg0->unk1D48 = (f32) sp68->actor.world.pos.x;
                        arg0->unk1D4C = (f32) sp68->actor.world.pos.y;
                        arg0->unk1D50 = (f32) sp68->actor.world.pos.z;
                        arg0->unk1D24 = (f32) (sp68->actor.world.pos.x * 50.0f * 0.001f);
                        arg0->unk1D28 = (f32) (sp68->actor.world.pos.y * 50.0f * 0.001f);
                        if (arg0->unk1D28 < 100.0f) {
                            arg0->unk1D28 = 100.0f;
                        }
                        arg0->unk1D2C = (f32) (sp68->actor.world.pos.z * 100.0f * 0.001f);
                    }
                    Math_ApproachF(arg0 + 0x1D30, arg0->unk1D48, 0.1f, 3000.0f);
                    Math_ApproachF(arg0 + 0x1D34, arg0->unk1D4C, 0.1f, 3000.0f);
                    Math_ApproachF(arg0 + 0x1D38, arg0->unk1D50, 0.1f, 3000.0f);
                    if (arg0->unk1D1C == 0x64) {
                        D_809E0428->unk144 = 0xB;
                        D_809E0428->unk14C = 0;
                        arg0->unk194 = 1U;
                    }
                    temp_v0_2 = gGameInfo;
                    phi_v1 = arg0->unk1D1C;
                    phi_v0 = temp_v0_2;
                    if (arg0->unk1D1C == (temp_v0_2->data[1340] + 0x7D)) {
                        Actor_TitleCardCreate(arg1, &arg1->actorCtx.titleCtxt, Lib_SegmentedToVirtual(&D_06008650), 0xA0, (s16) 0xB4, (u8) 0x80, (u8) 0x28);
                        phi_v1 = arg0->unk1D1C;
                        phi_v0 = gGameInfo;
                    }
                    if (phi_v1 == (phi_v0->data[2427] + 0x14F)) {
                        func_80169AFC(arg1, arg0->unk1D22, 0);
                        arg0->unk1D22 = 0;
                        func_800EA0EC(arg1, &arg1->csCtx);
                        func_800B7298(arg1, arg0, 6U);
                        arg0->flags |= 1;
                        arg0->unk1D20 = 0;
                        D_809E0428->unk144 = 3U;
                        D_809E0424->unk144 = D_809E0428->unk144;
                        D_809E0428->unk146 = 0x3C;
                        D_809E0424->unk146 = D_809E0428->unk146;
                        gSaveContext.eventInf[5] |= 0x20;
                    }
                }
            } else {
                goto block_15;
            }
        } else if (((gSaveContext.weekEventReg[52] & 0x20) == 0) && ((u32) (gGameInfo->data[1261] + 0xF) < (u32) arg0->unk1D1C)) {
            func_800EA0D4(arg1, &arg1->csCtx);
            arg0->unk1D22 = func_801694DC(arg1);
            func_80169590(arg1, 0, 1);
            func_80169590(arg1, arg0->unk1D22, 7);
            arg0->unk1D20 = 2;
            arg0->unk1D1C = 0U;
block_15:
            sp6C->actor.shape.rot.y = -0x8000;
            sp6C->actor.world.rot.y = sp6C->actor.shape.rot.y;
            arg0->unk1D24 = (f32) (sp6C->actor.world.pos.x - 20.0f);
            arg0->unk1D28 = (f32) ((func_800B6FC8(sp6C) + sp6C->actor.world.pos.y) - 29.0f);
            arg0->unk1D2C = (f32) (sp6C->actor.world.pos.z - 50.0f);
            arg0->unk1D30 = (f32) sp6C->actor.world.pos.x;
            temp_v1_2 = arg0->unk1D1C;
            arg0->unk1D34 = (f32) ((func_800B6FC8(sp6C) + sp6C->actor.world.pos.y) - 17.0f);
            arg0->unk1D38 = (f32) sp6C->actor.world.pos.z;
            if (temp_v1_2 >= 0x1EU) {
                if (temp_v1_2 == 0x1E) {
                    func_8013EC44(0, 0x32, 0xC8, 1);
                }
                arg0->unk150 = (s16) (arg0->unk150 + 0x4000);
                sp58 = (f32) (gGameInfo->data[2419] + 5) * Math_SinS(arg0->unk150) * 0.1f;
                SysMatrix_InsertZRotation_f((((f32) gGameInfo->data[1276] * 0.001f) + 0.017f) * Math_SinS((s16) (arg0->unk1D1C * 0x3000)), 0);
                SysMatrix_GetStateTranslationAndScaledY(1.0f, arg0 + 0x1D3C);
                func_8019F128(0x2150U);
            }
            phi_v1_2 = arg0->unk1D1C;
            if (arg0->unk1D1C == 0x14) {
                arg0->unk1D7E = 0x64;
                phi_v1_2 = arg0->unk1D1C;
            }
            phi_v1_3 = phi_v1_2;
            if (phi_v1_2 == 0x2D) {
                func_800B7298(arg1, arg0, 0x15U);
                D_809E0430 = gGameInfo->data[1339] + 0x2B;
                phi_v1_3 = arg0->unk1D1C;
            }
            phi_v1_4 = phi_v1_3;
            if (phi_v1_3 == 0x55) {
                D_809E0424->unk144 = 0xB;
                D_809E0424->unk14C = 0;
                phi_v1_4 = arg0->unk1D1C;
            }
            phi_v1_5 = phi_v1_4;
            if (phi_v1_4 == 0x5C) {
                func_8013EC44(0, 0xFF, 0x1E, 0x64);
                phi_v1_5 = arg0->unk1D1C;
            }
            phi_v1_6 = phi_v1_5;
            if (phi_v1_5 == 0x64) {
                func_800B7298(arg1, arg0, 0x73U);
                phi_v1_6 = arg0->unk1D1C;
            }
            if (phi_v1_6 == 0x70) {
                arg0->unk1D20 = 0xA;
                arg0->unk1D1C = 0U;
            }
        }
    }
    if ((arg0->unk1D20 != 0) && (arg0->unk1D22 != 0)) {
        sp5C.unk0 = (f32) arg0->unk1D24;
        sp5C.unk4 = (f32) arg0->unk1D28;
        sp5C.unk8 = (f32) arg0->unk1D2C;
        sp60 += sp58 * D_809DF5B0;
        func_8016981C(arg1, arg0->unk1D22, arg0 + 0x1D30, &sp5C, arg0 + 0x1D3C);
        arg0->unk1D3C = 0.0f;
        arg0->unk1D44 = 0.0f;
        arg0->unk1D40 = 1.0f;
        ShrinkWindow_SetLetterboxTarget(0x1B);
    }
}
