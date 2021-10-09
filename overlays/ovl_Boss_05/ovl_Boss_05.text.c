typedef struct Boss05 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ u8 unk15C;                          /* inferred */
    /* 0x15D */ char pad15D[0x1];
    /* 0x15E */ s16 unk15E;                         /* inferred */
    /* 0x160 */ s16 unk160;                         /* inferred */
    /* 0x162 */ s16 unk162;                         /* inferred */
    /* 0x164 */ char pad164[0x2];
    /* 0x166 */ s16 unk166;                         /* inferred */
    /* 0x168 */ s16 unk168;                         /* inferred */
    /* 0x16A */ s16 unk16A;                         /* inferred */
    /* 0x16C */ s16 unk16C;                         /* inferred */
    /* 0x16E */ char pad16E[0x2];
    /* 0x170 */ void (*actionFunc)(Boss05 *, GlobalContext *);
    /* 0x174 */ u8 unk174;                          /* inferred */
    /* 0x175 */ char pad175[0x1];
    /* 0x176 */ s16 unk176;                         /* inferred */
    /* 0x178 */ s16 unk178;                         /* inferred */
    /* 0x17A */ s16 unk17A;                         /* inferred */
    /* 0x17C */ f32 unk17C;                         /* inferred */
    /* 0x180 */ f32 unk180;                         /* inferred */
    /* 0x184 */ f32 unk184;                         /* inferred */
    /* 0x188 */ u8 unk188;                          /* inferred */
    /* 0x189 */ u8 unk189;                          /* inferred */
    /* 0x18A */ char pad18A[0x2];                   /* maybe part of unk189[3]? */
    /* 0x18C */ Vec3f unk18C;                       /* inferred */
    /* 0x198 */ f32 unk198;                         /* inferred */
    /* 0x19C */ s16 unk19C;                         /* inferred */
    /* 0x19E */ s16 unk19E;                         /* inferred */
    /* 0x1A0 */ s16 unk1A0;                         /* inferred */
    /* 0x1A2 */ s16 unk1A2;                         /* inferred */
    /* 0x1A4 */ char pad1A4[0x24];                  /* maybe part of unk1A2[19]? */
    /* 0x1C8 */ ColliderJntSph unk1C8;              /* inferred */
    /* 0x1E8 */ ColliderJntSphElement unk1E8;       /* inferred */
    /* 0x228 */ char pad228[0x40];
    /* 0x268 */ SkelAnime unk268;                   /* inferred */
    /* 0x2AC */ Vec3s unk2AC;                       /* inferred */
    /* 0x2B2 */ char pad2B2[0x36];                  /* maybe part of unk2AC[10]? */
    /* 0x2E8 */ Vec3s unk2E8;                       /* inferred */
    /* 0x2EE */ char pad2EE[0x36];                  /* maybe part of unk2E8[10]? */
    /* 0x324 */ f32 unk324;                         /* inferred */
    /* 0x328 */ f32 unk328;                         /* inferred */
    /* 0x32C */ f32 unk32C;                         /* inferred */
    /* 0x330 */ s16 unk330;                         /* inferred */
    /* 0x332 */ s16 unk332;                         /* inferred */
    /* 0x334 */ s16 unk334;                         /* inferred */
    /* 0x336 */ char pad336[0x2];
    /* 0x338 */ f32 unk338;                         /* inferred */
    /* 0x33C */ Vec3f unk33C;                       /* inferred */
    /* 0x348 */ s16 unk348;                         /* inferred */
    /* 0x34A */ char pad34A[0x2];
    /* 0x34C */ f32 unk34C;                         /* inferred */
    /* 0x350 */ char pad350[0x4];
    /* 0x354 */ f32 unk354;                         /* inferred */
    /* 0x358 */ f32 unk358;                         /* inferred */
    /* 0x35C */ f32 unk35C;                         /* inferred */
    /* 0x360 */ f32 unk360;                         /* inferred */
    /* 0x364 */ f32 unk364;                         /* inferred */
    /* 0x368 */ ColliderJntSph unk368;              /* inferred */
    /* 0x388 */ ColliderJntSphElement unk388;       /* inferred */
    /* 0x3C8 */ SkelAnime unk3C8;                   /* inferred */
    /* 0x40C */ Vec3s unk40C;                       /* inferred */
    /* 0x412 */ char pad412[0x72];                  /* maybe part of unk40C[20]? */
    /* 0x484 */ Vec3s unk484;                       /* inferred */
    /* 0x48A */ char pad48A[0x72];                  /* maybe part of unk484[20]? */
    /* 0x4FC */ f32 unk4FC;                         /* inferred */
    /* 0x500 */ s16 unk500;                         /* inferred */
    /* 0x502 */ s16 unk502;                         /* inferred */
    /* 0x504 */ char pad504[0x4];                   /* maybe part of unk502[3]? */
} Boss05;                                           /* size = 0x508 */

struct _mips2c_stack_Boss05_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Boss05_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_Boss05_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ CollisionHeader *sp34;               /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_Boss05_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809EE4E0 {
    /* 0x00 */ char pad0[0x80];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_809EE668 {};              /* size 0x0 */

struct _mips2c_stack_func_809EECBC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809EEDD0 {};              /* size 0x0 */

struct _mips2c_stack_func_809EEDE8 {
    /* 0x000 */ char pad0[0x5C];
    /* 0x05C */ s16 *sp5C;                          /* inferred */
    /* 0x060 */ s16 *sp60;                          /* inferred */
    /* 0x064 */ char pad64[0x8];                    /* maybe part of sp60[3]? */
    /* 0x06C */ s16 *sp6C;                          /* inferred */
    /* 0x070 */ f32 sp70;                           /* inferred */
    /* 0x074 */ s32 sp74;                           /* inferred */
    /* 0x078 */ char pad78[0x8];                    /* maybe part of sp74[3]? */
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ char pad84[0x10];                   /* maybe part of sp80[5]? */
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad94[0x4];
    /* 0x098 */ f32 sp98;                           /* inferred */
    /* 0x09C */ char pad9C[0x8];                    /* maybe part of sp98[3]? */
    /* 0x0A4 */ f32 spA4;                           /* inferred */
    /* 0x0A8 */ char padA8[0xC];                    /* maybe part of spA4[4]? */
    /* 0x0B4 */ s32 spB4;                           /* inferred */
    /* 0x0B8 */ s32 spB8;                           /* inferred */
    /* 0x0BC */ s32 spBC;                           /* inferred */
    /* 0x0C0 */ s32 spC0;                           /* inferred */
    /* 0x0C4 */ s32 spC4;                           /* inferred */
    /* 0x0C8 */ s32 spC8;                           /* inferred */
    /* 0x0CC */ s32 spCC;                           /* inferred */
    /* 0x0D0 */ s32 spD0;                           /* inferred */
    /* 0x0D4 */ s32 spD4;                           /* inferred */
    /* 0x0D8 */ ? spD8;                             /* inferred */
    /* 0x0D8 */ char padD8[0x2B];
    /* 0x103 */ u8 sp103;                           /* inferred */
    /* 0x104 */ char pad104[0x4];                   /* maybe part of sp103[5]? */
    /* 0x108 */ Actor *sp108;                       /* inferred */
    /* 0x10C */ char pad10C[0x4];
};                                                  /* size = 0x110 */

struct _mips2c_stack_func_809EF9BC {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809EFAB4 {
    /* 0x00 */ char pad0[0x74];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ ? sp80;                              /* inferred */
    /* 0x80 */ char pad80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_809EFE50 {
    /* 0x00 */ char pad0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809F0014 {};              /* size 0x0 */

struct _mips2c_stack_func_809F0058 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F00CC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F010C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F01CC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F0244 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F02D0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F0374 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F0474 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F04C0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F0538 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F0590 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F0650 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F06B8 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F0708 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F0780 {
    /* 0x00 */ char pad0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_809F0A0C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F0A64 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F0ABC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F0B0C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809F1050 {};              /* size 0x0 */

struct _mips2c_stack_func_809F1170 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0xC];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0x44];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809F1284 {};              /* size 0x0 */

struct _mips2c_stack_func_809F12A0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809F135C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F1404 {};              /* size 0x0 */

struct _mips2c_stack_func_809F1430 {};              /* size 0x0 */

struct _mips2c_stack_func_809F1464 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809F14AC {};              /* size 0x0 */

struct _mips2c_stack_func_809F1550 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_809EE4E0(Actor *arg0, GlobalContext *arg1, u8); /* static */
void func_809EE668(s32 arg0, void *arg1, ? *arg2);  /* static */
s32 func_809EECBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809EEDD0(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809EFE50(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809F0014(GlobalContext *arg0, ? arg1);     /* static */
void func_809F0058(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809F00CC(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809F01CC(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809F02D0(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809F0474(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809F0538(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809F0650(Boss05 *arg0, GlobalContext *arg1); /* static */
void func_809F0708(Actor *arg0, GlobalContext *arg1); /* static */
void func_809F0A0C(Actor *arg0, GlobalContext *arg1, u8); /* static */
void func_809F0A64(Actor *arg0, GlobalContext *arg1, u8); /* static */
s32 func_809F1050(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809F1170(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 func_809F1284(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_809F12A0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809F135C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
s32 func_809F1404(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
s32 func_809F1430(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_809F1464(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
s32 func_809F14AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809F1550(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_060006A4;
extern AnimationHeader D_06000A5C;
extern AnimationHeader D_06000ABC;
extern FlexSkeletonHeader D_060024E0;
extern AnimationHeader D_06002F0C;
extern AnimationHeader D_06003448;
extern void D_06006240;
extern FlexSkeletonHeader D_06006378;
extern AnimationHeader D_06006484;
extern AnimationHeader D_06006E50;
extern AnimationHeader D_06007488;
extern AnimationHeader D_06007908;
static CamData D_809F1A20 = {0, 0, NULL};
static SurfaceType D_809F1A28 = {{0x10000, 0x7C8}};
static CollisionPoly D_809F1A30[10];                /* unable to generate initializer */
static Vec3s D_809F1AD0[8] = {
    {0xF254, 0, 0xF254},
    {0xF254, 0, 0xDAC},
    {0xDAC, 0, 0xDAC},
    {0xDAC, 0, 0xF254},
    {0xDAC, 0xF060, 0xF254},
    {0xF254, 0xF060, 0xF254},
    {0xDAC, 0xF060, 0xDAC},
    {0xF254, 0xF060, 0xDAC},
};
static CollisionHeader D_809F1B00 = {
    {0xF254, 0xF060, 0xF254},
    {0xDAC, 0, 0xDAC},
    8,
    &D_809F1AD0,
    0xA,
    &D_809F1A30,
    &D_809F1A28,
    &D_809F1A20,
    0,
    NULL,
};
static ColliderJntSphElementInit D_809F1B2C[2] = {
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {0, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {0, {{0, 0, 0}, 0xF}, 0x64},
    },
};
static ColliderJntSphInit D_809F1B74 = {{3, 0x11, 9, 9, 0x10, 0}, 2, &D_809F1B2C};
static ColliderJntSphElementInit D_809F1B84 = {
    {3, {0xF7CFFFFF, 0, 8}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
    {0, {{0, 0, 0}, 0x14}, 0x64},
};
static ColliderJntSphInit D_809F1BA8 = {{3, 0x11, 9, 9, 0x10, 0}, 1, &D_809F1B84};
static ColliderJntSphElementInit D_809F1BB8 = {
    {3, {0xF7CFFFFF, 0, 8}, {0xF7FFFFFF, 0, 0}, 9, 1, 1},
    {0, {{0, 0, 0}, 0xF}, 0x64},
};
static ColliderJntSphInit D_809F1BDC = {{3, 0x11, 9, 9, 0x10, 0}, 1, &D_809F1BB8};
static Color_RGBA8 D_809F1BEC = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_809F1BF0 = {0xC8, 0xC8, 0xFF, 0xFF};
static Vec3f D_809F1BF4 = {0.0f, -1.0f, 0.0f};
static DamageTable D_809F1C00 = {
    {
        0,
        0xF1,
        0,
        0xF1,
        0xF1,
        0xF3,
        0,
        3,
        0xF2,
        0xE1,
        0xF1,
        0x21,
        0x31,
        0x43,
        0xF1,
        0xF1,
        0xF3,
        0xF2,
        0,
        0xF1,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static DamageTable D_809F1C20 = {
    {
        0x10,
        0xF3,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0x10,
        0xF1,
        0xF1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0x10,
        0xF1,
        0xF2,
        0x10,
        0xF1,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0x21,
        0,
        0,
        0,
        0xF1,
    },
};
static ? D_809F1C60;                                /* unable to generate initializer */
static ? D_809F1C8C;                                /* unable to generate initializer */
static ? D_809F1CB8;                                /* unable to generate initializer */
static ? D_809F1CC0;                                /* unable to generate initializer */
static Vec3f D_809F1CC4 = {0.0f, -1400.0f, 600.0f};
static Vec3f D_809F1CD0 = {1600.0f, -300.0f, 0.0f};
static Vec3f D_809F1CDC[5] = {
    {700.0f, 0.0f, 0.0f},
    {3e-45.0f, 4e-45.0f, 1e-45.0f},
    {6e-45.0f, 7e-45.0f, 1e-44.0f},
    {1.1e-44f, 1.4e-44f, 1.5e-44f},
    {1.8e-44f, 2e-44.0f, 2.2e-44f},
}; /* extra bytes: 8 */
static Vec3f D_809F2110;

void func_809EE4E0(Actor *arg0, GlobalContext *arg1) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 *temp_s3;
    f32 *temp_s4;
    s32 temp_s1;
    s32 phi_s1;

    Audio_PlaySoundAtPosition(arg1, arg0 + 0x18C, 0x1E, 0x28CBU);
    temp_s4 = &sp80;
    temp_s3 = &sp8C;
    phi_s1 = 0;
    do {
        sp80 = randPlusMinusPoint5Scaled(7.0f);
        sp88 = randPlusMinusPoint5Scaled(7.0f);
        sp84 = Rand_ZeroFloat(6.0f) + 4.0f;
        sp8C = arg0->unk18C + sp80;
        sp90 = arg0->unk190 + sp84;
        sp94 = arg0->unk194 + sp88;
        EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_s3, Rand_ZeroFloat(0.5f) + 0.7f, (Vec3f *) temp_s4, &D_809F1BF4, &D_809F1BEC, &D_809F1BF0, 0x1E);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
}

void func_809EE668(s32 arg0, void *arg1, ? *arg2) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 << 6;
    (arg1->unk1C + temp_v0)->unk30 = (s16) (s32) arg2->unk0;
    (arg1->unk1C + temp_v0)->unk32 = (s16) (s32) arg2->unk4;
    (arg1->unk1C + temp_v0)->unk34 = (s16) (s32) arg2->unk8;
    temp_v1 = arg1->unk1C + temp_v0;
    temp_v1->unk36 = (s16) (s32) (temp_v1->unk38 * (f32) temp_v1->unk2E);
}

void Boss05_Init(Boss05 *this, GlobalContext *globalCtx) {
    CollisionHeader *sp34;
    s16 temp_v0;
    s32 temp_f4;
    s32 temp_t0;
    Boss05 *this = (Boss05 *) thisx;

    sp34 = NULL;
    this->actor.targetMode = 3;
    this->actor.colChkInfo.mass = 0xFE;
    this->actor.colChkInfo.health = 2;
    temp_t0 = (s32) Rand_ZeroFloat(1000.0f);
    this->unk35C = 1.0f;
    this->unk160 = (s16) temp_t0;
    this->actor.gravity = -0.3f;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = this->actor.params;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        if (this->actor.world.rot.z == 0) {
            this->actor.world.rot.z = 0;
        }
        this->actor.shape.rot.z = 0;
        this->unk168 = this->actor.world.rot.z;
        this->actor.colChkInfo.damageTable = &D_809F1C00;
        this->actor.world.rot.z = this->actor.shape.rot.z;
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck_RelocateMeshHeader(&D_809F1B00, &sp34);
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp34);
        func_809EEDD0(this, globalCtx);
        SkelAnime_InitSV(globalCtx, &this->unk268, &D_060024E0, &D_06000ABC, &this->unk2AC, &this->unk2E8, 0xA);
        SkelAnime_InitSV(globalCtx, &this->unk3C8, &D_06006378, &D_06006484, &this->unk40C, &this->unk484, 0x14);
        this->unk4FC = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06006484);
        Collider_InitAndSetJntSph(globalCtx, &this->unk1C8, (Actor *) this, &D_809F1B74, &this->unk1E8);
        Collider_InitAndSetJntSph(globalCtx, &this->unk368, (Actor *) this, &D_809F1BA8, &this->unk388);
        if (Actor_GetRoomCleared(globalCtx, (u32) globalCtx->roomCtx.currRoom.num) != 0) {
            this->actor.params = 2;
            this->actionFunc = func_809EF9BC;
            this->actor.flags &= -2;
            func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 1U);
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 2) {
        this->actionFunc = func_809EF9BC;
        BgCheck_RelocateMeshHeader(&D_809F1B00, &sp34);
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp34);
        SkelAnime_InitSV(globalCtx, &this->unk268, &D_060024E0, &D_06000ABC, &this->unk2AC, &this->unk2E8, 0xA);
        this->actor.flags &= -2;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 1U);
        return;
    }
    if (temp_v0 == 3) {
        this->actionFunc = func_809EFAB4;
        this->unk198 = 1.0f;
        SkelAnime_InitSV(globalCtx, &this->unk268, &D_060024E0, &D_06000ABC, &this->unk2AC, &this->unk2E8, 0xA);
        SkelAnime_InitSV(globalCtx, &this->unk3C8, &D_06006378, &D_06006484, &this->unk40C, &this->unk484, 0x14);
        this->unk4FC = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06006484);
        Collider_InitAndSetJntSph(globalCtx, &this->unk1C8, (Actor *) this, &D_809F1B74, &this->unk1E8);
        Collider_InitAndSetJntSph(globalCtx, &this->unk368, (Actor *) this, &D_809F1BA8, &this->unk388);
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
        this->actor.colChkInfo.damageTable = &D_809F1C00;
        return;
    }
    if (temp_v0 == 4) {
        func_809F00CC(this, globalCtx);
        this->actor.colChkInfo.mass = 0x5A;
        SkelAnime_InitSV(globalCtx, &this->unk3C8, &D_06006378, &D_06006484, &this->unk40C, &this->unk484, 0x14);
        Collider_InitAndSetJntSph(globalCtx, &this->unk368, (Actor *) this, &D_809F1BDC, &this->unk388);
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
        this->actor.colChkInfo.damageTable = &D_809F1C20;
        this->actor.flags |= 0x30;
        return;
    }
    if ((s32) temp_v0 >= 0xA) {
        SkelAnime_InitSV(globalCtx, &this->unk3C8, &D_06006378, &D_06006484, &this->unk40C, &this->unk484, 0x14);
        this->actor.gravity = 0.0f;
        this->actor.world.rot.y = (s16) (s32) Rand_ZeroFloat(32768.0f);
        this->actor.speedXZ = Rand_ZeroFloat(3.0f) + 3.0f;
        this->actor.velocity.y = Rand_ZeroFloat(1.5f) + 1.5f;
        this->unk500 = (s16) (s32) randPlusMinusPoint5Scaled(700.0f);
        this->unk502 = (s16) (s32) randPlusMinusPoint5Scaled(1500.0f);
        temp_f4 = (s32) (Rand_ZeroFloat(30.0f) + 50.0f);
        this->actor.flags &= -2;
        this->actionFunc = func_809F0B0C;
        this->unk162 = (s16) temp_f4;
    }
}

void Boss05_Destroy(Boss05 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    Boss05 *this = (Boss05 *) thisx;

    temp_v0 = this->actor.params;
    if ((temp_v0 == 2) || (temp_v0 == 0) || (temp_v0 == 1)) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

s32 func_809EECBC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s32 temp_v0;
    u8 temp_v0_2;
    void *phi_v1;
    s32 phi_v0;

    phi_v0 = 0;
    if (arg0->unk16C == 0) {
        phi_v1 = arg0->unk1E4;
loop_2:
        temp_v0 = phi_v0 + 0x40;
        phi_v0 = temp_v0;
        if ((phi_v1->unk16 & 2) != 0) {
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            if (temp_v0_2 != 2) {
                if (temp_v0_2 != 3) {
                    if (temp_v0_2 != 4) {
                        return 0xA;
                    }
                    return 0x1E;
                }
                return 0x14;
            }
            return 0xB;
        }
        phi_v1 += 0x40;
        if (temp_v0 == 0x80) {
            if ((arg0->unk384->unk16 & 2) != 0) {
                temp_a0 = arg0;
                arg0->colChkInfo.health -= arg0->colChkInfo.damage;
                if ((s32) (s8) arg0->colChkInfo.health <= 0) {
                    Enemy_StartFinishingBlow(arg1, arg0);
                    return 2;
                }
                arg0 = arg0;
                Audio_PlayActorSound2(temp_a0, 0x3807U);
                arg0->unk16C = 0xF;
                arg0->unk15C = 0;
                arg0->unk162 = 0x1E;
                return 0;
            }
            goto block_16;
        }
        goto loop_2;
    }
block_16:
    return 0;
}

void func_809EEDD0(Boss05 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809EEDE8;
}

void func_809EEDE8(Boss05 *this, GlobalContext *globalCtx) {
    Actor *sp108;
    u8 sp103;
    ? spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    f32 spA4;
    f32 sp98;
    ? sp94;
    f32 sp80;
    s32 sp74;
    f32 sp70;
    s16 *sp6C;
    s16 *sp60;
    s16 *sp5C;
    Actor *temp_v0_6;
    Actor *temp_v0_7;
    Actor *temp_v1;
    ActorContext *temp_s0_3;
    ColliderJntSph *temp_s1_2;
    CollisionCheckContext *temp_s0_6;
    CollisionCheckContext *temp_s0_7;
    SkelAnime *temp_s0;
    f32 *temp_s1;
    f32 temp_f16;
    s16 *temp_s0_2;
    s32 temp_lo;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t5;
    void *temp_t5_2;
    void *temp_t5_3;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_t7;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_t9;
    void *temp_t9_2;
    void *temp_t9_3;
    void *temp_v0_3;
    void *temp_v0_4;
    s32 phi_s0;
    ? *phi_s1;
    s32 phi_s3;
    s16 phi_s4;
    s16 phi_s5;
    f32 phi_f2;
    s32 phi_s4_2;
    s32 phi_s0_2;
    s32 phi_s0_3;
    s32 phi_s3_2;
    s32 phi_v1;
    s16 phi_s6;
    s16 phi_s6_2;
    s16 phi_s7;
    s16 phi_s7_2;

    sp103 = 0;
    sp108 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk174;
    this->actor.hintId = 8;
    phi_s0 = 0;
    phi_s1 = &spD8;
    phi_s3 = 0;
    phi_s0_2 = 0;
    phi_s0_3 = 0;
    phi_s3_2 = 0;
    if (temp_v0 == 0) {
        spD4 = 0x3E8;
        spD0 = 0x3E80;
        spCC = 0x7D0;
        spC8 = 0x5DC;
        spC4 = 0x1770;
        spC0 = 0xBB8;
        spBC = 0x514;
        spB8 = 0x5208;
        spB4 = 0xDAC;
        phi_s6 = 0xA;
        phi_s7 = 0x300;
        if (this->unk16C != 0) {
            spD4 = 0x1B58;
            spCC = 0x1770;
            spC0 = 0x1770;
            spBC = 0x1C84;
            spB4 = 0x1964;
            phi_s6 = 1;
            phi_s7 = 0x1000;
        }
    } else {
        phi_s7 = 0;
        if (temp_v0 == 3) {
            spD4 = 0x1B58;
            spD0 = 0x3E80;
            spCC = 0x1388;
            spC8 = 0x5DC;
            spC4 = 0x2328;
            spC0 = 0x1388;
            spBC = 0x1C84;
            spB8 = 0x5208;
            spB4 = 0x157C;
            phi_s6 = 1;
            phi_s7 = 0x1000;
        } else {
            spB4 = 0;
            spB8 = 0;
            spBC = 0;
            spC0 = 0;
            spC4 = 0;
            spC8 = 0;
            spCC = 0;
            spD0 = 0;
            spD4 = 0;
            phi_s6 = 0;
        }
    }
    sp5C = &this->unk1A2;
    sp60 = &this->unk1A0;
    sp6C = &this->unk19E;
    do {
        temp_v0_2 = this->unk174;
        phi_s6_2 = phi_s6;
        phi_s7_2 = phi_s7;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 3)) {
            temp_lo = phi_s3 * spB8;
            sp70 = (f32) spB4;
            phi_s4 = phi_s6;
            phi_s5 = phi_s7;
            if (phi_s3 < 3) {
                phi_s1->unk2 = 0;
                sp74 = temp_lo;
                sp80 = (f32) spCC;
                phi_s1->unk0 = (s16) (s32) (Math_SinS((s16) ((this->unk160 * spD4) + (phi_s3 * spD0))) * sp80);
            } else {
                phi_s1->unk0 = 0;
                sp74 = temp_lo;
                sp80 = (f32) spC0;
                phi_s1->unk2 = (s16) (s32) (Math_SinS((s16) ((this->unk160 * spC8) + (phi_s3 * spC4))) * sp80);
            }
            if ((phi_s3 == 4) || (phi_s3 == 6)) {
                phi_s1->unk4 = (s16) (s32) (2.0f * (Math_SinS((s16) ((this->unk160 * spBC) + (phi_s3 * spB8))) * sp70));
            } else {
                phi_s1->unk4 = (s16) (s32) (Math_SinS((s16) ((this->unk160 * spBC) + (phi_s3 * spB8))) * sp70);
            }
        } else {
            if (temp_v0_2 == 1) {
                temp_v0_3 = phi_s0 + &D_809F1C60;
                phi_s1->unk0 = (s16) temp_v0_3->unk0;
                phi_s1->unk2 = (s16) temp_v0_3->unk2;
                phi_s1->unk4 = (s16) temp_v0_3->unk4;
                phi_s6_2 = 5;
                phi_s7_2 = 0x1000;
            } else if (temp_v0_2 == 2) {
                temp_v0_4 = phi_s0 + &D_809F1C8C;
                phi_s1->unk0 = (s16) temp_v0_4->unk0;
                phi_s1->unk2 = (s16) temp_v0_4->unk2;
                phi_s1->unk4 = (s16) temp_v0_4->unk4;
                phi_s6_2 = 1;
                phi_s7_2 = 0x2000;
            }
            phi_s4 = phi_s6_2;
            phi_s5 = phi_s7_2;
            phi_s6 = phi_s6_2;
            phi_s7 = phi_s7_2;
        }
        Math_ApproachS(sp6C, phi_s1->unk0, phi_s4, phi_s5);
        Math_ApproachS(sp60, phi_s1->unk2, phi_s4, phi_s5);
        Math_ApproachS(sp5C, phi_s1->unk4, phi_s4, phi_s5);
        temp_s3 = phi_s3 + 1;
        sp5C += 6;
        sp60 += 6;
        sp6C += 6;
        phi_s0 += 6;
        phi_s1 += 6;
        phi_s3 = temp_s3;
    } while (temp_s3 < 7);
    temp_f16 = (sp108->world.pos.y - this->actor.world.pos.y) + 10.0f;
    spA4 = temp_f16;
    if (temp_f16 < 0.0f) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, phi_s4, phi_s5);
    }
    temp_s0 = &this->unk3C8;
    SkelAnime_FrameUpdateMatrix(temp_s0);
    temp_s1 = &this->unk35C;
    Math_ApproachF(temp_s1, 1.0f, 0.1f, 0.1f);
    if (this->unk15C != 0xA) {
        Math_ApproachS((s16 *) &this->actor.shape, 0, 0x14, 0x800);
    }
    if (this->unk15C != 0) {
        if (this->unk15C != 1) {
            if (this->unk15C != 2) {
                if (this->unk15C != 0xA) {

                } else {
                    temp_s0_2 = &this->actor.shape.rot.y;
                    if ((this->unk160 & 1) == 0) {
                        Audio_PlayActorSound2((Actor *) this, 0x3860U);
                    }
                    this->unk19C = (this->unk162 & 1) << 9;
                    this->unk174 = 3;
                    this->unk3C8.animPlaybackSpeed = 4.0f;
                    Math_ApproachS((s16 *) &this->actor.shape, -0x8000, 2, 0x2000);
                    Math_ApproachS(temp_s0_2, this->actor.yawTowardsPlayer, 2, 0x2000);
                    if (this->unk162 == 0) {
                        this->unk162 = 0x64;
                        this->unk15E = 0;
                        this->unk15C = 0;
                    }
                    if (this->unk162 == 0x1B) {
                        Math_Vec3f_Copy((Vec3f *) &sp94, (Vec3f *) &this->actor.world);
                        sp98 += 40.0f;
                        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp94, NULL, NULL, (s16) 1, (s16) 0x7D0);
                        Audio_PlayActorSound2((Actor *) this, 0x2808U);
                    }
                }
            } else {
                if ((this->unk160 & 1) == 0) {
                    Audio_PlayActorSound2((Actor *) this, 0x3860U);
                }
                this->unk19C = (this->unk162 & 1) << 9;
                this->unk3C8.animPlaybackSpeed = 4.0f;
                Math_ApproachF(temp_s1, 1.5f, 1.0f, 0.7f);
                this->unk174 = 2;
                if (this->unk162 == 0) {
                    this->unk15C = 0;
                    this->unk162 = 0x1E;
                }
            }
        } else {
            if (func_801378B8(temp_s0, this->unk4FC) != 0) {
                this->unk3C8.animPlaybackSpeed = 0.0f;
            }
            this->unk174 = 1;
            if (this->unk162 == 0) {
                this->unk15C = 2;
                this->unk162 = 0x14;
                Audio_PlayActorSound2((Actor *) this, 0x3861U);
            }
        }
    } else {
        this->unk174 = 0;
        this->unk3C8.animPlaybackSpeed = 1.0f;
        if (spA4 < 0.0f) {
            if (sp108->speedXZ > 10.0f) {
                phi_f2 = 220.0f;
            } else {
                phi_f2 = 150.0f;
            }
            if ((this->unk162 == 0) && (sqrtf(this->actor.xyzDistToPlayerSq) <= phi_f2)) {
                this->unk15C = 1;
                this->unk162 = 0xA;
            }
            goto block_42;
        }
        sp103 = 1;
        if (sqrtf(this->actor.xyzDistToPlayerSq) <= 40.0f) {
            this->unk15E += 1;
            if ((s32) this->unk15E >= 0x1F) {
                this->unk15C = 0xA;
                this->unk162 = 0x1E;
                Audio_PlayActorSound2((Actor *) this, 0x3861U);
            }
        } else {
block_42:
            this->unk15E = 0;
        }
        if (((this->unk160 & 3) == 0) && (Rand_ZeroOne() < 0.5f)) {
            Audio_PlayActorSound2((Actor *) this, 0x3860U);
        }
    }
    temp_v0_5 = func_809EECBC((Actor *) this, globalCtx);
    temp_s4 = temp_v0_5;
    phi_s4_2 = temp_s4;
    if ((temp_v0_5 != 0) || (this->unk168 == 1)) {
        this->actor.params = 2;
        this->actionFunc = func_809EF9BC;
        this->actor.flags &= -2;
        temp_s0_3 = &globalCtx->actorCtx;
        func_800BC154(globalCtx, temp_s0_3, (Actor *) this, 1U);
        if (this->unk168 != 0) {
            phi_s4_2 = 0xA;
        }
        if (phi_s4_2 >= 0xA) {
            temp_v0_6 = Actor_SpawnAsChild(temp_s0_3, (Actor *) this, globalCtx, 0x12D, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, 3);
            if (temp_v0_6 != 0) {
                temp_v1 = globalCtx->actorCtx.actorList[2].first;
                if (this == temp_v1->unk730) {
                    temp_v1->unk730 = temp_v0_6;
                    globalCtx->actorCtx.targetContext.unk38 = temp_v0_6;
                    globalCtx->actorCtx.targetContext.unk3C = temp_v0_6;
                }
                do {
                    temp_t5 = this->unk268.limbDrawTbl + phi_s0_2;
                    temp_t1 = temp_v0_6->unk288 + phi_s0_2;
                    temp_s0_4 = phi_s0_2 + 6;
                    temp_t1->unk0 = (unaligned s32) temp_t5->unk0;
                    temp_t1->unk4 = (u16) temp_t5->unk4;
                    phi_s0_2 = temp_s0_4;
                } while (temp_s0_4 < 0x3C);
                do {
                    temp_t9 = this->unk3C8.limbDrawTbl + phi_s0_3;
                    temp_t7 = temp_v0_6->unk3E8 + phi_s0_3;
                    temp_t7->unk0 = (unaligned s32) temp_t9->unk0;
                    temp_t7->unk4 = (u16) temp_t9->unk4;
                    temp_t6 = this->unk3C8.limbDrawTbl + phi_s0_3;
                    temp_t3 = temp_v0_6->unk3E8 + phi_s0_3;
                    temp_t3->unk6 = (unaligned s32) temp_t6->unk6;
                    temp_t3->unkA = (u16) temp_t6->unkA;
                    temp_t5_2 = this->unk3C8.limbDrawTbl + phi_s0_3;
                    temp_t2 = temp_v0_6->unk3E8 + phi_s0_3;
                    temp_t2->unkC = (unaligned s32) temp_t5_2->unkC;
                    temp_t2->unk10 = (u16) temp_t5_2->unk10;
                    temp_t9_2 = this->unk3C8.limbDrawTbl + phi_s0_3;
                    temp_t8 = temp_v0_6->unk3E8 + phi_s0_3;
                    temp_s0_5 = phi_s0_3 + 0x18;
                    temp_t8->unk12 = (unaligned s32) temp_t9_2->unk12;
                    temp_t8->unk16 = (u16) temp_t9_2->unk16;
                    phi_s0_3 = temp_s0_5;
                } while (temp_s0_5 != 0x78);
                Audio_PlayActorSound2((Actor *) this, 0x381EU);
                if (phi_s4_2 >= 0xB) {
                    temp_v0_6->unk188 = (s8) (phi_s4_2 - 0xA);
                }
            }
        } else if (phi_s4_2 == 2) {
            do {
                temp_v0_7 = Actor_SpawnAsChild(temp_s0_3, (Actor *) this, globalCtx, 0x12D, this->unk324, this->unk328, this->unk32C, (s16) (s32) this->unk330, (s16) (s32) this->unk332, (s16) (s32) this->unk334, phi_s3_2 + 0xA);
                if (temp_v0_7 != 0) {
                    phi_v1 = 0;
                    do {
                        temp_t2_2 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t9_3 = temp_v0_7->unk3E8 + phi_v1;
                        temp_t9_3->unk0 = (unaligned s32) temp_t2_2->unk0;
                        temp_t9_3->unk4 = (u16) temp_t2_2->unk4;
                        temp_t8_2 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t6_2 = temp_v0_7->unk3E8 + phi_v1;
                        temp_t6_2->unk6 = (unaligned s32) temp_t8_2->unk6;
                        temp_t6_2->unkA = (u16) temp_t8_2->unkA;
                        temp_t3_2 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t5_3 = temp_v0_7->unk3E8 + phi_v1;
                        temp_t5_3->unkC = (unaligned s32) temp_t3_2->unkC;
                        temp_t5_3->unk10 = (u16) temp_t3_2->unk10;
                        temp_t2_3 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t1_2 = temp_v0_7->unk3E8 + phi_v1;
                        temp_v1_2 = phi_v1 + 0x18;
                        temp_t1_2->unk12 = (unaligned s32) temp_t2_3->unk12;
                        temp_t1_2->unk16 = (u16) temp_t2_3->unk16;
                        phi_v1 = temp_v1_2;
                    } while (temp_v1_2 != 0x78);
                    temp_v0_7->unk162 = (s16) (s32) (Rand_ZeroFloat(20.0f) + 20.0f);
                }
                temp_s3_2 = phi_s3_2 + 1;
                phi_s3_2 = temp_s3_2;
            } while (temp_s3_2 != 2);
            Audio_PlayActorSound2((Actor *) this, 0x381FU);
        }
    }
    if (sp103 == 0) {
        temp_s0_6 = &globalCtx->colChkCtx;
        CollisionCheck_SetAT(globalCtx, temp_s0_6, (Collider *) &this->unk1C8);
        CollisionCheck_SetAT(globalCtx, temp_s0_6, (Collider *) &this->unk368);
    }
    temp_s0_7 = &globalCtx->colChkCtx;
    temp_s1_2 = &this->unk368;
    CollisionCheck_SetAC(globalCtx, temp_s0_7, (Collider *) &this->unk1C8);
    CollisionCheck_SetAC(globalCtx, temp_s0_7, (Collider *) temp_s1_2);
}

void func_809EF9BC(Boss05 *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s32 temp_f10;
    s16 phi_a1;

    temp_f0 = sqrtf(this->actor.xyzDistToPlayerSq);
    if ((temp_f0 < 50.0f) && ((globalCtx->actorCtx.actorList[2].first->bgCheckFlags & 1) != 0)) {
        temp_f10 = (s32) (temp_f0 * 80.0f);
        phi_a1 = (s16) temp_f10;
        if ((s32) (s16) temp_f10 >= 0x7D1) {
            phi_a1 = 0x7D0;
        }
        Math_ApproachS(&this->unk178, phi_a1, 0x14, 0x7D0);
        Math_ApproachS(&this->unk176, this->actor.yawTowardsPlayer, 0x14, 0xFA0);
        if ((this->unk160 & 0xF) == 0) {
            EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &this->actor.world, 0x1F4, 0x3E8, (s16) 0);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    Math_ApproachS(&this->unk178, 0, 0x14, 0x100);
}

void func_809EFAB4(Boss05 *this, GlobalContext *globalCtx) {
    f32 sp84;
    ? sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    Actor *temp_v0;
    Actor *temp_v1;
    PosRot *temp_s1;
    s32 temp_s1_2;
    s32 temp_v1_2;
    void *temp_t1;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t5;
    void *temp_t6;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t9;
    s32 phi_s1;
    s32 phi_v1;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actor.world.pos.y -= 85.0f;
    this->actor.prevPos.y -= 85.0f;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 50.0f, 40.0f, 0x44U);
    this->actor.world.pos.y += 85.0f;
    this->actor.prevPos.y += 85.0f;
    if ((this->actor.bgCheckFlags & 0x20) != 0) {
        this->actor.gravity = -0.3f;
        this->actor.minVelocityY = -5.0f;
    } else {
        this->actor.gravity = -2.0f;
        this->actor.minVelocityY = -20.0f;
    }
    temp_s1 = &this->actor.world;
    if ((this->actor.bgCheckFlags & 0x40) != 0) {
        this->actor.velocity.y = -3.0f;
        this->actor.gravity = -0.3f;
        this->actor.minVelocityY = -5.0f;
        Math_Vec3f_Copy((Vec3f *) &sp80, (Vec3f *) temp_s1);
        sp84 += 20.0f;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) temp_s1, NULL, NULL, (s16) 1, (s16) 0x3E8);
        this->unk166 = 0x14;
    }
    phi_s1 = 0;
    if (this->unk166 != 0) {
        do {
            sp74 = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.x;
            sp78 = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.y;
            sp7C = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.z;
            EffectSsBubble_Spawn(globalCtx, (Vec3f *) &sp74, 20.0f, 10.0f, 20.0f, 0.13f);
            temp_s1_2 = phi_s1 + 1;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 != 3);
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        if ((this->unk189 == 0xA) && (this->unk17A != 0)) {
            this->unk17A = 0;
        }
        Math_ApproachZeroF(&this->unk198, 1.0f, 0.05f);
        if (this->unk198 == 0.0f) {
            temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x12D, this->unk324, this->unk328, this->unk32C, (s16) (s32) this->unk330, (s16) (s32) this->unk332, (s16) (s32) this->unk334, 4);
            if (temp_v0 != 0) {
                temp_v1 = globalCtx->actorCtx.actorList[2].first;
                if (this == temp_v1->unk730) {
                    temp_v1->unk730 = temp_v0;
                    globalCtx->actorCtx.targetContext.unk38 = temp_v0;
                    globalCtx->actorCtx.targetContext.unk3C = temp_v0;
                }
                phi_v1 = 0;
                do {
                    temp_t7 = this->unk3C8.limbDrawTbl + phi_v1;
                    temp_t5 = temp_v0->unk3E8 + phi_v1;
                    temp_t5->unk0 = (unaligned s32) temp_t7->unk0;
                    temp_t5->unk4 = (u16) temp_t7->unk4;
                    temp_t3 = this->unk3C8.limbDrawTbl + phi_v1;
                    temp_t1 = temp_v0->unk3E8 + phi_v1;
                    temp_t1->unk6 = (unaligned s32) temp_t3->unk6;
                    temp_t1->unkA = (u16) temp_t3->unkA;
                    temp_t9 = this->unk3C8.limbDrawTbl + phi_v1;
                    temp_t7_2 = temp_v0->unk3E8 + phi_v1;
                    temp_t7_2->unkC = (unaligned s32) temp_t9->unkC;
                    temp_t7_2->unk10 = (u16) temp_t9->unk10;
                    temp_t6 = this->unk3C8.limbDrawTbl + phi_v1;
                    temp_t3_2 = temp_v0->unk3E8 + phi_v1;
                    temp_v1_2 = phi_v1 + 0x18;
                    temp_t3_2->unk12 = (unaligned s32) temp_t6->unk12;
                    temp_t3_2->unk16 = (u16) temp_t6->unk16;
                    phi_v1 = temp_v1_2;
                } while (temp_v1_2 != 0x78);
                Audio_PlayActorSound2(temp_v0, 0x3825U);
            }
            Actor_MarkForDeath((Actor *) this);
        }
    }
}

void func_809EFE50(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;
    u8 temp_a0;
    u8 temp_v0;
    void *temp_v1;
    u8 phi_a2;

    phi_a2 = 0U;
    if ((arg0->unk16A == 0) && (temp_v1 = arg0->unk384, temp_a0 = temp_v1->unk16, ((temp_a0 & 2) != 0))) {
        temp_v1->unk16 = (u8) (temp_a0 & 0xFFFD);
        if ((*arg0->unk384->unk24 & 0x300000) != 0) {
            arg0->unk16A = 6;
            arg0->unk338 = -12.0f;
            arg0->unk348 = (s16) arg0->yawTowardsPlayer;
            return;
        }
        arg0->unk16A = 0xA;
        arg0->speedXZ = 0.0f;
        arg0->unk338 = -20.0f;
        arg0->unk348 = (s16) arg0->yawTowardsPlayer;
        sp27 = 0;
        Audio_PlayActorSound2(arg0, 0x3807U);
        temp_v0 = arg0->colChkInfo.damageEffect;
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    if (temp_v0 != 4) {

                    } else {
                        arg0->unk188 = 0x14;
                    }
                    goto block_13;
                }
                sp27 = 0;
                func_809F0A64(arg0, arg1, 0U);
                arg0->unk188 = 0xA;
            } else {
                arg0->unk188 = 1;
block_13:
                phi_a2 = 1U;
            }
        } else {
            sp27 = 0;
            func_809F0A0C(arg0, arg1, 0U);
        }
        if (phi_a2 != 0) {
            if ((func_809F0ABC == arg0->unk170) && (arg0->unk189 == 0xA) && (arg0->unk17A != 0)) {
                func_809EE4E0(arg0, arg1, phi_a2);
                arg0->unk188 = 0;
            }
            arg0->colChkInfo.health -= arg0->colChkInfo.damage;
            if ((s32) (s8) arg0->colChkInfo.health <= 0) {
                Enemy_StartFinishingBlow(arg1, arg0);
            }
            func_809F0708(arg0, arg1);
            arg0->unk16C = 0xF;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

s32 func_809F0014(GlobalContext *arg0, ? arg1) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->state.alloc.base.unkE - arg0->unkBE;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0x3000) {
        return 1;
    }
    return 0;
}

void func_809F0058(Boss05 *arg0, GlobalContext *arg1) {
    if ((func_809F0014(arg1) != 0) && (arg0->actor.xyzDistToPlayerSq <= 40000.0f) && (fabsf(arg0->actor.yDistToPlayer) < 70.0f)) {
        func_809F0474(arg0, arg1);
    }
}

void func_809F00CC(Boss05 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_809F010C;
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x3C8, &D_06006E50, -5.0f);
}

void func_809F010C(Boss05 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk3C8);
    Math_ApproachS((s16 *) &this->actor.shape, 0, 2, 0x400);
    Math_ApproachS(&this->actor.shape.rot.z, 0, 2, 0x400);
    Math_ApproachF(&this->unk360, 1.0f, 1.0f, 0.5f);
    Math_ApproachF(&this->unk364, 1.0f, 1.0f, 0.14f);
    if (this->unk364 == 1.0f) {
        func_809F01CC(this, globalCtx);
    }
}

void func_809F01CC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk170 = func_809F0244;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x3C8, &D_06007488, -10.0f);
    arg0->unk162 = (s16) (s32) (Rand_ZeroFloat(25.0f) + 25.0f);
    Audio_PlayActorSound2(arg0, 0x3860U);
}

void func_809F0244(Boss05 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk3C8);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 2.5f);
    Math_ApproachS((s16 *) &this->actor.shape, 0, 2, 0x400);
    Math_ApproachS(&this->actor.shape.rot.z, 0, 2, 0x400);
    if (this->unk162 == 0) {
        func_809F02D0(this, globalCtx);
    }
    func_809F0058(this, globalCtx);
}

void func_809F02D0(Boss05 *arg0, GlobalContext *arg1) {
    f32 temp_f4;

    arg0->actionFunc = func_809F0374;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x3C8, &D_06007908, 0.0f);
    arg0->unk162 = (s16) (s32) (Rand_ZeroFloat(80.0f) + 60.0f);
    arg0->unk34C = randPlusMinusPoint5Scaled(400.0f) + arg0->actor.world.pos.x;
    temp_f4 = randPlusMinusPoint5Scaled(400.0f) + arg0->actor.world.pos.z;
    arg0->unk358 = 0.0f;
    arg0->unk354 = temp_f4;
}

void func_809F0374(Boss05 *this, GlobalContext *globalCtx) {
    f32 sp24;
    f32 sp20;
    f32 temp_f12;
    f32 temp_f14;

    Audio_PlayActorSound2((Actor *) this, 0x3027U);
    SkelAnime_FrameUpdateMatrix(&this->unk3C8);
    Math_ApproachF(&this->actor.speedXZ, 5.0f, 1.0f, 2.0f);
    temp_f12 = this->unk34C - this->actor.world.pos.x;
    temp_f14 = this->unk354 - this->actor.world.pos.z;
    sp24 = temp_f12;
    sp20 = temp_f14;
    Math_ApproachS(&this->actor.world.rot.y, Math_Atan2S(temp_f12, temp_f14), 5, (s16) (s32) this->unk358);
    Math_ApproachF(&this->unk358, 2000.0f, 1.0f, 100.0f);
    if ((this->unk162 == 0) || (((sp24 * sp24) + (sp20 * sp20)) < 2500.0f)) {
        func_809F01CC(this, globalCtx);
    }
    func_809F0058(this, globalCtx);
}

void func_809F0474(Boss05 *arg0, GlobalContext *arg1) {
    Boss05 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809F04C0;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x3C8, &D_06003448, 0.0f);
    arg0->unk162 = 0x14;
}

void func_809F04C0(Boss05 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk3C8);
    Audio_PlayActorSound2((Actor *) this, 0x3006U);
    Math_ApproachZeroF(&this->actor.speedXZ, 1.0f, 2.5f);
    Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 5, 0x1000);
    if (this->unk162 == 0) {
        func_809F0538(this, globalCtx);
    }
}

void func_809F0538(Boss05 *arg0, GlobalContext *arg1) {
    Boss05 *temp_a3;

    temp_a3 = arg0;
    temp_a3->actionFunc = func_809F0590;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x3C8, &D_06000A5C, 0.0f);
    arg0->unk162 = 0x3C;
    arg0->unk358 = 0.0f;
}

void func_809F0590(Boss05 *this, GlobalContext *globalCtx) {
    Audio_PlayActorSound2((Actor *) this, 0x3006U);
    SkelAnime_FrameUpdateMatrix(&this->unk3C8);
    Math_ApproachF(&this->actor.speedXZ, 8.0f, 1.0f, 4.0f);
    Math_ApproachS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 5, (s16) (s32) this->unk358);
    Math_ApproachF(&this->unk358, 4000.0f, 1.0f, 400.0f);
    if ((this->unk162 == 0) || (this->actor.xyzDistToPlayerSq <= 22500.0f)) {
        func_809F0650(this, globalCtx);
    }
}

void func_809F0650(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk170 = func_809F06B8;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x3C8, &D_060006A4, 0.0f);
    arg0->unk4FC = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060006A4);
    Audio_PlayActorSound2(arg0, 0x3837U);
}

void func_809F06B8(Boss05 *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk3C8;
    sp1C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, this->unk4FC) != 0) {
        func_809F01CC(this, globalCtx);
    }
}

void func_809F0708(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk170 = func_809F0780;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x3C8, &D_06002F0C, 0.0f);
    arg0->unk4FC = (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060006A4);
    func_800BCB70(arg0, 0x4000, 0x78, 0, (s16) 0x1E);
}

void func_809F0780(Boss05 *this, GlobalContext *globalCtx) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    Actor *temp_v0;
    PosRot *temp_s1_3;
    SkelAnime *temp_s1;
    f32 *temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t2;
    void *temp_t3;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t6;
    void *temp_t8;
    s32 phi_s2;
    s32 phi_v1;
    s32 phi_s2_2;

    temp_s1 = &this->unk3C8;
    SkelAnime_FrameUpdateMatrix(temp_s1);
    if ((s32) (s8) this->actor.colChkInfo.health <= 0) {
        phi_s2 = 0;
        phi_s2_2 = 0;
        if (func_801378B8(temp_s1, 22.0f) != 0) {
            do {
                temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x12D, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, phi_s2 + 0xA);
                temp_s2 = phi_s2 + 1;
                phi_s2 = temp_s2;
                if (temp_v0 != 0) {
                    phi_v1 = 0;
                    do {
                        temp_t4 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t2 = temp_v0->unk3E8 + phi_v1;
                        temp_t2->unk0 = (unaligned s32) temp_t4->unk0;
                        temp_t2->unk4 = (u16) temp_t4->unk4;
                        temp_t0 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t8 = temp_v0->unk3E8 + phi_v1;
                        temp_t8->unk6 = (unaligned s32) temp_t0->unk6;
                        temp_t8->unkA = (u16) temp_t0->unkA;
                        temp_t6 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t4_2 = temp_v0->unk3E8 + phi_v1;
                        temp_t4_2->unkC = (unaligned s32) temp_t6->unkC;
                        temp_t4_2->unk10 = (u16) temp_t6->unk10;
                        temp_t3 = this->unk3C8.limbDrawTbl + phi_v1;
                        temp_t0_2 = temp_v0->unk3E8 + phi_v1;
                        temp_v1 = phi_v1 + 0x18;
                        temp_t0_2->unk12 = (unaligned s32) temp_t3->unk12;
                        temp_t0_2->unk16 = (u16) temp_t3->unk16;
                        phi_v1 = temp_v1;
                    } while (temp_v1 != 0x78);
                }
            } while (temp_s2 < 0xE);
            temp_s1_2 = &sp7C;
            do {
                sp7C = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.x;
                sp80 = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.y;
                sp84 = randPlusMinusPoint5Scaled(40.0f) + this->actor.world.pos.z;
                EffectSsBubble_Spawn(globalCtx, (Vec3f *) temp_s1_2, 20.0f, 10.0f, 20.0f, 0.13f);
                temp_s2_2 = phi_s2_2 + 1;
                phi_s2_2 = temp_s2_2;
            } while (temp_s2_2 != 0x14);
            temp_s1_3 = &this->actor.world;
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) temp_s1_3, 0x28, 0x381FU);
            Actor_MarkForDeath((Actor *) this);
            Item_DropCollectibleRandom(globalCtx, NULL, (Vec3f *) temp_s1_3, 0xE0);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if (func_801378B8(temp_s1, this->unk4FC) != 0) {
        func_809F0474(this, globalCtx);
    }
}

void func_809F0A0C(Actor *arg0, GlobalContext *arg1) {
    arg0->unk170 = func_809F0ABC;
    Audio_PlayActorSound2(arg0, 0x3807U);
    arg0->unk162 = 0x28;
    func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
}

void func_809F0A64(Actor *arg0, GlobalContext *arg1) {
    arg0->unk170 = func_809F0ABC;
    Audio_PlayActorSound2(arg0, 0x3807U);
    arg0->unk162 = 0x50;
    func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x50);
}

void func_809F0ABC(Boss05 *this, GlobalContext *globalCtx) {
    f32 *temp_a0;

    temp_a0 = &this->actor.speedXZ;
    this = this;
    Math_ApproachZeroF(temp_a0, 1.0f, 2.5f);
    if (this->unk162 == 0) {
        func_809F01CC(this, globalCtx);
    }
}

void func_809F0B0C(Boss05 *this, GlobalContext *globalCtx) {
    s32 temp_t9;
    u8 temp_v0;
    u8 phi_v0;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    temp_v0 = this->unk15C;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 50.0f, 40.0f, 0x44U);
        phi_v0 = 2U & 0xFF;
        if ((this->actor.bgCheckFlags & 0x20) != 0) {
            this->unk15C = 1;
            phi_v0 = 1U & 0xFF;
        } else {
            this->unk15C = 2;
        }
    }
    if (phi_v0 == 1) {
        Math_ApproachF(&this->actor.velocity.y, 1.0f, 1.0f, 0.1f);
        Math_ApproachZeroF(&this->actor.speedXZ, 0.5f, 0.5f);
        this->actor.shape.rot.x += this->unk500;
        this->actor.shape.rot.y += this->unk502;
        if (this->unk162 == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    if (phi_v0 != 2) {
        if (phi_v0 != 3) {
            return;
        }
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        if (this->unk328 < (this->actor.floorHeight - 30.0f)) {
            Actor_MarkForDeath((Actor *) this);
        }
        return;
    }
    this->actor.velocity.y = Rand_ZeroFloat(3.0f) + 3.0f;
    this->actor.speedXZ = randPlusMinusPoint5Scaled(5.0f) + 5.0f;
    temp_t9 = (s32) Rand_ZeroFloat(65536.0f);
    this->unk15C = 3;
    this->actor.gravity = -1.0f;
    this->actor.world.rot.y = (s16) temp_t9;
}

void Boss05_Update(Boss05 *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp30;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    u8 temp_v0_6;
    void *temp_v1;
    s16 phi_v0;
    Boss05 *this = (Boss05 *) thisx;

    this->unk160 += 1;
    phi_v0 = 0;
    do {
        temp_v1 = this + (phi_v0 * 2);
        temp_a0 = temp_v1->unk162;
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        if (temp_a0 != 0) {
            temp_v1->unk162 = (s16) (temp_a0 - 1);
        }
    } while ((s32) temp_v0 < 3);
    temp_v0_2 = this->unk16A;
    if (temp_v0_2 != 0) {
        this->unk16A = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk16C;
    if (temp_v0_3 != 0) {
        this->unk16C = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk168;
    if (temp_v0_4 != 0) {
        this->unk168 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk17A;
    if (temp_v0_5 != 0) {
        this->unk17A = temp_v0_5 - 1;
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.params == 4) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Matrix_RotateY(this->unk348, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(this->unk338, &this->unk33C);
        this->actor.world.pos.x += this->unk33C.x;
        this->actor.world.pos.z += this->unk33C.z;
        Math_ApproachZeroF(&this->unk338, 1.0f, 1.0f);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 50.0f, 40.0f, 0x45U);
        func_809EFE50((Actor *) this, globalCtx);
        temp_a2 = &this->unk368;
        temp_a1 = &globalCtx->colChkCtx;
        sp30 = temp_a1;
        sp2C = temp_a2;
        CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    temp_v0_6 = this->unk188;
    switch (temp_v0_6) {
    case 0:
        this->unk189 = 0;
        this->unk17A = 0;
        this->unk184 = 0.0f;
        return;
    case 1:
        this->unk189 = 0;
        this->unk17A = 0x50;
        this->unk184 = 1.0f;
        this->unk188 = temp_v0_6 + 1;
        this->unk17C = 0.0f;
        /* fallthrough */
    case 2:
        if (this->unk17A == 0) {
            Math_ApproachZeroF(&this->unk184, 1.0f, 0.02f);
            if (this->unk184 == 0.0f) {
                this->unk188 = 0;
                return;
            }
        default:
            return;
        }
        Math_ApproachF(&this->unk17C, 1.0f, 0.1f, 0.5f);
        return;
    case 10:
        this->unk189 = 0xA;
        this->unk17A = 0x50;
        this->unk184 = 1.0f;
        this->unk188 = temp_v0_6 + 1;
        this->unk17C = 0.0f;
        this->unk180 = 2.0f;
        /* fallthrough */
    case 11:
        if (this->unk17A == 0) {
            func_809EE4E0((Actor *) this, globalCtx);
            this->unk188 = 0;
            return;
        }
        Math_ApproachF(&this->unk17C, 1.0f, 1.0f, 0.25f);
        Math_ApproachF(&this->unk180, 1.0f, 0.1f, 0.1f);
        return;
    case 20:
        this->unk189 = 0x14;
        this->unk17A = 0x50;
        this->unk184 = 1.0f;
        this->unk188 = temp_v0_6 + 1;
        this->unk17C = 0.0f;
        return;
    case 21:
        if (this->unk17A == 0) {
            Math_ApproachZeroF(&this->unk17C, 1.0f, 0.03f);
            if (this->unk17C == 0.0f) {
                this->unk188 = 0;
                this->unk184 = 0.0f;
                return;
            }
            /* Duplicate return node #31. Try simplifying control flow for better match */
            return;
        }
        Math_ApproachF(&this->unk17C, 1.0f, 0.5f, 0.5f);
        /* Duplicate return node #31. Try simplifying control flow for better match */
        return;
    }
}

s32 func_809F1050(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s8 temp_v1;
    void *temp_a1;

    if (arg1 == gGameInfo->data[1280]) {
        if ((arg5->unk160 & 3) == 0) {
            *arg2 = NULL;
        }
        arg4->x += gGameInfo->data[1281] << 8;
        arg4->y += gGameInfo->data[1282] << 8;
        arg4->z += gGameInfo->data[1283] << 8;
    }
    if ((arg5->params == 1) && (arg1 == 9)) {
        *arg2 = NULL;
    }
    if (arg1 == 2) {
        arg4->x += arg5->unk19C;
    }
    temp_v1 = *(&D_809F1CB8 + arg1);
    if ((s32) temp_v1 >= 0) {
        temp_a1 = arg5 + (temp_v1 * 6);
        arg4->x += temp_a1->unk19E;
        arg4->y += temp_a1->unk1A0;
        arg4->z += temp_a1->unk1A2;
    }
    return 0;
}

void func_809F1170(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp3C;
    ? sp30;
    ? sp24;
    void *sp20;

    if (arg1 == 4) {
        SysMatrix_MultiplyVector3fByState(&D_809F1CC4, arg4 + 0x324);
        if (func_809EFAB4 == arg4->unk170) {
            SysMatrix_MultiplyVector3fByState(&D_809F1CC4, arg4 + 0x3C);
        }
        SysMatrix_CopyCurrentState((MtxF *) &sp3C);
        func_8018219C((MtxF *) &sp3C, arg4 + 0x330, 0);
        arg4->unk330 = (s16) (arg4->unk330 + 0xF00);
    }
    if (arg1 == 2) {
        SysMatrix_GetStateTranslation((Vec3f *) &sp30);
        func_809EE668(0, arg4 + 0x1C8, &sp30);
    }
    if (arg1 == 3) {
        sp20 = arg4 + 0x1C8;
        SysMatrix_GetStateTranslationAndScaledY(-500.0f, (Vec3f *) &sp24);
        func_809EE668(1, sp20, &sp24);
        if (func_809EEDE8 == arg4->unk170) {
            SysMatrix_GetStateTranslationAndScaledY(1500.0f, arg4 + 0x3C);
        }
    }
}

s32 func_809F1284(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_809F12A0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 1) {
        SysMatrix_MultiplyVector3fByState(&D_809F1CD0, &D_809F2110);
        func_809EE668(0, arg4 + 0x368, (? *) &D_809F2110);
        if (arg4->params == 4) {
            SysMatrix_MultiplyVector3fByState(D_809F1CDC, arg4 + 0x3C);
        }
        if (arg4->unk188 != 0) {
            SysMatrix_MultiplyVector3fByState(D_809F1CDC, arg4 + 0x18C);
            if (arg4->unk189 == 0) {
                arg4->unk190 = (f32) (arg4->unk190 - 15.0f);
            }
        }
    }
}

void func_809F135C(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    s32 phi_a1;

    if ((arg1 == 2) || (arg1 == 3)) {
        temp_f12 = arg2->unk35C;
        Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
    }
    phi_a1 = arg1;
    if (arg1 == 1) {
        temp_f12_2 = arg2->unk360;
        arg1 = arg1;
        Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
        phi_a1 = arg1;
    }
    if ((phi_a1 >= 4) && (phi_a1 < 0x14)) {
        temp_f12_3 = arg2->unk364;
        Matrix_Scale(temp_f12_3, temp_f12_3, temp_f12_3, 1);
    }
}

s32 func_809F1404(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    if ((arg1 >= 3) && (arg1 < 9)) {
        *arg2 = NULL;
    }
    return 0;
}

s32 func_809F1430(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    if ((arg1 == 1) || (arg1 == 2) || (arg1 == 9)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_809F1464(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_f12;

    if ((arg1 >= 3) && (arg1 < 9)) {
        temp_f12 = arg2->unk198;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    }
}

s32 func_809F14AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 != *(&D_809F1CC0 + (arg5->params * 4))) {
        *arg2 = NULL;
    } else if ((s32) arg5->unk15C >= 2) {
        arg4->x += arg5->unk160 * 0x3000;
        arg4->y += arg5->unk160 * 0x1A00;
        arg4->z += arg5->unk160 << 0xD;
    }
    return 0;
}

void func_809F1550(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 != *(&D_809F1CC0 + (arg4->params * 4))) {
        SysMatrix_GetStateTranslation(arg4 + 0x324);
    }
}

void Boss05_Draw(Boss05 *this, GlobalContext *globalCtx) {
    GraphicsContext *sp34;
    GraphicsContext *temp_a0;
    s16 temp_v0;
    Boss05 *this = (Boss05 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp34 = temp_a0;
    func_8012C28C(temp_a0);
    if (func_809EEDE8 == this->actionFunc) {
        SkelAnime_DrawSV(globalCtx, this->unk268.skeleton, this->unk268.limbDrawTbl, (s32) this->unk268.dListCount, func_809F1050, func_809F1170, (Actor *) this);
        if ((this->unk16C & 1) != 0) {
            sp34->polyOpa.p = Gfx_SetFog(sp34->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
        }
        SysMatrix_InsertTranslation(this->unk324, this->unk328, this->unk32C, 0);
        Matrix_RotateY(this->unk332, 1U);
        SysMatrix_InsertXRotation_s(this->unk330, 1);
        SysMatrix_InsertZRotation_s(this->unk334, 1);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06006240));
        func_801343C0(globalCtx, this->unk3C8.skeleton, this->unk3C8.limbDrawTbl, (s32) this->unk3C8.dListCount, func_809F1284, func_809F12A0, func_809F135C, (Actor *) this);
    } else {
        temp_v0 = this->actor.params;
        if (temp_v0 == 2) {
            SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
            Matrix_RotateY(this->unk176, 1U);
            SysMatrix_InsertXRotation_s(this->unk178, 1);
            Matrix_RotateY((s16) ((s32) this->unk176 * -1), 1U);
            Matrix_RotateY(this->actor.shape.rot.y, 1U);
            SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
            SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
            Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
            SkelAnime_DrawSV(globalCtx, this->unk268.skeleton, this->unk268.limbDrawTbl, (s32) this->unk268.dListCount, func_809F1404, NULL, (Actor *) this);
        } else if (temp_v0 == 3) {
            func_801343C0(globalCtx, this->unk268.skeleton, this->unk268.limbDrawTbl, (s32) this->unk268.dListCount, func_809F1430, func_809F1170, func_809F1464, (Actor *) this);
            SysMatrix_InsertTranslation(this->unk324, this->unk328, this->unk32C, 0);
            Matrix_RotateY(this->unk332, 1U);
            SysMatrix_InsertXRotation_s(this->unk330, 1);
            SysMatrix_InsertZRotation_s(this->unk334, 1);
            Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06006240));
            func_801343C0(globalCtx, this->unk3C8.skeleton, this->unk3C8.limbDrawTbl, (s32) this->unk3C8.dListCount, func_809F1284, func_809F12A0, func_809F135C, (Actor *) this);
            func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk18C, 1, this->unk17C, this->unk180, this->unk184, (u8) (s32) this->unk189);
        } else if (temp_v0 == 4) {
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06006240));
            if ((this->unk16C & 1) != 0) {
                sp34->polyOpa.p = Gfx_SetFog(sp34->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
            }
            func_801343C0(globalCtx, this->unk3C8.skeleton, this->unk3C8.limbDrawTbl, (s32) this->unk3C8.dListCount, func_809F1284, func_809F12A0, func_809F135C, (Actor *) this);
            func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk18C, 1, this->unk17C, this->unk180, this->unk184, (u8) (s32) this->unk189);
        } else if ((s32) temp_v0 >= 0xA) {
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06006240));
            SkelAnime_DrawSV(globalCtx, this->unk3C8.skeleton, this->unk3C8.limbDrawTbl, (s32) this->unk3C8.dListCount, func_809F14AC, func_809F1550, (Actor *) this);
        }
    }
    sp34->polyOpa.p = func_801660B8(globalCtx, sp34->polyOpa.p);
}
