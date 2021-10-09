typedef struct EnRailSkb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderJntSph unk144;              /* inferred */
    /* 0x164 */ ColliderJntSphElement unk164;       /* inferred */
    /* 0x1A4 */ char pad1A4[0x40];
    /* 0x1E4 */ SkelAnime unk1E4;                   /* inferred */
    /* 0x228 */ void (*actionFunc)(EnRailSkb *, GlobalContext *);
    /* 0x22C */ void *unk22C;                       /* inferred */
    /* 0x230 */ char pad230[0x4];
    /* 0x234 */ Vec3f unk234;                       /* inferred */
    /* 0x240 */ char pad240[0x9C];                  /* maybe part of unk234[14]? */
    /* 0x2DC */ s32 unk2DC;                         /* inferred */
    /* 0x2E0 */ s32 unk2E0;                         /* inferred */
    /* 0x2E4 */ s32 unk2E4;                         /* inferred */
    /* 0x2E8 */ s32 unk2E8;                         /* inferred */
    /* 0x2EC */ f32 unk2EC;                         /* inferred */
    /* 0x2F0 */ f32 unk2F0;                         /* inferred */
    /* 0x2F4 */ Vec3s unk2F4;                       /* inferred */
    /* 0x2FA */ char pad2FA[0x72];                  /* maybe part of unk2F4[20]? */
    /* 0x36C */ Vec3s unk36C;                       /* inferred */
    /* 0x372 */ char pad372[0x7E];                  /* maybe part of unk36C[22]? */
    /* 0x3F0 */ s16 unk3F0;                         /* inferred */
    /* 0x3F2 */ s16 unk3F2;                         /* inferred */
    /* 0x3F4 */ s16 unk3F4;                         /* inferred */
    /* 0x3F6 */ s16 unk3F6;                         /* inferred */
    /* 0x3F8 */ s16 unk3F8;                         /* inferred */
    /* 0x3FA */ s16 unk3FA;                         /* inferred */
    /* 0x3FC */ s16 unk3FC;                         /* inferred */
    /* 0x3FE */ s16 unk3FE;                         /* inferred */
    /* 0x400 */ u16 unk400;                         /* inferred */
    /* 0x402 */ u8 unk402;                          /* inferred */
    /* 0x403 */ u8 unk403;                          /* inferred */
} EnRailSkb;                                        /* size = 0x404 */

struct _mips2c_stack_EnRailSkb_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRailSkb_Draw {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnRailSkb_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ColliderJntSph *sp34;                /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnRailSkb_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B708C0 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B70AB4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B70B04 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x4];
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B70D24 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B70FA0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B70FF8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B710AC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B710E4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B71114 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7114C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B71228 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7123C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B712FC {};              /* size 0x0 */

struct _mips2c_stack_func_80B71314 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B71354 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B713A4 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B71488 {};              /* size 0x0 */

struct _mips2c_stack_func_80B714D8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7151C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B715AC {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B71650 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B716A8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B717C8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B717E0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B718B0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B718C4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B71910 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B71954 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x2];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B71A08 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B71A58 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad30[0x6];                     /* maybe part of sp2C[2]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B71B6C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B71BB8 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B71D8C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B71DF0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B71EA8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B71F3C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B72100 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B72190 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad34[0x4];                     /* maybe part of sp32[3]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B723F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B72430 {
    /* 0x00 */ char pad0[0x42];
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80B725C0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B726B4 {
    /* 0x00 */ char pad0[0x84];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80B72830 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7285C {};              /* size 0x0 */

struct _mips2c_stack_func_80B72880 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B72970 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad34[0x8];                     /* maybe part of sp30[3]? */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B72E88 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0x18];
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B7302C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

void func_80B708C0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B70AB4(s32 arg0, f32 arg1, f32 arg2, f32 arg3); /* static */
s32 func_80B70B04(Actor *arg0, f32 arg1, s32 arg2, f32 arg3); /* static */
void func_80B70D24(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B70FA0(EnRailSkb *arg0, GlobalContext *); /* static */
void func_80B710AC(Actor *arg0);                    /* static */
void func_80B71114(Actor *arg0);                    /* static */
void func_80B71228(EnRailSkb *arg0);                /* static */
void func_80B712FC(EnRailSkb *arg0);                /* static */
void func_80B71354(EnRailSkb *arg0);                /* static */
void func_80B71488(EnRailSkb *arg0);                /* static */
void func_80B7151C(Actor *arg0);                    /* static */
void func_80B71650(EnRailSkb *arg0);                /* static */
void func_80B717C8(EnRailSkb *arg0);                /* static */
void func_80B718B0(EnRailSkb *arg0);                /* static */
void func_80B71910(EnRailSkb *arg0);                /* static */
void func_80B71A08(EnRailSkb *arg0);                /* static */
void func_80B71B6C(EnRailSkb *arg0);                /* static */
void func_80B71D8C(EnRailSkb *arg0, GlobalContext *arg1, void (*arg2)(EnRailSkb *)); /* static */
void func_80B71DF0(EnRailSkb *arg0);                /* static */
void func_80B71F3C(EnRailSkb *arg0, GlobalContext *arg1); /* static */
void func_80B72100(EnRailSkb *arg0, GlobalContext *arg1); /* static */
void func_80B72190(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B723F8(EnRailSkb *arg0);                /* static */
void func_80B72430(EnRailSkb *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80B725C0(EnRailSkb *arg0, GlobalContext *arg1); /* static */
void func_80B726B4(EnRailSkb *arg0, GlobalContext *arg1); /* static */
void func_80B72830(EnRailSkb *arg0, s16 arg1);      /* static */
s16 func_80B7285C(EnRailSkb *arg0);                 /* static */
void func_80B72880(EnRailSkb *arg0, GlobalContext *arg1); /* static */
void func_80B72970(EnRailSkb *arg0, GlobalContext *arg1); /* static */
s32 func_80B72E88(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80B7302C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern SkeletonHeader D_06005EF8;
extern AnimationHeader D_060064E0;
static ActorAnimationEntry D_80B732D0[13] = {
    {(AnimationHeader *)0x60064E0, 0.96f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6003584, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6002190, 0.6f, 0.0f, 0.0f, 3, 4.0f},
    {(AnimationHeader *)0x6002AC8, 1.0f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600270C, 1.0f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600697C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6006D90, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6001D1C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6003584, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x6003584, 1.0f, 0.0f, 0.0f, 2, -16.0f},
    {(AnimationHeader *)0x6002AC8, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60015EC, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60009E4, 1.0f, 0.0f, 0.0f, 0, -8.0f},
};
static ColliderJntSphElementInit D_80B73408[2] = {
    {{0, {0xF7CFFFFF, 0, 4}, {0, 0, 0}, 1, 0, 0}, {0xF, {{0, 0, 0}, 0xA}, 0x64}},
    {{0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1}, {1, {{0, 0, 0}, 0x14}, 0x64}},
};
static ColliderJntSphInit D_80B73450 = {{6, 0x11, 9, 0x39, 0x10, 0}, 2, &D_80B73408};
static CollisionCheckInfoInit2 D_80B73460 = {2, 0, 0, 0, 0xFF};
static DamageTable D_80B7346C = {
    {
        0x10,
        0xD1,
        0,
        0xF1,
        0xC3,
        0xC3,
        0xF2,
        0x11,
        0xF2,
        0xF1,
        0xF1,
        0x23,
        0x33,
        0x42,
        0xF1,
        0x10,
        0xD1,
        0xF2,
        0x10,
        0xB0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        2,
        4,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static s32 D_80B7348C = 0;
static InitChainEntry D_80B73490[2];                /* unable to generate initializer */
static ? D_80B73498;                                /* unable to generate initializer */
static ? D_80B734A4;                                /* unable to generate initializer */
static Color_RGBA8 D_80B734B0 = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80B734B4 = {0xC8, 0xC8, 0xFF, 0xFF};
static Vec3f D_80B734B8 = {0.0f, -1.0f, 0.0f};
static ? D_80B734C4;                                /* unable to generate initializer */
static Vec3f D_80B734D0 = {800.0f, 1200.0f, 0.0f};

void func_80B708C0(Actor *arg0, GlobalContext *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 *temp_a1;
    s16 temp_v0_2;
    s32 temp_lo;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_s0;
    u8 temp_t2;
    void *temp_a2;
    void *temp_v0;
    s32 phi_s0;
    s32 phi_a3;

    temp_s0 = arg1->setupPathList + ((((s32) arg0->params >> 8) & 0xFF) * 8);
    temp_v1 = D_80B7348C;
    arg0->unk230 = Lib_SegmentedToVirtual(temp_s0->unk4);
    arg0->unk2E0 = temp_v1;
    temp_t2 = temp_s0->unk0;
    arg0->unk2E8 = (s32) temp_t2;
    if (temp_v1 == 0) {
        phi_s0 = 1;
        if ((s32) temp_t2 >= 2) {
loop_3:
            D_80B7348C = D_80B7348C + 1;
            Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x212, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, (s32) arg0->params);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
            if (temp_s0_2 < arg0->unk2E8) {
                if (temp_s0_2 != 0xA) {
                    goto loop_3;
                }
            }
        }
        D_80B7348C = 0;
    }
    temp_v1_2 = arg0->unk2E0;
    temp_a2 = arg0->unk230;
    temp_v0 = temp_a2 + (temp_v1_2 * 6);
    arg0->world.pos.x = (f32) temp_v0->unk0;
    arg0->world.pos.y = (f32) temp_v0->unk2;
    arg0->world.pos.z = (f32) temp_v0->unk4;
    phi_a3 = 0;
    if (temp_v1_2 < (arg0->unk2E8 - 1)) {
        phi_a3 = temp_v1_2 + 1;
    }
    temp_lo = phi_a3 * 6;
    temp_a1 = &sp70;
    sp70 = (f32) *(temp_a2 + temp_lo);
    sp74 = (f32) (arg0->unk230 + temp_lo)->unk2;
    sp78 = (f32) (arg0->unk230 + temp_lo)->unk4;
    temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &arg0->world, (Vec3f *) temp_a1);
    arg0->shape.rot.y = temp_v0_2;
    arg0->world.rot.y = temp_v0_2;
}

s32 func_80B70AB4(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 phi_v1;

    phi_v1 = -1;
    if ((arg2 * arg1) < ((bitwise f32) arg0 * arg3)) {
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80B70B04(Actor *arg0, f32 arg1, s32 arg2, f32 arg3) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s32 sp54;
    s32 sp4C;
    f32 *temp_s4;
    f32 *temp_s5;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 phi_s0;
    s32 phi_s2;
    s32 phi_v0;
    s32 phi_s0_2;

    temp_s4 = &sp60;
    temp_s5 = &sp58;
    sp54 = 1;
    sp4C = 0;
    sp60 = (f32) arg0->unk230->unk4 - arg3;
    sp64 = (f32) arg0->unk230->unk0 - arg1;
    sp58 = (f32) arg0->unk230->unkA - arg3;
    sp5C = (f32) arg0->unk230->unk6 - arg1;
    temp_s3 = func_80B70AB4((bitwise s32) temp_s4->unk0, temp_s4->unk4, temp_s5->unk0, temp_s5->unk4);
    phi_s0 = 1;
    phi_s2 = sp4C * 6;
loop_1:
    temp_s2 = phi_s2 + 6;
    temp_s0 = phi_s0 + 1;
    phi_s2 = temp_s2;
    phi_v0 = 0;
    phi_s0_2 = temp_s0;
    if (phi_s0 < (arg0->unk2E8 - 1)) {
        phi_v0 = temp_s0 * 6;
    } else {
        phi_s0_2 = 0;
    }
    sp60 = (f32) (arg0->unk230 + temp_s2)->unk4 - arg3;
    sp64 = (f32) *(arg0->unk230 + temp_s2) - arg1;
    sp58 = (f32) (arg0->unk230 + phi_v0)->unk4 - arg3;
    sp5C = (f32) *(arg0->unk230 + phi_v0) - arg1;
    phi_s0 = phi_s0_2;
    if (func_80B70AB4((bitwise s32) temp_s4->unk0, temp_s4->unk4, temp_s5->unk0, temp_s5->unk4) != temp_s3) {
        sp54 = 0;
    } else if (phi_s0_2 != 0) {
        goto loop_1;
    }
    return sp54;
}

void func_80B70D24(Actor *arg0, GlobalContext *arg1) {
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[6].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_1:
        if ((phi_s0->id == 0x1E3) && (func_80B70B04(arg0, subroutine_arg1, phi_s0->world.pos.y, phi_s0->world.pos.z) != 0)) {
            if (Flags_GetSwitch(arg1, (s32) (phi_s0->params & 0xFF00) >> 8) != 0) {
                Actor_MarkForDeath(arg0);
                return;
            }
            arg0->unk22C = phi_s0;
            return;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_7;
        }
        goto loop_1;
    }
block_7:
    Actor_MarkForDeath(arg0);
}

void EnRailSkb_Init(EnRailSkb *this, GlobalContext *globalCtx) {
    ColliderJntSph *sp34;
    ColliderJntSph *temp_a1;
    EnRailSkb *this = (EnRailSkb *) thisx;

    func_80B708C0((Actor *) this, globalCtx);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_Init(globalCtx, &this->unk1E4, &D_06005EF8, &D_060064E0, &this->unk2F4, &this->unk36C, 0x14);
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80B73450, &this->unk164);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B7346C, &D_80B73460);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0xFF) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
    Actor_ProcessInitChain((Actor *) this, D_80B73490);
    this->actor.hintId = 0x55;
    this->unk3F2 = 0;
    this->unk2E4 = -1;
    this->unk3FC = 0;
    this->unk3FA = 0;
    this->unk403 = 0;
    this->unk3FE = 0;
    this->actor.speedXZ = 1.6f;
    if (this->actor.parent == 0) {
        this->unk3F4 = 1;
        this->unk3F6 = 1;
        this->unk3F8 = 0;
    }
    if ((globalCtx->sceneNum == 0x43) && (gSaveContext.sceneSetupIndex == 1) && (globalCtx->csCtx.unk_12 == 0)) {
        this->actor.flags |= 0x100000;
    }
    func_80B70FA0(this);
}

void EnRailSkb_Destroy(EnRailSkb *this, GlobalContext *globalCtx) {
    EnRailSkb *this = (EnRailSkb *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk144);
}

void func_80B70FA0(EnRailSkb *arg0) {
    SkelAnime *temp_a0;

    arg0->unk3F2 = 0;
    if (func_80B716A8 != arg0->actionFunc) {
        temp_a0 = arg0 + 0x1E4;
        arg0 = arg0;
        func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B732D0, 0);
    }
    arg0->actionFunc = func_80B70FF8;
}

void func_80B70FF8(EnRailSkb *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    if (this->actor.xzDistToPlayer < 65.0f) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 < 0x2AAA) && ((s32) this->unk3F2 >= 6)) {
            func_80B71354(this);
        }
    }
    temp_v0_2 = this->unk3F2;
    if ((s32) temp_v0_2 < 6) {
        this->unk3F2 = temp_v0_2 + 1;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0x71C, (s16) 0xB6);
}

void func_80B710AC(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk228 = func_80B710E4;
}

void func_80B710E4(EnRailSkb *this, GlobalContext *globalCtx) {
    if (this->actor.colorFilterTimer == 0) {
        func_80B70FA0();
    }
}

void func_80B71114(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk228 = func_80B7114C;
}

void func_80B7114C(EnRailSkb *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk3F0;
    if (temp_v0 == 0) {
        this->unk3F0 = 0;
        this->unk2F0 = 0.0f;
        this->unk2EC = 0.0f;
        if (this->actor.colChkInfo.health != 0) {
            func_800BCB70((Actor *) this, 0x4000, 0xFF, 0, (s16) 8);
            func_800BDC5C(&this->unk1E4, (ActorAnimationEntry []) D_80B732D0, 3);
            Audio_PlayActorSound2((Actor *) this, 0x3832U);
            this->unk402 |= 1;
            func_80B712FC(this);
            return;
        }
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x3833U);
        func_80B71488(this);
        return;
    }
    if (temp_v0 == 1) {
        func_80B726B4(this, globalCtx);
    }
}

void func_80B71228(EnRailSkb *arg0) {
    arg0->actionFunc = func_80B7123C;
}

void func_80B7123C(EnRailSkb *this, GlobalContext *globalCtx) {
    if (this->unk3F0 == 0) {
        this->unk3F0 = 0;
        this->unk2F0 = 0.0f;
        this->unk2EC = 0.0f;
        if (this->actor.colChkInfo.health != 0) {
            func_800BCB70((Actor *) this, 0x4000, 0xFF, 0, (s16) 8);
            func_800BDC5C(&this->unk1E4, (ActorAnimationEntry []) D_80B732D0, 3);
            Audio_PlayActorSound2((Actor *) this, 0x3832U);
            this->unk402 |= 1;
            func_80B712FC(this);
            return;
        }
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x3833U);
        func_80B71488(this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80B712FC(EnRailSkb *arg0) {
    arg0->unk3F2 = 0;
    arg0->actionFunc = func_80B71314;
}

void func_80B71314(EnRailSkb *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk3F2;
    if ((s32) temp_v0 >= 6) {
        func_80B70FA0();
        return;
    }
    this->unk3F2 = temp_v0 + 1;
}

void func_80B71354(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x3831U);
    func_800BDC5C(arg0 + 0x1E4, (ActorAnimationEntry []) D_80B732D0, 2);
    arg0->unk228 = func_80B713A4;
}

void func_80B713A4(EnRailSkb *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk1E4;
    sp2C = temp_a0;
    if (func_801378B8(temp_a0, this->unk1E4.animFrameCount) != 0) {
        if ((this->actor.xzDistToPlayer > 65.0f) || (Player_GetMask(globalCtx) == 0xF)) {
            func_80B70FA0(this);
        } else {
            func_800BDC5C(sp2C, (ActorAnimationEntry []) D_80B732D0, 2);
        }
    }
    if (this->actor.xzDistToPlayer > 65.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0x71C, (s16) 0xB6);
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xAAA, (s16) 0xB6);
}

void func_80B71488(EnRailSkb *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk2E0;
    arg0->unk402 |= 0x40;
    arg0->actor.flags &= -2;
    if (temp_v0 != 0) {
        arg0->unk2E4 = temp_v0 - 1;
    } else {
        arg0->unk2E4 = arg0->unk2E8 - 1;
    }
    arg0->actionFunc = func_80B714D8;
}

void func_80B714D8(EnRailSkb *this, GlobalContext *globalCtx) {
    if (this->actor.draw != 0) {
        this->actor.draw = NULL;
    }
    if (this->unk2E4 == this->unk2E0) {
        func_80B7151C();
    }
}

void func_80B7151C(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->colChkInfo.health = 2;
    temp_a3->unk402 = 0;
    temp_a3->flags |= 1;
    temp_a3->shape.yOffset = -5000.0f;
    arg0 = temp_a3;
    Audio_PlayActorSound2(temp_a3, 0x3986U);
    arg0->draw = EnRailSkb_Draw;
    arg0->shape.shadowAlpha = 0;
    arg0->shape.rot.y = arg0->world.rot.y;
    func_800BDC5C(arg0 + 0x1E4, (ActorAnimationEntry []) D_80B732D0, 1);
    arg0->unk228 = func_80B715AC;
}

void func_80B715AC(EnRailSkb *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    if (Math_SmoothStepToF(&this->actor.shape.yOffset, 0.0f, 0.5f, 500.0f, 10.0f) == 0.0f) {
        func_80B70FA0(this, globalCtx);
    } else {
        func_80B72430(this, globalCtx, 1);
    }
    temp_v0 = this->actor.shape.shadowAlpha;
    if (temp_v0 != 0xFF) {
        if ((s32) temp_v0 >= 0xEB) {
            this->actor.shape.shadowAlpha = 0xFF;
            return;
        }
        this->actor.shape.shadowAlpha = temp_v0 + 0x14;
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80B71650(EnRailSkb *arg0) {
    SkelAnime *temp_a0;

    arg0->unk3FE = 0;
    if (func_80B70FF8 != arg0->actionFunc) {
        temp_a0 = arg0 + 0x1E4;
        arg0 = arg0;
        func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B732D0, 0);
    }
    arg0->actionFunc = func_80B716A8;
}

void func_80B716A8(EnRailSkb *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk3FE = 1;
        func_80B71D8C(this, globalCtx, func_80B723F8);
        if (func_80B7285C(this) == 0) {
            func_801518B0(globalCtx, 0x13ECU, (Actor *) this);
            this->unk400 = 0x13EC;
            func_80B72830(this, 1);
        } else {
            func_801518B0(globalCtx, 0x13F5U, (Actor *) this);
            this->unk400 = 0x13F5;
        }
        func_800BDC5C(&this->unk1E4, (ActorAnimationEntry []) D_80B732D0, 0xC);
        func_80B717C8(this);
    } else if ((this->actor.xzDistToPlayer < 100.0f) && ((this->unk144.base.acFlags & 2) == 0)) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0x71C, (s16) 0xB6);
}

void func_80B717C8(EnRailSkb *arg0) {
    arg0->unk3F2 = 0;
    arg0->actionFunc = func_80B717E0;
}

void func_80B717E0(EnRailSkb *this, GlobalContext *globalCtx) {
    u32 temp_v0;

    this->unk3FA = 0;
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 3:
        if ((globalCtx->gameplayFrames & 1) != 0) {
            this->unk3FA = 1;
        }
        break;
    case 4:
        func_80B72100(this, globalCtx);
        break;
    case 5:
        func_80B71F3C(this, globalCtx);
        break;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            func_80B71650(this);
        }
        break;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x71C, (s16) 0xB6);
}

void func_80B718B0(EnRailSkb *arg0) {
    arg0->actionFunc = func_80B718C4;
}

void func_80B718C4(EnRailSkb *this, GlobalContext *globalCtx) {
    void *temp_v1;

    func_80B70D24();
    if (this->actor.parent == 0) {
        temp_v1 = this->unk22C;
        if (temp_v1 != 0) {
            temp_v1->unk198 = 1;
        }
    }
    func_80B71910(this);
}

void func_80B71910(EnRailSkb *arg0) {
    func_800BDC5C(arg0 + 0x1E4, (ActorAnimationEntry []) D_80B732D0, 0);
    arg0->actionFunc = func_80B71954;
}

void func_80B71954(EnRailSkb *this, GlobalContext *globalCtx) {
    s16 sp36;
    f32 sp30;
    PosRot *sp2C;
    PosRot *temp_a0;

    temp_a0 = &this->actor.world;
    sp2C = temp_a0;
    sp36 = Math_Vec3f_Yaw((Vec3f *) temp_a0, this->unk22C + 0x24);
    sp30 = Math_Vec3f_DistXZ((Vec3f *) temp_a0, this->unk22C + 0x24);
    Math_SmoothStepToS(&this->actor.shape.rot.y, sp36, 1, 0x71C, (s16) 0xB6);
    this->unk30 = (unaligned s32) this->unkBC;
    this->actor.world.rot.z = (s16) (u16) this->actor.shape.rot.z;
    if (sp30 < 80.0f) {
        func_80B71A08(this);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80B71A08(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x3831U);
    func_800BDC5C(arg0 + 0x1E4, (ActorAnimationEntry []) D_80B732D0, 2);
    arg0->unk228 = func_80B71A58;
}

void func_80B71A58(EnRailSkb *this, GlobalContext *globalCtx) {
    s16 sp36;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;

    sp36 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, this->unk22C + 0x24);
    temp_a0 = &this->unk1E4;
    sp2C = temp_a0;
    if (func_801378B8(temp_a0, this->unk1E4.animFrameCount) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3831U);
        func_800BDC5C(sp2C, (ActorAnimationEntry []) D_80B732D0, 2);
        temp_v0 = this->unk22C;
        temp_v1 = temp_v0->unkB7;
        if (this->unk2E8 < (s32) temp_v1) {
            temp_v0->unkB7 = (u8) (temp_v1 - 1);
        } else {
            temp_v0->unkB7 = (u8) (temp_v1 - 1);
            func_80B71B6C(this);
        }
    }
    if (func_801378B8(sp2C, 3.0f) != 0) {
        temp_v0_2 = this->unk22C;
        temp_v1_2 = temp_v0_2->unkB7;
        if (this->unk2E8 < (s32) temp_v1_2) {
            temp_v0_2->unkB7 = (u8) (temp_v1_2 - 1);
        } else {
            temp_v0_2->unkB7 = (u8) (temp_v1_2 - 1);
            func_80B71B6C(this);
        }
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, sp36, 1, 0x71C, (s16) 0xB6);
    this->unk30 = (unaligned s32) this->unkBC;
    this->actor.world.rot.z = (s16) (u16) this->actor.shape.rot.z;
}

void func_80B71B6C(EnRailSkb *arg0) {
    EnRailSkb *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk3F2 = 0xA;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x1E4, (ActorAnimationEntry []) D_80B732D0, 0);
    arg0->actionFunc = func_80B71BB8;
}

void func_80B71BB8(EnRailSkb *this, GlobalContext *globalCtx) {
    f32 sp34;
    PosRot *temp_s0;
    s16 temp_v0;
    s32 temp_s0_2;
    u16 temp_v0_2;
    s32 phi_s0;

    temp_s0 = &this->actor.world;
    sp34 = Math_Vec3f_DistXZ((Vec3f *) temp_s0, this->unk22C + 0x24);
    temp_v0 = this->unk3F2;
    if ((s32) temp_v0 > 0) {
        this->unk3F2 = temp_v0 - 1;
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) temp_s0, this->unk22C + 0x24), 1, 0x71C, (s16) 0xB6);
    if (((this->actor.bgCheckFlags & 1) != 0) && (this->unk22C->unkB7 == 0)) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    } else {
        this->actor.velocity.y += this->actor.gravity;
        this->actor.world.pos.y += this->actor.velocity.y;
        Math_SmoothStepToF((f32 *) temp_s0, this->unk22C->unk24, 0.6f, 1.6f, 0.1f);
        Math_SmoothStepToF(&this->actor.world.pos.z, this->unk22C->unk2C, 0.6f, 1.6f, 0.1f);
    }
    temp_v0_2 = this->actor.bgCheckFlags;
    if ((temp_v0_2 & 2) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((sp34 < 50.0f) && ((temp_v0_2 & 1) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3831U);
        func_800BDC5C(&this->unk1E4, (ActorAnimationEntry []) D_80B732D0, 9);
        this->actor.velocity.y = 10.0f;
        phi_s0 = 0;
        do {
            func_80B72430(this, globalCtx, 0);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 4);
    }
}

void func_80B71D8C(EnRailSkb *arg0, GlobalContext *arg1, void (*arg2)(EnRailSkb *)) {
    EnRailSkb *temp_s0;
    EnRailSkb *temp_s0_2;
    EnRailSkb *phi_s0;

    temp_s0 = arg1->actorCtx.actorList[5].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            if (phi_s0->actor.id == 0x212) {
                arg2(phi_s0);
            }
            temp_s0_2 = phi_s0->actor.next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void func_80B71DF0(EnRailSkb *arg0) {
    SkelAnime *temp_a0;
    void (*temp_v0)(EnRailSkb *, GlobalContext *);

    temp_v0 = arg0->actionFunc;
    temp_a0 = arg0 + 0x1E4;
    if (func_80B714D8 == temp_v0) {
        arg0->actor.colChkInfo.health = 2;
        arg0->unk402 = 0;
        arg0->actor.flags |= 1;
        arg0->actor.draw = EnRailSkb_Draw;
        arg0->actor.shape.shadowAlpha = 0;
        arg0->actor.shape.yOffset = -5000.0f;
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    } else if ((func_80B7114C == temp_v0) && ((s32) arg0->unk3F0 >= 2)) {
        arg0->unk3F0 = 0;
    }
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80B732D0, 0xB);
    arg0->actionFunc = func_80B71EA8;
}

void func_80B71EA8(EnRailSkb *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    if (Math_SmoothStepToF(&this->actor.shape.yOffset, 0.0f, 0.5f, 500.0f, 10.0f) != 0.0f) {
        func_80B72430(this, globalCtx, 1);
    }
    temp_v0 = this->actor.shape.shadowAlpha;
    if (temp_v0 != 0xFF) {
        if ((s32) temp_v0 >= 0xEB) {
            this->actor.shape.shadowAlpha = 0xFF;
            return;
        }
        this->actor.shape.shadowAlpha = temp_v0 + 0x14;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80B71F3C(EnRailSkb *arg0, GlobalContext *arg1) {
    u16 temp_t8;
    u16 temp_v0;

    temp_v0 = arg0->unk400;
    if (((temp_v0 == 0x13ED) || (temp_v0 == 0x13F5)) && (arg0->unk3F2 != 1)) {
        func_80B71D8C(arg0, arg1, func_80B71DF0);
        func_80B717C8(arg0);
        arg0->unk3F2 = 1;
    }
    if (func_80147624(arg1) != 0) {
        temp_t8 = arg0->unk400;
        switch (temp_t8) {
        case 5100:
            func_801518B0(arg1, 0x13EDU, (Actor *) arg0);
            arg0->unk400 = 0x13ED;
            return;
        case 5101:
            func_801518B0(arg1, 0x13EEU, (Actor *) arg0);
            arg0->unk400 = 0x13EE;
            return;
        case 5102:
            func_801518B0(arg1, 0x13EFU, (Actor *) arg0);
            arg0->unk400 = 0x13EF;
            return;
        case 5103:
        case 5109:
            func_801518B0(arg1, 0x13F0U, (Actor *) arg0);
            arg0->unk400 = 0x13F0;
            return;
        case 5105:
            func_801518B0(arg1, 0x13F2U, (Actor *) arg0);
            arg0->unk400 = 0x13F2;
            return;
        case 5106:
            if (arg0->unk3FC == 1) {
                func_801518B0(arg1, 0x13F4U, (Actor *) arg0);
                arg0->unk400 = 0x13F4;
                return;
            }
            func_801477B4(arg1);
            func_80B71D8C(arg0, arg1, func_80B71650);
            return;
        case 5107:
            func_801518B0(arg1, 0x13F2U, (Actor *) arg0);
            arg0->unk400 = 0x13F2;
            arg0->unk3FC = 1;
            return;
        case 5108:
            func_801477B4(arg1);
            func_80B71D8C(arg0, arg1, func_80B718B0);
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80B72100(Actor *arg0, GlobalContext *arg1) {
    if (func_80147624(arg1) != 0) {
        if (arg1->msgCtx.choiceIndex == 0) {
            func_8019F208();
            func_801518B0(arg1, 0x13F1U, arg0);
            arg0->unk400 = 0x13F1;
            return;
        }
        func_8019F208();
        func_801518B0(arg1, 0x13F3U, arg0);
        arg0->unk400 = 0x13F3;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80B72190(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp32;
    SkelAnime *sp2C;
    Actor *temp_v1;
    PosRot *temp_a0_2;
    SkelAnime *temp_a0;
    f32 *temp_a1;
    s16 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_a0 = arg0 + 0x1E4;
    if ((func_80B714D8 != arg0->unk228) && ((sp2C = temp_a0, (func_801378B8(temp_a0, 8.0f) != 0)) || (func_801378B8(temp_a0, 15.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x3830U);
    }
    temp_v1 = arg0->parent;
    temp_v0 = arg0->unk228;
    if (temp_v1 == 0) {
        temp_t8 = arg0->unk3F6;
        arg0->unk3F6 = 1;
        arg0->unk3F4 = temp_t8;
        if ((func_80B713A4 == temp_v0) || (func_80B710E4 == temp_v0) || (func_80B7114C == temp_v0) || (func_80B7123C == temp_v0) || (func_80B717E0 == temp_v0)) {
            arg0->unk3F6 = 0;
        }
        if (arg0->unk3F4 == 0) {
            return;
        }
        goto block_20;
    }
    if ((func_80B713A4 == temp_v0) || (func_80B710E4 == temp_v0) || (func_80B7114C == temp_v0) || (func_80B7123C == temp_v0) || (func_80B717E0 == temp_v0)) {
        temp_v1->unk3F6 = 0;
    }
    if (temp_v1->unk3F4 != 0) {
block_20:
        temp_v0_2 = arg0->unk228;
        if ((func_80B71EA8 != temp_v0_2) && (func_80B71954 != temp_v0_2) && (func_80B71A58 != temp_v0_2) && (func_80B71BB8 != temp_v0_2)) {
            temp_a0_2 = &arg0->world;
            temp_a1 = &sp38;
            sp38 = (f32) *(arg0->unk230 + (arg0->unk2E0 * 6));
            sp3C = (f32) (arg0->unk230 + (arg0->unk2E0 * 6))->unk2;
            sp2C = (SkelAnime *) temp_a0_2;
            sp40 = (f32) (arg0->unk230 + (arg0->unk2E0 * 6))->unk4;
            sp32 = Math_Vec3f_Yaw((Vec3f *) temp_a0_2, (Vec3f *) temp_a1);
            if (Math_Vec3f_DistXZ((Vec3f *) temp_a0_2, (Vec3f *) &sp38) > 100.0f) {
                Math_SmoothStepToS(&arg0->world.rot.y, sp32, 0xA, 0x3000, (s16) 0x100);
            } else {
                temp_v0_3 = arg0->unk2E0;
                if (temp_v0_3 < (arg0->unk2E8 - 1)) {
                    arg0->unk2E0 = (s32) (temp_v0_3 + 1);
                } else {
                    arg0->unk2E0 = 0;
                }
            }
            Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        }
    }
}

void func_80B723F8(EnRailSkb *arg0) {
    s32 temp_t7;
    s32 temp_t9;

    temp_t7 = arg0->actor.flags & ~5;
    temp_t9 = temp_t7 | 9;
    arg0->actor.flags = temp_t7;
    arg0->actor.flags = temp_t9;
    arg0->actor.flags = temp_t9 | 0x100000;
    arg0->actor.hintId = 0xFF;
    arg0->actor.textId = 0;
}

void func_80B72430(EnRailSkb *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    ? sp50;
    f32 sp4C;
    f32 sp44;
    s16 sp42;
    s16 temp_v0;
    s32 temp_a0;

    sp5C.unk0 = arg0->actor.world.pos.x;
    sp5C.unk4 = (s32) arg0->actor.world.pos.y;
    sp5C.unk8 = (s32) arg0->actor.world.pos.z;
    sp50.unk0 = (s32) D_80B73498.unk0;
    sp50.unk4 = (s32) D_80B73498.unk4;
    sp50.unk8 = (s32) D_80B73498.unk8;
    sp44.unk0 = D_80B734A4.unk0;
    sp44.unk4 = (s32) D_80B734A4.unk4;
    sp44.unk8 = (s32) D_80B734A4.unk8;
    if ((arg1->gameplayFrames & arg2) == 0) {
        temp_v0 = Rand_Next();
        temp_a0 = temp_v0 << 0x10;
        sp42 = temp_v0;
        sp5C += 15.0f * Math_SinS((s16) (temp_a0 >> 0x10));
        sp60 = arg0->actor.floorHeight;
        sp64 += 15.0f * Math_CosS(sp42);
        sp44 = Rand_Centered();
        sp4C = Rand_Centered();
        sp54 += Rand_Centered() * 4.0f;
        EffectSsHahen_Spawn(arg1, (Vec3f *) &sp5C, (Vec3f *) &sp50, (Vec3f *) &sp44, (s16) 0, (s16) ((Rand_Next() & 7) + 0xA), (s16) -1, (s16) 0xA, NULL);
        func_800BBFB0(arg1, (Vec3f *) &sp5C, 10.0f, 1, (s16) 0x96, (s16) 0, (u8) 1);
    }
}

void func_80B725C0(EnRailSkb *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk3F0;
    if ((s32) temp_v0 > 0) {
        arg0->unk3F0 = temp_v0 - 1;
    }
    temp_v0_2 = arg0->actionFunc;
    if (func_80B7114C != temp_v0_2) {
        if ((s32) arg0->unk3F0 < 0x14) {
            if (func_80B7123C == temp_v0_2) {
                Math_SmoothStepToF(arg0 + 0x2F0, 0.0f, 0.5f, 0.03f, 0.0f);
            } else {
                Math_SmoothStepToF(arg0 + 0x2F0, 0.0f, 0.5f, 0.01f, 0.0f);
            }
            arg0->unk2EC = (f32) arg0->unk3F0 * 0.05f;
            return;
        }
        Math_SmoothStepToF(arg0 + 0x2F0, 0.5f, 0.1f, 0.02f, 0.0f);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80B726B4(EnRailSkb *arg0, GlobalContext *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    Vec3f *temp_s0;
    Vec3f *temp_s2;
    f32 *temp_s5;
    s16 temp_s1;
    s16 temp_v0;
    s32 phi_s4;
    Vec3f *phi_s0;

    temp_s2 = arg0 + 0x24;
    if ((arg0->unk402 & 2) != 0) {
        phi_s4 = 0xD;
    } else {
        phi_s4 = 0xE;
    }
    Audio_PlaySoundAtPosition(arg1, temp_s2, 0x1E, 0x28CBU);
    phi_s0 = arg0 + 0x234;
    if (phi_s4 > 0) {
        temp_s5 = &sp84;
        do {
            temp_v0 = Math_Vec3f_Yaw(temp_s2, phi_s0);
            temp_s1 = temp_v0;
            sp84 = Math_SinS(temp_v0) * 3.0f;
            sp8C = Math_CosS(temp_s1) * 3.0f;
            sp88 = (Rand_ZeroOne() * 4.0f) + 4.0f;
            EffectSsEnIce_Spawn(arg1, phi_s0, 0.6f, (Vec3f *) temp_s5, &D_80B734B8, &D_80B734B0, &D_80B734B4, 0x1E);
            temp_s0 = phi_s0 + 0xC;
            phi_s0 = temp_s0;
        } while (temp_s0 != ((phi_s4 * 0xC) + arg0 + 0x234));
    }
}

void func_80B72830(EnRailSkb *arg0, s16 arg1) {
    void *temp_v0;

    temp_v0 = arg0->actor.parent;
    if (temp_v0 == 0) {
        arg0->unk3F8 = arg1;
        return;
    }
    temp_v0->unk3F8 = arg1;
}

s16 func_80B7285C(EnRailSkb *arg0) {
    void *temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->actor.parent;
    if (temp_v0 == 0) {
        phi_v1 = arg0->unk3F8;
    } else {
        phi_v1 = temp_v0->unk3F8;
    }
    return phi_v1;
}

void func_80B72880(EnRailSkb *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u32 temp_t0;
    u32 temp_t2;
    u32 temp_t7;
    u32 temp_t9;

    temp_v0 = arg0->actionFunc;
    if ((func_80B70FF8 == temp_v0) || (func_80B716A8 == temp_v0)) {
        if (func_80B716A8 != temp_v0) {
            arg0 = arg0;
            if (Player_GetMask(arg1) == 0xF) {
                temp_t0 = arg0->actor.flags & ~5;
                temp_t2 = temp_t0 | 9;
                arg0->actor.flags = temp_t0;
                arg0->actor.flags = temp_t2;
                arg0->actor.flags = temp_t2 | 0x100000;
                arg0->actor.hintId = 0xFF;
                arg0->actor.textId = 0;
                func_80B71650(arg0);
                return;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        arg0 = arg0;
        if (Player_GetMask(arg1) != 0xF) {
            temp_t7 = arg0->actor.flags & ~9;
            temp_t9 = temp_t7 & 0xFFEFFFFF;
            arg0->actor.flags = temp_t7;
            arg0->actor.flags = temp_t9;
            arg0->actor.flags = temp_t9 | 5;
            arg0->actor.hintId = 0x55;
            arg0->actor.textId = 0;
            func_80B70FA0(arg0);
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80B72970(EnRailSkb *arg0, GlobalContext *arg1) {
    void *sp3C;
    CollisionCheckContext *sp30;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    s8 temp_v0_3;
    u8 temp_t1;
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    void (*temp_v1)(EnRailSkb *, GlobalContext *);
    void (*phi_v1)(EnRailSkb *, GlobalContext *);

    sp3C = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0->actionFunc;
    if ((func_80B714D8 != temp_v1) && (func_80B7123C != temp_v1) && (func_80B715AC != temp_v1) && (func_80B71954 != temp_v1) && (func_80B71A58 != temp_v1) && (func_80B71BB8 != temp_v1) && (arg0->unk3FE != 1)) {
        temp_v0 = arg0->unk144.base.acFlags;
        if ((temp_v0 & 2) != 0) {
            arg0->unk144.base.acFlags = temp_v0 & 0xFFFD;
            if (func_80B7114C == temp_v1) {
                temp_t8 = arg0->actor.colChkInfo.damageEffect;
                switch (temp_t8) {                  /* switch 1 */
                default:                            /* switch 1 */
                    if ((s32) arg0->unk3F0 >= 2) {
                        func_80B726B4(arg0, arg1);
                    }
                    arg0->unk3F0 = 0;
                    goto block_14;
                }
            } else {
block_14:
                if ((Actor_ApplyDamage((Actor *) arg0) == 0) && (temp_v0_2 = arg0->actor.colChkInfo.damageEffect, (temp_v0_2 != 3)) && (temp_v0_2 != 4)) {
                    Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->actor.world, 0x28, 0x3833U);
                    func_80B71488(arg0);
                    return;
                }
                temp_t1 = arg0->actor.colChkInfo.damageEffect;
                switch (temp_t1) {                  /* switch 2 */
                case 11:                            /* switch 2 */
                    arg0->unk3F0 = 0x28;
                    arg0->unk403 = 0x1E;
                    arg0->unk2EC = 1.0f;
                    arg0->unk2F0 = 0.0f;
                    func_800BCB70((Actor *) arg0, 0, 0x78, 0, (s16) 0x28);
                    func_80B710AC((Actor *) arg0);
                    break;
                case 1:                             /* switch 2 */
                    func_800BCB70((Actor *) arg0, 0, 0x78, 0, (s16) 0x28);
                    func_80B710AC((Actor *) arg0);
                    break;
                case 2:                             /* switch 2 */
                    arg0->unk3F0 = 0x50;
                    arg0->unk403 = 0;
                    arg0->unk2EC = 1.0f;
                    arg0->unk2F0 = 0.0f;
                    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                    Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                    func_800BDC5C(&arg0->unk1E4, (ActorAnimationEntry []) D_80B732D0, 3);
                    arg0->unk402 |= 1;
                    func_80B712FC(arg0);
                    break;
                case 3:                             /* switch 2 */
                    if (arg0->actor.colChkInfo.health != 0) {
                        Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                        arg0->unk3F0 = 0x50;
                    } else {
                        arg0->unk3F0 = 3;
                    }
                    arg0->unk403 = 0xB;
                    arg0->unk2EC = 1.0f;
                    arg0->unk2F0 = 0.5f;
                    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                    func_80B71114((Actor *) arg0);
                    break;
                case 4:                             /* switch 2 */
                    arg0->unk3F0 = 0x28;
                    arg0->unk403 = 0x14;
                    arg0->unk2EC = 1.0f;
                    arg0->unk2F0 = 0.5f;
                    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                    Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                    func_800BDC5C(&arg0->unk1E4, (ActorAnimationEntry []) D_80B732D0, 3);
                    func_80B71228(arg0);
                    break;
                case 12:                            /* switch 2 */
                case 14:                            /* switch 2 */
                    arg0->unk402 |= 1;
                    /* fallthrough */
                case 15:                            /* switch 2 */
                    temp_v0_3 = sp3C->unkADA;
                    if ((temp_v0_3 == 4) || (temp_v0_3 == 0xB) || (temp_v0_3 == 0x16) || (temp_v0_3 == 0x17)) {
                        arg0->unk402 |= 1;
                    }
                    /* fallthrough */
                case 13:                            /* switch 2 */
                    func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                    Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                    func_800BDC5C(&arg0->unk1E4, (ActorAnimationEntry []) D_80B732D0, 3);
                    func_80B712FC(arg0);
                    break;
                }
                goto block_36;
            }
        } else {
block_36:
            phi_v1 = arg0->actionFunc;
            if (func_80B713A4 == arg0->actionFunc) {
                CollisionCheck_SetAT(arg1, &arg1->colChkCtx, (Collider *) &arg0->unk144);
                phi_v1 = arg0->actionFunc;
            }
            temp_a2 = &arg0->unk144;
            temp_a1 = &arg1->colChkCtx;
            if (func_80B71314 != phi_v1) {
                sp30 = temp_a1;
                sp2C = temp_a2;
                CollisionCheck_SetAC(arg1, temp_a1, (Collider *) temp_a2);
            }
            CollisionCheck_SetOC(arg1, &arg1->colChkCtx, (Collider *) &arg0->unk144);
            /* Duplicate return node #41. Try simplifying control flow for better match */
        }
    } else {
    case 1:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 12:                                        /* switch 1 */
    case 13:                                        /* switch 1 */
    }
}

void EnRailSkb_Update(EnRailSkb *this, GlobalContext *globalCtx) {
    void (*temp_v0)(EnRailSkb *, GlobalContext *);
    EnRailSkb *this = (EnRailSkb *) thisx;

    this->actionFunc(this, globalCtx);
    func_80B72190((Actor *) this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 15.0f, 30.0f, 60.0f, 5U);
    func_80B72970(this, globalCtx);
    temp_v0 = this->actionFunc;
    if ((func_80B710E4 != temp_v0) && (func_80B7114C != temp_v0) && (func_80B7123C != temp_v0)) {
        SkelAnime_FrameUpdateMatrix(&this->unk1E4);
    }
    func_80B72880(this, globalCtx);
    func_80B725C0(this, globalCtx);
}

s32 func_80B72E88(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    void *sp3C;
    ? sp24;
    s32 temp_f10;
    s32 temp_v0;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;

    if (arg1 == 0xB) {
        temp_a1 = arg0->state.gfxCtx;
        arg1 = arg1;
        sp3C = temp_a1;
        temp_v1 = temp_a1->polyOpa.p;
        temp_f10 = (s32) (fabsf(Math_SinS((s16) (arg0->state.frames * 0x1770)) * 95.0f) + 160.0f);
        temp_a1->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w1 = 0;
        temp_v1->words.w0 = 0xE7000000;
        temp_v1_2 = temp_a1->polyOpa.p;
        temp_v0 = (s16) temp_f10 & 0xFF;
        temp_a1->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (temp_v0 << 0x18) | (temp_v0 << 0x10) | (temp_v0 << 8) | 0xFF;
        temp_v1_2->words.w0 = 0xFB000000;
    } else if (arg1 == 0xA) {
        sp24.unk0 = (s32) D_80B734C4.unk0;
        sp24.unk4 = (s32) D_80B734C4.unk4;
        sp24.unk8 = (s32) D_80B734C4.unk8;
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg5 + 0x3C);
    } else if ((arg1 == 0xC) && (arg5->unk3FA == 1)) {
        arg1 = arg1;
        SysMatrix_InsertZRotation_s(0x71C, 1);
    }
    if (((arg1 == 0xB) || (arg1 == 0xC)) && ((arg5->unk402 & 2) != 0)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80B7302C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    u8 temp_v0;
    u8 temp_v0_2;

    if ((arg4->unk402 & 0x80) == 0) {
        arg2 = arg2;
        Collider_UpdateSpheres(arg1, arg4 + 0x144);
        if ((arg1 == 0xB) && (temp_v0 = arg4->unk402, ((temp_v0 & 1) != 0)) && ((temp_v0 & 2) == 0)) {
            func_800BBCEC(arg4, arg0, 1, arg2);
            arg4->unk402 = (u8) (arg4->unk402 | 2);
        } else {
            temp_v0_2 = arg4->unk402;
            if (((temp_v0_2 & 0x40) != 0) && ((arg1 != 0xB) || ((temp_v0_2 & 1) == 0)) && (arg1 != 0xC)) {
                func_800BBCEC(arg4, arg0, 1, arg2);
            }
        }
        if (arg4->unk3F0 != 0) {
            if ((arg1 == 2) || (arg1 == 4) || (arg1 == 5) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xD) || (arg1 == 0xE) || (arg1 == 0xF) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x12)) {
                SysMatrix_GetStateTranslation(arg4 + (arg4->unk2DC * 0xC) + 0x234);
                arg4->unk2DC = (s32) (arg4->unk2DC + 1);
                return;
            }
            if ((arg1 == 0xB) && ((arg4->unk402 & 2) == 0)) {
                SysMatrix_MultiplyVector3fByState(&D_80B734D0, arg4 + (arg4->unk2DC * 0xC) + 0x234);
                arg4->unk2DC = (s32) (arg4->unk2DC + 1);
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
    }
}

void EnRailSkb_Draw(EnRailSkb *this, GlobalContext *globalCtx) {
    u8 temp_v0;
    EnRailSkb *this = (EnRailSkb *) thisx;

    this->unk2DC = 0;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk1E4.skeleton, this->unk1E4.limbDrawTbl, func_80B72E88, func_80B7302C, (Actor *) this);
    if ((s32) this->unk3F0 > 0) {
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk234, this->unk2DE, this->unk2F0, 0.5f, this->unk2EC, (u8) (s32) this->unk403);
    }
    temp_v0 = this->unk402;
    if (((temp_v0 & 0x40) != 0) && ((temp_v0 & 0x80) == 0)) {
        this->unk402 = temp_v0 | 0x80;
    }
}
