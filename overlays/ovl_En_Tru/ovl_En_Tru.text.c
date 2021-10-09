typedef struct EnTru {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x154 */ f32 unk154;                         /* overlap; inferred */
    /* 0x158 */ char pad158[0x30];                  /* maybe part of unk154[13]? */
    /* 0x188 */ void (*actionFunc)(EnTru *, GlobalContext *);
    /* 0x18C */ ColliderSphere unk18C;              /* inferred */
    /* 0x1E4 */ s32 unk1E4;                         /* inferred */
    /* 0x1E8 */ s32 unk1E8;                         /* inferred */
    /* 0x1EC */ char pad1EC[0xC];                   /* maybe part of unk1E8[4]? */
    /* 0x1F8 */ ? unk1F8;                           /* inferred */
    /* 0x1F8 */ char pad1F8[0x12];
    /* 0x20A */ Vec3s unk20A;                       /* inferred */
    /* 0x210 */ char pad210[0x9C];                  /* maybe part of unk20A[27]? */
    /* 0x2AC */ Vec3s unk2AC;                       /* inferred */
    /* 0x2B2 */ char pad2B2[0x9C];                  /* maybe part of unk2AC[27]? */
    /* 0x34E */ u16 unk34E;                         /* inferred */
    /* 0x350 */ char pad350[0x4];                   /* maybe part of unk34E[3]? */
    /* 0x354 */ s32 *unk354;                        /* inferred */
    /* 0x358 */ char pad358[0xA];                   /* maybe part of unk354[3]? */
    /* 0x362 */ s16 unk362;                         /* inferred */
    /* 0x364 */ char pad364[0xA];                   /* maybe part of unk362[6]? */
    /* 0x36E */ s16 unk36E;                         /* inferred */
    /* 0x370 */ char pad370[0x8];                   /* maybe part of unk36E[5]? */
    /* 0x378 */ void *unk378;                       /* inferred */
    /* 0x37C */ s32 unk37C;                         /* inferred */
    /* 0x380 */ char pad380[0x4];
    /* 0x384 */ ? unk384;                           /* inferred */
    /* 0x384 */ char pad384[0x4];
    /* 0x388 */ s32 unk388;                         /* inferred */
    /* 0x38C */ char pad38C[0x8];                   /* maybe part of unk388[3]? */
    /* 0x394 */ ? unk394;                           /* inferred */
    /* 0x394 */ char pad394[0x5A0];
} EnTru;                                            /* size = 0x934 */

struct _mips2c_stack_EnTru_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTru_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? *sp34;                             /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnTru_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTru_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A85620 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A85788 {
    /* 0x00 */ char pad0[0x80];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80A85AA4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A85BCC {
    /* 0x00 */ char pad0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A85E2C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A85F84 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A86384 {};              /* size 0x0 */

struct _mips2c_stack_func_80A86460 {
    /* 0x00 */ char pad0[0x8C];
    /* 0x8C */ ? sp8C;                              /* inferred */
    /* 0x8C */ char pad8C[0xC];
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad98[0xC];
    /* 0xA4 */ ? spA4;                              /* inferred */
    /* 0xA4 */ char padA4[0xC];
    /* 0xB0 */ ? spB0;                              /* inferred */
    /* 0xB0 */ char padB0[0x4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char padBC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80A86674 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A86770 {
    /* 0x00 */ char pad0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad98[0x4];
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char padA0[0x8];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80A868F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A86924 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A8697C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A869DC {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A86B0C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A86BAC {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x8];                     /* maybe part of sp1C[3]? */
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x10];                    /* maybe part of sp30[5]? */
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A86DB8 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A871E0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A872AC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A873B8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A87400 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0xC];
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A875AC {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A8777C {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A87880 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ Player *sp2C;                        /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A87B48 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x6];                     /* maybe part of sp34[2]? */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad4C[0x8];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A87DC0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A87FD0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A881E0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A885B8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A88698 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A886D4 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x10];
};                                                  /* size = 0x40 */

? func_80123AA4(Player *, ?);                       /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
s32 func_8013BD40(Actor *, void *, s32);            /* extern */
s32 func_8013BEDC(GlobalContext *, s32, ?, ? *);    /* extern */
? func_8016A268(void *, ?, ?, ?, s32, s32);         /* extern */
? func_801A75E8(?);                                 /* extern */
void func_80A85620(u8 *arg0, ? *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
void func_80A85788(? *arg0, GraphicsContext **arg1); /* static */
void func_80A85AA4(void *arg1, void *arg2, f32 arg3, f32 arg4, f32); /* static */
void func_80A85BCC(? *arg0, GraphicsContext **arg1); /* static */
void func_80A85E2C(u8 *arg0, ? *arg1, Vec3f *arg2, ? *arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7); /* static */
void func_80A85F84(? *arg0, GraphicsContext **arg1); /* static */
? func_80A86384(? *arg1, ? *);                      /* static */
? func_80A86460(EnTru *arg0);                       /* static */
? func_80A86674(Actor *arg0);                       /* static */
? func_80A86770(Actor *arg0);                       /* static */
void func_80A868F8(EnTru *arg0);                    /* static */
s32 func_80A86924(Actor *arg0, s32 arg1, Actor *);  /* static */
void func_80A8697C(EnTru *arg0, GlobalContext *arg1); /* static */
? func_80A869DC(void *arg0, void *arg1);            /* static */
? func_80A86B0C(EnTru *arg0, GlobalContext *);      /* static */
? func_80A86BAC(Actor *arg0, GraphicsContext **arg1, GraphicsContext **); /* static */
? func_80A86DB8(EnTru *arg0);                       /* static */
? *func_80A871E0(Actor *arg0, GlobalContext *arg1, void *); /* static */
s32 func_80A872AC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A873B8(EnTru *arg0, GlobalContext *);    /* static */
s32 func_80A87400(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A875AC(Actor *arg0, ? arg1);             /* static */
s32 func_80A8777C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A87880(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A87B48(Actor *arg0, void *arg1);         /* static */
s32 func_80A87DC0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A885B8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80A88698(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80A886D4(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern ? D_06001F90;
extern ? D_060020C8;
extern ? D_0601A820;
extern ? D_0601A830;
extern FlexSkeletonHeader D_0601AA60;
static ? D_80A88910;                                /* unable to generate initializer */
static ? D_80A88918;                                /* unable to generate initializer */
static ? D_80A88924;                                /* unable to generate initializer */
static ? D_80A8892C;                                /* unable to generate initializer */
static ? D_80A88984;                                /* unable to generate initializer */
static ? D_80A889A4;                                /* unable to generate initializer */
static ? D_80A89000;                                /* unable to generate initializer */
static ? D_80A890A8;                                /* unable to generate initializer */
static ? D_80A8A108;                                /* unable to generate initializer */
static ? D_80A8B250;                                /* unable to generate initializer */
static ? D_80A8B25C;                                /* unable to generate initializer */
static ? D_80A8B268;                                /* unable to generate initializer */
static ? D_80A8B280;                                /* unable to generate initializer */
static ColliderSphereInit D_80A8B2A0 = {
    {0xA, 0, 0, 0x39, 0x10, 4},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0, {{0, 0, 0}, 0x20}, 0x64},
};
static CollisionCheckInfoInit2 D_80A8B2CC = {1, 0x14, 0, 0, 0xFF};
static ActorAnimationEntryS D_80A8B2D8[16] = {
    {(AnimationHeader *)0x600F9A0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600F9A0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60108AC, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6009348, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600EEDC, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6015CA0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6015CA0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6014728, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x601B5C4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6007FA0, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6016B4C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6011F88, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x600446C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003698, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6002BD8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600446C, 1.0f, 0, 0xFFFF, 0, 0},
};
static Vec3f D_80A8B3D8 = {0.0f, 24.0f, 16.0f};
static Vec3f D_80A8B3E4 = {0.0f, -3.0f, 3.0f};
static Vec3f D_80A8B3F0 = {0.0f, 0.5f, 0.0f};
static Vec3f D_80A8B3FC = {3000.0f, -800.0f, 0.0f};
static ? D_80A8B408;                                /* unable to generate initializer */

void func_80A85620(u8 *arg0, ? *arg1, f32 arg2, f32 arg3, f32 arg4) {
    s16 temp_v0;
    u32 temp_t8;
    u8 *phi_a0;
    s16 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (*phi_a0 == 0) {
        arg0 = phi_a0;
        temp_t8 = (u32) (Rand_ZeroFloat(20.0f) + arg4);
        arg0->unk2 = (s8) temp_t8;
        arg0->unk1 = (s8) temp_t8;
        arg0->unk0 = 1;
        arg0->unk4 = (s32) arg1->unk0;
        arg0->unk8 = (s32) arg1->unk4;
        arg0->unkC = (s32) arg1->unk8;
        arg0->unk1C = (f32) D_801D15B0.x;
        arg0->unk20 = (f32) D_801D15B0.y;
        arg0->unk24 = (f32) D_801D15B0.z;
        arg0->unk10 = (s32) D_80A8B250.unk0;
        arg0->unk14 = (s32) D_80A8B250.unk4;
        arg0->unk18 = (s32) D_80A8B250.unk8;
        arg0->unk28 = arg2;
        arg0->unk2C = arg3;
        return;
    }
    phi_a0 += 0x30;
    if ((s32) temp_v0 >= 0x1E) {
        return;
    }
    goto loop_1;
}

void func_80A85788(? *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f6;
    s32 temp_f4;
    s32 temp_s5;
    u8 temp_t8;
    u8 temp_t9;
    ? *phi_s2;
    s32 phi_s7;
    f32 phi_f6;
    f32 phi_f16;
    s32 phi_t8;
    s32 phi_s5;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_s7 = 0;
    phi_s5 = 0;
    do {
        if (phi_s2->unk0 == 1) {
            if (phi_s7 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_80A89000;
                temp_v0->words.w0 = 0xDE000000;
                phi_s7 = 1;
            }
            temp_t8 = phi_s2->unk2;
            temp_f6 = (f32) temp_t8;
            phi_f6 = temp_f6;
            if ((s32) temp_t8 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            temp_t9 = phi_s2->unk1;
            temp_f16 = (f32) temp_t9;
            phi_f16 = temp_f16;
            if ((s32) temp_t9 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_f0 = (phi_f6 / phi_f16) * 255.0f;
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = 0;
            temp_v0_2->words.w0 = 0xE7000000;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = -0x80;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v1 = temp_s0->polyXlu.p;
            temp_f4 = (s32) temp_f0;
            temp_s0->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t8 = (s32) (temp_f0 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_11;
                }
            } else {
                phi_t8 = temp_f4;
                if (temp_f4 < 0) {
block_11:
                    phi_t8 = -1;
                }
            }
            temp_v1->words.w1 = (phi_t8 & 0xFF) | ~0xFF;
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDB060020;
            temp_v0_4->words.w1 = Gfx_TwoTexScroll(*arg1, 0, 0U, (s32) phi_s2->unk2 * -5, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
            SysMatrix_InsertTranslation(phi_s2->unk4, phi_s2->unk8, phi_s2->unkC, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unk28;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            SysMatrix_InsertTranslation(0.0f, 14.0f, 0.0f, 1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_80A890A8;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s5 = phi_s5 + 1;
        phi_s2 += 0x30;
        phi_s5 = temp_s5;
    } while (temp_s5 != 0x1E);
}

void func_80A85AA4(void *arg0, void *arg1, void *arg2, f32 arg3, f32 arg4) {
    s16 temp_v0;
    u32 temp_t8;
    void *phi_a0;
    s16 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
loop_1:
    if (phi_a0->unk0 == 0) {
        temp_t8 = (u32) arg4;
        phi_a0->unk2 = (s8) temp_t8;
        phi_a0->unk1 = (s8) temp_t8;
        phi_a0->unk0 = 2U;
        phi_a0->unk4 = (s32) arg1->unk0;
        phi_a0->unk8 = (s32) arg1->unk4;
        phi_a0->unkC = (s32) arg1->unk8;
        phi_a0->unk1C = (f32) D_801D15B0.x;
        phi_a0->unk20 = (f32) D_801D15B0.y;
        phi_a0->unk24 = (f32) D_801D15B0.z;
        phi_a0->unk10 = (f32) D_801D15B0.x;
        phi_a0->unk14 = (f32) D_801D15B0.y;
        phi_a0->unk28 = arg2;
        phi_a0->unk2C = arg3;
        phi_a0->unk18 = (f32) D_801D15B0.z;
        return;
    }
    temp_v0 = phi_v0 + 1;
    phi_a0 += 0x30;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 >= 0x1E) {
        return;
    }
    goto loop_1;
}

void func_80A85BCC(? *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f6;
    s32 temp_s3;
    u8 temp_t1;
    u8 temp_t2;
    ? *phi_s2;
    s32 phi_s7;
    f32 phi_f6;
    f32 phi_f16;
    s32 phi_s3;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_s7 = 0;
    phi_s3 = 0;
    do {
        if (phi_s2->unk0 == 2) {
            if (phi_s7 == 0) {
                temp_v0 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = 0;
                temp_v0->words.w0 = 0xE7000000;
                temp_v0_2 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = -0x3800;
                temp_v0_2->words.w0 = 0xFB000000;
                phi_s7 = 1;
            }
            temp_t1 = phi_s2->unk2;
            temp_f6 = (f32) temp_t1;
            phi_f6 = temp_f6;
            if ((s32) temp_t1 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            temp_t2 = phi_s2->unk1;
            temp_f16 = (f32) temp_t2;
            phi_f16 = temp_f16;
            if ((s32) temp_t2 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_v1 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            temp_v1->words.w1 = ((u32) ((phi_f6 / phi_f16) * 255.0f) & 0xFF) | ~0x37FFU;
            SysMatrix_InsertTranslation(phi_s2->unk4, phi_s2->unk8, phi_s2->unkC, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->unk28;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_3 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_4 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_80A8A108;
            temp_v0_4->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x30;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1E);
}

void func_80A85E2C(u8 *arg0, ? *arg1, Vec3f *arg2, ? *arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7) {
    s32 temp_v0;
    u32 temp_t8;
    u8 *phi_a0;
    s32 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (*phi_a0 == 0) {
        arg0 = phi_a0;
        temp_t8 = (u32) (Rand_ZeroFloat(4.0f) + arg6);
        arg0->unk2 = (s8) temp_t8;
        arg0->unk1 = (s8) temp_t8;
        arg0->unk0 = arg7;
        arg0->unk4 = (s32) arg1->unk0;
        arg0->unk8 = (s32) arg1->unk4;
        arg0->unkC = (s32) arg1->unk8;
        arg0->unk1C = (s32) arg3->unk0;
        arg0->unk20 = (s32) arg3->unk4;
        arg0->unk24 = (s32) arg3->unk8;
        arg0->unk10 = (s32) arg2->x;
        arg0->unk14 = (s32) arg2->y;
        arg0->unk18 = (s32) arg2->z;
        arg0->unk28 = arg4;
        arg0->unk2C = arg5;
        return;
    }
    phi_a0 += 0x30;
    if (temp_v0 == 0x1E) {
        return;
    }
    goto loop_1;
}

void func_80A85F84(? *arg0, GraphicsContext **arg1) {
    Gfx *temp_a0_2;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f4;
    s32 temp_s4;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    ? *phi_s2;
    s32 phi_fp;
    f32 phi_f16;
    f32 phi_f4;
    s32 phi_s4;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_fp = 0;
    phi_s4 = 0;
    do {
        temp_v0 = phi_s2->unk0;
        if ((temp_v0 == 3) || (temp_v0 == 4) || (temp_v0 == 5)) {
            if (phi_fp == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_0601A820;
                temp_v0_2->words.w0 = 0xDE000000;
                phi_fp = 1;
            }
            SysMatrix_StatePush();
            temp_t8 = phi_s2->unk1;
            temp_f16 = (f32) temp_t8;
            phi_f16 = temp_f16;
            if ((s32) temp_t8 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0x5FFEFFF8;
            temp_v0_3->words.w0 = 0xFC30B204;
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = 0xC8104B50;
            temp_v0_4->words.w0 = 0xE200001C;
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = 0x30000;
            temp_v0_5->words.w0 = 0xD9FFFFFF;
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = 0;
            temp_v0_6->words.w0 = 0xE7000000;
            temp_a0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_a0_2 + 8;
            temp_a0_2->words.w0 = 0xFA000000;
            temp_v1 = (phi_s2->unk0 * 4) + &D_80A8B25C;
            temp_a0_2->words.w1 = (temp_v1->unk-A << 8) | (temp_v1->unk-C << 0x18) | (temp_v1->unk-B << 0x10) | ((u32) (((f32) phi_s2->unk2 / phi_f16) * *(&D_80A8B268 + (phi_s2->unk0 * 4))) & 0xFF);
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xFB000000;
            temp_v1_2 = (phi_s2->unk0 * 4) + &D_80A8B268;
            temp_v0_7->words.w1 = (temp_v1_2->unk-A << 8) | (temp_v1_2->unk-C << 0x18) | (temp_v1_2->unk-B << 0x10);
            SysMatrix_InsertTranslation(phi_s2->unk4, phi_s2->unk8, phi_s2->unkC, 0);
            temp_f12 = phi_s2->unk28;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_v0_8 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDA380003;
            temp_v0_8->words.w1 = Matrix_NewMtx(*arg1);
            temp_t7 = phi_s2->unk1;
            temp_f4 = (f32) temp_t7;
            phi_f4 = temp_f4;
            if ((s32) temp_t7 < 0) {
                phi_f4 = temp_f4 + 4294967296.0f;
            }
            temp_v0_9 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xDB060020;
            temp_v0_9->words.w1 = Lib_SegmentedToVirtual(*(&D_80A8B280 + ((s32) (((f32) phi_s2->unk2 / phi_f4) * 8.0f) * 4)));
            temp_v0_10 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_10 + 8;
            temp_v0_10->words.w1 = (u32) &D_0601A830;
            temp_v0_10->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
        }
        temp_s4 = phi_s4 + 1;
        phi_s2 += 0x30;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x1E);
}

? func_80A86384(void *arg0, ? *arg1) {
    s32 temp_v0;
    void *phi_a0;
    s32 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        if (phi_a0->unk2 != 0) {
            if (phi_a0->unk0 == 2) {
                phi_a0->unk4 = (f32) arg1->unk0;
                phi_a0->unk8 = (f32) arg1->unk4;
                phi_a0->unkC = (f32) arg1->unk8;
            } else {
                phi_a0->unk4 = (f32) (phi_a0->unk4 + phi_a0->unk1C);
                phi_a0->unk8 = (f32) (phi_a0->unk8 + phi_a0->unk20);
                phi_a0->unkC = (f32) (phi_a0->unkC + phi_a0->unk24);
            }
            phi_a0->unk1C = (f32) (phi_a0->unk1C + phi_a0->unk10);
            phi_a0->unk20 = (f32) (phi_a0->unk20 + phi_a0->unk14);
            phi_a0->unk24 = (f32) (phi_a0->unk24 + phi_a0->unk18);
            phi_a0->unk2 = (u8) (phi_a0->unk2 - 1);
            phi_a0->unk28 = (f32) (phi_a0->unk28 + phi_a0->unk2C);
        } else {
            phi_a0->unk0 = 0U;
        }
        phi_a0 += 0x30;
    } while (temp_v0 != 0x1E);
    return 0;
}

? func_80A86460(EnTru *arg0) {
    f32 spB8;
    f32 spB4;
    ? spB0;
    ? spA4;
    ? sp98;
    ? sp8C;
    f32 temp_f6;
    s32 temp_s0;
    s16 phi_s1;
    s32 phi_s0;

    Math_Vec3f_Copy((Vec3f *) &spB0, &D_801D15B0);
    Math_Vec3f_Copy((Vec3f *) &sp8C, &D_801D15B0);
    Math_Vec3f_Copy((Vec3f *) &spA4, &D_801D15B0);
    Math_Vec3f_Copy((Vec3f *) &sp98, &D_801D15B0);
    temp_f6 = Rand_ZeroOne() * 360.0f;
    spB8 = 20.0f;
    Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, arg0->actor.world.rot.y, (Vec3f *) &spB0, (Vec3f *) &sp8C);
    phi_s1 = (s16) (s32) (temp_f6 * 182.0f);
    phi_s0 = 0;
    do {
        Math_Vec3f_Copy((Vec3f *) &spB0, &D_801D15B0);
        spB4 = 1.0f;
        spB8 = Rand_ZeroOne() + 3.0f;
        Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, phi_s1, (Vec3f *) &spB0, (Vec3f *) &sp98);
        Math_Vec3f_Copy((Vec3f *) &spB0, &D_801D15B0);
        spB8 = (Rand_ZeroOne() * 4.0f) + 12.0f;
        Lib_Vec3f_TranslateAndRotateY((Vec3f *) &sp8C, phi_s1, (Vec3f *) &spB0, (Vec3f *) &spA4);
        func_80A85E2C(arg0 + 0x394, &spA4, &D_801D15B0, &sp98, 0.4f, 0.06f, 12.0f, (u8) 4);
        temp_s0 = phi_s0 + 1;
        phi_s1 = (s16) (phi_s1 + 0x1FFE);
        phi_s0 = temp_s0;
    } while (temp_s0 != 8);
    return 0;
}

? func_80A86674(Actor *arg0) {
    ? sp40;
    ? sp34;
    s32 temp_v0;

    Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, arg0->world.rot.y, &D_80A8B3D8, (Vec3f *) &sp40);
    Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, arg0->world.rot.y, &D_80A8B3E4, (Vec3f *) &sp34);
    temp_v0 = arg0->unk390;
    if (temp_v0 == 1) {
        func_80A85E2C(arg0 + 0x394, &sp40, &D_80A8B3F0, &sp34, 0.2f, 0.1f, 12.0f, (u8) 3);
    } else if (temp_v0 == 2) {
        func_80A85E2C(arg0 + 0x394, &sp40, &D_80A8B3F0, &sp34, 0.2f, 0.1f, 12.0f, (u8) 5);
    }
    return 0;
}

? func_80A86770(Actor *arg0) {
    f32 sp9C;
    ? sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 *temp_s7;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    temp_s7 = &sp8C;
    phi_s0 = (s16) (s32) (Rand_ZeroOne() * 360.0f * 182.0f);
    phi_s1 = 0;
    do {
        Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, phi_s0, &D_801D15B0, (Vec3f *) &sp98);
        sp9C = arg0->floorHeight + 1.0f;
        sp8C = Rand_ZeroOne() - 0.5f;
        sp94 = Rand_ZeroOne() - 0.5f;
        sp90 = Rand_ZeroOne() * 0.2f;
        func_80A85E2C(arg0 + 0x394, &sp98, (Vec3f *) temp_s7, (? *) &D_801D15B0, 1.0f, 0.04f, 28.0f, (u8) 4);
        temp_s1 = phi_s1 + 1;
        phi_s0 = (s16) (phi_s0 + 0x3FFC);
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    return 0;
}

void func_80A868F8(EnTru *arg0) {
    arg0->unk144.animPlaybackSpeed = arg0->unk358;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80A86924(Actor *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_v1;
    s32 phi_v1;

    temp_a0 = arg0 + 0x144;
    phi_v1 = 0;
    if (arg1 != arg0->unk37C) {
        arg0->unk37C = arg1;
        arg0 = arg0;
        temp_v1 = func_8013BC6C(temp_a0, D_80A8B2D8, arg1);
        arg0->unk358 = (f32) arg0->unk160;
        phi_v1 = temp_v1;
    }
    return phi_v1;
}

void func_80A8697C(EnTru *arg0, GlobalContext *arg1) {
    arg0->unk18C.dim.worldSphere.radius = (s16) (s32) ((f32) arg0->unk18C.dim.modelSphere.radius * arg0->unk18C.dim.scale);
    if (arg0->actor.draw != 0) {
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x18C);
    }
}

? func_80A869DC(void *arg0, void *arg1) {
    void *sp44;
    f32 sp3C;
    ? sp38;
    f32 sp30;
    ? sp2C;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    sp44 = arg1->unk1CCC;
    Math_ApproachS(arg0 + 0x368, (s16) (arg0->unk92 - arg0->unkBE), 4, 0x2AA8);
    temp_v0 = arg0->unk368;
    if ((s32) temp_v0 < -0x1FFE) {
        arg0->unk368 = -0x1FFE;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1FFF) {
            phi_v1 = 0x1FFE;
        }
        arg0->unk368 = phi_v1;
    }
    Math_Vec3f_Copy((Vec3f *) &sp38, sp44 + 0x24);
    sp3C = sp44->unkC44 + 3.0f;
    Math_Vec3f_Copy((Vec3f *) &sp2C, arg0 + 0x3C);
    sp30 -= 30.0f;
    Math_ApproachS(arg0 + 0x366, Math_Vec3f_Pitch((Vec3f *) &sp2C, (Vec3f *) &sp38), 4, 0x2AA8);
    temp_v0_2 = arg0->unk366;
    if ((s32) temp_v0_2 < -0x1C70) {
        arg0->unk366 = -0x1C70;
    } else {
        phi_v1_2 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x1C71) {
            phi_v1_2 = 0x1C70;
        }
        arg0->unk366 = phi_v1_2;
    }
    return 1;
}

? func_80A86B0C(EnTru *arg0) {
    s16 temp_v0_2;
    u16 temp_t8;
    u16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk34E;
    if ((temp_v0 & 8) != 0) {
        temp_t8 = temp_v0 & 0xFFEF;
        arg0->unk34E = temp_t8;
        arg0->unk34E = temp_t8 | 0x20;
        func_80A869DC();
    } else if ((temp_v0 & 0x20) != 0) {
        arg0->unk34E = temp_v0 & 0xFFDF;
        arg0->unk366 = 0;
        arg0->unk368 = 0;
        arg0->unk36A = 0x14;
    } else {
        temp_v0_2 = arg0->unk36A;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk36A = temp_v0_2 - 1;
            phi_v1 = arg0->unk36A;
        }
        if (phi_v1 == 0) {
            arg0->unk36A = 0x14;
            arg0->unk34E |= 0x10;
        }
    }
    return 1;
}

? func_80A86BAC(Actor *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp44;
    Gfx *sp30;
    GraphicsContext *sp28;
    Gfx *sp1C;
    Gfx *temp_v0_10;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_a2_2;
    s32 temp_v0_2;
    u16 temp_v0;
    u16 phi_v0;

    temp_v0 = arg0->unk34E;
    phi_v0 = temp_v0;
    if ((temp_v0 & 0x400) != 0) {
        SysMatrix_StatePush();
        func_8012C28C(*arg1);
        temp_v0_2 = arg0->unk390;
        temp_a2 = *arg1;
        if (temp_v0_2 != 1) {
            if (temp_v0_2 != 2) {
                temp_v0_3 = temp_a2->polyOpa.p;
                temp_a2->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w1 = -0x100;
                temp_v0_3->words.w0 = 0xFB000000;
            } else {
                temp_v0_4 = temp_a2->polyOpa.p;
                temp_a2->polyOpa.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = 0xC800;
                temp_v0_4->words.w0 = 0xFB000000;
            }
        } else {
            temp_v0_5 = temp_a2->polyOpa.p;
            temp_a2->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = 0xC8000000;
            temp_v0_5->words.w0 = 0xFB000000;
        }
        sp44 = temp_a2;
        SysMatrix_InsertXRotation_s(-0x4000, 1);
        temp_v0_6 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp44 = temp_a2;
        sp30 = temp_v0_6;
        sp30->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_7 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_060020C8;
        temp_v0_7->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        phi_v0 = arg0->unk34E;
    }
    if ((phi_v0 & 0x800) != 0) {
        SysMatrix_StatePush();
        func_8012C2DC(*arg1);
        temp_a2_2 = *arg1;
        temp_v0_8 = temp_a2_2->polyXlu.p;
        temp_a2_2->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0;
        temp_v0_8->words.w0 = 0xE7000000;
        sp28 = temp_a2_2;
        SysMatrix_InsertXRotation_s(-0x4000, 1);
        temp_v0_9 = temp_a2_2->polyXlu.p;
        temp_a2_2->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDA380003;
        sp28 = temp_a2_2;
        sp1C = temp_v0_9;
        sp1C->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_10 = temp_a2_2->polyXlu.p;
        temp_a2_2->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = (u32) &D_06001F90;
        temp_v0_10->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
    }
    return 0;
}

? func_80A86DB8(EnTru *arg0) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    SkelAnime *temp_a0_3;
    SkelAnime *temp_a0_4;
    SkelAnime *temp_a0_5;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    u32 temp_t8;
    s16 phi_v1;
    s16 phi_v1_2;
    s16 phi_v1_3;
    s16 phi_v1_4;

    if ((arg0->unk34E & 0x80) != 0) {
        arg0->unk36E = 2;
        return 0;
    }
    temp_t8 = arg0->unk37C;
    switch (temp_t8) {
    case 0:
    case 1:
        temp_v0 = arg0->unk36C;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk36C = temp_v0 - 1;
            phi_v1 = arg0->unk36C;
        }
        if (phi_v1 == 0) {
            arg0 = arg0;
            if (arg0->unk36E == 2) {
                arg0->unk36C = 8;
            } else {
                arg0->unk36C = Rand_S16Offset(0x28, 0x14);
            }
            if (arg0->unk36E == 2) {
                arg0->unk36E = 1;
                return 0;
            }
            arg0->unk36E = 2;
            goto block_14;
        }
block_14:
block_64:
        return 0;
    case 2:
        temp_a0 = arg0 + 0x144;
        arg0 = arg0;
        if (func_801378B8(temp_a0, 10.0f) != 0) {
            arg0->unk36E = 1;
            goto block_64;
        }
        temp_f0 = arg0->unk144.animCurrentFrame;
        if ((temp_f0 >= 11.0f) && (temp_f0 <= 32.0f)) {
            arg0->unk36E = 0;
            return 0;
        }
        arg0->unk36E = 2;
        goto block_64;
    case 3:
        temp_a0_2 = arg0 + 0x144;
        arg0 = arg0;
        if (func_801378B8(temp_a0_2, 31.0f) != 0) {
            arg0->unk36E = 1;
            goto block_64;
        }
        if (arg0->unk144.animCurrentFrame <= 32.0f) {
            arg0->unk36E = 2;
            return 0;
        }
        arg0->unk36E = 0;
        goto block_64;
    case 9:
        temp_a0_3 = arg0 + 0x144;
        arg0 = arg0;
        if (func_801378B8(temp_a0_3, 57.0f) != 0) {
            arg0->unk36C = 0;
            arg0->unk36E = 0;
        }
        if (arg0->unk144.animCurrentFrame < 57.0f) {
            temp_v0_2 = arg0->unk36C;
            if (temp_v0_2 == 0) {
                phi_v1_2 = 0;
            } else {
                arg0->unk36C = temp_v0_2 - 1;
                phi_v1_2 = arg0->unk36C;
            }
            if (phi_v1_2 == 0) {
                arg0 = arg0;
                arg0->unk36C = Rand_S16Offset(8, 8);
                arg0->unk36E = 2;
                return 0;
            }
            arg0->unk36E = 1;
            return 0;
        }
        temp_v0_3 = arg0->unk36C;
        if (temp_v0_3 == 0) {
            phi_v1_3 = 0;
        } else {
            arg0->unk36C = temp_v0_3 - 1;
            phi_v1_3 = arg0->unk36C;
        }
        if (phi_v1_3 == 0) {
            arg0->unk36E += 1;
            if ((s32) arg0->unk36E >= 4) {
                arg0 = arg0;
                arg0->unk36C = Rand_S16Offset(0x14, 0xA);
                arg0->unk36E = 0;
            }
        }
        goto block_64;
    case 10:
        arg0->unk36E = 0;
        goto block_64;
    case 11:
        temp_a0_4 = arg0 + 0x144;
        sp1C = temp_a0_4;
        arg0 = arg0;
        if ((func_801378B8(temp_a0_4, 19.0f) != 0) || (arg0 = arg0, (func_801378B8(temp_a0_4, 45.0f) != 0))) {
            arg0->unk36E = 1;
            goto block_64;
        }
        temp_f0_2 = arg0->unk144.animCurrentFrame;
        if ((temp_f0_2 >= 19.0f) && (temp_f0_2 <= 45.0f)) {
            arg0->unk36E = 2;
            return 0;
        }
        arg0->unk36E = 3;
        goto block_64;
    case 13:
        temp_a0_5 = arg0 + 0x144;
        arg0 = arg0;
        if (func_801378B8(temp_a0_5, 19.0f) != 0) {
            arg0->unk36E = 1;
            goto block_64;
        }
        if (arg0->unk144.animCurrentFrame >= 19.0f) {
            arg0->unk36E = 2;
            return 0;
        }
        arg0->unk36E = 0;
        goto block_64;
    default:
        temp_v0_4 = arg0->unk36C;
        if (temp_v0_4 == 0) {
            phi_v1_4 = 0;
        } else {
            arg0->unk36C = temp_v0_4 - 1;
            phi_v1_4 = arg0->unk36C;
        }
        if (phi_v1_4 == 0) {
            temp_v0_5 = arg0->unk36E;
            if ((temp_v0_5 != 2) || ((arg0->unk34E & 0x80) == 0)) {
                arg0->unk36E = temp_v0_5 + 1;
            }
            if ((s32) arg0->unk36E >= 4) {
                arg0 = arg0;
                arg0->unk36C = Rand_S16Offset(0x1E, 0x1E);
                arg0->unk36E = 0;
            }
        }
        goto block_64;
    }
}

? *func_80A871E0(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    temp_v0 = arg0->unk34E;
    if ((temp_v0 & 0x2000) != 0) {
        if (arg0->unk38C == 0x23) {
            arg0->unk390 = 1;
            return &D_80A88984;
        }
        arg0->unk390 = 2;
        return &D_80A88984;
    }
    if ((temp_v0 & 0x4000) != 0) {
        return &D_80A889A4;
    }
    if ((temp_v0 & 0x80) != 0) {
        return &D_80A88924;
    }
    if (((temp_v0 & 0x40) == 0) && ((gSaveContext.weekEventReg[16] & 0x10) == 0)) {
        return &D_80A88918;
    }
    if (((temp_v0 & 0x1000) != 0) && ((gSaveContext.weekEventReg[16] & 0x10) == 0)) {
        return &D_80A88910;
    }
    return &D_80A8892C;
}

s32 func_80A872AC(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    s8 temp_v0;
    void *temp_a2;
    s32 phi_v1;

    temp_a2 = arg1->actorCtx.actorList[2].first;
    phi_v1 = 0;
    if ((arg0->unk34E & 7) != 0) {
        sp20 = 0;
        sp24 = temp_a2;
        phi_v1 = sp20;
        if (func_800B84D0(arg0, arg1) != 0) {
            if (temp_a2->unk14B == 4) {
                arg0->unk34E = (u16) (arg0->unk34E & 0xFF7F);
            }
            arg0->unk34E = (u16) (arg0->unk34E & 0x9FFF);
            temp_v0 = temp_a2->unkA87;
            if ((temp_v0 == 0x23) || (temp_v0 == 0x24)) {
                arg0->unk34E = (u16) (arg0->unk34E | 0x2000);
                arg0->unk38C = (s32) temp_a2->unkA87;
            } else if (temp_v0 != 0) {
                arg0->unk34E = (u16) (arg0->unk34E | 0x4000);
            }
            arg0->unk378 = func_80A875AC;
            arg0->unk390 = 0;
            arg0->unk364 = 0;
            arg0->unk354 = func_80A871E0(arg0, arg1, temp_a2);
            func_8013AED4(arg0 + 0x34E, 0U, 7U);
            arg0->unk188 = func_80A881E0;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_80A873B8(EnTru *arg0) {
    s16 temp_v0;
    s16 phi_v1;
    s32 phi_v1_2;

    temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
    phi_v1 = temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s16) -(s32) temp_v0;
    }
    phi_v1_2 = 0;
    if ((phi_v1 & 0xFFFF) < 0x1600) {
        phi_v1_2 = 1;
    }
    return phi_v1_2;
}

s32 func_80A87400(Actor *arg0, GlobalContext *arg1) {
    void *sp4C;
    ? sp40;
    ? sp34;
    s32 sp2C;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    void *temp_v0_2;
    s16 phi_v1;
    s32 phi_v1_2;
    s16 phi_a1;

    sp2C = 0;
    temp_v0 = arg0->unk360 + 0x7D0;
    arg0->velocity.y = Math_SinS(arg0->unk360) * arg0->unk35C;
    if (temp_v0 < 0) {
        arg0->unk360 = 0;
    } else {
        phi_v1 = (s16) temp_v0;
        if (temp_v0 >= 0x4001) {
            phi_v1 = 0x4000;
        }
        arg0->unk360 = phi_v1;
    }
    Math_ApproachF(arg0 + 0x35C, 30.0f, 0.08f, 1000.0f);
    Math_ApproachF(arg0 + 0x70, 30.0f, 0.2f, 1000.0f);
    temp_v0_2 = arg0->unk1E4;
    if (temp_v0_2 != 0) {
        sp4C = Lib_SegmentedToVirtual(temp_v0_2->unk4);
        if (func_8013BD40(arg0, arg0->unk1E4, arg0->unk384) != 0) {
            temp_v0_3 = arg0->unk384;
            temp_v1 = temp_v0_3 + 1;
            phi_v1_2 = temp_v1;
            if (temp_v1 < temp_v0_3) {
                arg0->unk384 = (s32) (arg0->unk1E4->unk0 - 2);
                sp2C = 1;
                phi_v1_2 = arg0->unk384 + 1;
            }
            arg0->unk384 = phi_v1_2;
        }
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, (arg0->unk384 * 6) + sp4C);
        Math_Vec3f_Copy((Vec3f *) &sp40, arg0 + 0x24);
        phi_a1 = Math_Vec3f_Yaw((Vec3f *) &sp40, (Vec3f *) &sp34);
    } else {
        phi_a1 = arg0->world.rot.y;
    }
    Math_ApproachS(arg0 + 0x32, phi_a1, 4, 0xE38);
    arg0->shape.rot.y = arg0->world.rot.y;
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    if ((s32) (arg0->floorHeight + 80.0f) >= (s32) arg0->world.pos.y) {
        func_80A86770(arg0);
    }
    return sp2C;
}

s32 func_80A875AC(Actor *arg0, ? arg1) {
    s32 sp20;
    s16 temp_v1;
    s32 temp_v0;

    sp20 = 0;
    temp_v1 = arg0->unk364;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {

                } else if (func_801378B8(arg0 + 0x144, arg0->unk154) != 0) {
                    arg0->unk364 = (s16) (arg0->unk364 + 1);
                    func_80A86924(arg0, 4);
                    sp20 = 1;
                }
            } else {
                temp_v0 = arg0->unk37C;
                if ((temp_v0 != 5) && (temp_v0 != 6)) {
                    func_80A86924(arg0, 3);
                    arg0->unk364 = (s16) (arg0->unk364 + 1);
                } else {
                    func_80A86924(arg0, 4);
                    sp20 = 1;
                }
            }
        } else {
            goto block_9;
        }
    } else if (((arg0->unk34E & 0x40) != 0) || ((gSaveContext.weekEventReg[16] & 0x10) != 0)) {
        arg0->unk364 = (s16) (temp_v1 + 1);
        arg0->unk374 = (s16) arg0->cutscene;
block_9:
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(arg0->unk374);
        } else if (ActorCutscene_GetCanPlayNext(arg0->unk374) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk374, arg0);
            arg0->unk364 = (s16) (arg0->unk364 + 1);
        } else {
            ActorCutscene_SetIntentToPlay(arg0->unk374);
        }
    } else {
        arg0->unk364 = (s16) (temp_v1 + 1);
        arg0->unk364 = (s16) (arg0->unk364 + 1);
    }
    if (sp20 == 1) {
        if (arg0->unk390 != 0) {
            arg0->unk378 = func_80A87880;
            arg0->unk34E = (u16) (arg0->unk34E | 8);
        } else {
            arg0->unk378 = func_80A8777C;
        }
        arg0->unk364 = 0;
    }
    return sp20;
}

s32 func_80A8777C(Actor *arg0, GlobalContext *arg1) {
    s32 sp18;
    s32 temp_v0_2;
    u8 temp_v0;
    s32 phi_a3;

    arg0 = arg0;
    sp18 = 0;
    temp_v0 = func_80152498(arg1 + 0x4908);
    phi_a3 = sp18;
    if ((temp_v0 != 4) && (temp_v0 != 5)) {
        if (temp_v0 != 0x10) {

        } else {
            goto block_5;
        }
    } else {
        arg0 = arg0;
        sp18 = sp18;
        phi_a3 = sp18;
        if (func_80147624(arg1) != 0) {
block_5:
            arg0 = arg0;
            sp18 = sp18;
            temp_v0_2 = func_80123810(arg1);
            phi_a3 = sp18;
            if ((temp_v0_2 == 0x23) || (temp_v0_2 == 0x24)) {
                arg0->unk34E = (u16) (arg0->unk34E | 8);
                if (temp_v0_2 == 0x23) {
                    arg0->unk390 = 1;
                } else {
                    arg0->unk390 = 2;
                }
                arg0->unk378 = func_80A87880;
                arg0->unk364 = 0;
                phi_a3 = 1;
            } else if (temp_v0_2 < 0) {
                phi_a3 = 3;
            } else if (temp_v0_2 != 0) {
                phi_a3 = 2;
            }
        }
    }
    return phi_a3;
}

s32 func_80A87880(Actor *arg0, GlobalContext *arg1) {
    Player *sp2C;
    s32 sp24;
    Actor *sp20;
    Actor *temp_a0;
    Actor *temp_a0_2;
    f32 temp_f0;
    s16 temp_v0;
    u16 temp_t5;
    u16 temp_t5_2;
    u16 temp_t8;
    u16 temp_v0_2;

    sp24 = 0;
    sp2C = arg1->actorCtx.actorList[2].first;
    temp_t8 = arg0->unk364;
    switch (temp_t8) {
    case 0:
        ActorCutscene_Stop(arg0->unk374);
        arg0->unk374 = ActorCutscene_GetAdditionalCutscene(arg0->unk374);
        arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
        /* fallthrough */
    case 1:
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(arg0->unk374);
        } else if (ActorCutscene_GetCanPlayNext(arg0->unk374) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk374, arg0);
            arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
        } else {
            ActorCutscene_SetIntentToPlay(arg0->unk374);
        }
        break;
    case 2:
        temp_v0 = arg0->yawTowardsPlayer;
        temp_t5 = arg0->unk34E | 0x10;
        arg0->unk34E = temp_t5;
        arg0->unk34E = (u16) (temp_t5 & 0xFFF7);
        arg0->shape.rot.y = temp_v0;
        arg0->world.rot.y = temp_v0;
        func_80A86924(arg0, 7);
        arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
        break;
    case 3:
        temp_a0 = arg0 + 0x144;
        sp20 = temp_a0;
        if (func_801378B8((SkelAnime *) temp_a0, arg0->unk154) != 0) {
            arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
            func_80A86924(arg0, 9);
            arg0->world.rot.y += 0x4000;
        } else if (func_801378B8((SkelAnime *) temp_a0, 12.0f) != 0) {
            temp_v0_2 = arg0->unk34E;
            temp_t5_2 = temp_v0_2 | 0x400;
            if ((temp_v0_2 & 0x800) == 0) {
                arg0->unk34E = temp_t5_2;
                arg0->unk34E = (u16) (temp_t5_2 | 0x800);
                func_80123AA4(sp2C, 3);
            }
        }
        break;
    case 4:
        temp_a0_2 = arg0 + 0x144;
        sp20 = temp_a0_2;
        if (func_801378B8((SkelAnime *) temp_a0_2, arg0->unk154) != 0) {
            arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
            func_80A86924(arg0, 0xA);
            sp24 = 1;
        } else if ((func_801378B8((SkelAnime *) temp_a0_2, 18.0f) != 0) || (func_801378B8((SkelAnime *) sp20, 32.0f) != 0) || (func_801378B8((SkelAnime *) sp20, 52.0f) != 0)) {
            if (func_801378B8((SkelAnime *) sp20, 52.0f) != 0) {
                arg0->unk34E = (u16) (arg0->unk34E & 0xFBFF);
                func_80123D50(arg1, sp2C, 0x12, 0x15);
            }
            Audio_PlayActorSound2(arg0, 0x3902U);
        } else if (func_801378B8((SkelAnime *) sp20, 90.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x3901U);
        }
        temp_f0 = arg0->unk15C;
        if ((temp_f0 > 90.0f) && (temp_f0 < 95.0f)) {
            func_80A86674(arg0);
        }
        break;
    }
    if (sp24 == 1) {
        arg0->unk378 = func_80A87B48;
        arg0->unk364 = 0U;
    }
    return sp24;
}

s32 func_80A87B48(Actor *arg0, void *arg1) {
    f32 sp54;
    ? sp4C;
    ? sp40;
    s16 sp3E;
    s32 sp34;
    SkelAnime *sp2C;
    Actor *temp_a2;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    u16 temp_t5;
    s16 phi_v1;

    temp_a2 = arg1->unk1CCC;
    sp34 = 0;
    temp_v1 = arg0->unk364;
    if (temp_v1 != 0) {
        temp_a0 = arg0 + 0x144;
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {

            } else {
                temp_v0 = arg0->unk370;
                if (temp_v0 == 0) {
                    phi_v1 = 0;
                } else {
                    arg0->unk370 = (s16) (temp_v0 - 1);
                    phi_v1 = arg0->unk370;
                }
                if (phi_v1 != 0) {
                    gGameInfo->data[548] = (s16) (s32) (255.0f - ((fabsf(10.0f - (f32) arg0->unk370) / 10.0f) * 255.0f));
                    if (arg0->unk370 == 9) {
                        arg0->shape.shadowDraw = NULL;
                        temp_t5 = arg0->unk34E | 0x208;
                        arg0->unk34E = temp_t5;
                        arg0->unk34E = (u16) (temp_t5 & 0xF7FF);
                        if (temp_a2->unkA87 != 0) {
                            temp_a2->unkA87 = 0;
                        }
                        func_80A86924(arg0, 0xC, temp_a2);
                    }
                } else {
                    gGameInfo->data[544] = 0;
                    sp34 = 1;
                }
            }
        } else {
            sp2C = temp_a0;
            if (func_801378B8(temp_a0, arg0->unk154) != 0) {
                sp3E = func_800DFCDC((arg1 + (arg1->unk810 * 4))->unk800) + 0x8000;
                Math_Vec3f_Copy((Vec3f *) &sp4C, &D_801D15B0);
                sp54 = 40.0f;
                Lib_Vec3f_TranslateAndRotateY((Vec3f *) &arg0->world, sp3E, (Vec3f *) &sp4C, (Vec3f *) &sp40);
                func_80A85620(arg0 + 0x394, &sp40, 2.0f, 0.08f, 60.0f);
                func_8016A268(arg1, 1, 0xA0, 0xA0, 0xA0, 0);
                arg0->unk370 = 0x14;
                arg0->unk372 = 0xA;
                arg0->unk364 = (s16) (arg0->unk364 + 1);
            } else if (func_801378B8(temp_a0, 22.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x3906U);
                func_80A85AA4(arg0 + 0x394, arg0 + 0x1F8, 1.0f, 0.1f, 40.0f);
            }
        }
    } else {
        func_80A86924(arg0, 0xB, temp_a2);
        arg0->unk364 = (s16) (arg0->unk364 + 1);
    }
    if (sp34 == 1) {
        arg0->unk378 = func_80A87DC0;
        arg0->unk364 = 0;
    }
    return sp34;
}

s32 func_80A87DC0(Actor *arg0, GlobalContext *arg1) {
    s32 sp28;
    Actor *sp20;
    Actor *temp_a2;
    s16 temp_v1;
    u16 temp_t4;
    u16 temp_t6;
    s16 phi_v0;

    sp28 = 0;
    temp_t6 = arg0->unk364;
    switch (temp_t6) {
    case 0:
        ActorCutscene_Stop(arg0->unk374);
        arg0->unk374 = ActorCutscene_GetAdditionalCutscene(arg0->unk374);
        arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
        /* fallthrough */
    case 1:
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(arg0->unk374);
        } else if (ActorCutscene_GetCanPlayNext(arg0->unk374) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk374, arg0);
            arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
        } else {
            ActorCutscene_SetIntentToPlay(arg0->unk374);
        }
        break;
    case 2:
        func_801A75E8(0x3906);
        Audio_PlayActorSound2(arg0, 0x3905U);
        Audio_PlayActorSound2(arg0, 0x3903U);
        func_80A86924(arg0, 0xD);
        temp_t4 = arg0->unk34E & 0xFFF7;
        arg0->unk34E = temp_t4;
        arg0->unk184 = 0;
        arg0->unk179 = 2;
        arg0->unk34E = (u16) (temp_t4 | 0x10);
        arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
        break;
    case 3:
        temp_a2 = arg0 + 0x144;
        sp20 = temp_a2;
        if (func_801378B8((SkelAnime *) temp_a2, arg0->unk154) == 0) {
            SkelAnime_LoadAnimationType5(arg1, arg0, (SkelAnime *) temp_a2, 1.0f);
        } else {
            func_80A86924(arg0, 0xE, temp_a2);
            arg0->unk362 = 0x14;
            arg0->unk364 = (u16) ((s16) arg0->unk364 + 1);
            arg0->shape.rot.y = arg0->world.rot.y;
        case 4:
            if (func_80A87400(arg0, arg1) == 0) {
                temp_v1 = arg0->unk362;
                if (temp_v1 == 0) {
                    phi_v0 = 0;
                } else {
                    arg0->unk362 = (s16) (temp_v1 - 1);
                    phi_v0 = arg0->unk362;
                }
                if (phi_v0 == 0) {
                    goto block_17;
                }
            } else {
block_17:
                sp28 = 1;
                gSaveContext.weekEventReg[12] |= 8;
            }
        }
        break;
    }
    if (sp28 == 1) {
        arg0->draw = NULL;
        arg0->flags &= -2;
        arg0->unk378 = 0;
        arg0->unk34E = 0U;
        arg0->unk364 = 0U;
    }
    return sp28;
}

void func_80A87FD0(EnTru *this, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    s32 temp_v1;
    u16 temp_v0;
    s16 phi_v1;
    GlobalContext *phi_a1;

    phi_a1 = globalCtx;
    if (this->actor.draw != 0) {
        temp_v0 = this->unk34E;
        if (((temp_v0 & 0x80) != 0) || (temp_v1 = gSaveContext.weekEventReg[16] & 0x10, (temp_v1 != 0))) {
            if (func_80A873B8(this) != 0) {
                func_8013AED4(&this->unk34E, 3U, 7U);
                return;
            }
            func_8013AED4(&this->unk34E, 0U, 7U);
            return;
        }
        if ((temp_v0 & 0x40) != 0) {
            if (func_80A873B8(this) != 0) {
                func_8013AED4(&this->unk34E, 3U, 7U);
            } else {
                func_8013AED4(&this->unk34E, 0U, 7U);
            }
            if ((this->unk37C == 2) && (func_801378B8(&this->unk144, this->unk154) != 0)) {
                this->unk362 = Rand_S16Offset(0x28, 0x14);
                func_80A86924((Actor *) this, 1);
                func_80A86460(this);
                return;
            }
            if (this->unk37C != 2) {
                temp_v0_2 = this->unk362;
                if (temp_v0_2 == 0) {
                    phi_v1 = 0;
                } else {
                    this->unk362 = temp_v0_2 - 1;
                    phi_v1 = this->unk362;
                }
                if (phi_v1 == 0) {
                    func_80A86924((Actor *) this, 2);
                    return;
                }
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        if ((temp_v1 == 0) && (fabsf(this->actor.yDistToPlayer) < 10.0f) && (phi_a1 = (GlobalContext *) 4U, (this->actor.xzDistToPlayer < 140.0f))) {
            func_8013AED4(&this->unk34E, 4U, 7U);
            this->unk34E |= 0x1040;
            this->unk362 = Rand_S16Offset(0x28, 0x14);
            return;
        }
        if (func_80A873B8(this, phi_a1) != 0) {
            func_8013AED4(&this->unk34E, 3U, 7U);
            return;
        }
        func_8013AED4(&this->unk34E, 0U, 7U);
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_80A881E0(EnTru *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    u16 temp_t0;
    u16 temp_v0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if (func_8010BF58((Actor *) this, globalCtx, this->unk354, this->unk378, &this->unk1E8) != 0) {
        if (sp2C->unk14B != 4) {
            this->unk34E |= 0x80;
        }
        if (ActorCutscene_GetCurrentIndex() != -1) {
            ActorCutscene_Stop(ActorCutscene_GetCurrentIndex());
        }
        temp_v0 = this->unk34E;
        if (((temp_v0 & 0x40) == 0) && ((gSaveContext.weekEventReg[16] & 0x10) == 0)) {
            func_80A86924((Actor *) this, 0);
        } else if ((temp_v0 & 0x80) != 0) {
            func_80A86924((Actor *) this, 0);
            func_80A86460(this);
        } else if ((gSaveContext.weekEventReg[16] & 0x10) != 0) {
            func_80A86924((Actor *) this, 6);
        }
        func_8013AED4(&this->unk34E, 0U, 7U);
        temp_t0 = this->unk34E & 0xEFF7;
        this->unk34E = temp_t0;
        this->unk34E = temp_t0 | 0x10;
        this->actor.flags &= -0x101;
        this->unk1E8 = 0;
        this->actionFunc = func_80A87FD0;
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
}

void EnTru_Init(EnTru *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    EnTru *this = (EnTru *) thisx;

    if ((gSaveContext.entranceIndex != 0xC200) || ((gSaveContext.weekEventReg[12] & 8) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0601AA60, NULL, &this->unk20A, &this->unk2AC, 0x1B);
    Collider_InitAndSetSphere(globalCtx, &this->unk18C, (Actor *) this, &D_80A8B2A0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80A8B2CC);
    this->unk37C = -1;
    func_80A86924((Actor *) this, 0);
    temp_v0 = func_8013BEDC(globalCtx, this->actor.params & 0xFF, 0xFF, &this->unk384);
    this->unk1E4 = temp_v0;
    if (temp_v0 != 0) {
        this->unk384 = 1;
    }
    this->actor.targetMode = 0;
    Actor_SetScale((Actor *) this, 0.008f);
    this->unk34E = 0;
    if ((gSaveContext.weekEventReg[16] & 0x10) != 0) {
        func_80A86924((Actor *) this, 5);
    } else {
        this->unk388 = 0;
    }
    this->actionFunc = func_80A87FD0;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
}

void EnTru_Destroy(EnTru *this, GlobalContext *globalCtx) {
    EnTru *this = (EnTru *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk18C);
}

void EnTru_Update(EnTru *this, GlobalContext *globalCtx) {
    EnTru *this = (EnTru *) thisx;
    func_80A872AC((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80A868F8(this);
    func_80A86B0C(this, globalCtx);
    func_80A86DB8(this);
    if ((this->unk34E & 0x80) == 0) {

    }
    this->unk388 = 0;
    func_8013C964((Actor *) this, globalCtx, (f32) (this->unk18C.dim.worldSphere.radius + 0x1E), 20.0f, this->unk388, (s16) (this->unk34E & 7));
    func_80A8697C(this, globalCtx);
    func_80A86384(&this->unk394, &this->unk1F8);
}

s32 func_80A885B8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    Vec3f *sp24;
    Vec3f *temp_a1;

    temp_a1 = arg5 + 0x3C;
    if (arg1 == 0x15) {
        sp24 = temp_a1;
        SysMatrix_GetStateTranslation(temp_a1);
        Math_Vec3f_ToVec3s(arg5 + 0x1D4, temp_a1);
        arg5->unk3C = (f32) ((arg5->unk3C / 10.0f) * 10.0f);
        arg5->unk40 = (f32) (((arg5->unk40 + 10.0f) / 10.0f) * 10.0f);
        arg5->unk44 = (f32) ((arg5->unk44 / 10.0f) * 10.0f);
        Math_Vec3s_Copy(arg5 + 0x48, arg5 + 0x30);
        SysMatrix_MultiplyVector3fByState(&D_80A8B3FC, arg5 + 0x1F8);
    }
    if (((arg5->unk34E & 0x200) == 0) && (arg1 == 0xE)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80A88698(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0x13) {
        func_80A86BAC(arg4, arg0, arg0);
    }
}

void func_80A886D4(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    s32 sp2C;
    s16 temp_t3;
    u16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk34E;
    phi_v1 = 1;
    if ((temp_v0 & 0x10) != 0) {
        phi_v1 = 0;
    }
    if ((temp_v0 & 0x20) != 0) {
        sp2C = 1;
    } else {
        sp2C = 0;
    }
    if (phi_v1 == 0) {
        sp2C = 0;
    }
    if (arg1 == 0x15) {
        func_8013AD9C(arg2->unk366, (s16) (arg2->unk368 + arg2->shape.rot.y), arg2 + 0x1EC, arg2 + 0x204, phi_v1, sp2C);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk1EC, arg2->unk1F0, arg2->unk1F4, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        if (sp2C != 0) {
            temp_t3 = arg2->unk204;
            arg2->unk204 = (s16) arg2->unk208;
            arg2->unk208 = temp_t3;
        }
        Matrix_RotateY(arg2->unk206, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk204, 1);
        SysMatrix_InsertZRotation_s(arg2->unk208, 1);
        SysMatrix_StatePush();
    }
}

void EnTru_Draw(EnTru *this, GlobalContext *globalCtx) {
    GraphicsContext *sp44;
    Gfx *sp3C;
    Gfx *sp38;
    ? *sp34;
    ? *temp_a0_2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnTru *this = (EnTru *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp44 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp44 = sp44;
    sp3C = temp_v0;
    sp3C->words.w1 = Lib_SegmentedToVirtual(*(&D_80A8B408 + (this->unk36E * 4)));
    temp_v0_2 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp38 = temp_v0_2;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80A8B408 + (this->unk36E * 4)));
    func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80A885B8, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80A88698, func_80A886D4, (Actor *) this);
    temp_a0_2 = &this->unk394;
    sp34 = temp_a0_2;
    func_80A85788(temp_a0_2, (GraphicsContext **) globalCtx);
    func_80A85BCC(temp_a0_2, (GraphicsContext **) globalCtx);
    func_80A85F84(temp_a0_2, (GraphicsContext **) globalCtx);
}
